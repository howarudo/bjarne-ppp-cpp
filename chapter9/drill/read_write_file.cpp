#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

struct Reading {
    int hour;
    double temperature;
};

int main() {
    cout << "Enter input file name\n";
    string iname;
    cin >> iname;
    if (!cin) {
        if (cin.bad()) cout << "cin is bad\n";
        if (cin.eof()) cout << "cin eof\n";
        if (cin.fail()) cout << "cin fail\n";
    }
    ifstream ist(iname.c_str());
    if (!ist)
        cout << "Error ist\n";

    string oname;
    cout << "Enter output file name\n";
    cin >> oname;
    ofstream ost(oname.c_str());
    if (!ost)
        cout << "Error ost\n";

    vector<Reading> temps;
    int hour = -1;
    double temperature = -700;
    while (ist >> hour >> temperature) {
        temps.push_back(Reading{hour, temperature});
    }

    for (Reading x: temps) {
        ost << '(' << x.hour << ',' << x.temperature << ')' << '\n';
    }

    return 0;



}
