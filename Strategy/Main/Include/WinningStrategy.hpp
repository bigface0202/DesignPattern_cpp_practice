/**
 * @file WinningStrategy.hpp
 * 
 * WinningStrategyクラス
 * じゃんけんの戦略クラス。抽象クラスであるStrategyの具象クラス。
 * 前回の勝負に勝ったならば、次も同じ手を出す戦略をとる。
 * @author bigface / created on 2022/01/24
 */

#ifndef WINSTRATEGY_H
#define WINSTRATEGY_H

#include <random>
#include "Main/Include/Hand.hpp"
#include "Main/Include/Strategy.hpp"

class WinningStrategy : public Strategy
{
public:
  Hand* nextHand();
  void study(bool win);

private:
  bool won = false;
  Hand* prevHand;
};

#endif