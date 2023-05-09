#include <iostream>
#include <ctime>
#include "Timer.h"
#include "functions.h"
int vertical(int num)
{
    if(num < 10)
    {
        std::cout << num << "\n";
    }
    else
    {
        vertical(num / 10);
        std::cout << num % 10 << "\n";
    }

}
int f(int num)
{
    if(num <=2)
        return num - 1;
    return f(num -1) + f (num-2);
}
int f2(int num)
{
    int a = 0, b = 1, c;
    if(num <= 2)
        return num - 1;
    for (int i = 2; i < num; ++i)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
/*
    Timer t;
    t.start();

    for(int i=0; i<100000000; i++);
        std::cout << f(30) << "\n"; // timer 0.27
        //std::cout << f(30) << "\n"; //timer 0.23
    t.end();

    std::cout << "It took " << t.getDuration() << " seconds to loop 1M times" <<
              std::endl;
    return 0;*/

    stars(8,8);
}


