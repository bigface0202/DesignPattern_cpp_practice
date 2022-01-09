/**
 * @file Factory.cpp
 * 
 * ファクトリークラスのソースファイル
 * 抽象的な工場
 * @author bigface / created on 2021/12/15
 */

#include "Main/Include/Factory.hpp"

using namespace factory;

Factory::Factory(Factory* factory)
:factory(factory) {}