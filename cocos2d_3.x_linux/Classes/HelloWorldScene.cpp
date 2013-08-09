#include "HelloWorldScene.h"

using namespace cocos2d;

#define TITLE_FONT_SIZE 20
#if(CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
#define FONT_NAME "Monospace"
#else
#define FONT_NAME "Arial"
#endif


Scene* HelloWorld::scene()
{
	// 'scene' is an autorelease object
    Scene *scene = Scene::create();

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
    if (!Layer::init())
	{
		return false;
	}

    Size visibleSize = Director::getInstance()->getVisibleSize();
    Point origin = Director::getInstance()->getVisibleOrigin();

    LabelTTF* pLabel = LabelTTF::create("Hello Girl", FONT_NAME, TITLE_FONT_SIZE);

	// position the label on the center of the screen
    pLabel->setPosition(Point(origin.x + visibleSize.width / 2,
		origin.y + visibleSize.height - pLabel->getContentSize().height));

	// add the label as a child to this layer
	this->addChild(pLabel, 1);

	return true;
}


void HelloWorld::menuCloseCallback(Object* pSender)
{
    Director::getInstance()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
	exit(0);
#endif
}
