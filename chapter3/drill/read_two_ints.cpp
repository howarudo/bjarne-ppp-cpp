#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    double num1, num2;
    while (cin >> num1 >> num2) {
        if (num1 == num2) {
            cout << "The numbers are equal " << num1 << "\n";
        } else {
            if (num1 > num2) {
                double temp = num2;
                num2 = num1;
                num1 = temp;
            }
            cout << "Smaller value is " << num1 << "\tLarger value is " << num2 << "\n";
            if (num2-num1 < 0.01) {
                cout << "The numbers are close\n";
            }
        }
    }
    return 0;
}
