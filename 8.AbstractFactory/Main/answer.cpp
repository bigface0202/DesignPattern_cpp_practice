/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2022/01/11
 */
#include <stdio.h>
#include <iostream>

#include "Main/Include/ListFactory.hpp"

int main( int argc, char *argv[] )
{
  using namespace factory;
  // newによるメモリの動的確保
  ListFactory* factory = new ListFactory();

  Link* asahi = factory->createLink("朝日新聞", "https://google.com");
  Link* yomiuri = factory->createLink("読売新聞", "https://google.com");

  Link* us_yahoo = factory->createLink("Yahoo!", "https://google.com");

  Link* google = factory->createLink("Google", "https://google.com");

  Tray* traynews = factory->createTray("新聞");
  traynews->add(asahi);
  traynews->add(yomiuri);

  Tray* tray_yahoo = factory->createTray("Yahoo");
  tray_yahoo->add(us_yahoo);

  Tray* tray_search = factory->createTray("Search");
  tray_search->add(google);

  Page* page = factory->createPage("LinkPage", "Yusuke Kishishita");
  page->add(traynews);
  page->add(tray_yahoo);
  page->add(tray_search);

  page->output();

  delete factory;
}