#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> primes;
    for (int i = 2; i < 100; ++i) {
        bool is_prime = true;
        for (int j = 2; j < i; ++j) {
            if (i % j == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) primes.push_back(i);
    }

    for (int prime: primes) {
        cout << prime << " is a prime\n";
    }
    return 0;
}
