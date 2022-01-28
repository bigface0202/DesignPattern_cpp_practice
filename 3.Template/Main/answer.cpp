/**
 * @file answer.cpp
 * 
 * テンプレートパターン
 * @author bigface / created on 2021/12/07
 */
#include <stdio.h>
#include <iostream>
#include <string>

/** 
 * スーパークラス
 * このクラスがテンプレートとなる
*/
class AbstractDisplay {
public:
  // 抽象メソッド
  virtual void open() = 0;
  virtual void print() = 0;
  virtual void close() = 0;
  
  // displayのみは実装
  void display() {
    this->open();

    for (int i = 0; i < 5; i++) {
      this->print();
    }

    this->close();
  }
};

/** 
 * テンプレートを利用するクラス1
 * AbstractDisplayを継承している
*/
class CharDisplay : public AbstractDisplay {
public:
  // コンストラクタ
  CharDisplay(char ch)
  :ch(ch) {}

  void open() {
    std::cout << "<<";
  }

  void print() {
    std::cout << ch;
  }

  void close() {
    std::cout << ">>" << std::endl;
  }

private:
  char ch;
};

/** 
 * テンプレートを利用するクラス2
 * AbstractDisplayを継承している
*/
class StringDisplay : public AbstractDisplay {
public:
  StringDisplay(std::string string)
  :string(string), width(string.length()) {}

  void open() {
    this->printLine();
  }
  
  void print() {
    std::cout << "|" << this->string << "|" << std::endl;
  }

  void close() {
    printLine();
  }

private:
  std::string string;
  int width;

  void printLine() {
    std::cout << "+";
    for (int i = 0; i < this->width; i++) {
      std::cout << "-";
    }
    std::cout << "+" << std::endl;
  }
};

int main( int argc, char *argv[] )
{
  /** 
   * 抽象クラスはインスタンスを生成できない。
   * →抽象クラスにはvirtualな未定義の関数が存在するので実体化してしまうと矛盾が生じる。
   * 抽象クラスのポインタを通じて、その抽象クラスでvirtualなメソッドへアクセスは可能
  */
  AbstractDisplay *d1 = new CharDisplay('H');

  AbstractDisplay *d2 = new StringDisplay("Hello world.");

  AbstractDisplay *d3 = new StringDisplay("こんにちは.");

  d1->display();

  d2->display();

  d3->display();
}