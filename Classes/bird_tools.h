#ifndef __BIRD_TOOLS_H_
#define __BIRD_TOOLS_H_

/*********************| >@P= |*********************/
/**
 * @clear some marcos and functions for convience 
 * will be cleared here
 */
/*********************| >@ |*********************/

#include "bird_config.h"


/*********************| log func |*********************/
#if !defined(DEBUG_MODE) || DEBUG_MODE == 0
#define bird_say(...) 			do{}while(0)
#elif DEBUG_MODE == 1
#define bird_say(format, ...)      	cocos2d::CCLog(format, ##__VA_ARGS__)
#endif

/*********************| arr size func|*********************/
#define N_SIZE(arr) 			(sizeof(arr) / sizeof(arr[0]))

/*********************| rand func |*********************/

#define INT_RAND() 			(rand() % RAND_MAX)
#define RAND_SEED() 			({\
		cc_timeval psv; \
		CCTime::gettimeofdayCocos2d(&psv, NULL); \
		unsigned long int seed = psv.tv_sec*1000 + psv.tv_usec/1000; \
		srand(seed); \
})

/*********************| quickly interruptor |*********************/

#define NULL_VRET(__obj) 		({if (!__obj) return;})
#define NULL_TRET(__obj, __ret) 	({if (!__obj) return __ret;})

/*********************| section referee |*********************/

#define IS_BETWEEN(__data,__min,__max)	((__data) >= (__min) && (__data) <= (__max))
#define USEFUL_COMMON(type_name, type)	((type) >= 0 && (type) < type_name##_CNT)

/*********************| string commbine |*********************/

#define CMB_STR(_a, _b) 		_a##_b

#endif /* end of include guard: __BIRD_TOOLS_H_ */
