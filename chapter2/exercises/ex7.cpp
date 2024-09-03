#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    string name1, name2, name3;
    cin >> name1 >> name2 >> name3;
    if (name1 > name2) {
        string tmp = name2;
        name2 = name1;
        name1 = tmp;
    }
    if (name1 > name3) {
        string tmp = name3;
        name3 = name1;
        name1 = tmp;
    }
    if (name2 > name3) {
        string tmp = name3;
        name3 = name2;
        name2 = tmp;
    }
    cout << name1 << ", " << name2 << ", " << name3 << "\n";
    return 0;
}
