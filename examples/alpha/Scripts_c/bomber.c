// @IMPORTS: SetTimer/2,KillTimer/1,GetBrightness/1,rand/2,Sleep/1,GetPosition/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,Stop/0,StopGroup0/0,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsPlayerActor/2,FindPathTo/2,Trace/1,ResetAAS/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,CanSee/2,Face/1,ReportAttack/1,GetScene/1,GetGeometryLocator/4,AddActorByType/6,RandVec2D/2,Speak/1,GetSeeThreshold/1,GetSeeFOV/1,SetSeeThreshold/1,SetSeeFOV/1,rand/1,Rotate/3,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,self/1,CreateObjectSet/1,HasAnimation/3,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|A:GetPFPosition|W:Can't find path to noise source|W:new hunt point|W:attack_begin|W:attack_end|W:attack|W:scripted|W:grenade.xml|A:SetScriptProperty|W:StartVelocity|W:DamageAmount|W:DamageType|W:scream|W:hunt|W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|W:health|W:class|W:bomber|A:in|W:disease|A:add
// @GLOBALS: 0:object:
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
// @STANDALONE_EVENT_22: op=0x5ec vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x600 vars=object,string
// @STANDALONE_EVENT_41: op=0x60d vars=object
// @PE: 0xc,0x1a,0x28,0x31,0x44,0x9c,0xac,0xb5,0x123,0x139,0x13b,0x13d,0x13f,0x146,0x154,0x15d,0x17c,0x1b4,0x1c4,0x1eb,0x1f4,0x202,0x210,0x219,0x318,0x31d,0x322,0x32e,0x334,0x339,0x33f,0x34b,0x389,0x3ae,0x3b7,0x3cc,0x3dd,0x3eb,0x3f9,0x402,0x417,0x420,0x59a,0x5a8,0x5b0,0x5be,0x5c5,0x5cd,0x5d4,0x5de,0x5ec,0x5f4,0x60d,0x672

task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1485(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_68_object = Obj();
		var_11_object = var_68_object;
		func_1492(var_68_object);
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1470(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_68_object = Obj();
		var_11_object = var_68_object;
		func_1477(var_68_object);
	}
	return 0;
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_61();
	var_47_object = Obj();
	var_45_object = var_47_object;
	func_1502(var_47_object);
	return 0;
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1555(var_13_bool, var_14_object, var_15_object);
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
	func_1549();
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
	func_1485(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_485();
		var_68_object = Obj();
		var_11_object = var_68_object;
		func_1492(var_68_object);
	}
	return 0;
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_485();
	var_47_object = Obj();
	var_45_object = var_47_object;
	func_1502(var_47_object);
	return 0;
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1555(var_13_bool, var_14_object, var_15_object);
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
		var_69_bool = var_14_bool == 0; //@nz
		if(var_69_bool != 0) {
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
		var_68_bool = var_13_bool == 0; //@nz
		if(var_68_bool != 0) {
			func_485();
			var_2_cvector = 0;
			return 0;
		}
	} else {
		var_71_bool = 0; var_72_object = Obj(); var_73_object = Obj();
		var_11_object = var_72_object;
		var_73_object = var_1_bool;
		func_361(var_71_bool, var_72_object, var_73_object);
		if(var_71_bool == 0) goto Label_474;
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
	func_1549();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1485(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_618();
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1492(var_67_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1470(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_618();
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1477(var_67_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object, var_45_object)
	{
	func_618();
	var_46_object = Obj();
	var_45_object = var_46_object;
	func_1502(var_46_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_float, var_11_float, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_float = var_14_object;
	var_12_object = var_15_object;
	func_1555(var_13_bool, var_14_object, var_15_object);
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
	func_1555(var_13_bool, var_14_object, var_15_object);
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
	func_1555(var_13_bool, var_14_object, var_15_object);
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
	func_1485(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_963(var_10_object, var_11_object);
		var_67_object = Obj();
		var_11_object = var_67_object;
		func_1492(var_67_object);
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
	var_68_bool = var_15_bool == 0; //@nz
	if(var_68_bool != 0) {
		return 2;
	}
	IsPlayerActor(var_11_object, var_13_bool);
	var_69_bool = var_13_bool;
	if(var_69_bool != 0) {
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
	func_1502(var_46_object);
	return 0;
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_object = var_14_object;
	var_12_object = var_15_object;
	func_1555(var_13_bool, var_14_object, var_15_object);
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
	func_1549();
	return 0;
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1485(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1038();
		var_68_object = Obj();
		var_11_object = var_68_object;
		func_1492(var_68_object);
	}
	return 0;
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1470(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1038();
		var_68_object = Obj();
		var_11_object = var_68_object;
		func_1477(var_68_object);
	}
	return 0;
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_45_object)
	{
	func_1038();
	var_47_object = Obj();
	var_45_object = var_47_object;
	func_1502(var_47_object);
	return 0;
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_object = var_14_object;
	var_12_object = var_15_object;
	func_1555(var_13_bool, var_14_object, var_15_object);
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
	func_1549();
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
	func_1524(var_12_object);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_1592();
	
Label_3:
	SetTimer((int)90, (int)10);
	func_99(var_9_float, var_10_object);
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_1283(var_132_float, var_133_cvector, var_134_cvector)
{
	var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0);
	var_136_cvector = var_134_cvector - var_133_cvector;
	var_137_int = var_136_cvector | var_136_cvector;
	var_132_float = sqrt(var_137_int);
	return 2;
}


func_387(var_0_bool, var_1_bool, var_2_cvector, var_73_object, var_74_bool, var_88_float)
{
	var_75_bool = 0; var_76_bool = 0;
	var_1_bool = var_73_object;
	@@@var_1_bool:GetPFPosition(var_0_bool);
	SetTimer((int)61, (float)0.5);
	
Label_395:
	FindPathTo(var_2_cvector, var_0_bool);
	var_79_bool = var_2_cvector == 0; //@ne
	if(var_79_bool != 0) {
		Trace("Can't find path to noise source");
	} else {
		FollowPath(var_2_cvector, var_74_bool, var_76_bool);
		var_82_bool = var_76_bool == 0; //@nz
		if(var_82_bool != 0) {
			var_83_bool = var_2_cvector == 0; //@ne
			if(var_83_bool != 0) {
				goto Label_432;
			}
		} else {
			KillTimer((int)61);
			var_86_object = Obj(); var_87_object = Obj();
			var_87_object = var_1_bool;
			TaskCall(6);
			func_859(var_88_float, var_89_float, var_90_object, var_86_object, var_87_object);
			TaskReturn();
			var_1_bool = var_88_float;
			SetTimer((int)61, (float)0.5);
			var_110_bool = var_1_bool == 0; //@ne
			if(var_110_bool != 0) {
				goto Label_432;
			}
			@@@var_1_bool:GetPFPosition(var_0_bool);
		}
		var_84_bool = var_2_cvector != 0; //@nn
		if(var_84_bool == 1) goto Label_395;
	}
Label_432:
	KillTimer((int)61);
	return 2;
	
}


func_1288(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1294(var_64_string, var_65_int)
{
	var_66_string = ""; var_67_string = "";
	var_68_int = var_65_int;
	if(var_68_int != 0) {
		"idle" = "idle" + var_65_int;
	}
	var_67_string = var_64_string;
	return 2;
}


func_1038()
{
	KillTimer((int)91);
	Stop();
	func_1103();
	return 0;
}


func_1169(var_94_bool, var_95_object)
{
	var_96_int = 0; var_97_int = 0;
	var_98_bool = 0; var_99_object = Obj();
	var_95_object = var_99_object;
	func_1133(var_98_bool, var_99_object);
	var_115_bool = var_98_bool == 0; //@nz
	if(var_115_bool != 0) {
		var_94_bool = 0;
		return 2;
	}
	var_116_bool = 0; var_117_object = Obj(); var_118_string = "";
	var_95_object = var_117_object;
	func_1116(var_116_bool, var_117_object, "noaccess");
	var_119_bool = var_116_bool == 0; //@nz
	if(var_119_bool != 0) {
		var_94_bool = 1;
		return 2;
	}
	@@var_95_object:GetProperty("noaccess", var_97_int);
	var_94_bool = var_97_int == (int)0;
	return 2;
}


func_1555(var_13_bool, var_14_object, var_15_object)
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


func_1301(var_58_int)
{
	var_59_int = 0; var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_61_int = 0;
	
Label_1303:
	var_64_string = ""; var_65_int = 0;
	var_61_int = var_65_int;
	func_1294(var_64_string, var_65_int);
	HasAnimation(var_62_bool, "all", var_64_string);
	var_69_bool = var_62_bool == 0; //@nz
	if(var_69_bool != 0) {
	} else {
		var_61_int = var_61_int + (int)1;
		goto Label_1303;
	}
	var_61_int = var_58_int;
	return 4;
	
}


func_1434(var_130_int, var_131_float)
{
	var_139_bool = var_131_float < (int)200;
	if(var_139_bool != 0) {
		var_130_int = 1;
		return 0;
	EMIT "GOTO 0x5a6";
	}
	var_141_bool = var_131_float < (int)600;
	if(var_141_bool != 0) {
		var_130_int = 2;
		return 0;
	}
	var_130_int = 3;
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


func_291(var_78_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_78_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_78_string);
	RemoveEnvelope();
	return 0;
}


func_549()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0;
	WaitForAnimEnd();
	var_54_bool = 0;
	func_1272(var_54_bool);
	var_57_bool = var_54_bool == 0; //@nz
	if(var_57_bool != 0) {
		return 14;
	}
	func_1301((int)0);
	var_58_int = var_47_int;
	var_48_int = 0;
	
Label_563:
	var_71_bool = 0;
	var_71_bool = 0;
	var_73_bool = var_48_int < (int)5;
	if(var_73_bool != 0) {
		var_74_bool = 0;
		func_1272(var_74_bool);
		if(var_74_bool != 0) {
			var_71_bool = 1;
		}
	}
	if(var_71_bool != 0) {
		irand(var_49_int, (int)3);
		var_77_bool = var_49_int == (int)0;
		if(var_77_bool != 0) {
			var_78_int = var_47_int;
			if(var_78_int == 0) goto Label_596;
			irand(var_50_int, var_47_int);
			var_80_string = ""; var_81_int = 0;
			var_50_int = var_81_int;
			func_1294(var_80_string, var_81_int);
			PlayAnimation("all", var_80_string);
			WaitForAnimEnd(var_51_bool);
			var_82_bool = var_51_bool == 0; //@nz
			if(var_82_bool != 0) {
			} else {
		} else {
				var_85_bool = var_49_int == (int)1;
				if(var_85_bool != 0) {
					rand(var_52_float, (int)4);
					var_88_int = var_52_float + (int)1;
					Sleep(var_88_int, var_53_bool);
					var_89_bool = var_53_bool == 0; //@nz
					if(var_89_bool != 0) {
						goto Label_617;
					}
					goto Label_614;
				}
				var_90_int = var_48_int;
				if(var_90_int == 0) goto Label_614;
				goto Label_617;
		}
		Label_614:
			var_48_int = var_48_int + (int)1;
			goto Label_563;

		}
	}
Label_617:
	return 14;
	
}


func_1318(var_20_int, var_21_int)
{
	var_22_int = 0; var_23_int = 0; var_24_int = 0; var_25_bool = 0; var_26_int = 0; var_27_int = 0; var_28_int = 0; var_29_bool = 0;
	var_30_bool = var_20_int > var_21_int;
	if(var_30_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_32_bool = var_20_int != var_21_int;
	if(var_32_bool != 0) {
		var_33_int = var_21_int - var_20_int;
		irand(var_27_int, var_33_int);
	} else {
		var_39_bool = var_20_int == (int)0;
		if(var_39_bool == 0) goto Label_1336;
		return 8;
	}
Label_1336:
	(int)0 = (int)0 + var_20_int;
	var_35_bool = var_26_int == (int)0;
	if(var_35_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_28_int, "Money");
	AddItem(var_29_bool, var_28_int, (int)0, var_26_int);
	return 8;
	
}


func_1448(var_214_float, var_215_int)
{
	var_217_bool = var_215_int == (int)1;
	if(var_217_bool != 0) {
		var_214_float = 30;
		return 0;
	}
	var_214_float = 700;
	return 0;
}


func_1193(var_82_bool, var_83_object)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_bool = 0; var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_bool = 0;
	@@var_83_object:GetPosition(var_88_cvector);
	GetPosition(var_89_cvector);
	var_90_cvector = var_88_cvector - var_89_cvector;
	var_92_float = GetByIndex(var_90_cvector, 0);
	var_93_float = GetByIndex(var_90_cvector, 2);
	Rotate(var_92_float, var_93_float, var_91_bool);
	var_91_bool = var_82_bool;
	return 8;
}


func_170(var_38_bool)
{
	var_38_bool = 0;
	return 0;
}


func_809(var_0_bool, var_126_object)
{
	Sleep((int)5);
	var_126_object = var_0_bool;
	return 0;
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


func_172(var_14_object)
{
	func_1348();
	var_55_object = Obj();
	var_14_object = var_55_object;
	func_181(var_55_object);
	return 0;
}


func_1456(var_236_float, var_238_float)
{
	var_240_bool = var_238_float < (int)10;
	if(var_240_bool != 0) {
		var_236_float = 10;
		return 0;
	EMIT "GOTO 0x5bc";
	}
	var_242_bool = var_238_float > (int)1500;
	if(var_242_bool != 0) {
		var_236_float = 1500;
		return 0;
	}
	var_238_float = var_236_float;
	return 0;
}


func_181(var_55_object)
{
	EventDisable(0);
	var_56_object = Obj();
	var_55_object = var_56_object;
	func_204(var_56_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_192:
	Hold();
	goto Label_192;
}
EMIT "Return(); Pop(0)";


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


func_1592()
{
	var_11_object = GlobalVars[0];
	func_1288(Obj());
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
	return 0;
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


func_1470(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1599(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj();
	var_15_object = var_23_object;
	func_1169(var_22_bool, var_23_object);
	var_56_bool = var_22_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_14_bool = 0;
		return 6;
	}
	var_57_object = GlobalVars[0];
	@@var_57_object:in(var_19_bool, var_15_object);
	var_58_bool = var_19_bool;
	if(var_58_bool != 0) {
		var_14_bool = 1;
		return 6;
	}
	var_59_bool = 0; var_60_object = Obj(); var_61_string = "";
	var_15_object = var_60_object;
	func_1116(var_59_bool, var_60_object, "disease");
	var_62_bool = var_59_bool == 0; //@nz
	if(var_62_bool != 0) {
		var_14_bool = 0;
		return 6;
	}
	@@var_15_object:GetProperty("disease", var_20_float);
	IsPlayerActor(var_15_object, var_21_bool);
	var_64_bool = var_21_bool;
	if(var_64_bool != 0) {
		var_14_bool = var_20_float > (float)0.0;
		return 6;
	}
	var_14_bool = var_20_float > (float)0.75;
	return 6;
}


func_319(var_69_object)
{
	var_73_object = Obj(); var_74_bool = 0;
	var_69_object = var_73_object;
	func_387(var_70_cvector, var_71_object, var_72_object, var_69_object, var_73_object, (bool)0);
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


func_1348()
{
	var_15_int = 0; var_16_bool = 0; var_17_int = 0; var_18_bool = 0;
	ClearSubContainer((int)0);
	var_20_int = 0; var_21_int = 0;
	func_1318((int)500, (int)1000);
	irand(var_17_int, (int)4);
	var_42_bool = var_17_int != (int)0;
	if(var_42_bool != 0) {
		var_43_int = 0; var_44_string = "";
		func_1385(var_43_int, "rifle_ammo");
		AddItem(var_18_bool, var_43_int, (int)0, var_17_int);
	}
	irand(var_17_int, (int)3);
	var_50_bool = var_17_int == (int)0;
	if(var_50_bool != 0) {
		var_51_int = 0; var_52_string = "";
		func_1385(var_51_int, "rusk");
		AddItem(var_18_bool, var_51_int, (int)0, (int)1);
	}
	return 4;
}


func_1477(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	TaskCall(2);
	func_319(var_69_object);
	TaskReturn();
	return 0;
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


func_204(var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_string = ""; var_62_object = Obj(); var_63_bool = 0; var_64_bool = 0; var_65_float = 0; var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_string = ""; var_72_object = Obj(); var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0);
	var_77_bool = var_56_object == 0; //@ne
	if(var_77_bool != 0) {
		var_78_string = "";
		func_291("fdie");
	} else {
		@@var_56_object:GetPosition(var_67_cvector);
		GetPosition(var_68_cvector);
		GetDirection(var_69_cvector);
		var_70_cvector = var_68_cvector - var_67_cvector;
		var_81_float = GetByIndex(var_70_cvector, 0);
		var_82_float = GetByIndex(var_69_cvector, 0);
		var_83_float = var_81_float * var_82_float;
		var_84_float = GetByIndex(var_70_cvector, 2);
		var_85_float = GetByIndex(var_69_cvector, 2);
		var_86_float = var_84_float * var_85_float;
		var_87_int = var_83_float + var_86_float;
		var_89_bool = var_87_int >= (int)0;
		if(var_89_bool != 0) {
			var_71_string = "fdie";
		} else {
				var_71_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_56_object = var_72_object;
		var_92_bool = IsFuncExist(var_56_object, "GetScriptProperty", (int)2);
		if(var_92_bool != 0) {
			@@var_56_object:HasScriptProperty(var_73_bool, "Owner");
			var_94_bool = var_73_bool;
			if(var_94_bool != 0) {
				@@var_56_object:GetScriptProperty(var_72_object, "Owner");
				var_96_bool = var_72_object == 0; //@ne
				if(var_96_bool != 0) {
					var_56_object = var_72_object;
				}
			}
		}
		var_99_bool = IsFuncExist(var_72_object, "@GetEyesHeight", (int)1);
		if(var_99_bool != 0) {
			@@var_72_object:GetEyesHeight(var_75_float);
			var_76_cvector = CVector(0.0, 0.0, 0.0);
			var_100_float = GetByIndex(var_76_cvector, 1);
			var_75_float = var_100_float;
			SetByIndex(var_76_cvector, 1) = var_100_float;
			LookAsync(var_56_object, "head", var_76_cvector);
			var_74_bool = 1;
		} else {
			var_74_bool = 0;

		}
		PlayAnimation("all", var_71_string);
		WaitForAnimEnd();
		var_103_bool = var_74_bool;
		if(var_103_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_71_string);
		RemoveEnvelope();
		var_72_object = 0;
	}
	return 20;
	
}


func_1485(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1103()
{
	Stop();
	StopGroup0();
	return 0;
}


func_1492(var_68_object)
{
	var_69_object = Obj();
	var_68_object = var_69_object;
	TaskCall(4);
	func_623(var_68_object, var_70_object, var_71_bool, var_69_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_981()
{
	SetTimer((int)91, (int)20);
	func_1082();
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


func_859(var_0_bool, var_1_bool, var_2_cvector, var_86_object, var_87_object)
{
	var_91_bool = 0; var_92_int = 0; var_93_bool = 0; var_94_int = 0;
	GetSeeThreshold(var_0_bool);
	GetSeeFOV(var_1_bool);
	var_96_float = var_0_bool / (float)1.5;
	SetSeeThreshold(var_96_float);
	var_2_cvector = var_87_object;
	var_94_int = 0;
	
Label_870:
	var_98_bool = var_94_int < (int)3;
	if(var_98_bool != 0) {
		var_100_float = var_1_bool * (float)1.7999999523162842;
		SetSeeFOV(var_100_float);
		PlayAnimation("all", "hunt");
		WaitForAnimEnd(var_93_bool);
		SetSeeFOV(var_1_bool);
		var_103_bool = var_93_bool == 0; //@nz
		if(var_103_bool != 0) {
		} else {
			Sleep((int)2, var_93_bool);
			var_106_bool = var_93_bool == 0; //@nz
			if(var_106_bool != 0) {
				goto Label_897;
			}
			var_94_int = var_94_int + (int)1;
			goto Label_870;
		}
	}
Label_897:
	func_963(var_93_bool, var_94_int);
	var_104_bool = var_93_bool;
	if(var_104_bool != 0) {
		var_2_cvector = 0;
	}
	var_86_object = var_2_cvector;
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


func_1502(var_47_object)
{
	var_48_object = Obj();
	var_47_object = var_48_object;
	func_1637(var_48_object);
	var_55_object = Obj();
	var_47_object = var_55_object;
	TaskCall(4);
	func_623(var_47_object, var_56_object, var_57_bool, var_55_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_99(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_24_float, (float)0.5);
	Sleep(var_24_float);
	
Label_107:
	var_32_bool = var_0_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_33_bool = var_1_bool == 0; //@nz
		if(var_33_bool != 0) {

		Label_111:
			GetPosition(var_26_cvector);
			GetCameraFarDistance(var_27_float);
			var_27_float = var_27_float * (float)2.5;
			GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, var_27_float, var_28_bool);
			var_35_bool = var_28_bool;
			if(var_35_bool != 0) {
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
	FindShiftedPathTo(var_29_object, var_25_cvector);
	var_36_bool = var_29_object != 0; //@nn
	if(var_36_bool != 0) {
		RotatePath(var_29_object, var_30_bool);
		var_37_bool = var_30_bool;
		if(var_37_bool != 0) {
			var_38_bool = 0;
			func_170(var_38_bool);
			FollowPath(var_29_object, var_38_bool, var_30_bool);
			var_29_object = 0;
			var_39_bool = var_30_bool;
			if(var_39_bool != 0) {
				TaskCall(3);
				func_549();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_29_object = 0;
	goto Label_107;
	
}


func_485()
{
	KillTimer((int)61);
	Stop();
	return 0;
}


func_1637(var_48_object)
{
	var_49_bool = 0; var_50_bool = 0;
	var_51_bool = var_48_object == 0; //@ne
	if(var_51_bool != 0) {
		return 2;
	}
	var_52_object = GlobalVars[0];
	@@var_52_object:in(var_50_bool, var_48_object);
	var_53_bool = var_50_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_54_object = GlobalVars[0];
		@@var_54_object:add(var_48_object);
	}
	return 2;
}


func_1128(var_109_bool, var_110_object)
{
	var_111_bool = 0; var_112_bool = 0;
	@@var_110_object:IsDead(var_112_bool);
	var_112_bool = var_109_bool;
	return 2;
}


func_361(var_71_bool, var_72_object, var_73_object)
{
	var_74_bool = 0; var_75_bool = 0;
	IsPlayerActor(var_72_object, var_75_bool);
	var_76_bool = var_75_bool;
	if(var_76_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	var_77_bool = 0; var_78_object = Obj();
	var_73_object = var_78_object;
	func_1599(var_77_bool, var_78_object);
	var_79_bool = var_77_bool == 0; //@nz
	if(var_79_bool != 0) {
		var_71_bool = 0;
		return 2;
	}
	IsPlayerActor(var_73_object, var_75_bool);
	var_75_bool = var_71_bool;
	return 2;
}


func_618()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1385(var_43_int, var_44_string)
{
	var_45_int = 0; var_46_int = 0;
	GetInvItemByName(var_46_int, var_44_string);
	var_46_int = var_43_int;
	return 2;
}


func_1133(var_98_bool, var_99_object)
{
	var_100_object = Obj(); var_101_object = Obj(); var_102_object = Obj(); var_103_object = Obj();
	var_104_bool = var_99_object == 0; //@ne
	if(var_104_bool != 0) {
		var_98_bool = 0;
		return 4;
	}
	var_105_bool = 0;
	var_105_bool = 0;
	var_108_bool = IsFuncExist(var_99_object, "IsDead", (int)1);
	if(var_108_bool != 0) {
		var_109_bool = 0; var_110_object = Obj();
		var_99_object = var_110_object;
		func_1128(var_109_bool, var_110_object);
		if(var_109_bool != 0) {
			var_105_bool = 1;
		}
	}
	if(var_105_bool != 0) {
		var_98_bool = 0;
		return 4;
	}
	GetScene(var_102_object);
	var_113_bool = var_102_object == 0; //@ne
	if(var_113_bool != 0) {
		var_98_bool = 0;
		return 4;
	}
	@@var_99_object:GetScene(var_103_object);
	var_114_bool = var_102_object != var_103_object;
	if(var_114_bool != 0) {
		var_98_bool = 0;
		return 4;
	}
	var_98_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1390(var_165_float, var_166_cvector, var_167_cvector, var_168_cvector)
{
	var_169_float = 0; var_170_float = 0; var_171_float = 0; var_172_float = 0; var_173_float = 0; var_174_float = 0; var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0;
	var_179_float = GetByIndex(var_168_cvector, 0);
	var_180_float = GetByIndex(var_168_cvector, 0);
	var_181_float = var_179_float * var_180_float;
	var_182_float = GetByIndex(var_168_cvector, 2);
	var_183_float = GetByIndex(var_168_cvector, 2);
	var_184_float = var_182_float * var_183_float;
	var_185_int = var_181_float + var_184_float;
	var_174_float = sqrt(var_185_int);
	var_186_float = GetByIndex(var_168_cvector, 1);
	var_175_float = var_186_float / var_174_float;
	var_187_float = GetByIndex(var_166_cvector, 0);
	var_188_float = GetByIndex(var_167_cvector, 0);
	var_189_int = var_187_float - var_188_float;
	var_190_float = GetByIndex(var_166_cvector, 0);
	var_191_float = GetByIndex(var_167_cvector, 0);
	var_192_int = var_190_float - var_191_float;
	var_193_float = var_189_int * var_192_int;
	var_194_float = GetByIndex(var_166_cvector, 2);
	var_195_float = GetByIndex(var_167_cvector, 2);
	var_196_int = var_194_float - var_195_float;
	var_197_float = GetByIndex(var_166_cvector, 2);
	var_198_float = GetByIndex(var_167_cvector, 2);
	var_199_int = var_197_float - var_198_float;
	var_200_float = var_196_int * var_199_int;
	var_201_int = var_193_float + var_200_float;
	var_176_float = sqrt(var_201_int);
	var_203_float = var_176_float * var_175_float;
	var_204_float = GetByIndex(var_167_cvector, 1);
	var_205_float = GetByIndex(var_166_cvector, 1);
	var_206_int = var_204_float - var_205_float;
	var_207_int = var_203_float - var_206_int;
	var_177_float = (float)500.0 / var_207_int;
	var_209_bool = var_177_float < (int)0;
	if(var_209_bool != 0) {
		var_165_float = -1;
		return 10;
	}
	var_210_float = var_176_float / var_174_float;
	var_211_float = sqrt(var_177_float);
	var_178_float = var_210_float * var_211_float;
	var_178_float = var_165_float;
	return 10;
}


func_623(var_0_bool, var_1_bool, var_55_object, var_127_object)
{
	var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_int = 0; var_62_object = Obj(); var_63_cvector = CVector(0,0,0); var_64_bool = 0; var_65_object = Obj(); var_66_float = 0; var_67_float = 0; var_68_float = 0; var_69_int = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_int = 0; var_74_object = Obj(); var_75_cvector = CVector(0,0,0); var_76_bool = 0; var_77_object = Obj(); var_78_float = 0; var_79_float = 0; var_80_float = 0; var_81_int = 0;
	var_0_bool = var_55_object;
	CanSee(var_1_bool, var_55_object);
	var_82_bool = 0; var_83_object = Obj();
	var_55_object = var_83_object;
	func_1193(var_82_bool, var_83_object);
	var_94_bool = 0; var_95_object = Obj();
	var_55_object = var_95_object;
	func_1169(var_94_bool, var_95_object);
	var_122_bool = var_94_bool == 0; //@nz
	if(var_122_bool != 0) {
		return 24;
	}
	Face(var_55_object);
	IsPlayerActor(var_55_object, var_70_bool);
	
Label_642:
	var_123_bool = 0; var_124_object = Obj();
	var_124_object = var_0_bool;
	func_1169(var_123_bool, var_124_object);
	if(var_123_bool != 0) {
		var_125_bool = var_1_bool == 0; //@nz
		if(var_125_bool != 0) {
			StopAsync();
			TaskCall(5);
			func_809(var_127_object, Obj());
			TaskReturn();
			var_0_bool = var_127_object;
			var_129_bool = var_0_bool == 0; //@ne
			if(var_129_bool != 0) {
			} else {
				CanSee(var_1_bool, var_0_bool);
				Face(var_0_bool);
		}
			ReportAttack(var_0_bool);
			GetPosition(var_71_cvector);
			@@@var_0_bool:GetPosition(var_72_cvector);
			var_130_int = 0; var_131_float = 0;
			var_132_float = 0; var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0);
			var_72_cvector = var_133_cvector;
			var_71_cvector = var_134_cvector;
			func_1283(var_132_float, var_133_cvector, var_134_cvector);
			var_132_float = var_131_float;
			func_1434(var_130_int, var_131_float);
			var_130_int = var_73_int;
			var_144_int = "attack_begin" + var_73_int;
			PlayAnimation("all", var_144_int);
			WaitForAnimEnd();
			var_145_bool = var_0_bool == 0; //@ne
			if(var_145_bool != 0) {
				goto Label_789;
			}
			var_148_int = "attack_end" + var_73_int;
			PlayAnimation("all", var_148_int);
			GetScene(var_74_object);
			var_150_int = "attack" + var_73_int;
			GetGeometryLocator(var_150_int, var_76_bool, var_71_cvector, var_75_cvector);
			AddActorByType(var_77_object, "scripted", var_74_object, var_71_cvector, CVector(0.0, 0.0, 1.0), "grenade.xml");
			var_155_object = Obj();
			func_1277(var_155_object);
			@@var_77_object:SetScriptProperty("Owner", var_155_object);
			@@@var_0_bool:GetPosition(var_72_cvector);
			var_158_bool = var_70_bool;
			if(var_158_bool != 0) {
				var_70_bool = 0;
				RandVec2D(var_78_float, var_79_float);
				var_159_float = GetByIndex(var_72_cvector, 0);
				var_161_float = var_78_float * (int)500;
				var_159_float = var_159_float + var_161_float;
				SetByIndex(var_72_cvector, 0) = var_159_float;
				var_162_float = GetByIndex(var_72_cvector, 2);
				var_164_float = var_79_float * (int)500;
				var_162_float = var_162_float + var_164_float;
				SetByIndex(var_72_cvector, 2) = var_162_float;
			}
			var_165_float = 0; var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0);
			var_71_cvector = var_166_cvector;
			var_72_cvector = var_167_cvector;
			var_75_cvector = var_168_cvector;
			func_1390(var_165_float, var_166_cvector, var_167_cvector, var_168_cvector);
			var_165_float = var_80_float;
			var_213_bool = var_80_float < (int)0;
			if(var_213_bool != 0) {
				var_214_float = 0; var_215_int = 0;
				var_73_int = var_215_int;
				func_1448(var_214_float, var_215_int);
				var_214_float = var_80_float;
			} else {
				var_236_float = 0; var_237_int = 0; var_238_float = 0;
				var_73_int = var_237_int;
				var_80_float = var_238_float;
				func_1456(var_237_int, var_238_float);
				var_236_float = var_80_float;
			}
			var_219_float = var_75_cvector * var_80_float;
			@@var_77_object:SetScriptProperty("StartVelocity", var_219_float);
			@@var_77_object:SetScriptProperty("DamageAmount", (float)0.800000011920929);
			@@var_77_object:SetScriptProperty("DamageType", (int)1);
			WaitForAnimEnd();
			var_225_bool = var_73_int == (int)1;
			if(var_225_bool != 0) {
				irand(var_81_int, (int)2);
				var_229_int = var_81_int + (int)1;
				var_230_int = "scream" + var_229_int;
				Speak(var_230_int);
				var_234_int = var_81_int + (int)1;
				var_235_int = "scream" + var_234_int;
				PlayAnimation("all", var_235_int);
				WaitForAnimEnd();
			}
			var_77_object = 0;
			var_74_object = 0;
			goto Label_642;
		}
	}
Label_789:
	StopAsync();
	return 24;
	
}


func_1650()
{
	return 0;
}


func_1524(var_12_object)
{
	var_12_object = Obj();
	func_1650();
	var_14_object = Obj();
	var_12_object = var_14_object;
	TaskCall(1);
	func_172(var_14_object);
	TaskReturn();
	return 0;
}


func_1272(var_54_bool)
{
	var_55_bool = 0; var_56_bool = 0;
	IsLoaded(var_56_bool);
	var_56_bool = var_54_bool;
	return 2;
}


func_380(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1599(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
	return 0;
}


func_1277(var_155_object)
{
	var_156_object = Obj(); var_157_object = Obj();
	self(var_157_object);
	var_157_object = var_155_object;
	return 2;
}
EMIT "Stack[-1] = 0";


