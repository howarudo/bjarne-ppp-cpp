#include <iostream>
#include <vector>
#include <limits>
using namespace std;

int main() {
    vector<long> fibo = {1, 1};
    int N = 100;
    while (N > 0) {
        long cur_size = fibo.size();
        long num = fibo[cur_size-1] + fibo[cur_size-2];
        if (num > numeric_limits<int>::max()) {
            cout << "Exceeded int range\n";
        }
        fibo.push_back(num);
        cout << num << endl;
        --N;
    }
    return 0;
}
