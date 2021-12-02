/**
 * @file answer.cpp
 * 
 * Adapterパターン（継承）
 * @author bigface / created on 2021/11/30
 */
#include <stdio.h>
#include <iostream>
#include <string>

class Banner {
public:
  Banner(std::string string)
  : string(string) {}

  virtual ~Banner(){}

  void showWithParren() {
    std::cout << "(" << string << ")" << std::endl;
  }

  void showWithAster() {
    std::cout << "*" << string << "*"  << std::endl;
  }

private:
  std::string string;
};

// 本来はここにインターフェースも継承する
class PrintBanner : public Banner {
public:
  // ここでBannerを初期化する
  PrintBanner(std::string string)
  : Banner(string) {}

  ~PrintBanner(){}

  void printWeak() {
    // Bannerクラスを継承しているので、showWithParren()が使える
    showWithParren();
  }

  void printStrong() {
    showWithAster();
  }
};

int main( int argc, char *argv[] )
{
  PrintBanner p = PrintBanner("Hello");
  p.printStrong();
  p.printWeak();
}