/**
 * @file Visitor.hpp
 * 
 * Visitorクラス
 * 「訪問者」を表す抽象クラス。
 * 訪問先を渡り歩き、処理を行う
 * @author bigface / created on 2022/01/29
 */

#ifndef VISITOR_H
#define VISITOR_H

#include "Main/Include/File.hpp"
#include "Main/Include/Directory.hpp"

class Visitor
{
public:
  virtual ~Visitor(){};
  virtual void visit(File* file) = 0;
  virtual void visit(Directory* directory) = 0; // メソッドのoverload
};

#endif