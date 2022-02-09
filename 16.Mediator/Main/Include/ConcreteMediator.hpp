/**
 * @file ConcreteMediator.hpp
 * 
 * ConcreteMediatorクラス
 * 相談役の具象クラス。
 * @author bigface / created on 2022/02/09
 */

#ifndef CONCRETEMEDIATOR_H
#define CONCRETEMEDIATOR_H

#include <iostream>
#include <string>

#include "Main/Include/Mediator.hpp"
#include "Main/Include/Colleague.hpp"
#include "Main/Include/ColleagueOne.hpp"
#include "Main/Include/ColleagueTwo.hpp"

class ConcreteMediator: public Mediator
{
public:
  /** コンストラクタ */
  ConcreteMediator(ColleagueOne *colleague1, ColleagueTwo *colleague2);

  /** メンバーに伝える */
  void Notify(Colleague *sender, std::string event);

private:
  ColleagueOne *colleague1_;
  ColleagueTwo *colleague2_;
};

#endif