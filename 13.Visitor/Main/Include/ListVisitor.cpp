/** 
 * @file ListVisitor.cpp
 * ListVisitorのソースファイル
 * 
 * @author bigface / created on 2022/01/29
*/

#include "Main/Include/ListVisitor.hpp"
#include "Main/Include/File.hpp"
#include "Main/Include/Directory.hpp"

void ListVisitor::visit(File* file)
{
  std::cout << this->currentDir << "/" << file->toString() << std::endl;
}

void ListVisitor::visit(Directory* directory)
{
  std::cout << this->currentDir << "/" << directory->toString() << std::endl;
  std::string savedir = this->currentDir;
  this->currentDir = this->currentDir + "/" + directory->getName();
  auto dirs = directory->getDirectory();

  for (auto entry : dirs) {
    entry->accept(this); 
  }

  this->currentDir = savedir;
}