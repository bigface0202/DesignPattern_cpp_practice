/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2022/02/23
 */
#include <stdio.h>
#include <iostream>
#include "Main/Include/JPNString.hpp"

int main( int argc, char *argv[] )
{
  if (argv[1] == NULL) {
    std::cout << "Please specify the argument when you execute the code." << std::endl;
    std::cout << "Usage: bazel-bin/Main/Answer 100" << std::endl;
    return -1;
  }

  JPNString* js = new JPNString(argv[1]);
  js->print();
}