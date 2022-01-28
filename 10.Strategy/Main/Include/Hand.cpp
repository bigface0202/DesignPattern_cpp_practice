/**
 * @file Hand.cpp
 * 
 * Handクラスのソースファイル
 * @author bigface / created on 2022/01/24
 */

#include "Main/Include/Hand.hpp"

Hand* Hand::hand[3] = {
  new Hand(Hand::HANDVALUE_GUU),
  new Hand(Hand::HANDVALUE_CHO),
  new Hand(Hand::HANDVALUE_PAA),
};

std::string const Hand::name[3] = {
  "グー",
  "チョキ",
  "パー",
};

Hand::Hand(int handvalue)
{
  this->handvalue = handvalue;
}

Hand* Hand::getHand(int handvalue)
{
  return hand[handvalue];
}

bool Hand::isStrongerThan(Hand* h)
{
  return fight(h) == 1;
}

bool Hand::isWeakerThan(Hand* h)
{
  return fight(h) == -1;
}

int Hand::fight(Hand* h)
{
  if (this == h) {
    return 0;
  } else if ((this->handvalue + 1) % 3 == h->handvalue) {
    return 1;
  } else {
    return -1;
  }
}

std::string Hand::toString()
{
  return name[this->handvalue];
}