/**
 * @file Singleton.hpp
 * 
 * シングルトンパターンのヘッダーファイル
 * @author bigface / created on 2021/12/09
 */

#ifndef SINGLETON_H
#define SINGLETON_H

#include <stdio.h>
#include <iostream>

class Singleton {
public:
  static Singleton* getInstance();

private:
  /**
   * コンストラクタ
   * Singletonなのでprivate 
   */
  Singleton();
  /** 
   * デストラクタ
  */
  ~Singleton();

private:
  static Singleton* singleton;
};

#endif