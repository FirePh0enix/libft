#include "test.h"
#include <string.h>

void test_memmove()
{
	TEST_COPY_OVERLAP(ft_memmove, "Hello world, this is a test", memmove(src1 + 11, src1, 11), ft_memmove(src2 + 11, src2, 11), char*, "%s");
}
