/**
 * @file SafeFrame.hpp
 * 
 * SafeFrameクラス
 * 状態管理のContextを継承した具象クラス。
 * @author bigface / created on 2022/02/21
 */

#ifndef SAFEFRAME_H
#define SAFEFRAME_H

#include "iostream"

#include "Main/Include/Context.hpp"
#include "Main/Include/DayState.hpp"

class SafeFrame: public Context
{
public:
  /** コンストラクタ */
  SafeFrame();

  /** 金庫のアクション */
  void actionPerformed();

  /** 時刻の設定 */
  void setClock(int hour);

  /** 状態変化 */
  void changeState(State* state);

  /** 警備センター呼び出し */
  void callSecurityCenter(std::string msg);

  /** 警備センター記録 */
  void recordLog(std::string msg);

private:
  // DayStateのgetInstanceはstaticな関数なので、直接呼び出せる
  // getInstanceを呼び出すことで、シングルトンなDayStateのインスタンスを取得
  State *state = DayState::getInstance();
};

#endif