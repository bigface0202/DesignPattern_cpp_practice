/**
 * @file PrimitiveCommandNode.hpp
 * 
 * PrimitiveCommandNodeクラス。
 * ミニ言語の文法<primitive command>を表す。
 * <primitive command> ::= go | right | left
 * @author bigface / created on 2022/03/06
 */

#ifndef PRIMITIVECOMMANDNODE_H
#define PRIMITIVECOMMANDNODE_H

#include <string>
#include "Main/Include/Node.hpp"
#include "Main/Include/ParseException.hpp"

class PrimitiveCommandNode: public Node
{
public:
  void parse(Context *context);

  std::string toString();

private:
  std::string name_;
};

#endif