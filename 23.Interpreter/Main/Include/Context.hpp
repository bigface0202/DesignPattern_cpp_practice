/**
 * @file Context.hpp
 * 
 * Contextクラス。
 * 構文解析に必要なメソッドを提供する。
 * @author bigface / created on 2022/03/06
 */

#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>
#include <stdexcept>
#include "Main/Include/ParseException.hpp"

class Context
{
public:
  /** コンストラクタ
   * delimを指定する。
   */
  Context(std::string text);

  /** 次のトークンを得る */
  std::string nextToken();

  /** 現在のトークンを渡す */
  std::string currentToken();

  /** トークンをスキップする */
  void skipToken(std::string tokne);

  /** 現在の番号を返す */
  int currentNumber();

private:
  /** ミニプログラムの構文 */
  std::string text_;
  /** 現在のトークン */
  std::string currentToken_;
  /** 現在のトークンの位置 */
  size_t pos_ = 0;
  /** 区切り文字 */
  std::string delim_ = " ";
};

#endif