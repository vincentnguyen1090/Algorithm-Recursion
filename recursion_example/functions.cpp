//
// Created by vince on 4/5/2023.
//

#include "functions.h"
void stars(int num, int spaces)
{
    if(num <= 0)
        return;
    else
    {
        stars(num/2, spaces);
        std::cout << std::string(spaces, ' ');
        std::cout << std::string(num, '*')  << std::endl;
        stars(num/2, spaces + num/2);
    }
}
