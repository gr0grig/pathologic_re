// @IMPORTS: Face/1,Sleep/2,StopAsync/0,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,PlayAnimation/2,WaitForAnimEnd/1,PlayGlobalSound/4,LockAnimationEnd/2,WaitForAnimEnd/0,Stop/0,SetAttackState/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,SendPlayerEnemy/2,GetDirection/1,GetGeometryLocator/4,GetScene/1,AddActorByType/6,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,Hold/0,IsPlayerActor/2,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,SetRTEnvelope/2,IsOverrideActive/1,GetPosition/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,RotateAsync/2,GetEyesHeight/1,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,PlayGlobalMusic/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,GetProperty/2,SignalDeath/1,ReportReputationChange/4,ResetAAS/0,ReportReputationChange/3
// @STRINGS: W:all|W:shoot_begin|W:shot|W:shoot_end|W:attack_off|W:attack_on|W:hunt|W:@Stop hunt|W:attack_begin1|W:attack|W:light-dynamic|W:soldier_fire.xml|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|A:in|W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|W:branch|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:reputation|W:bomber|W:hunter|W:grabitel|W:disease|W:dog|A:RemoveStationaryActor
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
// @EVENT_1: op=0x282 vars=object
// @EVENT_3: op=0x28e vars=object
// @EVENT_17: op=0x29a vars=object
// @TASK_4: vars=cvector,cvector params=1
// @EVENT_3: op=0x2b8 vars=object
// @EVENT_17: op=0x2d6 vars=object
// @EVENT_30: op=0x2ea vars=object,object,bool
// @EVENT_1: op=0x2f7 vars=object
// @TASK_5: vars= params=1
// @EVENT_0: op=0x374 vars=object
// @EVENT_22: op=0x3f3 vars=object,int,float,float
// @EVENT_16: op=0x3f5 vars=object,string
// @EVENT_41: op=0x3f7 vars=object
// @STANDALONE_EVENT_22: op=0x649 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x651 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x65b vars=object,string
// @STANDALONE_EVENT_41: op=0x668 vars=object
// @PE: 0x20,0x29,0x32,0x3e,0x52,0x5f,0x6d,0xf1,0x105,0x119,0x1b2,0x1c0,0x252,0x26a,0x29a,0x2a2,0x2af,0x2d6,0x2ea,0x2f7,0x35f,0x365,0x3d9,0x3f3,0x3f5,0x3f7,0x3f9,0x56a,0x5d5,0x5dc,0x5ed,0x5f6,0x600,0x63c,0x649,0x651,0x668,0x709,0x72c,0x74c,0x7ba,0x7da

task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_24();
	var_8_cvector = Obj();
	func_1640();
	return 0;
}


task_0_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object;
	if(var_9_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_0_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object;
	if(var_9_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_12_object = Obj();
		var_12_object = var_0_object;
		func_1327(var_12_object);
	}
	return 0;
}


	task_0_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1177(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_97_object = var_127_object;
		func_1812(var_127_object);
		return 0;
	}
	func_24();
	var_143_object = Obj();
	var_97_object = var_143_object;
	func_1836(var_143_object);
	return 0;
	}


task_0_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_bool = var_12_object;
	var_9_cvector = var_13_object;
	var_10_cvector = var_14_bool;
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_bool = Obj();
		func_62();
	}
	return 0;
}


task_0_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_cvector = var_10_object;
	func_1956(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_24();
		var_129_object = Obj();
		var_8_cvector = var_129_object;
		func_1978(var_129_object);
	}
	return 0;
}


task_0_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_10_bool = var_8_cvector != (int)100;
	if(var_10_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


	task_1_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1177(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_97_object = var_127_object;
		func_1812(var_127_object);
		return 0;
	}
	func_274();
	var_142_object = Obj();
	var_97_object = var_142_object;
	func_1836(var_142_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_bool = var_12_object;
	var_9_cvector = var_13_object;
	var_10_cvector = var_14_bool;
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_bool = Obj();
		func_241();
	}
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_274();
	var_8_cvector = Obj();
	func_1640();
	return 0;
}


task_2_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0;
	var_9_bool = 0;
	var_10_bool = var_2_bool;
	if(var_10_bool != 0) {
		var_11_bool = var_8_cvector == var_0_object;
		if(var_11_bool != 0) {
			var_9_bool = 1;
		}
	}
	if(var_9_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_0_object;
		func_1327(var_12_object);
	}
	return 0;
}


task_2_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0;
	var_9_bool = 0;
	var_10_bool = var_2_bool;
	if(var_10_bool != 0) {
		var_11_bool = var_8_cvector == var_0_object;
		if(var_11_bool != 0) {
			var_9_bool = 1;
		}
	}
	if(var_9_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1177(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		return 0;
	}
	var_127_object = Obj();
	var_97_object = var_127_object;
	func_1812(var_127_object);
	var_142_bool = var_97_object == var_0_object;
	if(var_142_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_97_object;
		var_143_bool = var_2_bool;
		if(var_143_bool == 0) goto Label_617;
		StopAnimation();
		StopGroup0();
	}
Label_617:
	return 0;
	
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_bool = var_12_object;
	var_9_cvector = var_13_object;
	var_10_cvector = var_14_bool;
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_bool = Obj();
		func_594();
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0;
	IsPlayerActor(var_8_cvector, var_10_bool);
	var_11_bool = var_10_bool;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_8_cvector = var_12_object;
		TaskCall(4);
		func_674(var_12_object);
		TaskReturn();
	}
	return 2;
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0;
	IsPlayerActor(var_8_cvector, var_10_bool);
	var_11_bool = var_10_bool;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_8_cvector = var_12_object;
		TaskCall(4);
		func_674(var_12_object);
		TaskReturn();
	}
	return 2;
}


task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
{
	var_9_object = Obj();
	var_8_cvector = var_9_object;
	TaskCall(4);
	func_674(var_9_object);
	TaskReturn();
	return 0;
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_8_object = var_12_object;
	func_1177(var_11_bool, var_12_object);
	var_45_bool = var_11_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj();
	var_8_object = var_47_object;
	func_1876(var_46_bool, var_47_object);
	var_124_bool = var_46_bool == 0; //@nz
	if(var_124_bool != 0) {
		var_125_object = GlobalVars[0];
		@@var_125_object:in(var_10_bool, var_8_object);
		var_126_bool = var_10_bool == 0; //@nz
		if(var_126_bool != 0) {
			return 2;
		}
	}
	func_857();
	var_127_object = Obj();
	var_8_object = var_127_object;
	TaskCall(0);
	func_0(var_128_object, var_127_object);
	TaskReturn();
	return 2;
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1177(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_97_object = var_127_object;
		func_1812(var_127_object);
		return 0;
	}
	func_857();
	var_142_object = Obj();
	var_97_object = var_142_object;
	func_1836(var_142_object);
	return 0;
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_object = var_12_object;
	var_9_object = var_13_object;
	var_10_bool = var_14_bool;
	func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_object = Obj();
		func_726();
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1956(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_857();
		var_128_object = Obj();
		var_8_object = var_128_object;
		func_2010(var_128_object);
	}
	return 0;
}


task_5_event_0(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	IsOverrideActive(var_10_bool);
	var_11_bool = var_10_bool == 0; //@nz
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_8_object = var_12_object;
		func_1596(var_12_object);
	}
	return 2;
}


task_5_event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0;
}


task_5_event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
{
	return 0;
}


task_5_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	return 0;
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_1245(var_12_object, var_13_int, var_14_float);
	return 0;
}


event_43(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_8_object = var_14_object;
	var_9_int = var_15_int;
	var_10_float = var_16_float;
	var_12_cvector = var_17_cvector;
	var_13_cvector = var_18_cvector;
	func_1313(var_16_float, var_17_cvector, var_18_cvector);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_string)
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


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1046(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		var_13_object = Obj();
		func_1473(var_13_object);
		ReportReputationChange(var_8_object, var_13_object, (float)0.05000000074505806, (bool)1);
	}
	var_18_object = Obj();
	var_8_object = var_18_object;
	func_2016(var_18_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	EventDisable(1);
	EventDisable(3);
	Sleep((int)1);
	EventEnable(1);
	EventEnable(3);
	
Label_638:
	Hold();
	goto Label_638;
}
EMIT "Return(); Pop(0)";


func_1536(var_204_float, var_205_cvector, var_206_cvector)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0);
	var_205_cvector = var_208_cvector;
	var_206_cvector = var_209_cvector;
	func_1517(var_207_float, var_208_cvector, var_209_cvector);
	var_216_float = 0; var_217_cvector = CVector(0,0,0);
	var_205_cvector = var_217_cvector;
	func_1526(var_216_float, var_217_cvector);
	var_225_float = 0; var_226_cvector = CVector(0,0,0);
	var_206_cvector = var_226_cvector;
	func_1526(var_225_float, var_226_cvector);
	var_227_float = var_216_float * var_225_float;
	var_204_float = var_207_float / var_227_float;
	return 0;
}


func_0(var_0_object, var_127_object)
{
	var_129_bool = 0; var_130_bool = 0;
	var_0_object = var_127_object;
	Face(var_127_object);
	
Label_4:
	Sleep((float)0.5, var_130_bool);
	var_132_bool = 0;
	var_132_bool = 1;
	var_133_bool = var_130_bool == 0; //@nz
	if(var_133_bool != 1) {
		var_134_bool = 0; var_135_object = Obj();
		var_135_object = var_0_object;
		func_1177(var_134_bool, var_135_object);
		var_136_bool = var_134_bool == 0; //@nz
		if(var_136_bool != 1) {
			var_132_bool = 0;
		}
	}
	if(var_132_bool != 0) {
	} else {
		goto Label_4;
	}
	StopAsync();
	return 2;
	
}


func_1794()
{
	var_12_object = GlobalVars[0];
	func_1511(Obj());
	var_13_object = var_12_object;
	GlobalVars[0] = var_12_object;
	return 0;
}


func_773(var_0_object, var_1_object)
{
	var_294_int = 0; var_295_bool = 0; var_296_cvector = CVector(0,0,0); var_297_object = Obj(); var_298_int = 0; var_299_bool = 0; var_300_cvector = CVector(0,0,0); var_301_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_778:
	func_862();
	irand(var_298_int, (int)10);
	var_304_int = var_298_int + (int)5;
	Sleep(var_304_int, var_299_bool);
	var_305_bool = var_299_bool;
	if(var_305_bool != 0) {
		func_695();
	} else {
		func_862();
		GetPFPosition(var_300_cvector);
		var_306_float = 0; var_307_cvector = CVector(0,0,0); var_308_cvector = CVector(0,0,0);
		var_307_cvector = var_1_object;
		var_300_cvector = var_308_cvector;
		func_1489(var_306_float, var_307_cvector, var_308_cvector);
		var_312_bool = var_306_float > (int)40000;
		if(var_312_bool != 0) {
			FindPathTo(var_301_object, var_1_object);
			var_313_bool = var_301_object != 0; //@nn
			if(var_313_bool != 0) {
				RotatePath(var_301_object, var_299_bool);
				var_314_bool = var_299_bool == 0; //@nz
				if(var_314_bool != 0) {
				} else {
					FollowPath(var_301_object, (bool)0, var_299_bool);
					var_316_bool = var_299_bool == 0; //@nz
					if(var_316_bool != 0) {
						goto Label_854;
					}
					var_317_float = GetByIndex(var_0_object, 0);
					var_318_float = GetByIndex(var_0_object, 2);
					Rotate(var_317_float, var_318_float, var_299_bool);
					var_319_bool = var_299_bool == 0; //@nz
					if(var_319_bool != 0) {
						goto Label_854;
					}
					WaitForAnimEnd(var_299_bool);
					var_320_bool = var_299_bool == 0; //@nz
					if(var_320_bool != 0) {
						goto Label_854;
					}
					goto Label_855;
				EMIT "GOTO 0x347";
			}
				Sleep((int)1);
				var_301_object = 0;
				goto Label_854;
		}
			var_322_float = GetByIndex(var_0_object, 0);
			var_323_float = GetByIndex(var_0_object, 2);
			Rotate(var_322_float, var_323_float, var_299_bool);
			var_324_bool = var_299_bool == 0; //@nz
			if(var_324_bool != 0) {
				goto Label_854;
			}
			WaitForAnimEnd(var_299_bool);
			var_325_bool = var_299_bool == 0; //@nz
			if(var_325_bool != 0) {
				goto Label_854;
			}
			goto Label_855;
		}
	Label_854:
		goto Label_794;
	}
Label_855:
	goto Label_778;
	
}
EMIT "Return(); Pop(8)";


func_1031(var_42_cvector, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_43_object:GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
	return 4;
}


func_1801(var_134_object, var_135_bool)
{
	var_136_object = Obj(); var_137_bool = 0;
	var_134_object = var_136_object;
	var_135_bool = var_137_bool;
	TaskCall(2);
	func_290(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1038(var_374_float, var_375_object)
{
	var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0);
	GetPosition(var_379_cvector);
	@@var_375_object:GetPosition(var_380_cvector);
	var_381_cvector = var_380_cvector - var_379_cvector;
	var_374_float = var_381_cvector | var_381_cvector;
	return 6;
}


func_1553(var_305_float)
{
	var_306_object = Obj(); var_307_object = Obj();
	CreateFloatVector(var_307_object);
	@@var_307_object:add(var_305_float);
	var_309_bool = var_305_float < (int)0;
	if(var_309_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_307_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_274()
{
	StopAsync();
	StopGroup0();
	Stop();
	return 0;
}


func_1812(var_127_object)
{
	var_128_bool = 0; var_129_bool = 0;
	var_130_bool = var_127_object == 0; //@ne
	if(var_130_bool != 0) {
		return 2;
	}
	var_131_object = GlobalVars[0];
	@@var_131_object:in(var_129_bool, var_127_object);
	var_132_bool = var_129_bool == 0; //@nz
	if(var_132_bool != 0) {
		var_133_object = GlobalVars[0];
		@@var_133_object:add(var_127_object);
	}
	var_134_bool = 0; var_135_object = Obj();
	var_127_object = var_135_object;
	func_1046(var_134_bool, var_135_object);
	if(var_134_bool != 0) {
		var_138_object = Obj();
		func_1473(var_138_object);
		ReportReputationChange(var_127_object, var_138_object, (float)0.0);
	}
	return 2;
}


func_1046(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_12_bool = var_9_bool;
	return 2;
}


func_24()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1177(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_1141(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_1051(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_1051(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0;
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", (int)2);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
	return 2;
}


func_1313(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetScene(var_21_object);
	AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	var_25_object = Obj();
	var_14_object = var_25_object;
	func_1201(var_25_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1570(var_145_object)
{
	var_146_bool = 0; var_147_bool = 0;
	IsPlayerActor(var_145_object, var_147_bool);
	var_148_bool = var_147_bool;
	if(var_148_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_674(var_9_object)
{
	func_1794();
	var_9_object = Obj();
	func_726();
	
Label_682:
	func_687();
	goto Label_682;
}
EMIT "Return(); Pop(0)";


func_1956(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	var_13_bool = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1177(var_13_bool, var_14_object);
	var_47_bool = var_13_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_9_bool = 0;
		return 2;
	}
	var_48_object = GlobalVars[0];
	@@var_48_object:in(var_12_bool, var_10_object);
	var_49_bool = var_12_bool;
	if(var_49_bool != 0) {
		var_9_bool = 1;
		return 2;
	}
	var_50_bool = 0; var_51_object = Obj();
	var_10_object = var_51_object;
	func_1876(var_50_bool, var_51_object);
	var_50_bool = var_9_bool;
	return 2;
}


func_290(var_0_object, var_1_object, var_2_bool, var_136_object, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0;
	var_0_object = var_136_object;
	var_145_object = Obj();
	var_145_object = var_0_object;
	func_1570(var_145_object);
	func_1579();
	Face(var_0_object);
	var_156_bool = var_137_bool;
	if(var_156_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_316:
	var_162_bool = 0; var_163_object = Obj();
	var_163_object = var_0_object;
	func_1177(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		CanSee(var_144_bool, var_0_object);
		var_164_bool = var_144_bool;
		if(var_164_bool != 0) {
			var_165_object = Obj();
			var_165_object = var_0_object;
			func_1570(var_165_object);
			func_470(var_144_bool);
		} else {
				var_328_object = Obj();
				var_328_object = var_0_object;
				func_1327(var_328_object);
				var_2_bool = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_143_bool);
				var_339_bool = var_143_bool == 0; //@nz
				if(var_339_bool != 0) {
					var_340_bool = var_1_object != 0; //@nn
					if(var_340_bool != 0) {
						func_465(var_143_bool, var_144_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_316;
				}
				var_343_bool = 0; var_344_object = Obj();
				var_344_object = var_0_object;
				func_1177(var_343_bool, var_344_object);
				var_345_bool = var_343_bool == 0; //@nz
				if(var_345_bool != 0) {
				} else {
					CanSee(var_144_bool, var_0_object);
					var_349_bool = var_144_bool;
					if(var_349_bool != 0) {
						var_2_bool = false;
						Face(var_0_object);
						func_470(var_144_bool);
						goto Label_412;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_143_bool);
					var_353_bool = var_143_bool == 0; //@nz
					if(var_353_bool != 0) {
						var_354_bool = var_1_object != 0; //@nn
						if(var_354_bool != 0) {
							func_465(var_143_bool, var_144_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_316;
					}
					var_357_bool = 0; var_358_object = Obj();
					var_358_object = var_0_object;
					func_1177(var_357_bool, var_358_object);
					var_359_bool = var_357_bool == 0; //@nz
					if(var_359_bool != 0) {
						goto Label_422;
					}
					var_2_bool = false;
					CanSee(var_144_bool, var_0_object);
					var_360_bool = var_144_bool;
					if(var_360_bool != 0) {
						Face(var_0_object);
						func_470(var_144_bool);
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
	var_326_bool = var_1_object != 0; //@nn
	if(var_326_bool != 0) {
		func_465(var_143_bool, var_144_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_316;
	
}


func_1063(var_252_float, var_253_object, var_254_float, var_255_int)
{
	var_256_int = 0; var_257_string = ""; var_258_int = 0; var_259_float = 0; var_260_float = 0; var_261_float = 0; var_262_int = 0; var_263_string = ""; var_264_int = 0; var_265_float = 0; var_266_float = 0; var_267_float = 0;
	var_268_bool = 0; var_269_object = Obj(); var_270_string = "";
	var_253_object = var_269_object;
	func_1051(var_268_bool, var_269_object, "health");
	var_271_bool = var_268_bool == 0; //@nz
	if(var_271_bool != 0) {
		var_252_float = 0.0;
		return 12;
	}
	var_272_bool = 0; var_273_object = Obj(); var_274_string = "";
	var_253_object = var_273_object;
	func_1051(var_272_bool, var_273_object, "armor");
	var_275_bool = var_272_bool == 0; //@nz
	if(var_275_bool != 0) {
		var_262_int = 0;
	} else {
			@@var_253_object:GetProperty("armor", var_262_int);
	}
	var_277_string = ""; var_278_int = 0;
	var_255_int = var_278_int;
	func_1017(var_277_string, var_278_int);
	var_263_string = "armor_" + var_277_string;
	var_283_bool = 0; var_284_object = Obj(); var_285_string = "";
	var_253_object = var_284_object;
	var_263_string = var_285_string;
	func_1051(var_283_bool, var_284_object, var_285_string);
	var_286_bool = var_283_bool == 0; //@nz
	if(var_286_bool != 0) {
		var_264_int = 0;
	} else {
		@@var_253_object:GetProperty(var_263_string, var_264_int);

	}
	var_287_float = 0; var_288_float = 0; var_289_float = 0;
	var_290_int = var_262_int + var_264_int;
	var_288_float = var_290_int / (float)100.0;
	func_1493(var_287_float, var_288_float, (float)1);
	var_287_float = var_265_float;
	@@var_253_object:GetProperty("health", var_266_float);
	var_295_int = (int)1 - var_265_float;
	var_267_float = var_254_float * var_295_int;
	var_297_float = 0; var_298_float = 0; var_299_float = 0; var_300_float = 0;
	var_298_float = var_266_float - var_267_float;
	func_1500(var_297_float, var_298_float, (float)0, (float)1);
	@@var_253_object:SetProperty("health", var_297_float);
	var_303_bool = 0; var_304_object = Obj();
	var_253_object = var_304_object;
	func_1046(var_303_bool, var_304_object);
	if(var_303_bool != 0) {
		var_305_float = 0;
		var_305_float = -var_267_float;
		func_1553(var_305_float);
	}
	var_267_float = var_252_float;
	return 12;
	
}


func_1579()
{
	var_150_object = Obj(); var_151_object = Obj();
	GetScene(var_151_object);
	var_153_object = Obj();
	func_1473(var_153_object);
	BroadcastMessage("battle", var_153_object, var_151_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1836(var_142_object)
{
	var_143_object = Obj();
	var_142_object = var_143_object;
	func_1812(var_143_object);
	var_144_object = Obj(); var_145_bool = 0;
	var_142_object = var_144_object;
	func_1801(var_144_object, (bool)1);
	return 0;
}


func_1327(var_328_object)
{
	var_329_cvector = CVector(0,0,0); var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_cvector = CVector(0,0,0); var_334_cvector = CVector(0,0,0);
	@@var_328_object:GetPosition(var_332_cvector);
	GetPosition(var_333_cvector);
	var_334_cvector = var_332_cvector - var_333_cvector;
	var_335_float = GetByIndex(var_334_cvector, 0);
	var_336_float = GetByIndex(var_334_cvector, 2);
	RotateAsync(var_335_float, var_336_float);
	return 6;
}


func_687()
{
	func_1794();
	
Label_690:
	func_773(var_11_cvector, var_9_object);
	goto Label_690;
}
EMIT "Return(); Pop(0)";


func_1201(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = "";
	var_40_bool = var_25_object == 0; //@ne
	if(var_40_bool != 0) {
		return 14;
	}
	IsDead(var_33_bool);
	var_41_bool = var_33_bool;
	if(var_41_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_34_int);
	var_43_bool = var_34_int < (int)0;
	if(var_43_bool != 0) {
		return 14;
	}
	@@var_25_object:GetPosition(var_35_cvector);
	GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_38_cvector = var_36_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_38_cvector, 0);
	var_45_float = GetByIndex(var_37_cvector, 0);
	var_46_float = var_44_float * var_45_float;
	var_47_float = GetByIndex(var_38_cvector, 2);
	var_48_float = GetByIndex(var_37_cvector, 2);
	var_49_float = var_47_float * var_48_float;
	var_50_int = var_46_float + var_49_float;
	var_52_bool = var_50_int >= (int)0;
	if(var_52_bool != 0) {
		var_39_string = "fhit";
	} else {
		var_39_string = "bhit";
	}
	var_55_int = var_39_string + "1";
	var_57_int = var_39_string + "2";
	FadeSecondaryAnimation("hit_react", var_55_int, var_57_int, (int)-10);
	return 14;
	
}


func_1590(var_13_int)
{
	var_14_int = 0; var_15_int = 0;
	GetVariable("branch", var_15_int);
	var_15_int = var_13_int;
	return 2;
}


func_695()
{
	return 0;
}


func_1847(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0;
	var_132_object = GlobalVars[0];
	@@var_132_object:in(var_131_bool, var_129_object);
	var_133_bool = var_131_bool;
	if(var_133_bool != 0) {
		var_134_object = Obj(); var_135_bool = 0;
		var_129_object = var_134_object;
		func_1801(var_134_object, (bool)1);
	} else {
		var_361_object = Obj();
		var_129_object = var_361_object;
		TaskCall(1);
		func_120(var_362_object, var_363_bool, var_361_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_1978(var_129_object)
{
	var_130_object = Obj();
	var_129_object = var_130_object;
	func_2010(var_130_object);
	return 0;
}


func_1338(var_243_float, var_244_object)
{
	var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0;
	GetEyesHeight(var_247_float);
	@@var_244_object:GetEyesHeight(var_248_float);
	var_243_float = var_248_float - var_247_float;
	return 4;
}


func_1596(var_12_object)
{
	var_13_int = 0;
	func_1590(var_13_int);
	var_18_bool = var_13_int == (int)1;
	if(var_18_bool != 0) {
		WorkWithCorpse(var_12_object);
	} else {
		Barter(var_12_object);
	}
	return 0;
	
}


func_1984(var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	var_13_object = var_18_object;
	var_19_bool = !var_14_bool;
	func_1658(var_17_bool, var_18_object, var_19_bool);
	if(var_17_bool != 0) {
		CanSee(var_16_bool, var_12_object);
		var_85_bool = 0;
		var_85_bool = 1;
		var_86_bool = var_16_bool;
		if(var_86_bool != 1) {
			var_87_float = 0; var_88_object = Obj();
			var_12_object = var_88_object;
			func_1038(var_87_float, var_88_object);
			var_96_bool = var_87_float <= (float)490000.0;
			if(var_96_bool != 1) {
				var_85_bool = 0;
			}
		}
		if(var_85_bool != 0) {
			var_11_bool = 1;
			return 2;
		}
	}
	var_11_bool = 0;
	return 2;
}


func_1473(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	self(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1345(var_47_string)
{
	var_48_bool = 0; var_49_int = 0; var_50_bool = 0; var_51_int = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_bool = 0; var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0; var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	IsExisting3DSound(var_56_bool, var_47_string);
	var_64_bool = var_56_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_57_int = 0;

	Label_1351:
		var_66_int = var_57_int + (int)1;
		var_67_int = var_47_string + var_66_int;
		IsExisting3DSound(var_58_bool, var_67_int);
		var_68_bool = var_58_bool == 0; //@nz
		if(var_68_bool != 0) {
		} else {
			var_57_int = var_57_int + (int)1;
			goto Label_1351;
		}
		var_69_bool = var_57_int == 0; //@nz
		if(var_69_bool != 0) {
			return 16;
		}
		irand(var_59_int, var_57_int);
		var_71_int = var_59_int + (int)1;
		var_47_string = var_47_string + var_71_int;
	}
	Is3DSoundLoaded(var_60_bool, var_47_string);
	var_72_bool = var_60_bool;
	if(var_72_bool != 0) {
		GetEyesHeight(var_61_float);
		GetDirection(var_62_cvector);
		var_63_cvector = var_62_cvector * (int)50;
		var_74_float = GetByIndex(var_63_cvector, 1);
		var_74_float = var_74_float + var_61_float;
		SetByIndex(var_63_cvector, 1) = var_74_float;
		PlayGlobalSound(var_47_string, var_63_cvector);
	}
	return 16;
	
}


func_1479(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_41_cvector | var_41_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_40_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_40_cvector = var_41_cvector / var_49_float;
	return 2;
}


func_1868(var_372_bool, var_373_object)
{
	var_374_float = 0; var_375_object = Obj();
	var_373_object = var_375_object;
	func_1038(var_374_float, var_375_object);
	var_372_bool = var_374_float <= (float)40000.0;
	return 0;
}


func_465(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_1489(var_306_float, var_307_cvector, var_308_cvector)
{
	var_309_cvector = CVector(0,0,0); var_310_cvector = CVector(0,0,0);
	var_310_cvector = var_308_cvector - var_307_cvector;
	var_306_float = var_310_cvector | var_310_cvector;
	return 2;
}


func_1876(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_float = 0;
	var_58_bool = 0; var_59_object = Obj();
	var_51_object = var_59_object;
	func_1177(var_58_bool, var_59_object);
	var_60_bool = var_58_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_50_bool = 0;
		return 6;
	}
	var_61_bool = 0; var_62_object = Obj();
	var_51_object = var_62_object;
	func_1046(var_61_bool, var_62_object);
	if(var_61_bool != 0) {
		@@var_51_object:GetProperty("reputation", var_55_float);
		var_50_bool = var_55_float < (float)0.33000001311302185;
		return 6;
	}
	var_67_bool = 0; var_68_object = Obj(); var_69_string = "";
	var_51_object = var_68_object;
	func_1051(var_67_bool, var_68_object, "class");
	var_70_bool = var_67_bool == 0; //@nz
	if(var_70_bool != 0) {
		var_50_bool = 0;
		return 6;
	}
	@@var_51_object:GetProperty("class", var_56_string);
	var_72_bool = 0;
	var_72_bool = 1;
	var_73_bool = 0;
	var_73_bool = 1;
	var_75_bool = var_56_string == "bomber";
	if(var_75_bool != 1) {
		var_77_bool = var_56_string == "hunter";
		if(var_77_bool != 1) {
			var_73_bool = 0;
		}
	}
	if(var_73_bool != 1) {
		var_79_bool = var_56_string == "grabitel";
		if(var_79_bool != 1) {
			var_72_bool = 0;
		}
	}
	if(var_72_bool != 0) {
		var_50_bool = 1;
		return 6;
	}
	var_80_bool = 0; var_81_object = Obj(); var_82_string = "";
	var_51_object = var_81_object;
	func_1051(var_80_bool, var_81_object, "disease");
	var_83_bool = var_80_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_50_bool = 0;
		return 6;
	}
	var_84_bool = 0;
	var_84_bool = 1;
	var_85_bool = 0; var_86_string = "";
	var_56_string = var_86_string;
	func_1386(var_85_bool, var_86_string);
	if(var_85_bool != 1) {
		var_125_bool = var_56_string == "dog";
		if(var_125_bool != 1) {
			var_84_bool = 0;
		}
	}
	if(var_84_bool != 0) {
		@@var_51_object:GetProperty("disease", var_57_float);
		var_50_bool = var_57_float > (int)0;
		return 6;
	}
	var_50_bool = 0;
	return 6;
}


func_1493(var_287_float, var_288_float, var_289_float)
{
	var_292_bool = var_288_float < var_289_float;
	if(var_292_bool != 0) {
		var_288_float = var_287_float;
	} else {
		var_289_float = var_287_float;
	}
	return 0;
	
}


func_470(var_0_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_int = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_object = Obj(); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_int = 0; var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_object = Obj();
	var_194_object = Obj();
	var_194_object = var_0_object;
	func_1570(var_194_object);
	ReportAttack(var_0_object);
	var_195_bool = 0; var_196_object = Obj();
	var_196_object = var_0_object;
	func_1046(var_195_bool, var_196_object);
	if(var_195_bool != 0) {
		var_197_object = Obj();
		func_1473(var_197_object);
		SendPlayerEnemy(var_0_object, var_197_object);
	}
	GetDirection(var_180_cvector);
	var_198_cvector = CVector(0,0,0); var_199_object = Obj();
	var_199_object = var_0_object;
	func_1031(var_198_cvector, var_199_object);
	var_198_cvector = var_181_cvector;
	var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0);
	var_180_cvector = var_205_cvector;
	var_181_cvector = var_206_cvector;
	func_1536(var_204_float, var_205_cvector, var_206_cvector);
	var_229_bool = var_204_float < (float)0.9993908405303955;
	if(var_229_bool != 0) {
		return 28;
	}
	func_1579();
	PlayAnimation("all", "attack_begin1");
	GetGeometryLocator("attack", var_182_bool, var_183_cvector, var_184_cvector);
	var_233_bool = var_182_bool;
	if(var_233_bool != 0) {
		GetScene(var_186_object);
		AddActorByType(var_185_object, "light-dynamic", var_186_object, var_183_cvector, var_184_cvector, "soldier_fire.xml");
		var_186_object = 0;
		var_185_object = 0;
	} else {
				WaitForAnimEnd();
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	GetDirection(var_180_cvector);
	var_240_cvector = CVector(0,0,0); var_241_object = Obj();
	var_241_object = var_0_object;
	func_1031(var_240_cvector, var_241_object);
	var_240_cvector = var_181_cvector;
	var_242_float = GetByIndex(var_181_cvector, 1);
	var_243_float = 0; var_244_object = Obj();
	var_244_object = var_0_object;
	func_1338(var_243_float, var_244_object);
	var_242_float = var_242_float + var_243_float;
	SetByIndex(var_181_cvector, 1) = var_242_float;
	RandVecCone3D(var_187_cvector, var_181_cvector, (float)0.03490658476948738);
	GetVictimMaterial(var_187_cvector, var_188_object, var_189_int, var_190_cvector);
	var_250_bool = var_188_object != 0; //@nn
	if(var_250_bool != 0) {
		var_251_bool = var_188_object == var_0_object;
		if(var_251_bool != 0) {
			var_252_float = 0; var_253_object = Obj(); var_254_float = 0; var_255_int = 0;
			var_253_object = var_0_object;
			func_1063(var_252_float, var_253_object, (float)1.5, (int)1);
			var_252_float = var_191_float;
			ReportHit(var_0_object, (int)2, var_191_float, (float)1.5);
		} else {
			var_321_bool = var_189_int != (int)-1;
			if(var_321_bool == 0) goto Label_582;
			GetScene(var_192_object);
			AddActorByType(var_193_object, "scripted", var_192_object, var_190_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_193_object:SetScriptProperty("Material", var_189_int);
			var_193_object = 0;
			var_192_object = 0;

		}
	}
Label_582:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 28;
	
}
EMIT "Stack[-6] = 0";


func_857()
{
	StopGroup0();
	Stop();
	return 0;
}


func_2010(var_128_object)
{
	var_129_object = Obj();
	var_128_object = var_129_object;
	func_1847(var_129_object);
	return 0;
}


func_985(var_46_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_47_string = "";
	var_46_string = var_47_string;
	func_1345(var_47_string);
	PlayAnimation("all", var_46_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_46_string);
	RemoveEnvelope();
	return 0;
}


func_1500(var_297_float, var_298_float, var_299_float, var_300_float)
{
	var_301_bool = var_298_float < var_299_float;
	if(var_301_bool != 0) {
		var_299_float = var_297_float;
		return 0;
	}
	var_302_bool = var_298_float > var_300_float;
	if(var_302_bool != 0) {
		var_300_float = var_297_float;
		return 0;
	}
	var_298_float = var_297_float;
	return 0;
}


func_1245(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0);
	var_33_bool = 0;
	var_33_bool = 0;
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_object = var_12_object;
	if(var_35_object != 0) {
		var_37_bool = var_13_int != (int)4;
		if(var_37_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_39_bool = var_13_int != (int)5;
		if(var_39_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
		var_42_cvector = CVector(0,0,0); var_43_object = Obj();
		var_12_object = var_43_object;
		func_1031(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1479(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		CreateVectorVector(var_25_object);
		var_26_int = 1;

	Label_1274:
		var_54_int = "hit" + var_26_int;
		GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector);
		var_55_bool = var_27_bool == 0; //@nz
		if(var_55_bool != 0) {
		} else {
			var_103_int = var_29_cvector | var_24_cvector;
			var_105_bool = var_103_int >= (float)0.7071067690849304;
			if(var_105_bool != 0) {
				@@var_25_object:add(var_28_cvector);
			}
			var_26_int = var_26_int + (int)1;
			goto Label_1274;
		}
		@@var_25_object:size(var_30_int);
		var_56_int = var_30_int;
		if(var_56_int != 0) {
			irand(var_31_int, var_30_int);
			@@var_25_object:get(var_32_cvector, var_31_int);
			var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
			var_12_object = var_57_object;
			var_13_int = var_58_int;
			var_14_float = var_59_float;
			var_32_cvector = var_60_cvector;
			var_61_cvector = -var_24_cvector;
			func_1313(var_59_float, var_60_cvector, var_61_cvector);
			return 18;
		}
		var_25_object = 0;
	}
	var_102_object = Obj();
	var_12_object = var_102_object;
	func_1201(var_102_object);
	return 18;
	
}


func_862()
{
	return 0;
}


func_863(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_869(var_23_object);
	return 0;
}


func_2016(var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj();
	GetScene(var_20_object);
	var_21_object = Obj();
	func_1473(var_21_object);
	@@var_20_object:RemoveStationaryActor(var_21_object);
	var_22_object = Obj();
	var_18_object = var_22_object;
	TaskCall(5);
	func_863(var_22_object);
	TaskReturn();
	return 2;
}
EMIT "Stack[-1] = 0";


func_869(var_23_object)
{
	EventDisable(0);
	var_24_object = Obj();
	var_23_object = var_24_object;
	func_894(var_24_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_880:
	Hold();
	goto Label_880;
}
EMIT "Return(); Pop(0)";


func_1511(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	CreateObjectSet(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1386(var_85_bool, var_86_string)
{
	var_85_bool = 1;
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
	var_97_bool = 0;
	var_97_bool = 1;
	var_99_bool = var_86_string == "woman";
	if(var_99_bool != 1) {
		var_101_bool = var_86_string == "worker";
		if(var_101_bool != 1) {
			var_97_bool = 0;
		}
	}
	if(var_97_bool != 1) {
		var_103_bool = var_86_string == "butcher";
		if(var_103_bool != 1) {
			var_96_bool = 0;
		}
	}
	if(var_96_bool != 1) {
		var_105_bool = var_86_string == "wasted_girl";
		if(var_105_bool != 1) {
			var_95_bool = 0;
		}
	}
	if(var_95_bool != 1) {
		var_107_bool = var_86_string == "boy";
		if(var_107_bool != 1) {
			var_94_bool = 0;
		}
	}
	if(var_94_bool != 1) {
		var_109_bool = var_86_string == "vaxxabitka";
		if(var_109_bool != 1) {
			var_93_bool = 0;
		}
	}
	if(var_93_bool != 1) {
		var_111_bool = var_86_string == "unosha";
		if(var_111_bool != 1) {
			var_92_bool = 0;
		}
	}
	if(var_92_bool != 1) {
		var_113_bool = var_86_string == "wasted_male";
		if(var_113_bool != 1) {
			var_91_bool = 0;
		}
	}
	if(var_91_bool != 1) {
		var_115_bool = var_86_string == "alkash";
		if(var_115_bool != 1) {
			var_90_bool = 0;
		}
	}
	if(var_90_bool != 1) {
		var_117_bool = var_86_string == "dohodyaga";
		if(var_117_bool != 1) {
			var_89_bool = 0;
		}
	}
	if(var_89_bool != 1) {
		var_119_bool = var_86_string == "vaxxabit";
		if(var_119_bool != 1) {
			var_88_bool = 0;
		}
	}
	if(var_88_bool != 1) {
		var_121_bool = var_86_string == "nudegirl";
		if(var_121_bool != 1) {
			var_87_bool = 0;
		}
	}
	if(var_87_bool != 1) {
		var_123_bool = var_86_string == "morlok";
		if(var_123_bool != 1) {
			var_85_bool = 0;
		}
	}
	return 0;
}


func_1517(var_207_float, var_208_cvector, var_209_cvector)
{
	var_210_float = GetByIndex(var_208_cvector, 0);
	var_211_float = GetByIndex(var_209_cvector, 0);
	var_212_float = var_210_float * var_211_float;
	var_213_float = GetByIndex(var_208_cvector, 2);
	var_214_float = GetByIndex(var_209_cvector, 2);
	var_215_float = var_213_float * var_214_float;
	var_207_float = var_212_float + var_215_float;
	return 0;
}


func_1136(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_1141(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	var_23_bool = var_18_object == 0; //@ne
	if(var_23_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_24_bool = 0;
	var_24_bool = 0;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", (int)1);
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_18_object = var_29_object;
		func_1136(var_28_bool, var_29_object);
		if(var_28_bool != 0) {
			var_24_bool = 1;
		}
	}
	if(var_24_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	GetScene(var_21_object);
	var_32_bool = var_21_object == 0; //@ne
	if(var_32_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	@@var_18_object:GetScene(var_22_object);
	var_33_bool = var_21_object != var_22_object;
	if(var_33_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_17_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1526(var_216_float, var_217_cvector)
{
	var_218_float = GetByIndex(var_217_cvector, 0);
	var_219_float = GetByIndex(var_217_cvector, 0);
	var_220_float = var_218_float * var_219_float;
	var_221_float = GetByIndex(var_217_cvector, 2);
	var_222_float = GetByIndex(var_217_cvector, 2);
	var_223_float = var_221_float * var_222_float;
	var_224_int = var_220_float + var_223_float;
	var_216_float = sqrt(var_224_int);
	return 0;
}


func_120(var_0_object, var_1_object, var_361_object)
{
	var_364_bool = 0; var_365_int = 0; var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_int = 0;
	var_0_object = var_361_object;
	var_370_object = Obj();
	var_370_object = var_0_object;
	func_1570(var_370_object);
	CanSee(var_1_object, var_0_object);
	var_371_object = var_1_object;
	if(var_371_object != 0) {
		var_372_bool = 0; var_373_object = Obj();
		var_373_object = var_0_object;
		func_1868(var_372_bool, var_373_object);
		if(var_372_bool != 0) {
			var_383_object = Obj(); var_384_bool = 0;
			var_383_object = var_0_object;
			func_1801(var_383_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	func_1579();
	PlayAnimation("all", "shoot_begin");
	WaitForAnimEnd(var_367_bool);
	var_387_bool = var_367_bool == 0; //@nz
	if(var_387_bool != 0) {
		StopAsync();
		return 6;
	}
	PlayGlobalSound("shot", CVector(0.0, 150.0, 0.0), (int)800, (int)100000);
	PlayAnimation("all", "shoot_end");
	WaitForAnimEnd(var_367_bool);
	var_394_bool = var_367_bool == 0; //@nz
	if(var_394_bool != 0) {
		StopAsync();
		return 6;
	}
	LockAnimationEnd("all", "shoot_end");
	var_369_int = 0;
	
Label_180:
	var_398_bool = var_369_int < (int)20;
	if(var_398_bool != 0) {
		var_399_object = Obj();
		var_399_object = var_0_object;
		func_1570(var_399_object);
		Sleep((float)0.5, var_367_bool);
		var_401_bool = var_367_bool == 0; //@nz
		if(var_401_bool != 0) {
			return 6;
		}
		CanSee(var_1_object, var_0_object);
		var_402_object = var_1_object;
		if(var_402_object != 0) {
			var_403_bool = 0; var_404_object = Obj();
			var_404_object = var_0_object;
			func_1868(var_403_bool, var_404_object);
			if(var_403_bool != 0) {
				func_274();
				var_405_object = Obj(); var_406_bool = 0;
				var_405_object = var_0_object;
				func_1801(var_405_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_410_bool = (int)0 == (int)4;
			if(var_410_bool == 0) goto Label_229;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_274();
		var_413_object = Obj(); var_414_bool = 0;
		var_361_object = var_413_object;
		func_1801(var_413_object, (bool)0);
		var_369_int = var_369_int + (int)1;
		goto Label_180;
	}
	return 6;
	
}


func_1017(var_277_string, var_278_int)
{
	var_280_bool = var_278_int == (int)2;
	if(var_280_bool != 0) {
		var_277_string = "fire";
		return 0;
	EMIT "GOTO 0x405";
	}
	var_282_bool = var_278_int == (int)1;
	if(var_282_bool != 0) {
		var_277_string = "bullet";
		return 0;
	}
	var_277_string = "phys";
	return 0;
}


func_1658(var_17_bool, var_18_object, var_19_bool)
{
	var_20_string = ""; var_21_string = "";
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	func_1051(var_22_bool, var_23_object, "class");
	var_31_bool = var_22_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	@@var_18_object:GetProperty("class", var_21_string);
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
	var_42_bool = 0;
	var_42_bool = 1;
	var_44_bool = var_21_string == "patrol";
	if(var_44_bool != 1) {
		var_46_bool = var_21_string == "sanitar";
		if(var_46_bool != 1) {
			var_42_bool = 0;
		}
	}
	if(var_42_bool != 1) {
		var_48_bool = var_21_string == "soldier";
		if(var_48_bool != 1) {
			var_41_bool = 0;
		}
	}
	if(var_41_bool != 1) {
		var_50_bool = var_21_string == "woman";
		if(var_50_bool != 1) {
			var_40_bool = 0;
		}
	}
	if(var_40_bool != 1) {
		var_52_bool = var_21_string == "wasted_girl";
		if(var_52_bool != 1) {
			var_39_bool = 0;
		}
	}
	if(var_39_bool != 1) {
		var_54_bool = var_21_string == "vaxxabitka";
		if(var_54_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 1) {
		var_56_bool = var_21_string == "vaxxabit";
		if(var_56_bool != 1) {
			var_37_bool = 0;
		}
	}
	if(var_37_bool != 1) {
		var_58_bool = var_21_string == "little_girl";
		if(var_58_bool != 1) {
			var_36_bool = 0;
		}
	}
	if(var_36_bool != 1) {
		var_60_bool = var_21_string == "girl";
		if(var_60_bool != 1) {
			var_35_bool = 0;
		}
	}
	if(var_35_bool != 1) {
		var_62_bool = var_21_string == "dohodyaga";
		if(var_62_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 1) {
		var_64_bool = var_21_string == "nudegirl";
		if(var_64_bool != 1) {
			var_33_bool = 0;
		}
	}
	if(var_33_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	var_65_bool = var_19_bool;
	if(var_65_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_17_bool = 1;
	var_66_bool = 0;
	var_66_bool = 1;
	var_67_bool = 0;
	var_67_bool = 1;
	var_68_bool = 0;
	var_68_bool = 1;
	var_69_bool = 0;
	var_69_bool = 1;
	var_70_bool = 0;
	var_70_bool = 1;
	var_72_bool = var_21_string == "worker";
	if(var_72_bool != 1) {
		var_74_bool = var_21_string == "butcher";
		if(var_74_bool != 1) {
			var_70_bool = 0;
		}
	}
	if(var_70_bool != 1) {
		var_76_bool = var_21_string == "boy";
		if(var_76_bool != 1) {
			var_69_bool = 0;
		}
	}
	if(var_69_bool != 1) {
		var_78_bool = var_21_string == "unosha";
		if(var_78_bool != 1) {
			var_68_bool = 0;
		}
	}
	if(var_68_bool != 1) {
		var_80_bool = var_21_string == "wasted_male";
		if(var_80_bool != 1) {
			var_67_bool = 0;
		}
	}
	if(var_67_bool != 1) {
		var_82_bool = var_21_string == "alkash";
		if(var_82_bool != 1) {
			var_66_bool = 0;
		}
	}
	if(var_66_bool != 1) {
		var_84_bool = var_21_string == "morlok";
		if(var_84_bool != 1) {
			var_17_bool = 0;
		}
	}
	return 2;
}


func_894(var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = ""; var_40_object = Obj(); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0);
	var_45_bool = var_24_object == 0; //@ne
	if(var_45_bool != 0) {
		var_46_string = "";
		func_985("fdie");
	} else {
		@@var_24_object:GetPosition(var_35_cvector);
		GetPosition(var_36_cvector);
		GetDirection(var_37_cvector);
		var_38_cvector = var_36_cvector - var_35_cvector;
		var_78_float = GetByIndex(var_38_cvector, 0);
		var_79_float = GetByIndex(var_37_cvector, 0);
		var_80_float = var_78_float * var_79_float;
		var_81_float = GetByIndex(var_38_cvector, 2);
		var_82_float = GetByIndex(var_37_cvector, 2);
		var_83_float = var_81_float * var_82_float;
		var_84_int = var_80_float + var_83_float;
		var_86_bool = var_84_int >= (int)0;
		if(var_86_bool != 0) {
			var_39_string = "fdie";
		} else {
				var_39_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_24_object = var_40_object;
		var_89_bool = IsFuncExist(var_24_object, "GetScriptProperty", (int)2);
		if(var_89_bool != 0) {
			@@var_24_object:HasScriptProperty(var_41_bool, "Owner");
			var_91_bool = var_41_bool;
			if(var_91_bool != 0) {
				@@var_24_object:GetScriptProperty(var_40_object, "Owner");
				var_93_bool = var_40_object == 0; //@ne
				if(var_93_bool != 0) {
					var_24_object = var_40_object;
				}
			}
		}
		var_96_bool = IsFuncExist(var_40_object, "@GetEyesHeight", (int)1);
		if(var_96_bool != 0) {
			@@var_40_object:GetEyesHeight(var_43_float);
			var_44_cvector = CVector(0.0, 0.0, 0.0);
			var_97_float = GetByIndex(var_44_cvector, 1);
			var_43_float = var_97_float;
			SetByIndex(var_44_cvector, 1) = var_97_float;
			LookAsync(var_24_object, "head", var_44_cvector);
			var_42_bool = 1;
		} else {
			var_42_bool = 0;

		}
		var_99_string = "";
		var_39_string = var_99_string;
		func_1345(var_99_string);
		PlayAnimation("all", var_39_string);
		WaitForAnimEnd();
		var_101_bool = var_42_bool;
		if(var_101_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_39_string);
		RemoveEnvelope();
		var_40_object = 0;
	}
	return 20;
	
}


