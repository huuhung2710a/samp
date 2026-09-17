#include "HHRakNetTransport.h"
#include <sys/socket.h>
#include <netdb.h>
#include <unistd.h>
#include <fcntl.h>
#include <cerrno>
#include <cstring>
HHRakNetTransport::HHRakNetTransport() { peer_=new sockaddr_storage{}; }
HHRakNetTransport::~HHRakNetTransport(){ disconnect(); delete peer_; }
bool HHRakNetTransport::connect(const std::string& host,uint16_t port){ disconnect(); addrinfo hints{}; hints.ai_socktype=SOCK_DGRAM; hints.ai_family=AF_UNSPEC; addrinfo* res=nullptr; auto ps=std::to_string(port); if(getaddrinfo(host.c_str(),ps.c_str(),&hints,&res)!=0) return false; fd_=socket(res->ai_family,res->ai_socktype,res->ai_protocol); if(fd_<0){freeaddrinfo(res);return false;} memcpy(peer_,res->ai_addr,res->ai_addrlen); peerLen_=res->ai_addrlen; freeaddrinfo(res); fcntl(fd_,F_SETFL,O_NONBLOCK); return true; }
void HHRakNetTransport::disconnect(){ if(fd_>=0){close(fd_);fd_=-1;} }
ssize_t HHRakNetTransport::receive(void* buffer,size_t size){ if(fd_<0)return -1; return recv(fd_,buffer,size,MSG_DONTWAIT); }
bool HHRakNetTransport::send(const void* data,size_t size){ if(fd_<0)return false; return ::sendto(fd_,data,size,0,(sockaddr*)peer_,peerLen_)==(ssize_t)size; }
