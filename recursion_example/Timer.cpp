//
// Created by vince on 4/4/2023.
//

#include "Timer.h"
typename Timer::Time Timer::getCurrentTime()
{
    return Clock::now();
}
double Timer::getDuration()
{
    std::chrono::duration<double> span = t2 - t1;
    return span.count();
}
void Timer::start()
{
    t1 = getCurrentTime();
}
void Timer::end()
{
    t2 = getCurrentTime();
}