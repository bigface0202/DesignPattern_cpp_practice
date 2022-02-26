/**
 * @file PrinterProxy.cpp
 * 
 * 「代理人」の役割を果たすクラスのソースファイル
 * 
 * @author bigface / created on 2022/02/26
 */

#include "Main/Include/PrinterProxy.hpp"

PrinterProxy::PrinterProxy(std::string name)
:name_(name)
{}

void PrinterProxy::setPrinterName(std::string name)
{
  if (real != nullptr) {
    real->setPrinterName(name);
  }
  name_ = name;
}

std::string PrinterProxy::getPrinterName()
{
  return name_;
}

void PrinterProxy::print(std::string str)
{
  realize();
  real->print(str);
}

void PrinterProxy::realize()
{
  if (real == nullptr) {
    real = new Printer(name_);
  }
}