#ifndef __BIRD_CONFIG_H_
#define __BIRD_CONFIG_H_

/*********************| >@P= |*********************/
/**
 * @clear all global config will be cleared here
 */
/*********************| >@P= |*********************/

/*********************| font size |*********************/

#define BIG_FONT_SIZE 			28
#define MID_FONT_SIZE 			24
#define SMALL_FONT_SIZE 		20

/*********************| font family in diff OS |*********************/

#if (CC_TARGET_PLATFORM == CC_PLATFORM_LINUX)
#define CHS_FONT 			"文泉驿微米黑"
#define EN_FONT 			"Ubuntu Mono"
#else
#define CHS_FONT 			"Arial"
#define EN_FONT 			"Arial"
#endif

/*********************| DEBUG MODE on/off |*********************/

/* uncomment here open debug mode */
//#define DEBUG_MODE 			1

/*********************| runtime config put here |*********************/


#endif /* end of include guard: __BIRD_CONFIG_H_ */
