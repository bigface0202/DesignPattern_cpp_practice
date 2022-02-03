/**
 * @file Database.hpp
 * 
 * Databaseクラス
 * データベース名を指定してそれに対応したを作成するクラス
 * @author bigface / created on 2022/02/03
 */

#ifndef DATABASE_H
#define DATABASE_H

#include <map>
#include <iostream>
#include <fstream>
#include <string>

class Database
{
public:
  /** データベース名からmapを得る */
  static std::map<std::string, std::string> getMap(std::string dbname);

private:
  Database () {};
};

#endif