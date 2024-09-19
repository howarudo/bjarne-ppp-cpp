#include <iostream>
#include <cassert>

using namespace std;

void error(string s) {
    throw runtime_error(s);
}

double ctok(double c) {
    assert(c > -273.15);
    double k = c + 273.25;
    return k;
}

int main() {
    double c = 0;
    cin >> c;
    if (c < -273.15) {
        error("Value is too low\n");
        return 1;
    }


    double k = ctok(c);
    cout << k << '\n';
    return 0;
}
