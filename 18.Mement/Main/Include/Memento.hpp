/**
 * @file Memento.hpp
 * 
 * Mementoクラス
 * 主人公の状態を表すクラス。
 * 状態の保持をここで行う。
 * @author bigface / created on 2022/02/12
 */

#ifndef MEMENT_H
#define MEMENT_H

#include <string>
#include <vector>

class Memento
{
public:
  /** コンストラクタ */
  Memento(int money);

  /** 所持金を得る */
  int getMoney();

  /** フルーツを追加する */
  void addFruit(std::string fruit);

  /** フルーツを得る */
  std::vector<std::string> getFruits();

private:
  /** 所持金 */
  int money_;
  
  /** フルーツ */
  std::vector<std::string> fruits_;
};

#endif