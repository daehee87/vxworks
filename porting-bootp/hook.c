// gcc -o hook.so hook.c -fPIC -shared -ldl
// LD_PRELOAD=./hook.so /bin/ls
#define _GNU_SOURCE
#include <stdio.h>
#include <sys/types.h>
#include <dlfcn.h>

#include <fcntl.h>
#include <sys/time.h>		/* for setitimer */
#include <unistd.h>		/* for pause */
#include <signal.h>		/* for signal */


extern char** environ;
int __libc_start_main(int (*main)(int,char**,char**), int argc, char** ubp_av, void (*init)(void), void (*fini)(void), void (*rtld_fini)(void), void (* stack_end)){

  main(argc, ubp_av, environ);
  _exit(0);   // should never return
  return 0;
}

int bind(int fd, const struct sockaddr *addr, unsigned int len){
	return 1;
}

#include <string.h>

#include <sys/time.h>
#include <sys/select.h>

#include <termios.h> // Contains POSIX terminal control definitions
#include <unistd.h> // write(), read(), close()

int read_with_timeout(int fd, char *buf, int buf_size, int timeout_ms)
{
    int rx_len = 0;
    struct    timeval  timeout;
    fd_set  	readFds;

    // recive time out config
    // Set 1ms timeout counter
    timeout.tv_sec  = 0;
    timeout.tv_usec = timeout_ms*1000;

    FD_ZERO(&readFds);
    FD_SET(fd, &readFds);
    select(fd+1, &readFds, NULL, NULL, &timeout);

    if(FD_ISSET(fd, &readFds))
    {
        rx_len = read(fd, buf, buf_size);
    }

	return rx_len;
}


ssize_t recvfrom(int fd, void *buf, size_t n, int flags, struct sockaddr *addr, unsigned int *addr_len){
	// substitute network to stdin
	ssize_t r =  read_with_timeout(0, buf, n, 50);
	char* p = (char*)buf;
	p[0] = 1;	// REQUEST protocol
	*addr_len = r;
	return r;
}

ssize_t sendto(int fd, const void *buf, size_t n, int flags, const struct sockaddr *addr, unsigned int addr_len){
	// just pretend we sent it.
	return n;
}
