/**
 * @file Display.cpp
 * 
 * Displayクラスのソースファイル
 * @author bigface / created on 2022/01/28
 */

#include "Main/Include/Display.hpp"

void const Display::show()
{
  for (int i = 0; i < this->getRows(); i++) {
    std::cout << this->getRowText(i) << std::endl;
  }
}