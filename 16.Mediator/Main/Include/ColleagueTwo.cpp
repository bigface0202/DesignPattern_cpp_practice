/**
 * @file ColleagueTwo.cpp
 * 
 * ColleagueTwoクラスのソースファイル
 * 相談役に相談を持ちかけるメンバーを表すクラス2。
 * @author bigface / created on 2022/02/09
 */

#include "Main/Include/ColleagueTwo.hpp"

void ColleagueTwo::DoC()
{
  std::cout << "Colleague 2 does C." << std::endl;
  mediator_->Notify(this, "C");
}

void ColleagueTwo::DoD()
{
  std::cout << "Colleague 2 does D." << std::endl;
  mediator_->Notify(this, "D");
}