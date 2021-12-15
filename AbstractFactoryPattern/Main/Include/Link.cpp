/**
 * @file Link.cpp
 * 
 * Linkクラスのソースファイル
 * @author bigface / created on 2021/12/15
 */
#include "Main/Include/Link.hpp"

using namespace factory;

// 基本クラスのコンストラクタに引数を渡す場合は、初期化のような形で渡す
Link::Link(std::string caption, std::string url)
: Item(caption)
{
  this->url = url;
}