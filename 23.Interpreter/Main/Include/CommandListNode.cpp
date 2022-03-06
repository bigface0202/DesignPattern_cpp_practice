/**
 * @file CommandListNode.hpp
 * 
 * CommandListNodeクラスのソースファイル
 * @author bigface / created on 2022/03/06
 */

#include "Main/Include/CommandListNode.hpp"

void CommandListNode::parse(Context *context)
{
  while (true)
  {
    if (context->currentToken().empty()) {
      throw new ParseException("Missing 'end'");
    } else if (context->currentToken() == "end") {
      context->skipToken("end");
      break;
    } else {
      Node *commandNode = new CommandNode();
      commandNode->parse(context);
      list.push_back(commandNode);
    }
  }
}

std::string CommandListNode::toString()
{
  std::stringstream ss;
  for(auto command : list)
  {
    ss << command->toString() << ",";
  }

  return ss.str();
}