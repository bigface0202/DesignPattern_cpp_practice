/**
 * @file LimitSupport.hpp
 * 
 * LimitSupportクラス
 * Supportのサブクラス
 * limitで指定した番号未満のトラブルのみ解決する
 * @author bigface / created on 2022/02/02
 */

#ifndef LIMITSUPPORT_H
#define LIMITSUPPORT_H

#include "Main/Include/Support.hpp"
#include <string>

class LimitSupport: public Support
{
public:
  /** コンストラクタ */
  LimitSupport(std::string name, int limit)
  :Support(name), _limit(limit) {}
  
  /** デストラクタ */
  ~LimitSupport() {}
  
protected:
  /** 解決用メソッド */
  bool resolve(Trouble *trouble)
  {
    if (trouble->getNumber() < _limit) {
      return true;
    } else {
      return false;
    }
  }

private:
  int _limit;
};

#endif