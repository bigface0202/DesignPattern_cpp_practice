/**
 * @file ParseException.hpp
 * 
 * ParseExceptionクラス
 * @author bigface / created on 2022/03/06
 */

#ifndef EXCEPTION_H
#define EXCEPTION_H

#include <string>

class ParseException
{
public:
  ParseException(const std::string msg) : msg(msg) {};
  const std::string what() { return msg; };

private:
  const std::string msg;
};
#endif