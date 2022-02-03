/**
 * @file Database.cpp
 * 
 * Databaseクラスのソースファイル
 * @author bigface / created on 2022/02/03
 */

#include "Main/Include/Database.hpp"

std::map<std::string, std::string> Database::getMap(std::string dbname)
{
  std::ifstream ifs (dbname);
  std::map<std::string, std::string> m;

  if (!ifs) {
    std::cerr << "Error. Cannot open the file." << std::endl;
  }

  std::string mail;
  std::string name;

  while (ifs >> mail >> name) {
    m.insert(std::make_pair(mail, name));
  }

  return m;
}