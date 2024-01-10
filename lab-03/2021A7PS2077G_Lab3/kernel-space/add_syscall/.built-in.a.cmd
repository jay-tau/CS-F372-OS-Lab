cmd_add_syscall/built-in.a := rm -f add_syscall/built-in.a; echo add_syscall.o | sed -E 's:([^ ]+):add_syscall/\1:g' | xargs ar cDPrST add_syscall/built-in.a
