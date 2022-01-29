/**
 * @file File.hpp
 * 
 * Fileクラス
 * ファイルを表現するクラス。
 * Entryクラスのサブクラス。
 * @author bigface / created on 2022/01/29
 */

#ifndef FILE_H
#define FILE_H

#include <string>
#include <iostream>
#include "Main/Include/Entry.hpp"
#include "Main/Include/Visitor.hpp"

class File : public Entry
{
public:
  File(std::string name, int size);
  std::string getName();
  int getSize();
  // Visitorを継承したサブクラスを受け入れるために、ポインタにする必要がある
  void accept(Visitor* v);

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