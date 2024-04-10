#ifndef INCLUDE_HTTP_TCPSERVER_LINUX
#define INCLUDE_HTTP_TCPSERVER_LINUX
#include<sys/socket.h>
#include<arpa/inet.h>
#include<string>
namespace http
{
    class TcpServer
    {
    public:
        TcpServer();
        ~TcpServer();
    private:
        int startServer();
        void closeServer();
        

    private:
       std::string m_ip_address;
        int m_port;
        int m_socket;
        int m_new_socket;
        long m_incomingMessage;
        struct sockaddr_in m_socketAddress;
        unsigned int m_socketAddress_len;
        std::string m_serverMessage;

    };
}
#endif