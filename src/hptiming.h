#ifndef _HPTIMING_H
#define _HPTIMING_H
#include <Arduino.h>
#include <chrono>


/// @brief performs high precision timing
/// @details This class is used to perform high precision timing
/// using the std::chrono library. The class can be used to
/// measure time in seconds, minutes, hours, milliseconds, microseconds
/// and nanoseconds.
/// @note The class is not thread safe.
class hpTiming
{
  private:
  std::chrono::steady_clock::time_point start_time;
  std::chrono::steady_clock::time_point end_time;

public:
  /// @brief constructor
  /// @details The constructor initializes the start_time and end_time
  /// to the current time if the start parameter is set to true.
  /// @param start if true, the start_time is set to the current time.
  hpTiming(bool start = false);

  /// @brief starts the clock
  /// @details This function sets the start_time to the current time.
  void startClock();

  /// @brief ends the clock
  /// @details This function sets the end_time to the current time.
  void endClock();

  /// @brief returns the time in milliseconds
  /// @return the time in milliseconds
  uint64_t mS() const;

  /// @brief  returns the time in microseconds
  /// @return the time in microseconds
  uint64_t uS() const;

  /// @brief returns the time in nanoseconds
  /// @return the time in nanoseconds
  uint64_t nS() const;

  /// @brief returns the time in seconds
  /// @return the time in seconds
  uint64_t s() const;

  /// @brief returns the time in minutes
  /// @return the time in minutes
  uint64_t m() const;

  /// @brief returns the time in hours
  /// @return the time in hours
  uint64_t h() const;
};

#endif
