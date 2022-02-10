/**
 * @file Observer.hpp
 * 
 * Observerクラス
 * 「観察者」を表現するインターフェース（抽象クラス）
 * @author bigface / created on 2022/02/10
 */

#ifndef OBSERVER_H
#define OBSERVER_H

class NumberGenerator;

class Observer
{
public:
  /** NumberGeneratorが更新した旨をObserverに伝えるメソッド */
  virtual void update(NumberGenerator *generator) = 0;
};

#endif