#pragma once
#include <cstdint>
namespace BNJK {
constexpr uintptr_t IMAGE_BASE=0x100000000ULL;
constexpr uintptr_t PlayerFactory=0x10026CF8CULL;
constexpr uintptr_t PlayerPedAllocator=0x10023CB7CULL;
constexpr uintptr_t PlayerSetup=0x100246C38ULL;
constexpr uintptr_t MultiPedSpawn=0x10027AA30ULL;
constexpr uintptr_t PedSetModelIndex=0x10023CDD8ULL;
constexpr uintptr_t RequestModel=0x100307D54ULL;
constexpr uintptr_t LoadRequestedModels=0x1003078A4ULL;
constexpr uintptr_t EntityMatrixSetup=0x10016C590ULL;
constexpr uintptr_t MatrixOperation=0x10022A904ULL;
constexpr uintptr_t MatrixFinalize=0x1002B8070ULL;
constexpr uintptr_t VehicleCtorA=0x1004233F8ULL;
constexpr uintptr_t VehicleCtorB=0x100423668ULL;
constexpr uintptr_t SectorInsert=0x100160634ULL;
}
