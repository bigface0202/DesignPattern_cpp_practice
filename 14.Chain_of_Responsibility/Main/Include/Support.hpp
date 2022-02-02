/**
 * @file Support.hpp
 * 
 * Supportクラス
 * トラブルを解決する連鎖を作るための抽象クラス
 * @author bigface / created on 2022/02/02
 */

#ifndef SUPPORT_H
#define SUPPORT_H

#include <string>
#include <iostream>
#include "Main/Include/Trouble.hpp"

class Support
{
public:
  /** コンストラクタ */
  Support(std::string name);

  /** デストラクタ */
  virtual ~Support() {};

  /** たらい回し先を指定 */
  Support* setNext(Support *next);

  /** トラブル解決の手順 */
  void support(Trouble *trouble);

  /** 文字列表現 */
  std::string toString();

protected:
  /** 解決用メソッド */
  virtual bool resolve(Trouble *trouble) = 0;

  /** 未解決 */
  void fail(Trouble *trouble);

  /** 解決 */
  void done(Trouble *trouble);

private:
  /** トラブル解決者の名前 */
  std::string _name;

  /** たらい回しの先 */
  Support *_next;
};

#endif