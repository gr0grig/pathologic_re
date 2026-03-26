// @IMPORTS: RemoveActor/1,Hold/0,StopGroup0/0,sync/0,SetRTEnvelope/2,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,SetTimer/2,SetAttackState/1,CanSee/2,WaitForAnimEnd/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,SendPlayerEnemy/2,GetGeometryLocator/4,GetScene/1,AddActorByType/6,PlayGlobalSound/4,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,IsPlayerActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,RotateAsync/2,GetEyesHeight/1,IsLoaded/1,AddItem/3,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,PlayGlobalMusic/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/4,ResetAAS/0,ReportReputationChange/3
// @STRINGS: W:cleanup|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_on|W:hunt|W:attack_off|W:@Stop hunt|W:attack_begin1|W:attack|W:light-dynamic|W:soldier_fire.xml|W:shot|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|A:in|W:quest_d10_01|W:soldier_fight|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rifle_ammo|W:rusk|W:bandage|W:tourniquet|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:reputation|W:bomber|W:hunter|W:grabitel|W:disease|W:dog
// @GLOBALS: 0:object:
// @RUN_OP: 0x290
// @RUN_TASK: 4
// @TASK_0: vars= params=0
// @EVENT_26: op=0x0 vars=string
// @EVENT_5: op=0x14 vars=
// @TASK_1: vars= params=1
// @EVENT_0: op=0x39 vars=object
// @EVENT_22: op=0xb8 vars=object,int,float,float
// @EVENT_16: op=0xba vars=object,string
// @EVENT_41: op=0xbc vars=object
// @TASK_2: vars=object params=1
// @EVENT_41: op=0xde vars=object
// @EVENT_3: op=0xe7 vars=object
// @EVENT_4: op=0xf0 vars=object
// @EVENT_17: op=0xfc vars=object
// @EVENT_30: op=0x110 vars=object,object,bool
// @EVENT_1: op=0x11d vars=object
// @EVENT_7: op=0x12b vars=int
// @TASK_3: vars=object,object,bool params=2
// @EVENT_3: op=0x1c6 vars=object
// @EVENT_1: op=0x1d4 vars=object
// @EVENT_17: op=0x266 vars=object
// @EVENT_30: op=0x27e vars=object,object,bool
// @TASK_4: vars=cvector,cvector,bool params=0
// @EVENT_0: op=0x29e vars=object
// @EVENT_26: op=0x2a9 vars=string
// @EVENT_17: op=0x2bf vars=object
// @EVENT_30: op=0x2c6 vars=object,object,bool
// @EVENT_3: op=0x2c8 vars=object
// @EVENT_1: op=0x2e8 vars=object
// @STANDALONE_EVENT_22: op=0x650 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x658 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x662 vars=object,string
// @STANDALONE_EVENT_41: op=0x66f vars=object
// @STANDALONE_EVENT_6: op=0x7d0 vars=
// @PE: 0x0,0x19,0x2a,0x9e,0xb8,0xba,0xbc,0xde,0xe7,0xf0,0xfc,0x110,0x11d,0x12b,0x1c6,0x1d4,0x266,0x27e,0x28b,0x2bf,0x2c6,0x2df,0x2e8,0x350,0x4e7,0x552,0x559,0x56f,0x578,0x582,0x5ca,0x648,0x650,0x658,0x66f,0x710,0x733,0x7a4,0x7d8

task_0_event_26(var_0_string, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_9_bool = var_7_bool == "cleanup";
	if(var_9_bool != 0) {
		var_10_object = Obj();
		func_1342(var_10_object);
		RemoveActor(var_10_object);
		Hold();
	}
	return 0;
}


task_0_event_5(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_0(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsOverrideActive(var_9_bool);
	var_10_bool = var_9_bool == 0; //@nz
	if(var_10_bool != 0) {
		var_11_object = Obj();
		var_7_bool = var_11_object;
		func_1482(var_11_object);
	}
	return 2;
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	return 0;
}


task_1_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_bool)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	func_214();
	var_7_bool = Obj();
	func_1647();
	return 0;
}


task_2_event_3(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = var_7_bool == var_0_object;
	if(var_8_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_2_event_4(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = var_7_bool == var_0_object;
	if(var_8_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_11_object = Obj();
		var_11_object = var_0_object;
		func_1165(var_11_object);
	}
	return 0;
}


	task_2_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_96_object)
	{
	var_97_bool = 0; var_98_object = Obj();
	var_96_object = var_98_object;
	func_1015(var_97_bool, var_98_object);
	var_125_bool = var_97_bool == 0; //@nz
	if(var_125_bool != 0) {
		var_126_object = Obj();
		var_96_object = var_126_object;
		func_1819(var_126_object);
		return 0;
	}
	func_214();
	var_142_object = Obj();
	var_96_object = var_142_object;
	func_1843(var_142_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0;
	var_7_cvector = var_11_object;
	var_8_cvector = var_12_object;
	var_9_bool = var_13_bool;
	func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool);
	if(var_10_bool != 0) {
		var_7_cvector = Obj();
		func_252();
	}
	return 0;
}


task_2_event_1(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0; var_9_object = Obj();
	var_7_bool = var_9_object;
	func_1934(var_8_bool, var_9_object);
	if(var_8_bool != 0) {
		func_214();
		var_128_object = Obj();
		var_7_bool = var_128_object;
		func_1956(var_128_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_int, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_9_bool = var_7_bool != (int)100;
	if(var_9_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


task_3_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0;
	var_8_bool = 0;
	var_9_object = var_2_object;
	if(var_9_object != 0) {
		var_10_bool = var_7_bool == var_0_object;
		if(var_10_bool != 0) {
			var_8_bool = 1;
		}
	}
	if(var_8_bool != 0) {
		var_11_object = Obj();
		var_11_object = var_0_object;
		func_1165(var_11_object);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_cvector, var_6_cvector, var_7_bool)
{
	var_8_bool = 0;
	var_8_bool = 0;
	var_9_object = var_2_object;
	if(var_9_object != 0) {
		var_10_bool = var_7_bool == var_0_object;
		if(var_10_bool != 0) {
			var_8_bool = 1;
		}
	}
	if(var_8_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_3_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_96_object)
	{
	var_97_bool = 0; var_98_object = Obj();
	var_96_object = var_98_object;
	func_1015(var_97_bool, var_98_object);
	var_125_bool = var_97_bool == 0; //@nz
	if(var_125_bool != 0) {
		return 0;
	}
	var_126_object = Obj();
	var_96_object = var_126_object;
	func_1819(var_126_object);
	var_141_bool = var_96_object == var_0_object;
	if(var_141_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_96_object;
		var_142_object = var_2_object;
		if(var_142_object == 0) goto Label_637;
		StopAnimation();
		StopGroup0();
	}
Label_637:
	return 0;
	
	}


task_3_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj(); var_13_bool = 0;
	var_7_cvector = var_11_object;
	var_8_cvector = var_12_object;
	var_9_bool = var_13_bool;
	func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool);
	if(var_10_bool != 0) {
		var_7_cvector = Obj();
		func_614();
	}
	return 0;
}


task_4_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_object = GlobalVars[0];
	@@var_10_object:in(var_9_bool, var_7_object);
	var_11_bool = var_9_bool == 0; //@nz
	if(var_11_bool != 0) {
		var_7_object = Obj();
		func_651();
	}
	return 2;
}


task_4_event_26(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_string)
{
	var_8_object = Obj(); var_9_object = Obj();
	var_11_bool = var_7_string == "attack";
	if(var_11_bool != 0) {
		func_877(Obj());
		var_12_object = var_9_object;
		func_842();
		var_16_object = Obj();
		var_9_object = var_16_object;
		func_1843(var_16_object);
		var_9_object = 0;
	} else {
		var_290_bool = var_7_string == "cleanup";
		if(var_290_bool == 0) goto Label_702;
		var_2_object = true;
	}
Label_702:
	return 2;
	
}


task_4_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_string = ""; var_10_string = "";
	func_1444(var_8_bool, "quest_d10_01", "soldier_fight");
	return 0;
}


task_4_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_bool)
{
	return 0;
}


task_4_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_bool = 0;
	var_10_bool = 0; var_11_object = Obj();
	var_7_object = var_11_object;
	func_1015(var_10_bool, var_11_object);
	var_44_bool = var_10_bool == 0; //@nz
	if(var_44_bool != 0) {
		return 2;
	}
	var_45_object = GlobalVars[0];
	@@var_45_object:in(var_9_bool, var_7_object);
	var_46_bool = var_9_bool;
	if(var_46_bool != 0) {
		func_842();
		var_47_object = Obj();
		var_7_object = var_47_object;
		TaskCall(2);
		func_190(var_48_object, var_47_object);
		TaskReturn();
	}
	return 2;
}


task_4_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_object = Obj();
	var_7_object = var_9_object;
	func_1934(var_8_bool, var_9_object);
	if(var_8_bool != 0) {
		func_842();
		var_127_object = Obj();
		var_7_object = var_127_object;
		func_1988(var_127_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_int, var_9_float, var_10_float)
{
	var_11_object = Obj(); var_12_int = 0; var_13_float = 0;
	var_7_object = var_11_object;
	var_8_int = var_12_int;
	var_9_float = var_13_float;
	func_1083(var_11_object, var_12_int, var_13_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_int, var_9_float, var_10_float, var_11_cvector, var_12_cvector)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0);
	var_7_object = var_13_object;
	var_8_int = var_14_int;
	var_9_float = var_15_float;
	var_11_cvector = var_16_cvector;
	var_12_cvector = var_17_cvector;
	func_1151(var_15_float, var_16_cvector, var_17_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object, var_8_string)
{
	var_9_float = 0; var_10_float = 0;
	var_12_bool = var_8_string == "health";
	if(var_12_bool != 0) {
		GetProperty("health", var_10_float);
		var_15_bool = var_10_float <= (int)0;
		if(var_15_bool != 0) {
			SignalDeath(var_7_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool, var_7_object)
{
	var_8_bool = 0; var_9_object = Obj();
	var_7_object = var_9_object;
	func_884(var_8_bool, var_9_object);
	if(var_8_bool != 0) {
		var_12_object = Obj();
		func_1342(var_12_object);
		ReportReputationChange(var_7_object, var_12_object, (float)0.0, (bool)1);
	}
	var_17_object = Obj();
	var_7_object = var_17_object;
	func_2008(var_17_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	var_7_object = Obj();
	func_1342(var_7_object);
	RemoveActor(var_7_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_cvector, var_5_cvector, var_6_bool)
{
	var_7_bool = 0;
	func_1183(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		TaskCall(0);
		func_12();
		TaskReturn();
	}
	func_735();
	return 0;
}


func_1665(var_16_bool, var_17_object, var_18_bool)
{
	var_19_string = ""; var_20_string = "";
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_17_object = var_22_object;
	func_889(var_21_bool, var_22_object, "class");
	var_30_bool = var_21_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	@@var_17_object:GetProperty("class", var_20_string);
	var_32_bool = 0;
	var_32_bool = 1;
	var_33_bool = 0;
	var_33_bool = 1;
	var_34_bool = 0;
	var_34_bool = 1;
	var_35_bool = 0;
	var_35_bool = 1;
	var_36_bool = 0;
	var_36_bool = 1;
	var_37_bool = 0;
	var_37_bool = 1;
	var_38_bool = 0;
	var_38_bool = 1;
	var_39_bool = 0;
	var_39_bool = 1;
	var_40_bool = 0;
	var_40_bool = 1;
	var_41_bool = 0;
	var_41_bool = 1;
	var_43_bool = var_20_string == "patrol";
	if(var_43_bool != 1) {
		var_45_bool = var_20_string == "sanitar";
		if(var_45_bool != 1) {
			var_41_bool = 0;
		}
	}
	if(var_41_bool != 1) {
		var_47_bool = var_20_string == "soldier";
		if(var_47_bool != 1) {
			var_40_bool = 0;
		}
	}
	if(var_40_bool != 1) {
		var_49_bool = var_20_string == "woman";
		if(var_49_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 1) {
		var_51_bool = var_20_string == "wasted_girl";
		if(var_51_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 1) {
		var_53_bool = var_20_string == "vaxxabitka";
		if(var_53_bool != 1) {
			var_37_bool = 0;
		}
	}
	if(var_37_bool != 1) {
		var_55_bool = var_20_string == "vaxxabit";
		if(var_55_bool != 1) {
			var_36_bool = 0;
		}
	}
	if(var_36_bool != 1) {
		var_57_bool = var_20_string == "little_girl";
		if(var_57_bool != 1) {
			var_35_bool = 0;
		}
	}
	if(var_35_bool != 1) {
		var_59_bool = var_20_string == "girl";
		if(var_59_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 1) {
		var_61_bool = var_20_string == "dohodyaga";
		if(var_61_bool != 1) {
			var_33_bool = 0;
		}
	}
	if(var_33_bool != 1) {
		var_63_bool = var_20_string == "nudegirl";
		if(var_63_bool != 1) {
			var_32_bool = 0;
		}
	}
	if(var_32_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	var_64_bool = var_18_bool;
	if(var_64_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_16_bool = 1;
	var_65_bool = 0;
	var_65_bool = 1;
	var_66_bool = 0;
	var_66_bool = 1;
	var_67_bool = 0;
	var_67_bool = 1;
	var_68_bool = 0;
	var_68_bool = 1;
	var_69_bool = 0;
	var_69_bool = 1;
	var_71_bool = var_20_string == "worker";
	if(var_71_bool != 1) {
		var_73_bool = var_20_string == "butcher";
		if(var_73_bool != 1) {
			var_69_bool = 0;
		}
	}
	if(var_69_bool != 1) {
		var_75_bool = var_20_string == "boy";
		if(var_75_bool != 1) {
			var_68_bool = 0;
		}
	}
	if(var_68_bool != 1) {
		var_77_bool = var_20_string == "unosha";
		if(var_77_bool != 1) {
			var_67_bool = 0;
		}
	}
	if(var_67_bool != 1) {
		var_79_bool = var_20_string == "wasted_male";
		if(var_79_bool != 1) {
			var_66_bool = 0;
		}
	}
	if(var_66_bool != 1) {
		var_81_bool = var_20_string == "alkash";
		if(var_81_bool != 1) {
			var_65_bool = 0;
		}
	}
	if(var_65_bool != 1) {
		var_83_bool = var_20_string == "morlok";
		if(var_83_bool != 1) {
			var_16_bool = 0;
		}
	}
	return 2;
}


func_1410(var_202_float, var_203_cvector, var_204_cvector)
{
	var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0);
	var_203_cvector = var_206_cvector;
	var_204_cvector = var_207_cvector;
	func_1391(var_205_float, var_206_cvector, var_207_cvector);
	var_214_float = 0; var_215_cvector = CVector(0,0,0);
	var_203_cvector = var_215_cvector;
	func_1400(var_214_float, var_215_cvector);
	var_223_float = 0; var_224_cvector = CVector(0,0,0);
	var_204_cvector = var_224_cvector;
	func_1400(var_223_float, var_224_cvector);
	var_225_float = var_214_float * var_223_float;
	var_202_float = var_205_float / var_225_float;
	return 0;
}


func_901(var_250_float, var_251_object, var_252_float, var_253_int)
{
	var_254_int = 0; var_255_string = ""; var_256_int = 0; var_257_float = 0; var_258_float = 0; var_259_float = 0; var_260_int = 0; var_261_string = ""; var_262_int = 0; var_263_float = 0; var_264_float = 0; var_265_float = 0;
	var_266_bool = 0; var_267_object = Obj(); var_268_string = "";
	var_251_object = var_267_object;
	func_889(var_266_bool, var_267_object, "health");
	var_269_bool = var_266_bool == 0; //@nz
	if(var_269_bool != 0) {
		var_250_float = 0.0;
		return 12;
	}
	var_270_bool = 0; var_271_object = Obj(); var_272_string = "";
	var_251_object = var_271_object;
	func_889(var_270_bool, var_271_object, "armor");
	var_273_bool = var_270_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_260_int = 0;
	} else {
			@@var_251_object:GetProperty("armor", var_260_int);
	}
	var_275_string = ""; var_276_int = 0;
	var_253_int = var_276_int;
	func_848(var_275_string, var_276_int);
	var_261_string = "armor_" + var_275_string;
	var_281_bool = 0; var_282_object = Obj(); var_283_string = "";
	var_251_object = var_282_object;
	var_261_string = var_283_string;
	func_889(var_281_bool, var_282_object, var_283_string);
	var_284_bool = var_281_bool == 0; //@nz
	if(var_284_bool != 0) {
		var_262_int = 0;
	} else {
		@@var_251_object:GetProperty(var_261_string, var_262_int);

	}
	var_285_float = 0; var_286_float = 0; var_287_float = 0;
	var_288_int = var_260_int + var_262_int;
	var_286_float = var_288_int / (float)100.0;
	func_1362(var_285_float, var_286_float, (float)1);
	var_285_float = var_263_float;
	@@var_251_object:GetProperty("health", var_264_float);
	var_293_int = (int)1 - var_263_float;
	var_265_float = var_252_float * var_293_int;
	var_295_float = 0; var_296_float = 0; var_297_float = 0; var_298_float = 0;
	var_296_float = var_264_float - var_265_float;
	func_1369(var_295_float, var_296_float, (float)0, (float)1);
	@@var_251_object:SetProperty("health", var_295_float);
	var_301_bool = 0; var_302_object = Obj();
	var_251_object = var_302_object;
	func_884(var_301_bool, var_302_object);
	if(var_301_bool != 0) {
		var_303_float = 0;
		var_303_float = -var_265_float;
		func_1427(var_303_float);
	}
	var_265_float = var_250_float;
	return 12;
	
}


func_1543()
{
	var_78_int = 0;
	func_1476(var_78_int);
	var_83_bool = var_78_int != (int)1;
	if(var_83_bool != 0) {
		return 0;
	}
	var_84_string = "";
	func_1526("liver");
	var_95_string = "";
	func_1526("kidney");
	var_96_string = "";
	func_1526("heart");
	var_97_string = "";
	func_1526("blood");
	return 0;
}


func_1801()
{
	var_13_object = GlobalVars[0];
	func_1385(Obj());
	var_14_object = var_13_object;
	GlobalVars[0] = var_13_object;
	return 0;
}


func_651()
{
	func_842();
	return 0;
}


func_12()
{
	
Label_12:
	Hold();
	var_11_bool = 0;
	func_1183(var_11_bool);
	var_12_bool = var_11_bool == 0; //@nz
	if(var_12_bool == 1) goto Label_12;
	return 0;
}


func_1165(var_326_object)
{
	var_327_cvector = CVector(0,0,0); var_328_cvector = CVector(0,0,0); var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0);
	@@var_326_object:GetPosition(var_330_cvector);
	GetPosition(var_331_cvector);
	var_332_cvector = var_330_cvector - var_331_cvector;
	var_333_float = GetByIndex(var_332_cvector, 0);
	var_334_float = GetByIndex(var_332_cvector, 2);
	RotateAsync(var_333_float, var_334_float);
	return 6;
}


func_1934(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0;
	var_12_bool = 0; var_13_object = Obj();
	var_9_object = var_13_object;
	func_1015(var_12_bool, var_13_object);
	var_46_bool = var_12_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_8_bool = 0;
		return 2;
	}
	var_47_object = GlobalVars[0];
	@@var_47_object:in(var_11_bool, var_9_object);
	var_48_bool = var_11_bool;
	if(var_48_bool != 0) {
		var_8_bool = 1;
		return 2;
	}
	var_49_bool = 0; var_50_object = Obj();
	var_9_object = var_50_object;
	func_1854(var_49_bool, var_50_object);
	var_49_bool = var_8_bool;
	return 2;
}


func_1039(var_24_object)
{
	var_25_bool = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = ""; var_32_bool = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = "";
	var_39_bool = var_24_object == 0; //@ne
	if(var_39_bool != 0) {
		return 14;
	}
	IsDead(var_32_bool);
	var_40_bool = var_32_bool;
	if(var_40_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_33_int);
	var_42_bool = var_33_int < (int)0;
	if(var_42_bool != 0) {
		return 14;
	}
	@@var_24_object:GetPosition(var_34_cvector);
	GetPosition(var_35_cvector);
	GetDirection(var_36_cvector);
	var_37_cvector = var_35_cvector - var_34_cvector;
	var_43_float = GetByIndex(var_37_cvector, 0);
	var_44_float = GetByIndex(var_36_cvector, 0);
	var_45_float = var_43_float * var_44_float;
	var_46_float = GetByIndex(var_37_cvector, 2);
	var_47_float = GetByIndex(var_36_cvector, 2);
	var_48_float = var_46_float * var_47_float;
	var_49_int = var_45_float + var_48_float;
	var_51_bool = var_49_int >= (int)0;
	if(var_51_bool != 0) {
		var_38_string = "fhit";
	} else {
		var_38_string = "bhit";
	}
	var_54_int = var_38_string + "1";
	var_56_int = var_38_string + "2";
	FadeSecondaryAnimation("hit_react", var_54_int, var_56_int, (int)-10);
	return 14;
	
}


func_1808(var_132_object, var_133_bool)
{
	var_134_object = Obj(); var_135_bool = 0;
	var_132_object = var_134_object;
	var_133_bool = var_135_bool;
	TaskCall(3);
	func_310(var_136_object, var_137_object, var_138_bool, var_134_object, var_135_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1427(var_303_float)
{
	var_304_object = Obj(); var_305_object = Obj();
	CreateFloatVector(var_305_object);
	@@var_305_object:add(var_303_float);
	var_307_bool = var_303_float < (int)0;
	if(var_307_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_305_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1176(var_241_float, var_242_object)
{
	var_243_float = 0; var_244_float = 0; var_245_float = 0; var_246_float = 0;
	GetEyesHeight(var_245_float);
	@@var_242_object:GetEyesHeight(var_246_float);
	var_241_float = var_246_float - var_245_float;
	return 4;
}


func_25(var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_884(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		func_1567();
	}
	func_1543();
	var_98_object = Obj();
	var_19_object = var_98_object;
	func_42(var_98_object);
	return 0;
}


func_1819(var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	var_20_bool = var_17_object == 0; //@ne
	if(var_20_bool != 0) {
		return 2;
	}
	var_21_object = GlobalVars[0];
	@@var_21_object:in(var_19_bool, var_17_object);
	var_22_bool = var_19_bool == 0; //@nz
	if(var_22_bool != 0) {
		var_23_object = GlobalVars[0];
		@@var_23_object:add(var_17_object);
	}
	var_24_bool = 0; var_25_object = Obj();
	var_17_object = var_25_object;
	func_884(var_24_bool, var_25_object);
	if(var_24_bool != 0) {
		var_28_object = Obj();
		func_1342(var_28_object);
		ReportReputationChange(var_17_object, var_28_object, (float)0.0);
	}
	return 2;
}


func_158(var_121_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_122_string = "";
	var_121_string = var_122_string;
	func_1214(var_122_string);
	PlayAnimation("all", var_121_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_121_string);
	RemoveEnvelope();
	return 0;
}


func_1183(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1567()
{
	var_22_int = 0; var_23_bool = 0; var_24_int = 0; var_25_bool = 0;
	ClearSubContainer((int)0);
	var_27_int = 0; var_28_int = 0;
	func_1495((int)500, (int)1000);
	var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0;
	func_1199("rifle_ammo", (int)1, (int)3, (int)3);
	var_62_string = ""; var_63_int = 0; var_64_int = 0; var_65_int = 0;
	func_1199("rusk", (int)1, (int)3, (int)2);
	var_66_string = ""; var_67_int = 0; var_68_int = 0;
	func_1188("bandage", (int)1, (int)6);
	var_75_string = ""; var_76_int = 0; var_77_int = 0;
	func_1188("tourniquet", (int)1, (int)6);
	return 4;
}


func_1956(var_128_object)
{
	var_129_object = Obj();
	var_128_object = var_129_object;
	func_1988(var_129_object);
	return 0;
}


func_1444(var_8_bool, var_9_string, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj();
	FindActor(var_12_object, var_9_string);
	var_13_bool = var_12_object == 0; //@ne
	if(var_13_bool != 0) {
		var_8_bool = 0;
		return 2;
	}
	Trigger(var_12_object, var_10_string);
	var_8_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1188(var_66_string, var_67_int, var_68_int)
{
	var_69_bool = 0; var_70_bool = 0;
	var_71_bool = 0; var_72_int = 0; var_73_int = 0;
	var_67_int = var_72_int;
	var_68_int = var_73_int;
	func_1380(var_71_bool, var_72_int, var_73_int);
	if(var_71_bool != 0) {
		AddItem(var_70_bool, var_66_string, (int)0);
	}
	return 2;
}


func_42(var_98_object)
{
	EventDisable(0);
	var_99_object = Obj();
	var_98_object = var_99_object;
	func_67(var_99_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_53:
	Hold();
	goto Label_53;
}
EMIT "Return(); Pop(0)";


func_1962(var_10_bool, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0;
	var_12_object = var_17_object;
	var_18_bool = !var_13_bool;
	func_1665(var_16_bool, var_17_object, var_18_bool);
	if(var_16_bool != 0) {
		CanSee(var_15_bool, var_11_object);
		var_84_bool = 0;
		var_84_bool = 1;
		var_85_bool = var_15_bool;
		if(var_85_bool != 1) {
			var_86_float = 0; var_87_object = Obj();
			var_11_object = var_87_object;
			func_869(var_86_float, var_87_object);
			var_95_bool = var_86_float <= (float)490000.0;
			if(var_95_bool != 1) {
				var_84_bool = 0;
			}
		}
		if(var_84_bool != 0) {
			var_10_bool = 1;
			return 2;
		}
	}
	var_10_bool = 0;
	return 2;
}


func_1199(var_46_string, var_47_int, var_48_int, var_49_int)
{
	var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0;
	var_54_bool = 0; var_55_int = 0; var_56_int = 0;
	var_47_int = var_55_int;
	var_48_int = var_56_int;
	func_1380(var_54_bool, var_55_int, var_56_int);
	if(var_54_bool != 0) {
		irand(var_52_int, var_49_int);
		var_61_int = var_52_int + (int)1;
		AddItem(var_53_bool, var_46_string, (int)0, var_61_int);
	}
	return 4;
}


func_1456(var_143_object)
{
	var_144_bool = 0; var_145_bool = 0;
	IsPlayerActor(var_143_object, var_145_bool);
	var_146_bool = var_145_bool;
	if(var_146_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1843(var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_1819(var_17_object);
	var_32_object = Obj(); var_33_bool = 0;
	var_16_object = var_32_object;
	func_1808(var_32_object, (bool)1);
	return 0;
}


func_310(var_0_object, var_1_object, var_2_object, var_134_object, var_135_bool)
{
	var_139_bool = 0; var_140_bool = 0; var_141_bool = 0; var_142_bool = 0;
	var_0_object = var_134_object;
	var_143_object = Obj();
	var_143_object = var_0_object;
	func_1456(var_143_object);
	func_1465();
	Face(var_0_object);
	var_154_bool = var_135_bool;
	if(var_154_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_336:
	var_160_bool = 0; var_161_object = Obj();
	var_161_object = var_0_object;
	func_1015(var_160_bool, var_161_object);
	if(var_160_bool != 0) {
		CanSee(var_142_bool, var_0_object);
		var_162_bool = var_142_bool;
		if(var_162_bool != 0) {
			var_163_object = Obj();
			var_163_object = var_0_object;
			func_1456(var_163_object);
			func_490(var_142_bool);
		} else {
				var_326_object = Obj();
				var_326_object = var_0_object;
				func_1165(var_326_object);
				var_2_object = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_141_bool);
				var_337_bool = var_141_bool == 0; //@nz
				if(var_337_bool != 0) {
					var_338_bool = var_1_object != 0; //@nn
					if(var_338_bool != 0) {
						func_485(var_141_bool, var_142_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_336;
				}
				var_341_bool = 0; var_342_object = Obj();
				var_342_object = var_0_object;
				func_1015(var_341_bool, var_342_object);
				var_343_bool = var_341_bool == 0; //@nz
				if(var_343_bool != 0) {
				} else {
					CanSee(var_142_bool, var_0_object);
					var_347_bool = var_142_bool;
					if(var_347_bool != 0) {
						var_2_object = false;
						Face(var_0_object);
						func_490(var_142_bool);
						goto Label_432;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_141_bool);
					var_351_bool = var_141_bool == 0; //@nz
					if(var_351_bool != 0) {
						var_352_bool = var_1_object != 0; //@nn
						if(var_352_bool != 0) {
							func_485(var_141_bool, var_142_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_336;
					}
					var_355_bool = 0; var_356_object = Obj();
					var_356_object = var_0_object;
					func_1015(var_355_bool, var_356_object);
					var_357_bool = var_355_bool == 0; //@nz
					if(var_357_bool != 0) {
						goto Label_442;
					}
					var_2_object = false;
					CanSee(var_142_bool, var_0_object);
					var_358_bool = var_142_bool;
					if(var_358_bool != 0) {
						Face(var_0_object);
						func_490(var_142_bool);
						goto Label_432;
					}
					goto Label_442;
				}
	}
		Label_442:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_432:
	var_324_bool = var_1_object != 0; //@nn
	if(var_324_bool != 0) {
		func_485(var_141_bool, var_142_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_336;
	
}


func_1465()
{
	var_148_object = Obj(); var_149_object = Obj();
	GetScene(var_149_object);
	var_151_object = Obj();
	func_1342(var_151_object);
	BroadcastMessage("battle", var_151_object, var_149_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1083(var_11_object, var_12_int, var_13_float)
{
	var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_int = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0);
	var_32_bool = 0;
	var_32_bool = 0;
	var_33_bool = 0;
	var_33_bool = 0;
	var_34_object = var_11_object;
	if(var_34_object != 0) {
		var_36_bool = var_12_int != (int)4;
		if(var_36_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_38_bool = var_12_int != (int)5;
		if(var_38_bool != 0) {
			var_32_bool = 1;
		}
	}
	if(var_32_bool != 0) {
		var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0);
		var_41_cvector = CVector(0,0,0); var_42_object = Obj();
		var_11_object = var_42_object;
		func_862(var_41_cvector, var_42_object);
		var_41_cvector = var_40_cvector;
		func_1348(var_39_cvector, var_40_cvector);
		var_39_cvector = var_23_cvector;
		CreateVectorVector(var_24_object);
		var_25_int = 1;

	Label_1112:
		var_53_int = "hit" + var_25_int;
		GetGeometryLocator(var_53_int, var_26_bool, var_27_cvector, var_28_cvector);
		var_54_bool = var_26_bool == 0; //@nz
		if(var_54_bool != 0) {
		} else {
			var_102_int = var_28_cvector | var_23_cvector;
			var_104_bool = var_102_int >= (float)0.7071067690849304;
			if(var_104_bool != 0) {
				@@var_24_object:add(var_27_cvector);
			}
			var_25_int = var_25_int + (int)1;
			goto Label_1112;
		}
		@@var_24_object:size(var_29_int);
		var_55_int = var_29_int;
		if(var_55_int != 0) {
			irand(var_30_int, var_29_int);
			@@var_24_object:get(var_31_cvector, var_30_int);
			var_56_object = Obj(); var_57_int = 0; var_58_float = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
			var_11_object = var_56_object;
			var_12_int = var_57_int;
			var_13_float = var_58_float;
			var_31_cvector = var_59_cvector;
			var_60_cvector = -var_23_cvector;
			func_1151(var_58_float, var_59_cvector, var_60_cvector);
			return 18;
		}
		var_24_object = 0;
	}
	var_101_object = Obj();
	var_11_object = var_101_object;
	func_1039(var_101_object);
	return 18;
	
}


func_1214(var_122_string)
{
	var_123_bool = 0; var_124_int = 0; var_125_bool = 0; var_126_int = 0; var_127_bool = 0; var_128_float = 0; var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0); var_131_bool = 0; var_132_int = 0; var_133_bool = 0; var_134_int = 0; var_135_bool = 0; var_136_float = 0; var_137_cvector = CVector(0,0,0); var_138_cvector = CVector(0,0,0);
	IsExisting3DSound(var_131_bool, var_122_string);
	var_139_bool = var_131_bool == 0; //@nz
	if(var_139_bool != 0) {
		var_132_int = 0;

	Label_1220:
		var_141_int = var_132_int + (int)1;
		var_142_int = var_122_string + var_141_int;
		IsExisting3DSound(var_133_bool, var_142_int);
		var_143_bool = var_133_bool == 0; //@nz
		if(var_143_bool != 0) {
		} else {
			var_132_int = var_132_int + (int)1;
			goto Label_1220;
		}
		var_144_bool = var_132_int == 0; //@nz
		if(var_144_bool != 0) {
			return 16;
		}
		irand(var_134_int, var_132_int);
		var_146_int = var_134_int + (int)1;
		var_122_string = var_122_string + var_146_int;
	}
	Is3DSoundLoaded(var_135_bool, var_122_string);
	var_147_bool = var_135_bool;
	if(var_147_bool != 0) {
		GetEyesHeight(var_136_float);
		GetDirection(var_137_cvector);
		var_138_cvector = var_137_cvector * (int)50;
		var_149_float = GetByIndex(var_138_cvector, 1);
		var_149_float = var_149_float + var_136_float;
		SetByIndex(var_138_cvector, 1) = var_149_float;
		PlayGlobalSound(var_122_string, var_138_cvector);
	}
	return 16;
	
}


func_1342(var_7_object)
{
	var_8_object = Obj(); var_9_object = Obj();
	self(var_9_object);
	var_9_object = var_7_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_190(var_0_object, var_47_object)
{
	var_49_bool = 0; var_50_bool = 0;
	var_0_object = var_47_object;
	Face(var_47_object);
	
Label_194:
	Sleep((float)0.5, var_50_bool);
	var_52_bool = 0;
	var_52_bool = 1;
	var_53_bool = var_50_bool == 0; //@nz
	if(var_53_bool != 1) {
		var_54_bool = 0; var_55_object = Obj();
		var_55_object = var_0_object;
		func_1015(var_54_bool, var_55_object);
		var_56_bool = var_54_bool == 0; //@nz
		if(var_56_bool != 1) {
			var_52_bool = 0;
		}
	}
	if(var_52_bool != 0) {
	} else {
		goto Label_194;
	}
	StopAsync();
	return 2;
	
}


func_1854(var_49_bool, var_50_object)
{
	var_51_float = 0; var_52_string = ""; var_53_float = 0; var_54_float = 0; var_55_string = ""; var_56_float = 0;
	var_57_bool = 0; var_58_object = Obj();
	var_50_object = var_58_object;
	func_1015(var_57_bool, var_58_object);
	var_59_bool = var_57_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_49_bool = 0;
		return 6;
	}
	var_60_bool = 0; var_61_object = Obj();
	var_50_object = var_61_object;
	func_884(var_60_bool, var_61_object);
	if(var_60_bool != 0) {
		@@var_50_object:GetProperty("reputation", var_54_float);
		var_49_bool = var_54_float < (float)0.33000001311302185;
		return 6;
	}
	var_66_bool = 0; var_67_object = Obj(); var_68_string = "";
	var_50_object = var_67_object;
	func_889(var_66_bool, var_67_object, "class");
	var_69_bool = var_66_bool == 0; //@nz
	if(var_69_bool != 0) {
		var_49_bool = 0;
		return 6;
	}
	@@var_50_object:GetProperty("class", var_55_string);
	var_71_bool = 0;
	var_71_bool = 1;
	var_72_bool = 0;
	var_72_bool = 1;
	var_74_bool = var_55_string == "bomber";
	if(var_74_bool != 1) {
		var_76_bool = var_55_string == "hunter";
		if(var_76_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 1) {
		var_78_bool = var_55_string == "grabitel";
		if(var_78_bool != 1) {
			var_71_bool = 0;
		}
	}
	if(var_71_bool != 0) {
		var_49_bool = 1;
		return 6;
	}
	var_79_bool = 0; var_80_object = Obj(); var_81_string = "";
	var_50_object = var_80_object;
	func_889(var_79_bool, var_80_object, "disease");
	var_82_bool = var_79_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_49_bool = 0;
		return 6;
	}
	var_83_bool = 0;
	var_83_bool = 1;
	var_84_bool = 0; var_85_string = "";
	var_55_string = var_85_string;
	func_1255(var_84_bool, var_85_string);
	if(var_84_bool != 1) {
		var_124_bool = var_55_string == "dog";
		if(var_124_bool != 1) {
			var_83_bool = 0;
		}
	}
	if(var_83_bool != 0) {
		@@var_50_object:GetProperty("disease", var_56_float);
		var_49_bool = var_56_float > (int)0;
		return 6;
	}
	var_49_bool = 0;
	return 6;
}


func_67(var_99_object)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_string = ""; var_105_object = Obj(); var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_string = ""; var_115_object = Obj(); var_116_bool = 0; var_117_bool = 0; var_118_float = 0; var_119_cvector = CVector(0,0,0);
	var_120_bool = var_99_object == 0; //@ne
	if(var_120_bool != 0) {
		var_121_string = "";
		func_158("fdie");
	} else {
		@@var_99_object:GetPosition(var_110_cvector);
		GetPosition(var_111_cvector);
		GetDirection(var_112_cvector);
		var_113_cvector = var_111_cvector - var_110_cvector;
		var_153_float = GetByIndex(var_113_cvector, 0);
		var_154_float = GetByIndex(var_112_cvector, 0);
		var_155_float = var_153_float * var_154_float;
		var_156_float = GetByIndex(var_113_cvector, 2);
		var_157_float = GetByIndex(var_112_cvector, 2);
		var_158_float = var_156_float * var_157_float;
		var_159_int = var_155_float + var_158_float;
		var_161_bool = var_159_int >= (int)0;
		if(var_161_bool != 0) {
			var_114_string = "fdie";
		} else {
				var_114_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_99_object = var_115_object;
		var_164_bool = IsFuncExist(var_99_object, "GetScriptProperty", (int)2);
		if(var_164_bool != 0) {
			@@var_99_object:HasScriptProperty(var_116_bool, "Owner");
			var_166_bool = var_116_bool;
			if(var_166_bool != 0) {
				@@var_99_object:GetScriptProperty(var_115_object, "Owner");
				var_168_bool = var_115_object == 0; //@ne
				if(var_168_bool != 0) {
					var_99_object = var_115_object;
				}
			}
		}
		var_171_bool = IsFuncExist(var_115_object, "@GetEyesHeight", (int)1);
		if(var_171_bool != 0) {
			@@var_115_object:GetEyesHeight(var_118_float);
			var_119_cvector = CVector(0.0, 0.0, 0.0);
			var_172_float = GetByIndex(var_119_cvector, 1);
			var_118_float = var_172_float;
			SetByIndex(var_119_cvector, 1) = var_172_float;
			LookAsync(var_99_object, "head", var_119_cvector);
			var_117_bool = 1;
		} else {
			var_117_bool = 0;

		}
		var_174_string = "";
		var_114_string = var_174_string;
		func_1214(var_174_string);
		PlayAnimation("all", var_114_string);
		WaitForAnimEnd();
		var_176_bool = var_117_bool;
		if(var_176_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_114_string);
		RemoveEnvelope();
		var_115_object = 0;
	}
	return 20;
	
}


func_1988(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0;
	var_130_object = GlobalVars[0];
	@@var_130_object:in(var_129_bool, var_127_object);
	var_131_bool = var_129_bool;
	if(var_131_bool != 0) {
		var_132_object = Obj(); var_133_bool = 0;
		var_127_object = var_132_object;
		func_1808(var_132_object, (bool)1);
	}
	return 2;
}


func_1348(var_39_cvector, var_40_cvector)
{
	var_47_float = 0; var_48_float = 0;
	var_49_int = var_40_cvector | var_40_cvector;
	var_48_float = sqrt(var_49_int);
	var_50_float = 9.999999974752427e-07;
	var_51_bool = var_48_float < var_50_float;
	if(var_51_bool != 0) {
		var_39_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_39_cvector = var_40_cvector / var_48_float;
	return 2;
}


func_1476(var_78_int)
{
	var_79_int = 0; var_80_int = 0;
	GetVariable("branch", var_80_int);
	var_80_int = var_78_int;
	return 2;
}


func_1603(var_39_int, var_40_string)
{
	var_41_int = 0; var_42_int = 0;
	GetInvItemByName(var_42_int, var_40_string);
	var_42_int = var_39_int;
	return 2;
}


func_1608(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(1);
	func_25(var_19_object);
	TaskReturn();
	return 0;
}


func_1482(var_11_object)
{
	var_12_int = 0;
	func_1476(var_12_int);
	var_17_bool = var_12_int == (int)1;
	if(var_17_bool != 0) {
		WorkWithCorpse(var_11_object);
	} else {
		Barter(var_11_object);
	}
	return 0;
	
}


func_842()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1358(var_29_float, var_30_cvector, var_31_cvector)
{
	var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0);
	var_33_cvector = var_31_cvector - var_30_cvector;
	var_29_float = var_33_cvector | var_33_cvector;
	return 2;
}


func_847()
{
	return 0;
}


func_848(var_275_string, var_276_int)
{
	var_278_bool = var_276_int == (int)2;
	if(var_278_bool != 0) {
		var_275_string = "fire";
		return 0;
	EMIT "GOTO 0x35c";
	}
	var_280_bool = var_276_int == (int)1;
	if(var_280_bool != 0) {
		var_275_string = "bullet";
		return 0;
	}
	var_275_string = "phys";
	return 0;
}


func_974(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_bool = 0;
	@@var_28_object:IsDead(var_30_bool);
	var_30_bool = var_27_bool;
	return 2;
}


func_1362(var_285_float, var_286_float, var_287_float)
{
	var_290_bool = var_286_float < var_287_float;
	if(var_290_bool != 0) {
		var_286_float = var_285_float;
	} else {
		var_287_float = var_285_float;
	}
	return 0;
	
}


func_979(var_16_bool, var_17_object)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj();
	var_22_bool = var_17_object == 0; //@ne
	if(var_22_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	var_23_bool = 0;
	var_23_bool = 0;
	var_26_bool = IsFuncExist(var_17_object, "IsDead", (int)1);
	if(var_26_bool != 0) {
		var_27_bool = 0; var_28_object = Obj();
		var_17_object = var_28_object;
		func_974(var_27_bool, var_28_object);
		if(var_27_bool != 0) {
			var_23_bool = 1;
		}
	}
	if(var_23_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	GetScene(var_20_object);
	var_31_bool = var_20_object == 0; //@ne
	if(var_31_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	@@var_17_object:GetScene(var_21_object);
	var_32_bool = var_20_object != var_21_object;
	if(var_32_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	var_16_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_214()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1495(var_27_int, var_28_int)
{
	var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_bool = 0;
	var_33_bool = var_27_int > var_28_int;
	if(var_33_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_31_int = 0;
	var_35_bool = var_27_int != var_28_int;
	if(var_35_bool != 0) {
		var_36_int = var_28_int - var_27_int;
		irand(var_31_int, var_36_int);
	} else {
		var_45_bool = var_27_int == (int)0;
		if(var_45_bool == 0) goto Label_1513;
		return 4;
	}
Label_1513:
	var_31_int = var_31_int + var_27_int;
	var_38_bool = var_31_int == (int)0;
	if(var_38_bool != 0) {
		return 4;
	}
	var_39_int = 0; var_40_string = "";
	func_1603(var_39_int, "Money");
	AddItem(var_32_bool, var_39_int, (int)0, var_31_int);
	return 4;
	
}


func_2008(var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_1608(var_18_object);
	return 0;
}


func_1369(var_295_float, var_296_float, var_297_float, var_298_float)
{
	var_299_bool = var_296_float < var_297_float;
	if(var_299_bool != 0) {
		var_297_float = var_295_float;
		return 0;
	}
	var_300_bool = var_296_float > var_298_float;
	if(var_300_bool != 0) {
		var_298_float = var_295_float;
		return 0;
	}
	var_296_float = var_295_float;
	return 0;
}


func_862(var_41_cvector, var_42_object)
{
	var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	GetPosition(var_45_cvector);
	@@var_42_object:GetPosition(var_46_cvector);
	var_41_cvector = var_46_cvector - var_45_cvector;
	return 4;
}


func_735()
{
	func_1801();
	
Label_738:
	func_758(var_5_cvector, var_6_bool);
	goto Label_738;
}
EMIT "Return(); Pop(0)";


func_1380(var_54_bool, var_55_int, var_56_int)
{
	var_57_int = 0; var_58_int = 0;
	irand(var_58_int, var_56_int);
	var_54_bool = var_58_int < var_55_int;
	return 2;
}


func_485(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_869(var_86_float, var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	GetPosition(var_91_cvector);
	@@var_87_object:GetPosition(var_92_cvector);
	var_93_cvector = var_92_cvector - var_91_cvector;
	var_86_float = var_93_cvector | var_93_cvector;
	return 6;
}


func_743()
{
	return 0;
}


func_1255(var_84_bool, var_85_string)
{
	var_84_bool = 1;
	var_86_bool = 0;
	var_86_bool = 1;
	var_87_bool = 0;
	var_87_bool = 1;
	var_88_bool = 0;
	var_88_bool = 1;
	var_89_bool = 0;
	var_89_bool = 1;
	var_90_bool = 0;
	var_90_bool = 1;
	var_91_bool = 0;
	var_91_bool = 1;
	var_92_bool = 0;
	var_92_bool = 1;
	var_93_bool = 0;
	var_93_bool = 1;
	var_94_bool = 0;
	var_94_bool = 1;
	var_95_bool = 0;
	var_95_bool = 1;
	var_96_bool = 0;
	var_96_bool = 1;
	var_98_bool = var_85_string == "woman";
	if(var_98_bool != 1) {
		var_100_bool = var_85_string == "worker";
		if(var_100_bool != 1) {
			var_96_bool = 0;
		}
	}
	if(var_96_bool != 1) {
		var_102_bool = var_85_string == "butcher";
		if(var_102_bool != 1) {
			var_95_bool = 0;
		}
	}
	if(var_95_bool != 1) {
		var_104_bool = var_85_string == "wasted_girl";
		if(var_104_bool != 1) {
			var_94_bool = 0;
		}
	}
	if(var_94_bool != 1) {
		var_106_bool = var_85_string == "boy";
		if(var_106_bool != 1) {
			var_93_bool = 0;
		}
	}
	if(var_93_bool != 1) {
		var_108_bool = var_85_string == "vaxxabitka";
		if(var_108_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 1) {
		var_110_bool = var_85_string == "unosha";
		if(var_110_bool != 1) {
			var_91_bool = 0;
		}
	}
	if(var_91_bool != 1) {
		var_112_bool = var_85_string == "wasted_male";
		if(var_112_bool != 1) {
			var_90_bool = 0;
		}
	}
	if(var_90_bool != 1) {
		var_114_bool = var_85_string == "alkash";
		if(var_114_bool != 1) {
			var_89_bool = 0;
		}
	}
	if(var_89_bool != 1) {
		var_116_bool = var_85_string == "dohodyaga";
		if(var_116_bool != 1) {
			var_88_bool = 0;
		}
	}
	if(var_88_bool != 1) {
		var_118_bool = var_85_string == "vaxxabit";
		if(var_118_bool != 1) {
			var_87_bool = 0;
		}
	}
	if(var_87_bool != 1) {
		var_120_bool = var_85_string == "nudegirl";
		if(var_120_bool != 1) {
			var_86_bool = 0;
		}
	}
	if(var_86_bool != 1) {
		var_122_bool = var_85_string == "morlok";
		if(var_122_bool != 1) {
			var_84_bool = 0;
		}
	}
	return 0;
}


func_1385(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	CreateObjectSet(var_16_object);
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_490(var_0_object)
{
	var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_bool = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_object = Obj(); var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_object = Obj(); var_173_int = 0; var_174_cvector = CVector(0,0,0); var_175_float = 0; var_176_object = Obj(); var_177_object = Obj(); var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_bool = 0; var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_object = Obj(); var_184_object = Obj(); var_185_cvector = CVector(0,0,0); var_186_object = Obj(); var_187_int = 0; var_188_cvector = CVector(0,0,0); var_189_float = 0; var_190_object = Obj(); var_191_object = Obj();
	var_192_object = Obj();
	var_192_object = var_0_object;
	func_1456(var_192_object);
	ReportAttack(var_0_object);
	var_193_bool = 0; var_194_object = Obj();
	var_194_object = var_0_object;
	func_884(var_193_bool, var_194_object);
	if(var_193_bool != 0) {
		var_195_object = Obj();
		func_1342(var_195_object);
		SendPlayerEnemy(var_0_object, var_195_object);
	}
	GetDirection(var_178_cvector);
	var_196_cvector = CVector(0,0,0); var_197_object = Obj();
	var_197_object = var_0_object;
	func_862(var_196_cvector, var_197_object);
	var_196_cvector = var_179_cvector;
	var_202_float = 0; var_203_cvector = CVector(0,0,0); var_204_cvector = CVector(0,0,0);
	var_178_cvector = var_203_cvector;
	var_179_cvector = var_204_cvector;
	func_1410(var_202_float, var_203_cvector, var_204_cvector);
	var_227_bool = var_202_float < (float)0.9993908405303955;
	if(var_227_bool != 0) {
		return 28;
	}
	func_1465();
	PlayAnimation("all", "attack_begin1");
	GetGeometryLocator("attack", var_180_bool, var_181_cvector, var_182_cvector);
	var_231_bool = var_180_bool;
	if(var_231_bool != 0) {
		GetScene(var_184_object);
		AddActorByType(var_183_object, "light-dynamic", var_184_object, var_181_cvector, var_182_cvector, "soldier_fire.xml");
		var_184_object = 0;
		var_183_object = 0;
	} else {
				WaitForAnimEnd();
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	GetDirection(var_178_cvector);
	var_238_cvector = CVector(0,0,0); var_239_object = Obj();
	var_239_object = var_0_object;
	func_862(var_238_cvector, var_239_object);
	var_238_cvector = var_179_cvector;
	var_240_float = GetByIndex(var_179_cvector, 1);
	var_241_float = 0; var_242_object = Obj();
	var_242_object = var_0_object;
	func_1176(var_241_float, var_242_object);
	var_240_float = var_240_float + var_241_float;
	SetByIndex(var_179_cvector, 1) = var_240_float;
	RandVecCone3D(var_185_cvector, var_179_cvector, (float)0.03490658476948738);
	GetVictimMaterial(var_185_cvector, var_186_object, var_187_int, var_188_cvector);
	var_248_bool = var_186_object != 0; //@nn
	if(var_248_bool != 0) {
		var_249_bool = var_186_object == var_0_object;
		if(var_249_bool != 0) {
			var_250_float = 0; var_251_object = Obj(); var_252_float = 0; var_253_int = 0;
			var_251_object = var_0_object;
			func_901(var_250_float, var_251_object, (float)1.5, (int)1);
			var_250_float = var_189_float;
			ReportHit(var_0_object, (int)2, var_189_float, (float)1.5);
		} else {
			var_319_bool = var_187_int != (int)-1;
			if(var_319_bool == 0) goto Label_602;
			GetScene(var_190_object);
			AddActorByType(var_191_object, "scripted", var_190_object, var_188_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_191_object:SetScriptProperty("Material", var_187_int);
			var_191_object = 0;
			var_190_object = 0;

		}
	}
Label_602:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 28;
	
}
EMIT "Stack[-6] = 0";


func_877(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, "player");
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1391(var_205_float, var_206_cvector, var_207_cvector)
{
	var_208_float = GetByIndex(var_206_cvector, 0);
	var_209_float = GetByIndex(var_207_cvector, 0);
	var_210_float = var_208_float * var_209_float;
	var_211_float = GetByIndex(var_206_cvector, 2);
	var_212_float = GetByIndex(var_207_cvector, 2);
	var_213_float = var_211_float * var_212_float;
	var_205_float = var_210_float + var_213_float;
	return 0;
}


func_884(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_bool = 0;
	IsPlayerActor(var_9_object, var_11_bool);
	var_11_bool = var_8_bool;
	return 2;
}


func_758(var_0_object, var_1_object)
{
	var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_object = Obj(); var_21_int = 0; var_22_bool = 0; var_23_cvector = CVector(0,0,0); var_24_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_763:
	func_847();
	irand(var_21_int, (int)10);
	var_27_int = var_21_int + (int)5;
	Sleep(var_27_int, var_22_bool);
	var_28_bool = var_22_bool;
	if(var_28_bool != 0) {
		func_743();
	} else {
		func_847();
		GetPFPosition(var_23_cvector);
		var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
		var_30_cvector = var_1_object;
		var_23_cvector = var_31_cvector;
		func_1358(var_29_float, var_30_cvector, var_31_cvector);
		var_35_bool = var_29_float > (int)40000;
		if(var_35_bool != 0) {
			FindPathTo(var_24_object, var_1_object);
			var_36_bool = var_24_object != 0; //@nn
			if(var_36_bool != 0) {
				RotatePath(var_24_object, var_22_bool);
				var_37_bool = var_22_bool == 0; //@nz
				if(var_37_bool != 0) {
				} else {
					FollowPath(var_24_object, (bool)0, var_22_bool);
					var_39_bool = var_22_bool == 0; //@nz
					if(var_39_bool != 0) {
						goto Label_839;
					}
					var_40_float = GetByIndex(var_0_object, 0);
					var_41_float = GetByIndex(var_0_object, 2);
					Rotate(var_40_float, var_41_float, var_22_bool);
					var_42_bool = var_22_bool == 0; //@nz
					if(var_42_bool != 0) {
						goto Label_839;
					}
					WaitForAnimEnd(var_22_bool);
					var_43_bool = var_22_bool == 0; //@nz
					if(var_43_bool != 0) {
						goto Label_839;
					}
					goto Label_840;
				EMIT "GOTO 0x338";
			}
				Sleep((int)1);
				var_24_object = 0;
				goto Label_839;
		}
			var_45_float = GetByIndex(var_0_object, 0);
			var_46_float = GetByIndex(var_0_object, 2);
			Rotate(var_45_float, var_46_float, var_22_bool);
			var_47_bool = var_22_bool == 0; //@nz
			if(var_47_bool != 0) {
				goto Label_839;
			}
			WaitForAnimEnd(var_22_bool);
			var_48_bool = var_22_bool == 0; //@nz
			if(var_48_bool != 0) {
				goto Label_839;
			}
			goto Label_840;
		}
	Label_839:
		goto Label_779;
	}
Label_840:
	goto Label_763;
	
}
EMIT "Return(); Pop(8)";


func_1015(var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj();
	var_13_object = var_17_object;
	func_979(var_16_bool, var_17_object);
	var_33_bool = var_16_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	var_34_bool = 0; var_35_object = Obj(); var_36_string = "";
	var_13_object = var_35_object;
	func_889(var_34_bool, var_35_object, "noaccess");
	var_43_bool = var_34_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_12_bool = 1;
		return 2;
	}
	@@var_13_object:GetProperty("noaccess", var_15_int);
	var_12_bool = var_15_int == (int)0;
	return 2;
}


func_1400(var_214_float, var_215_cvector)
{
	var_216_float = GetByIndex(var_215_cvector, 0);
	var_217_float = GetByIndex(var_215_cvector, 0);
	var_218_float = var_216_float * var_217_float;
	var_219_float = GetByIndex(var_215_cvector, 2);
	var_220_float = GetByIndex(var_215_cvector, 2);
	var_221_float = var_219_float * var_220_float;
	var_222_int = var_218_float + var_221_float;
	var_214_float = sqrt(var_222_int);
	return 0;
}


func_889(var_34_bool, var_35_object, var_36_string)
{
	var_37_bool = 0; var_38_bool = 0;
	var_41_bool = IsFuncExist(var_35_object, "HasProperty", (int)2);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		var_34_bool = 0;
		return 2;
	}
	@@var_35_object:HasProperty(var_36_string, var_38_bool);
	var_38_bool = var_34_bool;
	return 2;
}


func_1526(var_84_string)
{
	var_85_object = Obj(); var_86_int = 0; var_87_bool = 0; var_88_object = Obj(); var_89_int = 0; var_90_bool = 0;
	CreateInvItem(var_88_object);
	@@var_88_object:SetItemName(var_84_string);
	@@var_88_object:SetProperty("Organ", (int)1);
	@@var_88_object:GetItemID(var_89_int);
	AddItem(var_90_bool, var_88_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1151(var_13_object, var_16_cvector, var_17_cvector)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj();
	GetScene(var_20_object);
	AddActorByType(var_21_object, "scripted", var_20_object, var_16_cvector, var_17_cvector, "blood_dir.xml");
	var_24_object = Obj();
	var_13_object = var_24_object;
	func_1039(var_24_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


