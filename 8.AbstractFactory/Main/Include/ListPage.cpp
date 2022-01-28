/**
 * @file ListPage.cpp
 * 
 * ListPageクラスのソースファイル
 * @author bigface / created on 2022/01/11
 */

#include "Main/Include/ListPage.hpp"

using namespace factory;

ListPage::ListPage(std::string title, std::string author)
:Page(title, author) {}

std::string ListPage::makeHTML()
{
  std::stringstream buffer;
  buffer << "<html><head><title>" + title + "</title></head></html>";
  buffer << "<body>\n";
  buffer << "<h1>" + title + "</h1>\n";
  buffer << "<ul>\n";
  for (auto item : content)
  {
    buffer << item->makeHTML();
  }
  buffer << "</ul>";
  buffer << "<hr><address>" + author + "</address>";
  buffer << "</body></html>\n";

  return buffer.str();
}