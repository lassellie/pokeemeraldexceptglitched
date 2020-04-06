PlayerHouse_MapScripts::
	.byte 0

EventScript_PlayerHouse_Door::
	lock
	faceplayer
	msgbox Text_SimpleYesNoScriptQuestion, MSGBOX_YESNO
	compare VAR_RESULT, 0
	goto_if_eq Script_PlayerAnsweredNo
	warp MAP_NEW_MAP1, 0, 4, 1
	release
	end

Script_PlayerAnsweredNo::
	release
	end

Text_SimpleYesNoScriptQuestion:
	.string "Would you like to go to your room?$"
