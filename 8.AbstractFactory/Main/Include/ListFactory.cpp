/**
 * @file ListFactory.cpp
 * 
 * ListFactoryクラスのソースファイル
 * @author bigface / created on 2022/01/11
 */

#include "Main/Include/ListFactory.hpp"

using namespace factory;

ListFactory::ListFactory(){}

ListFactory::~ListFactory(){}

Link* ListFactory::createLink(std::string caption, std::string url)
{
  return new ListLink(caption, url);
}

Tray* ListFactory::createTray(std::string caption)
{
  return new ListTray(caption);
}

Page* ListFactory::createPage(std::string title, std::string author)
{
  return new ListPage(title, author);
}