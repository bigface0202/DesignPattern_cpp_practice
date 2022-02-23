/**
 * @file JPNCharFactory.hpp
 * 
 * JPNCharのインスタンスを生成する工場。
 * @author bigface / created on 2022/02/23
 */

#ifndef JPNCHARFACTORY_H
#define JPNCHARFACTORY_H

#include <unordered_map>
#include <string>
#include <iostream>

#include "Main/Include/JPNChar.hpp"

class JPNCharFactory
{
public:
  /** インスタンスを得る */
  static JPNCharFactory* getInstance();

  /** JPNCharのインスタンスを生成 */
  JPNChar* getJPNChar(char charname);

private:
  /** コンストラクタ */
  JPNCharFactory();

  /** 既に作ったBigCharのインスタンスを管理 */
  std::unordered_map<std::string, JPNChar*> pool_;
  
  /** Singletonパターン */
  static JPNCharFactory* singleton_;
};

#endif