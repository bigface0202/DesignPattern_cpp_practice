/**
 * @file SideBorder.cpp
 * 
 * SideBorderクラスのソースファイル
 * @author bigface / created on 2022/01/28
 */

#include "Main/Include/SideBorder.hpp"

SideBorder::SideBorder(Display* display, std::string str)
: Border(display), borderString(str) {}

int SideBorder::getColumns() const 
{
  return 1 + this->display->getColumns() + 1;
}

int SideBorder::getRows() const
{
  return this->display->getRows();
}

std::string SideBorder::getRowText(int row) const
{
  return this->borderString + this->display->getRowText(row) + this->borderString;
}