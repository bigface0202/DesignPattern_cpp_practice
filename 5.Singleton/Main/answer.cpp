/**
 * @file answer.cpp
 * 
 * シングルトンパターン
 * プログラムの中でたった1つしか作らないし、作りたくないインスタンスを指す。
 * @author bigface / created on 2021/12/08
 */
#include <stdio.h>
#include <iostream>
#include "Main/Include/Singleton.hpp"

int main( int argc, char *argv[] )
{
  Singleton* obj1 = Singleton::getInstance();
  Singleton* obj2 = Singleton::getInstance();

  if (obj1 == obj2) {
    std::cout << "同じインスタンスです。" << std::endl;
  } else {
    std::cout << "異なるインスタンスです。" << std::endl;
  }

  std::cout << "終了します。" << std::endl;
}