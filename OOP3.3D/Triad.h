#pragma once
#include <iostream>

using namespace std;

class Triad {
protected:
    int first;
    int second;
    int third;

public:
    Triad(int firstValue, int secondValue, int thirdValue);
    Triad();
    Triad(const Triad& other);
    int getFirst() const;
    int getSecond() const;
    int getThird() const;
    void setFirst(int value);
    void setSecond(int value);
    void setThird(int value);
    friend istream& operator>>(istream& is, Triad& triad);
    friend ostream& operator<<(ostream& os, const Triad& triad);
    operator string() const;
   
};
