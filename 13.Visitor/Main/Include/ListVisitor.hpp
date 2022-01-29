/**
 * @file ListVisitor.hpp
 * 
 * ListVisitorクラス
 * Visitorクラスのサブクラス。
 * データ構造を渡り歩きながら一覧を表示するためのクラス
 * @author bigface / created on 2022/01/29
 */

#ifndef LISTVISITOR_H
#define LISTVISITOR_H

#include <string>
#include <iostream>
#include "Main/Include/Visitor.hpp"

class ListVisitor: public Visitor
{
public:
  /** ファイルを訪問したときに呼ばれる */
  void visit(File* file);
  /** ディレクトリを訪問したときに呼ばれる */
  void visit(Directory* directory);

private:
  std::string currentDir = "";
};

#endif