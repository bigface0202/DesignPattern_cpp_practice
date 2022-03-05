/**
 * @file Invoker.hpp
 * 
 * Invokerクラス
 * 命令の実行を開始する役。
 * Commandを受け取り、実行する。
 * @author bigface / created on 2022/03/05
 */

#ifndef INVOKER_H
#define INVOKER_H

#include <iostream>
#include "Main/Include/Command.hpp"

class Invoker
{
public:
  /** デストラクタ */
  ~Invoker();

  void setOnStart(Command *command);

  void setOnFinish(Command *command);

  /** 
   * InvokerはいかなるCommandの実体クラスやReceiverに依らない
   * ただ、executeするのみである。
  */
  void doSomethingImportant();

private:
  Command *on_start_;
  Command *on_finish_;
};

#endif