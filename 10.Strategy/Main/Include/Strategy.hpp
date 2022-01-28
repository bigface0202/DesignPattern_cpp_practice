/**
 * @file Strategy.hpp
 * 
 * Strategyクラス
 * じゃんけんの戦略のための抽象メソッドを集めたものになる。
 * @author bigface / created on 2022/01/24
 */

#ifndef STRATEGY_H
#define STRATEGY_H

#include "Main/Include/Hand.hpp"

class Strategy
{
public:
  /** 
   * 次に出す手を得るメソッド
   * 抽象メソッドでは =0 を忘れない！
  */
  virtual Hand* nextHand() = 0;

  /** 
   * じゃんけんに勝った場合はstudy(true)で呼び出し、
   * 負けた場合はstudy(false)で呼び出す。
  */
  virtual void study(bool win) = 0;
};

#endif