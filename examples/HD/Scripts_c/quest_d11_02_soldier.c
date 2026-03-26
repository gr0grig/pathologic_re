// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,WaitForAnimEnd/1,PlayGlobalSound/4,SetAttackState/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,SendPlayerEnemy/2,GetGeometryLocator/4,GetScene/1,AddActorByType/6,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,IsLoaded/1,RemoveActor/1,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,IsPlayerActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,RotateAsync/2,GetEyesHeight/1,AddItem/3,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,PlayGlobalMusic/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/4,ResetAAS/0,ReportReputationChange/3
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:shoot_begin|W:shot|W:shoot_end|W:attack_off|W:attack_on|W:hunt|W:@Stop hunt|W:attack_begin1|W:attack|W:light-dynamic|W:soldier_fire.xml|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|W:execute|W:quest_d11_02|W:soldier_attack|W:cleanup|W:restore|A:in|W:fire|W:bullet|W:phys|W:player|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:reputation|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rifle_ammo|W:rusk|W:bandage|W:tourniquet|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:bomber|W:hunter|W:grabitel|W:disease|W:dog|W:actor_unload|W:soldier_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0x33f
// @RUN_TASK: 4
// @TASK_0: vars= params=1
// @EVENT_0: op=0x20 vars=object
// @EVENT_22: op=0x9f vars=object,int,float,float
// @EVENT_16: op=0xa1 vars=object,string
// @EVENT_41: op=0xa3 vars=object
// @TASK_1: vars=object params=1
// @EVENT_41: op=0xc5 vars=object
// @EVENT_3: op=0xce vars=object
// @EVENT_4: op=0xd7 vars=object
// @EVENT_17: op=0xe3 vars=object
// @EVENT_30: op=0xf7 vars=object,object,bool
// @EVENT_1: op=0x104 vars=object
// @EVENT_7: op=0x112 vars=int
// @TASK_2: vars=object,bool params=1
// @EVENT_17: op=0x196 vars=object
// @EVENT_30: op=0x1aa vars=object,object,bool
// @EVENT_41: op=0x1be vars=object
// @TASK_3: vars=object,object,bool params=2
// @EVENT_3: op=0x257 vars=object
// @EVENT_1: op=0x265 vars=object
// @EVENT_17: op=0x2f7 vars=object
// @EVENT_30: op=0x30f vars=object,object,bool
// @TASK_4: vars=bool params=0
// @EVENT_26: op=0x31c vars=string
// @EVENT_17: op=0x338 vars=object
// @EVENT_6: op=0x35f vars=
// @TASK_5: vars=cvector,cvector params=1
// @EVENT_3: op=0x387 vars=object
// @EVENT_17: op=0x3a5 vars=object
// @EVENT_30: op=0x3b9 vars=object,object,bool
// @EVENT_1: op=0x3c6 vars=object
// @TASK_6: vars=bool params=0
// @EVENT_17: op=0x469 vars=object
// @EVENT_26: op=0x470 vars=string
// @STANDALONE_EVENT_22: op=0x7b6 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x7be vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x7c8 vars=object,string
// @STANDALONE_EVENT_41: op=0x7d5 vars=object
// @STANDALONE_EVENT_6: op=0x947 vars=
// @PE: 0x0,0x11,0x85,0x9f,0xa1,0xa3,0xc5,0xce,0xd7,0xe3,0xf7,0x104,0x112,0x196,0x1aa,0x1be,0x257,0x265,0x2f7,0x30f,0x31c,0x338,0x371,0x37e,0x3a5,0x3b9,0x3c6,0x469,0x470,0x478,0x620,0x68b,0x692,0x6a8,0x6b1,0x6bb,0x6cc,0x730,0x7ae,0x7b6,0x7be,0x7d5,0x876,0x899,0x8b9,0x927,0x954,0x95a

task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_10_bool = var_14_object;
		func_1840(var_14_object);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_bool, var_11_cvector, var_12_cvector, var_13_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_189();
	var_10_bool = Obj();
	func_2005();
	return 0;
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = var_10_bool == var_0_object;
	if(var_11_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = var_10_bool == var_0_object;
	if(var_11_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_14_object = Obj();
		var_14_object = var_0_object;
		func_1483(var_14_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj();
	var_99_object = var_101_object;
	func_1333(var_100_bool, var_101_object);
	var_128_bool = var_100_bool == 0; //@nz
	if(var_128_bool != 0) {
		var_129_object = Obj();
		var_99_object = var_129_object;
		func_2177(var_129_object);
		return 0;
	}
	func_189();
	var_145_object = Obj();
	var_99_object = var_145_object;
	func_2201(var_145_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0;
	var_10_cvector = var_14_object;
	var_11_cvector = var_15_object;
	var_12_bool = var_16_bool;
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool);
	if(var_13_bool != 0) {
		var_10_cvector = Obj();
		func_227();
	}
	return 0;
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_2321(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_189();
		var_131_object = Obj();
		var_10_bool = var_131_object;
		func_2343(var_131_object);
	}
	return 0;
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_12_bool = var_10_bool != (int)100;
	if(var_12_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj();
	var_99_object = var_101_object;
	func_1333(var_100_bool, var_101_object);
	var_128_bool = var_100_bool == 0; //@nz
	if(var_128_bool != 0) {
		var_129_object = Obj();
		var_99_object = var_129_object;
		func_2177(var_129_object);
		return 0;
	}
	func_439();
	var_144_object = Obj();
	var_99_object = var_144_object;
	func_2201(var_144_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0;
	var_10_cvector = var_14_object;
	var_11_cvector = var_15_object;
	var_12_bool = var_16_bool;
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool);
	if(var_13_bool != 0) {
		var_10_cvector = Obj();
		func_406();
	}
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_439();
	var_10_bool = Obj();
	func_2005();
	return 0;
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_2_bool;
	if(var_12_bool != 0) {
		var_13_bool = var_10_bool == var_0_object;
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		var_14_object = Obj();
		var_14_object = var_0_object;
		func_1483(var_14_object);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0;
	var_11_bool = 0;
	var_12_bool = var_2_bool;
	if(var_12_bool != 0) {
		var_13_bool = var_10_bool == var_0_object;
		if(var_13_bool != 0) {
			var_11_bool = 1;
		}
	}
	if(var_11_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj();
	var_99_object = var_101_object;
	func_1333(var_100_bool, var_101_object);
	var_128_bool = var_100_bool == 0; //@nz
	if(var_128_bool != 0) {
		return 0;
	}
	var_129_object = Obj();
	var_99_object = var_129_object;
	func_2177(var_129_object);
	var_144_bool = var_99_object == var_0_object;
	if(var_144_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_99_object;
		var_145_bool = var_2_bool;
		if(var_145_bool == 0) goto Label_782;
		StopAnimation();
		StopGroup0();
	}
Label_782:
	return 0;
	
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_bool, var_10_cvector, var_11_cvector, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0;
	var_10_cvector = var_14_object;
	var_11_cvector = var_15_object;
	var_12_bool = var_16_bool;
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool);
	if(var_13_bool != 0) {
		var_10_cvector = Obj();
		func_759();
	}
	return 0;
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_12_bool = var_10_bool == "attack";
	if(var_12_bool != 0) {
		var_13_object = Obj();
		func_1173(Obj());
		var_14_object = var_13_object;
		TaskCall(5);
		func_881(var_13_object);
		TaskReturn();
	} else {
		var_335_bool = var_10_bool == "execute";
		if(var_335_bool != 0) {
			TaskCall(6);
			func_1070(var_336_bool);
			TaskReturn();
			goto Label_823;
		}
		var_365_string = "";
		var_10_bool = var_365_string;
		func_835(var_10_bool, var_365_string);
	}
Label_823:
	return 0;
	
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = "";
	func_1802(var_11_bool, "quest_d11_02", "soldier_attack");
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_object = var_0_object;
	if(var_11_object != 0) {
		var_12_bool = 0;
		func_879(var_12_bool);
		if(var_12_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_13_object = Obj();
		func_1655(var_13_object);
		RemoveActor(var_13_object);
	}
	return 0;
}


task_5_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	var_13_bool = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1333(var_13_bool, var_14_object);
	var_47_bool = var_13_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 2;
	}
	var_48_bool = 0; var_49_object = Obj();
	var_10_bool = var_49_object;
	func_2241(var_48_bool, var_49_object);
	var_126_bool = var_48_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_127_object = GlobalVars[0];
		@@var_127_object:in(var_12_bool, var_10_bool);
		var_128_bool = var_12_bool == 0; //@nz
		if(var_128_bool != 0) {
			return 2;
		}
	}
	func_1064();
	var_129_object = Obj();
	var_10_bool = var_129_object;
	TaskCall(1);
	func_165(var_130_object, var_129_object);
	TaskReturn();
	return 2;
}


	task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_12_bool, var_99_object)
	{
	var_100_bool = 0; var_101_object = Obj();
	var_99_object = var_101_object;
	func_1333(var_100_bool, var_101_object);
	var_128_bool = var_100_bool == 0; //@nz
	if(var_128_bool != 0) {
		var_129_object = Obj();
		var_99_object = var_129_object;
		func_2177(var_129_object);
		return 0;
	}
	func_1064();
	var_144_object = Obj();
	var_99_object = var_144_object;
	func_2201(var_144_object);
	return 0;
	}


task_5_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_12_bool)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0;
	var_10_object = var_14_object;
	var_11_bool = var_15_object;
	var_12_bool = var_16_bool;
	func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool);
	if(var_13_bool != 0) {
		var_10_object = Obj();
		func_933();
	}
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_2321(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_1064();
		var_130_object = Obj();
		var_10_bool = var_130_object;
		func_2388(var_130_object);
	}
	return 0;
}


task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = "";
	func_1802(var_11_bool, "quest_d11_02", "soldier_attack");
	return 0;
}


task_6_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_string)
{
	var_12_bool = var_10_string == "attack";
	if(var_12_bool != 0) {
		StopGroup0();
		var_0_object = true;
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1401(var_14_object, var_15_int, var_16_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float, var_14_cvector, var_15_cvector)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0);
	var_10_object = var_16_object;
	var_11_int = var_17_int;
	var_12_float = var_18_float;
	var_14_cvector = var_19_cvector;
	var_15_cvector = var_20_cvector;
	func_1469(var_18_float, var_19_cvector, var_20_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object, var_11_string)
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


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_object = var_12_object;
	func_1180(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		var_15_object = Obj();
		func_1655(var_15_object);
		ReportReputationChange(var_10_object, var_15_object, (float)0.05000000074505806, (bool)1);
	}
	var_20_object = Obj();
	var_10_object = var_20_object;
	func_2394(var_20_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = "";
	func_1802(var_10_bool, "quest_d11_02", "actor_unload");
	var_16_object = Obj();
	func_1655(var_16_object);
	RemoveActor(var_16_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	
Label_831:
	Hold();
	goto Label_831;
}
EMIT "Return(); Pop(0)";


func_0(var_68_object)
{
	var_69_bool = 0; var_70_object = Obj();
	var_68_object = var_70_object;
	func_1180(var_69_bool, var_70_object);
	if(var_69_bool != 0) {
		func_1925();
	}
	func_1901();
	var_147_object = Obj();
	var_68_object = var_147_object;
	func_17(var_147_object);
	return 0;
}


func_17(var_147_object)
{
	EventDisable(0);
	var_148_object = Obj();
	var_147_object = var_148_object;
	func_42(var_148_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_28:
	Hold();
	goto Label_28;
}
EMIT "Return(); Pop(0)";


func_1568(var_87_bool, var_88_string)
{
	var_87_bool = 1;
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
	var_97_bool = 0;
	var_97_bool = 1;
	var_98_bool = 0;
	var_98_bool = 1;
	var_99_bool = 0;
	var_99_bool = 1;
	var_101_bool = var_88_string == "woman";
	if(var_101_bool != 1) {
		var_103_bool = var_88_string == "worker";
		if(var_103_bool != 1) {
			var_99_bool = 0;
		}
	}
	if(var_99_bool != 1) {
		var_105_bool = var_88_string == "butcher";
		if(var_105_bool != 1) {
			var_98_bool = 0;
		}
	}
	if(var_98_bool != 1) {
		var_107_bool = var_88_string == "wasted_girl";
		if(var_107_bool != 1) {
			var_97_bool = 0;
		}
	}
	if(var_97_bool != 1) {
		var_109_bool = var_88_string == "boy";
		if(var_109_bool != 1) {
			var_96_bool = 0;
		}
	}
	if(var_96_bool != 1) {
		var_111_bool = var_88_string == "vaxxabitka";
		if(var_111_bool != 1) {
			var_95_bool = 0;
		}
	}
	if(var_95_bool != 1) {
		var_113_bool = var_88_string == "unosha";
		if(var_113_bool != 1) {
			var_94_bool = 0;
		}
	}
	if(var_94_bool != 1) {
		var_115_bool = var_88_string == "wasted_male";
		if(var_115_bool != 1) {
			var_93_bool = 0;
		}
	}
	if(var_93_bool != 1) {
		var_117_bool = var_88_string == "alkash";
		if(var_117_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 1) {
		var_119_bool = var_88_string == "dohodyaga";
		if(var_119_bool != 1) {
			var_91_bool = 0;
		}
	}
	if(var_91_bool != 1) {
		var_121_bool = var_88_string == "vaxxabit";
		if(var_121_bool != 1) {
			var_90_bool = 0;
		}
	}
	if(var_90_bool != 1) {
		var_123_bool = var_88_string == "nudegirl";
		if(var_123_bool != 1) {
			var_89_bool = 0;
		}
	}
	if(var_89_bool != 1) {
		var_125_bool = var_88_string == "morlok";
		if(var_125_bool != 1) {
			var_87_bool = 0;
		}
	}
	return 0;
}


func_1064()
{
	StopGroup0();
	Stop();
	return 0;
}


func_42(var_148_object)
{
	var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_cvector = CVector(0,0,0); var_153_string = ""; var_154_object = Obj(); var_155_bool = 0; var_156_bool = 0; var_157_float = 0; var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_string = ""; var_164_object = Obj(); var_165_bool = 0; var_166_bool = 0; var_167_float = 0; var_168_cvector = CVector(0,0,0);
	var_169_bool = var_148_object == 0; //@ne
	if(var_169_bool != 0) {
		var_170_string = "";
		func_133("fdie");
	} else {
		@@var_148_object:GetPosition(var_159_cvector);
		GetPosition(var_160_cvector);
		GetDirection(var_161_cvector);
		var_162_cvector = var_160_cvector - var_159_cvector;
		var_202_float = GetByIndex(var_162_cvector, 0);
		var_203_float = GetByIndex(var_161_cvector, 0);
		var_204_float = var_202_float * var_203_float;
		var_205_float = GetByIndex(var_162_cvector, 2);
		var_206_float = GetByIndex(var_161_cvector, 2);
		var_207_float = var_205_float * var_206_float;
		var_208_int = var_204_float + var_207_float;
		var_210_bool = var_208_int >= (int)0;
		if(var_210_bool != 0) {
			var_163_string = "fdie";
		} else {
				var_163_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_148_object = var_164_object;
		var_213_bool = IsFuncExist(var_148_object, "GetScriptProperty", (int)2);
		if(var_213_bool != 0) {
			@@var_148_object:HasScriptProperty(var_165_bool, "Owner");
			var_215_bool = var_165_bool;
			if(var_215_bool != 0) {
				@@var_148_object:GetScriptProperty(var_164_object, "Owner");
				var_217_bool = var_164_object == 0; //@ne
				if(var_217_bool != 0) {
					var_148_object = var_164_object;
				}
			}
		}
		var_220_bool = IsFuncExist(var_164_object, "@GetEyesHeight", (int)1);
		if(var_220_bool != 0) {
			@@var_164_object:GetEyesHeight(var_167_float);
			var_168_cvector = CVector(0.0, 0.0, 0.0);
			var_221_float = GetByIndex(var_168_cvector, 1);
			var_167_float = var_221_float;
			SetByIndex(var_168_cvector, 1) = var_221_float;
			LookAsync(var_148_object, "head", var_168_cvector);
			var_166_bool = 1;
		} else {
			var_166_bool = 0;

		}
		var_223_string = "";
		var_163_string = var_223_string;
		func_1527(var_223_string);
		PlayAnimation("all", var_163_string);
		WaitForAnimEnd();
		var_225_bool = var_166_bool;
		if(var_225_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_163_string);
		RemoveEnvelope();
		var_164_object = 0;
	}
	return 20;
	
}


func_1069()
{
	return 0;
}


func_1070(var_0_object)
{
	var_0_object = false;
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	var_339_bool = var_0_object == 0; //@nz
	if(var_339_bool != 0) {
		LockAnimationEnd("all", "attack_on");
		Sleep((int)20);
		var_343_bool = var_0_object == 0; //@nz
		if(var_343_bool != 0) {
			PlayAnimation("all", "attack_begin1");
			WaitForAnimEnd();
			var_346_bool = 0; var_347_string = ""; var_348_string = "";
			func_1802(var_346_bool, "quest_d11_02", "execute");
			PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
			PlayAnimation("all", "attack_end1");
			WaitForAnimEnd();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
		}
	}
	var_360_object = var_0_object;
	if(var_360_object != 0) {
		var_361_object = Obj();
		func_1173(Obj());
		var_362_object = var_361_object;
		TaskCall(5);
		func_881(var_361_object);
		TaskReturn();
	}
	return 0;
}


func_2159()
{
	var_20_object = GlobalVars[0];
	func_1698(Obj());
	var_21_object = var_20_object;
	GlobalVars[0] = var_20_object;
	return 0;
}


func_2166(var_136_object, var_137_bool)
{
	var_138_object = Obj(); var_139_bool = 0;
	var_136_object = var_138_object;
	var_137_bool = var_139_bool;
	TaskCall(3);
	func_455(var_140_object, var_141_object, var_142_bool, var_138_object, var_139_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1655(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	self(var_18_object);
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_630(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_1144(var_279_string, var_280_int)
{
	var_282_bool = var_280_int == (int)2;
	if(var_282_bool != 0) {
		var_279_string = "fire";
		return 0;
	EMIT "GOTO 0x484";
	}
	var_284_bool = var_280_int == (int)1;
	if(var_284_bool != 0) {
		var_279_string = "bullet";
		return 0;
	}
	var_279_string = "phys";
	return 0;
}


func_635(var_0_object)
{
	var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_bool = 0; var_171_cvector = CVector(0,0,0); var_172_cvector = CVector(0,0,0); var_173_object = Obj(); var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_object = Obj(); var_177_int = 0; var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_object = Obj(); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_bool = 0; var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_object = Obj(); var_188_object = Obj(); var_189_cvector = CVector(0,0,0); var_190_object = Obj(); var_191_int = 0; var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_object = Obj(); var_195_object = Obj();
	var_196_object = Obj();
	var_196_object = var_0_object;
	func_1814(var_196_object);
	ReportAttack(var_0_object);
	var_197_bool = 0; var_198_object = Obj();
	var_198_object = var_0_object;
	func_1180(var_197_bool, var_198_object);
	if(var_197_bool != 0) {
		var_199_object = Obj();
		func_1655(var_199_object);
		SendPlayerEnemy(var_0_object, var_199_object);
	}
	GetDirection(var_182_cvector);
	var_200_cvector = CVector(0,0,0); var_201_object = Obj();
	var_201_object = var_0_object;
	func_1158(var_200_cvector, var_201_object);
	var_200_cvector = var_183_cvector;
	var_206_float = 0; var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0);
	var_182_cvector = var_207_cvector;
	var_183_cvector = var_208_cvector;
	func_1723(var_206_float, var_207_cvector, var_208_cvector);
	var_231_bool = var_206_float < (float)0.9993908405303955;
	if(var_231_bool != 0) {
		return 28;
	}
	func_1823();
	PlayAnimation("all", "attack_begin1");
	GetGeometryLocator("attack", var_184_bool, var_185_cvector, var_186_cvector);
	var_235_bool = var_184_bool;
	if(var_235_bool != 0) {
		GetScene(var_188_object);
		AddActorByType(var_187_object, "light-dynamic", var_188_object, var_185_cvector, var_186_cvector, "soldier_fire.xml");
		var_188_object = 0;
		var_187_object = 0;
	} else {
				WaitForAnimEnd();
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	GetDirection(var_182_cvector);
	var_242_cvector = CVector(0,0,0); var_243_object = Obj();
	var_243_object = var_0_object;
	func_1158(var_242_cvector, var_243_object);
	var_242_cvector = var_183_cvector;
	var_244_float = GetByIndex(var_183_cvector, 1);
	var_245_float = 0; var_246_object = Obj();
	var_246_object = var_0_object;
	func_1494(var_245_float, var_246_object);
	var_244_float = var_244_float + var_245_float;
	SetByIndex(var_183_cvector, 1) = var_244_float;
	RandVecCone3D(var_189_cvector, var_183_cvector, (float)0.03490658476948738);
	GetVictimMaterial(var_189_cvector, var_190_object, var_191_int, var_192_cvector);
	var_252_bool = var_190_object != 0; //@nn
	if(var_252_bool != 0) {
		var_253_bool = var_190_object == var_0_object;
		if(var_253_bool != 0) {
			var_254_float = 0; var_255_object = Obj(); var_256_float = 0; var_257_int = 0;
			var_255_object = var_0_object;
			func_1219(var_254_float, var_255_object, (float)1.5, (int)1);
			var_254_float = var_193_float;
			ReportHit(var_0_object, (int)2, var_193_float, (float)1.5);
		} else {
			var_323_bool = var_191_int != (int)-1;
			if(var_323_bool == 0) goto Label_747;
			GetScene(var_194_object);
			AddActorByType(var_195_object, "scripted", var_194_object, var_192_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_195_object:SetScriptProperty("Material", var_191_int);
			var_195_object = 0;
			var_194_object = 0;

		}
	}
Label_747:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 28;
	
}
EMIT "Stack[-6] = 0";


func_1661(var_42_cvector, var_43_cvector)
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


func_2177(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0;
	var_132_bool = var_129_object == 0; //@ne
	if(var_132_bool != 0) {
		return 2;
	}
	var_133_object = GlobalVars[0];
	@@var_133_object:in(var_131_bool, var_129_object);
	var_134_bool = var_131_bool == 0; //@nz
	if(var_134_bool != 0) {
		var_135_object = GlobalVars[0];
		@@var_135_object:add(var_129_object);
	}
	var_136_bool = 0; var_137_object = Obj();
	var_129_object = var_137_object;
	func_1180(var_136_bool, var_137_object);
	if(var_136_bool != 0) {
		var_140_object = Obj();
		func_1655(var_140_object);
		ReportReputationChange(var_129_object, var_140_object, (float)0.0);
	}
	return 2;
}


func_133(var_170_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_171_string = "";
	var_170_string = var_171_string;
	func_1527(var_171_string);
	PlayAnimation("all", var_170_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_170_string);
	RemoveEnvelope();
	return 0;
}


func_1158(var_44_cvector, var_45_object)
{
	var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
	GetPosition(var_48_cvector);
	@@var_45_object:GetPosition(var_49_cvector);
	var_44_cvector = var_49_cvector - var_48_cvector;
	return 4;
}


func_1671(var_314_float, var_315_cvector, var_316_cvector)
{
	var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0);
	var_318_cvector = var_316_cvector - var_315_cvector;
	var_314_float = var_318_cvector | var_318_cvector;
	return 2;
}


func_1675(var_289_float, var_290_float, var_291_float)
{
	var_294_bool = var_290_float < var_291_float;
	if(var_294_bool != 0) {
		var_290_float = var_289_float;
	} else {
		var_291_float = var_289_float;
	}
	return 0;
	
}


func_1165(var_376_float, var_377_object)
{
	var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0); var_382_cvector = CVector(0,0,0); var_383_cvector = CVector(0,0,0);
	GetPosition(var_381_cvector);
	@@var_377_object:GetPosition(var_382_cvector);
	var_383_cvector = var_382_cvector - var_381_cvector;
	var_376_float = var_383_cvector | var_383_cvector;
	return 6;
}


func_1682(var_58_float, var_59_float, var_60_float, var_61_float)
{
	var_62_bool = var_59_float < var_60_float;
	if(var_62_bool != 0) {
		var_60_float = var_58_float;
		return 0;
	}
	var_63_bool = var_59_float > var_61_float;
	if(var_63_bool != 0) {
		var_61_float = var_58_float;
		return 0;
	}
	var_59_float = var_58_float;
	return 0;
}


func_1173(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, "player");
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2201(var_144_object)
{
	var_145_object = Obj();
	var_144_object = var_145_object;
	func_2177(var_145_object);
	var_146_object = Obj(); var_147_bool = 0;
	var_144_object = var_146_object;
	func_2166(var_146_object, (bool)1);
	return 0;
}


func_1180(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsPlayerActor(var_12_object, var_14_bool);
	var_14_bool = var_11_bool;
	return 2;
}


func_1693(var_103_bool, var_104_int, var_105_int)
{
	var_106_int = 0; var_107_int = 0;
	irand(var_107_int, var_105_int);
	var_103_bool = var_107_int < var_104_int;
	return 2;
}


func_1185(var_48_bool, var_49_object, var_50_string)
{
	var_51_bool = 0; var_52_bool = 0;
	var_55_bool = IsFuncExist(var_49_object, "HasProperty", (int)2);
	var_56_bool = var_55_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_48_bool = 0;
		return 2;
	}
	@@var_49_object:HasProperty(var_50_string, var_52_bool);
	var_52_bool = var_48_bool;
	return 2;
}


func_1698(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateObjectSet(var_23_object);
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_2212(var_131_object)
{
	var_132_bool = 0; var_133_bool = 0;
	var_134_object = GlobalVars[0];
	@@var_134_object:in(var_133_bool, var_131_object);
	var_135_bool = var_133_bool;
	if(var_135_bool != 0) {
		var_136_object = Obj(); var_137_bool = 0;
		var_131_object = var_136_object;
		func_2166(var_136_object, (bool)1);
	} else {
		var_363_object = Obj();
		var_131_object = var_363_object;
		TaskCall(2);
		func_285(var_364_object, var_365_bool, var_363_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_165(var_0_object, var_129_object)
{
	var_131_bool = 0; var_132_bool = 0;
	var_0_object = var_129_object;
	Face(var_129_object);
	
Label_169:
	Sleep((float)0.5, var_132_bool);
	var_134_bool = 0;
	var_134_bool = 1;
	var_135_bool = var_132_bool == 0; //@nz
	if(var_135_bool != 1) {
		var_136_bool = 0; var_137_object = Obj();
		var_137_object = var_0_object;
		func_1333(var_136_bool, var_137_object);
		var_138_bool = var_136_bool == 0; //@nz
		if(var_138_bool != 1) {
			var_134_bool = 0;
		}
	}
	if(var_134_bool != 0) {
	} else {
		goto Label_169;
	}
	StopAsync();
	return 2;
	
}


func_1704(var_209_float, var_210_cvector, var_211_cvector)
{
	var_212_float = GetByIndex(var_210_cvector, 0);
	var_213_float = GetByIndex(var_211_cvector, 0);
	var_214_float = var_212_float * var_213_float;
	var_215_float = GetByIndex(var_210_cvector, 2);
	var_216_float = GetByIndex(var_211_cvector, 2);
	var_217_float = var_215_float * var_216_float;
	var_209_float = var_214_float + var_217_float;
	return 0;
}


func_1197(var_40_bool, var_41_object, var_42_string, var_43_float, var_44_float, var_45_float)
{
	var_46_float = 0; var_47_float = 0;
	var_48_bool = 0; var_49_object = Obj(); var_50_string = "";
	var_41_object = var_49_object;
	var_42_string = var_50_string;
	func_1185(var_48_bool, var_49_object, var_50_string);
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
	func_1682(var_58_float, var_59_float, var_60_float, var_61_float);
	@@var_41_object:SetProperty(var_42_string, var_58_float);
	var_40_bool = 1;
	return 2;
}


func_1713(var_218_float, var_219_cvector)
{
	var_220_float = GetByIndex(var_219_cvector, 0);
	var_221_float = GetByIndex(var_219_cvector, 0);
	var_222_float = var_220_float * var_221_float;
	var_223_float = GetByIndex(var_219_cvector, 2);
	var_224_float = GetByIndex(var_219_cvector, 2);
	var_225_float = var_223_float * var_224_float;
	var_226_int = var_222_float + var_225_float;
	var_218_float = sqrt(var_226_int);
	return 0;
}


func_2233(var_374_bool, var_375_object)
{
	var_376_float = 0; var_377_object = Obj();
	var_375_object = var_377_object;
	func_1165(var_376_float, var_377_object);
	var_374_bool = var_376_float <= (float)40000.0;
	return 0;
}


func_1723(var_206_float, var_207_cvector, var_208_cvector)
{
	var_209_float = 0; var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0);
	var_207_cvector = var_210_cvector;
	var_208_cvector = var_211_cvector;
	func_1704(var_209_float, var_210_cvector, var_211_cvector);
	var_218_float = 0; var_219_cvector = CVector(0,0,0);
	var_207_cvector = var_219_cvector;
	func_1713(var_218_float, var_219_cvector);
	var_227_float = 0; var_228_cvector = CVector(0,0,0);
	var_208_cvector = var_228_cvector;
	func_1713(var_227_float, var_228_cvector);
	var_229_float = var_218_float * var_227_float;
	var_206_float = var_209_float / var_229_float;
	return 0;
}


func_189()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_2241(var_52_bool, var_53_object)
{
	var_54_float = 0; var_55_string = ""; var_56_float = 0; var_57_float = 0; var_58_string = ""; var_59_float = 0;
	var_60_bool = 0; var_61_object = Obj();
	var_53_object = var_61_object;
	func_1333(var_60_bool, var_61_object);
	var_62_bool = var_60_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_52_bool = 0;
		return 6;
	}
	var_63_bool = 0; var_64_object = Obj();
	var_53_object = var_64_object;
	func_1180(var_63_bool, var_64_object);
	if(var_63_bool != 0) {
		@@var_53_object:GetProperty("reputation", var_57_float);
		var_52_bool = var_57_float < (float)0.33000001311302185;
		return 6;
	}
	var_69_bool = 0; var_70_object = Obj(); var_71_string = "";
	var_53_object = var_70_object;
	func_1185(var_69_bool, var_70_object, "class");
	var_72_bool = var_69_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_52_bool = 0;
		return 6;
	}
	@@var_53_object:GetProperty("class", var_58_string);
	var_74_bool = 0;
	var_74_bool = 1;
	var_75_bool = 0;
	var_75_bool = 1;
	var_77_bool = var_58_string == "bomber";
	if(var_77_bool != 1) {
		var_79_bool = var_58_string == "hunter";
		if(var_79_bool != 1) {
			var_75_bool = 0;
		}
	}
	if(var_75_bool != 1) {
		var_81_bool = var_58_string == "grabitel";
		if(var_81_bool != 1) {
			var_74_bool = 0;
		}
	}
	if(var_74_bool != 0) {
		var_52_bool = 1;
		return 6;
	}
	var_82_bool = 0; var_83_object = Obj(); var_84_string = "";
	var_53_object = var_83_object;
	func_1185(var_82_bool, var_83_object, "disease");
	var_85_bool = var_82_bool == 0; //@nz
	if(var_85_bool != 0) {
		var_52_bool = 0;
		return 6;
	}
	var_86_bool = 0;
	var_86_bool = 1;
	var_87_bool = 0; var_88_string = "";
	var_58_string = var_88_string;
	func_1568(var_87_bool, var_88_string);
	if(var_87_bool != 1) {
		var_127_bool = var_58_string == "dog";
		if(var_127_bool != 1) {
			var_86_bool = 0;
		}
	}
	if(var_86_bool != 0) {
		@@var_53_object:GetProperty("disease", var_59_float);
		var_52_bool = var_59_float > (int)0;
		return 6;
	}
	var_52_bool = 0;
	return 6;
}


func_1219(var_254_float, var_255_object, var_256_float, var_257_int)
{
	var_258_int = 0; var_259_string = ""; var_260_int = 0; var_261_float = 0; var_262_float = 0; var_263_float = 0; var_264_int = 0; var_265_string = ""; var_266_int = 0; var_267_float = 0; var_268_float = 0; var_269_float = 0;
	var_270_bool = 0; var_271_object = Obj(); var_272_string = "";
	var_255_object = var_271_object;
	func_1185(var_270_bool, var_271_object, "health");
	var_273_bool = var_270_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_254_float = 0.0;
		return 12;
	}
	var_274_bool = 0; var_275_object = Obj(); var_276_string = "";
	var_255_object = var_275_object;
	func_1185(var_274_bool, var_275_object, "armor");
	var_277_bool = var_274_bool == 0; //@nz
	if(var_277_bool != 0) {
		var_264_int = 0;
	} else {
			@@var_255_object:GetProperty("armor", var_264_int);
	}
	var_279_string = ""; var_280_int = 0;
	var_257_int = var_280_int;
	func_1144(var_279_string, var_280_int);
	var_265_string = "armor_" + var_279_string;
	var_285_bool = 0; var_286_object = Obj(); var_287_string = "";
	var_255_object = var_286_object;
	var_265_string = var_287_string;
	func_1185(var_285_bool, var_286_object, var_287_string);
	var_288_bool = var_285_bool == 0; //@nz
	if(var_288_bool != 0) {
		var_266_int = 0;
	} else {
		@@var_255_object:GetProperty(var_265_string, var_266_int);

	}
	var_289_float = 0; var_290_float = 0; var_291_float = 0;
	var_292_int = var_264_int + var_266_int;
	var_290_float = var_292_int / (float)100.0;
	func_1675(var_289_float, var_290_float, (float)1);
	var_289_float = var_267_float;
	@@var_255_object:GetProperty("health", var_268_float);
	var_297_int = (int)1 - var_267_float;
	var_269_float = var_256_float * var_297_int;
	var_299_float = 0; var_300_float = 0; var_301_float = 0; var_302_float = 0;
	var_300_float = var_268_float - var_269_float;
	func_1682(var_299_float, var_300_float, (float)0, (float)1);
	@@var_255_object:SetProperty("health", var_299_float);
	var_305_bool = 0; var_306_object = Obj();
	var_255_object = var_306_object;
	func_1180(var_305_bool, var_306_object);
	if(var_305_bool != 0) {
		var_307_float = 0;
		var_307_float = -var_269_float;
		func_1775(var_307_float);
	}
	var_269_float = var_254_float;
	return 12;
	
}


func_1740(var_29_bool, var_30_object, var_31_float)
{
	var_32_bool = var_30_object == 0; //@nz
	if(var_32_bool != 0) {
		var_29_bool = 0;
		return 0;
	}
	var_34_bool = var_31_float > (int)0;
	if(var_34_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_65_bool = var_31_float < (int)0;
		if(var_65_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1761;
		}
		var_29_bool = 0;
		return 0;
	}
Label_1761:
	var_36_float = 0;
	var_31_float = var_36_float;
	func_1792(var_36_float);
	var_40_bool = 0; var_41_object = Obj(); var_42_string = ""; var_43_float = 0; var_44_float = 0; var_45_float = 0;
	var_30_object = var_41_object;
	var_31_float = var_43_float;
	func_1197(var_40_bool, var_41_object, "reputation", var_43_float, (float)0, (float)1);
	var_29_bool = 1;
	return 0;
	
}


func_1775(var_307_float)
{
	var_308_object = Obj(); var_309_object = Obj();
	CreateFloatVector(var_309_object);
	@@var_309_object:add(var_307_float);
	var_311_bool = var_307_float < (int)0;
	if(var_311_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_309_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1792(var_36_float)
{
	var_37_object = Obj(); var_38_object = Obj();
	CreateFloatVector(var_38_object);
	@@var_38_object:add(var_36_float);
	SendWorldWndMessage((int)16, var_38_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1802(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_11_string);
	var_15_bool = var_14_object == 0; //@ne
	if(var_15_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	Trigger(var_14_object, var_12_string);
	var_10_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1292(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	@@var_31_object:IsDead(var_33_bool);
	var_33_bool = var_30_bool;
	return 2;
}


func_2321(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	var_15_bool = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_1333(var_15_bool, var_16_object);
	var_49_bool = var_15_bool == 0; //@nz
	if(var_49_bool != 0) {
		var_11_bool = 0;
		return 2;
	}
	var_50_object = GlobalVars[0];
	@@var_50_object:in(var_14_bool, var_12_object);
	var_51_bool = var_14_bool;
	if(var_51_bool != 0) {
		var_11_bool = 1;
		return 2;
	}
	var_52_bool = 0; var_53_object = Obj();
	var_12_object = var_53_object;
	func_2241(var_52_bool, var_53_object);
	var_52_bool = var_11_bool;
	return 2;
}


func_1297(var_19_bool, var_20_object)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	var_25_bool = var_20_object == 0; //@ne
	if(var_25_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	var_26_bool = 0;
	var_26_bool = 0;
	var_29_bool = IsFuncExist(var_20_object, "IsDead", (int)1);
	if(var_29_bool != 0) {
		var_30_bool = 0; var_31_object = Obj();
		var_20_object = var_31_object;
		func_1292(var_30_bool, var_31_object);
		if(var_30_bool != 0) {
			var_26_bool = 1;
		}
	}
	if(var_26_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	GetScene(var_23_object);
	var_34_bool = var_23_object == 0; //@ne
	if(var_34_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	@@var_20_object:GetScene(var_24_object);
	var_35_bool = var_23_object != var_24_object;
	if(var_35_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	var_19_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1814(var_147_object)
{
	var_148_bool = 0; var_149_bool = 0;
	IsPlayerActor(var_147_object, var_149_bool);
	var_150_bool = var_149_bool;
	if(var_150_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_285(var_0_object, var_1_object, var_363_object)
{
	var_366_bool = 0; var_367_int = 0; var_368_int = 0; var_369_bool = 0; var_370_int = 0; var_371_int = 0;
	var_0_object = var_363_object;
	var_372_object = Obj();
	var_372_object = var_0_object;
	func_1814(var_372_object);
	CanSee(var_1_object, var_0_object);
	var_373_object = var_1_object;
	if(var_373_object != 0) {
		var_374_bool = 0; var_375_object = Obj();
		var_375_object = var_0_object;
		func_2233(var_374_bool, var_375_object);
		if(var_374_bool != 0) {
			var_385_object = Obj(); var_386_bool = 0;
			var_385_object = var_0_object;
			func_2166(var_385_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	func_1823();
	PlayAnimation("all", "shoot_begin");
	WaitForAnimEnd(var_369_bool);
	var_389_bool = var_369_bool == 0; //@nz
	if(var_389_bool != 0) {
		StopAsync();
		return 6;
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	PlayAnimation("all", "shoot_end");
	WaitForAnimEnd(var_369_bool);
	var_396_bool = var_369_bool == 0; //@nz
	if(var_396_bool != 0) {
		StopAsync();
		return 6;
	}
	LockAnimationEnd("all", "shoot_end");
	var_371_int = 0;
	
Label_345:
	var_400_bool = var_371_int < (int)20;
	if(var_400_bool != 0) {
		var_401_object = Obj();
		var_401_object = var_0_object;
		func_1814(var_401_object);
		Sleep((float)0.5, var_369_bool);
		var_403_bool = var_369_bool == 0; //@nz
		if(var_403_bool != 0) {
			return 6;
		}
		CanSee(var_1_object, var_0_object);
		var_404_object = var_1_object;
		if(var_404_object != 0) {
			var_405_bool = 0; var_406_object = Obj();
			var_406_object = var_0_object;
			func_2233(var_405_bool, var_406_object);
			if(var_405_bool != 0) {
				func_439();
				var_407_object = Obj(); var_408_bool = 0;
				var_407_object = var_0_object;
				func_2166(var_407_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_412_bool = (int)0 == (int)4;
			if(var_412_bool == 0) goto Label_394;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_439();
		var_415_object = Obj(); var_416_bool = 0;
		var_363_object = var_415_object;
		func_2166(var_415_object, (bool)0);
		var_371_int = var_371_int + (int)1;
		goto Label_345;
	}
	return 6;
	
}


func_1823()
{
	var_152_object = Obj(); var_153_object = Obj();
	GetScene(var_153_object);
	var_155_object = Obj();
	func_1655(var_155_object);
	BroadcastMessage("battle", var_155_object, var_153_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2343(var_131_object)
{
	var_132_object = Obj();
	var_131_object = var_132_object;
	func_2388(var_132_object);
	return 0;
}


func_1834(var_127_int)
{
	var_128_int = 0; var_129_int = 0;
	GetVariable("branch", var_129_int);
	var_129_int = var_127_int;
	return 2;
}


func_2349(var_13_bool, var_14_object, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj(); var_21_bool = 0;
	var_15_object = var_20_object;
	var_21_bool = !var_16_bool;
	func_2023(var_19_bool, var_20_object, var_21_bool);
	if(var_19_bool != 0) {
		CanSee(var_18_bool, var_14_object);
		var_87_bool = 0;
		var_87_bool = 1;
		var_88_bool = var_18_bool;
		if(var_88_bool != 1) {
			var_89_float = 0; var_90_object = Obj();
			var_14_object = var_90_object;
			func_1165(var_89_float, var_90_object);
			var_98_bool = var_89_float <= (float)490000.0;
			if(var_98_bool != 1) {
				var_87_bool = 0;
			}
		}
		if(var_87_bool != 0) {
			var_13_bool = 1;
			return 2;
		}
	}
	var_13_bool = 0;
	return 2;
}


func_1840(var_14_object)
{
	var_15_int = 0;
	func_1834(var_15_int);
	var_20_bool = var_15_int == (int)1;
	if(var_20_bool != 0) {
		WorkWithCorpse(var_14_object);
	} else {
		Barter(var_14_object);
	}
	return 0;
	
}


func_1333(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_16_object = var_20_object;
	func_1297(var_19_bool, var_20_object);
	var_36_bool = var_19_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	var_16_object = var_38_object;
	func_1185(var_37_bool, var_38_object, "noaccess");
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_15_bool = 1;
		return 2;
	}
	@@var_16_object:GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == (int)0;
	return 2;
}


func_1853(var_76_int, var_77_int)
{
	var_78_int = 0; var_79_bool = 0; var_80_int = 0; var_81_bool = 0;
	var_82_bool = var_76_int > var_77_int;
	if(var_82_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_80_int = 0;
	var_84_bool = var_76_int != var_77_int;
	if(var_84_bool != 0) {
		var_85_int = var_77_int - var_76_int;
		irand(var_80_int, var_85_int);
	} else {
		var_94_bool = var_76_int == (int)0;
		if(var_94_bool == 0) goto Label_1871;
		return 4;
	}
Label_1871:
	var_80_int = var_80_int + var_76_int;
	var_87_bool = var_80_int == (int)0;
	if(var_87_bool != 0) {
		return 4;
	}
	var_88_int = 0; var_89_string = "";
	func_1961(var_88_int, "Money");
	AddItem(var_81_bool, var_88_int, (int)0, var_80_int);
	return 4;
	
}


func_835(var_0_object, var_365_string)
{
	var_366_bool = 0; var_367_bool = 0;
	var_369_bool = var_365_string == "cleanup";
	if(var_369_bool != 0) {
		var_0_object = true;
		IsLoaded(var_367_bool);
		var_370_bool = 0;
		var_370_bool = 0;
		var_371_bool = var_367_bool == 0; //@nz
		if(var_371_bool != 0) {
			var_372_bool = 0;
			func_879(var_372_bool);
			if(var_372_bool != 0) {
				var_370_bool = 1;
			}
		}
		if(var_370_bool != 0) {
			var_373_object = Obj();
			func_1655(var_373_object);
			RemoveActor(var_373_object);
		}
	} else {
		var_375_bool = var_365_string == "restore";
		if(var_375_bool == 0) goto Label_862;
		var_0_object = false;
	}
Label_862:
	return 2;
	
}


func_1357(var_27_object)
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


func_2388(var_130_object)
{
	var_131_object = Obj();
	var_130_object = var_131_object;
	func_2212(var_131_object);
	return 0;
}


func_2394(var_20_object)
{
	var_21_bool = 0; var_22_string = ""; var_23_string = "";
	func_1802(var_21_bool, "quest_d11_02", "soldier_dead");
	var_27_bool = 0; var_28_object = Obj();
	var_20_object = var_28_object;
	func_1180(var_27_bool, var_28_object);
	if(var_27_bool != 0) {
		var_29_bool = 0; var_30_object = Obj(); var_31_float = 0;
		var_20_object = var_30_object;
		func_1740(var_29_bool, var_30_object, (float)0.029999999329447746);
	}
	var_67_object = Obj();
	var_20_object = var_67_object;
	func_1966(var_67_object);
	return 0;
}


func_1884(var_133_string)
{
	var_134_object = Obj(); var_135_int = 0; var_136_bool = 0; var_137_object = Obj(); var_138_int = 0; var_139_bool = 0;
	CreateInvItem(var_137_object);
	@@var_137_object:SetItemName(var_133_string);
	@@var_137_object:SetProperty("Organ", (int)1);
	@@var_137_object:GetItemID(var_138_int);
	AddItem(var_139_bool, var_137_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1901()
{
	var_127_int = 0;
	func_1834(var_127_int);
	var_132_bool = var_127_int != (int)1;
	if(var_132_bool != 0) {
		return 0;
	}
	var_133_string = "";
	func_1884("liver");
	var_144_string = "";
	func_1884("kidney");
	var_145_string = "";
	func_1884("heart");
	var_146_string = "";
	func_1884("blood");
	return 0;
}


func_879(var_12_bool)
{
	var_12_bool = 1;
	return 0;
}


func_881(var_13_object)
{
	func_2159();
	var_13_object = Obj();
	func_933();
	
Label_889:
	func_894();
	goto Label_889;
}
EMIT "Return(); Pop(0)";


func_1401(var_14_object, var_15_int, var_16_float)
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
		func_1158(var_44_cvector, var_45_object);
		var_44_cvector = var_43_cvector;
		func_1661(var_42_cvector, var_43_cvector);
		var_42_cvector = var_26_cvector;
		CreateVectorVector(var_27_object);
		var_28_int = 1;

	Label_1430:
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
			goto Label_1430;
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
			func_1469(var_61_float, var_62_cvector, var_63_cvector);
			return 18;
		}
		var_27_object = 0;
	}
	var_104_object = Obj();
	var_14_object = var_104_object;
	func_1357(var_104_object);
	return 18;
	
}


func_894()
{
	func_2159();
	
Label_897:
	func_980(var_19_cvector, var_13_object);
	goto Label_897;
}
EMIT "Return(); Pop(0)";


func_1925()
{
	var_71_int = 0; var_72_bool = 0; var_73_int = 0; var_74_bool = 0;
	ClearSubContainer((int)0);
	var_76_int = 0; var_77_int = 0;
	func_1853((int)500, (int)1000);
	var_95_string = ""; var_96_int = 0; var_97_int = 0; var_98_int = 0;
	func_1512("rifle_ammo", (int)1, (int)3, (int)3);
	var_111_string = ""; var_112_int = 0; var_113_int = 0; var_114_int = 0;
	func_1512("rusk", (int)1, (int)3, (int)2);
	var_115_string = ""; var_116_int = 0; var_117_int = 0;
	func_1501("bandage", (int)1, (int)6);
	var_124_string = ""; var_125_int = 0; var_126_int = 0;
	func_1501("tourniquet", (int)1, (int)6);
	return 4;
}


func_902()
{
	return 0;
}


func_1961(var_88_int, var_89_string)
{
	var_90_int = 0; var_91_int = 0;
	GetInvItemByName(var_91_int, var_89_string);
	var_91_int = var_88_int;
	return 2;
}


func_1966(var_67_object)
{
	var_68_object = Obj();
	var_67_object = var_68_object;
	TaskCall(0);
	func_0(var_68_object);
	TaskReturn();
	return 0;
}


func_439()
{
	StopAsync();
	StopGroup0();
	Stop();
	return 0;
}


func_1469(var_16_object, var_19_cvector, var_20_cvector)
{
	var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj();
	GetScene(var_23_object);
	AddActorByType(var_24_object, "scripted", var_23_object, var_19_cvector, var_20_cvector, "blood_dir.xml");
	var_27_object = Obj();
	var_16_object = var_27_object;
	func_1357(var_27_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_455(var_0_object, var_1_object, var_2_bool, var_138_object, var_139_bool)
{
	var_143_bool = 0; var_144_bool = 0; var_145_bool = 0; var_146_bool = 0;
	var_0_object = var_138_object;
	var_147_object = Obj();
	var_147_object = var_0_object;
	func_1814(var_147_object);
	func_1823();
	Face(var_0_object);
	var_158_bool = var_139_bool;
	if(var_158_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_481:
	var_164_bool = 0; var_165_object = Obj();
	var_165_object = var_0_object;
	func_1333(var_164_bool, var_165_object);
	if(var_164_bool != 0) {
		CanSee(var_146_bool, var_0_object);
		var_166_bool = var_146_bool;
		if(var_166_bool != 0) {
			var_167_object = Obj();
			var_167_object = var_0_object;
			func_1814(var_167_object);
			func_635(var_146_bool);
		} else {
				var_330_object = Obj();
				var_330_object = var_0_object;
				func_1483(var_330_object);
				var_2_bool = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_145_bool);
				var_341_bool = var_145_bool == 0; //@nz
				if(var_341_bool != 0) {
					var_342_bool = var_1_object != 0; //@nn
					if(var_342_bool != 0) {
						func_630(var_145_bool, var_146_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_481;
				}
				var_345_bool = 0; var_346_object = Obj();
				var_346_object = var_0_object;
				func_1333(var_345_bool, var_346_object);
				var_347_bool = var_345_bool == 0; //@nz
				if(var_347_bool != 0) {
				} else {
					CanSee(var_146_bool, var_0_object);
					var_351_bool = var_146_bool;
					if(var_351_bool != 0) {
						var_2_bool = false;
						Face(var_0_object);
						func_635(var_146_bool);
						goto Label_577;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_145_bool);
					var_355_bool = var_145_bool == 0; //@nz
					if(var_355_bool != 0) {
						var_356_bool = var_1_object != 0; //@nn
						if(var_356_bool != 0) {
							func_630(var_145_bool, var_146_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_481;
					}
					var_359_bool = 0; var_360_object = Obj();
					var_360_object = var_0_object;
					func_1333(var_359_bool, var_360_object);
					var_361_bool = var_359_bool == 0; //@nz
					if(var_361_bool != 0) {
						goto Label_587;
					}
					var_2_bool = false;
					CanSee(var_146_bool, var_0_object);
					var_362_bool = var_146_bool;
					if(var_362_bool != 0) {
						Face(var_0_object);
						func_635(var_146_bool);
						goto Label_577;
					}
					goto Label_587;
				}
	}
		Label_587:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_577:
	var_328_bool = var_1_object != 0; //@nn
	if(var_328_bool != 0) {
		func_630(var_145_bool, var_146_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_481;
	
}


func_1483(var_330_object)
{
	var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0); var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0);
	@@var_330_object:GetPosition(var_334_cvector);
	GetPosition(var_335_cvector);
	var_336_cvector = var_334_cvector - var_335_cvector;
	var_337_float = GetByIndex(var_336_cvector, 0);
	var_338_float = GetByIndex(var_336_cvector, 2);
	RotateAsync(var_337_float, var_338_float);
	return 6;
}


func_980(var_0_object, var_1_object)
{
	var_302_int = 0; var_303_bool = 0; var_304_cvector = CVector(0,0,0); var_305_object = Obj(); var_306_int = 0; var_307_bool = 0; var_308_cvector = CVector(0,0,0); var_309_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_985:
	func_1069();
	irand(var_306_int, (int)10);
	var_312_int = var_306_int + (int)5;
	Sleep(var_312_int, var_307_bool);
	var_313_bool = var_307_bool;
	if(var_313_bool != 0) {
		func_902();
	} else {
		func_1069();
		GetPFPosition(var_308_cvector);
		var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0);
		var_315_cvector = var_1_object;
		var_308_cvector = var_316_cvector;
		func_1671(var_314_float, var_315_cvector, var_316_cvector);
		var_320_bool = var_314_float > (int)40000;
		if(var_320_bool != 0) {
			FindPathTo(var_309_object, var_1_object);
			var_321_bool = var_309_object != 0; //@nn
			if(var_321_bool != 0) {
				RotatePath(var_309_object, var_307_bool);
				var_322_bool = var_307_bool == 0; //@nz
				if(var_322_bool != 0) {
				} else {
					FollowPath(var_309_object, (bool)0, var_307_bool);
					var_324_bool = var_307_bool == 0; //@nz
					if(var_324_bool != 0) {
						goto Label_1061;
					}
					var_325_float = GetByIndex(var_0_object, 0);
					var_326_float = GetByIndex(var_0_object, 2);
					Rotate(var_325_float, var_326_float, var_307_bool);
					var_327_bool = var_307_bool == 0; //@nz
					if(var_327_bool != 0) {
						goto Label_1061;
					}
					WaitForAnimEnd(var_307_bool);
					var_328_bool = var_307_bool == 0; //@nz
					if(var_328_bool != 0) {
						goto Label_1061;
					}
					goto Label_1062;
				EMIT "GOTO 0x416";
			}
				Sleep((int)1);
				var_309_object = 0;
				goto Label_1061;
		}
			var_330_float = GetByIndex(var_0_object, 0);
			var_331_float = GetByIndex(var_0_object, 2);
			Rotate(var_330_float, var_331_float, var_307_bool);
			var_332_bool = var_307_bool == 0; //@nz
			if(var_332_bool != 0) {
				goto Label_1061;
			}
			WaitForAnimEnd(var_307_bool);
			var_333_bool = var_307_bool == 0; //@nz
			if(var_333_bool != 0) {
				goto Label_1061;
			}
			goto Label_1062;
		}
	Label_1061:
		goto Label_1001;
	}
Label_1062:
	goto Label_985;
	
}
EMIT "Return(); Pop(8)";


func_1494(var_245_float, var_246_object)
{
	var_247_float = 0; var_248_float = 0; var_249_float = 0; var_250_float = 0;
	GetEyesHeight(var_249_float);
	@@var_246_object:GetEyesHeight(var_250_float);
	var_245_float = var_250_float - var_249_float;
	return 4;
}


func_1501(var_115_string, var_116_int, var_117_int)
{
	var_118_bool = 0; var_119_bool = 0;
	var_120_bool = 0; var_121_int = 0; var_122_int = 0;
	var_116_int = var_121_int;
	var_117_int = var_122_int;
	func_1693(var_120_bool, var_121_int, var_122_int);
	if(var_120_bool != 0) {
		AddItem(var_119_bool, var_115_string, (int)0);
	}
	return 2;
}


func_2023(var_19_bool, var_20_object, var_21_bool)
{
	var_22_string = ""; var_23_string = "";
	var_24_bool = 0; var_25_object = Obj(); var_26_string = "";
	var_20_object = var_25_object;
	func_1185(var_24_bool, var_25_object, "class");
	var_33_bool = var_24_bool == 0; //@nz
	if(var_33_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	@@var_20_object:GetProperty("class", var_23_string);
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
	var_42_bool = 0;
	var_42_bool = 1;
	var_43_bool = 0;
	var_43_bool = 1;
	var_44_bool = 0;
	var_44_bool = 1;
	var_46_bool = var_23_string == "patrol";
	if(var_46_bool != 1) {
		var_48_bool = var_23_string == "sanitar";
		if(var_48_bool != 1) {
			var_44_bool = 0;
		}
	}
	if(var_44_bool != 1) {
		var_50_bool = var_23_string == "soldier";
		if(var_50_bool != 1) {
			var_43_bool = 0;
		}
	}
	if(var_43_bool != 1) {
		var_52_bool = var_23_string == "woman";
		if(var_52_bool != 1) {
			var_42_bool = 0;
		}
	}
	if(var_42_bool != 1) {
		var_54_bool = var_23_string == "wasted_girl";
		if(var_54_bool != 1) {
			var_41_bool = 0;
		}
	}
	if(var_41_bool != 1) {
		var_56_bool = var_23_string == "vaxxabitka";
		if(var_56_bool != 1) {
			var_40_bool = 0;
		}
	}
	if(var_40_bool != 1) {
		var_58_bool = var_23_string == "vaxxabit";
		if(var_58_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 1) {
		var_60_bool = var_23_string == "little_girl";
		if(var_60_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 1) {
		var_62_bool = var_23_string == "girl";
		if(var_62_bool != 1) {
			var_37_bool = 0;
		}
	}
	if(var_37_bool != 1) {
		var_64_bool = var_23_string == "dohodyaga";
		if(var_64_bool != 1) {
			var_36_bool = 0;
		}
	}
	if(var_36_bool != 1) {
		var_66_bool = var_23_string == "nudegirl";
		if(var_66_bool != 1) {
			var_35_bool = 0;
		}
	}
	if(var_35_bool != 0) {
		var_19_bool = 1;
		return 2;
	}
	var_67_bool = var_21_bool;
	if(var_67_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	var_19_bool = 1;
	var_68_bool = 0;
	var_68_bool = 1;
	var_69_bool = 0;
	var_69_bool = 1;
	var_70_bool = 0;
	var_70_bool = 1;
	var_71_bool = 0;
	var_71_bool = 1;
	var_72_bool = 0;
	var_72_bool = 1;
	var_74_bool = var_23_string == "worker";
	if(var_74_bool != 1) {
		var_76_bool = var_23_string == "butcher";
		if(var_76_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 1) {
		var_78_bool = var_23_string == "boy";
		if(var_78_bool != 1) {
			var_71_bool = 0;
		}
	}
	if(var_71_bool != 1) {
		var_80_bool = var_23_string == "unosha";
		if(var_80_bool != 1) {
			var_70_bool = 0;
		}
	}
	if(var_70_bool != 1) {
		var_82_bool = var_23_string == "wasted_male";
		if(var_82_bool != 1) {
			var_69_bool = 0;
		}
	}
	if(var_69_bool != 1) {
		var_84_bool = var_23_string == "alkash";
		if(var_84_bool != 1) {
			var_68_bool = 0;
		}
	}
	if(var_68_bool != 1) {
		var_86_bool = var_23_string == "morlok";
		if(var_86_bool != 1) {
			var_19_bool = 0;
		}
	}
	return 2;
}


func_1512(var_95_string, var_96_int, var_97_int, var_98_int)
{
	var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_bool = 0;
	var_103_bool = 0; var_104_int = 0; var_105_int = 0;
	var_96_int = var_104_int;
	var_97_int = var_105_int;
	func_1693(var_103_bool, var_104_int, var_105_int);
	if(var_103_bool != 0) {
		irand(var_101_int, var_98_int);
		var_110_int = var_101_int + (int)1;
		AddItem(var_102_bool, var_95_string, (int)0, var_110_int);
	}
	return 4;
}


func_1527(var_171_string)
{
	var_172_bool = 0; var_173_int = 0; var_174_bool = 0; var_175_int = 0; var_176_bool = 0; var_177_float = 0; var_178_cvector = CVector(0,0,0); var_179_cvector = CVector(0,0,0); var_180_bool = 0; var_181_int = 0; var_182_bool = 0; var_183_int = 0; var_184_bool = 0; var_185_float = 0; var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0);
	IsExisting3DSound(var_180_bool, var_171_string);
	var_188_bool = var_180_bool == 0; //@nz
	if(var_188_bool != 0) {
		var_181_int = 0;

	Label_1533:
		var_190_int = var_181_int + (int)1;
		var_191_int = var_171_string + var_190_int;
		IsExisting3DSound(var_182_bool, var_191_int);
		var_192_bool = var_182_bool == 0; //@nz
		if(var_192_bool != 0) {
		} else {
			var_181_int = var_181_int + (int)1;
			goto Label_1533;
		}
		var_193_bool = var_181_int == 0; //@nz
		if(var_193_bool != 0) {
			return 16;
		}
		irand(var_183_int, var_181_int);
		var_195_int = var_183_int + (int)1;
		var_171_string = var_171_string + var_195_int;
	}
	Is3DSoundLoaded(var_184_bool, var_171_string);
	var_196_bool = var_184_bool;
	if(var_196_bool != 0) {
		GetEyesHeight(var_185_float);
		GetDirection(var_186_cvector);
		var_187_cvector = var_186_cvector * (int)50;
		var_198_float = GetByIndex(var_187_cvector, 1);
		var_198_float = var_198_float + var_185_float;
		SetByIndex(var_187_cvector, 1) = var_198_float;
		PlayGlobalSound(var_171_string, var_187_cvector);
	}
	return 16;
	
}


