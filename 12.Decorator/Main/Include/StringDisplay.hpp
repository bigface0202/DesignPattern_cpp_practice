/**
 * @file StringDisplay.hpp
 * 
 * StringDisplayクラス
 * Displayクラスの具象クラス。
 * 1行の文字列を表示する。
 * StringDispayクラスはケーキで言うと、スポンジケーキ（土台）になる。
 * @author bigface / created on 2022/01/28
 */

#ifndef STRINGDISPLAY_H
#define STRINGDISPLAY_H

#include <string>
#include "Main/Include/Display.hpp"


class StringDisplay : public Display
{
public:
  /** 引数で表示文字列を指定 */
  StringDisplay(std::string string);

  /** 文字数 */
  int getColumns() const;

  /** 行数（毎回1になる） */
  int getRows() const;

  /** rowが0の時のみ返す */
  std::string getRowText(int row) const;

private:
  std::string string;
};

#endif