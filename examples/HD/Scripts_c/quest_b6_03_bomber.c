// @IMPORTS: SetTimer/2,KillTimer/1,GetBrightness/1,rand/2,Sleep/1,GetPosition/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,Stop/0,StopGroup0/0,FindShiftedPathTo/2,IsPlayerActor/2,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,FindPathTo/2,Trace/1,ResetAAS/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,CanSee/2,Face/1,ReportAttack/1,GetScene/1,GetGeometryLocator/4,AddActorByType/6,PlayGlobalSound/4,GetSeeThreshold/1,GetSeeFOV/1,SetSeeThreshold/1,SetSeeFOV/1,rand/1,RandVec2D/2,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,IsLoaded/1,AddItem/3,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateObjectSet/1,SendWorldWndMessage/1,CreateFloatVector/1,SendWorldWndMessage/2,PlayGlobalMusic/1,HasAnimation/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,RemoveActor/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|A:GetPFPosition|W:Can't find path to noise source|W:new hunt point|W:attack_begin|W:attack_end|W:attack|W:scripted|W:grenade.xml|A:SetScriptProperty|W:StartVelocity|W:DamageAmount|W:DamageType|W:scream|W:hunt|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:reputation|W:idle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:fresh_meat|W:rusk|W:gamma_pills|W:bomber_mark|W:class|W:health|A:in|W:disease
// @GLOBALS: 0:object:
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
// @STANDALONE_EVENT_22: op=0x7eb vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x7f3 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x813 vars=object,string
// @STANDALONE_EVENT_41: op=0x820 vars=object
// @STANDALONE_EVENT_6: op=0x88d vars=
// @PE: 0x0,0xc,0x1a,0x28,0x31,0x44,0xa3,0xc9,0x13d,0x157,0x159,0x15b,0x15d,0x164,0x172,0x17b,0x19a,0x1e1,0x1f1,0x21b,0x224,0x232,0x240,0x249,0x36c,0x371,0x376,0x382,0x388,0x38d,0x393,0x39f,0x3e5,0x40a,0x413,0x428,0x439,0x447,0x455,0x45e,0x473,0x47c,0x60b,0x672,0x688,0x6dc,0x799,0x7a7,0x7af,0x7bd,0x7c4,0x7cc,0x7d3,0x7dd,0x7eb,0x7f3,0x7fd,0x820,0x88b

task_0_event_1(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1996(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_114_object = Obj();
		var_11_object = var_114_object;
		func_2003(var_114_object);
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1981(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_61();
		var_114_object = Obj();
		var_11_object = var_114_object;
		func_1988(var_114_object);
	}
	return 0;
}


	task_0_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_61();
	var_51_object = Obj();
	var_49_object = var_51_object;
	func_2013(var_51_object);
	return 0;
	}


task_0_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_cvector, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2086(var_14_bool, var_15_object, var_16_object);
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
	func_2080();
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
		func_1756(var_15_object);
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
	func_1996(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_533();
		var_114_object = Obj();
		var_11_object = var_114_object;
		func_2003(var_114_object);
	}
	return 0;
}


	task_2_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_533();
	var_51_object = Obj();
	var_49_object = var_51_object;
	func_2013(var_51_object);
	return 0;
	}


task_2_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2086(var_14_bool, var_15_object, var_16_object);
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
		var_115_bool = var_14_bool == 0; //@nz
		if(var_115_bool != 0) {
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
		var_115_bool = var_14_bool == 0; //@nz
		if(var_115_bool != 0) {
			func_533();
			var_2_cvector = 0;
			return 0;
		}
	} else {
		var_118_bool = 0; var_119_object = Obj(); var_120_object = Obj();
		var_11_object = var_119_object;
		var_120_object = var_1_bool;
		func_391(var_118_bool, var_119_object, var_120_object);
		if(var_118_bool == 0) goto Label_522;
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
	func_2080();
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1996(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_678();
		var_113_object = Obj();
		var_11_object = var_113_object;
		func_2003(var_113_object);
	}
	return 0;
}


task_3_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_float, var_10_float, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1981(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_678();
		var_113_object = Obj();
		var_11_object = var_113_object;
		func_1988(var_113_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object, var_49_object)
	{
	func_678();
	var_50_object = Obj();
	var_49_object = var_50_object;
	func_2013(var_50_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_float, var_12_float, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_float = var_15_object;
	var_12_float = var_16_object;
	func_2086(var_14_bool, var_15_object, var_16_object);
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
	func_2086(var_14_bool, var_15_object, var_16_object);
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
	func_2086(var_14_bool, var_15_object, var_16_object);
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
	func_1996(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1055(var_10_object, var_11_object);
		var_113_object = Obj();
		var_11_object = var_113_object;
		func_2003(var_113_object);
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
	func_2118(var_15_bool, var_16_object);
	var_114_bool = var_15_bool == 0; //@nz
	if(var_114_bool != 0) {
		return 2;
	}
	IsPlayerActor(var_11_object, var_13_bool);
	var_115_bool = var_13_bool;
	if(var_115_bool != 0) {
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
	func_2013(var_50_object);
	return 0;
	}


task_6_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	func_2086(var_14_bool, var_15_object, var_16_object);
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
	func_2080();
	return 0;
}


task_7_event_1(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1996(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1130();
		var_114_object = Obj();
		var_11_object = var_114_object;
		func_2003(var_114_object);
	}
	return 0;
}


task_7_event_3(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1981(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1130();
		var_114_object = Obj();
		var_11_object = var_114_object;
		func_1988(var_114_object);
	}
	return 0;
}


	task_7_event_17(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool, var_49_object)
	{
	func_1130();
	var_51_object = Obj();
	var_49_object = var_51_object;
	func_2013(var_51_object);
	return 0;
	}


task_7_event_30(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object, var_11_object, var_12_object, var_13_bool)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_11_object = var_15_object;
	var_12_object = var_16_object;
	func_2086(var_14_bool, var_15_object, var_16_object);
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
	func_2080();
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
	func_2045(var_12_object);
	return 0;
}


event_6(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	var_11_object = Obj();
	func_1634(var_11_object);
	RemoveActor(var_11_object);
	Hold();
	return 0;
}


main(var_0_bool, var_1_bool, var_2_cvector, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_float, var_9_float, var_10_object)
{
	func_2111();
	
Label_3:
	SetTimer((int)90, (int)10);
	func_99(var_9_float, var_10_object);
	goto Label_3;
}
EMIT "Return(); Pop(0)";


func_1547(var_74_bool, var_75_string)
{
	var_74_bool = 1;
	var_76_bool = 0;
	var_76_bool = 1;
	var_77_bool = 0;
	var_77_bool = 1;
	var_78_bool = 0;
	var_78_bool = 1;
	var_79_bool = 0;
	var_79_bool = 1;
	var_80_bool = 0;
	var_80_bool = 1;
	var_81_bool = 0;
	var_81_bool = 1;
	var_82_bool = 0;
	var_82_bool = 1;
	var_83_bool = 0;
	var_83_bool = 1;
	var_84_bool = 0;
	var_84_bool = 1;
	var_85_bool = 0;
	var_85_bool = 1;
	var_86_bool = 0;
	var_86_bool = 1;
	var_88_bool = var_75_string == "woman";
	if(var_88_bool != 1) {
		var_90_bool = var_75_string == "worker";
		if(var_90_bool != 1) {
			var_86_bool = 0;
		}
	}
	if(var_86_bool != 1) {
		var_92_bool = var_75_string == "butcher";
		if(var_92_bool != 1) {
			var_85_bool = 0;
		}
	}
	if(var_85_bool != 1) {
		var_94_bool = var_75_string == "wasted_girl";
		if(var_94_bool != 1) {
			var_84_bool = 0;
		}
	}
	if(var_84_bool != 1) {
		var_96_bool = var_75_string == "boy";
		if(var_96_bool != 1) {
			var_83_bool = 0;
		}
	}
	if(var_83_bool != 1) {
		var_98_bool = var_75_string == "vaxxabitka";
		if(var_98_bool != 1) {
			var_82_bool = 0;
		}
	}
	if(var_82_bool != 1) {
		var_100_bool = var_75_string == "unosha";
		if(var_100_bool != 1) {
			var_81_bool = 0;
		}
	}
	if(var_81_bool != 1) {
		var_102_bool = var_75_string == "wasted_male";
		if(var_102_bool != 1) {
			var_80_bool = 0;
		}
	}
	if(var_80_bool != 1) {
		var_104_bool = var_75_string == "alkash";
		if(var_104_bool != 1) {
			var_79_bool = 0;
		}
	}
	if(var_79_bool != 1) {
		var_106_bool = var_75_string == "dohodyaga";
		if(var_106_bool != 1) {
			var_78_bool = 0;
		}
	}
	if(var_78_bool != 1) {
		var_108_bool = var_75_string == "vaxxabit";
		if(var_108_bool != 1) {
			var_77_bool = 0;
		}
	}
	if(var_77_bool != 1) {
		var_110_bool = var_75_string == "nudegirl";
		if(var_110_bool != 1) {
			var_76_bool = 0;
		}
	}
	if(var_76_bool != 1) {
		var_112_bool = var_75_string == "morlok";
		if(var_112_bool != 1) {
			var_74_bool = 0;
		}
	}
	return 0;
}


func_533()
{
	KillTimer((int)61);
	Stop();
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


func_2086(var_14_bool, var_15_object, var_16_object)
{
	var_17_bool = 0; var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_16_object = var_20_object;
	func_1883(var_19_bool, var_20_object);
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


func_2111()
{
	var_11_object = GlobalVars[0];
	func_1666(Obj());
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
	return 0;
}


func_2118(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_float = 0; var_18_bool = 0; var_19_string = ""; var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_string = "";
	var_24_bool = 0; var_25_object = Obj();
	var_15_object = var_25_object;
	func_1295(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_14_bool = 0;
		return 8;
	}
	var_59_object = GlobalVars[0];
	@@var_59_object:in(var_20_bool, var_15_object);
	var_60_bool = var_20_bool;
	if(var_60_bool != 0) {
		var_14_bool = 1;
		return 8;
	}
	var_61_bool = 0; var_62_object = Obj(); var_63_string = "";
	var_15_object = var_62_object;
	func_1220(var_61_bool, var_62_object, "disease");
	var_64_bool = var_61_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_14_bool = 0;
		return 8;
	}
	@@var_15_object:GetProperty("disease", var_21_float);
	IsPlayerActor(var_15_object, var_22_bool);
	var_66_bool = var_22_bool;
	if(var_66_bool != 0) {
		var_14_bool = var_21_float > (float)0.0;
		return 8;
	EMIT "GOTO 0x87c";
	}
	var_69_bool = var_21_float > (float)0.009999999776482582;
	if(var_69_bool != 0) {
		var_70_bool = 0; var_71_object = Obj(); var_72_string = "";
		var_15_object = var_71_object;
		func_1220(var_70_bool, var_71_object, "class");
		if(var_70_bool != 0) {
			@@var_15_object:GetProperty("class", var_23_string);
			var_74_bool = 0; var_75_string = "";
			var_23_string = var_75_string;
			func_1547(var_74_bool, var_75_string);
			var_74_bool = var_14_bool;
			return 8;
		}
	}
	var_14_bool = 0;
	return 8;
}


func_597()
{
	var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_bool = 0; var_51_int = 0; var_52_int = 0; var_53_int = 0; var_54_int = 0; var_55_bool = 0; var_56_float = 0; var_57_bool = 0;
	WaitForAnimEnd();
	var_58_bool = 0;
	func_1464(var_58_bool);
	var_61_bool = var_58_bool == 0; //@nz
	if(var_61_bool != 0) {
		return 14;
	}
	func_1733((int)0);
	var_62_int = var_51_int;
	var_52_int = 0;
	
Label_611:
	var_75_bool = 0;
	var_75_bool = 0;
	var_77_bool = var_52_int < (int)5;
	if(var_77_bool != 0) {
		var_78_bool = 0;
		func_1464(var_78_bool);
		if(var_78_bool != 0) {
			var_75_bool = 1;
		}
	}
	if(var_75_bool != 0) {
		irand(var_53_int, (int)3);
		var_81_bool = var_53_int == (int)0;
		if(var_81_bool != 0) {
			var_82_int = var_51_int;
			if(var_82_int == 0) goto Label_644;
			irand(var_54_int, var_51_int);
			var_84_string = ""; var_85_int = 0;
			var_54_int = var_85_int;
			func_1726(var_84_string, var_85_int);
			PlayAnimation("all", var_84_string);
			WaitForAnimEnd(var_55_bool);
			var_86_bool = var_55_bool == 0; //@nz
			if(var_86_bool != 0) {
			} else {
		} else {
				var_91_bool = var_53_int == (int)1;
				if(var_91_bool != 0) {
					rand(var_56_float, (int)4);
					var_94_int = var_56_float + (int)1;
					Sleep(var_94_int, var_57_bool);
					var_95_bool = var_57_bool == 0; //@nz
					if(var_95_bool != 0) {
						goto Label_673;
					}
					goto Label_662;
				}
				var_96_int = var_52_int;
				if(var_96_int == 0) goto Label_662;
				goto Label_673;
		}
		Label_662:
			var_87_bool = 0;
			func_676(var_87_bool);
			var_88_bool = var_87_bool == 0; //@nz
			if(var_88_bool != 0) {
				goto Label_673;
			}
			ResetAAS();
			var_52_int = var_52_int + (int)1;
			goto Label_611;

		}
	}
Label_673:
	ResetAAS();
	return 14;
	
}


func_1634(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_99(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_object = Obj(); var_28_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_23_float, (float)0.5);
	Sleep(var_23_float);
	
Label_107:
	var_30_bool = var_0_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_31_bool = var_1_bool == 0; //@nz
		if(var_31_bool != 0) {

		Label_111:
			GetPosition(var_25_cvector);
			var_32_float = 0;
			func_158(var_32_float);
			GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool);
			var_35_bool = var_26_bool;
			if(var_35_bool != 0) {
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
	var_36_object = Obj(); var_37_cvector = CVector(0,0,0);
	var_24_cvector = var_37_cvector;
	func_179(var_36_object, var_37_cvector);
	var_36_object = var_27_object;
	var_40_bool = var_27_object != 0; //@nn
	if(var_40_bool != 0) {
		RotatePath(var_27_object, var_28_bool);
		var_41_bool = var_28_bool;
		if(var_41_bool != 0) {
			var_42_bool = 0;
			func_177(var_42_bool);
			FollowPath(var_27_object, var_42_bool, var_28_bool);
			var_27_object = 0;
			var_43_bool = var_28_bool;
			if(var_43_bool != 0) {
				TaskCall(3);
				func_597();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_27_object = 0;
	goto Label_107;
	
}


func_1640(var_43_cvector, var_44_cvector)
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


func_1130()
{
	KillTimer((int)91);
	Stop();
	func_1195();
	return 0;
}


func_1650(var_47_float, var_48_float, var_49_float, var_50_float)
{
	var_51_bool = var_48_float < var_49_float;
	if(var_51_bool != 0) {
		var_49_float = var_47_float;
		return 0;
	}
	var_52_bool = var_48_float > var_50_float;
	if(var_52_bool != 0) {
		var_50_float = var_47_float;
		return 0;
	}
	var_48_float = var_47_float;
	return 0;
}


func_1661(var_89_bool, var_90_int, var_91_int)
{
	var_92_int = 0; var_93_int = 0;
	irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
	return 2;
}


func_2174(var_52_object)
{
	var_53_bool = 0; var_54_bool = 0;
	var_55_bool = var_52_object == 0; //@ne
	if(var_55_bool != 0) {
		return 2;
	}
	var_56_object = GlobalVars[0];
	@@var_56_object:in(var_54_bool, var_52_object);
	var_57_bool = var_54_bool == 0; //@nz
	if(var_57_bool != 0) {
		var_58_object = GlobalVars[0];
		@@var_58_object:add(var_52_object);
	}
	return 2;
}


func_1666(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
	return 2;
}
EMIT "Stack[-1] = 0";


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


func_1672(var_18_bool, var_19_object, var_20_float)
{
	var_21_bool = var_19_object == 0; //@nz
	if(var_21_bool != 0) {
		var_18_bool = 0;
		return 0;
	}
	var_23_bool = var_20_float > (int)0;
	if(var_23_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_54_bool = var_20_float < (int)0;
		if(var_54_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1693;
		}
		var_18_bool = 0;
		return 0;
	}
Label_1693:
	var_25_float = 0;
	var_20_float = var_25_float;
	func_1707(var_25_float);
	var_29_bool = 0; var_30_object = Obj(); var_31_string = ""; var_32_float = 0; var_33_float = 0; var_34_float = 0;
	var_19_object = var_30_object;
	var_20_float = var_32_float;
	func_1232(var_29_bool, var_30_object, "reputation", var_32_float, (float)0, (float)1);
	var_18_bool = 1;
	return 0;
	
}


func_2187()
{
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


func_158(var_32_float)
{
	var_33_float = 0; var_34_float = 0;
	GetCameraFarDistance(var_34_float);
	var_34_float = var_32_float;
	return 2;
}


func_676(var_87_bool)
{
	var_87_bool = 1;
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


func_1707(var_25_float)
{
	var_26_object = Obj(); var_27_object = Obj();
	CreateFloatVector(var_27_object);
	@@var_27_object:add(var_25_float);
	SendWorldWndMessage((int)16, var_27_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_683(var_0_bool, var_1_bool, var_59_object, var_131_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_int = 0; var_66_object = Obj(); var_67_cvector = CVector(0,0,0); var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_int = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_int = 0; var_77_object = Obj(); var_78_cvector = CVector(0,0,0); var_79_bool = 0; var_80_object = Obj(); var_81_float = 0; var_82_float = 0; var_83_int = 0;
	var_0_bool = var_59_object;
	CanSee(var_1_bool, var_59_object);
	var_84_bool = 0; var_85_object = Obj();
	var_59_object = var_85_object;
	func_1329(var_84_bool, var_85_object);
	var_98_bool = 0; var_99_object = Obj();
	var_59_object = var_99_object;
	func_1295(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		return 22;
	}
	Face(var_59_object);
	
Label_700:
	var_127_bool = 0; var_128_object = Obj();
	var_128_object = var_0_bool;
	func_1295(var_127_bool, var_128_object);
	if(var_127_bool != 0) {
		var_129_bool = var_1_bool == 0; //@nz
		if(var_129_bool != 0) {
			StopAsync();
			TaskCall(5);
			func_893(var_131_object, Obj());
			TaskReturn();
			var_0_bool = var_131_object;
			var_133_bool = var_0_bool == 0; //@ne
			if(var_133_bool != 0) {
			} else {
				CanSee(var_1_bool, var_0_bool);
				Face(var_0_bool);
		}
			var_134_object = Obj();
			var_134_object = var_0_bool;
			func_1717(var_134_object);
			ReportAttack(var_0_bool);
			GetPosition(var_73_cvector);
			@@@var_0_bool:GetPosition(var_74_cvector);
			var_75_cvector = var_74_cvector - var_73_cvector;
			var_139_int = 0; var_140_float = 0;
			var_141_int = var_75_cvector | var_75_cvector;
			var_140_float = sqrt(var_141_int);
			func_1945(var_139_int, var_140_float);
			var_139_int = var_76_int;
			var_148_int = "attack_begin" + var_76_int;
			PlayAnimation("all", var_148_int);
			WaitForAnimEnd();
			var_149_bool = var_0_bool == 0; //@ne
			if(var_149_bool != 0) {
				goto Label_873;
			}
			var_152_int = "attack_end" + var_76_int;
			PlayAnimation("all", var_152_int);
			GetScene(var_77_object);
			var_154_int = "attack" + var_76_int;
			GetGeometryLocator(var_154_int, var_79_bool, var_73_cvector, var_78_cvector);
			AddActorByType(var_80_object, "scripted", var_77_object, var_73_cvector, CVector(0.0, 0.0, 1.0), "grenade.xml");
			var_159_object = Obj();
			func_1634(var_159_object);
			@@var_80_object:SetScriptProperty("Owner", var_159_object);
			var_163_bool = var_76_int == (int)1;
			if(var_163_bool != 0) {
				@@var_80_object:SetScriptProperty("StartVelocity", CVector(0.0, -500.0, 0.0));
			} else {
				var_194_float = GetByIndex(var_78_cvector, 1);
				var_195_float = GetByIndex(var_78_cvector, 1);
				var_196_float = var_194_float * var_195_float;
				var_197_int = (int)1 - var_196_float;
				var_198_float = GetByIndex(var_75_cvector, 0);
				var_199_float = GetByIndex(var_75_cvector, 0);
				var_200_float = var_198_float * var_199_float;
				var_201_float = GetByIndex(var_75_cvector, 2);
				var_202_float = GetByIndex(var_75_cvector, 2);
				var_203_float = var_201_float * var_202_float;
				var_204_int = var_200_float + var_203_float;
				var_205_float = var_197_int / var_204_int;
				var_81_float = sqrt(var_205_float);
				var_206_float = GetByIndex(var_78_cvector, 0);
				var_207_float = GetByIndex(var_75_cvector, 0);
				var_206_float = var_207_float * var_81_float;
				SetByIndex(var_78_cvector, 0) = var_206_float;
				var_208_float = GetByIndex(var_78_cvector, 2);
				var_209_float = GetByIndex(var_75_cvector, 2);
				var_208_float = var_209_float * var_81_float;
				SetByIndex(var_78_cvector, 2) = var_208_float;
				@@@var_0_bool:GetPosition(var_74_cvector);
				var_210_float = 0; var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0);
				var_73_cvector = var_211_cvector;
				var_74_cvector = var_212_cvector;
				var_78_cvector = var_213_cvector;
				func_1901(var_210_float, var_211_cvector, var_212_cvector, var_213_cvector);
				var_210_float = var_82_float;
				var_258_bool = var_82_float < (int)0;
				if(var_258_bool != 0) {
					var_259_float = 0; var_260_int = 0;
					var_76_int = var_260_int;
					func_1959(var_259_float, var_260_int);
					var_259_float = var_82_float;
				} else {
					var_265_float = 0; var_266_int = 0; var_267_float = 0;
					var_76_int = var_266_int;
					var_82_float = var_267_float;
					func_1967(var_266_int, var_267_float);
					var_265_float = var_82_float;
				}
				var_264_float = var_78_cvector * var_82_float;
				@@var_80_object:SetScriptProperty("StartVelocity", var_264_float);
			}
			@@var_80_object:SetScriptProperty("DamageAmount", (float)0.800000011920929);
			@@var_80_object:SetScriptProperty("DamageType", (int)2);
			WaitForAnimEnd();
			var_171_bool = var_76_int == (int)1;
			if(var_171_bool != 0) {
				irand(var_83_int, (int)2);
				var_175_int = var_83_int + (int)1;
				var_176_int = "scream" + var_175_int;
				PlayGlobalSound(var_176_int, CVector(0.0, 150.0, 0.0), (int)1, (int)500);
				var_180_object = Obj();
				var_180_object = var_0_bool;
				func_1469(var_180_object);
				var_190_int = var_83_int + (int)1;
				var_191_int = "scream" + var_190_int;
				PlayAnimation("all", var_191_int);
				WaitForAnimEnd();
				UnlookAsync("head");
			}
			var_80_object = 0;
			var_77_object = 0;
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


func_177(var_42_bool)
{
	var_42_bool = 0;
	return 0;
}


func_179(var_36_object, var_37_cvector)
{
	var_38_object = Obj(); var_39_object = Obj();
	FindShiftedPathTo(var_39_object, var_37_cvector);
	var_39_object = var_36_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1717(var_134_object)
{
	var_135_bool = 0; var_136_bool = 0;
	IsPlayerActor(var_134_object, var_136_bool);
	var_137_bool = var_136_bool;
	if(var_137_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1207(var_39_float, var_40_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	GetPosition(var_44_cvector);
	@@var_40_object:GetPosition(var_45_cvector);
	var_46_cvector = var_45_cvector - var_44_cvector;
	var_39_float = var_46_cvector | var_46_cvector;
	return 6;
}


func_185(var_56_object)
{
	var_57_bool = 0; var_58_bool = 0;
	IsPlayerActor(var_56_object, var_58_bool);
	var_59_bool = var_58_bool;
	if(var_59_bool != 0) {
		func_1841();
	}
	func_1817();
	var_136_object = Obj();
	var_56_object = var_136_object;
	func_201(var_136_object);
	return 2;
}


func_1726(var_68_string, var_69_int)
{
	var_70_string = ""; var_71_string = "";
	var_72_int = var_69_int;
	if(var_72_int != 0) {
		"idle" = "idle" + var_69_int;
	}
	var_71_string = var_68_string;
	return 2;
}


func_1215(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	IsPlayerActor(var_15_object, var_17_bool);
	var_17_bool = var_14_bool;
	return 2;
}


func_1220(var_37_bool, var_38_object, var_39_string)
{
	var_40_bool = 0; var_41_bool = 0;
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", (int)2);
	var_45_bool = var_44_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_37_bool = 0;
		return 2;
	}
	@@var_38_object:HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
	return 2;
}


func_1733(var_62_int)
{
	var_63_int = 0; var_64_bool = 0; var_65_int = 0; var_66_bool = 0;
	var_65_int = 0;
	
Label_1735:
	var_68_string = ""; var_69_int = 0;
	var_65_int = var_69_int;
	func_1726(var_68_string, var_69_int);
	HasAnimation(var_66_bool, "all", var_68_string);
	var_73_bool = var_66_bool == 0; //@nz
	if(var_73_bool != 0) {
	} else {
		var_65_int = var_65_int + (int)1;
		goto Label_1735;
	}
	var_65_int = var_62_int;
	return 4;
	
}


func_201(var_136_object)
{
	EventDisable(0);
	var_137_object = Obj();
	var_136_object = var_137_object;
	func_226(var_137_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_212:
	Hold();
	goto Label_212;
}
EMIT "Return(); Pop(0)";


func_1232(var_29_bool, var_30_object, var_31_string, var_32_float, var_33_float, var_34_float)
{
	var_35_float = 0; var_36_float = 0;
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	var_30_object = var_38_object;
	var_31_string = var_39_string;
	func_1220(var_37_bool, var_38_object, var_39_string);
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	@@var_30_object:GetProperty(var_31_string, var_36_float);
	var_47_float = 0; var_48_float = 0; var_49_float = 0; var_50_float = 0;
	var_48_float = var_36_float + var_32_float;
	var_33_float = var_49_float;
	var_34_float = var_50_float;
	func_1650(var_47_float, var_48_float, var_49_float, var_50_float);
	@@var_30_object:SetProperty(var_31_string, var_47_float);
	var_29_bool = 1;
	return 2;
}


func_1750(var_116_int)
{
	var_117_int = 0; var_118_int = 0;
	GetVariable("branch", var_118_int);
	var_118_int = var_116_int;
	return 2;
}


func_1756(var_15_object)
{
	var_16_int = 0;
	func_1750(var_16_int);
	var_21_bool = var_16_int == (int)1;
	if(var_21_bool != 0) {
		WorkWithCorpse(var_15_object);
	} else {
		Barter(var_15_object);
	}
	return 0;
	
}


func_226(var_137_object)
{
	var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_string = ""; var_143_object = Obj(); var_144_bool = 0; var_145_bool = 0; var_146_float = 0; var_147_cvector = CVector(0,0,0); var_148_cvector = CVector(0,0,0); var_149_cvector = CVector(0,0,0); var_150_cvector = CVector(0,0,0); var_151_cvector = CVector(0,0,0); var_152_string = ""; var_153_object = Obj(); var_154_bool = 0; var_155_bool = 0; var_156_float = 0; var_157_cvector = CVector(0,0,0);
	var_158_bool = var_137_object == 0; //@ne
	if(var_158_bool != 0) {
		var_159_string = "";
		func_317("fdie");
	} else {
		@@var_137_object:GetPosition(var_148_cvector);
		GetPosition(var_149_cvector);
		GetDirection(var_150_cvector);
		var_151_cvector = var_149_cvector - var_148_cvector;
		var_191_float = GetByIndex(var_151_cvector, 0);
		var_192_float = GetByIndex(var_150_cvector, 0);
		var_193_float = var_191_float * var_192_float;
		var_194_float = GetByIndex(var_151_cvector, 2);
		var_195_float = GetByIndex(var_150_cvector, 2);
		var_196_float = var_194_float * var_195_float;
		var_197_int = var_193_float + var_196_float;
		var_199_bool = var_197_int >= (int)0;
		if(var_199_bool != 0) {
			var_152_string = "fdie";
		} else {
				var_152_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_137_object = var_153_object;
		var_202_bool = IsFuncExist(var_137_object, "GetScriptProperty", (int)2);
		if(var_202_bool != 0) {
			@@var_137_object:HasScriptProperty(var_154_bool, "Owner");
			var_204_bool = var_154_bool;
			if(var_204_bool != 0) {
				@@var_137_object:GetScriptProperty(var_153_object, "Owner");
				var_206_bool = var_153_object == 0; //@ne
				if(var_206_bool != 0) {
					var_137_object = var_153_object;
				}
			}
		}
		var_209_bool = IsFuncExist(var_153_object, "@GetEyesHeight", (int)1);
		if(var_209_bool != 0) {
			@@var_153_object:GetEyesHeight(var_156_float);
			var_157_cvector = CVector(0.0, 0.0, 0.0);
			var_210_float = GetByIndex(var_157_cvector, 1);
			var_156_float = var_210_float;
			SetByIndex(var_157_cvector, 1) = var_210_float;
			LookAsync(var_137_object, "head", var_157_cvector);
			var_155_bool = 1;
		} else {
			var_155_bool = 0;

		}
		var_212_string = "";
		var_152_string = var_212_string;
		func_1506(var_212_string);
		PlayAnimation("all", var_152_string);
		WaitForAnimEnd();
		var_214_bool = var_155_bool;
		if(var_214_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_152_string);
		RemoveEnvelope();
		var_153_object = 0;
	}
	return 20;
	
}


func_1254(var_113_bool, var_114_object)
{
	var_115_bool = 0; var_116_bool = 0;
	@@var_114_object:IsDead(var_116_bool);
	var_116_bool = var_113_bool;
	return 2;
}


func_1769(var_65_int, var_66_int)
{
	var_67_int = 0; var_68_bool = 0; var_69_int = 0; var_70_bool = 0;
	var_71_bool = var_65_int > var_66_int;
	if(var_71_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_69_int = 0;
	var_73_bool = var_65_int != var_66_int;
	if(var_73_bool != 0) {
		var_74_int = var_66_int - var_65_int;
		irand(var_69_int, var_74_int);
	} else {
		var_83_bool = var_65_int == (int)0;
		if(var_83_bool == 0) goto Label_1787;
		return 4;
	}
Label_1787:
	var_69_int = var_69_int + var_65_int;
	var_76_bool = var_69_int == (int)0;
	if(var_76_bool != 0) {
		return 4;
	}
	var_77_int = 0; var_78_string = "";
	func_1878(var_77_int, "Money");
	AddItem(var_70_bool, var_77_int, (int)0, var_69_int);
	return 4;
	
}


func_1259(var_102_bool, var_103_object)
{
	var_104_object = Obj(); var_105_object = Obj(); var_106_object = Obj(); var_107_object = Obj();
	var_108_bool = var_103_object == 0; //@ne
	if(var_108_bool != 0) {
		var_102_bool = 0;
		return 4;
	}
	var_109_bool = 0;
	var_109_bool = 0;
	var_112_bool = IsFuncExist(var_103_object, "IsDead", (int)1);
	if(var_112_bool != 0) {
		var_113_bool = 0; var_114_object = Obj();
		var_103_object = var_114_object;
		func_1254(var_113_bool, var_114_object);
		if(var_113_bool != 0) {
			var_109_bool = 1;
		}
	}
	if(var_109_bool != 0) {
		var_102_bool = 0;
		return 4;
	}
	GetScene(var_106_object);
	var_117_bool = var_106_object == 0; //@ne
	if(var_117_bool != 0) {
		var_102_bool = 0;
		return 4;
	}
	@@var_103_object:GetScene(var_107_object);
	var_118_bool = var_106_object != var_107_object;
	if(var_118_bool != 0) {
		var_102_bool = 0;
		return 4;
	}
	var_102_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1800(var_122_string)
{
	var_123_object = Obj(); var_124_int = 0; var_125_bool = 0; var_126_object = Obj(); var_127_int = 0; var_128_bool = 0;
	CreateInvItem(var_126_object);
	@@var_126_object:SetItemName(var_122_string);
	@@var_126_object:SetProperty("Organ", (int)1);
	@@var_126_object:GetItemID(var_127_int);
	AddItem(var_128_bool, var_126_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1295(var_98_bool, var_99_object)
{
	var_100_int = 0; var_101_int = 0;
	var_102_bool = 0; var_103_object = Obj();
	var_99_object = var_103_object;
	func_1259(var_102_bool, var_103_object);
	var_119_bool = var_102_bool == 0; //@nz
	if(var_119_bool != 0) {
		var_98_bool = 0;
		return 2;
	}
	var_120_bool = 0; var_121_object = Obj(); var_122_string = "";
	var_99_object = var_121_object;
	func_1220(var_120_bool, var_121_object, "noaccess");
	var_123_bool = var_120_bool == 0; //@nz
	if(var_123_bool != 0) {
		var_98_bool = 1;
		return 2;
	}
	@@var_99_object:GetProperty("noaccess", var_101_int);
	var_98_bool = var_101_int == (int)0;
	return 2;
}


func_1817()
{
	var_116_int = 0;
	func_1750(var_116_int);
	var_121_bool = var_116_int != (int)1;
	if(var_121_bool != 0) {
		return 0;
	}
	var_122_string = "";
	func_1800("liver");
	var_133_string = "";
	func_1800("kidney");
	var_134_string = "";
	func_1800("heart");
	var_135_string = "";
	func_1800("blood");
	return 0;
}


func_1319(var_88_bool, var_89_cvector)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_bool = 0;
	GetPosition(var_93_cvector);
	var_94_cvector = var_89_cvector - var_93_cvector;
	var_96_float = GetByIndex(var_94_cvector, 0);
	var_97_float = GetByIndex(var_94_cvector, 2);
	Rotate(var_96_float, var_97_float, var_95_bool);
	var_95_bool = var_88_bool;
	return 6;
}


func_1841()
{
	var_60_int = 0; var_61_bool = 0; var_62_int = 0; var_63_bool = 0;
	ClearSubContainer((int)0);
	var_65_int = 0; var_66_int = 0;
	func_1769((int)600, (int)1500);
	var_84_string = ""; var_85_int = 0; var_86_int = 0;
	func_1480("fresh_meat", (int)1, (int)6);
	var_95_string = ""; var_96_int = 0; var_97_int = 0; var_98_int = 0;
	func_1491("rusk", (int)1, (int)6, (int)2);
	var_109_string = ""; var_110_int = 0; var_111_int = 0;
	func_1480("gamma_pills", (int)1, (int)3);
	var_112_int = 0; var_113_string = "";
	func_1878(var_112_int, "bomber_mark");
	AddItem(var_63_bool, var_112_int, (int)0, (int)1);
	return 4;
}


func_1329(var_84_bool, var_85_object)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0);
	@@var_85_object:GetPosition(var_87_cvector);
	var_88_bool = 0; var_89_cvector = CVector(0,0,0);
	var_87_cvector = var_89_cvector;
	func_1319(var_88_bool, var_89_cvector);
	var_88_bool = var_84_bool;
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


func_317(var_159_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_160_string = "";
	var_159_string = var_160_string;
	func_1506(var_160_string);
	PlayAnimation("all", var_159_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_159_string);
	RemoveEnvelope();
	return 0;
}


func_1878(var_77_int, var_78_string)
{
	var_79_int = 0; var_80_int = 0;
	GetInvItemByName(var_80_int, var_78_string);
	var_80_int = var_77_int;
	return 2;
}


func_1883(var_19_bool, var_20_object)
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


func_349(var_115_object)
{
	var_119_object = Obj(); var_120_bool = 0;
	var_115_object = var_119_object;
	func_417(var_116_cvector, var_117_object, var_118_object, var_115_object, var_119_object, (bool)0);
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
		func_1640(var_43_cvector, var_44_cvector);
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


func_1901(var_210_float, var_211_cvector, var_212_cvector, var_213_cvector)
{
	var_214_float = 0; var_215_float = 0; var_216_float = 0; var_217_float = 0; var_218_float = 0; var_219_float = 0; var_220_float = 0; var_221_float = 0; var_222_float = 0; var_223_float = 0;
	var_224_float = GetByIndex(var_213_cvector, 0);
	var_225_float = GetByIndex(var_213_cvector, 0);
	var_226_float = var_224_float * var_225_float;
	var_227_float = GetByIndex(var_213_cvector, 2);
	var_228_float = GetByIndex(var_213_cvector, 2);
	var_229_float = var_227_float * var_228_float;
	var_230_int = var_226_float + var_229_float;
	var_219_float = sqrt(var_230_int);
	var_231_float = GetByIndex(var_213_cvector, 1);
	var_220_float = var_231_float / var_219_float;
	var_232_float = GetByIndex(var_211_cvector, 0);
	var_233_float = GetByIndex(var_212_cvector, 0);
	var_234_int = var_232_float - var_233_float;
	var_235_float = GetByIndex(var_211_cvector, 0);
	var_236_float = GetByIndex(var_212_cvector, 0);
	var_237_int = var_235_float - var_236_float;
	var_238_float = var_234_int * var_237_int;
	var_239_float = GetByIndex(var_211_cvector, 2);
	var_240_float = GetByIndex(var_212_cvector, 2);
	var_241_int = var_239_float - var_240_float;
	var_242_float = GetByIndex(var_211_cvector, 2);
	var_243_float = GetByIndex(var_212_cvector, 2);
	var_244_int = var_242_float - var_243_float;
	var_245_float = var_241_int * var_244_int;
	var_246_int = var_238_float + var_245_float;
	var_221_float = sqrt(var_246_int);
	var_248_float = var_221_float * var_220_float;
	var_249_float = GetByIndex(var_212_cvector, 1);
	var_250_float = GetByIndex(var_211_cvector, 1);
	var_251_int = var_249_float - var_250_float;
	var_252_int = var_248_float - var_251_int;
	var_222_float = (float)500.0 / var_252_int;
	var_254_bool = var_222_float < (int)0;
	if(var_254_bool != 0) {
		var_210_float = -1;
		return 10;
	}
	var_255_float = var_221_float / var_219_float;
	var_256_float = sqrt(var_222_float);
	var_223_float = var_255_float * var_256_float;
	var_223_float = var_210_float;
	return 10;
}


func_893(var_0_bool, var_130_object)
{
	Sleep((int)5);
	var_130_object = var_0_bool;
	return 0;
}


func_391(var_118_bool, var_119_object, var_120_object)
{
	var_121_bool = 0; var_122_bool = 0;
	IsPlayerActor(var_119_object, var_122_bool);
	var_123_bool = var_122_bool;
	if(var_123_bool != 0) {
		var_118_bool = 0;
		return 2;
	}
	var_124_bool = 0; var_125_object = Obj();
	var_120_object = var_125_object;
	func_2118(var_124_bool, var_125_object);
	var_126_bool = var_124_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_118_bool = 0;
		return 2;
	}
	IsPlayerActor(var_120_object, var_122_bool);
	var_122_bool = var_118_bool;
	return 2;
}


func_1945(var_139_int, var_140_float)
{
	var_143_bool = var_140_float < (int)200;
	if(var_143_bool != 0) {
		var_139_int = 1;
		return 0;
	EMIT "GOTO 0x7a5";
	}
	var_145_bool = var_140_float < (int)1000;
	if(var_145_bool != 0) {
		var_139_int = 2;
		return 0;
	}
	var_139_int = 3;
	return 0;
}


func_410(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_2118(var_16_bool, var_17_object);
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
		func_2118(var_53_bool, var_54_object);
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


func_417(var_0_bool, var_1_bool, var_2_cvector, var_119_object, var_120_bool, var_142_float)
{
	var_121_bool = 0; var_122_bool = 0;
	var_123_bool = 0; var_124_object = Obj();
	var_124_object = var_1_bool;
	func_1295(var_123_bool, var_124_object);
	var_125_bool = var_123_bool == 0; //@nz
	if(var_125_bool != 0) {
		return 2;
	}
	var_1_bool = var_119_object;
	var_126_object = Obj();
	var_126_object = var_1_bool;
	func_1717(var_126_object);
	@@@var_1_bool:GetPFPosition(var_0_bool);
	SetTimer((int)61, (float)0.5);
	
Label_436:
	FindPathTo(var_2_cvector, var_0_bool);
	var_133_bool = var_2_cvector == 0; //@ne
	if(var_133_bool != 0) {
		Trace("Can't find path to noise source");
	} else {
		FollowPath(var_2_cvector, var_120_bool, var_122_bool);
		var_136_bool = var_122_bool == 0; //@nz
		if(var_136_bool != 0) {
			var_137_bool = var_2_cvector == 0; //@ne
			if(var_137_bool != 0) {
				goto Label_477;
			}
		} else {
			KillTimer((int)61);
			var_140_object = Obj(); var_141_object = Obj();
			var_141_object = var_1_bool;
			TaskCall(6);
			func_943(var_142_float, var_143_float, var_144_object, var_140_object, var_141_object);
			TaskReturn();
			var_1_bool = var_142_float;
			SetTimer((int)61, (float)0.5);
			var_166_bool = 0; var_167_object = Obj();
			var_167_object = var_1_bool;
			func_1295(var_166_bool, var_167_object);
			var_168_bool = var_166_bool == 0; //@nz
			if(var_168_bool != 0) {
				goto Label_477;
			}
			@@@var_1_bool:GetPFPosition(var_0_bool);
		}
		var_138_bool = var_2_cvector != 0; //@nn
		if(var_138_bool == 1) goto Label_436;
	}
Label_477:
	KillTimer((int)61);
	return 2;
	
}


func_1959(var_259_float, var_260_int)
{
	var_262_bool = var_260_int == (int)1;
	if(var_262_bool != 0) {
		var_259_float = 30;
		return 0;
	}
	var_259_float = 700;
	return 0;
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


func_943(var_0_bool, var_1_bool, var_2_cvector, var_140_object, var_141_object)
{
	var_145_bool = 0; var_146_int = 0; var_147_bool = 0; var_148_int = 0;
	GetSeeThreshold(var_0_bool);
	GetSeeFOV(var_1_bool);
	var_150_float = var_0_bool / (float)1.5;
	SetSeeThreshold(var_150_float);
	var_2_cvector = var_141_object;
	var_151_object = Obj();
	var_151_object = var_2_cvector;
	func_1717(var_151_object);
	var_148_int = 0;
	
Label_958:
	var_153_bool = var_148_int < (int)3;
	if(var_153_bool != 0) {
		var_155_float = var_1_bool * (float)1.7999999523162842;
		SetSeeFOV(var_155_float);
		PlayAnimation("all", "hunt");
		WaitForAnimEnd(var_147_bool);
		SetSeeFOV(var_1_bool);
		var_158_bool = var_147_bool == 0; //@nz
		if(var_158_bool != 0) {
		} else {
			Sleep((int)2, var_147_bool);
			var_161_bool = var_147_bool == 0; //@nz
			if(var_161_bool != 0) {
				goto Label_989;
			}
			var_162_object = Obj();
			var_162_object = var_2_cvector;
			func_1717(var_162_object);
			var_148_int = var_148_int + (int)1;
			goto Label_958;
		}
	}
Label_989:
	func_1055(var_147_bool, var_148_int);
	var_159_bool = var_147_bool;
	if(var_159_bool != 0) {
		var_2_cvector = 0;
	}
	var_140_object = var_2_cvector;
	return 4;
	
}


func_1967(var_265_float, var_267_float)
{
	var_269_bool = var_267_float < (int)10;
	if(var_269_bool != 0) {
		var_265_float = 10;
		return 0;
	EMIT "GOTO 0x7bb";
	}
	var_271_bool = var_267_float > (int)1500;
	if(var_271_bool != 0) {
		var_265_float = 1500;
		return 0;
	}
	var_267_float = var_265_float;
	return 0;
}


func_1464(var_58_bool)
{
	var_59_bool = 0; var_60_bool = 0;
	IsLoaded(var_60_bool);
	var_60_bool = var_58_bool;
	return 2;
}


func_1981(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2118(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_1469(var_180_object)
{
	var_181_float = 0; var_182_cvector = CVector(0,0,0); var_183_float = 0; var_184_cvector = CVector(0,0,0);
	@@var_180_object:GetEyesHeight(var_183_float);
	var_184_cvector = CVector(0.0, 0.0, 0.0);
	var_185_float = GetByIndex(var_184_cvector, 1);
	var_183_float = var_185_float;
	SetByIndex(var_184_cvector, 1) = var_185_float;
	LookAsync(var_180_object, "head", var_184_cvector);
	return 4;
}


func_1988(var_114_object)
{
	var_115_object = Obj();
	var_114_object = var_115_object;
	TaskCall(2);
	func_349(var_115_object);
	TaskReturn();
	return 0;
}


func_1480(var_84_string, var_85_int, var_86_int)
{
	var_87_bool = 0; var_88_bool = 0;
	var_89_bool = 0; var_90_int = 0; var_91_int = 0;
	var_85_int = var_90_int;
	var_86_int = var_91_int;
	func_1661(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0) {
		AddItem(var_88_bool, var_84_string, (int)0);
	}
	return 2;
}


func_1996(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj();
	var_13_object = var_15_object;
	func_2118(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
	return 0;
}


func_2003(var_114_object)
{
	var_115_object = Obj();
	var_114_object = var_115_object;
	TaskCall(4);
	func_683(var_114_object, var_116_object, var_117_bool, var_115_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1491(var_95_string, var_96_int, var_97_int, var_98_int)
{
	var_99_int = 0; var_100_bool = 0; var_101_int = 0; var_102_bool = 0;
	var_103_bool = 0; var_104_int = 0; var_105_int = 0;
	var_96_int = var_104_int;
	var_97_int = var_105_int;
	func_1661(var_103_bool, var_104_int, var_105_int);
	if(var_103_bool != 0) {
		irand(var_101_int, var_98_int);
		var_108_int = var_101_int + (int)1;
		AddItem(var_102_bool, var_95_string, (int)0, var_108_int);
	}
	return 4;
}


func_2013(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	func_2174(var_52_object);
	var_59_object = Obj();
	var_51_object = var_59_object;
	TaskCall(4);
	func_683(var_51_object, var_60_object, var_61_bool, var_59_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1506(var_160_string)
{
	var_161_bool = 0; var_162_int = 0; var_163_bool = 0; var_164_int = 0; var_165_bool = 0; var_166_float = 0; var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_bool = 0; var_170_int = 0; var_171_bool = 0; var_172_int = 0; var_173_bool = 0; var_174_float = 0; var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0);
	IsExisting3DSound(var_169_bool, var_160_string);
	var_177_bool = var_169_bool == 0; //@nz
	if(var_177_bool != 0) {
		var_170_int = 0;

	Label_1512:
		var_179_int = var_170_int + (int)1;
		var_180_int = var_160_string + var_179_int;
		IsExisting3DSound(var_171_bool, var_180_int);
		var_181_bool = var_171_bool == 0; //@nz
		if(var_181_bool != 0) {
		} else {
			var_170_int = var_170_int + (int)1;
			goto Label_1512;
		}
		var_182_bool = var_170_int == 0; //@nz
		if(var_182_bool != 0) {
			return 16;
		}
		irand(var_172_int, var_170_int);
		var_184_int = var_172_int + (int)1;
		var_160_string = var_160_string + var_184_int;
	}
	Is3DSoundLoaded(var_173_bool, var_160_string);
	var_185_bool = var_173_bool;
	if(var_185_bool != 0) {
		GetEyesHeight(var_174_float);
		GetDirection(var_175_cvector);
		var_176_cvector = var_175_cvector * (int)50;
		var_187_float = GetByIndex(var_176_cvector, 1);
		var_187_float = var_187_float + var_174_float;
		SetByIndex(var_176_cvector, 1) = var_187_float;
		PlayGlobalSound(var_160_string, var_176_cvector);
	}
	return 16;
	
}


func_2045(var_12_object)
{
	var_12_object = Obj();
	func_2187();
	var_14_bool = 0; var_15_object = Obj();
	var_12_object = var_15_object;
	func_1215(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		var_18_bool = 0; var_19_object = Obj(); var_20_float = 0;
		var_12_object = var_19_object;
		func_1672(var_18_bool, var_19_object, (float)0.05000000074505806);
	}
	var_56_object = Obj();
	var_12_object = var_56_object;
	TaskCall(1);
	func_185(var_56_object);
	TaskReturn();
	return 0;
}


