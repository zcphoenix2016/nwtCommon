#pragma once

class NwtHeader
{
public:
    NwtHeader(unsigned int cmd, unsigned int srcAccount, unsigned int tarAccount, unsigned int contentLength)
        : m_cmd(cmd), m_srcAccount(srcAccount), m_tarAccount(tarAccount), m_contentLength(contentLength)
    {
    }

public:
    unsigned int m_cmd = 0;
    unsigned int m_srcAccount = 0;
    unsigned int m_tarAccount = 0;
    unsigned int m_contentLength = 0;
};
