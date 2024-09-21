#include <iostream>
#include <vector>
using namespace std;

double statement();
double expression();
double term();
double primary();
double declaration();

// error() simply disguises throws:
void error(const string& s)
{
	throw runtime_error(s);
};


void keep_window_open()
{
	cin.clear();
	cout << "Please enter a character to exit\n";
	char ch;
	cin >> ch;
	return;
}

class Token {
public:
    char kind;
    double value;
    Token(char ch)
        :kind(ch), value(0) { }
    Token(char ch, double val)
        :kind(ch), value(val) { }
};

class Token_stream {
public:
    Token get();
    void putback(Token t);
    void ignore(char c);
private:
    bool full = false;
    Token buffer = 0;
};

void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;       // copy t to buffer
    full = true;      // buffer is now full
}

void Token_stream::ignore(char c)
{
    if (full && c==buffer.kind) {
        full = false;
        return;
    }
    full = false;
    char ch = 0;
    while (cin >> ch)
        if (ch == c)
            return;
}

Token Token_stream::get()
{
    if (full) {       // do we already have a Token ready?
        // remove token from buffer
        full=false;
        return buffer;
    }

    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    switch (ch) {
    case ';':    // for "print"
    case 'q':    // for "quit"
    case '(': case ')': case '+': case '-': case '*': case '/': case '%':
        return Token(ch);        // let each character represent itself
    case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        {
            cin.putback(ch);         // put digit back into the input stream
            double val;
            cin >> val;              // read a floating-point number
            return Token('8',val);   // let '8' represent "a number"
        }
    default:
        error("Bad token");
    }

}

class Variable {
public:
    string name;
    double value;
};

Token_stream ts;
vector<Variable> var_table;

double get_value(string s)
{
    for (const Variable& v: var_table)
        if (v.name == s)
            return v.value;
    error("No key found");
}

void set_value(string s, double d)
{
    for (Variable& v: var_table)
        if (v.name == s) {
            v.value = d;
            return;
        }
    error("No variable name")''
}

double statement()
{
    Token t = ts.get();
    switch (t.kind) {
    case 'L':
        return declaration();
    default:
        ts.pushback(t);
        return expression();
    }
}

double primary()
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':
        {
            double d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case '8':
        return t.value;
    case '-':
        return -primary();
    case '+':
        return primary();
    default:
        error("primary expected");
    }
}

double expression()
{
    double left = term();
    Token t = ts.get();
    while (true) {
        switch(t.kind) {
        case '+':
            left += term();
            t = ts.get();
            break;
        case '-':
            left -= term();
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;
        }
    }
}

double term()
{
    double left = primary();
    Token t = ts.get();
    while (true) {
        switch(t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
        {
            double d = primary();
            if (d == 0) error("divide by zero");
            left /= d;
            t = ts.get();
            break;
        }
        case '%':
        {
            double d = primary();
            if (d == 0) error("%: divide by zero");
            cout << left << d << endl;
            left = fmod(left, d);
            t = ts.get();
            break;
        }
        default:
            ts.putback(t);
            return left;
        }
    }
}

void calculate()
{
    while (cin) {
        cout << "> ";
        Token t = ts.get();
        while (t.kind==';')
            t = ts.get();
        if (t.kind == 'q')
            return; // 'q' for quit
        ts.putback(t);
        cout << "= " << statement() << "\n";
    }
}

void clean_up_mess()
{
    ts.ignore(';');
}

int main() {
    try {
        calculate();
        return 0;
    }
    catch (exception& e) {
        cerr << e.what() << endl;
        clean_up_mess();
    }
    catch (...) {
        cerr << "exception \n";
        return 2;
    }
}
