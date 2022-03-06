/**
 * @file PrimitiveCommandNode.hpp
 * 
 * PrimitiveCommandNodeクラスのソースファイル
 * @author bigface / created on 2022/03/06
 */

#include "Main/Include/PrimitiveCommandNode.hpp"

void PrimitiveCommandNode::parse(Context *context)
{
  name_ = context->currentToken();
  context->skipToken(name_);
  if (name_ != "go" && name_ != "right" && name_ != "left") {
    throw new ParseException(name_ + " is undefined");
  }
}

std::string PrimitiveCommandNode::toString()
{
  return name_;
}