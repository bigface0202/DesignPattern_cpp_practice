/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2021/11/29
 */
#include <stdio.h>
#include <iostream>
#include <unistd.h>

#include "Main/Include/Memento.hpp"
#include "Main/Include/Gamer.hpp"

int main( int argc, char *argv[] )
{
  Gamer *gamer = new Gamer(100);
  Memento *memento = gamer->createMemento();

  for (int i = 0; i < 100; i++)
  {
    std::cout << "====" << i << std::endl;
    std::cout << "現状:" << gamer->toString() << std::endl;

    // ゲームを進める
    gamer->bet();

    std::cout << "所持金は" <<  gamer->getMoney() <<  "円になりました。" << std::endl;

    if (gamer->getMoney() > memento->getMoney()) {
      std::cout << "だいぶ増えたので、現在の状態を保存しておこう" << std::endl;
      memento = gamer->createMemento();
    } else if (gamer->getMoney() < memento->getMoney() / 2) {
      std::cout << "だいぶ減ったので、以前の状態に復帰しよう" << std::endl;
      gamer->restoreMemento(memento);
    }

    usleep(100 * 1000);
  }

  delete gamer;
  delete memento;

  return -1;
}