/**
 * @file CommandListNode.hpp
 * 
 * CommandListNodeクラス。
 * ミニ言語の文法<command list>を表す。
 * <command list> ::= <command>* end
 * @author bigface / created on 2022/03/06
 */

#ifndef COMMANDLISTNODE_H
#define COMMANDLISTNODE_H

#include <string>
#include <vector>
#include <sstream>
#include "Main/Include/Node.hpp"
#include "Main/Include/Context.hpp"
#include "Main/Include/CommandNode.hpp"
#include "Main/Include/ParseException.hpp"

class CommandListNode: public Node
{
public:
  void parse(Context *context);

  std::string toString();

private:
  std::vector<Node*> list;
};


#endif