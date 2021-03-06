#include "PeaShooter.h"

//构造函数
PeaShooter::PeaShooter(int r,int c)
	:
	AbstractPlant(PeaShooter_t,HP_PEASHOOTER,r,c),//类型是植物
	timegap(TIME_GAP_PEASHOOTER_ATTACK)
{
}

//析构函数
PeaShooter::~PeaShooter() {

}

//豌豆射手的攻击函数
//设置一个ATK为1的子弹！
Attack PeaShooter::AttackEnemy(int time) {
	if (time % TIME_GAP_PEASHOOTER_ATTACK==0) {
		Attack atk(Attack::PeaShooter_t);
		Bullet* blt = new Bullet(1, row, col);
		atk.SetBullet(blt);
		return atk;
	}
	else 
		return Attack(Attack::None);
}