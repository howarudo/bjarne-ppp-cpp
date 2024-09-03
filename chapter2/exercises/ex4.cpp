#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    double val1, val2;
    cout << "Input 2 integers!\n";
    cin >> val1 >> val2;
    if (val1 < val2) {
        double tmp = val1;
        val1 = val2;
        val2 = tmp;
    }
    cout << val1/val2 << " " << val1*val2 << " " << val1+val2 << " " << val1-val2 << "\n";
    return 0;
}
