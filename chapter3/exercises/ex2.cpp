#include <iostream>
using namespace std;

int main()
{
    string words;
    cin >> words;
    for (char letter: words) {
        cout << letter << " " << (int) letter << "\n";
    }
    return 0;
}
