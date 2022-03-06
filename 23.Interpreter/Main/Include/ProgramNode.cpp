/**
 * @file ProgramNode.hpp
 * 
 * ProgramNodeクラスのソースファイル
 * @author bigface / created on 2022/03/06
 */

#include "Main/Include/ProgramNode.hpp"

void ProgramNode::parse(Context *context)
{
  context->skipToken("program");
  commandListNode_ = new CommandListNode();
  commandListNode_->parse(context);
}

std::string ProgramNode::toString()
{
  return "[program " + commandListNode_->toString() + "]" ;
}