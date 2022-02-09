/**
 * @file ColleagueTwo.hpp
 * 
 * ColleagueTwoクラス
 * 相談役に相談を持ちかけるメンバーを表すクラス2。
 * @author bigface / created on 2022/02/09
 */

#ifndef COLLEAGUETWO_H
#define COLLEAGUETWO_H

#include <iostream>

#include "Main/Include/Colleague.hpp"
#include "Main/Include/Mediator.hpp"

class ColleagueTwo: public Colleague
{
public:
  void DoC();
  void DoD();
};

#endif