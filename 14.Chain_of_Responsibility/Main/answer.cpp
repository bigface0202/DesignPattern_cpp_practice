/**
 * @file answer.cpp
 * Chain of Responsibilityパターン
 * 処理をたらい回しにする。
 * 
 * @author bigface / created on 2022/02/02
 */
#include <stdio.h>
#include <iostream>
#include "Main/Include/Support.hpp"
#include "Main/Include/LimitSupport.hpp"
#include "Main/Include/NoSupport.hpp"
#include "Main/Include/OddSupport.hpp"
#include "Main/Include/SpecialSupport.hpp"

int main( int argc, char *argv[] )
{
  Support *alice = new NoSupport("Alice");
  Support *bob = new LimitSupport("Bob", 100);
  Support *charlie = new SpecialSupport("Charlie", 429);
  Support *diana = new LimitSupport("Diana", 200);
  Support *elmo = new OddSupport("Elmo");
  Support *fred = new LimitSupport("Fled", 300);
  // 連鎖の形成
  alice->setNext(bob)->setNext(charlie)->setNext(diana)->setNext(elmo)->setNext(fred);
  for (int i = 0; i < 500; i += 33)
  {
    alice->support(new Trouble(i));
  }
}