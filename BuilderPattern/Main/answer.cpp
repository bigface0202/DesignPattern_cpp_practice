/**
 * @file answer.cpp
 * 
 * Builderパターン
 * @author bigface / created on 2021/12/12
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

/** 
 * Builderクラス
 * 文章を作るメソッドを宣言している抽象クラス
*/
class Builder 
{
public:
  virtual void makeTitle(std::string title) = 0;
  virtual void makeString(std::string str) = 0;
  virtual void makeItems(std::vector<std::string> items) = 0;
  virtual void close() = 0;
};

/** 
 * Directorクラス
 * 指示役
 * Builderを継承したクラスを使って文章を作り上げる
*/
class Director 
{
public:
  Director(Builder* builder) {
    this->builder = builder;
  }

  void construct() {
    builder->makeTitle("Greeting");
    builder->makeString("朝から昼にかけて");
    builder->makeItems(std::vector<std::string> {"おはようございます", "こんにちは。"});
    builder->makeString("夜に");
    builder->makeItems(std::vector<std::string> {"こんばんは。", "おやすみなさい。", "さようなら。"});
    builder->close();
  }

private:
  Builder* builder;
};

class TextBuilder : public Builder 
{
public:
  void makeTitle(std::string title) {
    this->buffer << "========================" << "\n";
    this->buffer << "「" << title << "」" << "\n";
    this->buffer << "\n";
  }

  void makeString(std::string str) {
    this->buffer << "■" << str << "\n";
    this->buffer << "\n";
  }

  void makeItems(std::vector<std::string> items) {
    for (int i = 0; i < items.size(); i++) {
      this->buffer << items[i] << "\n";
    }
    this->buffer << "\n";
  }

  void close() {
    this->buffer << "========================" << "\n";
  }

  std::string getResult() {
    return buffer.str();
  }

private:
  std::stringstream buffer;
};

class HTMLBuilder : public Builder
{
public:
  void makeTitle(std::string title) {
    this->filename = title + ".html";
    this->writer.open(filename, std::ios::out);
    this->writer << "<html><head><title>" << title << title << "</title></head><body>\n";
    this->writer << "<h1>" << title << "</h1>\n";
  }

  void makeString(std::string str) {
    this->writer << "<p>" << str << "</p>\n";
  }

  void makeItems(std::vector<std::string> items) {
    this->writer << "<ul>\n";
    for (int i = 0; i < items.size(); i++) {
      this->writer << "<li>" << items[i] << "</li>\n";
    }
    this->writer << "</ul>\n";
  }

  void close() {
    this->writer << "</body></html>";
    this->writer.close();
  }

  std::string getResult() {
    return filename;
  }

private:
  std::string filename;
  std::ofstream writer;
};

static void usage () {
  std::cout << "Usage: bazel-bin/Main/Answer plain  プレーンテキストで文書を作成" << std::endl;
  std::cout << "Usage: bazel-bin/Main/Answer html  HTMLファイルで文書を作成" << std::endl;
}

int main( int argc, char *argv[] )
{
  std::cout << argv[1] << std::endl;
  if (argc < 2) {
    usage();
    return -1;
  }

  std::string arg = argv[1];

  if (arg == "plain") {
    TextBuilder* textbuilder = new TextBuilder();
    Director* director = new Director(textbuilder);
    director->construct();
    std::string result = textbuilder->getResult();
    std::cout << result << std::endl;
  } else if (arg == "html") {
    HTMLBuilder* htmlbuilder = new HTMLBuilder();
    Director* director = new Director(htmlbuilder);
    director->construct();
    std::string filename = htmlbuilder->getResult();
    std::cout << filename << "が作成されました。" << std::endl;
  } else {
    usage();
    return -1;
  }
}