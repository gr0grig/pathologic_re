// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,FindPathTo/2,FollowPath/5,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,GetGameTime/1,GetProperty/2,SignalDeath/1,Trace/1,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,IsOverrideActive/1,WorkWithCorpse/1,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:dattack_begin|W:dattack_end|W:zwalk|A:GetPFPosition|W:run|W:attack|W:@GetAttackDistance|A:GetAttackDistance|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:bjump|W:IsAttacking|A:IsAttacking|W:fire|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:hook|W:watch|W:class|W:rat|W:dog
// @GLOBALS: 0:bool:
// @RUN_OP: 0x94
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x8e vars=object,int,float,float
// @EVENT_16: op=0x90 vars=object,string
// @EVENT_41: op=0x92 vars=object
// @TASK_1: vars=bool,bool,bool params=0
// @EVENT_0: op=0xac vars=object
// @EVENT_17: op=0xc0 vars=object
// @EVENT_30: op=0xd4 vars=object,object
// @EVENT_40: op=0xee vars=object
// @EVENT_42: op=0x102 vars=object,string
// @EVENT_1: op=0x118 vars=object
// @EVENT_3: op=0x11e vars=object
// @EVENT_7: op=0x124 vars=int
// @EVENT_6: op=0x130 vars=
// @EVENT_41: op=0x147 vars=object
// @EVENT_10: op=0x1b1 vars=object
// @EVENT_28: op=0x1b5 vars=
// @TASK_2: vars= params=0
// @EVENT_0: op=0x1c8 vars=object
// @EVENT_17: op=0x1dc vars=object
// @EVENT_30: op=0x1f0 vars=object,object
// @EVENT_40: op=0x20a vars=object
// @EVENT_42: op=0x21e vars=object,string
// @EVENT_6: op=0x234 vars=
// @TASK_3: vars= params=1
// @EVENT_17: op=0x290 vars=object
// @EVENT_6: op=0x2a4 vars=
// @EVENT_41: op=0x2e1 vars=object
// @TASK_4: vars=bool,object params=2
// @EVENT_17: op=0x2ea vars=object
// @EVENT_6: op=0x2fe vars=
// @EVENT_7: op=0x378 vars=int
// @EVENT_10: op=0x38a vars=object
// @EVENT_41: op=0x395 vars=object
// @TASK_5: vars=object,int,int,bool,int params=1
// @TASK_6: vars=bool,object params=6
// @EVENT_6: op=0x5a0 vars=
// @EVENT_7: op=0x60d vars=int
// @EVENT_10: op=0x61f vars=object
// @EVENT_41: op=0x62a vars=object
// @STANDALONE_EVENT_16: op=0x7a6 vars=object,string
// @STANDALONE_EVENT_41: op=0x7b3 vars=object
// @STANDALONE_EVENT_22: op=0x7b9 vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x118,0x11e,0x124,0x147,0x1b1,0x285,0x2e1,0x305,0x378,0x38a,0x395,0x39e,0x3a7,0x3af,0x3b2,0x59a,0x60d,0x61f,0x62a,0x633,0x63e,0x783,0x78a,0x79e,0x7b3,0x7b9,0x7d9,0x7dc,0x7e4,0x7ee,0x7f6,0x7fd,0x803,0x806,0x808,0x80b,0x80d,0x810,0x87e,0x881,0x8b1

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2061(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_12_object = var_19_object;
		func_2064(var_19_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_2070();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_int, var_14_bool, var_15_object)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2061(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_311(var_14_int);
		}
		var_22_object = Obj();
		var_12_object = var_22_object;
		func_2064(var_22_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2020(var_15_int, var_16_object);
	var_15_int = var_14_int;
	var_52_bool = var_14_int > (int)0;
	if(var_52_bool != 0) {
		var_54_bool = var_14_int > (int)1;
		if(var_54_bool != 0) {
			func_311(var_14_int);
		}
		var_56_object = Obj();
		var_12_object = var_56_object;
		func_2030(var_56_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_12_bool = var_17_object;
	var_13_object = var_18_object;
	func_2179(var_16_bool, var_17_object, var_18_object);
	if(var_16_bool != 0) {
		var_51_int = 0; var_52_object = Obj();
		var_12_bool = var_52_object;
		func_2038(var_51_int, var_52_object);
		var_51_int = var_15_int;
		var_84_bool = var_15_int > (int)0;
		if(var_84_bool != 0) {
			var_86_bool = var_15_int > (int)1;
			if(var_86_bool != 0) {
				func_311(var_15_int);
			}
			var_88_object = Obj();
			var_12_bool = var_88_object;
			func_2045(var_88_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2051(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_311(var_14_int);
		}
		var_12_object = Obj();
		func_2054();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_string = ""; var_18_object = Obj();
	var_13_object = var_17_string;
	var_12_bool = var_18_object;
	func_2056(var_18_object);
	var_16_int = var_15_int;
	var_20_bool = var_15_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_15_int > (int)1;
		if(var_22_bool != 0) {
			func_311(var_15_int);
		}
		var_24_string = ""; var_25_object = Obj();
		var_13_object = var_24_string;
		var_12_bool = var_25_object;
		func_2059();
	}
	return 2;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_336(var_12_object, var_13_object);
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_336(var_12_object, var_13_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_14_bool = var_12_object != (int)110;
	if(var_14_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object);
	func_2070();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_311(var_12_object);
	var_12_object = Obj();
	func_1971();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2061(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_640();
		}
		var_21_object = Obj();
		var_12_object = var_21_object;
		func_2064(var_21_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2020(var_15_int, var_16_object);
	var_15_int = var_14_int;
	var_52_bool = var_14_int > (int)0;
	if(var_52_bool != 0) {
		var_54_bool = var_14_int > (int)1;
		if(var_54_bool != 0) {
			func_640();
		}
		var_55_object = Obj();
		var_12_object = var_55_object;
		func_2030(var_55_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj(); var_18_object = Obj();
	var_12_bool = var_17_object;
	var_13_object = var_18_object;
	func_2179(var_16_bool, var_17_object, var_18_object);
	if(var_16_bool != 0) {
		var_51_int = 0; var_52_object = Obj();
		var_12_bool = var_52_object;
		func_2038(var_51_int, var_52_object);
		var_51_int = var_15_int;
		var_84_bool = var_15_int > (int)0;
		if(var_84_bool != 0) {
			var_86_bool = var_15_int > (int)1;
			if(var_86_bool != 0) {
				func_640();
			}
			var_87_object = Obj();
			var_12_bool = var_87_object;
			func_2045(var_87_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2051(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_640();
		}
		var_12_object = Obj();
		func_2054();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_int, var_12_bool, var_13_object)
{
	var_14_int = 0; var_15_int = 0;
	var_16_int = 0; var_17_string = ""; var_18_object = Obj();
	var_13_object = var_17_string;
	var_12_bool = var_18_object;
	func_2056(var_18_object);
	var_16_int = var_15_int;
	var_20_bool = var_15_int > (int)0;
	if(var_20_bool != 0) {
		var_22_bool = var_15_int > (int)1;
		if(var_22_bool != 0) {
			func_640();
		}
		var_23_string = ""; var_24_object = Obj();
		var_13_object = var_23_string;
		var_12_bool = var_24_object;
		func_2059();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_640();
	func_2070();
	return 0;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2174(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_732();
		}
		var_12_object = Obj();
		func_2177();
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_732();
	func_2070();
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_732();
	var_12_object = Obj();
	func_1971();
	return 0;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_object = Obj();
	var_12_object = var_16_object;
	func_2174(var_16_object);
	var_15_int = var_14_int;
	var_18_bool = var_14_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_14_int > (int)1;
		if(var_20_bool != 0) {
			func_910(var_14_int);
		}
		var_12_object = Obj();
		func_2177();
	}
	return 2;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_910(var_11_object);
	func_2070();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_14_bool = var_12_object != (int)0;
	if(var_14_bool != 0) {
		return 0;
	}
	var_15_bool = 0; var_16_object = Obj();
	var_16_object = var_1_bool;
	func_926(var_15_bool, var_16_object);
	var_51_bool = var_15_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	RequestClearPath(var_12_object);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	func_910(var_12_object);
	var_12_object = Obj();
	func_1971();
	return 0;
}


task_6_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_1571(var_11_object);
	func_2070();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_int)
{
	var_14_bool = var_12_int != (int)0;
	if(var_14_bool != 0) {
		return 0;
	}
	var_15_bool = 0; var_16_object = Obj();
	var_16_object = var_1_bool;
	func_1587(var_15_bool, var_16_object);
	var_51_bool = var_15_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_6_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object)
{
	RequestClearPath(var_12_object);
	return 0;
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object)
{
	func_1571(var_12_object);
	var_12_object = Obj();
	func_1971();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_string)
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


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_1950(var_13_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object, var_12_object, var_13_int, var_14_float, var_15_float)
{
	var_16_object = Obj(); var_17_int = 0; var_18_float = 0;
	var_12_object = var_16_object;
	var_13_int = var_17_int;
	var_14_float = var_18_float;
	func_1840(var_17_int, var_18_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	SensePlayerOnly((bool)1);
	func_2150();
	func_163();
	
Label_157:
	var_2_bool = false;
	func_376(var_10_bool, var_11_object);
	goto Label_157;
}
EMIT "Return(); Pop(0)";


func_0(var_14_object)
{
	EventDisable(0);
	var_15_object = Obj();
	var_14_object = var_15_object;
	func_33(var_15_object);
	var_14_object = Obj();
	func_2225();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_2051(var_15_int)
{
	var_15_int = 0;
	return 0;
}


func_2054()
{
	return 0;
}


func_2056(var_16_int)
{
	var_16_int = 0;
	return 0;
}


func_2059()
{
	return 0;
}


func_2061(var_15_int)
{
	var_15_int = 2;
	return 0;
}


func_2064(var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_2158(var_22_object);
	return 0;
}


func_2070()
{
	return 0;
}


func_2071(var_20_int, var_21_int)
{
	var_31_int = 0; var_32_int = 0; var_33_int = 0; var_34_bool = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0;
	var_39_bool = var_20_int > var_21_int;
	if(var_39_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_41_bool = var_20_int != var_21_int;
	if(var_41_bool != 0) {
		var_42_int = var_21_int - var_20_int;
		irand(var_36_int, var_42_int);
	} else {
		var_48_bool = var_20_int == (int)0;
		if(var_48_bool == 0) goto Label_2089;
		return 8;
	}
Label_2089:
	(int)0 = (int)0 + var_20_int;
	var_44_bool = var_35_int == (int)0;
	if(var_44_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_37_int, "Money");
	AddItem(var_38_bool, var_37_int, (int)0, var_35_int);
	return 8;
	
}


func_33(var_15_object)
{
	var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_string = ""; var_21_object = Obj(); var_22_bool = 0; var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = var_15_object == 0; //@ne
	if(var_36_bool != 0) {
		var_37_string = "";
		func_120("fdie");
	} else {
		@@var_15_object:GetPosition(var_26_cvector);
		GetPosition(var_27_cvector);
		GetDirection(var_28_cvector);
		var_29_cvector = var_27_cvector - var_26_cvector;
		var_40_float = GetByIndex(var_29_cvector, 0);
		var_41_float = GetByIndex(var_28_cvector, 0);
		var_42_float = var_40_float * var_41_float;
		var_43_float = GetByIndex(var_29_cvector, 2);
		var_44_float = GetByIndex(var_28_cvector, 2);
		var_45_float = var_43_float * var_44_float;
		var_46_int = var_42_float + var_45_float;
		var_48_bool = var_46_int >= (int)0;
		if(var_48_bool != 0) {
			var_30_string = "fdie";
		} else {
				var_30_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_15_object = var_31_object;
		var_51_bool = IsFuncExist(var_15_object, "GetScriptProperty", (int)2);
		if(var_51_bool != 0) {
			@@var_15_object:HasScriptProperty(var_32_bool, "Owner");
			var_53_bool = var_32_bool;
			if(var_53_bool != 0) {
				@@var_15_object:GetScriptProperty(var_31_object, "Owner");
				var_55_bool = var_31_object == 0; //@ne
				if(var_55_bool != 0) {
					var_15_object = var_31_object;
				}
			}
		}
		var_58_bool = IsFuncExist(var_31_object, "@GetEyesHeight", (int)1);
		if(var_58_bool != 0) {
			@@var_31_object:GetEyesHeight(var_34_float);
			var_35_cvector = CVector(0.0, 0.0, 0.0);
			var_59_float = GetByIndex(var_35_cvector, 1);
			var_34_float = var_59_float;
			SetByIndex(var_35_cvector, 1) = var_59_float;
			LookAsync(var_15_object, "head", var_35_cvector);
			var_33_bool = 1;
		} else {
			var_33_bool = 0;

		}
		PlayAnimation("all", var_30_string);
		WaitForAnimEnd();
		var_62_bool = var_33_bool;
		if(var_62_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_30_string);
		RemoveEnvelope();
		var_31_object = 0;
	}
	return 20;
	
}


func_1571(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1587(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1816(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_2101()
{
	var_15_bool = 0; var_16_int = 0; var_17_bool = 0; var_18_int = 0;
	ClearSubContainer((int)0);
	var_20_int = 0; var_21_int = 0;
	var_23_int = 0;
	func_1941(var_23_int);
	var_30_float = var_23_int * (int)10;
	var_21_int = (int)10 + var_30_float;
	func_2071((int)0, var_21_int);
	irand(var_18_int, (int)4);
	var_51_bool = var_18_int == (int)0;
	if(var_51_bool != 0) {
		var_52_int = 0; var_53_string = "";
		func_2145(var_52_int, "hook");
		AddItem(var_17_bool, var_52_int, (int)0, (int)1);
	}
	irand(var_18_int, (int)10);
	var_60_bool = var_18_int == (int)0;
	if(var_60_bool != 0) {
		var_61_int = 0; var_62_string = "";
		func_2145(var_61_int, "watch");
		AddItem(var_17_bool, var_61_int, (int)0, (int)1);
	}
	return 4;
}


func_1594(var_188_string)
{
	var_188_string = "walk";
	return 0;
}


func_571()
{
	var_92_int = 0; var_93_int = 0; var_94_int = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_bool = 0; var_99_int = 0; var_100_int = 0; var_101_int = 0; var_102_int = 0; var_103_bool = 0; var_104_float = 0; var_105_bool = 0;
	WaitForAnimEnd();
	var_106_bool = 0;
	func_1918(var_106_bool);
	var_107_bool = var_106_bool == 0; //@nz
	if(var_107_bool != 0) {
		return 14;
	}
	func_1992((int)0);
	var_108_int = var_99_int;
	var_100_int = 0;
	
Label_585:
	var_121_bool = 0;
	var_121_bool = 0;
	var_123_bool = var_100_int < (int)5;
	if(var_123_bool != 0) {
		var_124_bool = 0;
		func_1918(var_124_bool);
		if(var_124_bool != 0) {
			var_121_bool = 1;
		}
	}
	if(var_121_bool != 0) {
		irand(var_101_int, (int)3);
		var_127_bool = var_101_int == (int)0;
		if(var_127_bool != 0) {
			var_128_int = var_99_int;
			if(var_128_int == 0) goto Label_618;
			irand(var_102_int, var_99_int);
			var_130_string = ""; var_131_int = 0;
			var_102_int = var_131_int;
			func_1985(var_130_string, var_131_int);
			PlayAnimation("all", var_130_string);
			WaitForAnimEnd(var_103_bool);
			var_132_bool = var_103_bool == 0; //@nz
			if(var_132_bool != 0) {
			} else {
		} else {
				var_135_bool = var_101_int == (int)1;
				if(var_135_bool != 0) {
					rand(var_104_float, (int)4);
					var_138_int = var_104_float + (int)1;
					Sleep(var_138_int, var_105_bool);
					var_139_bool = var_105_bool == 0; //@nz
					if(var_139_bool != 0) {
						goto Label_639;
					}
					goto Label_636;
				}
				var_140_int = var_100_int;
				if(var_140_int == 0) goto Label_636;
				goto Label_639;
		}
		Label_636:
			var_100_int = var_100_int + (int)1;
			goto Label_585;

		}
	}
Label_639:
	return 14;
	
}


func_1596(var_189_string)
{
	var_189_string = "run";
	return 0;
}


func_1598(var_344_string, var_345_int)
{
	var_347_bool = var_345_int == (int)1;
	if(var_347_bool != 0) {
		var_344_string = "fire";
		return 0;
	}
	var_344_string = "phys";
	return 0;
}


func_1606(var_40_float, var_41_object)
{
	var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	GetPosition(var_45_cvector);
	@@var_41_object:GetPosition(var_46_cvector);
	var_47_cvector = var_46_cvector - var_45_cvector;
	var_40_float = var_47_cvector | var_47_cvector;
	return 6;
}


func_1614(var_39_bool, var_40_object, var_41_string)
{
	var_42_bool = 0; var_43_bool = 0;
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", (int)2);
	var_47_bool = var_46_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_39_bool = 0;
		return 2;
	}
	@@var_40_object:HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
	return 2;
}


func_1626(var_170_bool, var_171_object, var_172_string, var_173_float, var_174_float, var_175_float)
{
	var_176_float = 0; var_177_float = 0;
	var_178_bool = 0; var_179_object = Obj(); var_180_string = "";
	var_171_object = var_179_object;
	var_172_string = var_180_string;
	func_1614(var_178_bool, var_179_object, var_180_string);
	var_181_bool = var_178_bool == 0; //@nz
	if(var_181_bool != 0) {
		var_170_bool = 0;
		return 2;
	}
	@@var_171_object:GetProperty(var_172_string, var_177_float);
	var_182_float = 0; var_183_float = 0; var_184_float = 0; var_185_float = 0;
	var_183_float = var_177_float + var_173_float;
	var_174_float = var_184_float;
	var_175_float = var_185_float;
	func_1930(var_182_float, var_183_float, var_184_float, var_185_float);
	@@var_171_object:SetProperty(var_172_string, var_182_float);
	var_170_bool = 1;
	return 2;
}


func_2145(var_52_int, var_53_string)
{
	var_54_int = 0; var_55_int = 0;
	GetInvItemByName(var_55_int, var_53_string);
	var_55_int = var_52_int;
	return 2;
}


func_2150()
{
	var_13_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_14_bool = 0;
	var_14_bool = 1;
	func_2101();
	return 0;
}


func_2158(var_22_object)
{
	var_23_bool = 0; var_24_bool = 0;
	var_25_bool = GlobalVars[0];
	if(var_25_bool != 0) {
		IsOverrideActive(var_24_bool);
		var_26_bool = var_24_bool == 0; //@nz
		if(var_26_bool != 0) {
			WorkWithCorpse(var_22_object);
		}
		return 2;
	}
	return 2;
}


func_1648(var_316_float, var_317_object, var_318_float, var_319_int)
{
	var_323_int = 0; var_324_string = ""; var_325_int = 0; var_326_float = 0; var_327_float = 0; var_328_float = 0; var_329_int = 0; var_330_string = ""; var_331_int = 0; var_332_float = 0; var_333_float = 0; var_334_float = 0;
	var_335_bool = 0; var_336_object = Obj(); var_337_string = "";
	var_317_object = var_336_object;
	func_1614(var_335_bool, var_336_object, "health");
	var_338_bool = var_335_bool == 0; //@nz
	if(var_338_bool != 0) {
		var_316_float = 0.0;
		return 12;
	}
	var_339_bool = 0; var_340_object = Obj(); var_341_string = "";
	var_317_object = var_340_object;
	func_1614(var_339_bool, var_340_object, "armor");
	var_342_bool = var_339_bool == 0; //@nz
	if(var_342_bool != 0) {
		var_329_int = 0;
	} else {
			@@var_317_object:GetProperty("armor", var_329_int);
	}
	var_344_string = ""; var_345_int = 0;
	var_319_int = var_345_int;
	func_1598(var_344_string, var_345_int);
	var_330_string = "armor_" + var_344_string;
	var_348_bool = 0; var_349_object = Obj(); var_350_string = "";
	var_317_object = var_349_object;
	var_330_string = var_350_string;
	func_1614(var_348_bool, var_349_object, var_350_string);
	var_351_bool = var_348_bool == 0; //@nz
	if(var_351_bool != 0) {
		var_331_int = 0;
	} else {
		@@var_317_object:GetProperty(var_330_string, var_331_int);

	}
	var_352_float = 0; var_353_float = 0; var_354_float = 0;
	var_355_int = var_329_int + var_331_int;
	var_353_float = var_355_int / (float)100.0;
	func_1923(var_352_float, var_353_float, (float)1);
	var_352_float = var_332_float;
	@@var_317_object:GetProperty("health", var_333_float);
	var_360_int = (int)1 - var_332_float;
	var_334_float = var_318_float * var_360_int;
	var_362_float = 0; var_363_float = 0; var_364_float = 0; var_365_float = 0;
	var_363_float = var_333_float - var_334_float;
	func_1930(var_362_float, var_363_float, (float)0, (float)1);
	@@var_317_object:SetProperty("health", var_362_float);
	var_334_float = var_316_float;
	return 12;
	
}


func_120(var_37_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_37_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_37_string);
	RemoveEnvelope();
	return 0;
}


func_2169(var_64_bool, var_65_object)
{
	var_66_bool = 0; var_67_bool = 0;
	IsPlayerActor(var_65_object, var_67_bool);
	var_67_bool = var_64_bool;
	return 2;
}


func_2174(var_15_int)
{
	var_15_int = 0;
	return 0;
}


func_640()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_2177()
{
	return 0;
}


func_1154(var_0_bool, var_302_float, var_303_int)
{
	var_304_object = Obj(); var_305_float = 0; var_306_float = 0; var_307_object = Obj(); var_308_float = 0; var_309_float = 0;
	var_311_float = var_302_float * (float)0.8999999761581421;
	GetVictim(var_311_float, var_307_object);
	ReportAttack(var_0_bool);
	var_312_bool = var_307_object == var_0_bool;
	if(var_312_bool != 0) {
		var_313_float = 0; var_314_object = Obj(); var_315_int = 0;
		var_307_object = var_314_object;
		var_303_int = var_315_int;
		func_943(var_315_int);
		var_313_float = var_308_float;
		var_316_float = 0; var_317_object = Obj(); var_318_float = 0; var_319_int = 0;
		var_307_object = var_317_object;
		var_308_float = var_318_float;
		var_320_int = 0; var_321_object = Obj(); var_322_int = 0;
		var_307_object = var_321_object;
		var_303_int = var_322_int;
		func_946(var_322_int);
		var_320_int = var_319_int;
		func_1648(var_316_float, var_317_object, var_318_float, var_319_int);
		var_316_float = var_309_float;
		var_369_int = 0;
		func_1432(var_369_int);
		ReportHit(var_0_bool, var_369_int, var_309_float, var_308_float);
		var_370_object = Obj(); var_371_float = 0;
		var_307_object = var_370_object;
		var_309_float = var_371_float;
		func_1434();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_2179(var_16_bool, var_17_object, var_18_object)
{
	var_19_string = ""; var_20_bool = 0; var_21_string = ""; var_22_bool = 0;
	var_23_bool = 0; var_24_object = Obj(); var_25_string = "";
	var_18_object = var_24_object;
	func_1614(var_23_bool, var_24_object, "class");
	var_32_bool = var_23_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	@@var_18_object:GetProperty("class", var_21_string);
	var_35_bool = var_21_string == "rat";
	if(var_35_bool != 0) {
		var_16_bool = 0;
		return 4;
	EMIT "GOTO 0x89b";
	}
	var_37_bool = var_21_string == "dog";
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 4;
	}
	CanSee(var_22_bool, var_17_object);
	var_38_bool = 0;
	var_38_bool = 1;
	var_39_bool = var_22_bool;
	if(var_39_bool != 1) {
		var_40_float = 0; var_41_object = Obj();
		var_17_object = var_41_object;
		func_1606(var_40_float, var_41_object);
		var_49_bool = var_40_float <= (float)250000.0;
		if(var_49_bool != 1) {
			var_38_bool = 0;
		}
	}
	if(var_38_bool != 0) {
		ReportReputationChange(var_17_object, var_18_object, (float)-0.30000001192092896);
		var_16_bool = 1;
		return 4;
	}
	var_16_bool = 0;
	return 4;
}


func_645(var_63_object)
{
	var_64_bool = 0; var_65_object = Obj();
	var_63_object = var_65_object;
	func_2169(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		var_68_object = Obj();
		var_63_object = var_68_object;
		func_683(var_68_object);
	}
	return 0;
}


func_163()
{
	var_65_bool = 0;
	func_1918(var_65_bool);
	var_68_bool = var_65_bool == 0; //@nz
	if(var_68_bool != 0) {
		func_2070();
	}
	return 0;
}


func_1193(var_0_bool, var_1_bool, var_273_bool, var_274_float)
{
	var_275_int = 0; var_276_bool = 0; var_277_int = 0; var_278_bool = 0;
	irand(var_277_int, var_1_bool);
	var_277_int = var_277_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_283_int = "attack_begin" + var_277_int;
	PlayAnimation("all", var_283_int);
	WaitForAnimEnd();
	func_1400(var_277_int, var_278_bool);
	var_299_bool = 0; var_300_object = Obj();
	var_300_object = var_0_bool;
	func_1816(var_299_bool, var_300_object);
	var_301_bool = var_299_bool == 0; //@nz
	if(var_301_bool != 0) {
		StopAsync();
		var_273_bool = 0;
		return 4;
	}
	var_302_float = 0; var_303_int = 0;
	var_274_float = var_302_float;
	var_277_int = var_303_int;
	func_1154(var_278_bool, var_302_float, var_303_int);
	var_374_int = "attack_middle" + var_277_int;
	HasAnimation(var_278_bool, "all", var_374_int);
	var_375_bool = var_278_bool;
	if(var_375_bool != 0) {
		var_378_int = "attack_middle" + var_277_int;
		PlayAnimation("all", var_378_int);
		WaitForAnimEnd();
		var_379_bool = 0; var_380_object = Obj();
		var_380_object = var_0_bool;
		func_1816(var_379_bool, var_380_object);
		var_381_bool = var_379_bool == 0; //@nz
		if(var_381_bool != 0) {
			StopAsync();
			var_273_bool = 0;
			return 4;
		}
		var_382_float = 0; var_383_int = 0;
		var_274_float = var_382_float;
		var_277_int = var_383_int;
		func_1154(var_278_bool, var_382_float, var_383_int);
	}
	SetAttackState((bool)0);
	var_387_int = "attack_end" + var_277_int;
	PlayAnimation("all", var_387_int);
	var_388_bool = 0; var_389_float = 0;
	func_1273(var_388_bool, (float)0.75);
	StopAsync();
	var_273_bool = 1;
	return 4;
}


func_683(var_68_object)
{
	var_69_bool = 0; var_70_bool = 0;
	
Label_684:
	var_71_bool = 0; var_72_object = Obj();
	var_68_object = var_72_object;
	TaskCall(4);
	func_773(var_71_bool, var_72_object);
	TaskReturn();
	if(var_73_bool != 0) {
		Face(var_68_object);
		WaitForAnimEnd(var_70_bool);
		var_126_bool = var_70_bool == 0; //@nz
		if(var_126_bool != 0) {
		} else {
			PlayAnimation("all", "dattack_begin");
			WaitForAnimEnd(var_70_bool);
			var_129_bool = var_70_bool == 0; //@nz
			if(var_129_bool != 0) {
				goto Label_731;
			}
			var_130_float = 0; var_131_object = Obj();
			var_68_object = var_131_object;
			func_1606(var_130_float, var_131_object);
			var_139_bool = var_130_float <= (float)90000.0;
			if(var_139_bool != 0) {
				var_140_float = 0; var_141_object = Obj(); var_142_float = 0;
				var_68_object = var_141_object;
				func_1712(var_140_float, var_141_object, (float)0.20000000298023224);
			}
			PlayAnimation("all", "dattack_end");
			WaitForAnimEnd(var_70_bool);
			var_192_bool = var_70_bool == 0; //@nz
			if(var_192_bool != 0) {
				goto Label_731;
			}
			StopAsync();
			goto Label_684;
		}
	}
Label_731:
	return 2;
	
}


func_1712(var_140_float, var_141_object, var_142_float)
{
	var_143_int = 0; var_144_float = 0; var_145_float = 0; var_146_int = 0; var_147_float = 0; var_148_float = 0;
	var_149_bool = 0; var_150_object = Obj(); var_151_string = "";
	var_141_object = var_150_object;
	func_1614(var_149_bool, var_150_object, "disease");
	var_152_bool = var_149_bool == 0; //@nz
	if(var_152_bool != 0) {
		var_140_float = 0;
		return 6;
	}
	var_153_bool = 0; var_154_object = Obj(); var_155_string = "";
	var_141_object = var_154_object;
	func_1614(var_153_bool, var_154_object, "armor_disease");
	if(var_153_bool != 0) {
		@@var_141_object:GetProperty("armor_disease", var_146_int);
		var_158_bool = var_146_int < (int)100;
		if(var_158_bool != 0) {
			var_161_float = var_146_int / (float)100.0;
			var_162_int = (int)1 - var_161_float;
			var_142_float = var_142_float * var_162_int;
		} else {
					var_140_float = 0;
					return 6;
		}
	}
	var_163_bool = 0; var_164_object = Obj(); var_165_string = "";
	var_141_object = var_164_object;
	func_1614(var_163_bool, var_164_object, "immunity");
	if(var_163_bool != 0) {
		@@var_141_object:GetProperty("immunity", var_148_float);
		var_167_bool = var_148_float < var_142_float;
		if(var_167_bool != 0) {
			@@var_141_object:SetProperty("immunity", (int)0);
			var_147_float = var_142_float - var_148_float;
		} else {
			var_189_int = var_148_float - var_142_float;
			@@var_141_object:SetProperty("immunity", var_189_int);
			var_142_float = var_140_float;
			return 6;

		}
	}
	var_170_bool = 0; var_171_object = Obj(); var_172_string = ""; var_173_float = 0; var_174_float = 0; var_175_float = 0;
	var_141_object = var_171_object;
	var_147_float = var_173_float;
	func_1626(var_170_bool, var_171_object, "disease", var_173_float, (float)0, (float)1);
	var_142_float = var_140_float;
	return 6;
	
}


func_2225()
{
	var_66_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_732()
{
	StopAsync();
	StopAnimation();
	return 0;
}


func_1775(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	@@var_33_object:IsDead(var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_1780(var_21_bool, var_22_object)
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
		func_1775(var_32_bool, var_33_object);
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


func_1273(var_388_bool, var_389_float)
{
	var_390_float = 0; var_391_bool = 0; var_392_float = 0; var_393_bool = 0;
	rand(var_392_float);
	var_394_bool = var_392_float < var_389_float;
	if(var_394_bool != 0) {

	Label_1278:
		IsAnimationPlaying(var_393_bool);
		var_395_bool = var_393_bool == 0; //@nz
		if(var_395_bool != 0) {
		} else {
			var_396_bool = 0;
			func_1337(var_393_bool, var_396_bool);
			if(var_396_bool != 0) {
				var_388_bool = 1;
				sync();
				goto Label_1278;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1295;
	
Label_1295:
	var_388_bool = 0;
	return 4;
	
}


func_773(var_71_bool, var_72_object)
{
	var_75_bool = 0; var_76_object = Obj(); var_77_float = 0; var_78_float = 0; var_79_bool = 0; var_80_bool = 0;
	var_72_object = var_76_object;
	func_786(var_71_bool, var_72_object, var_75_bool, var_76_object, (float)150, (float)3000, (bool)0, (bool)1);
	var_75_bool = var_71_bool;
	return 0;
}


func_784(var_115_string)
{
	var_115_string = "zwalk";
	return 0;
}


func_1297(var_0_bool, var_230_bool, var_231_float)
{
	var_232_bool = 0; var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_float = 0; var_237_bool = 0; var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0); var_240_cvector = CVector(0,0,0); var_241_float = 0;
	
Label_1298:
	IsAnimationPlaying(var_237_bool);
	var_242_bool = var_237_bool == 0; //@nz
	if(var_242_bool != 0) {
	} else {
		var_243_bool = 0;
		func_1337(var_241_float, var_243_bool);
		if(var_243_bool != 0) {
			var_230_bool = 1;
			return 10;
		}
		var_268_bool = 0; var_269_object = Obj();
		var_269_object = var_0_bool;
		func_1816(var_268_bool, var_269_object);
		var_270_bool = var_268_bool == 0; //@nz
		if(var_270_bool != 0) {
			var_230_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_238_cvector);
		GetPFPosition(var_239_cvector);
		var_240_cvector = var_238_cvector - var_239_cvector;
		var_241_float = var_240_cvector | var_240_cvector;
		var_271_float = var_231_float * var_231_float;
		var_272_bool = var_241_float < var_271_float;
		if(var_272_bool != 0) {
			var_273_bool = 0; var_274_float = 0;
			var_231_float = var_274_float;
			func_1193(var_240_cvector, var_241_float, var_273_bool, var_274_float);
			var_230_bool = 1;
			sync();
			goto Label_1298;
		}
		return 10;
	}
	var_230_bool = 0;
	return 10;
	
}


func_786(var_0_bool, var_1_bool, var_75_bool, var_76_object, var_77_float, var_78_float, var_79_bool, var_80_bool)
{
	var_81_bool = 0; var_82_bool = 0; var_83_object = Obj(); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_float = 0; var_88_object = Obj(); var_89_bool = 0; var_90_bool = 0; var_91_object = Obj(); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_object = Obj();
	var_0_bool = false;
	var_1_bool = var_76_object;
	var_80_bool = var_90_bool;
	
Label_790:
	var_97_bool = 0; var_98_object = Obj();
	var_76_object = var_98_object;
	func_926(var_97_bool, var_98_object);
	var_101_bool = var_97_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_75_bool = 0;
		return 16;
	}
	@@var_76_object:GetPosition(var_92_cvector);
	GetPosition(var_93_cvector);
	var_94_cvector = var_92_cvector - var_93_cvector;
	var_95_float = var_94_cvector | var_94_cvector;
	var_102_bool = 0;
	var_102_bool = 0;
	var_104_bool = var_78_float > (int)0;
	if(var_104_bool != 0) {
		var_105_float = var_78_float * var_78_float;
		var_106_bool = var_95_float > var_105_float;
		if(var_106_bool != 0) {
			var_102_bool = 1;
		}
	}
	if(var_102_bool != 0) {
		Stop();
		var_75_bool = 0;
		return 16;
	}
	var_107_float = var_77_float * var_77_float;
	var_108_bool = var_95_float > var_107_float;
	if(var_108_bool != 0) {
		@@var_76_object:GetPFPosition(var_92_cvector);
		FindPathTo(var_96_object, var_92_cvector);
		var_109_bool = var_96_object != 0; //@nn
		if(var_109_bool != 0) {
			var_96_object = var_91_object;
			var_96_object = 0;
		}
		var_110_bool = var_91_object != 0; //@nn
		if(var_110_bool != 0) {
			var_111_bool = var_90_bool;
			if(var_111_bool == 0) goto Label_839;
			var_90_bool = 0;
			RotatePath(var_91_object, var_89_bool);
			var_112_bool = var_89_bool == 0; //@nz
			if(var_112_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_115_string = "";
				func_784(var_115_string);
				var_116_string = "";
				func_933(var_116_string);
				FollowPath(var_91_object, var_79_bool, var_89_bool, var_115_string, var_116_string);
				var_117_bool = var_89_bool == 0; //@nz
				if(var_117_bool != 0) {
					var_118_bool = var_0_bool;
					if(var_118_bool != 0) {
						var_91_object = 0;
						goto Label_886;
					EMIT "GOTO 0x35b";
					}
				} else {
					var_91_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_89_bool);
					var_121_bool = var_89_bool == 0; //@nz
					if(var_121_bool != 0) {
						var_122_bool = var_0_bool;
						if(var_122_bool != 0) {
							var_91_object = 0;
							goto Label_886;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_886;
	}
			var_96_object = 0;
			goto Label_884;

		Label_884:
			var_91_object = 0;

		}
		goto Label_790;
	}
Label_886:
	var_75_bool = !var_0_bool;
	return 16;
	
}


func_1816(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_18_object = var_22_object;
	func_1780(var_21_bool, var_22_object);
	var_38_bool = var_21_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_18_object = var_40_object;
	func_1614(var_39_bool, var_40_object, "noaccess");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	@@var_18_object:GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == (int)0;
	return 2;
}


func_1840(var_16_object, var_17_int)
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


func_311(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_440(var_11_bool, var_12_object);
	return 0;
}


func_1337(var_0_bool, var_243_bool)
{
	var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_float = 0; var_248_float = 0; var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_float = 0; var_253_float = 0;
	var_254_bool = 0; var_255_object = Obj();
	var_255_object = var_0_bool;
	func_1816(var_254_bool, var_255_object);
	var_256_bool = var_254_bool == 0; //@nz
	if(var_256_bool != 0) {
		var_243_bool = 0;
		return 10;
	}
	var_257_bool = 0;
	func_1389(var_253_float, var_257_bool);
	if(var_257_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_249_cvector);
		GetPFPosition(var_250_cvector);
		var_251_cvector = var_249_cvector - var_250_cvector;
		var_252_float = var_251_cvector | var_251_cvector;
		@@@var_0_bool:GetAttackDistance(var_253_float);
		var_253_float = var_253_float + (int)50;
		var_259_float = var_253_float * var_253_float;
		var_260_bool = var_252_float <= var_259_float;
		if(var_260_bool != 0) {
			func_1370(var_253_float);
			var_243_bool = 1;
			return 10;
		}
	}
	var_243_bool = 0;
	return 10;
}


func_319(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_447(var_16_bool, var_17_int);
	return 0;
}


func_336(var_2_bool, var_13_object)
{
	var_14_bool = 0; var_15_int = 0; var_16_bool = 0; var_17_int = 0;
	var_18_bool = 0; var_19_object = Obj();
	var_13_object = var_19_object;
	func_1816(var_18_bool, var_19_object);
	var_52_bool = var_18_bool == 0; //@nz
	if(var_52_bool != 0) {
		return 4;
	}
	var_53_bool = var_2_bool;
	if(var_53_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_13_object, var_16_bool);
	var_54_bool = var_16_bool == 0; //@nz
	if(var_54_bool != 0) {
		return 4;
	}
	var_55_int = 0; var_56_object = Obj();
	var_13_object = var_56_object;
	func_2009(var_56_object);
	var_55_int = var_17_int;
	var_58_bool = var_17_int > (int)0;
	if(var_58_bool != 0) {
		var_60_bool = var_17_int > (int)1;
		if(var_60_bool != 0) {
			func_319(var_17_int);
		}
		var_62_object = Obj();
		var_13_object = var_62_object;
		func_2012(var_62_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1370(var_0_bool)
{
	var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_263_cvector);
	GetPFPosition(var_264_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1389(var_0_bool, var_222_bool)
{
	var_223_bool = 0; var_224_bool = 0;
	var_227_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_227_bool != 0) {
		@@@var_0_bool:IsAttacking(var_224_bool);
		var_224_bool = var_222_bool;
		return 2;
	}
	var_222_bool = 0;
	return 2;
}


func_1907(var_208_object)
{
	var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_cvector = CVector(0,0,0); var_212_cvector = CVector(0,0,0); var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0);
	@@var_208_object:GetPosition(var_212_cvector);
	GetPosition(var_213_cvector);
	var_214_cvector = var_212_cvector - var_213_cvector;
	var_215_float = GetByIndex(var_214_cvector, 0);
	var_216_float = GetByIndex(var_214_cvector, 2);
	RotateAsync(var_215_float, var_216_float);
	return 6;
}


func_1400(var_2_bool, var_4_object)
{
	var_284_float = 0; var_285_int = 0; var_286_float = 0; var_287_int = 0;
	var_288_bool = var_2_bool == 0; //@nz
	if(var_288_bool != 0) {
		return 4;
	}
	var_289_object = var_4_object;
	if(var_289_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_292_bool = var_4_object > (int)0;
		if(var_292_bool != 0) {
			return 4;
		}
	}
	rand(var_286_float);
	var_293_float = 0;
	func_1438(var_293_float);
	var_294_bool = var_286_float < var_293_float;
	if(var_294_bool != 0) {
		irand(var_287_int, var_2_bool);
		var_287_int = var_287_int + (int)1;
		var_297_int = "attack" + var_287_int;
		Speak(var_297_int);
		var_298_int = 0;
		func_1436(var_298_int);
		var_4_object = var_298_int;
	}
	return 4;
}


func_376(var_0_bool, var_1_bool)
{
	var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_float = 0; var_73_bool = 0; var_74_object = Obj(); var_75_bool = 0; var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_bool = 0; var_81_object = Obj(); var_82_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_76_float, (float)0.5);
	Sleep(var_76_float);
	
Label_384:
	var_84_bool = var_0_bool == 0; //@nz
	if(var_84_bool != 0) {
		var_85_bool = var_1_bool == 0; //@nz
		if(var_85_bool != 0) {

		Label_388:
			GetPosition(var_78_cvector);
			GetCameraFarDistance(var_79_float);
			var_79_float = var_79_float * (float)2.5;
			GetRandomPFPointInCircle(var_77_cvector, var_78_cvector, var_79_float, var_80_bool);
			var_87_bool = var_80_bool;
			if(var_87_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_388;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_405;
	
Label_405:
	FindShiftedPathTo(var_81_object, var_77_cvector);
	var_88_bool = var_81_object != 0; //@nn
	if(var_88_bool != 0) {
		RotatePath(var_81_object, var_82_bool);
		var_89_bool = var_82_bool;
		if(var_89_bool != 0) {
			var_90_bool = 0;
			func_454(var_90_bool);
			FollowPath(var_81_object, var_90_bool, var_82_bool);
			var_81_object = 0;
			var_91_bool = var_82_bool;
			if(var_91_bool != 0) {
				TaskCall(2);
				func_571();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_81_object = 0;
	goto Label_384;
	
}


func_1918(var_65_bool)
{
	var_66_bool = 0; var_67_bool = 0;
	IsLoaded(var_67_bool);
	var_67_bool = var_65_bool;
	return 2;
}


func_1923(var_352_float, var_353_float, var_354_float)
{
	var_357_bool = var_353_float < var_354_float;
	if(var_357_bool != 0) {
		var_353_float = var_352_float;
	} else {
		var_354_float = var_352_float;
	}
	return 0;
	
}


func_1930(var_362_float, var_363_float, var_364_float, var_365_float)
{
	var_366_bool = var_363_float < var_364_float;
	if(var_366_bool != 0) {
		var_364_float = var_362_float;
		return 0;
	}
	var_367_bool = var_363_float > var_365_float;
	if(var_367_bool != 0) {
		var_365_float = var_362_float;
		return 0;
	}
	var_363_float = var_362_float;
	return 0;
}


func_910(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1941(var_23_int)
{
	var_24_float = 0; var_25_float = 0;
	GetGameTime(var_25_float);
	var_27_int = 0;
	var_27_int = var_25_float / (int)24;
	var_23_int = (int)1 + var_27_int;
	return 2;
}


func_1432(var_369_int)
{
	var_369_int = 0;
	return 0;
}


func_1434()
{
	return 0;
}


func_1436(var_298_int)
{
	var_298_int = 1;
	return 0;
}


func_926(var_15_bool, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_1816(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
	return 0;
}


func_1438(var_293_float)
{
	var_293_float = 0.5;
	return 0;
}


func_1950(var_13_object)
{
	var_14_object = Obj();
	var_13_object = var_14_object;
	TaskCall(0);
	func_0(var_14_object);
	TaskReturn();
	return 0;
}


func_933(var_116_string)
{
	var_116_string = "run";
	return 0;
}


func_1447(var_0_bool, var_1_bool, var_146_bool, var_147_object, var_148_float, var_149_float, var_150_bool, var_151_bool)
{
	var_154_bool = 0; var_155_bool = 0; var_156_object = Obj(); var_157_cvector = CVector(0,0,0); var_158_cvector = CVector(0,0,0); var_159_cvector = CVector(0,0,0); var_160_float = 0; var_161_object = Obj(); var_162_bool = 0; var_163_bool = 0; var_164_object = Obj(); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_float = 0; var_169_object = Obj();
	var_0_bool = false;
	var_1_bool = var_147_object;
	var_151_bool = var_163_bool;
	
Label_1451:
	var_170_bool = 0; var_171_object = Obj();
	var_147_object = var_171_object;
	func_1587(var_170_bool, var_171_object);
	var_174_bool = var_170_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_146_bool = 0;
		return 16;
	}
	@@var_147_object:GetPosition(var_165_cvector);
	GetPosition(var_166_cvector);
	var_167_cvector = var_165_cvector - var_166_cvector;
	var_168_float = var_167_cvector | var_167_cvector;
	var_175_bool = 0;
	var_175_bool = 0;
	var_177_bool = var_149_float > (int)0;
	if(var_177_bool != 0) {
		var_178_float = var_149_float * var_149_float;
		var_179_bool = var_168_float > var_178_float;
		if(var_179_bool != 0) {
			var_175_bool = 1;
		}
	}
	if(var_175_bool != 0) {
		Stop();
		var_146_bool = 0;
		return 16;
	}
	var_180_float = var_148_float * var_148_float;
	var_181_bool = var_168_float > var_180_float;
	if(var_181_bool != 0) {
		@@var_147_object:GetPFPosition(var_165_cvector);
		FindPathTo(var_169_object, var_165_cvector);
		var_182_bool = var_169_object != 0; //@nn
		if(var_182_bool != 0) {
			var_169_object = var_164_object;
			var_169_object = 0;
		}
		var_183_bool = var_164_object != 0; //@nn
		if(var_183_bool != 0) {
			var_184_bool = var_163_bool;
			if(var_184_bool == 0) goto Label_1500;
			var_163_bool = 0;
			RotatePath(var_164_object, var_162_bool);
			var_185_bool = var_162_bool == 0; //@nz
			if(var_185_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_188_string = "";
				func_1594(var_188_string);
				var_189_string = "";
				func_1596(var_189_string);
				FollowPath(var_164_object, var_150_bool, var_162_bool, var_188_string, var_189_string);
				var_190_bool = var_162_bool == 0; //@nz
				if(var_190_bool != 0) {
					var_191_bool = var_0_bool;
					if(var_191_bool != 0) {
						var_164_object = 0;
						goto Label_1547;
					EMIT "GOTO 0x5f0";
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
							goto Label_1547;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1547;
	}
			var_169_object = 0;
			goto Label_1545;

		Label_1545:
			var_164_object = 0;

		}
		goto Label_1451;
	}
Label_1547:
	var_146_bool = !var_0_bool;
	return 16;
	
}


func_935(var_89_object)
{
	var_95_object = Obj(); var_96_bool = 0; var_97_float = 0;
	var_89_object = var_95_object;
	func_949(var_90_object, var_91_int, var_92_int, var_93_bool, var_94_int, var_89_object, var_95_object, (bool)1, (float)180.0);
	return 0;
}


func_943(var_313_float)
{
	var_313_float = 0.029999999329447746;
	return 0;
}


func_946(var_320_int)
{
	var_320_int = 0;
	return 0;
}


func_949(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_95_object, var_96_bool, var_97_float, var_152_bool)
{
	var_98_bool = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_bool = 0; var_105_cvector = CVector(0,0,0); var_106_float = 0; var_107_float = 0; var_108_bool = 0; var_109_bool = 0; var_110_float = 0; var_111_cvector = CVector(0,0,0); var_112_cvector = CVector(0,0,0); var_113_bool = 0; var_114_bool = 0; var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_float = 0;
	var_1_bool = 0;
	
Label_951:
	var_121_int = var_1_bool + (int)1;
	var_122_int = "attack_begin" + var_121_int;
	HasAnimation(var_108_bool, "all", var_122_int);
	var_123_bool = var_108_bool == 0; //@nz
	if(var_123_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_951;
	}
	var_2_bool = 0;
	
Label_965:
	var_126_int = var_2_bool + (int)1;
	var_127_int = "attack" + var_126_int;
	IsExisting3DSound(var_109_bool, var_127_int);
	var_128_bool = var_109_bool == 0; //@nz
	if(var_128_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_965;

	}
	var_4_object = 0;
	var_131_bool = IsFuncExist(var_95_object, "@GetAttackDistance", (int)1);
	if(var_131_bool != 0) {
		@@var_95_object:GetAttackDistance(var_110_float);
		var_110_float = var_110_float + (int)50;
	} else {
							var_97_float = var_110_float;

	}
	var_134_bool = var_110_float >= (int)150;
	if(var_134_bool != 0) {
		var_110_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_95_object;
	IsPlayerActor(var_0_bool, var_113_bool);
	var_135_bool = var_96_bool;
	if(var_135_bool != 0) {
		var_114_bool = 0;
	} else {
						var_114_bool = 1;

	}
Label_1001:
	var_136_bool = 0;
	var_136_bool = 0;
	var_137_bool = 0; var_138_object = Obj();
	var_138_object = var_0_bool;
	func_1816(var_137_bool, var_138_object);
	if(var_137_bool != 0) {
		var_139_bool = var_3_object == 0; //@nz
		if(var_139_bool != 0) {
			var_136_bool = 1;
		}
	}
	if(var_136_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_111_cvector);
		GetPFPosition(var_112_cvector);
		var_115_cvector = var_111_cvector - var_112_cvector;
		var_116_float = var_115_cvector | var_115_cvector;
		var_141_int = (float)400.0 + var_110_float;
		var_143_int = (float)400.0 + var_110_float;
		var_144_float = var_141_int * var_143_int;
		var_145_bool = var_116_float >= var_144_float;
		if(var_145_bool != 0) {
			var_146_bool = 0; var_147_object = Obj(); var_148_float = 0; var_149_float = 0; var_150_bool = 0; var_151_bool = 0;
			var_147_object = var_0_bool;
			var_110_float = var_148_float;
			TaskCall(6);
			func_1447(var_152_bool, var_153_object, var_146_bool, var_147_object, var_148_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_199_bool = var_152_bool == 0; //@nz
			if(var_199_bool != 0) {
			} else {
		} else {
				var_205_float = var_97_float * var_97_float;
				var_206_bool = var_116_float >= var_205_float;
				if(var_206_bool != 0) {
					var_207_bool = (bool)0 == 0; //@nz
					if(var_207_bool != 0) {
						var_208_object = Obj();
						var_208_object = var_0_bool;
						func_1907(var_208_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_114_bool = 1;
					}
					rand(var_117_float);
					var_219_bool = 0;
					var_221_bool = var_117_float < (float)0.6000000238418579;
					if(var_221_bool != 1) {
						var_222_bool = 0;
						func_1389((bool)1, var_222_bool);
						if(var_222_bool != 1) {
							var_219_bool = 0;
						}
					}
					if(var_219_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_230_bool = 0; var_231_float = 0;
						var_97_float = var_231_float;
						func_1297(var_117_float, var_230_bool, var_231_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_400_bool = 0;
						func_1389(var_117_float, var_400_bool);
						var_401_bool = var_400_bool == 0; //@nz
						if(var_401_bool == 0) goto Label_1127;
						var_402_bool = 0; var_403_object = Obj();
						var_403_object = var_0_bool;
						func_1816(var_402_bool, var_403_object);
						var_404_bool = var_402_bool == 0; //@nz
						if(var_404_bool != 0) {
							goto Label_1137;
						}
						@@@var_0_bool:GetPFPosition(var_111_cvector);
						GetPFPosition(var_112_cvector);
						var_115_cvector = var_111_cvector - var_112_cvector;
						var_116_float = var_115_cvector | var_115_cvector;
						var_405_float = var_97_float * var_97_float;
						var_406_bool = var_116_float < var_405_float;
						if(var_406_bool == 0) goto Label_1127;
						var_407_bool = 0; var_408_float = 0;
						var_97_float = var_408_float;
						func_1193(var_116_float, var_117_float, var_407_bool, var_408_float);
						var_409_bool = var_407_bool == 0; //@nz
						if(var_409_bool == 0) goto Label_1127;
						goto Label_1137;
				}
					var_410_bool = 0; var_411_float = 0;
					var_97_float = var_411_float;
					func_1193(var_116_float, var_117_float, var_410_bool, var_411_float);
					var_412_bool = var_410_bool == 0; //@nz
					if(var_412_bool != 0) {
						goto Label_1137;
					}
					var_114_bool = 1;

				}
			Label_1127:
				goto Label_1136;
		}
		Label_1136:
			goto Label_1001;

		}
	}
Label_1137:
	WaitForAnimEnd();
	var_200_object = var_3_object;
	if(var_200_object != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_203_bool = var_113_bool;
	if(var_203_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_440(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_447(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_1985(var_114_string, var_115_int)
{
	var_116_string = ""; var_117_string = "";
	var_118_int = var_115_int;
	if(var_118_int != 0) {
		"idle" = "idle" + var_115_int;
	}
	var_117_string = var_114_string;
	return 2;
}


func_454(var_90_bool)
{
	var_90_bool = 0;
	return 0;
}


func_1992(var_108_int)
{
	var_109_int = 0; var_110_bool = 0; var_111_int = 0; var_112_bool = 0;
	var_111_int = 0;
	
Label_1994:
	var_114_string = ""; var_115_int = 0;
	var_111_int = var_115_int;
	func_1985(var_114_string, var_115_int);
	HasAnimation(var_112_bool, "all", var_114_string);
	var_119_bool = var_112_bool == 0; //@nz
	if(var_119_bool != 0) {
	} else {
		var_111_int = var_111_int + (int)1;
		goto Label_1994;
	}
	var_111_int = var_108_int;
	return 4;
	
}


func_2009(var_55_int)
{
	var_55_int = 2;
	return 0;
}


func_2012(var_62_object)
{
	var_63_object = Obj();
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_63_object);
	TaskReturn();
	return 0;
}


func_2020(var_53_int, var_54_object)
{
	var_55_bool = 0; var_56_object = Obj();
	var_54_object = var_56_object;
	func_1816(var_55_bool, var_56_object);
	if(var_55_bool != 0) {
		var_53_int = 2;
	} else {
		var_53_int = 0;
	}
	return 0;
	
}


func_2030(var_88_object)
{
	var_89_object = Obj();
	var_88_object = var_89_object;
	TaskCall(5);
	func_935(var_89_object);
	TaskReturn();
	return 0;
}


func_2038(var_51_int, var_52_object)
{
	var_53_int = 0; var_54_object = Obj();
	var_52_object = var_54_object;
	func_2020(var_53_int, var_54_object);
	var_53_int = var_51_int;
	return 0;
}


func_2045(var_87_object)
{
	var_88_object = Obj();
	var_87_object = var_88_object;
	func_2030(var_88_object);
	return 0;
}


