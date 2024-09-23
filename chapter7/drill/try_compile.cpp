#include <iostream>
using namespace std;

int increment(int x) {
    return x+1;
}

// int f(int);

int main() {

    int a; // definition
    // int a; // double defintion

    // int i = 7; // defiintion
    // extern int i; // declaration
    // extern int i; // another declaration, allowed
    int i = 7;

    // cout << f(i) << endl;

    cout << increment(i) << '\n';
    cout << i << '\n';
    return 0;
}
