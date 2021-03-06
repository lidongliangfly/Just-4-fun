#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "srvmode.h"

void usage()
{
    printf("echosrv -m [select|poll|epoll]\n");
    exit(0);
}

int main(int argc, char **argv)
{
    if (argc != 3 || strncmp("-m", argv[1], 3)) {
        usage();
    }

    if (!strncmp("select", argv[2], 7)) {
        echo_select();
    } else if (!strncmp("poll", argv[2], 5)) {
        echo_poll();
    } else if (!strncmp("epoll-lt", argv[2], 9)) {
        echo_epoll_lt();
    } else if (!strncmp("epoll-et", argv[2], 9)) {
        echo_epoll_et();
    } else {
        usage();
    }
    return 0;
}
