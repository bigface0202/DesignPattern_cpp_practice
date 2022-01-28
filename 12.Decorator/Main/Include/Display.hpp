/**
 * @file Display.hpp
 * 
 * Displayクラス
 * 複数行からなる文字列を表示するための抽象クラス。
 * @author bigface / created on 2022/01/28
 */

#ifndef DISPLAY_H
#define DISPLAY_H

#include <string>
#include <iostream>

class Display 
{
public:
  virtual ~Display() {};
  virtual int getColumns() const = 0;
  virtual int getRows() const  = 0;
  virtual std::string getRowText(int row) const = 0;
  void const show();
};

#endif
