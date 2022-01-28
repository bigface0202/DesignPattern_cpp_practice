/**
 * @file ListTray.hpp
 * 
 * ListTrayクラス
 * 抽象クラスであるTrayクラスの実体
 * @author bigface / created on 2022/01/11
 */

#ifndef LISTTRAY_H
#define LISTTRAY_H

#include <string>
#include <iostream>
#include <sstream>

#include "Main/Include/Tray.hpp"

namespace factory {

class ListTray : public Tray
{
public:
  ListTray(std::string caption);

  std::string makeHTML();
  
};

}


#endif