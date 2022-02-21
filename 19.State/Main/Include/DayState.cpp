/**
 * @file DayState.cpp
 * 
 * DayStateクラスのソースファイル
 * @author bigface / created on 2022/02/21
 */

#include "Main/Include/DayState.hpp"
#include "Main/Include/Context.hpp"

State* DayState::getInstance()
{
  if (!_singleton) {
    _singleton = new DayState();
  }

  return _singleton;
}

void DayState::doClock(Context *context, int hour)
{
  if (hour < 9 || 17 <= hour) {
    context->changeState(getInstance());
  }
}

