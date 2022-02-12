/**
 * @file Memento.cpp
 * 
 * Mementoクラスのソースファイル
 * @author bigface / created on 2022/02/12
 */

#include "Main/Include/Memento.hpp"

Memento::Memento(int money)
:money_(money) {}

int Memento::getMoney()
{
  return money_;
}

void Memento::addFruit(std::string fruit)
{
  fruits_.push_back(fruit);
}

std::vector<std::string> Memento::getFruits()
{
  return fruits_;
}