/**
 * @file NoSupport.hpp
 * 
 * NoSupportクラス
 * Supportのサブクラス
 * 常にfalseを返す
 * @author bigface / created on 2022/02/02
 */

#ifndef NOSUPPORT_H
#define NOSUPPORT_H

#include <string>
#include "Main/Include/Support.hpp"

class NoSupport: public Support
{
public:
  /** コンストラクタ */
  NoSupport(std::string name)
  :Support(name) {}
  
  /** デストラクタ */
  ~NoSupport() {}
  
protected:
  /** 解決用メソッド（何もしない） */
  bool resolve(Trouble *trouble) { return false; }
};

#endif