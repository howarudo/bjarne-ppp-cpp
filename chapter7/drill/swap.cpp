#include <iostream>
#include <vector>

void init_vector(std::vector<int>& v) {
    for (int i = 0; i < v.size(); ++i) {
        v[i] = i;
    }
    return;
}

void swap(std::vector<int>& v) {
    int temp = v[0];
    v[0] = v[1];
    v[1] = temp;
    return;
}

void print_vector_2(const std::vector<int>& v) {
    // pass by const ref
    std::cout << "{";
    for (const int num: v) {
        std::cout << num << ',';
    }
    std::cout << "}\n";
    return;
}

int main() {
    std::vector<int> v(4);
    init_vector(v);
    print_vector_2(v);

    swap(v);

    print_vector_2(v);

    return 0;
}
