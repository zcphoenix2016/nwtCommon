#pragma once

#include <string>

class Contact {
public:
    Contact(unsigned int account, const char* nickname, const char* password)
        : m_account(account), m_nickname(nickname), m_password(password)
    {
    }

public:
    unsigned int m_account = 0;
    std::string m_nickname = "";
    std::string m_password = "";
};
