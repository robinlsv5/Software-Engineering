//
// Created by robinbakker on 25-9-2018.
//

#include "Calculator.h"
#include<cmath>
#include <stdexcept>
#include <iostream>

double add(double value1, double value2)
{
    return value1 + value2;
}

int add(int value1, int value2)
{
    return value1 + value2;
}

double subtract(double value1, double value2)
{
    return value1 - value2;
}

int subtract(int value1, int value2)
{
    return value1 - value2;
}


double multiply(double value1, double value2)
{
    return value1 * value2;
}

double multiply(int value1, int value2)
{
    return value1 * value2;
}

double divide(double value1, double value2)
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

double divide(int value1, int value2)
{
    return value1 / value2;
}

double square(double value)
{
    return sqrt(value);
}

double square(int value)
{
    return sqrt(value);
}