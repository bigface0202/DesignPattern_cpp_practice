/**
 * @file DigitObserver.hpp
 * 
 * DigitObserverクラス
 * Observeした数を表示するObserverクラスの具象クラス。
 * @author bigface / created on 2022/02/10
 */

#ifndef DIGITOBSERVER_H
#define DIGITOBSERVER_H

#include <iostream>
#include <unistd.h>
#include "Main/Include/Observer.hpp"
#include "Main/Include/NumberGenerator.hpp"

class DigitObserver: public Observer
{
public:
  void update(NumberGenerator *generator);
};

#endif