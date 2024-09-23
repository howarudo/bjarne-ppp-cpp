#include <iostream>
#include <vector>

void print_vector(std::vector<int> v) {
    // pass by value
    for (const int num: v) {
        std::cout << num << '\n';
    }
    return;
}

void print_vector_2(const std::vector<int>& v) {
    // pass by const ref
    for (const int num: v) {
        std::cout << num << '\n';
    }
    return;
}


int main() {
    std::vector<int> v(5, 10);
    v[0] = 1;
    v[2] = 200;
    print_vector(v);
    v[0] = 100000;
    print_vector(v);
    print_vector_2(v);
    return 0;
}
