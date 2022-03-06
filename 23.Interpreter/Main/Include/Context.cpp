/**
 * @file Context.cpp
 * 
 * Contextクラスのソースファイル。
 * 
 * @author bigface / created on 2022/03/06
 */

#include "Main/Include/Context.hpp"

Context::Context(std::string text)
:text_(text) {
  nextToken();
}

std::string Context::nextToken()
{
  if ((pos_ = text_.find(delim_)) != std::string::npos) {
    currentToken_ = text_.substr(0, pos_);
    text_.erase(0, pos_ + delim_.length());
  } else if (!text_.empty()) {
    currentToken_ = text_;
    text_ = "";
  } else {
    currentToken_ = "";
  }

  return currentToken_;
}

std::string Context::currentToken()
{
  return currentToken_;
}

void Context::skipToken(std::string token)
{
  if (token != currentToken_) {
    throw new ParseException("Warning:" + token + " is expected, but " + currentToken_ + " is found.");
  } 
  nextToken();
}

int Context::currentNumber()
{
  int number = 0;

  try {
    number = std::stoi(currentToken_);
  } catch (const std::invalid_argument& e) {
    throw new ParseException("Warning: Invalid argument.");
  }

  return number;
}