
PetalburgCity_MapScripts::
	.byte 0

ChallengeDesc_SignLatinPkmn::
msgbox Text_CD_LatinPkmn MSGBOX_SIGN
end

ChallengeDesc_SignSaveOurSoul::
msgbox Text_CD_SoS MSGBOX_SIGN
end

ChallengeDesc_UndefChallenge3::
msgbox Text_CD_Undef3 MSGBOX_SIGN
end

ChallengeDesc_EncryptedBrains::
msgbox Text_CD_EncBrains MSGBOX_SIGN
end

FlagCity_Intro::
msgbox Text_CD_CityIntro MSGBOX_SIGN
end

CaveSign_Unreachable::
msgbox Text_Unreachable MSGBOX_SIGN
end

Text_CD_LatinPkmn:
	.string "Latin Pokémon\nEasy$"

Text_CD_SoS:
	.string "Save Our Soul\nEasy$"

Text_CD_Undef3:
	.string "Nothing Here Yet :($"

Text_CD_EncBrains:
	.string "Encrypted Brains\nMedium$"

Text_CD_CityIntro:
	.string "Welcome to Flag City!\nVisit ...\lto submit flags to the scoreboard.$"

Text_Unreachable:
	.string "Aren't you a clever little sausage?\nThere's nothing here yet, but congratz.\pYou found a sign...\nBut that's it, now go back!\p(For real, this is not part of a challenge\nyet, those are north!)$"