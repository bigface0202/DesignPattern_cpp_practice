/**
 * @file PageMaker.hpp
 * 
 * PageMakerクラス
 * DatabaseクラスとHtmlWriterクラスを組み合わせて、指定したユーザーのWebページを作成する。
 * HtmlWriterクラスのメソッドを呼ぶところはこのクラスが一手に引き受け、
 * 外部に対してはmakeWelcomePageメソッドだけを見せる。
 * @author bigface / created on 2022/02/04
 */

#ifndef PAGEMAKER_H
#define PAGEMAKER_H

#include <string>
#include <map>
#include "Main/Include/Database.hpp"
#include "Main/Include/HtmlWriter.hpp"

class PageMaker
{
public:
  /** ページを作る */
  static void makeWelcomePage(std::string mailaddr, std::string filename);
private:
  /** 
   * コンストラクタ
   * インスタンスは作らないのでprivate宣言する。
   */
  PageMaker() {};
};

#endif