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
  virtual Link* createLink(std::string caption, std::string url) = 0;
  virtual Tray* createTray(std::string caption) = 0;
  virtual Page* createPage(std::string title, std::string author) = 0;

private:
  Factory* factory;
};

}

#endif