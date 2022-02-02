/**
 * @file OddSupport.hpp
 * 
 * OddSupportクラス
 * Supportのサブクラス
 * 奇数番号のトラブルのみ解決する
 * @author bigface / created on 2022/02/02
 */

#ifndef ODDSUPPORT_H
#define ODDSUPPORT_H

#include <string>
#include "Main/Include/Support.hpp"

class OddSupport: public Support
{
public:
  /** コンストラクタ */
  OddSupport(std::string name)
  :Support(name) {};

  /** デストラクタ */
  ~OddSupport() {};

protected:
  /** 解決用メソッド */
  bool resolve(Trouble *trouble)
  {
    if (trouble->getNumber() % 2 == 1) {
      return true;
    } else {
      return false;
    }
  }
};

#endif