/**
 * @file File.cpp
 * 
 * Fileクラスのソースファイル
 * @author bigface / created on 2022/01/26
 */

#include "Main/Include/File.hpp"

File::File(std::string name, int size)
: name(name), size(size) {}

std::string File::getName()
{
  return this->name;
}

int File::getSize()
{
  return this->size;
}

void File::printList()
{
  Entry::printList();
}

void File::printList(std::string prefix)
{
  std::cout << prefix << "/" << this->toString() << std::endl;
}

void File::accept(Visitor* v)
{
  // thisはポインタになるので、visitの引数もポインタにする必要がある
  v->visit(this);
}