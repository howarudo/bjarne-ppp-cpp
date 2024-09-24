#include<iostream>
enum Month {
    // plain enums NOT CLASS
     // note dec changed to dcm to make it compile,see comment on p. 316
    jan=1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dcm
};

//------------------------------------------------------------------------------

enum Day {
    monday, tuesday, wednesday, thursday, friday, saturday, sunday
};

class Date {
public:
    class Invalid {};
    Date() {};
    Date(int y, Month m, int d);
    // void add_day(int n);
    int day() const {return d;} // use const to explicitly tell that we wont change the value
    int month() const {return m;}
    int year() const {return y;}
    bool is_valid();
private:
    int y = 2001;
    Month m = Month::jan;
    int d = 1;
};

Date::Date(int y, Month m, int d) : y(y), m(m), d(d) {
    if (!is_valid())
        throw Invalid{};
}

bool Date::is_valid() {
    return 0 < m && m < 13;
}

void error(const char* errmsg)
{
    std::cerr << errmsg << std::endl;
}


std::ostream&  operator << (std::ostream& os, Date d) {
    return os << d.year() << '/' << d.day();
}

// void f(int x, int y)
// try {
//     Date dxy {2024, x, y};
//     std::cout << dxy << '\n';
//     // dxy.add_day(2);
// } catch (Date::Invalid) {
//     error("Invalid date");
// }

int main() {
    // Date birthday{1970, 10, 30};
    Date birthday{1970, Month::oct, 30};
    // birthday.m = 14;
    std::cout << birthday.day() << '\n';
    std::cout << birthday << '\n';

    Month m1 = Month::feb;
    Month m2 = feb;
    // Month m3 = 7; // can't assing int to month
    // Month m5 {7};


    return 0;
}
