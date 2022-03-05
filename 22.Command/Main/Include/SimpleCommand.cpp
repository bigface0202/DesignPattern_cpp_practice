/**
 * @file SimpleCommand.cpp
 * 
 * 命令の実体クラスのソースファイル
 * @author bigface / created on 2022/03/05
 */

#include "Main/Include/SimpleCommand.hpp"

SimpleCommand::SimpleCommand(std::string pay_load)
: pay_load_(pay_load) {}

void SimpleCommand::execute()
{
  std::cout << "SimpleCommand: See, I can do simple things like printing (" << pay_load_ << ")" << std::endl;
}