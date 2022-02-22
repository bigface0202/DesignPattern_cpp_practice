/**
 * @file DayState.cpp
 * 
 * DayStateクラスのソースファイル
 * @author bigface / created on 2022/02/21
 */

#include "Main/Include/DayState.hpp"

DayState* DayState::_singleton = nullptr;

DayState::DayState()
{
  std::cout << "昼間のインスタンスが生成されました" << std::endl;
}

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
    context->changeState(NightState::getInstance());
  }
}

void DayState::doUse(Context *context)
{
  context->recordLog("金庫使用(昼間)");
}

void DayState::doAlarm(Context *context)
{
  context->callSecurityCenter("非常ベル(昼間)");
}

void DayState::doPhone(Context *context)
{
  context->recordLog("通常の通話録音(昼間)");
}

std::string DayState::toString()
{
  return "[昼間]";
}