#include <iostream>
#include <random>
using namespace std;

string random_letters(int n, int m, default_random_engine& engine);
int random_int(int n, int m, default_random_engine& engine);

int main() {
    default_random_engine engine;
    uniform_int_distribution<int> dist(1, 6);
    for (int i = 0; i < 10; ++i) {
        cout << dist(engine) <<' ';
    }
    cout << '\n';

    string random_string = random_letters(10, 20, engine);
    cout << random_string << endl;

    return 0;

}

string random_letters(int n, int m, default_random_engine& engine) {
    string s(random_int(n, m, engine), 'x');
    for (char& ch: s) {
        int num = random_int('a', 'z', engine);
        ch = (char) num;
    }
    return s;
}

int random_int(int n, int m, default_random_engine& engine) {
    uniform_int_distribution<int> dist(n, m);
    return dist(engine);
}
