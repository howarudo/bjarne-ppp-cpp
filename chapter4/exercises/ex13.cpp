#include <iostream>
#include <random>
#include <set>
using namespace std;

bool same_elements(vector<int>& target, vector<int>& guess);

int main() {
    default_random_engine engine;
    uniform_int_distribution<int> dist(1, 9);


    vector<int> target;
    set<int> target_set;
    while (target.size() < 4) {
        int rand_num = dist(engine);
        if (target_set.find(rand_num) == target_set.end()) {
            target.push_back(rand_num);
            target_set.insert(rand_num);
        }
    }

    vector<int> guess (4, -1);
    while (!same_elements(target, guess)) {
        cout << "Type 4 numbers!\n";
        int num;
        int bull = 0;
        int cow = 0;
        for (int i = 0; i < target.size(); ++i) {
            cin >> num;
            guess[i] = num;
            if (num == target[i]) ++bull;
            else if (target_set.find(num) != target_set.end()) ++cow;
        }
        cout << "Bull: " << bull << ", Cow: " << cow << "\n";
    }
    cout << "You guessed the numbers!\n";
    return 0;
}

bool same_elements(vector<int>& target, vector<int>& guess) {
    for (int i = 0; i < target.size(); ++i) {
        if (target[i] != guess[i])
            return false;
    }
    return true;

}
