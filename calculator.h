#ifndef CALCULATOR_H
#define CALCULATOR_H


class calculator
{
    int x;
    public:
        calculator();
        calculator operator+(const calculator&op2);
        calculator operator=(int y);
        calculator operator-(const calculator&op2);
        calculator operator*(const calculator&op2);
        calculator operator/(const calculator&op2);
        calculator operator^(const calculator&op2);
        int Radical();
        void Show();
};

#endif // CALCULATOR_H
