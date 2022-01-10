/**
 * @file ListPage.hpp
 * 
 * ListPageクラス
 * 抽象クラスであるPageクラスの実体
 * @author bigface / created on 2022/01/11
 */

#ifndef LISTPAGE_H
#define LISTPAGE_H

#include <iostream>
#include <sstream>

#include "Main/Include/Page.hpp"

namespace factory {

class ListPage : public Page
{
public:
  ListPage(std::string title, std::string author);

  std::string makeHTML();
};

}


#endif