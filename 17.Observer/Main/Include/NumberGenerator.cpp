/**
 * @file NumberGenerator.cpp
 * 
 * NumberGeneratorクラスのソースファイル
 * @author bigface / created on 2022/02/10
 */

#include "Main/Include/NumberGenerator.hpp"

void NumberGenerator::addObserver(Observer *observer)
{
  observers_.push_back(observer);
}

void NumberGenerator::deleteObserver(Observer *observer)
{
  observers_.erase(std::remove(observers_.begin(), observers_.end(), observer), observers_.end());
}

void NumberGenerator::notifyObservers()
{
  for (auto obs : observers_)
  {
    obs->update(this);
  }
}