#include "main.h"
#include "../Classes/AppDelegate.h"
#include "cocos2d.h"


#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string>

using namespace cocos2d;

// 500 is enough?
#define MAXPATHLEN 500

int main(int argc, char **argv)
{
    CC_UNUSED_PARAM(argc);
    CC_UNUSED_PARAM(argv);

    AppDelegate app;
    EGLView *eglView = EGLView::getInstance();
    eglView->setFrameSize(480, 800);

    return Application::getInstance()->run();
}
