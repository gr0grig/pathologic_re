// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,WaitForAnimEnd/1,Speak/1,SetAttackState/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetScene/1,AddActorByType/6,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,CreateObjectSet/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ResetAAS/0,IsPlayerActor/2,ReportReputationChange/3
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:shoot_begin|W:shot|W:shoot_end|W:attack_on|W:attack_off|W:hunt|W:@Stop hunt|W:attack_begin1|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|A:in|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|A:add|W:reputation
// @GLOBALS: 0:object:
// @RUN_OP: 0x2cc
// @RUN_TASK: 4
// @TASK_0: vars= params=1
// @EVENT_0: op=0x18 vars=object
// @EVENT_22: op=0x8d vars=object,int,float,float
// @EVENT_16: op=0x8f vars=object,string
// @EVENT_41: op=0x91 vars=object
// @TASK_1: vars=object params=1
// @EVENT_41: op=0xb3 vars=object
// @EVENT_3: op=0xbc vars=object
// @EVENT_4: op=0xc5 vars=object
// @EVENT_17: op=0xd1 vars=object
// @EVENT_30: op=0xe5 vars=object,object
// @EVENT_1: op=0xf1 vars=object
// @EVENT_7: op=0xff vars=int
// @TASK_2: vars=object,bool params=1
// @EVENT_17: op=0x175 vars=object
// @EVENT_30: op=0x189 vars=object,object
// @EVENT_41: op=0x19c vars=object
// @TASK_3: vars=object,object,bool params=2
// @EVENT_3: op=0x22a vars=object
// @EVENT_1: op=0x238 vars=object
// @EVENT_17: op=0x2a8 vars=object
// @EVENT_30: op=0x2c0 vars=object,object
// @TASK_4: vars=cvector,cvector params=0
// @EVENT_3: op=0x2d5 vars=object
// @EVENT_17: op=0x2f3 vars=object
// @EVENT_30: op=0x307 vars=object,object
// @EVENT_1: op=0x313 vars=object
// @STANDALONE_EVENT_22: op=0x4fd vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x505 vars=object,string
// @STANDALONE_EVENT_41: op=0x512 vars=object
// @PE: 0x0,0x9,0x77,0x8d,0x8f,0x91,0xb3,0xbc,0xc5,0xd1,0xe5,0xf1,0xff,0x175,0x189,0x19c,0x22a,0x238,0x2a8,0x2c0,0x2f3,0x307,0x313,0x374,0x471,0x478,0x489,0x492,0x49c,0x4f5,0x4fd,0x512,0x51f,0x537,0x557,0x57a,0x5a8,0x5ae

task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_bool = 0;
	IsOverrideActive(var_10_bool);
	var_11_bool = var_10_bool == 0; //@nz
	if(var_11_bool != 0) {
		WorkWithCorpse(var_8_cvector);
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
	func_171();
	var_8_cvector = Obj();
	func_1298();
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
		func_1115(var_12_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj();
	var_43_object = var_45_object;
	func_1024(var_44_bool, var_45_object);
	var_72_bool = var_44_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_73_object = Obj();
		var_43_object = var_73_object;
		func_1322(var_73_object);
		return 0;
	}
	func_171();
	var_81_object = Obj();
	var_43_object = var_81_object;
	func_1335(var_81_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj();
	var_8_cvector = var_11_object;
	var_9_cvector = var_12_object;
	func_1408(var_10_bool, var_11_object, var_12_object);
	if(var_10_bool != 0) {
		var_8_cvector = Obj();
		func_209();
	}
	return 0;
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_cvector = var_10_object;
	func_1380(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_171();
		var_55_object = Obj();
		var_8_cvector = var_55_object;
		func_1402(var_55_object);
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


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj();
	var_43_object = var_45_object;
	func_1024(var_44_bool, var_45_object);
	var_72_bool = var_44_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_73_object = Obj();
		var_43_object = var_73_object;
		func_1322(var_73_object);
		return 0;
	}
	func_405();
	var_80_object = Obj();
	var_43_object = var_80_object;
	func_1335(var_80_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_cvector, var_9_cvector)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj();
	var_8_cvector = var_11_object;
	var_9_cvector = var_12_object;
	func_1408(var_10_bool, var_11_object, var_12_object);
	if(var_10_bool != 0) {
		var_8_cvector = Obj();
		func_373();
	}
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_cvector, var_8_cvector)
{
	func_405();
	var_8_cvector = Obj();
	func_1298();
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
		func_1115(var_12_object);
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


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_cvector, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj();
	var_43_object = var_45_object;
	func_1024(var_44_bool, var_45_object);
	var_72_bool = var_44_bool == 0; //@nz
	if(var_72_bool != 0) {
		return 0;
	}
	var_73_object = Obj();
	var_43_object = var_73_object;
	func_1322(var_73_object);
	var_80_bool = var_43_object == var_0_object;
	if(var_80_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_43_object;
		var_81_bool = var_2_bool;
		if(var_81_bool == 0) goto Label_703;
		StopAnimation();
		StopGroup0();
	}
Label_703:
	return 0;
	
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_cvector)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj();
	var_8_cvector = var_11_object;
	var_9_cvector = var_12_object;
	func_1408(var_10_bool, var_11_object, var_12_object);
	if(var_10_bool != 0) {
		var_8_cvector = Obj();
		func_680();
	}
	return 0;
}


task_4_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_8_object = var_12_object;
	func_1024(var_11_bool, var_12_object);
	var_45_bool = var_11_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj();
	var_8_object = var_47_object;
	func_1375(var_46_bool, var_47_object);
	var_50_bool = var_46_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_51_object = GlobalVars[0];
		@@var_51_object:in(var_10_bool, var_8_object);
		var_52_bool = var_10_bool == 0; //@nz
		if(var_52_bool != 0) {
			return 2;
		}
	}
	func_879();
	var_53_object = Obj();
	var_8_object = var_53_object;
	TaskCall(1);
	func_147(var_54_object, var_53_object);
	TaskReturn();
	return 2;
}


	task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object, var_43_object)
	{
	var_44_bool = 0; var_45_object = Obj();
	var_43_object = var_45_object;
	func_1024(var_44_bool, var_45_object);
	var_72_bool = var_44_bool == 0; //@nz
	if(var_72_bool != 0) {
		var_73_object = Obj();
		var_43_object = var_73_object;
		func_1322(var_73_object);
		return 0;
	}
	func_879();
	var_80_object = Obj();
	var_43_object = var_80_object;
	func_1335(var_80_object);
	return 0;
	}


task_4_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj(); var_12_object = Obj();
	var_8_object = var_11_object;
	var_9_object = var_12_object;
	func_1408(var_10_bool, var_11_object, var_12_object);
	if(var_10_bool != 0) {
		var_8_object = Obj();
		func_755();
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_object = var_10_object;
	func_1380(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_879();
		var_54_object = Obj();
		var_8_object = var_54_object;
		func_1448(var_54_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_1048(var_13_int, var_14_float);
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
	var_9_object = Obj();
	var_8_object = var_9_object;
	func_1454(var_9_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_cvector, var_7_cvector)
{
	func_1304();
	
Label_719:
	func_801(var_6_cvector, var_7_cvector);
	goto Label_719;
}
EMIT "Return(); Pop(0)";


func_1024(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_988(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_907(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_0(var_11_object)
{
	func_1227();
	var_52_object = Obj();
	var_11_object = var_52_object;
	func_9(var_52_object);
	return 0;
}


func_1408(var_10_bool, var_11_object, var_12_object)
{
	var_13_float = 0; var_14_bool = 0; var_15_float = 0; var_16_bool = 0;
	var_17_bool = 0; var_18_object = Obj(); var_19_string = "";
	var_12_object = var_18_object;
	func_907(var_17_bool, var_18_object, "reputation");
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
		func_899(var_32_float, var_33_object);
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


func_1155(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	CreateObjectSet(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_899(var_254_float, var_255_object)
{
	var_256_cvector = CVector(0,0,0); var_257_cvector = CVector(0,0,0); var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0);
	GetPosition(var_259_cvector);
	@@var_255_object:GetPosition(var_260_cvector);
	var_261_cvector = var_260_cvector - var_259_cvector;
	var_254_float = var_261_cvector | var_261_cvector;
	return 6;
}


func_9(var_52_object)
{
	EventDisable(0);
	var_53_object = Obj();
	var_52_object = var_53_object;
	func_32(var_53_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_20:
	Hold();
	goto Label_20;
}
EMIT "Return(); Pop(0)";


func_1161(var_107_float, var_108_cvector, var_109_cvector)
{
	var_110_float = GetByIndex(var_108_cvector, 0);
	var_111_float = GetByIndex(var_109_cvector, 0);
	var_112_float = var_110_float * var_111_float;
	var_113_float = GetByIndex(var_108_cvector, 2);
	var_114_float = GetByIndex(var_109_cvector, 2);
	var_115_float = var_113_float * var_114_float;
	var_107_float = var_112_float + var_115_float;
	return 0;
}


func_907(var_35_bool, var_36_object, var_37_string)
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


func_266(var_0_object, var_1_object, var_242_object)
{
	var_245_bool = 0; var_246_int = 0; var_247_int = 0; var_248_bool = 0; var_249_int = 0; var_250_int = 0;
	var_0_object = var_242_object;
	CanSee(var_1_object, var_0_object);
	var_251_object = var_1_object;
	if(var_251_object != 0) {
		var_252_bool = 0; var_253_object = Obj();
		var_253_object = var_0_object;
		func_1367(var_252_bool, var_253_object);
		if(var_252_bool != 0) {
			var_263_object = Obj(); var_264_bool = 0;
			var_263_object = var_0_object;
			func_1311(var_263_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	PlayAnimation("all", "shoot_begin");
	WaitForAnimEnd(var_248_bool);
	var_267_bool = var_248_bool == 0; //@nz
	if(var_267_bool != 0) {
		StopAsync();
		return 6;
	}
	Speak("shot");
	PlayAnimation("all", "shoot_end");
	WaitForAnimEnd(var_248_bool);
	var_271_bool = var_248_bool == 0; //@nz
	if(var_271_bool != 0) {
		StopAsync();
		return 6;
	}
	LockAnimationEnd("all", "attack_on");
	var_250_int = 0;
	
Label_316:
	var_275_bool = var_250_int < (int)20;
	if(var_275_bool != 0) {
		Sleep((float)0.5, var_248_bool);
		var_277_bool = var_248_bool == 0; //@nz
		if(var_277_bool != 0) {
			return 6;
		}
		CanSee(var_1_object, var_0_object);
		var_278_object = var_1_object;
		if(var_278_object != 0) {
			var_279_bool = 0; var_280_object = Obj();
			var_280_object = var_0_object;
			func_1367(var_279_bool, var_280_object);
			if(var_279_bool != 0) {
				func_405();
				var_281_object = Obj(); var_282_bool = 0;
				var_281_object = var_0_object;
				func_1311(var_281_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_286_bool = (int)0 == (int)4;
			if(var_286_bool == 0) goto Label_361;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_405();
		var_289_object = Obj(); var_290_bool = 0;
		var_242_object = var_289_object;
		func_1311(var_289_object, (bool)0);
		var_250_int = var_250_int + (int)1;
		goto Label_316;
	}
	return 6;
	
}


func_1170(var_116_float, var_117_cvector)
{
	var_118_float = GetByIndex(var_117_cvector, 0);
	var_119_float = GetByIndex(var_117_cvector, 0);
	var_120_float = var_118_float * var_119_float;
	var_121_float = GetByIndex(var_117_cvector, 2);
	var_122_float = GetByIndex(var_117_cvector, 2);
	var_123_float = var_121_float * var_122_float;
	var_124_int = var_120_float + var_123_float;
	var_116_float = sqrt(var_124_int);
	return 0;
}


func_147(var_0_object, var_53_object)
{
	var_55_bool = 0; var_56_bool = 0;
	var_0_object = var_53_object;
	Face(var_53_object);
	
Label_151:
	Sleep((float)0.5, var_56_bool);
	var_58_bool = 0;
	var_58_bool = 1;
	var_59_bool = var_56_bool == 0; //@nz
	if(var_59_bool != 1) {
		var_60_bool = 0; var_61_object = Obj();
		var_61_object = var_0_object;
		func_1024(var_60_bool, var_61_object);
		var_62_bool = var_60_bool == 0; //@nz
		if(var_62_bool != 1) {
			var_58_bool = 0;
		}
	}
	if(var_58_bool != 0) {
	} else {
		goto Label_151;
	}
	StopAsync();
	return 2;
	
}


func_405()
{
	StopAsync();
	StopGroup0();
	Stop();
	return 0;
}


func_919(var_145_float, var_146_object, var_147_float, var_148_int)
{
	var_149_int = 0; var_150_string = ""; var_151_int = 0; var_152_float = 0; var_153_float = 0; var_154_float = 0; var_155_int = 0; var_156_string = ""; var_157_int = 0; var_158_float = 0; var_159_float = 0; var_160_float = 0;
	var_161_bool = 0; var_162_object = Obj(); var_163_string = "";
	var_146_object = var_162_object;
	func_907(var_161_bool, var_162_object, "health");
	var_164_bool = var_161_bool == 0; //@nz
	if(var_164_bool != 0) {
		var_145_float = 0.0;
		return 12;
	}
	var_165_bool = 0; var_166_object = Obj(); var_167_string = "";
	var_146_object = var_166_object;
	func_907(var_165_bool, var_166_object, "armor");
	var_168_bool = var_165_bool == 0; //@nz
	if(var_168_bool != 0) {
		var_155_int = 0;
	} else {
			@@var_146_object:GetProperty("armor", var_155_int);
	}
	var_170_string = ""; var_171_int = 0;
	var_148_int = var_171_int;
	func_884(var_170_string, var_171_int);
	var_156_string = "armor_" + var_170_string;
	var_174_bool = 0; var_175_object = Obj(); var_176_string = "";
	var_146_object = var_175_object;
	var_156_string = var_176_string;
	func_907(var_174_bool, var_175_object, var_176_string);
	var_177_bool = var_174_bool == 0; //@nz
	if(var_177_bool != 0) {
		var_157_int = 0;
	} else {
		@@var_146_object:GetProperty(var_156_string, var_157_int);

	}
	var_178_float = 0; var_179_float = 0; var_180_float = 0;
	var_181_int = var_155_int + var_157_int;
	var_179_float = var_181_int / (float)100.0;
	func_1137(var_178_float, var_179_float, (float)1);
	var_178_float = var_158_float;
	@@var_146_object:GetProperty("health", var_159_float);
	var_186_int = (int)1 - var_158_float;
	var_160_float = var_147_float * var_186_int;
	var_188_float = 0; var_189_float = 0; var_190_float = 0; var_191_float = 0;
	var_189_float = var_159_float - var_160_float;
	func_1144(var_188_float, var_189_float, (float)0, (float)1);
	@@var_146_object:SetProperty("health", var_188_float);
	var_160_float = var_145_float;
	return 12;
	
}


func_1304()
{
	var_8_object = GlobalVars[0];
	func_1155(Obj());
	var_9_object = var_8_object;
	GlobalVars[0] = var_8_object;
	return 0;
}


func_1048(var_12_object, var_13_int)
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


func_1180(var_104_float, var_105_cvector, var_106_cvector)
{
	var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0);
	var_105_cvector = var_108_cvector;
	var_106_cvector = var_109_cvector;
	func_1161(var_107_float, var_108_cvector, var_109_cvector);
	var_116_float = 0; var_117_cvector = CVector(0,0,0);
	var_105_cvector = var_117_cvector;
	func_1170(var_116_float, var_117_cvector);
	var_125_float = 0; var_126_cvector = CVector(0,0,0);
	var_106_cvector = var_126_cvector;
	func_1170(var_125_float, var_126_cvector);
	var_127_float = var_116_float * var_125_float;
	var_104_float = var_107_float / var_127_float;
	return 0;
}


func_1311(var_60_object, var_61_bool)
{
	var_62_object = Obj(); var_63_bool = 0;
	var_60_object = var_62_object;
	var_61_bool = var_63_bool;
	TaskCall(3);
	func_421(var_64_object, var_65_object, var_66_bool, var_62_object, var_63_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_32(var_53_object)
{
	var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_string = ""; var_59_object = Obj(); var_60_bool = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_string = ""; var_69_object = Obj(); var_70_bool = 0; var_71_bool = 0; var_72_float = 0; var_73_cvector = CVector(0,0,0);
	var_74_bool = var_53_object == 0; //@ne
	if(var_74_bool != 0) {
		var_75_string = "";
		func_119("fdie");
	} else {
		@@var_53_object:GetPosition(var_64_cvector);
		GetPosition(var_65_cvector);
		GetDirection(var_66_cvector);
		var_67_cvector = var_65_cvector - var_64_cvector;
		var_78_float = GetByIndex(var_67_cvector, 0);
		var_79_float = GetByIndex(var_66_cvector, 0);
		var_80_float = var_78_float * var_79_float;
		var_81_float = GetByIndex(var_67_cvector, 2);
		var_82_float = GetByIndex(var_66_cvector, 2);
		var_83_float = var_81_float * var_82_float;
		var_84_int = var_80_float + var_83_float;
		var_86_bool = var_84_int >= (int)0;
		if(var_86_bool != 0) {
			var_68_string = "fdie";
		} else {
				var_68_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_53_object = var_69_object;
		var_89_bool = IsFuncExist(var_53_object, "GetScriptProperty", (int)2);
		if(var_89_bool != 0) {
			@@var_53_object:HasScriptProperty(var_70_bool, "Owner");
			var_91_bool = var_70_bool;
			if(var_91_bool != 0) {
				@@var_53_object:GetScriptProperty(var_69_object, "Owner");
				var_93_bool = var_69_object == 0; //@ne
				if(var_93_bool != 0) {
					var_53_object = var_69_object;
				}
			}
		}
		var_96_bool = IsFuncExist(var_69_object, "@GetEyesHeight", (int)1);
		if(var_96_bool != 0) {
			@@var_69_object:GetEyesHeight(var_72_float);
			var_73_cvector = CVector(0.0, 0.0, 0.0);
			var_97_float = GetByIndex(var_73_cvector, 1);
			var_72_float = var_97_float;
			SetByIndex(var_73_cvector, 1) = var_97_float;
			LookAsync(var_53_object, "head", var_73_cvector);
			var_71_bool = 1;
		} else {
			var_71_bool = 0;

		}
		PlayAnimation("all", var_68_string);
		WaitForAnimEnd();
		var_100_bool = var_71_bool;
		if(var_100_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_68_string);
		RemoveEnvelope();
		var_69_object = 0;
	}
	return 20;
	
}


func_801(var_0_object, var_1_object)
{
	var_12_int = 0; var_13_bool = 0; var_14_cvector = CVector(0,0,0); var_15_object = Obj(); var_16_int = 0; var_17_bool = 0; var_18_cvector = CVector(0,0,0); var_19_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_806:
	irand(var_16_int, (int)60);
	var_22_int = var_16_int + (int)30;
	Sleep(var_22_int, var_17_bool);
	var_23_bool = var_17_bool;
	if(var_23_bool != 0) {
		func_724();
	} else {
		GetPFPosition(var_18_cvector);
		var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
		var_25_cvector = var_1_object;
		var_18_cvector = var_26_cvector;
		func_1133(var_24_float, var_25_cvector, var_26_cvector);
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
						goto Label_876;
					}
					var_35_float = GetByIndex(var_0_object, 0);
					var_36_float = GetByIndex(var_0_object, 2);
					Rotate(var_35_float, var_36_float, var_17_bool);
					var_37_bool = var_17_bool == 0; //@nz
					if(var_37_bool != 0) {
						goto Label_876;
					}
					WaitForAnimEnd(var_17_bool);
					var_38_bool = var_17_bool == 0; //@nz
					if(var_38_bool != 0) {
						goto Label_876;
					}
					goto Label_877;
				EMIT "GOTO 0x35d";
			}
				Sleep((int)1);
				var_19_object = 0;
				goto Label_876;
		}
			var_40_float = GetByIndex(var_0_object, 0);
			var_41_float = GetByIndex(var_0_object, 2);
			Rotate(var_40_float, var_41_float, var_17_bool);
			var_42_bool = var_17_bool == 0; //@nz
			if(var_42_bool != 0) {
				goto Label_876;
			}
			WaitForAnimEnd(var_17_bool);
			var_43_bool = var_17_bool == 0; //@nz
			if(var_43_bool != 0) {
				goto Label_876;
			}
			goto Label_877;
		}
	Label_876:
		goto Label_819;
	}
Label_877:
	goto Label_806;
	
}
EMIT "Return(); Pop(8)";


func_421(var_0_object, var_1_object, var_2_bool, var_62_object, var_63_bool)
{
	var_67_bool = 0; var_68_bool = 0; var_69_bool = 0; var_70_bool = 0;
	var_0_object = var_62_object;
	Face(var_0_object);
	var_71_bool = var_63_bool;
	if(var_71_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_440:
	var_77_bool = 0; var_78_object = Obj();
	var_78_object = var_0_object;
	func_1024(var_77_bool, var_78_object);
	if(var_77_bool != 0) {
		CanSee(var_70_bool, var_0_object);
		var_79_bool = var_70_bool;
		if(var_79_bool != 0) {
			func_590(var_70_bool);
		} else {
				var_209_object = Obj();
				var_209_object = var_0_object;
				func_1115(var_209_object);
				var_2_bool = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_69_bool);
				var_220_bool = var_69_bool == 0; //@nz
				if(var_220_bool != 0) {
					var_221_bool = var_1_object != 0; //@nn
					if(var_221_bool != 0) {
						func_585(var_69_bool, var_70_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_440;
				}
				var_224_bool = 0; var_225_object = Obj();
				var_225_object = var_0_object;
				func_1024(var_224_bool, var_225_object);
				var_226_bool = var_224_bool == 0; //@nz
				if(var_226_bool != 0) {
				} else {
					CanSee(var_70_bool, var_0_object);
					var_230_bool = var_70_bool;
					if(var_230_bool != 0) {
						var_2_bool = false;
						Face(var_0_object);
						func_590(var_70_bool);
						goto Label_532;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_69_bool);
					var_234_bool = var_69_bool == 0; //@nz
					if(var_234_bool != 0) {
						var_235_bool = var_1_object != 0; //@nn
						if(var_235_bool != 0) {
							func_585(var_69_bool, var_70_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_440;
					}
					var_238_bool = 0; var_239_object = Obj();
					var_239_object = var_0_object;
					func_1024(var_238_bool, var_239_object);
					var_240_bool = var_238_bool == 0; //@nz
					if(var_240_bool != 0) {
						goto Label_542;
					}
					var_2_bool = false;
					CanSee(var_70_bool, var_0_object);
					var_241_bool = var_70_bool;
					if(var_241_bool != 0) {
						Face(var_0_object);
						func_590(var_70_bool);
						goto Label_532;
					}
					goto Label_542;
				}
	}
		Label_542:
			SetAttackState((bool)0);
			StopAsync();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 4;
	}
Label_532:
	var_207_bool = var_1_object != 0; //@nn
	if(var_207_bool != 0) {
		func_585(var_69_bool, var_70_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_440;
	
}


func_1448(var_54_object)
{
	var_55_object = Obj();
	var_54_object = var_55_object;
	func_1346(var_55_object);
	return 0;
}


func_1322(var_73_object)
{
	var_74_bool = 0; var_75_bool = 0;
	var_76_bool = var_73_object == 0; //@ne
	if(var_76_bool != 0) {
		return 2;
	}
	var_77_object = GlobalVars[0];
	@@var_77_object:in(var_75_bool, var_73_object);
	var_78_bool = var_75_bool == 0; //@nz
	if(var_78_bool != 0) {
		var_79_object = GlobalVars[0];
		@@var_79_object:add(var_73_object);
	}
	return 2;
}


func_171()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1197(var_17_int, var_18_int)
{
	var_19_int = 0; var_20_int = 0; var_21_int = 0; var_22_bool = 0; var_23_int = 0; var_24_int = 0; var_25_int = 0; var_26_bool = 0;
	var_27_bool = var_17_int > var_18_int;
	if(var_27_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_29_bool = var_17_int != var_18_int;
	if(var_29_bool != 0) {
		var_30_int = var_18_int - var_17_int;
		irand(var_24_int, var_30_int);
	} else {
		var_36_bool = var_17_int == (int)0;
		if(var_36_bool == 0) goto Label_1215;
		return 8;
	}
Label_1215:
	(int)0 = (int)0 + var_17_int;
	var_32_bool = var_23_int == (int)0;
	if(var_32_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_25_int, "Money");
	AddItem(var_26_bool, var_25_int, (int)0, var_23_int);
	return 8;
	
}


func_1454(var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1269(var_10_object);
	return 0;
}


func_1335(var_80_object)
{
	var_81_object = Obj();
	var_80_object = var_81_object;
	func_1322(var_81_object);
	var_82_object = Obj(); var_83_bool = 0;
	var_80_object = var_82_object;
	func_1311(var_82_object, (bool)1);
	return 0;
}


func_1346(var_55_object)
{
	var_56_bool = 0; var_57_bool = 0;
	var_58_object = GlobalVars[0];
	@@var_58_object:in(var_57_bool, var_55_object);
	var_59_bool = var_57_bool;
	if(var_59_bool != 0) {
		var_60_object = Obj(); var_61_bool = 0;
		var_55_object = var_60_object;
		func_1311(var_60_object, (bool)1);
	} else {
		var_242_object = Obj();
		var_55_object = var_242_object;
		TaskCall(2);
		func_266(var_243_object, var_244_bool, var_242_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_585(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_1227()
{
	var_12_int = 0; var_13_bool = 0; var_14_int = 0; var_15_bool = 0;
	ClearSubContainer((int)0);
	var_17_int = 0; var_18_int = 0;
	func_1197((int)500, (int)1000);
	irand(var_14_int, (int)4);
	var_39_bool = var_14_int != (int)0;
	if(var_39_bool != 0) {
		var_40_int = 0; var_41_string = "";
		func_1264(var_40_int, "rifle_ammo");
		AddItem(var_15_bool, var_40_int, (int)0, var_14_int);
	}
	irand(var_14_int, (int)3);
	var_47_bool = var_14_int == (int)0;
	if(var_47_bool != 0) {
		var_48_int = 0; var_49_string = "";
		func_1264(var_48_int, "rusk");
		AddItem(var_15_bool, var_48_int, (int)0, (int)1);
	}
	return 4;
}


func_590(var_0_object)
{
	var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_object = Obj(); var_84_int = 0; var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_object = Obj(); var_88_object = Obj(); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_object = Obj(); var_93_int = 0; var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_object = Obj(); var_97_object = Obj();
	ReportAttack(var_0_object);
	GetDirection(var_89_cvector);
	var_98_cvector = CVector(0,0,0); var_99_object = Obj();
	var_99_object = var_0_object;
	func_892(var_98_cvector, var_99_object);
	var_98_cvector = var_90_cvector;
	var_104_float = 0; var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	var_89_cvector = var_105_cvector;
	var_90_cvector = var_106_cvector;
	func_1180(var_104_float, var_105_cvector, var_106_cvector);
	var_129_bool = var_104_float < (float)0.9659258127212524;
	if(var_129_bool != 0) {
		return 18;
	}
	PlayAnimation("all", "attack_begin1");
	WaitForAnimEnd();
	Speak("shot");
	GetDirection(var_89_cvector);
	var_133_cvector = CVector(0,0,0); var_134_object = Obj();
	var_134_object = var_0_object;
	func_892(var_133_cvector, var_134_object);
	var_133_cvector = var_90_cvector;
	var_135_float = GetByIndex(var_90_cvector, 1);
	var_136_float = 0; var_137_object = Obj();
	var_137_object = var_0_object;
	func_1126(var_136_float, var_137_object);
	var_135_float = var_135_float + var_136_float;
	SetByIndex(var_90_cvector, 1) = var_135_float;
	RandVecCone3D(var_91_cvector, var_90_cvector, (float)0.2617993950843811);
	GetVictimMaterial(var_91_cvector, var_92_object, var_93_int, var_94_cvector);
	var_143_bool = var_92_object != 0; //@nn
	if(var_143_bool != 0) {
		var_144_bool = var_92_object == var_0_object;
		if(var_144_bool != 0) {
			var_145_float = 0; var_146_object = Obj(); var_147_float = 0; var_148_int = 0;
			var_146_object = var_0_object;
			func_919(var_145_float, var_146_object, (float)1.5, (int)0);
			var_145_float = var_95_float;
			ReportHit(var_0_object, (int)2, var_95_float, (float)1.5);
		} else {
			var_202_bool = var_93_int != (int)-1;
			if(var_202_bool == 0) goto Label_668;
			GetScene(var_96_object);
			AddActorByType(var_97_object, "scripted", var_96_object, var_94_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_97_object:SetScriptProperty("Material", var_93_int);
			var_97_object = 0;
			var_96_object = 0;
		}
	}
Label_668:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 18;
	
}
EMIT "Stack[-6] = 0";


func_724()
{
	return 0;
}


func_1367(var_252_bool, var_253_object)
{
	var_254_float = 0; var_255_object = Obj();
	var_253_object = var_255_object;
	func_899(var_254_float, var_255_object);
	var_252_bool = var_254_float <= (float)40000.0;
	return 0;
}


func_983(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_1115(var_209_object)
{
	var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0);
	@@var_209_object:GetPosition(var_213_cvector);
	GetPosition(var_214_cvector);
	var_215_cvector = var_213_cvector - var_214_cvector;
	var_216_float = GetByIndex(var_215_cvector, 0);
	var_217_float = GetByIndex(var_215_cvector, 2);
	RotateAsync(var_216_float, var_217_float);
	return 6;
}


func_988(var_17_bool, var_18_object)
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
		func_983(var_28_bool, var_29_object);
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


func_1375(var_50_bool, var_51_object)
{
	var_52_bool = 0; var_53_bool = 0;
	IsPlayerActor(var_51_object, var_53_bool);
	var_53_bool = var_50_bool;
	return 2;
}


func_1380(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	var_13_bool = 0; var_14_object = Obj();
	var_10_object = var_14_object;
	func_1024(var_13_bool, var_14_object);
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
	func_1375(var_50_bool, var_51_object);
	var_50_bool = var_9_bool;
	return 2;
}


func_1126(var_136_float, var_137_object)
{
	var_138_float = 0; var_139_float = 0; var_140_float = 0; var_141_float = 0;
	GetEyesHeight(var_140_float);
	@@var_137_object:GetEyesHeight(var_141_float);
	var_136_float = var_141_float - var_140_float;
	return 4;
}


func_1133(var_24_float, var_25_cvector, var_26_cvector)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0);
	var_28_cvector = var_26_cvector - var_25_cvector;
	var_24_float = var_28_cvector | var_28_cvector;
	return 2;
}


func_879()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1264(var_40_int, var_41_string)
{
	var_42_int = 0; var_43_int = 0;
	GetInvItemByName(var_43_int, var_41_string);
	var_43_int = var_40_int;
	return 2;
}


func_1137(var_178_float, var_179_float, var_180_float)
{
	var_183_bool = var_179_float < var_180_float;
	if(var_183_bool != 0) {
		var_179_float = var_178_float;
	} else {
		var_180_float = var_178_float;
	}
	return 0;
	
}


func_884(var_170_string, var_171_int)
{
	var_173_bool = var_171_int == (int)1;
	if(var_173_bool != 0) {
		var_170_string = "fire";
		return 0;
	}
	var_170_string = "phys";
	return 0;
}


func_1269(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(0);
	func_0(var_11_object);
	TaskReturn();
	return 0;
}


func_119(var_75_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_75_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_75_string);
	RemoveEnvelope();
	return 0;
}


func_1144(var_188_float, var_189_float, var_190_float, var_191_float)
{
	var_192_bool = var_189_float < var_190_float;
	if(var_192_bool != 0) {
		var_190_float = var_188_float;
		return 0;
	}
	var_193_bool = var_189_float > var_191_float;
	if(var_193_bool != 0) {
		var_191_float = var_188_float;
		return 0;
	}
	var_189_float = var_188_float;
	return 0;
}


func_1402(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	func_1448(var_56_object);
	return 0;
}


func_892(var_98_cvector, var_99_object)
{
	var_100_cvector = CVector(0,0,0); var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0);
	GetPosition(var_102_cvector);
	@@var_99_object:GetPosition(var_103_cvector);
	var_98_cvector = var_103_cvector - var_102_cvector;
	return 4;
}


