/**
 * @file Gamer.hpp
 * 
 * Gamerクラス
 * ゲームを行う主人公を表すクラス。
 * @author bigface / created on 2022/02/12
 */

#ifndef GAMER_H
#define GAMER_H

#include <string>
#include <random>
#include <vector>
#include <iostream>
#include <algorithm>

#include "Main/Include/Memento.hpp"

class Gamer 
{
public:
  /** コンストラクタ */
  Gamer(int money);

  /** 現在の所持金を得る */
  int getMoney();

  /** 賭ける */
  void bet();

  /** スナップショットを撮る（状態を保存する） */
  Memento* createMemento();

  /** アンドゥを行う */
  void restoreMemento(Memento *mementoo);

  /** 文字列表現 */
  std::string toString();

private:
  int money_;
  std::vector<std::string> fruits_;
  std::random_device seed_gen_;
  // 一様初期化を行うことで、乱数のメンバ変数を定義することができる。
  std::default_random_engine engine_{ seed_gen_() };
  std::uniform_int_distribution<> dist_{1, 6};
  std::vector<std::string> const fruitsname_ = {
    "リンゴ", "ぶどう", "バナナ", "みかん"
  };

  /** フルーツを1個取得し、「おいしい」を付けるかどうかを乱数で決定する */
  std::string getFruit();
};

#endif