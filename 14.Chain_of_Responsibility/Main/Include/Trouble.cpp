/**
 * @file Trouble.cpp
 * 
 * Troubleクラスのソースファイル
 * @author bigface / created on 2022/02/02
 */

#include "Main/Include/Trouble.hpp"

Trouble::Trouble(int number)
:_number(number) {}

int Trouble::getNumber()
{
  return _number;
}

std::string Trouble::toString()
{
  return "[Trouble" + std::to_string(_number) + "]";
}