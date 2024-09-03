#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int number;
    cout << "Enter a number\n";
    cin >> number;
    string odd_even;
    if (number % 2 == 0) {
        odd_even = "EVEN";
    } else {
        odd_even = "ODD";
    }
    cout << number << " is an " << odd_even << " number\n";
    return 0;
}
