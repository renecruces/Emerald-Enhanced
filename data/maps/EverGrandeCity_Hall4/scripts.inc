EverGrandeCity_Hall4_MapScripts:: @ 82295A8
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, EverGrandeCity_Hall4_OnWarp
	.byte 0

EverGrandeCity_Hall4_OnWarp: @ 82295AE
	map_script_2 VAR_TEMP_1, 0, EverGrandeCity_Hall4_EventScript_TurnPlayerNorth
	.2byte 0

EverGrandeCity_Hall4_EventScript_TurnPlayerNorth:: @ 82295B8
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	gfec
	setobjectxy OBJ_EVENT_ID_FOLLOWER, VAR_TEMP_1, VAR_TEMP_2
	end

H4_GoToPartnerChampionRoom::
	lockall
	goto_if_unset FLAG_SYS_GAME_CLEAR, ryu_end
	setflag FLAG_RYU_TITLE_DEFENSE
	warpteleport MAP_THRONE_ROOM, 255, 9, 17
