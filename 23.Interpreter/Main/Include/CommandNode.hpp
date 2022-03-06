/**
 * @file CommandNode.hpp
 * 
 * CommandNodeクラス。
 * <command>に対応。
 * @author bigface / created on 2022/03/06
 */

#ifndef COMMANDNODE_H
#define COMMANDNODE_H

#include <string>
#include "Main/Include/Node.hpp"
#include "Main/Include/RepeatCommandNode.hpp"
#include "Main/Include/PrimitiveCommandNode.hpp"

class CommandNode: public Node
{
public:
  void parse(Context *context);

  std::string toString();
private:
  Node *node;
};

#endif