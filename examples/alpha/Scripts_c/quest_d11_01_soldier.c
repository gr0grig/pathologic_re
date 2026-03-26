// @IMPORTS: SetRTEnvelope/2,Hold/0,IsOverrideActive/1,WorkWithCorpse/1,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,Face/1,Sleep/2,KillTimer/1,StopGroup0/0,SetTimer/2,CanSee/2,WaitForAnimEnd/1,Speak/1,SetAttackState/1,Sleep/1,Trace/1,StopAnimation/0,ReportAttack/1,RandVecCone3D/3,GetVictimMaterial/4,ReportHit/4,GetScene/1,AddActorByType/6,IsPlayerActor/2,GetEyesHeight/1,DirLookAsyncRel/3,GetPFPosition/1,irand/2,FindPathTo/2,RotatePath/2,FollowPath/3,Rotate/3,FindActor/2,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,RotateAsync/3,self/1,CreateObjectSet/1,Trigger/2,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,GetProperty/2,SignalDeath/1,ResetAAS/0,ReportReputationChange/3
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:shoot_begin|W:shot|W:shoot_end|W:attack_on|W:attack_off|W:hunt|W:@Stop hunt|W:attack_begin1|W:scripted|W:richochet.xml|W:Material|A:SetScriptProperty|W:attack_end1|W:quest_d11_01|W:soldier_attack|W:spine|A:in|W:fire|W:phys|W:player|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:2|W:GenerateMoney: iMin > iMax|W:Money|W:rifle_ammo|W:rusk|A:add|W:reputation|A:RemoveStationaryActor
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
// @TASK_4: vars= params=0
// @EVENT_1: op=0x2d0 vars=object
// @EVENT_17: op=0x2dc vars=object
// @EVENT_26: op=0x2e3 vars=string
// @TASK_5: vars=object,bool params=1
// @EVENT_2: op=0x302 vars=object
// @EVENT_17: op=0x309 vars=object
// @EVENT_26: op=0x310 vars=string
// @TASK_6: vars=object params=2
// @EVENT_6: op=0x37b vars=
// @EVENT_2: op=0x37e vars=object
// @EVENT_17: op=0x384 vars=object
// @EVENT_26: op=0x38b vars=string
// @TASK_7: vars=cvector,cvector params=1
// @EVENT_3: op=0x3af vars=object
// @EVENT_17: op=0x3cd vars=object
// @EVENT_30: op=0x3e1 vars=object,object
// @EVENT_1: op=0x3ed vars=object
// @STANDALONE_EVENT_22: op=0x5fb vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x603 vars=object,string
// @STANDALONE_EVENT_41: op=0x610 vars=object
// @PE: 0x0,0x9,0x77,0x8d,0x8f,0x91,0xb3,0xbc,0xc5,0xd1,0xe5,0xf1,0xff,0x175,0x189,0x19c,0x22a,0x238,0x2a8,0x2c0,0x2dc,0x2e3,0x2f1,0x302,0x309,0x310,0x37e,0x384,0x38b,0x399,0x3cd,0x3e1,0x3ed,0x44e,0x563,0x56a,0x57b,0x584,0x58e,0x5f3,0x5fb,0x610,0x61d,0x635,0x655,0x678,0x6a6

task_0_event_0(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		WorkWithCorpse(var_11_cvector);
	}
	return 2;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_bool, var_12_object, var_13_cvector, var_14_cvector)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_171();
	var_11_cvector = Obj();
	func_1552();
	return 0;
}


task_1_event_3(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		KillTimer((int)100);
		Face(var_0_object);
	}
	return 0;
}


task_1_event_4(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		SetTimer((int)100, (float)3.0);
		var_15_object = Obj();
		var_15_object = var_0_object;
		func_1340(var_15_object);
	}
	return 0;
}


	task_1_event_17(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj();
	var_46_object = var_48_object;
	func_1249(var_47_bool, var_48_object);
	var_75_bool = var_47_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_76_object = Obj();
		var_46_object = var_76_object;
		func_1576(var_76_object);
		return 0;
	}
	func_171();
	var_84_object = Obj();
	var_46_object = var_84_object;
	func_1589(var_84_object);
	return 0;
	}


task_1_event_30(var_0_object, var_1_object, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_cvector = var_14_object;
	var_12_cvector = var_15_object;
	func_1662(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_cvector = Obj();
		func_209();
	}
	return 0;
}


task_1_event_1(var_0_object, var_1_object, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_cvector = var_13_object;
	func_1634(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_171();
		var_58_object = Obj();
		var_11_cvector = var_58_object;
		func_1656(var_58_object);
	}
	return 0;
}


task_1_event_7(var_0_object, var_1_int, var_2_object, var_3_bool, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector != (int)100;
	if(var_13_bool != 0) {
		return 0;
	}
	KillTimer((int)100);
	StopGroup0();
	return 0;
}


	task_2_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj();
	var_46_object = var_48_object;
	func_1249(var_47_bool, var_48_object);
	var_75_bool = var_47_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_76_object = Obj();
		var_46_object = var_76_object;
		func_1576(var_76_object);
		return 0;
	}
	func_405();
	var_83_object = Obj();
	var_46_object = var_83_object;
	func_1589(var_83_object);
	return 0;
	}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_bool, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_cvector = var_14_object;
	var_12_cvector = var_15_object;
	func_1662(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_cvector = Obj();
		func_373();
	}
	return 0;
}


task_2_event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	func_405();
	var_11_cvector = Obj();
	func_1552();
	return 0;
}


task_3_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_2_bool;
	if(var_13_bool != 0) {
		var_14_bool = var_11_cvector == var_0_object;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_15_object = Obj();
		var_15_object = var_0_object;
		func_1340(var_15_object);
	}
	return 0;
}


task_3_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_2_bool;
	if(var_13_bool != 0) {
		var_14_bool = var_11_cvector == var_0_object;
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		Trace("@Stop hunt");
		StopAnimation();
		StopGroup0();
	}
	return 0;
}


	task_3_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj();
	var_46_object = var_48_object;
	func_1249(var_47_bool, var_48_object);
	var_75_bool = var_47_bool == 0; //@nz
	if(var_75_bool != 0) {
		return 0;
	}
	var_76_object = Obj();
	var_46_object = var_76_object;
	func_1576(var_76_object);
	var_83_bool = var_46_object == var_0_object;
	if(var_83_bool != 0) {
		var_1_object = 0;
	} else {
		var_1_object = var_46_object;
		var_84_bool = var_2_bool;
		if(var_84_bool == 0) goto Label_703;
		StopAnimation();
		StopGroup0();
	}
Label_703:
	return 0;
	
	}


task_3_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_object, var_9_bool, var_10_object, var_11_cvector, var_12_cvector)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_cvector = var_14_object;
	var_12_cvector = var_15_object;
	func_1662(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_cvector = Obj();
		func_680();
	}
	return 0;
}


task_4_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_bool = 0;
	IsPlayerActor(var_11_cvector, var_13_bool);
	var_14_bool = var_13_bool;
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_11_cvector = var_15_object;
		TaskCall(5);
		func_753(var_15_object);
		TaskReturn();
	}
	return 2;
}


task_4_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1439(var_12_bool, "quest_d11_01", "soldier_attack");
	return 0;
}


task_4_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_string, var_7_object, var_8_bool, var_9_object, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector == "attack";
	if(var_13_bool != 0) {
		var_14_object = Obj();
		func_1125(Obj());
		var_15_object = var_14_object;
		TaskCall(7);
		func_921(var_14_object);
		TaskReturn();
	}
	return 0;
}


task_5_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		func_865(var_11_cvector);
	}
	return 0;
}


task_5_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1439(var_12_bool, "quest_d11_01", "soldier_attack");
	return 0;
}


task_5_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_string, var_9_object, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector == "attack";
	if(var_13_bool != 0) {
		var_14_object = Obj();
		func_1125(Obj());
		var_15_object = var_14_object;
		TaskCall(7);
		func_921(var_14_object);
		TaskReturn();
	}
	return 0;
}


task_6_event_6(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	StopAnimation();
	return 0;
}


task_6_event_2(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = var_11_cvector == var_0_object;
	if(var_12_bool != 0) {
		StopAnimation();
	}
	return 0;
}


task_6_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_cvector)
{
	var_12_bool = 0; var_13_string = ""; var_14_string = "";
	func_1439(var_12_bool, "quest_d11_01", "soldier_attack");
	return 0;
}


task_6_event_26(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_string, var_10_cvector, var_11_cvector)
{
	var_13_bool = var_11_cvector == "attack";
	if(var_13_bool != 0) {
		var_14_object = Obj();
		func_1125(Obj());
		var_15_object = var_14_object;
		TaskCall(7);
		func_921(var_14_object);
		TaskReturn();
	}
	return 0;
}


task_7_event_3(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1249(var_14_bool, var_15_object);
	var_48_bool = var_14_bool == 0; //@nz
	if(var_48_bool != 0) {
		return 2;
	}
	var_49_bool = 0; var_50_object = Obj();
	var_11_object = var_50_object;
	func_1629(var_49_bool, var_50_object);
	var_53_bool = var_49_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_54_object = GlobalVars[0];
		@@var_54_object:in(var_13_bool, var_11_object);
		var_55_bool = var_13_bool == 0; //@nz
		if(var_55_bool != 0) {
			return 2;
		}
	}
	func_1097();
	var_56_object = Obj();
	var_11_object = var_56_object;
	TaskCall(1);
	func_147(var_57_object, var_56_object);
	TaskReturn();
	return 2;
}


	task_7_event_17(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object, var_46_object)
	{
	var_47_bool = 0; var_48_object = Obj();
	var_46_object = var_48_object;
	func_1249(var_47_bool, var_48_object);
	var_75_bool = var_47_bool == 0; //@nz
	if(var_75_bool != 0) {
		var_76_object = Obj();
		var_46_object = var_76_object;
		func_1576(var_76_object);
		return 0;
	}
	func_1097();
	var_83_object = Obj();
	var_46_object = var_83_object;
	func_1589(var_83_object);
	return 0;
	}


task_7_event_30(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_11_object = var_14_object;
	var_12_object = var_15_object;
	func_1662(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_11_object = Obj();
		func_973();
	}
	return 0;
}


task_7_event_1(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1634(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		func_1097();
		var_57_object = Obj();
		var_11_object = var_57_object;
		func_1702(var_57_object);
	}
	return 0;
}


event_22(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1273(var_16_int, var_17_float);
	return 0;
}


event_16(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object, var_12_string)
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


event_41(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_1708(var_12_object);
	return 0;
}


main(var_0_object, var_1_object, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_bool, var_8_object, var_9_cvector, var_10_cvector)
{
	
Label_716:
	Hold();
	goto Label_716;
}
EMIT "Return(); Pop(0)";


func_0(var_19_object)
{
	func_1481();
	var_60_object = Obj();
	var_19_object = var_60_object;
	func_9(var_60_object);
	return 0;
}


func_1412(var_119_float, var_120_cvector)
{
	var_121_float = GetByIndex(var_120_cvector, 0);
	var_122_float = GetByIndex(var_120_cvector, 0);
	var_123_float = var_121_float * var_122_float;
	var_124_float = GetByIndex(var_120_cvector, 2);
	var_125_float = GetByIndex(var_120_cvector, 2);
	var_126_float = var_124_float * var_125_float;
	var_127_int = var_123_float + var_126_float;
	var_119_float = sqrt(var_127_int);
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


func_266(var_0_object, var_1_object, var_245_object)
{
	var_248_bool = 0; var_249_int = 0; var_250_int = 0; var_251_bool = 0; var_252_int = 0; var_253_int = 0;
	var_0_object = var_245_object;
	CanSee(var_1_object, var_0_object);
	var_254_object = var_1_object;
	if(var_254_object != 0) {
		var_255_bool = 0; var_256_object = Obj();
		var_256_object = var_0_object;
		func_1621(var_255_bool, var_256_object);
		if(var_255_bool != 0) {
			var_266_object = Obj(); var_267_bool = 0;
			var_266_object = var_0_object;
			func_1565(var_266_object, (bool)1);
			return 6;
		}
		Face(var_0_object);
	}
	PlayAnimation("all", "shoot_begin");
	WaitForAnimEnd(var_251_bool);
	var_270_bool = var_251_bool == 0; //@nz
	if(var_270_bool != 0) {
		StopAsync();
		return 6;
	}
	Speak("shot");
	PlayAnimation("all", "shoot_end");
	WaitForAnimEnd(var_251_bool);
	var_274_bool = var_251_bool == 0; //@nz
	if(var_274_bool != 0) {
		StopAsync();
		return 6;
	}
	LockAnimationEnd("all", "attack_on");
	var_253_int = 0;
	
Label_316:
	var_278_bool = var_253_int < (int)20;
	if(var_278_bool != 0) {
		Sleep((float)0.5, var_251_bool);
		var_280_bool = var_251_bool == 0; //@nz
		if(var_280_bool != 0) {
			return 6;
		}
		CanSee(var_1_object, var_0_object);
		var_281_object = var_1_object;
		if(var_281_object != 0) {
			var_282_bool = 0; var_283_object = Obj();
			var_283_object = var_0_object;
			func_1621(var_282_bool, var_283_object);
			if(var_282_bool != 0) {
				func_405();
				var_284_object = Obj(); var_285_bool = 0;
				var_284_object = var_0_object;
				func_1565(var_284_object, (bool)0);
				return 6;
			}
			Face(var_0_object);
		} else {
			StopAsync();
			(int)0 = (int)0 + (int)1;
			var_289_bool = (int)0 == (int)4;
			if(var_289_bool == 0) goto Label_361;
			PlayAnimation("all", "attack_off");
			WaitForAnimEnd();
			return 6;
	}
		func_405();
		var_292_object = Obj(); var_293_bool = 0;
		var_245_object = var_292_object;
		func_1565(var_292_object, (bool)0);
		var_253_int = var_253_int + (int)1;
		goto Label_316;
	}
	return 6;
	
}


func_1422(var_107_float, var_108_cvector, var_109_cvector)
{
	var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0);
	var_108_cvector = var_111_cvector;
	var_109_cvector = var_112_cvector;
	func_1403(var_110_float, var_111_cvector, var_112_cvector);
	var_119_float = 0; var_120_cvector = CVector(0,0,0);
	var_108_cvector = var_120_cvector;
	func_1412(var_119_float, var_120_cvector);
	var_128_float = 0; var_129_cvector = CVector(0,0,0);
	var_109_cvector = var_129_cvector;
	func_1412(var_128_float, var_129_cvector);
	var_130_float = var_119_float * var_128_float;
	var_107_float = var_110_float / var_130_float;
	return 0;
}


func_147(var_0_object, var_56_object)
{
	var_58_bool = 0; var_59_bool = 0;
	var_0_object = var_56_object;
	Face(var_56_object);
	
Label_151:
	Sleep((float)0.5, var_59_bool);
	var_61_bool = 0;
	var_61_bool = 1;
	var_62_bool = var_59_bool == 0; //@nz
	if(var_62_bool != 1) {
		var_63_bool = 0; var_64_object = Obj();
		var_64_object = var_0_object;
		func_1249(var_63_bool, var_64_object);
		var_65_bool = var_63_bool == 0; //@nz
		if(var_65_bool != 1) {
			var_61_bool = 0;
		}
	}
	if(var_61_bool != 0) {
	} else {
		goto Label_151;
	}
	StopAsync();
	return 2;
	
}


func_1403(var_110_float, var_111_cvector, var_112_cvector)
{
	var_113_float = GetByIndex(var_111_cvector, 0);
	var_114_float = GetByIndex(var_112_cvector, 0);
	var_115_float = var_113_float * var_114_float;
	var_116_float = GetByIndex(var_111_cvector, 2);
	var_117_float = GetByIndex(var_112_cvector, 2);
	var_118_float = var_116_float * var_117_float;
	var_110_float = var_115_float + var_118_float;
	return 0;
}


func_405()
{
	StopAsync();
	StopGroup0();
	Stop();
	return 0;
}


func_1558()
{
	var_21_object = GlobalVars[0];
	func_1397(Obj());
	var_22_object = var_21_object;
	GlobalVars[0] = var_21_object;
	return 0;
}


func_921(var_14_object)
{
	func_1558();
	var_14_object = Obj();
	func_973();
	
Label_929:
	func_934();
	goto Label_929;
}
EMIT "Return(); Pop(0)";


func_1565(var_63_object, var_64_bool)
{
	var_65_object = Obj(); var_66_bool = 0;
	var_63_object = var_65_object;
	var_64_bool = var_66_bool;
	TaskCall(3);
	func_421(var_67_object, var_68_object, var_69_bool, var_65_object, var_66_bool);
	TaskReturn();
	ResetAAS();
	return 0;
}


func_798()
{
	LockAnimationEnd("all", "attack_on");
	return 0;
}


func_1439(var_12_bool, var_13_string, var_14_string)
{
	var_15_object = Obj(); var_16_object = Obj();
	FindActor(var_16_object, var_13_string);
	var_17_bool = var_16_object == 0; //@ne
	if(var_17_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	Trigger(var_16_object, var_14_string);
	var_12_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


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


func_803(var_0_object, var_1_object, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	var_0_object = var_37_object;
	var_1_object = false;
	func_852(var_41_cvector);
	
Label_809:
	GetDirection(var_40_cvector);
	var_50_cvector = CVector(0,0,0); var_51_object = Obj();
	var_51_object = var_0_object;
	func_1110(var_50_cvector, var_51_object);
	var_50_cvector = var_41_cvector;
	var_56_float = 0; var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0);
	var_40_cvector = var_57_cvector;
	var_41_cvector = var_58_cvector;
	func_1422(var_56_float, var_57_cvector, var_58_cvector);
	var_81_bool = var_56_float < (float)0.7071067690849304;
	if(var_81_bool != 0) {
		var_82_object = Obj(); var_83_float = 0;
		var_82_object = var_0_object;
		func_1351(var_82_object, (float)4.71238899230957);
		func_798();
	}
	Sleep((float)0.5);
	var_95_bool = 0;
	var_95_bool = 0;
	var_96_bool = var_1_object == 0; //@nz
	if(var_96_bool != 0) {
		var_97_bool = 0; var_98_object = Obj();
		var_98_object = var_0_object;
		func_1249(var_97_bool, var_98_object);
		if(var_97_bool != 0) {
			var_95_bool = 1;
		}
	}
	if(var_95_bool == 1) goto Label_809;
	StopAsync();
	UnlookAsync("spine");
	return 4;
}


func_421(var_0_object, var_1_object, var_2_bool, var_65_object, var_66_bool)
{
	var_70_bool = 0; var_71_bool = 0; var_72_bool = 0; var_73_bool = 0;
	var_0_object = var_65_object;
	Face(var_0_object);
	var_74_bool = var_66_bool;
	if(var_74_bool != 0) {
		PlayAnimation("all", "attack_on");
		WaitForAnimEnd();
	}
	LockAnimationEnd("all", "attack_on");
	SetAttackState((bool)1);
	
Label_440:
	var_80_bool = 0; var_81_object = Obj();
	var_81_object = var_0_object;
	func_1249(var_80_bool, var_81_object);
	if(var_80_bool != 0) {
		CanSee(var_73_bool, var_0_object);
		var_82_bool = var_73_bool;
		if(var_82_bool != 0) {
			func_590(var_73_bool);
		} else {
				var_212_object = Obj();
				var_212_object = var_0_object;
				func_1340(var_212_object);
				var_2_bool = true;
				PlayAnimation("all", "hunt");
				WaitForAnimEnd(var_72_bool);
				var_223_bool = var_72_bool == 0; //@nz
				if(var_223_bool != 0) {
					var_224_bool = var_1_object != 0; //@nn
					if(var_224_bool != 0) {
						func_585(var_72_bool, var_73_bool);
					}
					LockAnimationEnd("all", "attack_on");
					goto Label_440;
				}
				var_227_bool = 0; var_228_object = Obj();
				var_228_object = var_0_object;
				func_1249(var_227_bool, var_228_object);
				var_229_bool = var_227_bool == 0; //@nz
				if(var_229_bool != 0) {
				} else {
					CanSee(var_73_bool, var_0_object);
					var_233_bool = var_73_bool;
					if(var_233_bool != 0) {
						var_2_bool = false;
						Face(var_0_object);
						func_590(var_73_bool);
						goto Label_532;
					}
					LockAnimationEnd("all", "attack_on");
					Sleep((int)3, var_72_bool);
					var_237_bool = var_72_bool == 0; //@nz
					if(var_237_bool != 0) {
						var_238_bool = var_1_object != 0; //@nn
						if(var_238_bool != 0) {
							func_585(var_72_bool, var_73_bool);
						}
						LockAnimationEnd("all", "attack_on");
						goto Label_440;
					}
					var_241_bool = 0; var_242_object = Obj();
					var_242_object = var_0_object;
					func_1249(var_241_bool, var_242_object);
					var_243_bool = var_241_bool == 0; //@nz
					if(var_243_bool != 0) {
						goto Label_542;
					}
					var_2_bool = false;
					CanSee(var_73_bool, var_0_object);
					var_244_bool = var_73_bool;
					if(var_244_bool != 0) {
						Face(var_0_object);
						func_590(var_73_bool);
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
	var_210_bool = var_1_object != 0; //@nn
	if(var_210_bool != 0) {
		func_585(var_72_bool, var_73_bool);
	} else {
		Sleep((int)2);

	}
	goto Label_440;
	
}


func_934()
{
	func_1558();
	
Label_937:
	func_1019(var_20_cvector, var_14_object);
	goto Label_937;
}
EMIT "Return(); Pop(0)";


func_1702(var_57_object)
{
	var_58_object = Obj();
	var_57_object = var_58_object;
	func_1600(var_58_object);
	return 0;
}


func_1576(var_76_object)
{
	var_77_bool = 0; var_78_bool = 0;
	var_79_bool = var_76_object == 0; //@ne
	if(var_79_bool != 0) {
		return 2;
	}
	var_80_object = GlobalVars[0];
	@@var_80_object:in(var_78_bool, var_76_object);
	var_81_bool = var_78_bool == 0; //@nz
	if(var_81_bool != 0) {
		var_82_object = GlobalVars[0];
		@@var_82_object:add(var_76_object);
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


func_1451(var_25_int, var_26_int)
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
		if(var_44_bool == 0) goto Label_1469;
		return 8;
	}
Label_1469:
	(int)0 = (int)0 + var_25_int;
	var_40_bool = var_31_int == (int)0;
	if(var_40_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_33_int, "Money");
	AddItem(var_34_bool, var_33_int, (int)0, var_31_int);
	return 8;
	
}


func_1708(var_12_object)
{
	var_13_object = Obj(); var_14_object = Obj();
	GetScene(var_14_object);
	var_15_object = Obj();
	func_1369(var_15_object);
	@@var_14_object:RemoveStationaryActor(var_15_object);
	var_18_object = Obj();
	var_12_object = var_18_object;
	func_1523(var_18_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_942()
{
	return 0;
}


func_1589(var_83_object)
{
	var_84_object = Obj();
	var_83_object = var_84_object;
	func_1576(var_84_object);
	var_85_object = Obj(); var_86_bool = 0;
	var_83_object = var_85_object;
	func_1565(var_85_object, (bool)1);
	return 0;
}


func_1208(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
}


func_1340(var_212_object)
{
	var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_cvector = CVector(0,0,0); var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0);
	@@var_212_object:GetPosition(var_216_cvector);
	GetPosition(var_217_cvector);
	var_218_cvector = var_216_cvector - var_217_cvector;
	var_219_float = GetByIndex(var_218_cvector, 0);
	var_220_float = GetByIndex(var_218_cvector, 2);
	RotateAsync(var_219_float, var_220_float);
	return 6;
}


func_1213(var_20_bool, var_21_object)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	var_26_bool = var_21_object == 0; //@ne
	if(var_26_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_27_bool = 0;
	var_27_bool = 0;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", (int)1);
	if(var_30_bool != 0) {
		var_31_bool = 0; var_32_object = Obj();
		var_21_object = var_32_object;
		func_1208(var_31_bool, var_32_object);
		if(var_31_bool != 0) {
			var_27_bool = 1;
		}
	}
	if(var_27_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	GetScene(var_24_object);
	var_35_bool = var_24_object == 0; //@ne
	if(var_35_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	@@var_21_object:GetScene(var_25_object);
	var_36_bool = var_24_object != var_25_object;
	if(var_36_bool != 0) {
		var_20_bool = 0;
		return 4;
	}
	var_20_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1600(var_58_object)
{
	var_59_bool = 0; var_60_bool = 0;
	var_61_object = GlobalVars[0];
	@@var_61_object:in(var_60_bool, var_58_object);
	var_62_bool = var_60_bool;
	if(var_62_bool != 0) {
		var_63_object = Obj(); var_64_bool = 0;
		var_58_object = var_63_object;
		func_1565(var_63_object, (bool)1);
	} else {
		var_245_object = Obj();
		var_58_object = var_245_object;
		TaskCall(2);
		func_266(var_246_object, var_247_bool, var_245_object);
		TaskReturn();
		ResetAAS();
	}
	return 2;
	
}


func_1351(var_82_object, var_83_float)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0);
	@@var_82_object:GetPosition(var_87_cvector);
	GetPosition(var_88_cvector);
	var_89_cvector = var_87_cvector - var_88_cvector;
	var_90_float = GetByIndex(var_89_cvector, 0);
	var_91_float = GetByIndex(var_89_cvector, 2);
	RotateAsync(var_90_float, var_91_float, var_83_float);
	return 6;
}


func_1481()
{
	var_20_int = 0; var_21_bool = 0; var_22_int = 0; var_23_bool = 0;
	ClearSubContainer((int)0);
	var_25_int = 0; var_26_int = 0;
	func_1451((int)500, (int)1000);
	irand(var_22_int, (int)4);
	var_47_bool = var_22_int != (int)0;
	if(var_47_bool != 0) {
		var_48_int = 0; var_49_string = "";
		func_1518(var_48_int, "rifle_ammo");
		AddItem(var_23_bool, var_48_int, (int)0, var_22_int);
	}
	irand(var_22_int, (int)3);
	var_55_bool = var_22_int == (int)0;
	if(var_55_bool != 0) {
		var_56_int = 0; var_57_string = "";
		func_1518(var_56_int, "rusk");
		AddItem(var_23_bool, var_56_int, (int)0, (int)1);
	}
	return 4;
}


func_585(var_0_object, var_1_object)
{
	var_0_object = var_1_object;
	var_1_object = 0;
	Face(var_0_object);
	return 0;
}


func_1097()
{
	StopGroup0();
	Stop();
	return 0;
}


func_590(var_0_object)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_object = Obj(); var_87_int = 0; var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_object = Obj(); var_91_object = Obj(); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_object = Obj(); var_96_int = 0; var_97_cvector = CVector(0,0,0); var_98_float = 0; var_99_object = Obj(); var_100_object = Obj();
	ReportAttack(var_0_object);
	GetDirection(var_92_cvector);
	var_101_cvector = CVector(0,0,0); var_102_object = Obj();
	var_102_object = var_0_object;
	func_1110(var_101_cvector, var_102_object);
	var_101_cvector = var_93_cvector;
	var_107_float = 0; var_108_cvector = CVector(0,0,0); var_109_cvector = CVector(0,0,0);
	var_92_cvector = var_108_cvector;
	var_93_cvector = var_109_cvector;
	func_1422(var_107_float, var_108_cvector, var_109_cvector);
	var_132_bool = var_107_float < (float)0.9659258127212524;
	if(var_132_bool != 0) {
		return 18;
	}
	PlayAnimation("all", "attack_begin1");
	WaitForAnimEnd();
	Speak("shot");
	GetDirection(var_92_cvector);
	var_136_cvector = CVector(0,0,0); var_137_object = Obj();
	var_137_object = var_0_object;
	func_1110(var_136_cvector, var_137_object);
	var_136_cvector = var_93_cvector;
	var_138_float = GetByIndex(var_93_cvector, 1);
	var_139_float = 0; var_140_object = Obj();
	var_140_object = var_0_object;
	func_1362(var_139_float, var_140_object);
	var_138_float = var_138_float + var_139_float;
	SetByIndex(var_93_cvector, 1) = var_138_float;
	RandVecCone3D(var_94_cvector, var_93_cvector, (float)0.2617993950843811);
	GetVictimMaterial(var_94_cvector, var_95_object, var_96_int, var_97_cvector);
	var_146_bool = var_95_object != 0; //@nn
	if(var_146_bool != 0) {
		var_147_bool = var_95_object == var_0_object;
		if(var_147_bool != 0) {
			var_148_float = 0; var_149_object = Obj(); var_150_float = 0; var_151_int = 0;
			var_149_object = var_0_object;
			func_1144(var_148_float, var_149_object, (float)1.5, (int)0);
			var_148_float = var_98_float;
			ReportHit(var_0_object, (int)2, var_98_float, (float)1.5);
		} else {
			var_205_bool = var_96_int != (int)-1;
			if(var_205_bool == 0) goto Label_668;
			GetScene(var_99_object);
			AddActorByType(var_100_object, "scripted", var_99_object, var_97_cvector, CVector(0.0, 0.0, 1.0), "richochet.xml");
			@@var_100_object:SetScriptProperty("Material", var_96_int);
			var_100_object = 0;
			var_99_object = 0;
		}
	}
Label_668:
	PlayAnimation("all", "attack_end1");
	WaitForAnimEnd();
	LockAnimationEnd("all", "attack_on");
	return 18;
	
}
EMIT "Stack[-6] = 0";


func_1102(var_173_string, var_174_int)
{
	var_176_bool = var_174_int == (int)1;
	if(var_176_bool != 0) {
		var_173_string = "fire";
		return 0;
	}
	var_173_string = "phys";
	return 0;
}


func_1362(var_139_float, var_140_object)
{
	var_141_float = 0; var_142_float = 0; var_143_float = 0; var_144_float = 0;
	GetEyesHeight(var_143_float);
	@@var_140_object:GetEyesHeight(var_144_float);
	var_139_float = var_144_float - var_143_float;
	return 4;
}


func_852(var_0_object)
{
	var_42_float = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_float = 0; var_47_cvector = CVector(0,0,0);
	GetEyesHeight(var_45_float);
	@@@var_0_object:GetEyesHeight(var_46_float);
	var_47_cvector = CVector(0.0, 0.0, 0.0);
	var_48_float = GetByIndex(var_47_cvector, 1);
	var_48_float = var_46_float - var_45_float;
	SetByIndex(var_47_cvector, 1) = var_48_float;
	DirLookAsyncRel(var_0_object, "spine", var_47_cvector);
	return 6;
}


func_1621(var_255_bool, var_256_object)
{
	var_257_float = 0; var_258_object = Obj();
	var_256_object = var_258_object;
	func_1117(var_257_float, var_258_object);
	var_255_bool = var_257_float <= (float)40000.0;
	return 0;
}


func_1110(var_101_cvector, var_102_object)
{
	var_103_cvector = CVector(0,0,0); var_104_cvector = CVector(0,0,0); var_105_cvector = CVector(0,0,0); var_106_cvector = CVector(0,0,0);
	GetPosition(var_105_cvector);
	@@var_102_object:GetPosition(var_106_cvector);
	var_101_cvector = var_106_cvector - var_105_cvector;
	return 4;
}


func_1369(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	self(var_17_object);
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1629(var_53_bool, var_54_object)
{
	var_55_bool = 0; var_56_bool = 0;
	IsPlayerActor(var_54_object, var_56_bool);
	var_56_bool = var_53_bool;
	return 2;
}


func_1117(var_257_float, var_258_object)
{
	var_259_cvector = CVector(0,0,0); var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0);
	GetPosition(var_262_cvector);
	@@var_258_object:GetPosition(var_263_cvector);
	var_264_cvector = var_263_cvector - var_262_cvector;
	var_257_float = var_264_cvector | var_264_cvector;
	return 6;
}


func_1375(var_264_float, var_265_cvector, var_266_cvector)
{
	var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0);
	var_268_cvector = var_266_cvector - var_265_cvector;
	var_264_float = var_268_cvector | var_268_cvector;
	return 2;
}


func_1249(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_17_object = var_21_object;
	func_1213(var_20_bool, var_21_object);
	var_37_bool = var_20_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_17_object = var_39_object;
	func_1132(var_38_bool, var_39_object, "noaccess");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	@@var_17_object:GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == (int)0;
	return 2;
}


func_1634(var_12_bool, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	var_16_bool = 0; var_17_object = Obj();
	var_13_object = var_17_object;
	func_1249(var_16_bool, var_17_object);
	var_50_bool = var_16_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_12_bool = 0;
		return 2;
	}
	var_51_object = GlobalVars[0];
	@@var_51_object:in(var_15_bool, var_13_object);
	var_52_bool = var_15_bool;
	if(var_52_bool != 0) {
		var_12_bool = 1;
		return 2;
	}
	var_53_bool = 0; var_54_object = Obj();
	var_13_object = var_54_object;
	func_1629(var_53_bool, var_54_object);
	var_53_bool = var_12_bool;
	return 2;
}


func_865(var_1_object)
{
	StopGroup0();
	var_1_object = true;
	return 0;
}


func_1379(var_181_float, var_182_float, var_183_float)
{
	var_186_bool = var_182_float < var_183_float;
	if(var_186_bool != 0) {
		var_182_float = var_181_float;
	} else {
		var_183_float = var_181_float;
	}
	return 0;
	
}


func_1125(var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, "player");
	var_17_object = var_15_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_869(var_0_object, var_18_bool, var_19_object)
{
	var_21_bool = 0; var_22_bool = 0;
	var_0_object = var_19_object;
	var_23_object = Obj();
	var_23_object = var_0_object;
	func_1340(var_23_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd(var_22_bool);
	var_34_bool = var_22_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	LockAnimationEnd("all", "attack_on");
	var_18_bool = 1;
	return 2;
}


func_1386(var_191_float, var_192_float, var_193_float, var_194_float)
{
	var_195_bool = var_192_float < var_193_float;
	if(var_195_bool != 0) {
		var_193_float = var_191_float;
		return 0;
	}
	var_196_bool = var_192_float > var_194_float;
	if(var_196_bool != 0) {
		var_194_float = var_191_float;
		return 0;
	}
	var_192_float = var_191_float;
	return 0;
}


func_1132(var_38_bool, var_39_object, var_40_string)
{
	var_41_bool = 0; var_42_bool = 0;
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", (int)2);
	var_46_bool = var_45_bool == 0; //@nz
	if(var_46_bool != 0) {
		var_38_bool = 0;
		return 2;
	}
	@@var_39_object:HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
	return 2;
}


func_1518(var_48_int, var_49_string)
{
	var_50_int = 0; var_51_int = 0;
	GetInvItemByName(var_51_int, var_49_string);
	var_51_int = var_48_int;
	return 2;
}


func_753(var_15_object)
{
	var_18_bool = 0; var_19_object = Obj();
	var_15_object = var_19_object;
	TaskCall(6);
	func_869(var_20_object, var_18_bool, var_19_object);
	TaskReturn();
	if(var_20_object != 0) {
		var_37_object = Obj();
		var_15_object = var_37_object;
		func_803(var_17_bool, var_15_object, var_37_object);
		PlayAnimation("all", "attack_off");
	}
	return 0;
}


func_1523(var_18_object)
{
	var_19_object = Obj();
	var_18_object = var_19_object;
	TaskCall(0);
	func_0(var_19_object);
	TaskReturn();
	return 0;
}


func_1397(var_22_object)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateObjectSet(var_24_object);
	var_24_object = var_22_object;
	return 2;
}
EMIT "Stack[-1] = 0";


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


func_1656(var_58_object)
{
	var_59_object = Obj();
	var_58_object = var_59_object;
	func_1702(var_59_object);
	return 0;
}


func_1273(var_15_object, var_16_int)
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


func_1019(var_0_object, var_1_object)
{
	var_252_int = 0; var_253_bool = 0; var_254_cvector = CVector(0,0,0); var_255_object = Obj(); var_256_int = 0; var_257_bool = 0; var_258_cvector = CVector(0,0,0); var_259_object = Obj();
	GetPFPosition(var_1_object);
	GetDirection(var_0_object);
	
Label_1024:
	irand(var_256_int, (int)60);
	var_262_int = var_256_int + (int)30;
	Sleep(var_262_int, var_257_bool);
	var_263_bool = var_257_bool;
	if(var_263_bool != 0) {
		func_942();
	} else {
		GetPFPosition(var_258_cvector);
		var_264_float = 0; var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0);
		var_265_cvector = var_1_object;
		var_258_cvector = var_266_cvector;
		func_1375(var_264_float, var_265_cvector, var_266_cvector);
		var_270_bool = var_264_float > (int)40000;
		if(var_270_bool != 0) {
			FindPathTo(var_259_object, var_1_object);
			var_271_bool = var_259_object != 0; //@nn
			if(var_271_bool != 0) {
				RotatePath(var_259_object, var_257_bool);
				var_272_bool = var_257_bool == 0; //@nz
				if(var_272_bool != 0) {
				} else {
					FollowPath(var_259_object, (bool)0, var_257_bool);
					var_274_bool = var_257_bool == 0; //@nz
					if(var_274_bool != 0) {
						goto Label_1094;
					}
					var_275_float = GetByIndex(var_0_object, 0);
					var_276_float = GetByIndex(var_0_object, 2);
					Rotate(var_275_float, var_276_float, var_257_bool);
					var_277_bool = var_257_bool == 0; //@nz
					if(var_277_bool != 0) {
						goto Label_1094;
					}
					WaitForAnimEnd(var_257_bool);
					var_278_bool = var_257_bool == 0; //@nz
					if(var_278_bool != 0) {
						goto Label_1094;
					}
					goto Label_1095;
				EMIT "GOTO 0x437";
			}
				Sleep((int)1);
				var_259_object = 0;
				goto Label_1094;
		}
			var_280_float = GetByIndex(var_0_object, 0);
			var_281_float = GetByIndex(var_0_object, 2);
			Rotate(var_280_float, var_281_float, var_257_bool);
			var_282_bool = var_257_bool == 0; //@nz
			if(var_282_bool != 0) {
				goto Label_1094;
			}
			WaitForAnimEnd(var_257_bool);
			var_283_bool = var_257_bool == 0; //@nz
			if(var_283_bool != 0) {
				goto Label_1094;
			}
			goto Label_1095;
		}
	Label_1094:
		goto Label_1037;
	}
Label_1095:
	goto Label_1024;
	
}
EMIT "Return(); Pop(8)";


func_1144(var_148_float, var_149_object, var_150_float, var_151_int)
{
	var_152_int = 0; var_153_string = ""; var_154_int = 0; var_155_float = 0; var_156_float = 0; var_157_float = 0; var_158_int = 0; var_159_string = ""; var_160_int = 0; var_161_float = 0; var_162_float = 0; var_163_float = 0;
	var_164_bool = 0; var_165_object = Obj(); var_166_string = "";
	var_149_object = var_165_object;
	func_1132(var_164_bool, var_165_object, "health");
	var_167_bool = var_164_bool == 0; //@nz
	if(var_167_bool != 0) {
		var_148_float = 0.0;
		return 12;
	}
	var_168_bool = 0; var_169_object = Obj(); var_170_string = "";
	var_149_object = var_169_object;
	func_1132(var_168_bool, var_169_object, "armor");
	var_171_bool = var_168_bool == 0; //@nz
	if(var_171_bool != 0) {
		var_158_int = 0;
	} else {
			@@var_149_object:GetProperty("armor", var_158_int);
	}
	var_173_string = ""; var_174_int = 0;
	var_151_int = var_174_int;
	func_1102(var_173_string, var_174_int);
	var_159_string = "armor_" + var_173_string;
	var_177_bool = 0; var_178_object = Obj(); var_179_string = "";
	var_149_object = var_178_object;
	var_159_string = var_179_string;
	func_1132(var_177_bool, var_178_object, var_179_string);
	var_180_bool = var_177_bool == 0; //@nz
	if(var_180_bool != 0) {
		var_160_int = 0;
	} else {
		@@var_149_object:GetProperty(var_159_string, var_160_int);

	}
	var_181_float = 0; var_182_float = 0; var_183_float = 0;
	var_184_int = var_158_int + var_160_int;
	var_182_float = var_184_int / (float)100.0;
	func_1379(var_181_float, var_182_float, (float)1);
	var_181_float = var_161_float;
	@@var_149_object:GetProperty("health", var_162_float);
	var_189_int = (int)1 - var_161_float;
	var_163_float = var_150_float * var_189_int;
	var_191_float = 0; var_192_float = 0; var_193_float = 0; var_194_float = 0;
	var_192_float = var_162_float - var_163_float;
	func_1386(var_191_float, var_192_float, (float)0, (float)1);
	@@var_149_object:SetProperty("health", var_191_float);
	var_163_float = var_148_float;
	return 12;
	
}


func_1662(var_13_bool, var_14_object, var_15_object)
{
	var_16_float = 0; var_17_bool = 0; var_18_float = 0; var_19_bool = 0;
	var_20_bool = 0; var_21_object = Obj(); var_22_string = "";
	var_15_object = var_21_object;
	func_1132(var_20_bool, var_21_object, "reputation");
	var_29_bool = var_20_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_13_bool = 0;
		return 4;
	}
	@@var_15_object:GetProperty("reputation", var_18_float);
	var_32_bool = var_18_float < (float)0.5;
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
		func_1117(var_35_float, var_36_object);
		var_44_bool = var_35_float <= (float)160000.0;
		if(var_44_bool != 1) {
			var_33_bool = 0;
		}
	}
	if(var_33_bool != 0) {
		ReportReputationChange(var_14_object, var_15_object, (float)-0.20000000298023224);
		var_13_bool = 1;
		return 4;
	}
	var_13_bool = 0;
	return 4;
}


