/**
 * @file State.hpp
 * 
 * Stateクラス
 * 状態を表す抽象クラス。
 * 今回の場合は金庫の状態を表す。
 * @author bigface / created on 2022/02/21
 */

#ifndef STATE_H
#define STATE_H

class Context;

class State {
public:
  /** 時刻設定 */
  virtual void doClock(Context *context, int hour) = 0;

  /** 金庫使用 */
  virtual void doUse(Context *context) = 0;

  /** 非常ベル */
  virtual void doAlarm(Context *context) = 0;

  /** 通常通話 */
  virtual void doPhone(Context *context) = 0;
};

#endif