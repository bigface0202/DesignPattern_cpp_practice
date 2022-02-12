/**
 * @file Gamer.cpp
 * 
 * Gamerクラスのソースファイル
 * @author bigface / created on 2022/02/12
 */

#include "Main/Include/Gamer.hpp"

Gamer::Gamer(int money)
:money_(money) {}

int Gamer::getMoney()
{
  return money_;
}

void Gamer::bet()
{
  // サイコロをふる
  int dice = dist_(engine_);
  if (dice == 1) {
    money_ += 100;
    std::cout << "所持金が増えました。" << std::endl;
  } else if (dice == 2) {
    money_ /= 2;
    std::cout << "所持金が半分になりました。" << std::endl; 
  } else if (dice == 6) {
    std::string f = getFruit();
    std::cout << "フルーツ" << f << "をもらいました" << std::endl;
    fruits_.push_back(f);
  } else {
    std::cout << "なにもおこりませんでした" << std::endl;
  }
}

Memento* Gamer::createMemento()
{
  Memento *m = new Memento(money_);
  std::string str = "おいしい";

  for (std::string f : fruits_)
  {
    if (std::equal(std::begin(str), std::end(str), std::begin(f))) {
      m->addFruit(f);
    }
  }

  return m;
}

void Gamer::restoreMemento(Memento *memento)
{
  money_ = memento->getMoney();
  fruits_ = memento->getFruits();
}

std::string Gamer::toString()
{
  std::string str;
  str = "[money = " + std::to_string(money_) + ", fruits = ";
  for (std::string f : fruits_)
  {
    str = str + f + ",";
  }

  return str;
}

std::string Gamer::getFruit()
{
  std::string prefix = "";
  int dice = dist_(engine_);
  if (dice % 2 == 0) {
    prefix = "おいしい";
  }
  std::uniform_int_distribution<int> dist_fruits(0, fruitsname_.size());
  return prefix + fruitsname_[dist_fruits(engine_)];
}