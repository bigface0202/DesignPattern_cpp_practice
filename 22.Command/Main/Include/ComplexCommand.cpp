/**
 * @file ComplexCommand.hpp
 * 
 * ComplexCommandのソースファイル
 * @author bigface / created on 2022/03/05
 */

#include "Main/Include/ComplexCommand.hpp"

ComplexCommand::ComplexCommand(Receiver* receiver, std::string a, std::string b)
:receiver_(receiver), a_(a), b_(b) {}

void ComplexCommand::execute()
{
  std::cout << "ComplexCommand: Complex stuff should be done by a receiver object" << std::endl;
  receiver_->doSomething(a_);
  receiver_->doSomethingElse(b_);
}