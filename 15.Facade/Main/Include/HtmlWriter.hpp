/**
 * @file HtmlWriter.hpp
 * 
 * HtmlWriterクラス
 * Webページを作るクラス
 * @author bigface / created on 2022/02/04
 */

#ifndef HTMLWRITER_H
#define HTMLWRITER_H

#include <fstream>
#include <string>

class HtmlWriter 
{
public:
  /** コンストラクタ */
  HtmlWriter(std::string filename);

  /** デストラクタ */
  ~HtmlWriter() {};

  /** タイトルの出力 */
  void title(std::string title);

  /** 段落の出力 */
  void paragraph(std::string msg);

  /** リンクの出力 */
  void link(std::string href, std::string caption);

  /** メールアドレスの出力 */
  void mailto(std::string mailaddr, std::string username);

  /** 閉じる */
  void close();

private:
  std::ofstream _writer;
};

#endif