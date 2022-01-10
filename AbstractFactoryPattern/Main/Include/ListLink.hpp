/**
 * @file ListLink.hpp
 * 
 * ListLinkクラス
 * 抽象クラスであるLinkクラスの実体
 * @author bigface / created on 2022/01/11
 */

#ifndef LISTLINK_H
#define LISTLINK_H

#include <string>

#include "Main/Include/Link.hpp"

namespace factory {

class ListLink : public Link
{
public:
  ListLink(std::string caption, std::string url);

  std::string makeHTML();
};

}

#endif