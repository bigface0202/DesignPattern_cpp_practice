/**
 * @file Border.hpp
 * 
 * Borderクラス
 * 飾り枠を表す抽象クラス。
 * Displayクラスを継承することによって、飾り枠は中身と同じメソッドを持つことになる。
 * つまり、「飾り枠（Border）」と「中身（Display）」を同一視できる。
 * @author bigface / created on 2022/01/28
 */

#ifndef BORDER_H
#define BORDER_H

#include <string>
#include "Main/Include/Display.hpp"

class Border: public Display
{
public:
  /** インスタンス生成時に「中身を引数で指定 */
  Border(Display* display);

  int getColumns() const;
  int getRows() const;
  std::string getRowText(int row) const;
protected:
  /** 飾り枠がくるんでいる「中身」を指す */
  Display* display;
};

#endif