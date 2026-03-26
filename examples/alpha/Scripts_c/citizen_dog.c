// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,FollowPath/5,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,GetProperty/2,SignalDeath/1,IsOverrideActive/1,WorkWithCorpse/1,CanSee/2,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:class|W:littleboy|W:littlegirl|W:wasted_girl|W:woman|W:unosha
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
// @TASK_3: vars=object params=1
// @EVENT_0: op=0x2bd vars=object
// @EVENT_17: op=0x2d1 vars=object
// @EVENT_30: op=0x2e5 vars=object,object
// @EVENT_40: op=0x2ff vars=object
// @EVENT_42: op=0x313 vars=object,string
// @EVENT_41: op=0x334 vars=object
// @EVENT_7: op=0x33d vars=int
// @EVENT_6: op=0x360 vars=
// @TASK_4: vars=object,int,int,bool,int params=1
// @TASK_5: vars=bool,object params=6
// @EVENT_6: op=0x560 vars=
// @EVENT_7: op=0x5cd vars=int
// @EVENT_10: op=0x5df vars=object
// @EVENT_41: op=0x5ea vars=object
// @STANDALONE_EVENT_16: op=0x73e vars=object,string
// @STANDALONE_EVENT_41: op=0x74b vars=object
// @STANDALONE_EVENT_22: op=0x751 vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x118,0x11e,0x124,0x147,0x1b1,0x334,0x367,0x36f,0x372,0x55a,0x5cd,0x5df,0x5ea,0x5f3,0x5fe,0x700,0x707,0x712,0x71b,0x725,0x736,0x74b,0x751,0x771,0x77a,0x782,0x78c,0x794,0x79b,0x7a1,0x7a4,0x7a6,0x7a9,0x7ab,0x7ae,0x815

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1963(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_11_object = var_18_object;
		func_1966(var_18_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1972();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_int, var_13_bool, var_14_object)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1963(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_21_object = Obj();
		var_11_object = var_21_object;
		func_1966(var_21_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1922(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_311(var_13_int);
		}
		var_55_object = Obj();
		var_11_object = var_55_object;
		func_1932(var_55_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_1990(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_65_int = 0; var_66_object = Obj();
		var_11_bool = var_66_object;
		func_1940(var_65_int, var_66_object);
		var_65_int = var_14_int;
		var_98_bool = var_14_int > (int)0;
		if(var_98_bool != 0) {
			var_100_bool = var_14_int > (int)1;
			if(var_100_bool != 0) {
				func_311(var_14_int);
			}
			var_102_object = Obj();
			var_11_bool = var_102_object;
			func_1947(var_102_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1953(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_11_object = Obj();
		func_1956();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1958(var_17_object);
	var_15_int = var_14_int;
	var_19_bool = var_14_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_14_int > (int)1;
		if(var_21_bool != 0) {
			func_311(var_14_int);
		}
		var_23_string = ""; var_24_object = Obj();
		var_12_object = var_23_string;
		var_11_bool = var_24_object;
		func_1961();
	}
	return 2;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_336(var_11_object, var_12_object);
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_336(var_11_object, var_12_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_13_bool = var_11_object != (int)110;
	if(var_13_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_311(var_10_object);
	func_1972();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object);
	var_11_object = Obj();
	func_1867();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1963(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_20_object = Obj();
		var_11_object = var_20_object;
		func_1966(var_20_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1922(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_640();
		}
		var_54_object = Obj();
		var_11_object = var_54_object;
		func_1932(var_54_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_1990(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_65_int = 0; var_66_object = Obj();
		var_11_bool = var_66_object;
		func_1940(var_65_int, var_66_object);
		var_65_int = var_14_int;
		var_98_bool = var_14_int > (int)0;
		if(var_98_bool != 0) {
			var_100_bool = var_14_int > (int)1;
			if(var_100_bool != 0) {
				func_640();
			}
			var_101_object = Obj();
			var_11_bool = var_101_object;
			func_1947(var_101_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1953(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_11_object = Obj();
		func_1956();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1958(var_17_object);
	var_15_int = var_14_int;
	var_19_bool = var_14_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_14_int > (int)1;
		if(var_21_bool != 0) {
			func_640();
		}
		var_22_string = ""; var_23_object = Obj();
		var_12_object = var_22_string;
		var_11_bool = var_23_object;
		func_1961();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_640();
	func_1972();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1963(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_809();
		}
		var_22_object = Obj();
		var_11_object = var_22_object;
		func_1966(var_22_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1922(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_809();
		}
		var_56_object = Obj();
		var_11_object = var_56_object;
		func_1932(var_56_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_1990(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_65_int = 0; var_66_object = Obj();
		var_11_bool = var_66_object;
		func_1940(var_65_int, var_66_object);
		var_65_int = var_14_int;
		var_98_bool = var_14_int > (int)0;
		if(var_98_bool != 0) {
			var_100_bool = var_14_int > (int)1;
			if(var_100_bool != 0) {
				func_809();
			}
			var_103_object = Obj();
			var_11_bool = var_103_object;
			func_1947(var_103_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1953(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_809();
		}
		var_11_object = Obj();
		func_1956();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1958(var_17_object);
	var_15_int = var_14_int;
	var_19_bool = var_14_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_14_int > (int)1;
		if(var_21_bool != 0) {
			func_809();
		}
		var_24_string = ""; var_25_object = Obj();
		var_12_object = var_24_string;
		var_11_bool = var_25_object;
		func_1961();
	}
	return 2;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_809();
	var_11_object = Obj();
	func_1867();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0);
	var_17_bool = var_11_object != (int)111;
	if(var_17_bool != 0) {
		return 4;
	}
	var_18_bool = 0; var_19_object = Obj();
	var_19_object = var_0_bool;
	func_1674(var_18_bool, var_19_object);
	var_52_bool = var_18_bool == 0; //@nz
	if(var_52_bool != 0) {
		func_809();
		return 4;
	}
	GetDirection(var_14_cvector);
	var_55_cvector = CVector(0,0,0); var_56_object = Obj();
	var_56_object = var_0_bool;
	func_1542(var_55_cvector, var_56_object);
	var_55_cvector = var_15_cvector;
	var_61_float = 0; var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0);
	var_14_cvector = var_62_cvector;
	var_15_cvector = var_63_cvector;
	func_1829(var_61_float, var_62_cvector, var_63_cvector);
	var_86_bool = var_61_float < (float)0.4999999701976776;
	if(var_86_bool != 0) {
		var_87_object = Obj();
		var_87_object = var_0_bool;
		func_1765(var_87_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_809();
	func_1972();
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1507(var_10_object);
	func_1972();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_int)
{
	var_13_bool = var_11_int != (int)0;
	if(var_13_bool != 0) {
		return 0;
	}
	var_14_bool = 0; var_15_object = Obj();
	var_15_object = var_1_bool;
	func_1523(var_14_bool, var_15_object);
	var_50_bool = var_14_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_5_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	func_1507(var_11_object);
	var_11_object = Obj();
	func_1867();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_string)
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


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_1846(var_12_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1698(var_16_int, var_17_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	SensePlayerOnly((bool)1);
	func_1973();
	func_163();
	
Label_157:
	var_2_bool = false;
	func_376(var_9_bool, var_10_object);
	goto Label_157;
}
EMIT "Return(); Pop(0)";


func_640()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1792(var_368_float, var_369_float, var_370_float)
{
	var_373_bool = var_369_float < var_370_float;
	if(var_373_bool != 0) {
		var_369_float = var_368_float;
	} else {
		var_370_float = var_368_float;
	}
	return 0;
	
}


func_1922(var_67_int, var_68_object)
{
	var_69_bool = 0; var_70_object = Obj();
	var_68_object = var_70_object;
	func_1674(var_69_bool, var_70_object);
	if(var_69_bool != 0) {
		var_67_int = 2;
	} else {
		var_67_int = 0;
	}
	return 0;
	
}


func_0(var_13_object)
{
	EventDisable(0);
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_33(var_14_object);
	var_13_object = Obj();
	func_2069();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_645(var_0_bool, var_63_object)
{
	var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_bool = 0;
	var_0_bool = var_63_object;
	func_696(var_70_bool);
	GetDirection(var_68_cvector);
	var_78_cvector = CVector(0,0,0); var_79_object = Obj();
	var_79_object = var_0_bool;
	func_1542(var_78_cvector, var_79_object);
	var_78_cvector = var_69_cvector;
	var_84_float = 0; var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0);
	var_68_cvector = var_85_cvector;
	var_69_cvector = var_86_cvector;
	func_1829(var_84_float, var_85_cvector, var_86_cvector);
	var_109_bool = var_84_float < (int)0;
	if(var_109_bool != 0) {
		var_110_object = Obj();
		var_110_object = var_0_bool;
		func_1765(var_110_object);
		var_70_bool = 1;
	} else {
		Sleep((float)1.5, var_70_bool);
	}
	var_119_bool = var_70_bool;
	if(var_119_bool != 0) {
		var_120_object = Obj();
		var_120_object = var_0_bool;
		func_1765(var_120_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_1542(var_55_cvector, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	GetPosition(var_59_cvector);
	@@var_56_object:GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
	return 4;
}


func_1799(var_378_float, var_379_float, var_380_float, var_381_float)
{
	var_382_bool = var_379_float < var_380_float;
	if(var_382_bool != 0) {
		var_380_float = var_378_float;
		return 0;
	}
	var_383_bool = var_379_float > var_381_float;
	if(var_383_bool != 0) {
		var_381_float = var_378_float;
		return 0;
	}
	var_379_float = var_378_float;
	return 0;
}


func_1674(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_17_object = var_21_object;
	func_1638(var_20_bool, var_21_object);
	var_37_bool = var_20_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_17_object = var_39_object;
	func_1557(var_38_bool, var_39_object, "noaccess");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	@@var_17_object:GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == (int)0;
	return 2;
}


func_1932(var_104_object)
{
	var_105_object = Obj();
	var_104_object = var_105_object;
	TaskCall(4);
	func_871(var_105_object);
	TaskReturn();
	return 0;
}


func_1549(var_55_float, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	GetPosition(var_60_cvector);
	@@var_56_object:GetPosition(var_61_cvector);
	var_62_cvector = var_61_cvector - var_60_cvector;
	var_55_float = var_62_cvector | var_62_cvector;
	return 6;
}


func_1810(var_64_float, var_65_cvector, var_66_cvector)
{
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_66_cvector, 0);
	var_69_float = var_67_float * var_68_float;
	var_70_float = GetByIndex(var_65_cvector, 2);
	var_71_float = GetByIndex(var_66_cvector, 2);
	var_72_float = var_70_float * var_71_float;
	var_64_float = var_69_float + var_72_float;
	return 0;
}


func_1530(var_204_string)
{
	var_204_string = "walk";
	return 0;
}


func_1940(var_65_int, var_66_object)
{
	var_67_int = 0; var_68_object = Obj();
	var_66_object = var_68_object;
	func_1922(var_67_int, var_68_object);
	var_67_int = var_65_int;
	return 0;
}


func_2069()
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1557(var_38_bool, var_39_object, var_40_string)
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


func_1306(var_0_bool)
{
	var_277_cvector = CVector(0,0,0); var_278_cvector = CVector(0,0,0); var_279_cvector = CVector(0,0,0); var_280_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_279_cvector);
	GetPFPosition(var_280_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1947(var_103_object)
{
	var_104_object = Obj();
	var_103_object = var_104_object;
	func_1932(var_104_object);
	return 0;
}


func_1819(var_73_float, var_74_cvector)
{
	var_75_float = GetByIndex(var_74_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_77_float = var_75_float * var_76_float;
	var_78_float = GetByIndex(var_74_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_80_float = var_78_float * var_79_float;
	var_81_int = var_77_float + var_80_float;
	var_73_float = sqrt(var_81_int);
	return 0;
}


func_33(var_14_object)
{
	var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_string = ""; var_20_object = Obj(); var_21_bool = 0; var_22_bool = 0; var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_string = ""; var_30_object = Obj(); var_31_bool = 0; var_32_bool = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0);
	var_35_bool = var_14_object == 0; //@ne
	if(var_35_bool != 0) {
		var_36_string = "";
		func_120("fdie");
	} else {
		@@var_14_object:GetPosition(var_25_cvector);
		GetPosition(var_26_cvector);
		GetDirection(var_27_cvector);
		var_28_cvector = var_26_cvector - var_25_cvector;
		var_39_float = GetByIndex(var_28_cvector, 0);
		var_40_float = GetByIndex(var_27_cvector, 0);
		var_41_float = var_39_float * var_40_float;
		var_42_float = GetByIndex(var_28_cvector, 2);
		var_43_float = GetByIndex(var_27_cvector, 2);
		var_44_float = var_42_float * var_43_float;
		var_45_int = var_41_float + var_44_float;
		var_47_bool = var_45_int >= (int)0;
		if(var_47_bool != 0) {
			var_29_string = "fdie";
		} else {
				var_29_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_14_object = var_30_object;
		var_50_bool = IsFuncExist(var_14_object, "GetScriptProperty", (int)2);
		if(var_50_bool != 0) {
			@@var_14_object:HasScriptProperty(var_31_bool, "Owner");
			var_52_bool = var_31_bool;
			if(var_52_bool != 0) {
				@@var_14_object:GetScriptProperty(var_30_object, "Owner");
				var_54_bool = var_30_object == 0; //@ne
				if(var_54_bool != 0) {
					var_14_object = var_30_object;
				}
			}
		}
		var_57_bool = IsFuncExist(var_30_object, "@GetEyesHeight", (int)1);
		if(var_57_bool != 0) {
			@@var_30_object:GetEyesHeight(var_33_float);
			var_34_cvector = CVector(0.0, 0.0, 0.0);
			var_58_float = GetByIndex(var_34_cvector, 1);
			var_33_float = var_58_float;
			SetByIndex(var_34_cvector, 1) = var_58_float;
			LookAsync(var_14_object, "head", var_34_cvector);
			var_32_bool = 1;
		} else {
			var_32_bool = 0;

		}
		PlayAnimation("all", var_29_string);
		WaitForAnimEnd();
		var_61_bool = var_32_bool;
		if(var_61_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_29_string);
		RemoveEnvelope();
		var_30_object = 0;
	}
	return 20;
	
}


func_1953(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_163()
{
	var_13_bool = 0;
	func_1776(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		func_1972();
	}
	return 0;
}


func_1956()
{
	return 0;
}


func_1829(var_61_float, var_62_cvector, var_63_cvector)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	var_62_cvector = var_65_cvector;
	var_63_cvector = var_66_cvector;
	func_1810(var_64_float, var_65_cvector, var_66_cvector);
	var_73_float = 0; var_74_cvector = CVector(0,0,0);
	var_62_cvector = var_74_cvector;
	func_1819(var_73_float, var_74_cvector);
	var_82_float = 0; var_83_cvector = CVector(0,0,0);
	var_63_cvector = var_83_cvector;
	func_1819(var_82_float, var_83_cvector);
	var_84_float = var_73_float * var_82_float;
	var_61_float = var_64_float / var_84_float;
	return 0;
}


func_1958(var_15_int)
{
	var_15_int = 0;
	return 0;
}


func_1569(var_332_float, var_333_object, var_334_float, var_335_int)
{
	var_339_int = 0; var_340_string = ""; var_341_int = 0; var_342_float = 0; var_343_float = 0; var_344_float = 0; var_345_int = 0; var_346_string = ""; var_347_int = 0; var_348_float = 0; var_349_float = 0; var_350_float = 0;
	var_351_bool = 0; var_352_object = Obj(); var_353_string = "";
	var_333_object = var_352_object;
	func_1557(var_351_bool, var_352_object, "health");
	var_354_bool = var_351_bool == 0; //@nz
	if(var_354_bool != 0) {
		var_332_float = 0.0;
		return 12;
	}
	var_355_bool = 0; var_356_object = Obj(); var_357_string = "";
	var_333_object = var_356_object;
	func_1557(var_355_bool, var_356_object, "armor");
	var_358_bool = var_355_bool == 0; //@nz
	if(var_358_bool != 0) {
		var_345_int = 0;
	} else {
			@@var_333_object:GetProperty("armor", var_345_int);
	}
	var_360_string = ""; var_361_int = 0;
	var_335_int = var_361_int;
	func_1534(var_360_string, var_361_int);
	var_346_string = "armor_" + var_360_string;
	var_364_bool = 0; var_365_object = Obj(); var_366_string = "";
	var_333_object = var_365_object;
	var_346_string = var_366_string;
	func_1557(var_364_bool, var_365_object, var_366_string);
	var_367_bool = var_364_bool == 0; //@nz
	if(var_367_bool != 0) {
		var_347_int = 0;
	} else {
		@@var_333_object:GetProperty(var_346_string, var_347_int);

	}
	var_368_float = 0; var_369_float = 0; var_370_float = 0;
	var_371_int = var_345_int + var_347_int;
	var_369_float = var_371_int / (float)100.0;
	func_1792(var_368_float, var_369_float, (float)1);
	var_368_float = var_348_float;
	@@var_333_object:GetProperty("health", var_349_float);
	var_376_int = (int)1 - var_348_float;
	var_350_float = var_334_float * var_376_int;
	var_378_float = 0; var_379_float = 0; var_380_float = 0; var_381_float = 0;
	var_379_float = var_349_float - var_350_float;
	func_1799(var_378_float, var_379_float, (float)0, (float)1);
	@@var_333_object:SetProperty("health", var_378_float);
	var_350_float = var_332_float;
	return 12;
	
}


func_1698(var_15_object, var_16_int)
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


func_1961()
{
	return 0;
}


func_809()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1963(var_14_int)
{
	var_14_int = 2;
	return 0;
}


func_1325(var_0_bool, var_238_bool)
{
	var_239_bool = 0; var_240_bool = 0;
	var_243_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_243_bool != 0) {
		@@@var_0_bool:IsAttacking(var_240_bool);
		var_240_bool = var_238_bool;
		return 2;
	}
	var_238_bool = 0;
	return 2;
}


func_1966(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_1977(var_23_object);
	return 0;
}


func_1972()
{
	return 0;
}


func_1973()
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_1846(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
	return 0;
}


func_311(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_440(var_10_bool, var_11_object);
	return 0;
}


func_440(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_696(var_0_bool)
{
	var_71_object = Obj();
	var_71_object = var_0_bool;
	func_1781(var_71_object);
	return 0;
}


func_1336(var_2_bool, var_4_object)
{
	var_300_float = 0; var_301_int = 0; var_302_float = 0; var_303_int = 0;
	var_304_bool = var_2_bool == 0; //@nz
	if(var_304_bool != 0) {
		return 4;
	}
	var_305_object = var_4_object;
	if(var_305_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_308_bool = var_4_object > (int)0;
		if(var_308_bool != 0) {
			return 4;
		}
	}
	rand(var_302_float);
	var_309_float = 0;
	func_1374(var_309_float);
	var_310_bool = var_302_float < var_309_float;
	if(var_310_bool != 0) {
		irand(var_303_int, var_2_bool);
		var_303_int = var_303_int + (int)1;
		var_313_int = "attack" + var_303_int;
		Speak(var_313_int);
		var_314_int = 0;
		func_1372(var_314_int);
		var_4_object = var_314_int;
	}
	return 4;
}


func_571()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0;
	WaitForAnimEnd();
	var_54_bool = 0;
	func_1776(var_54_bool);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 14;
	}
	func_1888((int)0);
	var_56_int = var_47_int;
	var_48_int = 0;
	
Label_585:
	var_69_bool = 0;
	var_69_bool = 0;
	var_71_bool = var_48_int < (int)5;
	if(var_71_bool != 0) {
		var_72_bool = 0;
		func_1776(var_72_bool);
		if(var_72_bool != 0) {
			var_69_bool = 1;
		}
	}
	if(var_69_bool != 0) {
		irand(var_49_int, (int)3);
		var_75_bool = var_49_int == (int)0;
		if(var_75_bool != 0) {
			var_76_int = var_47_int;
			if(var_76_int == 0) goto Label_618;
			irand(var_50_int, var_47_int);
			var_78_string = ""; var_79_int = 0;
			var_50_int = var_79_int;
			func_1881(var_78_string, var_79_int);
			PlayAnimation("all", var_78_string);
			WaitForAnimEnd(var_51_bool);
			var_80_bool = var_51_bool == 0; //@nz
			if(var_80_bool != 0) {
			} else {
		} else {
				var_83_bool = var_49_int == (int)1;
				if(var_83_bool != 0) {
					rand(var_52_float, (int)4);
					var_86_int = var_52_float + (int)1;
					Sleep(var_86_int, var_53_bool);
					var_87_bool = var_53_bool == 0; //@nz
					if(var_87_bool != 0) {
						goto Label_639;
					}
					goto Label_636;
				}
				var_88_int = var_48_int;
				if(var_88_int == 0) goto Label_636;
				goto Label_639;
		}
		Label_636:
			var_48_int = var_48_int + (int)1;
			goto Label_585;

		}
	}
Label_639:
	return 14;
	
}


func_1209(var_404_bool, var_405_float)
{
	var_406_float = 0; var_407_bool = 0; var_408_float = 0; var_409_bool = 0;
	rand(var_408_float);
	var_410_bool = var_408_float < var_405_float;
	if(var_410_bool != 0) {

	Label_1214:
		IsAnimationPlaying(var_409_bool);
		var_411_bool = var_409_bool == 0; //@nz
		if(var_411_bool != 0) {
		} else {
			var_412_bool = 0;
			func_1273(var_409_bool, var_412_bool);
			if(var_412_bool != 0) {
				var_404_bool = 1;
				sync();
				goto Label_1214;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1231;
	
Label_1231:
	var_404_bool = 0;
	return 4;
	
}


func_1977(var_23_object)
{
	var_24_bool = 0; var_25_bool = 0;
	var_26_bool = GlobalVars[0];
	if(var_26_bool != 0) {
		IsOverrideActive(var_25_bool);
		var_27_bool = var_25_bool == 0; //@nz
		if(var_27_bool != 0) {
			WorkWithCorpse(var_23_object);
		}
		return 2;
	}
	return 2;
}


func_447(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_319(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_447(var_15_bool, var_16_int);
	return 0;
}


func_1090(var_0_bool, var_318_float, var_319_int)
{
	var_320_object = Obj(); var_321_float = 0; var_322_float = 0; var_323_object = Obj(); var_324_float = 0; var_325_float = 0;
	var_327_float = var_318_float * (float)0.8999999761581421;
	GetVictim(var_327_float, var_323_object);
	ReportAttack(var_0_bool);
	var_328_bool = var_323_object == var_0_bool;
	if(var_328_bool != 0) {
		var_329_float = 0; var_330_object = Obj(); var_331_int = 0;
		var_323_object = var_330_object;
		var_319_int = var_331_int;
		func_879(var_331_int);
		var_329_float = var_324_float;
		var_332_float = 0; var_333_object = Obj(); var_334_float = 0; var_335_int = 0;
		var_323_object = var_333_object;
		var_324_float = var_334_float;
		var_336_int = 0; var_337_object = Obj(); var_338_int = 0;
		var_323_object = var_337_object;
		var_319_int = var_338_int;
		func_882(var_338_int);
		var_336_int = var_335_int;
		func_1569(var_332_float, var_333_object, var_334_float, var_335_int);
		var_332_float = var_325_float;
		var_385_int = 0;
		func_1368(var_385_int);
		ReportHit(var_0_bool, var_385_int, var_325_float, var_324_float);
		var_386_object = Obj(); var_387_float = 0;
		var_323_object = var_386_object;
		var_325_float = var_387_float;
		func_1370();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1988(var_56_bool)
{
	var_56_bool = 0;
	return 0;
}


func_1990(var_15_bool, var_16_object, var_17_object)
{
	var_18_string = ""; var_19_bool = 0; var_20_string = ""; var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_17_object = var_23_object;
	func_1557(var_22_bool, var_23_object, "class");
	var_31_bool = var_22_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	@@var_17_object:GetProperty("class", var_20_string);
	var_33_bool = 0;
	var_33_bool = 0;
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_bool = 0;
	var_38_bool = 0;
	var_40_bool = var_20_string != "littleboy";
	if(var_40_bool != 0) {
		var_42_bool = var_20_string != "littlegirl";
		if(var_42_bool != 0) {
			var_38_bool = 1;
		}
	}
	if(var_38_bool != 0) {
		var_44_bool = var_20_string != "boy";
		if(var_44_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_46_bool = var_20_string != "girl";
		if(var_46_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_48_bool = var_20_string != "wasted_girl";
		if(var_48_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_50_bool = var_20_string != "woman";
		if(var_50_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_52_bool = var_20_string != "unosha";
		if(var_52_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_21_bool, var_16_object);
	var_53_bool = 0;
	var_53_bool = 1;
	var_54_bool = var_21_bool;
	if(var_54_bool != 1) {
		var_55_float = 0; var_56_object = Obj();
		var_16_object = var_56_object;
		func_1549(var_55_float, var_56_object);
		var_64_bool = var_55_float <= (float)250000.0;
		if(var_64_bool != 1) {
			var_53_bool = 0;
		}
	}
	if(var_53_bool != 0) {
		var_15_bool = 1;
		return 4;
	}
	var_15_bool = 0;
	return 4;
}


func_454(var_38_bool)
{
	var_38_bool = 0;
	return 0;
}


func_336(var_2_bool, var_12_object)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_12_object = var_18_object;
	func_1674(var_17_bool, var_18_object);
	var_51_bool = var_17_bool == 0; //@nz
	if(var_51_bool != 0) {
		return 4;
	}
	var_52_bool = var_2_bool;
	if(var_52_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_12_object, var_15_bool);
	var_53_bool = var_15_bool == 0; //@nz
	if(var_53_bool != 0) {
		return 4;
	}
	var_54_int = 0; var_55_object = Obj();
	var_12_object = var_55_object;
	func_1905(var_55_object);
	var_54_int = var_16_int;
	var_58_bool = var_16_int > (int)0;
	if(var_58_bool != 0) {
		var_60_bool = var_16_int > (int)1;
		if(var_60_bool != 0) {
			func_319(var_16_int);
		}
		var_62_object = Obj();
		var_12_object = var_62_object;
		func_1914(var_62_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1233(var_0_bool, var_246_bool, var_247_float)
{
	var_248_bool = 0; var_249_cvector = CVector(0,0,0); var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_float = 0; var_253_bool = 0; var_254_cvector = CVector(0,0,0); var_255_cvector = CVector(0,0,0); var_256_cvector = CVector(0,0,0); var_257_float = 0;
	
Label_1234:
	IsAnimationPlaying(var_253_bool);
	var_258_bool = var_253_bool == 0; //@nz
	if(var_258_bool != 0) {
	} else {
		var_259_bool = 0;
		func_1273(var_257_float, var_259_bool);
		if(var_259_bool != 0) {
			var_246_bool = 1;
			return 10;
		}
		var_284_bool = 0; var_285_object = Obj();
		var_285_object = var_0_bool;
		func_1674(var_284_bool, var_285_object);
		var_286_bool = var_284_bool == 0; //@nz
		if(var_286_bool != 0) {
			var_246_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_254_cvector);
		GetPFPosition(var_255_cvector);
		var_256_cvector = var_254_cvector - var_255_cvector;
		var_257_float = var_256_cvector | var_256_cvector;
		var_287_float = var_247_float * var_247_float;
		var_288_bool = var_257_float < var_287_float;
		if(var_288_bool != 0) {
			var_289_bool = 0; var_290_float = 0;
			var_247_float = var_290_float;
			func_1129(var_256_cvector, var_257_float, var_289_bool, var_290_float);
			var_246_bool = 1;
			sync();
			goto Label_1234;
		}
		return 10;
	}
	var_246_bool = 0;
	return 10;
	
}


func_1368(var_385_int)
{
	var_385_int = 0;
	return 0;
}


func_1881(var_62_string, var_63_int)
{
	var_64_string = ""; var_65_string = "";
	var_66_int = var_63_int;
	if(var_66_int != 0) {
		"idle" = "idle" + var_63_int;
	}
	var_65_string = var_62_string;
	return 2;
}


func_1370()
{
	return 0;
}


func_1372(var_314_int)
{
	var_314_int = 1;
	return 0;
}


func_120(var_36_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_36_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_36_string);
	RemoveEnvelope();
	return 0;
}


func_1374(var_309_float)
{
	var_309_float = 0.5;
	return 0;
}


func_1888(var_56_int)
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0;
	var_59_int = 0;
	
Label_1890:
	var_62_string = ""; var_63_int = 0;
	var_59_int = var_63_int;
	func_1881(var_62_string, var_63_int);
	HasAnimation(var_60_bool, "all", var_62_string);
	var_67_bool = var_60_bool == 0; //@nz
	if(var_67_bool != 0) {
	} else {
		var_59_int = var_59_int + (int)1;
		goto Label_1890;
	}
	var_59_int = var_56_int;
	return 4;
	
}


func_1633(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
}


func_1507(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1765(var_87_object)
{
	var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0);
	@@var_87_object:GetPosition(var_91_cvector);
	GetPosition(var_92_cvector);
	var_93_cvector = var_91_cvector - var_92_cvector;
	var_94_float = GetByIndex(var_93_cvector, 0);
	var_95_float = GetByIndex(var_93_cvector, 2);
	RotateAsync(var_94_float, var_95_float);
	return 6;
}


func_1638(var_20_bool, var_21_object)
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
		func_1633(var_31_bool, var_32_object);
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


func_1383(var_0_bool, var_1_bool, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool)
{
	var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj(); var_178_bool = 0; var_179_bool = 0; var_180_object = Obj(); var_181_cvector = CVector(0,0,0); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_float = 0; var_185_object = Obj();
	var_0_bool = false;
	var_1_bool = var_163_object;
	var_167_bool = var_179_bool;
	
Label_1387:
	var_186_bool = 0; var_187_object = Obj();
	var_163_object = var_187_object;
	func_1523(var_186_bool, var_187_object);
	var_190_bool = var_186_bool == 0; //@nz
	if(var_190_bool != 0) {
		var_162_bool = 0;
		return 16;
	}
	@@var_163_object:GetPosition(var_181_cvector);
	GetPosition(var_182_cvector);
	var_183_cvector = var_181_cvector - var_182_cvector;
	var_184_float = var_183_cvector | var_183_cvector;
	var_191_bool = 0;
	var_191_bool = 0;
	var_193_bool = var_165_float > (int)0;
	if(var_193_bool != 0) {
		var_194_float = var_165_float * var_165_float;
		var_195_bool = var_184_float > var_194_float;
		if(var_195_bool != 0) {
			var_191_bool = 1;
		}
	}
	if(var_191_bool != 0) {
		Stop();
		var_162_bool = 0;
		return 16;
	}
	var_196_float = var_164_float * var_164_float;
	var_197_bool = var_184_float > var_196_float;
	if(var_197_bool != 0) {
		@@var_163_object:GetPFPosition(var_181_cvector);
		FindPathTo(var_185_object, var_181_cvector);
		var_198_bool = var_185_object != 0; //@nn
		if(var_198_bool != 0) {
			var_185_object = var_180_object;
			var_185_object = 0;
		}
		var_199_bool = var_180_object != 0; //@nn
		if(var_199_bool != 0) {
			var_200_bool = var_179_bool;
			if(var_200_bool == 0) goto Label_1436;
			var_179_bool = 0;
			RotatePath(var_180_object, var_178_bool);
			var_201_bool = var_178_bool == 0; //@nz
			if(var_201_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_204_string = "";
				func_1530(var_204_string);
				var_205_string = "";
				func_1532(var_205_string);
				FollowPath(var_180_object, var_166_bool, var_178_bool, var_204_string, var_205_string);
				var_206_bool = var_178_bool == 0; //@nz
				if(var_206_bool != 0) {
					var_207_bool = var_0_bool;
					if(var_207_bool != 0) {
						var_180_object = 0;
						goto Label_1483;
					EMIT "GOTO 0x5b0";
					}
				} else {
					var_180_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_178_bool);
					var_210_bool = var_178_bool == 0; //@nz
					if(var_210_bool != 0) {
						var_211_bool = var_0_bool;
						if(var_211_bool != 0) {
							var_180_object = 0;
							goto Label_1483;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1483;
	}
			var_185_object = 0;
			goto Label_1481;

		Label_1481:
			var_180_object = 0;

		}
		goto Label_1387;
	}
Label_1483:
	var_162_bool = !var_0_bool;
	return 16;
	
}


func_871(var_105_object)
{
	var_111_object = Obj(); var_112_bool = 0; var_113_float = 0;
	var_105_object = var_111_object;
	func_885(var_106_object, var_107_int, var_108_int, var_109_bool, var_110_int, var_105_object, var_111_object, (bool)1, (float)180.0);
	return 0;
}


func_1129(var_0_bool, var_1_bool, var_289_bool, var_290_float)
{
	var_291_int = 0; var_292_bool = 0; var_293_int = 0; var_294_bool = 0;
	irand(var_293_int, var_1_bool);
	var_293_int = var_293_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_299_int = "attack_begin" + var_293_int;
	PlayAnimation("all", var_299_int);
	WaitForAnimEnd();
	func_1336(var_293_int, var_294_bool);
	var_315_bool = 0; var_316_object = Obj();
	var_316_object = var_0_bool;
	func_1674(var_315_bool, var_316_object);
	var_317_bool = var_315_bool == 0; //@nz
	if(var_317_bool != 0) {
		StopAsync();
		var_289_bool = 0;
		return 4;
	}
	var_318_float = 0; var_319_int = 0;
	var_290_float = var_318_float;
	var_293_int = var_319_int;
	func_1090(var_294_bool, var_318_float, var_319_int);
	var_390_int = "attack_middle" + var_293_int;
	HasAnimation(var_294_bool, "all", var_390_int);
	var_391_bool = var_294_bool;
	if(var_391_bool != 0) {
		var_394_int = "attack_middle" + var_293_int;
		PlayAnimation("all", var_394_int);
		WaitForAnimEnd();
		var_395_bool = 0; var_396_object = Obj();
		var_396_object = var_0_bool;
		func_1674(var_395_bool, var_396_object);
		var_397_bool = var_395_bool == 0; //@nz
		if(var_397_bool != 0) {
			StopAsync();
			var_289_bool = 0;
			return 4;
		}
		var_398_float = 0; var_399_int = 0;
		var_290_float = var_398_float;
		var_293_int = var_399_int;
		func_1090(var_294_bool, var_398_float, var_399_int);
	}
	SetAttackState((bool)0);
	var_403_int = "attack_end" + var_293_int;
	PlayAnimation("all", var_403_int);
	var_404_bool = 0; var_405_float = 0;
	func_1209(var_404_bool, (float)0.75);
	StopAsync();
	var_289_bool = 1;
	return 4;
}


func_879(var_329_float)
{
	var_329_float = 0.20000000298023224;
	return 0;
}


func_1776(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_1905(var_54_int)
{
	var_56_bool = 0;
	func_1988(var_56_bool);
	if(var_56_bool != 0) {
		var_54_int = 2;
	} else {
		var_54_int = 0;
	}
	return 0;
	
}


func_882(var_336_int)
{
	var_336_int = 0;
	return 0;
}


func_1523(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1674(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
	return 0;
}


func_1781(var_71_object)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0; var_75_cvector = CVector(0,0,0);
	@@var_71_object:GetEyesHeight(var_74_float);
	var_75_cvector = CVector(0.0, 0.0, 0.0);
	var_76_float = GetByIndex(var_75_cvector, 1);
	var_74_float = var_76_float;
	SetByIndex(var_75_cvector, 1) = var_76_float;
	LookAsync(var_71_object, "head", var_75_cvector);
	return 4;
}


func_885(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_111_object, var_112_bool, var_113_float, var_168_bool)
{
	var_114_bool = 0; var_115_bool = 0; var_116_float = 0; var_117_cvector = CVector(0,0,0); var_118_cvector = CVector(0,0,0); var_119_bool = 0; var_120_bool = 0; var_121_cvector = CVector(0,0,0); var_122_float = 0; var_123_float = 0; var_124_bool = 0; var_125_bool = 0; var_126_float = 0; var_127_cvector = CVector(0,0,0); var_128_cvector = CVector(0,0,0); var_129_bool = 0; var_130_bool = 0; var_131_cvector = CVector(0,0,0); var_132_float = 0; var_133_float = 0;
	var_1_bool = 0;
	
Label_887:
	var_137_int = var_1_bool + (int)1;
	var_138_int = "attack_begin" + var_137_int;
	HasAnimation(var_124_bool, "all", var_138_int);
	var_139_bool = var_124_bool == 0; //@nz
	if(var_139_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_887;
	}
	var_2_bool = 0;
	
Label_901:
	var_142_int = var_2_bool + (int)1;
	var_143_int = "attack" + var_142_int;
	IsExisting3DSound(var_125_bool, var_143_int);
	var_144_bool = var_125_bool == 0; //@nz
	if(var_144_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_901;

	}
	var_4_object = 0;
	var_147_bool = IsFuncExist(var_111_object, "@GetAttackDistance", (int)1);
	if(var_147_bool != 0) {
		@@var_111_object:GetAttackDistance(var_126_float);
		var_126_float = var_126_float + (int)50;
	} else {
							var_113_float = var_126_float;

	}
	var_150_bool = var_126_float >= (int)150;
	if(var_150_bool != 0) {
		var_126_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_111_object;
	IsPlayerActor(var_0_bool, var_129_bool);
	var_151_bool = var_112_bool;
	if(var_151_bool != 0) {
		var_130_bool = 0;
	} else {
						var_130_bool = 1;

	}
Label_937:
	var_152_bool = 0;
	var_152_bool = 0;
	var_153_bool = 0; var_154_object = Obj();
	var_154_object = var_0_bool;
	func_1674(var_153_bool, var_154_object);
	if(var_153_bool != 0) {
		var_155_bool = var_3_object == 0; //@nz
		if(var_155_bool != 0) {
			var_152_bool = 1;
		}
	}
	if(var_152_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_127_cvector);
		GetPFPosition(var_128_cvector);
		var_131_cvector = var_127_cvector - var_128_cvector;
		var_132_float = var_131_cvector | var_131_cvector;
		var_157_int = (float)400.0 + var_126_float;
		var_159_int = (float)400.0 + var_126_float;
		var_160_float = var_157_int * var_159_int;
		var_161_bool = var_132_float >= var_160_float;
		if(var_161_bool != 0) {
			var_162_bool = 0; var_163_object = Obj(); var_164_float = 0; var_165_float = 0; var_166_bool = 0; var_167_bool = 0;
			var_163_object = var_0_bool;
			var_126_float = var_164_float;
			TaskCall(5);
			func_1383(var_168_bool, var_169_object, var_162_bool, var_163_object, var_164_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_215_bool = var_168_bool == 0; //@nz
			if(var_215_bool != 0) {
			} else {
		} else {
				var_221_float = var_113_float * var_113_float;
				var_222_bool = var_132_float >= var_221_float;
				if(var_222_bool != 0) {
					var_223_bool = (bool)0 == 0; //@nz
					if(var_223_bool != 0) {
						var_224_object = Obj();
						var_224_object = var_0_bool;
						func_1765(var_224_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_130_bool = 1;
					}
					rand(var_133_float);
					var_235_bool = 0;
					var_237_bool = var_133_float < (float)0.6000000238418579;
					if(var_237_bool != 1) {
						var_238_bool = 0;
						func_1325((bool)1, var_238_bool);
						if(var_238_bool != 1) {
							var_235_bool = 0;
						}
					}
					if(var_235_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_246_bool = 0; var_247_float = 0;
						var_113_float = var_247_float;
						func_1233(var_133_float, var_246_bool, var_247_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_416_bool = 0;
						func_1325(var_133_float, var_416_bool);
						var_417_bool = var_416_bool == 0; //@nz
						if(var_417_bool == 0) goto Label_1063;
						var_418_bool = 0; var_419_object = Obj();
						var_419_object = var_0_bool;
						func_1674(var_418_bool, var_419_object);
						var_420_bool = var_418_bool == 0; //@nz
						if(var_420_bool != 0) {
							goto Label_1073;
						}
						@@@var_0_bool:GetPFPosition(var_127_cvector);
						GetPFPosition(var_128_cvector);
						var_131_cvector = var_127_cvector - var_128_cvector;
						var_132_float = var_131_cvector | var_131_cvector;
						var_421_float = var_113_float * var_113_float;
						var_422_bool = var_132_float < var_421_float;
						if(var_422_bool == 0) goto Label_1063;
						var_423_bool = 0; var_424_float = 0;
						var_113_float = var_424_float;
						func_1129(var_132_float, var_133_float, var_423_bool, var_424_float);
						var_425_bool = var_423_bool == 0; //@nz
						if(var_425_bool == 0) goto Label_1063;
						goto Label_1073;
				}
					var_426_bool = 0; var_427_float = 0;
					var_113_float = var_427_float;
					func_1129(var_132_float, var_133_float, var_426_bool, var_427_float);
					var_428_bool = var_426_bool == 0; //@nz
					if(var_428_bool != 0) {
						goto Label_1073;
					}
					var_130_bool = 1;

				}
			Label_1063:
				goto Label_1072;
		}
		Label_1072:
			goto Label_937;

		}
	}
Label_1073:
	WaitForAnimEnd();
	var_216_object = var_3_object;
	if(var_216_object != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_219_bool = var_129_bool;
	if(var_219_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_376(var_0_bool, var_1_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_float = 0; var_21_bool = 0; var_22_object = Obj(); var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_float = 0; var_28_bool = 0; var_29_object = Obj(); var_30_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_24_float, (float)0.5);
	Sleep(var_24_float);
	
Label_384:
	var_32_bool = var_0_bool == 0; //@nz
	if(var_32_bool != 0) {
		var_33_bool = var_1_bool == 0; //@nz
		if(var_33_bool != 0) {

		Label_388:
			GetPosition(var_26_cvector);
			GetCameraFarDistance(var_27_float);
			var_27_float = var_27_float * (float)2.5;
			GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, var_27_float, var_28_bool);
			var_35_bool = var_28_bool;
			if(var_35_bool != 0) {
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
	FindShiftedPathTo(var_29_object, var_25_cvector);
	var_36_bool = var_29_object != 0; //@nn
	if(var_36_bool != 0) {
		RotatePath(var_29_object, var_30_bool);
		var_37_bool = var_30_bool;
		if(var_37_bool != 0) {
			var_38_bool = 0;
			func_454(var_38_bool);
			FollowPath(var_29_object, var_38_bool, var_30_bool);
			var_29_object = 0;
			var_39_bool = var_30_bool;
			if(var_39_bool != 0) {
				TaskCall(2);
				func_571();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_29_object = 0;
	goto Label_384;
	
}


func_1273(var_0_bool, var_259_bool)
{
	var_260_cvector = CVector(0,0,0); var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_float = 0; var_264_float = 0; var_265_cvector = CVector(0,0,0); var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_float = 0; var_269_float = 0;
	var_270_bool = 0; var_271_object = Obj();
	var_271_object = var_0_bool;
	func_1674(var_270_bool, var_271_object);
	var_272_bool = var_270_bool == 0; //@nz
	if(var_272_bool != 0) {
		var_259_bool = 0;
		return 10;
	}
	var_273_bool = 0;
	func_1325(var_269_float, var_273_bool);
	if(var_273_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_265_cvector);
		GetPFPosition(var_266_cvector);
		var_267_cvector = var_265_cvector - var_266_cvector;
		var_268_float = var_267_cvector | var_267_cvector;
		@@@var_0_bool:GetAttackDistance(var_269_float);
		var_269_float = var_269_float + (int)50;
		var_275_float = var_269_float * var_269_float;
		var_276_bool = var_268_float <= var_275_float;
		if(var_276_bool != 0) {
			func_1306(var_269_float);
			var_259_bool = 1;
			return 10;
		}
	}
	var_259_bool = 0;
	return 10;
}


func_1914(var_62_object)
{
	var_63_object = Obj();
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_64_object, var_63_object);
	TaskReturn();
	return 0;
}


func_1532(var_205_string)
{
	var_205_string = "run";
	return 0;
}


func_1534(var_360_string, var_361_int)
{
	var_363_bool = var_361_int == (int)1;
	if(var_363_bool != 0) {
		var_360_string = "fire";
		return 0;
	}
	var_360_string = "phys";
	return 0;
}


