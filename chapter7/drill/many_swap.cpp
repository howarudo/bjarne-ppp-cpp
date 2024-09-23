#include <iostream>

void swap_v(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

void swap_r(int& a, int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

void swap_c(const int& a, const int& b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
    return;
}

int main() {
    int x = 7, y = 9;
    swap_r(x, y);
    // swap_r(7, 9);
    std::cout << x << ' ' << y << '\n';

    const int cx = 7, cy = 9;
    // swap_r(cx, cy);
    // swap_r(7.7, 9.9);
    std::cout << cx << ' ' << cy << '\n';

    double dx = 7.7, dy = 7.9;
    // swap_r(dx, dy);
    // swap_r(7.7, 7.9);
    std::cout << dx << ' ' << dy << '\n';
    return 0;
}
