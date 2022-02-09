/**
 * @file Colleague.hpp
 * 
 * Colleagueクラス
 * 相談役に相談を持ちかけるメンバーを表す抽象クラス。
 * @author bigface / created on 2022/02/09
 */

#ifndef COLLEAGUE_H
#define COLLEAGUE_H

class Mediator;

/** 
 * C++の場合はベースの抽象クラスとなるColleagueクラスにmediator_とsetMediatorを持たせることができる
 * Javaだとインターフェースという扱いになるため、具象メソッドを実装することができない。
 * インターフェースとクラスで役割が異なる。
*/

class Colleague
{
protected:
  Mediator *mediator_;

public:
  void setMediator(Mediator *mediator)
  {
    mediator_ = mediator;
  }
};

#endif