/**
 * @file RepeatCommandNode.hpp
 * 
 * RepeatCommandNodeクラス。
 * <repeat command>に対応。
 * @author bigface / created on 2022/03/06
 */

#ifndef REPEATCOMMANDNODE_H
#define REPEATCOMMANDNODE_H

#include <string>
#include "Main/Include/Node.hpp"
#include "Main/Include/CommandListNode.hpp"

class RepeatCommandNode: public Node
{
public:
  void parse(Context *context);

  std::string toString();

private:
  int number_;
  Node *commandListNode_;
};

#endif