#ifndef __PARAM_SCENE_H__
#define __PARAM_SCENE_H__
#include "cocos2d.h"

#include "Box2D/Box2D.h"
#include "CParallaxNodeExtras.h"

USING_NS_CC ;
class Param : public CCLayer
{
public:
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();  

    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::CCScene* scene();
    
    // a selector callback
    void menuCloseCallback(CCObject* pSender);
    
    // implement the "static node()" method manually
    CREATE_FUNC(Param);
};
#endif
