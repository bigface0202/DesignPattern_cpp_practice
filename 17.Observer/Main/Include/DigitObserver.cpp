/**
 * @file DigitObserver.hpp
 * 
 * DigitObserverクラスのソースファイル
 * @author bigface / created on 2022/02/10
 */

#include "Main/Include/DigitObserver.hpp"

void DigitObserver::update(NumberGenerator *generator)
{
  std::cout << generator->getNumber() << std::endl;
  // usleepはマイクロセコンド単位
  usleep(100 * 1000);
}