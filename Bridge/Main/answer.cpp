/**
 * @file answer.cpp
 * 
 * Bridgeパターン
 * 機能のクラスと実装のクラスの橋渡しをする。
 * @author bigface / created on 2022/01/17
 */
#include <stdio.h>
#include <iostream>

/** 
 * Displayを実装している実装クラスの抽象クラス（ややこしい）
 * 実装クラスの最上位
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
 * 機能のクラスの最上位
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


int main( int argc, char *argv[] )
{
    
}