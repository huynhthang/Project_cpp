#include "MenuScene.h"
#include "ParamScene.h"
#include "AppMacros.h"
#include "GameScene.h"

CCScene* Menu::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    Menu *layer = Menu::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool Menu::init()
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
    // add a "close" icon to exit the progress. it's an autorelease object
    CCMenuItemImage *pCloseItem = CCMenuItemImage::create(
                                        "quitter.png",
                                        "quitter.png",
                                        this,
                                        menu_selector(Menu::menuCloseCallback));
    
	pCloseItem->setPosition(ccp(origin.x + visibleSize.width - pCloseItem->getContentSize().width/1.3 ,
                                origin.y + pCloseItem->getContentSize().height * 1.5));

    // create menu, it's an autorelease object
    CCMenu* pMenu = CCMenu::create(pCloseItem, NULL);
    pMenu->setPosition(CCPointZero);
    this->addChild(pMenu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    
    CCMenuItemImage *pStartItem = CCMenuItemImage::create(
                                        "deb.png",
                                        "deb.png",
                                        this,
                                        menu_selector(Menu::menuStartCallback));
    
	CCMoveTo* startToCenter = CCMoveTo::create(0.6,ccp(origin.x + visibleSize.width/2,
                            (origin.y + visibleSize.height - pStartItem->getContentSize().height)*0.50)); 

    // position the label on the center of the screen
    pStartItem->setPosition(ccp(origin.x + visibleSize.width,
                            (origin.y + visibleSize.height - pStartItem->getContentSize().height)*0.50));
	pStartItem->runAction(startToCenter);
    // add the label as a child to this layer

	CCMenu* p2Menu = CCMenu::create(pStartItem, NULL);
    p2Menu->setPosition(CCPointZero);
    this->addChild(p2Menu, 1);


	    CCMenuItemImage *pParamItem = CCMenuItemImage::create(
                                        "param.png",
                                        "param.png",
                                        this,
                                        menu_selector(Menu::menuParamCallback));
    
    // position the label on the center of the screen
		CCMoveTo* paramToCenter = CCMoveTo::create(0.6,ccp(origin.x + visibleSize.width/2,
                            (origin.y + visibleSize.height - pParamItem->getContentSize().height)*0.35)); 
    pParamItem->setPosition(ccp(origin.x + visibleSize.width,
                            (origin.y + visibleSize.height - pParamItem->getContentSize().height)*0.35));
	pParamItem->runAction(paramToCenter);
    // add the label as a child to this layer

	CCMenu* p3Menu = CCMenu::create(pParamItem, NULL);
    p3Menu->setPosition(CCPointZero);
    this->addChild(p3Menu, 1);

    /////////////////////////////
    // 3. add your codes below...

    // add a label shows "Hello World"
    // create and initialize a label
    

    CCSize size = CCDirector::sharedDirector()->getWinSize();

	CCSprite* bgSprite = CCSprite::create("bg_menu.png");

    // position the sprite on the center of the screen
    bgSprite->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(bgSprite, 0);


    // add "HelloWorld" splash screen"
    CCSprite* pSprite = CCSprite::create("menu.png");

    // position the sprite on the center of the screen
	CCMoveTo* menuToCenter = CCMoveTo::create(0.5,ccp(size.width / 2, size.height - 90)); 


    pSprite->setPosition(ccp(0, size.height - 90));
	pSprite->runAction(menuToCenter);
    // add the sprite as a child to this layer
    this->addChild(pSprite, 0);
    
	player = CCSprite::create("yes6.png");
		
		player->setPosition(ccp(size.width/7 - 10, size.height/4 + 10));
		this->addChild(player, 0);

		this->schedule( schedule_selector(Menu::playAnimation), 7.0 );
    return true;
}


void Menu::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}


void Menu::menuParamCallback(CCObject* pSender)
{
CCScene *s = Param::scene();
			CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.5,s));
}


void Menu::menuStartCallback(CCObject* pSender)
{
CCScene *s = Game::scene();
			CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.5,s));
}


void Menu::playAnimation(float dt)
{
			CCAnimation* animation = CCAnimation::create();
		animation->setDelayPerUnit(0.09f);
		animation->setRestoreOriginalFrame(true);
		/*
		animation->addSpriteFrameWithFileName("wait1.png");
		animation->addSpriteFrameWithFileName("wait2.png");
		animation->addSpriteFrameWithFileName("wait3.png");
		animation->addSpriteFrameWithFileName("wait4.png");
		animation->addSpriteFrameWithFileName("wait5.png");
		animation->addSpriteFrameWithFileName("wait6.png");*/
		animation->addSpriteFrameWithFileName("yes1.png");
		animation->addSpriteFrameWithFileName("yes2.png");
		animation->addSpriteFrameWithFileName("yes3.png");
		animation->addSpriteFrameWithFileName("yes4.png");
		animation->addSpriteFrameWithFileName("yes5.png");
		animation->addSpriteFrameWithFileName("yes6.png");/*
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
		animation->addSpriteFrameWithFileName("wait2.png");*/
		
		CCAnimate* animate = CCAnimate::create(animation);
		//CCRepeatForever* repeat = CCRepeatForever::create(animate);
		animate->setTag(333);
		player->runAction(animate);
}
