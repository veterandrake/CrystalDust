CherrygroveCity_Mart_MapScripts::
	.byte 0

CherrygroveCity_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIHelpYou
	waitmessage
	goto_if_set FLAG_ADVENTURE_STARTED, CherrygroveCity_Mart_EventScript_PostDex
	pokemart CherrygroveCity_Mart_Pokemart_PreDex
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

CherrygroveCity_Mart_Pokemart_PreDex:
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

CherrygroveCity_Mart_EventScript_PostDex::
	pokemart CherrygroveCity_Mart_Pokemart_PostDex
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
CherrygroveCity_Mart_Pokemart_PostDex:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_NONE

CherrygroveCity_Mart_EventScript_BallGuy::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, CherrygroveCity_Mart_EventScript_BallGuy_PostDex
	msgbox CherrygroveCity_Mart_Text_BallGuy_PreDex, MSGBOX_DEFAULT
	release
	end

CherrygroveCity_Mart_EventScript_BallGuy_PostDex::
	msgbox CherrygroveCity_Mart_Text_BallGuy_PostDex, MSGBOX_DEFAULT
	release
	end

CherrygroveCity_Mart_EventScript_Youngster::
	msgbox CherrygroveCity_Mart_Text_Youngster, MSGBOX_NPC
	end

CherrygroveCity_Mart_Text_BallGuy_PreDex:
	.string "They're fresh out of POKé BALLS!\n"
	.string "When will they get more of them?$"

CherrygroveCity_Mart_Text_BallGuy_PostDex:
	.string "POKé BALLS are in stock!\n"
	.string "Now I can catch POKéMON!$"

CherrygroveCity_Mart_Text_Youngster:
	.string "When I was walking in the grass,\n"
	.string "a BUG POKéMON popped out and\l"
	.string "poisoned my POKéMON!\p"
	.string "I tried to keep going, but then my\n"
	.string "POKéMON fainted.\p"
	.string "You should always keep an ANTIDOTE\n"
	.string "with you, just in case.$"
