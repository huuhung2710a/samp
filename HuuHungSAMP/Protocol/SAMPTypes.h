#pragma once
#include <cstdint>
#include <string>
namespace HH { struct Vec3{float x{},y{},z{};}; struct ServerInfo{std::string host;uint16_t port{7777};std::string name;uint16_t players{},maxPlayers{};uint32_t ping{};}; }
