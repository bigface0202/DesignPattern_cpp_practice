/**
 * @file Printer.hpp
 * 
 * 「本人」を表すクラス（代理人であるProxyが存在する）
 * 
 * @author bigface / created on 2022/02/26
 */

#ifndef PRINTER_H
#define PRINTER_H

#include <string>
#include <unistd.h>
#include <iostream>
#include "Main/Include/Printable.hpp"

class Printer: public Printable
{
public:
  /** コンストラクタ */
  Printer(std::string name);

  /** 名前の設定 */
  void setPrinterName(std::string name);

  /** 名前の取得 */
  std::string getPrinterName();

  /** 名前付きで表示 */
  void print(std::string str);

private:
  std::string name_;

  /** 重い作業 */
  void heavyJob(std::string msg);

};

#endif