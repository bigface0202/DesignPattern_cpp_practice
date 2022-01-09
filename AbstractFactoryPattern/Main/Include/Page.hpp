/**
 * @file Page.hpp
 * 
 * ページクラス
 * HTMLページ全体を抽象的に表現したクラス
 * Factoryの中ではこれが抽象的な製品となる
 * @author bigface / created on 2021/12/15
 */
#ifndef PAGE_H
#define PAGE_H

#include <string>
#include <vector>

#include <Main/Include/Item.hpp>

namespace factory {
class Page {
public:
  Page(std::string title, std::string author);

  ~Page();

  void add(Item* item);

  void output();

  virtual std::string makeHTML() = 0;

private:
  std::string title;
  std::string author;
  std::vector<Item*> content;
};
}

#endif