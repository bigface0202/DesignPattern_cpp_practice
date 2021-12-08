/**
 * @file answer.cpp
 * 
 * ファクトリーパターン
 * 似たようなクラスを複数個生成するときなどに便利なデザインパターン
 * @author bigface / created on 2021/12/08
 */
#include <stdio.h>
#include <iostream>
#include <string>
#include <vector>

/** namespaceはJavaで言うところのパッケージに当たるらしい */
namespace framework
{
  /** 
   * Product（抽象クラス）
   * インスタンスが持つべきインターフェース（API）を定義
   */
  class Product {
  public:
    virtual void use() = 0;
  };

  /**
   *  Creator （抽象クラス）
   *  Product役（今回だとProductクラス）を生成する抽象クラス
   */
  class Factory {
  public:
    // finalを付けることで継承先でoverrideされなくなる
    virtual Product* create(std::string owner) final {
      Product* p = this->createProduct(owner);
      this->registerProduct(p);
      return p;
    }

    // インスタンスの生成を行う仮想関数
    virtual Product* createProduct(std::string owner) = 0;
    virtual void registerProduct(Product* product) = 0;
  };
}


namespace idcard
{ 
  /** 
   * IDCard
   * Productの仮想関数に肉付けを行う
   */
  class IDCard : public framework::Product {
  public:
    IDCard(std::string owner)
    :owner(owner) {
      std::cout << this->owner << "のカードを作ります。" << std::endl;
    }

    void use() final {
      std::cout << this->owner << "のカードを使います。" << std::endl;
    }

    std::string getOwner() {
      return this->owner;
    }

  private:
    std::string owner;
  };

  /** 
   * IDCardFactory
   * Factoryの仮想関数に肉付けを行う
  */
  class IDCardFactory : public framework::Factory {
  public:

    // インスタンスの生成
    framework::Product* createProduct(std::string owner) {
      return new IDCard(owner);
    }

    void registerProduct(framework::Product* product) {
      // productをキャストしてIDCardにする
      this->owners.push_back(dynamic_cast<idcard::IDCard*>(product)->getOwner());
    }

    std::vector<std::string> getOwners() {
      return this->owners;
    }

  private:
    std::vector<std::string> owners = {};
  };
}



int main( int argc, char *argv[] )
{
  using namespace framework;
  using namespace idcard;

  Factory* factory = new IDCardFactory();
  Product* card1 = factory->create("ボブ");
  Product* card2 = factory->create("キャシー");
  Product* card3 = factory->create("トム");

  card1->use();
  card2->use();
  card3->use();
}