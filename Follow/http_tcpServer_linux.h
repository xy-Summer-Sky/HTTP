#ifndef INCLUDE_HTTP_TCPSERVER_LINUX
#define INCLUDE_HTTP_TCPSERVER_LINUX
#include<sys/socket.h>
namespace http
{
    class TcpServer
    {
    public:
        TcpServer();
        ~TcpServer();
        int startServer();

    private:
     std::string m_ip_address;
    };
}
#endif