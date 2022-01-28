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
  /** 
   * 抽象クラスProduct
   * 複製のためのメソッドを定めるインタフェース
   * Cloneできるようになっている
  */
  class Product 
  {
  public:
    virtual void use (std::string s) = 0;
    virtual Product* Clone() const = 0;
  };

  /** 
   * Managerクラス
   * Product*インスタンスの複製を行う
  */
  class Manager 
  {
  public:
    void registerProto(std::string name, Product* proto) {
      showcase.emplace(name, proto);
    }

    /** 
     * メンバ関数create
     * showcaseに登録されたProduct*を取り出し、Cloneする
    */
    Product* create(std::string protoname) {
      /** 
       * @todo
       * .atで無い場合もあるので、エラー処理が必要
      */
      Product* p = showcase.at(protoname);
      return p->Clone();
    }

  private:
    // インスタンスの「名前」と「インスタンス」の対応関係を入れておく箱
    // いわゆるハッシュマップなので、検索が高速
    std::unordered_map<std::string, Product*> showcase;
  };
}

/** 
 * Productを継承したMessageBoxクラス
*/
class MessageBox : public framework::Product 
{
public:
  MessageBox(std::string decochar) {
    this->decochar = decochar;
  }

  void use(std::string s) {
    int length = s.length();
    for (int i = 0; i < length + 4; i ++) {
      std::cout << this->decochar;
    }
    std::cout << std::endl;
    std::cout << this->decochar << " " << s << " " << this->decochar << std::endl;
    for (int i = 0; i < length + 4; i++) {
      std::cout << this->decochar;
    }
    std::cout << std::endl;
  }

  Product* Clone() const override {
    return new MessageBox(*this);
  }

private:
  std::string decochar;
};

/** 
 * Productを継承したUnderlinePenクラス
*/
class UnderlinePen : public framework::Product
{
public:
  UnderlinePen(std::string ulchar) {
    this->ulchar = ulchar;
  }

  void use(std::string s) {
    int length = s.length();
    std::cout << "￥" << s << "￥" << std::endl;
    for (int i = 0; i < length; i++) {
      std::cout << ulchar;
    }
    std::cout << std::endl;
  }

  Product* Clone() const override {
    return new UnderlinePen(*this);
  }

private:
 std::string ulchar;
};

int main( int argc, char *argv[] )
{
  using namespace framework;
  // Productの複製を行うManagerのインスタンスを生成
  Manager* manager = new Manager();
  // それぞれのメッセージ、ボックスを生成
  UnderlinePen* upen = new UnderlinePen("~");
  MessageBox* mbox = new MessageBox("*");
  MessageBox* sbox = new MessageBox("/");
  // 生成したProductをMangerに登録
  manager->registerProto("strong message", upen);
  manager->registerProto("warning box", mbox);
  manager->registerProto("slash box", sbox);

  // createを行うことで、strong messageのインスタンスをいくつでも複製可能となる
  Product* p1 = manager->create("strong message");
  p1->use("Hello, world.");
  // createを行うことで、warning boxのインスタンスを複製
  Product* p2 = manager->create("warning box");
  p2->use("Hello, world.");
  // createを行うことで、slashのインスタンスを複製
  Product* p3 = manager->create("slash box");
  p3->use("Hello, world.");
}