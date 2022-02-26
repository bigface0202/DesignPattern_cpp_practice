/**
 * @file PrinterProxy.hpp
 * 
 * 「代理人」の役割を果たすクラス
 * 
 * @author bigface / created on 2022/02/26
 */

#ifndef PRINTERPROXY_H
#define PRINTERPROXY_H

#include <string>
#include "Main/Include/Printable.hpp"
#include "Main/Include/Printer.hpp"

class PrinterProxy: public Printable
{
public:
  /** コンストラクタ */
  PrinterProxy(std::string name);

  /** 名前の設定 */
  void setPrinterName(std::string name);

  /** 名前の取得 */
  std::string getPrinterName();

  /** 表示 */
  void print(std::string str);


private:
  std::string name_;
  Printer *real;

  /** 「本人」を作成 */
  void realize();
};

#endif