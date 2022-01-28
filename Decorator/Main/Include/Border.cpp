/** 
 * @file Border.cpp
 * 
 * Borderクラスのソースファイル
 * 
 * @author bigface / created on 2022/01/28
*/

#include "Main/Include/Border.hpp"

Border::Border(Display* display)
: display(display) {}

int Border::getColumns() const
{
  return this->display->getColumns();
}

int Border::getRows() const 
{
  return this->display->getRows();
}

std::string Border::getRowText(int row) const 
{
  return this->display->getRowText(row);
}