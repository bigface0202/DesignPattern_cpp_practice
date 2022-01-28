/**
 * @file answer.cpp
 *  
 * アダプターパターン（委譲）
 * @author bigface / created on 2021/12/06
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

/** Printクラス（仮想関数）
 * インターフェースの役割
*/
class Print {
public:
  virtual ~Print(){};
  virtual void printWeak() = 0;
  virtual void printStrong() = 0;
};

/** アダプター 
 * Bannerクラスに変更があった場合、出力をよしなに調整する
*/
class PrintBanner : public Print {
public:
  PrintBanner(std::string string) {
    this->banner = new Banner(string);
  }

  virtual ~PrintBanner(){
    delete this->banner;
  }
  // 継承ではクラス内で定義したBannerフィールドに関数の実行を任せる
  void printWeak() {
    this->banner->showWithParren();
  }

  void printStrong() {
    this->banner->showWithAster();
  }

private:
  // オブジェクトをメンバ変数とする場合はポインタにする必要がある
  Banner *banner;
};

int main( int argc, char *argv[] )
{
  PrintBanner p = PrintBanner("Good afternoon!");
  p.printStrong();
  p.printWeak();
}