#pragma once

#include "NwtHeader.h"

int nwtSend(unsigned int sock, void* buf, size_t nbytes);
void* nwtRecv(unsigned int sock);