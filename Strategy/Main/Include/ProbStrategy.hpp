/**
 * @file ProbStrategy.hpp
 * 
 * ProbStrategyクラス
 * じゃんけんの戦略クラス。抽象クラスであるStrategyの具象クラス。
 * 過去の勝ち負けの履歴を使って、それぞれの手を出す確率を変える。
 * @author bigface / created on 2022/01/24
 */

#ifndef PROBSTRATEGY_H
#define PROBSTRATEGY_H

#include <random>
#include "Main/Include/Hand.hpp"
#include "Main/Include/Strategy.hpp"

class ProbStrategy : public Strategy
{
public:
  Hand* nextHand();
  void study(bool win);

private:
  int prevHandValue = 0;
  int currentHandValue = 0;
  int history[3][3] = {
    {1, 1, 1},
    {1, 1, 1},
    {1, 1, 1},
};

  int getSum(int hv);
};

#endif
