/**
 * @file Directory.cpp
 * 
 * Directoryクラスのソースファイル
 * @author bigface / created on 2022/01/26
 */

#include "Main/Include/Directory.hpp"

Directory::Directory(std::string name)
: name(name) {}

std::string Directory::getName()
{
  return this->name;
}

int Directory::getSize()
{
  int size = 0;
  for (auto entry : this->directory) {
    size += entry->getSize();
  }
  return size;
}

Entry* Directory::add(Entry* entry)
{
  this->directory.push_back(entry);
  return this;
}

// EntryのprintList()を使う場合であっても、関数は定義しないといけない
void Directory::printList()
{
  Entry::printList();
}

void Directory::printList(std::string prefix)
{
  std::cout << prefix << "/" << this->toString() << std::endl;
  for (auto entry : this->directory) {
    entry->printList(prefix + "/" + this->name);
  }
}

std::vector<Entry*> Directory::getDirectory()
{
  return this->directory;
}

void Directory::accept(Visitor* v)
{
  v->visit(this);
}