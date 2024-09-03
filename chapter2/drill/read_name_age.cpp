#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter name and age\n";
    string name;
    double age;
    cin >> name >> age;
    cout << "Hello, " << name << "(age" << age * 12 << ")\n";
    return 0;
}
