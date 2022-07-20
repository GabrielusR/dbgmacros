#include <stdio.h>

#include "utils.h"

void time_elapsed(struct timeval *begin, struct timeval *end, const char *msg)
{
long elapsed;
	
	elapsed = end->tv_usec - begin->tv_usec;

	fprintf(stderr, "[ELAPSED TIMER] %s: %ld (microseconds)\n", msg, elapsed);
}

