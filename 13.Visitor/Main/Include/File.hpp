/**
 * @file File.hpp
 * 
 * Fileクラス
 * ファイルを表現するクラス。
 * Entryクラスのサブクラス。
 * @author bigface / created on 2022/01/29
 */

#ifndef VFILE_H
#define VFILE_H

#include <string>
#include <iostream>
#include "Main/Include/Entry.hpp"

// 循環参照となる場合は、ヘッダーではクラス名だけ宣言しておく。
class Visitor;

class File : public Entry 
{
public:
  /** コンストラクタ */
  File(std::string name, int size);

  /** ファイル名を取得 */
  std::string getName();

  /** ファイルサイズを取得 */
  int getSize();

  /** Entryから継承したacceptの実体 */
  void accept(Visitor* v); // Visitorを継承したサブクラスを受け入れるために、ポインタにする必要がある

protected:
  /** 一覧を表示する */
  void printList();

  /** エントリの一覧 */
  void printList(std::string prefix);

private:
  /** ファイル名 */
  std::string name;

  /** ファイルサイズ */
  int size;
};

#endif