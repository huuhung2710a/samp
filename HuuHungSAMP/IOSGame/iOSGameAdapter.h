#pragma once
#include <cstdint>
#include "BNJK/BNJKOffsets_2_2_21.h"
class iOSGameAdapter {
public:
    enum class Config { GTA_SA_IOS_2_2_21 };
    explicit iOSGameAdapter(Config c):config_(c){}
    bool attach(void* gtaImageBase);
    uintptr_t address(uintptr_t imageAddress) const;
    bool spawnPlayer(int skin,float x,float y,float z,float heading);
    bool setPlayerPosition(float x,float y,float z);
    bool requestModel(int model);
private: Config config_; uintptr_t imageBase_=0;
};
