/**
 * @file Player.hpp
 * 
 * Playerクラス
 * じゃんけんを行う人を表現したクラス。
 * @author bigface / created on 2022/01/24
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <string>
#include "Main/Include/Strategy.hpp"
#include "Main/Include/Hand.hpp"

class Player
{
public:
  Player(std::string name, Strategy* strategy);
  Hand* nextHand();
  void win();
  void lose();
  void even();
  std::string toString();  

private:
  std::string name;
  Strategy* strategy;
  int wincount;
  int losecount;
  int gamecount;
};

#endif