#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <time.h>
int msleep(long msec)
{
    struct timespec ts;
    int res;
    if (msec < 0)
    {
        errno = EINVAL;
        return -1;
    }
    ts.tv_sec = msec / 1000;
    ts.tv_nsec = (msec % 1000) * 1000000;
    do {
        res = nanosleep(&ts, &ts);
    } while (res && errno == EINTR);
    return res;
}
int main () {
    int total = 0;
    printf("Allocating 1MB of memory every hundreth of a second\n");
    while(1) {
        char * bad = (char *) malloc (1024 * 1024);
        fprintf(stderr, "Allocated % 4d MB\r", ++total);
        memset(bad, 0xcc, 1024*1024);
        msleep(10);
    }
    return 0; //Arguably unreachable
}
