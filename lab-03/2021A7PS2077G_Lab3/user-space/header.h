#ifndef __HEADER_H_
#define __HEADER_H_

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define MY_SYSCALL 451

void run_syscall(int pid, int opt);

#endif
