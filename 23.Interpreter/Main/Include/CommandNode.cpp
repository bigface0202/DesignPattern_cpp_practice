/**
 * @file CommandNode.hpp
 * 
 * CommandNodeクラスのソースファイル。
 * @author bigface / created on 2022/03/06
 */

#include "Main/Include/CommandNode.hpp"

void CommandNode::parse(Context *context)
{
  if (context->currentToken() == "repeat") {
    node = new RepeatCommandNode();
    node->parse(context);
  } else {
    node = new PrimitiveCommandNode();
    node->parse(context);
  }
}

std::string CommandNode::toString()
{
  return node->toString();
}