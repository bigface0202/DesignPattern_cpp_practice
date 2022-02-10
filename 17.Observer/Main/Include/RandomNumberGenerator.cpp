/**
 * @file RandomNumberGenerator.cpp
 * 
 * RandomNumberGeneratorクラス
 * @author bigface / created on 2022/02/10
 */

#include "Main/Include/RandomNumberGenerator.hpp"

int RandomNumberGenerator::getNumber()
{
  return number_;
}

void RandomNumberGenerator::execute()
{
  // 乱数関係の変数
  std::random_device seed;
  std::default_random_engine random(seed());
  std::uniform_int_distribution<int> dist(0, 50);

  for (int i = 0; i < 20; i++)
  {
    number_ = dist(random);
    notifyObservers();
  }
}