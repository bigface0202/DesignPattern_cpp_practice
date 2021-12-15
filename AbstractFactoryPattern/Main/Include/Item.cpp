/**
 * @file Item.cpp
 * 
 * Itemクラスのソースファイル
 * @author bigface / created on 2021/12/15
 */
#include "Main/Include/Item.hpp"

using namespace factory;

Item::Item(std::string caption)
{
  this->caption = caption;
}