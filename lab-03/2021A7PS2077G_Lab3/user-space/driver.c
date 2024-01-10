#include "header.h"

int main(int argc, char * argv[]) {
	if (argc != 3) {
		printf("./executable <pid> <opt>");
		return 1;
	}
	int pid, opt;
	pid = atoi(argv[1]);
	opt = atoi(argv[2]);

	run_syscall(pid, opt);

	return 0;
}
