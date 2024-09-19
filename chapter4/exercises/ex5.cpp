#include <iostream>
#include <vector>

using namespace std;


int main() {
    int n;
    cout << "Please enter the number of values you want to sum: ";
    cin >> n;

    vector<int> numbers;
    int input;

    cout << "Please enter some integers (press '|' to stop): " << std::endl;

    // Reading input until the user enters '|'
    while (cin >> input) {
        numbers.push_back(input);
    }

    int sum = 0;
    cout << "The sum of the first " << n << " numbers ( ";
    for (int i = 0; i < n; ++i) {
        sum += numbers[i];
        cout << numbers[i] << " ";
    }
    cout << ") is " << sum << endl;

    return 0;
}
