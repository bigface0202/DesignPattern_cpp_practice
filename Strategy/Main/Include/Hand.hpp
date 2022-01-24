/**
 * @file Hand.hpp
 * 
 * Handクラス
 * じゃんけんの手を表すクラス
 * @author bigface / created on 2022/01/20
 */

#ifndef HAND_H
#define HAND_H

#include <string>

class Hand
{
public:
  static const int HANDVALUE_GUU = 0;
  static const int HANDVALUE_CHO = 1;
  static const int HANDVALUE_PAA = 2;
  static Hand* hand[3];

  static Hand* getHand(int handvalue);
  bool isStrongerThan(Hand* h);
  bool isWeakerThan(Hand* h);
  std::string toString();

private:
  static const std::string name[3];
  int handvalue;

  Hand(int handvalue);
  int fight(Hand* h);
};

#endif