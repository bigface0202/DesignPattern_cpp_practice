/**
 * @file SafeFrame.cpp
 * 
 * SafeFrameクラスのソースファイル
 * @author bigface / created on 2022/02/21
 */

#include "Main/Include/SafeFrame.hpp"

SafeFrame::SafeFrame() {}

void SafeFrame::actionPerformed()
{
  state->doUse(this);

  state->doAlarm(this);

  state->doPhone(this);
}

void SafeFrame::setClock(int hour)
{
  std::string clockString = "現在時刻は";

  if (hour < 10) {
    clockString += "0" + std::to_string(hour) + ":00";
  } else {
    clockString += std::to_string(hour) + ":00";
  }

  std::cout << clockString << std::endl;
  state->doClock(this, hour);
}

void SafeFrame::changeState(State *state)
{
  std::cout << this->state->toString() << "から" << state->toString() << "へ変化しました。" << std::endl;
  this->state = state;
}

void SafeFrame::callSecurityCenter(std::string msg)
{
  std::cout << "Call!!" << msg << std::endl;
}

void SafeFrame::recordLog(std::string msg)
{
  std::cout << "Record ..." << msg << std::endl;
}