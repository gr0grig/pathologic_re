// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,rand/1,Face/1,SetSpeed/1,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,FindPathTo/2,FollowPath/5,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,GetProperty/2,SignalDeath/1,IsOverrideActive/1,WorkWithCorpse/1,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:idle
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
// @STANDALONE_EVENT_16: op=0x736 vars=object,string
// @STANDALONE_EVENT_41: op=0x743 vars=object
// @STANDALONE_EVENT_22: op=0x749 vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x118,0x11e,0x124,0x147,0x1b1,0x334,0x367,0x36f,0x372,0x55a,0x5cd,0x5df,0x5ea,0x5f3,0x5fe,0x6f8,0x6ff,0x70a,0x713,0x71d,0x72e,0x743,0x749,0x769,0x772,0x77a,0x784,0x78c,0x793,0x799,0x79c,0x79e,0x7a1,0x7a3,0x7a6,0x7be,0x7c1

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1955(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_11_object = var_18_object;
		func_1958(var_18_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1964();
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
	func_1955(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_21_object = Obj();
		var_11_object = var_21_object;
		func_1958(var_21_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1914(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_311(var_13_int);
		}
		var_55_object = Obj();
		var_11_object = var_55_object;
		func_1924(var_55_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_1982(var_17_object);
	if(var_15_bool != 0) {
		var_18_int = 0; var_19_object = Obj();
		var_11_bool = var_19_object;
		func_1932(var_18_int, var_19_object);
		var_18_int = var_14_int;
		var_57_bool = var_14_int > (int)0;
		if(var_57_bool != 0) {
			var_59_bool = var_14_int > (int)1;
			if(var_59_bool != 0) {
				func_311(var_14_int);
			}
			var_61_object = Obj();
			var_11_bool = var_61_object;
			func_1939(var_61_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1945(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_11_object = Obj();
		func_1948();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1950(var_17_object);
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
		func_1953();
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
	func_1964();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_311(var_11_object);
	var_11_object = Obj();
	func_1859();
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
	func_1955(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_20_object = Obj();
		var_11_object = var_20_object;
		func_1958(var_20_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1914(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_640();
		}
		var_54_object = Obj();
		var_11_object = var_54_object;
		func_1924(var_54_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_1982(var_17_object);
	if(var_15_bool != 0) {
		var_18_int = 0; var_19_object = Obj();
		var_11_bool = var_19_object;
		func_1932(var_18_int, var_19_object);
		var_18_int = var_14_int;
		var_57_bool = var_14_int > (int)0;
		if(var_57_bool != 0) {
			var_59_bool = var_14_int > (int)1;
			if(var_59_bool != 0) {
				func_640();
			}
			var_60_object = Obj();
			var_11_bool = var_60_object;
			func_1939(var_60_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1945(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_11_object = Obj();
		func_1948();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1950(var_17_object);
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
		func_1953();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_640();
	func_1964();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1955(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_809();
		}
		var_22_object = Obj();
		var_11_object = var_22_object;
		func_1958(var_22_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1914(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_809();
		}
		var_56_object = Obj();
		var_11_object = var_56_object;
		func_1924(var_56_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_bool = var_16_object;
	var_12_object = var_17_object;
	func_1982(var_17_object);
	if(var_15_bool != 0) {
		var_18_int = 0; var_19_object = Obj();
		var_11_bool = var_19_object;
		func_1932(var_18_int, var_19_object);
		var_18_int = var_14_int;
		var_57_bool = var_14_int > (int)0;
		if(var_57_bool != 0) {
			var_59_bool = var_14_int > (int)1;
			if(var_59_bool != 0) {
				func_809();
			}
			var_62_object = Obj();
			var_11_bool = var_62_object;
			func_1939(var_62_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1945(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_809();
		}
		var_11_object = Obj();
		func_1948();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_int, var_8_int, var_9_bool, var_10_int, var_11_bool, var_12_object)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_object = var_16_string;
	var_11_bool = var_17_object;
	func_1950(var_17_object);
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
		func_1953();
	}
	return 2;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_int, var_7_int, var_8_bool, var_9_int, var_10_bool, var_11_object)
{
	func_809();
	var_11_object = Obj();
	func_1859();
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
	func_1666(var_18_bool, var_19_object);
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
	func_1821(var_61_float, var_62_cvector, var_63_cvector);
	var_86_bool = var_61_float < (float)0.4999999701976776;
	if(var_86_bool != 0) {
		var_87_object = Obj();
		var_87_object = var_0_bool;
		func_1757(var_87_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_809();
	func_1964();
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	func_1507(var_10_object);
	func_1964();
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
	func_1859();
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
	func_1838(var_12_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1690(var_16_int, var_17_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_int, var_6_int, var_7_bool, var_8_int, var_9_bool, var_10_object)
{
	SensePlayerOnly((bool)1);
	func_1965();
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


func_0(var_13_object)
{
	EventDisable(0);
	var_14_object = Obj();
	var_13_object = var_14_object;
	func_33(var_14_object);
	var_13_object = Obj();
	func_1985();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1666(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_17_object = var_21_object;
	func_1630(var_20_bool, var_21_object);
	var_37_bool = var_20_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_17_object = var_39_object;
	func_1549(var_38_bool, var_39_object, "noaccess");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	@@var_17_object:GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == (int)0;
	return 2;
}


func_1924(var_63_object)
{
	var_64_object = Obj();
	var_63_object = var_64_object;
	TaskCall(4);
	func_871(var_64_object);
	TaskReturn();
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
	func_1821(var_84_float, var_85_cvector, var_86_cvector);
	var_109_bool = var_84_float < (int)0;
	if(var_109_bool != 0) {
		var_110_object = Obj();
		var_110_object = var_0_bool;
		func_1757(var_110_object);
		var_70_bool = 1;
	} else {
		Sleep((float)1.5, var_70_bool);
	}
	var_119_bool = var_70_bool;
	if(var_119_bool != 0) {
		var_120_object = Obj();
		var_120_object = var_0_bool;
		func_1757(var_120_object);
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


func_1802(var_64_float, var_65_cvector, var_66_cvector)
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


func_1932(var_18_int, var_19_object)
{
	var_20_int = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_1914(var_20_int, var_21_object);
	var_20_int = var_18_int;
	return 0;
}


func_1549(var_38_bool, var_39_object, var_40_string)
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


func_1784(var_327_float, var_328_float, var_329_float)
{
	var_332_bool = var_328_float < var_329_float;
	if(var_332_bool != 0) {
		var_328_float = var_327_float;
	} else {
		var_329_float = var_327_float;
	}
	return 0;
	
}


func_1530(var_163_string)
{
	var_163_string = "walk";
	return 0;
}


func_1939(var_62_object)
{
	var_63_object = Obj();
	var_62_object = var_63_object;
	func_1924(var_63_object);
	return 0;
}


func_1811(var_73_float, var_74_cvector)
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


func_1945(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_1690(var_15_object, var_16_int)
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


func_1561(var_291_float, var_292_object, var_293_float, var_294_int)
{
	var_298_int = 0; var_299_string = ""; var_300_int = 0; var_301_float = 0; var_302_float = 0; var_303_float = 0; var_304_int = 0; var_305_string = ""; var_306_int = 0; var_307_float = 0; var_308_float = 0; var_309_float = 0;
	var_310_bool = 0; var_311_object = Obj(); var_312_string = "";
	var_292_object = var_311_object;
	func_1549(var_310_bool, var_311_object, "health");
	var_313_bool = var_310_bool == 0; //@nz
	if(var_313_bool != 0) {
		var_291_float = 0.0;
		return 12;
	}
	var_314_bool = 0; var_315_object = Obj(); var_316_string = "";
	var_292_object = var_315_object;
	func_1549(var_314_bool, var_315_object, "armor");
	var_317_bool = var_314_bool == 0; //@nz
	if(var_317_bool != 0) {
		var_304_int = 0;
	} else {
			@@var_292_object:GetProperty("armor", var_304_int);
	}
	var_319_string = ""; var_320_int = 0;
	var_294_int = var_320_int;
	func_1534(var_319_string, var_320_int);
	var_305_string = "armor_" + var_319_string;
	var_323_bool = 0; var_324_object = Obj(); var_325_string = "";
	var_292_object = var_324_object;
	var_305_string = var_325_string;
	func_1549(var_323_bool, var_324_object, var_325_string);
	var_326_bool = var_323_bool == 0; //@nz
	if(var_326_bool != 0) {
		var_306_int = 0;
	} else {
		@@var_292_object:GetProperty(var_305_string, var_306_int);

	}
	var_327_float = 0; var_328_float = 0; var_329_float = 0;
	var_330_int = var_304_int + var_306_int;
	var_328_float = var_330_int / (float)100.0;
	func_1784(var_327_float, var_328_float, (float)1);
	var_327_float = var_307_float;
	@@var_292_object:GetProperty("health", var_308_float);
	var_335_int = (int)1 - var_307_float;
	var_309_float = var_293_float * var_335_int;
	var_337_float = 0; var_338_float = 0; var_339_float = 0; var_340_float = 0;
	var_338_float = var_308_float - var_309_float;
	func_1791(var_337_float, var_338_float, (float)0, (float)1);
	@@var_292_object:SetProperty("health", var_337_float);
	var_309_float = var_291_float;
	return 12;
	
}


func_1306(var_0_bool)
{
	var_236_cvector = CVector(0,0,0); var_237_cvector = CVector(0,0,0); var_238_cvector = CVector(0,0,0); var_239_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_238_cvector);
	GetPFPosition(var_239_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_1948()
{
	return 0;
}


func_1821(var_61_float, var_62_cvector, var_63_cvector)
{
	var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	var_62_cvector = var_65_cvector;
	var_63_cvector = var_66_cvector;
	func_1802(var_64_float, var_65_cvector, var_66_cvector);
	var_73_float = 0; var_74_cvector = CVector(0,0,0);
	var_62_cvector = var_74_cvector;
	func_1811(var_73_float, var_74_cvector);
	var_82_float = 0; var_83_cvector = CVector(0,0,0);
	var_63_cvector = var_83_cvector;
	func_1811(var_82_float, var_83_cvector);
	var_84_float = var_73_float * var_82_float;
	var_61_float = var_64_float / var_84_float;
	return 0;
}


func_1950(var_15_int)
{
	var_15_int = 0;
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


func_1953()
{
	return 0;
}


func_1955(var_14_int)
{
	var_14_int = 2;
	return 0;
}


func_163()
{
	var_13_bool = 0;
	func_1768(var_13_bool);
	var_16_bool = var_13_bool == 0; //@nz
	if(var_16_bool != 0) {
		func_1964();
	}
	return 0;
}


func_1958(var_22_object)
{
	var_23_object = Obj();
	var_22_object = var_23_object;
	func_1969(var_23_object);
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


func_1964()
{
	return 0;
}


func_1965()
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_1325(var_0_bool, var_197_bool)
{
	var_198_bool = 0; var_199_bool = 0;
	var_202_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_202_bool != 0) {
		@@@var_0_bool:IsAttacking(var_199_bool);
		var_199_bool = var_197_bool;
		return 2;
	}
	var_197_bool = 0;
	return 2;
}


func_1838(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
	return 0;
}


func_1969(var_23_object)
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
	func_1773(var_71_object);
	return 0;
}


func_1336(var_2_bool, var_4_object)
{
	var_259_float = 0; var_260_int = 0; var_261_float = 0; var_262_int = 0;
	var_263_bool = var_2_bool == 0; //@nz
	if(var_263_bool != 0) {
		return 4;
	}
	var_264_object = var_4_object;
	if(var_264_object != 0) {
		var_4_object = var_4_object + (int)-1;
		var_267_bool = var_4_object > (int)0;
		if(var_267_bool != 0) {
			return 4;
		}
	}
	rand(var_261_float);
	var_268_float = 0;
	func_1374(var_268_float);
	var_269_bool = var_261_float < var_268_float;
	if(var_269_bool != 0) {
		irand(var_262_int, var_2_bool);
		var_262_int = var_262_int + (int)1;
		var_272_int = "attack" + var_262_int;
		Speak(var_272_int);
		var_273_int = 0;
		func_1372(var_273_int);
		var_4_object = var_273_int;
	}
	return 4;
}


func_571()
{
	var_40_int = 0; var_41_int = 0; var_42_int = 0; var_43_int = 0; var_44_bool = 0; var_45_float = 0; var_46_bool = 0; var_47_int = 0; var_48_int = 0; var_49_int = 0; var_50_int = 0; var_51_bool = 0; var_52_float = 0; var_53_bool = 0;
	WaitForAnimEnd();
	var_54_bool = 0;
	func_1768(var_54_bool);
	var_55_bool = var_54_bool == 0; //@nz
	if(var_55_bool != 0) {
		return 14;
	}
	func_1880((int)0);
	var_56_int = var_47_int;
	var_48_int = 0;
	
Label_585:
	var_69_bool = 0;
	var_69_bool = 0;
	var_71_bool = var_48_int < (int)5;
	if(var_71_bool != 0) {
		var_72_bool = 0;
		func_1768(var_72_bool);
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
			func_1873(var_78_string, var_79_int);
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


func_1209(var_363_bool, var_364_float)
{
	var_365_float = 0; var_366_bool = 0; var_367_float = 0; var_368_bool = 0;
	rand(var_367_float);
	var_369_bool = var_367_float < var_364_float;
	if(var_369_bool != 0) {

	Label_1214:
		IsAnimationPlaying(var_368_bool);
		var_370_bool = var_368_bool == 0; //@nz
		if(var_370_bool != 0) {
		} else {
			var_371_bool = 0;
			func_1273(var_368_bool, var_371_bool);
			if(var_371_bool != 0) {
				var_363_bool = 1;
				sync();
				goto Label_1214;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_1231;
	
Label_1231:
	var_363_bool = 0;
	return 4;
	
}


func_1980(var_56_bool)
{
	var_56_bool = 0;
	return 0;
}


func_1982(var_15_bool)
{
	var_15_bool = 0;
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


func_319(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_447(var_15_bool, var_16_int);
	return 0;
}


func_1985()
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1090(var_0_bool, var_277_float, var_278_int)
{
	var_279_object = Obj(); var_280_float = 0; var_281_float = 0; var_282_object = Obj(); var_283_float = 0; var_284_float = 0;
	var_286_float = var_277_float * (float)0.8999999761581421;
	GetVictim(var_286_float, var_282_object);
	ReportAttack(var_0_bool);
	var_287_bool = var_282_object == var_0_bool;
	if(var_287_bool != 0) {
		var_288_float = 0; var_289_object = Obj(); var_290_int = 0;
		var_282_object = var_289_object;
		var_278_int = var_290_int;
		func_879(var_290_int);
		var_288_float = var_283_float;
		var_291_float = 0; var_292_object = Obj(); var_293_float = 0; var_294_int = 0;
		var_282_object = var_292_object;
		var_283_float = var_293_float;
		var_295_int = 0; var_296_object = Obj(); var_297_int = 0;
		var_282_object = var_296_object;
		var_278_int = var_297_int;
		func_882(var_297_int);
		var_295_int = var_294_int;
		func_1561(var_291_float, var_292_object, var_293_float, var_294_int);
		var_291_float = var_284_float;
		var_344_int = 0;
		func_1368(var_344_int);
		ReportHit(var_0_bool, var_344_int, var_284_float, var_283_float);
		var_345_object = Obj(); var_346_float = 0;
		var_282_object = var_345_object;
		var_284_float = var_346_float;
		func_1370();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


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
	func_1666(var_17_bool, var_18_object);
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
	func_1897(var_55_object);
	var_54_int = var_16_int;
	var_58_bool = var_16_int > (int)0;
	if(var_58_bool != 0) {
		var_60_bool = var_16_int > (int)1;
		if(var_60_bool != 0) {
			func_319(var_16_int);
		}
		var_62_object = Obj();
		var_12_object = var_62_object;
		func_1906(var_62_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1873(var_62_string, var_63_int)
{
	var_64_string = ""; var_65_string = "";
	var_66_int = var_63_int;
	if(var_66_int != 0) {
		"idle" = "idle" + var_63_int;
	}
	var_65_string = var_62_string;
	return 2;
}


func_1233(var_0_bool, var_205_bool, var_206_float)
{
	var_207_bool = 0; var_208_cvector = CVector(0,0,0); var_209_cvector = CVector(0,0,0); var_210_cvector = CVector(0,0,0); var_211_float = 0; var_212_bool = 0; var_213_cvector = CVector(0,0,0); var_214_cvector = CVector(0,0,0); var_215_cvector = CVector(0,0,0); var_216_float = 0;
	
Label_1234:
	IsAnimationPlaying(var_212_bool);
	var_217_bool = var_212_bool == 0; //@nz
	if(var_217_bool != 0) {
	} else {
		var_218_bool = 0;
		func_1273(var_216_float, var_218_bool);
		if(var_218_bool != 0) {
			var_205_bool = 1;
			return 10;
		}
		var_243_bool = 0; var_244_object = Obj();
		var_244_object = var_0_bool;
		func_1666(var_243_bool, var_244_object);
		var_245_bool = var_243_bool == 0; //@nz
		if(var_245_bool != 0) {
			var_205_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_213_cvector);
		GetPFPosition(var_214_cvector);
		var_215_cvector = var_213_cvector - var_214_cvector;
		var_216_float = var_215_cvector | var_215_cvector;
		var_246_float = var_206_float * var_206_float;
		var_247_bool = var_216_float < var_246_float;
		if(var_247_bool != 0) {
			var_248_bool = 0; var_249_float = 0;
			var_206_float = var_249_float;
			func_1129(var_215_cvector, var_216_float, var_248_bool, var_249_float);
			var_205_bool = 1;
			sync();
			goto Label_1234;
		}
		return 10;
	}
	var_205_bool = 0;
	return 10;
	
}


func_1880(var_56_int)
{
	var_57_int = 0; var_58_bool = 0; var_59_int = 0; var_60_bool = 0;
	var_59_int = 0;
	
Label_1882:
	var_62_string = ""; var_63_int = 0;
	var_59_int = var_63_int;
	func_1873(var_62_string, var_63_int);
	HasAnimation(var_60_bool, "all", var_62_string);
	var_67_bool = var_60_bool == 0; //@nz
	if(var_67_bool != 0) {
	} else {
		var_59_int = var_59_int + (int)1;
		goto Label_1882;
	}
	var_59_int = var_56_int;
	return 4;
	
}


func_1368(var_344_int)
{
	var_344_int = 0;
	return 0;
}


func_1370()
{
	return 0;
}


func_1625(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
}


func_1372(var_273_int)
{
	var_273_int = 1;
	return 0;
}


func_1757(var_87_object)
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


func_1374(var_268_float)
{
	var_268_float = 0.5;
	return 0;
}


func_1630(var_20_bool, var_21_object)
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
		func_1625(var_31_bool, var_32_object);
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


func_1507(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
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


func_1383(var_0_bool, var_1_bool, var_121_bool, var_122_object, var_123_float, var_124_float, var_125_bool, var_126_bool)
{
	var_129_bool = 0; var_130_bool = 0; var_131_object = Obj(); var_132_cvector = CVector(0,0,0); var_133_cvector = CVector(0,0,0); var_134_cvector = CVector(0,0,0); var_135_float = 0; var_136_object = Obj(); var_137_bool = 0; var_138_bool = 0; var_139_object = Obj(); var_140_cvector = CVector(0,0,0); var_141_cvector = CVector(0,0,0); var_142_cvector = CVector(0,0,0); var_143_float = 0; var_144_object = Obj();
	var_0_bool = false;
	var_1_bool = var_122_object;
	var_126_bool = var_138_bool;
	
Label_1387:
	var_145_bool = 0; var_146_object = Obj();
	var_122_object = var_146_object;
	func_1523(var_145_bool, var_146_object);
	var_149_bool = var_145_bool == 0; //@nz
	if(var_149_bool != 0) {
		var_121_bool = 0;
		return 16;
	}
	@@var_122_object:GetPosition(var_140_cvector);
	GetPosition(var_141_cvector);
	var_142_cvector = var_140_cvector - var_141_cvector;
	var_143_float = var_142_cvector | var_142_cvector;
	var_150_bool = 0;
	var_150_bool = 0;
	var_152_bool = var_124_float > (int)0;
	if(var_152_bool != 0) {
		var_153_float = var_124_float * var_124_float;
		var_154_bool = var_143_float > var_153_float;
		if(var_154_bool != 0) {
			var_150_bool = 1;
		}
	}
	if(var_150_bool != 0) {
		Stop();
		var_121_bool = 0;
		return 16;
	}
	var_155_float = var_123_float * var_123_float;
	var_156_bool = var_143_float > var_155_float;
	if(var_156_bool != 0) {
		@@var_122_object:GetPFPosition(var_140_cvector);
		FindPathTo(var_144_object, var_140_cvector);
		var_157_bool = var_144_object != 0; //@nn
		if(var_157_bool != 0) {
			var_144_object = var_139_object;
			var_144_object = 0;
		}
		var_158_bool = var_139_object != 0; //@nn
		if(var_158_bool != 0) {
			var_159_bool = var_138_bool;
			if(var_159_bool == 0) goto Label_1436;
			var_138_bool = 0;
			RotatePath(var_139_object, var_137_bool);
			var_160_bool = var_137_bool == 0; //@nz
			if(var_160_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_163_string = "";
				func_1530(var_163_string);
				var_164_string = "";
				func_1532(var_164_string);
				FollowPath(var_139_object, var_125_bool, var_137_bool, var_163_string, var_164_string);
				var_165_bool = var_137_bool == 0; //@nz
				if(var_165_bool != 0) {
					var_166_bool = var_0_bool;
					if(var_166_bool != 0) {
						var_139_object = 0;
						goto Label_1483;
					EMIT "GOTO 0x5b0";
					}
				} else {
					var_139_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_137_bool);
					var_169_bool = var_137_bool == 0; //@nz
					if(var_169_bool != 0) {
						var_170_bool = var_0_bool;
						if(var_170_bool != 0) {
							var_139_object = 0;
							goto Label_1483;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1483;
	}
			var_144_object = 0;
			goto Label_1481;

		Label_1481:
			var_139_object = 0;

		}
		goto Label_1387;
	}
Label_1483:
	var_121_bool = !var_0_bool;
	return 16;
	
}


func_1768(var_13_bool)
{
	var_14_bool = 0; var_15_bool = 0;
	IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
	return 2;
}


func_1897(var_54_int)
{
	var_56_bool = 0;
	func_1980(var_56_bool);
	if(var_56_bool != 0) {
		var_54_int = 2;
	} else {
		var_54_int = 0;
	}
	return 0;
	
}


func_1129(var_0_bool, var_1_bool, var_248_bool, var_249_float)
{
	var_250_int = 0; var_251_bool = 0; var_252_int = 0; var_253_bool = 0;
	irand(var_252_int, var_1_bool);
	var_252_int = var_252_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_258_int = "attack_begin" + var_252_int;
	PlayAnimation("all", var_258_int);
	WaitForAnimEnd();
	func_1336(var_252_int, var_253_bool);
	var_274_bool = 0; var_275_object = Obj();
	var_275_object = var_0_bool;
	func_1666(var_274_bool, var_275_object);
	var_276_bool = var_274_bool == 0; //@nz
	if(var_276_bool != 0) {
		StopAsync();
		var_248_bool = 0;
		return 4;
	}
	var_277_float = 0; var_278_int = 0;
	var_249_float = var_277_float;
	var_252_int = var_278_int;
	func_1090(var_253_bool, var_277_float, var_278_int);
	var_349_int = "attack_middle" + var_252_int;
	HasAnimation(var_253_bool, "all", var_349_int);
	var_350_bool = var_253_bool;
	if(var_350_bool != 0) {
		var_353_int = "attack_middle" + var_252_int;
		PlayAnimation("all", var_353_int);
		WaitForAnimEnd();
		var_354_bool = 0; var_355_object = Obj();
		var_355_object = var_0_bool;
		func_1666(var_354_bool, var_355_object);
		var_356_bool = var_354_bool == 0; //@nz
		if(var_356_bool != 0) {
			StopAsync();
			var_248_bool = 0;
			return 4;
		}
		var_357_float = 0; var_358_int = 0;
		var_249_float = var_357_float;
		var_252_int = var_358_int;
		func_1090(var_253_bool, var_357_float, var_358_int);
	}
	SetAttackState((bool)0);
	var_362_int = "attack_end" + var_252_int;
	PlayAnimation("all", var_362_int);
	var_363_bool = 0; var_364_float = 0;
	func_1209(var_363_bool, (float)0.75);
	StopAsync();
	var_248_bool = 1;
	return 4;
}


func_871(var_64_object)
{
	var_70_object = Obj(); var_71_bool = 0; var_72_float = 0;
	var_64_object = var_70_object;
	func_885(var_65_object, var_66_int, var_67_int, var_68_bool, var_69_int, var_64_object, var_70_object, (bool)1, (float)180.0);
	return 0;
}


func_1773(var_71_object)
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


func_879(var_288_float)
{
	var_288_float = 0.029999999329447746;
	return 0;
}


func_1906(var_62_object)
{
	var_63_object = Obj();
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_64_object, var_63_object);
	TaskReturn();
	return 0;
}


func_882(var_295_int)
{
	var_295_int = 0;
	return 0;
}


func_1523(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1666(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
	return 0;
}


func_885(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_70_object, var_71_bool, var_72_float, var_127_bool)
{
	var_73_bool = 0; var_74_bool = 0; var_75_float = 0; var_76_cvector = CVector(0,0,0); var_77_cvector = CVector(0,0,0); var_78_bool = 0; var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0; var_82_float = 0; var_83_bool = 0; var_84_bool = 0; var_85_float = 0; var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_bool = 0; var_89_bool = 0; var_90_cvector = CVector(0,0,0); var_91_float = 0; var_92_float = 0;
	var_1_bool = 0;
	
Label_887:
	var_96_int = var_1_bool + (int)1;
	var_97_int = "attack_begin" + var_96_int;
	HasAnimation(var_83_bool, "all", var_97_int);
	var_98_bool = var_83_bool == 0; //@nz
	if(var_98_bool != 0) {
	} else {
									var_1_bool = var_1_bool + (int)1;
									goto Label_887;
	}
	var_2_bool = 0;
	
Label_901:
	var_101_int = var_2_bool + (int)1;
	var_102_int = "attack" + var_101_int;
	IsExisting3DSound(var_84_bool, var_102_int);
	var_103_bool = var_84_bool == 0; //@nz
	if(var_103_bool != 0) {
	} else {
								var_2_bool = var_2_bool + (int)1;
								goto Label_901;

	}
	var_4_object = 0;
	var_106_bool = IsFuncExist(var_70_object, "@GetAttackDistance", (int)1);
	if(var_106_bool != 0) {
		@@var_70_object:GetAttackDistance(var_85_float);
		var_85_float = var_85_float + (int)50;
	} else {
							var_72_float = var_85_float;

	}
	var_109_bool = var_85_float >= (int)150;
	if(var_109_bool != 0) {
		var_85_float = 150;
	}
	var_3_object = false;
	var_0_bool = var_70_object;
	IsPlayerActor(var_0_bool, var_88_bool);
	var_110_bool = var_71_bool;
	if(var_110_bool != 0) {
		var_89_bool = 0;
	} else {
						var_89_bool = 1;

	}
Label_937:
	var_111_bool = 0;
	var_111_bool = 0;
	var_112_bool = 0; var_113_object = Obj();
	var_113_object = var_0_bool;
	func_1666(var_112_bool, var_113_object);
	if(var_112_bool != 0) {
		var_114_bool = var_3_object == 0; //@nz
		if(var_114_bool != 0) {
			var_111_bool = 1;
		}
	}
	if(var_111_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_86_cvector);
		GetPFPosition(var_87_cvector);
		var_90_cvector = var_86_cvector - var_87_cvector;
		var_91_float = var_90_cvector | var_90_cvector;
		var_116_int = (float)400.0 + var_85_float;
		var_118_int = (float)400.0 + var_85_float;
		var_119_float = var_116_int * var_118_int;
		var_120_bool = var_91_float >= var_119_float;
		if(var_120_bool != 0) {
			var_121_bool = 0; var_122_object = Obj(); var_123_float = 0; var_124_float = 0; var_125_bool = 0; var_126_bool = 0;
			var_122_object = var_0_bool;
			var_85_float = var_123_float;
			TaskCall(5);
			func_1383(var_127_bool, var_128_object, var_121_bool, var_122_object, var_123_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_174_bool = var_127_bool == 0; //@nz
			if(var_174_bool != 0) {
			} else {
		} else {
				var_180_float = var_72_float * var_72_float;
				var_181_bool = var_91_float >= var_180_float;
				if(var_181_bool != 0) {
					var_182_bool = (bool)0 == 0; //@nz
					if(var_182_bool != 0) {
						var_183_object = Obj();
						var_183_object = var_0_bool;
						func_1757(var_183_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_89_bool = 1;
					}
					rand(var_92_float);
					var_194_bool = 0;
					var_196_bool = var_92_float < (float)0.6000000238418579;
					if(var_196_bool != 1) {
						var_197_bool = 0;
						func_1325((bool)1, var_197_bool);
						if(var_197_bool != 1) {
							var_194_bool = 0;
						}
					}
					if(var_194_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_205_bool = 0; var_206_float = 0;
						var_72_float = var_206_float;
						func_1233(var_92_float, var_205_bool, var_206_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_375_bool = 0;
						func_1325(var_92_float, var_375_bool);
						var_376_bool = var_375_bool == 0; //@nz
						if(var_376_bool == 0) goto Label_1063;
						var_377_bool = 0; var_378_object = Obj();
						var_378_object = var_0_bool;
						func_1666(var_377_bool, var_378_object);
						var_379_bool = var_377_bool == 0; //@nz
						if(var_379_bool != 0) {
							goto Label_1073;
						}
						@@@var_0_bool:GetPFPosition(var_86_cvector);
						GetPFPosition(var_87_cvector);
						var_90_cvector = var_86_cvector - var_87_cvector;
						var_91_float = var_90_cvector | var_90_cvector;
						var_380_float = var_72_float * var_72_float;
						var_381_bool = var_91_float < var_380_float;
						if(var_381_bool == 0) goto Label_1063;
						var_382_bool = 0; var_383_float = 0;
						var_72_float = var_383_float;
						func_1129(var_91_float, var_92_float, var_382_bool, var_383_float);
						var_384_bool = var_382_bool == 0; //@nz
						if(var_384_bool == 0) goto Label_1063;
						goto Label_1073;
				}
					var_385_bool = 0; var_386_float = 0;
					var_72_float = var_386_float;
					func_1129(var_91_float, var_92_float, var_385_bool, var_386_float);
					var_387_bool = var_385_bool == 0; //@nz
					if(var_387_bool != 0) {
						goto Label_1073;
					}
					var_89_bool = 1;

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
	var_175_object = var_3_object;
	if(var_175_object != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_178_bool = var_88_bool;
	if(var_178_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
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


func_1273(var_0_bool, var_218_bool)
{
	var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0); var_222_float = 0; var_223_float = 0; var_224_cvector = CVector(0,0,0); var_225_cvector = CVector(0,0,0); var_226_cvector = CVector(0,0,0); var_227_float = 0; var_228_float = 0;
	var_229_bool = 0; var_230_object = Obj();
	var_230_object = var_0_bool;
	func_1666(var_229_bool, var_230_object);
	var_231_bool = var_229_bool == 0; //@nz
	if(var_231_bool != 0) {
		var_218_bool = 0;
		return 10;
	}
	var_232_bool = 0;
	func_1325(var_228_float, var_232_bool);
	if(var_232_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_224_cvector);
		GetPFPosition(var_225_cvector);
		var_226_cvector = var_224_cvector - var_225_cvector;
		var_227_float = var_226_cvector | var_226_cvector;
		@@@var_0_bool:GetAttackDistance(var_228_float);
		var_228_float = var_228_float + (int)50;
		var_234_float = var_228_float * var_228_float;
		var_235_bool = var_227_float <= var_234_float;
		if(var_235_bool != 0) {
			func_1306(var_228_float);
			var_218_bool = 1;
			return 10;
		}
	}
	var_218_bool = 0;
	return 10;
}


func_1914(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_1666(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_20_int = 2;
	} else {
		var_20_int = 0;
	}
	return 0;
	
}


func_1532(var_164_string)
{
	var_164_string = "run";
	return 0;
}


func_1534(var_319_string, var_320_int)
{
	var_322_bool = var_320_int == (int)1;
	if(var_322_bool != 0) {
		var_319_string = "fire";
		return 0;
	}
	var_319_string = "phys";
	return 0;
}


func_1791(var_337_float, var_338_float, var_339_float, var_340_float)
{
	var_341_bool = var_338_float < var_339_float;
	if(var_341_bool != 0) {
		var_339_float = var_337_float;
		return 0;
	}
	var_342_bool = var_338_float > var_340_float;
	if(var_342_bool != 0) {
		var_340_float = var_337_float;
		return 0;
	}
	var_338_float = var_337_float;
	return 0;
}


