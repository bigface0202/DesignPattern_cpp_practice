/**
 * @file Page.cpp
 * 
 * ページクラスのソースファイル
 * HTMLページ全体を抽象的に表現したクラス
 * Factoryの中ではこれが製品となる
 * @author bigface / created on 2021/12/15
 */
#include <stdio.h>
#include <iostream>
#include <fstream>

#include "Main/Include/Page.hpp"

using namespace factory;

Page::Page(std::string title, std::string author)
:title(title), author(author) {}

void Page::add(Item* item)
{
  this->content.push_back(item);
}

void Page::output()
{
  std::string filename = this->title + ".html";
  std::ofstream writer;

  writer.open(filename, std::ios::out);
  writer << this->makeHTML();
  writer.close();

  std::cout << filename << "を作成しました。" << std::endl;
}