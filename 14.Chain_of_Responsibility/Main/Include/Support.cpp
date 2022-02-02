/**
 * @file Support.cpp
 * 
 * Supportクラスのソースファイル
 * @author bigface / created on 2022/02/02
 */

#include "Main/Include/Support.hpp"

Support::Support(std::string name)
:_name(name) {}

Support* Support::setNext(Support *next)
{
  _next = next;
  return _next;
}

void Support::support(Trouble *trouble)
{
  if (resolve(trouble)) {
    done(trouble);
  } else if (_next != NULL) {
    _next->support(trouble);
  } else {
    fail(trouble);
  }
}

std::string Support::toString()
{
  return "[" + _name + "]";
}

void Support::done(Trouble *trouble)
{
  std::cout << trouble->toString() << " is resolved by " << this->toString() << "." << std::endl; 
}

void Support::fail(Trouble *trouble)
{
  std::cout << trouble->toString() << " cannot be resolved." << std::endl;
}
