/**
 * @file Command.hpp
 * 
 * Commandインターフェース。
 * 命令を実行するmethodを宣言する。
 * @author bigface / created on 2022/03/05
 */

#ifndef COMMAND_H
#define COMMAND_H

class Command
{
public:
  virtual ~Command() {}

  virtual void execute() = 0;
};

#endif