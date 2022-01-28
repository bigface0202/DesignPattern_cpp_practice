/**
 * @file answer.cpp
 * Strategyパターン
 * 
 * @author bigface / created on 2022/01/24
 */
#include <stdio.h>
#include <iostream>

#include "Main/Include/Player.hpp"
#include "Main/Include/Hand.hpp"
#include "Main/Include/WinningStrategy.hpp"
#include "Main/Include/ProbStrategy.hpp"

int main( int argc, char *argv[] )
{
  Player* player1 = new Player("Taro", new WinningStrategy());
  Player* player2 = new Player("Hanako", new ProbStrategy());

  for (int i = 0; i < 100; i++)
  {
    Hand* nextHand1 = player1->nextHand();
    Hand* nextHand2 = player2->nextHand();

    if (nextHand1->isStrongerThan(nextHand2)) {
      std::cout << "Winner:" << player1->name << std::endl;
      player1->win();
      player2->lose();
    } else if (nextHand2->isStrongerThan(nextHand1)) {
      std::cout << "Winner:" << player2->name << std::endl;
      player1->lose();
      player2->win();
    } else {
      std::cout << "Even..." << std::endl;
      player1->even();
      player2->even();
    }
  }

  std::cout << "Total result:" << player1->toString() << player2->toString() << std::endl;
}