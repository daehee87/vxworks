// gcc -o hook.so hook.c -fPIC -shared -ldl
// LD_PRELOAD=./hook.so /bin/ls
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <dlfcn.h>
extern char** environ;
int __libc_start_main(int (*main)(int,char**,char**), int argc, char** ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (* stack_end)){
    main(argc, ubp_av, environ);
    _exit(0);   // should never return
    return 0;
}

