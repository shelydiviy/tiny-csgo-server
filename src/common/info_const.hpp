#ifndef __TINY_CSGO_SERVER_INFO_CONST_HPP__
#define __TINY_CSGO_SERVER_INFO_CONST_HPP__

#ifdef _WIN32
#pragma once
#endif

#define _DECL_CONST inline constexpr auto

//Configs
_DECL_CONST CONFIG_HANDLE_QUERY_BY_STEAM = 0;
_DECL_CONST CONNECTIONLESS_HEADER = -1;
_DECL_CONST A2S_INFO_REQUEST_BODY = "Source Engine Query";

_DECL_CONST SERVER_REGION_UE = "0";
_DECL_CONST SERVER_REGION_UW = "1";
_DECL_CONST SERVER_REGION_SA = "2";
_DECL_CONST SERVER_REGION_EU = "3";
_DECL_CONST SERVER_REGION_ASIA = "4";
_DECL_CONST SERVER_REGION_AUS = "5";
_DECL_CONST SERVER_REGION_ME = "6";
_DECL_CONST SERVER_REGION_AFC = "7";

// Server information for Counter-Strike 1.6 emulation
_DECL_CONST SERVER_NAME = "CS 1.6 Server"; // Название сервера
_DECL_CONST SERVER_MAP = "de_dust2";           // Карта для CS 1.6 (например, de_dust2)
_DECL_CONST SERVER_GAME_FOLDER = "cstrike";    // Папка с игрой для CS 1.6
_DECL_CONST SERVER_DESCRIPTION = "Counter-Strike"; // Описание сервера
_DECL_CONST SERVER_APPID = 10;                 // AppID для CS 1.6
_DECL_CONST SERVER_NUM_CLIENTS = 10;           // Текущее количество игроков
_DECL_CONST SERVER_MAX_CLIENTS = 12;           // Максимальное количество игроков
_DECL_CONST SERVER_NUM_FAKE_CLIENTS = 0;       // Количество бот-игроков
_DECL_CONST SERVER_TYPE = 'd';                 // Тип сервера: 'd' для выделенного сервера
_DECL_CONST SERVER_OS = 'w';                   // Операционная система: 'w' для Windows
_DECL_CONST SERVER_PASSWD_NEEDED = 0;          // Требуется ли пароль (0 - нет, 1 - да)
_DECL_CONST SERVER_VAC_STATES = 1;             // VAC защита включена (1 - включена, 0 - выключена)
_DECL_CONST SERVER_TAG = "pure, vac, tiny-cs16-server"; // Теги сервера
_DECL_CONST SERVER_DCFRIENDSREQD = 0;          // Требуется ли дружба в Steam для входа (0 - нет)
_DECL_CONST SERVER_VALVE_OFFICIAL = 0;         // Является ли сервер официальным Valve (0 - нет)
_DECL_CONST SERVER_REGION = SERVER_REGION_ASIA;// Регион сервера
_DECL_CONST SERVER_PROTOCOL = 48;              // Протокол для CS 1.6

_DECL_CONST SERVER_CHALLENGE = 0xdeadbeef;

//Other defines 
#define PROTOCOL_AUTHCERTIFICATE 0x01   // Connection from client is using a WON authenticated certificate
#define PROTOCOL_HASHEDCDKEY     0x02	// Connection from client is using hashed CD key because WON comm. channel was unreachable
#define PROTOCOL_STEAM			 0x03	// Steam certificates
#define PROTOCOL_LASTVALID       0x03    // Last valid protocol

#endif // !__TINY_CSGO_SERVER_INFO_CONST_HPP__
