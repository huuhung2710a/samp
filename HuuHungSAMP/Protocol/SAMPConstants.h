#pragma once
#include <cstdint>
namespace HH::SAMP { enum Packet:uint8_t{ID_CONNECTION_REQUEST=200,ID_CONNECTION_REQUEST_ACCEPTED=16,ID_CONNECTION_ATTEMPT_FAILED=17,ID_INVALID_PASSWORD=24,ID_DISCONNECTION_NOTIFICATION=21}; enum RPC:uint8_t{RPC_RequestClass=128,RPC_RequestSpawn=129,RPC_Spawn=52,RPC_SetSpawnInfo=68,RPC_SetPlayerPos=12,RPC_SetPlayerHealth=14,RPC_SetPlayerArmour=66,RPC_SetPlayerColor=72,RPC_ClientMessage=93,RPC_Chat=101,RPC_ShowDialog=61,RPC_InitGame=139}; }
