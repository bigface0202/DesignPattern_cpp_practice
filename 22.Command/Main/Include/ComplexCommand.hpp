/**
 * @file ComplexCommand.hpp
 * 
 * 命令の実体クラス
 * Receiverを受け取り、より複雑な処理を行う。
 * @author bigface / created on 2022/03/05
 */

#ifndef COMPLEXCOMMAND_H
#define COMPLEXCOMMAND_H

#include <iostream>
#include <string>
#include "Main/Include/Command.hpp"
#include "Main/Include/Receiver.hpp"

class ComplexCommand: public Command
{
public:
  /** コンストラクタ */
  ComplexCommand(Receiver *receiver, std::string a, std::string b);

  /** Receiverのmethodを委譲する */
  void execute();
  
private:
  Receiver *receiver_;
  // Receiver用のテキストデータ
  std::string a_;
  std::string b_;
};

#endif