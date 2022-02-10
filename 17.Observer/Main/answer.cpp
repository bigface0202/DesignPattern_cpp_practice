/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2021/11/29
 */
#include <stdio.h>
#include <iostream>

#include "Main/Include/RandomNumberGenerator.hpp"
#include "Main/Include/DigitObserver.hpp"
#include "Main/Include/GraphObserver.hpp"

int main( int argc, char *argv[] )
{
  NumberGenerator *generator = new RandomNumberGenerator();
  Observer *observer1 = new DigitObserver();
  Observer *observer2 = new GraphObserver();
  generator->addObserver(observer1);
  generator->addObserver(observer2);
  generator->execute();
}