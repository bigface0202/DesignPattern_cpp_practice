/**
 * @file Element.hpp
 * 
 * Elementクラス
 * 「訪問者（Visitor）」を受け入れるインターフェース。
 * @author bigface / created on 2022/01/29
 */

#ifndef ELEMENT_H
#define ELEMENT_H

#include "Main/Include/Visitor.hpp"

class Element 
{
public:
  virtual void accept(Visitor* v);
};


#endif