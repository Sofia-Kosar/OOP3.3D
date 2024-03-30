#include "DateClosed.h"
#include <sstream>
#include <iostream> 

using namespace std;
DateClosed::DateClosed() : Triad()
{ }

DateClosed::DateClosed(int a, int b, int c) : Triad(a, b, c)
{ }

DateClosed::DateClosed(const DateClosed& d) : Triad(d)
{ }

int DateClosed::getFirst() const {
    return first;
}

int DateClosed::getSecond() const {
    return second;
}

int DateClosed::getThird() const {
    return third;
}

void DateClosed::setFirst(int value) {
    first = value;
}

void DateClosed::setSecond(int value) {
    second = value;
}

void DateClosed::setThird(int value) {
    third = value;
}

DateClosed& DateClosed::operator=(const DateClosed& other) {
    if (this != &other) {
        Triad::operator=(other);
    }
    return *this;
}

DateClosed& DateClosed::operator++() {
    ++first;
    ++second;
    ++third;
    return *this;
}

DateClosed DateClosed::operator++(int) {
    DateClosed temp(*this);
    ++(*this);
    return temp;
}

DateClosed& DateClosed::operator--() {
    --first;
    --second;
    --third;
    return *this;
}

DateClosed DateClosed::operator--(int) {
    DateClosed temp(*this);
    --(*this);
    return temp;
}

bool operator<(const DateClosed& lhs, const DateClosed& rhs) {
    if (lhs.getThird() < rhs.getThird()) {
        return true;
    }
    else if (lhs.getThird() == rhs.getThird()) {
        if (lhs.getSecond() < rhs.getSecond()) {
            return true;
        }
        else if (lhs.getSecond() == rhs.getSecond()) {
            return lhs.getFirst() < rhs.getFirst();
        }
    }
    return false;
}

bool operator==(const DateClosed& lhs, const DateClosed& rhs) {
    return (lhs.getThird() == rhs.getThird() && lhs.getSecond() == rhs.getSecond() && lhs.getFirst() == rhs.getFirst());
}

bool operator>(const DateClosed& lhs, const DateClosed& rhs) {
    return !(lhs < rhs) && !(lhs == rhs);
}

bool operator!=(const DateClosed& lhs, const DateClosed& rhs) {
    return !(lhs == rhs);
}

bool operator<=(const DateClosed& lhs, const DateClosed& rhs) {
    return (lhs < rhs) || (lhs == rhs);
}

bool operator>=(const DateClosed& lhs, const DateClosed& rhs) {
    return (lhs > rhs) || (lhs == rhs);
}
istream& operator>>(istream& is, DateClosed& triad) {
    cout << "Enter DateClosed" << endl;
    cout << "Day: "; is >> triad.first;
    cout << "Month: "; is >> triad.second;
    cout << "Year: "; is >> triad.third;
    return is;
}

ostream& operator<<(ostream& os, const DateClosed& triad) {
    os << triad.first << "." << triad.second << "." << triad.third;
    return os;
}

DateClosed::operator string() const {
    stringstream sout;
    sout << first << "." << second << "." << third;
    return sout.str();
}
