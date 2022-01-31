/**
 * @file FiletreatmentException.hpp
 * 
 * FiletreatmentExceptionクラス
 * ファイルに対してaddメソッドを呼び出してしまったときに投げられる例外
 * @author bigface / created on 2022/01/26
 */

#ifndef VEXCEPTION_H
#define VEXCEPTION_H

#include <string>

class FileTreatmentException
{
public:
  FileTreatmentException(const std::string msg) : msg(msg) {};
  const std::string what() { return msg; };

private:
  const std::string msg;
};

#endif