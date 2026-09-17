#include "HHSampClient.h"
HHSampClient::HHSampClient() : game_(iOSGameAdapter::Config::GTA_SA_IOS_2_2_21) {}
bool HHSampClient::connect(const std::string& host, uint16_t port, const std::string& nickname) {
    nickname_ = nickname;
    return net_.connect(host, port, nickname);
}
void HHSampClient::disconnect() { net_.disconnect(); }
void HHSampClient::tick() { net_.poll(); }
bool HHSampClient::connected() const { return net_.connected(); }
