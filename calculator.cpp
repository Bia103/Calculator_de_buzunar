#include "calculator.h"
#include<iostream>
#include<cmath>
using namespace std;
calculator::calculator()
{
    x=0;
}
calculator calculator:: operator+(const calculator&op2)
{
    calculator temp;
    temp.x=op2.x+x;
    return temp;
}
calculator calculator ::operator=(int y)
{
    x=y;
    return *this;
}
calculator calculator::operator-(const calculator&op2)
{
    calculator temp;
    temp.x=x-op2.x;
    return temp;
}
calculator calculator::operator*(const calculator&op2)
{
    calculator temp;
    temp.x=x*op2.x;
    return temp;
}
calculator calculator::operator/(const calculator&op2)
{
    calculator temp;
    temp.x=x/op2.x;
    return temp;
}
calculator calculator::operator^(const calculator&op2)
{
    calculator temp;
    temp.x=pow(x,op2.x);
    return temp;
}
int calculator::Radical()
{
    return sqrt(x);
}
void calculator::Show()
{
    cout<<x<<" ";
}
