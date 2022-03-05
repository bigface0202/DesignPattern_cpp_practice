/**
 * @file SimpleCommand.hpp
 * 
 * 命令の実体クラス
 * @author bigface / created on 2022/03/05
 */

#ifndef SIMPLECOMMAND_H
#define SIMPLECOMMAND_H

#include <string>
#include <iostream>
#include "Main/Include/Command.hpp"

class SimpleCommand: public Command
{
public:
  /** コンストラクタ */
  explicit SimpleCommand(std::string pay_load);

  void execute();

private:
  std::string pay_load_;
};

#endif