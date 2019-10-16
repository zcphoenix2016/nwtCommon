#include "NwtBase.h"
#include "WinSock2.h"

int nwtSend(unsigned int sock, void* buf, size_t nbytes) {
    int nsent = 0;
    size_t nleft = nbytes;
    char* ptr = (char*)buf;
    while (nleft > 0) {
        nsent = send(sock, ptr, nleft, 0);
        if (0 == nsent) {
            break;
        }
        if (0 > nsent) {
            return -1;
        }
        ptr += nsent;
        nleft -= nsent;
    }

    return (int)(nbytes - nleft);
}

int nwtRecv(unsigned int sock, void* buf, size_t nbytes) {
    int nread = 0;
    size_t nleft = nbytes;
    char* ptr = (char*)buf;
    while (nleft > 0) {
        nread = recv(sock, ptr, nleft, 0);
        if (0 == nread) {
            break;
        }
        if (0 > nread) {
            return -1;
        }
        ptr += nread;
        nleft -= nread;
    }

    return (int)(nbytes - nleft);
}