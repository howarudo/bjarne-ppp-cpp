#include <iostream>

struct Date_st {
    int y, m, d;
    Date_st(int y, int m, int d);
};

void init_day(Date_st& dd, int y, int m, int d) {
    // check that y.m.d is a valid date and initialize
    bool is_leap = (y % 4 == 0 && y % 100 != 0);
    bool is_valid = false;
    if (m % 2 == 1 && (d  >= 1 && d <= 31))
        // odd months
        is_valid = true;
    else if (m % 2 == 0 && m != 2 && (d >= 1 && d <= 30))
        // even (non-feb) months
        is_valid = true;
    else if (m == 2)
        // feb
        is_valid = is_leap ? (d >= 1 && d <= 29) : (d >= 1 && d <= 28);

    if (is_valid) {
        dd.d = d;
        dd.m = m;
        dd.y = y;
    }
    return;
}
