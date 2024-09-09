#include <iostream>
#include <vector>
using namespace std;

int main()
{
    double num;
    string unit;
    double _max = 0, _min = 1e10;
    vector<double> nums;
    while (cin >> num >> unit) {
        if (unit == "m") {
        } else if (unit == "cm") {
            num /= 100;
        } else if (unit == "in") {
            num *= 2.54 / 100;
        } else if (unit == "ft") {
            num *= 12 * 2.54 / 100;
        } else {
            cout << "Unkown unit\n";
            return 1;
        }
        cout << "Num is " << num << " m\n";
        nums.push_back(num);
        _max = max(_max, num);
        _min = min(_min, num);
    }
    sort(nums.begin(), nums.end());
    for (double x: nums) {
        cout << x << "\n";
    }
    cout << "Min is " << _min << "\tMax is " << _max << "\n";
    return 0;
}
