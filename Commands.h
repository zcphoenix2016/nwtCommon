#pragma once

#include "NwtHeader.h"

const unsigned int CMD_LOGIN_REQ = 0x1000;
const unsigned int CMD_LOGIN_RSP = 0x4000;
const unsigned int CMD_INSTANT_MSG = 0x1001;
const unsigned int LOGIN_SUCCESS = '0';
const unsigned int LOGIN_FAIL = '1';

class BaseMsg {
public:
    BaseMsg() {
        m_head = NwtHeader();
    }

public:
    NwtHeader m_head;
};

class LoginReq : public BaseMsg {
public:
    LoginReq() {
        BaseMsg();
    }

public:
    unsigned int m_account = 0;
    char m_password[32] = { 0 };
};

class LoginRsp : public BaseMsg {
public:
    LoginRsp() {
        BaseMsg();
    }

public:
    unsigned int m_account = 0;
    unsigned int m_rspCode = LOGIN_SUCCESS;
    char m_rspMsg[64] = { 0 };
};
