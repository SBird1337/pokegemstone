Route103_MapScripts:: @ 81EC38E
	.byte 0

SafeOurSoul_Activate::
	lock
	callnative EndMysteriousCrying
	waitmoncry
	msgbox Text_SafeOurSoul MSGBOX_AUTOCLOSE
	fadeoutbgm 1
	callnative MysteriousCrying
	release
	end

Text_SafeOurSoul:
	.string "...$"