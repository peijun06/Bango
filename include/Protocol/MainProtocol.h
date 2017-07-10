#ifndef _MAINPROTOCOL_
#define _MAINPROTOCOL_

enum S2C_PROTOCOL
{
	S2C_SECOND_LOGIN = 37,
	S2C_ANS_LOGIN = 149,
	S2C_CODE = 125,
	S2C_CLOSE = 66,
	S2C_EVENT_FISHING = 80,
	S2C_RESULT_CODE = 99,
	S2C_STORAGEINFO = 1,
	S2C_GIVEUP_QUEST = 18,
	S2C_QUESTINFO = 0,
	S2C_SHOWOFFITEM = 16,
	S2C_CLOSETRADE = 4,
	S2C_PLAYERINFO = 114,
	S2C_ANS_LOAD = 104,
	S2C_ANS_START = 21,
	S2C_ACTION = 137,
	S2C_PLAYER_ANIMATION = 168,
	S2C_PROPERTY = 145,
	S2C_CREATEPLAYER = 107,
	S2C_ANS_NEWPLAYER = 161,
	S2C_ANS_RESTART = 116,
	S2C_ANS_GAMEEXIT = 46,
	S2C_RIDING = 198,
	S2C_MESSAGE = 146,
	S2C_SIEGEGUNCONTROL = 174,
	S2C_MOVEPLAYER_ON = 15,
	S2C_MOVEPLAYER_END = 151,
	S2C_MOVEDASHPLAYER_ON = 118,
	S2C_MOVEDASHPLAYER_END = 171,
	S2C_REMOVEMONSTER = 119,
	S2C_REMOVEPLAYER = 135,
	S2C_REMOVENPC = 155,
	S2C_MOVEMONSTER_ON = 152,
	S2C_MOVEMONSTER_END = 173,
	S2C_CHATTING = 109,
	S2C_MOVEBEFORE = 139,
	S2C_UPDATEPROPERTY = 79,
	S2C_CREATENPC = 134,
	S2C_TELEPORT = 69,
	S2C_SENDHTML = 47,
	S2C_INSERTITEM = 133,
	S2C_INSERT_SITEM = 10,
	S2C_UPDATEITEMINFO = 157,
	S2C_UPDATEITEMNUM = 25,
	S2C_UDPATE_SITEMNUM = 77,
	S2C_REMOVEITEM = 87,
	S2C_TRASHITEM = 7,
	S2C_ITEMINFO = 124,
	S2C_UPDATEITEMEND = 89,
	S2C_EFFECT = 110,
	S2C_PUTONITEM = 159,
	S2C_PUTOFFITEM = 170,
	S2C_ATTACH_PET = 35,
	S2C_NOTICE = 169,
	S2C_SHORTCUT = 123,
	S2C_CREATEMONSTER = 147,
	S2C_ITEMSHOP = 186,
	S2C_ASKPARTY = 162,
	S2C_PARTYINFO = 56,
	S2C_UPDATEPARTY = 72,
	S2C_ATTACK = 144,
};

enum C2S_PROTOCOL
{
	C2S_CONNECT = 9,//8,
	C2S_ANS_CODE = 4,//3,
	C2S_LOGIN = 8,//7,
	C2S_SECOND_LOGIN = 10,//9,
	C2S_LOADPLAYER = 5,//4,
	C2S_DELPLAYER = 3,//2,
	C2S_NEWPLAYER = 6,//5,
	C2S_RESTOREPLAYER = 7,//6,
	///////////////////////
	C2S_START = 14,//13,
	C2S_GETSTALLINFO = 119,//118,
	C2S_RESTART = 141,//140,
	C2S_GAMEEXIT = 56,//55,
	C2S_CHATTING = 42,//41,
	C2S_MOVE_ON = 95,//94,
	C2S_MOVE_END = 147,//146,
	C2S_REST = 49,//48,
	C2S_SKILL = 118,//117,
	C2S_UPDATEPROPERTY = 160,//159,
	C2S_TELEPORT = 122,//121,
	C2S_ASKNPC = 166,//165,
	C2S_TRASHITEM = 98,//97,
	C2S_USEITEM = 65,//64,
	C2S_PUTONITEM = 101,//100,
	C2S_PUTOFFITEM = 58,//57,
	C2S_PLAYER_ANIMATION = 47,//46,
	C2S_SHORTCUT = 136,//135,
	C2S_ASKPARTY = 91,//90,
	C2S_ANS_ASKPARTY = 18,//17,
	C2S_LEAVEPARTY = 89,//88
};

enum S2D_PROTOCOL
{
	// Account Packets
	S2D_LOGIN,
	S2D_CREATE_SECONDARY,
	S2D_CHANGE_SECONDARY,
	S2D_SECONDARY_LOGIN,
	S2D_DISCONNECT,
	S2D_DELPLAYER,
	S2D_NEWPLAYER,
	S2D_LOADPLAYER,
	S2D_SELECT_CHARACTER,

	// Non-account packets
	S2D_UPDATEPROPERTY,
	S2D_MAX_IID,
	S2D_INSERTITEM,
	S2D_UPDATEITEMNUM,
	S2D_SAVEALLPROPERTY,
	S2D_REMOVEITEM,
	S2D_PUTONITEM,
	S2D_PUTOFFITEM,
	S2D_SHORTCUT,
};

enum D2S_PROTOCOL
{
	D2S_LOGIN,
	D2S_SEC_LOGIN,
	D2S_PLAYER_INFO,
	D2S_ANS_NEWPLAYER,
	D2S_LOADPLAYER,
	D2S_MAX_IID,
	D2S_LOADITEMS,
	D2S_SHORTCUT,
};

#endif
