#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> nums;
    int num;
    while (cin >> num) {
        nums.push_back(num);
    }
    sort(nums.begin(), nums.end());
    if (nums.size() % 2 == 1) {
        cout << "Median is " <<  nums[nums.size()/2] << "\n";
    } else {
        cout << "Any number between " << nums[nums.size()/2-1] << " and " << nums[nums.size()/2] << "\n";
    }
    return 0;
}
