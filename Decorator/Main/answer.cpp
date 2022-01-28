/**
 * @file answer.cpp
 * 
 * デコレーターパターン
 * @author bigface / created on 2021/01/28
 */
#include <stdio.h>
#include <iostream>
#include "Main/Include/StringDisplay.hpp"
#include "Main/Include/SideBorder.hpp"
#include "Main/Include/FullBorder.hpp"

int main( int argc, char *argv[] )
{
  Display* b1 = new StringDisplay("Hello, world.");
  Display* b2 = new SideBorder(b1, "#");
  Display* b3 = new FullBorder(b2);

  b1->show();
  b2->show();
  b3->show();

  Display* b4 = 
    new SideBorder(
      new FullBorder(
        new FullBorder(
          new SideBorder(
            new FullBorder(new StringDisplay("こんにちは")),
            "*"
          )
        )
      ),
      "/"
    );
  b4->show();
}