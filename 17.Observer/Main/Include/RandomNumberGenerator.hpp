/**
 * @file RandomNumberGenerator.hpp
 * 
 * RandomNumberGeneratorクラス
 * NumberGeneratorクラスを継承し、ランダムに数を生成する具象クラス。
 * @author bigface / created on 2022/02/10
 */

#ifndef RANDOMNUMBERGENERATOR_H
#define RANDOMNUMBERGENERATOR_H

#include <random>
#include "Main/Include/NumberGenerator.hpp"

class RandomNumberGenerator: public NumberGenerator
{
public:
  /** 数を取得する */
  int getNumber();

  /** 数を生成する */
  void execute();

private:
  int number_;
};

#endif