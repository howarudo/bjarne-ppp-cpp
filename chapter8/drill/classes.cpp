#include <iostream>

class X {
public:
// data often kept secret
    int v;
    int mf(int u) {
        // used by all
        int old = v;
        swap(v, u);
        return old;
    }
private:
// used by members of this class only
    void swap(int& a, int& b) {
        // implementation details
        int temp = a;
        a = b;
        b = temp;
        return;
    }
};

struct X_struct {
    // a class where members are all public
    int v;
};

int main() {
    X x;
    x.v = 9;
    int old = x.mf(10);
    std::cout << old << ',' << x.v << '\n';
    return 0;
}
