#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>
#include <stdlib.h>

int rand(void)
{
	static int (*original_rand)(void);
	if (!original_rand)
	{
		original_rand = dlsym(RTLD_NEXT, "rand");
		if (!original_rand)
		{
			fprintf(stderr, "Error: %s\n", dlerror());
			exit(1);
		}
	}
	return ((*original_rand)() % 6 + 1);
}
