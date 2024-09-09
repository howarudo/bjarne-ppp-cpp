#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int _min, _max;
    int num;
    while (cin >> num) {
        _min = min(_min, num);
        _max = max(_max, num);
        cout << "Min is " << _min << "\tMax is " << _max << "\n";
    }
    return 0;
}
