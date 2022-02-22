/**
 * @file NightState.hpp
 * 
 * NightStateクラス
 * 夜の状態を表すStateを継承した具象クラス。
 * @author bigface / created on 2022/02/21
 */

#ifndef NIGHTSTATE_H
#define NIGHTSTATE_H

#include <iostream>
#include <string>
#include "Main/Include/State.hpp"
#include "Main/Include/Context.hpp"
#include "Main/Include/DayState.hpp"

class NightState: public State 
{
public:
  /** 唯一のインスタンスを得る */
  static State* getInstance();

  /** 時刻設定 */
  void doClock(Context *context, int hour);

  /** 金庫使用 */
  void doUse(Context *context);

  /** 非常ベル */
  void doAlarm(Context *context);

  /** 通常通話 */
  void doPhone(Context *context);

  /** 文字列表現 */
  std::string toString();

private:
  static NightState *_singleton;

  /** コンストラクタ */
  NightState();
};


#endif