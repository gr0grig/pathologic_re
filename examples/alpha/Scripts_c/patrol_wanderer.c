// @IMPORTS: GetSeeThreshold/1,GetSeeFOV/1,SetSeeThreshold/1,SetSeeFOV/1,PlayAnimation/2,WaitForAnimEnd/1,Face/1,SetTimer/2,irand/2,Sleep/2,StopAsync/0,KillTimer/1,Stop/0,StopGroup0/0,rand/2,Sleep/1,GetPosition/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,WaitForAnimEnd/0,StopAnimation/0,FindPathTo/2,FollowPath/5,HasAnimation/3,IsExisting3DSound/2,IsPlayerActor/2,GetPFPosition/1,rand/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,CreateObjectSet/1,GetGameTime/1,Trace/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,ResetAAS/0,GetProperty/2,SignalDeath/1,CanSee/2,ReportReputationChange/3
// @STRINGS: W:all|W:hunt|A:GetPosition|A:GetPFPosition|W:walk|W:run|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:reputation|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:bottle_water|W:rusk|W:bandage|W:tourniquet|W:packet|W:hook|W:watch|W:alpha_pills|W:beta_pills|W:gamma_pills|W:revolver_ammo|W:rifle_ammo|A:in|A:add
// @GLOBALS: 0:object:
// @RUN_OP: 0xa7
// @RUN_TASK: 1
// @TASK_0: vars=object,float,float params=1
// @EVENT_1: op=0xe vars=object
// @EVENT_17: op=0x1c vars=object
// @EVENT_7: op=0x30 vars=int
// @EVENT_30: op=0x39 vars=object,object
// @EVENT_41: op=0x4d vars=object
// @EVENT_3: op=0x80 vars=object
// @EVENT_4: op=0x93 vars=object
// @TASK_1: vars=bool,bool params=0
// @EVENT_1: op=0xaf vars=object
// @EVENT_3: op=0xbd vars=object
// @EVENT_17: op=0xcb vars=object
// @EVENT_30: op=0xdf vars=object,object
// @EVENT_10: op=0x124 vars=object
// @EVENT_28: op=0x128 vars=
// @EVENT_41: op=0x132 vars=object
// @TASK_2: vars= params=0
// @EVENT_1: op=0x13d vars=object
// @EVENT_3: op=0x14b vars=object
// @EVENT_17: op=0x159 vars=object
// @EVENT_30: op=0x16d vars=object,object
// @TASK_3: vars=bool,object params=6
// @EVENT_17: op=0x1c3 vars=object
// @EVENT_30: op=0x1c9 vars=object,object
// @EVENT_7: op=0x236 vars=int
// @EVENT_10: op=0x248 vars=object
// @EVENT_41: op=0x253 vars=object
// @TASK_4: vars=object,int,int,bool,int params=2
// @EVENT_17: op=0x275 vars=object
// @EVENT_30: op=0x27b vars=object,object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x491 vars=object
// @EVENT_22: op=0x506 vars=object,int,float,float
// @EVENT_16: op=0x508 vars=object,string
// @EVENT_41: op=0x50a vars=object
// @STANDALONE_EVENT_22: op=0x7a7 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x7af vars=object,string
// @STANDALONE_EVENT_41: op=0x7bc vars=object
// @PE: 0x0,0xe,0x1c,0x30,0x39,0x4d,0x80,0x93,0xaf,0xbd,0xcb,0xdf,0x124,0x132,0x13d,0x14b,0x159,0x16d,0x1c3,0x1c9,0x236,0x248,0x253,0x25c,0x267,0x26f,0x272,0x275,0x27b,0x467,0x482,0x4f0,0x506,0x508,0x50a,0x50c,0x612,0x619,0x769,0x771,0x778,0x790,0x79f,0x7a7,0x7bc

task_0_event_1(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_int = var_14_object;
	func_1905(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_69(var_11_bool, var_12_int);
		var_65_object = Obj();
		var_12_int = var_65_object;
		func_1912(var_65_object);
	}
	return 0;
}


	task_0_event_17(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj();
	var_47_object = var_49_object;
	func_1447(var_48_bool, var_49_object);
	var_76_bool = var_48_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_object = Obj();
		var_47_object = var_77_object;
		func_1923(var_77_object);
		return 0;
	}
	func_69(var_13_int, var_47_object);
	var_85_object = Obj();
	var_47_object = var_85_object;
	func_1936(var_85_object);
	return 0;
	}


task_0_event_7(var_0_object, var_1_float, var_2_float, var_3_int, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int != (int)100;
	if(var_14_bool != 0) {
		return 0;
	}
	func_69(var_11_bool, var_12_int);
	return 0;
}


task_0_event_30(var_0_object, var_1_float, var_2_float, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_12_bool = var_15_object;
	var_13_int = var_16_object;
	func_1986(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_12_bool = Obj();
		func_28();
	}
	return 0;
}


task_0_event_41(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_69(var_11_bool, var_12_int);
	var_12_int = Obj();
	func_1980();
	return 0;
}


task_0_event_3(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = var_12_int == var_0_object;
	if(var_14_bool != 0) {
		var_15_bool = 0; var_16_object = Obj();
		var_12_int = var_16_object;
		func_1884(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		Face(var_0_object);
		SetTimer((int)100, (int)15);
	}
	return 0;
}


task_0_event_4(var_0_object, var_1_float, var_2_float, var_3_object, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = var_12_int == var_0_object;
	if(var_13_bool != 0) {
		StopAsync();
		KillTimer((int)100);
	}
	return 0;
}


task_1_event_1(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_int = var_14_object;
	func_1905(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_299(var_11_bool, var_12_int);
		var_64_object = Obj();
		var_12_int = var_64_object;
		func_1912(var_64_object);
	}
	return 0;
}


task_1_event_3(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_int = var_14_object;
	func_1884(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_299(var_11_bool, var_12_int);
		var_67_object = Obj();
		var_12_int = var_67_object;
		func_1897(var_67_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj();
	var_47_object = var_49_object;
	func_1447(var_48_bool, var_49_object);
	var_76_bool = var_48_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_object = Obj();
		var_47_object = var_77_object;
		func_1923(var_77_object);
		return 0;
	}
	func_299(var_13_int, var_47_object);
	var_84_object = Obj();
	var_47_object = var_84_object;
	func_1936(var_84_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_12_bool = var_15_object;
	var_13_int = var_16_object;
	func_1986(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_12_bool = Obj();
		func_203();
	}
	return 0;
}


task_1_event_10(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	RequestClearPath(var_12_int);
	return 0;
}


task_1_event_28(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int)
{
	Stop();
	return 0;
}


task_1_event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_299(var_11_bool, var_12_int);
	var_12_int = Obj();
	func_1980();
	return 0;
}


task_2_event_1(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_int = var_14_object;
	func_1905(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_446();
		var_64_object = Obj();
		var_12_int = var_64_object;
		func_1912(var_64_object);
	}
	return 0;
}


task_2_event_3(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_int = var_14_object;
	func_1884(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		func_446();
		var_67_object = Obj();
		var_12_int = var_67_object;
		func_1897(var_67_object);
	}
	return 0;
}


	task_2_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_47_object)
	{
	var_48_bool = 0; var_49_object = Obj();
	var_47_object = var_49_object;
	func_1447(var_48_bool, var_49_object);
	var_76_bool = var_48_bool == 0; //@nz
	if(var_76_bool != 0) {
		var_77_object = Obj();
		var_47_object = var_77_object;
		func_1923(var_77_object);
		return 0;
	}
	func_446();
	var_84_object = Obj();
	var_47_object = var_84_object;
	func_1936(var_84_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_12_bool = var_15_object;
	var_13_int = var_16_object;
	func_1986(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_12_bool = Obj();
		func_345();
	}
	return 0;
}


task_3_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_13_object = Obj();
	var_12_int = var_13_object;
	func_1923(var_13_object);
	return 0;
}


task_3_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_12_bool = var_15_object;
	var_13_int = var_16_object;
	func_1986(var_14_bool, var_15_object, var_16_object);
	return 0;
}


task_3_event_7(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_int, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	var_14_bool = var_12_int != (int)0;
	if(var_14_bool != 0) {
		return 0;
	}
	var_15_bool = 0; var_16_object = Obj();
	var_16_object = var_1_float;
	func_604(var_15_bool, var_16_object);
	var_51_bool = var_15_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_3_event_10(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	RequestClearPath(var_12_int);
	return 0;
}


task_3_event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int)
{
	func_588(var_12_int);
	var_12_int = Obj();
	func_1980();
	return 0;
}


task_4_event_17(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_1923(var_13_object);
	return 0;
}


task_4_event_30(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_object)
{
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_12_object = var_15_object;
	var_13_object = var_16_object;
	func_1986(var_14_bool, var_15_object, var_16_object);
	return 0;
}


task_5_event_0(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsOverrideActive(var_14_bool);
	var_15_bool = var_14_bool == 0; //@nz
	if(var_15_bool != 0) {
		WorkWithCorpse(var_12_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_float, var_15_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	return 0;
}


event_22(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1471(var_17_int, var_18_float);
	return 0;
}


event_16(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object, var_13_string)
{
	var_14_float = 0; var_15_float = 0;
	var_17_bool = var_13_string == "health";
	if(var_17_bool != 0) {
		GetProperty("health", var_15_float);
		var_20_bool = var_15_float <= (int)0;
		if(var_20_bool != 0) {
			SignalDeath(var_12_object);
		}
	}
	return 2;
}


event_41(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_1951(var_13_object);
	return 0;
}


main(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int)
{
	func_1846();
	
Label_170:
	func_235(var_10_bool, var_11_int);
	goto Label_170;
}
EMIT "Return(); Pop(0)";


func_0(var_1_float, var_2_float, var_68_object)
{
	GetSeeThreshold(var_1_float);
	GetSeeFOV(var_2_float);
	var_73_float = var_1_float / (float)1.5;
	SetSeeThreshold(var_73_float);
	var_74_object = Obj();
	var_68_object = var_74_object;
	func_101(var_68_object, var_74_object);
	return 0;
}


func_1538(var_206_object)
{
	var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0);
	@@var_206_object:GetPosition(var_210_cvector);
	GetPosition(var_211_cvector);
	var_212_cvector = var_210_cvector - var_211_cvector;
	var_213_float = GetByIndex(var_212_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 2);
	RotateAsync(var_213_float, var_214_float);
	return 6;
}


func_1923(var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = var_13_object == 0; //@ne
	if(var_16_bool != 0) {
		return 2;
	}
	var_17_object = GlobalVars[0];
	@@var_17_object:in(var_15_bool, var_13_object);
	var_18_bool = var_15_bool == 0; //@nz
	if(var_18_bool != 0) {
		var_19_object = GlobalVars[0];
		@@var_19_object:add(var_13_object);
	}
	return 2;
}


func_1154(var_173_object)
{
	EventDisable(0);
	var_174_object = Obj();
	var_173_object = var_174_object;
	func_1177(var_174_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1165:
	Hold();
	goto Label_1165;
}
EMIT "Return(); Pop(0)";


func_642(var_0_object, var_1_float, var_2_float, var_3_bool, var_4_bool, var_93_object, var_94_bool, var_95_float, var_150_bool)
{
	var_96_bool = 0; var_97_bool = 0; var_98_float = 0; var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_bool = 0; var_102_bool = 0; var_103_cvector = CVector(0,0,0); var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0); var_111_bool = 0; var_112_bool = 0; var_113_cvector = CVector(0,0,0); var_114_float = 0; var_115_float = 0;
	var_1_float = 0;
	
Label_644:
	var_119_int = var_1_float + (int)1;
	var_120_int = "attack_begin" + var_119_int;
	HasAnimation(var_106_bool, "all", var_120_int);
	var_121_bool = var_106_bool == 0; //@nz
	if(var_121_bool != 0) {
	} else {
									var_1_float = var_1_float + (int)1;
									goto Label_644;
	}
	var_2_float = 0;
	
Label_658:
	var_124_int = var_2_float + (int)1;
	var_125_int = "attack" + var_124_int;
	IsExisting3DSound(var_107_bool, var_125_int);
	var_126_bool = var_107_bool == 0; //@nz
	if(var_126_bool != 0) {
	} else {
								var_2_float = var_2_float + (int)1;
								goto Label_658;

	}
	var_4_bool = 0;
	var_129_bool = IsFuncExist(var_93_object, "@GetAttackDistance", (int)1);
	if(var_129_bool != 0) {
		@@var_93_object:GetAttackDistance(var_108_float);
		var_108_float = var_108_float + (int)50;
	} else {
							var_95_float = var_108_float;

	}
	var_132_bool = var_108_float >= (int)150;
	if(var_132_bool != 0) {
		var_108_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_93_object;
	IsPlayerActor(var_0_object, var_111_bool);
	var_133_bool = var_94_bool;
	if(var_133_bool != 0) {
		var_112_bool = 0;
	} else {
						var_112_bool = 1;

	}
Label_694:
	var_134_bool = 0;
	var_134_bool = 0;
	var_135_bool = 0; var_136_object = Obj();
	var_136_object = var_0_object;
	func_1447(var_135_bool, var_136_object);
	if(var_135_bool != 0) {
		var_137_bool = var_3_bool == 0; //@nz
		if(var_137_bool != 0) {
			var_134_bool = 1;
		}
	}
	if(var_134_bool != 0) {
		@@@var_0_object:GetPFPosition(var_109_cvector);
		GetPFPosition(var_110_cvector);
		var_113_cvector = var_109_cvector - var_110_cvector;
		var_114_float = var_113_cvector | var_113_cvector;
		var_139_int = (float)300.0 + var_108_float;
		var_141_int = (float)300.0 + var_108_float;
		var_142_float = var_139_int * var_141_int;
		var_143_bool = var_114_float >= var_142_float;
		if(var_143_bool != 0) {
			var_144_bool = 0; var_145_object = Obj(); var_146_float = 0; var_147_float = 0; var_148_bool = 0; var_149_bool = 0;
			var_145_object = var_0_object;
			var_108_float = var_146_float;
			TaskCall(3);
			func_464(var_150_bool, var_151_object, var_144_bool, var_145_object, var_146_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_197_bool = var_150_bool == 0; //@nz
			if(var_197_bool != 0) {
			} else {
		} else {
				var_203_float = var_95_float * var_95_float;
				var_204_bool = var_114_float >= var_203_float;
				if(var_204_bool != 0) {
					var_205_bool = (bool)0 == 0; //@nz
					if(var_205_bool != 0) {
						var_206_object = Obj();
						var_206_object = var_0_object;
						func_1538(var_206_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_112_bool = 1;
					}
					rand(var_115_float);
					var_217_bool = 0;
					var_219_bool = var_115_float < (float)0.6000000238418579;
					if(var_219_bool != 1) {
						var_220_bool = 0;
						func_1082((bool)1, var_220_bool);
						if(var_220_bool != 1) {
							var_217_bool = 0;
						}
					}
					if(var_217_bool != 0) {
						Face(var_0_object);
						PlayAnimation("all", "attack_stay");
						var_228_bool = 0; var_229_float = 0;
						var_95_float = var_229_float;
						func_990(var_115_float, var_228_bool, var_229_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_398_bool = 0;
						func_1082(var_115_float, var_398_bool);
						var_399_bool = var_398_bool == 0; //@nz
						if(var_399_bool == 0) goto Label_820;
						var_400_bool = 0; var_401_object = Obj();
						var_401_object = var_0_object;
						func_1447(var_400_bool, var_401_object);
						var_402_bool = var_400_bool == 0; //@nz
						if(var_402_bool != 0) {
							goto Label_830;
						}
						@@@var_0_object:GetPFPosition(var_109_cvector);
						GetPFPosition(var_110_cvector);
						var_113_cvector = var_109_cvector - var_110_cvector;
						var_114_float = var_113_cvector | var_113_cvector;
						var_403_float = var_95_float * var_95_float;
						var_404_bool = var_114_float < var_403_float;
						if(var_404_bool == 0) goto Label_820;
						var_405_bool = 0; var_406_float = 0;
						var_95_float = var_406_float;
						func_886(var_114_float, var_115_float, var_405_bool, var_406_float);
						var_407_bool = var_405_bool == 0; //@nz
						if(var_407_bool == 0) goto Label_820;
						goto Label_830;
				}
					var_408_bool = 0; var_409_float = 0;
					var_95_float = var_409_float;
					func_886(var_114_float, var_115_float, var_408_bool, var_409_float);
					var_410_bool = var_408_bool == 0; //@nz
					if(var_410_bool != 0) {
						goto Label_830;
					}
					var_112_bool = 1;

				}
			Label_820:
				goto Label_829;
		}
		Label_829:
			goto Label_694;

		}
	}
Label_830:
	WaitForAnimEnd();
	var_198_bool = var_3_bool;
	if(var_198_bool != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_201_bool = var_111_bool;
	if(var_201_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_1030(var_0_object, var_241_bool)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_float = 0; var_246_float = 0; var_247_cvector = CVector(0,0,0); var_248_cvector = CVector(0,0,0); var_249_cvector = CVector(0,0,0); var_250_float = 0; var_251_float = 0;
	var_252_bool = 0; var_253_object = Obj();
	var_253_object = var_0_object;
	func_1447(var_252_bool, var_253_object);
	var_254_bool = var_252_bool == 0; //@nz
	if(var_254_bool != 0) {
		var_241_bool = 0;
		return 10;
	}
	var_255_bool = 0;
	func_1082(var_251_float, var_255_bool);
	if(var_255_bool != 0) {
		@@@var_0_object:GetPFPosition(var_247_cvector);
		GetPFPosition(var_248_cvector);
		var_249_cvector = var_247_cvector - var_248_cvector;
		var_250_float = var_249_cvector | var_249_cvector;
		@@@var_0_object:GetAttackDistance(var_251_float);
		var_251_float = var_251_float + (int)50;
		var_257_float = var_251_float * var_251_float;
		var_258_bool = var_250_float <= var_257_float;
		if(var_258_bool != 0) {
			func_1063(var_251_float);
			var_241_bool = 1;
			return 10;
		}
	}
	var_241_bool = 0;
	return 10;
}


func_1411(var_21_bool, var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj(); var_26_object = Obj();
	var_27_bool = var_22_object == 0; //@ne
	if(var_27_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_28_bool = 0;
	var_28_bool = 0;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", (int)1);
	if(var_31_bool != 0) {
		var_32_bool = 0; var_33_object = Obj();
		var_22_object = var_33_object;
		func_1406(var_32_bool, var_33_object);
		if(var_32_bool != 0) {
			var_28_bool = 1;
		}
	}
	if(var_28_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	GetScene(var_25_object);
	var_36_bool = var_25_object == 0; //@ne
	if(var_36_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	@@var_22_object:GetScene(var_26_object);
	var_37_bool = var_25_object != var_26_object;
	if(var_37_bool != 0) {
		var_21_bool = 0;
		return 4;
	}
	var_21_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1292(var_342_string, var_343_int)
{
	var_345_bool = var_343_int == (int)1;
	if(var_345_bool != 0) {
		var_342_string = "fire";
		return 0;
	}
	var_342_string = "phys";
	return 0;
}


func_1549(var_53_bool)
{
	var_54_bool = 0; var_55_bool = 0;
	IsLoaded(var_55_bool);
	var_55_bool = var_53_bool;
	return 2;
}


func_1936(var_84_object)
{
	var_85_object = Obj();
	var_84_object = var_85_object;
	func_1923(var_85_object);
	var_86_object = Obj(); var_87_bool = 0;
	var_84_object = var_86_object;
	TaskCall(4);
	func_615(var_86_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1554(var_350_float, var_351_float, var_352_float)
{
	var_355_bool = var_351_float < var_352_float;
	if(var_355_bool != 0) {
		var_351_float = var_350_float;
	} else {
		var_352_float = var_350_float;
	}
	return 0;
	
}


func_1300(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1177(var_174_object)
{
	var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_string = ""; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_float = 0; var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_cvector = CVector(0,0,0); var_188_cvector = CVector(0,0,0); var_189_string = ""; var_190_object = Obj(); var_191_bool = 0; var_192_bool = 0; var_193_float = 0; var_194_cvector = CVector(0,0,0);
	var_195_bool = var_174_object == 0; //@ne
	if(var_195_bool != 0) {
		var_196_string = "";
		func_1264("fdie");
	} else {
		@@var_174_object:GetPosition(var_185_cvector);
		GetPosition(var_186_cvector);
		GetDirection(var_187_cvector);
		var_188_cvector = var_186_cvector - var_185_cvector;
		var_199_float = GetByIndex(var_188_cvector, 0);
		var_200_float = GetByIndex(var_187_cvector, 0);
		var_201_float = var_199_float * var_200_float;
		var_202_float = GetByIndex(var_188_cvector, 2);
		var_203_float = GetByIndex(var_187_cvector, 2);
		var_204_float = var_202_float * var_203_float;
		var_205_int = var_201_float + var_204_float;
		var_207_bool = var_205_int >= (int)0;
		if(var_207_bool != 0) {
			var_189_string = "fdie";
		} else {
				var_189_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_174_object = var_190_object;
		var_210_bool = IsFuncExist(var_174_object, "GetScriptProperty", (int)2);
		if(var_210_bool != 0) {
			@@var_174_object:HasScriptProperty(var_191_bool, "Owner");
			var_212_bool = var_191_bool;
			if(var_212_bool != 0) {
				@@var_174_object:GetScriptProperty(var_190_object, "Owner");
				var_214_bool = var_190_object == 0; //@ne
				if(var_214_bool != 0) {
					var_174_object = var_190_object;
				}
			}
		}
		var_217_bool = IsFuncExist(var_190_object, "@GetEyesHeight", (int)1);
		if(var_217_bool != 0) {
			@@var_190_object:GetEyesHeight(var_193_float);
			var_194_cvector = CVector(0.0, 0.0, 0.0);
			var_218_float = GetByIndex(var_194_cvector, 1);
			var_193_float = var_218_float;
			SetByIndex(var_194_cvector, 1) = var_218_float;
			LookAsync(var_174_object, "head", var_194_cvector);
			var_192_bool = 1;
		} else {
			var_192_bool = 0;

		}
		PlayAnimation("all", var_189_string);
		WaitForAnimEnd();
		var_221_bool = var_192_bool;
		if(var_221_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_189_string);
		RemoveEnvelope();
		var_190_object = 0;
	}
	return 20;
	
}


func_1561(var_36_float, var_37_float, var_38_float, var_39_float)
{
	var_40_bool = var_37_float < var_38_float;
	if(var_40_bool != 0) {
		var_38_float = var_36_float;
		return 0;
	}
	var_41_bool = var_37_float > var_39_float;
	if(var_41_bool != 0) {
		var_39_float = var_36_float;
		return 0;
	}
	var_37_float = var_36_float;
	return 0;
}


func_156(var_0_object)
{
	Stop();
	StopGroup0();
	StopAsync();
	KillTimer((int)100);
	var_0_object = 0;
	return 0;
}


func_1308(var_26_bool, var_27_object, var_28_string)
{
	var_29_bool = 0; var_30_bool = 0;
	var_33_bool = IsFuncExist(var_27_object, "HasProperty", (int)2);
	var_34_bool = var_33_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_26_bool = 0;
		return 2;
	}
	@@var_27_object:HasProperty(var_28_string, var_30_bool);
	var_30_bool = var_26_bool;
	return 2;
}


func_1951(var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	TaskCall(5);
	func_1133(var_14_object);
	TaskReturn();
	return 0;
}


func_1572(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1447(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_18_object = var_22_object;
	func_1411(var_21_bool, var_22_object);
	var_38_bool = var_21_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_18_object = var_40_object;
	func_1308(var_39_bool, var_40_object, "noaccess");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	@@var_18_object:GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == (int)0;
	return 2;
}


func_1063(var_0_object)
{
	var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0);
	Face(var_0_object);
	PlayAnimation("all", "bjump");
	@@@var_0_object:GetPFPosition(var_261_cvector);
	GetPFPosition(var_262_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1320(var_18_bool, var_19_object, var_20_string, var_21_float, var_22_float, var_23_float)
{
	var_24_float = 0; var_25_float = 0;
	var_26_bool = 0; var_27_object = Obj(); var_28_string = "";
	var_19_object = var_27_object;
	var_20_string = var_28_string;
	func_1308(var_26_bool, var_27_object, var_28_string);
	var_35_bool = var_26_bool == 0; //@nz
	if(var_35_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	@@var_19_object:GetProperty(var_20_string, var_25_float);
	var_36_float = 0; var_37_float = 0; var_38_float = 0; var_39_float = 0;
	var_37_float = var_25_float + var_21_float;
	var_22_float = var_38_float;
	var_23_float = var_39_float;
	func_1561(var_36_float, var_37_float, var_38_float, var_39_float);
	@@var_19_object:SetProperty(var_20_string, var_36_float);
	var_18_bool = 1;
	return 2;
}


func_1578(var_52_int)
{
	var_53_float = 0; var_54_float = 0;
	GetGameTime(var_54_float);
	var_56_int = 0;
	var_56_int = var_54_float / (int)24;
	var_52_int = (int)1 + var_56_int;
	return 2;
}


func_299(var_0_object, var_1_float)
{
	var_0_object = true;
	var_1_float = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1841(var_82_int, var_83_string)
{
	var_84_int = 0; var_85_int = 0;
	GetInvItemByName(var_85_int, var_83_string);
	var_85_int = var_82_int;
	return 2;
}


func_1587(var_63_string, var_64_int)
{
	var_65_string = ""; var_66_string = "";
	var_67_int = var_64_int;
	if(var_67_int != 0) {
		"idle" = "idle" + var_64_int;
	}
	var_66_string = var_63_string;
	return 2;
}


func_1846()
{
	var_12_object = GlobalVars[0];
	func_1572(Obj());
	var_13_object = var_12_object;
	GlobalVars[0] = var_12_object;
	return 0;
}


func_1594(var_57_int)
{
	var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0;
	var_60_int = 0;
	
Label_1596:
	var_63_string = ""; var_64_int = 0;
	var_60_int = var_64_int;
	func_1587(var_63_string, var_64_int);
	HasAnimation(var_61_bool, "all", var_63_string);
	var_68_bool = var_61_bool == 0; //@nz
	if(var_68_bool != 0) {
	} else {
		var_60_int = var_60_int + (int)1;
		goto Label_1596;
	}
	var_60_int = var_57_int;
	return 4;
	
}


func_315(var_37_bool)
{
	var_37_bool = 0;
	return 0;
}


func_1082(var_0_object, var_220_bool)
{
	var_221_bool = 0; var_222_bool = 0;
	var_225_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_225_bool != 0) {
		@@@var_0_object:IsAttacking(var_222_bool);
		var_222_bool = var_220_bool;
		return 2;
	}
	var_220_bool = 0;
	return 2;
}


func_1853(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_float = 0; var_22_bool = 0; var_23_float = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_19_object = var_25_object;
	func_1447(var_24_bool, var_25_object);
	var_58_bool = var_24_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_18_bool = 0;
		return 4;
	}
	var_59_object = GlobalVars[0];
	@@var_59_object:in(var_22_bool, var_19_object);
	var_60_bool = var_22_bool;
	if(var_60_bool != 0) {
		var_18_bool = 1;
		return 4;
	}
	var_61_bool = 0; var_62_object = Obj(); var_63_string = "";
	var_19_object = var_62_object;
	func_1308(var_61_bool, var_62_object, "reputation");
	var_64_bool = var_61_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_18_bool = 0;
		return 4;
	}
	@@var_19_object:GetProperty("reputation", var_23_float);
	var_18_bool = var_23_float < (float)0.10000000149011612;
	return 4;
}


func_446()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1342(var_314_float, var_315_object, var_316_float, var_317_int)
{
	var_321_int = 0; var_322_string = ""; var_323_int = 0; var_324_float = 0; var_325_float = 0; var_326_float = 0; var_327_int = 0; var_328_string = ""; var_329_int = 0; var_330_float = 0; var_331_float = 0; var_332_float = 0;
	var_333_bool = 0; var_334_object = Obj(); var_335_string = "";
	var_315_object = var_334_object;
	func_1308(var_333_bool, var_334_object, "health");
	var_336_bool = var_333_bool == 0; //@nz
	if(var_336_bool != 0) {
		var_314_float = 0.0;
		return 12;
	}
	var_337_bool = 0; var_338_object = Obj(); var_339_string = "";
	var_315_object = var_338_object;
	func_1308(var_337_bool, var_338_object, "armor");
	var_340_bool = var_337_bool == 0; //@nz
	if(var_340_bool != 0) {
		var_327_int = 0;
	} else {
			@@var_315_object:GetProperty("armor", var_327_int);
	}
	var_342_string = ""; var_343_int = 0;
	var_317_int = var_343_int;
	func_1292(var_342_string, var_343_int);
	var_328_string = "armor_" + var_342_string;
	var_346_bool = 0; var_347_object = Obj(); var_348_string = "";
	var_315_object = var_347_object;
	var_328_string = var_348_string;
	func_1308(var_346_bool, var_347_object, var_348_string);
	var_349_bool = var_346_bool == 0; //@nz
	if(var_349_bool != 0) {
		var_329_int = 0;
	} else {
		@@var_315_object:GetProperty(var_328_string, var_329_int);

	}
	var_350_float = 0; var_351_float = 0; var_352_float = 0;
	var_353_int = var_327_int + var_329_int;
	var_351_float = var_353_int / (float)100.0;
	func_1554(var_350_float, var_351_float, (float)1);
	var_350_float = var_330_float;
	@@var_315_object:GetProperty("health", var_331_float);
	var_358_int = (int)1 - var_330_float;
	var_332_float = var_316_float * var_358_int;
	var_360_float = 0; var_361_float = 0; var_362_float = 0; var_363_float = 0;
	var_361_float = var_331_float - var_332_float;
	func_1561(var_360_float, var_361_float, (float)0, (float)1);
	@@var_315_object:SetProperty("health", var_360_float);
	var_332_float = var_314_float;
	return 12;
	
}


func_1471(var_16_object, var_17_int)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_object = Obj(); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_int = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_string = "";
	var_39_bool = 0;
	var_39_bool = 0;
	var_41_bool = var_17_int != (int)4;
	if(var_41_bool != 0) {
		var_43_bool = var_17_int != (int)5;
		if(var_43_bool != 0) {
			var_39_bool = 1;
		}
	}
	if(var_39_bool != 0) {
		GetScene(var_29_object);
		GetPosition(var_31_cvector);
		GetEyesHeight(var_32_float);
		var_44_float = GetByIndex(var_31_cvector, 1);
		var_46_float = var_32_float / (int)2;
		var_44_float = var_44_float + var_46_float;
		SetByIndex(var_31_cvector, 1) = var_44_float;
		AddActorByType(var_30_object, "scripted", var_29_object, var_31_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_30_object = 0;
		var_29_object = 0;
	}
	var_50_bool = var_16_object == 0; //@ne
	if(var_50_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_33_int);
	var_52_bool = var_33_int < (int)0;
	if(var_52_bool != 0) {
		return 20;
	}
	@@var_16_object:GetPosition(var_34_cvector);
	GetPosition(var_35_cvector);
	GetDirection(var_36_cvector);
	var_37_cvector = var_35_cvector - var_34_cvector;
	var_53_float = GetByIndex(var_37_cvector, 0);
	var_54_float = GetByIndex(var_36_cvector, 0);
	var_55_float = var_53_float * var_54_float;
	var_56_float = GetByIndex(var_37_cvector, 2);
	var_57_float = GetByIndex(var_36_cvector, 2);
	var_58_float = var_56_float * var_57_float;
	var_59_int = var_55_float + var_58_float;
	var_61_bool = var_59_int >= (int)0;
	if(var_61_bool != 0) {
		var_38_string = "fhit";
	} else {
		var_38_string = "bhit";
	}
	var_64_int = var_38_string + "1";
	var_66_int = var_38_string + "2";
	FadeSecondaryAnimation("hit_react", var_64_int, var_66_int, (int)-10);
	return 20;
	
}


func_1986(var_14_bool, var_15_object, var_16_object)
{
	var_17_float = 0; var_18_bool = 0; var_19_float = 0; var_20_bool = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_16_object = var_22_object;
	func_1308(var_21_bool, var_22_object, "reputation");
	var_30_bool = var_21_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_16_object:GetProperty("reputation", var_19_float);
	var_33_bool = var_19_float < (float)0.5;
	if(var_33_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	CanSee(var_20_bool, var_15_object);
	var_34_bool = 0;
	var_34_bool = 1;
	var_35_bool = var_20_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_15_object = var_37_object;
		func_1300(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (float)160000.0;
		if(var_45_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 0) {
		ReportReputationChange(var_15_object, var_16_object, (float)-0.20000000298023224);
		var_14_bool = 1;
		return 4;
	}
	var_14_bool = 0;
	return 4;
}


func_69(var_1_float, var_2_float)
{
	SetSeeThreshold(var_1_float);
	SetSeeFOV(var_2_float);
	func_156(var_78_int);
	return 0;
}


func_1093(var_2_float, var_4_bool)
{
	var_282_float = 0; var_283_int = 0; var_284_float = 0; var_285_int = 0;
	var_286_bool = var_2_float == 0; //@nz
	if(var_286_bool != 0) {
		return 4;
	}
	var_287_bool = var_4_bool;
	if(var_287_bool != 0) {
		var_4_bool = var_4_bool + (int)-1;
		var_290_bool = var_4_bool > (int)0;
		if(var_290_bool != 0) {
			return 4;
		}
	}
	rand(var_284_float);
	var_291_float = 0;
	func_1131(var_291_float);
	var_292_bool = var_284_float < var_291_float;
	if(var_292_bool != 0) {
		irand(var_285_int, var_2_float);
		var_285_int = var_285_int + (int)1;
		var_295_int = "attack" + var_285_int;
		Speak(var_295_int);
		var_296_int = 0;
		func_1129(var_296_int);
		var_4_bool = var_296_int;
	}
	return 4;
}


func_966(var_386_bool, var_387_float)
{
	var_388_float = 0; var_389_bool = 0; var_390_float = 0; var_391_bool = 0;
	rand(var_390_float);
	var_392_bool = var_390_float < var_387_float;
	if(var_392_bool != 0) {

	Label_971:
		IsAnimationPlaying(var_391_bool);
		var_393_bool = var_391_bool == 0; //@nz
		if(var_393_bool != 0) {
		} else {
			var_394_bool = 0;
			func_1030(var_391_bool, var_394_bool);
			if(var_394_bool != 0) {
				var_386_bool = 1;
				sync();
				goto Label_971;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_988;
	
Label_988:
	var_386_bool = 0;
	return 4;
	
}


func_1611(var_49_int, var_50_int)
{
	var_60_int = 0; var_61_int = 0; var_62_int = 0; var_63_bool = 0; var_64_int = 0; var_65_int = 0; var_66_int = 0; var_67_bool = 0;
	var_68_bool = var_49_int > var_50_int;
	if(var_68_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_70_bool = var_49_int != var_50_int;
	if(var_70_bool != 0) {
		var_71_int = var_50_int - var_49_int;
		irand(var_65_int, var_71_int);
	} else {
		var_77_bool = var_49_int == (int)0;
		if(var_77_bool == 0) goto Label_1629;
		return 8;
	}
Label_1629:
	(int)0 = (int)0 + var_49_int;
	var_73_bool = var_64_int == (int)0;
	if(var_73_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_66_int, "Money");
	AddItem(var_67_bool, var_66_int, (int)0, var_64_int);
	return 8;
	
}


func_588(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_847(var_0_object, var_300_float, var_301_int)
{
	var_302_object = Obj(); var_303_float = 0; var_304_float = 0; var_305_object = Obj(); var_306_float = 0; var_307_float = 0;
	var_309_float = var_300_float * (float)0.8999999761581421;
	GetVictim(var_309_float, var_305_object);
	ReportAttack(var_0_object);
	var_310_bool = var_305_object == var_0_object;
	if(var_310_bool != 0) {
		var_311_float = 0; var_312_object = Obj(); var_313_int = 0;
		var_305_object = var_312_object;
		var_301_int = var_313_int;
		func_623(var_313_int);
		var_311_float = var_306_float;
		var_314_float = 0; var_315_object = Obj(); var_316_float = 0; var_317_int = 0;
		var_305_object = var_315_object;
		var_306_float = var_316_float;
		var_318_int = 0; var_319_object = Obj(); var_320_int = 0;
		var_305_object = var_319_object;
		var_301_int = var_320_int;
		func_626(var_320_int);
		var_318_int = var_317_int;
		func_1342(var_314_float, var_315_object, var_316_float, var_317_int);
		var_314_float = var_307_float;
		var_367_int = 0;
		func_1125(var_367_int);
		ReportHit(var_0_object, var_367_int, var_307_float, var_306_float);
		var_368_object = Obj(); var_369_float = 0;
		var_305_object = var_368_object;
		var_307_float = var_369_float;
		func_1127();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_464(var_0_object, var_1_float, var_144_bool, var_145_object, var_146_float, var_147_float, var_148_bool, var_149_bool)
{
	var_152_bool = 0; var_153_bool = 0; var_154_object = Obj(); var_155_cvector = CVector(0,0,0); var_156_cvector = CVector(0,0,0); var_157_cvector = CVector(0,0,0); var_158_float = 0; var_159_object = Obj(); var_160_bool = 0; var_161_bool = 0; var_162_object = Obj(); var_163_cvector = CVector(0,0,0); var_164_cvector = CVector(0,0,0); var_165_cvector = CVector(0,0,0); var_166_float = 0; var_167_object = Obj();
	var_0_object = false;
	var_1_float = var_145_object;
	var_149_bool = var_161_bool;
	
Label_468:
	var_168_bool = 0; var_169_object = Obj();
	var_145_object = var_169_object;
	func_604(var_168_bool, var_169_object);
	var_172_bool = var_168_bool == 0; //@nz
	if(var_172_bool != 0) {
		var_144_bool = 0;
		return 16;
	}
	@@var_145_object:GetPosition(var_163_cvector);
	GetPosition(var_164_cvector);
	var_165_cvector = var_163_cvector - var_164_cvector;
	var_166_float = var_165_cvector | var_165_cvector;
	var_173_bool = 0;
	var_173_bool = 0;
	var_175_bool = var_147_float > (int)0;
	if(var_175_bool != 0) {
		var_176_float = var_147_float * var_147_float;
		var_177_bool = var_166_float > var_176_float;
		if(var_177_bool != 0) {
			var_173_bool = 1;
		}
	}
	if(var_173_bool != 0) {
		Stop();
		var_144_bool = 0;
		return 16;
	}
	var_178_float = var_146_float * var_146_float;
	var_179_bool = var_166_float > var_178_float;
	if(var_179_bool != 0) {
		@@var_145_object:GetPFPosition(var_163_cvector);
		FindPathTo(var_167_object, var_163_cvector);
		var_180_bool = var_167_object != 0; //@nn
		if(var_180_bool != 0) {
			var_167_object = var_162_object;
			var_167_object = 0;
		}
		var_181_bool = var_162_object != 0; //@nn
		if(var_181_bool != 0) {
			var_182_bool = var_161_bool;
			if(var_182_bool == 0) goto Label_517;
			var_161_bool = 0;
			RotatePath(var_162_object, var_160_bool);
			var_183_bool = var_160_bool == 0; //@nz
			if(var_183_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_186_string = "";
				func_611(var_186_string);
				var_187_string = "";
				func_613(var_187_string);
				FollowPath(var_162_object, var_148_bool, var_160_bool, var_186_string, var_187_string);
				var_188_bool = var_160_bool == 0; //@nz
				if(var_188_bool != 0) {
					var_189_object = var_0_object;
					if(var_189_object != 0) {
						var_162_object = 0;
						goto Label_564;
					EMIT "GOTO 0x219";
					}
				} else {
					var_162_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_160_bool);
					var_192_bool = var_160_bool == 0; //@nz
					if(var_192_bool != 0) {
						var_193_object = var_0_object;
						if(var_193_object != 0) {
							var_162_object = 0;
							goto Label_564;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_564;
	}
			var_167_object = 0;
			goto Label_562;

		Label_562:
			var_162_object = 0;

		}
		goto Label_468;
	}
Label_564:
	var_144_bool = !var_0_object;
	return 16;
	
}


func_86(var_2_float, var_85_bool)
{
	var_86_bool = 0; var_87_bool = 0;
	var_89_float = var_2_float * (float)1.7999999523162842;
	SetSeeFOV(var_89_float);
	PlayAnimation("all", "hunt");
	WaitForAnimEnd(var_87_bool);
	SetSeeFOV(var_2_float);
	var_85_bool = !var_87_bool;
	return 2;
}


func_1884(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_17_bool = var_16_bool == 0; //@nz
	if(var_17_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_18_bool = 0; var_19_object = Obj();
	var_14_object = var_19_object;
	func_1853(var_18_bool, var_19_object);
	var_18_bool = var_13_bool;
	return 2;
}


func_604(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1447(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_990(var_0_object, var_228_bool, var_229_float)
{
	var_230_bool = 0; var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_float = 0; var_235_bool = 0; var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_float = 0;
	
Label_991:
	IsAnimationPlaying(var_235_bool);
	var_240_bool = var_235_bool == 0; //@nz
	if(var_240_bool != 0) {
	} else {
		var_241_bool = 0;
		func_1030(var_239_float, var_241_bool);
		if(var_241_bool != 0) {
			var_228_bool = 1;
			return 10;
		}
		var_266_bool = 0; var_267_object = Obj();
		var_267_object = var_0_object;
		func_1447(var_266_bool, var_267_object);
		var_268_bool = var_266_bool == 0; //@nz
		if(var_268_bool != 0) {
			var_228_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_236_cvector);
		GetPFPosition(var_237_cvector);
		var_238_cvector = var_236_cvector - var_237_cvector;
		var_239_float = var_238_cvector | var_238_cvector;
		var_269_float = var_229_float * var_229_float;
		var_270_bool = var_239_float < var_269_float;
		if(var_270_bool != 0) {
			var_271_bool = 0; var_272_float = 0;
			var_229_float = var_272_float;
			func_886(var_238_cvector, var_239_float, var_271_bool, var_272_float);
			var_228_bool = 1;
			sync();
			goto Label_991;
		}
		return 10;
	}
	var_228_bool = 0;
	return 10;
	
}


func_611(var_186_string)
{
	var_186_string = "walk";
	return 0;
}


func_101(var_0_object, var_74_object)
{
	var_75_bool = 0; var_76_int = 0; var_77_bool = 0; var_78_int = 0;
	var_0_object = var_74_object;
	Face(var_0_object);
	SetTimer((int)100, (int)15);
	
Label_109:
	var_81_bool = var_0_object != 0; //@nn
	if(var_81_bool != 0) {
		irand(var_78_int, (int)5);
		var_84_int = var_78_int + (int)5;
		Sleep(var_84_int, var_77_bool);
		var_85_bool = 0;
		func_86(var_78_int, var_85_bool);
		if(var_85_bool != 0) {
		} else {
			goto Label_109;
		}
	}
	func_69(var_77_bool, var_78_int);
	return 4;
	
}


func_613(var_187_string)
{
	var_187_string = "run";
	return 0;
}


func_1125(var_367_int)
{
	var_367_int = 0;
	return 0;
}


func_1127()
{
	return 0;
}


func_1897(var_67_object)
{
	var_68_object = Obj();
	var_67_object = var_68_object;
	TaskCall(0);
	func_0(var_70_float, var_71_float, var_68_object);
	TaskReturn();
	return 0;
}


func_1129(var_296_int)
{
	var_296_int = 1;
	return 0;
}


func_235(var_0_object, var_1_float)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_bool = 0; var_21_object = Obj(); var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_float = 0; var_27_bool = 0; var_28_object = Obj(); var_29_bool = 0;
	var_0_object = false;
	var_1_float = false;
	rand(var_23_float, (float)0.5);
	Sleep(var_23_float);
	
Label_243:
	var_31_bool = var_0_object == 0; //@nz
	if(var_31_bool != 0) {
		var_32_bool = var_1_float == 0; //@nz
		if(var_32_bool != 0) {

		Label_247:
			GetPosition(var_25_cvector);
			GetCameraFarDistance(var_26_float);
			var_26_float = var_26_float * (float)2.5;
			GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_26_float, var_27_bool);
			var_34_bool = var_27_bool;
			if(var_34_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_247;
		}
				var_1_float = false;
	}
			return 14;
	}
	goto Label_264;
	
Label_264:
	FindShiftedPathTo(var_28_object, var_24_cvector);
	var_35_bool = var_28_object != 0; //@nn
	if(var_35_bool != 0) {
		RotatePath(var_28_object, var_29_bool);
		var_36_bool = var_29_bool;
		if(var_36_bool != 0) {
			var_37_bool = 0;
			func_315(var_37_bool);
			FollowPath(var_28_object, var_37_bool, var_29_bool);
			var_28_object = 0;
			var_38_bool = var_29_bool;
			if(var_38_bool != 0) {
				TaskCall(2);
				func_377();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_28_object = 0;
	goto Label_243;
	
}


func_1131(var_291_float)
{
	var_291_float = 0.5;
	return 0;
}


func_1641()
{
	var_42_int = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0;
	ClearSubContainer((int)0);
	var_49_int = 0; var_50_int = 0;
	var_52_int = 0;
	func_1578(var_52_int);
	var_59_float = var_52_int * (int)100;
	var_50_int = (int)100 + var_59_float;
	func_1611((int)0, var_50_int);
	func_1578((int)0);
	var_78_int = var_47_int;
	irand(var_45_int, (int)3);
	var_81_bool = var_45_int == (int)0;
	if(var_81_bool != 0) {
		var_82_int = 0; var_83_string = "";
		func_1841(var_82_int, "bottle_water");
		AddItem(var_46_bool, var_82_int, (int)0, (int)1);
	}
	irand(var_45_int, (int)3);
	var_90_bool = var_45_int == (int)0;
	if(var_90_bool != 0) {
		var_91_int = 0; var_92_string = "";
		func_1841(var_91_int, "rusk");
		AddItem(var_46_bool, var_91_int, (int)0, (int)1);
	}
	irand(var_45_int, (int)7);
	var_97_bool = var_45_int == (int)0;
	if(var_97_bool != 0) {
		var_98_int = 0; var_99_string = "";
		func_1841(var_98_int, "bandage");
		AddItem(var_46_bool, var_98_int, (int)0, (int)1);
	}
	irand(var_45_int, (int)7);
	var_104_bool = var_45_int == (int)0;
	if(var_104_bool != 0) {
		var_105_int = 0; var_106_string = "";
		func_1841(var_105_int, "tourniquet");
		AddItem(var_46_bool, var_105_int, (int)0, (int)1);
	}
	irand(var_45_int, (int)20);
	var_111_bool = var_45_int == (int)0;
	if(var_111_bool != 0) {
		var_112_int = 0; var_113_string = "";
		func_1841(var_112_int, "packet");
		AddItem(var_46_bool, var_112_int, (int)0, (int)1);
	}
	irand(var_45_int, (int)20);
	var_118_bool = var_45_int == (int)0;
	if(var_118_bool != 0) {
		var_119_int = 0; var_120_string = "";
		func_1841(var_119_int, "hook");
		AddItem(var_46_bool, var_119_int, (int)0, (int)1);
	}
	irand(var_45_int, (int)30);
	var_125_bool = var_45_int == (int)0;
	if(var_125_bool != 0) {
		var_126_int = 0; var_127_string = "";
		func_1841(var_126_int, "watch");
		AddItem(var_46_bool, var_126_int, (int)0, (int)1);
	}
	var_131_bool = var_47_int >= (int)3;
	if(var_131_bool != 0) {
		irand(var_45_int, (int)2);
		var_134_bool = var_45_int == (int)0;
		if(var_134_bool != 0) {
			var_135_int = 0; var_136_string = "";
			func_1841(var_135_int, "alpha_pills");
			AddItem(var_46_bool, var_135_int, (int)0, (int)1);
		}
	}
	var_140_bool = var_47_int >= (int)4;
	if(var_140_bool != 0) {
		irand(var_45_int, (int)5);
		var_143_bool = var_45_int == (int)0;
		if(var_143_bool != 0) {
			var_144_int = 0; var_145_string = "";
			func_1841(var_144_int, "beta_pills");
			AddItem(var_46_bool, var_144_int, (int)0, (int)1);
		}
	}
	var_149_bool = var_47_int >= (int)6;
	if(var_149_bool != 0) {
		irand(var_45_int, (int)8);
		var_152_bool = var_45_int == (int)0;
		if(var_152_bool != 0) {
			var_153_int = 0; var_154_string = "";
			func_1841(var_153_int, "gamma_pills");
			AddItem(var_46_bool, var_153_int, (int)0, (int)1);
		}
	}
	var_158_bool = var_47_int >= (int)8;
	if(var_158_bool != 0) {
		irand(var_45_int, (int)2);
		var_161_bool = var_45_int == (int)0;
		if(var_161_bool != 0) {
			var_162_int = 0; var_163_string = "";
			func_1841(var_162_int, "revolver_ammo");
			AddItem(var_46_bool, var_162_int, (int)0, (int)1);
		}
		irand(var_45_int, (int)2);
		var_168_bool = var_45_int == (int)0;
		if(var_168_bool != 0) {
			var_169_int = 0; var_170_string = "";
			func_1841(var_169_int, "rifle_ammo");
			AddItem(var_46_bool, var_169_int, (int)0, (int)1);
		}
	}
	return 6;
}


func_615(var_86_object, var_87_bool)
{
	var_93_object = Obj(); var_94_bool = 0; var_95_float = 0;
	var_86_object = var_93_object;
	var_87_bool = var_94_bool;
	func_642(var_89_int, var_90_int, var_91_bool, var_92_int, var_86_object, var_87_bool, var_93_object, var_94_bool, (float)180.0);
	return 0;
}


func_623(var_311_float)
{
	var_311_float = 0.10000000149011612;
	return 0;
}


func_1264(var_196_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_196_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_196_string);
	RemoveEnvelope();
	return 0;
}


func_1905(var_13_bool, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1853(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
	return 0;
}


func_626(var_318_int)
{
	var_318_int = 0;
	return 0;
}


func_1133(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		var_18_bool = 0; var_19_object = Obj(); var_20_string = ""; var_21_float = 0; var_22_float = 0; var_23_float = 0;
		var_14_object = var_19_object;
		func_1320(var_18_bool, var_19_object, "reputation", (float)-0.30000001192092896, (float)0, (float)1);
	}
	func_1641();
	var_173_object = Obj();
	var_14_object = var_173_object;
	func_1154(var_173_object);
	return 2;
}


func_886(var_0_object, var_1_float, var_271_bool, var_272_float)
{
	var_273_int = 0; var_274_bool = 0; var_275_int = 0; var_276_bool = 0;
	irand(var_275_int, var_1_float);
	var_275_int = var_275_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	var_281_int = "attack_begin" + var_275_int;
	PlayAnimation("all", var_281_int);
	WaitForAnimEnd();
	func_1093(var_275_int, var_276_bool);
	var_297_bool = 0; var_298_object = Obj();
	var_298_object = var_0_object;
	func_1447(var_297_bool, var_298_object);
	var_299_bool = var_297_bool == 0; //@nz
	if(var_299_bool != 0) {
		StopAsync();
		var_271_bool = 0;
		return 4;
	}
	var_300_float = 0; var_301_int = 0;
	var_272_float = var_300_float;
	var_275_int = var_301_int;
	func_847(var_276_bool, var_300_float, var_301_int);
	var_372_int = "attack_middle" + var_275_int;
	HasAnimation(var_276_bool, "all", var_372_int);
	var_373_bool = var_276_bool;
	if(var_373_bool != 0) {
		var_376_int = "attack_middle" + var_275_int;
		PlayAnimation("all", var_376_int);
		WaitForAnimEnd();
		var_377_bool = 0; var_378_object = Obj();
		var_378_object = var_0_object;
		func_1447(var_377_bool, var_378_object);
		var_379_bool = var_377_bool == 0; //@nz
		if(var_379_bool != 0) {
			StopAsync();
			var_271_bool = 0;
			return 4;
		}
		var_380_float = 0; var_381_int = 0;
		var_272_float = var_380_float;
		var_275_int = var_381_int;
		func_847(var_276_bool, var_380_float, var_381_int);
	}
	SetAttackState((bool)0);
	var_385_int = "attack_end" + var_275_int;
	PlayAnimation("all", var_385_int);
	var_386_bool = 0; var_387_float = 0;
	func_966(var_386_bool, (float)0.75);
	StopAsync();
	var_271_bool = 1;
	return 4;
}


func_1912(var_64_object)
{
	var_65_object = Obj(); var_66_bool = 0;
	var_64_object = var_65_object;
	TaskCall(4);
	func_615(var_65_object, (bool)1);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_377()
{
	var_39_int = 0; var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_bool = 0; var_44_float = 0; var_45_bool = 0; var_46_int = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_bool = 0; var_51_float = 0; var_52_bool = 0;
	WaitForAnimEnd();
	var_53_bool = 0;
	func_1549(var_53_bool);
	var_56_bool = var_53_bool == 0; //@nz
	if(var_56_bool != 0) {
		return 14;
	}
	func_1594((int)0);
	var_57_int = var_46_int;
	var_47_int = 0;
	
Label_391:
	var_70_bool = 0;
	var_70_bool = 0;
	var_72_bool = var_47_int < (int)5;
	if(var_72_bool != 0) {
		var_73_bool = 0;
		func_1549(var_73_bool);
		if(var_73_bool != 0) {
			var_70_bool = 1;
		}
	}
	if(var_70_bool != 0) {
		irand(var_48_int, (int)3);
		var_76_bool = var_48_int == (int)0;
		if(var_76_bool != 0) {
			var_77_int = var_46_int;
			if(var_77_int == 0) goto Label_424;
			irand(var_49_int, var_46_int);
			var_79_string = ""; var_80_int = 0;
			var_49_int = var_80_int;
			func_1587(var_79_string, var_80_int);
			PlayAnimation("all", var_79_string);
			WaitForAnimEnd(var_50_bool);
			var_81_bool = var_50_bool == 0; //@nz
			if(var_81_bool != 0) {
			} else {
		} else {
				var_84_bool = var_48_int == (int)1;
				if(var_84_bool != 0) {
					rand(var_51_float, (int)4);
					var_87_int = var_51_float + (int)1;
					Sleep(var_87_int, var_52_bool);
					var_88_bool = var_52_bool == 0; //@nz
					if(var_88_bool != 0) {
						goto Label_445;
					}
					goto Label_442;
				}
				var_89_int = var_47_int;
				if(var_89_int == 0) goto Label_442;
				goto Label_445;
		}
		Label_442:
			var_47_int = var_47_int + (int)1;
			goto Label_391;

		}
	}
Label_445:
	return 14;
	
}


func_1406(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	@@var_33_object:IsDead(var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


