/**
 * @file NightState.cpp
 * 
 * NightStateクラスのソースファイル
 * @author bigface / created on 2022/02/21
 */

#include "Main/Include/NightState.hpp"

NightState* NightState::_singleton = nullptr;

NightState::NightState()
{
  std::cout << "夜間のインスタンスが生成されました" << std::endl;
}

State* NightState::getInstance()
{
  if (!_singleton) {
    _singleton = new NightState();
  }

  return _singleton;
}

void NightState::doClock(Context *context, int hour)
{
  if (9 <= hour && hour < 17) {
    context->changeState(DayState::getInstance());
  }
}

void NightState::doUse(Context *context)
{
  context->recordLog("非常: 金庫使用!(夜間)");
}

void NightState::doAlarm(Context *context)
{
  context->callSecurityCenter("非常ベル(夜間)");
}

void NightState::doPhone(Context *context)
{
  context->recordLog("夜間の通話録音");
}

std::string NightState::toString()
{
  return "[夜間]";
}