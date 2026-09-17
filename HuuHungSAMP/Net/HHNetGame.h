#pragma once
#include <cstdint>
#include <string>
#include <vector>
#include "HHRakNetTransport.h"

struct HHServerInfo { std::string host; uint16_t port=7777; std::string name; uint32_t players=0; uint32_t maxPlayers=0; uint32_t ping=0; };
class HHNetGame {
public:
    bool connect(const std::string& host, uint16_t port, const std::string& nickname);
    void disconnect();
    void poll();
    bool connected() const { return transport_.connected(); }
    const HHServerInfo& server() const { return server_; }
private:
    HHRakNetTransport transport_;
    HHServerInfo server_;
    std::string nickname_;
};
