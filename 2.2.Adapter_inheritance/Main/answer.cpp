/**
 * @file answer.cpp
 * 
 * Adapterパターン（継承）
 * @author bigface / created on 2021/11/30
 */
#include <stdio.h>
#include <iostream>
#include <string>

/** 
 * 文字列を加工して表示するBannerクラス
 * 既に提供されているAPIと仮定
*/
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

/** アダプター 
 * Bannerクラスに変更があった場合、出力をよしなに調整する
 * Javaではここにインターフェース（Print）も継承する
 * C++では複数の継承は推奨されていない
*/
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