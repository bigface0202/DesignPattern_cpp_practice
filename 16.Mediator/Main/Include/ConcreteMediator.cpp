/**
 * @file ConcreteMediator.cpp
 * 
 * ConcreteMediatorクラスのソースファイル
 * @author bigface / created on 2022/02/09
 */

#include "Main/Include/ConcreteMediator.hpp"

ConcreteMediator::ConcreteMediator(ColleagueOne *colleague1, ColleagueTwo *colleague2)
: colleague1_(colleague1), colleague2_(colleague2) 
{
  colleague1_->setMediator(this);
  colleague2_->setMediator(this);
}

void ConcreteMediator::Notify(Colleague *sender, std::string event)
{
  if (event == "A") {
    std::cout << "Mediator reacts on A and triggers following operations:" << std::endl;
    colleague2_->DoC();
  } else if (event == "D") {
    std::cout << "Mediator reacts on D and triggers following operations:" << std::endl;
    colleague1_->DoB();
    colleague2_->DoC();
  }
}