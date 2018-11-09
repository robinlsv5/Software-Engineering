//
// Created by robinbakker on 25-9-2018.
//

#include "Calculator.h"
#include<cmath>
#include <stdexcept>
#include <iostream>

double Calculator::add(double value1, double value2)
{
    return value1 + value2;
}
int Calculator::add(int value1, int value2)
{
    return value1 + value2;
}

double Calculator::subtract(double value1, double value2)
{
    return value1 - value2;
}

int Calculator::subtract(int value1, int value2)
{
    return value1 - value2;
}


double Calculator::multiply(double value1, double value2)
{
    return value1 * value2;
}

int Calculator::multiply(int value1, int value2)
{
    return value1 * value2;
}

double Calculator::divide(double value1, double value2)
{
    try {

        double returnValue = value1 / value2;

    }
    catch(std::logic_error)
    {
        std::cout << "Logic error!";
    }


    return value1 / value2;
}

double Calculator::divide(int value1, int value2)
{
    return value1 / value2;
}

double Calculator::square(double value)
{
    return sqrt(value);
}

double Calculator::square(int value)
{
    return sqrt(value);
}