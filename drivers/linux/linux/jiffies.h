#ifndef __LINUX_JIFFIES_H__
#define __LINUX_JIFFIES_H__

#include <linux/types.h>

#define MAX_JIFFY_OFFSET ((LONG_MAX >> 1)-1)

#define HZ		100 
#define USER_HZ		1024
#define	CLOCKS_PER_SEC	USER_HZ	/* frequency at which times() counts */

unsigned long msecs_to_jiffies(const unsigned int m);
unsigned long usecs_to_jiffies(const unsigned int u);
unsigned int jiffies_to_usecs(const unsigned long j);

extern uint64_t jiffies;

#endif /* __LINUX_JIFFIES_H__ */
