/**
 * @file ColleagueOne.hpp
 * 
 * ColleagueOneクラス
 * 相談役に相談を持ちかけるメンバーを表すクラス1。
 * @author bigface / created on 2022/02/09
 */

#ifndef COLLEAGUEONE_H
#define COLLEAGUEONE_H

#include <iostream>

#include "Main/Include/Colleague.hpp"
#include "Main/Include/Mediator.hpp"

class ColleagueOne: public Colleague
{
public:
  void DoA();
  void DoB();
};

#endif