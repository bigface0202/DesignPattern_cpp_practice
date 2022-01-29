/**
 * @file answer.cpp
 * 
 * Visitorパターン
 * @author bigface / created on 2022/01/29
 */
#include <stdio.h>
#include <iostream>

#include "Main/Include/File.hpp"
#include "Main/Include/Directory.hpp"
#include "Main/Include/FileTreatmentException.hpp"
#include "Main/Include/ListVisitor.hpp"

int main( int argc, char *argv[] )
{
  try {
    std::cout << "Making root entries..." << std::endl;
    Directory* rootdir = new Directory("root");
    Directory* bindir = new Directory("bin");
    Directory* tmpdir = new Directory("tmp");
    Directory* usrdir = new Directory("usr");
    rootdir->add(bindir);
    rootdir->add(tmpdir);
    rootdir->add(usrdir);
    bindir->add(new File("vi", 1000));
    bindir->add(new File("latex", 2000));
    rootdir->accept(new ListVisitor());

    std::cout << "" << std::endl;
    std::cout << "Making user entries..." << std::endl;
    Directory* yuki = new Directory("yuki");
    Directory* hanako = new Directory("hanako");
    Directory* tomura = new Directory("tomura");
    usrdir->add(yuki);
    usrdir->add(hanako);
    usrdir->add(tomura);
    yuki->add(new File("diary.html", 100));
    yuki->add(new File("Composite.cpp", 200));
    hanako->add(new File("momo.tex", 300));
    tomura->add(new File("game.doc", 400));
    tomura->add(new File("junk.mail", 500));
    rootdir->accept(new ListVisitor());
  } catch (FileTreatmentException e) {
    std::cerr << e.what() << std::endl;
  }
}