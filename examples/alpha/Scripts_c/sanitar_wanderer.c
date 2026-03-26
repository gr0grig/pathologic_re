// @IMPORTS: GetPosition/1,Stop/0,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,FollowPath/3,StopGroup0/0,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,StopAnimation/0,Face/1,SetAttackState/1,StopAsync/0,ReportAttack/1,RemoveActor/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,self/1,CreateObjectSet/1,HasAnimation/3,Trace/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetAttackDistance/1,AddActorByType/4,GetHeight/1,PlayLoopedGlobalSound/5,ResetAAS/0,IsPlayerActor/2,GetProperty/2,SignalDeath/1,CanSee/2,ReportReputationChange/3
// @STRINGS: A:GetPosition|A:GetPFPosition|W:walk|W:run|W:all|W:attack_on|W:bjump|W:attack_off|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:disease|W:cattack|A:GetProperty|A:SetProperty|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:ognemet_ammo|W:rusk|W:flame|A:Attach|A:SetLength|A:GetLength|W:flame_loop|A:FadeIn|A:FadeOut|W:@GetHeight|A:GetHeight|A:in|A:add|W:reputation|A:Intersect|A:Next
// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:
// @RUN_OP: 0x199
// @RUN_TASK: 2
// @TASK_0: vars=bool,object params=2
// @EVENT_1: op=0x12 vars=object
// @EVENT_3: op=0x20 vars=object
// @EVENT_17: op=0x2e vars=object
// @EVENT_7: op=0x42 vars=int
// @EVENT_10: op=0xc4 vars=object
// @EVENT_41: op=0xcf vars=object
// @TASK_1: vars=bool,object,object params=2
// @EVENT_17: op=0xeb vars=object
// @EVENT_7: op=0xf8 vars=int
// @EVENT_10: op=0x17a vars=object
// @EVENT_41: op=0x185 vars=object
// @TASK_2: vars=bool,bool params=0
// @EVENT_1: op=0x1a1 vars=object
// @EVENT_3: op=0x1bc vars=object
// @EVENT_17: op=0x1ca vars=object
// @EVENT_30: op=0x1de vars=object,object
// @EVENT_7: op=0x1ea vars=int
// @EVENT_10: op=0x229 vars=object
// @EVENT_28: op=0x22d vars=
// @EVENT_41: op=0x237 vars=object
// @TASK_3: vars= params=0
// @EVENT_1: op=0x242 vars=object
// @EVENT_3: op=0x25d vars=object
// @EVENT_17: op=0x26b vars=object
// @EVENT_30: op=0x27f vars=object,object
// @EVENT_7: op=0x28b vars=int
// @TASK_4: vars=object params=2
// @EVENT_17: op=0x34e vars=object
// @EVENT_7: op=0x359 vars=int
// @TASK_5: vars= params=1
// @EVENT_0: op=0x381 vars=object
// @EVENT_22: op=0x3f6 vars=object,int,float,float
// @EVENT_16: op=0x3f8 vars=object,string
// @EVENT_41: op=0x3fa vars=object
// @TASK_6: vars= params=1
// @EVENT_41: op=0x46a vars=object
// @EVENT_1: op=0x473 vars=object
// @EVENT_3: op=0x481 vars=object
// @EVENT_17: op=0x48f vars=object
// @EVENT_7: op=0x4a3 vars=int
// @STANDALONE_EVENT_22: op=0x768 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x770 vars=object,string
// @STANDALONE_EVENT_41: op=0x77d vars=object
// @PE: 0x0,0xb,0x12,0x20,0x2e,0x42,0xb2,0xc4,0xcf,0xdc,0xeb,0xf8,0x168,0x17a,0x185,0x18e,0x1a1,0x1bc,0x1ca,0x1de,0x1ea,0x229,0x237,0x242,0x25d,0x26b,0x27f,0x28b,0x34e,0x359,0x35f,0x372,0x3e0,0x3f6,0x3f8,0x3fa,0x46a,0x473,0x481,0x48f,0x4a3,0x4a9,0x5b6,0x5bd,0x6e0,0x701,0x708,0x70e,0x715,0x73b,0x756,0x760,0x768,0x77d,0x800

task_0_event_1(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1793(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_200(var_8_object);
		var_63_object = Obj();
		var_8_object = var_63_object;
		func_1800(var_63_object);
	}
	return 0;
}


task_0_event_3(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1806(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_200(var_8_object);
		var_63_object = Obj();
		var_8_object = var_63_object;
		func_1813(var_63_object);
	}
	return 0;
}


task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1326(var_9_bool, var_10_object);
	var_43_bool = var_9_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_44_object = Obj();
		var_8_object = var_44_object;
		func_1861(var_44_object);
		return 0;
	}
	func_200(var_8_object);
	var_55_object = Obj();
	var_8_object = var_55_object;
	func_1878(var_55_object);
	return 0;
}


task_0_event_7(var_0_bool, var_1_object, var_2_int, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_int = 0;
	var_8_object = var_9_int;
	func_178(var_7_bool, var_8_object, var_9_int);
	var_39_int = 0;
	var_8_object = var_39_int;
	func_1963(var_39_int);
	return 0;
}


task_0_event_10(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	RequestClearPath(var_8_object);
	return 0;
}


task_0_event_41(var_0_bool, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	func_200(var_8_object);
	var_8_object = Obj();
	func_1917();
	return 0;
}


task_1_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1326(var_9_bool, var_10_object);
	var_43_bool = var_9_bool == 0; //@nz
	if(var_43_bool != 0) {
		return 0;
	}
	var_2_bool = var_8_object;
	func_382(var_8_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_bool, var_7_bool, var_8_object)
{
	var_9_int = 0;
	var_8_object = var_9_int;
	func_360(var_7_bool, var_8_object, var_9_int);
	var_50_int = 0;
	var_8_object = var_50_int;
	func_1963(var_50_int);
	return 0;
}


task_1_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	RequestClearPath(var_8_object);
	return 0;
}


task_1_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_object)
{
	func_382(var_8_object);
	var_8_object = Obj();
	func_1917();
	return 0;
}


task_2_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1793(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_560(var_7_object, var_8_object);
		var_62_object = Obj();
		var_8_object = var_62_object;
		func_1800(var_62_object);
	} else {
		var_352_bool = 0; var_353_object = Obj();
		var_8_object = var_353_object;
		func_1819(var_352_bool, var_353_object);
		if(var_352_bool == 0) goto Label_443;
		func_560(var_7_object, var_8_object);
		var_368_object = Obj();
		var_8_object = var_368_object;
		func_1851(var_368_object);
	}
Label_443:
	return 0;
	
}


task_2_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1806(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_560(var_7_object, var_8_object);
		var_62_object = Obj();
		var_8_object = var_62_object;
		func_1813(var_62_object);
	}
	return 0;
}


	task_2_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj();
	var_43_object = var_45_object;
	func_1326(var_44_bool, var_45_object);
	var_72_bool = var_44_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_73_object = Obj();
		var_43_object = var_73_object;
		func_1861(var_73_object);
		return 0;
	}
	func_560(var_9_object, var_43_object);
	var_83_object = Obj();
	var_43_object = var_83_object;
	func_1878(var_83_object);
	return 0;
	}


task_2_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj();
	var_8_object = var_11_object;
	var_9_object = var_12_object;
	func_1923(var_10_bool, var_11_object, var_12_object);
	if(var_10_bool != 0) {
		var_8_object = Obj();
		func_458();
	}
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object)
{
	var_9_int = 0;
	var_8_object = var_9_int;
	func_1963(var_9_int);
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	RequestClearPath(var_8_object);
	return 0;
}


task_2_event_28(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	func_560(var_7_object, var_8_object);
	var_8_object = Obj();
	func_1917();
	return 0;
}


task_3_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1793(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_726();
		var_62_object = Obj();
		var_8_object = var_62_object;
		func_1800(var_62_object);
	} else {
		var_352_bool = 0; var_353_object = Obj();
		var_8_object = var_353_object;
		func_1819(var_352_bool, var_353_object);
		if(var_352_bool == 0) goto Label_604;
		func_726();
		var_368_object = Obj();
		var_8_object = var_368_object;
		func_1851(var_368_object);
	}
Label_604:
	return 0;
	
}


task_3_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1806(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_726();
		var_62_object = Obj();
		var_8_object = var_62_object;
		func_1813(var_62_object);
	}
	return 0;
}


	task_3_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj();
	var_43_object = var_45_object;
	func_1326(var_44_bool, var_45_object);
	var_72_bool = var_44_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_73_object = Obj();
		var_43_object = var_73_object;
		func_1861(var_73_object);
		return 0;
	}
	func_726();
	var_83_object = Obj();
	var_43_object = var_83_object;
	func_1878(var_83_object);
	return 0;
	}


task_3_event_30(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj();
	var_8_object = var_11_object;
	var_9_object = var_12_object;
	func_1923(var_10_bool, var_11_object, var_12_object);
	if(var_10_bool != 0) {
		var_8_object = Obj();
		func_619();
	}
	return 0;
}


task_3_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object)
{
	var_9_int = 0;
	var_8_object = var_9_int;
	func_1963(var_9_int);
	return 0;
}


task_4_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	func_1861(var_9_object);
	var_19_bool = var_8_object != 0; //@nn
	if(var_19_bool != 0) {
		var_0_bool = var_8_object;
		Face(var_0_bool);
	}
	return 0;
}


task_4_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0;
	var_8_int = var_9_int;
	func_1963(var_9_int);
	return 0;
}


task_5_event_0(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	IsOverrideActive(var_10_bool);
	var_11_bool = var_10_bool == 0; //@nz
	if(var_11_bool != 0) {
		WorkWithCorpse(var_8_object);
	}
	return 2;
}


task_5_event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0;
}


task_5_event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	return 0;
}


task_5_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	return 0;
}


task_6_event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	func_1121();
	var_8_object = Obj();
	func_1917();
	return 0;
}


task_6_event_1(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1793(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_1121();
		var_95_object = Obj();
		var_8_object = var_95_object;
		func_1800(var_95_object);
	}
	return 0;
}


task_6_event_3(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1806(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_1121();
		var_95_object = Obj();
		var_8_object = var_95_object;
		func_1813(var_95_object);
	}
	return 0;
}


task_6_event_17(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1326(var_9_bool, var_10_object);
	var_43_bool = var_9_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_44_object = Obj();
		var_8_object = var_44_object;
		func_1861(var_44_object);
		return 0;
	}
	func_1121();
	var_87_object = Obj();
	var_8_object = var_87_object;
	func_1878(var_87_object);
	return 0;
}


task_6_event_7(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int)
{
	var_9_int = 0;
	var_8_int = var_9_int;
	func_1963(var_9_int);
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_1384(var_13_int, var_14_float);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	var_10_float = 0; var_11_float = 0;
	var_13_bool = var_9_string == "health";
	if(var_13_bool != 0) {
		GetProperty("health", var_11_float);
		var_16_bool = var_11_float <= (int)0;
		if(var_16_bool != 0) {
			SignalDeath(var_8_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	func_1888(var_9_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object)
{
	func_1582();
	
Label_412:
	func_496(var_6_bool, var_7_object);
	goto Label_412;
}
EMIT "Return(); Pop(0)";


func_2048(var_100_bool, var_101_object)
{
	var_102_bool = 0; var_103_object = Obj();
	var_101_object = var_103_object;
	func_1729(var_102_bool, var_103_object);
	var_102_bool = var_100_bool;
	return 0;
}


func_1793(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_object = var_12_object;
	func_2048(var_11_bool, var_12_object);
	var_11_bool = var_9_bool;
	return 0;
}


func_258(var_0_bool, var_1_object, var_148_bool, var_149_object, var_150_float, var_151_float, var_152_bool, var_153_bool)
{
	var_154_bool = 0; var_155_bool = 0; var_156_object = Obj(); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_float = 0; var_161_object = Obj(); var_162_bool = 0; var_163_bool = 0; var_164_object = Obj(); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_float = 0; var_169_object = Obj();
	var_0_bool = false;
	var_1_object = var_149_object;
	var_153_bool = var_163_bool;
	
Label_262:
	var_170_bool = 0; var_171_object = Obj();
	var_149_object = var_171_object;
	func_398(var_170_bool, var_171_object);
	var_174_bool = var_170_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_148_bool = 0;
		return 16;
	}
	@@var_149_object:GetPosition(var_165_cvector);
	GetPosition(var_166_cvector);
	var_167_cvector = var_165_cvector - var_166_cvector;
	var_168_float = var_167_cvector | var_167_cvector;
	var_175_bool = 0;
	var_175_bool = 0;
	var_177_bool = var_151_float > (int)0;
	if(var_177_bool != 0) {
		var_178_float = var_151_float * var_151_float;
		var_179_bool = var_168_float > var_178_float;
		if(var_179_bool != 0) {
			var_175_bool = 1;
		}
	}
	if(var_175_bool != 0) {
		Stop();
		var_148_bool = 0;
		return 16;
	}
	var_180_float = var_150_float * var_150_float;
	var_181_bool = var_168_float > var_180_float;
	if(var_181_bool != 0) {
		@@var_149_object:GetPFPosition(var_165_cvector);
		FindPathTo(var_169_object, var_165_cvector);
		var_182_bool = var_169_object != 0; //@nn
		if(var_182_bool != 0) {
			var_169_object = var_164_object;
			var_169_object = 0;
		}
		var_183_bool = var_164_object != 0; //@nn
		if(var_183_bool != 0) {
			var_184_bool = var_163_bool;
			if(var_184_bool == 0) goto Label_311;
			var_163_bool = 0;
			RotatePath(var_164_object, var_162_bool);
			var_185_bool = var_162_bool == 0; //@nz
			if(var_185_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_188_string = "";
				func_405(var_188_string);
				var_189_string = "";
				func_407(var_189_string);
				FollowPath(var_164_object, var_152_bool, var_162_bool, var_188_string, var_189_string);
				var_190_bool = var_162_bool == 0; //@nz
				if(var_190_bool != 0) {
					var_191_bool = var_0_bool;
					if(var_191_bool != 0) {
						var_164_object = 0;
						goto Label_358;
					EMIT "GOTO 0x14b";
					}
				} else {
					var_164_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_162_bool);
					var_194_bool = var_162_bool == 0; //@nz
					if(var_194_bool != 0) {
						var_195_bool = var_0_bool;
						if(var_195_bool != 0) {
							var_164_object = 0;
							goto Label_358;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_358;
	}
			var_169_object = 0;
			goto Label_356;

		Label_356:
			var_164_object = 0;

		}
		goto Label_262;
	}
Label_358:
	var_148_bool = !var_0_bool;
	return 16;
	
}


func_1923(var_10_bool, var_11_object, var_12_object)
{
	var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_12_object = var_18_object;
	func_1209(var_17_bool, var_18_object, "reputation");
	var_26_bool = var_17_bool == 0; //@nz
	if(var_26_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	@@var_12_object:GetProperty("reputation", var_15_float);
	var_29_bool = var_15_float < (float)0.5;
	if(var_29_bool != 0) {
		var_10_bool = 0;
		return 4;
	}
	CanSee(var_16_bool, var_11_object);
	var_30_bool = 0;
	var_30_bool = 1;
	var_31_bool = var_16_bool;
	if(var_31_bool != 1) {
		var_32_float = 0; var_33_object = Obj();
		var_11_object = var_33_object;
		func_1201(var_32_float, var_33_object);
		var_41_bool = var_32_float <= (float)160000.0;
		if(var_41_bool != 1) {
			var_30_bool = 0;
		}
	}
	if(var_30_bool != 0) {
		ReportReputationChange(var_11_object, var_12_object, (float)-0.20000000298023224);
		var_10_bool = 1;
		return 4;
	}
	var_10_bool = 0;
	return 4;
}


func_1540()
{
	var_46_int = 0; var_47_bool = 0; var_48_int = 0; var_49_bool = 0;
	ClearSubContainer((int)0);
	var_51_int = 0; var_52_int = 0;
	func_1510((int)600, (int)1500);
	irand(var_48_int, (int)200);
	var_73_bool = var_48_int != (int)0;
	if(var_73_bool != 0) {
		var_74_int = 0; var_75_string = "";
		func_1577(var_74_int, "ognemet_ammo");
		AddItem(var_49_bool, var_74_int, (int)0, var_48_int);
	}
	irand(var_48_int, (int)3);
	var_81_bool = var_48_int == (int)0;
	if(var_81_bool != 0) {
		var_82_int = 0; var_83_string = "";
		func_1577(var_82_int, "rusk");
		AddItem(var_49_bool, var_82_int, (int)0, (int)1);
	}
	return 4;
}


func_0(var_276_bool, var_277_object)
{
	var_280_bool = 0; var_281_object = Obj(); var_282_float = 0; var_283_float = 0; var_284_bool = 0; var_285_bool = 0;
	var_277_object = var_281_object;
	func_76(var_276_bool, var_277_object, var_280_bool, var_281_object, (float)350, (float)5000, (bool)0, (bool)1);
	var_280_bool = var_276_bool;
	return 0;
}


func_1285(var_24_bool, var_25_object)
{
	var_26_bool = 0; var_27_bool = 0;
	@@var_25_object:IsDead(var_27_bool);
	var_27_bool = var_24_bool;
	return 2;
}


func_1800(var_95_object)
{
	var_96_object = Obj();
	var_95_object = var_96_object;
	func_1760(var_95_object, var_96_object);
	return 0;
}


func_905(var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_string = ""; var_93_object = Obj(); var_94_bool = 0; var_95_bool = 0; var_96_float = 0; var_97_cvector = CVector(0,0,0); var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_string = ""; var_103_object = Obj(); var_104_bool = 0; var_105_bool = 0; var_106_float = 0; var_107_cvector = CVector(0,0,0);
	var_108_bool = var_87_object == 0; //@ne
	if(var_108_bool != 0) {
		var_109_string = "";
		func_992("fdie");
	} else {
		@@var_87_object:GetPosition(var_98_cvector);
		GetPosition(var_99_cvector);
		GetDirection(var_100_cvector);
		var_101_cvector = var_99_cvector - var_98_cvector;
		var_112_float = GetByIndex(var_101_cvector, 0);
		var_113_float = GetByIndex(var_100_cvector, 0);
		var_114_float = var_112_float * var_113_float;
		var_115_float = GetByIndex(var_101_cvector, 2);
		var_116_float = GetByIndex(var_100_cvector, 2);
		var_117_float = var_115_float * var_116_float;
		var_118_int = var_114_float + var_117_float;
		var_120_bool = var_118_int >= (int)0;
		if(var_120_bool != 0) {
			var_102_string = "fdie";
		} else {
				var_102_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_87_object = var_103_object;
		var_123_bool = IsFuncExist(var_87_object, "GetScriptProperty", (int)2);
		if(var_123_bool != 0) {
			@@var_87_object:HasScriptProperty(var_104_bool, "Owner");
			var_125_bool = var_104_bool;
			if(var_125_bool != 0) {
				@@var_87_object:GetScriptProperty(var_103_object, "Owner");
				var_127_bool = var_103_object == 0; //@ne
				if(var_127_bool != 0) {
					var_87_object = var_103_object;
				}
			}
		}
		var_130_bool = IsFuncExist(var_103_object, "@GetEyesHeight", (int)1);
		if(var_130_bool != 0) {
			@@var_103_object:GetEyesHeight(var_106_float);
			var_107_cvector = CVector(0.0, 0.0, 0.0);
			var_131_float = GetByIndex(var_107_cvector, 1);
			var_106_float = var_131_float;
			SetByIndex(var_107_cvector, 1) = var_131_float;
			LookAsync(var_87_object, "head", var_107_cvector);
			var_105_bool = 1;
		} else {
			var_105_bool = 0;

		}
		PlayAnimation("all", var_102_string);
		WaitForAnimEnd();
		var_134_bool = var_105_bool;
		if(var_134_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_102_string);
		RemoveEnvelope();
		var_103_object = 0;
	}
	return 20;
	
}


func_1290(var_13_bool, var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj();
	var_19_bool = var_14_object == 0; //@ne
	if(var_19_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	var_20_bool = 0;
	var_20_bool = 0;
	var_23_bool = IsFuncExist(var_14_object, "IsDead", (int)1);
	if(var_23_bool != 0) {
		var_24_bool = 0; var_25_object = Obj();
		var_14_object = var_25_object;
		func_1285(var_24_bool, var_25_object);
		if(var_24_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	GetScene(var_17_object);
	var_28_bool = var_17_object == 0; //@ne
	if(var_28_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	@@var_14_object:GetScene(var_18_object);
	var_29_bool = var_17_object != var_18_object;
	if(var_29_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	var_13_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_11(var_302_bool, var_303_object)
{
	var_304_bool = 0; var_305_object = Obj();
	var_303_object = var_305_object;
	func_1350(var_304_bool, var_305_object);
	var_304_bool = var_302_bool;
	return 0;
}


func_1806(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_object = var_12_object;
	func_2048(var_11_bool, var_12_object);
	var_11_bool = var_9_bool;
	return 0;
}


func_398(var_170_bool, var_171_object)
{
	var_172_bool = 0; var_173_object = Obj();
	var_171_object = var_173_object;
	func_1326(var_172_bool, var_173_object);
	var_172_bool = var_170_bool;
	return 0;
}


func_1679(var_221_cvector)
{
	var_222_cvector = CVector(0,0,0); var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_float = 0; var_226_bool = 0; var_227_cvector = CVector(0,0,0); var_228_float = 0; var_229_cvector = CVector(0,0,0); var_230_float = 0; var_231_bool = 0;
	GetPosition(var_227_cvector);
	GetHeight(var_228_float);
	var_232_float = GetByIndex(var_227_cvector, 1);
	var_234_float = var_228_float / (int)2;
	var_232_float = var_232_float + var_234_float;
	SetByIndex(var_227_cvector, 1) = var_232_float;
	var_229_cvector = var_221_cvector - var_227_cvector;
	var_235_int = var_229_cvector | var_229_cvector;
	var_230_float = sqrt(var_235_int);
	var_237_bool = var_230_float < (int)50;
	if(var_237_bool != 0) {
		var_231_bool = 0;
	} else {
			var_242_float = GetByIndex(var_229_cvector, 1);
			var_243_float = var_242_float / var_230_float;
			var_231_bool = var_243_float < (float)-0.1428571492433548;
	}
	var_239_bool = var_231_bool;
	if(var_239_bool != 0) {
		var_240_string = "cattack";
	} else {
		var_241_string = "attack";

	}
	PlayAnimation("all", var_240_string);
	return 10;
	
}


func_657()
{
	var_54_int = 0; var_55_int = 0; var_56_int = 0; var_57_int = 0; var_58_bool = 0; var_59_float = 0; var_60_bool = 0; var_61_int = 0; var_62_int = 0; var_63_int = 0; var_64_int = 0; var_65_bool = 0; var_66_float = 0; var_67_bool = 0;
	WaitForAnimEnd();
	var_68_bool = 0;
	func_1451(var_68_bool);
	var_71_bool = var_68_bool == 0; //@nz
	if(var_71_bool != 0) {
		return 14;
	}
	func_1493((int)0);
	var_72_int = var_61_int;
	var_62_int = 0;
	
Label_671:
	var_85_bool = 0;
	var_85_bool = 0;
	var_87_bool = var_62_int < (int)5;
	if(var_87_bool != 0) {
		var_88_bool = 0;
		func_1451(var_88_bool);
		if(var_88_bool != 0) {
			var_85_bool = 1;
		}
	}
	if(var_85_bool != 0) {
		irand(var_63_int, (int)3);
		var_91_bool = var_63_int == (int)0;
		if(var_91_bool != 0) {
			var_92_int = var_61_int;
			if(var_92_int == 0) goto Label_704;
			irand(var_64_int, var_61_int);
			var_94_string = ""; var_95_int = 0;
			var_64_int = var_95_int;
			func_1486(var_94_string, var_95_int);
			PlayAnimation("all", var_94_string);
			WaitForAnimEnd(var_65_bool);
			var_96_bool = var_65_bool == 0; //@nz
			if(var_96_bool != 0) {
			} else {
		} else {
				var_99_bool = var_63_int == (int)1;
				if(var_99_bool != 0) {
					rand(var_66_float, (int)4);
					var_102_int = var_66_float + (int)1;
					Sleep(var_102_int, var_67_bool);
					var_103_bool = var_67_bool == 0; //@nz
					if(var_103_bool != 0) {
						goto Label_725;
					}
					goto Label_722;
				}
				var_104_int = var_62_int;
				if(var_104_int == 0) goto Label_722;
				goto Label_725;
		}
		Label_722:
			var_62_int = var_62_int + (int)1;
			goto Label_671;

		}
	}
Label_725:
	return 14;
	
}


func_1813(var_95_object)
{
	var_96_object = Obj();
	var_95_object = var_96_object;
	func_1760(var_95_object, var_96_object);
	return 0;
}


func_405(var_188_string)
{
	var_188_string = "walk";
	return 0;
}


func_407(var_189_string)
{
	var_189_string = "run";
	return 0;
}


func_1819(var_352_bool, var_353_object)
{
	var_354_float = 0; var_355_float = 0;
	var_356_bool = 0;
	var_356_bool = 1;
	var_357_bool = 0;
	var_357_bool = 1;
	var_358_bool = var_353_object == 0; //@ne
	if(var_358_bool != 1) {
		var_359_bool = 0; var_360_object = Obj();
		var_353_object = var_360_object;
		func_1285(var_359_bool, var_360_object);
		var_361_bool = var_359_bool == 0; //@nz
		if(var_361_bool != 1) {
			var_357_bool = 0;
		}
	}
	if(var_357_bool != 1) {
		var_362_bool = 0; var_363_object = Obj(); var_364_string = "";
		var_353_object = var_363_object;
		func_1209(var_362_bool, var_363_object, "disease");
		var_365_bool = var_362_bool == 0; //@nz
		if(var_365_bool != 1) {
			var_356_bool = 0;
		}
	}
	if(var_356_bool != 0) {
		var_352_bool = 0;
		return 2;
	}
	@@var_353_object:GetProperty("disease", var_355_float);
	var_352_bool = var_355_float > (int)0;
	return 2;
}


func_1193(var_74_string, var_75_int)
{
	var_77_bool = var_75_int == (int)1;
	if(var_77_bool != 0) {
		var_74_string = "fire";
		return 0;
	}
	var_74_string = "phys";
	return 0;
}


func_1577(var_74_int, var_75_string)
{
	var_76_int = 0; var_77_int = 0;
	GetInvItemByName(var_77_int, var_75_string);
	var_77_int = var_74_int;
	return 2;
}


func_1963(var_9_int)
{
	var_10_object = Obj(); var_11_float = 0; var_12_object = Obj(); var_13_bool = 0; var_14_float = 0; var_15_float = 0; var_16_float = 0; var_17_object = Obj(); var_18_float = 0; var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; var_22_float = 0; var_23_float = 0;
	var_25_bool = var_9_int != (int)70;
	if(var_25_bool != 0) {
		return 14;
	}
	var_26_object = GlobalVars[0];
	var_27_bool = var_26_object == 0; //@ne
	if(var_27_bool != 0) {
		return 14;
	}
	var_28_object = GlobalVars[0];
	@@var_28_object:Intersect(var_17_object, var_18_float);
	var_29_object = GlobalVars[0];
	var_30_bool = GlobalVars[3];
	if(var_30_bool != 0) {
		var_31_float = 0; var_32_float = 0; var_33_float = 0;
		var_18_float = var_32_float;
		var_34_float = GlobalVars[2];
		var_34_float = var_33_float;
		func_1462(var_31_float, var_32_float, var_33_float);
	} else {
					var_113_float = 0.05000000074505806;
	}
	@@var_29_object:SetLength(var_31_float);
	
Label_1989:
	@@var_17_object:Next(var_20_bool, var_19_object);
	var_36_bool = var_20_bool;
	if(var_36_bool != 0) {
		var_37_bool = 0;
		var_37_bool = 0;
		var_38_bool = var_19_object != 0; //@nn
		if(var_38_bool != 0) {
			var_39_object = Obj();
			func_1456(var_39_object);
			var_42_bool = var_19_object != var_39_object;
			if(var_42_bool != 0) {
				var_37_bool = 1;
			}
		}
		if(var_37_bool != 0) {
			var_43_float = 0; var_44_object = Obj(); var_45_float = 0; var_46_int = 0;
			var_19_object = var_44_object;
			func_1221(var_43_float, var_44_object, (float)0.10000000149011612, (int)1);
			var_43_float = var_21_float;
			var_98_bool = 0; var_99_object = Obj(); var_100_string = "";
			var_19_object = var_99_object;
			func_1209(var_98_bool, var_99_object, "disease");
			if(var_98_bool != 0) {
				@@var_19_object:GetProperty("disease", var_22_float);
				var_103_bool = var_22_float <= (float)0.019999999552965164;
				if(var_103_bool != 0) {
				} else {
					(float)0 = (float)0 - (float)0.019999999552965164;
	}
				return 14;

			}
			@@var_19_object:SetProperty("disease", var_22_float);
		}
		var_105_bool = 0; var_106_object = Obj(); var_107_string = "";
		var_19_object = var_106_object;
		func_1209(var_105_bool, var_106_object, "fire");
		if(var_105_bool != 0) {
			@@var_19_object:GetProperty("fire", var_23_float);
			var_111_int = var_23_float + (float)0.10000000149011612;
			@@var_19_object:SetProperty("fire", var_111_int);
		}
	}
	goto Label_1989;
	
}
EMIT "Stack[-5] = 0";
EMIT "Stack[-7] = 0";


func_1451(var_68_bool)
{
	var_69_bool = 0; var_70_bool = 0;
	IsLoaded(var_70_bool);
	var_70_bool = var_68_bool;
	return 2;
}


func_1326(var_9_bool, var_10_object)
{
	var_11_int = 0; var_12_int = 0;
	var_13_bool = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1290(var_13_bool, var_14_object);
	var_30_bool = var_13_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_9_bool = 0;
		return 2;
	}
	var_31_bool = 0; var_32_object = Obj(); var_33_string = "";
	var_10_object = var_32_object;
	func_1209(var_31_bool, var_32_object, "noaccess");
	var_40_bool = var_31_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_9_bool = 1;
		return 2;
	}
	@@var_10_object:GetProperty("noaccess", var_12_int);
	var_9_bool = var_12_int == (int)0;
	return 2;
}


func_1582()
{
	var_8_float = 0; var_9_object = Obj(); var_10_object = Obj(); var_11_float = 0; var_12_object = Obj(); var_13_object = Obj();
	var_14_object = GlobalVars[4];
	func_1480(Obj());
	var_15_object = var_14_object;
	GlobalVars[4] = var_14_object;
	GetAttackDistance(var_11_float);
	var_18_float = GlobalVars[2];
	var_18_float = var_11_float / (float)600.0;
	GlobalVars[2] = var_18_float;
	GetScene(var_12_object);
	AddActorByType(var_13_object, "flame", var_12_object, CVector(0.0, 0.0, 0.0));
	var_22_object = Obj();
	func_1456(var_22_object);
	@@var_13_object:Attach(var_22_object, "flame");
	var_26_bool = GlobalVars[3];
	GlobalVars[3] = (bool)0;
	@@var_13_object:SetLength((float)0.05000000074505806);
	var_28_object = GlobalVars[0];
	var_13_object = var_28_object;
	GlobalVars[0] = var_28_object;
	SetTimer((int)70, (float)0.10000000149011612);
	return 6;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_560(var_0_bool, var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1201(var_119_float, var_120_object)
{
	var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_cvector = CVector(0,0,0); var_126_cvector = CVector(0,0,0);
	GetPosition(var_124_cvector);
	@@var_120_object:GetPosition(var_125_cvector);
	var_126_cvector = var_125_cvector - var_124_cvector;
	var_119_float = var_126_cvector | var_126_cvector;
	return 6;
}


func_178(var_0_bool, var_1_object, var_9_int)
{
	var_11_bool = var_9_int != (int)0;
	if(var_11_bool != 0) {
		return 0;
	}
	var_12_bool = 0; var_13_object = Obj();
	var_13_object = var_1_object;
	func_11(var_12_bool, var_13_object);
	var_37_bool = var_12_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1710(var_210_object)
{
	var_211_cvector = CVector(0,0,0); var_212_float = 0; var_213_cvector = CVector(0,0,0); var_214_float = 0;
	@@var_210_object:GetPosition(var_213_cvector);
	var_217_bool = IsFuncExist(var_210_object, "@GetHeight", (int)1);
	if(var_217_bool != 0) {
		@@var_210_object:GetHeight(var_214_float);
		var_218_float = GetByIndex(var_213_cvector, 1);
		var_220_float = var_214_float / (int)2;
		var_218_float = var_218_float + var_220_float;
		SetByIndex(var_213_cvector, 1) = var_218_float;
	}
	var_221_cvector = CVector(0,0,0);
	var_213_cvector = var_221_cvector;
	func_1679(var_221_cvector);
	return 4;
}


func_1456(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj();
	self(var_24_object);
	var_24_object = var_22_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1462(var_31_float, var_32_float, var_33_float)
{
	var_35_bool = var_32_float < var_33_float;
	if(var_35_bool != 0) {
		var_32_float = var_31_float;
	} else {
		var_33_float = var_31_float;
	}
	return 0;
	
}


func_1209(var_59_bool, var_60_object, var_61_string)
{
	var_62_bool = 0; var_63_bool = 0;
	var_66_bool = IsFuncExist(var_60_object, "HasProperty", (int)2);
	var_67_bool = var_66_bool == 0; //@nz
	if(var_67_bool != 0) {
		var_59_bool = 0;
		return 2;
	}
	@@var_60_object:HasProperty(var_61_string, var_63_bool);
	var_63_bool = var_59_bool;
	return 2;
}


func_1851(var_368_object)
{
	var_369_object = Obj();
	var_368_object = var_369_object;
	TaskCall(6);
	func_1020(var_368_object, var_369_object);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1469(var_91_float, var_92_float, var_93_float, var_94_float)
{
	var_95_bool = var_92_float < var_93_float;
	if(var_95_bool != 0) {
		var_93_float = var_91_float;
		return 0;
	}
	var_96_bool = var_92_float > var_94_float;
	if(var_96_bool != 0) {
		var_94_float = var_91_float;
		return 0;
	}
	var_92_float = var_91_float;
	return 0;
}


func_576(var_52_bool)
{
	var_52_bool = 0;
	return 0;
}


func_1729(var_102_bool, var_103_object)
{
	var_104_bool = 0; var_105_float = 0; var_106_bool = 0; var_107_float = 0;
	var_108_bool = 0; var_109_object = Obj();
	var_103_object = var_109_object;
	func_1326(var_108_bool, var_109_object);
	var_110_bool = var_108_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_102_bool = 0;
		return 4;
	}
	var_111_object = GlobalVars[4];
	@@var_111_object:in(var_106_bool, var_103_object);
	var_112_bool = var_106_bool;
	if(var_112_bool != 0) {
		var_102_bool = 1;
		return 4;
	}
	var_113_bool = 0; var_114_object = Obj(); var_115_string = "";
	var_103_object = var_114_object;
	func_1209(var_113_bool, var_114_object, "disease");
	var_116_bool = var_113_bool == 0; //@nz
	if(var_116_bool != 0) {
		var_102_bool = 0;
		return 4;
	}
	@@var_103_object:GetProperty("disease", var_107_float);
	var_102_bool = var_107_float > (int)0;
	return 4;
}


func_1861(var_44_object)
{
	var_45_bool = 0; var_46_bool = 0; var_47_bool = 0; var_48_bool = 0;
	var_49_bool = var_44_object == 0; //@ne
	if(var_49_bool != 0) {
		return 4;
	}
	var_50_object = GlobalVars[4];
	@@var_50_object:in(var_47_bool, var_44_object);
	var_51_bool = var_47_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_52_object = GlobalVars[4];
		@@var_52_object:add(var_44_object);
	}
	IsPlayerActor(var_44_object, var_48_bool);
	var_53_bool = var_48_bool;
	if(var_53_bool != 0) {
	}
	return 4;
}


func_1350(var_246_bool, var_247_object)
{
	var_248_object = Obj(); var_249_object = Obj(); var_250_int = 0; var_251_object = Obj(); var_252_object = Obj(); var_253_int = 0;
	var_254_bool = var_247_object == 0; //@ne
	if(var_254_bool != 0) {
		var_246_bool = 0;
		return 6;
	}
	GetScene(var_251_object);
	var_255_bool = var_251_object == 0; //@ne
	if(var_255_bool != 0) {
		var_246_bool = 0;
		return 6;
	}
	@@var_247_object:GetScene(var_252_object);
	var_256_bool = var_251_object != var_252_object;
	if(var_256_bool != 0) {
		var_246_bool = 0;
		return 6;
	}
	var_257_bool = 0; var_258_object = Obj(); var_259_string = "";
	var_247_object = var_258_object;
	func_1209(var_257_bool, var_258_object, "noaccess");
	var_260_bool = var_257_bool == 0; //@nz
	if(var_260_bool != 0) {
		var_246_bool = 1;
		return 6;
	}
	@@var_247_object:GetProperty("noaccess", var_253_int);
	var_246_bool = var_253_int == (int)0;
	return 6;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


func_1221(var_43_float, var_44_object, var_45_float, var_46_int)
{
	var_47_int = 0; var_48_string = ""; var_49_int = 0; var_50_float = 0; var_51_float = 0; var_52_float = 0; var_53_int = 0; var_54_string = ""; var_55_int = 0; var_56_float = 0; var_57_float = 0; var_58_float = 0;
	var_59_bool = 0; var_60_object = Obj(); var_61_string = "";
	var_44_object = var_60_object;
	func_1209(var_59_bool, var_60_object, "health");
	var_68_bool = var_59_bool == 0; //@nz
	if(var_68_bool != 0) {
		var_43_float = 0.0;
		return 12;
	}
	var_69_bool = 0; var_70_object = Obj(); var_71_string = "";
	var_44_object = var_70_object;
	func_1209(var_69_bool, var_70_object, "armor");
	var_72_bool = var_69_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_53_int = 0;
	} else {
			@@var_44_object:GetProperty("armor", var_53_int);
	}
	var_74_string = ""; var_75_int = 0;
	var_46_int = var_75_int;
	func_1193(var_74_string, var_75_int);
	var_54_string = "armor_" + var_74_string;
	var_78_bool = 0; var_79_object = Obj(); var_80_string = "";
	var_44_object = var_79_object;
	var_54_string = var_80_string;
	func_1209(var_78_bool, var_79_object, var_80_string);
	var_81_bool = var_78_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_55_int = 0;
	} else {
		@@var_44_object:GetProperty(var_54_string, var_55_int);

	}
	var_82_float = 0; var_83_float = 0; var_84_float = 0;
	var_85_int = var_53_int + var_55_int;
	var_83_float = var_85_int / (float)100.0;
	func_1462(var_82_float, var_83_float, (float)1);
	var_82_float = var_56_float;
	@@var_44_object:GetProperty("health", var_57_float);
	var_89_int = (int)1 - var_56_float;
	var_58_float = var_45_float * var_89_int;
	var_91_float = 0; var_92_float = 0; var_93_float = 0; var_94_float = 0;
	var_92_float = var_57_float - var_58_float;
	func_1469(var_91_float, var_92_float, (float)0, (float)1);
	@@var_44_object:SetProperty("health", var_91_float);
	var_58_float = var_43_float;
	return 12;
	
}


func_200(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1480(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	CreateObjectSet(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_76(var_0_bool, var_1_object, var_280_bool, var_281_object, var_282_float, var_283_float, var_284_bool, var_285_bool)
{
	var_286_bool = 0; var_287_bool = 0; var_288_object = Obj(); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_cvector = CVector(0,0,0); var_292_float = 0; var_293_object = Obj(); var_294_bool = 0; var_295_bool = 0; var_296_object = Obj(); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_object = Obj();
	var_0_bool = false;
	var_1_object = var_281_object;
	var_285_bool = var_295_bool;
	
Label_80:
	var_302_bool = 0; var_303_object = Obj();
	var_281_object = var_303_object;
	func_11(var_302_bool, var_303_object);
	var_306_bool = var_302_bool == 0; //@nz
	if(var_306_bool != 0) {
		var_280_bool = 0;
		return 16;
	}
	@@var_281_object:GetPosition(var_297_cvector);
	GetPosition(var_298_cvector);
	var_299_cvector = var_297_cvector - var_298_cvector;
	var_300_float = var_299_cvector | var_299_cvector;
	var_307_bool = 0;
	var_307_bool = 0;
	var_309_bool = var_283_float > (int)0;
	if(var_309_bool != 0) {
		var_310_float = var_283_float * var_283_float;
		var_311_bool = var_300_float > var_310_float;
		if(var_311_bool != 0) {
			var_307_bool = 1;
		}
	}
	if(var_307_bool != 0) {
		Stop();
		var_280_bool = 0;
		return 16;
	}
	var_312_float = var_282_float * var_282_float;
	var_313_bool = var_300_float > var_312_float;
	if(var_313_bool != 0) {
		@@var_281_object:GetPFPosition(var_297_cvector);
		FindPathTo(var_301_object, var_297_cvector);
		var_314_bool = var_301_object != 0; //@nn
		if(var_314_bool != 0) {
			var_301_object = var_296_object;
			var_301_object = 0;
		}
		var_315_bool = var_296_object != 0; //@nn
		if(var_315_bool != 0) {
			var_316_bool = var_295_bool;
			if(var_316_bool == 0) goto Label_129;
			var_295_bool = 0;
			RotatePath(var_296_object, var_294_bool);
			var_317_bool = var_294_bool == 0; //@nz
			if(var_317_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_320_string = "";
				func_216(var_320_string);
				var_321_string = "";
				func_218(var_321_string);
				FollowPath(var_296_object, var_284_bool, var_294_bool, var_320_string, var_321_string);
				var_322_bool = var_294_bool == 0; //@nz
				if(var_322_bool != 0) {
					var_323_bool = var_0_bool;
					if(var_323_bool != 0) {
						var_296_object = 0;
						goto Label_176;
					EMIT "GOTO 0x95";
					}
				} else {
					var_296_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_294_bool);
					var_326_bool = var_294_bool == 0; //@nz
					if(var_326_bool != 0) {
						var_327_bool = var_0_bool;
						if(var_327_bool != 0) {
							var_296_object = 0;
							goto Label_176;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_176;
	}
			var_301_object = 0;
			goto Label_174;

		Label_174:
			var_296_object = 0;

		}
		goto Label_80;
	}
Label_176:
	var_280_bool = !var_0_bool;
	return 16;
	
}


func_1486(var_78_string, var_79_int)
{
	var_80_string = ""; var_81_string = "";
	var_82_int = var_79_int;
	if(var_82_int != 0) {
		"idle" = "idle" + var_79_int;
	}
	var_81_string = var_78_string;
	return 2;
}


func_1493(var_72_int)
{
	var_73_int = 0; var_74_bool = 0; var_75_int = 0; var_76_bool = 0;
	var_75_int = 0;
	
Label_1495:
	var_78_string = ""; var_79_int = 0;
	var_75_int = var_79_int;
	func_1486(var_78_string, var_79_int);
	HasAnimation(var_76_bool, "all", var_78_string);
	var_83_bool = var_76_bool == 0; //@nz
	if(var_83_bool != 0) {
	} else {
		var_75_int = var_75_int + (int)1;
		goto Label_1495;
	}
	var_75_int = var_72_int;
	return 4;
	
}


func_1878(var_87_object)
{
	var_88_object = Obj();
	var_87_object = var_88_object;
	func_1861(var_88_object);
	var_89_object = Obj();
	var_87_object = var_89_object;
	func_1760(var_87_object, var_89_object);
	return 0;
}


func_726()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_216(var_320_string)
{
	var_320_string = "walk";
	return 0;
}


func_1623(var_12_bool)
{
	var_13_float = 0; var_14_float = 0; var_15_object = Obj(); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_float = 0; var_19_float = 0; var_20_object = Obj(); var_21_cvector = CVector(0,0,0); var_22_float = 0;
	var_23_bool = var_12_bool;
	if(var_23_bool != 0) {
		var_24_float = GlobalVars[2];
		var_24_float = var_18_float;
	} else {
				var_18_float = 0.05000000074505806;
	}
	var_25_object = GlobalVars[0];
	@@var_25_object:GetLength(var_19_float);
	var_26_bool = var_18_float < var_19_float;
	if(var_26_bool != 0) {
		var_18_float = var_19_float;
	}
	var_27_object = GlobalVars[0];
	@@var_27_object:SetLength(var_19_float);
	var_28_bool = GlobalVars[3];
	var_29_bool = var_28_bool != var_12_bool;
	if(var_29_bool != 0) {
		var_30_bool = var_12_bool;
		if(var_30_bool != 0) {
			var_31_object = GlobalVars[1];
			var_32_bool = var_31_object == 0; //@ne
			if(var_32_bool != 0) {
				var_21_cvector = CVector(0.0, 0.0, 0.0);
				GetHeight(var_22_float);
				var_33_float = GetByIndex(var_21_cvector, 1);
				var_22_float = var_33_float;
				SetByIndex(var_21_cvector, 1) = var_33_float;
				PlayLoopedGlobalSound(var_20_object, "flame_loop", var_21_cvector, (int)0, (int)200);
				var_37_object = GlobalVars[1];
				var_20_object = var_37_object;
				GlobalVars[1] = var_37_object;
				var_20_object = 0;
			}
			var_38_object = GlobalVars[1];
			@@var_38_object:FadeIn((int)2);
		} else {
			var_41_object = GlobalVars[1];
			var_42_bool = var_41_object != 0; //@nn
			if(var_42_bool == 0) goto Label_1675;
			var_43_object = GlobalVars[1];
			@@var_43_object:FadeOut((int)2);

		}
	Label_1675:
		var_40_bool = GlobalVars[3];
		var_12_bool = var_40_bool;
		GlobalVars[3] = var_40_bool;
	}
	return 10;
	
}


func_218(var_321_string)
{
	var_321_string = "run";
	return 0;
}


func_731(var_0_bool, var_90_object, var_91_object, var_145_bool)
{
	var_93_bool = 0; var_94_float = 0; var_95_object = Obj(); var_96_bool = 0; var_97_float = 0; var_98_object = Obj();
	var_0_bool = var_91_object;
	Face(var_91_object);
	SetAttackState((bool)1);
	
Label_739:
	var_100_bool = 0; var_101_object = Obj();
	var_101_object = var_0_bool;
	func_2048(var_100_bool, var_101_object);
	if(var_100_bool != 0) {
		var_119_float = 0; var_120_object = Obj();
		var_120_object = var_0_bool;
		func_1201(var_119_float, var_120_object);
		var_119_float = var_97_float;
		var_128_bool = var_97_float <= (float)90000.0;
		if(var_128_bool != 0) {
			var_129_bool = (bool)0 == 0; //@nz
			if(var_129_bool != 0) {
				SetAttackState((bool)1);
				var_131_bool = 0;
				func_1623((bool)1);
				PlayAnimation("all", "attack_on");
			} else {
				PlayAnimation("all", "bjump");
		}
			var_137_bool = var_97_float >= (float)490000.0;
			if(var_137_bool != 0) {
				var_138_bool = (bool)1;
				if(var_138_bool != 0) {
					SetAttackState((bool)0);
					var_140_bool = 0;
					func_1623((bool)0);
					PlayAnimation("all", "attack_off");
				} else {
					StopAsync();
					var_143_object = Obj(); var_144_object = Obj();
					var_144_object = var_0_bool;
					TaskCall(1);
					func_220(var_147_object, var_143_object, var_144_object);
					TaskReturn();
					var_145_bool = var_98_object;
					var_0_bool = var_98_object;
					var_200_bool = var_0_bool == 0; //@ne
					if(var_200_bool != 0) {
					} else {
						Face(var_0_bool);
						var_98_object = 0;
			}
					var_205_bool = (bool)0 == 0; //@nz
					if(var_205_bool != 0) {
						SetAttackState((bool)1);
						var_207_bool = 0;
						func_1623((bool)1);
						PlayAnimation("all", "attack_on");
						var_96_bool = 1;
						goto Label_826;
					}
					var_210_object = Obj();
					var_210_object = var_0_bool;
					func_1710(var_210_object);
				}
	}
			SetAttackState((bool)0);
			PlayAnimation("all", "attack_off");
			var_204_bool = 0;
			func_1623((bool)0);
			StopAsync();
			var_90_object = var_0_bool;
			return 6;
		}
		goto Label_826;
	}
	goto Label_826;
	
Label_826:
	WaitForAnimEnd();
	ReportAttack(var_0_bool);
	goto Label_739;
	
}


func_220(var_2_bool, var_143_object, var_144_object)
{
	var_2_bool = var_144_object;
	var_148_bool = 0; var_149_object = Obj(); var_150_float = 0; var_151_float = 0; var_152_bool = 0; var_153_bool = 0;
	var_144_object = var_149_object;
	func_258(var_143_object, var_144_object, var_148_bool, var_149_object, (float)500.0, (float)5000, (bool)0, (bool)1);
	var_199_bool = var_148_bool == 0; //@nz
	if(var_199_bool != 0) {
		var_2_bool = 0;
	}
	var_143_object = var_2_bool;
	return 0;
}


func_863(var_10_object)
{
	KillTimer((int)70);
	var_12_bool = 0;
	func_1623((bool)0);
	var_45_object = GlobalVars[0];
	RemoveActor(var_45_object);
	func_1540();
	var_86_object = Obj();
	var_10_object = var_86_object;
	func_882(var_86_object);
	return 0;
}


func_992(var_109_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_109_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_109_string);
	RemoveEnvelope();
	return 0;
}


func_1121()
{
	var_54_bool = 0;
	func_1623((bool)0);
	Stop();
	StopAsync();
	return 0;
}


func_1760(var_89_object, var_92_object)
{
	var_90_object = Obj(); var_91_object = Obj();
	var_89_object = var_91_object;
	TaskCall(4);
	func_731(var_89_object, var_92_object, var_90_object, var_91_object);
	TaskReturn();
	var_92_object = var_89_object;
	ResetAAS();
	var_245_bool = 0;
	var_245_bool = 0;
	var_246_bool = 0; var_247_object = Obj();
	var_89_object = var_247_object;
	func_1350(var_246_bool, var_247_object);
	if(var_246_bool != 0) {
		var_263_bool = 0; var_264_object = Obj();
		var_89_object = var_264_object;
		func_1285(var_263_bool, var_264_object);
		if(var_263_bool != 0) {
			var_245_bool = 1;
		}
	}
	if(var_245_bool != 0) {
		var_265_object = Obj();
		var_89_object = var_265_object;
		TaskCall(6);
		func_1020(var_89_object, var_265_object);
		TaskReturn();
		ResetAAS();
	}
	return 0;
}


func_1888(var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	TaskCall(5);
	func_863(var_10_object);
	TaskReturn();
	return 0;
}


func_1510(var_51_int, var_52_int)
{
	var_53_int = 0; var_54_int = 0; var_55_int = 0; var_56_bool = 0; var_57_int = 0; var_58_int = 0; var_59_int = 0; var_60_bool = 0;
	var_61_bool = var_51_int > var_52_int;
	if(var_61_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_63_bool = var_51_int != var_52_int;
	if(var_63_bool != 0) {
		var_64_int = var_52_int - var_51_int;
		irand(var_58_int, var_64_int);
	} else {
		var_70_bool = var_51_int == (int)0;
		if(var_70_bool == 0) goto Label_1528;
		return 8;
	}
Label_1528:
	(int)0 = (int)0 + var_51_int;
	var_66_bool = var_57_int == (int)0;
	if(var_66_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_59_int, "Money");
	AddItem(var_60_bool, var_59_int, (int)0, var_57_int);
	return 8;
	
}


func_360(var_0_bool, var_1_object, var_9_int)
{
	var_11_bool = var_9_int != (int)0;
	if(var_11_bool != 0) {
		return 0;
	}
	var_12_bool = 0; var_13_object = Obj();
	var_13_object = var_1_object;
	func_398(var_12_bool, var_13_object);
	var_48_bool = var_12_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1384(var_12_object, var_13_int)
{
	var_15_object = Obj(); var_16_object = Obj(); var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_int = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_string = ""; var_25_object = Obj(); var_26_object = Obj(); var_27_cvector = CVector(0,0,0); var_28_float = 0; var_29_int = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_string = "";
	var_35_bool = 0;
	var_35_bool = 0;
	var_37_bool = var_13_int != (int)4;
	if(var_37_bool != 0) {
		var_39_bool = var_13_int != (int)5;
		if(var_39_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		GetScene(var_25_object);
		GetPosition(var_27_cvector);
		GetEyesHeight(var_28_float);
		var_40_float = GetByIndex(var_27_cvector, 1);
		var_42_float = var_28_float / (int)2;
		var_40_float = var_40_float + var_42_float;
		SetByIndex(var_27_cvector, 1) = var_40_float;
		AddActorByType(var_26_object, "scripted", var_25_object, var_27_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_26_object = 0;
		var_25_object = 0;
	}
	var_46_bool = var_12_object == 0; //@ne
	if(var_46_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_29_int);
	var_48_bool = var_29_int < (int)0;
	if(var_48_bool != 0) {
		return 20;
	}
	@@var_12_object:GetPosition(var_30_cvector);
	GetPosition(var_31_cvector);
	GetDirection(var_32_cvector);
	var_33_cvector = var_31_cvector - var_30_cvector;
	var_49_float = GetByIndex(var_33_cvector, 0);
	var_50_float = GetByIndex(var_32_cvector, 0);
	var_51_float = var_49_float * var_50_float;
	var_52_float = GetByIndex(var_33_cvector, 2);
	var_53_float = GetByIndex(var_32_cvector, 2);
	var_54_float = var_52_float * var_53_float;
	var_55_int = var_51_float + var_54_float;
	var_57_bool = var_55_int >= (int)0;
	if(var_57_bool != 0) {
		var_34_string = "fhit";
	} else {
		var_34_string = "bhit";
	}
	var_60_int = var_34_string + "1";
	var_62_int = var_34_string + "2";
	FadeSecondaryAnimation("hit_react", var_60_int, var_62_int, (int)-10);
	return 20;
	
}


func_496(var_0_bool, var_1_object)
{
	var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_bool = 0; var_36_object = Obj(); var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_bool = 0; var_43_object = Obj(); var_44_bool = 0;
	var_0_bool = false;
	var_1_object = false;
	rand(var_38_float, (float)0.5);
	Sleep(var_38_float);
	
Label_504:
	var_46_bool = var_0_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_47_bool = var_1_object == 0; //@nz
		if(var_47_bool != 0) {

		Label_508:
			GetPosition(var_40_cvector);
			GetCameraFarDistance(var_41_float);
			var_41_float = var_41_float * (float)2.5;
			GetRandomPFPointInCircle(var_39_cvector, var_40_cvector, var_41_float, var_42_bool);
			var_49_bool = var_42_bool;
			if(var_49_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_508;
		}
				var_1_object = false;
	}
			return 14;
	}
	goto Label_525;
	
Label_525:
	FindShiftedPathTo(var_43_object, var_39_cvector);
	var_50_bool = var_43_object != 0; //@nn
	if(var_50_bool != 0) {
		RotatePath(var_43_object, var_44_bool);
		var_51_bool = var_44_bool;
		if(var_51_bool != 0) {
			var_52_bool = 0;
			func_576(var_52_bool);
			FollowPath(var_43_object, var_52_bool, var_44_bool);
			var_43_object = 0;
			var_53_bool = var_44_bool;
			if(var_53_bool != 0) {
				TaskCall(3);
				func_657();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_43_object = 0;
	goto Label_504;
	
}


func_882(var_86_object)
{
	EventDisable(0);
	var_87_object = Obj();
	var_86_object = var_87_object;
	func_905(var_87_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_893:
	Hold();
	goto Label_893;
}
EMIT "Return(); Pop(0)";


func_1020(var_265_object, var_278_bool)
{
	var_266_bool = 0; var_267_float = 0; var_268_float = 0; var_269_bool = 0; var_270_float = 0; var_271_float = 0;
	var_272_bool = 0; var_273_object = Obj(); var_274_string = "";
	var_265_object = var_273_object;
	func_1209(var_272_bool, var_273_object, "disease");
	var_275_bool = var_272_bool == 0; //@nz
	if(var_275_bool != 0) {
		return 6;
	}
	var_276_bool = 0; var_277_object = Obj();
	var_265_object = var_277_object;
	TaskCall(0);
	func_0(var_276_bool, var_277_object);
	TaskReturn();
	var_331_bool = var_278_bool == 0; //@nz
	if(var_331_bool != 0) {
		return 6;
	}
	Face(var_265_object);
	WaitForAnimEnd(var_269_bool);
	var_332_bool = var_269_bool;
	if(var_332_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd(var_269_bool);
		var_335_bool = var_269_bool;
		if(var_335_bool != 0) {
			var_336_bool = 0;
			func_1623((bool)1);

		Label_1056:
			PlayAnimation("all", "cattack");
			WaitForAnimEnd(var_269_bool);
			var_339_bool = 0;
			var_339_bool = 1;
			var_340_bool = var_269_bool == 0; //@nz
			if(var_340_bool != 1) {
				var_341_bool = 0; var_342_object = Obj();
				var_265_object = var_342_object;
				func_1350(var_341_bool, var_342_object);
				var_343_bool = var_341_bool == 0; //@nz
				if(var_343_bool != 1) {
					var_339_bool = 0;
				}
			}
			if(var_339_bool != 0) {
			} else {
				@@var_265_object:GetProperty("disease", var_270_float);
				var_350_bool = var_270_float <= (float)0.019999999552965164;
				if(var_350_bool != 0) {
					@@var_265_object:SetProperty("disease", (float)0.0);
					goto Label_1106;
				}
				var_355_int = var_270_float - (float)0.019999999552965164;
				@@var_265_object:SetProperty("disease", var_355_int);
				var_356_bool = 0; var_357_object = Obj(); var_358_string = "";
				var_265_object = var_357_object;
				func_1209(var_356_bool, var_357_object, "fire");
				if(var_356_bool != 0) {
					@@var_265_object:GetProperty("fire", var_271_float);
					var_362_int = var_271_float + (float)0.10000000149011612;
					@@var_265_object:SetProperty("fire", var_362_int);
				}
				goto Label_1056;
			}
		Label_1106:
			var_344_bool = 0;
			func_1623((bool)0);
			var_345_bool = var_269_bool;
			if(var_345_bool != 0) {
				PlayAnimation("all", "attack_off");
				WaitForAnimEnd();
			}
		}
	}
	StopAsync();
	return 6;
	
}


func_382(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


