/**
 * @file Tray.cpp
 * 
 * Trayクラスのソースファイル
 * Itemクラスの派生クラス
 * 複数のLinkクラスやTrayクラスを集めてひとまとまりにする
 * @author bigface / created on 2021/12/15
 */

#include "Main/Include/Tray.hpp"

using namespace factory;

Tray::Tray(std::string caption)
: Item(caption) {}

void Tray::add(Item* item)
{
  this->tray.push_back(item);
}