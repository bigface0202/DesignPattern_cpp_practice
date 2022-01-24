/**
 * @file ProbStrategy.cpp
 * 
 * ProbStrategyクラスのソースファイル
 * @author bigface / created on 2022/01/24
 */

#include "Main/Include/ProbStrategy.hpp"

Hand* ProbStrategy::nextHand()
{
  std::random_device seed;
  std::default_random_engine random(seed());
  std::uniform_int_distribution<int> dist(0, getSum(this->currentHandValue));
  
  int bet = dist(random);
  int handvalue = 0;
  // historyがそれぞれの手での過去の勝利回数を格納している
  // グーで勝った回数
  if (bet < history[currentHandValue][0]) {
    handvalue = 0;
  // チョキで勝った回数
  } else if (bet < (history[currentHandValue][0] + history[currentHandValue][1])) {
    handvalue = 1;
  // パーで勝った回数
  } else {
    handvalue = 2;
  }

  this->prevHandValue = this->currentHandValue;
  this->currentHandValue = handvalue;

  return Hand::getHand(handvalue);
}

int ProbStrategy::getSum(int hv)
{
  int sum = 0;
  for (int i = 0; i < 3; i++)
  {
    sum += this->history[hv][i];
  }

  return sum;
}

void ProbStrategy::study(bool win)
{
  if (win) {
    history[this->prevHandValue][this->currentHandValue]++;
  } else {
    history[this->prevHandValue][(this->currentHandValue + 1) % 3]++;
    history[this->prevHandValue][(this->currentHandValue + 2) % 3]++;
  }
}

