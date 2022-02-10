/**
 * @file NumberGenerator.hpp
 * 
 * NumberGeneratorクラス
 * 数を生成する抽象クラス。
 * @author bigface / created on 2022/02/10
 */

#ifndef NUMBERGENERATOR_H
#define NUMBERGENERATOR_H

#include <vector>
#include <algorithm>
#include "Main/Include/Observer.hpp"

class NumberGenerator
{
public:
  /** Observerを追加 */
  void addObserver(Observer *observer);
  
  /** Observerを削除 */
  void deleteObserver(Observer *observer);

  /** 追加されている全Observerに変更を通知 */
  void notifyObservers();

  /** 数を取得 */
  virtual int getNumber() = 0;

  /** 数を生成 */
  virtual void execute() = 0;

private:
  /** Observer達を保持 */
  std::vector<Observer*> observers_;
};

#endif