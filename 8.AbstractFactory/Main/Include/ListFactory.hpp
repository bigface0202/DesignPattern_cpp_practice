/**
 * @file ListFactory.hpp
 * 
 * ListFactoryクラス
 * Factoryクラスの派生クラス
 * @author bigface / created on 2022/01/11
 */

#ifndef LISTFACTORY_H
#define LISTFACTORY_H

#include <string>

#include "Main/Include/ListLink.hpp"
#include "Main/Include/ListTray.hpp"
#include "Main/Include/ListPage.hpp"
#include "Main/Include/Factory.hpp"

namespace factory {

class ListFactory : public Factory 
{
public:
  // ヘッダーで定義した関数はちゃんとソース側でも中身を定義しなければならない
  // （空だとしても）
  ListFactory();
  virtual ~ListFactory();

  Link* createLink(std::string caption, std::string url);
  Tray* createTray(std::string caption);
  Page* createPage(std::string title, std::string author);
};

}


#endif