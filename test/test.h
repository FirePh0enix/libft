#ifndef TEST_H
# define TEST_H

#include <assert.h>
#include <stdio.h>
#include "libft.h"

#define STRINGIFY(s) _STRINGIFY(s)
#define _STRINGIFY(s) #s

#define RED(s) "\033[1;31m" STRINGIFY(s) "\033[0m"
#define GREEN(s) "\033[1;32m" STRINGIFY(s) "\033[0m"

#define TEST_COPY_OVERLAP(NAME, SRC, FUNC1, FUNC2, RET, FORMAT) \
	do { \
		char src1[] = SRC; \
		char src2[] = SRC; \
		RET ret1 = FUNC1; \
		RET ret2 = FUNC2; \
		printf("test " STRINGIFY(NAME) " %s\nval1 = " FORMAT "\nval2 = " FORMAT "\n", strcmp(ret1, ret2) == 0 ? GREEN(PASSED) : RED(FAILED), ret1, ret2); \
	} while (0)


void test_memmove();

#endif
