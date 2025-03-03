#ifndef _HPTIMING_H
#define _HPTIMING_H
#include <Arduino.h>
#include <chrono>


class hpTiming
{
public:
  std::chrono::steady_clock::time_point start_time;
  std::chrono::steady_clock::time_point end_time;

  hpTiming(bool start = false);
  void startClock();
  void endClock();

  uint64_t mS() const;

  uint64_t uS() const;

  uint64_t nS() const;

  uint64_t s() const;

  uint64_t m() const;

  uint64_t h() const;
};

#endif
