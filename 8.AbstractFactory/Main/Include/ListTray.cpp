/**
 * @file ListTray.cpp
 * 
 * ListTrayクラスのソースファイル
 * @author bigface / created on 2022/01/11
 */

#include "Main/Include/ListTray.hpp"

using namespace factory;

ListTray::ListTray(std::string caption)
: Tray(caption) {}

std::string ListTray::makeHTML()
{
  std::stringstream buffer;
  buffer << "<li>\n";
  buffer << caption + "\n";
  buffer << "<ul>\n";

  for (auto item : tray)
  {
    buffer << item->makeHTML();
  }

  return buffer.str();
}