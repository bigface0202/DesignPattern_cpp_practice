/**
 * @file GraphObserver.cpp
 * 
 * GraphObserverクラスのソースファイル
 * @author bigface / created on 2022/02/10
 */

#include "Main/Include/GraphObserver.hpp"

void GraphObserver::update(NumberGenerator *generator)
{
  std::cout << "GraphObserver:" << std::endl;
  int count = generator->getNumber();
  for (int i = 0; i < count; i++)
  {
    std::cout << "*";
  }
  std::cout << std::endl;
  usleep(100 * 1000);
}