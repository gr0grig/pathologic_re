// @IMPORTS: SensePlayerOnly/1,Sleep/1,IsPlayerActor/2,Hold/0,IsLoaded/1,RemoveActor/1,FindActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,AddItem/3,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,Trace/1,AddItem/4,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:quest_d4_03|W:gang_attack|W:cleanup|W:restore|W:player|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|W:Knife|W:lockpick|W:grabitel_mark|W:death
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_17: op=0xe vars=object
// @EVENT_1: op=0x1e vars=object
// @EVENT_3: op=0x2e vars=object
// @EVENT_26: op=0x3e vars=string
// @EVENT_6: op=0x6d vars=
// @TASK_1: vars=object,int,int,bool,float,int params=0
// @EVENT_6: op=0x91 vars=
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_6: op=0x32f vars=
// @EVENT_7: op=0x368 vars=int
// @EVENT_1: op=0x383 vars=object
// @EVENT_2: op=0x392 vars=object
// @EVENT_10: op=0x418 vars=object
// @EVENT_41: op=0x423 vars=object
// @TASK_3: vars= params=1
// @EVENT_6: op=0x440 vars=
// @EVENT_0: op=0x457 vars=object
// @EVENT_22: op=0x4d6 vars=object,int,float,float
// @EVENT_16: op=0x4d8 vars=object,string
// @EVENT_41: op=0x4da vars=object
// @STANDALONE_EVENT_22: op=0x75b vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x763 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x76d vars=object,string
// @STANDALONE_EVENT_41: op=0x77a vars=object
// @PE: 0x3e,0x8b,0x8e,0x327,0x368,0x383,0x392,0x406,0x418,0x423,0x42c,0x437,0x448,0x4bc,0x4d6,0x4d8,0x4da,0x4dc,0x67a,0x681,0x691,0x6f5,0x744,0x75b,0x763,0x77a

task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_bool, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_string = ""; var_16_string = "";
		func_1743(var_14_bool, "quest_d4_03", "gang_attack");
		TaskCall(1);
		func_127();
		TaskReturn();
	}
	return 2;
}


task_0_event_1(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_bool, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_string = ""; var_16_string = "";
		func_1743(var_14_bool, "quest_d4_03", "gang_attack");
		TaskCall(1);
		func_127();
		TaskReturn();
	}
	return 2;
}


task_0_event_3(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_bool, var_12_bool);
	var_13_bool = var_12_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_string = ""; var_16_string = "";
		func_1743(var_14_bool, "quest_d4_03", "gang_attack");
		TaskCall(1);
		func_127();
		TaskReturn();
	}
	return 2;
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_12_bool = var_10_bool == "attack";
	if(var_12_bool != 0) {
		TaskCall(1);
		func_127();
		TaskReturn();
	} else {
		var_517_string = "";
		var_10_bool = var_517_string;
		func_81(var_10_bool, var_517_string);
	}
	return 0;
	
}


task_0_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_0_bool;
	if(var_11_bool != 0) {
		var_12_bool = 0;
		func_125(var_12_bool);
		if(var_12_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_13_object = Obj();
		func_1642(var_13_object);
		RemoveActor(var_13_object);
	}
	return 0;
}


task_1_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj();
	func_1642(var_10_object);
	RemoveActor(var_10_object);
	Hold();
	return 0;
}


task_2_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj();
	func_1642(var_10_object);
	RemoveActor(var_10_object);
	Hold();
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_int)
{
	var_12_bool = var_10_int == (int)1;
	if(var_12_bool != 0) {
		var_13_object = Obj();
		var_13_object = var_1_object;
		func_1755(var_13_object);
	} else {
		var_18_int = 0;
		var_10_int = var_18_int;
		func_1030(var_9_bool, var_10_int, var_18_int);
	}
	return 0;
	
}


task_2_event_1(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_bool = var_2_int == 0; //@nz
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = true;
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1579(var_14_object);
	}
	return 0;
}


task_2_event_2(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_1_object == var_10_object;
	if(var_12_bool != 0) {
		var_13_int = var_2_int;
		if(var_13_int != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	RequestClearPath(var_10_object);
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	func_886(var_10_object);
	var_10_object = Obj();
	func_1914();
	return 0;
}


task_3_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_object = Obj();
	func_1642(var_10_object);
	RemoveActor(var_10_object);
	Hold();
	return 0;
}


task_3_event_0(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_object = var_14_object;
		func_1781(var_14_object);
	}
	return 2;
}


task_3_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	return 0;
}


task_3_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1486(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1554(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_string)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_string == "health";
	if(var_15_bool != 0) {
		GetProperty("health", var_13_float);
		var_18_bool = var_13_float <= (int)0;
		if(var_18_bool != 0) {
			SignalDeath(var_10_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1860(var_11_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	SensePlayerOnly((bool)1);
	EventDisable(3);
	EventDisable(1);
	Sleep((float)1.5);
	EventEnable(3);
	EventEnable(1);
	func_77();
	return 0;
}


func_1665(var_51_float, var_52_float, var_53_float, var_54_float)
{
	var_55_bool = var_52_float < var_53_float;
	if(var_55_bool != 0) {
		var_53_float = var_51_float;
		return 0;
	}
	var_56_bool = var_52_float > var_54_float;
	if(var_56_bool != 0) {
		var_54_float = var_51_float;
		return 0;
	}
	var_52_float = var_51_float;
	return 0;
}


func_1282(var_33_bool, var_34_object, var_35_string, var_36_float, var_37_float, var_38_float)
{
	var_39_float = 0; var_40_float = 0;
	var_41_bool = 0; var_42_object = Obj(); var_43_string = "";
	var_34_object = var_42_object;
	var_35_string = var_43_string;
	func_1270(var_41_bool, var_42_object, var_43_string);
	var_50_bool = var_41_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_33_bool = 0;
		return 2;
	}
	@@var_34_object:GetProperty(var_35_string, var_40_float);
	var_51_float = 0; var_52_float = 0; var_53_float = 0; var_54_float = 0;
	var_52_float = var_40_float + var_36_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	func_1665(var_51_float, var_52_float, var_53_float, var_54_float);
	@@var_34_object:SetProperty(var_35_string, var_51_float);
	var_33_bool = 1;
	return 2;
}


func_1794(var_66_int, var_67_int)
{
	var_68_int = 0; var_69_bool = 0; var_70_int = 0; var_71_bool = 0;
	var_72_bool = var_66_int > var_67_int;
	if(var_72_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_70_int = 0;
	var_74_bool = var_66_int != var_67_int;
	if(var_74_bool != 0) {
		var_75_int = var_67_int - var_66_int;
		irand(var_70_int, var_75_int);
	} else {
		var_84_bool = var_66_int == (int)0;
		if(var_84_bool == 0) goto Label_1812;
		return 4;
	}
Label_1812:
	var_70_int = var_70_int + var_66_int;
	var_77_bool = var_70_int == (int)0;
	if(var_77_bool != 0) {
		return 4;
	}
	var_78_int = 0; var_79_string = "";
	func_1855(var_78_int, "Money");
	AddItem(var_71_bool, var_78_int, (int)0, var_70_int);
	return 4;
	
}


func_1030(var_0_bool, var_1_object, var_18_int)
{
	var_20_bool = var_18_int != (int)0;
	if(var_20_bool != 0) {
		return 0;
	}
	var_21_bool = 0; var_22_object = Obj();
	var_22_object = var_1_object;
	func_1068(var_21_bool, var_22_object);
	var_57_bool = var_21_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1418(var_23_bool, var_24_object)
{
	var_25_int = 0; var_26_int = 0;
	var_27_bool = 0; var_28_object = Obj();
	var_24_object = var_28_object;
	func_1382(var_27_bool, var_28_object);
	var_44_bool = var_27_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_23_bool = 0;
		return 2;
	}
	var_45_bool = 0; var_46_object = Obj(); var_47_string = "";
	var_24_object = var_46_object;
	func_1270(var_45_bool, var_46_object, "noaccess");
	var_54_bool = var_45_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_23_bool = 1;
		return 2;
	}
	@@var_24_object:GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == (int)0;
	return 2;
}


func_139(var_391_float)
{
	var_391_float = 0.10000000149011612;
	return 0;
}


func_1676(var_90_bool, var_91_int, var_92_int)
{
	var_93_int = 0; var_94_int = 0;
	irand(var_94_int, var_92_int);
	var_90_bool = var_94_int < var_91_int;
	return 2;
}


func_142(var_398_int)
{
	var_398_int = 1;
	return 0;
}


func_1681(var_22_bool, var_23_object, var_24_float)
{
	var_25_bool = var_23_object == 0; //@nz
	if(var_25_bool != 0) {
		var_22_bool = 0;
		return 0;
	}
	var_27_bool = var_24_float > (int)0;
	if(var_27_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_58_bool = var_24_float < (int)0;
		if(var_58_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1702;
		}
		var_22_bool = 0;
		return 0;
	}
Label_1702:
	var_29_float = 0;
	var_24_float = var_29_float;
	func_1733(var_29_float);
	var_33_bool = 0; var_34_object = Obj(); var_35_string = ""; var_36_float = 0; var_37_float = 0; var_38_float = 0;
	var_23_object = var_34_object;
	var_24_float = var_36_float;
	func_1282(var_33_bool, var_34_object, "reputation", var_36_float, (float)0, (float)1);
	var_22_bool = 1;
	return 0;
	
}


func_1554(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1442(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_663(var_0_bool, var_297_bool)
{
	var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_float = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0; var_307_float = 0;
	var_308_bool = 0; var_309_object = Obj();
	var_309_object = var_0_bool;
	func_1418(var_308_bool, var_309_object);
	var_310_bool = var_308_bool == 0; //@nz
	if(var_310_bool != 0) {
		var_297_bool = 0;
		return 10;
	}
	var_311_bool = 0;
	func_752(var_307_float, var_311_bool);
	if(var_311_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_303_cvector);
		GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		@@@var_0_bool:GetAttackDistance(var_307_float);
		var_307_float = var_307_float + (int)50;
		var_313_float = var_307_float * var_307_float;
		var_297_bool = var_306_float <= var_313_float;
		return 10;
	}
	var_297_bool = 0;
	return 10;
}


func_1304(var_394_float, var_395_object, var_396_float, var_397_int)
{
	var_401_int = 0; var_402_string = ""; var_403_int = 0; var_404_float = 0; var_405_float = 0; var_406_float = 0; var_407_int = 0; var_408_string = ""; var_409_int = 0; var_410_float = 0; var_411_float = 0; var_412_float = 0;
	var_413_bool = 0; var_414_object = Obj(); var_415_string = "";
	var_395_object = var_414_object;
	func_1270(var_413_bool, var_414_object, "health");
	var_416_bool = var_413_bool == 0; //@nz
	if(var_416_bool != 0) {
		var_394_float = 0.0;
		return 12;
	}
	var_417_bool = 0; var_418_object = Obj(); var_419_string = "";
	var_395_object = var_418_object;
	func_1270(var_417_bool, var_418_object, "armor");
	var_420_bool = var_417_bool == 0; //@nz
	if(var_420_bool != 0) {
		var_407_int = 0;
	} else {
			@@var_395_object:GetProperty("armor", var_407_int);
	}
	var_422_string = ""; var_423_int = 0;
	var_397_int = var_423_int;
	func_1244(var_422_string, var_423_int);
	var_408_string = "armor_" + var_422_string;
	var_428_bool = 0; var_429_object = Obj(); var_430_string = "";
	var_395_object = var_429_object;
	var_408_string = var_430_string;
	func_1270(var_428_bool, var_429_object, var_430_string);
	var_431_bool = var_428_bool == 0; //@nz
	if(var_431_bool != 0) {
		var_409_int = 0;
	} else {
		@@var_395_object:GetProperty(var_408_string, var_409_int);

	}
	var_432_float = 0; var_433_float = 0; var_434_float = 0;
	var_435_int = var_407_int + var_409_int;
	var_433_float = var_435_int / (float)100.0;
	func_1658(var_432_float, var_433_float, (float)1);
	var_432_float = var_410_float;
	@@var_395_object:GetProperty("health", var_411_float);
	var_440_int = (int)1 - var_410_float;
	var_412_float = var_396_float * var_440_int;
	var_442_float = 0; var_443_float = 0; var_444_float = 0; var_445_float = 0;
	var_443_float = var_411_float - var_412_float;
	func_1665(var_442_float, var_443_float, (float)0, (float)1);
	@@var_395_object:SetProperty("health", var_442_float);
	var_448_bool = 0; var_449_object = Obj();
	var_395_object = var_449_object;
	func_1265(var_448_bool, var_449_object);
	if(var_448_bool != 0) {
		var_450_float = 0;
		var_450_float = -var_412_float;
		func_1716(var_450_float);
	}
	var_412_float = var_394_float;
	return 12;
	
}


func_153(var_0_bool, var_3_int, var_5_bool, var_22_object, var_23_bool, var_24_float, var_131_bool, var_223_bool)
{
	var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_bool = 0; var_35_float = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_bool = 0; var_46_float = 0;
	func_382(var_44_cvector, var_45_bool, var_46_float);
	var_5_bool = 0;
	var_71_bool = IsFuncExist(var_22_object, "@GetAttackDistance", (int)1);
	if(var_71_bool != 0) {
		@@var_22_object:GetAttackDistance(var_36_float);
		var_36_float = var_36_float + (int)50;
	} else {
							var_24_float = var_36_float;
	}
	var_74_bool = var_36_float >= (int)150;
	if(var_74_bool != 0) {
		var_36_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_22_object;
	IsPlayerActor(var_0_bool, var_39_bool);
	var_75_bool = var_39_bool;
	if(var_75_bool != 0) {
		PlayGlobalMusic("attack");
		var_77_object = Obj();
		func_1642(var_77_object);
		SendPlayerEnemy(var_22_object, var_77_object);
	}
	var_80_bool = var_23_bool;
	if(var_80_bool != 0) {
		var_40_bool = 0;
	} else {
						var_40_bool = 1;

	}
	var_41_float = (float)400.0 + var_36_float;
	
Label_193:
	var_82_bool = 0;
	var_82_bool = 0;
	var_83_bool = 0; var_84_object = Obj();
	var_84_object = var_0_bool;
	func_1418(var_83_bool, var_84_object);
	if(var_83_bool != 0) {
		var_117_bool = var_3_int == 0; //@nz
		if(var_117_bool != 0) {
			var_82_bool = 1;
		}
	}
	if(var_82_bool != 0) {
		func_795(var_46_float);
		@@@var_0_bool:GetPFPosition(var_37_cvector);
		GetPFPosition(var_38_cvector);
		var_42_cvector = var_37_cvector - var_38_cvector;
		var_43_float = var_42_cvector | var_42_cvector;
		var_123_float = var_41_float * var_41_float;
		var_124_bool = var_43_float >= var_123_float;
		if(var_124_bool != 0) {
			var_125_bool = 0; var_126_object = Obj(); var_127_float = 0; var_128_float = 0; var_129_bool = 0; var_130_bool = 0;
			var_126_object = var_0_bool;
			var_36_float = var_127_float;
			TaskCall(2);
			func_823(var_133_bool, var_125_bool, var_126_object, var_127_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_208_bool = var_131_bool == 0; //@nz
			if(var_208_bool != 0) {
			} else {
				var_40_bool = 0;
		} else {
				var_214_float = var_24_float * var_24_float;
				var_215_bool = var_43_float >= var_214_float;
				if(var_215_bool != 0) {
					@@@var_0_bool:GetPFPosition(var_44_cvector);
					CanReachByPF(var_45_bool, var_44_cvector);
					var_216_bool = var_45_bool == 0; //@nz
					if(var_216_bool != 0) {
						var_217_bool = 0; var_218_object = Obj(); var_219_float = 0; var_220_float = 0; var_221_bool = 0; var_222_bool = 0;
						var_218_object = var_0_bool;
						var_36_float = var_219_float;
						TaskCall(2);
						func_823(var_225_bool, var_217_bool, var_218_object, var_219_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_226_bool = var_223_bool == 0; //@nz
						if(var_226_bool != 0) {
							goto Label_365;
						}
						var_40_bool = 0;
						goto Label_193;
					}
					var_227_bool = var_40_bool == 0; //@nz
					if(var_227_bool != 0) {
						var_228_object = Obj();
						var_228_object = var_0_bool;
						func_1568(var_228_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_795(var_46_float);
						StopAsync();
						var_40_bool = 1;
						var_239_bool = 0; var_240_object = Obj();
						var_240_object = var_0_bool;
						func_1418(var_239_bool, var_240_object);
						var_241_bool = var_239_bool == 0; //@nz
						if(var_241_bool != 0) {
							goto Label_365;
						}
					}
					rand(var_46_float);
					var_242_bool = 0;
					var_244_bool = var_46_float < (float)0.25;
					if(var_244_bool != 1) {
						var_245_bool = 0;
						func_752((bool)1, var_245_bool);
						if(var_245_bool != 1) {
							var_242_bool = 0;
						}
					}
					if(var_242_bool != 0) {
						Face(var_0_bool);
						func_802();
						PlayAnimation("all", "attack_stay");
						var_282_bool = 0; var_283_float = 0;
						var_24_float = var_283_float;
						func_620(var_46_float, var_282_bool, var_283_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_795(var_46_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_504_bool = 0;
						func_752(var_46_float, var_504_bool);
						var_505_bool = var_504_bool == 0; //@nz
						if(var_505_bool == 0) goto Label_355;
						var_506_bool = 0; var_507_object = Obj();
						var_507_object = var_0_bool;
						func_1418(var_506_bool, var_507_object);
						var_508_bool = var_506_bool == 0; //@nz
						if(var_508_bool != 0) {
							goto Label_365;
						}
						@@@var_0_bool:GetPFPosition(var_37_cvector);
						GetPFPosition(var_38_cvector);
						var_42_cvector = var_37_cvector - var_38_cvector;
						var_43_float = var_42_cvector | var_42_cvector;
						var_509_float = var_24_float * var_24_float;
						var_510_bool = var_43_float < var_509_float;
						if(var_510_bool == 0) goto Label_355;
						var_511_bool = 0; var_512_float = 0;
						var_24_float = var_512_float;
						func_456(var_45_bool, var_46_float, var_511_bool, var_512_float);
						var_513_bool = var_511_bool == 0; //@nz
						if(var_513_bool == 0) goto Label_355;
						goto Label_365;
				}
					var_514_bool = 0; var_515_float = 0;
					var_24_float = var_515_float;
					func_456(var_45_bool, var_46_float, var_514_bool, var_515_float);
					var_516_bool = var_514_bool == 0; //@nz
					if(var_516_bool != 0) {
						goto Label_365;
					}
					var_40_bool = 1;

				}
			Label_355:
				goto Label_364;
		}
		Label_364:
			goto Label_193;

		}
	}
Label_365:
	WaitForAnimEnd();
	var_209_int = var_3_int;
	if(var_209_int != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_212_bool = var_39_bool;
	if(var_212_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_795(var_0_bool)
{
	var_118_object = Obj();
	var_118_object = var_0_bool;
	func_1755(var_118_object);
	return 0;
}


func_1052(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1568(var_228_object)
{
	var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0);
	@@var_228_object:GetPosition(var_232_cvector);
	GetPosition(var_233_cvector);
	var_234_cvector = var_232_cvector - var_233_cvector;
	var_235_float = GetByIndex(var_234_cvector, 0);
	var_236_float = GetByIndex(var_234_cvector, 2);
	RotateAsync(var_235_float, var_236_float);
	return 6;
}


func_800(var_459_int)
{
	var_459_int = 0;
	return 0;
}


func_802()
{
	var_251_string = "";
	func_1601("attack_stay");
	return 0;
}


func_417(var_0_bool, var_380_float, var_381_int)
{
	var_382_object = Obj(); var_383_float = 0; var_384_float = 0; var_385_object = Obj(); var_386_float = 0; var_387_float = 0;
	var_389_float = var_380_float * (float)0.8999999761581421;
	GetVictim(var_389_float, var_385_object);
	ReportAttack(var_0_bool);
	var_390_bool = var_385_object == var_0_bool;
	if(var_390_bool != 0) {
		var_391_float = 0; var_392_object = Obj(); var_393_int = 0;
		var_385_object = var_392_object;
		var_381_int = var_393_int;
		func_139(var_393_int);
		var_391_float = var_386_float;
		var_394_float = 0; var_395_object = Obj(); var_396_float = 0; var_397_int = 0;
		var_385_object = var_395_object;
		var_386_float = var_396_float;
		var_398_int = 0; var_399_object = Obj(); var_400_int = 0;
		var_385_object = var_399_object;
		var_381_int = var_400_int;
		func_142(var_400_int);
		var_398_int = var_397_int;
		func_1304(var_394_float, var_395_object, var_396_float, var_397_int);
		var_394_float = var_387_float;
		var_459_int = 0;
		func_800(var_459_int);
		ReportHit(var_0_bool, var_459_int, var_387_float, var_386_float);
		var_460_object = Obj(); var_461_float = 0;
		var_385_object = var_460_object;
		var_387_float = var_461_float;
		func_807();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_928(var_0_bool, var_1_string, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool)
{
	var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj(); var_168_bool = 0; var_169_bool = 0; var_170_object = Obj(); var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_float = 0; var_175_object = Obj();
	var_0_bool = false;
	var_1_string = var_155_object;
	var_159_bool = var_169_bool;
	
Label_932:
	var_176_bool = 0; var_177_object = Obj();
	var_155_object = var_177_object;
	func_1068(var_176_bool, var_177_object);
	var_180_bool = var_176_bool == 0; //@nz
	if(var_180_bool != 0) {
		var_154_bool = 0;
		return 16;
	}
	@@var_155_object:GetPosition(var_171_cvector);
	GetPosition(var_172_cvector);
	var_173_cvector = var_171_cvector - var_172_cvector;
	var_174_float = var_173_cvector | var_173_cvector;
	var_181_bool = 0;
	var_181_bool = 0;
	var_183_bool = var_157_float > (int)0;
	if(var_183_bool != 0) {
		var_184_float = var_157_float * var_157_float;
		var_185_bool = var_174_float > var_184_float;
		if(var_185_bool != 0) {
			var_181_bool = 1;
		}
	}
	if(var_181_bool != 0) {
		Stop();
		var_154_bool = 0;
		return 16;
	}
	var_186_float = var_156_float * var_156_float;
	var_187_bool = var_174_float > var_186_float;
	if(var_187_bool != 0) {
		@@var_155_object:GetPFPosition(var_171_cvector);
		FindPathTo(var_175_object, var_171_cvector);
		var_188_bool = var_175_object != 0; //@nn
		if(var_188_bool != 0) {
			var_175_object = var_170_object;
			var_175_object = 0;
		}
		var_189_bool = var_170_object != 0; //@nn
		if(var_189_bool != 0) {
			var_190_bool = var_169_bool;
			if(var_190_bool == 0) goto Label_981;
			var_169_bool = 0;
			RotatePath(var_170_object, var_168_bool);
			var_191_bool = var_168_bool == 0; //@nz
			if(var_191_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_194_string = "";
				func_1075(var_194_string);
				var_195_string = "";
				func_1077(var_195_string);
				FollowPath(var_170_object, var_158_bool, var_168_bool, var_194_string, var_195_string);
				var_196_bool = var_168_bool == 0; //@nz
				if(var_196_bool != 0) {
					var_197_bool = var_0_bool;
					if(var_197_bool != 0) {
						var_170_object = 0;
						goto Label_1028;
					EMIT "GOTO 0x3e9";
					}
				} else {
					var_170_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_168_bool);
					var_200_bool = var_168_bool == 0; //@nz
					if(var_200_bool != 0) {
						var_201_bool = var_0_bool;
						if(var_201_bool != 0) {
							var_170_object = 0;
							goto Label_1028;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1028;
	}
			var_175_object = 0;
			goto Label_1026;

		Label_1026:
			var_170_object = 0;

		}
		goto Label_932;
	}
Label_1028:
	var_154_bool = !var_0_bool;
	return 16;
	
}


func_1825()
{
	var_61_int = 0; var_62_bool = 0; var_63_int = 0; var_64_bool = 0;
	ClearSubContainer((int)0);
	var_66_int = 0; var_67_int = 0;
	func_1794((int)300, (int)750);
	var_85_string = ""; var_86_int = 0; var_87_int = 0;
	func_1590("Knife", (int)1, (int)8);
	var_96_string = ""; var_97_int = 0; var_98_int = 0;
	func_1590("lockpick", (int)1, (int)6);
	var_99_int = 0; var_100_string = "";
	func_1855(var_99_int, "grabitel_mark");
	AddItem(var_64_bool, var_99_int, (int)0, (int)1);
	return 4;
}


func_1442(var_27_object)
{
	var_28_bool = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = ""; var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = "";
	var_42_bool = var_27_object == 0; //@ne
	if(var_42_bool != 0) {
		return 14;
	}
	IsDead(var_35_bool);
	var_43_bool = var_35_bool;
	if(var_43_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_36_int);
	var_45_bool = var_36_int < (int)0;
	if(var_45_bool != 0) {
		return 14;
	}
	@@var_27_object:GetPosition(var_37_cvector);
	GetPosition(var_38_cvector);
	GetDirection(var_39_cvector);
	var_40_cvector = var_38_cvector - var_37_cvector;
	var_46_float = GetByIndex(var_40_cvector, 0);
	var_47_float = GetByIndex(var_39_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_40_cvector, 2);
	var_50_float = GetByIndex(var_39_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_41_string = "fhit";
	} else {
		var_41_string = "bhit";
	}
	var_57_int = var_41_string + "1";
	var_59_int = var_41_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 14;
	
}


func_807()
{
	return 0;
}


func_809(var_484_bool)
{
	var_484_bool = 1;
	return 0;
}


func_811(var_376_int)
{
	var_376_int = 1;
	return 0;
}


func_1579(var_14_object)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0);
	@@var_14_object:GetEyesHeight(var_17_float);
	var_18_cvector = CVector(0.0, 0.0, 0.0);
	var_19_float = GetByIndex(var_18_cvector, 1);
	var_17_float = var_19_float;
	SetByIndex(var_18_cvector, 1) = var_19_float;
	LookAsync(var_14_object, "head", var_18_cvector);
	return 4;
}


func_813(var_371_float)
{
	var_371_float = 0.5;
	return 0;
}


func_1068(var_21_bool, var_22_object)
{
	var_23_bool = 0; var_24_object = Obj();
	var_22_object = var_24_object;
	func_1418(var_23_bool, var_24_object);
	var_23_bool = var_21_bool;
	return 0;
}


func_691(var_295_bool)
{
	var_296_bool = 0;
	var_296_bool = 0;
	var_297_bool = 0;
	func_663(var_296_bool, var_297_bool);
	if(var_297_bool != 0) {
		var_314_bool = 0;
		func_707(var_295_bool, var_296_bool, var_314_bool);
		if(var_314_bool != 0) {
			var_296_bool = 1;
		}
	}
	if(var_296_bool != 0) {
		var_295_bool = 1;
		return 0;
	}
	var_295_bool = 0;
	return 0;
}


func_1075(var_194_string)
{
	var_194_string = "walk";
	return 0;
}


func_1077(var_195_string)
{
	var_195_string = "run";
	return 0;
}


func_1716(var_450_float)
{
	var_451_object = Obj(); var_452_object = Obj();
	CreateFloatVector(var_452_object);
	@@var_452_object:add(var_450_float);
	var_454_bool = var_450_float < (int)0;
	if(var_454_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_452_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_823(var_2_object, var_125_bool, var_126_object, var_127_float, var_128_float, var_129_bool, var_130_bool)
{
	var_134_bool = 0; var_135_bool = 0; var_136_bool = 0; var_137_bool = 0;
	var_138_object = Obj();
	var_126_object = var_138_object;
	func_1755(var_138_object);
	SetTimer((int)1, (int)5);
	CanSee(var_136_bool, var_126_object);
	var_141_bool = var_136_bool;
	if(var_141_bool != 0) {
		var_2_object = true;
		var_142_object = Obj();
		var_126_object = var_142_object;
		func_1579(var_142_object);
	} else {
		var_2_object = false;
	}
	var_149_bool = 0; var_150_object = Obj();
	var_126_object = var_150_object;
	func_1265(var_149_bool, var_150_object);
	if(var_149_bool != 0) {
		var_153_object = Obj();
		func_1642(var_153_object);
		SendPlayerEnemy(var_126_object, var_153_object);
	}
	var_154_bool = 0; var_155_object = Obj(); var_156_float = 0; var_157_float = 0; var_158_bool = 0; var_159_bool = 0;
	var_126_object = var_155_object;
	var_127_float = var_156_float;
	var_128_float = var_157_float;
	var_129_bool = var_158_bool;
	var_130_bool = var_159_bool;
	func_928(var_136_bool, var_137_bool, var_154_bool, var_155_object, var_156_float, var_157_float, var_158_bool, var_159_bool);
	var_154_bool = var_137_bool;
	var_205_object = var_2_object;
	if(var_205_object != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_137_bool = var_125_bool;
	return 4;
	
}


func_1590(var_85_string, var_86_int, var_87_int)
{
	var_88_bool = 0; var_89_bool = 0;
	var_90_bool = 0; var_91_int = 0; var_92_int = 0;
	var_86_int = var_91_int;
	var_87_int = var_92_int;
	func_1676(var_90_bool, var_91_int, var_92_int);
	if(var_90_bool != 0) {
		AddItem(var_89_bool, var_85_string, (int)0);
	}
	return 2;
}


func_1079(var_60_object)
{
	func_1825();
	var_103_object = Obj();
	var_60_object = var_103_object;
	func_1096(var_103_object);
	return 0;
}


func_1212(var_126_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_127_string = "";
	var_126_string = var_127_string;
	func_1601(var_127_string);
	PlayAnimation("all", var_126_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_126_string);
	RemoveEnvelope();
	return 0;
}


func_1855(var_78_int, var_79_string)
{
	var_80_int = 0; var_81_int = 0;
	GetInvItemByName(var_81_int, var_79_string);
	var_81_int = var_78_int;
	return 2;
}


func_1601(var_127_string)
{
	var_128_bool = 0; var_129_int = 0; var_130_bool = 0; var_131_int = 0; var_132_bool = 0; var_133_float = 0; var_134_cvector = CVector(0,0,0); var_135_cvector = CVector(0,0,0); var_136_bool = 0; var_137_int = 0; var_138_bool = 0; var_139_int = 0; var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0);
	IsExisting3DSound(var_136_bool, var_127_string);
	var_144_bool = var_136_bool == 0; //@nz
	if(var_144_bool != 0) {
		var_137_int = 0;

	Label_1607:
		var_146_int = var_137_int + (int)1;
		var_147_int = var_127_string + var_146_int;
		IsExisting3DSound(var_138_bool, var_147_int);
		var_148_bool = var_138_bool == 0; //@nz
		if(var_148_bool != 0) {
		} else {
			var_137_int = var_137_int + (int)1;
			goto Label_1607;
		}
		var_149_bool = var_137_int == 0; //@nz
		if(var_149_bool != 0) {
			return 16;
		}
		irand(var_139_int, var_137_int);
		var_151_int = var_139_int + (int)1;
		var_127_string = var_127_string + var_151_int;
	}
	Is3DSoundLoaded(var_140_bool, var_127_string);
	var_152_bool = var_140_bool;
	if(var_152_bool != 0) {
		GetEyesHeight(var_141_float);
		GetDirection(var_142_cvector);
		var_143_cvector = var_142_cvector * (int)50;
		var_154_float = GetByIndex(var_143_cvector, 1);
		var_154_float = var_154_float + var_141_float;
		SetByIndex(var_143_cvector, 1) = var_154_float;
		PlayGlobalSound(var_127_string, var_143_cvector);
	}
	return 16;
	
}


func_707(var_0_bool, var_4_int, var_314_bool)
{
	var_315_object = Obj(); var_316_bool = 0; var_317_float = 0; var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0); var_320_object = Obj(); var_321_bool = 0; var_322_float = 0; var_323_cvector = CVector(0,0,0); var_324_cvector = CVector(0,0,0);
	GetScene(var_320_object);
	var_321_bool = 0;
	
Label_711:
	var_325_cvector = CVector(0,0,0); var_326_object = Obj();
	var_326_object = var_0_bool;
	func_1258(var_325_cvector, var_326_object);
	var_331_int = -var_325_cvector;
	FindDirLength(var_322_float, var_331_int, var_4_int);
	var_332_bool = var_322_float < var_4_int;
	if(var_332_bool != 0) {
	} else {
		Face(var_0_bool);
		PlayAnimation("all", "bjump");
		@@@var_0_bool:GetPFPosition(var_323_cvector);
		GetPFPosition(var_324_cvector);
		WaitForAnimEnd();
		func_795(var_324_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_321_bool = 1;
		var_336_bool = 0;
		func_663(var_324_cvector, var_336_bool);
		var_337_bool = var_336_bool == 0; //@nz
		if(var_337_bool != 0) {
			goto Label_749;
		}
		goto Label_711;
	}
Label_749:
	var_321_bool = var_314_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1860(var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1743(var_12_bool, "quest_d4_03", "death");
	var_18_bool = 0; var_19_object = Obj();
	var_11_object = var_19_object;
	func_1265(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		var_22_bool = 0; var_23_object = Obj(); var_24_float = 0;
		var_11_object = var_23_object;
		func_1681(var_22_bool, var_23_object, (float)0.029999999329447746);
	}
	var_60_object = Obj();
	var_11_object = var_60_object;
	TaskCall(3);
	func_1079(var_60_object);
	TaskReturn();
	return 0;
}


func_1733(var_29_float)
{
	var_30_object = Obj(); var_31_object = Obj();
	CreateFloatVector(var_31_object);
	@@var_31_object:add(var_29_float);
	SendWorldWndMessage((int)16, var_31_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_456(var_0_bool, var_1_string, var_343_bool, var_344_float)
{
	var_345_int = 0; var_346_bool = 0; var_347_int = 0; var_348_string = ""; var_349_int = 0; var_350_bool = 0; var_351_int = 0; var_352_string = "";
	func_795(var_352_string);
	irand(var_349_int, var_1_string);
	var_349_int = var_349_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	func_1764();
	var_361_int = "attack_begin" + var_349_int;
	PlayAnimation("all", var_361_int);
	WaitForAnimEnd();
	func_763(var_351_int, var_352_string);
	var_377_bool = 0; var_378_object = Obj();
	var_378_object = var_0_bool;
	func_1418(var_377_bool, var_378_object);
	var_379_bool = var_377_bool == 0; //@nz
	if(var_379_bool != 0) {
		StopAsync();
		var_343_bool = 0;
		return 8;
	}
	var_380_float = 0; var_381_int = 0;
	var_344_float = var_380_float;
	var_349_int = var_381_int;
	func_417(var_352_string, var_380_float, var_381_int);
	var_464_int = "attack_middle" + var_349_int;
	HasAnimation(var_350_bool, "all", var_464_int);
	var_465_bool = var_350_bool;
	if(var_465_bool != 0) {
		func_1764();
		var_468_int = "attack_middle" + var_349_int;
		PlayAnimation("all", var_468_int);
		WaitForAnimEnd();
		func_795(var_352_string);
		var_469_bool = 0; var_470_object = Obj();
		var_470_object = var_0_bool;
		func_1418(var_469_bool, var_470_object);
		var_471_bool = var_469_bool == 0; //@nz
		if(var_471_bool != 0) {
			StopAsync();
			var_343_bool = 0;
			return 8;
		}
		var_472_float = 0; var_473_int = 0;
		var_344_float = var_472_float;
		var_349_int = var_473_int;
		func_417(var_352_string, var_472_float, var_473_int);
		var_351_int = 1;

	Label_533:
		var_475_int = "attack_middle" + var_349_int;
		var_477_int = var_475_int + "_";
		var_352_string = var_477_int + var_351_int;
		HasAnimation(var_350_bool, "all", var_352_string);
		var_479_bool = var_350_bool == 0; //@nz
		if(var_479_bool != 0) {
		} else {
			func_1764();
			PlayAnimation("all", var_352_string);
			WaitForAnimEnd();
			func_795(var_352_string);
			var_495_bool = 0; var_496_object = Obj();
			var_496_object = var_0_bool;
			func_1418(var_495_bool, var_496_object);
			var_497_bool = var_495_bool == 0; //@nz
			if(var_497_bool != 0) {
				StopAsync();
				var_343_bool = 0;
				var_498_float = 0; var_499_int = 0;
				var_344_float = var_498_float;
				var_349_int = var_499_int;
				func_417(var_352_string, var_498_float, var_499_int);
				var_351_int = var_351_int + (int)1;
				goto Label_533;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_483_int = "attack_end" + var_349_int;
	PlayAnimation("all", var_483_int);
	var_484_bool = 0;
	func_809(var_484_bool);
	if(var_484_bool != 0) {
		var_485_bool = 0; var_486_float = 0;
		func_593(var_485_bool, (float)0.75);
		StopAsync();
	}
	var_343_bool = 1;
	return 8;
	
}


func_1096(var_103_object)
{
	EventDisable(0);
	var_104_object = Obj();
	var_103_object = var_104_object;
	func_1121(var_104_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1107:
	Hold();
	goto Label_1107;
}
EMIT "Return(); Pop(0)";


func_77()
{
	
Label_77:
	Hold();
	goto Label_77;
}
EMIT "Return(); Pop(0)";


func_1486(var_14_object, var_15_int, var_16_float)
{
	var_17_cvector = CVector(0,0,0); var_18_object = Obj(); var_19_int = 0; var_20_bool = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_int = 0; var_24_int = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_object = Obj(); var_28_int = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_int = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_object = var_14_object;
	if(var_37_object != 0) {
		var_39_bool = var_15_int != (int)4;
		if(var_39_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
		var_44_cvector = CVector(0,0,0); var_45_object = Obj();
		var_14_object = var_45_object;
		func_1258(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1648(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1515:
		var_56_int = "hit" + var_28_int;
		GetGeometryLocator(var_56_int, var_29_bool, var_30_cvector, var_31_cvector);
		var_57_bool = var_29_bool == 0; //@nz
		if(var_57_bool != 0) {
		} else {
			var_105_int = var_31_cvector | var_26_cvector;
			var_107_bool = var_105_int >= (float)0.7071067690849304;
			if(var_107_bool != 0) {
				@@var_27_object:add(var_30_cvector);
			}
			var_28_int = var_28_int + (int)1;
			goto Label_1515;
		}
		@@var_27_object:size(var_32_int);
		var_58_int = var_32_int;
		if(var_58_int != 0) {
			irand(var_33_int, var_32_int);
			@@var_27_object:get(var_34_cvector, var_33_int);
			var_59_object = Obj(); var_60_int = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
			var_14_object = var_59_object;
			var_15_int = var_60_int;
			var_16_float = var_61_float;
			var_34_cvector = var_62_cvector;
			var_63_cvector = -var_26_cvector;
			func_1554(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1442(var_104_object);
	return 18;
	
}


func_1743(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, var_13_string);
	var_17_bool = var_16_object == 0; //@ne
	if(var_17_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	Trigger(var_16_object, var_14_string);
	var_12_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_81(var_0_bool, var_517_string)
{
	var_518_bool = 0; var_519_bool = 0;
	var_521_bool = var_517_string == "cleanup";
	if(var_521_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_519_bool);
		var_522_bool = 0;
		var_522_bool = 0;
		var_523_bool = var_519_bool == 0; //@nz
		if(var_523_bool != 0) {
			var_524_bool = 0;
			func_125(var_524_bool);
			if(var_524_bool != 0) {
				var_522_bool = 1;
			}
		}
		if(var_522_bool != 0) {
			var_525_object = Obj();
			func_1642(var_525_object);
			RemoveActor(var_525_object);
		}
	} else {
		var_527_bool = var_517_string == "restore";
		if(var_527_bool == 0) goto Label_108;
		var_0_bool = false;
	}
Label_108:
	return 2;
	
}


func_593(var_485_bool, var_486_float)
{
	var_487_float = 0; var_488_bool = 0; var_489_float = 0; var_490_bool = 0;
	rand(var_489_float);
	var_491_bool = var_489_float < var_486_float;
	if(var_491_bool != 0) {

	Label_598:
		IsAnimationPlaying(var_490_bool);
		var_492_bool = var_490_bool == 0; //@nz
		if(var_492_bool != 0) {
		} else {
			var_493_bool = 0;
			func_691(var_493_bool);
			if(var_493_bool != 0) {
				var_485_bool = 1;
				sync();
				goto Label_598;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_795(var_490_bool);
	}
	goto Label_618;
	
Label_618:
	var_485_bool = 0;
	return 4;
	
}


func_1755(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_16_bool = var_15_bool;
	if(var_16_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1244(var_422_string, var_423_int)
{
	var_425_bool = var_423_int == (int)2;
	if(var_425_bool != 0) {
		var_422_string = "fire";
		return 0;
	EMIT "GOTO 0x4e8";
	}
	var_427_bool = var_423_int == (int)1;
	if(var_427_bool != 0) {
		var_422_string = "bullet";
		return 0;
	}
	var_422_string = "phys";
	return 0;
}


func_1121(var_104_object)
{
	var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0); var_109_string = ""; var_110_object = Obj(); var_111_bool = 0; var_112_bool = 0; var_113_float = 0; var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_string = ""; var_120_object = Obj(); var_121_bool = 0; var_122_bool = 0; var_123_float = 0; var_124_cvector = CVector(0,0,0);
	var_125_bool = var_104_object == 0; //@ne
	if(var_125_bool != 0) {
		var_126_string = "";
		func_1212("fdie");
	} else {
		@@var_104_object:GetPosition(var_115_cvector);
		GetPosition(var_116_cvector);
		GetDirection(var_117_cvector);
		var_118_cvector = var_116_cvector - var_115_cvector;
		var_158_float = GetByIndex(var_118_cvector, 0);
		var_159_float = GetByIndex(var_117_cvector, 0);
		var_160_float = var_158_float * var_159_float;
		var_161_float = GetByIndex(var_118_cvector, 2);
		var_162_float = GetByIndex(var_117_cvector, 2);
		var_163_float = var_161_float * var_162_float;
		var_164_int = var_160_float + var_163_float;
		var_166_bool = var_164_int >= (int)0;
		if(var_166_bool != 0) {
			var_119_string = "fdie";
		} else {
				var_119_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_104_object = var_120_object;
		var_169_bool = IsFuncExist(var_104_object, "GetScriptProperty", (int)2);
		if(var_169_bool != 0) {
			@@var_104_object:HasScriptProperty(var_121_bool, "Owner");
			var_171_bool = var_121_bool;
			if(var_171_bool != 0) {
				@@var_104_object:GetScriptProperty(var_120_object, "Owner");
				var_173_bool = var_120_object == 0; //@ne
				if(var_173_bool != 0) {
					var_104_object = var_120_object;
				}
			}
		}
		var_176_bool = IsFuncExist(var_120_object, "@GetEyesHeight", (int)1);
		if(var_176_bool != 0) {
			@@var_120_object:GetEyesHeight(var_123_float);
			var_124_cvector = CVector(0.0, 0.0, 0.0);
			var_177_float = GetByIndex(var_124_cvector, 1);
			var_123_float = var_177_float;
			SetByIndex(var_124_cvector, 1) = var_177_float;
			LookAsync(var_104_object, "head", var_124_cvector);
			var_122_bool = 1;
		} else {
			var_122_bool = 0;

		}
		var_179_string = "";
		var_119_string = var_179_string;
		func_1601(var_179_string);
		PlayAnimation("all", var_119_string);
		WaitForAnimEnd();
		var_181_bool = var_122_bool;
		if(var_181_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_119_string);
		RemoveEnvelope();
		var_120_object = 0;
	}
	return 20;
	
}


func_1377(var_38_bool, var_39_object)
{
	var_40_bool = 0; var_41_bool = 0;
	@@var_39_object:IsDead(var_41_bool);
	var_41_bool = var_38_bool;
	return 2;
}


func_1764()
{
	var_355_object = Obj(); var_356_object = Obj();
	GetScene(var_356_object);
	var_358_object = Obj();
	func_1642(var_358_object);
	BroadcastMessage("battle", var_358_object, var_356_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1382(var_27_bool, var_28_object)
{
	var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj();
	var_33_bool = var_28_object == 0; //@ne
	if(var_33_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_34_bool = 0;
	var_34_bool = 0;
	var_37_bool = IsFuncExist(var_28_object, "IsDead", (int)1);
	if(var_37_bool != 0) {
		var_38_bool = 0; var_39_object = Obj();
		var_28_object = var_39_object;
		func_1377(var_38_bool, var_39_object);
		if(var_38_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	GetScene(var_31_object);
	var_42_bool = var_31_object == 0; //@ne
	if(var_42_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	@@var_28_object:GetScene(var_32_object);
	var_43_bool = var_31_object != var_32_object;
	if(var_43_bool != 0) {
		var_27_bool = 0;
		return 4;
	}
	var_27_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1642(var_10_object)
{
	var_11_object = Obj(); var_12_object = Obj();
	self(var_12_object);
	var_12_object = var_10_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1258(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_620(var_0_bool, var_282_bool, var_283_float)
{
	var_284_bool = 0; var_285_cvector = CVector(0,0,0); var_286_cvector = CVector(0,0,0); var_287_cvector = CVector(0,0,0); var_288_float = 0; var_289_bool = 0; var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_cvector = CVector(0,0,0); var_293_float = 0;
	
Label_621:
	IsAnimationPlaying(var_289_bool);
	var_294_bool = var_289_bool == 0; //@nz
	if(var_294_bool != 0) {
	} else {
		var_295_bool = 0;
		func_691(var_295_bool);
		if(var_295_bool != 0) {
			var_282_bool = 1;
			return 10;
		}
		var_338_bool = 0; var_339_object = Obj();
		var_339_object = var_0_bool;
		func_1418(var_338_bool, var_339_object);
		var_340_bool = var_338_bool == 0; //@nz
		if(var_340_bool != 0) {
			var_282_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_290_cvector);
		GetPFPosition(var_291_cvector);
		var_292_cvector = var_290_cvector - var_291_cvector;
		var_293_float = var_292_cvector | var_292_cvector;
		var_341_float = var_283_float * var_283_float;
		var_342_bool = var_293_float < var_341_float;
		if(var_342_bool != 0) {
			var_343_bool = 0; var_344_float = 0;
			var_283_float = var_344_float;
			func_456(var_292_cvector, var_293_float, var_343_bool, var_344_float);
			var_282_bool = 1;
			sync();
			goto Label_621;
		}
		return 10;
	}
	func_795(var_293_float);
	var_282_bool = 0;
	return 10;
	
}


func_1775(var_15_int)
{
	var_16_int = 0; var_17_int = 0;
	GetVariable("branch", var_17_int);
	var_17_int = var_15_int;
	return 2;
}


func_752(var_0_bool, var_245_bool)
{
	var_246_bool = 0; var_247_bool = 0;
	var_250_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_250_bool != 0) {
		@@@var_0_bool:IsAttacking(var_247_bool);
		var_247_bool = var_245_bool;
		return 2;
	}
	var_245_bool = 0;
	return 2;
}


func_1265(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsPlayerActor(var_19_object, var_21_bool);
	var_21_bool = var_18_bool;
	return 2;
}


func_1648(var_42_cvector, var_43_cvector)
{
	var_50_float = 0; var_51_float = 0;
	var_52_int = var_43_cvector | var_43_cvector;
	var_51_float = sqrt(var_52_int);
	var_53_float = 9.999999974752427e-07;
	var_54_bool = var_51_float < var_53_float;
	if(var_54_bool != 0) {
		var_42_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_42_cvector = var_43_cvector / var_51_float;
	return 2;
}


func_1781(var_14_object)
{
	var_15_int = 0;
	func_1775(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_886(var_2_int)
{
	KillTimer((int)1);
	var_12_int = var_2_int;
	if(var_12_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_1052(var_10_object);
	return 0;
}


func_1270(var_41_bool, var_42_object, var_43_string)
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


func_1658(var_432_float, var_433_float, var_434_float)
{
	var_437_bool = var_433_float < var_434_float;
	if(var_437_bool != 0) {
		var_433_float = var_432_float;
	} else {
		var_434_float = var_432_float;
	}
	return 0;
	
}


func_763(var_2_object, var_5_bool)
{
	var_362_float = 0; var_363_int = 0; var_364_float = 0; var_365_int = 0;
	var_366_bool = var_2_object == 0; //@nz
	if(var_366_bool != 0) {
		return 4;
	}
	var_367_bool = var_5_bool;
	if(var_367_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_370_bool = var_5_bool > (int)0;
		if(var_370_bool != 0) {
			return 4;
		}
	}
	rand(var_364_float);
	var_371_float = 0;
	func_813(var_371_float);
	var_372_bool = var_364_float < var_371_float;
	if(var_372_bool != 0) {
		irand(var_365_int, var_2_object);
		var_365_int = var_365_int + (int)1;
		var_375_int = "attack" + var_365_int;
		Speak(var_375_int);
		var_376_int = 0;
		func_811(var_376_int);
		var_5_bool = var_376_int;
	}
	return 4;
}


func_125(var_12_bool)
{
	var_12_bool = 1;
	return 0;
}


func_382(var_1_string, var_2_object, var_4_int)
{
	var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0); var_50_bool = 0; var_51_bool = 0; var_52_cvector = CVector(0,0,0);
	var_1_string = 0;
	
Label_384:
	var_56_int = var_1_string + (int)1;
	var_57_int = "attack_begin" + var_56_int;
	HasAnimation(var_50_bool, "all", var_57_int);
	var_58_bool = var_50_bool == 0; //@nz
	if(var_58_bool != 0) {
	} else {
			var_1_string = var_1_string + (int)1;
			goto Label_384;
	}
	var_2_object = 0;
	
Label_398:
	var_61_int = var_2_object + (int)1;
	var_62_int = "attack" + var_61_int;
	IsExisting3DSound(var_51_bool, var_62_int);
	var_63_bool = var_51_bool == 0; //@nz
	if(var_63_bool != 0) {
	} else {
		var_2_object = var_2_object + (int)1;
		goto Label_398;

	}
	GetAnimationOffset(var_52_cvector, "all", "bjump");
	var_66_float = GetByIndex(var_52_cvector, 2);
	var_4_int = -var_66_float;
	return 6;
	
}


func_127()
{
	var_19_object = Obj(); var_20_object = Obj();
	FindActor(var_20_object, "player");
	var_22_object = Obj(); var_23_bool = 0; var_24_float = 0;
	var_20_object = var_22_object;
	func_153(var_16_bool, var_17_float, var_18_int, var_19_object, var_20_object, var_22_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


