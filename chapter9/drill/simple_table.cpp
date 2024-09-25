#include <iostream>
#include <string>

using namespace std;

struct Contact {
    string name;
    string phone_number;
    int birth_year;
    string month;
};

// Overloading the >> operator to handle input in the form of (Name,0801234,2002,mar)
istream& operator >> (istream& is, Contact& c) {
    char ch;

    // Read starting '('
    if (is >> ch && ch != '(') {
        is.unget();  // Put back the character if it's not '('
        is.clear(ios::failbit);  // Set fail state
        return is;
    }

    // Read contact details in the format (Name,0801234,2002,mar)
    string name;
    while (is >> ch && ch != ',') name += ch;

    string phone_number;
    while (is >> ch && ch != ',') phone_number += ch;

    string b_year_str;
    while (is >> ch && ch != ',') b_year_str += ch;

    string month;
    while (is >> ch && ch != ')') month += ch;

    c.name = name, c.phone_number = phone_number, c.birth_year = stoi(b_year_str), c.month = month;


    return is;  // Return the stream
}

int main() {
    Contact c;
    cout << "Enter contact information in the format (Name,Phone,Year,Month):\n";

    if (cin >> c) {
        cout << "Contact details:\n";
        cout << "Name: " << c.name << '\n';
        cout << "Phone Number: " << c.phone_number << '\n';
        cout << "Birth Year: " << c.birth_year << '\n';
        cout << "Month: " << c.month << '\n';
    } else {
        cout << "Invalid input format.\n";
    }

    return 0;
}
