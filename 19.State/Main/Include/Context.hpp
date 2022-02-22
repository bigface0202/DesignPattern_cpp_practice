/**
 * @file Context.hpp
 * 
 * Contextクラス
 * 状態を管理したり、軽微センターの呼び出しを行ったりする抽象クラス。
 * @author bigface / created on 2022/02/21
 */

#ifndef CONTEXT_H
#define CONTEXT_H

#include <string>

// 循環参照は親ファイルで解決しておけば、子ファイルは気にしなくてよい（？）
class State;

class Context 
{
public:
  /** 時刻の設定 */
  virtual void setClock(int hour) = 0;

  /** 状態変化 */
  virtual void changeState(State *state) = 0;

  /** 警備センター呼び出し */
  virtual void callSecurityCenter(std::string msg) = 0;

  /** 警備センター記録 */
  virtual void recordLog(std::string msg) = 0;
};


#endif