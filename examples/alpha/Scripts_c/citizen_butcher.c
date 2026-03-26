// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,FollowPath/5,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,GetGameTime/1,GetProperty/2,SignalDeath/1,Trace/1,GetInvItemByName/2,AddItem/4,IsOverrideActive/1,WorkWithCorpse/1,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:class|W:littleboy|W:littlegirl|W:wasted_girl|W:woman|W:butcher
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
// @STANDALONE_EVENT_16: op=0x747 vars=object,string
// @STANDALONE_EVENT_41: op=0x754 vars=object
// @STANDALONE_EVENT_22: op=0x75a vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x118,0x11e,0x124,0x147,0x1b1,0x334,0x367,0x36f,0x372,0x55a,0x5cd,0x5df,0x5ea,0x5f3,0x5fe,0x700,0x707,0x712,0x71b,0x725,0x73f,0x754,0x75a,0x77a,0x783,0x78b,0x795,0x79d,0x7a4,0x7aa,0x7ad,0x7af,0x7b2,0x7b4,0x7b7,0x8f7

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1972(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_11_object = var_18_object;
		func_1975(var_18_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1981();
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
	func_1972(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_21_object = Obj();
		var_11_object = var_21_object;
		func_1975(var_21_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1931(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_311(var_13_int);
		}
		var_55_object = Obj();
		var_11_object = var_55_object;
		func_1941(var_55_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_2213(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_66_int = 0; var_67_object = Obj();
		var_11_bool = var_67_object;
		func_1949(var_66_int, var_67_object);
		var_66_int = var_14_int;
		var_99_bool = var_14_int > (int)0;
		if(var_99_bool != 0) {
			var_101_bool = var_14_int > (int)1;
			if(var_101_bool != 0) {
				func_311(var_14_int);
			}
			var_103_object = Obj();
			var_11_bool = var_103_object;
			func_1956(var_103_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1962(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_11_object = Obj();
		func_1965();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1967(var_17_object);
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
		func_1970();
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
	func_1981();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object);
	var_11_object = Obj();
	func_1876();
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
	func_1972(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_20_object = Obj();
		var_11_object = var_20_object;
		func_1975(var_20_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1931(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_640();
		}
		var_54_object = Obj();
		var_11_object = var_54_object;
		func_1941(var_54_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_2213(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_66_int = 0; var_67_object = Obj();
		var_11_bool = var_67_object;
		func_1949(var_66_int, var_67_object);
		var_66_int = var_14_int;
		var_99_bool = var_14_int > (int)0;
		if(var_99_bool != 0) {
			var_101_bool = var_14_int > (int)1;
			if(var_101_bool != 0) {
				func_640();
			}
			var_102_object = Obj();
			var_11_bool = var_102_object;
			func_1956(var_102_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1962(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_11_object = Obj();
		func_1965();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1967(var_17_object);
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
		func_1970();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_640();
	func_1981();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1972(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_809();
		}
		var_22_object = Obj();
		var_11_object = var_22_object;
		func_1975(var_22_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1931(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_809();
		}
		var_56_object = Obj();
		var_11_object = var_56_object;
		func_1941(var_56_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_2213(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_66_int = 0; var_67_object = Obj();
		var_11_bool = var_67_object;
		func_1949(var_66_int, var_67_object);
		var_66_int = var_14_int;
		var_99_bool = var_14_int > (int)0;
		if(var_99_bool != 0) {
			var_101_bool = var_14_int > (int)1;
			if(var_101_bool != 0) {
				func_809();
			}
			var_104_object = Obj();
			var_11_bool = var_104_object;
			func_1956(var_104_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1962(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_809();
		}
		var_11_object = Obj();
		func_1965();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1967(var_17_object);
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
		func_1970();
	}
	return 2;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_809();
	var_11_object = Obj();
	func_1876();
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
	func_1981();
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1507(var_10_object);
	func_1981();
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
	func_1876();
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
	func_1855(var_12_object);
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
	func_2192();
	func_163();
	
Label_157:
	var_2_bool = false;
	func_376(var_9_bool, var_10_object);
	goto Label_157;
}
EMIT "Return(); Pop(0)";


func_0(var_13_object)
{
	EventDisable(0);
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_33(var_14_object);
	var_13_object = Obj();
	func_2295();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1542(var_55_cvector, var_56_object)
{
	var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_cvector = CVector(0,0,0);
	GetPosition(var_59_cvector);
	@@var_56_object:GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
	return 4;
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


func_1569(var_333_float, var_334_object, var_335_float, var_336_int)
{
	var_340_int = 0; var_341_string = ""; var_342_int = 0; var_343_float = 0; var_344_float = 0; var_345_float = 0; var_346_int = 0; var_347_string = ""; var_348_int = 0; var_349_float = 0; var_350_float = 0; var_351_float = 0;
	var_352_bool = 0; var_353_object = Obj(); var_354_string = "";
	var_334_object = var_353_object;
	func_1557(var_352_bool, var_353_object, "health");
	var_355_bool = var_352_bool == 0; //@nz
	if(var_355_bool != 0) {
		var_333_float = 0.0;
		return 12;
	}
	var_356_bool = 0; var_357_object = Obj(); var_358_string = "";
	var_334_object = var_357_object;
	func_1557(var_356_bool, var_357_object, "armor");
	var_359_bool = var_356_bool == 0; //@nz
	if(var_359_bool != 0) {
		var_346_int = 0;
	} else {
			@@var_334_object:GetProperty("armor", var_346_int);
	}
	var_361_string = ""; var_362_int = 0;
	var_336_int = var_362_int;
	func_1534(var_361_string, var_362_int);
	var_347_string = "armor_" + var_361_string;
	var_365_bool = 0; var_366_object = Obj(); var_367_string = "";
	var_334_object = var_366_object;
	var_347_string = var_367_string;
	func_1557(var_365_bool, var_366_object, var_367_string);
	var_368_bool = var_365_bool == 0; //@nz
	if(var_368_bool != 0) {
		var_348_int = 0;
	} else {
		@@var_334_object:GetProperty(var_347_string, var_348_int);

	}
	var_369_float = 0; var_370_float = 0; var_371_float = 0;
	var_372_int = var_346_int + var_348_int;
	var_370_float = var_372_int / (float)100.0;
	func_1792(var_369_float, var_370_float, (float)1);
	var_369_float = var_349_float;
	@@var_334_object:GetProperty("health", var_350_float);
	var_377_int = (int)1 - var_349_float;
	var_351_float = var_335_float * var_377_int;
	var_379_float = 0; var_380_float = 0; var_381_float = 0; var_382_float = 0;
	var_380_float = var_350_float - var_351_float;
	func_1799(var_379_float, var_380_float, (float)0, (float)1);
	@@var_334_object:SetProperty("health", var_379_float);
	var_351_float = var_333_float;
	return 12;
	
}


func_571()
{
	var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_bool = 0; var_162_float = 0; var_163_bool = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_bool = 0; var_169_float = 0; var_170_bool = 0;
	WaitForAnimEnd();
	var_171_bool = 0;
	func_1776(var_171_bool);
	var_172_bool = var_171_bool == 0; //@nz
	if(var_172_bool != 0) {
		return 14;
	}
	func_1897((int)0);
	var_173_int = var_164_int;
	var_165_int = 0;
	
Label_585:
	var_186_bool = 0;
	var_186_bool = 0;
	var_188_bool = var_165_int < (int)5;
	if(var_188_bool != 0) {
		var_189_bool = 0;
		func_1776(var_189_bool);
		if(var_189_bool != 0) {
			var_186_bool = 1;
		}
	}
	if(var_186_bool != 0) {
		irand(var_166_int, (int)3);
		var_192_bool = var_166_int == (int)0;
		if(var_192_bool != 0) {
			var_193_int = var_164_int;
			if(var_193_int == 0) goto Label_618;
			irand(var_167_int, var_164_int);
			var_195_string = ""; var_196_int = 0;
			var_167_int = var_196_int;
			func_1890(var_195_string, var_196_int);
			PlayAnimation("all", var_195_string);
			WaitForAnimEnd(var_168_bool);
			var_197_bool = var_168_bool == 0; //@nz
			if(var_197_bool != 0) {
			} else {
		} else {
				var_200_bool = var_166_int == (int)1;
				if(var_200_bool != 0) {
					rand(var_169_float, (int)4);
					var_203_int = var_169_float + (int)1;
					Sleep(var_203_int, var_170_bool);
					var_204_bool = var_170_bool == 0; //@nz
					if(var_204_bool != 0) {
						goto Label_639;
					}
					goto Label_636;
				}
				var_205_int = var_165_int;
				if(var_205_int == 0) goto Label_636;
				goto Label_639;
		}
		Label_636:
			var_165_int = var_165_int + (int)1;
			goto Label_585;

		}
	}
Label_639:
	return 14;
	
}


func_1090(var_0_bool, var_319_float, var_320_int)
{
	var_321_object = Obj(); var_322_float = 0; var_323_float = 0; var_324_object = Obj(); var_325_float = 0; var_326_float = 0;
	var_328_float = var_319_float * (float)0.8999999761581421;
	GetVictim(var_328_float, var_324_object);
	ReportAttack(var_0_bool);
	var_329_bool = var_324_object == var_0_bool;
	if(var_329_bool != 0) {
		var_330_float = 0; var_331_object = Obj(); var_332_int = 0;
		var_324_object = var_331_object;
		var_320_int = var_332_int;
		func_879(var_332_int);
		var_330_float = var_325_float;
		var_333_float = 0; var_334_object = Obj(); var_335_float = 0; var_336_int = 0;
		var_324_object = var_334_object;
		var_325_float = var_335_float;
		var_337_int = 0; var_338_object = Obj(); var_339_int = 0;
		var_324_object = var_338_object;
		var_320_int = var_339_int;
		func_882(var_339_int);
		var_337_int = var_336_int;
		func_1569(var_333_float, var_334_object, var_335_float, var_336_int);
		var_333_float = var_326_float;
		var_386_int = 0;
		func_1368(var_386_int);
		ReportHit(var_0_bool, var_386_int, var_326_float, var_325_float);
		var_387_object = Obj(); var_388_float = 0;
		var_324_object = var_387_object;
		var_326_float = var_388_float;
		func_1370();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_1633(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
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


func_1129(var_0_bool, var_1_bool, var_290_bool, var_291_float)
{
	var_292_int = 0; var_293_bool = 0; var_294_int = 0; var_295_bool = 0;
	irand(var_294_int, var_1_bool);
	var_294_int = var_294_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_300_int = "attack_begin" + var_294_int;
	PlayAnimation("all", var_300_int);
	WaitForAnimEnd();
	func_1336(var_294_int, var_295_bool);
	var_316_bool = 0; var_317_object = Obj();
	var_317_object = var_0_bool;
	func_1674(var_316_bool, var_317_object);
	var_318_bool = var_316_bool == 0; //@nz
	if(var_318_bool != 0) {
		StopAsync();
		var_290_bool = 0;
		return 4;
	}
	var_319_float = 0; var_320_int = 0;
	var_291_float = var_319_float;
	var_294_int = var_320_int;
	func_1090(var_295_bool, var_319_float, var_320_int);
	var_391_int = "attack_middle" + var_294_int;
	HasAnimation(var_295_bool, "all", var_391_int);
	var_392_bool = var_295_bool;
	if(var_392_bool != 0) {
		var_395_int = "attack_middle" + var_294_int;
		PlayAnimation("all", var_395_int);
		WaitForAnimEnd();
		var_396_bool = 0; var_397_object = Obj();
		var_397_object = var_0_bool;
		func_1674(var_396_bool, var_397_object);
		var_398_bool = var_396_bool == 0; //@nz
		if(var_398_bool != 0) {
			StopAsync();
			var_290_bool = 0;
			return 4;
		}
		var_399_float = 0; var_400_int = 0;
		var_291_float = var_399_float;
		var_294_int = var_400_int;
		func_1090(var_295_bool, var_399_float, var_400_int);
	}
	SetAttackState((bool)0);
	var_404_int = "attack_end" + var_294_int;
	PlayAnimation("all", var_404_int);
	var_405_bool = 0; var_406_float = 0;
	func_1209(var_405_bool, (float)0.75);
	StopAsync();
	var_290_bool = 1;
	return 4;
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


func_640()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


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


func_2187(var_51_int, var_52_string)
{
	var_53_int = 0; var_54_int = 0;
	GetInvItemByName(var_54_int, var_52_string);
	var_54_int = var_51_int;
	return 2;
}


func_2192()
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_13_bool = 0;
	func_2012((bool)1);
	return 0;
}


func_2200(var_23_object)
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


func_163()
{
	var_130_bool = 0;
	func_1776(var_130_bool);
	var_133_bool = var_130_bool == 0; //@nz
	if(var_133_bool != 0) {
		func_1981();
	}
	return 0;
}


func_2211(var_56_bool)
{
	var_56_bool = 0;
	return 0;
}


func_2213(var_15_bool, var_16_object, var_17_object)
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
		var_52_bool = var_20_string != "butcher";
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
		ReportReputationChange(var_16_object, var_17_object, (float)-0.30000001192092896);
		var_15_bool = 1;
		return 4;
	}
	var_15_bool = 0;
	return 4;
}


func_696(var_0_bool)
{
	var_71_object = Obj();
	var_71_object = var_0_bool;
	func_1781(var_71_object);
	return 0;
}


func_1209(var_405_bool, var_406_float)
{
	var_407_float = 0; var_408_bool = 0; var_409_float = 0; var_410_bool = 0;
	rand(var_409_float);
	var_411_bool = var_409_float < var_406_float;
	if(var_411_bool != 0) {

	Label_1214:
		IsAnimationPlaying(var_410_bool);
		var_412_bool = var_410_bool == 0; //@nz
		if(var_412_bool != 0) {
		} else {
			var_413_bool = 0;
			func_1273(var_410_bool, var_413_bool);
			if(var_413_bool != 0) {
				var_405_bool = 1;
				sync();
				goto Label_1214;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1231;
	
Label_1231:
	var_405_bool = 0;
	return 4;
	
}


func_1233(var_0_bool, var_247_bool, var_248_float)
{
	var_249_bool = 0; var_250_cvector = CVector(0,0,0); var_251_cvector = CVector(0,0,0); var_252_cvector = CVector(0,0,0); var_253_float = 0; var_254_bool = 0; var_255_cvector = CVector(0,0,0); var_256_cvector = CVector(0,0,0); var_257_cvector = CVector(0,0,0); var_258_float = 0;
	
Label_1234:
	IsAnimationPlaying(var_254_bool);
	var_259_bool = var_254_bool == 0; //@nz
	if(var_259_bool != 0) {
	} else {
		var_260_bool = 0;
		func_1273(var_258_float, var_260_bool);
		if(var_260_bool != 0) {
			var_247_bool = 1;
			return 10;
		}
		var_285_bool = 0; var_286_object = Obj();
		var_286_object = var_0_bool;
		func_1674(var_285_bool, var_286_object);
		var_287_bool = var_285_bool == 0; //@nz
		if(var_287_bool != 0) {
			var_247_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_255_cvector);
		GetPFPosition(var_256_cvector);
		var_257_cvector = var_255_cvector - var_256_cvector;
		var_258_float = var_257_cvector | var_257_cvector;
		var_288_float = var_248_float * var_248_float;
		var_289_bool = var_258_float < var_288_float;
		if(var_289_bool != 0) {
			var_290_bool = 0; var_291_float = 0;
			var_248_float = var_291_float;
			func_1129(var_257_cvector, var_258_float, var_290_bool, var_291_float);
			var_247_bool = 1;
			sync();
			goto Label_1234;
		}
		return 10;
	}
	var_247_bool = 0;
	return 10;
	
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


func_1776(var_130_bool)
{
	var_131_bool = 0; var_132_bool = 0;
	IsLoaded(var_132_bool);
	var_132_bool = var_130_bool;
	return 2;
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


func_2295()
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1273(var_0_bool, var_260_bool)
{
	var_261_cvector = CVector(0,0,0); var_262_cvector = CVector(0,0,0); var_263_cvector = CVector(0,0,0); var_264_float = 0; var_265_float = 0; var_266_cvector = CVector(0,0,0); var_267_cvector = CVector(0,0,0); var_268_cvector = CVector(0,0,0); var_269_float = 0; var_270_float = 0;
	var_271_bool = 0; var_272_object = Obj();
	var_272_object = var_0_bool;
	func_1674(var_271_bool, var_272_object);
	var_273_bool = var_271_bool == 0; //@nz
	if(var_273_bool != 0) {
		var_260_bool = 0;
		return 10;
	}
	var_274_bool = 0;
	func_1325(var_270_float, var_274_bool);
	if(var_274_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_266_cvector);
		GetPFPosition(var_267_cvector);
		var_268_cvector = var_266_cvector - var_267_cvector;
		var_269_float = var_268_cvector | var_268_cvector;
		@@@var_0_bool:GetAttackDistance(var_270_float);
		var_270_float = var_270_float + (int)50;
		var_276_float = var_270_float * var_270_float;
		var_277_bool = var_269_float <= var_276_float;
		if(var_277_bool != 0) {
			func_1306(var_270_float);
			var_260_bool = 1;
			return 10;
		}
	}
	var_260_bool = 0;
	return 10;
}


func_1792(var_369_float, var_370_float, var_371_float)
{
	var_374_bool = var_370_float < var_371_float;
	if(var_374_bool != 0) {
		var_370_float = var_369_float;
	} else {
		var_371_float = var_369_float;
	}
	return 0;
	
}


func_1799(var_379_float, var_380_float, var_381_float, var_382_float)
{
	var_383_bool = var_380_float < var_381_float;
	if(var_383_bool != 0) {
		var_381_float = var_379_float;
		return 0;
	}
	var_384_bool = var_380_float > var_382_float;
	if(var_384_bool != 0) {
		var_382_float = var_379_float;
		return 0;
	}
	var_380_float = var_379_float;
	return 0;
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


func_1306(var_0_bool)
{
	var_278_cvector = CVector(0,0,0); var_279_cvector = CVector(0,0,0); var_280_cvector = CVector(0,0,0); var_281_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_280_cvector);
	GetPFPosition(var_281_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
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


func_809()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1325(var_0_bool, var_239_bool)
{
	var_240_bool = 0; var_241_bool = 0;
	var_244_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_244_bool != 0) {
		@@@var_0_bool:IsAttacking(var_241_bool);
		var_241_bool = var_239_bool;
		return 2;
	}
	var_239_bool = 0;
	return 2;
}


func_1846(var_22_int)
{
	var_23_float = 0; var_24_float = 0;
	GetGameTime(var_24_float);
	var_26_int = 0;
	var_26_int = var_24_float / (int)24;
	var_22_int = (int)1 + var_26_int;
	return 2;
}


func_311(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_440(var_10_bool, var_11_object);
	return 0;
}


func_1336(var_2_bool, var_4_object)
{
	var_301_float = 0; var_302_int = 0; var_303_float = 0; var_304_int = 0;
	var_305_bool = var_2_bool == 0; //@nz
	if(var_305_bool != 0) {
		return 4;
	}
	var_306_object = var_4_object;
	if(var_306_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_309_bool = var_4_object > (int)0;
		if(var_309_bool != 0) {
			return 4;
		}
	}
	rand(var_303_float);
	var_310_float = 0;
	func_1374(var_310_float);
	var_311_bool = var_303_float < var_310_float;
	if(var_311_bool != 0) {
		irand(var_304_int, var_2_bool);
		var_304_int = var_304_int + (int)1;
		var_314_int = "attack" + var_304_int;
		Speak(var_314_int);
		var_315_int = 0;
		func_1372(var_315_int);
		var_4_object = var_315_int;
	}
	return 4;
}


func_319(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_447(var_15_bool, var_16_int);
	return 0;
}


func_1855(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
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
	func_1914(var_55_object);
	var_54_int = var_16_int;
	var_58_bool = var_16_int > (int)0;
	if(var_58_bool != 0) {
		var_60_bool = var_16_int > (int)1;
		if(var_60_bool != 0) {
			func_319(var_16_int);
		}
		var_62_object = Obj();
		var_12_object = var_62_object;
		func_1923(var_62_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1368(var_386_int)
{
	var_386_int = 0;
	return 0;
}


func_1370()
{
	return 0;
}


func_1372(var_315_int)
{
	var_315_int = 1;
	return 0;
}


func_1374(var_310_float)
{
	var_310_float = 0.5;
	return 0;
}


func_1890(var_179_string, var_180_int)
{
	var_181_string = ""; var_182_string = "";
	var_183_int = var_180_int;
	if(var_183_int != 0) {
		"idle" = "idle" + var_180_int;
	}
	var_182_string = var_179_string;
	return 2;
}


func_1383(var_0_bool, var_1_bool, var_163_bool, var_164_object, var_165_float, var_166_float, var_167_bool, var_168_bool)
{
	var_171_bool = 0; var_172_bool = 0; var_173_object = Obj(); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_float = 0; var_178_object = Obj(); var_179_bool = 0; var_180_bool = 0; var_181_object = Obj(); var_182_cvector = CVector(0,0,0); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_float = 0; var_186_object = Obj();
	var_0_bool = false;
	var_1_bool = var_164_object;
	var_168_bool = var_180_bool;
	
Label_1387:
	var_187_bool = 0; var_188_object = Obj();
	var_164_object = var_188_object;
	func_1523(var_187_bool, var_188_object);
	var_191_bool = var_187_bool == 0; //@nz
	if(var_191_bool != 0) {
		var_163_bool = 0;
		return 16;
	}
	@@var_164_object:GetPosition(var_182_cvector);
	GetPosition(var_183_cvector);
	var_184_cvector = var_182_cvector - var_183_cvector;
	var_185_float = var_184_cvector | var_184_cvector;
	var_192_bool = 0;
	var_192_bool = 0;
	var_194_bool = var_166_float > (int)0;
	if(var_194_bool != 0) {
		var_195_float = var_166_float * var_166_float;
		var_196_bool = var_185_float > var_195_float;
		if(var_196_bool != 0) {
			var_192_bool = 1;
		}
	}
	if(var_192_bool != 0) {
		Stop();
		var_163_bool = 0;
		return 16;
	}
	var_197_float = var_165_float * var_165_float;
	var_198_bool = var_185_float > var_197_float;
	if(var_198_bool != 0) {
		@@var_164_object:GetPFPosition(var_182_cvector);
		FindPathTo(var_186_object, var_182_cvector);
		var_199_bool = var_186_object != 0; //@nn
		if(var_199_bool != 0) {
			var_186_object = var_181_object;
			var_186_object = 0;
		}
		var_200_bool = var_181_object != 0; //@nn
		if(var_200_bool != 0) {
			var_201_bool = var_180_bool;
			if(var_201_bool == 0) goto Label_1436;
			var_180_bool = 0;
			RotatePath(var_181_object, var_179_bool);
			var_202_bool = var_179_bool == 0; //@nz
			if(var_202_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_205_string = "";
				func_1530(var_205_string);
				var_206_string = "";
				func_1532(var_206_string);
				FollowPath(var_181_object, var_167_bool, var_179_bool, var_205_string, var_206_string);
				var_207_bool = var_179_bool == 0; //@nz
				if(var_207_bool != 0) {
					var_208_bool = var_0_bool;
					if(var_208_bool != 0) {
						var_181_object = 0;
						goto Label_1483;
					EMIT "GOTO 0x5b0";
					}
				} else {
					var_181_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_179_bool);
					var_211_bool = var_179_bool == 0; //@nz
					if(var_211_bool != 0) {
						var_212_bool = var_0_bool;
						if(var_212_bool != 0) {
							var_181_object = 0;
							goto Label_1483;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1483;
	}
			var_186_object = 0;
			goto Label_1481;

		Label_1481:
			var_181_object = 0;

		}
		goto Label_1387;
	}
Label_1483:
	var_163_bool = !var_0_bool;
	return 16;
	
}


func_871(var_106_object)
{
	var_112_object = Obj(); var_113_bool = 0; var_114_float = 0;
	var_106_object = var_112_object;
	func_885(var_107_object, var_108_int, var_109_int, var_110_bool, var_111_int, var_106_object, var_112_object, (bool)1, (float)180.0);
	return 0;
}


func_1897(var_173_int)
{
	var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_bool = 0;
	var_176_int = 0;
	
Label_1899:
	var_179_string = ""; var_180_int = 0;
	var_176_int = var_180_int;
	func_1890(var_179_string, var_180_int);
	HasAnimation(var_177_bool, "all", var_179_string);
	var_184_bool = var_177_bool == 0; //@nz
	if(var_184_bool != 0) {
	} else {
		var_176_int = var_176_int + (int)1;
		goto Label_1899;
	}
	var_176_int = var_173_int;
	return 4;
	
}


func_879(var_330_float)
{
	var_330_float = 0.05000000074505806;
	return 0;
}


func_882(var_337_int)
{
	var_337_int = 0;
	return 0;
}


func_885(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_112_object, var_113_bool, var_114_float, var_169_bool)
{
	var_115_bool = 0; var_116_bool = 0; var_117_float = 0; var_118_cvector = CVector(0,0,0); var_119_cvector = CVector(0,0,0); var_120_bool = 0; var_121_bool = 0; var_122_cvector = CVector(0,0,0); var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_bool = 0; var_127_float = 0; var_128_cvector = CVector(0,0,0); var_129_cvector = CVector(0,0,0); var_130_bool = 0; var_131_bool = 0; var_132_cvector = CVector(0,0,0); var_133_float = 0; var_134_float = 0;
	var_1_bool = 0;
	
Label_887:
	var_138_int = var_1_bool + (int)1;
	var_139_int = "attack_begin" + var_138_int;
	HasAnimation(var_125_bool, "all", var_139_int);
	var_140_bool = var_125_bool == 0; //@nz
	if(var_140_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_887;
	}
	var_2_bool = 0;
	
Label_901:
	var_143_int = var_2_bool + (int)1;
	var_144_int = "attack" + var_143_int;
	IsExisting3DSound(var_126_bool, var_144_int);
	var_145_bool = var_126_bool == 0; //@nz
	if(var_145_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_901;

	}
	var_4_object = 0;
	var_148_bool = IsFuncExist(var_112_object, "@GetAttackDistance", (int)1);
	if(var_148_bool != 0) {
		@@var_112_object:GetAttackDistance(var_127_float);
		var_127_float = var_127_float + (int)50;
	} else {
							var_114_float = var_127_float;

	}
	var_151_bool = var_127_float >= (int)150;
	if(var_151_bool != 0) {
		var_127_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_112_object;
	IsPlayerActor(var_0_bool, var_130_bool);
	var_152_bool = var_113_bool;
	if(var_152_bool != 0) {
		var_131_bool = 0;
	} else {
						var_131_bool = 1;

	}
Label_937:
	var_153_bool = 0;
	var_153_bool = 0;
	var_154_bool = 0; var_155_object = Obj();
	var_155_object = var_0_bool;
	func_1674(var_154_bool, var_155_object);
	if(var_154_bool != 0) {
		var_156_bool = var_3_object == 0; //@nz
		if(var_156_bool != 0) {
			var_153_bool = 1;
		}
	}
	if(var_153_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_128_cvector);
		GetPFPosition(var_129_cvector);
		var_132_cvector = var_128_cvector - var_129_cvector;
		var_133_float = var_132_cvector | var_132_cvector;
		var_158_int = (float)400.0 + var_127_float;
		var_160_int = (float)400.0 + var_127_float;
		var_161_float = var_158_int * var_160_int;
		var_162_bool = var_133_float >= var_161_float;
		if(var_162_bool != 0) {
			var_163_bool = 0; var_164_object = Obj(); var_165_float = 0; var_166_float = 0; var_167_bool = 0; var_168_bool = 0;
			var_164_object = var_0_bool;
			var_127_float = var_165_float;
			TaskCall(5);
			func_1383(var_169_bool, var_170_object, var_163_bool, var_164_object, var_165_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_216_bool = var_169_bool == 0; //@nz
			if(var_216_bool != 0) {
			} else {
		} else {
				var_222_float = var_114_float * var_114_float;
				var_223_bool = var_133_float >= var_222_float;
				if(var_223_bool != 0) {
					var_224_bool = (bool)0 == 0; //@nz
					if(var_224_bool != 0) {
						var_225_object = Obj();
						var_225_object = var_0_bool;
						func_1765(var_225_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_131_bool = 1;
					}
					rand(var_134_float);
					var_236_bool = 0;
					var_238_bool = var_134_float < (float)0.6000000238418579;
					if(var_238_bool != 1) {
						var_239_bool = 0;
						func_1325((bool)1, var_239_bool);
						if(var_239_bool != 1) {
							var_236_bool = 0;
						}
					}
					if(var_236_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_247_bool = 0; var_248_float = 0;
						var_114_float = var_248_float;
						func_1233(var_134_float, var_247_bool, var_248_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_417_bool = 0;
						func_1325(var_134_float, var_417_bool);
						var_418_bool = var_417_bool == 0; //@nz
						if(var_418_bool == 0) goto Label_1063;
						var_419_bool = 0; var_420_object = Obj();
						var_420_object = var_0_bool;
						func_1674(var_419_bool, var_420_object);
						var_421_bool = var_419_bool == 0; //@nz
						if(var_421_bool != 0) {
							goto Label_1073;
						}
						@@@var_0_bool:GetPFPosition(var_128_cvector);
						GetPFPosition(var_129_cvector);
						var_132_cvector = var_128_cvector - var_129_cvector;
						var_133_float = var_132_cvector | var_132_cvector;
						var_422_float = var_114_float * var_114_float;
						var_423_bool = var_133_float < var_422_float;
						if(var_423_bool == 0) goto Label_1063;
						var_424_bool = 0; var_425_float = 0;
						var_114_float = var_425_float;
						func_1129(var_133_float, var_134_float, var_424_bool, var_425_float);
						var_426_bool = var_424_bool == 0; //@nz
						if(var_426_bool == 0) goto Label_1063;
						goto Label_1073;
				}
					var_427_bool = 0; var_428_float = 0;
					var_114_float = var_428_float;
					func_1129(var_133_float, var_134_float, var_427_bool, var_428_float);
					var_429_bool = var_427_bool == 0; //@nz
					if(var_429_bool != 0) {
						goto Label_1073;
					}
					var_131_bool = 1;

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
	var_217_object = var_3_object;
	if(var_217_object != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_220_bool = var_130_bool;
	if(var_220_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_376(var_0_bool, var_1_bool)
{
	var_134_float = 0; var_135_cvector = CVector(0,0,0); var_136_cvector = CVector(0,0,0); var_137_float = 0; var_138_bool = 0; var_139_object = Obj(); var_140_bool = 0; var_141_float = 0; var_142_cvector = CVector(0,0,0); var_143_cvector = CVector(0,0,0); var_144_float = 0; var_145_bool = 0; var_146_object = Obj(); var_147_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_141_float, (float)0.5);
	Sleep(var_141_float);
	
Label_384:
	var_149_bool = var_0_bool == 0; //@nz
	if(var_149_bool != 0) {
		var_150_bool = var_1_bool == 0; //@nz
		if(var_150_bool != 0) {

		Label_388:
			GetPosition(var_143_cvector);
			GetCameraFarDistance(var_144_float);
			var_144_float = var_144_float * (float)2.5;
			GetRandomPFPointInCircle(var_142_cvector, var_143_cvector, var_144_float, var_145_bool);
			var_152_bool = var_145_bool;
			if(var_152_bool != 0) {
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
	FindShiftedPathTo(var_146_object, var_142_cvector);
	var_153_bool = var_146_object != 0; //@nn
	if(var_153_bool != 0) {
		RotatePath(var_146_object, var_147_bool);
		var_154_bool = var_147_bool;
		if(var_154_bool != 0) {
			var_155_bool = 0;
			func_454(var_155_bool);
			FollowPath(var_146_object, var_155_bool, var_147_bool);
			var_146_object = 0;
			var_156_bool = var_147_bool;
			if(var_156_bool != 0) {
				TaskCall(2);
				func_571();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_146_object = 0;
	goto Label_384;
	
}


func_1914(var_54_int)
{
	var_56_bool = 0;
	func_2211(var_56_bool);
	if(var_56_bool != 0) {
		var_54_int = 2;
	} else {
		var_54_int = 0;
	}
	return 0;
	
}


func_1923(var_62_object)
{
	var_63_object = Obj();
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_64_object, var_63_object);
	TaskReturn();
	return 0;
}


func_1931(var_68_int, var_69_object)
{
	var_70_bool = 0; var_71_object = Obj();
	var_69_object = var_71_object;
	func_1674(var_70_bool, var_71_object);
	if(var_70_bool != 0) {
		var_68_int = 2;
	} else {
		var_68_int = 0;
	}
	return 0;
	
}


func_1941(var_105_object)
{
	var_106_object = Obj();
	var_105_object = var_106_object;
	TaskCall(4);
	func_871(var_106_object);
	TaskReturn();
	return 0;
}


func_1949(var_66_int, var_67_object)
{
	var_68_int = 0; var_69_object = Obj();
	var_67_object = var_69_object;
	func_1931(var_68_int, var_69_object);
	var_68_int = var_66_int;
	return 0;
}


func_1956(var_104_object)
{
	var_105_object = Obj();
	var_104_object = var_105_object;
	func_1941(var_105_object);
	return 0;
}


func_1962(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_1965()
{
	return 0;
}


func_1967(var_15_int)
{
	var_15_int = 0;
	return 0;
}


func_1970()
{
	return 0;
}


func_1972(var_14_int)
{
	var_14_int = 2;
	return 0;
}


func_1975(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_2200(var_23_object);
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


func_1981()
{
	return 0;
}


func_1982(var_19_int, var_20_int)
{
	var_30_int = 0; var_31_int = 0; var_32_int = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_bool = 0;
	var_38_bool = var_19_int > var_20_int;
	if(var_38_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_40_bool = var_19_int != var_20_int;
	if(var_40_bool != 0) {
		var_41_int = var_20_int - var_19_int;
		irand(var_35_int, var_41_int);
	} else {
		var_47_bool = var_19_int == (int)0;
		if(var_47_bool == 0) goto Label_2000;
		return 8;
	}
Label_2000:
	(int)0 = (int)0 + var_19_int;
	var_43_bool = var_34_int == (int)0;
	if(var_43_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_36_int, "Money");
	AddItem(var_37_bool, var_36_int, (int)0, var_34_int);
	return 8;
	
}


func_447(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	Stop();
	StopGroup0();
	return 0;
}


func_454(var_155_bool)
{
	var_155_bool = 0;
	return 0;
}


func_2012(var_13_bool)
{
	var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_18_bool = var_13_bool;
	if(var_18_bool != 0) {
		var_19_int = 0; var_20_int = 0;
		var_22_int = 0;
		func_1846(var_22_int);
		var_29_float = var_22_int * (int)100;
		var_20_int = (int)100 + var_29_float;
		func_1982((int)0, var_20_int);
		irand(var_16_int, (int)9);
		var_50_bool = var_16_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = 0; var_52_string = "";
			func_2187(var_51_int, "lemon");
			AddItem(var_17_bool, var_51_int, (int)0, (int)1);
		} else {
			var_58_bool = var_16_int == (int)1;
			if(var_58_bool != 0) {
				var_59_int = 0; var_60_string = "";
				func_2187(var_59_int, "rusk");
				AddItem(var_17_bool, var_59_int, (int)0, (int)1);
				goto Label_2100;
			}
			var_64_bool = var_16_int == (int)2;
			if(var_64_bool != 0) {
				var_65_int = 0; var_66_string = "";
				func_2187(var_65_int, "hook");
				AddItem(var_17_bool, var_65_int, (int)0, (int)1);
				goto Label_2100;
			}
			var_70_bool = var_16_int == (int)4;
			if(var_70_bool != 0) {
				var_71_int = 0; var_72_string = "";
				func_2187(var_71_int, "syringe");
				AddItem(var_17_bool, var_71_int, (int)0, (int)1);
				goto Label_2100;
			}
			var_76_bool = var_16_int == (int)5;
			if(var_76_bool != 0) {
				var_77_int = 0; var_78_string = "";
				func_2187(var_77_int, "watch");
				AddItem(var_17_bool, var_77_int, (int)0, (int)1);
				goto Label_2100;
			}
			var_82_bool = var_16_int == (int)6;
			if(var_82_bool == 0) goto Label_2100;
			var_83_int = 0; var_84_string = "";
			func_2187(var_83_int, "razor");
			AddItem(var_17_bool, var_83_int, (int)0, (int)1);
	}
		var_87_int = 0; var_88_int = 0;
		var_90_int = 0;
		func_1846(var_90_int);
		var_92_float = var_90_int * (int)50;
		var_88_int = (int)50 + var_92_float;
		func_1982((int)0, var_88_int);
		irand(var_16_int, (int)8);
		var_95_bool = var_16_int == (int)0;
		if(var_95_bool != 0) {
			var_96_int = 0; var_97_string = "";
			func_2187(var_96_int, "beads");
			AddItem(var_17_bool, var_96_int, (int)0, (int)1);
			goto Label_2186;
		}
		var_101_bool = var_16_int == (int)1;
		if(var_101_bool != 0) {
			var_102_int = 0; var_103_string = "";
			func_2187(var_102_int, "bracelet");
			AddItem(var_17_bool, var_102_int, (int)0, (int)1);
			goto Label_2186;
		}
		var_107_bool = var_16_int == (int)2;
		if(var_107_bool != 0) {
			var_108_int = 0; var_109_string = "";
			func_2187(var_108_int, "ear_ring");
			AddItem(var_17_bool, var_108_int, (int)0, (int)1);
			goto Label_2186;
		}
		var_113_bool = var_16_int == (int)3;
		if(var_113_bool != 0) {
			var_114_int = 0; var_115_string = "";
			func_2187(var_114_int, "gold_ring");
			AddItem(var_17_bool, var_114_int, (int)0, (int)1);
			goto Label_2186;
		}
		var_119_bool = var_16_int == (int)4;
		if(var_119_bool != 0) {
			var_120_int = 0; var_121_string = "";
			func_2187(var_120_int, "silver_ring");
			AddItem(var_17_bool, var_120_int, (int)0, (int)1);
			goto Label_2186;
		}
		var_125_bool = var_16_int == (int)5;
		if(var_125_bool == 0) goto Label_2186;
		var_126_int = 0; var_127_string = "";
		func_2187(var_126_int, "flower");
		AddItem(var_17_bool, var_126_int, (int)0, (int)1);
	}
Label_2100:
	goto Label_2186;
	
Label_2186:
	return 4;
	
}


func_1507(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
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


func_1530(var_205_string)
{
	var_205_string = "walk";
	return 0;
}


func_1532(var_206_string)
{
	var_206_string = "run";
	return 0;
}


func_1534(var_361_string, var_362_int)
{
	var_364_bool = var_362_int == (int)1;
	if(var_364_bool != 0) {
		var_361_string = "fire";
		return 0;
	}
	var_361_string = "phys";
	return 0;
}


