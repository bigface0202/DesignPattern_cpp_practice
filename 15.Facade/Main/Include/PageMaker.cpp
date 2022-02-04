/**
 * @file PageMaker.cpp
 * 
 * PageMakerクラスのソースファイル
 * @author bigface / created on 2022/02/04
 */

#include "Main/Include/PageMaker.hpp"

void PageMaker::makeWelcomePage(std::string mailaddr, std::string filename)
{
  // staticの関数はオブジェクトを生成しなくてもコールできる。
  std::map<std::string, std::string> mailmap = Database::getMap("/media/yusuke/Moon/GitHub/DesignPatternJavaCpp/15.Facade/Main/maildata.txt");
  std::string username = mailmap[mailaddr];
  HtmlWriter *writer = new HtmlWriter(filename);
  writer->title("Welcome to " + username + "'s page!");
  writer->paragraph(username + "のページへようこそ。");
  writer->paragraph("メール待っていますね。");
  writer->mailto(mailaddr, username);
  writer->close();
  std::cout << filename << " is created for " << mailaddr << "(" << username << ")" << std::endl;
}