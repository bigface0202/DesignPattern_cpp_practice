/**
 * @file WinningStrategy.cpp
 * 
 * WinningStrategyクラスのソースファイル
 * @author bigface / created on 2022/01/24
 */

#include "Main/Include/WinningStrategy.hpp"

Hand* WinningStrategy::nextHand()
{
  std::random_device seed;
  std::default_random_engine random(seed());
  std::uniform_int_distribution<int> dist(0, 3);
  
  if (!won) {
    this->prevHand = Hand::getHand(dist(random));
  }
  return this->prevHand;
}

void WinningStrategy::study(bool win)
{
  this->won = win;
}