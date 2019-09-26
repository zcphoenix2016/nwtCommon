#pragma once

#include <string>

class Contact {
public:
    Contact(unsigned long long account, const char* nickname)
        : m_account(account), m_nickname(nickname)
    {
    }

public:
    unsigned long long m_account = 0;
    std::string m_nickname = "";
};
