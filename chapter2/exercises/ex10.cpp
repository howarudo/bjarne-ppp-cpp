#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string ope;
    float num1, num2;
    cin >> ope >> num1 >> num2;
    float ans = -1;
    if (ope == "+") {
        ans = num1 + num2;
    } else if (ope == "-") {
        ans = num1 - num2;
    } else  if (ope == "/") {
        ans = num1 / num2;
    } else {
        cout << "I don't know that\n";
    }
    cout << ans << "\n";
    return 0;
}
