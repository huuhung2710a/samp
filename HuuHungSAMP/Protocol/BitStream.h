#pragma once
#include <cstdint>
#include <cstring>
#include <string>
#include <vector>
namespace HH { class BitStream { std::vector<uint8_t>b_;size_t r_=0; public: BitStream()=default;BitStream(const uint8_t*d,size_t n):b_(d,d+n){} const uint8_t*data()const{return b_.data();}size_t size()const{return b_.size();}template<class T>void write(const T&v){auto p=(const uint8_t*)&v;b_.insert(b_.end(),p,p+sizeof(T));}void writeBytes(const void*d,size_t n){auto p=(const uint8_t*)d;b_.insert(b_.end(),p,p+n);}void writeString8(const std::string&s){uint8_t n=(uint8_t)(s.size()>255?255:s.size());write(n);writeBytes(s.data(),n);}template<class T>bool read(T&v){if(r_+sizeof(T)>b_.size())return false;memcpy(&v,b_.data()+r_,sizeof(T));r_+=sizeof(T);return true;}bool readString8(std::string&s){uint8_t n;if(!read(n)||r_+n>b_.size())return false;s.assign((char*)b_.data()+r_,n);r_+=n;return true;}}; }
