/**
 * @file Printer.cpp
 * 
 * 「本人」を表すクラス（代理人であるProxyが存在する）のソースファイル
 * 
 * @author bigface / created on 2022/02/26
 */

#include "Main/Include/Printer.hpp"

Printer::Printer(std::string name)
:name_(name)
{
  heavyJob("Printerのインスタンスを生成中");
}

void Printer::setPrinterName(std::string name)
{
  name_ = name;
}

std::string Printer::getPrinterName()
{
  return name_;
}

void Printer::print(std::string str)
{
 std::cout << "=== " << name_ << " ===" << std::endl;
 std::cout << str << std::endl; 
}

void Printer::heavyJob(std::string msg)
{
  std::cout << msg << std::endl;
  for (int i = 0; i < 5; i++)
  {
    std::cout << ".";
    usleep(100* 1000);
  }
  std::cout << std::endl;
  std::cout << "完了" << std::endl;
}

