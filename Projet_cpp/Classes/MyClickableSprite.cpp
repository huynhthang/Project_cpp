#include "MyClickableSprite.h"

void MyClickableSprite::onEnter(){
    // before 2.0:
    // CCTouchDispatcher::sharedDispatcher()->addTargetedDelegate(this, 0, true);

    // since 2.0: 
    CCDirector::sharedDirector()->getTouchDispatcher()->addTargetedDelegate(this, 0, true);
    CCSprite::onEnter();
}
void MyClickableSprite::onExit(){
    // before 2.0:
    // CCTouchDispatcher::sharedDispatcher()->removeDelegate(this);

    // since 2.0:
    CCDirector::sharedDirector()->getTouchDispatcher()->removeDelegate(this);
    CCSprite::onExit();
}
bool MyClickableSprite::ccTouchBegan(CCTouch* touch, CCEvent* event){
//do whatever you want here
    return true;
}
void MyClickableSprite::ccTouchMoved(CCTouch* touch, CCEvent* event){
    //do what you want
}
void MyClickableSprite::ccTouchEnded(CCTouch* touch, CCEvent* event){
//do your job here
}
