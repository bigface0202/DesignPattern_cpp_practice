/**
 * @file JPNCharFactory.cpp
 * 
 * JPNCharのインスタンスを生成する工場のソースファイル
 * @author bigface / created on 2022/02/23
 */

#include "Main/Include/JPNCharFactory.hpp"

JPNCharFactory* JPNCharFactory::singleton_ = nullptr;

JPNCharFactory::JPNCharFactory()
{
  std::cout << "インスタンスが生成されました" << std::endl;
}

JPNCharFactory* JPNCharFactory::getInstance()
{
  if (!singleton_) {
    singleton_ = new JPNCharFactory();
  }

  return singleton_;
}

JPNChar* JPNCharFactory::getJPNChar(char charname)
{
  try {
    JPNChar* jc = pool_.at("" + charname);
    return jc;
  } catch (std::out_of_range&) {
    JPNChar* jc = new JPNChar(charname);
    pool_.emplace("" + charname, jc);
    return jc;
  }
}