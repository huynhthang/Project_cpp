#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__
#include "cocos2d.h"
#include "Player.h"
#include "Box2D/Box2D.h"
#include "CParallaxNodeExtras.h"

class Game : public CCLayer
{
public:
	Game(void);
	~Game(void);
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  
	CCSprite* player;
	Player* sonic;
	int i,y,inAction;
	float Mytest;
	CCArray * _blocks;
	CCPoint pos;
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    void test(float dt);
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
    void update(float dt);
	void ccTouchesEnded(CCSet* touches, CCEvent* event);
	void ccTouchesBegan(CCSet* touches, CCEvent* event);
    // implement the "static node()" method manually
    CREATE_FUNC(Game);
};
#endif
