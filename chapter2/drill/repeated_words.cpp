#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string current;
    string prev;
    while (cin >> current) {
        if (prev == current) {
            cout << "repeated word: " << current << "\n";
        }
        prev = current;
    }
    return 0;
}
