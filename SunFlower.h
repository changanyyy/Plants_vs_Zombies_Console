#pragma once


#include"AbstractPlant.h"

class SunFlower :
	public AbstractPlant
{
public:
	//构造函数
	SunFlower(int hp, int r = -1, int c = -1);
	//析构函数
	~SunFlower();
	//重定义攻击函数
	Attack AttackEnemy();
	//重定义名称函数
	string GetName()const { return string("SunFlower"); }
private:
};

