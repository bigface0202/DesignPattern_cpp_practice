/**
 * @file JPNChar.hpp
 * 
 * JPNCharクラス
 * 数字の「日本語」を表すクラス。
 * @author bigface / created on 2022/02/23
 */

#ifndef JPNCHAR_H
#define JPNCHAR_H

#include <fstream>
#include <iostream>
#include <string>
#include <sstream>

class JPNChar
{
public:
  /** コンストラクタ */
  JPNChar(char charname);

  /** 日本語を表示する */
  void print();

private:
  /** 文字の名前 */
  char charname_;

  /** 日本語を表現する文字列 */
  std::string fontdata_;
};


#endif