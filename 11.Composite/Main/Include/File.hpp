/**
 * @file File.hpp
 * 
 * Fileクラス
 * ファイルを表現するクラス。
 * Entryクラスのサブクラス。
 * @author bigface / created on 2022/01/26
 */

#ifndef FILE_H
#define FILE_H

#include <string>
#include <iostream>
#include "Main/Include/Entry.hpp"

class File : public Entry
{
public:
  File(std::string name, int size);
  std::string getName();
  int getSize();

protected:
  /** 一覧を表示する */
  void printList();
  /** エントリの一覧 */
  void printList(std::string prefix) override;

private:
  std::string name;
  int size;
};

#endif