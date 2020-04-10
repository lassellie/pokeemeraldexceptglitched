Splendale_MapScripts::
	.byte 0

Script_Splendale_BeautyText::
	msgbox Text_Splendale_BeautyText, MSGBOX_NPC
	end

Text_Splendale_BeautyText:
	.string "Ah, {PLAYER}, are you starting \n"
	.string "your adventure soon? \l"
	.string "Don't forget that we're rooting \l"
	.string "for you!$"

Script_Splendale_BoyText::
	msgbox Text_Splendale_BoyText, MSGBOX_NPC
	end
	
Text_Splendale_BoyText:
	.string "Sorry {PLAYER}, you can't \n"
	.string "challenge this gym without \l"
	.string "four badges.$"
