/**
 * @file Link.hpp
 * 
 * Linkクラス
 * Itemクラスの派生クラス
 * HTMLのリンクを保持する
 * Factoryの中ではこれが製品の部品となる
 * @author bigface / created on 2021/12/15
 */

#ifndef LINK_H
#define LINK_H

#include <string>
#include "Main/Include/Item.hpp"

namespace factory {

class Link : public Item 
{
public:
  Link(std::string caption, std::string url);

  ~Link();

private:
  std::string url;
};

}

#endif