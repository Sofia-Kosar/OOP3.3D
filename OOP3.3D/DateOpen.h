#pragma once
#include <string>
#include "Triad.h"

using namespace std;
class DateOpen : public Triad
{
public:
    DateOpen();
    DateOpen(int, int, int);
    DateOpen(const DateOpen&);
    DateOpen& operator=(const DateOpen&);
    DateOpen& operator++(); 
    DateOpen operator++(int); 
    DateOpen& operator--(); 
    DateOpen operator--(int);
    friend bool operator<(const DateOpen& lhs, const DateOpen& rhs);
    friend bool operator==(const DateOpen& lhs, const DateOpen& rhs);
    friend bool operator>(const DateOpen& lhs, const DateOpen& rhs);
    friend bool operator!=(const DateOpen& lhs, const DateOpen& rhs);
    friend bool operator<=(const DateOpen& lhs, const DateOpen& rhs);
    friend bool operator>=(const DateOpen& lhs, const DateOpen& rhs);
};

