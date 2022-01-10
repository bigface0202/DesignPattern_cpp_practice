/**
 * @file Item.hpp
 * 
 * アイテムクラス
 * LinkやTrayのスーパークラスとなる
 * 各派生クラスにおける項目を指す
 * Factoryの中ではこれが製品の部品となる
 * @author bigface / created on 2021/12/15
 */

#ifndef ITEM_H
#define ITEM_H

#include<string>

namespace factory {

class Item {
public:
  Item(std::string caption);

  ~Item();

  virtual std::string makeHTML() = 0;

// protectedにしておくことで、派生クラスにおいてもアクセスできるようになる。
protected:
  std::string caption;
};

}

#endif 