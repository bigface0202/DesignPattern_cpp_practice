/**
 * @file GraphObserver.hpp
 * 
 * GraphObserverクラス
 * Observeした数をグラフとして表示するObserverクラスの具象クラス。
 * @author bigface / created on 2022/02/10
 */

#ifndef GRAPHOBSERVER_H
#define GRAPHOBSERVER_H

#include <iostream>
#include <unistd.h>
#include "Main/Include/Observer.hpp"
#include "Main/Include/NumberGenerator.hpp"

class GraphObserver: public Observer
{
public:
  void update(NumberGenerator *generator);
};

#endif