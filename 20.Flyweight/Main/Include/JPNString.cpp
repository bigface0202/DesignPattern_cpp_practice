/**
 * @file JPNString.cpp
 * 
 * JPNStringのソースファイル
 * @author bigface / created on 2022/02/23
 */

#include "Main/Include/JPNString.hpp"

JPNString::JPNString(std::string str)
{
  JPNCharFactory *factory = JPNCharFactory::getInstance();
  for (char c : str)
  {
    jpnchars_.push_back(factory->getJPNChar(c));
  }
}

void JPNString::print()
{
  for (JPNChar* jpnchar : jpnchars_)
  {
    jpnchar->print();
  }
}