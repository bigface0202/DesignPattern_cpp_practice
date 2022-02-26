/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2021/11/29
 */
#include <stdio.h>
#include <iostream>

#include "Main/Include/PrinterProxy.hpp"

int main( int argc, char *argv[] )
{
  Printable *p = new PrinterProxy("Alice");
  std::cout << "名前は現在" << p->getPrinterName() << "です。" << std::endl;
  p->setPrinterName("Bob");
  std::cout << "名前は現在" << p->getPrinterName() << "です。" << std::endl;
  p->print("Hello, world.");
}