/**
 * @file ColleagueOne.cpp
 * 
 * ColleagueOneクラスのソースファイル
 * @author bigface / created on 2022/02/09
 */

#include "Main/Include/ColleagueOne.hpp"

void ColleagueOne::DoA()
{
  std::cout << "Colleague 1 does A." << std::endl;
  mediator_->Notify(this, "A");
}

void ColleagueOne::DoB()
{
  std::cout << "Colleague 1 does B." << std::endl;
  mediator_->Notify(this, "B");
}