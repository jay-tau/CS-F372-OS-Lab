#include "header.h"

void run_syscall(int pid, int opt) {
	unsigned long ret = syscall(MY_SYSCALL, pid, opt);
	printf("%lu\n", ret);
}
