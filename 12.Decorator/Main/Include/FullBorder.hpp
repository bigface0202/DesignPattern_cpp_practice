/**
 * @file FullBorder.hpp
 * 
 * FullBorderクラス
 * 飾り枠を表すBorderクラスの具象クラス。
 * 文字の上下左右に与えられた文字で飾り付ける
 * @author bigface / created on 2022/01/28
 */

#ifndef FULLBORDER_H
#define FULLBORDER_H

#include <string>
#include <sstream>
#include "Main/Include/Border.hpp"
#include "Main/Include/Display.hpp"

class FullBorder: public Border
{
public:
  /** コンストラクタ */
  FullBorder(Display* display);
  
  /** 文字数（左右の飾り文字を含む） */
  int getColumns() const;

  /** 行数（上下の飾り文字を含む） */
  int getRows() const;
  
  /** 指定した行の内容 */
  std::string getRowText(int row) const;

private:
  std::string makeLine(std::string str, int count) const;
};

#endif