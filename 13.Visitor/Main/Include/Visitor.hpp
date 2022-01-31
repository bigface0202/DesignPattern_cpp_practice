/**
 * @file Visitor.hpp
 * 
 * Visitorクラス
 * 「訪問者」を表す抽象クラス。
 * 訪問先を渡り歩き、処理を行う
 * @author bigface / created on 2022/01/29
 */

#ifndef VVISITOR_H
#define VVISITOR_H

// 循環参照となる場合は、ヘッダーではクラス名だけ宣言しておく。
class File;
class Directory;

class Visitor
{
public:
  /** デストラクタ */
  virtual ~Visitor() {}

  /** Fileを訪問する */
  virtual void visit(File* file) = 0;

  /** Directoryを訪問する */
  virtual void visit(Directory* directory) = 0;
};

#endif