#pragma once
#include <string>
#define  CX_MSG_HEADER_LEN 4

enum EProtocalType
{
	PTO_C2C_SIGNUP=0,
	PTO_C2C_LOGIN=1,
	PTO_C2C_LOGOUT=2,
	PTO_C2C_MOVE_TO_POS=3,
	PTO_C2C_PLAYER_ENTER=4,
	PTO_C2C_CHAT=5,
	PTO_C2C_SAVE_PLAYER_DATABASE=6,
	PTO_C2S_DOSTRING=7,
	PTO_C2S_COMBAT_START=8,
	PTO_S2C_COMBAT_START=9,
	PTO_S2C_COMBAT_EXECUTE=10,
	PTO_C2S_COMBAT_CMD=11,
	PTO_S2C_SYNC_PROPS=12,
	PTO_C2S_NPC_DIALOG=13,
	PTO_S2C_NPC_DIALOG=14
};

void luaopen_protocol(lua_State* L);   
