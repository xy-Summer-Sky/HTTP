#include<iostream>
#ifndef _Request_H_
#define _Request_H_
class Request
{
public:
    Request();
    ~Request();
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

