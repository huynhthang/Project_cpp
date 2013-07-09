#include "Player.h"


Player::Player(void)
{
	vie = 3;
	score = 0;
	inAction = false;
	sprite = CCSprite::create("yes6.png");
	size = CCDirector::sharedDirector()->getWinSize();
	currentAnimation = CCAnimation::create();
	sprite->setPosition(ccp(size.width/7 - 10, size.height/4 + 10));
}


Player::~Player(void)
{
}

void Player::jumpAction()
{
	inAction = true;
	CCJumpTo*	jumpPlayer = CCJumpTo::create(1,ccp(size.width/2, size.height/4 + 10),100,1);
	currentAnimation->setDelayPerUnit(0.11f);
	currentAnimation->setRestoreOriginalFrame(true);
	currentAnimation->addSpriteFrameWithFileName("jump1.png");
	currentAnimation->addSpriteFrameWithFileName("jump2.png");
	currentAnimation->addSpriteFrameWithFileName("jump3.png");
	currentAnimation->addSpriteFrameWithFileName("jump4.png");
	currentAnimation->addSpriteFrameWithFileName("jump5.png");
	currentAnimation->addSpriteFrameWithFileName("jump6.png");
	currentAnimation->addSpriteFrameWithFileName("jump7.png");
	currentAnimation->addSpriteFrameWithFileName("jump8.png");
	currentAnimation->addSpriteFrameWithFileName("jump9.png");
	CCAnimate* animate = CCAnimate::create(currentAnimation);
	sprite->stopAllActions();
	sprite->runAction(animate);
	sprite->runAction(jumpPlayer);
}

void Player::slideAction()
{
	inAction = 1;
	currentAnimation->setDelayPerUnit(0.1f);
	currentAnimation->setRestoreOriginalFrame(true);
	currentAnimation->addSpriteFrameWithFileName("slash1.png");
	currentAnimation->addSpriteFrameWithFileName("slash2.png");
	currentAnimation->addSpriteFrameWithFileName("slash3.png");
	currentAnimation->addSpriteFrameWithFileName("slash4.png");
	CCAnimate* animate = CCAnimate::create(currentAnimation);
	CCRepeatForever* repeat = CCRepeatForever::create(animate);
	sprite->stopAllActions();
	sprite->runAction(animate);
}

void Player::fastAction()
{
	inAction = 0;
	CCAnimation* toto = CCAnimation::create();
	toto->setDelayPerUnit(0.04f);
	toto->setRestoreOriginalFrame(true);
	toto->addSpriteFrameWithFileName("speed9.png");
	toto->addSpriteFrameWithFileName("speed10.png");
	toto->addSpriteFrameWithFileName("speed11.png");
	toto->addSpriteFrameWithFileName("speed12.png");
	toto->addSpriteFrameWithFileName("speed13.png");
	toto->addSpriteFrameWithFileName("speed14.png");
	toto->addSpriteFrameWithFileName("speed15.png");
	toto->addSpriteFrameWithFileName("speed16.png");
	sprite->stopAllActions();
	CCAnimate* animate = CCAnimate::create(toto);
	CCRepeatForever* repeat = CCRepeatForever::create(animate);
	CCMoveTo* goMiddle = CCMoveTo::create(1,ccp(size.width/2, size.height/4 + 10));
	sprite->runAction(goMiddle);
	sprite->runAction(repeat);
}

void Player::runAction()
{
	
	currentAnimation->setDelayPerUnit(0.04f);
	currentAnimation->setRestoreOriginalFrame(true);
	currentAnimation->addSpriteFrameWithFileName("speed0.png");
	currentAnimation->addSpriteFrameWithFileName("speed1.png");
	currentAnimation->addSpriteFrameWithFileName("speed2.png");
	currentAnimation->addSpriteFrameWithFileName("speed3.png");
	currentAnimation->addSpriteFrameWithFileName("speed4.png");
	currentAnimation->addSpriteFrameWithFileName("speed5.png");
	currentAnimation->addSpriteFrameWithFileName("speed6.png");
	currentAnimation->addSpriteFrameWithFileName("speed7.png");
	currentAnimation->addSpriteFrameWithFileName("speed8.png");
	sprite->stopAllActions();
	CCAnimate* animate = CCAnimate::create(currentAnimation);
	CCRepeatForever* repeat = CCRepeatForever::create(animate);
	CCMoveTo* goMiddle = CCMoveTo::create(1,ccp(size.width/2, size.height/4 + 10));
	sprite->runAction(goMiddle);
	sprite->runAction(repeat);
}

void Player::introAction()
{
	currentAnimation->setDelayPerUnit(0.09f);
	currentAnimation->setRestoreOriginalFrame(true);
	currentAnimation->addSpriteFrameWithFileName("yes1.png");
	currentAnimation->addSpriteFrameWithFileName("yes2.png");
	currentAnimation->addSpriteFrameWithFileName("yes3.png");
	currentAnimation->addSpriteFrameWithFileName("yes4.png");
	currentAnimation->addSpriteFrameWithFileName("yes5.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("yes6.png");
	currentAnimation->addSpriteFrameWithFileName("wait7.png");
	currentAnimation->addSpriteFrameWithFileName("wait8.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait12.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait8.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait12.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait8.png");
	currentAnimation->addSpriteFrameWithFileName("wait7.png");
	currentAnimation->addSpriteFrameWithFileName("wait6.png");
	currentAnimation->addSpriteFrameWithFileName("wait5.png");
	currentAnimation->addSpriteFrameWithFileName("wait4.png");
	currentAnimation->addSpriteFrameWithFileName("wait3.png");
	currentAnimation->addSpriteFrameWithFileName("wait2.png");
	currentAnimation->addSpriteFrameWithFileName("wait1.png");
	currentAnimation->addSpriteFrameWithFileName("wait2.png");
	currentAnimation->addSpriteFrameWithFileName("wait3.png");
	currentAnimation->addSpriteFrameWithFileName("wait4.png");
	currentAnimation->addSpriteFrameWithFileName("wait5.png");
	currentAnimation->addSpriteFrameWithFileName("wait4.png");
	currentAnimation->addSpriteFrameWithFileName("wait3.png");
	currentAnimation->addSpriteFrameWithFileName("wait2.png");
	currentAnimation->addSpriteFrameWithFileName("wait1.png");
	currentAnimation->addSpriteFrameWithFileName("wait2.png");
	currentAnimation->addSpriteFrameWithFileName("wait3.png");
	currentAnimation->addSpriteFrameWithFileName("wait4.png");
	currentAnimation->addSpriteFrameWithFileName("wait5.png");
	currentAnimation->addSpriteFrameWithFileName("wait6.png");
	currentAnimation->addSpriteFrameWithFileName("wait7.png");
	currentAnimation->addSpriteFrameWithFileName("wait8.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait12.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait8.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait12.png");
	currentAnimation->addSpriteFrameWithFileName("wait11.png");
	currentAnimation->addSpriteFrameWithFileName("wait10.png");
	currentAnimation->addSpriteFrameWithFileName("wait9.png");
	currentAnimation->addSpriteFrameWithFileName("wait8.png");
	currentAnimation->addSpriteFrameWithFileName("wait7.png");
	currentAnimation->addSpriteFrameWithFileName("wait6.png");
	currentAnimation->addSpriteFrameWithFileName("wait5.png");
	currentAnimation->addSpriteFrameWithFileName("wait4.png");
	currentAnimation->addSpriteFrameWithFileName("wait3.png");
	currentAnimation->addSpriteFrameWithFileName("wait2.png");
	currentAnimation->addSpriteFrameWithFileName("wait1.png");
	currentAnimation->addSpriteFrameWithFileName("wait2.png");
	currentAnimation->addSpriteFrameWithFileName("wait3.png");
	currentAnimation->addSpriteFrameWithFileName("wait4.png");
	currentAnimation->addSpriteFrameWithFileName("wait5.png");
	currentAnimation->addSpriteFrameWithFileName("wait4.png");
	currentAnimation->addSpriteFrameWithFileName("wait3.png");
	currentAnimation->addSpriteFrameWithFileName("wait2.png");
		
	CCAnimate* animate = CCAnimate::create(currentAnimation);
	//CCRepeatForever* repeat = CCRepeatForever::create(animate);
	animate->setTag(333);
	sprite->runAction(animate);
}