/**
 * @file Receiver.hpp
 * 
 * レシーバークラス
 * Commandが命令を実行する時に対象となる役。
 * このクラスが重要なビジネスロジックをいくつか持っている。
 * @author bigface / created on 2022/03/05
 */

#ifndef RECEIVER_H
#define RECEIVER_H

#include <iostream>

class Receiver
{
public:
  void doSomething(const std::string &a);

  void doSomethingElse(const std::string &b);
};

#endif