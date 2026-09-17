#pragma once
#include <cstdint>
#include <unordered_map>
struct HHVec3 { float x=0,y=0,z=0; };
struct HHPlayer { int id=-1; int skin=0; HHVec3 pos{}; float heading=0; bool spawned=false; };
struct HHVehicle { int id=-1; int model=0; HHVec3 pos{}; float heading=0; bool active=false; };
class HHPools {
public:
    void clear(){players.clear();vehicles.clear();}
    std::unordered_map<int,HHPlayer> players;
    std::unordered_map<int,HHVehicle> vehicles;
};
