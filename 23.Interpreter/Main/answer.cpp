/**
 * @file answer.cpp
 * 
 * 
 * @author bigface / created on 2021/11/29
 */
#include <stdio.h>
#include <iostream>
#include <fstream>
#include <string>
#include "Main/Include/ProgramNode.hpp"
#include "Main/Include/Context.hpp"

int main( int argc, char *argv[] )
{
  std::string filename("/media/yusuke/Moon/GitHub/DesignPatternJavaCpp/23.Interpreter/Main/program.txt");
  std::string text;
  std::ifstream input_file(filename);
  if (!input_file.is_open()) {
    std::cerr << "Cloud not open the file." << std::endl;
    return EXIT_FAILURE;
  }

  while (std::getline(input_file, text))
  {
    std::cout << "text = \"" + text +"\"" << std::endl;
    Node *node = new ProgramNode();
    node->parse(new Context(text));
    std::cout << "node = " + node->toString() << std::endl;
  }
}