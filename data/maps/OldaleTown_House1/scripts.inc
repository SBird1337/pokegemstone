OldaleTown_House1_MapScripts::
	.byte 0

EncryptedBrains_Explain::
	callnative MysteryAddress
	msgbox Text_Explain_Brain, MSGBOX_NPC
	end

Text_Explain_Brain:
	.string "I've lost my keys, now I'm losing my\n"
	.string "mind! It must be something with my\l"
	.string "brain. All I can remember is 0x{STR_VAR_1}.$"
