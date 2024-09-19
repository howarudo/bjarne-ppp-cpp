#include <iostream>
#include <vector>
using namespace std;

int main() {
    try {
        string s = "ape";
        bool c = "aa" < s;
        if (c) cout << "Suv!\n"; else cout << "Fail\n";

        int x = 2; double d = 5/(x-2);
        cout << d << endl;
        return 0;
    } catch (exception& e) {
        cerr << "Yo error: " << e.what() << '\n';
        return 1;
    } catch (...) {
        cerr << "Oops unknown exception\n";
        return 2;
    }
}
