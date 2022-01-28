/**
 * @file SideBorder.hpp
 * 
 * SideBorderクラス
 * 飾り枠を表すBorderクラスの具象クラス。
 * 文字の左右に与えられた文字で飾り付ける
 * @author bigface / created on 2022/01/28
 */

#ifndef SIDEBORDER_H
#define SIDEBORDER_H

#include <string>
#include "Main/Include/Border.hpp"
#include "Main/Include/Display.hpp"

class SideBorder: public Border
{
public:
  /** コンストラクタ */
  SideBorder(Display* display, std::string ch);

  /** 文字数（中身の両側に飾り文字分を加えたもの） */
  int getColumns() const;

  /** 行数（中身と同じ） */
  int getRows() const;

  /** 中身の指定行の両側に飾り文字を付けたものを返す */
  std::string getRowText(int row) const;

private:
  std::string borderString;
};

#endif