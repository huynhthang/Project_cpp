#include "GameScene.h"
#include "MenuScene.h"
#include "AppMacros.h"
#include "Player.h"

USING_NS_CC;


CCScene* Game::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    Game *layer = Game::create();

    // add layer as a child to scene
    scene->addChild(layer);
	layer->setTouchEnabled(true);
    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool Game::init()
{
    //////////////////////////////
    // 1. super init first
    if ( !CCLayer::init() )
    {
        return false;
    }
    
    CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
    CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

    /////////////////////////////
    // 2. add a menu item with "X" image, which is clicked to quit the program
    //    you may modify it.

    // add a "close" icon to exit the progress. it's an autorelease object
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(Game::menuCloseCallback));
    
	pCloseItem->setPosition(ccp(origin.x + visibleSize.width - pCloseItem->getContentSize().width/2 ,
                                origin.y + pCloseItem->getContentSize().height/2));

    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition(CCPointZero);
    this->addChild(pMenu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    CCSprite* toto = CCSprite::create("sky_evening.png");
	toto->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));
	this->addChild(toto,-2);
    // add "Game" splash screen"
  
	 CCSize size = CCDirector::sharedDirector()->getWinSize();
    // add the sprite as a child to this layer
    
	player = CCSprite::create("yes6.png");
		
		player->setPosition(ccp(size.width/7 - 10, size.height/4 + 10));
		this->addChild(player, 0);



		CCAnimation* animation = CCAnimation::create();
		animation->setDelayPerUnit(0.09f);
		animation->setRestoreOriginalFrame(true);
		
		animation->addSpriteFrameWithFileName("yes1.png");
		animation->addSpriteFrameWithFileName("yes2.png");
		animation->addSpriteFrameWithFileName("yes3.png");
		animation->addSpriteFrameWithFileName("yes4.png");
		animation->addSpriteFrameWithFileName("yes5.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("yes6.png");
		animation->addSpriteFrameWithFileName("wait7.png");
		animation->addSpriteFrameWithFileName("wait8.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait12.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait8.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait12.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait8.png");
		animation->addSpriteFrameWithFileName("wait7.png");
		animation->addSpriteFrameWithFileName("wait6.png");
		animation->addSpriteFrameWithFileName("wait5.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		animation->addSpriteFrameWithFileName("wait1.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait5.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		animation->addSpriteFrameWithFileName("wait1.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait5.png");
		animation->addSpriteFrameWithFileName("wait6.png");
		animation->addSpriteFrameWithFileName("wait7.png");
		animation->addSpriteFrameWithFileName("wait8.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait12.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait8.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait12.png");
		animation->addSpriteFrameWithFileName("wait11.png");
		animation->addSpriteFrameWithFileName("wait10.png");
		animation->addSpriteFrameWithFileName("wait9.png");
		animation->addSpriteFrameWithFileName("wait8.png");
		animation->addSpriteFrameWithFileName("wait7.png");
		animation->addSpriteFrameWithFileName("wait6.png");
		animation->addSpriteFrameWithFileName("wait5.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		animation->addSpriteFrameWithFileName("wait1.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait5.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		
		CCAnimate* animate = CCAnimate::create(animation);
		//CCRepeatForever* repeat = CCRepeatForever::create(animate);
		animate->setTag(333);
		player->runAction(animate);
	i = y= inAction = 0;
		this->scheduleUpdate();
	Mytest = 0;

    return true;
}

void Game::update(float dt) {
	i++;
	CCSize size = CCDirector::sharedDirector()->getWinSize();
	if(i >500 && y == 0)
	{
		y = 1;
		CCAnimation* animation = CCAnimation::create();
		animation->setDelayPerUnit(0.04f);
		animation->setRestoreOriginalFrame(true);
		animation->addSpriteFrameWithFileName("speed0.png");
		animation->addSpriteFrameWithFileName("speed1.png");
		animation->addSpriteFrameWithFileName("speed2.png");
		animation->addSpriteFrameWithFileName("speed3.png");
		animation->addSpriteFrameWithFileName("speed4.png");
		animation->addSpriteFrameWithFileName("speed5.png");
		animation->addSpriteFrameWithFileName("speed6.png");
		animation->addSpriteFrameWithFileName("speed7.png");
		animation->addSpriteFrameWithFileName("speed8.png");
		player->stopAllActions();
		CCAnimate* animate = CCAnimate::create(animation);
		CCRepeatForever* repeat = CCRepeatForever::create(animate);
		CCMoveTo* goMiddle = CCMoveTo::create(1,ccp(size.width/2, size.height/4 + 10));
		player->runAction(goMiddle);
		player->runAction(repeat);

	
	}
	if(player->getPositionX() > (size.width/2 -5) && y == 1)
	{
		y =2;
		CCAnimation* animation = CCAnimation::create();
		animation->setDelayPerUnit(0.04f);
		animation->setRestoreOriginalFrame(true);
		animation->addSpriteFrameWithFileName("speed9.png");
		animation->addSpriteFrameWithFileName("speed10.png");
		animation->addSpriteFrameWithFileName("speed11.png");
		animation->addSpriteFrameWithFileName("speed12.png");
		animation->addSpriteFrameWithFileName("speed13.png");
		animation->addSpriteFrameWithFileName("speed14.png");
		animation->addSpriteFrameWithFileName("speed15.png");
		animation->addSpriteFrameWithFileName("speed16.png");
		player->stopAllActions();
		CCAnimate* animate = CCAnimate::create(animation);
		CCRepeatForever* repeat = CCRepeatForever::create(animate);
		player->runAction(repeat);
	}
	if(player->numberOfRunningActions() < 1)
	{
		inAction = 0;
		CCAnimation* animation = CCAnimation::create();
		animation->setDelayPerUnit(0.04f);
		animation->setRestoreOriginalFrame(true);
		animation->addSpriteFrameWithFileName("speed9.png");
		animation->addSpriteFrameWithFileName("speed10.png");
		animation->addSpriteFrameWithFileName("speed11.png");
		animation->addSpriteFrameWithFileName("speed12.png");
		animation->addSpriteFrameWithFileName("speed13.png");
		animation->addSpriteFrameWithFileName("speed14.png");
		animation->addSpriteFrameWithFileName("speed15.png");
		animation->addSpriteFrameWithFileName("speed16.png");
		player->stopAllActions();
		CCAnimate* animate = CCAnimate::create(animation);
		CCRepeatForever* repeat = CCRepeatForever::create(animate);
		CCMoveTo* goMiddle = CCMoveTo::create(1,ccp(size.width/2, size.height/4 + 10));
		player->runAction(goMiddle);
		player->runAction(repeat);
	
	
	}

	
}



void Game::menuCloseCallback(CCObject* pSender)
{
	/*
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif*/

	CCScene *s = Menu::scene();
			CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.5,s));

}
Game::Game(void)
{
}


Game::~Game(void)
{
}

void Game::ccTouchesBegan(CCSet* touches, CCEvent* event)
{
	CCTouch* touch = (CCTouch*)( touches->anyObject() );
    CCPoint location = touch->getLocationInView();
	pos.x = location.x;
	pos.y = location.y;
	
}

void Game::ccTouchesEnded(CCSet* touches, CCEvent* event)
{
	if(inAction == 0)
	{
			
	CCTouch* touch = (CCTouch*)( touches->anyObject() );
    CCPoint location = touch->getLocationInView();
	CCSize size = CCDirector::sharedDirector()->getWinSize();
	CCAnimation* animation = CCAnimation::create();
	
		
	if(fabs(pos.x - location.x) < 20 && fabs(pos.y - location.y) < 20)
	{	
		inAction = 1;
		CCJumpTo*	jumpPlayer = CCJumpTo::create(1,ccp(size.width/2, size.height/4 + 10),100,1);
		animation->setDelayPerUnit(0.11f);
		animation->setRestoreOriginalFrame(true);
		animation->addSpriteFrameWithFileName("jump1.png");
		animation->addSpriteFrameWithFileName("jump2.png");
		animation->addSpriteFrameWithFileName("jump3.png");
		animation->addSpriteFrameWithFileName("jump4.png");
		animation->addSpriteFrameWithFileName("jump5.png");
		animation->addSpriteFrameWithFileName("jump6.png");
		animation->addSpriteFrameWithFileName("jump7.png");
		animation->addSpriteFrameWithFileName("jump8.png");
		animation->addSpriteFrameWithFileName("jump9.png");
		CCAnimate* animate = CCAnimate::create(animation);
		player->stopAllActions();
		player->runAction(animate);
		player->runAction(jumpPlayer);
	}



		else if((pos.y - location.y < 0) && (fabs(pos.x - location.x) < fabs(pos.y - location.y)))
	{
		inAction = 1;
		animation->setDelayPerUnit(0.1f);
		animation->setRestoreOriginalFrame(true);
		animation->addSpriteFrameWithFileName("slash1.png");
		animation->addSpriteFrameWithFileName("slash2.png");
		animation->addSpriteFrameWithFileName("slash3.png");
		animation->addSpriteFrameWithFileName("slash4.png");
		CCAnimate* animate = CCAnimate::create(animation);
		CCRepeatForever* repeat = CCRepeatForever::create(animate);
		player->stopAllActions();
		player->runAction(animate);
	}
	}

}