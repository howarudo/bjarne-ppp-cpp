#include <iostream>
using namespace std;

int main()
{
    int l = 0, r = 101;
    while (l <= r) {
        int mid = (l+r)/2;
        cout << "Is the number you are thinking bigger or smaller than " << mid << "\n";
        cout << "0 for smaller, 1 for bigger\n";
        bool flag = 0;
        cin >> flag;
        if (flag) {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    return 0;
}
