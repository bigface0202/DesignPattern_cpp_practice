/** 
 * @file StringDisplay.cpp
 * 
 * StringDisplayのソースファイル
 * 
 * @author bigface / created on 2022/01/28
*/

#include "Main/Include/StringDisplay.hpp"

StringDisplay::StringDisplay(std::string string)
: string(string) {}

int StringDisplay::getColumns() const
{
  return string.length();
}

int StringDisplay::getRows() const
{
  return 1;
}

std::string StringDisplay::getRowText(int row) const
{
  if (row == 0) {
    return this->string;
  } else {
    return nullptr;
  }
}