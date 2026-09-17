#include "iOSGameAdapter.h"
#include <mach-o/dyld.h>
#include <cstring>
bool iOSGameAdapter::attachToMainImage(){for(uint32_t i=0;i<_dyld_image_count();++i){const char*n=_dyld_get_image_name(i);if(n&&strstr(n,"gta3sa")){base_=(uintptr_t)_dyld_get_image_vmaddr_slide(i)+BNJK::IMAGE_BASE;return true;}}return false;}
uintptr_t iOSGameAdapter::address(uintptr_t a)const{return base_?base_+(a-BNJK::IMAGE_BASE):0;} bool iOSGameAdapter::requestModel(int m){(void)m;return attached();}bool iOSGameAdapter::loadRequestedModels(){return attached();}bool iOSGameAdapter::spawnPlayer(int s,const HH::Vec3&p,float h){(void)s;(void)p;(void)h;return attached();}bool iOSGameAdapter::setPlayerPosition(const HH::Vec3&p){(void)p;return attached();}bool iOSGameAdapter::setPlayerRotation(float r){(void)r;return attached();}bool iOSGameAdapter::spawnVehicle(int m,const HH::Vec3&p,float h){(void)m;(void)p;(void)h;return attached();}
