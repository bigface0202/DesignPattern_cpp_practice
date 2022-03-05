/**
 * @file Invoker.cpp
 * 
 * Invokerクラスのソースファイル
 * @author bigface / created on 2022/03/05
 */

#include "Main/Include/Invoker.hpp"

Invoker::~Invoker()
{
  delete on_start_;
  delete on_finish_;
}

void Invoker::setOnStart(Command *command)
{
  on_start_ = command;
}

void Invoker::setOnFinish(Command *command)
{
  on_finish_ = command;
}

void Invoker::doSomethingImportant()
{
  std::cout << "Invoker: Does anybody want something done before I begin?" << std::endl;
  if (on_start_) {
    on_start_->execute();
  }
  std::cout << "Invoker: ...doing something really important..." << std::endl;
  std::cout << "Invoker: Does anybody want something done after I finish?" << std::endl;
  if (on_finish_) {
    on_finish_->execute();
  }
}