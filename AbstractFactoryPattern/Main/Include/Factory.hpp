/**
 * @file Factory.hpp
 * 
 * ファクトリークラス
 * 抽象的な工場
 * @author bigface / created on 2021/12/15
 */

#ifndef FACTORY_H
#define FACTORY_H

#include<string>

#include "Main/Include/Link.hpp"
#include "Main/Include/Tray.hpp"
#include "Main/Include/Page.hpp"

namespace factory {
class Factory {
public:
  Factory(Factory* factory);

public:
  virtual Link* createLink(std::string caption, std::string url);
  virtual Tray* createTray(std::string caption);
  virtual Page* createPage(std::string title, std::string author);

private:
  Factory* factory;
};

}

#endif