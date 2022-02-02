/**
 * @file SpecialSupport.hpp
 * 
 * SpecialSupportクラス
 * Supportのサブクラス
 * 指定した番号のトラブルに限って処理をする
 * @author bigface / created on 2022/02/02
 */

#ifndef SPECIALSUPPORT_H
#define SPECIALSUPPORT_H

#include <string>
#include "Main/Include/Support.hpp"

class SpecialSupport: public Support
{
public:
  /** コンストラクタ */
  SpecialSupport(std::string name, int number)
  :Support(name), _number(number) {}

  /** デストラクタ */
  ~SpecialSupport() {}

protected:
  /** 解決メソッド */
  bool resolve(Trouble *trouble)
  {
    if (trouble->getNumber() == _number) {
      return true;
    } else {
      return false;
    }
  }

private:
  int _number;
};


#endif