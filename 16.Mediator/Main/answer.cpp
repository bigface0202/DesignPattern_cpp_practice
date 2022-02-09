/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2021/11/29
 */
#include <stdio.h>
#include <iostream>

#include "Main/Include/ConcreteMediator.hpp"
#include "Main/Include/ColleagueOne.hpp"
#include "Main/Include/ColleagueTwo.hpp"

int main( int argc, char *argv[] )
{
  ColleagueOne *c1 = new ColleagueOne;
  ColleagueTwo *c2 = new ColleagueTwo;
  ConcreteMediator *mediator = new ConcreteMediator(c1, c2);

  std::cout << "Client triggers opperation A." << std::endl;
  c1->DoA();
  std::cout << "\n";
  std::cout << "Client triggers operation D." << std::endl;
  c2->DoD();
}