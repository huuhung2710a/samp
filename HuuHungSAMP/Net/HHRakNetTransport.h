#pragma once
#include <cstddef>
#include <cstdint>
#include <string>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
class HHRakNetTransport {
public:
    HHRakNetTransport(); ~HHRakNetTransport();
    bool connect(const std::string& host, uint16_t port);
    void disconnect();
    ssize_t receive(void* buffer, size_t size);
    bool send(const void* data,size_t size);
    bool connected() const { return fd_ >= 0; }
private:
    int fd_=-1; struct sockaddr_storage* peer_=nullptr; socklen_t peerLen_=0;
};
