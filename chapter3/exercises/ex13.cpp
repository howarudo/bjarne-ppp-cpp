#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector <bool> is_prime(n);
    is_prime[0] = false;
    for (int i = 0; i < is_prime.size(); ++i) is_prime[i] = true;

    for (int i = 2; i < is_prime.size(); ++i) {
        if (is_prime[i]) {
            for (int j = i*i; j < is_prime.size(); j+=i) {
                is_prime[j] = false;
            }
        }
    }

    for (int i = 2; i < is_prime.size(); ++i) {
        if (is_prime[i]) cout << i << " is prime\n";
    }
    return 0;
}
