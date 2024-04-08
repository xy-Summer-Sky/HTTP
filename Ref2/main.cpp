int main() 
{ 
    int server_fd;
    struct sockaddr_in server_addr;
    server_fd = socket(AF_INET, SOCK_STREAM, 0);
    int on = 1;
    setsockopt(server_fd, SOL_SOCKET, SO_REUSEADDR, &on, sizeof(on));
    if (server_fd < 0) { 
        perror("create socket error"); 
        goto EXIT;
    }
    memset(&server_addr, 0, sizeof(server_addr));
    server_addr.sin_family       = AF_INET;
    server_addr.sin_port         = htons(8888);
    server_addr.sin_addr.s_addr  = htonl(INADDR_ANY);
    if (bind(server_fd, (struct sockaddr*)&server_addr, sizeof(server_addr)) < 0) { 
        perror("bind address error"); 
        goto EXIT;
    }
    if (listen(server_fd, 511) < 0) { 
        perror("listen port error"); 
        goto EXIT;
    }
    while(1) {
        int connfd = accept(server_fd, nullptr, nullptr);
        if (connfd < 0) 
        { 
            perror("accept error"); 
            continue;
        }
        // 处理
    }
    close(server_fd);
    return 0;
EXIT:
    exit(1); 
}