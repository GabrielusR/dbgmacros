#ifndef _UTILS_H_
#define _UTILS_H

#include <sys/time.h>

void time_elapsed(struct timeval *begin, struct timeval *end, const char *msg);

#endif
