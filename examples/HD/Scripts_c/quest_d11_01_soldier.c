// @IMPORTS: Face/1,Sleep/2,StopAsync/0,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,PlayAnimation/2,WaitForAnimEnd/1,PlayGlobalSound/4,LockAnimationEnd/2,WaitForAnimEnd/0,Stop/0,SetAttackState/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,SendPlayerEnemy/2,GetDirection/1,GetGeometryLocator/4,GetScene/1,AddActorByType/6,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,Hold/0,IsPlayerActor/2,UnlookAsync/1,GetEyesHeight/1,DirLookAsyncRel/3,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,SetRTEnvelope/2,IsOverrideActive/1,GetPosition/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,RemoveEnvelope/0,StopSecondaryAnimation/0,FindActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,RotateAsync/2,RotateAsync/3,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,PlayGlobalMusic/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1,ReportReputationChange/4,ResetAAS/0,ReportReputationChange/3
// @STRINGS: W:all|W:shoot_begin|W:shot|W:shoot_end|W:attack_off|W:attack_on|W:hunt|W:@Stop hunt|W:attack_begin1|W:attack|W:light-dynamic|W:soldier_fire.xml|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|W:quest_d11_01|W:soldier_attack|W:spine|A:GetEyesHeight|A:in|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|W:head|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|W:branch|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:reputation|W:bomber|W:hunter|W:grabitel|W:disease|W:dog|W:d11q01SoldierAttack|A:RemoveStationaryActor|W:soldier_death
// @GLOBALS: 0:object:
// @RUN_OP: 0x277
// @RUN_TASK: 3
// @TASK_0: vars=object params=1
// @EVENT_41: op=0x20 vars=object
// @EVENT_3: op=0x29 vars=object
// @EVENT_4: op=0x32 vars=object
// @EVENT_17: op=0x3e vars=object
// @EVENT_30: op=0x52 vars=object,object,bool
// @EVENT_1: op=0x5f vars=object
// @EVENT_7: op=0x6d vars=int
// @TASK_1: vars=object,bool params=1
// @EVENT_17: op=0xf1 vars=object
// @EVENT_30: op=0x105 vars=object,object,bool
// @EVENT_41: op=0x119 vars=object
// @TASK_2: vars=object,object,bool params=2
// @EVENT_3: op=0x1b2 vars=object
// @EVENT_1: op=0x1c0 vars=object
// @EVENT_17: op=0x252 vars=object
// @EVENT_30: op=0x26a vars=object,object,bool
// @TASK_3: vars= params=0
// @EVENT_1: op=0x27b vars=object
// @EVENT_17: op=0x291 vars=object
// @EVENT_26: op=0x298 vars=string
// @TASK_4: vars=object,bool params=1
// @EVENT_2: op=0x2b7 vars=object
// @EVENT_17: op=0x2be vars=object
// @EVENT_26: op=0x2c5 vars=string
// @TASK_5: vars=object params=2
// @EVENT_6: op=0x330 vars=
// @EVENT_2: op=0x333 vars=object
// @EVENT_17: op=0x339 vars=object
// @EVENT_26: op=0x340 vars=string
// @TASK_6: vars=cvector,cvector params=1
// @EVENT_3: op=0x364 vars=object
// @EVENT_17: op=0x382 vars=object
// @EVENT_30: op=0x396 vars=object,object,bool
// @EVENT_1: op=0x3a3 vars=object
// @TASK_7: vars= params=1
// @EVENT_0: op=0x420 vars=object
// @EVENT_22: op=0x49f vars=object,int,float,float
// @EVENT_16: op=0x4a1 vars=object,string
// @EVENT_41: op=0x4a3 vars=object
// @STANDALONE_EVENT_22: op=0x713 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x71b vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x725 vars=object,string
// @STANDALONE_EVENT_41: op=0x732 vars=object
// @PE: 0x20,0x29,0x32,0x3e,0x52,0x5f,0x6d,0xf1,0x105,0x119,0x1b2,0x1c0,0x252,0x26a,0x291,0x298,0x2a6,0x2b7,0x2be,0x2c5,0x333,0x339,0x340,0x34e,0x35b,0x382,0x396,0x3a3,0x40b,0x411,0x485,0x49f,0x4a1,0x4a3,0x4a5,0x628,0x693,0x69a,0x6ab,0x6b4,0x6be,0x706,0x713,0x71b,0x732,0x7d3,0x7f6,0x816,0x884,0x8ab

task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_24();
	var_11_cvector = Obj();
	func_1842();
	return 0;
}


task_0_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_0_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_15_object = Obj();
		var_15_object = var_0_object;
		func_1506(var_15_object);
	}
	return 0;
}


	task_0_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1356(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_100_object = var_130_object;
		func_2014(var_130_object);
		return 0;
	}
	func_24();
	var_146_object = Obj();
	var_100_object = var_146_object;
	func_2038(var_146_object);
	return 0;
	}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_object = var_15_object;
	var_12_cvector = var_16_object;
	var_13_cvector = var_17_bool;
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_62();
	}
	return 0;
}


task_0_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_cvector = var_13_object;
	func_2158(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_24();
		var_132_object = Obj();
		var_11_cvector = var_132_object;
		func_2180(var_132_object);
	}
	return 0;
}


task_0_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector != (int)100;
	if(var_13_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


	task_1_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1356(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_100_object = var_130_object;
		func_2014(var_130_object);
		return 0;
	}
	func_274();
	var_145_object = Obj();
	var_100_object = var_145_object;
	func_2038(var_145_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_object = var_15_object;
	var_12_cvector = var_16_object;
	var_13_cvector = var_17_bool;
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_241();
	}
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_274();
	var_11_cvector = Obj();
	func_1842();
	return 0;
}


task_2_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_2_bool;
	if(var_13_bool != 0) {
		var_14_bool = var_11_cvector == var_0_object;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_0_object;
		func_1506(var_15_object);
	}
	return 0;
}


task_2_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_2_bool;
	if(var_13_bool != 0) {
		var_14_bool = var_11_cvector == var_0_object;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1356(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		return 0;
	}
	var_130_object = Obj();
	var_100_object = var_130_object;
	func_2014(var_130_object);
	var_145_bool = var_100_object == var_0_object;
	if(var_145_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_100_object;
		var_146_bool = var_2_bool;
		if(var_146_bool == 0) goto Label_617;
		StopAnimation();
		StopGroup0();
	}
Label_617:
	return 0;
	
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_cvector, var_13_cvector)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_object = var_15_object;
	var_12_cvector = var_16_object;
	var_13_cvector = var_17_bool;
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_594();
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0;
	IsPlayerActor(var_11_cvector, var_13_bool);
	var_14_bool = var_13_bool;
	if(var_14_bool != 0) {
		var_15_bool = 0;
		func_2212(var_15_bool);
		if(var_15_bool != 0) {
			var_20_bool = 0; var_21_string = ""; var_22_string = "";
			func_1760(var_20_bool, "quest_d11_01", "soldier_attack");
		} else {
			var_26_object = Obj();
			var_11_cvector = var_26_object;
			TaskCall(4);
			func_678(var_26_object);
			TaskReturn();
		}
	}
	return 2;
	
}


task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1760(var_12_bool, "quest_d11_01", "soldier_attack");
	return 0;
}


task_3_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_string, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector == "attack";
	if(var_13_bool != 0) {
		var_14_object = Obj();
		func_1218(Obj());
		var_15_object = var_14_object;
		TaskCall(6);
		func_846(var_14_object);
		TaskReturn();
	}
	return 0;
}


task_4_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		func_790(var_11_cvector);
	}
	return 0;
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1760(var_12_bool, "quest_d11_01", "soldier_attack");
	return 0;
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_string, var_9_object, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector == "attack";
	if(var_13_bool != 0) {
		var_14_object = Obj();
		func_1218(Obj());
		var_15_object = var_14_object;
		TaskCall(6);
		func_846(var_14_object);
		TaskReturn();
	}
	return 0;
}


task_5_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	StopAnimation();
	return 0;
}


task_5_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		StopAnimation();
	}
	return 0;
}


task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1760(var_12_bool, "quest_d11_01", "soldier_attack");
	return 0;
}


task_5_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_string, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector == "attack";
	if(var_13_bool != 0) {
		var_14_object = Obj();
		func_1218(Obj());
		var_15_object = var_14_object;
		TaskCall(6);
		func_846(var_14_object);
		TaskReturn();
	}
	return 0;
}


task_6_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1356(var_14_bool, var_15_object);
	var_48_bool = var_14_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 2;
	}
	var_49_bool = 0; var_50_object = Obj();
	var_11_object = var_50_object;
	func_2078(var_49_bool, var_50_object);
	var_127_bool = var_49_bool == 0; //@nz
	if(var_127_bool != 0) {
		var_128_object = GlobalVars[0];
		@@var_128_object:in(var_13_bool, var_11_object);
		var_129_bool = var_13_bool == 0; //@nz
		if(var_129_bool != 0) {
			return 2;
		}
	}
	func_1029();
	var_130_object = Obj();
	var_11_object = var_130_object;
	TaskCall(0);
	func_0(var_131_object, var_130_object);
	TaskReturn();
	return 2;
}


	task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_13_bool, var_100_object)
	{
	var_101_bool = 0; var_102_object = Obj();
	var_100_object = var_102_object;
	func_1356(var_101_bool, var_102_object);
	var_129_bool = var_101_bool == 0; //@nz
	if(var_129_bool != 0) {
		var_130_object = Obj();
		var_100_object = var_130_object;
		func_2014(var_130_object);
		return 0;
	}
	func_1029();
	var_145_object = Obj();
	var_100_object = var_145_object;
	func_2038(var_145_object);
	return 0;
	}


task_6_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj(); var_17_bool = 0;
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	var_13_bool = var_17_bool;
	func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_898();
	}
	return 0;
}


task_6_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_2158(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1029();
		var_131_object = Obj();
		var_11_object = var_131_object;
		func_2219(var_131_object);
	}
	return 0;
}


task_7_event_0(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1798(var_15_object);
	}
	return 2;
}


task_7_event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0;
}


task_7_event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	return 0;
}


task_7_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1424(var_15_object, var_16_int, var_17_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_11_object = var_17_object;
	var_12_int = var_18_int;
	var_13_float = var_19_float;
	var_15_cvector = var_20_cvector;
	var_16_cvector = var_21_cvector;
	func_1492(var_19_float, var_20_cvector, var_21_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
{
	var_13_float = 0; var_14_float = 0;
	var_16_bool = var_12_string == "health";
	if(var_16_bool != 0) {
		GetProperty("health", var_14_float);
		var_19_bool = var_14_float <= (int)0;
		if(var_19_bool != 0) {
			SignalDeath(var_11_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1225(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		var_16_object = Obj();
		func_1663(var_16_object);
		ReportReputationChange(var_11_object, var_16_object, (float)0.05000000074505806, (bool)1);
	}
	var_21_object = Obj();
	var_11_object = var_21_object;
	func_2225(var_21_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	
Label_631:
	Hold();
	goto Label_631;
}
EMIT "Return(); Pop(0)";


func_0(var_0_object, var_130_object)
{
	var_132_bool = 0; var_133_bool = 0;
	var_0_object = var_130_object;
	Face(var_130_object);
	
Label_4:
	Sleep((float)0.5, var_133_bool);
	var_135_bool = 0;
	var_135_bool = 1;
	var_136_bool = var_133_bool == 0; //@nz
	if(var_136_bool != 1) {
		var_137_bool = 0; var_138_object = Obj();
		var_138_object = var_0_object;
		func_1356(var_137_bool, var_138_object);
		var_139_bool = var_137_bool == 0; //@nz
		if(var_139_bool != 1) {
			var_135_bool = 0;
		}
	}
	if(var_135_bool != 0) {
	} else {
		goto Label_4;
	}
	StopAsync();
	return 2;
	
}


func_1792(var_16_int)
{
	var_17_int = 0; var_18_int = 0;
	GetVariable("branch", var_18_int);
	var_18_int = var_16_int;
	return 2;
}


func_2049(var_132_object)
{
	var_133_bool = 0; var_134_bool = 0;
	var_135_object = GlobalVars[0];
	@@var_135_object:in(var_134_bool, var_132_object);
	var_136_bool = var_134_bool;
	if(var_136_bool != 0) {
		var_137_object = Obj(); var_138_bool = 0;
		var_132_object = var_137_object;
		func_2003(var_137_object, (bool)1);
	} else {
		var_364_object = Obj();
		var_132_object = var_364_object;
		TaskCall(1);
		func_120(var_365_object, var_366_bool, var_364_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_2180(var_132_object)
{
	var_133_object = Obj();
	var_132_object = var_133_object;
	func_2219(var_133_object);
	return 0;
}


func_1029()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1798(var_15_object)
{
	var_16_int = 0;
	func_1792(var_16_int);
	var_21_bool = var_16_int == (int)1;
	if(var_21_bool != 0) {
		WorkWithCorpse(var_15_object);
	} else {
		Barter(var_15_object);
	}
	return 0;
	
}


func_1157(var_55_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_56_string = "";
	var_55_string = var_56_string;
	func_1535(var_56_string);
	PlayAnimation("all", var_55_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_55_string);
	RemoveEnvelope();
	return 0;
}


func_1669(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_52_float = sqrt(var_53_int);
	var_54_float = 9.999999974752427e-07;
	var_55_bool = var_52_float < var_54_float;
	if(var_55_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_52_float;
	return 2;
}


func_777(var_0_object)
{
	var_53_float = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_float = 0; var_57_float = 0; var_58_cvector = CVector(0,0,0);
	GetEyesHeight(var_56_float);
	@@@var_0_object:GetEyesHeight(var_57_float);
	var_58_cvector = CVector(0.0, 0.0, 0.0);
	var_59_float = GetByIndex(var_58_cvector, 1);
	var_59_float = var_57_float - var_56_float;
	SetByIndex(var_58_cvector, 1) = var_59_float;
	DirLookAsyncRel(var_0_object, "spine", var_58_cvector);
	return 6;
}


func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_bool = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0;
	var_16_object = var_21_object;
	var_22_bool = !var_17_bool;
	func_1860(var_20_bool, var_21_object, var_22_bool);
	if(var_20_bool != 0) {
		CanSee(var_19_bool, var_15_object);
		var_88_bool = 0;
		var_88_bool = 1;
		var_89_bool = var_19_bool;
		if(var_89_bool != 1) {
			var_90_float = 0; var_91_object = Obj();
			var_15_object = var_91_object;
			func_1210(var_90_float, var_91_object);
			var_99_bool = var_90_float <= (float)490000.0;
			if(var_99_bool != 1) {
				var_88_bool = 0;
			}
		}
		if(var_88_bool != 0) {
			var_14_bool = 1;
			return 2;
		}
	}
	var_14_bool = 0;
	return 2;
}


func_1034()
{
	return 0;
}


func_1035(var_31_object)
{
	var_32_object = Obj();
	var_31_object = var_32_object;
	func_1041(var_32_object);
	return 0;
}


func_1679(var_315_float, var_316_cvector, var_317_cvector)
{
	var_318_cvector = CVector(0,0,0); var_319_cvector = CVector(0,0,0);
	var_319_cvector = var_317_cvector - var_316_cvector;
	var_315_float = var_319_cvector | var_319_cvector;
	return 2;
}


func_1424(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_object = var_15_object;
	if(var_38_object != 0) {
		var_40_bool = var_16_int != (int)4;
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_42_bool = var_16_int != (int)5;
		if(var_42_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
		var_45_cvector = CVector(0,0,0); var_46_object = Obj();
		var_15_object = var_46_object;
		func_1203(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1669(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1453:
		var_57_int = "hit" + var_29_int;
		GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector);
		var_58_bool = var_30_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_106_int = var_32_cvector | var_27_cvector;
			var_108_bool = var_106_int >= (float)0.7071067690849304;
			if(var_108_bool != 0) {
				@@var_28_object:add(var_31_cvector);
			}
			var_29_int = var_29_int + (int)1;
			goto Label_1453;
		}
		@@var_28_object:size(var_33_int);
		var_59_int = var_33_int;
		if(var_59_int != 0) {
			irand(var_34_int, var_33_int);
			@@var_28_object:get(var_35_cvector, var_34_int);
			var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
			var_15_object = var_60_object;
			var_16_int = var_61_int;
			var_17_float = var_62_float;
			var_35_cvector = var_63_cvector;
			var_64_cvector = -var_27_cvector;
			func_1492(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1380(var_105_object);
	return 18;
	
}


func_1041(var_32_object)
{
	EventDisable(0);
	var_33_object = Obj();
	var_32_object = var_33_object;
	func_1066(var_33_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1052:
	Hold();
	goto Label_1052;
}
EMIT "Return(); Pop(0)";


func_274()
{
	StopAsync();
	StopGroup0();
	Stop();
	return 0;
}


func_1683(var_290_float, var_291_float, var_292_float)
{
	var_295_bool = var_291_float < var_292_float;
	if(var_295_bool != 0) {
		var_291_float = var_290_float;
	} else {
		var_292_float = var_290_float;
	}
	return 0;
	
}


func_2070(var_375_bool, var_376_object)
{
	var_377_float = 0; var_378_object = Obj();
	var_376_object = var_378_object;
	func_1210(var_377_float, var_378_object);
	var_375_bool = var_377_float <= (float)40000.0;
	return 0;
}


func_790(var_1_object)
{
	StopGroup0();
	var_1_object = true;
	return 0;
}


func_24()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_794(var_0_object, var_29_bool, var_30_object)
{
	var_32_bool = 0; var_33_bool = 0;
	var_0_object = var_30_object;
	var_34_object = Obj();
	var_34_object = var_0_object;
	func_1506(var_34_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd(var_33_bool);
	var_45_bool = var_33_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	LockAnimationEnd("all", "attack_on");
	var_29_bool = 1;
	return 2;
}


func_1690(var_300_float, var_301_float, var_302_float, var_303_float)
{
	var_304_bool = var_301_float < var_302_float;
	if(var_304_bool != 0) {
		var_302_float = var_300_float;
		return 0;
	}
	var_305_bool = var_301_float > var_303_float;
	if(var_305_bool != 0) {
		var_303_float = var_300_float;
		return 0;
	}
	var_301_float = var_300_float;
	return 0;
}


func_2078(var_53_bool, var_54_object)
{
	var_55_float = 0; var_56_string = ""; var_57_float = 0; var_58_float = 0; var_59_string = ""; var_60_float = 0;
	var_61_bool = 0; var_62_object = Obj();
	var_54_object = var_62_object;
	func_1356(var_61_bool, var_62_object);
	var_63_bool = var_61_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_53_bool = 0;
		return 6;
	}
	var_64_bool = 0; var_65_object = Obj();
	var_54_object = var_65_object;
	func_1225(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		@@var_54_object:GetProperty("reputation", var_58_float);
		var_53_bool = var_58_float < (float)0.33000001311302185;
		return 6;
	}
	var_70_bool = 0; var_71_object = Obj(); var_72_string = "";
	var_54_object = var_71_object;
	func_1230(var_70_bool, var_71_object, "class");
	var_73_bool = var_70_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_53_bool = 0;
		return 6;
	}
	@@var_54_object:GetProperty("class", var_59_string);
	var_75_bool = 0;
	var_75_bool = 1;
	var_76_bool = 0;
	var_76_bool = 1;
	var_78_bool = var_59_string == "bomber";
	if(var_78_bool != 1) {
		var_80_bool = var_59_string == "hunter";
		if(var_80_bool != 1) {
			var_76_bool = 0;
		}
	}
	if(var_76_bool != 1) {
		var_82_bool = var_59_string == "grabitel";
		if(var_82_bool != 1) {
			var_75_bool = 0;
		}
	}
	if(var_75_bool != 0) {
		var_53_bool = 1;
		return 6;
	}
	var_83_bool = 0; var_84_object = Obj(); var_85_string = "";
	var_54_object = var_84_object;
	func_1230(var_83_bool, var_84_object, "disease");
	var_86_bool = var_83_bool == 0; //@nz
	if(var_86_bool != 0) {
		var_53_bool = 0;
		return 6;
	}
	var_87_bool = 0;
	var_87_bool = 1;
	var_88_bool = 0; var_89_string = "";
	var_59_string = var_89_string;
	func_1576(var_88_bool, var_89_string);
	if(var_88_bool != 1) {
		var_128_bool = var_59_string == "dog";
		if(var_128_bool != 1) {
			var_87_bool = 0;
		}
	}
	if(var_87_bool != 0) {
		@@var_54_object:GetProperty("disease", var_60_float);
		var_53_bool = var_60_float > (int)0;
		return 6;
	}
	var_53_bool = 0;
	return 6;
}


func_290(var_0_object, var_1_object, var_2_bool, var_139_object, var_140_bool)
{
	var_144_bool = 0; var_145_bool = 0; var_146_bool = 0; var_147_bool = 0;
	var_0_object = var_139_object;
	var_148_object = Obj();
	var_148_object = var_0_object;
	func_1772(var_148_object);
	func_1781();
	Face(var_0_object);
	var_159_bool = var_140_bool;
	if(var_159_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_316:
	var_165_bool = 0; var_166_object = Obj();
	var_166_object = var_0_object;
	func_1356(var_165_bool, var_166_object);
	if(var_165_bool != 0) {
		CanSee(var_147_bool, var_0_object);
		var_167_bool = var_147_bool;
		if(var_167_bool != 0) {
			var_168_object = Obj();
			var_168_object = var_0_object;
			func_1772(var_168_object);
			func_470(var_147_bool);
		} else {
				var_331_object = Obj();
				var_331_object = var_0_object;
				func_1506(var_331_object);
				var_2_bool = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_146_bool);
				var_342_bool = var_146_bool == 0; //@nz
				if(var_342_bool != 0) {
					var_343_bool = var_1_object != 0; //@nn
					if(var_343_bool != 0) {
						func_465(var_146_bool, var_147_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_316;
				}
				var_346_bool = 0; var_347_object = Obj();
				var_347_object = var_0_object;
				func_1356(var_346_bool, var_347_object);
				var_348_bool = var_346_bool == 0; //@nz
				if(var_348_bool != 0) {
				} else {
					CanSee(var_147_bool, var_0_object);
					var_352_bool = var_147_bool;
					if(var_352_bool != 0) {
						var_2_bool = false;
						Face(var_0_object);
						func_470(var_147_bool);
						goto Label_412;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_146_bool);
					var_356_bool = var_146_bool == 0; //@nz
					if(var_356_bool != 0) {
						var_357_bool = var_1_object != 0; //@nn
						if(var_357_bool != 0) {
							func_465(var_146_bool, var_147_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_316;
					}
					var_360_bool = 0; var_361_object = Obj();
					var_361_object = var_0_object;
					func_1356(var_360_bool, var_361_object);
					var_362_bool = var_360_bool == 0; //@nz
					if(var_362_bool != 0) {
						goto Label_422;
					}
					var_2_bool = false;
					CanSee(var_147_bool, var_0_object);
					var_363_bool = var_147_bool;
					if(var_363_bool != 0) {
						Face(var_0_object);
						func_470(var_147_bool);
						goto Label_412;
					}
					goto Label_422;
				}
	}
		Label_422:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_412:
	var_329_bool = var_1_object != 0; //@nn
	if(var_329_bool != 0) {
		func_465(var_146_bool, var_147_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_316;
	
}


func_1315(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
}


func_2212(var_15_bool)
{
	var_16_int = 0; var_17_int = 0;
	GetVariable("d11q01SoldierAttack", var_17_int);
	var_15_bool = var_17_int != (int)0;
	return 2;
}


func_1189(var_280_string, var_281_int)
{
	var_283_bool = var_281_int == (int)2;
	if(var_283_bool != 0) {
		var_280_string = "fire";
		return 0;
	EMIT "GOTO 0x4b1";
	}
	var_285_bool = var_281_int == (int)1;
	if(var_285_bool != 0) {
		var_280_string = "bullet";
		return 0;
	}
	var_280_string = "phys";
	return 0;
}


func_678(var_26_object)
{
	var_29_bool = 0; var_30_object = Obj();
	var_26_object = var_30_object;
	TaskCall(5);
	func_794(var_31_object, var_29_bool, var_30_object);
	TaskReturn();
	if(var_31_object != 0) {
		var_48_object = Obj();
		var_26_object = var_48_object;
		func_728(var_28_bool, var_26_object, var_48_object);
		PlayAnimation("all", "attack_off");
	}
	return 0;
}


func_1701(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateObjectSet(var_24_object);
	var_24_object = var_22_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1320(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	var_26_bool = var_21_object == 0; //@ne
	if(var_26_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_27_bool = 0;
	var_27_bool = 0;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", (int)1);
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_21_object = var_32_object;
		func_1315(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	GetScene(var_24_object);
	var_35_bool = var_24_object == 0; //@ne
	if(var_35_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	@@var_21_object:GetScene(var_25_object);
	var_36_bool = var_24_object != var_25_object;
	if(var_36_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_20_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1576(var_88_bool, var_89_string)
{
	var_88_bool = 1;
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
	var_97_bool = 0;
	var_97_bool = 1;
	var_98_bool = 0;
	var_98_bool = 1;
	var_99_bool = 0;
	var_99_bool = 1;
	var_100_bool = 0;
	var_100_bool = 1;
	var_102_bool = var_89_string == "woman";
	if(var_102_bool != 1) {
		var_104_bool = var_89_string == "worker";
		if(var_104_bool != 1) {
			var_100_bool = 0;
		}
	}
	if(var_100_bool != 1) {
		var_106_bool = var_89_string == "butcher";
		if(var_106_bool != 1) {
			var_99_bool = 0;
		}
	}
	if(var_99_bool != 1) {
		var_108_bool = var_89_string == "wasted_girl";
		if(var_108_bool != 1) {
			var_98_bool = 0;
		}
	}
	if(var_98_bool != 1) {
		var_110_bool = var_89_string == "boy";
		if(var_110_bool != 1) {
			var_97_bool = 0;
		}
	}
	if(var_97_bool != 1) {
		var_112_bool = var_89_string == "vaxxabitka";
		if(var_112_bool != 1) {
			var_96_bool = 0;
		}
	}
	if(var_96_bool != 1) {
		var_114_bool = var_89_string == "unosha";
		if(var_114_bool != 1) {
			var_95_bool = 0;
		}
	}
	if(var_95_bool != 1) {
		var_116_bool = var_89_string == "wasted_male";
		if(var_116_bool != 1) {
			var_94_bool = 0;
		}
	}
	if(var_94_bool != 1) {
		var_118_bool = var_89_string == "alkash";
		if(var_118_bool != 1) {
			var_93_bool = 0;
		}
	}
	if(var_93_bool != 1) {
		var_120_bool = var_89_string == "dohodyaga";
		if(var_120_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 1) {
		var_122_bool = var_89_string == "vaxxabit";
		if(var_122_bool != 1) {
			var_91_bool = 0;
		}
	}
	if(var_91_bool != 1) {
		var_124_bool = var_89_string == "nudegirl";
		if(var_124_bool != 1) {
			var_90_bool = 0;
		}
	}
	if(var_90_bool != 1) {
		var_126_bool = var_89_string == "morlok";
		if(var_126_bool != 1) {
			var_88_bool = 0;
		}
	}
	return 0;
}


func_1066(var_33_object)
{
	var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = ""; var_39_object = Obj(); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = ""; var_49_object = Obj(); var_50_bool = 0; var_51_bool = 0; var_52_float = 0; var_53_cvector = CVector(0,0,0);
	var_54_bool = var_33_object == 0; //@ne
	if(var_54_bool != 0) {
		var_55_string = "";
		func_1157("fdie");
	} else {
		@@var_33_object:GetPosition(var_44_cvector);
		GetPosition(var_45_cvector);
		GetDirection(var_46_cvector);
		var_47_cvector = var_45_cvector - var_44_cvector;
		var_87_float = GetByIndex(var_47_cvector, 0);
		var_88_float = GetByIndex(var_46_cvector, 0);
		var_89_float = var_87_float * var_88_float;
		var_90_float = GetByIndex(var_47_cvector, 2);
		var_91_float = GetByIndex(var_46_cvector, 2);
		var_92_float = var_90_float * var_91_float;
		var_93_int = var_89_float + var_92_float;
		var_95_bool = var_93_int >= (int)0;
		if(var_95_bool != 0) {
			var_48_string = "fdie";
		} else {
				var_48_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_33_object = var_49_object;
		var_98_bool = IsFuncExist(var_33_object, "GetScriptProperty", (int)2);
		if(var_98_bool != 0) {
			@@var_33_object:HasScriptProperty(var_50_bool, "Owner");
			var_100_bool = var_50_bool;
			if(var_100_bool != 0) {
				@@var_33_object:GetScriptProperty(var_49_object, "Owner");
				var_102_bool = var_49_object == 0; //@ne
				if(var_102_bool != 0) {
					var_33_object = var_49_object;
				}
			}
		}
		var_105_bool = IsFuncExist(var_49_object, "@GetEyesHeight", (int)1);
		if(var_105_bool != 0) {
			@@var_49_object:GetEyesHeight(var_52_float);
			var_53_cvector = CVector(0.0, 0.0, 0.0);
			var_106_float = GetByIndex(var_53_cvector, 1);
			var_52_float = var_106_float;
			SetByIndex(var_53_cvector, 1) = var_106_float;
			LookAsync(var_33_object, "head", var_53_cvector);
			var_51_bool = 1;
		} else {
			var_51_bool = 0;

		}
		var_108_string = "";
		var_48_string = var_108_string;
		func_1535(var_108_string);
		PlayAnimation("all", var_48_string);
		WaitForAnimEnd();
		var_110_bool = var_51_bool;
		if(var_110_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_48_string);
		RemoveEnvelope();
		var_49_object = 0;
	}
	return 20;
	
}


func_2219(var_131_object)
{
	var_132_object = Obj();
	var_131_object = var_132_object;
	func_2049(var_132_object);
	return 0;
}


func_1707(var_210_float, var_211_cvector, var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 0);
	var_215_float = var_213_float * var_214_float;
	var_216_float = GetByIndex(var_211_cvector, 2);
	var_217_float = GetByIndex(var_212_cvector, 2);
	var_218_float = var_216_float * var_217_float;
	var_210_float = var_215_float + var_218_float;
	return 0;
}


func_1535(var_56_string)
{
	var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_bool = 0; var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	IsExisting3DSound(var_65_bool, var_56_string);
	var_73_bool = var_65_bool == 0; //@nz
	if(var_73_bool != 0) {
		var_66_int = 0;

	Label_1541:
		var_75_int = var_66_int + (int)1;
		var_76_int = var_56_string + var_75_int;
		IsExisting3DSound(var_67_bool, var_76_int);
		var_77_bool = var_67_bool == 0; //@nz
		if(var_77_bool != 0) {
		} else {
			var_66_int = var_66_int + (int)1;
			goto Label_1541;
		}
		var_78_bool = var_66_int == 0; //@nz
		if(var_78_bool != 0) {
			return 16;
		}
		irand(var_68_int, var_66_int);
		var_80_int = var_68_int + (int)1;
		var_56_string = var_56_string + var_80_int;
	}
	Is3DSoundLoaded(var_69_bool, var_56_string);
	var_81_bool = var_69_bool;
	if(var_81_bool != 0) {
		GetEyesHeight(var_70_float);
		GetDirection(var_71_cvector);
		var_72_cvector = var_71_cvector * (int)50;
		var_83_float = GetByIndex(var_72_cvector, 1);
		var_83_float = var_83_float + var_70_float;
		SetByIndex(var_72_cvector, 1) = var_83_float;
		PlayGlobalSound(var_56_string, var_72_cvector);
	}
	return 16;
	
}


func_945(var_0_object, var_1_object)
{
	var_303_int = 0; var_304_bool = 0; var_305_cvector = CVector(0,0,0); var_306_object = Obj(); var_307_int = 0; var_308_bool = 0; var_309_cvector = CVector(0,0,0); var_310_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_950:
	func_1034();
	irand(var_307_int, (int)10);
	var_313_int = var_307_int + (int)5;
	Sleep(var_313_int, var_308_bool);
	var_314_bool = var_308_bool;
	if(var_314_bool != 0) {
		func_867();
	} else {
		func_1034();
		GetPFPosition(var_309_cvector);
		var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0);
		var_316_cvector = var_1_object;
		var_309_cvector = var_317_cvector;
		func_1679(var_315_float, var_316_cvector, var_317_cvector);
		var_321_bool = var_315_float > (int)40000;
		if(var_321_bool != 0) {
			FindPathTo(var_310_object, var_1_object);
			var_322_bool = var_310_object != 0; //@nn
			if(var_322_bool != 0) {
				RotatePath(var_310_object, var_308_bool);
				var_323_bool = var_308_bool == 0; //@nz
				if(var_323_bool != 0) {
				} else {
					FollowPath(var_310_object, (bool)0, var_308_bool);
					var_325_bool = var_308_bool == 0; //@nz
					if(var_325_bool != 0) {
						goto Label_1026;
					}
					var_326_float = GetByIndex(var_0_object, 0);
					var_327_float = GetByIndex(var_0_object, 2);
					Rotate(var_326_float, var_327_float, var_308_bool);
					var_328_bool = var_308_bool == 0; //@nz
					if(var_328_bool != 0) {
						goto Label_1026;
					}
					WaitForAnimEnd(var_308_bool);
					var_329_bool = var_308_bool == 0; //@nz
					if(var_329_bool != 0) {
						goto Label_1026;
					}
					goto Label_1027;
				EMIT "GOTO 0x3f3";
			}
				Sleep((int)1);
				var_310_object = 0;
				goto Label_1026;
		}
			var_331_float = GetByIndex(var_0_object, 0);
			var_332_float = GetByIndex(var_0_object, 2);
			Rotate(var_331_float, var_332_float, var_308_bool);
			var_333_bool = var_308_bool == 0; //@nz
			if(var_333_bool != 0) {
				goto Label_1026;
			}
			WaitForAnimEnd(var_308_bool);
			var_334_bool = var_308_bool == 0; //@nz
			if(var_334_bool != 0) {
				goto Label_1026;
			}
			goto Label_1027;
		}
	Label_1026:
		goto Label_966;
	}
Label_1027:
	goto Label_950;
	
}
EMIT "Return(); Pop(8)";


func_2225(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_23_object);
	var_24_object = Obj();
	func_1663(var_24_object);
	@@var_23_object:RemoveStationaryActor(var_24_object);
	var_25_bool = 0; var_26_string = ""; var_27_string = "";
	func_1760(var_25_bool, "quest_d11_01", "soldier_death");
	var_31_object = Obj();
	var_21_object = var_31_object;
	TaskCall(7);
	func_1035(var_31_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_1203(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_1716(var_219_float, var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0);
	var_222_float = GetByIndex(var_220_cvector, 0);
	var_223_float = var_221_float * var_222_float;
	var_224_float = GetByIndex(var_220_cvector, 2);
	var_225_float = GetByIndex(var_220_cvector, 2);
	var_226_float = var_224_float * var_225_float;
	var_227_int = var_223_float + var_226_float;
	var_219_float = sqrt(var_227_int);
	return 0;
}


func_1210(var_377_float, var_378_object)
{
	var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); var_383_cvector = CVector(0,0,0); var_384_cvector = CVector(0,0,0);
	GetPosition(var_382_cvector);
	@@var_378_object:GetPosition(var_383_cvector);
	var_384_cvector = var_383_cvector - var_382_cvector;
	var_377_float = var_384_cvector | var_384_cvector;
	return 6;
}


func_1726(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0);
	var_208_cvector = var_211_cvector;
	var_209_cvector = var_212_cvector;
	func_1707(var_210_float, var_211_cvector, var_212_cvector);
	var_219_float = 0; var_220_cvector = CVector(0,0,0);
	var_208_cvector = var_220_cvector;
	func_1716(var_219_float, var_220_cvector);
	var_228_float = 0; var_229_cvector = CVector(0,0,0);
	var_209_cvector = var_229_cvector;
	func_1716(var_228_float, var_229_cvector);
	var_230_float = var_219_float * var_228_float;
	var_207_float = var_210_float / var_230_float;
	return 0;
}


func_1218(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, "player");
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1860(var_20_bool, var_21_object, var_22_bool)
{
	var_23_string = ""; var_24_string = "";
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_21_object = var_26_object;
	func_1230(var_25_bool, var_26_object, "class");
	var_34_bool = var_25_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	@@var_21_object:GetProperty("class", var_24_string);
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
	var_42_bool = 0;
	var_42_bool = 1;
	var_43_bool = 0;
	var_43_bool = 1;
	var_44_bool = 0;
	var_44_bool = 1;
	var_45_bool = 0;
	var_45_bool = 1;
	var_47_bool = var_24_string == "patrol";
	if(var_47_bool != 1) {
		var_49_bool = var_24_string == "sanitar";
		if(var_49_bool != 1) {
			var_45_bool = 0;
		}
	}
	if(var_45_bool != 1) {
		var_51_bool = var_24_string == "soldier";
		if(var_51_bool != 1) {
			var_44_bool = 0;
		}
	}
	if(var_44_bool != 1) {
		var_53_bool = var_24_string == "woman";
		if(var_53_bool != 1) {
			var_43_bool = 0;
		}
	}
	if(var_43_bool != 1) {
		var_55_bool = var_24_string == "wasted_girl";
		if(var_55_bool != 1) {
			var_42_bool = 0;
		}
	}
	if(var_42_bool != 1) {
		var_57_bool = var_24_string == "vaxxabitka";
		if(var_57_bool != 1) {
			var_41_bool = 0;
		}
	}
	if(var_41_bool != 1) {
		var_59_bool = var_24_string == "vaxxabit";
		if(var_59_bool != 1) {
			var_40_bool = 0;
		}
	}
	if(var_40_bool != 1) {
		var_61_bool = var_24_string == "little_girl";
		if(var_61_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 1) {
		var_63_bool = var_24_string == "girl";
		if(var_63_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 1) {
		var_65_bool = var_24_string == "dohodyaga";
		if(var_65_bool != 1) {
			var_37_bool = 0;
		}
	}
	if(var_37_bool != 1) {
		var_67_bool = var_24_string == "nudegirl";
		if(var_67_bool != 1) {
			var_36_bool = 0;
		}
	}
	if(var_36_bool != 0) {
		var_20_bool = 1;
		return 2;
	}
	var_68_bool = var_22_bool;
	if(var_68_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	var_20_bool = 1;
	var_69_bool = 0;
	var_69_bool = 1;
	var_70_bool = 0;
	var_70_bool = 1;
	var_71_bool = 0;
	var_71_bool = 1;
	var_72_bool = 0;
	var_72_bool = 1;
	var_73_bool = 0;
	var_73_bool = 1;
	var_75_bool = var_24_string == "worker";
	if(var_75_bool != 1) {
		var_77_bool = var_24_string == "butcher";
		if(var_77_bool != 1) {
			var_73_bool = 0;
		}
	}
	if(var_73_bool != 1) {
		var_79_bool = var_24_string == "boy";
		if(var_79_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 1) {
		var_81_bool = var_24_string == "unosha";
		if(var_81_bool != 1) {
			var_71_bool = 0;
		}
	}
	if(var_71_bool != 1) {
		var_83_bool = var_24_string == "wasted_male";
		if(var_83_bool != 1) {
			var_70_bool = 0;
		}
	}
	if(var_70_bool != 1) {
		var_85_bool = var_24_string == "alkash";
		if(var_85_bool != 1) {
			var_69_bool = 0;
		}
	}
	if(var_69_bool != 1) {
		var_87_bool = var_24_string == "morlok";
		if(var_87_bool != 1) {
			var_20_bool = 0;
		}
	}
	return 2;
}


func_1225(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
	return 2;
}


func_1356(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_17_object = var_21_object;
	func_1320(var_20_bool, var_21_object);
	var_37_bool = var_20_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_17_object = var_39_object;
	func_1230(var_38_bool, var_39_object, "noaccess");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	@@var_17_object:GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == (int)0;
	return 2;
}


func_1996()
{
	var_21_object = GlobalVars[0];
	func_1701(Obj());
	var_22_object = var_21_object;
	GlobalVars[0] = var_21_object;
	return 0;
}


func_846(var_14_object)
{
	func_1996();
	var_14_object = Obj();
	func_898();
	
Label_854:
	func_859();
	goto Label_854;
}
EMIT "Return(); Pop(0)";


func_1230(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0;
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", (int)2);
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_38_bool = 0;
		return 2;
	}
	@@var_39_object:HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
	return 2;
}


func_1743(var_308_float)
{
	var_309_object = Obj(); var_310_object = Obj();
	CreateFloatVector(var_310_object);
	@@var_310_object:add(var_308_float);
	var_312_bool = var_308_float < (int)0;
	if(var_312_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_310_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_465(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_2003(var_137_object, var_138_bool)
{
	var_139_object = Obj(); var_140_bool = 0;
	var_137_object = var_139_object;
	var_138_bool = var_140_bool;
	TaskCall(2);
	func_290(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_723()
{
	LockAnimationEnd("all", "attack_on");
	return 0;
}


func_1492(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1380(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_470(var_0_object)
{
	var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_bool = 0; var_172_cvector = CVector(0,0,0); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_object = Obj(); var_178_int = 0; var_179_cvector = CVector(0,0,0); var_180_float = 0; var_181_object = Obj(); var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_bool = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_object = Obj(); var_190_cvector = CVector(0,0,0); var_191_object = Obj(); var_192_int = 0; var_193_cvector = CVector(0,0,0); var_194_float = 0; var_195_object = Obj(); var_196_object = Obj();
	var_197_object = Obj();
	var_197_object = var_0_object;
	func_1772(var_197_object);
	ReportAttack(var_0_object);
	var_198_bool = 0; var_199_object = Obj();
	var_199_object = var_0_object;
	func_1225(var_198_bool, var_199_object);
	if(var_198_bool != 0) {
		var_200_object = Obj();
		func_1663(var_200_object);
		SendPlayerEnemy(var_0_object, var_200_object);
	}
	GetDirection(var_183_cvector);
	var_201_cvector = CVector(0,0,0); var_202_object = Obj();
	var_202_object = var_0_object;
	func_1203(var_201_cvector, var_202_object);
	var_201_cvector = var_184_cvector;
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0);
	var_183_cvector = var_208_cvector;
	var_184_cvector = var_209_cvector;
	func_1726(var_207_float, var_208_cvector, var_209_cvector);
	var_232_bool = var_207_float < (float)0.9993908405303955;
	if(var_232_bool != 0) {
		return 28;
	}
	func_1781();
	PlayAnimation("all", "attack_begin1");
	GetGeometryLocator("attack", var_185_bool, var_186_cvector, var_187_cvector);
	var_236_bool = var_185_bool;
	if(var_236_bool != 0) {
		GetScene(var_189_object);
		AddActorByType(var_188_object, "light-dynamic", var_189_object, var_186_cvector, var_187_cvector, "soldier_fire.xml");
		var_189_object = 0;
		var_188_object = 0;
	} else {
				WaitForAnimEnd();
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	GetDirection(var_183_cvector);
	var_243_cvector = CVector(0,0,0); var_244_object = Obj();
	var_244_object = var_0_object;
	func_1203(var_243_cvector, var_244_object);
	var_243_cvector = var_184_cvector;
	var_245_float = GetByIndex(var_184_cvector, 1);
	var_246_float = 0; var_247_object = Obj();
	var_247_object = var_0_object;
	func_1528(var_246_float, var_247_object);
	var_245_float = var_245_float + var_246_float;
	SetByIndex(var_184_cvector, 1) = var_245_float;
	RandVecCone3D(var_190_cvector, var_184_cvector, (float)0.03490658476948738);
	GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector);
	var_253_bool = var_191_object != 0; //@nn
	if(var_253_bool != 0) {
		var_254_bool = var_191_object == var_0_object;
		if(var_254_bool != 0) {
			var_255_float = 0; var_256_object = Obj(); var_257_float = 0; var_258_int = 0;
			var_256_object = var_0_object;
			func_1242(var_255_float, var_256_object, (float)1.5, (int)1);
			var_255_float = var_194_float;
			ReportHit(var_0_object, (int)2, var_194_float, (float)1.5);
		} else {
			var_324_bool = var_192_int != (int)-1;
			if(var_324_bool == 0) goto Label_582;
			GetScene(var_195_object);
			AddActorByType(var_196_object, "scripted", var_195_object, var_193_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_196_object:SetScriptProperty("Material", var_192_int);
			var_196_object = 0;
			var_195_object = 0;

		}
	}
Label_582:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 28;
	
}
EMIT "Stack[-6] = 0";


func_728(var_0_object, var_1_object, var_48_object)
{
	var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0); var_52_cvector = CVector(0,0,0);
	var_0_object = var_48_object;
	var_1_object = false;
	func_777(var_52_cvector);
	
Label_734:
	GetDirection(var_51_cvector);
	var_61_cvector = CVector(0,0,0); var_62_object = Obj();
	var_62_object = var_0_object;
	func_1203(var_61_cvector, var_62_object);
	var_61_cvector = var_52_cvector;
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
	var_51_cvector = var_68_cvector;
	var_52_cvector = var_69_cvector;
	func_1726(var_67_float, var_68_cvector, var_69_cvector);
	var_92_bool = var_67_float < (float)0.7071067690849304;
	if(var_92_bool != 0) {
		var_93_object = Obj(); var_94_float = 0;
		var_93_object = var_0_object;
		func_1517(var_93_object, (float)4.71238899230957);
		func_723();
	}
	Sleep((float)0.5);
	var_106_bool = 0;
	var_106_bool = 0;
	var_107_bool = var_1_object == 0; //@nz
	if(var_107_bool != 0) {
		var_108_bool = 0; var_109_object = Obj();
		var_109_object = var_0_object;
		func_1356(var_108_bool, var_109_object);
		if(var_108_bool != 0) {
			var_106_bool = 1;
		}
	}
	if(var_106_bool == 1) goto Label_734;
	StopAsync();
	UnlookAsync("spine");
	return 4;
}


func_1242(var_255_float, var_256_object, var_257_float, var_258_int)
{
	var_259_int = 0; var_260_string = ""; var_261_int = 0; var_262_float = 0; var_263_float = 0; var_264_float = 0; var_265_int = 0; var_266_string = ""; var_267_int = 0; var_268_float = 0; var_269_float = 0; var_270_float = 0;
	var_271_bool = 0; var_272_object = Obj(); var_273_string = "";
	var_256_object = var_272_object;
	func_1230(var_271_bool, var_272_object, "health");
	var_274_bool = var_271_bool == 0; //@nz
	if(var_274_bool != 0) {
		var_255_float = 0.0;
		return 12;
	}
	var_275_bool = 0; var_276_object = Obj(); var_277_string = "";
	var_256_object = var_276_object;
	func_1230(var_275_bool, var_276_object, "armor");
	var_278_bool = var_275_bool == 0; //@nz
	if(var_278_bool != 0) {
		var_265_int = 0;
	} else {
			@@var_256_object:GetProperty("armor", var_265_int);
	}
	var_280_string = ""; var_281_int = 0;
	var_258_int = var_281_int;
	func_1189(var_280_string, var_281_int);
	var_266_string = "armor_" + var_280_string;
	var_286_bool = 0; var_287_object = Obj(); var_288_string = "";
	var_256_object = var_287_object;
	var_266_string = var_288_string;
	func_1230(var_286_bool, var_287_object, var_288_string);
	var_289_bool = var_286_bool == 0; //@nz
	if(var_289_bool != 0) {
		var_267_int = 0;
	} else {
		@@var_256_object:GetProperty(var_266_string, var_267_int);

	}
	var_290_float = 0; var_291_float = 0; var_292_float = 0;
	var_293_int = var_265_int + var_267_int;
	var_291_float = var_293_int / (float)100.0;
	func_1683(var_290_float, var_291_float, (float)1);
	var_290_float = var_268_float;
	@@var_256_object:GetProperty("health", var_269_float);
	var_298_int = (int)1 - var_268_float;
	var_270_float = var_257_float * var_298_int;
	var_300_float = 0; var_301_float = 0; var_302_float = 0; var_303_float = 0;
	var_301_float = var_269_float - var_270_float;
	func_1690(var_300_float, var_301_float, (float)0, (float)1);
	@@var_256_object:SetProperty("health", var_300_float);
	var_306_bool = 0; var_307_object = Obj();
	var_256_object = var_307_object;
	func_1225(var_306_bool, var_307_object);
	if(var_306_bool != 0) {
		var_308_float = 0;
		var_308_float = -var_270_float;
		func_1743(var_308_float);
	}
	var_270_float = var_255_float;
	return 12;
	
}


func_859()
{
	func_1996();
	
Label_862:
	func_945(var_20_cvector, var_14_object);
	goto Label_862;
}
EMIT "Return(); Pop(0)";


func_120(var_0_object, var_1_object, var_364_object)
{
	var_367_bool = 0; var_368_int = 0; var_369_int = 0; var_370_bool = 0; var_371_int = 0; var_372_int = 0;
	var_0_object = var_364_object;
	var_373_object = Obj();
	var_373_object = var_0_object;
	func_1772(var_373_object);
	CanSee(var_1_object, var_0_object);
	var_374_object = var_1_object;
	if(var_374_object != 0) {
		var_375_bool = 0; var_376_object = Obj();
		var_376_object = var_0_object;
		func_2070(var_375_bool, var_376_object);
		if(var_375_bool != 0) {
			var_386_object = Obj(); var_387_bool = 0;
			var_386_object = var_0_object;
			func_2003(var_386_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	func_1781();
	PlayAnimation("all", "shoot_begin");
	WaitForAnimEnd(var_370_bool);
	var_390_bool = var_370_bool == 0; //@nz
	if(var_390_bool != 0) {
		StopAsync();
		return 6;
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	PlayAnimation("all", "shoot_end");
	WaitForAnimEnd(var_370_bool);
	var_397_bool = var_370_bool == 0; //@nz
	if(var_397_bool != 0) {
		StopAsync();
		return 6;
	}
	LockAnimationEnd("all", "shoot_end");
	var_372_int = 0;
	
Label_180:
	var_401_bool = var_372_int < (int)20;
	if(var_401_bool != 0) {
		var_402_object = Obj();
		var_402_object = var_0_object;
		func_1772(var_402_object);
		Sleep((float)0.5, var_370_bool);
		var_404_bool = var_370_bool == 0; //@nz
		if(var_404_bool != 0) {
			return 6;
		}
		CanSee(var_1_object, var_0_object);
		var_405_object = var_1_object;
		if(var_405_object != 0) {
			var_406_bool = 0; var_407_object = Obj();
			var_407_object = var_0_object;
			func_2070(var_406_bool, var_407_object);
			if(var_406_bool != 0) {
				func_274();
				var_408_object = Obj(); var_409_bool = 0;
				var_408_object = var_0_object;
				func_2003(var_408_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_413_bool = (int)0 == (int)4;
			if(var_413_bool == 0) goto Label_229;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_274();
		var_416_object = Obj(); var_417_bool = 0;
		var_364_object = var_416_object;
		func_2003(var_416_object, (bool)0);
		var_372_int = var_372_int + (int)1;
		goto Label_180;
	}
	return 6;
	
}


func_2014(var_130_object)
{
	var_131_bool = 0; var_132_bool = 0;
	var_133_bool = var_130_object == 0; //@ne
	if(var_133_bool != 0) {
		return 2;
	}
	var_134_object = GlobalVars[0];
	@@var_134_object:in(var_132_bool, var_130_object);
	var_135_bool = var_132_bool == 0; //@nz
	if(var_135_bool != 0) {
		var_136_object = GlobalVars[0];
		@@var_136_object:add(var_130_object);
	}
	var_137_bool = 0; var_138_object = Obj();
	var_130_object = var_138_object;
	func_1225(var_137_bool, var_138_object);
	if(var_137_bool != 0) {
		var_141_object = Obj();
		func_1663(var_141_object);
		ReportReputationChange(var_130_object, var_141_object, (float)0.0);
	}
	return 2;
}


func_1760(var_25_bool, var_26_string, var_27_string)
{
	var_28_object = Obj(); var_29_object = Obj();
	FindActor(var_29_object, var_26_string);
	var_30_bool = var_29_object == 0; //@ne
	if(var_30_bool != 0) {
		var_25_bool = 0;
		return 2;
	}
	Trigger(var_29_object, var_27_string);
	var_25_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1506(var_331_object)
{
	var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0);
	@@var_331_object:GetPosition(var_335_cvector);
	GetPosition(var_336_cvector);
	var_337_cvector = var_335_cvector - var_336_cvector;
	var_338_float = GetByIndex(var_337_cvector, 0);
	var_339_float = GetByIndex(var_337_cvector, 2);
	RotateAsync(var_338_float, var_339_float);
	return 6;
}


func_867()
{
	return 0;
}


func_1380(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = "";
	var_43_bool = var_28_object == 0; //@ne
	if(var_43_bool != 0) {
		return 14;
	}
	IsDead(var_36_bool);
	var_44_bool = var_36_bool;
	if(var_44_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_37_int);
	var_46_bool = var_37_int < (int)0;
	if(var_46_bool != 0) {
		return 14;
	}
	@@var_28_object:GetPosition(var_38_cvector);
	GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_49_float = var_47_float * var_48_float;
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	var_52_float = var_50_float * var_51_float;
	var_53_int = var_49_float + var_52_float;
	var_55_bool = var_53_int >= (int)0;
	if(var_55_bool != 0) {
		var_42_string = "fhit";
	} else {
		var_42_string = "bhit";
	}
	var_58_int = var_42_string + "1";
	var_60_int = var_42_string + "2";
	FadeSecondaryAnimation("hit_react", var_58_int, var_60_int, (int)-10);
	return 14;
	
}


func_1772(var_148_object)
{
	var_149_bool = 0; var_150_bool = 0;
	IsPlayerActor(var_148_object, var_150_bool);
	var_151_bool = var_150_bool;
	if(var_151_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1517(var_93_object, var_94_float)
{
	var_95_cvector = CVector(0,0,0); var_96_cvector = CVector(0,0,0); var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0);
	@@var_93_object:GetPosition(var_98_cvector);
	GetPosition(var_99_cvector);
	var_100_cvector = var_98_cvector - var_99_cvector;
	var_101_float = GetByIndex(var_100_cvector, 0);
	var_102_float = GetByIndex(var_100_cvector, 2);
	RotateAsync(var_101_float, var_102_float, var_94_float);
	return 6;
}


func_2158(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0; var_17_object = Obj();
	var_13_object = var_17_object;
	func_1356(var_16_bool, var_17_object);
	var_50_bool = var_16_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	var_51_object = GlobalVars[0];
	@@var_51_object:in(var_15_bool, var_13_object);
	var_52_bool = var_15_bool;
	if(var_52_bool != 0) {
		var_12_bool = 1;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj();
	var_13_object = var_54_object;
	func_2078(var_53_bool, var_54_object);
	var_53_bool = var_12_bool;
	return 2;
}


func_1781()
{
	var_153_object = Obj(); var_154_object = Obj();
	GetScene(var_154_object);
	var_156_object = Obj();
	func_1663(var_156_object);
	BroadcastMessage("battle", var_156_object, var_154_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2038(var_145_object)
{
	var_146_object = Obj();
	var_145_object = var_146_object;
	func_2014(var_146_object);
	var_147_object = Obj(); var_148_bool = 0;
	var_145_object = var_147_object;
	func_2003(var_147_object, (bool)1);
	return 0;
}


func_1528(var_246_float, var_247_object)
{
	var_248_float = 0; var_249_float = 0; var_250_float = 0; var_251_float = 0;
	GetEyesHeight(var_250_float);
	@@var_247_object:GetEyesHeight(var_251_float);
	var_246_float = var_251_float - var_250_float;
	return 4;
}


func_1663(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	self(var_18_object);
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


