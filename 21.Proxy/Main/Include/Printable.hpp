/**
 * @file Printable.hpp
 * 
 * PrinterProxyクラスとPrinterクラスを同一視するためのインタフェース
 * @author bigface / created on 2022/02/26
 */

#ifndef PRINTABLE_H
#define PRINTABLE_H

#include <string>

class Printable {
public:
  virtual void setPrinterName(std::string name) = 0;
  virtual std::string getPrinterName() = 0;
  virtual void print(std::string str) = 0;
};

#endif