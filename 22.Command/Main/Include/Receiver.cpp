/**
 * @file Receiver.cpp
 * 
 * レシーバークラスのソースファイル
 * @author bigface / created on 2022/03/05
 */

#include "Main/Include/Receiver.hpp"

void Receiver::doSomething(const std::string &a)
{
  std::cout << "Receiver: Working on (" << a << ".)" << std::endl;
}

void Receiver::doSomethingElse(const std::string &b)
{
  std::cout << "Receiver: Also working on (" << b << ".)" << std::endl;
}