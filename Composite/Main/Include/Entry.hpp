/**
 * @file Entry.hpp
 * 
 * Entryクラス
 * ディレクトリエントリを表現する抽象クラス。
 * ディレクトリエントリにはファイルとディレクトリの両方が含まれる。
 * @author bigface / created on 2022/01/26
 */

#ifndef ENTRY_H
#define ENTRY_H

#include <string>

class Entry 
{
public:
  /** 名前を得る */
  virtual std::string getName() = 0;
  /** サイズを得る */
  virtual int getSize() = 0;
  /** エントリを追加する */
  Entry* add(Entry* entry);
  /** 文字列表現 */
  std::string toString();
  /** 一覧を表示する */
  void printList();
  /** prefixを前につけて一覧を表示する */
  virtual void printList(std::string prefix) = 0;
};

#endif