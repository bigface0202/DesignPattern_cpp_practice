/**
 * @file ProgramNode.hpp
 * 
 * ProgramNodeクラス。
 * ミニ言語の文法<program>を表す。
 * @author bigface / created on 2022/03/06
 */

#ifndef PROGRAMNODE_H
#define PROGRAMNODE_H

#include <string>
#include "Main/Include/Node.hpp"
#include "Main/Include/CommandListNode.hpp"

class ProgramNode: public Node
{
public:
  void parse(Context *context);

  std::string toString();
private:
  Node *commandListNode_;
};

#endif