//
// Created by vince on 4/5/2023.
//

#include "Fib.h"
unsigned int Fib::nFR(int n)
{
    return add(0, 1, n);
}
unsigned int Fib::add(int num1, int num2, int count)
{
    if (count <= 1)
    {
        return num1;
    }
    return(add(num2, num1+num2, count - 1));
}

