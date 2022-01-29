/**
 * @file Directory.hpp
 * 
 * Directoryクラス
 * ディレクトリを表現するクラス。
 * Entryクラスのサブクラス。
 * @author bigface / created on 2022/01/29
 */

#ifndef DIRECTORY_H
#define DIRECTORY_H

#include <string>
#include <iostream>
#include <vector>
#include "Main/Include/Entry.hpp"
#include "Main/Include/Visitor.hpp"

class Directory : public Entry 
{
public:
  Directory(std::string name);
  /** 名前を得る */
  std::string getName();
  /** サイズを得る */
  int getSize();
  /** エントリの追加 */
  Entry* add(Entry* entry);
  /** 一覧を表示する */
  void printList();
  /** エントリの一覧 */
  void printList(std::string prefix) override;
  /** 訪問者の受け入れ */
  void accept(Visitor* v);
  /** ディレクトリのvectorを得る */
  std::vector<Entry*> getDirectory();

private:
  std::string name;
  std::vector<Entry*> directory;
};

#endif