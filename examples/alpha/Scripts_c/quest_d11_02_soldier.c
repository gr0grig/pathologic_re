// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,WaitForAnimEnd/1,Speak/1,SetAttackState/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetScene/1,AddActorByType/6,IsLoaded/1,RemoveActor/1,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,GetEyesHeight/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,self/1,CreateObjectSet/1,Trigger/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ResetAAS/0,IsPlayerActor/2,ReportReputationChange/3
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:shoot_begin|W:shot|W:shoot_end|W:attack_on|W:attack_off|W:hunt|W:@Stop hunt|W:attack_begin1|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|W:attack|W:execute|W:quest_d11_02|W:soldier_attack|W:cleanup|W:restore|A:in|W:attack_begin2|W:fire|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|A:add|W:reputation|W:actor_unload|W:soldier_dead
// @GLOBALS: 0:object:
// @RUN_OP: 0x2ef
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
// @TASK_4: vars=bool params=0
// @EVENT_26: op=0x2cc vars=string
// @EVENT_17: op=0x2e8 vars=object
// @EVENT_6: op=0x30f vars=
// @TASK_5: vars=cvector,cvector params=1
// @EVENT_3: op=0x337 vars=object
// @EVENT_17: op=0x355 vars=object
// @EVENT_30: op=0x369 vars=object,object
// @EVENT_1: op=0x375 vars=object
// @TASK_6: vars=bool params=0
// @EVENT_17: op=0x40e vars=object
// @EVENT_26: op=0x415 vars=string
// @STANDALONE_EVENT_22: op=0x5bf vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x5c7 vars=object,string
// @STANDALONE_EVENT_41: op=0x5d4 vars=object
// @STANDALONE_EVENT_6: op=0x66a vars=
// @PE: 0x0,0x9,0x77,0x8d,0x8f,0x91,0xb3,0xbc,0xc5,0xd1,0xe5,0xf1,0xff,0x175,0x189,0x19c,0x22a,0x238,0x2a8,0x2c0,0x2cc,0x2e8,0x321,0x355,0x369,0x375,0x40e,0x415,0x41d,0x527,0x52e,0x53f,0x548,0x552,0x5b7,0x5bf,0x5d4,0x5e1,0x5f9,0x619,0x63c,0x677,0x67d

task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	IsOverrideActive(var_12_bool);
	var_13_bool = var_12_bool == 0; //@nz
	if(var_13_bool != 0) {
		WorkWithCorpse(var_10_bool);
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
	func_171();
	var_10_bool = Obj();
	func_1492();
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
		func_1291(var_14_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj();
	var_45_object = var_47_object;
	func_1200(var_46_bool, var_47_object);
	var_74_bool = var_46_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_75_object = Obj();
		var_45_object = var_75_object;
		func_1516(var_75_object);
		return 0;
	}
	func_171();
	var_83_object = Obj();
	var_45_object = var_83_object;
	func_1529(var_83_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj();
	var_10_cvector = var_13_object;
	var_11_bool = var_14_object;
	func_1602(var_12_bool, var_13_object, var_14_object);
	if(var_12_bool != 0) {
		var_10_cvector = Obj();
		func_209();
	}
	return 0;
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_1574(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_171();
		var_57_object = Obj();
		var_10_bool = var_57_object;
		func_1596(var_57_object);
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


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj();
	var_45_object = var_47_object;
	func_1200(var_46_bool, var_47_object);
	var_74_bool = var_46_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_75_object = Obj();
		var_45_object = var_75_object;
		func_1516(var_75_object);
		return 0;
	}
	func_405();
	var_82_object = Obj();
	var_45_object = var_82_object;
	func_1529(var_82_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj();
	var_10_cvector = var_13_object;
	var_11_bool = var_14_object;
	func_1602(var_12_bool, var_13_object, var_14_object);
	if(var_12_bool != 0) {
		var_10_cvector = Obj();
		func_373();
	}
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_bool, var_8_cvector, var_9_cvector, var_10_bool)
{
	func_405();
	var_10_bool = Obj();
	func_1492();
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
		func_1291(var_14_object);
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


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj();
	var_45_object = var_47_object;
	func_1200(var_46_bool, var_47_object);
	var_74_bool = var_46_bool == 0; //@nz
	if(var_74_bool != 0) {
		return 0;
	}
	var_75_object = Obj();
	var_45_object = var_75_object;
	func_1516(var_75_object);
	var_82_bool = var_45_object == var_0_object;
	if(var_82_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_45_object;
		var_83_bool = var_2_bool;
		if(var_83_bool == 0) goto Label_703;
		StopAnimation();
		StopGroup0();
	}
Label_703:
	return 0;
	
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_cvector, var_10_cvector, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj();
	var_10_cvector = var_13_object;
	var_11_bool = var_14_object;
	func_1602(var_12_bool, var_13_object, var_14_object);
	if(var_12_bool != 0) {
		var_10_cvector = Obj();
		func_680();
	}
	return 0;
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_12_bool = var_10_bool == "attack";
	if(var_12_bool != 0) {
		var_13_object = Obj();
		func_1076(Obj());
		var_14_object = var_13_object;
		TaskCall(5);
		func_801(var_13_object);
		TaskReturn();
	} else {
		var_284_bool = var_10_bool == "execute";
		if(var_284_bool != 0) {
			TaskCall(6);
			func_982(var_285_bool);
			TaskReturn();
			goto Label_743;
		}
		var_311_string = "";
		var_10_bool = var_311_string;
		func_755(var_10_bool, var_311_string);
	}
Label_743:
	return 0;
	
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_cvector, var_9_cvector, var_10_bool)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = "";
	func_1379(var_11_bool, "quest_d11_02", "soldier_attack");
	return 0;
}


task_4_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_object = var_0_object;
	if(var_11_object != 0) {
		var_12_bool = 0;
		func_799(var_12_bool);
		if(var_12_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_13_object = Obj();
		func_1309(var_13_object);
		RemoveActor(var_13_object);
	}
	return 0;
}


task_5_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_bool = 0;
	var_13_bool = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1200(var_13_bool, var_14_object);
	var_47_bool = var_13_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 2;
	}
	var_48_bool = 0; var_49_object = Obj();
	var_10_bool = var_49_object;
	func_1569(var_48_bool, var_49_object);
	var_52_bool = var_48_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_53_object = GlobalVars[0];
		@@var_53_object:in(var_12_bool, var_10_bool);
		var_54_bool = var_12_bool == 0; //@nz
		if(var_54_bool != 0) {
			return 2;
		}
	}
	func_977();
	var_55_object = Obj();
	var_10_bool = var_55_object;
	TaskCall(1);
	func_147(var_56_object, var_55_object);
	TaskReturn();
	return 2;
}


	task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool, var_45_object)
	{
	var_46_bool = 0; var_47_object = Obj();
	var_45_object = var_47_object;
	func_1200(var_46_bool, var_47_object);
	var_74_bool = var_46_bool == 0; //@nz
	if(var_74_bool != 0) {
		var_75_object = Obj();
		var_45_object = var_75_object;
		func_1516(var_75_object);
		return 0;
	}
	func_977();
	var_82_object = Obj();
	var_45_object = var_82_object;
	func_1529(var_82_object);
	return 0;
	}


task_5_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj();
	var_10_object = var_13_object;
	var_11_bool = var_14_object;
	func_1602(var_12_bool, var_13_object, var_14_object);
	if(var_12_bool != 0) {
		var_10_object = Obj();
		func_853();
	}
	return 0;
}


task_5_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_object, var_10_bool)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_bool = var_12_object;
	func_1574(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		func_977();
		var_56_object = Obj();
		var_10_bool = var_56_object;
		func_1655(var_56_object);
	}
	return 0;
}


task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_string = ""; var_13_string = "";
	func_1379(var_11_bool, "quest_d11_02", "soldier_attack");
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
	func_1224(var_15_int, var_16_float);
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
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1661(var_11_object);
	return 0;
}


event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = "";
	func_1379(var_10_bool, "quest_d11_02", "actor_unload");
	var_16_object = Obj();
	func_1309(var_16_object);
	RemoveActor(var_16_object);
	Hold();
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_bool, var_7_cvector, var_8_cvector, var_9_bool)
{
	
Label_751:
	Hold();
	goto Label_751;
}
EMIT "Return(); Pop(0)";


func_0(var_19_object)
{
	func_1421();
	var_60_object = Obj();
	var_19_object = var_60_object;
	func_9(var_60_object);
	return 0;
}


func_899(var_0_object, var_1_object)
{
	var_251_int = 0; var_252_bool = 0; var_253_cvector = CVector(0,0,0); var_254_object = Obj(); var_255_int = 0; var_256_bool = 0; var_257_cvector = CVector(0,0,0); var_258_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_904:
	irand(var_255_int, (int)60);
	var_261_int = var_255_int + (int)30;
	Sleep(var_261_int, var_256_bool);
	var_262_bool = var_256_bool;
	if(var_262_bool != 0) {
		func_822();
	} else {
		GetPFPosition(var_257_cvector);
		var_263_float = 0; var_264_cvector = CVector(0,0,0); var_265_cvector = CVector(0,0,0);
		var_264_cvector = var_1_object;
		var_257_cvector = var_265_cvector;
		func_1315(var_263_float, var_264_cvector, var_265_cvector);
		var_269_bool = var_263_float > (int)40000;
		if(var_269_bool != 0) {
			FindPathTo(var_258_object, var_1_object);
			var_270_bool = var_258_object != 0; //@nn
			if(var_270_bool != 0) {
				RotatePath(var_258_object, var_256_bool);
				var_271_bool = var_256_bool == 0; //@nz
				if(var_271_bool != 0) {
				} else {
					FollowPath(var_258_object, (bool)0, var_256_bool);
					var_273_bool = var_256_bool == 0; //@nz
					if(var_273_bool != 0) {
						goto Label_974;
					}
					var_274_float = GetByIndex(var_0_object, 0);
					var_275_float = GetByIndex(var_0_object, 2);
					Rotate(var_274_float, var_275_float, var_256_bool);
					var_276_bool = var_256_bool == 0; //@nz
					if(var_276_bool != 0) {
						goto Label_974;
					}
					WaitForAnimEnd(var_256_bool);
					var_277_bool = var_256_bool == 0; //@nz
					if(var_277_bool != 0) {
						goto Label_974;
					}
					goto Label_975;
				EMIT "GOTO 0x3bf";
			}
				Sleep((int)1);
				var_258_object = 0;
				goto Label_974;
		}
			var_279_float = GetByIndex(var_0_object, 0);
			var_280_float = GetByIndex(var_0_object, 2);
			Rotate(var_279_float, var_280_float, var_256_bool);
			var_281_bool = var_256_bool == 0; //@nz
			if(var_281_bool != 0) {
				goto Label_974;
			}
			WaitForAnimEnd(var_256_bool);
			var_282_bool = var_256_bool == 0; //@nz
			if(var_282_bool != 0) {
				goto Label_974;
			}
			goto Label_975;
		}
	Label_974:
		goto Label_917;
	}
Label_975:
	goto Label_904;
	
}
EMIT "Return(); Pop(8)";


func_1540(var_57_object)
{
	var_58_bool = 0; var_59_bool = 0;
	var_60_object = GlobalVars[0];
	@@var_60_object:in(var_59_bool, var_57_object);
	var_61_bool = var_59_bool;
	if(var_61_bool != 0) {
		var_62_object = Obj(); var_63_bool = 0;
		var_57_object = var_62_object;
		func_1505(var_62_object, (bool)1);
	} else {
		var_244_object = Obj();
		var_57_object = var_244_object;
		TaskCall(2);
		func_266(var_245_object, var_246_bool, var_244_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_1159(var_30_bool, var_31_object)
{
	var_32_bool = 0; var_33_bool = 0;
	@@var_31_object:IsDead(var_33_bool);
	var_33_bool = var_30_bool;
	return 2;
}


func_1655(var_56_object)
{
	var_57_object = Obj();
	var_56_object = var_57_object;
	func_1540(var_57_object);
	return 0;
}


func_9(var_60_object)
{
	EventDisable(0);
	var_61_object = Obj();
	var_60_object = var_61_object;
	func_32(var_61_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_20:
	Hold();
	goto Label_20;
}
EMIT "Return(); Pop(0)";


func_266(var_0_object, var_1_object, var_244_object)
{
	var_247_bool = 0; var_248_int = 0; var_249_int = 0; var_250_bool = 0; var_251_int = 0; var_252_int = 0;
	var_0_object = var_244_object;
	CanSee(var_1_object, var_0_object);
	var_253_object = var_1_object;
	if(var_253_object != 0) {
		var_254_bool = 0; var_255_object = Obj();
		var_255_object = var_0_object;
		func_1561(var_254_bool, var_255_object);
		if(var_254_bool != 0) {
			var_265_object = Obj(); var_266_bool = 0;
			var_265_object = var_0_object;
			func_1505(var_265_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	PlayAnimation("all", "shoot_begin");
	WaitForAnimEnd(var_250_bool);
	var_269_bool = var_250_bool == 0; //@nz
	if(var_269_bool != 0) {
		StopAsync();
		return 6;
	}
	Speak("shot");
	PlayAnimation("all", "shoot_end");
	WaitForAnimEnd(var_250_bool);
	var_273_bool = var_250_bool == 0; //@nz
	if(var_273_bool != 0) {
		StopAsync();
		return 6;
	}
	LockAnimationEnd("all", "attack_on");
	var_252_int = 0;
	
Label_316:
	var_277_bool = var_252_int < (int)20;
	if(var_277_bool != 0) {
		Sleep((float)0.5, var_250_bool);
		var_279_bool = var_250_bool == 0; //@nz
		if(var_279_bool != 0) {
			return 6;
		}
		CanSee(var_1_object, var_0_object);
		var_280_object = var_1_object;
		if(var_280_object != 0) {
			var_281_bool = 0; var_282_object = Obj();
			var_282_object = var_0_object;
			func_1561(var_281_bool, var_282_object);
			if(var_281_bool != 0) {
				func_405();
				var_283_object = Obj(); var_284_bool = 0;
				var_283_object = var_0_object;
				func_1505(var_283_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_288_bool = (int)0 == (int)4;
			if(var_288_bool == 0) goto Label_361;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_405();
		var_291_object = Obj(); var_292_bool = 0;
		var_244_object = var_291_object;
		func_1505(var_291_object, (bool)0);
		var_252_int = var_252_int + (int)1;
		goto Label_316;
	}
	return 6;
	
}


func_1291(var_211_object)
{
	var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0);
	@@var_211_object:GetPosition(var_215_cvector);
	GetPosition(var_216_cvector);
	var_217_cvector = var_215_cvector - var_216_cvector;
	var_218_float = GetByIndex(var_217_cvector, 0);
	var_219_float = GetByIndex(var_217_cvector, 2);
	RotateAsync(var_218_float, var_219_float);
	return 6;
}


func_1164(var_19_bool, var_20_object)
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
		func_1159(var_30_bool, var_31_object);
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


func_1421()
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	ClearSubContainer((int)0);
	var_25_int = 0; var_26_int = 0;
	func_1391((int)500, (int)1000);
	irand(var_22_int, (int)4);
	var_47_bool = var_22_int != (int)0;
	if(var_47_bool != 0) {
		var_48_int = 0; var_49_string = "";
		func_1458(var_48_int, "rifle_ammo");
		AddItem(var_23_bool, var_48_int, (int)0, var_22_int);
	}
	irand(var_22_int, (int)3);
	var_55_bool = var_22_int == (int)0;
	if(var_55_bool != 0) {
		var_56_int = 0; var_57_string = "";
		func_1458(var_56_int, "rusk");
		AddItem(var_23_bool, var_56_int, (int)0, (int)1);
	}
	return 4;
}


func_147(var_0_object, var_55_object)
{
	var_57_bool = 0; var_58_bool = 0;
	var_0_object = var_55_object;
	Face(var_55_object);
	
Label_151:
	Sleep((float)0.5, var_58_bool);
	var_60_bool = 0;
	var_60_bool = 1;
	var_61_bool = var_58_bool == 0; //@nz
	if(var_61_bool != 1) {
		var_62_bool = 0; var_63_object = Obj();
		var_63_object = var_0_object;
		func_1200(var_62_bool, var_63_object);
		var_64_bool = var_62_bool == 0; //@nz
		if(var_64_bool != 1) {
			var_60_bool = 0;
		}
	}
	if(var_60_bool != 0) {
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


func_1302(var_138_float, var_139_object)
{
	var_140_float = 0; var_141_float = 0; var_142_float = 0; var_143_float = 0;
	GetEyesHeight(var_142_float);
	@@var_139_object:GetEyesHeight(var_143_float);
	var_138_float = var_143_float - var_142_float;
	return 4;
}


func_1561(var_254_bool, var_255_object)
{
	var_256_float = 0; var_257_object = Obj();
	var_255_object = var_257_object;
	func_1068(var_256_float, var_257_object);
	var_254_bool = var_256_float <= (float)40000.0;
	return 0;
}


func_1309(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	self(var_18_object);
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1053(var_172_string, var_173_int)
{
	var_175_bool = var_173_int == (int)1;
	if(var_175_bool != 0) {
		var_172_string = "fire";
		return 0;
	}
	var_172_string = "phys";
	return 0;
}


func_799(var_12_bool)
{
	var_12_bool = 1;
	return 0;
}


func_32(var_61_object)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_string = ""; var_67_object = Obj(); var_68_bool = 0; var_69_bool = 0; var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_string = ""; var_77_object = Obj(); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0);
	var_82_bool = var_61_object == 0; //@ne
	if(var_82_bool != 0) {
		var_83_string = "";
		func_119("fdie");
	} else {
		@@var_61_object:GetPosition(var_72_cvector);
		GetPosition(var_73_cvector);
		GetDirection(var_74_cvector);
		var_75_cvector = var_73_cvector - var_72_cvector;
		var_86_float = GetByIndex(var_75_cvector, 0);
		var_87_float = GetByIndex(var_74_cvector, 0);
		var_88_float = var_86_float * var_87_float;
		var_89_float = GetByIndex(var_75_cvector, 2);
		var_90_float = GetByIndex(var_74_cvector, 2);
		var_91_float = var_89_float * var_90_float;
		var_92_int = var_88_float + var_91_float;
		var_94_bool = var_92_int >= (int)0;
		if(var_94_bool != 0) {
			var_76_string = "fdie";
		} else {
				var_76_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_61_object = var_77_object;
		var_97_bool = IsFuncExist(var_61_object, "GetScriptProperty", (int)2);
		if(var_97_bool != 0) {
			@@var_61_object:HasScriptProperty(var_78_bool, "Owner");
			var_99_bool = var_78_bool;
			if(var_99_bool != 0) {
				@@var_61_object:GetScriptProperty(var_77_object, "Owner");
				var_101_bool = var_77_object == 0; //@ne
				if(var_101_bool != 0) {
					var_61_object = var_77_object;
				}
			}
		}
		var_104_bool = IsFuncExist(var_77_object, "@GetEyesHeight", (int)1);
		if(var_104_bool != 0) {
			@@var_77_object:GetEyesHeight(var_80_float);
			var_81_cvector = CVector(0.0, 0.0, 0.0);
			var_105_float = GetByIndex(var_81_cvector, 1);
			var_80_float = var_105_float;
			SetByIndex(var_81_cvector, 1) = var_105_float;
			LookAsync(var_61_object, "head", var_81_cvector);
			var_79_bool = 1;
		} else {
			var_79_bool = 0;

		}
		PlayAnimation("all", var_76_string);
		WaitForAnimEnd();
		var_108_bool = var_79_bool;
		if(var_108_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_76_string);
		RemoveEnvelope();
		var_77_object = 0;
	}
	return 20;
	
}


func_801(var_13_object)
{
	func_1498();
	var_13_object = Obj();
	func_853();
	
Label_809:
	func_814();
	goto Label_809;
}
EMIT "Return(); Pop(0)";


func_1569(var_52_bool, var_53_object)
{
	var_54_bool = 0; var_55_bool = 0;
	IsPlayerActor(var_53_object, var_55_bool);
	var_55_bool = var_52_bool;
	return 2;
}


func_1315(var_263_float, var_264_cvector, var_265_cvector)
{
	var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0);
	var_267_cvector = var_265_cvector - var_264_cvector;
	var_263_float = var_267_cvector | var_267_cvector;
	return 2;
}


func_1061(var_100_cvector, var_101_object)
{
	var_102_cvector = CVector(0,0,0); var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0);
	GetPosition(var_104_cvector);
	@@var_101_object:GetPosition(var_105_cvector);
	var_100_cvector = var_105_cvector - var_104_cvector;
	return 4;
}


func_1574(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	var_15_bool = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_1200(var_15_bool, var_16_object);
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
	func_1569(var_52_bool, var_53_object);
	var_52_bool = var_11_bool;
	return 2;
}


func_1319(var_180_float, var_181_float, var_182_float)
{
	var_185_bool = var_181_float < var_182_float;
	if(var_185_bool != 0) {
		var_181_float = var_180_float;
	} else {
		var_182_float = var_180_float;
	}
	return 0;
	
}


func_421(var_0_object, var_1_object, var_2_bool, var_64_object, var_65_bool)
{
	var_69_bool = 0; var_70_bool = 0; var_71_bool = 0; var_72_bool = 0;
	var_0_object = var_64_object;
	Face(var_0_object);
	var_73_bool = var_65_bool;
	if(var_73_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_440:
	var_79_bool = 0; var_80_object = Obj();
	var_80_object = var_0_object;
	func_1200(var_79_bool, var_80_object);
	if(var_79_bool != 0) {
		CanSee(var_72_bool, var_0_object);
		var_81_bool = var_72_bool;
		if(var_81_bool != 0) {
			func_590(var_72_bool);
		} else {
				var_211_object = Obj();
				var_211_object = var_0_object;
				func_1291(var_211_object);
				var_2_bool = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_71_bool);
				var_222_bool = var_71_bool == 0; //@nz
				if(var_222_bool != 0) {
					var_223_bool = var_1_object != 0; //@nn
					if(var_223_bool != 0) {
						func_585(var_71_bool, var_72_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_440;
				}
				var_226_bool = 0; var_227_object = Obj();
				var_227_object = var_0_object;
				func_1200(var_226_bool, var_227_object);
				var_228_bool = var_226_bool == 0; //@nz
				if(var_228_bool != 0) {
				} else {
					CanSee(var_72_bool, var_0_object);
					var_232_bool = var_72_bool;
					if(var_232_bool != 0) {
						var_2_bool = false;
						Face(var_0_object);
						func_590(var_72_bool);
						goto Label_532;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_71_bool);
					var_236_bool = var_71_bool == 0; //@nz
					if(var_236_bool != 0) {
						var_237_bool = var_1_object != 0; //@nn
						if(var_237_bool != 0) {
							func_585(var_71_bool, var_72_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_440;
					}
					var_240_bool = 0; var_241_object = Obj();
					var_241_object = var_0_object;
					func_1200(var_240_bool, var_241_object);
					var_242_bool = var_240_bool == 0; //@nz
					if(var_242_bool != 0) {
						goto Label_542;
					}
					var_2_bool = false;
					CanSee(var_72_bool, var_0_object);
					var_243_bool = var_72_bool;
					if(var_243_bool != 0) {
						Face(var_0_object);
						func_590(var_72_bool);
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
	var_209_bool = var_1_object != 0; //@nn
	if(var_209_bool != 0) {
		func_585(var_71_bool, var_72_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_440;
	
}


func_171()
{
	StopAsync();
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


func_1068(var_256_float, var_257_object)
{
	var_258_cvector = CVector(0,0,0); var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0);
	GetPosition(var_261_cvector);
	@@var_257_object:GetPosition(var_262_cvector);
	var_263_cvector = var_262_cvector - var_261_cvector;
	var_256_float = var_263_cvector | var_263_cvector;
	return 6;
}


func_814()
{
	func_1498();
	
Label_817:
	func_899(var_19_cvector, var_13_object);
	goto Label_817;
}
EMIT "Return(); Pop(0)";


func_1326(var_190_float, var_191_float, var_192_float, var_193_float)
{
	var_194_bool = var_191_float < var_192_float;
	if(var_194_bool != 0) {
		var_192_float = var_190_float;
		return 0;
	}
	var_195_bool = var_191_float > var_193_float;
	if(var_195_bool != 0) {
		var_193_float = var_190_float;
		return 0;
	}
	var_191_float = var_190_float;
	return 0;
}


func_1200(var_15_bool, var_16_object)
{
	var_17_int = 0; var_18_int = 0;
	var_19_bool = 0; var_20_object = Obj();
	var_16_object = var_20_object;
	func_1164(var_19_bool, var_20_object);
	var_36_bool = var_19_bool == 0; //@nz
	if(var_36_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	var_37_bool = 0; var_38_object = Obj(); var_39_string = "";
	var_16_object = var_38_object;
	func_1083(var_37_bool, var_38_object, "noaccess");
	var_46_bool = var_37_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_15_bool = 1;
		return 2;
	}
	@@var_16_object:GetProperty("noaccess", var_18_int);
	var_15_bool = var_18_int == (int)0;
	return 2;
}


func_1458(var_48_int, var_49_string)
{
	var_50_int = 0; var_51_int = 0;
	GetInvItemByName(var_51_int, var_49_string);
	var_51_int = var_48_int;
	return 2;
}


func_1076(var_14_object)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, "player");
	var_16_object = var_14_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_822()
{
	return 0;
}


func_1463(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(0);
	func_0(var_19_object);
	TaskReturn();
	return 0;
}


func_1337(var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj();
	CreateObjectSet(var_23_object);
	var_23_object = var_21_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1083(var_37_bool, var_38_object, var_39_string)
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


func_1596(var_57_object)
{
	var_58_object = Obj();
	var_57_object = var_58_object;
	func_1655(var_58_object);
	return 0;
}


func_1343(var_109_float, var_110_cvector, var_111_cvector)
{
	var_112_float = GetByIndex(var_110_cvector, 0);
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = var_112_float * var_113_float;
	var_115_float = GetByIndex(var_110_cvector, 2);
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_117_float = var_115_float * var_116_float;
	var_109_float = var_114_float + var_117_float;
	return 0;
}


func_1602(var_12_bool, var_13_object, var_14_object)
{
	var_15_float = 0; var_16_bool = 0; var_17_float = 0; var_18_bool = 0;
	var_19_bool = 0; var_20_object = Obj(); var_21_string = "";
	var_14_object = var_20_object;
	func_1083(var_19_bool, var_20_object, "reputation");
	var_28_bool = var_19_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_12_bool = 0;
		return 4;
	}
	@@var_14_object:GetProperty("reputation", var_17_float);
	var_31_bool = var_17_float < (float)0.5;
	if(var_31_bool != 0) {
		var_12_bool = 0;
		return 4;
	}
	CanSee(var_18_bool, var_13_object);
	var_32_bool = 0;
	var_32_bool = 1;
	var_33_bool = var_18_bool;
	if(var_33_bool != 1) {
		var_34_float = 0; var_35_object = Obj();
		var_13_object = var_35_object;
		func_1068(var_34_float, var_35_object);
		var_43_bool = var_34_float <= (float)160000.0;
		if(var_43_bool != 1) {
			var_32_bool = 0;
		}
	}
	if(var_32_bool != 0) {
		ReportReputationChange(var_13_object, var_14_object, (float)-0.20000000298023224);
		var_12_bool = 1;
		return 4;
	}
	var_12_bool = 0;
	return 4;
}


func_1095(var_147_float, var_148_object, var_149_float, var_150_int)
{
	var_151_int = 0; var_152_string = ""; var_153_int = 0; var_154_float = 0; var_155_float = 0; var_156_float = 0; var_157_int = 0; var_158_string = ""; var_159_int = 0; var_160_float = 0; var_161_float = 0; var_162_float = 0;
	var_163_bool = 0; var_164_object = Obj(); var_165_string = "";
	var_148_object = var_164_object;
	func_1083(var_163_bool, var_164_object, "health");
	var_166_bool = var_163_bool == 0; //@nz
	if(var_166_bool != 0) {
		var_147_float = 0.0;
		return 12;
	}
	var_167_bool = 0; var_168_object = Obj(); var_169_string = "";
	var_148_object = var_168_object;
	func_1083(var_167_bool, var_168_object, "armor");
	var_170_bool = var_167_bool == 0; //@nz
	if(var_170_bool != 0) {
		var_157_int = 0;
	} else {
			@@var_148_object:GetProperty("armor", var_157_int);
	}
	var_172_string = ""; var_173_int = 0;
	var_150_int = var_173_int;
	func_1053(var_172_string, var_173_int);
	var_158_string = "armor_" + var_172_string;
	var_176_bool = 0; var_177_object = Obj(); var_178_string = "";
	var_148_object = var_177_object;
	var_158_string = var_178_string;
	func_1083(var_176_bool, var_177_object, var_178_string);
	var_179_bool = var_176_bool == 0; //@nz
	if(var_179_bool != 0) {
		var_159_int = 0;
	} else {
		@@var_148_object:GetProperty(var_158_string, var_159_int);

	}
	var_180_float = 0; var_181_float = 0; var_182_float = 0;
	var_183_int = var_157_int + var_159_int;
	var_181_float = var_183_int / (float)100.0;
	func_1319(var_180_float, var_181_float, (float)1);
	var_180_float = var_160_float;
	@@var_148_object:GetProperty("health", var_161_float);
	var_188_int = (int)1 - var_160_float;
	var_162_float = var_149_float * var_188_int;
	var_190_float = 0; var_191_float = 0; var_192_float = 0; var_193_float = 0;
	var_191_float = var_161_float - var_162_float;
	func_1326(var_190_float, var_191_float, (float)0, (float)1);
	@@var_148_object:SetProperty("health", var_190_float);
	var_162_float = var_147_float;
	return 12;
	
}


func_1352(var_118_float, var_119_cvector)
{
	var_120_float = GetByIndex(var_119_cvector, 0);
	var_121_float = GetByIndex(var_119_cvector, 0);
	var_122_float = var_120_float * var_121_float;
	var_123_float = GetByIndex(var_119_cvector, 2);
	var_124_float = GetByIndex(var_119_cvector, 2);
	var_125_float = var_123_float * var_124_float;
	var_126_int = var_122_float + var_125_float;
	var_118_float = sqrt(var_126_int);
	return 0;
}


func_585(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_1224(var_14_object, var_15_int)
{
	var_17_object = Obj(); var_18_object = Obj(); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_int = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_object = Obj(); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_string = "";
	var_37_bool = 0;
	var_37_bool = 0;
	var_39_bool = var_15_int != (int)4;
	if(var_39_bool != 0) {
		var_41_bool = var_15_int != (int)5;
		if(var_41_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		GetScene(var_27_object);
		GetPosition(var_29_cvector);
		GetEyesHeight(var_30_float);
		var_42_float = GetByIndex(var_29_cvector, 1);
		var_44_float = var_30_float / (int)2;
		var_42_float = var_42_float + var_44_float;
		SetByIndex(var_29_cvector, 1) = var_42_float;
		AddActorByType(var_28_object, "scripted", var_27_object, var_29_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_28_object = 0;
		var_27_object = 0;
	}
	var_48_bool = var_14_object == 0; //@ne
	if(var_48_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_31_int);
	var_50_bool = var_31_int < (int)0;
	if(var_50_bool != 0) {
		return 20;
	}
	@@var_14_object:GetPosition(var_32_cvector);
	GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_35_cvector = var_33_cvector - var_32_cvector;
	var_51_float = GetByIndex(var_35_cvector, 0);
	var_52_float = GetByIndex(var_34_cvector, 0);
	var_53_float = var_51_float * var_52_float;
	var_54_float = GetByIndex(var_35_cvector, 2);
	var_55_float = GetByIndex(var_34_cvector, 2);
	var_56_float = var_54_float * var_55_float;
	var_57_int = var_53_float + var_56_float;
	var_59_bool = var_57_int >= (int)0;
	if(var_59_bool != 0) {
		var_36_string = "fhit";
	} else {
		var_36_string = "bhit";
	}
	var_62_int = var_36_string + "1";
	var_64_int = var_36_string + "2";
	FadeSecondaryAnimation("hit_react", var_62_int, var_64_int, (int)-10);
	return 20;
	
}


func_590(var_0_object)
{
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_object = Obj(); var_86_int = 0; var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj(); var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_object = Obj(); var_95_int = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0; var_98_object = Obj(); var_99_object = Obj();
	ReportAttack(var_0_object);
	GetDirection(var_91_cvector);
	var_100_cvector = CVector(0,0,0); var_101_object = Obj();
	var_101_object = var_0_object;
	func_1061(var_100_cvector, var_101_object);
	var_100_cvector = var_92_cvector;
	var_106_float = 0; var_107_cvector = CVector(0,0,0); var_108_cvector = CVector(0,0,0);
	var_91_cvector = var_107_cvector;
	var_92_cvector = var_108_cvector;
	func_1362(var_106_float, var_107_cvector, var_108_cvector);
	var_131_bool = var_106_float < (float)0.9659258127212524;
	if(var_131_bool != 0) {
		return 18;
	}
	PlayAnimation("all", "attack_begin1");
	WaitForAnimEnd();
	Speak("shot");
	GetDirection(var_91_cvector);
	var_135_cvector = CVector(0,0,0); var_136_object = Obj();
	var_136_object = var_0_object;
	func_1061(var_135_cvector, var_136_object);
	var_135_cvector = var_92_cvector;
	var_137_float = GetByIndex(var_92_cvector, 1);
	var_138_float = 0; var_139_object = Obj();
	var_139_object = var_0_object;
	func_1302(var_138_float, var_139_object);
	var_137_float = var_137_float + var_138_float;
	SetByIndex(var_92_cvector, 1) = var_137_float;
	RandVecCone3D(var_93_cvector, var_92_cvector, (float)0.2617993950843811);
	GetVictimMaterial(var_93_cvector, var_94_object, var_95_int, var_96_cvector);
	var_145_bool = var_94_object != 0; //@nn
	if(var_145_bool != 0) {
		var_146_bool = var_94_object == var_0_object;
		if(var_146_bool != 0) {
			var_147_float = 0; var_148_object = Obj(); var_149_float = 0; var_150_int = 0;
			var_148_object = var_0_object;
			func_1095(var_147_float, var_148_object, (float)1.5, (int)0);
			var_147_float = var_97_float;
			ReportHit(var_0_object, (int)2, var_97_float, (float)1.5);
		} else {
			var_204_bool = var_95_int != (int)-1;
			if(var_204_bool == 0) goto Label_668;
			GetScene(var_98_object);
			AddActorByType(var_99_object, "scripted", var_98_object, var_96_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_99_object:SetScriptProperty("Material", var_95_int);
			var_99_object = 0;
			var_98_object = 0;
		}
	}
Label_668:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 18;
	
}
EMIT "Stack[-6] = 0";


func_977()
{
	StopGroup0();
	Stop();
	return 0;
}


func_1362(var_106_float, var_107_cvector, var_108_cvector)
{
	var_109_float = 0; var_110_cvector = CVector(0,0,0); var_111_cvector = CVector(0,0,0);
	var_107_cvector = var_110_cvector;
	var_108_cvector = var_111_cvector;
	func_1343(var_109_float, var_110_cvector, var_111_cvector);
	var_118_float = 0; var_119_cvector = CVector(0,0,0);
	var_107_cvector = var_119_cvector;
	func_1352(var_118_float, var_119_cvector);
	var_127_float = 0; var_128_cvector = CVector(0,0,0);
	var_108_cvector = var_128_cvector;
	func_1352(var_127_float, var_128_cvector);
	var_129_float = var_118_float * var_127_float;
	var_106_float = var_109_float / var_129_float;
	return 0;
}


func_982(var_0_object)
{
	var_0_object = false;
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	var_288_bool = var_0_object == 0; //@nz
	if(var_288_bool != 0) {
		LockAnimationEnd("all", "attack_on");
		Sleep((int)20);
		var_292_bool = var_0_object == 0; //@nz
		if(var_292_bool != 0) {
			PlayAnimation("all", "attack_begin1");
			WaitForAnimEnd();
			var_295_bool = 0; var_296_string = ""; var_297_string = "";
			func_1379(var_295_bool, "quest_d11_02", "execute");
			Speak("shot");
			PlayAnimation("all", "attack_begin2");
			WaitForAnimEnd();
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
		}
	}
	var_306_object = var_0_object;
	if(var_306_object != 0) {
		var_307_object = Obj();
		func_1076(Obj());
		var_308_object = var_307_object;
		TaskCall(5);
		func_801(var_307_object);
		TaskReturn();
	}
	return 0;
}


func_1498()
{
	var_20_object = GlobalVars[0];
	func_1337(Obj());
	var_21_object = var_20_object;
	GlobalVars[0] = var_20_object;
	return 0;
}


func_1505(var_62_object, var_63_bool)
{
	var_64_object = Obj(); var_65_bool = 0;
	var_62_object = var_64_object;
	var_63_bool = var_65_bool;
	TaskCall(3);
	func_421(var_66_object, var_67_object, var_68_bool, var_64_object, var_65_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_1379(var_10_bool, var_11_string, var_12_string)
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


func_1516(var_75_object)
{
	var_76_bool = 0; var_77_bool = 0;
	var_78_bool = var_75_object == 0; //@ne
	if(var_78_bool != 0) {
		return 2;
	}
	var_79_object = GlobalVars[0];
	@@var_79_object:in(var_77_bool, var_75_object);
	var_80_bool = var_77_bool == 0; //@nz
	if(var_80_bool != 0) {
		var_81_object = GlobalVars[0];
		@@var_81_object:add(var_75_object);
	}
	return 2;
}


func_1391(var_25_int, var_26_int)
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_bool = 0; var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0;
	var_35_bool = var_25_int > var_26_int;
	if(var_35_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_37_bool = var_25_int != var_26_int;
	if(var_37_bool != 0) {
		var_38_int = var_26_int - var_25_int;
		irand(var_32_int, var_38_int);
	} else {
		var_44_bool = var_25_int == (int)0;
		if(var_44_bool == 0) goto Label_1409;
		return 8;
	}
Label_1409:
	(int)0 = (int)0 + var_25_int;
	var_40_bool = var_31_int == (int)0;
	if(var_40_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_33_int, "Money");
	AddItem(var_34_bool, var_33_int, (int)0, var_31_int);
	return 8;
	
}


func_755(var_0_object, var_311_string)
{
	var_312_bool = 0; var_313_bool = 0;
	var_315_bool = var_311_string == "cleanup";
	if(var_315_bool != 0) {
		var_0_object = true;
		IsLoaded(var_313_bool);
		var_316_bool = 0;
		var_316_bool = 0;
		var_317_bool = var_313_bool == 0; //@nz
		if(var_317_bool != 0) {
			var_318_bool = 0;
			func_799(var_318_bool);
			if(var_318_bool != 0) {
				var_316_bool = 1;
			}
		}
		if(var_316_bool != 0) {
			var_319_object = Obj();
			func_1309(var_319_object);
			RemoveActor(var_319_object);
		}
	} else {
		var_323_bool = var_311_string == "restore";
		if(var_323_bool == 0) goto Label_782;
		var_0_object = false;
	}
Label_782:
	return 2;
	
}


func_119(var_83_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_83_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_83_string);
	RemoveEnvelope();
	return 0;
}


func_1529(var_82_object)
{
	var_83_object = Obj();
	var_82_object = var_83_object;
	func_1516(var_83_object);
	var_84_object = Obj(); var_85_bool = 0;
	var_82_object = var_84_object;
	func_1505(var_84_object, (bool)1);
	return 0;
}


func_1661(var_11_object)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1379(var_12_bool, "quest_d11_02", "soldier_dead");
	var_18_object = Obj();
	var_11_object = var_18_object;
	func_1463(var_18_object);
	return 0;
}


