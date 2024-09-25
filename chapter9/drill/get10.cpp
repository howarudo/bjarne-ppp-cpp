#include <iostream>
using namespace std;

void skip_to_int() {
    if (cin.fail()) {
        cin.clear(); // set state back to good
        for (char ch; cin >> ch;) {
            if (isdigit(ch) || ch == '-') {
                cin.unget();
                return;
            }
        }
    }
    cout << "No input\n";
}

int get10() {
    cout << "Enter integer from 1 - 10 (inclusive):\n";
    int n = 0;
    while (true) {
        cin >> n;
        if (cin) {
            if (1 <=n && n <= 10) {
                return n;
            }
            cout << "Bad integer!\n";
        } else {
            cout << "try again\n";
            skip_to_int();
        }
    }
}


int main() {
    int num = get10();
    cout << "Got nubmer " << num << " .\n";
    return 0;
}
