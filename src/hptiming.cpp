#include "hpTiming.h"


hpTiming::hpTiming(bool start)
{
  if (start)
    startClock();
}

void hpTiming::startClock() { start_time = std::chrono::steady_clock::now(); }
void hpTiming::endClock() { end_time = std::chrono::steady_clock::now(); }
uint64_t hpTiming::mS() const
{
  return (std::chrono::duration_cast<std::chrono::milliseconds>((end_time - start_time)).count());
}

uint64_t hpTiming::uS() const
{
  return (std::chrono::duration_cast<std::chrono::microseconds>((end_time - start_time)).count());
}

uint64_t hpTiming::nS() const
{
  return (std::chrono::duration_cast<std::chrono::nanoseconds>((end_time - start_time)).count());
}

uint64_t hpTiming::s() const
{
  return (std::chrono::duration_cast<std::chrono::seconds>((end_time - start_time)).count());
}

uint64_t hpTiming::m() const
{
  return (std::chrono::duration_cast<std::chrono::minutes>((end_time - start_time)).count());
}

uint64_t hpTiming::h() const
{
  return (std::chrono::duration_cast<std::chrono::hours>((end_time - start_time)).count());
}
