#include <iostream>
#include <format>

using namespace std;

int main() {
    int x = 1234;
    cout << x << " - " << hex << x << " - " << oct << x << " - " << dec << x << '\n';

    constexpr double d = 1234.56789;
    cout << "format: " << d << " - " << hexfloat << d << " - " << scientific << d << '\n';

    cout << format("{} - {:x} - {:o} - {:d}\n", x, x, x, x);

    cout << format("- {:12} - {:12.8f} - {:30.20e} - \n", d, d, d);
    return 0;
}
