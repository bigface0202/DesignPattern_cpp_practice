/**
 * @file Trouble.hpp
 * 
 * Troubleクラス
 * 発生したトラブルを表現するクラス
 * @author bigface / created on 2022/02/02
 */

#ifndef TROUBLE_H
#define TROUBLE_H

#include <string>

class Trouble
{
public:
  /** コンストラクタ */
  Trouble (int number);

  /** トラブル番号を得る */
  int getNumber();

  /** トラブルの文字列表現 */
  std::string toString();
private:
  int _number;
};

#endif