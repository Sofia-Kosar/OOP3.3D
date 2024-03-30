#pragma once
#include <string>
#include <iostream>
#include "Triad.h"

using namespace std;
class DateClosed : private Triad
{
private:
	int first, second, third;
public:
    DateClosed();
    DateClosed(int, int, int);
    DateClosed(const DateClosed&);
    int getFirst() const;
    int getSecond() const;
    int getThird() const;
    void setFirst(int value);
    void setSecond(int value);
    void setThird(int value);
    DateClosed& operator=(const DateClosed&);
    DateClosed& operator++();
    DateClosed operator++(int);
    DateClosed& operator--();
    DateClosed operator--(int);
    friend bool operator<(const DateClosed& lhs, const DateClosed& rhs);
    friend bool operator==(const DateClosed& lhs, const DateClosed& rhs);
    friend bool operator>(const DateClosed& lhs, const DateClosed& rhs);
    friend bool operator!=(const DateClosed& lhs, const DateClosed& rhs);
    friend bool operator<=(const DateClosed& lhs, const DateClosed& rhs);
    friend bool operator>=(const DateClosed& lhs, const DateClosed& rhs);
    friend istream& operator>>(istream& is, DateClosed& triad);
    friend ostream& operator<<(ostream& os, const DateClosed& triad);
    operator string() const;

};
