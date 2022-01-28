/**
 * @file answer.cpp
 * 
 * Bridgeパターン
 * 機能のクラスと実装のクラスの橋渡しをする。
 * @author bigface / created on 2022/01/17
 */
#include <stdio.h>
#include <iostream>
#include <string.h>

/** 
 * Displayを実装している実装クラスの抽象クラス（ややこしい）
 * 実装クラスの階層で、実装クラスの最上位
*/
class DisplayImpl 
{
public:
  virtual void rawOpen() = 0;
  virtual void rawPrint() = 0;
  virtual void rawClose() = 0;
};

/** 
 * 機能のクラスであるDisplayクラス
 * 機能クラスの階層で、機能のクラスの最上位
*/
class Display 
{
public:
  Display(DisplayImpl *impl)
  {
    this->impl = impl;
  }

  void open()
  {
    impl->rawOpen();
  }

  void print()
  {
    impl->rawPrint();
  }

  void close()
  {
    impl->rawClose();
  }

  // Javaのfinalはconst
  // 厳密には違うが、C++のconstの方が堅いイメージ 
  // @see: https://ittech-nsnl.hatenablog.com/entry/2019/10/21/224310
  const void display()
  {
    open();
    print();
    close();
  }
private:
  DisplayImpl *impl;
};

/** 
 * Displayを継承し、機能を追加したCountDisplay
 * 機能クラスの階層になる。
 * Display
 * ┗CountDisplay
*/
class CountDisplay : public Display 
{
public:
  CountDisplay(DisplayImpl *impl)
  : Display(impl) {}

  // Displayには「表示する」という機能しかなかったが、「複数回表示する」という機能を追加した
  void multiDisplay(int times)
  {
    open();
    for (int i = 0; i < times; i++)
    {
      print();
    }
    close();
  }
};

/** 
 * 実装クラスの最上位であるDisplayImplを実装したクラス（ややこしい）
 * DisplayImplは抽象クラスなので、具象化しないといけない
 * 実装クラスの階層となる
 * DisplayImpl
 * ┗StringDisplayImpl
*/
class StringDisplayImpl : public DisplayImpl {
public:
  StringDisplayImpl(std::string str)
  {
    this->str = str;
    this->width = str.length();
  }

  void rawOpen()
  {
    this->printLine();
  }

  void rawPrint()
  {
    std::cout << "|" << this->str << "|" << std::endl;
  }

  void rawClose()
  {
    this->printLine();
  }

private:
  std::string str;
  int width;

  void printLine()
  {
    std::cout << "+";
    for (int i = 0; i < this->width; i++)
    {
      std::cout << "-";
    }
    std::cout << "+" << std::endl;
  }
};

int main( int argc, char *argv[] )
{
  Display *d1 = new Display(new StringDisplayImpl("Hello, Japan."));
  Display *d2 = new CountDisplay(new StringDisplayImpl("Hello, World."));
  CountDisplay *d3 = new CountDisplay(new StringDisplayImpl("Hello, Universe"));

  d1->display();
  // d2はCountDisplayでnewしてるが、DisplayクラスのインスタンスなのでmultiDisplayが使えない
  d2->display();
  // d3はCountDisplayクラスのインスタンスなので元々あったdisplay機能も使えるし、新たに追加したmultiDisplayも使える
  d3->display();
  d3->multiDisplay(5);
}