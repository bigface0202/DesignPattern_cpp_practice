/**
 * @file answer.cpp
 * 
 * プロトタイプパターン
 * @author bigface / created on 2021/12/10
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include <unordered_map>

namespace framework {
  class Product 
  {
  public:
    virtual void use (std::string s) = 0;
    Product* Clone();
  };

  class Manager 
  {
  public:
    void registerProto(std::string name, Product* proto) {
      showcase.emplace(name, proto);
    }
    Product* create(std::string protoname) {
      Product* p = showcase.at(protoname);
      return p->Clone();
    }
  private:
    std::unordered_map<std::string, Product*> showcase;
  
  };
}

int main( int argc, char *argv[] )
{
    
}