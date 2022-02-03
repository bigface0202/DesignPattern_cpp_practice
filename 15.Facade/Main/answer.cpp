/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2021/11/29
 */
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <map>

int main( int argc, char *argv[] )
{
  std::map<std::string, std::string> m;
  std::ifstream ifs("/media/yusuke/Moon/GitHub/DesignPatternJavaCpp/15.Facade/Main/maildata.txt", std::ios::in);

  if (!ifs) {
    std::cerr << "Error" << std::endl;
    return 1;
  }

  std::string str;
  std::string str_2;

  while (ifs >> str >> str_2) {
    m.insert(std::make_pair(str, str_2));
  }

  std::cout << m.at("hyuki@hyuki") << std::endl;

  return 0;
}