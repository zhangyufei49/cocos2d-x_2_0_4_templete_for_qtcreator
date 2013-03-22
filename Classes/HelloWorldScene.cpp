#include "HelloWorldScene.h"
USING_NS_CC;


#define TITLE_FONT_SIZE 20

CCScene* HelloWorld::scene()
{
	// 'scene' is an autorelease object
	CCScene *scene = CCScene::create();

	// 'layer' is an autorelease object
	HelloWorld *layer = HelloWorld::create();

	// add layer as a child to scene
	scene->addChild(layer);

	// return the scene
	return scene;
}

// on "init" you need to initialize your instance
bool HelloWorld::init()
{
	//////////////////////////////
	// 1. super init first
	if ( !CCLayer::init() )
	{
		return false;
	}

	CCSize visibleSize = CCDirector::sharedDirector()->getVisibleSize();
	CCPoint origin = CCDirector::sharedDirector()->getVisibleOrigin();

	CCLabelTTF* pLabel = CCLabelTTF::create("Hello Gril", "Arial", TITLE_FONT_SIZE);

	// position the label on the center of the screen
	pLabel->setPosition(ccp(origin.x + visibleSize.width/2,
		origin.y + visibleSize.height - pLabel->getContentSize().height));

	// add the label as a child to this layer
	this->addChild(pLabel, 1);

	return true;
}


void HelloWorld::menuCloseCallback(CCObject* pSender)
{
	CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}
