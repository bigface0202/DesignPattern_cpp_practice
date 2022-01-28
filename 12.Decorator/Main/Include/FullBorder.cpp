/**
 * @file FullBorder.cpp
 * 
 * FullBorderクラスのソースファイル
 * @author bigface / created on 2022/01/28
 */

#include "Main/Include/FullBorder.hpp"

FullBorder::FullBorder(Display* display)
: Border(display) {}

int FullBorder::getColumns() const
{
  return 1 + this->display->getColumns() + 1;
}

int FullBorder::getRows() const
{
  return 1 + this->display->getRows() + 1;
}

std::string FullBorder::getRowText(int row) const
{
  if (row == 0) {                                                         // 枠の上端
    return "+" + this->makeLine("-", this->display->getColumns()) + "+";
  } else if (row == this->display->getRows() + 1) {                       // 枠の下端
    return "+" + this->makeLine("-", this->display->getColumns()) + "+";
  } else {
    return "|" + this->display->getRowText(row - 1) + "|";
  }
}

std::string FullBorder::makeLine(std::string str, int count) const
{
  std::stringstream buf;
  for (int i = 1; i < count; i++) {
    buf << str;
  }

  return buf.str();
}