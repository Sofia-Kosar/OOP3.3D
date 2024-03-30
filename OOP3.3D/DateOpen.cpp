#include "DateOpen.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

DateOpen::DateOpen() : Triad()
{ }

DateOpen::DateOpen(int a, int b, int c) : Triad(a, b, c)
{ }

DateOpen::DateOpen(const DateOpen& d) : Triad(d)
{ }

DateOpen& DateOpen::operator=(const DateOpen& other) {
    if (this != &other) { 
        Triad::operator=(other); 
    }
    return *this;
}

DateOpen& DateOpen::operator++() {
    ++first;
    ++second;
    ++third;
    return *this;
}

DateOpen DateOpen::operator++(int) {
    DateOpen temp(*this);
    ++(*this);
    return temp;
}

DateOpen& DateOpen::operator--() {
    --first;
    --second;
    --third;
    return *this;
}

DateOpen DateOpen::operator--(int) {
    DateOpen temp(*this);
    --(*this);
    return temp;
}

bool operator<(const DateOpen& lhs, const DateOpen& rhs) {
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

bool operator==(const DateOpen& lhs, const DateOpen& rhs) {
    return (lhs.getThird() == rhs.getThird() && lhs.getSecond() == rhs.getSecond() && lhs.getFirst() == rhs.getFirst());
}

bool operator>(const DateOpen& lhs, const DateOpen& rhs) {
    return !(lhs < rhs) && !(lhs == rhs);
}

bool operator!=(const DateOpen& lhs, const DateOpen& rhs) {
    return !(lhs == rhs);
}

bool operator<=(const DateOpen& lhs, const DateOpen& rhs) {
    return (lhs < rhs) || (lhs == rhs);
}

bool operator>=(const DateOpen& lhs, const DateOpen& rhs) {
    return (lhs > rhs) || (lhs == rhs);
}
