#include <iostream>
using namespace std;

int main()
{
    constexpr int target = 1000000000;
    int cur_sum = 0, res = 0, num = 1;
    while (true) {
        cout << num << " given\n";
        cout << "Cur grains " << res << "\n";
        cur_sum += num;
        ++res;
        num *= 2;
    }
    cout << "It took " << res << " iterations\n";
    return 0;
}
