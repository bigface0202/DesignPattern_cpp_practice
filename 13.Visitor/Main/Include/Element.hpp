/**
 * @file Element.hpp
 * 
 * Elementクラス
 * 「訪問者（Visitor）」を受け入れるインターフェース。
 * @author bigface / created on 2022/01/29
 */

#ifndef VELEMENT_H
#define VELEMENT_H

#include "Main/Include/Visitor.hpp"

class Element 
{
public:
  /** デストラクタ */
  virtual ~Element() {}
  
  /** 訪問者（Visitor）を受け入れる */
  virtual void accept(Visitor* v) = 0;
};


#endif