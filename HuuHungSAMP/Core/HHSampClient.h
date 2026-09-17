#pragma once
#include <string>
#include "../Net/HHNetGame.h"
#include "../Game/HHPools.h"
#include "../IOSGame/iOSGameAdapter.h"

class HHSampClient {
public:
    HHSampClient();
    bool connect(const std::string& host, uint16_t port, const std::string& nickname);
    void disconnect();
    void tick();
    bool connected() const;
    const std::string& nickname() const { return nickname_; }
    HHNetGame& net() { return net_; }
    HHPools& pools() { return pools_; }
    iOSGameAdapter& game() { return game_; }
private:
    std::string nickname_;
    HHNetGame net_;
    HHPools pools_;
    iOSGameAdapter game_;
};
