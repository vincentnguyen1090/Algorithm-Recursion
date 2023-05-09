//
// Created by vince on 4/4/2023.
//

#ifndef RECURSION_EXAMPLE_TIMER_H
#define RECURSION_EXAMPLE_TIMER_H
#include <chrono>

class Timer
{
private:
    typedef std::chrono::high_resolution_clock Clock;
    typedef Clock::time_point Time;
    Time getCurrentTime();
    Time t1, t2;
public:
    void start();
    void end();
    double getDuration();
};

#endif //RECURSION_EXAMPLE_TIMER_H
