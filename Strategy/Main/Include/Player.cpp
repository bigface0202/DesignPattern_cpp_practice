/**
 * @file Player.cpp
 * 
 * Playerクラスのソースファイル
 * @author bigface / created on 2022/01/24
 */

#include "Main/Include/Player.hpp"

Player::Player(std::string name, Strategy* strategy)
: name(name), strategy(strategy)
{}

Hand* Player::nextHand()
{
  return strategy->nextHand();
}

void Player::win()
{
  this->strategy->study(true);
  this->wincount++;
  this->gamecount++;
}

void Player::lose()
{
  this->strategy->study(false);
  this->losecount++;
  this->gamecount++;
}

void Player::even()
{
  this->gamecount++;
}

std::string Player::toString()
{
  return "[" + this->name + ":" + std::to_string(this->gamecount) + " games, " + std::to_string(this->wincount) + "win," + std::to_string(this->losecount) + " lose" + "]";
}