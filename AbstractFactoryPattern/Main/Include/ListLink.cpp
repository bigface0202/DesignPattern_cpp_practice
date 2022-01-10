/**
 * @file ListLink.cpp
 * 
 * ListLinkクラスのソースファイル
 * @author bigface / created on 2022/01/11
 */

#include "Main/Include/ListLink.hpp"

using namespace factory;

ListLink::ListLink(std::string caption, std::string url)
: Link(caption, url) {}

std::string ListLink::makeHTML() {
  return " <li><a href=\"" + url + "\">" + caption + "</a></li>\n";
}