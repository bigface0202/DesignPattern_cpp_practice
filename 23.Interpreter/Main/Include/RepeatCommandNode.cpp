/**
 * @file RepeatCommandNode.cpp
 * 
 * RepeatCommandNodeクラスのソースファイル
 * @author bigface / created on 2022/03/06
 */

#include "Main/Include/RepeatCommandNode.hpp"

void RepeatCommandNode::parse(Context *context)
{
  // PrimitiveCommandNodeにたどり着くまで再帰処理になっている。
  context->skipToken("repeat");
  number_ = context->currentNumber();
  context->nextToken();
  commandListNode_ = new CommandListNode();
  commandListNode_->parse(context);
}

std::string RepeatCommandNode::toString()
{
  return "[repeat" + std::to_string(number_) + commandListNode_->toString() + "]";
}