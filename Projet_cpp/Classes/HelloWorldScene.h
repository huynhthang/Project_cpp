#ifndef __HELLOWORLD_SCENE_H__
#define __HELLOWORLD_SCENE_H__

#include "cocos2d.h"

#include "Box2D/Box2D.h"
#include "MenuScene.h"
#include "SimpleAudioEngine.h"
#include "CParallaxNodeExtras.h"
#include <math.h>

USING_NS_CC ;

class HelloWorld : public CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommand to return the exactly class pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
	void ccTouchesEnded(CCSet* touches, CCEvent* event);
	void ccTouchesBegan(CCSet* touches, CCEvent* event);
	void next(CCObject* pSender);
	CCSprite* player;
	void update(float dt);
    // implement the "static node()" method manually
    CREATE_FUNC(HelloWorld);
	CCPoint pos;
private:
	CCParallaxNodeExtras *_backgroundNode; 
CCSprite *_spacedust1;
CCSprite *_spacedust2;
CCSprite *_planetsunrise;
CCSprite *_galaxy;
CCSprite *_galaxy2;
CCSprite *_spacialanomaly;
CCSprite *_spacialanomaly2;
CCSprite *_spacialanomaly3;
};

#endif  // __HELLOWORLD_SCENE_H__