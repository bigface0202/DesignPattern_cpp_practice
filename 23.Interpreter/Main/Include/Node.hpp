/**
 * @file Node.hpp
 * 
 * Nodeクラス。
 * 構文木を構成する最上位の抽象クラス。
 * @author bigface / created on 2022/03/06
 */

#ifndef NODE_H
#define NODE_H

#include <string>
#include "Main/Include/Context.hpp"

/**
 * @brief 
 * 構文解析を行うためのparseメソッドのみを宣言している。
 */
class Node
{
public:
  /** 構文解析を行う */
  virtual void parse(Context *context) = 0;

  virtual std::string toString() = 0;
};

#endif