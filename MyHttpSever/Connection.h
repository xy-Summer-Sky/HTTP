#include<iostream>
#ifndef _CONNECTION_H_
#define _CONNECTION_H_

class Connection
{
public:
    Connection();
    ~Connection();
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