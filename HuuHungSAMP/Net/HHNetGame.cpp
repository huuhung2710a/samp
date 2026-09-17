#include "HHNetGame.h"
bool HHNetGame::connect(const std::string& host,uint16_t port,const std::string& nickname){ nickname_=nickname; server_.host=host; server_.port=port; return transport_.connect(host,port); }
void HHNetGame::disconnect(){ transport_.disconnect(); }
void HHNetGame::poll(){ uint8_t b[2048]; while(transport_.receive(b,sizeof(b))>0){} }
