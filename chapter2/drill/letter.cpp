#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string first_name;
    string friend_name;
    // first_name
    cout << "Enter the name of person you want to write to\n";
    cin >> first_name;
    cout << "Enter friend name\n";
    cin >> friend_name;
    int age = -1;
    cout << "Input age\n";
    cin >> age;
    if (age < 0 | age > 100) {
        cout << "\tWow you're old\n";
    }

    cout << "Dear " << first_name << ",\n" << "\tHow are you? I am fine.\n";
    cout << "\tHave you seen " << friend_name << " lately?\n";
    cout << "\tI hear you just had your " << age << " year old bday!\n";
    cout << "Yours sincerely,\n\nHoward Tang\n";
    return 0;
}
