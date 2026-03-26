// @IMPORTS: SetTimer/2,KillTimer/1,GetBrightness/1,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,IsPlayerActor/2,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FindPathTo/2,Trace/1,ResetAAS/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,CanSee/2,Face/1,ReportAttack/1,GetScene/1,GetGeometryLocator/4,AddActorByType/6,PlayGlobalSound/4,GetSeeThreshold/1,GetSeeFOV/1,SetSeeThreshold/1,SetSeeFOV/1,rand/1,RandVec2D/2,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,IsLoaded/1,AddItem/3,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,FindActor/2,Trigger/2,PlayGlobalMusic/1,HasAnimation/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,RemoveActor/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|A:GetPFPosition|W:Can't find path to noise source|W:new hunt point|W:attack_begin|W:attack_end|W:attack|W:scripted|W:grenade.xml|A:SetScriptProperty|W:StartVelocity|W:DamageAmount|W:DamageType|W:scream|W:hunt|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:reputation|W:idle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:fresh_meat|W:rusk|W:gamma_pills|W:bomber_mark|W:class|W:health|W:rat|W:rat_big|W:bomber|W:quest_d6_02|W:gorbun_death
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool,bool params=0
// @EVENT_1: op=0xc vars=object
// @EVENT_3: op=0x1a vars=object
// @EVENT_17: op=0x28 vars=object
// @EVENT_30: op=0x31 vars=object,object,bool
// @EVENT_41: op=0x44 vars=object
// @EVENT_7: op=0x4d vars=int
// @EVENT_10: op=0xa3 vars=object
// @EVENT_28: op=0xa7 vars=
// @TASK_1: vars= params=1
// @EVENT_0: op=0xd8 vars=object
// @EVENT_22: op=0x157 vars=object,int,float,float
// @EVENT_16: op=0x159 vars=object,string
// @EVENT_41: op=0x15b vars=object
// @TASK_2: vars=cvector,object,object params=1
// @EVENT_1: op=0x164 vars=object
// @EVENT_17: op=0x172 vars=object
// @EVENT_30: op=0x17b vars=object,object,bool
// @EVENT_7: op=0x1e1 vars=int
// @EVENT_3: op=0x1f1 vars=object
// @EVENT_28: op=0x212 vars=
// @EVENT_41: op=0x21b vars=object
// @TASK_3: vars= params=0
// @EVENT_1: op=0x224 vars=object
// @EVENT_3: op=0x232 vars=object
// @EVENT_17: op=0x240 vars=object
// @EVENT_30: op=0x249 vars=object,object,bool
// @TASK_4: vars=object,bool params=1
// @EVENT_1: op=0x36c vars=object
// @EVENT_2: op=0x371 vars=object
// @EVENT_30: op=0x376 vars=object,object,bool
// @TASK_5: vars=object params=1
// @EVENT_1: op=0x382 vars=object
// @EVENT_2: op=0x388 vars=object
// @EVENT_17: op=0x38d vars=object
// @EVENT_30: op=0x393 vars=object,object,bool
// @TASK_6: vars=float,float,object params=2
// @EVENT_1: op=0x3e5 vars=object
// @EVENT_3: op=0x3f3 vars=object
// @EVENT_17: op=0x40a vars=object
// @EVENT_30: op=0x413 vars=object,object,bool
// @EVENT_41: op=0x428 vars=object
// @TASK_7: vars= params=0
// @EVENT_1: op=0x439 vars=object
// @EVENT_3: op=0x447 vars=object
// @EVENT_17: op=0x455 vars=object
// @EVENT_30: op=0x45e vars=object,object,bool
// @EVENT_41: op=0x473 vars=object
// @EVENT_7: op=0x47c vars=int
// @STANDALONE_EVENT_22: op=0x79a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x7a2 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x7c2 vars=object,string
// @STANDALONE_EVENT_41: op=0x7cf vars=object
// @STANDALONE_EVENT_6: op=0x821 vars=
// @PE: 0x0,0xc,0x1a,0x28,0x31,0x44,0xa3,0xc9,0x13d,0x157,0x159,0x15b,0x15d,0x164,0x172,0x17b,0x19a,0x1e1,0x1f1,0x21b,0x224,0x232,0x240,0x249,0x36c,0x371,0x376,0x382,0x388,0x38d,0x393,0x39f,0x3e5,0x40a,0x413,0x428,0x439,0x447,0x455,0x45e,0x473,0x47c,0x61b,0x62b,0x68b,0x748,0x756,0x75e,0x76c,0x773,0x77b,0x782,0x78c,0x79a,0x7a2,0x7ac,0x7cf,0x81f,0x829

task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1915(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_70_object = Obj();
		var_11_object = var_70_object;
		func_1922(var_70_object);
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1900(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_70_object = Obj();
		var_11_object = var_70_object;
		func_1907(var_70_object);
	}
	return 0;
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_61();
	var_51_object = Obj();
	var_49_object = var_51_object;
	func_1932(var_51_object);
	return 0;
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2005(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_11_float = Obj();
		func_40();
	}
	return 0;
}


task_0_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	func_61();
	var_11_object = Obj();
	func_1999();
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
			func_1073();
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
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1675(var_15_object);
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
	func_1915(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_533();
		var_70_object = Obj();
		var_11_object = var_70_object;
		func_1922(var_70_object);
	}
	return 0;
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_533();
	var_51_object = Obj();
	var_49_object = var_51_object;
	func_1932(var_51_object);
	return 0;
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2005(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_11_float = Obj();
		func_370();
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_int, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_13_bool = var_11_object == (int)61;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_object = Obj();
		var_15_object = var_1_bool;
		func_410(var_14_bool, var_15_object);
		var_71_bool = var_14_bool == 0; //@nz
		if(var_71_bool != 0) {
			Stop();
			var_2_cvector = 0;
		}
		ResetAAS();
	}
	return 0;
}


task_2_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = var_11_object == 0; //@nz
	if(var_12_bool != 0) {
		return 0;
	}
	var_13_bool = var_11_object == var_1_bool;
	if(var_13_bool != 0) {
		var_14_bool = 0; var_15_object = Obj();
		var_15_object = var_1_bool;
		func_410(var_14_bool, var_15_object);
		var_71_bool = var_14_bool == 0; //@nz
		if(var_71_bool != 0) {
			func_533();
			var_2_cvector = 0;
			return 0;
		}
	} else {
		var_74_bool = 0; var_75_object = Obj(); var_76_object = Obj();
		var_11_object = var_75_object;
		var_76_object = var_1_bool;
		func_391(var_74_bool, var_75_object, var_76_object);
		if(var_74_bool == 0) goto Label_522;
		var_1_bool = var_11_object;
	}
Label_522:
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
	func_533();
	var_11_object = Obj();
	func_1999();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1915(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_678();
		var_69_object = Obj();
		var_11_object = var_69_object;
		func_1922(var_69_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1900(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_678();
		var_69_object = Obj();
		var_11_object = var_69_object;
		func_1907(var_69_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_678();
	var_50_object = Obj();
	var_49_object = var_50_object;
	func_1932(var_50_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2005(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_11_float = Obj();
		func_576();
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


task_4_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2005(var_14_bool, var_15_object, var_16_object);
	return 0;
}


task_5_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_927(var_11_object, var_12_object);
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


	task_5_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	var_50_object = Obj();
	var_49_object = var_50_object;
	func_927(var_49_object, var_50_object);
	return 0;
	}


task_5_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_object, var_10_bool, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2005(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_11_float = Obj();
		func_909();
	}
	return 0;
}


task_6_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1915(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1055(var_10_object, var_11_object);
		var_69_object = Obj();
		var_11_object = var_69_object;
		func_1922(var_69_object);
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
	func_2031(var_15_bool, var_16_object);
	var_70_bool = var_15_bool == 0; //@nz
	if(var_70_bool != 0) {
		return 2;
	}
	IsPlayerActor(var_11_object, var_13_bool);
	var_71_bool = var_13_bool;
	if(var_71_bool != 0) {
		var_2_cvector = var_11_object;
		Stop();
		StopGroup0();
	}
	return 2;
}


	task_6_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1055(var_13_bool, var_49_object);
	var_50_object = Obj();
	var_49_object = var_50_object;
	func_1932(var_50_object);
	return 0;
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	func_2005(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_1034();
	}
	return 0;
}


task_6_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1055(var_10_object, var_11_object);
	var_11_object = Obj();
	func_1999();
	return 0;
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1915(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1130();
		var_70_object = Obj();
		var_11_object = var_70_object;
		func_1922(var_70_object);
	}
	return 0;
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1900(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1130();
		var_70_object = Obj();
		var_11_object = var_70_object;
		func_1907(var_70_object);
	}
	return 0;
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1130();
	var_51_object = Obj();
	var_49_object = var_51_object;
	func_1932(var_51_object);
	return 0;
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	func_2005(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_11_object = Obj();
		func_1109();
	}
	return 0;
}


task_7_event_41(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	func_1130();
	var_11_object = Obj();
	func_1999();
	return 0;
}


task_7_event_7(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_int)
{
	var_13_bool = var_11_int == (int)91;
	if(var_13_bool != 0) {
		func_1130();
	}
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1382(var_15_object, var_16_int, var_17_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_11_object = var_17_object;
	var_12_int = var_18_int;
	var_13_float = var_19_float;
	var_15_cvector = var_20_cvector;
	var_16_cvector = var_21_cvector;
	func_1450(var_19_float, var_20_cvector, var_21_cvector);
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
	func_1964(var_12_object);
	return 0;
}


event_6(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	var_11_object = Obj();
	func_1547(var_11_object);
	RemoveActor(var_11_object);
	Hold();
	return 0;
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_2030();
	
Label_3:
	SetTimer((int)90, (int)10);
	func_99(var_9_float, var_10_object);
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_1547(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1553(var_43_cvector, var_44_cvector)
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


func_533()
{
	KillTimer((int)61);
	Stop();
	return 0;
}


func_1563(var_53_float, var_54_float, var_55_float, var_56_float)
{
	var_57_bool = var_54_float < var_55_float;
	if(var_57_bool != 0) {
		var_55_float = var_53_float;
		return 0;
	}
	var_58_bool = var_54_float > var_56_float;
	if(var_58_bool != 0) {
		var_56_float = var_53_float;
		return 0;
	}
	var_54_float = var_53_float;
	return 0;
}


func_1055(var_0_bool, var_1_bool)
{
	SetSeeThreshold(var_0_bool);
	SetSeeFOV(var_1_bool);
	Stop();
	StopGroup0();
	return 0;
}


func_2079()
{
	return 0;
}


func_1574(var_95_bool, var_96_int, var_97_int)
{
	var_98_int = 0; var_99_int = 0;
	irand(var_99_int, var_97_int);
	var_95_bool = var_99_int < var_96_int;
	return 2;
}


func_2089()
{
	var_14_bool = 0; var_15_string = ""; var_16_string = "";
	func_1624(var_14_bool, "quest_d6_02", "gorbun_death");
	return 0;
}


func_1579(var_24_bool, var_25_object, var_26_float)
{
	var_27_bool = var_25_object == 0; //@nz
	if(var_27_bool != 0) {
		var_24_bool = 0;
		return 0;
	}
	var_29_bool = var_26_float > (int)0;
	if(var_29_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_60_bool = var_26_float < (int)0;
		if(var_60_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1600;
		}
		var_24_bool = 0;
		return 0;
	}
Label_1600:
	var_31_float = 0;
	var_26_float = var_31_float;
	func_1614(var_31_float);
	var_35_bool = 0; var_36_object = Obj(); var_37_string = ""; var_38_float = 0; var_39_float = 0; var_40_float = 0;
	var_25_object = var_36_object;
	var_26_float = var_38_float;
	func_1232(var_35_bool, var_36_object, "reputation", var_38_float, (float)0, (float)1);
	var_24_bool = 1;
	return 0;
	
}


func_1073()
{
	SetTimer((int)91, (int)20);
	func_1174();
	return 0;
}


func_61()
{
	KillTimer((int)90);
	func_170(var_12_float, var_13_float);
	return 0;
}


func_1614(var_31_float)
{
	var_32_object = Obj(); var_33_object = Obj();
	CreateFloatVector(var_33_object);
	@@var_33_object:add(var_31_float);
	SendWorldWndMessage((int)16, var_33_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_597()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0;
	WaitForAnimEnd();
	var_54_bool = 0;
	func_1464(var_54_bool);
	var_57_bool = var_54_bool == 0; //@nz
	if(var_57_bool != 0) {
		return 14;
	}
	func_1652((int)0);
	var_58_int = var_47_int;
	var_48_int = 0;
	
Label_611:
	var_71_bool = 0;
	var_71_bool = 0;
	var_73_bool = var_48_int < (int)5;
	if(var_73_bool != 0) {
		var_74_bool = 0;
		func_1464(var_74_bool);
		if(var_74_bool != 0) {
			var_71_bool = 1;
		}
	}
	if(var_71_bool != 0) {
		irand(var_49_int, (int)3);
		var_77_bool = var_49_int == (int)0;
		if(var_77_bool != 0) {
			var_78_int = var_47_int;
			if(var_78_int == 0) goto Label_644;
			irand(var_50_int, var_47_int);
			var_80_string = ""; var_81_int = 0;
			var_50_int = var_81_int;
			func_1645(var_80_string, var_81_int);
			PlayAnimation("all", var_80_string);
			WaitForAnimEnd(var_51_bool);
			var_82_bool = var_51_bool == 0; //@nz
			if(var_82_bool != 0) {
			} else {
		} else {
				var_87_bool = var_49_int == (int)1;
				if(var_87_bool != 0) {
					rand(var_52_float, (int)4);
					var_90_int = var_52_float + (int)1;
					Sleep(var_90_int, var_53_bool);
					var_91_bool = var_53_bool == 0; //@nz
					if(var_91_bool != 0) {
						goto Label_673;
					}
					goto Label_662;
				}
				var_92_int = var_48_int;
				if(var_92_int == 0) goto Label_662;
				goto Label_673;
		}
		Label_662:
			var_83_bool = 0;
			func_676(var_83_bool);
			var_84_bool = var_83_bool == 0; //@nz
			if(var_84_bool != 0) {
				goto Label_673;
			}
			ResetAAS();
			var_48_int = var_48_int + (int)1;
			goto Label_611;

		}
	}
Label_673:
	ResetAAS();
	return 14;
	
}


func_1624(var_14_bool, var_15_string, var_16_string)
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


func_99(var_0_bool, var_1_bool)
{
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_bool = 0; var_17_object = Obj(); var_18_bool = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_bool = 0; var_23_object = Obj(); var_24_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_19_float, (float)0.5);
	Sleep(var_19_float);
	
Label_107:
	var_26_bool = var_0_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_27_bool = var_1_bool == 0; //@nz
		if(var_27_bool != 0) {

		Label_111:
			GetPosition(var_21_cvector);
			var_28_float = 0;
			func_158(var_28_float);
			GetRandomPFPointInCircle(var_20_cvector, var_21_cvector, var_28_float, var_22_bool);
			var_31_bool = var_22_bool;
			if(var_31_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_111;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_127;
	
Label_127:
	var_32_object = Obj(); var_33_cvector = CVector(0,0,0);
	var_20_cvector = var_33_cvector;
	func_179(var_32_object, var_33_cvector);
	var_32_object = var_23_object;
	var_36_bool = var_23_object != 0; //@nn
	if(var_36_bool != 0) {
		RotatePath(var_23_object, var_24_bool);
		var_37_bool = var_24_bool;
		if(var_37_bool != 0) {
			var_38_bool = 0;
			func_177(var_38_bool);
			FollowPath(var_23_object, var_38_bool, var_24_bool);
			var_23_object = 0;
			var_39_bool = var_24_bool;
			if(var_39_bool != 0) {
				TaskCall(3);
				func_597();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_23_object = 0;
	goto Label_107;
	
}


func_1636(var_128_object)
{
	var_129_bool = 0; var_130_bool = 0;
	IsPlayerActor(var_128_object, var_130_bool);
	var_131_bool = var_130_bool;
	if(var_131_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1130()
{
	KillTimer((int)91);
	Stop();
	func_1195();
	return 0;
}


func_1645(var_64_string, var_65_int)
{
	var_66_string = ""; var_67_string = "";
	var_68_int = var_65_int;
	if(var_68_int != 0) {
		"idle" = "idle" + var_65_int;
	}
	var_67_string = var_64_string;
	return 2;
}


func_1652(var_58_int)
{
	var_59_int = 0; var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_61_int = 0;
	
Label_1654:
	var_64_string = ""; var_65_int = 0;
	var_61_int = var_65_int;
	func_1645(var_64_string, var_65_int);
	HasAnimation(var_62_bool, "all", var_64_string);
	var_69_bool = var_62_bool == 0; //@nz
	if(var_69_bool != 0) {
	} else {
		var_61_int = var_61_int + (int)1;
		goto Label_1654;
	}
	var_61_int = var_58_int;
	return 4;
	
}


func_1156(var_30_bool)
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


func_1669(var_122_int)
{
	var_123_int = 0; var_124_int = 0;
	GetVariable("branch", var_124_int);
	var_124_int = var_122_int;
	return 2;
}


func_1675(var_15_object)
{
	var_16_int = 0;
	func_1669(var_16_int);
	var_21_bool = var_16_int == (int)1;
	if(var_21_bool != 0) {
		WorkWithCorpse(var_15_object);
	} else {
		Barter(var_15_object);
	}
	return 0;
	
}


func_1174()
{
	var_23_float = 0; var_24_float = 0; var_25_bool = 0; var_26_float = 0; var_27_float = 0; var_28_bool = 0;
	
Label_1175:
	RandVec2D(var_26_float, var_27_float);
	Rotate(var_26_float, var_27_float, var_28_bool);
	var_29_bool = var_28_bool == 0; //@nz
	if(var_29_bool != 0) {
	} else {
		var_30_bool = 0;
		func_1156(var_30_bool);
		if(var_30_bool != 0) {
			goto Label_1194;
		}
		Sleep((int)5, var_28_bool);
		var_41_bool = var_28_bool == 0; //@nz
		if(var_41_bool != 0) {
			goto Label_1194;
		}
		goto Label_1175;
	}
Label_1194:
	return 6;
	
}


func_1688(var_71_int, var_72_int)
{
	var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0;
	var_77_bool = var_71_int > var_72_int;
	if(var_77_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_75_int = 0;
	var_79_bool = var_71_int != var_72_int;
	if(var_79_bool != 0) {
		var_80_int = var_72_int - var_71_int;
		irand(var_75_int, var_80_int);
	} else {
		var_89_bool = var_71_int == (int)0;
		if(var_89_bool == 0) goto Label_1706;
		return 4;
	}
Label_1706:
	var_75_int = var_75_int + var_71_int;
	var_82_bool = var_75_int == (int)0;
	if(var_82_bool != 0) {
		return 4;
	}
	var_83_int = 0; var_84_string = "";
	func_1797(var_83_int, "Money");
	AddItem(var_76_bool, var_83_int, (int)0, var_75_int);
	return 4;
	
}


func_158(var_28_float)
{
	var_29_float = 0; var_30_float = 0;
	GetCameraFarDistance(var_30_float);
	var_30_float = var_28_float;
	return 2;
}


func_676(var_83_bool)
{
	var_83_bool = 1;
	return 0;
}


func_678()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_170(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1195()
{
	Stop();
	StopGroup0();
	return 0;
}


func_683(var_0_bool, var_1_bool, var_53_object, var_125_object)
{
	var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_int = 0; var_60_object = Obj(); var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_object = Obj(); var_64_float = 0; var_65_float = 0; var_66_int = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_int = 0; var_71_object = Obj(); var_72_cvector = CVector(0,0,0); var_73_bool = 0; var_74_object = Obj(); var_75_float = 0; var_76_float = 0; var_77_int = 0;
	var_0_bool = var_53_object;
	CanSee(var_1_bool, var_53_object);
	var_78_bool = 0; var_79_object = Obj();
	var_53_object = var_79_object;
	func_1329(var_78_bool, var_79_object);
	var_92_bool = 0; var_93_object = Obj();
	var_53_object = var_93_object;
	func_1295(var_92_bool, var_93_object);
	var_120_bool = var_92_bool == 0; //@nz
	if(var_120_bool != 0) {
		return 22;
	}
	Face(var_53_object);
	
Label_700:
	var_121_bool = 0; var_122_object = Obj();
	var_122_object = var_0_bool;
	func_1295(var_121_bool, var_122_object);
	if(var_121_bool != 0) {
		var_123_bool = var_1_bool == 0; //@nz
		if(var_123_bool != 0) {
			StopAsync();
			TaskCall(5);
			func_893(var_125_object, Obj());
			TaskReturn();
			var_0_bool = var_125_object;
			var_127_bool = var_0_bool == 0; //@ne
			if(var_127_bool != 0) {
			} else {
				CanSee(var_1_bool, var_0_bool);
				Face(var_0_bool);
		}
			var_128_object = Obj();
			var_128_object = var_0_bool;
			func_1636(var_128_object);
			ReportAttack(var_0_bool);
			GetPosition(var_67_cvector);
			@@@var_0_bool:GetPosition(var_68_cvector);
			var_69_cvector = var_68_cvector - var_67_cvector;
			var_133_int = 0; var_134_float = 0;
			var_135_int = var_69_cvector | var_69_cvector;
			var_134_float = sqrt(var_135_int);
			func_1864(var_133_int, var_134_float);
			var_133_int = var_70_int;
			var_142_int = "attack_begin" + var_70_int;
			PlayAnimation("all", var_142_int);
			WaitForAnimEnd();
			var_143_bool = var_0_bool == 0; //@ne
			if(var_143_bool != 0) {
				goto Label_873;
			}
			var_146_int = "attack_end" + var_70_int;
			PlayAnimation("all", var_146_int);
			GetScene(var_71_object);
			var_148_int = "attack" + var_70_int;
			GetGeometryLocator(var_148_int, var_73_bool, var_67_cvector, var_72_cvector);
			AddActorByType(var_74_object, "scripted", var_71_object, var_67_cvector, CVector(0.0, 0.0, 1.0), "grenade.xml");
			var_153_object = Obj();
			func_1547(var_153_object);
			@@var_74_object:SetScriptProperty("Owner", var_153_object);
			var_157_bool = var_70_int == (int)1;
			if(var_157_bool != 0) {
				@@var_74_object:SetScriptProperty("StartVelocity", CVector(0.0, -500.0, 0.0));
			} else {
				var_188_float = GetByIndex(var_72_cvector, 1);
				var_189_float = GetByIndex(var_72_cvector, 1);
				var_190_float = var_188_float * var_189_float;
				var_191_int = (int)1 - var_190_float;
				var_192_float = GetByIndex(var_69_cvector, 0);
				var_193_float = GetByIndex(var_69_cvector, 0);
				var_194_float = var_192_float * var_193_float;
				var_195_float = GetByIndex(var_69_cvector, 2);
				var_196_float = GetByIndex(var_69_cvector, 2);
				var_197_float = var_195_float * var_196_float;
				var_198_int = var_194_float + var_197_float;
				var_199_float = var_191_int / var_198_int;
				var_75_float = sqrt(var_199_float);
				var_200_float = GetByIndex(var_72_cvector, 0);
				var_201_float = GetByIndex(var_69_cvector, 0);
				var_200_float = var_201_float * var_75_float;
				SetByIndex(var_72_cvector, 0) = var_200_float;
				var_202_float = GetByIndex(var_72_cvector, 2);
				var_203_float = GetByIndex(var_69_cvector, 2);
				var_202_float = var_203_float * var_75_float;
				SetByIndex(var_72_cvector, 2) = var_202_float;
				@@@var_0_bool:GetPosition(var_68_cvector);
				var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0);
				var_67_cvector = var_205_cvector;
				var_68_cvector = var_206_cvector;
				var_72_cvector = var_207_cvector;
				func_1820(var_204_float, var_205_cvector, var_206_cvector, var_207_cvector);
				var_204_float = var_76_float;
				var_252_bool = var_76_float < (int)0;
				if(var_252_bool != 0) {
					var_253_float = 0; var_254_int = 0;
					var_70_int = var_254_int;
					func_1878(var_253_float, var_254_int);
					var_253_float = var_76_float;
				} else {
					var_259_float = 0; var_260_int = 0; var_261_float = 0;
					var_70_int = var_260_int;
					var_76_float = var_261_float;
					func_1886(var_260_int, var_261_float);
					var_259_float = var_76_float;
				}
				var_258_float = var_72_cvector * var_76_float;
				@@var_74_object:SetScriptProperty("StartVelocity", var_258_float);
			}
			@@var_74_object:SetScriptProperty("DamageAmount", (float)0.800000011920929);
			@@var_74_object:SetScriptProperty("DamageType", (int)2);
			WaitForAnimEnd();
			var_165_bool = var_70_int == (int)1;
			if(var_165_bool != 0) {
				irand(var_77_int, (int)2);
				var_169_int = var_77_int + (int)1;
				var_170_int = "scream" + var_169_int;
				PlayGlobalSound(var_170_int, CVector(0.0, 150.0, 0.0), (int)1, (int)500);
				var_174_object = Obj();
				var_174_object = var_0_bool;
				func_1469(var_174_object);
				var_184_int = var_77_int + (int)1;
				var_185_int = "scream" + var_184_int;
				PlayAnimation("all", var_185_int);
				WaitForAnimEnd();
				UnlookAsync("head");
			}
			var_74_object = 0;
			var_71_object = 0;
			goto Label_700;
		}
	}
Label_873:
	StopAsync();
	return 22;
	
}


func_1200(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_177(var_38_bool)
{
	var_38_bool = 0;
	return 0;
}


func_179(var_32_object, var_33_cvector)
{
	var_34_object = Obj(); var_35_object = Obj();
	FindShiftedPathTo(var_35_object, var_33_cvector);
	var_35_object = var_32_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1719(var_128_string)
{
	var_129_object = Obj(); var_130_int = 0; var_131_bool = 0; var_132_object = Obj(); var_133_int = 0; var_134_bool = 0;
	CreateInvItem(var_132_object);
	@@var_132_object:SetItemName(var_128_string);
	@@var_132_object:SetProperty("Organ", (int)1);
	@@var_132_object:GetItemID(var_133_int);
	AddItem(var_134_bool, var_132_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1207(var_39_float, var_40_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	GetPosition(var_44_cvector);
	@@var_40_object:GetPosition(var_45_cvector);
	var_46_cvector = var_45_cvector - var_44_cvector;
	var_39_float = var_46_cvector | var_46_cvector;
	return 6;
}


func_185(var_62_object)
{
	var_63_bool = 0; var_64_bool = 0;
	IsPlayerActor(var_62_object, var_64_bool);
	var_65_bool = var_64_bool;
	if(var_65_bool != 0) {
		func_1760();
	}
	func_1736();
	var_142_object = Obj();
	var_62_object = var_142_object;
	func_201(var_142_object);
	return 2;
}


func_1215(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	IsPlayerActor(var_21_object, var_23_bool);
	var_23_bool = var_20_bool;
	return 2;
}


func_1220(var_43_bool, var_44_object, var_45_string)
{
	var_46_bool = 0; var_47_bool = 0;
	var_50_bool = IsFuncExist(var_44_object, "HasProperty", (int)2);
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_43_bool = 0;
		return 2;
	}
	@@var_44_object:HasProperty(var_45_string, var_47_bool);
	var_47_bool = var_43_bool;
	return 2;
}


func_1736()
{
	var_122_int = 0;
	func_1669(var_122_int);
	var_127_bool = var_122_int != (int)1;
	if(var_127_bool != 0) {
		return 0;
	}
	var_128_string = "";
	func_1719("liver");
	var_139_string = "";
	func_1719("kidney");
	var_140_string = "";
	func_1719("heart");
	var_141_string = "";
	func_1719("blood");
	return 0;
}


func_201(var_142_object)
{
	EventDisable(0);
	var_143_object = Obj();
	var_142_object = var_143_object;
	func_226(var_143_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_212:
	Hold();
	goto Label_212;
}
EMIT "Return(); Pop(0)";


func_1232(var_35_bool, var_36_object, var_37_string, var_38_float, var_39_float, var_40_float)
{
	var_41_float = 0; var_42_float = 0;
	var_43_bool = 0; var_44_object = Obj(); var_45_string = "";
	var_36_object = var_44_object;
	var_37_string = var_45_string;
	func_1220(var_43_bool, var_44_object, var_45_string);
	var_52_bool = var_43_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:GetProperty(var_37_string, var_42_float);
	var_53_float = 0; var_54_float = 0; var_55_float = 0; var_56_float = 0;
	var_54_float = var_42_float + var_38_float;
	var_39_float = var_55_float;
	var_40_float = var_56_float;
	func_1563(var_53_float, var_54_float, var_55_float, var_56_float);
	@@var_36_object:SetProperty(var_37_string, var_53_float);
	var_35_bool = 1;
	return 2;
}


func_1760()
{
	var_66_int = 0; var_67_bool = 0; var_68_int = 0; var_69_bool = 0;
	ClearSubContainer((int)0);
	var_71_int = 0; var_72_int = 0;
	func_1688((int)600, (int)1500);
	var_90_string = ""; var_91_int = 0; var_92_int = 0;
	func_1480("fresh_meat", (int)1, (int)6);
	var_101_string = ""; var_102_int = 0; var_103_int = 0; var_104_int = 0;
	func_1491("rusk", (int)1, (int)6, (int)2);
	var_115_string = ""; var_116_int = 0; var_117_int = 0;
	func_1480("gamma_pills", (int)1, (int)3);
	var_118_int = 0; var_119_string = "";
	func_1797(var_118_int, "bomber_mark");
	AddItem(var_69_bool, var_118_int, (int)0, (int)1);
	return 4;
}


func_226(var_143_object)
{
	var_144_cvector = CVector(0,0,0); var_145_cvector = CVector(0,0,0); var_146_cvector = CVector(0,0,0); var_147_cvector = CVector(0,0,0); var_148_string = ""; var_149_object = Obj(); var_150_bool = 0; var_151_bool = 0; var_152_float = 0; var_153_cvector = CVector(0,0,0); var_154_cvector = CVector(0,0,0); var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_string = ""; var_159_object = Obj(); var_160_bool = 0; var_161_bool = 0; var_162_float = 0; var_163_cvector = CVector(0,0,0);
	var_164_bool = var_143_object == 0; //@ne
	if(var_164_bool != 0) {
		var_165_string = "";
		func_317("fdie");
	} else {
		@@var_143_object:GetPosition(var_154_cvector);
		GetPosition(var_155_cvector);
		GetDirection(var_156_cvector);
		var_157_cvector = var_155_cvector - var_154_cvector;
		var_197_float = GetByIndex(var_157_cvector, 0);
		var_198_float = GetByIndex(var_156_cvector, 0);
		var_199_float = var_197_float * var_198_float;
		var_200_float = GetByIndex(var_157_cvector, 2);
		var_201_float = GetByIndex(var_156_cvector, 2);
		var_202_float = var_200_float * var_201_float;
		var_203_int = var_199_float + var_202_float;
		var_205_bool = var_203_int >= (int)0;
		if(var_205_bool != 0) {
			var_158_string = "fdie";
		} else {
				var_158_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_143_object = var_159_object;
		var_208_bool = IsFuncExist(var_143_object, "GetScriptProperty", (int)2);
		if(var_208_bool != 0) {
			@@var_143_object:HasScriptProperty(var_160_bool, "Owner");
			var_210_bool = var_160_bool;
			if(var_210_bool != 0) {
				@@var_143_object:GetScriptProperty(var_159_object, "Owner");
				var_212_bool = var_159_object == 0; //@ne
				if(var_212_bool != 0) {
					var_143_object = var_159_object;
				}
			}
		}
		var_215_bool = IsFuncExist(var_159_object, "@GetEyesHeight", (int)1);
		if(var_215_bool != 0) {
			@@var_159_object:GetEyesHeight(var_162_float);
			var_163_cvector = CVector(0.0, 0.0, 0.0);
			var_216_float = GetByIndex(var_163_cvector, 1);
			var_162_float = var_216_float;
			SetByIndex(var_163_cvector, 1) = var_216_float;
			LookAsync(var_143_object, "head", var_163_cvector);
			var_161_bool = 1;
		} else {
			var_161_bool = 0;

		}
		var_218_string = "";
		var_158_string = var_218_string;
		func_1506(var_218_string);
		PlayAnimation("all", var_158_string);
		WaitForAnimEnd();
		var_220_bool = var_161_bool;
		if(var_220_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_158_string);
		RemoveEnvelope();
		var_159_object = 0;
	}
	return 20;
	
}


func_1254(var_107_bool, var_108_object)
{
	var_109_bool = 0; var_110_bool = 0;
	@@var_108_object:IsDead(var_110_bool);
	var_110_bool = var_107_bool;
	return 2;
}


func_1259(var_96_bool, var_97_object)
{
	var_98_object = Obj(); var_99_object = Obj(); var_100_object = Obj(); var_101_object = Obj();
	var_102_bool = var_97_object == 0; //@ne
	if(var_102_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	var_103_bool = 0;
	var_103_bool = 0;
	var_106_bool = IsFuncExist(var_97_object, "IsDead", (int)1);
	if(var_106_bool != 0) {
		var_107_bool = 0; var_108_object = Obj();
		var_97_object = var_108_object;
		func_1254(var_107_bool, var_108_object);
		if(var_107_bool != 0) {
			var_103_bool = 1;
		}
	}
	if(var_103_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	GetScene(var_100_object);
	var_111_bool = var_100_object == 0; //@ne
	if(var_111_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	@@var_97_object:GetScene(var_101_object);
	var_112_bool = var_100_object != var_101_object;
	if(var_112_bool != 0) {
		var_96_bool = 0;
		return 4;
	}
	var_96_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1797(var_83_int, var_84_string)
{
	var_85_int = 0; var_86_int = 0;
	GetInvItemByName(var_86_int, var_84_string);
	var_86_int = var_83_int;
	return 2;
}


func_1802(var_19_bool, var_20_object)
{
	var_21_string = ""; var_22_string = ""; var_23_string = ""; var_24_string = "";
	var_25_bool = 0; var_26_object = Obj(); var_27_string = "";
	var_20_object = var_26_object;
	func_1220(var_25_bool, var_26_object, "class");
	var_34_bool = var_25_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_19_bool = 0;
		return 4;
	}
	GetProperty("class", var_23_string);
	@@var_20_object:GetProperty("class", var_24_string);
	var_19_bool = var_24_string == var_23_string;
	return 4;
}


func_1295(var_92_bool, var_93_object)
{
	var_94_int = 0; var_95_int = 0;
	var_96_bool = 0; var_97_object = Obj();
	var_93_object = var_97_object;
	func_1259(var_96_bool, var_97_object);
	var_113_bool = var_96_bool == 0; //@nz
	if(var_113_bool != 0) {
		var_92_bool = 0;
		return 2;
	}
	var_114_bool = 0; var_115_object = Obj(); var_116_string = "";
	var_93_object = var_115_object;
	func_1220(var_114_bool, var_115_object, "noaccess");
	var_117_bool = var_114_bool == 0; //@nz
	if(var_117_bool != 0) {
		var_92_bool = 1;
		return 2;
	}
	@@var_93_object:GetProperty("noaccess", var_95_int);
	var_92_bool = var_95_int == (int)0;
	return 2;
}


func_1820(var_204_float, var_205_cvector, var_206_cvector, var_207_cvector)
{
	var_208_float = 0; var_209_float = 0; var_210_float = 0; var_211_float = 0; var_212_float = 0; var_213_float = 0; var_214_float = 0; var_215_float = 0; var_216_float = 0; var_217_float = 0;
	var_218_float = GetByIndex(var_207_cvector, 0);
	var_219_float = GetByIndex(var_207_cvector, 0);
	var_220_float = var_218_float * var_219_float;
	var_221_float = GetByIndex(var_207_cvector, 2);
	var_222_float = GetByIndex(var_207_cvector, 2);
	var_223_float = var_221_float * var_222_float;
	var_224_int = var_220_float + var_223_float;
	var_213_float = sqrt(var_224_int);
	var_225_float = GetByIndex(var_207_cvector, 1);
	var_214_float = var_225_float / var_213_float;
	var_226_float = GetByIndex(var_205_cvector, 0);
	var_227_float = GetByIndex(var_206_cvector, 0);
	var_228_int = var_226_float - var_227_float;
	var_229_float = GetByIndex(var_205_cvector, 0);
	var_230_float = GetByIndex(var_206_cvector, 0);
	var_231_int = var_229_float - var_230_float;
	var_232_float = var_228_int * var_231_int;
	var_233_float = GetByIndex(var_205_cvector, 2);
	var_234_float = GetByIndex(var_206_cvector, 2);
	var_235_int = var_233_float - var_234_float;
	var_236_float = GetByIndex(var_205_cvector, 2);
	var_237_float = GetByIndex(var_206_cvector, 2);
	var_238_int = var_236_float - var_237_float;
	var_239_float = var_235_int * var_238_int;
	var_240_int = var_232_float + var_239_float;
	var_215_float = sqrt(var_240_int);
	var_242_float = var_215_float * var_214_float;
	var_243_float = GetByIndex(var_206_cvector, 1);
	var_244_float = GetByIndex(var_205_cvector, 1);
	var_245_int = var_243_float - var_244_float;
	var_246_int = var_242_float - var_245_int;
	var_216_float = (float)500.0 / var_246_int;
	var_248_bool = var_216_float < (int)0;
	if(var_248_bool != 0) {
		var_204_float = -1;
		return 10;
	}
	var_249_float = var_215_float / var_213_float;
	var_250_float = sqrt(var_216_float);
	var_217_float = var_249_float * var_250_float;
	var_217_float = var_204_float;
	return 10;
}


func_1319(var_82_bool, var_83_cvector)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_bool = 0;
	GetPosition(var_87_cvector);
	var_88_cvector = var_83_cvector - var_87_cvector;
	var_90_float = GetByIndex(var_88_cvector, 0);
	var_91_float = GetByIndex(var_88_cvector, 2);
	Rotate(var_90_float, var_91_float, var_89_bool);
	var_89_bool = var_82_bool;
	return 6;
}


func_1329(var_78_bool, var_79_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0);
	@@var_79_object:GetPosition(var_81_cvector);
	var_82_bool = 0; var_83_cvector = CVector(0,0,0);
	var_81_cvector = var_83_cvector;
	func_1319(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
	return 2;
}


func_1338(var_28_object)
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


func_317(var_165_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_166_string = "";
	var_165_string = var_166_string;
	func_1506(var_166_string);
	PlayAnimation("all", var_165_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_165_string);
	RemoveEnvelope();
	return 0;
}


func_1864(var_133_int, var_134_float)
{
	var_137_bool = var_134_float < (int)200;
	if(var_137_bool != 0) {
		var_133_int = 1;
		return 0;
	EMIT "GOTO 0x754";
	}
	var_139_bool = var_134_float < (int)1000;
	if(var_139_bool != 0) {
		var_133_int = 2;
		return 0;
	}
	var_133_int = 3;
	return 0;
}


func_1878(var_253_float, var_254_int)
{
	var_256_bool = var_254_int == (int)1;
	if(var_256_bool != 0) {
		var_253_float = 30;
		return 0;
	}
	var_253_float = 700;
	return 0;
}


func_349(var_71_object)
{
	var_75_object = Obj(); var_76_bool = 0;
	var_71_object = var_75_object;
	func_417(var_72_cvector, var_73_object, var_74_object, var_71_object, var_75_object, (bool)0);
	return 0;
}


func_1886(var_259_float, var_261_float)
{
	var_263_bool = var_261_float < (int)10;
	if(var_263_bool != 0) {
		var_259_float = 10;
		return 0;
	EMIT "GOTO 0x76a";
	}
	var_265_bool = var_261_float > (int)1500;
	if(var_265_bool != 0) {
		var_259_float = 1500;
		return 0;
	}
	var_261_float = var_259_float;
	return 0;
}


func_1382(var_15_object, var_16_int, var_17_float)
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
		func_1200(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1553(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1411:
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
			goto Label_1411;
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
			func_1450(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1338(var_105_object);
	return 18;
	
}


func_1900(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2031(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1907(var_70_object)
{
	var_71_object = Obj();
	var_70_object = var_71_object;
	TaskCall(2);
	func_349(var_71_object);
	TaskReturn();
	return 0;
}


func_1915(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2031(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_893(var_0_bool, var_124_object)
{
	Sleep((int)5);
	var_124_object = var_0_bool;
	return 0;
}


func_1922(var_70_object)
{
	var_71_object = Obj();
	var_70_object = var_71_object;
	TaskCall(4);
	func_683(var_70_object, var_72_object, var_73_bool, var_71_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_391(var_74_bool, var_75_object, var_76_object)
{
	var_77_bool = 0; var_78_bool = 0;
	IsPlayerActor(var_75_object, var_78_bool);
	var_79_bool = var_78_bool;
	if(var_79_bool != 0) {
		var_74_bool = 0;
		return 2;
	}
	var_80_bool = 0; var_81_object = Obj();
	var_76_object = var_81_object;
	func_2031(var_80_bool, var_81_object);
	var_82_bool = var_80_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_74_bool = 0;
		return 2;
	}
	IsPlayerActor(var_76_object, var_78_bool);
	var_78_bool = var_74_bool;
	return 2;
}


func_1932(var_51_object)
{
	var_51_object = Obj();
	func_2079();
	var_53_object = Obj();
	var_51_object = var_53_object;
	TaskCall(4);
	func_683(var_51_object, var_54_object, var_55_bool, var_53_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_410(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_2031(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
	return 0;
}


func_927(var_0_bool, var_50_object)
{
	var_51_bool = 0;
	var_51_bool = 0;
	var_52_bool = var_0_bool == 0; //@ne
	if(var_52_bool != 0) {
		var_53_bool = 0; var_54_object = Obj();
		var_50_object = var_54_object;
		func_2031(var_53_bool, var_54_object);
		if(var_53_bool != 0) {
			var_51_bool = 1;
		}
	}
	if(var_51_bool != 0) {
		var_0_bool = var_50_object;
		StopGroup0();
	}
	return 0;
}


func_417(var_0_bool, var_1_bool, var_2_cvector, var_75_object, var_76_bool, var_98_float)
{
	var_77_bool = 0; var_78_bool = 0;
	var_79_bool = 0; var_80_object = Obj();
	var_80_object = var_1_bool;
	func_1295(var_79_bool, var_80_object);
	var_81_bool = var_79_bool == 0; //@nz
	if(var_81_bool != 0) {
		return 2;
	}
	var_1_bool = var_75_object;
	var_82_object = Obj();
	var_82_object = var_1_bool;
	func_1636(var_82_object);
	@@@var_1_bool:GetPFPosition(var_0_bool);
	SetTimer((int)61, (float)0.5);
	
Label_436:
	FindPathTo(var_2_cvector, var_0_bool);
	var_89_bool = var_2_cvector == 0; //@ne
	if(var_89_bool != 0) {
		Trace("Can't find path to noise source");
	} else {
		FollowPath(var_2_cvector, var_76_bool, var_78_bool);
		var_92_bool = var_78_bool == 0; //@nz
		if(var_92_bool != 0) {
			var_93_bool = var_2_cvector == 0; //@ne
			if(var_93_bool != 0) {
				goto Label_477;
			}
		} else {
			KillTimer((int)61);
			var_96_object = Obj(); var_97_object = Obj();
			var_97_object = var_1_bool;
			TaskCall(6);
			func_943(var_98_float, var_99_float, var_100_object, var_96_object, var_97_object);
			TaskReturn();
			var_1_bool = var_98_float;
			SetTimer((int)61, (float)0.5);
			var_122_bool = 0; var_123_object = Obj();
			var_123_object = var_1_bool;
			func_1295(var_122_bool, var_123_object);
			var_124_bool = var_122_bool == 0; //@nz
			if(var_124_bool != 0) {
				goto Label_477;
			}
			@@@var_1_bool:GetPFPosition(var_0_bool);
		}
		var_94_bool = var_2_cvector != 0; //@nn
		if(var_94_bool == 1) goto Label_436;
	}
Label_477:
	KillTimer((int)61);
	return 2;
	
}


func_1450(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1338(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1964(var_12_object)
{
	var_12_object = Obj();
	func_2089();
	var_20_bool = 0; var_21_object = Obj();
	var_12_object = var_21_object;
	func_1215(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_24_bool = 0; var_25_object = Obj(); var_26_float = 0;
		var_12_object = var_25_object;
		func_1579(var_24_bool, var_25_object, (float)0.05000000074505806);
	}
	var_62_object = Obj();
	var_12_object = var_62_object;
	TaskCall(1);
	func_185(var_62_object);
	TaskReturn();
	return 0;
}


func_943(var_0_bool, var_1_bool, var_2_cvector, var_96_object, var_97_object)
{
	var_101_bool = 0; var_102_int = 0; var_103_bool = 0; var_104_int = 0;
	GetSeeThreshold(var_0_bool);
	GetSeeFOV(var_1_bool);
	var_106_float = var_0_bool / (float)1.5;
	SetSeeThreshold(var_106_float);
	var_2_cvector = var_97_object;
	var_107_object = Obj();
	var_107_object = var_2_cvector;
	func_1636(var_107_object);
	var_104_int = 0;
	
Label_958:
	var_109_bool = var_104_int < (int)3;
	if(var_109_bool != 0) {
		var_111_float = var_1_bool * (float)1.7999999523162842;
		SetSeeFOV(var_111_float);
		PlayAnimation("all", "hunt");
		WaitForAnimEnd(var_103_bool);
		SetSeeFOV(var_1_bool);
		var_114_bool = var_103_bool == 0; //@nz
		if(var_114_bool != 0) {
		} else {
			Sleep((int)2, var_103_bool);
			var_117_bool = var_103_bool == 0; //@nz
			if(var_117_bool != 0) {
				goto Label_989;
			}
			var_118_object = Obj();
			var_118_object = var_2_cvector;
			func_1636(var_118_object);
			var_104_int = var_104_int + (int)1;
			goto Label_958;
		}
	}
Label_989:
	func_1055(var_103_bool, var_104_int);
	var_115_bool = var_103_bool;
	if(var_115_bool != 0) {
		var_2_cvector = 0;
	}
	var_96_object = var_2_cvector;
	return 4;
	
}


func_1464(var_54_bool)
{
	var_55_bool = 0; var_56_bool = 0;
	IsLoaded(var_56_bool);
	var_56_bool = var_54_bool;
	return 2;
}


func_1469(var_174_object)
{
	var_175_float = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_cvector = CVector(0,0,0);
	@@var_174_object:GetEyesHeight(var_177_float);
	var_178_cvector = CVector(0.0, 0.0, 0.0);
	var_179_float = GetByIndex(var_178_cvector, 1);
	var_177_float = var_179_float;
	SetByIndex(var_178_cvector, 1) = var_179_float;
	LookAsync(var_174_object, "head", var_178_cvector);
	return 4;
}


func_1480(var_90_string, var_91_int, var_92_int)
{
	var_93_bool = 0; var_94_bool = 0;
	var_95_bool = 0; var_96_int = 0; var_97_int = 0;
	var_91_int = var_96_int;
	var_92_int = var_97_int;
	func_1574(var_95_bool, var_96_int, var_97_int);
	if(var_95_bool != 0) {
		AddItem(var_94_bool, var_90_string, (int)0);
	}
	return 2;
}


func_1491(var_101_string, var_102_int, var_103_int, var_104_int)
{
	var_105_int = 0; var_106_bool = 0; var_107_int = 0; var_108_bool = 0;
	var_109_bool = 0; var_110_int = 0; var_111_int = 0;
	var_102_int = var_110_int;
	var_103_int = var_111_int;
	func_1574(var_109_bool, var_110_int, var_111_int);
	if(var_109_bool != 0) {
		irand(var_107_int, var_104_int);
		var_114_int = var_107_int + (int)1;
		AddItem(var_108_bool, var_101_string, (int)0, var_114_int);
	}
	return 4;
}


func_2005(var_14_bool, var_15_object, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_16_object = var_20_object;
	func_1802(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		CanSee(var_18_bool, var_15_object);
		var_37_bool = 0;
		var_37_bool = 1;
		var_38_bool = var_18_bool;
		if(var_38_bool != 1) {
			var_39_float = 0; var_40_object = Obj();
			var_15_object = var_40_object;
			func_1207(var_39_float, var_40_object);
			var_48_bool = var_39_float <= (float)490000.0;
			if(var_48_bool != 1) {
				var_37_bool = 0;
			}
		}
		if(var_37_bool != 0) {
			var_14_bool = 1;
			return 2;
		}
	}
	var_14_bool = 0;
	return 2;
}


func_1506(var_166_string)
{
	var_167_bool = 0; var_168_int = 0; var_169_bool = 0; var_170_int = 0; var_171_bool = 0; var_172_float = 0; var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_bool = 0; var_176_int = 0; var_177_bool = 0; var_178_int = 0; var_179_bool = 0; var_180_float = 0; var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0);
	IsExisting3DSound(var_175_bool, var_166_string);
	var_183_bool = var_175_bool == 0; //@nz
	if(var_183_bool != 0) {
		var_176_int = 0;

	Label_1512:
		var_185_int = var_176_int + (int)1;
		var_186_int = var_166_string + var_185_int;
		IsExisting3DSound(var_177_bool, var_186_int);
		var_187_bool = var_177_bool == 0; //@nz
		if(var_187_bool != 0) {
		} else {
			var_176_int = var_176_int + (int)1;
			goto Label_1512;
		}
		var_188_bool = var_176_int == 0; //@nz
		if(var_188_bool != 0) {
			return 16;
		}
		irand(var_178_int, var_176_int);
		var_190_int = var_178_int + (int)1;
		var_166_string = var_166_string + var_190_int;
	}
	Is3DSoundLoaded(var_179_bool, var_166_string);
	var_191_bool = var_179_bool;
	if(var_191_bool != 0) {
		GetEyesHeight(var_180_float);
		GetDirection(var_181_cvector);
		var_182_cvector = var_181_cvector * (int)50;
		var_193_float = GetByIndex(var_182_cvector, 1);
		var_193_float = var_193_float + var_180_float;
		SetByIndex(var_182_cvector, 1) = var_193_float;
		PlayGlobalSound(var_166_string, var_182_cvector);
	}
	return 16;
	
}


func_2030()
{
	return 0;
}


func_2031(var_14_bool, var_15_object)
{
	var_16_string = ""; var_17_string = "";
	var_18_bool = 0; var_19_object = Obj();
	var_15_object = var_19_object;
	func_1295(var_18_bool, var_19_object);
	var_52_bool = var_18_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj(); var_55_string = "";
	var_15_object = var_54_object;
	func_1220(var_53_bool, var_54_object, "health");
	var_56_bool = var_53_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_14_bool = 0;
		return 2;
	}
	var_57_bool = 0; var_58_object = Obj(); var_59_string = "";
	var_15_object = var_58_object;
	func_1220(var_57_bool, var_58_object, "class");
	if(var_57_bool != 0) {
		@@var_15_object:GetProperty("class", var_17_string);
		var_61_bool = 0;
		var_61_bool = 1;
		var_62_bool = 0;
		var_62_bool = 1;
		var_64_bool = var_17_string == "rat";
		if(var_64_bool != 1) {
			var_66_bool = var_17_string == "rat_big";
			if(var_66_bool != 1) {
				var_62_bool = 0;
			}
		}
		if(var_62_bool != 1) {
			var_68_bool = var_17_string == "bomber";
			if(var_68_bool != 1) {
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


