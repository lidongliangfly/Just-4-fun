/**
Commom structs and headers
@author zhpeng
@version 10.05.30
*/
#ifndef __ARPZ_COMMON__
#define __ARPZ_COMMON__

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <features.h>

#include <sys/socket.h>
#include <sys/types.h>
#include <sys/ioctl.h>

#include <netinet/in.h>
#include <netdb.h>
#include <net/ethernet.h>
#include <net/if_arp.h>
#include <net/if.h>

#include <linux/if_packet.h>
#include <linux/if_ether.h>


struct ethernet_header {
    unsigned char dst[6];   /*destination mac*/
    unsigned char src[6];   /*source mac*/
    unsigned short pro;     /*protocol*/
};

struct arp_header {
    unsigned short hardware;    /*harware address space*/
    unsigned short protocol;    /*protoco address space*/
    unsigned char hdrlen;       /*hardware addr len*/
    unsigned char prolen;       /*pro addr len*/
    unsigned short opcode;      /*ARPOP_REQUEST | ARPOP_REPLY*/
    unsigned char sha[6];       /*source hardware address*/
    unsigned char spa[4];       /*source protocol address*/
    unsigned char tha[6];       /*target hardware address*/
    unsigned char tpa[4];       /*target protocol address*/
};

#endif
