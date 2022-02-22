/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2022/02/22
 */
#include <stdio.h>
#include <iostream>
#include <unistd.h>

#include "Main/Include/SafeFrame.hpp"

int main( int argc, char *argv[] )
{
  SafeFrame *frame = new SafeFrame();

  for (int hour = 0; hour < 24; hour++)
  {
    frame->setClock(hour);
    frame->actionPerformed();
    usleep(100 * 1000);
  }
}