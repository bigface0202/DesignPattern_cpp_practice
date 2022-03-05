/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2022/03/05
 */
#include <stdio.h>
#include <iostream>
#include "Main/Include/Invoker.hpp"
#include "Main/Include/Receiver.hpp"
#include "Main/Include/SimpleCommand.hpp"
#include "Main/Include/ComplexCommand.hpp"

int main( int argc, char *argv[] )
{
  Invoker *invoker = new Invoker;
  invoker->setOnStart(new SimpleCommand("Say Hi!"));
  Receiver *receiver = new Receiver;
  invoker->setOnFinish(new ComplexCommand(receiver, "Send email", "Save report"));
  invoker->doSomethingImportant();

  delete invoker;
  delete receiver;

  return 0;
}