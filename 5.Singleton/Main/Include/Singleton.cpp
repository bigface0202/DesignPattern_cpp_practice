/**
 * @file Singleton.hpp
 * 
 * シングルトンパターンのソースファイル
 * @author bigface / created on 2021/12/09
 */
#include "Main/Include/Singleton.hpp"

/** 
 * 静的データメンバの初期値は、
 * それにアクセスする関数の定義と同じソースファイル内で行う必要がある。
 * 今回の場合、getInstance()でsingletonにアクセスしているので、
 * このファイル内で初期化する必要がある
*/
Singleton* Singleton::singleton = nullptr;

Singleton::Singleton()
{
  std::cout << "インスタンスを生成しました。" << std::endl;
}

Singleton::~Singleton()
{
  delete singleton;
}

Singleton* Singleton::getInstance() 
{
  if (!singleton){
    singleton = new Singleton();
  }
  return singleton;
}

