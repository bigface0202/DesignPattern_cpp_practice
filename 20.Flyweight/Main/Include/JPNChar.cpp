/**
 * @file JPNChar.cpp
 * 
 * JPNCharクラスのソースファイル
 * @author bigface / created on 2022/02/23
 */

#include "Main/Include/JPNChar.hpp"

JPNChar::JPNChar(char charname)
{
  charname_ = charname;
  std::ifstream ifs("/media/yusuke/Moon/GitHub/DesignPatternJavaCpp/20.Flyweight/Main/resources/jpn" + std::string(&charname_) + ".txt");
  if (ifs.fail()) {
    std::cerr << "Failed to open file" << std::endl;
    exit(0);
  }
  std::string line;
  std::stringstream buf;
  std::string str;

  while (std::getline(ifs, str)) {
    buf << str;
  }
  
  fontdata_ = buf.str();
}

void JPNChar::print()
{
  std::cout << fontdata_ << std::endl;
}