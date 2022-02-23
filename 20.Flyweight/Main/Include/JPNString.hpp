/**
 * @file JPNString.hpp
 * 
 * JPNCharを集めた「日本語文字列」のクラス
 * @author bigface / created on 2022/02/23
 */

#ifndef JPNSTRING_H
#define JPNSTRING_H

#include <string>
#include <vector>
#include "Main/Include/JPNChar.hpp"
#include "Main/Include/JPNCharFactory.hpp"

class JPNString
{
public:
  /** コンストラクタ */
  JPNString(std::string str);

  /** 表示 */
  void print();

private:
  std::vector<JPNChar*> jpnchars_;
};

#endif