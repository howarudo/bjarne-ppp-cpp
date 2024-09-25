#include <iostream>
#include <format>

using namespace std;

int main() {
    int birth_year = 2002;
    cout << format("dec:\t{}\nx:\t{:x}\no:\t{:o}\nd:\t{:d}\n", birth_year, birth_year, birth_year, birth_year);
    return 0;
}
