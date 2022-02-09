/**
 * @file Mediator.hpp
 * 
 * Mediatorクラス
 * 全てのメンバーの相談役となる抽象クラス
 * @author bigface / created on 2022/02/09
 */

#ifndef MEDIATOR_H
#define MEDIATOR_H

#include <string>

class Colleague;

class Mediator
{
public:
  /** メンバーへ伝える */
  virtual void Notify(Colleague *sender, std::string event) = 0;
};

#endif