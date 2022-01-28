/** 
 * @file Entry.cpp
 * Entryクラスのソースファイル
 * 
 * @author bigface / created on 2022/01/26
*/

#include "Main/Include/Entry.hpp"
#include "Main/Include/FileTreatmentException.hpp"

Entry* Entry::add(Entry* entry) {
  throw new FileTreatmentException("ERROR!");
}

void Entry::printList() {
  this->printList("");
}

std::string Entry::toString() {
  return this->getName() + " (" + std::to_string(this->getSize()) + ")";
}

