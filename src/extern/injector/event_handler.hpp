#pragma once

#include <winsock2.h>

//network helpers and other buffer typings to help with socket management
#include <boost/asio.hpp>
#include <boost/beast.hpp>
#include <boost/network/uri.hpp>

class steam_client
{
public:
    static uint16_t get_ipc_port();
    steam_client();
};

unsigned long __stdcall Initialize(void*);