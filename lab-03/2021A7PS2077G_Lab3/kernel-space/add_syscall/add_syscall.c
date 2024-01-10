#include <linux/kernel.h>
#include <linux/types.h>
#include <linux/syscalls.h>
#include <linux/sysinfo.h>
#include <linux/kernel_stat.h>
#include <linux/sched.h>
#include <linux/sched/signal.h>
#include <linux/mm.h>
#include "add_syscall.h"

SYSCALL_DEFINE2(add_syscall, int, pid, int, opt) {
    struct task_struct *task;
    struct mm_struct *mm;
    struct sysinfo sys_inf;

    unsigned long res = -1;
    if (pid < 0)
        return 5;
    if (opt < 0 || opt > 3)
        return 6;

    task = pid_task(find_vpid(pid), PIDTYPE_PID);
    if (!task)
        return 7;

    mm = task->mm;
    if (!mm)
        return 8;

    if (opt == 0)
        res = (mm->total_vm) << PAGE_SHIFT;
    else if (opt == 1)
        res = get_mm_rss(mm) << PAGE_SHIFT;
    else if (opt == 2) {
        si_meminfo(&sys_inf);
        res = (sys_inf.totalram - sys_inf.freeram) * (sys_inf.mem_unit / 1024);
    } else if (opt == 3) {
        si_meminfo(&sys_inf);
        res = (sys_inf.totalram - sys_inf.freeram) * 100 / sys_inf.totalram;
    } else {
        return 9;
    }

    return res;
}
