// @IMPORTS: IsWeaponHolstered/1,SetWeaponHolster/1,PlayAnimation/1,WaitForAnimEnd/0,IsAltShooting/1,StopAnimation/0,HasAnimation/2,GetCurrentWeapon/1,irand/2,PlaySound/1,SetAttackState/1,GetAttackDistance/1,GetVictim/2,GetDirection/1,ReportAttack/1,ReportHit/4,BroadcastPlayerDamage/1,IsShooting/1,GetWeaponProperty/3,SetWeaponProperty/3,RandVecCone3D/3,GetVictimMaterial/4,GetScene/1,AddActorByType/6,AddActorByType/4,SetTimer/2,KillTimer/1,RemoveActor/1,RemoveAttachPoint/1,CreateAttachPoint/2,GetInvItemByName/2,RemoveItemByType/3,GetPosition/1,GetEyesHeight/1,SelectAnyItemByID/3,SetHandsItem/1,GetPlayerSelectedObject/1,GetWeaponItem/1,SelectItem/3,RemoveItem/3,HasProperty/2,SetProperty/2,ApplyEffect/1,GetProperty/2,IsWalking/1,Sleep/1,self/1,CreateObjectSet/1,GetItemCountOfType/2,GetGroundMaterial/2,IsExistingSound/2,IsDead/1,SetDeathState/0,GetMainOutdoorScene/1,AddBlankActor/4,KillTimer/2,ModNoise/1,SignalDeath/1,Trace/1,Inventory/0,GetActiveScene/1,ShowMap/1,Diary/0,ShowMessage/0,ShowPlayerStats/0,IsFlashlightOn/1,SwitchFlashlight/1,IsVisirOn/1,SwitchVisir/1,IsOverrideActive/1,ShowWindow/2,rand/3
// @STRINGS: W:unholster|W:block|W:armor_phys|W:walkblock|W:unblock|W:hitblock|W:punch|W:attack|W:_phase1|W:GetDirection|A:GetDirection|W:_hit|W:_phase2|W:scalpel|W:hammer|W:knife|W:trost|W:ammo|W:rifle_ammo|W:noammo|W:_reload|W:rifle|W:attack1|W:_shot|A:add|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|A:iterator|A:Next|W:revolver_ammo|W:revolver|W:samopal_ammo|W:samopal|W:flame|A:Attach|A:SetLength|A:GetActualLength|A:Intersect|W:disease|A:GetProperty|A:SetProperty|W:fire|W:ognemet_ammo|W:player_grenade.xml|W:Owner|W:StartVelocity|W:DamageAmount|W:DamageType|W:bottle_weapon|W:attack2|W:aunholster|W:use_begin|W:lp|W:locked|W:uses|W:use_success|W:use_fail|W:empty|W:ognemet|W:bottle|W:lockpick|W:effects|W:player_disease.bin|W:player_stat.bin|W:player_hit.bin|W:player_head.bin|W:player_flashlight.bin|W:player_visir.bin|W:health|W:walk|W:idle|W:HasProperty|A:HasProperty|W:armor|W:armor_|W:wood|W:metal|W:ground|W:stone|W:kerosene|W:durability|W:step_|W:player_death|W:play_death_danko.bin|W:die|A:in|W:reputation|W:Can't find main outdoor oscene|A:GetMap|W:Can't find map|A:GetName|W:pt_gmap_|A:GetLocator|W:FIXME: No map locator for scene : |A:SetMapParams|W:flashlight_off|W:flashlight_on|W:flashlight_nofuel|W:visir|W:vcharge|W:people.xml
// @GLOBALS: 0:string:,1:object:
// @RUN_OP: 0x9a3
// @RUN_TASK: 13
// @TASK_0: vars= params=0
// @EVENT_7: op=0x17 vars=int
// @TASK_1: vars=bool,bool params=1
// @EVENT_37: op=0x62 vars=
// @EVENT_18: op=0x67 vars=int
// @EVENT_22: op=0x76 vars=object,int,float,float
// @TASK_2: vars=bool params=0
// @EVENT_18: op=0x114 vars=int
// @EVENT_7: op=0x11f vars=int
// @TASK_3: vars=bool params=0
// @EVENT_18: op=0x1de vars=int
// @EVENT_7: op=0x1e9 vars=int
// @TASK_4: vars=bool params=0
// @EVENT_18: op=0x2a7 vars=int
// @EVENT_7: op=0x2b2 vars=int
// @TASK_5: vars=bool params=0
// @EVENT_18: op=0x370 vars=int
// @EVENT_7: op=0x37b vars=int
// @TASK_6: vars=bool params=0
// @EVENT_18: op=0x439 vars=int
// @EVENT_7: op=0x444 vars=int
// @TASK_7: vars=bool params=0
// @EVENT_18: op=0x528 vars=int
// @EVENT_7: op=0x533 vars=int
// @TASK_8: vars=bool params=0
// @EVENT_18: op=0x628 vars=int
// @EVENT_7: op=0x633 vars=int
// @TASK_9: vars=bool params=0
// @EVENT_18: op=0x728 vars=int
// @EVENT_7: op=0x733 vars=int
// @TASK_10: vars=object,bool,bool params=0
// @EVENT_32: op=0x79a vars=
// @EVENT_18: op=0x7a2 vars=int
// @EVENT_13: op=0x7ad vars=
// @EVENT_14: op=0x7b6 vars=
// @EVENT_7: op=0x7bf vars=int
// @TASK_11: vars=bool params=0
// @EVENT_18: op=0x8bb vars=int
// @TASK_12: vars=bool,bool params=0
// @EVENT_32: op=0x928 vars=
// @TASK_13: vars= params=0
// @EVENT_13: op=0x9e5 vars=
// @EVENT_36: op=0x9fe vars=
// @EVENT_15: op=0xa17 vars=
// @EVENT_7: op=0xa23 vars=int
// @STANDALONE_EVENT_26: op=0xbe5 vars=string
// @STANDALONE_EVENT_16: op=0xbed vars=object,string
// @STANDALONE_EVENT_41: op=0xbfa vars=object
// @STANDALONE_EVENT_31: op=0xbff vars=object,float
// @STANDALONE_EVENT_19: op=0xc11 vars=
// @STANDALONE_EVENT_20: op=0xc18 vars=
// @STANDALONE_EVENT_21: op=0xc1f vars=
// @STANDALONE_EVENT_17: op=0xc26 vars=object
// @STANDALONE_EVENT_39: op=0xc28 vars=float
// @STANDALONE_EVENT_18: op=0xc43 vars=int
// @PE: 0x17,0x26,0x67,0x76,0x7f,0x10d,0x114,0x11f,0x136,0x145,0x1de,0x1e9,0x1ff,0x20e,0x2a7,0x2b2,0x2c8,0x2d7,0x370,0x37b,0x391,0x3a0,0x439,0x444,0x528,0x533,0x628,0x633,0x728,0x733,0x7a2,0x7bf,0x8bb,0x934,0x998,0xa51,0xabf,0xad9,0xae0,0xaeb,0xafc,0xb05,0xb0f,0xb5c,0xbe5,0xbfa,0xc26

task_0_event_7(var_0_int, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_37;
		func_3038();
	}
Label_37:
	return 0;
	
}


task_1_event_37(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = var_1_bool;
	if(var_16_bool != 0) {
		StopAnimation();
	}
	return 0;
}


task_1_event_18(var_0_bool, var_1_bool, var_2_int, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
		var_19_bool = var_1_bool;
		if(var_19_bool != 0) {
			StopAnimation();
		}
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_1_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_bool, var_12_bool, var_13_bool, var_14_object, var_15_bool, var_16_bool, var_17_bool, var_18_bool, var_19_bool)
{
	var_20_bool = var_1_bool;
	if(var_20_bool != 0) {
		PlayAnimation("hitblock");
	}
	return 0;
}


task_2_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_2_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_301;
		func_3038();
	}
Label_301:
	return 0;
	
}


task_3_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_int, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_503;
		func_3038();
	}
Label_503:
	return 0;
	
}


task_4_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_int, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_704;
		func_3038();
	}
Label_704:
	return 0;
	
}


task_5_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_int, var_7_bool, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_905;
		func_3038();
	}
Label_905:
	return 0;
	
}


task_6_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_int, var_8_bool, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_1106;
		func_3038();
	}
Label_1106:
	return 0;
	
}


task_7_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_7_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_int, var_9_bool, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_1345;
		func_3038();
	}
Label_1345:
	return 0;
	
}


task_8_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_8_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_1601;
		func_3038();
	}
Label_1601:
	return 0;
	
}


task_9_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_int, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_9_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_int, var_11_object, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool == 0) goto Label_1857;
		func_3038();
	}
Label_1857:
	return 0;
	
}


task_10_event_32(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = var_0_bool != 0; //@nn
	if(var_16_bool != 0) {
		RemoveActor(var_0_bool);
	}
	RemoveAttachPoint("flame");
	return 0;
}


task_10_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_int, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_2_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_10_event_13(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0;
	func_2127(var_16_bool);
	if(var_16_bool != 0) {
		var_1_bool = false;
		@@@var_0_bool:SetLength((float)0.8333333134651184);
	}
	return 0;
}


task_10_event_14(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_1978(var_14_bool, var_15_bool);
	return 0;
}


task_10_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_int, var_14_bool, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		func_3034();
	} else {
		var_67_bool = var_16_bool == (int)11;
		if(var_67_bool != 0) {
			func_3038();
			goto Label_2004;
		}
		var_74_bool = var_16_bool == (int)20;
		if(var_74_bool == 0) goto Label_2004;
		func_2005(var_15_bool, var_16_bool);
	}
Label_2004:
	return 0;
	
}


task_11_event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_int, var_15_bool, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_0_bool = true;
	} else {
		var_16_bool = (int)0;
		func_3139();
	}
	return 0;
	
}


task_12_event_32(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0;
	var_16_bool = 0;
	var_17_bool = var_0_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_18_bool = var_1_bool;
		if(var_18_bool != 0) {
			var_16_bool = 1;
		}
	}
	if(var_16_bool != 0) {
		SetHandsItem((int)-1);
	}
	return 0;
}


task_13_event_13(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_bool, var_17_string, var_18_bool, var_19_bool, var_20_string, var_21_bool)
{
	var_55_bool = 0; var_56_string = ""; var_57_bool = 0; var_58_bool = 0; var_59_string = ""; var_60_bool = 0;
	IsWeaponHolstered(var_58_bool);
	var_61_bool = var_58_bool == 0; //@nz
	if(var_61_bool != 0) {
		func_2637();
		GetCurrentWeapon(var_59_string);
		var_62_string = "";
		var_59_string = var_62_string;
		func_2356(var_62_string);
		func_2633();
		IsAltShooting(var_60_bool);
		var_1089_bool = var_60_bool;
		if(var_1089_bool != 0) {
			func_2558();
		}
	}
	return 6;
}


task_13_event_36(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0; var_17_string = ""; var_18_bool = 0; var_19_bool = 0; var_20_string = ""; var_21_bool = 0;
	IsWeaponHolstered(var_19_bool);
	var_22_bool = var_19_bool == 0; //@nz
	if(var_22_bool != 0) {
		func_2637();
		GetCurrentWeapon(var_20_string);
		var_24_string = "";
		var_20_string = var_24_string;
		func_2456(var_24_string);
		func_2633();
		IsShooting(var_21_bool);
		var_54_bool = var_21_bool;
		if(var_54_bool != 0) {
			func_2533();
		}
	}
	return 6;
}


task_13_event_15(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_2637();
	TaskCall(0);
	func_0();
	TaskReturn();
	func_2633();
	return 0;
}


task_13_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_int)
{
	var_17_bool = 0; var_18_int = 0; var_19_bool = 0; var_20_int = 0;
	var_22_bool = var_16_int == (int)10;
	if(var_22_bool != 0) {
		func_3034();
		return 4;
	EMIT "GOTO 0xa33";
	}
	var_71_bool = var_16_int == (int)11;
	if(var_71_bool != 0) {
		func_3038();
		return 4;
	}
	func_2637();
	IsWeaponHolstered(var_19_bool);
	var_78_bool = var_19_bool == 0; //@nz
	if(var_78_bool != 0) {
		irand(var_20_int, (int)2);
		var_82_int = var_20_int + (int)1;
		var_83_int = "idle" + var_82_int;
		PlayAnimation(var_83_int);
		WaitForAnimEnd();
	}
	func_2633();
	return 4;
}


event_26(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_string)
{
	var_18_bool = var_16_string == "die";
	if(var_18_bool != 0) {
		func_2976();
	}
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0;
	var_21_bool = var_17_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_19_float);
		var_24_bool = var_19_float <= (int)0;
		if(var_24_bool != 0) {
			SignalDeath(var_16_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object)
{
	func_2976();
	return 0;
}


event_31(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object, var_17_float)
{
	var_18_bool = 0; var_19_bool = 0;
	var_20_object = GlobalVars[1];
	@@var_20_object:in(var_19_bool, var_16_object);
	var_21_bool = var_19_bool;
	if(var_21_bool != 0) {
		return 2;
	}
	var_22_object = GlobalVars[1];
	@@var_22_object:add(var_16_object);
	var_23_bool = 0; var_24_string = ""; var_25_float = 0; var_26_float = 0; var_27_float = 0;
	var_17_float = var_25_float;
	func_2668(var_23_bool, "reputation", var_25_float, (float)0, (float)1);
	return 2;
}


event_19(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_3281();
	func_3002();
	return 0;
}


event_20(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_3023();
	func_2992();
	return 0;
}


event_21(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	func_3013();
	func_3002();
	return 0;
}


event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_object)
{
	return 0;
}


event_39(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_float)
{
	var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_float = 0;
	var_22_bool = var_16_float > (float)770.0;
	if(var_22_bool != 0) {
		Trace(var_16_float);
		var_24_int = var_16_float - (float)770.0;
		var_19_float = var_24_int * (float)0.003499999875202775;
		var_26_float = 0; var_27_object = Obj(); var_28_float = 0; var_29_int = 0;
		func_2771(Obj());
		var_30_object = var_27_object;
		var_19_float = var_28_float;
		func_2687(var_26_float, var_27_object, var_28_float, (int)0);
		var_26_float = var_20_float;
		var_85_object = Obj();
		func_2771(var_85_object);
		ReportHit(var_85_object, (int)0, var_20_float, var_19_float);
	}
	return 4;
}


event_18(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool, var_16_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_bool = 0; var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0;
	var_42_bool = var_16_int == (int)0;
	if(var_42_bool != 0) {
		Inventory();
	} else {
		var_44_bool = var_16_int == (int)1;
		if(var_44_bool != 0) {
			GetMainOutdoorScene(var_29_object);
			GetActiveScene(var_30_object);
			var_45_bool = var_29_object == 0; //@ne
			if(var_45_bool != 0) {
				Trace("Can't find main outdoor oscene");
				return 24;
			}
			@@var_29_object:GetMap(var_31_object);
			var_47_bool = var_31_object == 0; //@ne
			if(var_47_bool != 0) {
				Trace("Can't find map");
				return 24;
			}
			var_49_bool = var_29_object == var_30_object;
			if(var_49_bool != 0) {
				GetPosition(var_32_cvector);
			} else {
				@@var_30_object:GetName(var_33_string);
				var_53_int = "pt_gmap_" + var_33_string;
				@@var_29_object:GetLocator(var_53_int, var_34_bool, var_32_cvector, var_35_cvector);
				var_54_bool = var_34_bool == 0; //@nz
				if(var_54_bool == 0) goto Label_3185;
				var_56_int = "FIXME: No map locator for scene : " + var_33_string;
				Trace(var_56_int);
				var_32_cvector = CVector(0.0, 0.0, 0.0);
		}
			var_58_bool = var_16_int == (int)2;
			if(var_58_bool != 0) {
				Diary();
				goto Label_3280;
			}
			var_60_bool = var_16_int == (int)3;
			if(var_60_bool != 0) {
				ShowMessage();
				goto Label_3280;
			}
			var_62_bool = var_16_int == (int)4;
			if(var_62_bool != 0) {
				ShowPlayerStats();
				goto Label_3280;
			}
			var_64_bool = var_16_int == (int)5;
			if(var_64_bool != 0) {
				IsFlashlightOn(var_36_bool);
				var_65_bool = var_36_bool;
				if(var_65_bool != 0) {
					SwitchFlashlight((bool)0);
					PlaySound("flashlight_off");
				} else {
					var_68_bool = 0;
					func_2848(var_68_bool);
					if(var_68_bool != 0) {
						SwitchFlashlight((bool)1);
						PlaySound("flashlight_on");
						goto Label_3241;
					}
					PlaySound("flashlight_nofuel");
			}
				var_76_bool = var_16_int == (int)6;
				if(var_76_bool != 0) {
					IsVisirOn(var_37_bool);
					var_77_bool = var_37_bool;
					if(var_77_bool != 0) {
						SwitchVisir((bool)0);
					} else {
						GetProperty("visir", var_38_int);
						var_80_int = var_38_int;
						if(var_80_int == 0) goto Label_3268;
						GetProperty("vcharge", var_39_int);
						var_83_bool = var_39_int >= (int)10;
						if(var_83_bool == 0) goto Label_3268;
						SwitchVisir((bool)1);
						goto Label_3268;
				}
					var_86_bool = var_16_int == (int)7;
					if(var_86_bool == 0) goto Label_3280;
					IsOverrideActive(var_40_bool);
					var_87_bool = var_40_bool == 0; //@nz
					if(var_87_bool == 0) goto Label_3280;
					ShowWindow("people.xml", (bool)1);
				}
			Label_3268:
				goto Label_3280;
			}
		Label_3241:
			goto Label_3280;
		}
	Label_3185:
		var_50_float = GetByIndex(var_32_cvector, 0);
		var_51_float = GetByIndex(var_32_cvector, 2);
		@@var_31_object:SetMapParams(var_50_float, var_51_float);
		ShowMap(var_31_object);
		var_31_object = 0;
		var_30_object = 0;
		var_29_object = 0;
		goto Label_3280;
	}
Label_3280:
	return 24;
	
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_bool, var_9_bool, var_10_object, var_11_bool, var_12_bool, var_13_bool, var_14_bool, var_15_bool)
{
	var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_bool = 0;
	var_24_object = GlobalVars[1];
	func_2806(Obj());
	var_25_object = var_24_object;
	GlobalVars[1] = var_24_object;
	HasProperty("effects", var_20_bool);
	var_29_bool = var_20_bool == 0; //@nz
	if(var_29_bool != 0) {
		SetProperty("effects", (bool)1);
		ApplyEffect("player_disease.bin");
		ApplyEffect("player_stat.bin");
		ApplyEffect("player_hit.bin");
		ApplyEffect("player_head.bin");
		ApplyEffect("player_flashlight.bin");
		ApplyEffect("player_visir.bin");
	}
	func_2633();
	GetProperty("health", var_21_float);
	var_45_bool = var_21_float <= (int)0;
	if(var_45_bool != 0) {
		func_2976();
		return 8;
	}
Label_2514:
	IsWeaponHolstered(var_22_bool);
	var_55_bool = var_22_bool == 0; //@nz
	if(var_55_bool == 0) goto Label_2528;
	IsWalking(var_23_bool);
	var_56_bool = var_23_bool;
	if(var_56_bool != 0) {
		PlayAnimation("walk");
		WaitForAnimEnd();
	} else {
		Sleep((float)0.10000000149011612);
	}
	goto Label_2514;
	
}
EMIT "Return(); Pop(8)";


func_0()
{
	var_17_bool = 0; var_18_bool = 0;
	IsWeaponHolstered(var_18_bool);
	var_19_bool = var_18_bool;
	if(var_19_bool != 0) {
		SetWeaponHolster((bool)0);
		PlayAnimation("unholster");
		WaitForAnimEnd();
	} else {
		PlayAnimation("holster");
		WaitForAnimEnd();
		SetWeaponHolster((bool)1);
	}
	return 2;
	
}


func_518(var_396_float)
{
	var_396_float = 0.5;
	return 0;
}


func_520(var_412_int)
{
	var_412_int = 1;
	return 0;
}


func_522(var_401_int)
{
	var_401_int = 0;
	return 0;
}


func_524(var_410_int)
{
	var_410_int = 0;
	return 0;
}


func_526(var_389_float, var_390_bool)
{
	var_391_float = 0; var_392_bool = 0;
	var_390_bool = var_392_bool;
	func_511(var_391_float, var_392_bool);
	var_394_float = 0; var_395_float = 0;
	func_518((float)0);
	var_396_float = var_395_float;
	func_2908(var_394_float, var_395_float);
	var_389_float = var_391_float * var_394_float;
	return 0;
}


func_540()
{
	var_411_int = 0;
	func_520((int)0);
	var_412_int = var_411_int;
	func_2889(var_411_int);
	return 0;
}


func_548(var_0_bool)
{
	var_334_int = 0; var_335_string = ""; var_336_bool = 0; var_337_string = ""; var_338_int = 0; var_339_string = ""; var_340_float = 0; var_341_object = Obj(); var_342_bool = 0; var_343_cvector = CVector(0,0,0); var_344_cvector = CVector(0,0,0); var_345_float = 0; var_346_float = 0; var_347_int = 0; var_348_int = 0; var_349_string = ""; var_350_bool = 0; var_351_string = ""; var_352_int = 0; var_353_string = ""; var_354_float = 0; var_355_object = Obj(); var_356_bool = 0; var_357_cvector = CVector(0,0,0); var_358_cvector = CVector(0,0,0); var_359_float = 0; var_360_float = 0; var_361_int = 0;
	var_0_bool = false;
	
Label_551:
	(int)0 = (int)0 + (int)1;
	var_364_int = "attack" + var_348_int;
	var_349_string = var_364_int + "_phase1";
	HasAnimation(var_350_bool, var_349_string);
	var_366_bool = var_350_bool == 0; //@nz
	if(var_366_bool != 0) {
	} else {
				goto Label_551;
	}
	var_348_int = var_348_int + (int)-1;
	var_368_bool = var_348_int == 0; //@nz
	if(var_368_bool != 0) {
		return 28;
	}
Label_568:
	GetCurrentWeapon(var_351_string);
	irand(var_352_int, var_348_int);
	var_371_int = var_352_int + (int)1;
	var_353_string = "attack" + var_371_int;
	var_372_string = "";
	func_509(var_372_string);
	var_374_int = var_352_int + (int)1;
	var_375_int = var_372_string + var_374_int;
	PlaySound(var_375_int);
	SetAttackState((bool)1);
	var_378_int = var_353_string + "_phase1";
	PlayAnimation(var_378_int);
	WaitForAnimEnd();
	var_379_bool = var_0_bool;
	if(var_379_bool != 0) {
		return 28;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_354_float);
	GetVictim(var_354_float, var_355_object);
	var_381_bool = var_355_object != 0; //@nn
	if(var_381_bool != 0) {
		var_384_bool = IsFuncExist(var_355_object, "GetDirection", (int)1);
		if(var_384_bool != 0) {
			GetDirection(var_357_cvector);
			@@var_355_object:GetDirection(var_358_cvector);
			var_385_float = 0; var_386_cvector = CVector(0,0,0); var_387_cvector = CVector(0,0,0);
			var_357_cvector = var_386_cvector;
			var_358_cvector = var_387_cvector;
			func_2831(var_385_float, var_386_cvector, var_387_cvector);
			var_356_bool = var_385_float >= (float)0.4999999701976776;
		} else {
			var_356_bool = 0;

		}
		var_389_float = 0; var_390_bool = 0;
		var_356_bool = var_390_bool;
		func_526(var_389_float, var_390_bool);
		var_389_float = var_359_float;
		var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_int = 0;
		var_355_object = var_398_object;
		var_359_float = var_399_float;
		func_522((int)0);
		var_401_int = var_400_int;
		func_2687(var_397_float, var_398_object, var_399_float, var_400_int);
		var_397_float = var_360_float;
		var_402_float = var_360_float;
		if(var_402_float != 0) {
			irand(var_361_int, (int)2);
			var_404_string = "";
			func_509(var_404_string);
			var_406_int = var_404_string + "_hit";
			var_408_int = var_361_int + (int)1;
			var_409_int = var_406_int + var_408_int;
			PlaySound(var_409_int);
			ReportAttack(var_355_object);
			var_410_int = 0;
			func_524(var_410_int);
			ReportHit(var_355_object, var_410_int, var_360_float, var_359_float);
			BroadcastPlayerDamage(var_355_object);
		}
		func_540();
	}
	var_414_int = var_353_string + "_phase2";
	PlayAnimation(var_414_int);
	WaitForAnimEnd();
	var_415_bool = var_0_bool;
	if(var_415_bool != 0) {
		return 28;
	}
	var_355_object = 0;
	var_416_bool = 0;
	func_705(var_416_bool);
	if(var_416_bool == 1) goto Label_568;
	return 28;
	
}


func_38(var_0_bool, var_1_bool, var_27_float)
{
	var_0_bool = false;
	var_1_bool = false;
	
Label_41:
	PlayAnimation("block");
	WaitForAnimEnd();
	var_31_bool = var_0_bool;
	if(var_31_bool != 0) {
		return 0;
	}
	var_32_string = ""; var_33_float = 0;
	var_27_float = var_33_float;
	func_2661("armor_phys", var_33_float);
	var_1_bool = true;
	
Label_55:
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_bool = 0;
	func_93(var_38_bool);
	if(var_38_bool != 0) {
		var_41_bool = var_0_bool == 0; //@nz
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		PlayAnimation("walkblock");
		WaitForAnimEnd();
		goto Label_55;
	}
	var_1_bool = false;
	var_43_string = ""; var_44_float = 0;
	var_44_float = -var_27_float;
	func_2661("armor_phys", var_44_float);
	var_45_bool = var_0_bool;
	if(var_45_bool != 0) {
		return 0;
	}
	PlayAnimation("unblock");
	WaitForAnimEnd();
	var_47_bool = var_0_bool;
	if(var_47_bool != 0) {
		return 0;
	}
	var_48_bool = 0;
	func_93(var_48_bool);
	if(var_48_bool == 1) goto Label_41;
	return 0;
}


func_1602()
{
	return 0;
}


func_1603(var_832_bool)
{
	var_833_bool = 0; var_834_bool = 0;
	IsShooting(var_834_bool);
	var_834_bool = var_832_bool;
	return 2;
}


func_1608(var_878_bool)
{
	var_879_bool = 0; var_880_bool = 0; var_881_bool = 0; var_882_bool = 0;
	GetWeaponProperty(var_881_bool, "ammo", var_882_bool);
	var_884_bool = 0;
	var_884_bool = 1;
	var_885_bool = var_881_bool == 0; //@nz
	if(var_885_bool != 1) {
		var_886_bool = var_882_bool == 0; //@nz
		if(var_886_bool != 1) {
			var_884_bool = 0;
		}
	}
	if(var_884_bool != 0) {
		var_887_bool = 0; var_888_string = ""; var_889_int = 0;
		func_2854(var_887_bool, "samopal_ammo", (int)2);
		var_890_bool = var_887_bool == 0; //@nz
		if(var_890_bool != 0) {
			PlayAnimation("noammo");
			WaitForAnimEnd();
			var_878_bool = 0;
			return 4;
		}
	}
	var_878_bool = 1;
	return 4;
}


func_2633()
{
	func_3281();
	return 0;
}


func_2637()
{
	KillTimer((int)0);
	return 0;
}


func_2127(var_962_bool)
{
	var_963_int = 0; var_964_bool = 0; var_965_int = 0; var_966_bool = 0;
	GetInvItemByName(var_965_int, "ognemet_ammo");
	RemoveItemByType(var_966_bool, var_965_int, (int)1);
	var_966_bool = var_962_bool;
	return 4;
}


func_2641(var_60_string, var_61_int)
{
	var_63_bool = var_61_int == (int)1;
	if(var_63_bool != 0) {
		var_60_string = "fire";
		return 0;
	}
	var_60_string = "phys";
	return 0;
}


func_1107(var_592_bool)
{
	var_593_bool = 0; var_594_bool = 0;
	IsShooting(var_594_bool);
	var_594_bool = var_592_bool;
	return 2;
}


func_1112(var_638_bool)
{
	var_639_bool = 0; var_640_bool = 0; var_641_bool = 0; var_642_bool = 0;
	GetWeaponProperty(var_641_bool, "ammo", var_642_bool);
	var_644_bool = 0;
	var_644_bool = 1;
	var_645_bool = var_641_bool == 0; //@nz
	if(var_645_bool != 1) {
		var_646_bool = var_642_bool == 0; //@nz
		if(var_646_bool != 1) {
			var_644_bool = 0;
		}
	}
	if(var_644_bool != 0) {
		var_647_bool = 0; var_648_string = ""; var_649_int = 0;
		func_2854(var_647_bool, "rifle_ammo", (int)1);
		var_664_bool = var_647_bool == 0; //@nz
		if(var_664_bool != 0) {
			PlayAnimation("noammo");
			WaitForAnimEnd();
			var_638_bool = 0;
			return 4;
		}
	}
	var_638_bool = 1;
	return 4;
}


func_2136(var_98_float)
{
	var_98_float = 0.06499999761581421;
	return 0;
}


func_2138(var_110_int)
{
	var_110_int = 1;
	return 0;
}


func_2649(var_45_bool, var_46_object, var_47_string)
{
	var_48_bool = 0; var_49_bool = 0;
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", (int)2);
	var_53_bool = var_52_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_45_bool = 0;
		return 2;
	}
	@@var_46_object:HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
	return 2;
}


func_2140(var_176_int)
{
	var_176_int = 4;
	return 0;
}


func_93(var_38_bool)
{
	var_39_bool = 0; var_40_bool = 0;
	IsAltShooting(var_40_bool);
	var_40_bool = var_38_bool;
	return 2;
}


func_2142(var_992_bool)
{
	var_993_bool = 0; var_994_bool = 0;
	IsShooting(var_994_bool);
	var_994_bool = var_992_bool;
	return 2;
}


func_2147(var_0_bool)
{
	var_1001_cvector = CVector(0,0,0); var_1002_cvector = CVector(0,0,0); var_1003_float = 0; var_1004_object = Obj(); var_1005_object = Obj(); var_1006_int = 0; var_1007_bool = 0; var_1008_cvector = CVector(0,0,0); var_1009_cvector = CVector(0,0,0); var_1010_float = 0; var_1011_object = Obj(); var_1012_object = Obj(); var_1013_int = 0; var_1014_bool = 0;
	var_0_bool = false;
	PlayAnimation("attack1");
	WaitForAnimEnd();
	var_1016_bool = var_0_bool;
	if(var_1016_bool != 0) {
		return 14;
	}
	GetDirection(var_1008_cvector);
	GetPosition(var_1009_cvector);
	GetEyesHeight(var_1010_float);
	var_1017_float = GetByIndex(var_1009_cvector, 1);
	var_1017_float = var_1017_float + var_1010_float;
	SetByIndex(var_1009_cvector, 1) = var_1017_float;
	var_1019_float = var_1008_cvector * (int)10;
	var_1009_cvector = var_1009_cvector + var_1019_float;
	GetScene(var_1011_object);
	AddActorByType(var_1012_object, "scripted", var_1011_object, var_1009_cvector, CVector(0.0, 0.0, 1.0), "player_grenade.xml");
	var_1024_object = Obj();
	func_2771(var_1024_object);
	@@var_1012_object:SetScriptProperty("Owner", var_1024_object);
	var_1027_float = var_1008_cvector * (int)1000;
	@@var_1012_object:SetScriptProperty("StartVelocity", var_1027_float);
	var_1029_float = 0;
	func_2246(var_1029_float);
	@@var_1012_object:SetScriptProperty("DamageAmount", var_1029_float);
	var_1031_int = 0;
	func_2248(var_1031_int);
	@@var_1012_object:SetScriptProperty("DamageType", var_1031_int);
	GetInvItemByName(var_1013_int, "bottle_weapon");
	RemoveItemByType(var_1014_bool, var_1013_int, (int)1);
	SelectAnyItemByID(var_1014_bool, var_1013_int, (int)0);
	PlayAnimation("attack2");
	WaitForAnimEnd();
	var_1036_bool = var_0_bool;
	if(var_1036_bool != 0) {
		return 14;
	}
	var_1037_bool = var_1014_bool;
	if(var_1037_bool != 0) {
		PlayAnimation("aunholster");
		WaitForAnimEnd();
	} else {
		SetHandsItem((int)-1);
		PlayAnimation("unholster");
		WaitForAnimEnd();
	}
	return 14;
	
}
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


func_1636(var_910_int)
{
	var_910_int = 5;
	return 0;
}


func_2661(var_32_string, var_33_float)
{
	var_34_float = 0; var_35_float = 0;
	GetProperty(var_32_string, var_35_float);
	var_36_int = var_35_float + var_33_float;
	SetProperty(var_32_string, var_36_int);
	return 2;
}


func_1638(var_912_float)
{
	var_912_float = 0.1745329350233078;
	return 0;
}


func_1640()
{
	var_895_bool = 0; var_896_int = 0; var_897_bool = 0; var_898_int = 0;
	GetWeaponProperty(var_897_bool, "ammo", var_898_int);
	var_902_int = var_898_int - (int)1;
	SetWeaponProperty(var_897_bool, "ammo", var_902_int);
	return 4;
}


func_2668(var_23_bool, var_24_string, var_25_float, var_26_float, var_27_float)
{
	var_28_bool = 0; var_29_float = 0; var_30_bool = 0; var_31_float = 0;
	HasProperty(var_24_string, var_30_bool);
	var_32_bool = var_30_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_23_bool = 0;
		return 4;
	}
	GetProperty(var_24_string, var_31_float);
	var_33_float = 0; var_34_float = 0; var_35_float = 0; var_36_float = 0;
	var_34_float = var_31_float + var_25_float;
	var_26_float = var_35_float;
	var_27_float = var_36_float;
	func_2784(var_33_float, var_34_float, var_35_float, var_36_float);
	SetProperty(var_24_string, var_33_float);
	var_23_bool = 1;
	return 4;
}


func_1650()
{
	var_935_bool = 0; var_936_bool = 0; var_937_bool = 0; var_938_bool = 0;
	GetWeaponProperty(var_937_bool, "ammo", var_938_bool);
	var_940_bool = 0;
	var_940_bool = 1;
	var_941_bool = var_937_bool == 0; //@nz
	if(var_941_bool != 1) {
		var_942_bool = var_938_bool == 0; //@nz
		if(var_942_bool != 1) {
			var_940_bool = 0;
		}
	}
	if(var_940_bool != 0) {
		var_943_bool = 0; var_944_string = ""; var_945_int = 0;
		func_2854(var_943_bool, "samopal_ammo", (int)2);
		if(var_943_bool != 0) {
			var_946_string = "";
			func_1681(var_946_string);
			var_948_int = var_946_string + "_reload";
			PlaySound(var_948_int);
			PlayAnimation("reload");
			WaitForAnimEnd();
		}
	}
	return 4;
}


func_1140(var_680_int)
{
	var_680_int = 1;
	return 0;
}


func_1142(var_682_float)
{
	var_682_float = 0.01745329238474369;
	return 0;
}


func_1144()
{
	var_669_bool = 0; var_670_bool = 0;
	SetWeaponProperty(var_670_bool, "ammo", (bool)0);
	return 2;
}


func_125(var_104_string)
{
	var_104_string = "punch";
	return 0;
}


func_1150()
{
	var_707_bool = 0; var_708_string = ""; var_709_int = 0;
	func_2854(var_707_bool, "rifle_ammo", (int)1);
	if(var_707_bool != 0) {
		var_710_string = "";
		func_1169(var_710_string);
		var_712_int = var_710_string + "_reload";
		PlaySound(var_712_int);
		PlayAnimation("reload");
		WaitForAnimEnd();
	}
	return 0;
}


func_2687(var_26_float, var_27_object, var_28_float, var_29_int)
{
	var_33_int = 0; var_34_string = ""; var_35_int = 0; var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_int = 0; var_40_string = ""; var_41_int = 0; var_42_float = 0; var_43_float = 0; var_44_float = 0;
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_27_object = var_46_object;
	func_2649(var_45_bool, var_46_object, "health");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_26_float = 0.0;
		return 12;
	}
	var_55_bool = 0; var_56_object = Obj(); var_57_string = "";
	var_27_object = var_56_object;
	func_2649(var_55_bool, var_56_object, "armor");
	var_58_bool = var_55_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_39_int = 0;
	} else {
			@@var_27_object:GetProperty("armor", var_39_int);
	}
	var_60_string = ""; var_61_int = 0;
	var_29_int = var_61_int;
	func_2641(var_60_string, var_61_int);
	var_40_string = "armor_" + var_60_string;
	var_64_bool = 0; var_65_object = Obj(); var_66_string = "";
	var_27_object = var_65_object;
	var_40_string = var_66_string;
	func_2649(var_64_bool, var_65_object, var_66_string);
	var_67_bool = var_64_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_41_int = 0;
	} else {
		@@var_27_object:GetProperty(var_40_string, var_41_int);

	}
	var_68_float = 0; var_69_float = 0; var_70_float = 0;
	var_71_int = var_39_int + var_41_int;
	var_69_float = var_71_int / (float)100.0;
	func_2777(var_68_float, var_69_float, (float)1);
	var_68_float = var_42_float;
	@@var_27_object:GetProperty("health", var_43_float);
	var_76_int = (int)1 - var_42_float;
	var_44_float = var_28_float * var_76_int;
	var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_float = 0;
	var_79_float = var_43_float - var_44_float;
	func_2784(var_78_float, var_79_float, (float)0, (float)1);
	@@var_27_object:SetProperty("health", var_78_float);
	var_44_float = var_26_float;
	return 12;
	
}


func_127(var_144_float, var_145_bool)
{
	var_146_bool = var_145_bool;
	if(var_146_bool != 0) {
		var_144_float = 0.4000000059604645;
	} else {
		var_144_float = 0.20000000298023224;
	}
	return 0;
	
}


func_134(var_151_int)
{
	var_151_int = 0;
	return 0;
}


func_136(var_212_int)
{
	var_212_int = 0;
	return 0;
}


func_138(var_0_bool)
{
	var_66_int = 0; var_67_string = ""; var_68_bool = 0; var_69_string = ""; var_70_int = 0; var_71_string = ""; var_72_float = 0; var_73_object = Obj(); var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_float = 0; var_79_int = 0; var_80_int = 0; var_81_string = ""; var_82_bool = 0; var_83_string = ""; var_84_int = 0; var_85_string = ""; var_86_float = 0; var_87_object = Obj(); var_88_bool = 0; var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_float = 0; var_93_int = 0;
	var_0_bool = false;
	
Label_141:
	(int)0 = (int)0 + (int)1;
	var_96_int = "attack" + var_80_int;
	var_81_string = var_96_int + "_phase1";
	HasAnimation(var_82_bool, var_81_string);
	var_98_bool = var_82_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
				goto Label_141;
	}
	var_80_int = var_80_int + (int)-1;
	var_100_bool = var_80_int == 0; //@nz
	if(var_100_bool != 0) {
		return 28;
	}
Label_158:
	GetCurrentWeapon(var_83_string);
	irand(var_84_int, var_80_int);
	var_103_int = var_84_int + (int)1;
	var_85_string = "attack" + var_103_int;
	var_104_string = "";
	func_125(var_104_string);
	var_106_int = var_84_int + (int)1;
	var_107_int = var_104_string + var_106_int;
	PlaySound(var_107_int);
	SetAttackState((bool)1);
	var_110_int = var_85_string + "_phase1";
	PlayAnimation(var_110_int);
	WaitForAnimEnd();
	var_111_bool = var_0_bool;
	if(var_111_bool != 0) {
		return 28;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_86_float);
	GetVictim(var_86_float, var_87_object);
	var_113_bool = var_87_object != 0; //@nn
	if(var_113_bool != 0) {
		var_116_bool = IsFuncExist(var_87_object, "GetDirection", (int)1);
		if(var_116_bool != 0) {
			GetDirection(var_89_cvector);
			@@var_87_object:GetDirection(var_90_cvector);
			var_117_float = 0; var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0);
			var_89_cvector = var_118_cvector;
			var_90_cvector = var_119_cvector;
			func_2831(var_117_float, var_118_cvector, var_119_cvector);
			var_88_bool = var_117_float >= (float)0.4999999701976776;
		} else {
			var_88_bool = 0;

		}
		var_142_float = 0; var_143_bool = 0;
		var_88_bool = var_143_bool;
		func_269(var_142_float, var_143_bool);
		var_142_float = var_91_float;
		var_147_float = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0;
		var_87_object = var_148_object;
		var_91_float = var_149_float;
		func_134((int)0);
		var_151_int = var_150_int;
		func_2687(var_147_float, var_148_object, var_149_float, var_150_int);
		var_147_float = var_92_float;
		var_204_float = var_92_float;
		if(var_204_float != 0) {
			irand(var_93_int, (int)2);
			var_206_string = "";
			func_125(var_206_string);
			var_208_int = var_206_string + "_hit";
			var_210_int = var_93_int + (int)1;
			var_211_int = var_208_int + var_210_int;
			PlaySound(var_211_int);
			ReportAttack(var_87_object);
			var_212_int = 0;
			func_136(var_212_int);
			ReportHit(var_87_object, var_212_int, var_92_float, var_91_float);
			BroadcastPlayerDamage(var_87_object);
		}
		func_302();
	}
	var_214_int = var_85_string + "_phase2";
	PlayAnimation(var_214_int);
	WaitForAnimEnd();
	var_215_bool = var_0_bool;
	if(var_215_bool != 0) {
		return 28;
	}
	var_87_object = 0;
	var_216_bool = 0;
	func_303(var_216_bool);
	if(var_216_bool == 1) goto Label_158;
	return 28;
	
}


func_1169(var_676_string)
{
	var_676_string = "rifle";
	return 0;
}


func_1681(var_906_string)
{
	var_906_string = "samopal";
	return 0;
}


func_1171(var_681_float)
{
	var_681_float = 1.5;
	return 0;
}


func_1683(var_911_float)
{
	var_911_float = 0.800000011920929;
	return 0;
}


func_1173(var_692_int)
{
	var_692_int = 0;
	return 0;
}


func_1685(var_920_int)
{
	var_920_int = 0;
	return 0;
}


func_1175(var_694_int)
{
	var_694_int = 2;
	return 0;
}


func_1687(var_922_int)
{
	var_922_int = 2;
	return 0;
}


func_1177(var_0_bool)
{
	var_598_string = ""; var_599_int = 0; var_600_string = ""; var_601_int = 0; var_602_bool = 0; var_603_float = 0; var_604_float = 0; var_605_cvector = CVector(0,0,0); var_606_object = Obj(); var_607_int = 0; var_608_cvector = CVector(0,0,0); var_609_object = Obj(); var_610_int = 0; var_611_cvector = CVector(0,0,0); var_612_float = 0; var_613_object = Obj(); var_614_object = Obj(); var_615_object = Obj(); var_616_object = Obj(); var_617_bool = 0; var_618_string = ""; var_619_int = 0; var_620_string = ""; var_621_int = 0; var_622_bool = 0; var_623_float = 0; var_624_float = 0; var_625_cvector = CVector(0,0,0); var_626_object = Obj(); var_627_int = 0; var_628_cvector = CVector(0,0,0); var_629_object = Obj(); var_630_int = 0; var_631_cvector = CVector(0,0,0); var_632_float = 0; var_633_object = Obj(); var_634_object = Obj(); var_635_object = Obj(); var_636_object = Obj(); var_637_bool = 0;
	var_0_bool = false;
	
Label_1179:
	var_638_bool = 0;
	func_1112(var_638_bool);
	var_666_bool = var_638_bool == 0; //@nz
	if(var_666_bool != 0) {
	} else {
		GetCurrentWeapon(var_618_string);
		irand(var_619_int, (int)2);
		var_620_string = "attack1";
		SetAttackState((bool)1);
		func_1144();
		var_674_int = var_620_string + "_phase1";
		PlayAnimation(var_674_int);
		WaitForAnimEnd();
		var_675_bool = var_0_bool;
		if(var_675_bool != 0) {
			return 40;
		}
		var_676_string = "";
		func_1169(var_676_string);
		var_678_int = var_676_string + "_shot";
		PlaySound(var_678_int);
		func_1346();
		SetAttackState((bool)0);
		func_1140((int)0);
		var_680_int = var_621_int;
		var_681_float = 0;
		func_1171(var_681_float);
		var_623_float = var_681_float / var_621_int;
		func_1142((float)0);
		var_682_float = var_624_float;
		GetDirection(var_625_cvector);
		func_2806(Obj());
		var_683_object = var_626_object;
		var_627_int = 0;

	Label_1239:
		var_686_bool = var_627_int < var_621_int;
		if(var_686_bool != 0) {
			RandVecCone3D(var_628_cvector, var_625_cvector, var_624_float);
			GetVictimMaterial(var_629_object, var_630_int, var_631_cvector, var_628_cvector);
			var_687_bool = var_629_object != 0; //@nn
			if(var_687_bool != 0) {
				var_688_float = 0; var_689_object = Obj(); var_690_float = 0; var_691_int = 0;
				var_629_object = var_689_object;
				var_623_float = var_690_float;
				func_1173((int)0);
				var_692_int = var_691_int;
				func_2687(var_688_float, var_689_object, var_690_float, var_691_int);
				var_688_float = var_632_float;
				var_693_float = var_632_float;
				if(var_693_float != 0) {
					@@var_626_object:add(var_629_object);
					var_694_int = 0;
					func_1175(var_694_int);
					ReportHit(var_629_object, var_694_int, var_632_float, var_623_float);
				} else {
					var_697_bool = var_630_int != (int)-1;
					if(var_697_bool == 0) goto Label_1285;
					var_698_bool = (bool)0 == 0; //@nz
					if(var_698_bool == 0) goto Label_1285;
					GetScene(var_633_object);
					AddActorByType(var_634_object, "scripted", var_633_object, var_631_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
					@@var_634_object:SetScriptProperty("Material", var_630_int);
					var_622_bool = 1;
					var_634_object = 0;
					var_633_object = 0;
		}
				@@var_626_object:iterator(var_635_object);

			Label_1291:
				@@var_635_object:Next(var_637_bool, var_636_object);
				var_703_bool = var_637_bool;
				if(var_703_bool != 0) {
					ReportAttack(var_636_object);
					BroadcastPlayerDamage(var_636_object);
					goto Label_1291;
				}
				var_705_int = var_620_string + "_phase2";
				PlayAnimation(var_705_int);
				WaitForAnimEnd();
				var_706_bool = var_0_bool;
				if(var_706_bool != 0) {
					return 40;
				}
				func_1150();
				var_636_object = 0;
				var_635_object = 0;
				var_626_object = 0;
				var_714_bool = 0;
				func_1347(var_714_bool);
				if(var_714_bool == 1) goto Label_1179;
			}
		}
	Label_1285:
		var_629_object = 0;
		var_627_int = var_627_int + (int)1;
		goto Label_1239;
	}
	return 40;
	
}


func_1689(var_0_bool)
{
	var_838_string = ""; var_839_int = 0; var_840_string = ""; var_841_int = 0; var_842_bool = 0; var_843_float = 0; var_844_float = 0; var_845_cvector = CVector(0,0,0); var_846_object = Obj(); var_847_int = 0; var_848_cvector = CVector(0,0,0); var_849_object = Obj(); var_850_int = 0; var_851_cvector = CVector(0,0,0); var_852_float = 0; var_853_object = Obj(); var_854_object = Obj(); var_855_object = Obj(); var_856_object = Obj(); var_857_bool = 0; var_858_string = ""; var_859_int = 0; var_860_string = ""; var_861_int = 0; var_862_bool = 0; var_863_float = 0; var_864_float = 0; var_865_cvector = CVector(0,0,0); var_866_object = Obj(); var_867_int = 0; var_868_cvector = CVector(0,0,0); var_869_object = Obj(); var_870_int = 0; var_871_cvector = CVector(0,0,0); var_872_float = 0; var_873_object = Obj(); var_874_object = Obj(); var_875_object = Obj(); var_876_object = Obj(); var_877_bool = 0;
	var_0_bool = false;
	
Label_1691:
	var_878_bool = 0;
	func_1608(var_878_bool);
	var_892_bool = var_878_bool == 0; //@nz
	if(var_892_bool != 0) {
	} else {
		GetCurrentWeapon(var_858_string);
		irand(var_859_int, (int)2);
		var_860_string = "attack1";
		SetAttackState((bool)1);
		func_1640();
		var_904_int = var_860_string + "_phase1";
		PlayAnimation(var_904_int);
		WaitForAnimEnd();
		var_905_bool = var_0_bool;
		if(var_905_bool != 0) {
			return 40;
		}
		var_906_string = "";
		func_1681(var_906_string);
		var_908_int = var_906_string + "_shot";
		PlaySound(var_908_int);
		func_1858();
		SetAttackState((bool)0);
		func_1636((int)0);
		var_910_int = var_861_int;
		var_911_float = 0;
		func_1683(var_911_float);
		var_863_float = var_911_float / var_861_int;
		func_1638((float)0);
		var_912_float = var_864_float;
		GetDirection(var_865_cvector);
		func_2806(Obj());
		var_913_object = var_866_object;
		var_867_int = 0;

	Label_1751:
		var_914_bool = var_867_int < var_861_int;
		if(var_914_bool != 0) {
			RandVecCone3D(var_868_cvector, var_865_cvector, var_864_float);
			GetVictimMaterial(var_869_object, var_870_int, var_871_cvector, var_868_cvector);
			var_915_bool = var_869_object != 0; //@nn
			if(var_915_bool != 0) {
				var_916_float = 0; var_917_object = Obj(); var_918_float = 0; var_919_int = 0;
				var_869_object = var_917_object;
				var_863_float = var_918_float;
				func_1685((int)0);
				var_920_int = var_919_int;
				func_2687(var_916_float, var_917_object, var_918_float, var_919_int);
				var_916_float = var_872_float;
				var_921_float = var_872_float;
				if(var_921_float != 0) {
					@@var_866_object:add(var_869_object);
					var_922_int = 0;
					func_1687(var_922_int);
					ReportHit(var_869_object, var_922_int, var_872_float, var_863_float);
				} else {
					var_925_bool = var_870_int != (int)-1;
					if(var_925_bool == 0) goto Label_1797;
					var_926_bool = (bool)0 == 0; //@nz
					if(var_926_bool == 0) goto Label_1797;
					GetScene(var_873_object);
					AddActorByType(var_874_object, "scripted", var_873_object, var_871_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
					@@var_874_object:SetScriptProperty("Material", var_870_int);
					var_862_bool = 1;
					var_874_object = 0;
					var_873_object = 0;
		}
				@@var_866_object:iterator(var_875_object);

			Label_1803:
				@@var_875_object:Next(var_877_bool, var_876_object);
				var_931_bool = var_877_bool;
				if(var_931_bool != 0) {
					ReportAttack(var_876_object);
					BroadcastPlayerDamage(var_876_object);
					goto Label_1803;
				}
				var_933_int = var_860_string + "_phase2";
				PlayAnimation(var_933_int);
				WaitForAnimEnd();
				var_934_bool = var_0_bool;
				if(var_934_bool != 0) {
					return 40;
				}
				func_1650();
				var_876_object = 0;
				var_875_object = 0;
				var_866_object = 0;
				var_950_bool = 0;
				func_1859(var_950_bool);
				if(var_950_bool == 1) goto Label_1691;
			}
		}
	Label_1797:
		var_869_object = 0;
		var_867_int = var_867_int + (int)1;
		goto Label_1751;
	}
	return 40;
	
}


func_2751(var_40_string, var_41_int)
{
	var_43_bool = var_41_int == (int)1;
	if(var_43_bool != 0) {
		var_40_string = "wood";
		return 0;
	EMIT "GOTO 0xad1";
	}
	var_45_bool = var_41_int == (int)2;
	if(var_45_bool != 0) {
		var_40_string = "metal";
		return 0;
	EMIT "GOTO 0xad1";
	}
	var_47_bool = var_41_int == (int)3;
	if(var_47_bool != 0) {
		var_40_string = "ground";
		return 0;
	}
	var_40_string = "stone";
	return 0;
}


func_705(var_416_bool)
{
	var_417_bool = 0; var_418_bool = 0;
	IsShooting(var_418_bool);
	var_418_bool = var_416_bool;
	return 2;
}


func_710(var_460_string)
{
	var_460_string = "knife";
	return 0;
}


func_2246(var_1029_float)
{
	var_1029_float = 0.5;
	return 0;
}


func_712(var_479_float, var_480_bool)
{
	var_481_bool = var_480_bool;
	if(var_481_bool != 0) {
		var_479_float = 0.30000001192092896;
	} else {
		var_479_float = 0.30000001192092896;
	}
	return 0;
	
}


func_2248(var_1031_int)
{
	var_1031_int = 0;
	return 0;
}


func_2250(var_0_bool, var_1_bool)
{
	var_1045_object = Obj(); var_1046_bool = 0; var_1047_bool = 0; var_1048_bool = 0; var_1049_bool = 0; var_1050_int = 0; var_1051_int = 0; var_1052_object = Obj(); var_1053_bool = 0; var_1054_bool = 0; var_1055_bool = 0; var_1056_bool = 0; var_1057_int = 0; var_1058_int = 0;
	var_0_bool = false;
	var_1_bool = false;
	PlayAnimation("use_begin");
	WaitForAnimEnd();
	var_1060_bool = var_0_bool;
	if(var_1060_bool != 0) {
		return 14;
	}
	GetPlayerSelectedObject(var_1052_object);
	var_1053_bool = 0;
	var_1061_bool = 0; var_1062_object = Obj(); var_1063_string = "";
	var_1052_object = var_1062_object;
	func_2649(var_1061_bool, var_1062_object, "lp");
	if(var_1061_bool != 0) {
		@@var_1052_object:GetProperty("lp", var_1054_bool);
		var_1065_bool = var_1054_bool;
		if(var_1065_bool != 0) {
			@@var_1052_object:GetProperty("locked", var_1055_bool);
			var_1067_bool = var_1055_bool;
			if(var_1067_bool != 0) {
				var_1053_bool = 1;
				@@var_1052_object:SetProperty("locked", (bool)0);
				var_1057_int = 0;
				GetWeaponProperty(var_1056_bool, "uses", var_1057_int);
				var_1072_bool = var_1057_int <= (int)1;
				if(var_1072_bool != 0) {
					GetWeaponItem(var_1058_int);
					SelectItem(var_1058_int, (bool)0, (int)0);
					RemoveItem(var_1058_int, (int)1, (int)0);
					var_1_bool = true;
				} else {
						var_1088_int = var_1057_int - (int)1;
						SetWeaponProperty(var_1056_bool, "uses", var_1088_int);
				}
			}
		}
	}
	var_1077_bool = var_1053_bool;
	if(var_1077_bool != 0) {
		PlayAnimation("use_success");
	} else {
		PlayAnimation("use_fail");

	}
	WaitForAnimEnd();
	var_1079_bool = var_0_bool;
	if(var_1079_bool != 0) {
		return 14;
	}
	var_1080_bool = var_1_bool;
	if(var_1080_bool != 0) {
		PlayAnimation("holster");
		WaitForAnimEnd();
		SetHandsItem((int)-1);
		var_1083_bool = var_0_bool;
		if(var_1083_bool != 0) {
			return 14;
		}
		var_1_bool = false;
		PlayAnimation("unholster");
		WaitForAnimEnd();
	}
	return 14;
	
}
EMIT "Stack[-7] = 0";


func_719(var_484_float)
{
	var_484_float = 0.5;
	return 0;
}


func_721(var_500_int)
{
	var_500_int = 1;
	return 0;
}


func_3281()
{
	var_38_float = 0; var_39_float = 0;
	rand(var_39_float, (int)10, (int)30);
	SetTimer((int)0, var_39_float);
	return 2;
}


func_723(var_489_int)
{
	var_489_int = 0;
	return 0;
}


func_2771(var_30_object)
{
	var_31_object = Obj(); var_32_object = Obj();
	self(var_32_object);
	var_32_object = var_30_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_725(var_498_int)
{
	var_498_int = 1;
	return 0;
}


func_727(var_477_float, var_478_bool)
{
	var_479_float = 0; var_480_bool = 0;
	var_478_bool = var_480_bool;
	func_712(var_479_float, var_480_bool);
	var_482_float = 0; var_483_float = 0;
	func_719((float)0);
	var_484_float = var_483_float;
	func_2908(var_482_float, var_483_float);
	var_477_float = var_479_float * var_482_float;
	return 0;
}


func_2777(var_68_float, var_69_float, var_70_float)
{
	var_73_bool = var_69_float < var_70_float;
	if(var_73_bool != 0) {
		var_69_float = var_68_float;
	} else {
		var_70_float = var_68_float;
	}
	return 0;
	
}


func_2784(var_78_float, var_79_float, var_80_float, var_81_float)
{
	var_82_bool = var_79_float < var_80_float;
	if(var_82_bool != 0) {
		var_80_float = var_78_float;
		return 0;
	}
	var_83_bool = var_79_float > var_81_float;
	if(var_83_bool != 0) {
		var_81_float = var_78_float;
		return 0;
	}
	var_79_float = var_78_float;
	return 0;
}


func_741()
{
	var_499_int = 0;
	func_721((int)0);
	var_500_int = var_499_int;
	func_2889(var_499_int);
	return 0;
}


func_2795(var_318_int, var_319_int, var_320_int, var_321_int)
{
	var_322_bool = var_319_int < var_320_int;
	if(var_322_bool != 0) {
		var_320_int = var_318_int;
		return 0;
	}
	var_323_bool = var_319_int > var_321_int;
	if(var_323_bool != 0) {
		var_321_int = var_318_int;
		return 0;
	}
	var_319_int = var_318_int;
	return 0;
}


func_749(var_0_bool)
{
	var_422_int = 0; var_423_string = ""; var_424_bool = 0; var_425_string = ""; var_426_int = 0; var_427_string = ""; var_428_float = 0; var_429_object = Obj(); var_430_bool = 0; var_431_cvector = CVector(0,0,0); var_432_cvector = CVector(0,0,0); var_433_float = 0; var_434_float = 0; var_435_int = 0; var_436_int = 0; var_437_string = ""; var_438_bool = 0; var_439_string = ""; var_440_int = 0; var_441_string = ""; var_442_float = 0; var_443_object = Obj(); var_444_bool = 0; var_445_cvector = CVector(0,0,0); var_446_cvector = CVector(0,0,0); var_447_float = 0; var_448_float = 0; var_449_int = 0;
	var_0_bool = false;
	
Label_752:
	(int)0 = (int)0 + (int)1;
	var_452_int = "attack" + var_436_int;
	var_437_string = var_452_int + "_phase1";
	HasAnimation(var_438_bool, var_437_string);
	var_454_bool = var_438_bool == 0; //@nz
	if(var_454_bool != 0) {
	} else {
				goto Label_752;
	}
	var_436_int = var_436_int + (int)-1;
	var_456_bool = var_436_int == 0; //@nz
	if(var_456_bool != 0) {
		return 28;
	}
Label_769:
	GetCurrentWeapon(var_439_string);
	irand(var_440_int, var_436_int);
	var_459_int = var_440_int + (int)1;
	var_441_string = "attack" + var_459_int;
	var_460_string = "";
	func_710(var_460_string);
	var_462_int = var_440_int + (int)1;
	var_463_int = var_460_string + var_462_int;
	PlaySound(var_463_int);
	SetAttackState((bool)1);
	var_466_int = var_441_string + "_phase1";
	PlayAnimation(var_466_int);
	WaitForAnimEnd();
	var_467_bool = var_0_bool;
	if(var_467_bool != 0) {
		return 28;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_442_float);
	GetVictim(var_442_float, var_443_object);
	var_469_bool = var_443_object != 0; //@nn
	if(var_469_bool != 0) {
		var_472_bool = IsFuncExist(var_443_object, "GetDirection", (int)1);
		if(var_472_bool != 0) {
			GetDirection(var_445_cvector);
			@@var_443_object:GetDirection(var_446_cvector);
			var_473_float = 0; var_474_cvector = CVector(0,0,0); var_475_cvector = CVector(0,0,0);
			var_445_cvector = var_474_cvector;
			var_446_cvector = var_475_cvector;
			func_2831(var_473_float, var_474_cvector, var_475_cvector);
			var_444_bool = var_473_float >= (float)0.4999999701976776;
		} else {
			var_444_bool = 0;

		}
		var_477_float = 0; var_478_bool = 0;
		var_444_bool = var_478_bool;
		func_727(var_477_float, var_478_bool);
		var_477_float = var_447_float;
		var_485_float = 0; var_486_object = Obj(); var_487_float = 0; var_488_int = 0;
		var_443_object = var_486_object;
		var_447_float = var_487_float;
		func_723((int)0);
		var_489_int = var_488_int;
		func_2687(var_485_float, var_486_object, var_487_float, var_488_int);
		var_485_float = var_448_float;
		var_490_float = var_448_float;
		if(var_490_float != 0) {
			irand(var_449_int, (int)2);
			var_492_string = "";
			func_710(var_492_string);
			var_494_int = var_492_string + "_hit";
			var_496_int = var_449_int + (int)1;
			var_497_int = var_494_int + var_496_int;
			PlaySound(var_497_int);
			ReportAttack(var_443_object);
			var_498_int = 0;
			func_725(var_498_int);
			ReportHit(var_443_object, var_498_int, var_448_float, var_447_float);
			BroadcastPlayerDamage(var_443_object);
		}
		func_741();
	}
	var_502_int = var_441_string + "_phase2";
	PlayAnimation(var_502_int);
	WaitForAnimEnd();
	var_503_bool = var_0_bool;
	if(var_503_bool != 0) {
		return 28;
	}
	var_443_object = 0;
	var_504_bool = 0;
	func_906(var_504_bool);
	if(var_504_bool == 1) goto Label_769;
	return 28;
	
}


func_2806(var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj();
	CreateObjectSet(var_27_object);
	var_27_object = var_25_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2812(var_120_float, var_121_cvector, var_122_cvector)
{
	var_123_float = GetByIndex(var_121_cvector, 0);
	var_124_float = GetByIndex(var_122_cvector, 0);
	var_125_float = var_123_float * var_124_float;
	var_126_float = GetByIndex(var_121_cvector, 2);
	var_127_float = GetByIndex(var_122_cvector, 2);
	var_128_float = var_126_float * var_127_float;
	var_120_float = var_125_float + var_128_float;
	return 0;
}


func_2821(var_129_float, var_130_cvector)
{
	var_131_float = GetByIndex(var_130_cvector, 0);
	var_132_float = GetByIndex(var_130_cvector, 0);
	var_133_float = var_131_float * var_132_float;
	var_134_float = GetByIndex(var_130_cvector, 2);
	var_135_float = GetByIndex(var_130_cvector, 2);
	var_136_float = var_134_float * var_135_float;
	var_137_int = var_133_float + var_136_float;
	var_129_float = sqrt(var_137_int);
	return 0;
}


func_269(var_142_float, var_143_bool)
{
	var_144_float = 0; var_145_bool = 0;
	var_143_bool = var_145_bool;
	func_127(var_144_float, var_145_bool);
	var_144_float = var_142_float;
	return 0;
}


func_2831(var_117_float, var_118_cvector, var_119_cvector)
{
	var_120_float = 0; var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0);
	var_118_cvector = var_121_cvector;
	var_119_cvector = var_122_cvector;
	func_2812(var_120_float, var_121_cvector, var_122_cvector);
	var_129_float = 0; var_130_cvector = CVector(0,0,0);
	var_118_cvector = var_130_cvector;
	func_2821(var_129_float, var_130_cvector);
	var_138_float = 0; var_139_cvector = CVector(0,0,0);
	var_119_cvector = var_139_cvector;
	func_2821(var_138_float, var_139_cvector);
	var_140_float = var_129_float * var_138_float;
	var_117_float = var_120_float / var_140_float;
	return 0;
}


func_2848(var_68_bool)
{
	var_69_int = 0; var_70_int = 0;
	GetItemCountOfType(var_70_int, "kerosene");
	var_70_int = var_68_bool;
	return 2;
}


func_2854(var_647_bool, var_648_string, var_649_int)
{
	var_650_int = 0; var_651_int = 0; var_652_bool = 0; var_653_bool = 0; var_654_int = 0; var_655_int = 0; var_656_bool = 0; var_657_bool = 0;
	GetInvItemByName(var_654_int, var_648_string);
	var_655_int = 0;
	
Label_2858:
	var_658_bool = var_655_int < var_649_int;
	if(var_658_bool != 0) {
		RemoveItemByType(var_656_bool, var_654_int, (int)1);
		var_660_bool = var_656_bool == 0; //@nz
		if(var_660_bool != 0) {
		} else {
			var_655_int = var_655_int + (int)1;
			goto Label_2858;
		}
	}
	var_661_bool = var_655_int == 0; //@nz
	if(var_661_bool != 0) {
		var_647_bool = 0;
		return 8;
	}
	SetWeaponProperty(var_657_bool, "ammo", var_655_int);
	var_647_bool = 1;
	return 8;
	
}


func_302()
{
	return 0;
}


func_303(var_216_bool)
{
	var_217_bool = 0; var_218_bool = 0;
	IsShooting(var_218_bool);
	var_218_bool = var_216_bool;
	return 2;
}


func_308(var_260_string)
{
	var_260_string = "scalpel";
	return 0;
}


func_2356(var_62_string)
{
	var_64_bool = var_62_string == "empty";
	if(var_64_bool != 0) {
		TaskCall(2);
		func_138(var_65_bool);
		TaskReturn();
	} else {
		var_220_bool = var_62_string == "scalpel";
		if(var_220_bool != 0) {
			TaskCall(3);
			func_347(var_221_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_332_bool = var_62_string == "hammer";
		if(var_332_bool != 0) {
			TaskCall(4);
			func_548(var_333_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_420_bool = var_62_string == "knife";
		if(var_420_bool != 0) {
			TaskCall(5);
			func_749(var_421_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_508_bool = var_62_string == "trost";
		if(var_508_bool != 0) {
			TaskCall(6);
			func_950(var_509_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_596_bool = var_62_string == "rifle";
		if(var_596_bool != 0) {
			TaskCall(7);
			func_1177(var_597_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_718_bool = var_62_string == "revolver";
		if(var_718_bool != 0) {
			TaskCall(8);
			func_1433(var_719_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_836_bool = var_62_string == "samopal";
		if(var_836_bool != 0) {
			TaskCall(9);
			func_1689(var_837_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_954_bool = var_62_string == "ognemet";
		if(var_954_bool != 0) {
			TaskCall(10);
			func_1864(var_955_object, var_956_bool, var_957_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_999_bool = var_62_string == "bottle";
		if(var_999_bool != 0) {
			TaskCall(11);
			func_2147(var_1000_bool);
			TaskReturn();
			goto Label_2455;
		}
		var_1042_bool = var_62_string == "lockpick";
		if(var_1042_bool == 0) goto Label_2455;
		TaskCall(12);
		func_2250(var_1043_bool, var_1044_bool);
		TaskReturn();
	}
Label_2455:
	return 0;
	
}


func_310(var_279_float, var_280_bool)
{
	var_281_bool = var_280_bool;
	if(var_281_bool != 0) {
		var_279_float = 0.20000000298023224;
	} else {
		var_279_float = 0.4000000059604645;
	}
	return 0;
	
}


func_317(var_284_float)
{
	var_284_float = 0.5;
	return 0;
}


func_2878(var_285_float)
{
	var_286_bool = 0; var_287_int = 0; var_288_bool = 0; var_289_int = 0;
	GetWeaponProperty(var_288_bool, "durability", var_289_int);
	var_291_bool = var_288_bool;
	if(var_291_bool != 0) {
		var_285_float = var_289_int / (float)100.0;
	} else {
		var_285_float = 1.0;
	}
	return 4;
	
}


func_319(var_311_int)
{
	var_311_int = 1;
	return 0;
}


func_321(var_300_int)
{
	var_300_int = 0;
	return 0;
}


func_1346()
{
	return 0;
}


func_323(var_309_int)
{
	var_309_int = 1;
	return 0;
}


func_1347(var_714_bool)
{
	var_715_bool = 0; var_716_bool = 0;
	IsShooting(var_716_bool);
	var_716_bool = var_714_bool;
	return 2;
}


func_325(var_277_float, var_278_bool)
{
	var_279_float = 0; var_280_bool = 0;
	var_278_bool = var_280_bool;
	func_310(var_279_float, var_280_bool);
	var_282_float = 0; var_283_float = 0;
	func_317((float)0);
	var_284_float = var_283_float;
	func_2908(var_282_float, var_283_float);
	var_277_float = var_279_float * var_282_float;
	return 0;
}


func_1858()
{
	return 0;
}


func_1859(var_950_bool)
{
	var_951_bool = 0; var_952_bool = 0;
	IsShooting(var_952_bool);
	var_952_bool = var_950_bool;
	return 2;
}


func_1352(var_760_bool)
{
	var_761_bool = 0; var_762_bool = 0; var_763_bool = 0; var_764_bool = 0;
	GetWeaponProperty(var_763_bool, "ammo", var_764_bool);
	var_766_bool = 0;
	var_766_bool = 1;
	var_767_bool = var_763_bool == 0; //@nz
	if(var_767_bool != 1) {
		var_768_bool = var_764_bool == 0; //@nz
		if(var_768_bool != 1) {
			var_766_bool = 0;
		}
	}
	if(var_766_bool != 0) {
		var_769_bool = 0; var_770_string = ""; var_771_int = 0;
		func_2854(var_769_bool, "revolver_ammo", (int)6);
		var_772_bool = var_769_bool == 0; //@nz
		if(var_772_bool != 0) {
			PlayAnimation("noammo");
			WaitForAnimEnd();
			var_760_bool = 0;
			return 4;
		}
	}
	var_760_bool = 1;
	return 4;
}


func_2889(var_310_int)
{
	var_312_bool = 0; var_313_int = 0; var_314_bool = 0; var_315_int = 0;
	GetWeaponProperty(var_314_bool, "durability", var_315_int);
	var_317_bool = var_314_bool;
	if(var_317_bool != 0) {
		var_318_int = 0; var_319_int = 0; var_320_int = 0; var_321_int = 0;
		var_319_int = var_315_int - var_310_int;
		func_2795(var_318_int, var_319_int, (int)0, (int)100);
		var_318_int = var_315_int;
	} else {
		var_315_int = 100;
	}
	SetWeaponProperty(var_314_bool, "durability", var_315_int);
	return 4;
	
}


func_1864(var_0_bool, var_1_bool, var_2_bool)
{
	var_958_object = Obj(); var_959_float = 0; var_960_object = Obj(); var_961_float = 0;
	var_962_bool = 0;
	func_2127(var_962_bool);
	var_969_bool = var_962_bool == 0; //@nz
	if(var_969_bool != 0) {
		return 4;
	}
	var_2_bool = false;
	var_1_bool = false;
	func_1932();
	GetScene(var_960_object);
	AddActorByType(var_0_bool, "flame", var_960_object, CVector(0.0, 0.0, 0.0));
	var_978_object = Obj();
	func_2771(var_978_object);
	@@@var_0_bool:Attach(var_978_object, "flame");
	@@@var_0_bool:SetLength((float)0.8333333134651184);
	SetTimer((int)20, (float)0.10000000149011612);
	
Label_1895:
	PlayAnimation("attack");
	WaitForAnimEnd();
	var_986_bool = var_2_bool;
	if(var_986_bool != 0) {
	} else {
		var_989_bool = var_1_bool;
		if(var_989_bool != 0) {
			@@@var_0_bool:GetActualLength(var_961_float);
			var_991_bool = var_961_float < (float)0.01666666753590107;
			if(var_991_bool != 0) {
				goto Label_1922;
			}
		}
		var_992_bool = 0;
		func_2142(var_992_bool);
		var_995_bool = var_992_bool == 0; //@nz
		if(var_995_bool != 0) {
			var_996_bool = var_1_bool == 0; //@nz
			if(var_996_bool != 0) {
				func_1978(var_960_object, var_961_float);
			}
		}
		goto Label_1895;
	}
Label_1922:
	KillTimer((int)20);
	RemoveActor(var_0_bool);
	RemoveAttachPoint("flame");
	return 4;
	
}
EMIT "Stack[-2] = 0";


func_339()
{
	var_310_int = 0;
	func_319((int)0);
	var_311_int = var_310_int;
	func_2889(var_310_int);
	return 0;
}


func_347(var_0_bool)
{
	var_222_int = 0; var_223_string = ""; var_224_bool = 0; var_225_string = ""; var_226_int = 0; var_227_string = ""; var_228_float = 0; var_229_object = Obj(); var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_float = 0; var_234_float = 0; var_235_int = 0; var_236_int = 0; var_237_string = ""; var_238_bool = 0; var_239_string = ""; var_240_int = 0; var_241_string = ""; var_242_float = 0; var_243_object = Obj(); var_244_bool = 0; var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_float = 0; var_248_float = 0; var_249_int = 0;
	var_0_bool = false;
	
Label_350:
	(int)0 = (int)0 + (int)1;
	var_252_int = "attack" + var_236_int;
	var_237_string = var_252_int + "_phase1";
	HasAnimation(var_238_bool, var_237_string);
	var_254_bool = var_238_bool == 0; //@nz
	if(var_254_bool != 0) {
	} else {
				goto Label_350;
	}
	var_236_int = var_236_int + (int)-1;
	var_256_bool = var_236_int == 0; //@nz
	if(var_256_bool != 0) {
		return 28;
	}
Label_367:
	GetCurrentWeapon(var_239_string);
	irand(var_240_int, var_236_int);
	var_259_int = var_240_int + (int)1;
	var_241_string = "attack" + var_259_int;
	var_260_string = "";
	func_308(var_260_string);
	var_262_int = var_240_int + (int)1;
	var_263_int = var_260_string + var_262_int;
	PlaySound(var_263_int);
	SetAttackState((bool)1);
	var_266_int = var_241_string + "_phase1";
	PlayAnimation(var_266_int);
	WaitForAnimEnd();
	var_267_bool = var_0_bool;
	if(var_267_bool != 0) {
		return 28;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_242_float);
	GetVictim(var_242_float, var_243_object);
	var_269_bool = var_243_object != 0; //@nn
	if(var_269_bool != 0) {
		var_272_bool = IsFuncExist(var_243_object, "GetDirection", (int)1);
		if(var_272_bool != 0) {
			GetDirection(var_245_cvector);
			@@var_243_object:GetDirection(var_246_cvector);
			var_273_float = 0; var_274_cvector = CVector(0,0,0); var_275_cvector = CVector(0,0,0);
			var_245_cvector = var_274_cvector;
			var_246_cvector = var_275_cvector;
			func_2831(var_273_float, var_274_cvector, var_275_cvector);
			var_244_bool = var_273_float >= (float)0.4999999701976776;
		} else {
			var_244_bool = 0;

		}
		var_277_float = 0; var_278_bool = 0;
		var_244_bool = var_278_bool;
		func_325(var_277_float, var_278_bool);
		var_277_float = var_247_float;
		var_296_float = 0; var_297_object = Obj(); var_298_float = 0; var_299_int = 0;
		var_243_object = var_297_object;
		var_247_float = var_298_float;
		func_321((int)0);
		var_300_int = var_299_int;
		func_2687(var_296_float, var_297_object, var_298_float, var_299_int);
		var_296_float = var_248_float;
		var_301_float = var_248_float;
		if(var_301_float != 0) {
			irand(var_249_int, (int)2);
			var_303_string = "";
			func_308(var_303_string);
			var_305_int = var_303_string + "_hit";
			var_307_int = var_249_int + (int)1;
			var_308_int = var_305_int + var_307_int;
			PlaySound(var_308_int);
			ReportAttack(var_243_object);
			var_309_int = 0;
			func_323(var_309_int);
			ReportHit(var_243_object, var_309_int, var_248_float, var_247_float);
			BroadcastPlayerDamage(var_243_object);
		}
		func_339();
	}
	var_326_int = var_241_string + "_phase2";
	PlayAnimation(var_326_int);
	WaitForAnimEnd();
	var_327_bool = var_0_bool;
	if(var_327_bool != 0) {
		return 28;
	}
	var_243_object = 0;
	var_328_bool = 0;
	func_504(var_328_bool);
	if(var_328_bool == 1) goto Label_367;
	return 28;
	
}


func_2908(var_282_float, var_283_float)
{
	var_285_float = 0;
	func_2878(var_285_float);
	var_294_int = (int)1 - var_283_float;
	var_295_float = var_285_float * var_294_int;
	var_282_float = var_283_float + var_295_float;
	return 0;
}


func_1380(var_792_int)
{
	var_792_int = 1;
	return 0;
}


func_2917()
{
	var_23_bool = 0; var_24_int = 0; var_25_string = ""; var_26_int = 0; var_27_bool = 0; var_28_int = 0; var_29_string = ""; var_30_string = ""; var_31_bool = 0; var_32_int = 0; var_33_string = ""; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_string = ""; var_38_string = "";
	GetGroundMaterial(var_31_bool, var_32_int);
	var_39_bool = var_31_bool == 0; //@nz
	if(var_39_bool != 0) {
		var_32_int = -1;
	}
	var_40_string = ""; var_41_int = 0;
	var_32_int = var_41_int;
	func_2751(var_40_string, var_41_int);
	var_40_string = var_33_string;
	var_34_int = 0;
	
Label_2929:
	var_49_int = "step_" + var_33_string;
	var_51_int = var_34_int + (int)1;
	var_52_int = var_49_int + var_51_int;
	IsExistingSound(var_35_bool, var_52_int);
	var_53_bool = var_35_bool == 0; //@nz
	if(var_53_bool != 0) {
	} else {
			var_34_int = var_34_int + (int)1;
			goto Label_2929;
	}
	var_54_bool = var_34_int == 0; //@nz
	if(var_54_bool != 0) {
		var_55_string = GlobalVars[0];
		GlobalVars[0] = "";
		return 16;
	}
	var_57_bool = var_34_int == (int)1;
	if(var_57_bool != 0) {
		var_36_int = 0;
	} else {
		irand(var_36_int, var_34_int);
		var_64_int = "step_" + var_33_string;
		var_66_int = var_36_int + (int)1;
		var_37_string = var_64_int + var_66_int;
		var_67_string = GlobalVars[0];
		var_68_bool = var_37_string != var_67_string;
		if(var_68_bool != 0) {
			goto Label_2965;
		}
		goto Label_2953;

	}
Label_2965:
	var_59_int = "step_" + var_33_string;
	var_61_int = var_36_int + (int)1;
	var_38_string = var_59_int + var_61_int;
	PlaySound(var_38_string);
	var_62_string = GlobalVars[0];
	var_38_string = var_62_string;
	GlobalVars[0] = var_62_string;
	return 16;
	
}


func_1382(var_794_float)
{
	var_794_float = 0.02617993950843811;
	return 0;
}


func_1384()
{
	var_777_bool = 0; var_778_int = 0; var_779_bool = 0; var_780_int = 0;
	GetWeaponProperty(var_779_bool, "ammo", var_780_int);
	var_784_int = var_780_int - (int)1;
	SetWeaponProperty(var_779_bool, "ammo", var_784_int);
	return 4;
}


func_1394()
{
	var_817_bool = 0; var_818_bool = 0; var_819_bool = 0; var_820_bool = 0;
	GetWeaponProperty(var_819_bool, "ammo", var_820_bool);
	var_822_bool = 0;
	var_822_bool = 1;
	var_823_bool = var_819_bool == 0; //@nz
	if(var_823_bool != 1) {
		var_824_bool = var_820_bool == 0; //@nz
		if(var_824_bool != 1) {
			var_822_bool = 0;
		}
	}
	if(var_822_bool != 0) {
		var_825_bool = 0; var_826_string = ""; var_827_int = 0;
		func_2854(var_825_bool, "revolver_ammo", (int)6);
		if(var_825_bool != 0) {
			var_828_string = "";
			func_1425(var_828_string);
			var_830_int = var_828_string + "_reload";
			PlaySound(var_830_int);
			PlayAnimation("reload");
			WaitForAnimEnd();
		}
	}
	return 4;
}


func_906(var_504_bool)
{
	var_505_bool = 0; var_506_bool = 0;
	IsShooting(var_506_bool);
	var_506_bool = var_504_bool;
	return 2;
}


func_1932()
{
	var_970_cvector = CVector(0,0,0); var_971_cvector = CVector(0,0,0);
	var_972_float = GetByIndex(var_971_cvector, 1);
	SetByIndex(var_971_cvector, 1) = (float)0;
	var_973_float = GetByIndex(var_971_cvector, 0);
	SetByIndex(var_971_cvector, 0) = (float)0;
	var_974_float = GetByIndex(var_971_cvector, 2);
	SetByIndex(var_971_cvector, 2) = (float)0;
	CreateAttachPoint("flame", var_971_cvector);
	return 2;
}


func_911(var_548_string)
{
	var_548_string = "trost";
	return 0;
}


func_913(var_567_float, var_568_bool)
{
	var_569_bool = var_568_bool;
	if(var_569_bool != 0) {
		var_567_float = 0.30000001192092896;
	} else {
		var_567_float = 0.20000000298023224;
	}
	return 0;
	
}


func_1425(var_788_string)
{
	var_788_string = "revolver";
	return 0;
}


func_1427(var_793_float)
{
	var_793_float = 0.800000011920929;
	return 0;
}


func_1429(var_802_int)
{
	var_802_int = 0;
	return 0;
}


func_1431(var_804_int)
{
	var_804_int = 2;
	return 0;
}


func_920(var_572_float)
{
	var_572_float = 0.5;
	return 0;
}


func_1433(var_0_bool)
{
	var_720_string = ""; var_721_int = 0; var_722_string = ""; var_723_int = 0; var_724_bool = 0; var_725_float = 0; var_726_float = 0; var_727_cvector = CVector(0,0,0); var_728_object = Obj(); var_729_int = 0; var_730_cvector = CVector(0,0,0); var_731_object = Obj(); var_732_int = 0; var_733_cvector = CVector(0,0,0); var_734_float = 0; var_735_object = Obj(); var_736_object = Obj(); var_737_object = Obj(); var_738_object = Obj(); var_739_bool = 0; var_740_string = ""; var_741_int = 0; var_742_string = ""; var_743_int = 0; var_744_bool = 0; var_745_float = 0; var_746_float = 0; var_747_cvector = CVector(0,0,0); var_748_object = Obj(); var_749_int = 0; var_750_cvector = CVector(0,0,0); var_751_object = Obj(); var_752_int = 0; var_753_cvector = CVector(0,0,0); var_754_float = 0; var_755_object = Obj(); var_756_object = Obj(); var_757_object = Obj(); var_758_object = Obj(); var_759_bool = 0;
	var_0_bool = false;
	
Label_1435:
	var_760_bool = 0;
	func_1352(var_760_bool);
	var_774_bool = var_760_bool == 0; //@nz
	if(var_774_bool != 0) {
	} else {
		GetCurrentWeapon(var_740_string);
		irand(var_741_int, (int)2);
		var_742_string = "attack1";
		SetAttackState((bool)1);
		func_1384();
		var_786_int = var_742_string + "_phase1";
		PlayAnimation(var_786_int);
		WaitForAnimEnd();
		var_787_bool = var_0_bool;
		if(var_787_bool != 0) {
			return 40;
		}
		var_788_string = "";
		func_1425(var_788_string);
		var_790_int = var_788_string + "_shot";
		PlaySound(var_790_int);
		func_1602();
		SetAttackState((bool)0);
		func_1380((int)0);
		var_792_int = var_743_int;
		var_793_float = 0;
		func_1427(var_793_float);
		var_745_float = var_793_float / var_743_int;
		func_1382((float)0);
		var_794_float = var_746_float;
		GetDirection(var_747_cvector);
		func_2806(Obj());
		var_795_object = var_748_object;
		var_749_int = 0;

	Label_1495:
		var_796_bool = var_749_int < var_743_int;
		if(var_796_bool != 0) {
			RandVecCone3D(var_750_cvector, var_747_cvector, var_746_float);
			GetVictimMaterial(var_751_object, var_752_int, var_753_cvector, var_750_cvector);
			var_797_bool = var_751_object != 0; //@nn
			if(var_797_bool != 0) {
				var_798_float = 0; var_799_object = Obj(); var_800_float = 0; var_801_int = 0;
				var_751_object = var_799_object;
				var_745_float = var_800_float;
				func_1429((int)0);
				var_802_int = var_801_int;
				func_2687(var_798_float, var_799_object, var_800_float, var_801_int);
				var_798_float = var_754_float;
				var_803_float = var_754_float;
				if(var_803_float != 0) {
					@@var_748_object:add(var_751_object);
					var_804_int = 0;
					func_1431(var_804_int);
					ReportHit(var_751_object, var_804_int, var_754_float, var_745_float);
				} else {
					var_807_bool = var_752_int != (int)-1;
					if(var_807_bool == 0) goto Label_1541;
					var_808_bool = (bool)0 == 0; //@nz
					if(var_808_bool == 0) goto Label_1541;
					GetScene(var_755_object);
					AddActorByType(var_756_object, "scripted", var_755_object, var_753_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
					@@var_756_object:SetScriptProperty("Material", var_752_int);
					var_744_bool = 1;
					var_756_object = 0;
					var_755_object = 0;
		}
				@@var_748_object:iterator(var_757_object);

			Label_1547:
				@@var_757_object:Next(var_759_bool, var_758_object);
				var_813_bool = var_759_bool;
				if(var_813_bool != 0) {
					ReportAttack(var_758_object);
					BroadcastPlayerDamage(var_758_object);
					goto Label_1547;
				}
				var_815_int = var_742_string + "_phase2";
				PlayAnimation(var_815_int);
				WaitForAnimEnd();
				var_816_bool = var_0_bool;
				if(var_816_bool != 0) {
					return 40;
				}
				func_1394();
				var_758_object = 0;
				var_757_object = 0;
				var_748_object = 0;
				var_832_bool = 0;
				func_1603(var_832_bool);
				if(var_832_bool == 1) goto Label_1435;
			}
		}
	Label_1541:
		var_751_object = 0;
		var_749_int = var_749_int + (int)1;
		goto Label_1495;
	}
	return 40;
	
}


func_922(var_588_int)
{
	var_588_int = 1;
	return 0;
}


func_2456(var_24_string)
{
	var_26_bool = var_24_string == "empty";
	if(var_26_bool != 0) {
		var_27_float = 0;
		TaskCall(1);
		func_38(var_28_bool, var_29_bool, (float)0.25);
		TaskReturn();
	}
	return 0;
}


func_924(var_577_int)
{
	var_577_int = 0;
	return 0;
}


func_926(var_586_int)
{
	var_586_int = 0;
	return 0;
}


func_928(var_565_float, var_566_bool)
{
	var_567_float = 0; var_568_bool = 0;
	var_566_bool = var_568_bool;
	func_913(var_567_float, var_568_bool);
	var_570_float = 0; var_571_float = 0;
	func_920((float)0);
	var_572_float = var_571_float;
	func_2908(var_570_float, var_571_float);
	var_565_float = var_567_float * var_570_float;
	return 0;
}


func_2976()
{
	var_46_bool = 0; var_47_object = Obj(); var_48_object = Obj(); var_49_bool = 0; var_50_object = Obj(); var_51_object = Obj();
	IsDead(var_49_bool);
	var_52_bool = var_49_bool == 0; //@nz
	if(var_52_bool != 0) {
		SetDeathState();
		GetMainOutdoorScene(var_50_object);
		AddBlankActor(var_51_object, var_50_object, "player_death", "play_death_danko.bin");
		var_51_object = 0;
		var_50_object = 0;
	}
	return 6;
}


func_942()
{
	var_587_int = 0;
	func_922((int)0);
	var_588_int = var_587_int;
	func_2889(var_587_int);
	return 0;
}


func_2992()
{
	var_21_bool = 0; var_22_bool = 0;
	KillTimer((int)11, var_22_bool);
	var_24_bool = var_22_bool;
	if(var_24_bool != 0) {
		ModNoise((int)-2);
	}
	return 2;
}


func_950(var_0_bool)
{
	var_510_int = 0; var_511_string = ""; var_512_bool = 0; var_513_string = ""; var_514_int = 0; var_515_string = ""; var_516_float = 0; var_517_object = Obj(); var_518_bool = 0; var_519_cvector = CVector(0,0,0); var_520_cvector = CVector(0,0,0); var_521_float = 0; var_522_float = 0; var_523_int = 0; var_524_int = 0; var_525_string = ""; var_526_bool = 0; var_527_string = ""; var_528_int = 0; var_529_string = ""; var_530_float = 0; var_531_object = Obj(); var_532_bool = 0; var_533_cvector = CVector(0,0,0); var_534_cvector = CVector(0,0,0); var_535_float = 0; var_536_float = 0; var_537_int = 0;
	var_0_bool = false;
	
Label_953:
	(int)0 = (int)0 + (int)1;
	var_540_int = "attack" + var_524_int;
	var_525_string = var_540_int + "_phase1";
	HasAnimation(var_526_bool, var_525_string);
	var_542_bool = var_526_bool == 0; //@nz
	if(var_542_bool != 0) {
	} else {
				goto Label_953;
	}
	var_524_int = var_524_int + (int)-1;
	var_544_bool = var_524_int == 0; //@nz
	if(var_544_bool != 0) {
		return 28;
	}
Label_970:
	GetCurrentWeapon(var_527_string);
	irand(var_528_int, var_524_int);
	var_547_int = var_528_int + (int)1;
	var_529_string = "attack" + var_547_int;
	var_548_string = "";
	func_911(var_548_string);
	var_550_int = var_528_int + (int)1;
	var_551_int = var_548_string + var_550_int;
	PlaySound(var_551_int);
	SetAttackState((bool)1);
	var_554_int = var_529_string + "_phase1";
	PlayAnimation(var_554_int);
	WaitForAnimEnd();
	var_555_bool = var_0_bool;
	if(var_555_bool != 0) {
		return 28;
	}
	SetAttackState((bool)0);
	GetAttackDistance(var_530_float);
	GetVictim(var_530_float, var_531_object);
	var_557_bool = var_531_object != 0; //@nn
	if(var_557_bool != 0) {
		var_560_bool = IsFuncExist(var_531_object, "GetDirection", (int)1);
		if(var_560_bool != 0) {
			GetDirection(var_533_cvector);
			@@var_531_object:GetDirection(var_534_cvector);
			var_561_float = 0; var_562_cvector = CVector(0,0,0); var_563_cvector = CVector(0,0,0);
			var_533_cvector = var_562_cvector;
			var_534_cvector = var_563_cvector;
			func_2831(var_561_float, var_562_cvector, var_563_cvector);
			var_532_bool = var_561_float >= (float)0.4999999701976776;
		} else {
			var_532_bool = 0;

		}
		var_565_float = 0; var_566_bool = 0;
		var_532_bool = var_566_bool;
		func_928(var_565_float, var_566_bool);
		var_565_float = var_535_float;
		var_573_float = 0; var_574_object = Obj(); var_575_float = 0; var_576_int = 0;
		var_531_object = var_574_object;
		var_535_float = var_575_float;
		func_924((int)0);
		var_577_int = var_576_int;
		func_2687(var_573_float, var_574_object, var_575_float, var_576_int);
		var_573_float = var_536_float;
		var_578_float = var_536_float;
		if(var_578_float != 0) {
			irand(var_537_int, (int)2);
			var_580_string = "";
			func_911(var_580_string);
			var_582_int = var_580_string + "_hit";
			var_584_int = var_537_int + (int)1;
			var_585_int = var_582_int + var_584_int;
			PlaySound(var_585_int);
			ReportAttack(var_531_object);
			var_586_int = 0;
			func_926(var_586_int);
			ReportHit(var_531_object, var_586_int, var_536_float, var_535_float);
			BroadcastPlayerDamage(var_531_object);
		}
		func_942();
	}
	var_590_int = var_529_string + "_phase2";
	PlayAnimation(var_590_int);
	WaitForAnimEnd();
	var_591_bool = var_0_bool;
	if(var_591_bool != 0) {
		return 28;
	}
	var_531_object = 0;
	var_592_bool = 0;
	func_1107(var_592_bool);
	if(var_592_bool == 1) goto Label_970;
	return 28;
	
}


func_1978(var_0_bool, var_1_bool)
{
	var_1_bool = true;
	@@@var_0_bool:SetLength((float)0.0);
	return 0;
}


func_3002()
{
	func_2992();
	SetTimer((int)11, (float)0.15000000596046448);
	ModNoise((int)2);
	return 0;
}


func_3013()
{
	var_16_bool = 0; var_17_bool = 0;
	KillTimer((int)10, var_17_bool);
	var_19_bool = var_17_bool;
	if(var_19_bool != 0) {
		ModNoise((int)-1);
	}
	return 2;
}


func_3023()
{
	func_3013();
	SetTimer((int)10, (float)0.3499999940395355);
	ModNoise((int)1);
	return 0;
}


func_2005(var_0_bool, var_1_bool)
{
	var_75_object = Obj(); var_76_float = 0; var_77_float = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0; var_81_float = 0; var_82_float = 0; var_83_float = 0; var_84_object = Obj(); var_85_float = 0; var_86_float = 0; var_87_bool = 0; var_88_object = Obj(); var_89_bool = 0; var_90_float = 0; var_91_float = 0; var_92_float = 0;
	@@@var_0_bool:Intersect(var_84_object, var_85_float);
	var_93_bool = var_1_bool == 0; //@nz
	if(var_93_bool != 0) {
		var_94_float = 0; var_95_float = 0; var_96_float = 0;
		var_85_float = var_95_float;
		func_2777(var_94_float, var_95_float, (float)0.8333333134651184);
		@@@var_0_bool:SetLength(var_94_float);
	}
	func_2136((float)0);
	var_98_float = var_86_float;
	var_87_bool = 0;
	
Label_2022:
	@@var_84_object:Next(var_89_bool, var_88_object);
	var_99_bool = var_89_bool;
	if(var_99_bool != 0) {
		var_100_bool = 0;
		var_100_bool = 0;
		var_101_bool = var_88_object != 0; //@nn
		if(var_101_bool != 0) {
			var_102_object = Obj();
			func_2771(var_102_object);
			var_105_bool = var_88_object != var_102_object;
			if(var_105_bool != 0) {
				var_100_bool = 1;
			}
		}
		if(var_100_bool != 0) {
			var_106_float = 0; var_107_object = Obj(); var_108_float = 0; var_109_int = 0;
			var_88_object = var_107_object;
			var_86_float = var_108_float;
			func_2138((int)0);
			var_110_int = var_109_int;
			func_2687(var_106_float, var_107_object, var_108_float, var_109_int);
			var_106_float = var_90_float;
			var_162_bool = 0; var_163_object = Obj(); var_164_string = "";
			var_88_object = var_163_object;
			func_2649(var_162_bool, var_163_object, "disease");
			if(var_162_bool != 0) {
				@@var_88_object:GetProperty("disease", var_91_float);
				var_167_bool = var_91_float <= (float)0.10000000149011612;
				if(var_167_bool != 0) {
				} else {
					(float)0 = (float)0 - (float)0.10000000149011612;
	}
				var_178_bool = 0;
				var_178_bool = 0;
				var_179_bool = 0;
				var_179_bool = 0;
				var_180_bool = (bool)1;
				if(var_180_bool != 0) {
					var_181_bool = var_1_bool == 0; //@nz
					if(var_181_bool != 0) {
						var_179_bool = 1;
					}
				}
				if(var_179_bool != 0) {
					var_183_bool = var_85_float < (float)0.10000000149011612;
					if(var_183_bool != 0) {
						var_178_bool = 1;
					}
				}
				if(var_178_bool != 0) {
					var_184_float = 0; var_185_object = Obj(); var_186_float = 0; var_187_int = 0;
					func_2771(Obj());
					var_188_object = var_185_object;
					var_86_float = var_186_float;
					func_2138((int)0);
					var_189_int = var_187_int;
					func_2687(var_184_float, var_185_object, var_186_float, var_187_int);
				}
				var_190_bool = 0;
				func_2127(var_190_bool);
				var_197_bool = var_190_bool == 0; //@nz
				if(var_197_bool != 0) {
					var_1_bool = true;
				}
				return 18;
			}
			@@var_88_object:SetProperty("disease", var_91_float);
		}
		var_169_bool = 0; var_170_object = Obj(); var_171_string = "";
		var_88_object = var_170_object;
		func_2649(var_169_bool, var_170_object, "fire");
		if(var_169_bool != 0) {
			@@var_88_object:GetProperty("fire", var_92_float);
			var_175_int = var_92_float + (float)0.10000000149011612;
			@@var_88_object:SetProperty("fire", var_175_int);
		}
		ReportAttack(var_88_object);
		var_176_int = 0;
		func_2140(var_176_int);
		ReportHit(var_88_object, var_176_int, var_90_float, var_86_float);
		BroadcastPlayerDamage(var_88_object);
	}
	goto Label_2022;
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-9] = 0";


func_3034()
{
	func_2917();
	return 0;
}


func_3038()
{
	func_2917();
	func_2992();
	return 0;
}


func_504(var_328_bool)
{
	var_329_bool = 0; var_330_bool = 0;
	IsShooting(var_330_bool);
	var_330_bool = var_328_bool;
	return 2;
}


func_509(var_372_string)
{
	var_372_string = "hammer";
	return 0;
}


func_511(var_391_float, var_392_bool)
{
	var_393_bool = var_392_bool;
	if(var_393_bool != 0) {
		var_391_float = 0.6000000238418579;
	} else {
		var_391_float = 0.30000001192092896;
	}
	return 0;
	
}


