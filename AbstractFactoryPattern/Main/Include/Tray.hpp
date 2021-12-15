/**
 * @file Tray.hpp
 * 
 * Trayクラス
 * Itemクラスの派生クラス
 * 複数のLinkクラスやTrayクラスを集めてひとまとまりにする
 * Factoryの中ではこれが製品の部品となる
 * @author bigface / created on 2021/12/15
 */

#ifndef TRAY_H
#define TRAY_H

#include <string>
#include <vector>
#include "Main/Include/Item.hpp"

namespace factory {
class Tray : public Item 
{
public:
  Tray(std::string caption);
  
  ~Tray();

  void add(Item* item);

private:
  std::vector<Item*> tray;
};
}


#endif