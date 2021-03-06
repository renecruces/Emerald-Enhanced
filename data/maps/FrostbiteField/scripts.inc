FrostbiteField_MapScripts::
	.byte 0

FrostbiteField_IceHeal::
	lockall
	goto_if_set FLAG_HIDDEN_FROSTBITE_FIELD_ICE_HEAL, FrostyForestEnd
	giveitem ITEM_ICE_HEAL
	setflag FLAG_HIDDEN_FROSTBITE_FIELD_ICE_HEAL
	release
	end

FrostbiteField_TestBattle::
	cleartrainerflag TRAINER_OVERLORD_RYU
	trainerbattle_no_intro TRAINER_OVERLORD_RYU, RCR_RYU_DefeatText
	release
	end

FrostbiteField_PolarPillarEntranceTrigger::
	lock
	playse SE_BIDORO
	specialvar VAR_RESULT, TobyCheckPlayerHasMon
	compare VAR_RESULT, TRUE
	goto_if_eq FrostbiteField_OpenPolarPillar
	releaseall
	end

FrostbiteField_OpenPolarPillar::
	setmetatile 23, 38, 988, 1
	setmetatile 23, 39, 996, 0
	special DrawWholeMapView
	releaseall
	end
