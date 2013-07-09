#ifndef __PLAYER_H__
#define __PLAYER_H__
#include "cocos2d.h"

USING_NS_CC ;
class Player
{
public:
	int vie;
	int score;
	bool inAction;
	CCSprite* sprite;
	CCSize size;
	CCAnimation* currentAnimation;
	Player(void);
	~Player(void);
	void jumpAction();
	void runAction();
	void fastAction();
	void slideAction();
	void waitAction();
	void coolAction();
	void introAction();
};
#endif

