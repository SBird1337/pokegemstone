
Route101_MapScripts:: @ 81EBCBA
	.byte 0

EventScript_Latin_Braille::
	lockall
	braillemessage Braille_Latin_Flag
	waitbuttonpress
	closebraillemessage
	releaseall
	end

Braille_Latin_Flag:
	brailleformat 0, 0, 30, 19, 6, 3
	.braille "UHDOOB.HW.WX.\nEUXWXV$"