#pragma once

int nwtSend(unsigned int sock, void* buf, size_t nbytes);
int nwtRecv(unsigned int sock, void* buf, size_t nbytes);