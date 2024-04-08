#include<iostream>
#ifndef _SOCKET_H_
#define _SOCKET_H_
class Socket
{
public:
    Socket();
    ~Socket();
    int create();
    int bind(const char* ip, int port);
    int listen(int backlog);
    int accept();
    int connect(const char* ip, int port);
    int send(const char* buf, int len);
    int recv(char* buf, int len);
    void close();
};
#endif