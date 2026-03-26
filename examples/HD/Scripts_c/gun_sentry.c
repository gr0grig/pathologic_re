// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,WaitForAnimEnd/1,PlayGlobalSound/4,SetAttackState/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,SendPlayerEnemy/2,GetGeometryLocator/4,GetScene/1,AddActorByType/6,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,IsPlayerActor/2,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,RotateAsync/2,GetEyesHeight/1,AddItem/3,AddItem/4,IsExisting3DSound/2,Is3DSoundLoaded/2,PlayGlobalSound/2,self/1,CreateObjectSet/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,PlayGlobalMusic/1,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,ClearSubContainer/1,GetInvItemByName/2,GetProperty/2,SignalDeath/1,ReportReputationChange/4,ResetAAS/0,ReportReputationChange/3
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:shoot_begin|W:shot|W:shoot_end|W:attack_off|W:attack_on|W:hunt|W:@Stop hunt|W:attack_begin1|W:attack|W:light-dynamic|W:soldier_fire.xml|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|A:in|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:blood_dir.xml|W:woman|W:worker|W:butcher|W:wasted_girl|W:boy|W:vaxxabitka|W:unosha|W:wasted_male|W:alkash|W:dohodyaga|W:vaxxabit|W:nudegirl|W:morlok|W:battle|W:branch|W:GenerateMoney: iMin > iMax|W:Money|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:rifle_ammo|W:rusk|W:bandage|W:tourniquet|W:class|W:patrol|W:sanitar|W:soldier|W:little_girl|W:reputation|W:bomber|W:hunter|W:grabitel|W:disease|W:dog
// @GLOBALS: 0:object:
// @RUN_OP: 0x31c
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
// @TASK_4: vars=cvector,cvector params=0
// @EVENT_3: op=0x325 vars=object
// @EVENT_17: op=0x343 vars=object
// @EVENT_30: op=0x357 vars=object,object,bool
// @EVENT_1: op=0x364 vars=object
// @STANDALONE_EVENT_22: op=0x6b4 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x6bc vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x6c6 vars=object,string
// @STANDALONE_EVENT_41: op=0x6d3 vars=object
// @PE: 0x0,0x11,0x85,0x9f,0xa1,0xa3,0xc5,0xce,0xd7,0xe3,0xf7,0x104,0x112,0x196,0x1aa,0x1be,0x257,0x265,0x2f7,0x30f,0x31c,0x343,0x357,0x364,0x3cc,0x557,0x5c2,0x5c9,0x5df,0x5e8,0x5f2,0x62e,0x6ac,0x6b4,0x6bc,0x6d3,0x774,0x797,0x7b7,0x825,0x845,0x84b

task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0;
	IsOverrideActive(var_10_bool);
	var_11_bool = var_10_bool == 0; //@nz
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_8_cvector = var_12_object;
		func_1582(var_12_object);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_cvector, var_11_cvector)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_189();
	var_8_cvector = Obj();
	func_1747();
	return 0;
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object;
	if(var_9_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = var_8_cvector == var_0_object;
	if(var_9_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_12_object = Obj();
		var_12_object = var_0_object;
		func_1282(var_12_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1132(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_97_object = var_127_object;
		func_1919(var_127_object);
		return 0;
	}
	func_189();
	var_143_object = Obj();
	var_97_object = var_143_object;
	func_1943(var_143_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_bool = var_12_object;
	var_9_cvector = var_13_object;
	var_10_cvector = var_14_bool;
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_bool = Obj();
		func_227();
	}
	return 0;
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_cvector = var_10_object;
	func_2063(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_189();
		var_129_object = Obj();
		var_8_cvector = var_129_object;
		func_2085(var_129_object);
	}
	return 0;
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_10_bool = var_8_cvector != (int)100;
	if(var_10_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1132(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_97_object = var_127_object;
		func_1919(var_127_object);
		return 0;
	}
	func_439();
	var_142_object = Obj();
	var_97_object = var_142_object;
	func_1943(var_142_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_bool = var_12_object;
	var_9_cvector = var_13_object;
	var_10_cvector = var_14_bool;
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_bool = Obj();
		func_406();
	}
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_439();
	var_8_cvector = Obj();
	func_1747();
	return 0;
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
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
		func_1282(var_12_object);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_cvector, var_8_cvector)
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


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1132(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		return 0;
	}
	var_127_object = Obj();
	var_97_object = var_127_object;
	func_1919(var_127_object);
	var_142_bool = var_97_object == var_0_object;
	if(var_142_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_97_object;
		var_143_bool = var_2_bool;
		if(var_143_bool == 0) goto Label_782;
		StopAnimation();
		StopGroup0();
	}
Label_782:
	return 0;
	
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_bool = var_12_object;
	var_9_cvector = var_13_object;
	var_10_cvector = var_14_bool;
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_bool = Obj();
		func_759();
	}
	return 0;
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_8_object = var_12_object;
	func_1132(var_11_bool, var_12_object);
	var_45_bool = var_11_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj();
	var_8_object = var_47_object;
	func_1983(var_46_bool, var_47_object);
	var_124_bool = var_46_bool == 0; //@nz
	if(var_124_bool != 0) {
		var_125_object = GlobalVars[0];
		@@var_125_object:in(var_10_bool, var_8_object);
		var_126_bool = var_10_bool == 0; //@nz
		if(var_126_bool != 0) {
			return 2;
		}
	}
	func_966();
	var_127_object = Obj();
	var_8_object = var_127_object;
	TaskCall(1);
	func_165(var_128_object, var_127_object);
	TaskReturn();
	return 2;
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool, var_97_object)
	{
	var_98_bool = 0; var_99_object = Obj();
	var_97_object = var_99_object;
	func_1132(var_98_bool, var_99_object);
	var_126_bool = var_98_bool == 0; //@nz
	if(var_126_bool != 0) {
		var_127_object = Obj();
		var_97_object = var_127_object;
		func_1919(var_127_object);
		return 0;
	}
	func_966();
	var_142_object = Obj();
	var_97_object = var_142_object;
	func_1943(var_142_object);
	return 0;
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj(); var_13_object = Obj(); var_14_bool = 0;
	var_8_object = var_12_object;
	var_9_object = var_13_object;
	var_10_bool = var_14_bool;
	func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool);
	if(var_11_bool != 0) {
		var_8_object = Obj();
		func_835();
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_2063(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_966();
		var_128_object = Obj();
		var_8_object = var_128_object;
		func_2117(var_128_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_1200(var_12_object, var_13_int, var_14_float);
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
	func_1268(var_16_float, var_17_cvector, var_18_cvector);
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
	func_1001(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		var_13_object = Obj();
		func_1454(var_13_object);
		ReportReputationChange(var_8_object, var_13_object, (float)-0.12999999523162842, (bool)1);
	}
	var_18_object = Obj();
	var_8_object = var_18_object;
	func_2123(var_18_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	func_1901();
	
Label_799:
	func_882(var_6_cvector, var_7_cvector);
	goto Label_799;
}
EMIT "Return(); Pop(0)";


func_0(var_20_object)
{
	var_21_bool = 0; var_22_object = Obj();
	var_20_object = var_22_object;
	func_1001(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		func_1667();
	}
	func_1643();
	var_99_object = Obj();
	var_20_object = var_99_object;
	func_17(var_99_object);
	return 0;
}


func_1282(var_328_object)
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


func_1539(var_305_float)
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


func_1667()
{
	var_23_int = 0; var_24_bool = 0; var_25_int = 0; var_26_bool = 0;
	ClearSubContainer((int)0);
	var_28_int = 0; var_29_int = 0;
	func_1595((int)500, (int)1000);
	var_47_string = ""; var_48_int = 0; var_49_int = 0; var_50_int = 0;
	func_1311("rifle_ammo", (int)1, (int)3, (int)3);
	var_63_string = ""; var_64_int = 0; var_65_int = 0; var_66_int = 0;
	func_1311("rusk", (int)1, (int)3, (int)2);
	var_67_string = ""; var_68_int = 0; var_69_int = 0;
	func_1300("bandage", (int)1, (int)6);
	var_76_string = ""; var_77_int = 0; var_78_int = 0;
	func_1300("tourniquet", (int)1, (int)6);
	return 4;
}


func_133(var_122_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_123_string = "";
	var_122_string = var_123_string;
	func_1326(var_123_string);
	PlayAnimation("all", var_122_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_122_string);
	RemoveEnvelope();
	return 0;
}


func_1156(var_25_object)
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


func_1293(var_243_float, var_244_object)
{
	var_245_float = 0; var_246_float = 0; var_247_float = 0; var_248_float = 0;
	GetEyesHeight(var_247_float);
	@@var_244_object:GetEyesHeight(var_248_float);
	var_243_float = var_248_float - var_247_float;
	return 4;
}


func_2063(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	var_13_bool = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1132(var_13_bool, var_14_object);
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
	func_1983(var_50_bool, var_51_object);
	var_50_bool = var_9_bool;
	return 2;
}


func_17(var_99_object)
{
	EventDisable(0);
	var_100_object = Obj();
	var_99_object = var_100_object;
	func_42(var_100_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_28:
	Hold();
	goto Label_28;
}
EMIT "Return(); Pop(0)";


func_1556(var_145_object)
{
	var_146_bool = 0; var_147_bool = 0;
	IsPlayerActor(var_145_object, var_147_bool);
	var_148_bool = var_147_bool;
	if(var_148_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1300(var_67_string, var_68_int, var_69_int)
{
	var_70_bool = 0; var_71_bool = 0;
	var_72_bool = 0; var_73_int = 0; var_74_int = 0;
	var_68_int = var_73_int;
	var_69_int = var_74_int;
	func_1492(var_72_bool, var_73_int, var_74_int);
	if(var_72_bool != 0) {
		AddItem(var_71_bool, var_67_string, (int)0);
	}
	return 2;
}


func_1943(var_142_object)
{
	var_143_object = Obj();
	var_142_object = var_143_object;
	func_1919(var_143_object);
	var_144_object = Obj(); var_145_bool = 0;
	var_142_object = var_144_object;
	func_1908(var_144_object, (bool)1);
	return 0;
}


func_1565()
{
	var_150_object = Obj(); var_151_object = Obj();
	GetScene(var_151_object);
	var_153_object = Obj();
	func_1454(var_153_object);
	BroadcastMessage("battle", var_153_object, var_151_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_285(var_0_object, var_1_object, var_361_object)
{
	var_364_bool = 0; var_365_int = 0; var_366_int = 0; var_367_bool = 0; var_368_int = 0; var_369_int = 0;
	var_0_object = var_361_object;
	var_370_object = Obj();
	var_370_object = var_0_object;
	func_1556(var_370_object);
	CanSee(var_1_object, var_0_object);
	var_371_object = var_1_object;
	if(var_371_object != 0) {
		var_372_bool = 0; var_373_object = Obj();
		var_373_object = var_0_object;
		func_1975(var_372_bool, var_373_object);
		if(var_372_bool != 0) {
			var_383_object = Obj(); var_384_bool = 0;
			var_383_object = var_0_object;
			func_1908(var_383_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	func_1565();
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
	
Label_345:
	var_398_bool = var_369_int < (int)20;
	if(var_398_bool != 0) {
		var_399_object = Obj();
		var_399_object = var_0_object;
		func_1556(var_399_object);
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
			func_1975(var_403_bool, var_404_object);
			if(var_403_bool != 0) {
				func_439();
				var_405_object = Obj(); var_406_bool = 0;
				var_405_object = var_0_object;
				func_1908(var_405_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_410_bool = (int)0 == (int)4;
			if(var_410_bool == 0) goto Label_394;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_439();
		var_413_object = Obj(); var_414_bool = 0;
		var_361_object = var_413_object;
		func_1908(var_413_object, (bool)0);
		var_369_int = var_369_int + (int)1;
		goto Label_345;
	}
	return 6;
	
}


func_1311(var_47_string, var_48_int, var_49_int, var_50_int)
{
	var_51_int = 0; var_52_bool = 0; var_53_int = 0; var_54_bool = 0;
	var_55_bool = 0; var_56_int = 0; var_57_int = 0;
	var_48_int = var_56_int;
	var_49_int = var_57_int;
	func_1492(var_55_bool, var_56_int, var_57_int);
	if(var_55_bool != 0) {
		irand(var_53_int, var_50_int);
		var_62_int = var_53_int + (int)1;
		AddItem(var_54_bool, var_47_string, (int)0, var_62_int);
	}
	return 4;
}


func_1954(var_129_object)
{
	var_130_bool = 0; var_131_bool = 0;
	var_132_object = GlobalVars[0];
	@@var_132_object:in(var_131_bool, var_129_object);
	var_133_bool = var_131_bool;
	if(var_133_bool != 0) {
		var_134_object = Obj(); var_135_bool = 0;
		var_129_object = var_134_object;
		func_1908(var_134_object, (bool)1);
	} else {
		var_361_object = Obj();
		var_129_object = var_361_object;
		TaskCall(2);
		func_285(var_362_object, var_363_bool, var_361_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_804()
{
	return 0;
}


func_2085(var_129_object)
{
	var_130_object = Obj();
	var_129_object = var_130_object;
	func_2117(var_130_object);
	return 0;
}


func_165(var_0_object, var_127_object)
{
	var_129_bool = 0; var_130_bool = 0;
	var_0_object = var_127_object;
	Face(var_127_object);
	
Label_169:
	Sleep((float)0.5, var_130_bool);
	var_132_bool = 0;
	var_132_bool = 1;
	var_133_bool = var_130_bool == 0; //@nz
	if(var_133_bool != 1) {
		var_134_bool = 0; var_135_object = Obj();
		var_135_object = var_0_object;
		func_1132(var_134_bool, var_135_object);
		var_136_bool = var_134_bool == 0; //@nz
		if(var_136_bool != 1) {
			var_132_bool = 0;
		}
	}
	if(var_132_bool != 0) {
	} else {
		goto Label_169;
	}
	StopAsync();
	return 2;
	
}


func_1703(var_40_int, var_41_string)
{
	var_42_int = 0; var_43_int = 0;
	GetInvItemByName(var_43_int, var_41_string);
	var_43_int = var_40_int;
	return 2;
}


func_1576(var_79_int)
{
	var_80_int = 0; var_81_int = 0;
	GetVariable("branch", var_81_int);
	var_81_int = var_79_int;
	return 2;
}


func_42(var_100_object)
{
	var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_string = ""; var_106_object = Obj(); var_107_bool = 0; var_108_bool = 0; var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_string = ""; var_116_object = Obj(); var_117_bool = 0; var_118_bool = 0; var_119_float = 0; var_120_cvector = CVector(0,0,0);
	var_121_bool = var_100_object == 0; //@ne
	if(var_121_bool != 0) {
		var_122_string = "";
		func_133("fdie");
	} else {
		@@var_100_object:GetPosition(var_111_cvector);
		GetPosition(var_112_cvector);
		GetDirection(var_113_cvector);
		var_114_cvector = var_112_cvector - var_111_cvector;
		var_154_float = GetByIndex(var_114_cvector, 0);
		var_155_float = GetByIndex(var_113_cvector, 0);
		var_156_float = var_154_float * var_155_float;
		var_157_float = GetByIndex(var_114_cvector, 2);
		var_158_float = GetByIndex(var_113_cvector, 2);
		var_159_float = var_157_float * var_158_float;
		var_160_int = var_156_float + var_159_float;
		var_162_bool = var_160_int >= (int)0;
		if(var_162_bool != 0) {
			var_115_string = "fdie";
		} else {
				var_115_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_100_object = var_116_object;
		var_165_bool = IsFuncExist(var_100_object, "GetScriptProperty", (int)2);
		if(var_165_bool != 0) {
			@@var_100_object:HasScriptProperty(var_117_bool, "Owner");
			var_167_bool = var_117_bool;
			if(var_167_bool != 0) {
				@@var_100_object:GetScriptProperty(var_116_object, "Owner");
				var_169_bool = var_116_object == 0; //@ne
				if(var_169_bool != 0) {
					var_100_object = var_116_object;
				}
			}
		}
		var_172_bool = IsFuncExist(var_116_object, "@GetEyesHeight", (int)1);
		if(var_172_bool != 0) {
			@@var_116_object:GetEyesHeight(var_119_float);
			var_120_cvector = CVector(0.0, 0.0, 0.0);
			var_173_float = GetByIndex(var_120_cvector, 1);
			var_119_float = var_173_float;
			SetByIndex(var_120_cvector, 1) = var_173_float;
			LookAsync(var_100_object, "head", var_120_cvector);
			var_118_bool = 1;
		} else {
			var_118_bool = 0;

		}
		var_175_string = "";
		var_115_string = var_175_string;
		func_1326(var_175_string);
		PlayAnimation("all", var_115_string);
		WaitForAnimEnd();
		var_177_bool = var_118_bool;
		if(var_177_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_115_string);
		RemoveEnvelope();
		var_116_object = 0;
	}
	return 20;
	
}


func_2091(var_11_bool, var_12_object, var_13_object, var_14_bool)
{
	var_15_bool = 0; var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0;
	var_13_object = var_18_object;
	var_19_bool = !var_14_bool;
	func_1765(var_17_bool, var_18_object, var_19_bool);
	if(var_17_bool != 0) {
		CanSee(var_16_bool, var_12_object);
		var_85_bool = 0;
		var_85_bool = 1;
		var_86_bool = var_16_bool;
		if(var_86_bool != 1) {
			var_87_float = 0; var_88_object = Obj();
			var_12_object = var_88_object;
			func_993(var_87_float, var_88_object);
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


func_1708(var_19_object)
{
	var_20_object = Obj();
	var_19_object = var_20_object;
	TaskCall(0);
	func_0(var_20_object);
	TaskReturn();
	return 0;
}


func_1582(var_12_object)
{
	var_13_int = 0;
	func_1576(var_13_int);
	var_18_bool = var_13_int == (int)1;
	if(var_18_bool != 0) {
		WorkWithCorpse(var_12_object);
	} else {
		Barter(var_12_object);
	}
	return 0;
	
}


func_1326(var_123_string)
{
	var_124_bool = 0; var_125_int = 0; var_126_bool = 0; var_127_int = 0; var_128_bool = 0; var_129_float = 0; var_130_cvector = CVector(0,0,0); var_131_cvector = CVector(0,0,0); var_132_bool = 0; var_133_int = 0; var_134_bool = 0; var_135_int = 0; var_136_bool = 0; var_137_float = 0; var_138_cvector = CVector(0,0,0); var_139_cvector = CVector(0,0,0);
	IsExisting3DSound(var_132_bool, var_123_string);
	var_140_bool = var_132_bool == 0; //@nz
	if(var_140_bool != 0) {
		var_133_int = 0;

	Label_1332:
		var_142_int = var_133_int + (int)1;
		var_143_int = var_123_string + var_142_int;
		IsExisting3DSound(var_134_bool, var_143_int);
		var_144_bool = var_134_bool == 0; //@nz
		if(var_144_bool != 0) {
		} else {
			var_133_int = var_133_int + (int)1;
			goto Label_1332;
		}
		var_145_bool = var_133_int == 0; //@nz
		if(var_145_bool != 0) {
			return 16;
		}
		irand(var_135_int, var_133_int);
		var_147_int = var_135_int + (int)1;
		var_123_string = var_123_string + var_147_int;
	}
	Is3DSoundLoaded(var_136_bool, var_123_string);
	var_148_bool = var_136_bool;
	if(var_148_bool != 0) {
		GetEyesHeight(var_137_float);
		GetDirection(var_138_cvector);
		var_139_cvector = var_138_cvector * (int)50;
		var_150_float = GetByIndex(var_139_cvector, 1);
		var_150_float = var_150_float + var_137_float;
		SetByIndex(var_139_cvector, 1) = var_150_float;
		PlayGlobalSound(var_123_string, var_139_cvector);
	}
	return 16;
	
}


func_1454(var_13_object)
{
	var_14_object = Obj(); var_15_object = Obj();
	self(var_15_object);
	var_15_object = var_13_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1200(var_12_object, var_13_int, var_14_float)
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
		func_986(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1460(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		CreateVectorVector(var_25_object);
		var_26_int = 1;

	Label_1229:
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
			goto Label_1229;
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
			func_1268(var_59_float, var_60_cvector, var_61_cvector);
			return 18;
		}
		var_25_object = 0;
	}
	var_102_object = Obj();
	var_12_object = var_102_object;
	func_1156(var_102_object);
	return 18;
	
}


func_1460(var_40_cvector, var_41_cvector)
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


func_1975(var_372_bool, var_373_object)
{
	var_374_float = 0; var_375_object = Obj();
	var_373_object = var_375_object;
	func_993(var_374_float, var_375_object);
	var_372_bool = var_374_float <= (float)40000.0;
	return 0;
}


func_439()
{
	StopAsync();
	StopGroup0();
	Stop();
	return 0;
}


func_1595(var_28_int, var_29_int)
{
	var_30_int = 0; var_31_bool = 0; var_32_int = 0; var_33_bool = 0;
	var_34_bool = var_28_int > var_29_int;
	if(var_34_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	var_32_int = 0;
	var_36_bool = var_28_int != var_29_int;
	if(var_36_bool != 0) {
		var_37_int = var_29_int - var_28_int;
		irand(var_32_int, var_37_int);
	} else {
		var_46_bool = var_28_int == (int)0;
		if(var_46_bool == 0) goto Label_1613;
		return 4;
	}
Label_1613:
	var_32_int = var_32_int + var_28_int;
	var_39_bool = var_32_int == (int)0;
	if(var_39_bool != 0) {
		return 4;
	}
	var_40_int = 0; var_41_string = "";
	func_1703(var_40_int, "Money");
	AddItem(var_33_bool, var_40_int, (int)0, var_32_int);
	return 4;
	
}


func_189()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1470(var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	var_28_cvector = var_26_cvector - var_25_cvector;
	var_24_float = var_28_cvector | var_28_cvector;
	return 2;
}


func_1983(var_50_bool, var_51_object)
{
	var_52_float = 0; var_53_string = ""; var_54_float = 0; var_55_float = 0; var_56_string = ""; var_57_float = 0;
	var_58_bool = 0; var_59_object = Obj();
	var_51_object = var_59_object;
	func_1132(var_58_bool, var_59_object);
	var_60_bool = var_58_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_50_bool = 0;
		return 6;
	}
	var_61_bool = 0; var_62_object = Obj();
	var_51_object = var_62_object;
	func_1001(var_61_bool, var_62_object);
	if(var_61_bool != 0) {
		@@var_51_object:GetProperty("reputation", var_55_float);
		var_50_bool = var_55_float < (float)0.33000001311302185;
		return 6;
	}
	var_67_bool = 0; var_68_object = Obj(); var_69_string = "";
	var_51_object = var_68_object;
	func_1006(var_67_bool, var_68_object, "class");
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
	func_1006(var_80_bool, var_81_object, "disease");
	var_83_bool = var_80_bool == 0; //@nz
	if(var_83_bool != 0) {
		var_50_bool = 0;
		return 6;
	}
	var_84_bool = 0;
	var_84_bool = 1;
	var_85_bool = 0; var_86_string = "";
	var_56_string = var_86_string;
	func_1367(var_85_bool, var_86_string);
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


func_1474(var_287_float, var_288_float, var_289_float)
{
	var_292_bool = var_288_float < var_289_float;
	if(var_292_bool != 0) {
		var_288_float = var_287_float;
	} else {
		var_289_float = var_287_float;
	}
	return 0;
	
}


func_1091(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_2117(var_128_object)
{
	var_129_object = Obj();
	var_128_object = var_129_object;
	func_1954(var_129_object);
	return 0;
}


func_966()
{
	StopGroup0();
	Stop();
	return 0;
}


func_455(var_0_object, var_1_object, var_2_bool, var_136_object, var_137_bool)
{
	var_141_bool = 0; var_142_bool = 0; var_143_bool = 0; var_144_bool = 0;
	var_0_object = var_136_object;
	var_145_object = Obj();
	var_145_object = var_0_object;
	func_1556(var_145_object);
	func_1565();
	Face(var_0_object);
	var_156_bool = var_137_bool;
	if(var_156_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_481:
	var_162_bool = 0; var_163_object = Obj();
	var_163_object = var_0_object;
	func_1132(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		CanSee(var_144_bool, var_0_object);
		var_164_bool = var_144_bool;
		if(var_164_bool != 0) {
			var_165_object = Obj();
			var_165_object = var_0_object;
			func_1556(var_165_object);
			func_635(var_144_bool);
		} else {
				var_328_object = Obj();
				var_328_object = var_0_object;
				func_1282(var_328_object);
				var_2_bool = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_143_bool);
				var_339_bool = var_143_bool == 0; //@nz
				if(var_339_bool != 0) {
					var_340_bool = var_1_object != 0; //@nn
					if(var_340_bool != 0) {
						func_630(var_143_bool, var_144_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_481;
				}
				var_343_bool = 0; var_344_object = Obj();
				var_344_object = var_0_object;
				func_1132(var_343_bool, var_344_object);
				var_345_bool = var_343_bool == 0; //@nz
				if(var_345_bool != 0) {
				} else {
					CanSee(var_144_bool, var_0_object);
					var_349_bool = var_144_bool;
					if(var_349_bool != 0) {
						var_2_bool = false;
						Face(var_0_object);
						func_635(var_144_bool);
						goto Label_577;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_143_bool);
					var_353_bool = var_143_bool == 0; //@nz
					if(var_353_bool != 0) {
						var_354_bool = var_1_object != 0; //@nn
						if(var_354_bool != 0) {
							func_630(var_143_bool, var_144_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_481;
					}
					var_357_bool = 0; var_358_object = Obj();
					var_358_object = var_0_object;
					func_1132(var_357_bool, var_358_object);
					var_359_bool = var_357_bool == 0; //@nz
					if(var_359_bool != 0) {
						goto Label_587;
					}
					var_2_bool = false;
					CanSee(var_144_bool, var_0_object);
					var_360_bool = var_144_bool;
					if(var_360_bool != 0) {
						Face(var_0_object);
						func_635(var_144_bool);
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
	var_326_bool = var_1_object != 0; //@nn
	if(var_326_bool != 0) {
		func_630(var_143_bool, var_144_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_481;
	
}


func_1096(var_17_bool, var_18_object)
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
		func_1091(var_28_bool, var_29_object);
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


func_1481(var_297_float, var_298_float, var_299_float, var_300_float)
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


func_971()
{
	return 0;
}


func_972(var_277_string, var_278_int)
{
	var_280_bool = var_278_int == (int)2;
	if(var_280_bool != 0) {
		var_277_string = "fire";
		return 0;
	EMIT "GOTO 0x3d8";
	}
	var_282_bool = var_278_int == (int)1;
	if(var_282_bool != 0) {
		var_277_string = "bullet";
		return 0;
	}
	var_277_string = "phys";
	return 0;
}


func_2123(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	func_1708(var_19_object);
	return 0;
}


func_1492(var_55_bool, var_56_int, var_57_int)
{
	var_58_int = 0; var_59_int = 0;
	irand(var_59_int, var_57_int);
	var_55_bool = var_59_int < var_56_int;
	return 2;
}


func_1367(var_85_bool, var_86_string)
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


func_1497(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	CreateObjectSet(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_986(var_42_cvector, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_43_object:GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
	return 4;
}


func_1626(var_85_string)
{
	var_86_object = Obj(); var_87_int = 0; var_88_bool = 0; var_89_object = Obj(); var_90_int = 0; var_91_bool = 0;
	CreateInvItem(var_89_object);
	@@var_89_object:SetItemName(var_85_string);
	@@var_89_object:SetProperty("Organ", (int)1);
	@@var_89_object:GetItemID(var_90_int);
	AddItem(var_91_bool, var_89_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1503(var_207_float, var_208_cvector, var_209_cvector)
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


func_993(var_374_float, var_375_object)
{
	var_376_cvector = CVector(0,0,0); var_377_cvector = CVector(0,0,0); var_378_cvector = CVector(0,0,0); var_379_cvector = CVector(0,0,0); var_380_cvector = CVector(0,0,0); var_381_cvector = CVector(0,0,0);
	GetPosition(var_379_cvector);
	@@var_375_object:GetPosition(var_380_cvector);
	var_381_cvector = var_380_cvector - var_379_cvector;
	var_374_float = var_381_cvector | var_381_cvector;
	return 6;
}


func_1765(var_17_bool, var_18_object, var_19_bool)
{
	var_20_string = ""; var_21_string = "";
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_18_object = var_23_object;
	func_1006(var_22_bool, var_23_object, "class");
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


func_1512(var_216_float, var_217_cvector)
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


func_1001(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	IsPlayerActor(var_10_object, var_12_bool);
	var_12_bool = var_9_bool;
	return 2;
}


func_1643()
{
	var_79_int = 0;
	func_1576(var_79_int);
	var_84_bool = var_79_int != (int)1;
	if(var_84_bool != 0) {
		return 0;
	}
	var_85_string = "";
	func_1626("liver");
	var_96_string = "";
	func_1626("kidney");
	var_97_string = "";
	func_1626("heart");
	var_98_string = "";
	func_1626("blood");
	return 0;
}


func_1132(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_1096(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_1006(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_1901()
{
	var_8_object = GlobalVars[0];
	func_1497(Obj());
	var_9_object = var_8_object;
	GlobalVars[0] = var_8_object;
	return 0;
}


func_1006(var_35_bool, var_36_object, var_37_string)
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


func_1522(var_204_float, var_205_cvector, var_206_cvector)
{
	var_207_float = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0);
	var_205_cvector = var_208_cvector;
	var_206_cvector = var_209_cvector;
	func_1503(var_207_float, var_208_cvector, var_209_cvector);
	var_216_float = 0; var_217_cvector = CVector(0,0,0);
	var_205_cvector = var_217_cvector;
	func_1512(var_216_float, var_217_cvector);
	var_225_float = 0; var_226_cvector = CVector(0,0,0);
	var_206_cvector = var_226_cvector;
	func_1512(var_225_float, var_226_cvector);
	var_227_float = var_216_float * var_225_float;
	var_204_float = var_207_float / var_227_float;
	return 0;
}


func_882(var_0_object, var_1_object)
{
	var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_887:
	func_971();
	irand(var_16_int, (int)10);
	var_22_int = var_16_int + (int)5;
	Sleep(var_22_int, var_17_bool);
	var_23_bool = var_17_bool;
	if(var_23_bool != 0) {
		func_804();
	} else {
		func_971();
		GetPFPosition(var_18_cvector);
		var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
		var_25_cvector = var_1_object;
		var_18_cvector = var_26_cvector;
		func_1470(var_24_float, var_25_cvector, var_26_cvector);
		var_30_bool = var_24_float > (int)40000;
		if(var_30_bool != 0) {
			FindPathTo(var_19_object, var_1_object);
			var_31_bool = var_19_object != 0; //@nn
			if(var_31_bool != 0) {
				RotatePath(var_19_object, var_17_bool);
				var_32_bool = var_17_bool == 0; //@nz
				if(var_32_bool != 0) {
				} else {
					FollowPath(var_19_object, (bool)0, var_17_bool);
					var_34_bool = var_17_bool == 0; //@nz
					if(var_34_bool != 0) {
						goto Label_963;
					}
					var_35_float = GetByIndex(var_0_object, 0);
					var_36_float = GetByIndex(var_0_object, 2);
					Rotate(var_35_float, var_36_float, var_17_bool);
					var_37_bool = var_17_bool == 0; //@nz
					if(var_37_bool != 0) {
						goto Label_963;
					}
					WaitForAnimEnd(var_17_bool);
					var_38_bool = var_17_bool == 0; //@nz
					if(var_38_bool != 0) {
						goto Label_963;
					}
					goto Label_964;
				EMIT "GOTO 0x3b4";
			}
				Sleep((int)1);
				var_19_object = 0;
				goto Label_963;
		}
			var_40_float = GetByIndex(var_0_object, 0);
			var_41_float = GetByIndex(var_0_object, 2);
			Rotate(var_40_float, var_41_float, var_17_bool);
			var_42_bool = var_17_bool == 0; //@nz
			if(var_42_bool != 0) {
				goto Label_963;
			}
			WaitForAnimEnd(var_17_bool);
			var_43_bool = var_17_bool == 0; //@nz
			if(var_43_bool != 0) {
				goto Label_963;
			}
			goto Label_964;
		}
	Label_963:
		goto Label_903;
	}
Label_964:
	goto Label_887;
	
}
EMIT "Return(); Pop(8)";


func_1908(var_134_object, var_135_bool)
{
	var_136_object = Obj(); var_137_bool = 0;
	var_134_object = var_136_object;
	var_135_bool = var_137_bool;
	TaskCall(3);
	func_455(var_138_object, var_139_object, var_140_bool, var_136_object, var_137_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1268(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetScene(var_21_object);
	AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	var_25_object = Obj();
	var_14_object = var_25_object;
	func_1156(var_25_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_630(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_1018(var_252_float, var_253_object, var_254_float, var_255_int)
{
	var_256_int = 0; var_257_string = ""; var_258_int = 0; var_259_float = 0; var_260_float = 0; var_261_float = 0; var_262_int = 0; var_263_string = ""; var_264_int = 0; var_265_float = 0; var_266_float = 0; var_267_float = 0;
	var_268_bool = 0; var_269_object = Obj(); var_270_string = "";
	var_253_object = var_269_object;
	func_1006(var_268_bool, var_269_object, "health");
	var_271_bool = var_268_bool == 0; //@nz
	if(var_271_bool != 0) {
		var_252_float = 0.0;
		return 12;
	}
	var_272_bool = 0; var_273_object = Obj(); var_274_string = "";
	var_253_object = var_273_object;
	func_1006(var_272_bool, var_273_object, "armor");
	var_275_bool = var_272_bool == 0; //@nz
	if(var_275_bool != 0) {
		var_262_int = 0;
	} else {
			@@var_253_object:GetProperty("armor", var_262_int);
	}
	var_277_string = ""; var_278_int = 0;
	var_255_int = var_278_int;
	func_972(var_277_string, var_278_int);
	var_263_string = "armor_" + var_277_string;
	var_283_bool = 0; var_284_object = Obj(); var_285_string = "";
	var_253_object = var_284_object;
	var_263_string = var_285_string;
	func_1006(var_283_bool, var_284_object, var_285_string);
	var_286_bool = var_283_bool == 0; //@nz
	if(var_286_bool != 0) {
		var_264_int = 0;
	} else {
		@@var_253_object:GetProperty(var_263_string, var_264_int);

	}
	var_287_float = 0; var_288_float = 0; var_289_float = 0;
	var_290_int = var_262_int + var_264_int;
	var_288_float = var_290_int / (float)100.0;
	func_1474(var_287_float, var_288_float, (float)1);
	var_287_float = var_265_float;
	@@var_253_object:GetProperty("health", var_266_float);
	var_295_int = (int)1 - var_265_float;
	var_267_float = var_254_float * var_295_int;
	var_297_float = 0; var_298_float = 0; var_299_float = 0; var_300_float = 0;
	var_298_float = var_266_float - var_267_float;
	func_1481(var_297_float, var_298_float, (float)0, (float)1);
	@@var_253_object:SetProperty("health", var_297_float);
	var_303_bool = 0; var_304_object = Obj();
	var_253_object = var_304_object;
	func_1001(var_303_bool, var_304_object);
	if(var_303_bool != 0) {
		var_305_float = 0;
		var_305_float = -var_267_float;
		func_1539(var_305_float);
	}
	var_267_float = var_252_float;
	return 12;
	
}


func_635(var_0_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_bool = 0; var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_object = Obj(); var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_object = Obj(); var_175_int = 0; var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); var_179_object = Obj(); var_180_cvector = CVector(0,0,0); var_181_cvector = CVector(0,0,0); var_182_bool = 0; var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_object = Obj(); var_186_object = Obj(); var_187_cvector = CVector(0,0,0); var_188_object = Obj(); var_189_int = 0; var_190_cvector = CVector(0,0,0); var_191_float = 0; var_192_object = Obj(); var_193_object = Obj();
	var_194_object = Obj();
	var_194_object = var_0_object;
	func_1556(var_194_object);
	ReportAttack(var_0_object);
	var_195_bool = 0; var_196_object = Obj();
	var_196_object = var_0_object;
	func_1001(var_195_bool, var_196_object);
	if(var_195_bool != 0) {
		var_197_object = Obj();
		func_1454(var_197_object);
		SendPlayerEnemy(var_0_object, var_197_object);
	}
	GetDirection(var_180_cvector);
	var_198_cvector = CVector(0,0,0); var_199_object = Obj();
	var_199_object = var_0_object;
	func_986(var_198_cvector, var_199_object);
	var_198_cvector = var_181_cvector;
	var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0);
	var_180_cvector = var_205_cvector;
	var_181_cvector = var_206_cvector;
	func_1522(var_204_float, var_205_cvector, var_206_cvector);
	var_229_bool = var_204_float < (float)0.9993908405303955;
	if(var_229_bool != 0) {
		return 28;
	}
	func_1565();
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
	func_986(var_240_cvector, var_241_object);
	var_240_cvector = var_181_cvector;
	var_242_float = GetByIndex(var_181_cvector, 1);
	var_243_float = 0; var_244_object = Obj();
	var_244_object = var_0_object;
	func_1293(var_243_float, var_244_object);
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
			func_1018(var_252_float, var_253_object, (float)1.5, (int)1);
			var_252_float = var_191_float;
			ReportHit(var_0_object, (int)2, var_191_float, (float)1.5);
		} else {
			var_321_bool = var_189_int != (int)-1;
			if(var_321_bool == 0) goto Label_747;
			GetScene(var_192_object);
			AddActorByType(var_193_object, "scripted", var_192_object, var_190_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_193_object:SetScriptProperty("Material", var_189_int);
			var_193_object = 0;
			var_192_object = 0;

		}
	}
Label_747:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 28;
	
}
EMIT "Stack[-6] = 0";


func_1919(var_127_object)
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
	func_1001(var_134_bool, var_135_object);
	if(var_134_bool != 0) {
		var_138_object = Obj();
		func_1454(var_138_object);
		ReportReputationChange(var_127_object, var_138_object, (float)-0.07000000029802322);
	}
	return 2;
}


