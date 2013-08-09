TEMPLATE = app
CONFIG += console
CONFIG -= app_bundle
CONFIG -= qt

# Try get path from project settings.
isEmpty(COCOS2D_ROOT):COCOS2D_ROOT=$$(COCOS2D_ROOT)
# Try get path from environment variable.
isEmpty(COCOS2D_ROOT):COCOS2D_ROOT = $$system(echo $COCOS2D_ROOT)


# set a variable for config cocos2dx modules
# --------------------------------------------
# the simple audio engine
%COCOS_DENSHION%COCOS2D_MODULES += CocosDenshion
# some extensions eg: CCTableView
%COCOS_EXTENSIONS%COCOS2D_MODULES += extensions
# the box2d physics engine
%COCOS_BOX2D%COCOS2D_MODULES += box2d
# the chipmunk physics engine
%COCOS_CHIPMUNK%COCOS2D_MODULES += chipmunk
# --------------------------------------------

include($$COCOS2D_ROOT/cocos2dx/proj.linux/cocos2dx.pri)

SOURCES += proj.linux/main.cpp \
	Classes/AppDelegate.cpp	\
	Classes/HelloWorldScene.cpp

HEADERS += proj.linux/main.h \
	Classes/AppDelegate.h \
	Classes/HelloWorldScene.h

