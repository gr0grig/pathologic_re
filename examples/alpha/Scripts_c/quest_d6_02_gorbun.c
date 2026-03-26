// @IMPORTS: SetTimer/2,KillTimer/1,GetBrightness/1,rand/2,Sleep/1,GetPosition/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,Stop/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsPlayerActor/2,FindPathTo/2,Trace/1,ResetAAS/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,CanSee/2,Face/1,ReportAttack/1,GetScene/1,GetGeometryLocator/4,AddActorByType/6,RandVec2D/2,Speak/1,GetSeeThreshold/1,GetSeeFOV/1,SetSeeThreshold/1,SetSeeFOV/1,rand/1,Rotate/3,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,self/1,FindActor/2,Trigger/2,HasAnimation/3,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,RemoveActor/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|A:GetPFPosition|W:Can't find path to noise source|W:new hunt point|W:attack_begin|W:attack_end|W:attack|W:scripted|W:grenade.xml|A:SetScriptProperty|W:StartVelocity|W:DamageAmount|W:DamageType|W:scream|W:hunt|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|W:health|W:class|W:bomber|W:rat|W:quest_d6_02|W:gorbun_death
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_1: op=0xc vars=object
// @EVENT_3: op=0x1a vars=object
// @EVENT_17: op=0x28 vars=object
// @EVENT_30: op=0x31 vars=object,object
// @EVENT_41: op=0x44 vars=object
// @EVENT_7: op=0x4d vars=int
// @EVENT_10: op=0x9c vars=object
// @EVENT_28: op=0xa0 vars=
// @TASK_1: vars= params=1
// @EVENT_0: op=0xc4 vars=object
// @EVENT_22: op=0x139 vars=object,int,float,float
// @EVENT_16: op=0x13b vars=object,string
// @EVENT_41: op=0x13d vars=object
// @TASK_2: vars=cvector,object,object params=1
// @EVENT_1: op=0x146 vars=object
// @EVENT_17: op=0x154 vars=object
// @EVENT_30: op=0x15d vars=object,object
// @EVENT_7: op=0x1b4 vars=int
// @EVENT_3: op=0x1c4 vars=object
// @EVENT_28: op=0x1e2 vars=
// @EVENT_41: op=0x1eb vars=object
// @TASK_3: vars= params=0
// @EVENT_1: op=0x1f4 vars=object
// @EVENT_3: op=0x202 vars=object
// @EVENT_17: op=0x210 vars=object
// @EVENT_30: op=0x219 vars=object,object
// @TASK_4: vars=object,bool params=1
// @EVENT_1: op=0x318 vars=object
// @EVENT_2: op=0x31d vars=object
// @EVENT_30: op=0x322 vars=object,object
// @TASK_5: vars=object params=1
// @EVENT_1: op=0x32e vars=object
// @EVENT_2: op=0x334 vars=object
// @EVENT_17: op=0x339 vars=object
// @EVENT_30: op=0x33f vars=object,object
// @TASK_6: vars=float,float,object params=2
// @EVENT_1: op=0x389 vars=object
// @EVENT_3: op=0x397 vars=object
// @EVENT_17: op=0x3ae vars=object
// @EVENT_30: op=0x3b7 vars=object,object
// @EVENT_41: op=0x3cc vars=object
// @TASK_7: vars= params=0
// @EVENT_1: op=0x3dd vars=object
// @EVENT_3: op=0x3eb vars=object
// @EVENT_17: op=0x3f9 vars=object
// @EVENT_30: op=0x402 vars=object,object
// @EVENT_41: op=0x417 vars=object
// @EVENT_7: op=0x420 vars=int
// @STANDALONE_EVENT_22: op=0x5f2 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x606 vars=object,string
// @STANDALONE_EVENT_41: op=0x613 vars=object
// @STANDALONE_EVENT_6: op=0x66a vars=
// @PE: 0xc,0x1a,0x28,0x31,0x44,0x9c,0xac,0xb5,0x123,0x139,0x13b,0x13d,0x13f,0x146,0x154,0x15d,0x17c,0x1b4,0x1c4,0x1eb,0x1f4,0x202,0x210,0x219,0x318,0x31d,0x322,0x32e,0x334,0x339,0x33f,0x34b,0x389,0x3ae,0x3b7,0x3cc,0x3dd,0x3eb,0x3f9,0x402,0x417,0x420,0x5a0,0x5ae,0x5b6,0x5c4,0x5cb,0x5d3,0x5da,0x5e4,0x5f2,0x5fa,0x613,0x668,0x672

task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1491(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1498(var_67_object);
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1476(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1483(var_67_object);
	}
	return 0;
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_61();
	var_47_object = Obj();
	var_45_object = var_47_object;
	func_1508(var_47_object);
	return 0;
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1561(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_float = Obj();
		func_40();
	}
	return 0;
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	func_61();
	var_11_object = Obj();
	func_1555();
	return 0;
}


task_0_event_7(var_0_bool, var_1_bool, var_2_int, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_float = 0; var_13_float = 0;
	var_15_bool = var_11_object == (int)90;
	if(var_15_bool != 0) {
		SetTimer((int)90, (int)1);
		GetBrightness(var_13_float);
		var_19_bool = var_13_float < (float)0.10000000149011612;
		if(var_19_bool != 0) {
			func_61();
			TaskCall(7);
			func_981();
			TaskReturn();
		}
	}
	return 2;
}


task_0_event_10(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_0_event_28(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	Stop();
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		WorkWithCorpse(var_11_object);
	}
	return 2;
}


task_1_event_22(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_float, var_5_float, var_6_cvector, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_object, var_12_float, var_13_float, var_14_object)
{
	return 0;
}


task_1_event_16(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	return 0;
}


task_2_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1491(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_485();
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1498(var_67_object);
	}
	return 0;
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_485();
	var_47_object = Obj();
	var_45_object = var_47_object;
	func_1508(var_47_object);
	return 0;
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1561(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_float = Obj();
		func_340();
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_13_bool = var_11_object == (int)61;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_object = Obj();
		var_15_object = var_1_bool;
		func_380(var_14_bool, var_15_object);
		var_68_bool = var_14_bool == 0; //@nz
		if(var_68_bool != 0) {
			Stop();
			var_2_cvector = 0;
		}
		ResetAAS();
	}
	return 0;
}


task_2_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_1_bool;
	if(var_12_bool != 0) {
		var_13_bool = 0; var_14_object = Obj();
		var_14_object = var_1_bool;
		func_380(var_13_bool, var_14_object);
		var_67_bool = var_13_bool == 0; //@nz
		if(var_67_bool != 0) {
			func_485();
			var_2_cvector = 0;
			return 0;
		}
	} else {
		var_70_bool = 0; var_71_object = Obj(); var_72_object = Obj();
		var_11_object = var_71_object;
		var_72_object = var_1_bool;
		func_361(var_70_bool, var_71_object, var_72_object);
		if(var_70_bool == 0) goto Label_474;
		var_1_bool = var_11_object;
	}
Label_474:
	@@@var_1_bool:GetPFPosition(var_0_bool);
	Trace("new hunt point");
	Stop();
	return 0;
	
}


task_2_event_28(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	func_485();
	var_11_object = Obj();
	func_1555();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1491(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_618();
		var_66_object = Obj();
		var_11_object = var_66_object;
		func_1498(var_66_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1476(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_618();
		var_66_object = Obj();
		var_11_object = var_66_object;
		func_1483(var_66_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_618();
	var_46_object = Obj();
	var_45_object = var_46_object;
	func_1508(var_46_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1561(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_float = Obj();
		func_528();
	}
	return 0;
}


task_4_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool;
	if(var_12_bool != 0) {
		var_1_bool = true;
	}
	return 0;
}


task_4_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool;
	if(var_12_bool != 0) {
		var_1_bool = false;
	}
	return 0;
}


task_4_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1561(var_13_bool, var_14_object, var_15_object);
	return 0;
}


task_5_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_843(var_11_object, var_12_object);
	return 0;
}


task_5_event_2(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == var_0_bool;
	if(var_12_bool != 0) {
		var_0_bool = 0;
	}
	return 0;
}


	task_5_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	var_46_object = Obj();
	var_45_object = var_46_object;
	func_843(var_45_object, var_46_object);
	return 0;
	}


task_5_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1561(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_float = Obj();
		func_825();
	}
	return 0;
}


task_6_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1491(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_963(var_10_object, var_11_object);
		var_66_object = Obj();
		var_11_object = var_66_object;
		func_1498(var_66_object);
	}
	return 0;
}


task_6_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsPlayerActor(var_2_cvector, var_13_bool);
	var_14_bool = var_13_bool;
	if(var_14_bool != 0) {
		return 2;
	}
	var_15_bool = 0; var_16_object = Obj();
	var_11_object = var_16_object;
	func_1599(var_15_bool, var_16_object);
	var_67_bool = var_15_bool == 0; //@nz
	if(var_67_bool != 0) {
		return 2;
	}
	IsPlayerActor(var_11_object, var_13_bool);
	var_68_bool = var_13_bool;
	if(var_68_bool != 0) {
		var_2_cvector = var_11_object;
		Stop();
		StopGroup0();
	}
	return 2;
}


	task_6_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_45_object)
	{
	func_963(var_12_object, var_45_object);
	var_46_object = Obj();
	var_45_object = var_46_object;
	func_1508(var_46_object);
	return 0;
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_object = var_14_object;
	var_12_object = var_15_object;
	func_1561(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_object = Obj();
		func_942();
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_963(var_10_object, var_11_object);
	var_11_object = Obj();
	func_1555();
	return 0;
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1491(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1038();
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1498(var_67_object);
	}
	return 0;
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1476(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1038();
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1483(var_67_object);
	}
	return 0;
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_45_object)
	{
	func_1038();
	var_47_object = Obj();
	var_45_object = var_47_object;
	func_1508(var_47_object);
	return 0;
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_object = var_14_object;
	var_12_object = var_15_object;
	func_1561(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_object = Obj();
		func_1017();
	}
	return 0;
}


task_7_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1038();
	var_11_object = Obj();
	func_1555();
	return 0;
}


task_7_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_int)
{
	var_13_bool = var_11_int == (int)91;
	if(var_13_bool != 0) {
		func_1038();
	}
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1205(var_16_int, var_17_float);
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_string)
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


event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_1530(var_12_object);
	return 0;
}


event_6(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	var_11_object = Obj();
	func_1277(var_11_object);
	RemoveActor(var_11_object);
	Hold();
	return 0;
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_1598();
	
Label_3:
	SetTimer((int)90, (int)10);
	func_99(var_9_float, var_10_object);
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_1283(var_126_float, var_127_cvector, var_128_cvector)
{
	var_129_cvector = CVector(0,0,0); var_130_cvector = CVector(0,0,0);
	var_130_cvector = var_128_cvector - var_127_cvector;
	var_131_int = var_130_cvector | var_130_cvector;
	var_126_float = sqrt(var_131_int);
	return 2;
}


func_387(var_0_bool, var_1_bool, var_2_cvector, var_72_object, var_73_bool, var_87_float)
{
	var_74_bool = 0; var_75_bool = 0;
	var_1_bool = var_72_object;
	@@@var_1_bool:GetPFPosition(var_0_bool);
	SetTimer((int)61, (float)0.5);
	
Label_395:
	FindPathTo(var_2_cvector, var_0_bool);
	var_78_bool = var_2_cvector == 0; //@ne
	if(var_78_bool != 0) {
		Trace("Can't find path to noise source");
	} else {
		FollowPath(var_2_cvector, var_73_bool, var_75_bool);
		var_81_bool = var_75_bool == 0; //@nz
		if(var_81_bool != 0) {
			var_82_bool = var_2_cvector == 0; //@ne
			if(var_82_bool != 0) {
				goto Label_432;
			}
		} else {
			KillTimer((int)61);
			var_85_object = Obj(); var_86_object = Obj();
			var_86_object = var_1_bool;
			TaskCall(6);
			func_859(var_87_float, var_88_float, var_89_object, var_85_object, var_86_object);
			TaskReturn();
			var_1_bool = var_87_float;
			SetTimer((int)61, (float)0.5);
			var_109_bool = var_1_bool == 0; //@ne
			if(var_109_bool != 0) {
				goto Label_432;
			}
			@@@var_1_bool:GetPFPosition(var_0_bool);
		}
		var_83_bool = var_2_cvector != 0; //@nn
		if(var_83_bool == 1) goto Label_395;
	}
Label_432:
	KillTimer((int)61);
	return 2;
	
}


func_1288(var_14_bool, var_15_string, var_16_string)
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, var_15_string);
	var_19_bool = var_18_object == 0; //@ne
	if(var_19_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	Trigger(var_18_object, var_16_string);
	var_14_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1038()
{
	KillTimer((int)91);
	Stop();
	func_1103();
	return 0;
}


func_1169(var_88_bool, var_89_object)
{
	var_90_int = 0; var_91_int = 0;
	var_92_bool = 0; var_93_object = Obj();
	var_89_object = var_93_object;
	func_1133(var_92_bool, var_93_object);
	var_109_bool = var_92_bool == 0; //@nz
	if(var_109_bool != 0) {
		var_88_bool = 0;
		return 2;
	}
	var_110_bool = 0; var_111_object = Obj(); var_112_string = "";
	var_89_object = var_111_object;
	func_1116(var_110_bool, var_111_object, "noaccess");
	var_113_bool = var_110_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_88_bool = 1;
		return 2;
	}
	@@var_89_object:GetProperty("noaccess", var_91_int);
	var_88_bool = var_91_int == (int)0;
	return 2;
}


func_1300(var_60_string, var_61_int)
{
	var_62_string = ""; var_63_string = "";
	var_64_int = var_61_int;
	if(var_64_int != 0) {
		"idle" = "idle" + var_61_int;
	}
	var_63_string = var_60_string;
	return 2;
}


func_1561(var_13_bool, var_14_object, var_15_object)
{
	var_16_string = ""; var_17_bool = 0; var_18_string = ""; var_19_bool = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_15_object = var_21_object;
	func_1116(var_20_bool, var_21_object, "class");
	var_29_bool = var_20_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	@@var_15_object:GetProperty("class", var_18_string);
	var_32_bool = var_18_string != "bomber";
	if(var_32_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	CanSee(var_19_bool, var_14_object);
	var_33_bool = 0;
	var_33_bool = 1;
	var_34_bool = var_19_bool;
	if(var_34_bool != 1) {
		var_35_float = 0; var_36_object = Obj();
		var_14_object = var_36_object;
		func_1108(var_35_float, var_36_object);
		var_44_bool = var_35_float <= (float)160000.0;
		if(var_44_bool != 1) {
			var_33_bool = 0;
		}
	}
	if(var_33_bool != 0) {
		var_13_bool = 1;
		return 4;
	}
	var_13_bool = 0;
	return 4;
}


func_1307(var_54_int)
{
	var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_bool = 0;
	var_57_int = 0;
	
Label_1309:
	var_60_string = ""; var_61_int = 0;
	var_57_int = var_61_int;
	func_1300(var_60_string, var_61_int);
	HasAnimation(var_58_bool, "all", var_60_string);
	var_65_bool = var_58_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_57_int = var_57_int + (int)1;
		goto Label_1309;
	}
	var_57_int = var_54_int;
	return 4;
	
}


func_1440(var_124_int, var_125_float)
{
	var_133_bool = var_125_float < (int)200;
	if(var_133_bool != 0) {
		var_124_int = 1;
		return 0;
	EMIT "GOTO 0x5ac";
	}
	var_135_bool = var_125_float < (int)600;
	if(var_135_bool != 0) {
		var_124_int = 2;
		return 0;
	}
	var_124_int = 3;
	return 0;
}


func_163(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_291(var_84_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_84_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_84_string);
	RemoveEnvelope();
	return 0;
}


func_549()
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_bool = 0;
	WaitForAnimEnd();
	var_50_bool = 0;
	func_1272(var_50_bool);
	var_53_bool = var_50_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 14;
	}
	func_1307((int)0);
	var_54_int = var_43_int;
	var_44_int = 0;
	
Label_563:
	var_67_bool = 0;
	var_67_bool = 0;
	var_69_bool = var_44_int < (int)5;
	if(var_69_bool != 0) {
		var_70_bool = 0;
		func_1272(var_70_bool);
		if(var_70_bool != 0) {
			var_67_bool = 1;
		}
	}
	if(var_67_bool != 0) {
		irand(var_45_int, (int)3);
		var_73_bool = var_45_int == (int)0;
		if(var_73_bool != 0) {
			var_74_int = var_43_int;
			if(var_74_int == 0) goto Label_596;
			irand(var_46_int, var_43_int);
			var_76_string = ""; var_77_int = 0;
			var_46_int = var_77_int;
			func_1300(var_76_string, var_77_int);
			PlayAnimation("all", var_76_string);
			WaitForAnimEnd(var_47_bool);
			var_78_bool = var_47_bool == 0; //@nz
			if(var_78_bool != 0) {
			} else {
		} else {
				var_81_bool = var_45_int == (int)1;
				if(var_81_bool != 0) {
					rand(var_48_float, (int)4);
					var_84_int = var_48_float + (int)1;
					Sleep(var_84_int, var_49_bool);
					var_85_bool = var_49_bool == 0; //@nz
					if(var_85_bool != 0) {
						goto Label_617;
					}
					goto Label_614;
				}
				var_86_int = var_44_int;
				if(var_86_int == 0) goto Label_614;
				goto Label_617;
		}
		Label_614:
			var_44_int = var_44_int + (int)1;
			goto Label_563;

		}
	}
Label_617:
	return 14;
	
}


func_1064(var_30_bool)
{
	var_31_float = 0; var_32_bool = 0; var_33_float = 0; var_34_bool = 0;
	rand(var_33_float);
	var_36_bool = var_33_float < (float)0.30000001192092896;
	if(var_36_bool != 0) {
		PlayAnimation("all", "hunt");
		WaitForAnimEnd(var_34_bool);
		var_39_bool = var_34_bool == 0; //@nz
		if(var_39_bool != 0) {
			var_30_bool = 1;
			return 4;
		}
	}
	var_30_bool = 0;
	return 4;
}


func_1193(var_76_bool, var_77_object)
{
	var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_bool = 0;
	@@var_77_object:GetPosition(var_82_cvector);
	GetPosition(var_83_cvector);
	var_84_cvector = var_82_cvector - var_83_cvector;
	var_86_float = GetByIndex(var_84_cvector, 0);
	var_87_float = GetByIndex(var_84_cvector, 2);
	Rotate(var_86_float, var_87_float, var_85_bool);
	var_85_bool = var_76_bool;
	return 8;
}


func_170(var_34_bool)
{
	var_34_bool = 0;
	return 0;
}


func_809(var_0_bool, var_120_object)
{
	Sleep((int)5);
	var_120_object = var_0_bool;
	return 0;
}


func_1324(var_26_int, var_27_int)
{
	var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0;
	var_36_bool = var_26_int > var_27_int;
	if(var_36_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_38_bool = var_26_int != var_27_int;
	if(var_38_bool != 0) {
		var_39_int = var_27_int - var_26_int;
		irand(var_33_int, var_39_int);
	} else {
		var_45_bool = var_26_int == (int)0;
		if(var_45_bool == 0) goto Label_1342;
		return 8;
	}
Label_1342:
	(int)0 = (int)0 + var_26_int;
	var_41_bool = var_32_int == (int)0;
	if(var_41_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_34_int, "Money");
	AddItem(var_35_bool, var_34_int, (int)0, var_32_int);
	return 8;
	
}


func_172(var_20_object)
{
	func_1354();
	var_61_object = Obj();
	var_20_object = var_61_object;
	func_181(var_61_object);
	return 0;
}


func_1454(var_208_float, var_209_int)
{
	var_211_bool = var_209_int == (int)1;
	if(var_211_bool != 0) {
		var_208_float = 30;
		return 0;
	}
	var_208_float = 700;
	return 0;
}


func_181(var_61_object)
{
	EventDisable(0);
	var_62_object = Obj();
	var_61_object = var_62_object;
	func_204(var_62_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_192:
	Hold();
	goto Label_192;
}
EMIT "Return(); Pop(0)";


func_1462(var_230_float, var_232_float)
{
	var_234_bool = var_232_float < (int)10;
	if(var_234_bool != 0) {
		var_230_float = 10;
		return 0;
	EMIT "GOTO 0x5c2";
	}
	var_236_bool = var_232_float > (int)1500;
	if(var_236_bool != 0) {
		var_230_float = 1500;
		return 0;
	}
	var_232_float = var_230_float;
	return 0;
}


func_1205(var_15_object, var_16_int)
{
	var_18_object = Obj(); var_19_object = Obj(); var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_object = Obj(); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_string = "";
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_16_int != (int)4;
	if(var_40_bool != 0) {
		var_42_bool = var_16_int != (int)5;
		if(var_42_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		GetScene(var_28_object);
		GetPosition(var_30_cvector);
		GetEyesHeight(var_31_float);
		var_43_float = GetByIndex(var_30_cvector, 1);
		var_45_float = var_31_float / (int)2;
		var_43_float = var_43_float + var_45_float;
		SetByIndex(var_30_cvector, 1) = var_43_float;
		AddActorByType(var_29_object, "scripted", var_28_object, var_30_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_29_object = 0;
		var_28_object = 0;
	}
	var_49_bool = var_15_object == 0; //@ne
	if(var_49_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_32_int);
	var_51_bool = var_32_int < (int)0;
	if(var_51_bool != 0) {
		return 20;
	}
	@@var_15_object:GetPosition(var_33_cvector);
	GetPosition(var_34_cvector);
	GetDirection(var_35_cvector);
	var_36_cvector = var_34_cvector - var_33_cvector;
	var_52_float = GetByIndex(var_36_cvector, 0);
	var_53_float = GetByIndex(var_35_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_36_cvector, 2);
	var_56_float = GetByIndex(var_35_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_37_string = "fhit";
	} else {
		var_37_string = "bhit";
	}
	var_63_int = var_37_string + "1";
	var_65_int = var_37_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 20;
	
}


func_1082()
{
	var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_float = 0; var_28_bool = 0;
	
Label_1083:
	RandVec2D(var_26_float, var_27_float);
	Rotate(var_26_float, var_27_float, var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
	} else {
		var_30_bool = 0;
		func_1064(var_30_bool);
		if(var_30_bool != 0) {
			goto Label_1102;
		}
		Sleep((int)5, var_28_bool);
		var_41_bool = var_28_bool == 0; //@nz
		if(var_41_bool != 0) {
			goto Label_1102;
		}
		goto Label_1083;
	}
Label_1102:
	return 6;
	
}


func_61()
{
	KillTimer((int)90);
	func_163(var_12_float, var_13_float);
	return 0;
}


func_1598()
{
	return 0;
}


func_1599(var_14_bool, var_15_object)
{
	var_16_string = ""; var_17_string = "";
	var_18_bool = 0; var_19_object = Obj();
	var_15_object = var_19_object;
	func_1169(var_18_bool, var_19_object);
	var_52_bool = var_18_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_15_object = var_54_object;
	func_1116(var_53_bool, var_54_object, "health");
	var_56_bool = var_53_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_57_bool = 0; var_58_object = Obj(); var_59_string = "";
	var_15_object = var_58_object;
	func_1116(var_57_bool, var_58_object, "class");
	if(var_57_bool != 0) {
		@@var_15_object:GetProperty("class", var_17_string);
		var_61_bool = 0;
		var_61_bool = 1;
		var_63_bool = var_17_string == "rat";
		if(var_63_bool != 1) {
			var_65_bool = var_17_string == "bomber";
			if(var_65_bool != 1) {
				var_61_bool = 0;
			}
		}
		if(var_61_bool != 0) {
			var_14_bool = 0;
			return 2;
		}
	}
	var_14_bool = 1;
	return 2;
}


func_319(var_68_object)
{
	var_72_object = Obj(); var_73_bool = 0;
	var_68_object = var_72_object;
	func_387(var_69_cvector, var_70_object, var_71_object, var_68_object, var_72_object, (bool)0);
	return 0;
}


func_963(var_0_bool, var_1_bool)
{
	SetSeeThreshold(var_0_bool);
	SetSeeFOV(var_1_bool);
	Stop();
	StopGroup0();
	return 0;
}


func_1476(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1354()
{
	var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_bool = 0;
	ClearSubContainer((int)0);
	var_26_int = 0; var_27_int = 0;
	func_1324((int)500, (int)1000);
	irand(var_23_int, (int)4);
	var_48_bool = var_23_int != (int)0;
	if(var_48_bool != 0) {
		var_49_int = 0; var_50_string = "";
		func_1391(var_49_int, "rifle_ammo");
		AddItem(var_24_bool, var_49_int, (int)0, var_23_int);
	}
	irand(var_23_int, (int)3);
	var_56_bool = var_23_int == (int)0;
	if(var_56_bool != 0) {
		var_57_int = 0; var_58_string = "";
		func_1391(var_57_int, "rusk");
		AddItem(var_24_bool, var_57_int, (int)0, (int)1);
	}
	return 4;
}


func_1483(var_67_object)
{
	var_68_object = Obj();
	var_67_object = var_68_object;
	TaskCall(2);
	func_319(var_68_object);
	TaskReturn();
	return 0;
}


func_204(var_62_object)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_string = ""; var_68_object = Obj(); var_69_bool = 0; var_70_bool = 0; var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_string = ""; var_78_object = Obj(); var_79_bool = 0; var_80_bool = 0; var_81_float = 0; var_82_cvector = CVector(0,0,0);
	var_83_bool = var_62_object == 0; //@ne
	if(var_83_bool != 0) {
		var_84_string = "";
		func_291("fdie");
	} else {
		@@var_62_object:GetPosition(var_73_cvector);
		GetPosition(var_74_cvector);
		GetDirection(var_75_cvector);
		var_76_cvector = var_74_cvector - var_73_cvector;
		var_87_float = GetByIndex(var_76_cvector, 0);
		var_88_float = GetByIndex(var_75_cvector, 0);
		var_89_float = var_87_float * var_88_float;
		var_90_float = GetByIndex(var_76_cvector, 2);
		var_91_float = GetByIndex(var_75_cvector, 2);
		var_92_float = var_90_float * var_91_float;
		var_93_int = var_89_float + var_92_float;
		var_95_bool = var_93_int >= (int)0;
		if(var_95_bool != 0) {
			var_77_string = "fdie";
		} else {
				var_77_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_62_object = var_78_object;
		var_98_bool = IsFuncExist(var_62_object, "GetScriptProperty", (int)2);
		if(var_98_bool != 0) {
			@@var_62_object:HasScriptProperty(var_79_bool, "Owner");
			var_100_bool = var_79_bool;
			if(var_100_bool != 0) {
				@@var_62_object:GetScriptProperty(var_78_object, "Owner");
				var_102_bool = var_78_object == 0; //@ne
				if(var_102_bool != 0) {
					var_62_object = var_78_object;
				}
			}
		}
		var_105_bool = IsFuncExist(var_78_object, "@GetEyesHeight", (int)1);
		if(var_105_bool != 0) {
			@@var_78_object:GetEyesHeight(var_81_float);
			var_82_cvector = CVector(0.0, 0.0, 0.0);
			var_106_float = GetByIndex(var_82_cvector, 1);
			var_81_float = var_106_float;
			SetByIndex(var_82_cvector, 1) = var_106_float;
			LookAsync(var_62_object, "head", var_82_cvector);
			var_80_bool = 1;
		} else {
			var_80_bool = 0;

		}
		PlayAnimation("all", var_77_string);
		WaitForAnimEnd();
		var_109_bool = var_80_bool;
		if(var_109_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_77_string);
		RemoveEnvelope();
		var_78_object = 0;
	}
	return 20;
	
}


func_843(var_0_bool, var_46_object)
{
	var_47_bool = 0;
	var_47_bool = 0;
	var_48_bool = var_0_bool == 0; //@ne
	if(var_48_bool != 0) {
		var_49_bool = 0; var_50_object = Obj();
		var_46_object = var_50_object;
		func_1599(var_49_bool, var_50_object);
		if(var_49_bool != 0) {
			var_47_bool = 1;
		}
	}
	if(var_47_bool != 0) {
		var_0_bool = var_46_object;
		StopGroup0();
	}
	return 0;
}


func_1103()
{
	Stop();
	StopGroup0();
	return 0;
}


func_1491(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1108(var_35_float, var_36_object)
{
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	GetPosition(var_40_cvector);
	@@var_36_object:GetPosition(var_41_cvector);
	var_42_cvector = var_41_cvector - var_40_cvector;
	var_35_float = var_42_cvector | var_42_cvector;
	return 6;
}


func_981()
{
	SetTimer((int)91, (int)20);
	func_1082();
	return 0;
}


func_1498(var_67_object)
{
	var_68_object = Obj();
	var_67_object = var_68_object;
	TaskCall(4);
	func_623(var_67_object, var_69_object, var_70_bool, var_68_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_859(var_0_bool, var_1_bool, var_2_cvector, var_85_object, var_86_object)
{
	var_90_bool = 0; var_91_int = 0; var_92_bool = 0; var_93_int = 0;
	GetSeeThreshold(var_0_bool);
	GetSeeFOV(var_1_bool);
	var_95_float = var_0_bool / (float)1.5;
	SetSeeThreshold(var_95_float);
	var_2_cvector = var_86_object;
	var_93_int = 0;
	
Label_870:
	var_97_bool = var_93_int < (int)3;
	if(var_97_bool != 0) {
		var_99_float = var_1_bool * (float)1.7999999523162842;
		SetSeeFOV(var_99_float);
		PlayAnimation("all", "hunt");
		WaitForAnimEnd(var_92_bool);
		SetSeeFOV(var_1_bool);
		var_102_bool = var_92_bool == 0; //@nz
		if(var_102_bool != 0) {
		} else {
			Sleep((int)2, var_92_bool);
			var_105_bool = var_92_bool == 0; //@nz
			if(var_105_bool != 0) {
				goto Label_897;
			}
			var_93_int = var_93_int + (int)1;
			goto Label_870;
		}
	}
Label_897:
	func_963(var_92_bool, var_93_int);
	var_103_bool = var_92_bool;
	if(var_103_bool != 0) {
		var_2_cvector = 0;
	}
	var_85_object = var_2_cvector;
	return 4;
	
}


func_1116(var_20_bool, var_21_object, var_22_string)
{
	var_23_bool = 0; var_24_bool = 0;
	var_27_bool = IsFuncExist(var_21_object, "HasProperty", (int)2);
	var_28_bool = var_27_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	@@var_21_object:HasProperty(var_22_string, var_24_bool);
	var_24_bool = var_20_bool;
	return 2;
}


func_99(var_0_bool, var_1_bool)
{
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_20_float, (float)0.5);
	Sleep(var_20_float);
	
Label_107:
	var_28_bool = var_0_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_29_bool = var_1_bool == 0; //@nz
		if(var_29_bool != 0) {

		Label_111:
			GetPosition(var_22_cvector);
			GetCameraFarDistance(var_23_float);
			var_23_float = var_23_float * (float)2.5;
			GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, var_23_float, var_24_bool);
			var_31_bool = var_24_bool;
			if(var_31_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_111;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_128;
	
Label_128:
	FindShiftedPathTo(var_25_object, var_21_cvector);
	var_32_bool = var_25_object != 0; //@nn
	if(var_32_bool != 0) {
		RotatePath(var_25_object, var_26_bool);
		var_33_bool = var_26_bool;
		if(var_33_bool != 0) {
			var_34_bool = 0;
			func_170(var_34_bool);
			FollowPath(var_25_object, var_34_bool, var_26_bool);
			var_25_object = 0;
			var_35_bool = var_26_bool;
			if(var_35_bool != 0) {
				TaskCall(3);
				func_549();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_25_object = 0;
	goto Label_107;
	
}


func_1508(var_47_object)
{
	var_47_object = Obj();
	func_1640();
	var_49_object = Obj();
	var_47_object = var_49_object;
	TaskCall(4);
	func_623(var_47_object, var_50_object, var_51_bool, var_49_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_485()
{
	KillTimer((int)61);
	Stop();
	return 0;
}


func_1128(var_103_bool, var_104_object)
{
	var_105_bool = 0; var_106_bool = 0;
	@@var_104_object:IsDead(var_106_bool);
	var_106_bool = var_103_bool;
	return 2;
}


func_361(var_70_bool, var_71_object, var_72_object)
{
	var_73_bool = 0; var_74_bool = 0;
	IsPlayerActor(var_71_object, var_74_bool);
	var_75_bool = var_74_bool;
	if(var_75_bool != 0) {
		var_70_bool = 0;
		return 2;
	}
	var_76_bool = 0; var_77_object = Obj();
	var_72_object = var_77_object;
	func_1599(var_76_bool, var_77_object);
	var_78_bool = var_76_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_70_bool = 0;
		return 2;
	}
	IsPlayerActor(var_72_object, var_74_bool);
	var_74_bool = var_70_bool;
	return 2;
}


func_618()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1640()
{
	return 0;
}


func_1133(var_92_bool, var_93_object)
{
	var_94_object = Obj(); var_95_object = Obj(); var_96_object = Obj(); var_97_object = Obj();
	var_98_bool = var_93_object == 0; //@ne
	if(var_98_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	var_99_bool = 0;
	var_99_bool = 0;
	var_102_bool = IsFuncExist(var_93_object, "IsDead", (int)1);
	if(var_102_bool != 0) {
		var_103_bool = 0; var_104_object = Obj();
		var_93_object = var_104_object;
		func_1128(var_103_bool, var_104_object);
		if(var_103_bool != 0) {
			var_99_bool = 1;
		}
	}
	if(var_99_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	GetScene(var_96_object);
	var_107_bool = var_96_object == 0; //@ne
	if(var_107_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	@@var_93_object:GetScene(var_97_object);
	var_108_bool = var_96_object != var_97_object;
	if(var_108_bool != 0) {
		var_92_bool = 0;
		return 4;
	}
	var_92_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1391(var_49_int, var_50_string)
{
	var_51_int = 0; var_52_int = 0;
	GetInvItemByName(var_52_int, var_50_string);
	var_52_int = var_49_int;
	return 2;
}


func_623(var_0_bool, var_1_bool, var_49_object, var_121_object)
{
	var_52_bool = 0; var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_int = 0; var_56_object = Obj(); var_57_cvector = CVector(0,0,0); var_58_bool = 0; var_59_object = Obj(); var_60_float = 0; var_61_float = 0; var_62_float = 0; var_63_int = 0; var_64_bool = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_int = 0; var_68_object = Obj(); var_69_cvector = CVector(0,0,0); var_70_bool = 0; var_71_object = Obj(); var_72_float = 0; var_73_float = 0; var_74_float = 0; var_75_int = 0;
	var_0_bool = var_49_object;
	CanSee(var_1_bool, var_49_object);
	var_76_bool = 0; var_77_object = Obj();
	var_49_object = var_77_object;
	func_1193(var_76_bool, var_77_object);
	var_88_bool = 0; var_89_object = Obj();
	var_49_object = var_89_object;
	func_1169(var_88_bool, var_89_object);
	var_116_bool = var_88_bool == 0; //@nz
	if(var_116_bool != 0) {
		return 24;
	}
	Face(var_49_object);
	IsPlayerActor(var_49_object, var_64_bool);
	
Label_642:
	var_117_bool = 0; var_118_object = Obj();
	var_118_object = var_0_bool;
	func_1169(var_117_bool, var_118_object);
	if(var_117_bool != 0) {
		var_119_bool = var_1_bool == 0; //@nz
		if(var_119_bool != 0) {
			StopAsync();
			TaskCall(5);
			func_809(var_121_object, Obj());
			TaskReturn();
			var_0_bool = var_121_object;
			var_123_bool = var_0_bool == 0; //@ne
			if(var_123_bool != 0) {
			} else {
				CanSee(var_1_bool, var_0_bool);
				Face(var_0_bool);
		}
			ReportAttack(var_0_bool);
			GetPosition(var_65_cvector);
			@@@var_0_bool:GetPosition(var_66_cvector);
			var_124_int = 0; var_125_float = 0;
			var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0);
			var_66_cvector = var_127_cvector;
			var_65_cvector = var_128_cvector;
			func_1283(var_126_float, var_127_cvector, var_128_cvector);
			var_126_float = var_125_float;
			func_1440(var_124_int, var_125_float);
			var_124_int = var_67_int;
			var_138_int = "attack_begin" + var_67_int;
			PlayAnimation("all", var_138_int);
			WaitForAnimEnd();
			var_139_bool = var_0_bool == 0; //@ne
			if(var_139_bool != 0) {
				goto Label_789;
			}
			var_142_int = "attack_end" + var_67_int;
			PlayAnimation("all", var_142_int);
			GetScene(var_68_object);
			var_144_int = "attack" + var_67_int;
			GetGeometryLocator(var_144_int, var_70_bool, var_65_cvector, var_69_cvector);
			AddActorByType(var_71_object, "scripted", var_68_object, var_65_cvector, CVector(0.0, 0.0, 1.0), "grenade.xml");
			var_149_object = Obj();
			func_1277(var_149_object);
			@@var_71_object:SetScriptProperty("Owner", var_149_object);
			@@@var_0_bool:GetPosition(var_66_cvector);
			var_152_bool = var_64_bool;
			if(var_152_bool != 0) {
				var_64_bool = 0;
				RandVec2D(var_72_float, var_73_float);
				var_153_float = GetByIndex(var_66_cvector, 0);
				var_155_float = var_72_float * (int)500;
				var_153_float = var_153_float + var_155_float;
				SetByIndex(var_66_cvector, 0) = var_153_float;
				var_156_float = GetByIndex(var_66_cvector, 2);
				var_158_float = var_73_float * (int)500;
				var_156_float = var_156_float + var_158_float;
				SetByIndex(var_66_cvector, 2) = var_156_float;
			}
			var_159_float = 0; var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0);
			var_65_cvector = var_160_cvector;
			var_66_cvector = var_161_cvector;
			var_69_cvector = var_162_cvector;
			func_1396(var_159_float, var_160_cvector, var_161_cvector, var_162_cvector);
			var_159_float = var_74_float;
			var_207_bool = var_74_float < (int)0;
			if(var_207_bool != 0) {
				var_208_float = 0; var_209_int = 0;
				var_67_int = var_209_int;
				func_1454(var_208_float, var_209_int);
				var_208_float = var_74_float;
			} else {
				var_230_float = 0; var_231_int = 0; var_232_float = 0;
				var_67_int = var_231_int;
				var_74_float = var_232_float;
				func_1462(var_231_int, var_232_float);
				var_230_float = var_74_float;
			}
			var_213_float = var_69_cvector * var_74_float;
			@@var_71_object:SetScriptProperty("StartVelocity", var_213_float);
			@@var_71_object:SetScriptProperty("DamageAmount", (float)0.800000011920929);
			@@var_71_object:SetScriptProperty("DamageType", (int)1);
			WaitForAnimEnd();
			var_219_bool = var_67_int == (int)1;
			if(var_219_bool != 0) {
				irand(var_75_int, (int)2);
				var_223_int = var_75_int + (int)1;
				var_224_int = "scream" + var_223_int;
				Speak(var_224_int);
				var_228_int = var_75_int + (int)1;
				var_229_int = "scream" + var_228_int;
				PlayAnimation("all", var_229_int);
				WaitForAnimEnd();
			}
			var_71_object = 0;
			var_68_object = 0;
			goto Label_642;
		}
	}
Label_789:
	StopAsync();
	return 24;
	
}


func_1650()
{
	var_14_bool = 0; var_15_string = ""; var_16_string = "";
	func_1288(var_14_bool, "quest_d6_02", "gorbun_death");
	return 0;
}


func_1396(var_159_float, var_160_cvector, var_161_cvector, var_162_cvector)
{
	var_163_float = 0; var_164_float = 0; var_165_float = 0; var_166_float = 0; var_167_float = 0; var_168_float = 0; var_169_float = 0; var_170_float = 0; var_171_float = 0; var_172_float = 0;
	var_173_float = GetByIndex(var_162_cvector, 0);
	var_174_float = GetByIndex(var_162_cvector, 0);
	var_175_float = var_173_float * var_174_float;
	var_176_float = GetByIndex(var_162_cvector, 2);
	var_177_float = GetByIndex(var_162_cvector, 2);
	var_178_float = var_176_float * var_177_float;
	var_179_int = var_175_float + var_178_float;
	var_168_float = sqrt(var_179_int);
	var_180_float = GetByIndex(var_162_cvector, 1);
	var_169_float = var_180_float / var_168_float;
	var_181_float = GetByIndex(var_160_cvector, 0);
	var_182_float = GetByIndex(var_161_cvector, 0);
	var_183_int = var_181_float - var_182_float;
	var_184_float = GetByIndex(var_160_cvector, 0);
	var_185_float = GetByIndex(var_161_cvector, 0);
	var_186_int = var_184_float - var_185_float;
	var_187_float = var_183_int * var_186_int;
	var_188_float = GetByIndex(var_160_cvector, 2);
	var_189_float = GetByIndex(var_161_cvector, 2);
	var_190_int = var_188_float - var_189_float;
	var_191_float = GetByIndex(var_160_cvector, 2);
	var_192_float = GetByIndex(var_161_cvector, 2);
	var_193_int = var_191_float - var_192_float;
	var_194_float = var_190_int * var_193_int;
	var_195_int = var_187_float + var_194_float;
	var_170_float = sqrt(var_195_int);
	var_197_float = var_170_float * var_169_float;
	var_198_float = GetByIndex(var_161_cvector, 1);
	var_199_float = GetByIndex(var_160_cvector, 1);
	var_200_int = var_198_float - var_199_float;
	var_201_int = var_197_float - var_200_int;
	var_171_float = (float)500.0 / var_201_int;
	var_203_bool = var_171_float < (int)0;
	if(var_203_bool != 0) {
		var_159_float = -1;
		return 10;
	}
	var_204_float = var_170_float / var_168_float;
	var_205_float = sqrt(var_171_float);
	var_172_float = var_204_float * var_205_float;
	var_172_float = var_159_float;
	return 10;
}


func_1272(var_50_bool)
{
	var_51_bool = 0; var_52_bool = 0;
	IsLoaded(var_52_bool);
	var_52_bool = var_50_bool;
	return 2;
}


func_1530(var_12_object)
{
	var_12_object = Obj();
	func_1650();
	var_20_object = Obj();
	var_12_object = var_20_object;
	TaskCall(1);
	func_172(var_20_object);
	TaskReturn();
	return 0;
}


func_380(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1599(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
	return 0;
}


func_1277(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


