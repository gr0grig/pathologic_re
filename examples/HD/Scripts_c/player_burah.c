// @IMPORTS: GetCurrentWeapon/1,IsWeaponHolstered/1,GetScene/1,BroadcastMessage/3,SetWeaponHolster/1,PlayAnimation/1,WaitForAnimEnd/0,SetProperty/2,IsAltShooting/1,StopAnimation/0,HasAnimation/2,GetAttackDistance/1,GetDirection/1,GetVictimMaterialExact/5,PlaySound/1,irand/2,SetAttackState/1,ReportAttack/1,ReportHit/6,BroadcastPlayerDamage/2,IsShooting/1,GetWeaponProperty/3,SetWeaponProperty/3,TriggerWeapon/1,RandVecCone3D/3,GetVictimMaterialExact/6,AddActorByType/6,GetWeaponItem/1,GetPlayerSelectedObject/1,SelectItem/3,RemoveItem/3,SetHandsItem/1,GetVariable/2,Diary/0,SetVariable/2,HasProperty/2,ApplyEffect/1,GetProperty/2,IsWalking/1,Sleep/1,KillTimer/1,IsPlayerActor/2,self/1,CreateObjectSet/1,CreateObjectVector/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,GetGameTime/1,IsExistingSound/2,GetItemCountOfType/2,GetGroundMaterial/2,UnlockAchievement/1,GetMainOutdoorScene/1,AddBlankActor/4,SetDeathState/0,KillTimer/2,ModNoise/1,SetTimer/2,GetInvItemByName/2,RemoveItemByType/3,GetItemCount/2,GetItem/3,IsItemSelected/3,SignalDeath/1,CreateStringVector/1,Trace/1,Inventory/0,GetActiveScene/1,GetPosition/1,ShowMap/1,ShowMessage/0,ShowPlayerStats/1,ShowWindow/2,IsFlashlightOn/1,SwitchFlashlight/1,IsVisirOn/1,SwitchVisir/1,IsOverrideActive/1,rand/3
// @STRINGS: W:unholster|W:_unholster|W:_holster|W:block|W:walkblock|W:unblock|W:armor_phys|W:blocking|W:hitblock|W:punch|W:b|W:attack|W:_phase1|W:health|W:GetDirection|A:GetDirection|W:battack|W:_back|W:_hit|A:in|A:add|W:_phase2|W:scalpel|W:knife|W:ammo|W:rifle_ammo|W:_noammo|W:_reload|W:rifle|W:attack1|W:shot|W:_shot|A:GetProperty|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|A:size|A:get|W:revolver_ammo|W:revolver|W:samopal_ammo|W:samopal|W:use_begin|W:lp|W:locked|A:SetProperty|W:uses|W:use_success|W:use_fail|W:player_init|W:empty|W:lockpick|W:effects|W:player_disease.bin|W:player_stat.bin|W:player_hit.bin|W:player_head.bin|W:player_flashlight.bin|W:player_visir.bin|W:player_vis.bin|W:player_eyes_height.bin|W:player_gifts.bin|W:walk|W:idle|W:fire|W:bullet|W:HasProperty|A:HasProperty|W:armor|W:armor_|A:IsDead|W:wood|W:metal|W:ground|W:water|W:carpet|W:stone|W:reputation|W:god_mode|W:kerosene|W:branch|W:step_|W:ACHIEVEMENT_MIGHT|W:player_death|W:play_death_burah.bin|W:durability|W:birdMaskAchievement|W:bird_mask|W:bird_balahon|A:GetItemID|W:ACHIEVEMENT_THEY|W:die|W:prc|W:Reputation is not changed for enemy: |W:Can't find main outdoor oscene|A:GetMap|W:Can't find map|A:GetName|W:pt_gmap_|A:GetLocator|W:FIXME: No map locator for scene : |A:SetMapParams|W:people.xml|W:flashlight_off|W:flashlight_on|W:flashlight_nofuel|W:visir|W:vcharge|W:player_shot
// @GLOBALS: 0:string:,1:object:,2:object:,3:object:
// @RUN_OP: 0x9ab
// @RUN_TASK: 13
// @TASK_0: vars= params=0
// @TASK_1: vars=bool,bool,float params=1
// @EVENT_37: op=0x7f vars=
// @EVENT_13: op=0x84 vars=
// @EVENT_18: op=0x93 vars=int
// @EVENT_22: op=0xa2 vars=object,int,float,float
// @EVENT_32: op=0xa9 vars=
// @TASK_2: vars=bool params=1
// @EVENT_18: op=0x1b1 vars=int
// @TASK_3: vars=bool params=0
// @EVENT_18: op=0x2b9 vars=int
// @TASK_4: vars=bool params=0
// @EVENT_18: op=0x3d2 vars=int
// @TASK_5: vars=bool params=0
// @EVENT_18: op=0x4f0 vars=int
// @TASK_6: vars=bool params=0
// @EVENT_18: op=0x635 vars=int
// @TASK_7: vars= params=0
// @TASK_8: vars=bool params=0
// @EVENT_18: op=0x6b6 vars=int
// @TASK_9: vars= params=0
// @TASK_10: vars=bool params=0
// @EVENT_18: op=0x824 vars=int
// @TASK_11: vars= params=0
// @TASK_12: vars=bool,bool params=0
// @EVENT_32: op=0x99f vars=
// @TASK_13: vars= params=0
// @EVENT_13: op=0xa94 vars=
// @EVENT_36: op=0xaad vars=
// @EVENT_15: op=0xac6 vars=
// @EVENT_7: op=0xad2 vars=int
// @EVENT_18: op=0xafd vars=int
// @STANDALONE_EVENT_44: op=0xd33 vars=
// @STANDALONE_EVENT_20: op=0xd3a vars=
// @STANDALONE_EVENT_21: op=0xd41 vars=
// @STANDALONE_EVENT_45: op=0xd48 vars=
// @STANDALONE_EVENT_7: op=0xde1 vars=int
// @STANDALONE_EVENT_26: op=0xde7 vars=string
// @STANDALONE_EVENT_16: op=0xdef vars=object,string
// @STANDALONE_EVENT_41: op=0xe11 vars=object
// @STANDALONE_EVENT_31: op=0xe1b vars=object,float,bool
// @STANDALONE_EVENT_19: op=0xe3d vars=
// @STANDALONE_EVENT_17: op=0xe44 vars=object
// @STANDALONE_EVENT_39: op=0xe46 vars=float
// @STANDALONE_EVENT_18: op=0xe63 vars=int
// @PE: 0x32,0x84,0x93,0xa2,0xb5,0xbc,0x1aa,0x1b1,0x1c6,0x2b2,0x2b9,0x2d0,0x2db,0x3d2,0x3ea,0x3f9,0x4f0,0x534,0x635,0x646,0x6b6,0x7b4,0x824,0x922,0x9bf,0x9ff,0xa1b,0xac6,0xb0d,0xb15,0xb9f,0xbc5,0xbcc,0xbd7,0xbee,0xbf7,0xc01,0xc12,0xc78,0xcef,0xd0e,0xd19,0xd24,0xd28,0xd2c,0xd33,0xd3a,0xd41,0xd48,0xd8d,0xde1,0xde7,0xe11,0xe3d,0xe44

task_1_event_37(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = var_1_bool;
	if(var_12_bool != 0) {
		StopAnimation();
	}
	return 0;
}


task_1_event_13(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_112(var_11_bool);
	TaskCall(2);
	func_181(var_20_bool, (bool)0);
	TaskReturn();
	if(var_20_bool != 0) {
		var_0_bool = true;
	} else {
		func_102(var_11_bool);
	}
	return 0;
	
}


task_1_event_18(var_0_bool, var_1_bool, var_2_float, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)10;
	if(var_14_bool != 0) {
		var_0_bool = true;
		var_15_bool = var_1_bool;
		if(var_15_bool != 0) {
			StopAnimation();
		}
	} else {
		var_12_bool = (int)0;
		func_3683();
	}
	return 0;
	
}


task_1_event_22(var_0_bool, var_1_bool, var_2_float, var_3_object, var_4_int, var_5_float, var_6_float, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = var_1_bool;
	if(var_16_bool != 0) {
		PlayAnimation("hitblock");
	}
	return 0;
}


task_1_event_32(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = var_1_bool;
	if(var_12_bool != 0) {
		var_13_string = ""; var_14_float = 0;
		var_14_float = -var_2_float;
		func_2868("armor_phys", var_14_float);
		SetProperty("blocking", (bool)0);
	}
	return 0;
}


task_2_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)10;
	if(var_14_bool != 0) {
		var_0_bool = true;
	} else {
		var_12_bool = (int)0;
		func_3683();
	}
	return 0;
	
}


task_3_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_int, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)10;
	if(var_14_bool != 0) {
		var_0_bool = true;
	} else {
		var_12_bool = (int)0;
		func_3683();
	}
	return 0;
	
}


task_4_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)10;
	if(var_14_bool != 0) {
		var_0_bool = true;
	} else {
		var_12_bool = (int)0;
		func_3683();
	}
	return 0;
	
}


task_5_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)10;
	if(var_14_bool != 0) {
		var_0_bool = true;
	} else {
		var_12_bool = (int)0;
		func_3683();
	}
	return 0;
	
}


task_6_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_bool, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)10;
	if(var_14_bool != 0) {
		var_0_bool = true;
	} else {
		var_12_bool = (int)0;
		func_3683();
	}
	return 0;
	
}


task_8_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_bool, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)11;
	if(var_14_bool != 0) {
		func_1699();
	}
	var_12_bool = (int)0;
	func_3683();
	return 0;
}


task_10_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_int, var_11_bool, var_12_bool)
{
	var_14_bool = var_12_bool == (int)11;
	if(var_14_bool != 0) {
		func_2065();
	}
	var_12_bool = (int)0;
	func_3683();
	return 0;
}


task_12_event_32(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_0_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_bool = var_1_bool;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		SetHandsItem((int)-1);
	}
	return 0;
}


task_13_event_13(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_string, var_14_bool, var_15_bool, var_16_string, var_17_bool)
{
	var_56_bool = 0; var_57_string = ""; var_58_bool = 0; var_59_bool = 0; var_60_string = ""; var_61_bool = 0;
	IsWeaponHolstered(var_59_bool);
	var_62_bool = var_59_bool == 0; //@nz
	if(var_62_bool != 0) {
		func_2833();
		GetCurrentWeapon(var_60_string);
		var_63_string = "";
		var_60_string = var_63_string;
		func_2495(var_63_string);
		func_2829();
		IsAltShooting(var_61_bool);
		var_1141_bool = var_61_bool;
		if(var_1141_bool != 0) {
			func_2733();
		}
	}
	return 6;
}


task_13_event_36(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_bool = 0; var_13_string = ""; var_14_bool = 0; var_15_bool = 0; var_16_string = ""; var_17_bool = 0;
	IsWeaponHolstered(var_15_bool);
	var_18_bool = var_15_bool == 0; //@nz
	if(var_18_bool != 0) {
		func_2833();
		GetCurrentWeapon(var_16_string);
		var_20_string = "";
		var_16_string = var_20_string;
		func_2587(var_20_string);
		func_2829();
		IsShooting(var_17_bool);
		var_55_bool = var_17_bool;
		if(var_55_bool != 0) {
			func_2708();
		}
	}
	return 6;
}


task_13_event_15(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_2833();
	TaskCall(0);
	func_0();
	TaskReturn();
	func_2829();
	return 0;
}


task_13_event_7(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0;
	var_21_bool = 0; var_22_int = 0;
	var_12_int = var_22_int;
	func_3478(var_21_bool, var_22_int);
	if(var_21_bool != 0) {
		return 8;
	}
	func_2833();
	IsWeaponHolstered(var_17_bool);
	var_137_bool = var_17_bool == 0; //@nz
	if(var_137_bool != 0) {
		var_18_int = 0;

	Label_2785:
		var_140_int = var_18_int + (int)1;
		var_141_int = "idle" + var_140_int;
		HasAnimation(var_19_bool, var_141_int);
		var_142_bool = var_19_bool == 0; //@nz
		if(var_142_bool != 0) {
		} else {
			var_18_int = var_18_int + (int)1;
			goto Label_2785;
		}
		var_143_int = var_18_int;
		if(var_143_int != 0) {
			irand(var_20_int, var_18_int);
			var_146_int = var_20_int + (int)1;
			var_147_int = "idle" + var_146_int;
			PlayAnimation(var_147_int);
			WaitForAnimEnd();
		}
	}
	func_2829();
	return 8;
	
}


task_13_event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_string = ""; var_14_string = "";
	var_16_bool = var_12_int == (int)11;
	if(var_16_bool != 0) {
		GetCurrentWeapon(var_14_string);
		var_17_string = "";
		var_14_string = var_17_string;
		func_2559(var_17_string);
	} else {
		var_12_int = (int)0;
		func_3683();
	}
	return 2;
	
}


event_44(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3353();
	func_3301();
	return 0;
}


event_20(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3342();
	func_3301();
	return 0;
}


event_21(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3322();
	func_3311();
	return 0;
}


event_45(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3332();
	return 0;
}


event_7(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_int = 0;
	var_12_int = var_14_int;
	func_3478(var_13_bool, var_14_int);
	return 0;
}


event_26(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_string)
{
	var_14_bool = var_12_string == "die";
	if(var_14_bool != 0) {
		func_3280();
	}
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_float = 0; var_18_object = Obj(); var_19_object = Obj();
	var_21_bool = var_13_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_17_float);
		var_24_bool = var_17_float < (float)0.0010000000474974513;
		if(var_24_bool != 0) {
			SignalDeath(var_12_object);
		}
	} else {
		var_27_bool = var_13_string == "reputation";
		if(var_27_bool == 0) goto Label_3592;
		GetScene(var_18_object);
		var_29_object = Obj();
		func_3007(var_29_object);
		BroadcastMessage("prc", var_29_object, var_18_object);
		var_18_object = 0;
	}
Label_3592:
	CreateStringVector(var_19_object);
	@@var_19_object:add(var_13_string);
	SendWorldWndMessage((int)10, var_19_object);
	return 6;
	
}
EMIT "Stack[-1] = 0";


event_41(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	var_13_bool = 0;
	func_3169(var_13_bool);
	var_17_bool = var_13_bool == 0; //@nz
	if(var_17_bool != 0) {
		func_3280();
	}
	return 0;
}


event_31(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object, var_13_float, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = var_12_object == 0; //@nz
	if(var_17_bool != 0) {
		return 2;
	}
	var_18_object = GlobalVars[2];
	@@var_18_object:in(var_16_bool, var_12_object);
	var_19_bool = var_16_bool;
	if(var_19_bool != 0) {
		var_21_int = "Reputation is not changed for enemy: " + var_12_object;
		Trace(var_21_int);
		return 2;
	}
	var_22_bool = var_14_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_23_object = GlobalVars[1];
		@@var_23_object:in(var_16_bool, var_12_object);
		var_24_bool = var_16_bool;
		if(var_24_bool != 0) {
			return 2;
		}
	}
	var_25_object = GlobalVars[1];
	@@var_25_object:add(var_12_object);
	var_26_bool = 0; var_27_object = Obj(); var_28_float = 0;
	func_3007(Obj());
	var_29_object = var_27_object;
	var_13_float = var_28_float;
	func_3090(var_26_bool, var_27_object, var_28_float);
	return 2;
}


event_19(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	func_3861();
	func_3311();
	return 0;
}


event_17(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_object)
{
	return 0;
}


event_39(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_float)
{
	var_13_float = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0;
	var_18_bool = var_12_float > (float)770.0;
	if(var_18_bool != 0) {
		Trace(var_12_float);
		var_20_int = var_12_float - (float)770.0;
		var_15_float = var_20_int * (float)0.003499999875202775;
		var_22_float = 0; var_23_object = Obj(); var_24_float = 0; var_25_int = 0;
		func_3007(Obj());
		var_26_object = var_23_object;
		var_15_float = var_24_float;
		func_2897(var_22_float, var_23_object, var_24_float, (int)0);
		var_22_float = var_16_float;
		var_95_object = Obj();
		func_3007(var_95_object);
		ReportHit(var_95_object, (int)0, var_16_float, var_15_float, CVector(0.0, 0.0, 0.0), CVector(0.0, 0.0, 0.0));
	}
	return 4;
}


event_18(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_int)
{
	var_13_object = Obj(); var_14_object = Obj(); var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_int = 0; var_21_bool = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_int = 0; var_35_bool = 0; var_36_bool = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_int = 0;
	var_42_bool = var_12_int == (int)0;
	if(var_42_bool != 0) {
		Inventory();
	} else {
		var_44_bool = var_12_int == (int)1;
		if(var_44_bool != 0) {
			GetMainOutdoorScene(var_27_object);
			GetActiveScene(var_28_object);
			var_45_bool = var_27_object == 0; //@ne
			if(var_45_bool != 0) {
				Trace("Can't find main outdoor oscene");
				return 28;
			}
			@@var_27_object:GetMap(var_29_object);
			var_47_bool = var_29_object == 0; //@ne
			if(var_47_bool != 0) {
				Trace("Can't find map");
				return 28;
			}
			var_49_bool = var_27_object == var_28_object;
			if(var_49_bool != 0) {
				GetPosition(var_30_cvector);
			} else {
				@@var_28_object:GetName(var_31_string);
				var_53_int = "pt_gmap_" + var_31_string;
				@@var_27_object:GetLocator(var_53_int, var_32_bool, var_30_cvector, var_33_cvector);
				var_54_bool = var_32_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_3729;
				var_56_int = "FIXME: No map locator for scene : " + var_31_string;
				Trace(var_56_int);
				var_30_cvector = CVector(0.0, 0.0, 0.0);
		}
			var_58_bool = var_12_int == (int)2;
			if(var_58_bool != 0) {
				Diary();
				goto Label_3860;
			}
			var_60_bool = var_12_int == (int)3;
			if(var_60_bool != 0) {
				ShowMessage();
				goto Label_3860;
			}
			var_62_bool = var_12_int == (int)4;
			if(var_62_bool != 0) {
				ShowPlayerStats(var_34_int);
				var_64_bool = var_34_int == (int)1;
				if(var_64_bool != 0) {
					ShowWindow("people.xml", (bool)1);
				}
				goto Label_3860;
			}
			var_68_bool = var_12_int == (int)5;
			if(var_68_bool != 0) {
				IsFlashlightOn(var_35_bool);
				var_69_bool = var_35_bool;
				if(var_69_bool != 0) {
					SwitchFlashlight((bool)0);
					PlaySound("flashlight_off");
				} else {
					var_72_bool = 0;
					func_3180(var_72_bool);
					if(var_72_bool != 0) {
						SwitchFlashlight((bool)1);
						PlaySound("flashlight_on");
						goto Label_3792;
					}
					PlaySound("flashlight_nofuel");
			}
				var_80_bool = var_12_int == (int)6;
				if(var_80_bool != 0) {
					var_81_int = 0;
					func_3186(var_81_int);
					var_86_bool = var_81_int != (int)0;
					if(var_86_bool != 0) {
						return 28;
					}
					IsVisirOn(var_36_bool);
					var_87_bool = var_36_bool;
					if(var_87_bool != 0) {
						SwitchVisir((bool)0);
						SendWorldWndMessage((int)2);
					} else {
						GetProperty("visir", var_37_int);
						var_91_int = var_37_int;
						if(var_91_int == 0) goto Label_3832;
						GetProperty("vcharge", var_38_int);
						var_94_bool = var_38_int >= (int)10;
						if(var_94_bool == 0) goto Label_3832;
						SwitchVisir((bool)1);
						SendWorldWndMessage((int)1);
						goto Label_3832;
				}
					var_98_bool = var_12_int == (int)7;
					if(var_98_bool != 0) {
						IsOverrideActive(var_39_bool);
						var_99_bool = var_39_bool == 0; //@nz
						if(var_99_bool != 0) {
							ShowWindow("people.xml", (bool)1);
						}
						goto Label_3860;
					}
					var_103_bool = var_12_int == (int)21;
					if(var_103_bool == 0) goto Label_3860;
					GetWeaponItem(var_40_int);
					var_105_bool = var_40_int != (int)-1;
					if(var_105_bool == 0) goto Label_3860;
					SelectItem(var_40_int, (bool)0, (int)0);
					SetHandsItem((int)-1);
				}
			Label_3832:
				goto Label_3860;
			}
		Label_3792:
			goto Label_3860;
		}
	Label_3729:
		var_50_float = GetByIndex(var_30_cvector, 0);
		var_51_float = GetByIndex(var_30_cvector, 2);
		@@var_29_object:SetMapParams(var_50_float, var_51_float);
		ShowMap(var_29_object);
		var_29_object = 0;
		var_28_object = 0;
		var_27_object = 0;
		goto Label_3860;
	}
Label_3860:
	return 28;
	
}


main(var_0_bool, var_1_bool, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	GetVariable("player_init", var_13_int);
	var_15_bool = var_13_int == 0; //@nz
	if(var_15_bool != 0) {
		Diary();
		SetVariable("player_init", (int)1);
	}
	var_18_object = Obj();
	func_3175(Obj());
	var_19_object = var_18_object;
	func_2598(var_18_object);
	return 2;
}


func_0()
{
	var_13_string = ""; var_14_bool = 0; var_15_object = Obj(); var_16_string = ""; var_17_bool = 0; var_18_object = Obj();
	GetCurrentWeapon(var_16_string);
	IsWeaponHolstered(var_17_bool);
	GetScene(var_18_object);
	var_19_bool = var_17_bool;
	if(var_19_bool != 0) {
		var_21_object = Obj();
		func_3007(var_21_object);
		BroadcastMessage("unholster", var_21_object, var_18_object);
		var_24_string = "";
		var_24_string = var_16_string + "_unholster";
		func_3161(var_24_string);
		SetWeaponHolster((bool)0);
		PlayAnimation("unholster");
		WaitForAnimEnd();
	} else {
		var_32_object = Obj();
		func_3007(var_32_object);
		BroadcastMessage("holster", var_32_object, var_18_object);
		var_33_string = "";
		var_33_string = var_16_string + "_holster";
		func_3161(var_33_string);
		PlayAnimation("holster");
		WaitForAnimEnd();
		SetWeaponHolster((bool)1);
	}
	return 6;
	
}
EMIT "Stack[-1] = 0";


func_3073(var_140_float, var_141_cvector, var_142_cvector)
{
	var_143_float = 0; var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0);
	var_141_cvector = var_144_cvector;
	var_142_cvector = var_145_cvector;
	func_3054(var_143_float, var_144_cvector, var_145_cvector);
	var_152_float = 0; var_153_cvector = CVector(0,0,0);
	var_141_cvector = var_153_cvector;
	func_3063(var_152_float, var_153_cvector);
	var_161_float = 0; var_162_cvector = CVector(0,0,0);
	var_142_cvector = var_162_cvector;
	func_3063(var_161_float, var_162_cvector);
	var_163_float = var_152_float * var_161_float;
	var_140_float = var_143_float / var_163_float;
	return 0;
}


func_2049()
{
	var_1070_bool = 0; var_1071_bool = 0; var_1072_bool = 0; var_1073_bool = 0;
	GetWeaponProperty(var_1072_bool, "ammo", var_1073_bool);
	var_1075_bool = 0;
	var_1075_bool = 1;
	var_1076_bool = var_1072_bool == 0; //@nz
	if(var_1076_bool != 1) {
		var_1077_bool = var_1073_bool == 0; //@nz
		if(var_1077_bool != 1) {
			var_1075_bool = 0;
		}
	}
	if(var_1075_bool != 0) {
		func_2065();
	}
	return 4;
}


func_1031()
{
	var_561_int = 0;
	func_1011((int)0);
	var_562_int = var_561_int;
	func_3451(var_561_int);
	return 0;
}


func_1039(var_0_bool)
{
	var_446_int = 0; var_447_string = ""; var_448_bool = 0; var_449_string = ""; var_450_float = 0; var_451_cvector = CVector(0,0,0); var_452_object = Obj(); var_453_int = 0; var_454_cvector = CVector(0,0,0); var_455_bool = 0; var_456_cvector = CVector(0,0,0); var_457_cvector = CVector(0,0,0); var_458_string = ""; var_459_int = 0; var_460_cvector = CVector(0,0,0); var_461_cvector = CVector(0,0,0); var_462_float = 0; var_463_float = 0; var_464_int = 0; var_465_bool = 0; var_466_int = 0; var_467_string = ""; var_468_bool = 0; var_469_string = ""; var_470_float = 0; var_471_cvector = CVector(0,0,0); var_472_object = Obj(); var_473_int = 0; var_474_cvector = CVector(0,0,0); var_475_bool = 0; var_476_cvector = CVector(0,0,0); var_477_cvector = CVector(0,0,0); var_478_string = ""; var_479_int = 0; var_480_cvector = CVector(0,0,0); var_481_cvector = CVector(0,0,0); var_482_float = 0; var_483_float = 0; var_484_int = 0; var_485_bool = 0;
	var_0_bool = false;
	
Label_1042:
	(int)0 = (int)0 + (int)1;
	var_487_string = "";
	func_1275(var_487_string);
	var_489_int = var_487_string + "attack";
	var_490_int = var_489_int + var_466_int;
	var_467_string = var_490_int + "_phase1";
	HasAnimation(var_468_bool, var_467_string);
	var_492_bool = var_468_bool == 0; //@nz
	if(var_492_bool != 0) {
	} else {
							goto Label_1042;
	}
	var_466_int = var_466_int + (int)-1;
	var_494_bool = var_466_int == 0; //@nz
	if(var_494_bool != 0) {
		return 40;
	}
Label_1063:
	GetCurrentWeapon(var_469_string);
	GetAttackDistance(var_470_float);
	GetDirection(var_471_cvector);
	var_475_bool = 0;
	var_495_bool = 0;
	func_998(var_495_bool);
	if(var_495_bool != 0) {
		GetVictimMaterialExact(var_472_object, var_473_int, var_474_cvector, var_471_cvector, var_470_float);
		var_496_bool = 0;
		var_496_bool = 0;
		var_497_bool = 0;
		var_497_bool = 0;
		var_498_bool = 0;
		var_498_bool = 0;
		var_499_bool = var_472_object != 0; //@nn
		if(var_499_bool != 0) {
			var_500_bool = 0; var_501_object = Obj(); var_502_string = "";
			var_472_object = var_501_object;
			func_2856(var_500_bool, var_501_object, "health");
			if(var_500_bool != 0) {
				var_498_bool = 1;
			}
		}
		if(var_498_bool != 0) {
			var_503_bool = 0; var_504_object = Obj();
			var_472_object = var_504_object;
			func_2970(var_503_bool, var_504_object);
			var_505_bool = var_503_bool == 0; //@nz
			if(var_505_bool != 0) {
				var_497_bool = 1;
			}
		}
		if(var_497_bool != 0) {
			var_507_bool = var_473_int == (int)4;
			if(var_507_bool != 0) {
				var_496_bool = 1;
			}
		}
		if(var_496_bool != 0) {
			var_510_bool = IsFuncExist(var_472_object, "GetDirection", (int)1);
			if(var_510_bool != 0) {
				GetDirection(var_476_cvector);
				@@var_472_object:GetDirection(var_477_cvector);
				var_511_float = 0; var_512_cvector = CVector(0,0,0); var_513_cvector = CVector(0,0,0);
				var_476_cvector = var_512_cvector;
				var_477_cvector = var_513_cvector;
				func_3073(var_511_float, var_512_cvector, var_513_cvector);
				var_475_bool = var_511_float >= (float)0.4999999701976776;
			}
		}
	}
	var_515_bool = var_475_bool;
	if(var_515_bool != 0) {
		var_478_string = "battack";
		var_516_string = "";
		func_1000(var_516_string);
		var_518_int = var_516_string + "_back";
		PlaySound(var_518_int);
	} else {
						irand(var_479_int, var_466_int);
						var_570_string = "";
						func_1275(var_570_string);
						var_572_int = var_570_string + "attack";
						var_574_int = var_479_int + (int)1;
						var_478_string = var_572_int + var_574_int;
						var_575_string = "";
						func_1000(var_575_string);
						var_577_int = var_479_int + (int)1;
						var_578_int = var_575_string + var_577_int;
						PlaySound(var_578_int);

	}
	SetAttackState((bool)1);
	var_521_int = var_478_string + "_phase1";
	PlayAnimation(var_521_int);
	WaitForAnimEnd();
	var_522_bool = var_0_bool;
	if(var_522_bool != 0) {
		return 40;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_470_float);
	GetDirection(var_471_cvector);
	GetVictimMaterialExact(var_472_object, var_473_int, var_474_cvector, var_471_cvector, var_470_float);
	var_524_bool = var_472_object != 0; //@nn
	if(var_524_bool != 0) {
		var_527_bool = IsFuncExist(var_472_object, "GetDirection", (int)1);
		if(var_527_bool != 0) {
			GetDirection(var_480_cvector);
			@@var_472_object:GetDirection(var_481_cvector);
			var_528_float = 0; var_529_cvector = CVector(0,0,0); var_530_cvector = CVector(0,0,0);
			var_480_cvector = var_529_cvector;
			var_481_cvector = var_530_cvector;
			func_3073(var_528_float, var_529_cvector, var_530_cvector);
			var_475_bool = var_528_float >= (float)0.4999999701976776;
		} else {
					var_475_bool = 0;

		}
		var_532_float = 0; var_533_bool = 0;
		var_475_bool = var_533_bool;
		func_1017(var_532_float, var_533_bool);
		var_532_float = var_482_float;
		var_541_bool = var_473_int == (int)4;
		if(var_541_bool != 0) {
			var_482_float = var_482_float * (float)3.0;
		}
		var_543_float = 0; var_544_object = Obj(); var_545_float = 0; var_546_int = 0;
		var_472_object = var_544_object;
		var_482_float = var_545_float;
		func_1013((int)0);
		var_547_int = var_546_int;
		func_2897(var_543_float, var_544_object, var_545_float, var_546_int);
		var_543_float = var_483_float;
		var_548_float = var_483_float;
		if(var_548_float != 0) {
			irand(var_484_int, (int)2);
			var_550_string = "";
			func_1000(var_550_string);
			var_552_int = var_550_string + "_hit";
			var_554_int = var_484_int + (int)1;
			var_555_int = var_552_int + var_554_int;
			PlaySound(var_555_int);
			ReportAttack(var_472_object);
			var_556_int = 0;
			func_1015(var_556_int);
			ReportHit(var_472_object, var_556_int, var_483_float, var_482_float, var_474_cvector, var_471_cvector);
			var_557_object = GlobalVars[2];
			@@var_557_object:in(var_485_bool, var_472_object);
			var_558_bool = var_485_bool == 0; //@nz
			if(var_558_bool != 0) {
				var_559_object = GlobalVars[3];
				@@var_559_object:add(var_472_object);
				BroadcastPlayerDamage(var_472_object, (bool)0);
			} else {
				BroadcastPlayerDamage(var_472_object, (bool)1);

			}
		}
		func_1031();
	}
	var_564_int = var_478_string + "_phase2";
	PlayAnimation(var_564_int);
	WaitForAnimEnd();
	var_565_bool = var_0_bool;
	if(var_565_bool != 0) {
		return 40;
	}
	var_472_object = 0;
	var_566_bool = 0;
	func_1277(var_566_bool);
	if(var_566_bool == 1) goto Label_1063;
	return 40;
	
}


func_2065()
{
	var_1078_bool = 0; var_1079_string = ""; var_1080_int = 0;
	func_3404(var_1078_bool, "samopal_ammo", (int)2);
	if(var_1078_bool != 0) {
		var_1081_string = "";
		func_2096(var_1081_string);
		var_1083_int = var_1081_string + "_reload";
		PlaySound(var_1083_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_3090(var_26_bool, var_27_object, var_28_float)
{
	var_32_bool = var_27_object == 0; //@nz
	if(var_32_bool != 0) {
		var_26_bool = 0;
		return 0;
	}
	var_34_bool = var_28_float > (int)0;
	if(var_34_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_65_bool = var_28_float < (int)0;
		if(var_65_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_3111;
		}
		var_26_bool = 0;
		return 0;
	}
Label_3111:
	var_36_float = 0;
	var_28_float = var_36_float;
	func_3142(var_36_float);
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; var_43_float = 0; var_44_float = 0; var_45_float = 0;
	var_27_object = var_41_object;
	var_28_float = var_43_float;
	func_2875(var_40_bool, var_41_object, "reputation", var_43_float, (float)0, (float)1);
	var_26_bool = 1;
	return 0;
	
}


func_2587(var_20_string)
{
	var_22_bool = var_20_string == "empty";
	if(var_22_bool != 0) {
		var_23_float = 0;
		TaskCall(1);
		func_50(var_24_bool, var_25_bool, var_26_float, (float)0.25);
		TaskReturn();
	}
	return 0;
}


func_2598(var_18_object)
{
	var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_string = ""; var_26_float = 0; var_27_bool = 0; var_28_bool = 0; var_29_bool = 0; var_30_int = 0; var_31_int = 0; var_32_string = ""; var_33_float = 0; var_34_bool = 0; var_35_bool = 0;
	var_36_object = GlobalVars[1];
	func_3042(Obj());
	var_37_object = var_36_object;
	GlobalVars[1] = var_36_object;
	var_40_object = GlobalVars[2];
	func_3042(Obj());
	var_41_object = var_40_object;
	GlobalVars[2] = var_40_object;
	var_42_object = GlobalVars[3];
	func_3042(Obj());
	var_43_object = var_42_object;
	GlobalVars[3] = var_42_object;
	HasProperty("effects", var_29_bool);
	var_45_bool = var_29_bool == 0; //@nz
	if(var_45_bool != 0) {
		SetProperty("effects", (bool)1);
		ApplyEffect("player_disease.bin");
		ApplyEffect("player_stat.bin");
		ApplyEffect("player_hit.bin");
		ApplyEffect("player_head.bin");
		ApplyEffect("player_flashlight.bin");
		ApplyEffect("player_visir.bin");
		ApplyEffect("player_vis.bin");
		ApplyEffect("player_eyes_height.bin");
		ApplyEffect("player_gifts.bin");
		var_57_object = var_18_object;
		if(var_57_object != 0) {
			@@var_18_object:size(var_30_int);
			var_31_int = 0;

		Label_2658:
			var_58_bool = var_31_int < var_30_int;
			if(var_58_bool != 0) {
				@@var_18_object:get(var_32_string, var_31_int);
				ApplyEffect(var_32_string);
				var_31_int = var_31_int + (int)1;
				goto Label_2658;
			}
		}
	}
	func_2829();
	GetProperty("health", var_33_float);
	var_66_bool = 0;
	var_66_bool = 0;
	var_68_bool = var_33_float <= (int)0;
	if(var_68_bool != 0) {
		var_69_bool = 0;
		func_3169(var_69_bool);
		var_73_bool = var_69_bool == 0; //@nz
		if(var_73_bool != 0) {
			var_66_bool = 1;
		}
	}
	if(var_66_bool != 0) {
		func_3280();
		return 14;
	}
Label_2689:
	IsWeaponHolstered(var_34_bool);
	var_89_bool = var_34_bool == 0; //@nz
	if(var_89_bool == 0) goto Label_2703;
	IsWalking(var_35_bool);
	var_90_bool = var_35_bool;
	if(var_90_bool != 0) {
		PlayAnimation("walk");
		WaitForAnimEnd();
	} else {
		Sleep((float)0.10000000149011612);
	}
	goto Label_2689;
	
}
EMIT "Return(); Pop(14)";


func_2096(var_987_string)
{
	var_987_string = "samopal";
	return 0;
}


func_2098(var_1012_float)
{
	var_1012_float = 1.7999999523162842;
	return 0;
}


func_50(var_0_bool, var_1_bool, var_2_float, var_23_float)
{
	var_0_bool = false;
	var_1_bool = false;
	var_2_float = var_23_float;
	
Label_54:
	PlayAnimation("block");
	WaitForAnimEnd();
	var_28_bool = var_0_bool;
	if(var_28_bool != 0) {
		return 0;
	}
	func_102(var_23_float);
	var_1_bool = true;
	
Label_66:
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	func_122(var_37_bool);
	if(var_37_bool != 0) {
		var_40_bool = var_0_bool == 0; //@nz
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		PlayAnimation("walkblock");
		WaitForAnimEnd();
		goto Label_66;
	}
	var_1_bool = false;
	func_112(var_23_float);
	var_46_bool = var_0_bool;
	if(var_46_bool != 0) {
		return 0;
	}
	PlayAnimation("unblock");
	WaitForAnimEnd();
	var_48_bool = var_0_bool;
	if(var_48_bool != 0) {
		return 0;
	}
	var_49_bool = 0;
	func_122(var_49_bool);
	if(var_49_bool == 1) goto Label_54;
	return 0;
}


func_2100(var_1034_int)
{
	var_1034_int = 1;
	return 0;
}


func_3125(var_86_float)
{
	var_87_object = Obj(); var_88_object = Obj();
	CreateFloatVector(var_88_object);
	@@var_88_object:add(var_86_float);
	var_90_bool = var_86_float < (int)0;
	if(var_90_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_88_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2102(var_1036_int)
{
	var_1036_int = 2;
	return 0;
}


func_2104(var_1009_int)
{
	var_1009_int = 2;
	return 0;
}


func_2106(var_0_bool)
{
	var_926_string = ""; var_927_string = ""; var_928_int = 0; var_929_bool = 0; var_930_float = 0; var_931_float = 0; var_932_cvector = CVector(0,0,0); var_933_object = Obj(); var_934_int = 0; var_935_cvector = CVector(0,0,0); var_936_object = Obj(); var_937_int = 0; var_938_cvector = CVector(0,0,0); var_939_float = 0; var_940_float = 0; var_941_float = 0; var_942_object = Obj(); var_943_float = 0; var_944_object = Obj(); var_945_object = Obj(); var_946_int = 0; var_947_int = 0; var_948_object = Obj(); var_949_bool = 0; var_950_string = ""; var_951_string = ""; var_952_int = 0; var_953_bool = 0; var_954_float = 0; var_955_float = 0; var_956_cvector = CVector(0,0,0); var_957_object = Obj(); var_958_int = 0; var_959_cvector = CVector(0,0,0); var_960_object = Obj(); var_961_int = 0; var_962_cvector = CVector(0,0,0); var_963_float = 0; var_964_float = 0; var_965_float = 0; var_966_object = Obj(); var_967_float = 0; var_968_object = Obj(); var_969_object = Obj(); var_970_int = 0; var_971_int = 0; var_972_object = Obj(); var_973_bool = 0;
	var_0_bool = false;
	
Label_2108:
	var_974_bool = 0;
	func_1997(var_974_bool);
	var_991_bool = var_974_bool == 0; //@nz
	if(var_991_bool != 0) {
	} else {
		GetCurrentWeapon(var_950_string);
		var_951_string = "attack1";
		SetAttackState((bool)1);
		func_2036();
		var_1002_int = var_951_string + "_phase1";
		PlayAnimation(var_1002_int);
		WaitForAnimEnd();
		var_1003_bool = var_0_bool;
		if(var_1003_bool != 0) {
			return 48;
		}
		TriggerWeapon("shot");
		var_1005_string = "";
		func_2096(var_1005_string);
		var_1007_int = var_1005_string + "_shot";
		PlaySound(var_1007_int);
		var_1008_int = 0;
		func_2104((int)0);
		var_1009_int = var_1008_int;
		func_3451(var_1008_int);
		func_2330();
		SetAttackState((bool)0);
		func_2032((int)0);
		var_1011_int = var_952_int;
		var_1012_float = 0;
		func_2098(var_1012_float);
		var_954_float = var_1012_float / var_952_int;
		var_1016_float = 0;
		func_2034(var_1016_float);
		var_1017_float = (float)1.0 / var_1016_float;
		var_1019_int = var_1017_float - (float)1.5;
		var_1020_float = 0;
		func_3440(var_1020_float);
		var_1021_float = var_1019_int * var_1020_float;
		var_1022_int = (float)1.5 + var_1021_float;
		var_955_float = (float)1.0 / var_1022_int;
		GetDirection(var_956_cvector);
		func_3048(Obj());
		var_1023_object = var_957_object;
		var_958_int = 0;

	Label_2186:
		var_1024_bool = var_958_int < var_952_int;
		if(var_1024_bool != 0) {
			RandVecCone3D(var_959_cvector, var_956_cvector, var_955_float);
			GetVictimMaterialExact(var_960_object, var_961_int, var_962_cvector, var_959_cvector, (int)10000);
			var_1026_object = var_960_object;
			if(var_1026_object != 0) {
				var_954_float = var_963_float;
				var_1028_bool = var_961_int == (int)4;
				if(var_1028_bool != 0) {
					var_963_float = var_963_float * (float)3.0;
				}
				var_1030_float = 0; var_1031_object = Obj(); var_1032_float = 0; var_1033_int = 0;
				var_960_object = var_1031_object;
				var_963_float = var_1032_float;
				func_2100((int)0);
				var_1034_int = var_1033_int;
				func_2897(var_1030_float, var_1031_object, var_1032_float, var_1033_int);
				var_1030_float = var_964_float;
				var_1035_float = var_964_float;
				if(var_1035_float != 0) {
					@@var_957_object:add(var_960_object);
					var_1036_int = 0;
					func_2102(var_1036_int);
					ReportHit(var_960_object, var_1036_int, var_964_float, var_963_float, var_962_cvector, var_959_cvector);
					var_1037_bool = 0;
					func_2331(var_1037_bool);
					if(var_1037_bool != 0) {
						@@var_960_object:GetProperty("health", var_965_float);
						var_1039_bool = var_965_float == 0; //@nz
						if(var_1039_bool != 0) {
							GetVictimMaterialExact(var_966_object, var_961_int, var_962_cvector, var_959_cvector, (int)10000, var_960_object);
							var_1041_bool = 0;
							var_1041_bool = 0;
							var_1042_object = var_966_object;
							if(var_1042_object != 0) {
								var_1043_bool = var_966_object != var_960_object;
								if(var_1043_bool != 0) {
									var_1041_bool = 1;
								}
							}
							if(var_1041_bool != 0) {
								var_1044_float = 0; var_1045_object = Obj(); var_1046_float = 0; var_1047_int = 0;
								var_966_object = var_1045_object;
								var_1046_float = var_963_float * (float)0.75;
								func_2100((int)0);
								var_1049_int = var_1047_int;
								func_2897(var_1044_float, var_1045_object, var_1046_float, var_1047_int);
								var_1044_float = var_967_float;
								var_1050_float = var_967_float;
								if(var_1050_float != 0) {
									@@var_957_object:add(var_966_object);
									var_1051_int = 0;
									func_2102(var_1051_int);
									ReportHit(var_966_object, var_1051_int, var_967_float, var_963_float, var_962_cvector, var_959_cvector);
								}
							}
							var_966_object = 0;
						}
					}
				} else {
					var_1054_bool = var_961_int != (int)-1;
					if(var_1054_bool == 0) goto Label_2280;
					var_1055_bool = (bool)0 == 0; //@nz
					if(var_1055_bool == 0) goto Label_2280;
					GetScene(var_968_object);
					AddActorByType(var_969_object, "scripted", var_968_object, var_962_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
					@@var_969_object:SetScriptProperty("Material", var_961_int);
					var_953_bool = 1;
					var_969_object = 0;
					var_968_object = 0;
		}
				@@var_957_object:size(var_970_int);
				var_971_int = 0;

			Label_2287:
				var_1060_bool = var_971_int < var_970_int;
				if(var_1060_bool != 0) {
					@@var_957_object:get(var_972_object, var_971_int);
					ReportAttack(var_972_object);
					var_1061_object = GlobalVars[2];
					@@var_1061_object:in(var_973_bool, var_972_object);
					var_1062_bool = var_973_bool == 0; //@nz
					if(var_1062_bool != 0) {
						var_1063_object = GlobalVars[3];
						@@var_1063_object:add(var_972_object);
						BroadcastPlayerDamage(var_972_object, (bool)0);
					} else {
						BroadcastPlayerDamage(var_972_object, (bool)1);
				}
					var_1068_int = var_951_string + "_phase2";
					PlayAnimation(var_1068_int);
					WaitForAnimEnd();
					var_1069_bool = var_0_bool;
					if(var_1069_bool != 0) {
						return 48;
					}
					func_2049();
					var_957_object = 0;
					var_1085_bool = 0;
					func_2333(var_1085_bool);
					if(var_1085_bool == 1) goto Label_2108;
				}
				var_972_object = 0;
				var_971_int = var_971_int + (int)1;
				goto Label_2287;
			}
		}
	Label_2280:
		var_960_object = 0;
		var_958_int = var_958_int + (int)1;
		goto Label_2186;
	}
	return 48;
	
}


func_1600()
{
	return 0;
}


func_1601(var_755_bool)
{
	var_756_bool = 0; var_757_bool = 0;
	IsShooting(var_757_bool);
	var_757_bool = var_755_bool;
	return 2;
}


func_1606()
{
	func_1630();
	var_20_bool = 0; var_21_string = ""; var_22_int = 0;
	func_3404(var_20_bool, "rifle_ammo", (int)1);
	if(var_20_bool != 0) {
		var_41_string = "";
		func_1628(var_41_string);
		var_43_int = var_41_string + "_reload";
		PlaySound(var_43_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_3142(var_36_float)
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateFloatVector(var_38_object);
	@@var_38_object:add(var_36_float);
	SendWorldWndMessage((int)16, var_38_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_3152(var_78_int)
{
	var_79_float = 0; var_80_float = 0;
	GetGameTime(var_80_float);
	var_82_int = 0;
	var_82_int = var_80_float / (int)24;
	var_78_int = (int)1 + var_82_int;
	return 2;
}


func_3161(var_24_string)
{
	var_26_bool = 0; var_27_bool = 0;
	IsExistingSound(var_27_bool, var_24_string);
	var_28_bool = var_27_bool;
	if(var_28_bool != 0) {
		PlaySound(var_24_string);
	}
	return 2;
}


func_1628(var_41_string)
{
	var_41_string = "rifle";
	return 0;
}


func_1630()
{
	return 0;
}


func_1631(var_809_bool)
{
	var_810_bool = 0; var_811_bool = 0; var_812_bool = 0; var_813_bool = 0;
	GetWeaponProperty(var_812_bool, "ammo", var_813_bool);
	var_815_bool = 0;
	var_815_bool = 1;
	var_816_bool = var_812_bool == 0; //@nz
	if(var_816_bool != 1) {
		var_817_bool = var_813_bool == 0; //@nz
		if(var_817_bool != 1) {
			var_815_bool = 0;
		}
	}
	if(var_815_bool != 0) {
		var_818_bool = 0; var_819_string = ""; var_820_int = 0;
		func_3404(var_818_bool, "revolver_ammo", (int)6);
		var_821_bool = var_818_bool == 0; //@nz
		if(var_821_bool != 0) {
			var_822_string = "";
			func_1730(var_822_string);
			var_824_int = var_822_string + "_noammo";
			PlaySound(var_824_int);
			PlayAnimation("noammo");
			WaitForAnimEnd();
			var_809_bool = 0;
			return 4;
		}
	}
	var_809_bool = 1;
	return 4;
}


func_3169(var_69_bool)
{
	var_70_bool = 0; var_71_bool = 0;
	GetVariable("god_mode", var_71_bool);
	var_71_bool = var_69_bool;
	return 2;
}


func_102(var_2_float)
{
	var_29_string = ""; var_30_float = 0;
	var_30_float = var_2_float;
	func_2868("armor_phys", var_30_float);
	SetProperty("blocking", (bool)1);
	return 0;
}


func_3175(var_19_object)
{
	var_20_object = Obj(); var_21_object = Obj();
	var_21_object = 0;
	var_21_object = var_19_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_3180(var_72_bool)
{
	var_73_int = 0; var_74_int = 0;
	GetItemCountOfType(var_74_int, "kerosene");
	var_74_int = var_72_bool;
	return 2;
}


func_112(var_2_float)
{
	SetProperty("blocking", (bool)0);
	var_44_string = ""; var_45_float = 0;
	var_45_float = -var_2_float;
	func_2868("armor_phys", var_45_float);
	return 0;
}


func_3186(var_81_int)
{
	var_82_int = 0; var_83_int = 0;
	GetVariable("branch", var_83_int);
	var_83_int = var_81_int;
	return 2;
}


func_3192(var_64_bool, var_65_int)
{
	var_67_bool = var_65_int == (int)10;
	if(var_67_bool != 0) {
		func_3364();
		var_64_bool = 1;
		return 0;
	EMIT "GOTO 0xc93";
	}
	var_120_bool = var_65_int == (int)11;
	if(var_120_bool != 0) {
		func_3372();
		var_64_bool = 1;
		return 0;
	EMIT "GOTO 0xc93";
	}
	var_127_bool = var_65_int == (int)12;
	if(var_127_bool != 0) {
		func_3368();
		var_64_bool = 1;
		return 0;
	}
	var_64_bool = 0;
	return 0;
}


func_122(var_37_bool)
{
	var_38_bool = 0; var_39_bool = 0;
	IsAltShooting(var_39_bool);
	var_39_bool = var_37_bool;
	return 2;
}


func_1666(var_846_int)
{
	var_846_int = 1;
	return 0;
}


func_1668(var_851_float)
{
	var_851_float = 0.02617993950843811;
	return 0;
}


func_1670()
{
	var_828_bool = 0; var_829_int = 0; var_830_bool = 0; var_831_int = 0;
	GetWeaponProperty(var_830_bool, "ammo", var_831_int);
	var_835_int = var_831_int - (int)1;
	SetWeaponProperty(var_830_bool, "ammo", var_835_int);
	func_3870();
	return 4;
}


func_1683()
{
	var_905_bool = 0; var_906_bool = 0; var_907_bool = 0; var_908_bool = 0;
	GetWeaponProperty(var_907_bool, "ammo", var_908_bool);
	var_910_bool = 0;
	var_910_bool = 1;
	var_911_bool = var_907_bool == 0; //@nz
	if(var_911_bool != 1) {
		var_912_bool = var_908_bool == 0; //@nz
		if(var_912_bool != 1) {
			var_910_bool = 0;
		}
	}
	if(var_910_bool != 0) {
		func_1699();
	}
	return 4;
}


func_3221()
{
	var_68_bool = 0; var_69_int = 0; var_70_string = ""; var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_string = ""; var_75_string = ""; var_76_bool = 0; var_77_int = 0; var_78_string = ""; var_79_int = 0; var_80_bool = 0; var_81_int = 0; var_82_string = ""; var_83_string = "";
	GetGroundMaterial(var_76_bool, var_77_int);
	var_84_bool = var_76_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_77_int = -1;
	}
	var_85_string = ""; var_86_int = 0;
	var_77_int = var_86_int;
	func_2975(var_85_string, var_86_int);
	var_85_string = var_78_string;
	var_79_int = 0;
	
Label_3233:
	var_98_int = "step_" + var_78_string;
	var_100_int = var_79_int + (int)1;
	var_101_int = var_98_int + var_100_int;
	IsExistingSound(var_80_bool, var_101_int);
	var_102_bool = var_80_bool == 0; //@nz
	if(var_102_bool != 0) {
	} else {
			var_79_int = var_79_int + (int)1;
			goto Label_3233;
	}
	var_103_bool = var_79_int == 0; //@nz
	if(var_103_bool != 0) {
		var_104_string = GlobalVars[0];
		GlobalVars[0] = "";
		return 16;
	}
	var_106_bool = var_79_int == (int)1;
	if(var_106_bool != 0) {
		var_81_int = 0;
	} else {
		irand(var_81_int, var_79_int);
		var_113_int = "step_" + var_78_string;
		var_115_int = var_81_int + (int)1;
		var_82_string = var_113_int + var_115_int;
		var_116_string = GlobalVars[0];
		var_117_bool = var_82_string != var_116_string;
		if(var_117_bool != 0) {
			goto Label_3269;
		}
		goto Label_3257;

	}
Label_3269:
	var_108_int = "step_" + var_78_string;
	var_110_int = var_81_int + (int)1;
	var_83_string = var_108_int + var_110_int;
	PlaySound(var_83_string);
	var_111_string = GlobalVars[0];
	var_83_string = var_111_string;
	GlobalVars[0] = var_111_string;
	return 16;
	
}


func_1699()
{
	var_913_bool = 0; var_914_string = ""; var_915_int = 0;
	func_3404(var_913_bool, "revolver_ammo", (int)6);
	if(var_913_bool != 0) {
		var_916_string = "";
		func_1730(var_916_string);
		var_918_int = var_916_string + "_reload";
		PlaySound(var_918_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_690(var_182_float, var_183_bool)
{
	var_184_float = 0; var_185_bool = 0;
	var_183_bool = var_185_bool;
	func_454(var_184_float, var_185_bool);
	var_184_float = var_182_float;
	return 0;
}


func_181(var_0_bool, var_19_bool)
{
	func_201(var_19_bool);
	var_19_bool = var_0_bool;
	return 0;
}


func_186(var_120_string)
{
	var_120_string = "punch";
	return 0;
}


func_188(var_138_float, var_139_bool)
{
	var_140_bool = var_139_bool;
	if(var_140_bool != 0) {
		var_138_float = 0.20000000298023224;
	} else {
		var_138_float = 0.10000000149011612;
	}
	return 0;
	
}


func_1730(var_822_string)
{
	var_822_string = "revolver";
	return 0;
}


func_195(var_148_int)
{
	var_148_int = 0;
	return 0;
}


func_1732(var_847_float)
{
	var_847_float = 0.800000011920929;
	return 0;
}


func_708()
{
	return 0;
}


func_197(var_217_int)
{
	var_217_int = 0;
	return 0;
}


func_709(var_116_bool)
{
	var_116_bool = 0;
	return 0;
}


func_199(var_62_string)
{
	var_62_string = "b";
	return 0;
}


func_711(var_108_string)
{
	var_108_string = "";
	return 0;
}


func_201(var_0_bool)
{
	var_21_int = 0; var_22_string = ""; var_23_bool = 0; var_24_string = ""; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0; var_38_float = 0; var_39_int = 0; var_40_bool = 0; var_41_int = 0; var_42_string = ""; var_43_bool = 0; var_44_string = ""; var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_object = Obj(); var_48_int = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0); var_53_string = ""; var_54_int = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_float = 0; var_59_int = 0; var_60_bool = 0;
	var_0_bool = false;
	
Label_204:
	(int)0 = (int)0 + (int)1;
	var_62_string = "";
	func_199(var_62_string);
	var_64_int = var_62_string + "attack";
	var_65_int = var_64_int + var_41_int;
	var_42_string = var_65_int + "_phase1";
	HasAnimation(var_43_bool, var_42_string);
	var_67_bool = var_43_bool == 0; //@nz
	if(var_67_bool != 0) {
	} else {
							goto Label_204;
	}
	var_41_int = var_41_int + (int)-1;
	var_69_bool = var_41_int == 0; //@nz
	if(var_69_bool != 0) {
		return 40;
	}
Label_225:
	GetCurrentWeapon(var_44_string);
	GetAttackDistance(var_45_float);
	GetDirection(var_46_cvector);
	var_50_bool = 0;
	var_70_bool = 0;
	func_445(var_70_bool);
	if(var_70_bool != 0) {
		GetVictimMaterialExact(var_47_object, var_48_int, var_49_cvector, var_46_cvector, var_45_float);
		var_71_bool = 0;
		var_71_bool = 0;
		var_72_bool = 0;
		var_72_bool = 0;
		var_73_bool = 0;
		var_73_bool = 0;
		var_74_bool = var_47_object != 0; //@nn
		if(var_74_bool != 0) {
			var_75_bool = 0; var_76_object = Obj(); var_77_string = "";
			var_47_object = var_76_object;
			func_2856(var_75_bool, var_76_object, "health");
			if(var_75_bool != 0) {
				var_73_bool = 1;
			}
		}
		if(var_73_bool != 0) {
			var_84_bool = 0; var_85_object = Obj();
			var_47_object = var_85_object;
			func_2970(var_84_bool, var_85_object);
			var_88_bool = var_84_bool == 0; //@nz
			if(var_88_bool != 0) {
				var_72_bool = 1;
			}
		}
		if(var_72_bool != 0) {
			var_90_bool = var_48_int == (int)4;
			if(var_90_bool != 0) {
				var_71_bool = 1;
			}
		}
		if(var_71_bool != 0) {
			var_93_bool = IsFuncExist(var_47_object, "GetDirection", (int)1);
			if(var_93_bool != 0) {
				GetDirection(var_51_cvector);
				@@var_47_object:GetDirection(var_52_cvector);
				var_94_float = 0; var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0);
				var_51_cvector = var_95_cvector;
				var_52_cvector = var_96_cvector;
				func_3073(var_94_float, var_95_cvector, var_96_cvector);
				var_50_bool = var_94_float >= (float)0.4999999701976776;
			}
		}
	}
	var_119_bool = var_50_bool;
	if(var_119_bool != 0) {
		var_53_string = "battack";
		var_120_string = "";
		func_186(var_120_string);
		var_122_int = var_120_string + "_back";
		PlaySound(var_122_int);
	} else {
						irand(var_54_int, var_41_int);
						var_229_string = "";
						func_199(var_229_string);
						var_231_int = var_229_string + "attack";
						var_233_int = var_54_int + (int)1;
						var_53_string = var_231_int + var_233_int;
						var_234_string = "";
						func_186(var_234_string);
						var_236_int = var_54_int + (int)1;
						var_237_int = var_234_string + var_236_int;
						PlaySound(var_237_int);

	}
	SetAttackState((bool)1);
	var_125_int = var_53_string + "_phase1";
	PlayAnimation(var_125_int);
	WaitForAnimEnd();
	var_126_bool = var_0_bool;
	if(var_126_bool != 0) {
		return 40;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_45_float);
	GetDirection(var_46_cvector);
	GetVictimMaterialExact(var_47_object, var_48_int, var_49_cvector, var_46_cvector, var_45_float);
	var_128_bool = var_47_object != 0; //@nn
	if(var_128_bool != 0) {
		var_131_bool = IsFuncExist(var_47_object, "GetDirection", (int)1);
		if(var_131_bool != 0) {
			GetDirection(var_55_cvector);
			@@var_47_object:GetDirection(var_56_cvector);
			var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0);
			var_55_cvector = var_133_cvector;
			var_56_cvector = var_134_cvector;
			func_3073(var_132_float, var_133_cvector, var_134_cvector);
			var_50_bool = var_132_float >= (float)0.4999999701976776;
		} else {
					var_50_bool = 0;

		}
		var_136_float = 0; var_137_bool = 0;
		var_50_bool = var_137_bool;
		func_426(var_136_float, var_137_bool);
		var_136_float = var_57_float;
		var_142_bool = var_48_int == (int)4;
		if(var_142_bool != 0) {
			var_57_float = var_57_float * (float)3.0;
		}
		var_144_float = 0; var_145_object = Obj(); var_146_float = 0; var_147_int = 0;
		var_47_object = var_145_object;
		var_57_float = var_146_float;
		func_195((int)0);
		var_148_int = var_147_int;
		func_2897(var_144_float, var_145_object, var_146_float, var_147_int);
		var_144_float = var_58_float;
		var_209_float = var_58_float;
		if(var_209_float != 0) {
			irand(var_59_int, (int)2);
			var_211_string = "";
			func_186(var_211_string);
			var_213_int = var_211_string + "_hit";
			var_215_int = var_59_int + (int)1;
			var_216_int = var_213_int + var_215_int;
			PlaySound(var_216_int);
			ReportAttack(var_47_object);
			var_217_int = 0;
			func_197(var_217_int);
			ReportHit(var_47_object, var_217_int, var_58_float, var_57_float, var_49_cvector, var_46_cvector);
			var_218_object = GlobalVars[2];
			@@var_218_object:in(var_60_bool, var_47_object);
			var_219_bool = var_60_bool == 0; //@nz
			if(var_219_bool != 0) {
				var_220_object = GlobalVars[3];
				@@var_220_object:add(var_47_object);
				BroadcastPlayerDamage(var_47_object, (bool)0);
			} else {
				BroadcastPlayerDamage(var_47_object, (bool)1);

			}
		}
		func_444();
	}
	var_223_int = var_53_string + "_phase2";
	PlayAnimation(var_223_int);
	WaitForAnimEnd();
	var_224_bool = var_0_bool;
	if(var_224_bool != 0) {
		return 40;
	}
	var_47_object = 0;
	var_225_bool = 0;
	func_447(var_225_bool);
	if(var_225_bool == 1) goto Label_225;
	return 40;
	
}


func_713(var_271_bool)
{
	var_272_bool = 0; var_273_bool = 0;
	IsShooting(var_273_bool);
	var_273_bool = var_271_bool;
	return 2;
}


func_1738(var_844_int)
{
	var_844_int = 2;
	return 0;
}


func_1734(var_869_int)
{
	var_869_int = 1;
	return 0;
}


func_718(var_357_string)
{
	var_357_string = "scalpel";
	return 0;
}


func_1736(var_871_int)
{
	var_871_int = 2;
	return 0;
}


func_720(var_375_float)
{
	var_375_float = 0.6000000238418579;
	return 0;
}


func_1740(var_0_bool)
{
	var_761_string = ""; var_762_string = ""; var_763_int = 0; var_764_bool = 0; var_765_float = 0; var_766_float = 0; var_767_cvector = CVector(0,0,0); var_768_object = Obj(); var_769_int = 0; var_770_cvector = CVector(0,0,0); var_771_object = Obj(); var_772_int = 0; var_773_cvector = CVector(0,0,0); var_774_float = 0; var_775_float = 0; var_776_float = 0; var_777_object = Obj(); var_778_float = 0; var_779_object = Obj(); var_780_object = Obj(); var_781_int = 0; var_782_int = 0; var_783_object = Obj(); var_784_bool = 0; var_785_string = ""; var_786_string = ""; var_787_int = 0; var_788_bool = 0; var_789_float = 0; var_790_float = 0; var_791_cvector = CVector(0,0,0); var_792_object = Obj(); var_793_int = 0; var_794_cvector = CVector(0,0,0); var_795_object = Obj(); var_796_int = 0; var_797_cvector = CVector(0,0,0); var_798_float = 0; var_799_float = 0; var_800_float = 0; var_801_object = Obj(); var_802_float = 0; var_803_object = Obj(); var_804_object = Obj(); var_805_int = 0; var_806_int = 0; var_807_object = Obj(); var_808_bool = 0;
	var_0_bool = false;
	
Label_1742:
	var_809_bool = 0;
	func_1631(var_809_bool);
	var_826_bool = var_809_bool == 0; //@nz
	if(var_826_bool != 0) {
	} else {
		GetCurrentWeapon(var_785_string);
		var_786_string = "attack1";
		SetAttackState((bool)1);
		func_1670();
		var_837_int = var_786_string + "_phase1";
		PlayAnimation(var_837_int);
		WaitForAnimEnd();
		var_838_bool = var_0_bool;
		if(var_838_bool != 0) {
			return 48;
		}
		TriggerWeapon("shot");
		var_840_string = "";
		func_1730(var_840_string);
		var_842_int = var_840_string + "_shot";
		PlaySound(var_842_int);
		var_843_int = 0;
		func_1738((int)0);
		var_844_int = var_843_int;
		func_3451(var_843_int);
		func_1964();
		SetAttackState((bool)0);
		func_1666((int)0);
		var_846_int = var_787_int;
		var_847_float = 0;
		func_1732(var_847_float);
		var_789_float = var_847_float / var_787_int;
		var_851_float = 0;
		func_1668(var_851_float);
		var_852_float = (float)1.0 / var_851_float;
		var_854_int = var_852_float - (float)1.5;
		var_855_float = 0;
		func_3440(var_855_float);
		var_856_float = var_854_int * var_855_float;
		var_857_int = (float)1.5 + var_856_float;
		var_790_float = (float)1.0 / var_857_int;
		GetDirection(var_791_cvector);
		func_3048(Obj());
		var_858_object = var_792_object;
		var_793_int = 0;

	Label_1820:
		var_859_bool = var_793_int < var_787_int;
		if(var_859_bool != 0) {
			RandVecCone3D(var_794_cvector, var_791_cvector, var_790_float);
			GetVictimMaterialExact(var_795_object, var_796_int, var_797_cvector, var_794_cvector, (int)10000);
			var_861_object = var_795_object;
			if(var_861_object != 0) {
				var_789_float = var_798_float;
				var_863_bool = var_796_int == (int)4;
				if(var_863_bool != 0) {
					var_798_float = var_798_float * (float)3.0;
				}
				var_865_float = 0; var_866_object = Obj(); var_867_float = 0; var_868_int = 0;
				var_795_object = var_866_object;
				var_798_float = var_867_float;
				func_1734((int)0);
				var_869_int = var_868_int;
				func_2897(var_865_float, var_866_object, var_867_float, var_868_int);
				var_865_float = var_799_float;
				var_870_float = var_799_float;
				if(var_870_float != 0) {
					@@var_792_object:add(var_795_object);
					var_871_int = 0;
					func_1736(var_871_int);
					ReportHit(var_795_object, var_871_int, var_799_float, var_798_float, var_797_cvector, var_794_cvector);
					var_872_bool = 0;
					func_1965(var_872_bool);
					if(var_872_bool != 0) {
						@@var_795_object:GetProperty("health", var_800_float);
						var_874_bool = var_800_float == 0; //@nz
						if(var_874_bool != 0) {
							GetVictimMaterialExact(var_801_object, var_796_int, var_797_cvector, var_794_cvector, (int)10000, var_795_object);
							var_876_bool = 0;
							var_876_bool = 0;
							var_877_object = var_801_object;
							if(var_877_object != 0) {
								var_878_bool = var_801_object != var_795_object;
								if(var_878_bool != 0) {
									var_876_bool = 1;
								}
							}
							if(var_876_bool != 0) {
								var_879_float = 0; var_880_object = Obj(); var_881_float = 0; var_882_int = 0;
								var_801_object = var_880_object;
								var_881_float = var_798_float * (float)0.75;
								func_1734((int)0);
								var_884_int = var_882_int;
								func_2897(var_879_float, var_880_object, var_881_float, var_882_int);
								var_879_float = var_802_float;
								var_885_float = var_802_float;
								if(var_885_float != 0) {
									@@var_792_object:add(var_801_object);
									var_886_int = 0;
									func_1736(var_886_int);
									ReportHit(var_801_object, var_886_int, var_802_float, var_798_float, var_797_cvector, var_794_cvector);
								}
							}
							var_801_object = 0;
						}
					}
				} else {
					var_889_bool = var_796_int != (int)-1;
					if(var_889_bool == 0) goto Label_1914;
					var_890_bool = (bool)0 == 0; //@nz
					if(var_890_bool == 0) goto Label_1914;
					GetScene(var_803_object);
					AddActorByType(var_804_object, "scripted", var_803_object, var_797_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
					@@var_804_object:SetScriptProperty("Material", var_796_int);
					var_788_bool = 1;
					var_804_object = 0;
					var_803_object = 0;
		}
				@@var_792_object:size(var_805_int);
				var_806_int = 0;

			Label_1921:
				var_895_bool = var_806_int < var_805_int;
				if(var_895_bool != 0) {
					@@var_792_object:get(var_807_object, var_806_int);
					ReportAttack(var_807_object);
					var_896_object = GlobalVars[2];
					@@var_896_object:in(var_808_bool, var_807_object);
					var_897_bool = var_808_bool == 0; //@nz
					if(var_897_bool != 0) {
						var_898_object = GlobalVars[3];
						@@var_898_object:add(var_807_object);
						BroadcastPlayerDamage(var_807_object, (bool)0);
					} else {
						BroadcastPlayerDamage(var_807_object, (bool)1);
				}
					var_903_int = var_786_string + "_phase2";
					PlayAnimation(var_903_int);
					WaitForAnimEnd();
					var_904_bool = var_0_bool;
					if(var_904_bool != 0) {
						return 48;
					}
					func_1683();
					var_792_object = 0;
					var_920_bool = 0;
					func_1967(var_920_bool);
					if(var_920_bool == 1) goto Label_1742;
				}
				var_807_object = 0;
				var_806_int = var_806_int + (int)1;
				goto Label_1921;
			}
		}
	Label_1914:
		var_795_object = 0;
		var_793_int = var_793_int + (int)1;
		goto Label_1820;
	}
	return 48;
	
}


func_3280()
{
	var_74_object = Obj(); var_75_object = Obj(); var_76_object = Obj(); var_77_object = Obj();
	var_78_int = 0;
	func_3152(var_78_int);
	var_85_bool = var_78_int == (int)12;
	if(var_85_bool != 0) {
		UnlockAchievement("ACHIEVEMENT_MIGHT");
	}
	GetMainOutdoorScene(var_76_object);
	AddBlankActor(var_77_object, var_76_object, "player_death", "play_death_burah.bin");
	SetDeathState();
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_723(var_379_float)
{
	var_379_float = 0.5;
	return 0;
}


func_725(var_413_int)
{
	var_413_int = 2;
	return 0;
}


func_727(var_398_int)
{
	var_398_int = 0;
	return 0;
}


func_729(var_407_int)
{
	var_407_int = 1;
	return 0;
}


func_731(var_373_float, var_374_bool)
{
	var_375_float = 0; var_376_bool = 0;
	var_374_bool = var_376_bool;
	func_720(var_376_bool);
	var_377_float = 0; var_378_float = 0;
	func_723((float)0);
	var_379_float = var_378_float;
	func_3469(var_377_float, var_378_float);
	var_373_float = var_375_float * var_377_float;
	return 0;
}


func_3301()
{
	var_17_bool = 0; var_18_bool = 0;
	KillTimer((int)11, var_18_bool);
	var_20_bool = var_18_bool;
	if(var_20_bool != 0) {
		ModNoise((int)-3);
	}
	return 2;
}


func_745()
{
	var_412_int = 0;
	func_725((int)0);
	var_413_int = var_412_int;
	func_3451(var_412_int);
	return 0;
}


func_3311()
{
	func_3301();
	SetTimer((int)11, (float)0.15000000596046448);
	ModNoise((int)3);
	return 0;
}


func_753(var_0_bool)
{
	var_287_int = 0; var_288_string = ""; var_289_bool = 0; var_290_string = ""; var_291_float = 0; var_292_cvector = CVector(0,0,0); var_293_object = Obj(); var_294_int = 0; var_295_cvector = CVector(0,0,0); var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_string = ""; var_300_int = 0; var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0; var_305_int = 0; var_306_bool = 0; var_307_int = 0; var_308_string = ""; var_309_bool = 0; var_310_string = ""; var_311_float = 0; var_312_cvector = CVector(0,0,0); var_313_object = Obj(); var_314_int = 0; var_315_cvector = CVector(0,0,0); var_316_bool = 0; var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_string = ""; var_320_int = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0); var_323_float = 0; var_324_float = 0; var_325_int = 0; var_326_bool = 0;
	var_0_bool = false;
	
Label_756:
	(int)0 = (int)0 + (int)1;
	var_328_string = "";
	func_991(var_328_string);
	var_330_int = var_328_string + "attack";
	var_331_int = var_330_int + var_307_int;
	var_308_string = var_331_int + "_phase1";
	HasAnimation(var_309_bool, var_308_string);
	var_333_bool = var_309_bool == 0; //@nz
	if(var_333_bool != 0) {
	} else {
							goto Label_756;
	}
	var_307_int = var_307_int + (int)-1;
	var_335_bool = var_307_int == 0; //@nz
	if(var_335_bool != 0) {
		return 40;
	}
Label_777:
	GetCurrentWeapon(var_310_string);
	GetAttackDistance(var_311_float);
	GetDirection(var_312_cvector);
	var_316_bool = 0;
	var_336_bool = 0;
	func_989(var_336_bool);
	if(var_336_bool != 0) {
		GetVictimMaterialExact(var_313_object, var_314_int, var_315_cvector, var_312_cvector, var_311_float);
		var_337_bool = 0;
		var_337_bool = 0;
		var_338_bool = 0;
		var_338_bool = 0;
		var_339_bool = 0;
		var_339_bool = 0;
		var_340_bool = var_313_object != 0; //@nn
		if(var_340_bool != 0) {
			var_341_bool = 0; var_342_object = Obj(); var_343_string = "";
			var_313_object = var_342_object;
			func_2856(var_341_bool, var_342_object, "health");
			if(var_341_bool != 0) {
				var_339_bool = 1;
			}
		}
		if(var_339_bool != 0) {
			var_344_bool = 0; var_345_object = Obj();
			var_313_object = var_345_object;
			func_2970(var_344_bool, var_345_object);
			var_346_bool = var_344_bool == 0; //@nz
			if(var_346_bool != 0) {
				var_338_bool = 1;
			}
		}
		if(var_338_bool != 0) {
			var_348_bool = var_314_int == (int)4;
			if(var_348_bool != 0) {
				var_337_bool = 1;
			}
		}
		if(var_337_bool != 0) {
			var_351_bool = IsFuncExist(var_313_object, "GetDirection", (int)1);
			if(var_351_bool != 0) {
				GetDirection(var_317_cvector);
				@@var_313_object:GetDirection(var_318_cvector);
				var_352_float = 0; var_353_cvector = CVector(0,0,0); var_354_cvector = CVector(0,0,0);
				var_317_cvector = var_353_cvector;
				var_318_cvector = var_354_cvector;
				func_3073(var_352_float, var_353_cvector, var_354_cvector);
				var_316_bool = var_352_float >= (float)0.4999999701976776;
			}
		}
	}
	var_356_bool = var_316_bool;
	if(var_356_bool != 0) {
		var_319_string = "battack";
		var_357_string = "";
		func_718(var_357_string);
		var_359_int = var_357_string + "_back";
		PlaySound(var_359_int);
	} else {
						irand(var_320_int, var_307_int);
						var_434_string = "";
						func_991(var_434_string);
						var_436_int = var_434_string + "attack";
						var_438_int = var_320_int + (int)1;
						var_319_string = var_436_int + var_438_int;
						var_439_string = "";
						func_718(var_439_string);
						var_441_int = var_320_int + (int)1;
						var_442_int = var_439_string + var_441_int;
						PlaySound(var_442_int);

	}
	SetAttackState((bool)1);
	var_362_int = var_319_string + "_phase1";
	PlayAnimation(var_362_int);
	WaitForAnimEnd();
	var_363_bool = var_0_bool;
	if(var_363_bool != 0) {
		return 40;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_311_float);
	GetDirection(var_312_cvector);
	GetVictimMaterialExact(var_313_object, var_314_int, var_315_cvector, var_312_cvector, var_311_float);
	var_365_bool = var_313_object != 0; //@nn
	if(var_365_bool != 0) {
		var_368_bool = IsFuncExist(var_313_object, "GetDirection", (int)1);
		if(var_368_bool != 0) {
			GetDirection(var_321_cvector);
			@@var_313_object:GetDirection(var_322_cvector);
			var_369_float = 0; var_370_cvector = CVector(0,0,0); var_371_cvector = CVector(0,0,0);
			var_321_cvector = var_370_cvector;
			var_322_cvector = var_371_cvector;
			func_3073(var_369_float, var_370_cvector, var_371_cvector);
			var_316_bool = var_369_float >= (float)0.4999999701976776;
		} else {
					var_316_bool = 0;

		}
		var_373_float = 0; var_374_bool = 0;
		var_316_bool = var_374_bool;
		func_731(var_373_float, var_374_bool);
		var_373_float = var_323_float;
		var_392_bool = var_314_int == (int)4;
		if(var_392_bool != 0) {
			var_323_float = var_323_float * (float)3.0;
		}
		var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_int = 0;
		var_313_object = var_395_object;
		var_323_float = var_396_float;
		func_727((int)0);
		var_398_int = var_397_int;
		func_2897(var_394_float, var_395_object, var_396_float, var_397_int);
		var_394_float = var_324_float;
		var_399_float = var_324_float;
		if(var_399_float != 0) {
			irand(var_325_int, (int)2);
			var_401_string = "";
			func_718(var_401_string);
			var_403_int = var_401_string + "_hit";
			var_405_int = var_325_int + (int)1;
			var_406_int = var_403_int + var_405_int;
			PlaySound(var_406_int);
			ReportAttack(var_313_object);
			var_407_int = 0;
			func_729(var_407_int);
			ReportHit(var_313_object, var_407_int, var_324_float, var_323_float, var_315_cvector, var_312_cvector);
			var_408_object = GlobalVars[2];
			@@var_408_object:in(var_326_bool, var_313_object);
			var_409_bool = var_326_bool == 0; //@nz
			if(var_409_bool != 0) {
				var_410_object = GlobalVars[3];
				@@var_410_object:add(var_313_object);
				BroadcastPlayerDamage(var_313_object, (bool)0);
			} else {
				BroadcastPlayerDamage(var_313_object, (bool)1);

			}
		}
		func_745();
	}
	var_428_int = var_319_string + "_phase2";
	PlayAnimation(var_428_int);
	WaitForAnimEnd();
	var_429_bool = var_0_bool;
	if(var_429_bool != 0) {
		return 40;
	}
	var_313_object = 0;
	var_430_bool = 0;
	func_993(var_430_bool);
	if(var_430_bool == 1) goto Label_777;
	return 40;
	
}


func_3322()
{
	var_12_bool = 0; var_13_bool = 0;
	KillTimer((int)10, var_13_bool);
	var_15_bool = var_13_bool;
	if(var_15_bool != 0) {
		ModNoise((int)-2);
	}
	return 2;
}


func_1275(var_487_string)
{
	var_487_string = "";
	return 0;
}


func_1277(var_566_bool)
{
	var_567_bool = 0; var_568_bool = 0;
	IsShooting(var_568_bool);
	var_568_bool = var_566_bool;
	return 2;
}


func_1282(var_630_bool)
{
	var_631_bool = 0; var_632_bool = 0; var_633_bool = 0; var_634_bool = 0;
	GetWeaponProperty(var_633_bool, "ammo", var_634_bool);
	var_636_bool = 0;
	var_636_bool = 1;
	var_637_bool = var_633_bool == 0; //@nz
	if(var_637_bool != 1) {
		var_638_bool = var_634_bool == 0; //@nz
		if(var_638_bool != 1) {
			var_636_bool = 0;
		}
	}
	if(var_636_bool != 0) {
		var_639_bool = 0; var_640_string = ""; var_641_int = 0;
		func_3404(var_639_bool, "rifle_ammo", (int)1);
		var_660_bool = var_639_bool == 0; //@nz
		if(var_660_bool != 0) {
			var_661_string = "";
			func_1355(var_661_string);
			var_663_int = var_661_string + "_noammo";
			PlaySound(var_663_int);
			PlayAnimation("noammo");
			WaitForAnimEnd();
			var_630_bool = 0;
			return 4;
		}
	}
	var_630_bool = 1;
	return 4;
}


func_3332()
{
	var_12_bool = 0; var_13_bool = 0;
	KillTimer((int)12, var_13_bool);
	var_15_bool = var_13_bool;
	if(var_15_bool != 0) {
		ModNoise((int)-1);
	}
	return 2;
}


func_2829()
{
	func_3861();
	return 0;
}


func_3342()
{
	func_3322();
	SetTimer((int)10, (float)0.3499999940395355);
	ModNoise((int)2);
	return 0;
}


func_2833()
{
	KillTimer((int)0);
	return 0;
}


func_3861()
{
	var_60_float = 0; var_61_float = 0;
	rand(var_61_float, (int)10, (int)30);
	SetTimer((int)0, var_61_float);
	return 2;
}


func_2837(var_56_string, var_57_int)
{
	var_59_bool = var_57_int == (int)2;
	if(var_59_bool != 0) {
		var_56_string = "fire";
		return 0;
	EMIT "GOTO 0xb21";
	}
	var_61_bool = var_57_int == (int)1;
	if(var_61_bool != 0) {
		var_56_string = "bullet";
		return 0;
	}
	var_56_string = "phys";
	return 0;
}


func_3353()
{
	func_3332();
	SetTimer((int)12, (float)0.6000000238418579);
	ModNoise((int)1);
	return 0;
}


func_2330()
{
	return 0;
}


func_2331(var_1037_bool)
{
	var_1037_bool = 0;
	return 0;
}


func_2333(var_1085_bool)
{
	var_1086_bool = 0; var_1087_bool = 0;
	IsShooting(var_1087_bool);
	var_1087_bool = var_1085_bool;
	return 2;
}


func_3870()
{
	var_671_object = Obj(); var_672_object = Obj();
	GetScene(var_672_object);
	var_674_object = Obj();
	func_3007(var_674_object);
	BroadcastMessage("player_shot", var_674_object, var_672_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2338()
{
	func_2362();
	var_56_bool = 0; var_57_string = ""; var_58_int = 0;
	func_3404(var_56_bool, "samopal_ammo", (int)2);
	if(var_56_bool != 0) {
		var_59_string = "";
		func_2360(var_59_string);
		var_61_int = var_59_string + "_reload";
		PlaySound(var_61_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_2851(var_82_bool, var_83_object)
{
	var_84_bool = 0; var_85_bool = 0;
	IsPlayerActor(var_83_object, var_85_bool);
	var_85_bool = var_82_bool;
	return 2;
}


func_3364()
{
	func_3221();
	return 0;
}


func_1317(var_687_int)
{
	var_687_int = 1;
	return 0;
}


func_1319(var_692_float)
{
	var_692_float = 0.01745329238474369;
	return 0;
}


func_2856(var_41_bool, var_42_object, var_43_string)
{
	var_44_bool = 0; var_45_bool = 0;
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", (int)2);
	var_49_bool = var_48_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_41_bool = 0;
		return 2;
	}
	@@var_42_object:HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
	return 2;
}


func_1321(var_715_bool)
{
	var_715_bool = 1;
	return 0;
}


func_3368()
{
	func_3221();
	return 0;
}


func_1323()
{
	var_667_bool = 0; var_668_bool = 0;
	SetWeaponProperty(var_668_bool, "ammo", (bool)0);
	func_3870();
	return 2;
}


func_3372()
{
	func_3221();
	func_3301();
	return 0;
}


func_2868(var_29_string, var_30_float)
{
	var_31_float = 0; var_32_float = 0;
	GetProperty(var_29_string, var_32_float);
	var_33_int = var_32_float + var_30_float;
	SetProperty(var_29_string, var_33_int);
	return 2;
}


func_1332()
{
	func_1336();
	return 0;
}


func_1336()
{
	var_748_bool = 0; var_749_string = ""; var_750_int = 0;
	func_3404(var_748_bool, "rifle_ammo", (int)1);
	if(var_748_bool != 0) {
		var_751_string = "";
		func_1355(var_751_string);
		var_753_int = var_751_string + "_reload";
		PlaySound(var_753_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_2360(var_59_string)
{
	var_59_string = "samopal";
	return 0;
}


func_2362()
{
	return 0;
}


func_2363(var_0_bool, var_1_bool)
{
	var_1092_int = 0; var_1093_int = 0; var_1094_object = Obj(); var_1095_bool = 0; var_1096_bool = 0; var_1097_bool = 0; var_1098_bool = 0; var_1099_int = 0; var_1100_int = 0; var_1101_int = 0; var_1102_int = 0; var_1103_object = Obj(); var_1104_bool = 0; var_1105_bool = 0; var_1106_bool = 0; var_1107_bool = 0; var_1108_int = 0; var_1109_int = 0;
	var_0_bool = false;
	var_1_bool = false;
	GetWeaponItem(var_1101_int);
	PlayAnimation("use_begin");
	WaitForAnimEnd();
	var_1111_bool = var_0_bool;
	if(var_1111_bool != 0) {
		return 18;
	}
	GetWeaponItem(var_1102_int);
	GetPlayerSelectedObject(var_1103_object);
	var_1104_bool = 0;
	var_1112_bool = var_1102_int == var_1101_int;
	if(var_1112_bool != 0) {
		var_1113_bool = 0; var_1114_object = Obj(); var_1115_string = "";
		var_1103_object = var_1114_object;
		func_2856(var_1113_bool, var_1114_object, "lp");
		if(var_1113_bool != 0) {
			@@var_1103_object:GetProperty("lp", var_1105_bool);
			var_1117_bool = var_1105_bool;
			if(var_1117_bool != 0) {
				@@var_1103_object:GetProperty("locked", var_1106_bool);
				var_1119_bool = var_1106_bool;
				if(var_1119_bool != 0) {
					var_1104_bool = 1;
					@@var_1103_object:SetProperty("locked", (bool)0);
					var_1108_int = 0;
					GetWeaponProperty(var_1107_bool, "uses", var_1108_int);
					var_1124_bool = var_1108_int <= (int)1;
					if(var_1124_bool != 0) {
						GetWeaponItem(var_1109_int);
						SelectItem(var_1109_int, (bool)0, (int)0);
						RemoveItem(var_1109_int, (int)1, (int)0);
						var_1_bool = true;
					} else {
							var_1140_int = var_1108_int - (int)1;
							SetWeaponProperty(var_1107_bool, "uses", var_1140_int);
					}
				}
			}
		}
	}
	var_1129_bool = var_1104_bool;
	if(var_1129_bool != 0) {
		PlayAnimation("use_success");
	} else {
		PlayAnimation("use_fail");

	}
	WaitForAnimEnd();
	var_1131_bool = var_0_bool;
	if(var_1131_bool != 0) {
		return 18;
	}
	var_1132_bool = var_1_bool;
	if(var_1132_bool != 0) {
		PlayAnimation("holster");
		WaitForAnimEnd();
		SetHandsItem((int)-1);
		var_1135_bool = var_0_bool;
		if(var_1135_bool != 0) {
			return 18;
		}
		var_1_bool = false;
		PlayAnimation("unholster");
		WaitForAnimEnd();
	}
	return 18;
	
}
EMIT "Stack[-7] = 0";


func_2875(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float)
{
	var_46_float = 0; var_47_float = 0;
	var_48_bool = 0; var_49_object = Obj(); var_50_string = "";
	var_41_object = var_49_object;
	var_42_string = var_50_string;
	func_2856(var_48_bool, var_49_object, var_50_string);
	var_57_bool = var_48_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_40_bool = 0;
		return 2;
	}
	@@var_41_object:GetProperty(var_42_string, var_47_float);
	var_58_float = 0; var_59_float = 0; var_60_float = 0; var_61_float = 0;
	var_59_float = var_47_float + var_43_float;
	var_44_float = var_60_float;
	var_45_float = var_61_float;
	func_3020(var_58_float, var_59_float, var_60_float, var_61_float);
	@@var_41_object:SetProperty(var_42_string, var_58_float);
	var_40_bool = 1;
	return 2;
}


func_1355(var_661_string)
{
	var_661_string = "rifle";
	return 0;
}


func_3404(var_20_bool, var_21_string, var_22_int)
{
	var_23_bool = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0; var_27_bool = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0;
	GetWeaponProperty(var_27_bool, "ammo", var_28_int);
	var_32_bool = 0;
	var_32_bool = 0;
	var_33_bool = var_27_bool;
	if(var_33_bool != 0) {
		var_34_bool = var_28_int >= var_22_int;
		if(var_34_bool != 0) {
			var_32_bool = 1;
		}
	}
	if(var_32_bool != 0) {
		var_20_bool = 0;
		return 8;
	}
	GetInvItemByName(var_29_int, var_21_string);
	
Label_3420:
	var_35_bool = var_28_int < var_22_int;
	if(var_35_bool != 0) {
		RemoveItemByType(var_30_bool, var_29_int, (int)1);
		var_37_bool = var_30_bool == 0; //@nz
		if(var_37_bool != 0) {
		} else {
			var_28_int = var_28_int + (int)1;
			goto Label_3420;
		}
	}
	var_38_bool = var_28_int == 0; //@nz
	if(var_38_bool != 0) {
		var_20_bool = 0;
		return 8;
	}
	SetWeaponProperty(var_27_bool, "ammo", var_28_int);
	var_20_bool = 1;
	return 8;
	
}


func_1357(var_688_float)
{
	var_688_float = 1.5;
	return 0;
}


func_1359(var_712_int)
{
	var_712_int = 1;
	return 0;
}


func_1361(var_714_int)
{
	var_714_int = 2;
	return 0;
}


func_2897(var_22_float, var_23_object, var_24_float, var_25_int)
{
	var_29_int = 0; var_30_string = ""; var_31_int = 0; var_32_float = 0; var_33_float = 0; var_34_float = 0; var_35_int = 0; var_36_string = ""; var_37_int = 0; var_38_float = 0; var_39_float = 0; var_40_float = 0;
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_23_object = var_42_object;
	func_2856(var_41_bool, var_42_object, "health");
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_22_float = 0.0;
		return 12;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_23_object = var_52_object;
	func_2856(var_51_bool, var_52_object, "armor");
	var_54_bool = var_51_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_35_int = 0;
	} else {
			@@var_23_object:GetProperty("armor", var_35_int);
	}
	var_56_string = ""; var_57_int = 0;
	var_25_int = var_57_int;
	func_2837(var_56_string, var_57_int);
	var_36_string = "armor_" + var_56_string;
	var_62_bool = 0; var_63_object = Obj(); var_64_string = "";
	var_23_object = var_63_object;
	var_36_string = var_64_string;
	func_2856(var_62_bool, var_63_object, var_64_string);
	var_65_bool = var_62_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_37_int = 0;
	} else {
		@@var_23_object:GetProperty(var_36_string, var_37_int);

	}
	var_66_float = 0; var_67_float = 0; var_68_float = 0;
	var_69_int = var_35_int + var_37_int;
	var_67_float = var_69_int / (float)100.0;
	func_3013(var_66_float, var_67_float, (float)1);
	var_66_float = var_38_float;
	@@var_23_object:GetProperty("health", var_39_float);
	var_74_int = (int)1 - var_38_float;
	var_40_float = var_24_float * var_74_int;
	var_76_float = 0; var_77_float = 0; var_78_float = 0; var_79_float = 0;
	var_77_float = var_39_float - var_40_float;
	func_3020(var_76_float, var_77_float, (float)0, (float)1);
	@@var_23_object:SetProperty("health", var_76_float);
	var_82_bool = 0; var_83_object = Obj();
	var_23_object = var_83_object;
	func_2851(var_82_bool, var_83_object);
	if(var_82_bool != 0) {
		var_86_float = 0;
		var_86_float = -var_40_float;
		func_3125(var_86_float);
	}
	var_40_float = var_22_float;
	return 12;
	
}


func_1363(var_685_int)
{
	var_685_int = 2;
	return 0;
}


func_1365(var_0_bool)
{
	var_582_string = ""; var_583_string = ""; var_584_int = 0; var_585_bool = 0; var_586_float = 0; var_587_float = 0; var_588_cvector = CVector(0,0,0); var_589_object = Obj(); var_590_int = 0; var_591_cvector = CVector(0,0,0); var_592_object = Obj(); var_593_int = 0; var_594_cvector = CVector(0,0,0); var_595_float = 0; var_596_float = 0; var_597_float = 0; var_598_object = Obj(); var_599_float = 0; var_600_object = Obj(); var_601_object = Obj(); var_602_int = 0; var_603_int = 0; var_604_object = Obj(); var_605_bool = 0; var_606_string = ""; var_607_string = ""; var_608_int = 0; var_609_bool = 0; var_610_float = 0; var_611_float = 0; var_612_cvector = CVector(0,0,0); var_613_object = Obj(); var_614_int = 0; var_615_cvector = CVector(0,0,0); var_616_object = Obj(); var_617_int = 0; var_618_cvector = CVector(0,0,0); var_619_float = 0; var_620_float = 0; var_621_float = 0; var_622_object = Obj(); var_623_float = 0; var_624_object = Obj(); var_625_object = Obj(); var_626_int = 0; var_627_int = 0; var_628_object = Obj(); var_629_bool = 0;
	var_0_bool = false;
	
Label_1367:
	var_630_bool = 0;
	func_1282(var_630_bool);
	var_665_bool = var_630_bool == 0; //@nz
	if(var_665_bool != 0) {
	} else {
		GetCurrentWeapon(var_606_string);
		var_607_string = "attack1";
		SetAttackState((bool)1);
		func_1323();
		var_678_int = var_607_string + "_phase1";
		PlayAnimation(var_678_int);
		WaitForAnimEnd();
		var_679_bool = var_0_bool;
		if(var_679_bool != 0) {
			return 48;
		}
		TriggerWeapon("shot");
		var_681_string = "";
		func_1355(var_681_string);
		var_683_int = var_681_string + "_shot";
		PlaySound(var_683_int);
		var_684_int = 0;
		func_1363((int)0);
		var_685_int = var_684_int;
		func_3451(var_684_int);
		func_1600();
		SetAttackState((bool)0);
		func_1317((int)0);
		var_687_int = var_608_int;
		var_688_float = 0;
		func_1357(var_688_float);
		var_610_float = var_688_float / var_608_int;
		var_692_float = 0;
		func_1319(var_692_float);
		var_693_float = (float)1.0 / var_692_float;
		var_695_int = var_693_float - (float)1.5;
		var_696_float = 0;
		func_3440(var_696_float);
		var_697_float = var_695_int * var_696_float;
		var_698_int = (float)1.5 + var_697_float;
		var_611_float = (float)1.0 / var_698_int;
		GetDirection(var_612_cvector);
		func_3048(Obj());
		var_699_object = var_613_object;
		var_614_int = 0;

	Label_1445:
		var_702_bool = var_614_int < var_608_int;
		if(var_702_bool != 0) {
			RandVecCone3D(var_615_cvector, var_612_cvector, var_611_float);
			GetVictimMaterialExact(var_616_object, var_617_int, var_618_cvector, var_615_cvector, (int)10000);
			var_704_object = var_616_object;
			if(var_704_object != 0) {
				var_610_float = var_619_float;
				var_706_bool = var_617_int == (int)4;
				if(var_706_bool != 0) {
					var_619_float = var_619_float * (float)3.0;
				}
				var_708_float = 0; var_709_object = Obj(); var_710_float = 0; var_711_int = 0;
				var_616_object = var_709_object;
				var_619_float = var_710_float;
				func_1359((int)0);
				var_712_int = var_711_int;
				func_2897(var_708_float, var_709_object, var_710_float, var_711_int);
				var_708_float = var_620_float;
				var_713_float = var_620_float;
				if(var_713_float != 0) {
					@@var_613_object:add(var_616_object);
					var_714_int = 0;
					func_1361(var_714_int);
					ReportHit(var_616_object, var_714_int, var_620_float, var_619_float, var_618_cvector, var_615_cvector);
					var_715_bool = 0;
					func_1321(var_715_bool);
					if(var_715_bool != 0) {
						@@var_616_object:GetProperty("health", var_621_float);
						var_717_bool = var_621_float == 0; //@nz
						if(var_717_bool != 0) {
							GetVictimMaterialExact(var_622_object, var_617_int, var_618_cvector, var_615_cvector, (int)10000, var_616_object);
							var_719_bool = 0;
							var_719_bool = 0;
							var_720_object = var_622_object;
							if(var_720_object != 0) {
								var_721_bool = var_622_object != var_616_object;
								if(var_721_bool != 0) {
									var_719_bool = 1;
								}
							}
							if(var_719_bool != 0) {
								var_722_float = 0; var_723_object = Obj(); var_724_float = 0; var_725_int = 0;
								var_622_object = var_723_object;
								var_724_float = var_619_float * (float)0.75;
								func_1359((int)0);
								var_727_int = var_725_int;
								func_2897(var_722_float, var_723_object, var_724_float, var_725_int);
								var_722_float = var_623_float;
								var_728_float = var_623_float;
								if(var_728_float != 0) {
									@@var_613_object:add(var_622_object);
									var_729_int = 0;
									func_1361(var_729_int);
									ReportHit(var_622_object, var_729_int, var_623_float, var_619_float, var_618_cvector, var_615_cvector);
								}
							}
							var_622_object = 0;
						}
					}
				} else {
					var_732_bool = var_617_int != (int)-1;
					if(var_732_bool == 0) goto Label_1539;
					var_733_bool = (bool)0 == 0; //@nz
					if(var_733_bool == 0) goto Label_1539;
					GetScene(var_624_object);
					AddActorByType(var_625_object, "scripted", var_624_object, var_618_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
					@@var_625_object:SetScriptProperty("Material", var_617_int);
					var_609_bool = 1;
					var_625_object = 0;
					var_624_object = 0;
		}
				@@var_613_object:size(var_626_int);
				var_627_int = 0;

			Label_1546:
				var_738_bool = var_627_int < var_626_int;
				if(var_738_bool != 0) {
					@@var_613_object:get(var_628_object, var_627_int);
					ReportAttack(var_628_object);
					var_739_object = GlobalVars[2];
					@@var_739_object:in(var_629_bool, var_628_object);
					var_740_bool = var_629_bool == 0; //@nz
					if(var_740_bool != 0) {
						var_741_object = GlobalVars[3];
						@@var_741_object:add(var_628_object);
						BroadcastPlayerDamage(var_628_object, (bool)0);
					} else {
						BroadcastPlayerDamage(var_628_object, (bool)1);
				}
					var_746_int = var_607_string + "_phase2";
					PlayAnimation(var_746_int);
					WaitForAnimEnd();
					var_747_bool = var_0_bool;
					if(var_747_bool != 0) {
						return 48;
					}
					func_1332();
					var_613_object = 0;
					var_755_bool = 0;
					func_1601(var_755_bool);
					if(var_755_bool == 1) goto Label_1367;
				}
				var_628_object = 0;
				var_627_int = var_627_int + (int)1;
				goto Label_1546;
			}
		}
	Label_1539:
		var_616_object = 0;
		var_614_int = var_614_int + (int)1;
		goto Label_1445;
	}
	return 48;
	
}


func_3440(var_380_float)
{
	var_381_bool = 0; var_382_int = 0; var_383_bool = 0; var_384_int = 0;
	GetWeaponProperty(var_383_bool, "durability", var_384_int);
	var_386_bool = var_383_bool;
	if(var_386_bool != 0) {
		var_380_float = var_384_int / (float)100.0;
	} else {
		var_380_float = 1.0;
	}
	return 4;
	
}


func_3451(var_412_int)
{
	var_414_bool = 0; var_415_int = 0; var_416_bool = 0; var_417_int = 0;
	GetWeaponProperty(var_416_bool, "durability", var_417_int);
	var_419_bool = var_416_bool == 0; //@nz
	if(var_419_bool != 0) {
		var_417_int = 100;
	}
	var_420_int = 0; var_421_int = 0; var_422_int = 0; var_423_int = 0;
	var_421_int = var_417_int - var_412_int;
	func_3031(var_420_int, var_421_int, (int)0, (int)100);
	var_420_int = var_417_int;
	SetWeaponProperty(var_416_bool, "durability", var_417_int);
	return 4;
}


func_3469(var_377_float, var_378_float)
{
	var_380_float = 0;
	func_3440(var_380_float);
	var_389_int = (int)1 - var_378_float;
	var_390_float = var_380_float * var_389_int;
	var_377_float = var_378_float + var_390_float;
	return 0;
}


func_3478(var_13_bool, var_14_int)
{
	var_15_int = 0; var_16_int = 0; var_17_int = 0; var_18_int = 0; var_19_bool = 0; var_20_bool = 0; var_21_int = 0; var_22_object = Obj(); var_23_int = 0; var_24_bool = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_bool = 0; var_32_int = 0; var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_bool = 0;
	var_37_int = 0;
	func_3186(var_37_int);
	var_42_bool = var_37_int == (int)0;
	if(var_42_bool != 0) {
		var_26_int = 0;
		GetVariable("birdMaskAchievement", var_26_int);
		var_45_bool = var_26_int == (int)0;
		if(var_45_bool != 0) {
			GetItemCount(var_27_int, (int)1);
			GetInvItemByName(var_28_int, "bird_mask");
			GetInvItemByName(var_29_int, "bird_balahon");
			var_30_bool = 0;
			var_31_bool = 0;
			var_32_int = 0;

		Label_3504:
			var_49_bool = var_32_int < var_27_int;
			if(var_49_bool != 0) {
				GetItem(var_33_object, var_32_int, (int)1);
				@@var_33_object:GetItemID(var_34_int);
				var_51_bool = var_34_int == var_28_int;
				if(var_51_bool != 0) {
					IsItemSelected(var_35_bool, var_32_int, (int)1);
					var_53_bool = var_35_bool;
					if(var_53_bool != 0) {
						var_30_bool = 1;
					}
				} else {
					var_55_bool = var_34_int == var_29_int;
					if(var_55_bool == 0) goto Label_3528;
					IsItemSelected(var_36_bool, var_32_int, (int)1);
					var_57_bool = var_36_bool;
					if(var_57_bool == 0) goto Label_3528;
			}
				var_58_bool = 0;
				var_58_bool = 0;
				var_59_bool = var_30_bool;
				if(var_59_bool != 0) {
					var_60_bool = (bool)1;
					if(var_60_bool != 0) {
						var_58_bool = 1;
					}
				}
				if(var_58_bool != 0) {
					SetVariable("birdMaskAchievement", (int)1);
					UnlockAchievement("ACHIEVEMENT_THEY");
				}
		}
	}
		var_64_bool = 0; var_65_int = 0;
		var_14_int = var_65_int;
		func_3192(var_64_bool, var_65_int);
		var_64_bool = var_13_bool;
		return 22;
	}
Label_3528:
	var_33_object = 0;
	var_32_int = var_32_int + (int)1;
	goto Label_3504;
	
}


func_2970(var_130_bool, var_131_object)
{
	var_132_bool = 0; var_133_bool = 0;
	@@var_131_object:IsDead(var_133_bool);
	var_133_bool = var_130_bool;
	return 2;
}


func_2975(var_85_string, var_86_int)
{
	var_88_bool = var_86_int == (int)1;
	if(var_88_bool != 0) {
		var_85_string = "wood";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	var_90_bool = var_86_int == (int)2;
	if(var_90_bool != 0) {
		var_85_string = "metal";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	var_92_bool = var_86_int == (int)3;
	if(var_92_bool != 0) {
		var_85_string = "ground";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	var_94_bool = var_86_int == (int)4;
	if(var_94_bool != 0) {
		var_85_string = "water";
		return 0;
	EMIT "GOTO 0xbbd";
	}
	var_96_bool = var_86_int == (int)5;
	if(var_96_bool != 0) {
		var_85_string = "carpet";
		return 0;
	}
	var_85_string = "stone";
	return 0;
}


func_426(var_136_float, var_137_bool)
{
	var_138_float = 0; var_139_bool = 0;
	var_137_bool = var_139_bool;
	func_188(var_138_float, var_139_bool);
	var_138_float = var_136_float;
	return 0;
}


func_1964()
{
	return 0;
}


func_1965(var_872_bool)
{
	var_872_bool = 0;
	return 0;
}


func_1967(var_920_bool)
{
	var_921_bool = 0; var_922_bool = 0;
	IsShooting(var_922_bool);
	var_922_bool = var_920_bool;
	return 2;
}


func_1972()
{
	func_1996();
	var_47_bool = 0; var_48_string = ""; var_49_int = 0;
	func_3404(var_47_bool, "revolver_ammo", (int)6);
	if(var_47_bool != 0) {
		var_50_string = "";
		func_1994(var_50_string);
		var_52_int = var_50_string + "_reload";
		PlaySound(var_52_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_444()
{
	return 0;
}


func_445(var_70_bool)
{
	var_70_bool = 0;
	return 0;
}


func_3007(var_26_object)
{
	var_27_object = Obj(); var_28_object = Obj();
	self(var_28_object);
	var_28_object = var_26_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_447(var_225_bool)
{
	var_226_bool = 0; var_227_bool = 0;
	IsShooting(var_227_bool);
	var_227_bool = var_225_bool;
	return 2;
}


func_2495(var_63_string)
{
	var_65_bool = var_63_string == "empty";
	if(var_65_bool != 0) {
		TaskCall(3);
		func_465(var_66_bool);
		TaskReturn();
	} else {
		var_285_bool = var_63_string == "scalpel";
		if(var_285_bool != 0) {
			TaskCall(4);
			func_753(var_286_bool);
			TaskReturn();
			goto Label_2558;
		}
		var_444_bool = var_63_string == "knife";
		if(var_444_bool != 0) {
			TaskCall(5);
			func_1039(var_445_bool);
			TaskReturn();
			goto Label_2558;
		}
		var_580_bool = var_63_string == "rifle";
		if(var_580_bool != 0) {
			TaskCall(6);
			func_1365(var_581_bool);
			TaskReturn();
			goto Label_2558;
		}
		var_759_bool = var_63_string == "revolver";
		if(var_759_bool != 0) {
			TaskCall(8);
			func_1740(var_760_bool);
			TaskReturn();
			goto Label_2558;
		}
		var_924_bool = var_63_string == "samopal";
		if(var_924_bool != 0) {
			TaskCall(10);
			func_2106(var_925_bool);
			TaskReturn();
			goto Label_2558;
		}
		var_1089_bool = var_63_string == "lockpick";
		if(var_1089_bool == 0) goto Label_2558;
		TaskCall(12);
		func_2363(var_1090_bool, var_1091_bool);
		TaskReturn();
	}
Label_2558:
	return 0;
	
}


func_452(var_166_string)
{
	var_166_string = "punch";
	return 0;
}


func_3013(var_66_float, var_67_float, var_68_float)
{
	var_71_bool = var_67_float < var_68_float;
	if(var_71_bool != 0) {
		var_67_float = var_66_float;
	} else {
		var_68_float = var_66_float;
	}
	return 0;
	
}


func_454(var_184_float, var_185_bool)
{
	var_186_bool = var_185_bool;
	if(var_186_bool != 0) {
		var_184_float = 0.30000001192092896;
	} else {
		var_184_float = 0.20000000298023224;
	}
	return 0;
	
}


func_1994(var_50_string)
{
	var_50_string = "revolver";
	return 0;
}


func_1996()
{
	return 0;
}


func_461(var_194_int)
{
	var_194_int = 0;
	return 0;
}


func_1997(var_974_bool)
{
	var_975_bool = 0; var_976_bool = 0; var_977_bool = 0; var_978_bool = 0;
	GetWeaponProperty(var_977_bool, "ammo", var_978_bool);
	var_980_bool = 0;
	var_980_bool = 1;
	var_981_bool = var_977_bool == 0; //@nz
	if(var_981_bool != 1) {
		var_982_bool = var_978_bool == 0; //@nz
		if(var_982_bool != 1) {
			var_980_bool = 0;
		}
	}
	if(var_980_bool != 0) {
		var_983_bool = 0; var_984_string = ""; var_985_int = 0;
		func_3404(var_983_bool, "samopal_ammo", (int)2);
		var_986_bool = var_983_bool == 0; //@nz
		if(var_986_bool != 0) {
			var_987_string = "";
			func_2096(var_987_string);
			var_989_int = var_987_string + "_noammo";
			PlaySound(var_989_int);
			PlayAnimation("noammo");
			WaitForAnimEnd();
			var_974_bool = 0;
			return 4;
		}
	}
	var_974_bool = 1;
	return 4;
}


func_463(var_263_int)
{
	var_263_int = 0;
	return 0;
}


func_3020(var_76_float, var_77_float, var_78_float, var_79_float)
{
	var_80_bool = var_77_float < var_78_float;
	if(var_80_bool != 0) {
		var_78_float = var_76_float;
		return 0;
	}
	var_81_bool = var_77_float > var_79_float;
	if(var_81_bool != 0) {
		var_79_float = var_76_float;
		return 0;
	}
	var_77_float = var_76_float;
	return 0;
}


func_465(var_0_bool)
{
	var_67_int = 0; var_68_string = ""; var_69_bool = 0; var_70_string = ""; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_object = Obj(); var_74_int = 0; var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_string = ""; var_80_int = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_float = 0; var_84_float = 0; var_85_int = 0; var_86_bool = 0; var_87_int = 0; var_88_string = ""; var_89_bool = 0; var_90_string = ""; var_91_float = 0; var_92_cvector = CVector(0,0,0); var_93_object = Obj(); var_94_int = 0; var_95_cvector = CVector(0,0,0); var_96_bool = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_string = ""; var_100_int = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_float = 0; var_104_float = 0; var_105_int = 0; var_106_bool = 0;
	var_0_bool = false;
	
Label_468:
	(int)0 = (int)0 + (int)1;
	var_108_string = "";
	func_711(var_108_string);
	var_110_int = var_108_string + "attack";
	var_111_int = var_110_int + var_87_int;
	var_88_string = var_111_int + "_phase1";
	HasAnimation(var_89_bool, var_88_string);
	var_113_bool = var_89_bool == 0; //@nz
	if(var_113_bool != 0) {
	} else {
							goto Label_468;
	}
	var_87_int = var_87_int + (int)-1;
	var_115_bool = var_87_int == 0; //@nz
	if(var_115_bool != 0) {
		return 40;
	}
Label_489:
	GetCurrentWeapon(var_90_string);
	GetAttackDistance(var_91_float);
	GetDirection(var_92_cvector);
	var_96_bool = 0;
	var_116_bool = 0;
	func_709(var_116_bool);
	if(var_116_bool != 0) {
		GetVictimMaterialExact(var_93_object, var_94_int, var_95_cvector, var_92_cvector, var_91_float);
		var_117_bool = 0;
		var_117_bool = 0;
		var_118_bool = 0;
		var_118_bool = 0;
		var_119_bool = 0;
		var_119_bool = 0;
		var_120_bool = var_93_object != 0; //@nn
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj(); var_123_string = "";
			var_93_object = var_122_object;
			func_2856(var_121_bool, var_122_object, "health");
			if(var_121_bool != 0) {
				var_119_bool = 1;
			}
		}
		if(var_119_bool != 0) {
			var_130_bool = 0; var_131_object = Obj();
			var_93_object = var_131_object;
			func_2970(var_130_bool, var_131_object);
			var_134_bool = var_130_bool == 0; //@nz
			if(var_134_bool != 0) {
				var_118_bool = 1;
			}
		}
		if(var_118_bool != 0) {
			var_136_bool = var_94_int == (int)4;
			if(var_136_bool != 0) {
				var_117_bool = 1;
			}
		}
		if(var_117_bool != 0) {
			var_139_bool = IsFuncExist(var_93_object, "GetDirection", (int)1);
			if(var_139_bool != 0) {
				GetDirection(var_97_cvector);
				@@var_93_object:GetDirection(var_98_cvector);
				var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0);
				var_97_cvector = var_141_cvector;
				var_98_cvector = var_142_cvector;
				func_3073(var_140_float, var_141_cvector, var_142_cvector);
				var_96_bool = var_140_float >= (float)0.4999999701976776;
			}
		}
	}
	var_165_bool = var_96_bool;
	if(var_165_bool != 0) {
		var_99_string = "battack";
		var_166_string = "";
		func_452(var_166_string);
		var_168_int = var_166_string + "_back";
		PlaySound(var_168_int);
	} else {
						irand(var_100_int, var_87_int);
						var_275_string = "";
						func_711(var_275_string);
						var_277_int = var_275_string + "attack";
						var_279_int = var_100_int + (int)1;
						var_99_string = var_277_int + var_279_int;
						var_280_string = "";
						func_452(var_280_string);
						var_282_int = var_100_int + (int)1;
						var_283_int = var_280_string + var_282_int;
						PlaySound(var_283_int);

	}
	SetAttackState((bool)1);
	var_171_int = var_99_string + "_phase1";
	PlayAnimation(var_171_int);
	WaitForAnimEnd();
	var_172_bool = var_0_bool;
	if(var_172_bool != 0) {
		return 40;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_91_float);
	GetDirection(var_92_cvector);
	GetVictimMaterialExact(var_93_object, var_94_int, var_95_cvector, var_92_cvector, var_91_float);
	var_174_bool = var_93_object != 0; //@nn
	if(var_174_bool != 0) {
		var_177_bool = IsFuncExist(var_93_object, "GetDirection", (int)1);
		if(var_177_bool != 0) {
			GetDirection(var_101_cvector);
			@@var_93_object:GetDirection(var_102_cvector);
			var_178_float = 0; var_179_cvector = CVector(0,0,0); var_180_cvector = CVector(0,0,0);
			var_101_cvector = var_179_cvector;
			var_102_cvector = var_180_cvector;
			func_3073(var_178_float, var_179_cvector, var_180_cvector);
			var_96_bool = var_178_float >= (float)0.4999999701976776;
		} else {
					var_96_bool = 0;

		}
		var_182_float = 0; var_183_bool = 0;
		var_96_bool = var_183_bool;
		func_690(var_182_float, var_183_bool);
		var_182_float = var_103_float;
		var_188_bool = var_94_int == (int)4;
		if(var_188_bool != 0) {
			var_103_float = var_103_float * (float)3.0;
		}
		var_190_float = 0; var_191_object = Obj(); var_192_float = 0; var_193_int = 0;
		var_93_object = var_191_object;
		var_103_float = var_192_float;
		func_461((int)0);
		var_194_int = var_193_int;
		func_2897(var_190_float, var_191_object, var_192_float, var_193_int);
		var_190_float = var_104_float;
		var_255_float = var_104_float;
		if(var_255_float != 0) {
			irand(var_105_int, (int)2);
			var_257_string = "";
			func_452(var_257_string);
			var_259_int = var_257_string + "_hit";
			var_261_int = var_105_int + (int)1;
			var_262_int = var_259_int + var_261_int;
			PlaySound(var_262_int);
			ReportAttack(var_93_object);
			var_263_int = 0;
			func_463(var_263_int);
			ReportHit(var_93_object, var_263_int, var_104_float, var_103_float, var_95_cvector, var_92_cvector);
			var_264_object = GlobalVars[2];
			@@var_264_object:in(var_106_bool, var_93_object);
			var_265_bool = var_106_bool == 0; //@nz
			if(var_265_bool != 0) {
				var_266_object = GlobalVars[3];
				@@var_266_object:add(var_93_object);
				BroadcastPlayerDamage(var_93_object, (bool)0);
			} else {
				BroadcastPlayerDamage(var_93_object, (bool)1);

			}
		}
		func_708();
	}
	var_269_int = var_99_string + "_phase2";
	PlayAnimation(var_269_int);
	WaitForAnimEnd();
	var_270_bool = var_0_bool;
	if(var_270_bool != 0) {
		return 40;
	}
	var_93_object = 0;
	var_271_bool = 0;
	func_713(var_271_bool);
	if(var_271_bool == 1) goto Label_489;
	return 40;
	
}


func_3031(var_420_int, var_421_int, var_422_int, var_423_int)
{
	var_424_bool = var_421_int < var_422_int;
	if(var_424_bool != 0) {
		var_422_int = var_420_int;
		return 0;
	}
	var_425_bool = var_421_int > var_423_int;
	if(var_425_bool != 0) {
		var_423_int = var_420_int;
		return 0;
	}
	var_421_int = var_420_int;
	return 0;
}


func_989(var_336_bool)
{
	var_336_bool = 0;
	return 0;
}


func_991(var_328_string)
{
	var_328_string = "";
	return 0;
}


func_993(var_430_bool)
{
	var_431_bool = 0; var_432_bool = 0;
	IsShooting(var_432_bool);
	var_432_bool = var_430_bool;
	return 2;
}


func_3042(var_37_object)
{
	var_38_object = Obj(); var_39_object = Obj();
	CreateObjectSet(var_39_object);
	var_39_object = var_37_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_998(var_495_bool)
{
	var_495_bool = 1;
	return 0;
}


func_1000(var_516_string)
{
	var_516_string = "knife";
	return 0;
}


func_3048(var_699_object)
{
	var_700_object = Obj(); var_701_object = Obj();
	CreateObjectVector(var_701_object);
	var_701_object = var_699_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1002(var_534_float, var_535_bool)
{
	var_536_bool = var_535_bool;
	if(var_536_bool != 0) {
		var_534_float = 0.699999988079071;
	} else {
		var_534_float = 0.4000000059604645;
	}
	return 0;
	
}


func_3054(var_143_float, var_144_cvector, var_145_cvector)
{
	var_146_float = GetByIndex(var_144_cvector, 0);
	var_147_float = GetByIndex(var_145_cvector, 0);
	var_148_float = var_146_float * var_147_float;
	var_149_float = GetByIndex(var_144_cvector, 2);
	var_150_float = GetByIndex(var_145_cvector, 2);
	var_151_float = var_149_float * var_150_float;
	var_143_float = var_148_float + var_151_float;
	return 0;
}


func_2032(var_1011_int)
{
	var_1011_int = 5;
	return 0;
}


func_1009(var_539_float)
{
	var_539_float = 0.5;
	return 0;
}


func_2034(var_1016_float)
{
	var_1016_float = 0.039269909262657166;
	return 0;
}


func_1011(var_562_int)
{
	var_562_int = 4;
	return 0;
}


func_2036()
{
	var_993_bool = 0; var_994_int = 0; var_995_bool = 0; var_996_int = 0;
	GetWeaponProperty(var_995_bool, "ammo", var_996_int);
	var_1000_int = var_996_int - (int)1;
	SetWeaponProperty(var_995_bool, "ammo", var_1000_int);
	func_3870();
	return 4;
}


func_1013(var_547_int)
{
	var_547_int = 0;
	return 0;
}


func_1015(var_556_int)
{
	var_556_int = 1;
	return 0;
}


func_3063(var_152_float, var_153_cvector)
{
	var_154_float = GetByIndex(var_153_cvector, 0);
	var_155_float = GetByIndex(var_153_cvector, 0);
	var_156_float = var_154_float * var_155_float;
	var_157_float = GetByIndex(var_153_cvector, 2);
	var_158_float = GetByIndex(var_153_cvector, 2);
	var_159_float = var_157_float * var_158_float;
	var_160_int = var_156_float + var_159_float;
	var_152_float = sqrt(var_160_int);
	return 0;
}


func_1017(var_532_float, var_533_bool)
{
	var_534_float = 0; var_535_bool = 0;
	var_533_bool = var_535_bool;
	func_1002(var_534_float, var_535_bool);
	var_537_float = 0; var_538_float = 0;
	func_1009((float)0);
	var_539_float = var_538_float;
	func_3469(var_537_float, var_538_float);
	var_532_float = var_534_float * var_537_float;
	return 0;
}


func_2559(var_17_string)
{
	var_19_bool = var_17_string == "rifle";
	if(var_19_bool != 0) {
		TaskCall(7);
		func_1606();
		TaskReturn();
	} else {
		var_46_bool = var_17_string == "revolver";
		if(var_46_bool != 0) {
			TaskCall(9);
			func_1972();
			TaskReturn();
			goto Label_2586;
		}
		var_55_bool = var_17_string == "samopal";
		if(var_55_bool == 0) goto Label_2586;
		TaskCall(11);
		func_2338();
		TaskReturn();
	}
Label_2586:
	return 0;
	
}


