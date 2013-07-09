#ifndef __MYCLICKABLESPRITE_H_
#define __MYCLICKABLESPRITE_H_


#include "cocos2d.h"
using namespace cocos2d;

class MyClickableSprite : public cocos2d::CCSprite, public CCTargetedTouchDelegate
{
public:
	virtual void onEnter();
    virtual void onExit();
    virtual bool ccTouchBegan(CCTouch* touch, CCEvent* event);
    virtual void ccTouchMoved(CCTouch* touch, CCEvent* event);
    virtual void ccTouchEnded(CCTouch* touch, CCEvent* event);
};

#endif
