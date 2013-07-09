#include "ParamScene.h"
#include "MenuScene.h"
#include "AppMacros.h"
USING_NS_CC;


CCScene* Param::scene()
{
    // 'scene' is an autorelease object
    CCScene *scene = CCScene::create();
    
    // 'layer' is an autorelease object
    Param *layer = Param::create();

    // add layer as a child to scene
    scene->addChild(layer);

    // return the scene
    return scene;
}

// on "init" you need to initialize your instance
bool Param::init()
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
                                        menu_selector(Param::menuCloseCallback));
    
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
    
    CCSprite* pLabel = CCSprite::create("parametre.png");
    
    // position the label on the center of the screen
    pLabel->setPosition(ccp(0,
                            origin.y + visibleSize.height - pLabel->getContentSize().height *2));


	CCMoveTo* paramToCenter = CCMoveTo::create(0.5,ccp(origin.x + visibleSize.width/2,
                            origin.y + visibleSize.height - pLabel->getContentSize().height *2)); 
	pLabel->runAction(paramToCenter);

    // add the label as a child to this layer
    this->addChild(pLabel, 1);

    // add "Param" splash screen"
    CCSprite* pSprite = CCSprite::create("bg_param.png");

    // position the sprite on the center of the screen
    pSprite->setPosition(ccp(visibleSize.width/2 + origin.x, visibleSize.height/2 + origin.y));

    // add the sprite as a child to this layer
    this->addChild(pSprite, 0);
    
    return true;
}


void Param::menuCloseCallback(CCObject* pSender)
{
	/*
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif*/

	CCScene *s = Menu::scene();
			CCDirector::sharedDirector()->replaceScene(CCTransitionFade::create(0.5,s));

}