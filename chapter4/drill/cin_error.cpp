#include <iostream>
using namespace std;

void error(string s);

int main()
{
    double d = 0;
    try {
        cin >> d;
        if (!cin) {
            error("Couldn't read a string in this\n");
        }
    }
    catch (runtime_error& e) {
        cerr << "runtime error wow: " << e.what() << '\n';
        return 1;
    }
}

void error(string s)
{
    throw runtime_error(s);
}
