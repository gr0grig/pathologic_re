// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,FindPathTo/2,FollowPath/5,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,GetGameTime/1,GetProperty/2,SignalDeath/1,HasAnimation/3,GetInvItemByName/2,AddItem/4,IsOverrideActive/1,WorkWithCorpse/1,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:dattack_begin|W:dattack_end|W:zwalk|A:GetPFPosition|W:run|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:health|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:class|W:rat|W:dog
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
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_6: op=0x3c3 vars=
// @EVENT_7: op=0x428 vars=int
// @EVENT_41: op=0x463 vars=object
// @TASK_6: vars=object,cvector,bool params=1
// @EVENT_7: op=0x4da vars=int
// @EVENT_41: op=0x515 vars=object
// @STANDALONE_EVENT_16: op=0x65a vars=object,string
// @STANDALONE_EVENT_41: op=0x667 vars=object
// @STANDALONE_EVENT_22: op=0x66d vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x118,0x11e,0x124,0x147,0x1b1,0x285,0x2e1,0x305,0x378,0x38a,0x395,0x39e,0x3a7,0x463,0x515,0x636,0x641,0x652,0x667,0x66d,0x68d,0x690,0x698,0x6a2,0x6aa,0x6b4,0x6bc,0x6bf,0x6c1,0x6c4,0x6c6,0x6c9,0x7ba,0x7bd,0x7ed

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1734(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_18_object = Obj();
		var_11_bool = var_18_object;
		func_1737(var_18_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_1743();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool, var_12_object, var_13_cvector, var_14_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1734(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_21_object = Obj();
		var_11_bool = var_21_object;
		func_1737(var_21_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1688(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_311(var_13_int);
		}
		var_55_object = Obj();
		var_11_bool = var_55_object;
		func_1698(var_55_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_cvector = var_16_object;
	var_12_bool = var_17_object;
	func_1983(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_50_int = 0; var_51_object = Obj();
		var_11_cvector = var_51_object;
		func_1706(var_50_int, var_51_object);
		var_50_int = var_14_int;
		var_81_bool = var_14_int > (int)0;
		if(var_81_bool != 0) {
			var_83_bool = var_14_int > (int)1;
			if(var_83_bool != 0) {
				func_311(var_14_int);
			}
			var_85_object = Obj();
			var_11_cvector = var_85_object;
			func_1716(var_85_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1724(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_311(var_13_int);
		}
		var_11_bool = Obj();
		func_1727();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_bool = var_16_string;
	var_11_cvector = var_17_object;
	func_1729(var_17_object);
	var_15_int = var_14_int;
	var_19_bool = var_14_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_14_int > (int)1;
		if(var_21_bool != 0) {
			func_311(var_14_int);
		}
		var_23_string = ""; var_24_object = Obj();
		var_12_bool = var_23_string;
		var_11_cvector = var_24_object;
		func_1732();
	}
	return 2;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_object = Obj();
	var_11_bool = var_12_object;
	func_336(var_11_bool, var_12_object);
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_object = Obj();
	var_11_bool = var_12_object;
	func_336(var_11_bool, var_12_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_13_bool = var_11_bool != (int)110;
	if(var_13_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_311(var_10_bool);
	func_1743();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_311(var_11_bool);
	var_11_bool = Obj();
	func_1639();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	RequestClearPath(var_11_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1734(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_20_object = Obj();
		var_11_bool = var_20_object;
		func_1737(var_20_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1688(var_14_int, var_15_object);
	var_14_int = var_13_int;
	var_51_bool = var_13_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_13_int > (int)1;
		if(var_53_bool != 0) {
			func_640();
		}
		var_54_object = Obj();
		var_11_bool = var_54_object;
		func_1698(var_54_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_bool = 0; var_16_object = Obj(); var_17_object = Obj();
	var_11_cvector = var_16_object;
	var_12_bool = var_17_object;
	func_1983(var_15_bool, var_16_object, var_17_object);
	if(var_15_bool != 0) {
		var_50_int = 0; var_51_object = Obj();
		var_11_cvector = var_51_object;
		func_1706(var_50_int, var_51_object);
		var_50_int = var_14_int;
		var_81_bool = var_14_int > (int)0;
		if(var_81_bool != 0) {
			var_83_bool = var_14_int > (int)1;
			if(var_83_bool != 0) {
				func_640();
			}
			var_84_object = Obj();
			var_11_cvector = var_84_object;
			func_1716(var_84_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1724(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_640();
		}
		var_11_bool = Obj();
		func_1727();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	var_13_int = 0; var_14_int = 0;
	var_15_int = 0; var_16_string = ""; var_17_object = Obj();
	var_12_bool = var_16_string;
	var_11_cvector = var_17_object;
	func_1729(var_17_object);
	var_15_int = var_14_int;
	var_19_bool = var_14_int > (int)0;
	if(var_19_bool != 0) {
		var_21_bool = var_14_int > (int)1;
		if(var_21_bool != 0) {
			func_640();
		}
		var_22_string = ""; var_23_object = Obj();
		var_12_bool = var_22_string;
		var_11_cvector = var_23_object;
		func_1732();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_640();
	func_1743();
	return 0;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1978(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_732();
		}
		var_11_bool = Obj();
		func_1981();
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_732();
	func_1743();
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_732();
	var_11_bool = Obj();
	func_1639();
	return 0;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_object = Obj();
	var_11_bool = var_15_object;
	func_1978(var_15_object);
	var_14_int = var_13_int;
	var_17_bool = var_13_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_13_int > (int)1;
		if(var_19_bool != 0) {
			func_910(var_13_int);
		}
		var_11_bool = Obj();
		func_1981();
	}
	return 2;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_910(var_10_bool);
	func_1743();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_13_bool = var_11_bool != (int)0;
	if(var_13_bool != 0) {
		return 0;
	}
	var_14_bool = 0; var_15_object = Obj();
	var_15_object = var_1_bool;
	func_926(var_14_bool, var_15_object);
	var_50_bool = var_14_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	RequestClearPath(var_11_bool);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	func_910(var_11_bool);
	var_11_bool = Obj();
	func_1639();
	return 0;
}


task_5_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_1116(var_10_bool);
	func_1743();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0;
	var_21_bool = var_11_bool != (int)120;
	if(var_21_bool != 0) {
		return 8;
	}
	var_22_bool = var_0_bool == 0; //@ne
	if(var_22_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_16_cvector);
		FindDirLength(var_17_float, var_16_cvector, (float)7000.0);
		var_25_cvector = CVector(0,0,0); var_26_float = 0;
		func_970(var_19_float, var_25_cvector, (float)1.7453293800354004);
		var_25_cvector = var_18_cvector;
		var_19_float = var_18_cvector | var_18_cvector;
		var_55_bool = 0;
		var_55_bool = 0;
		var_57_bool = var_19_float >= (float)10000.0;
		if(var_57_bool != 0) {
			var_58_bool = 0;
			var_59_float = var_17_float * var_17_float;
			var_61_float = var_59_float * (float)2.25;
			var_62_bool = var_19_float >= var_61_float;
			if(var_62_bool != 1) {
				var_63_bool = 0;
				func_1132((bool)1, var_63_bool);
				if(var_63_bool != 1) {
					var_58_bool = 0;
				}
			}
			if(var_58_bool != 0) {
				var_55_bool = 1;
			}
		}
		if(var_55_bool == 0) goto Label_1115;
		Stop();
		var_83_cvector = CVector(0,0,0);
		func_1326(var_83_cvector);
		var_1_bool = var_83_cvector + var_18_cvector;
	}
Label_1115:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_cvector, var_11_bool)
{
	func_1116(var_11_bool);
	var_11_bool = Obj();
	func_1639();
	return 0;
}


task_6_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_int)
{
	var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0;
	var_21_bool = var_11_int != (int)120;
	if(var_21_bool != 0) {
		return 8;
	}
	var_22_bool = var_0_bool == 0; //@ne
	if(var_22_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_16_cvector);
		FindDirLength(var_17_float, var_16_cvector, (float)7000.0);
		var_25_cvector = CVector(0,0,0); var_26_float = 0;
		func_1148(var_19_float, var_25_cvector, (float)1.7453293800354004);
		var_25_cvector = var_18_cvector;
		var_19_float = var_18_cvector | var_18_cvector;
		var_55_bool = 0;
		var_55_bool = 0;
		var_57_bool = var_19_float >= (float)10000.0;
		if(var_57_bool != 0) {
			var_58_bool = 0;
			var_59_float = var_17_float * var_17_float;
			var_61_float = var_59_float * (float)2.25;
			var_62_bool = var_19_float >= var_61_float;
			if(var_62_bool != 1) {
				var_63_bool = 0;
				func_1310((bool)1, var_63_bool);
				if(var_63_bool != 1) {
					var_58_bool = 0;
				}
			}
			if(var_58_bool != 0) {
				var_55_bool = 1;
			}
		}
		if(var_55_bool == 0) goto Label_1293;
		Stop();
		var_83_cvector = CVector(0,0,0);
		func_1326(var_83_cvector);
		var_1_bool = var_83_cvector + var_18_cvector;
	}
Label_1293:
	return 8;
	
}


task_6_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object)
{
	func_1294(var_11_object);
	var_11_object = Obj();
	func_1639();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_string)
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


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_1618(var_12_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1508(var_16_int, var_17_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	SensePlayerOnly((bool)1);
	func_1954();
	func_163();
	
Label_157:
	var_2_bool = false;
	func_376(var_9_cvector, var_10_bool);
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
	func_2029();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_773(var_70_bool, var_71_object)
{
	var_74_bool = 0; var_75_object = Obj(); var_76_float = 0; var_77_float = 0; var_78_bool = 0; var_79_bool = 0;
	var_71_object = var_75_object;
	func_786(var_70_bool, var_71_object, var_74_bool, var_75_object, (float)150, (float)3000, (bool)0, (bool)1);
	var_74_bool = var_70_bool;
	return 0;
}


func_645(var_62_object)
{
	var_63_bool = 0; var_64_object = Obj();
	var_62_object = var_64_object;
	func_1973(var_63_bool, var_64_object);
	if(var_63_bool != 0) {
		var_67_object = Obj();
		var_62_object = var_67_object;
		func_683(var_67_object);
	}
	return 0;
}


func_1677(var_54_int)
{
	var_54_int = 2;
	return 0;
}


func_910(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1294(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1680(var_61_object)
{
	var_62_object = Obj();
	var_61_object = var_62_object;
	TaskCall(3);
	func_645(var_62_object);
	TaskReturn();
	return 0;
}


func_784(var_114_string)
{
	var_114_string = "zwalk";
	return 0;
}


func_786(var_0_bool, var_1_bool, var_74_bool, var_75_object, var_76_float, var_77_float, var_78_bool, var_79_bool)
{
	var_80_bool = 0; var_81_bool = 0; var_82_object = Obj(); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_float = 0; var_87_object = Obj(); var_88_bool = 0; var_89_bool = 0; var_90_object = Obj(); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0); var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_object = Obj();
	var_0_bool = false;
	var_1_bool = var_75_object;
	var_79_bool = var_89_bool;
	
Label_790:
	var_96_bool = 0; var_97_object = Obj();
	var_75_object = var_97_object;
	func_926(var_96_bool, var_97_object);
	var_100_bool = var_96_bool == 0; //@nz
	if(var_100_bool != 0) {
		var_74_bool = 0;
		return 16;
	}
	@@var_75_object:GetPosition(var_91_cvector);
	GetPosition(var_92_cvector);
	var_93_cvector = var_91_cvector - var_92_cvector;
	var_94_float = var_93_cvector | var_93_cvector;
	var_101_bool = 0;
	var_101_bool = 0;
	var_103_bool = var_77_float > (int)0;
	if(var_103_bool != 0) {
		var_104_float = var_77_float * var_77_float;
		var_105_bool = var_94_float > var_104_float;
		if(var_105_bool != 0) {
			var_101_bool = 1;
		}
	}
	if(var_101_bool != 0) {
		Stop();
		var_74_bool = 0;
		return 16;
	}
	var_106_float = var_76_float * var_76_float;
	var_107_bool = var_94_float > var_106_float;
	if(var_107_bool != 0) {
		@@var_75_object:GetPFPosition(var_91_cvector);
		FindPathTo(var_95_object, var_91_cvector);
		var_108_bool = var_95_object != 0; //@nn
		if(var_108_bool != 0) {
			var_95_object = var_90_object;
			var_95_object = 0;
		}
		var_109_bool = var_90_object != 0; //@nn
		if(var_109_bool != 0) {
			var_110_bool = var_89_bool;
			if(var_110_bool == 0) goto Label_839;
			var_89_bool = 0;
			RotatePath(var_90_object, var_88_bool);
			var_111_bool = var_88_bool == 0; //@nz
			if(var_111_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_114_string = "";
				func_784(var_114_string);
				var_115_string = "";
				func_933(var_115_string);
				FollowPath(var_90_object, var_78_bool, var_88_bool, var_114_string, var_115_string);
				var_116_bool = var_88_bool == 0; //@nz
				if(var_116_bool != 0) {
					var_117_bool = var_0_bool;
					if(var_117_bool != 0) {
						var_90_object = 0;
						goto Label_886;
					EMIT "GOTO 0x35b";
					}
				} else {
					var_90_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_88_bool);
					var_120_bool = var_88_bool == 0; //@nz
					if(var_120_bool != 0) {
						var_121_bool = var_0_bool;
						if(var_121_bool != 0) {
							var_90_object = 0;
							goto Label_886;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_886;
	}
			var_95_object = 0;
			goto Label_884;

		Label_884:
			var_90_object = 0;

		}
		goto Label_790;
	}
Label_886:
	var_74_bool = !var_0_bool;
	return 16;
	
}


func_1148(var_0_bool, var_25_cvector, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0;
	GetPosition(var_33_cvector);
	@@@var_0_bool:GetPosition(var_34_cvector);
	GetDirection(var_35_cvector);
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_42_cvector = var_33_cvector - var_34_cvector;
	func_1580(var_41_cvector, var_42_cvector);
	var_49_float = var_35_cvector * (float)0.75;
	var_40_cvector = var_41_cvector + var_49_float;
	func_1580(var_39_cvector, var_40_cvector);
	var_39_cvector = var_36_cvector;
	FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, (int)32, (float)7000.0);
	var_38_float = var_38_float - (int)100;
	var_54_bool = var_38_float < (int)0;
	if(var_54_bool != 0) {
		var_38_float = 0;
	}
	var_25_cvector = var_37_cvector * var_38_float;
	return 12;
}


func_1688(var_14_int, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1484(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		var_14_int = 2;
	} else {
		var_14_int = 0;
	}
	return 0;
	
}


func_1178(var_0_bool, var_1_bool, var_2_bool, var_85_object)
{
	var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_bool = 0; var_92_cvector = CVector(0,0,0); var_93_float = 0; var_94_cvector = CVector(0,0,0); var_95_float = 0; var_96_bool = 0; var_97_cvector = CVector(0,0,0); var_98_float = 0;
	var_0_bool = var_85_object;
	var_99_cvector = CVector(0,0,0); var_100_float = 0;
	func_1148(var_98_float, var_99_cvector, (float)1.7453293800354004);
	var_99_cvector = var_94_cvector;
	var_95_float = var_94_cvector | var_94_cvector;
	var_130_bool = var_95_float < (float)10000.0;
	if(var_130_bool != 0) {
		var_132_float = sqrt(var_95_float);
		var_133_int = "Can't retreat, distance: " + var_132_float;
		Trace(var_133_int);
		Sleep((float)0.5);
		return 10;
	}
	var_135_float = GetByIndex(var_94_cvector, 0);
	var_136_float = GetByIndex(var_94_cvector, 2);
	Rotate(var_135_float, var_136_float);
	var_137_cvector = CVector(0,0,0);
	func_1326(var_137_cvector);
	var_1_bool = var_137_cvector + var_94_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1211:
	MovePoint(var_1_bool, (int)1, var_96_bool);
	var_143_bool = var_96_bool;
	if(var_143_bool != 0) {
		var_144_bool = var_0_bool == 0; //@ne
		if(var_144_bool != 0) {
			goto Label_1241;
		EMIT "GOTO 0x4d7";

		Label_1241:
			return 10;
		}
		var_145_cvector = CVector(0,0,0); var_146_float = 0;
		func_1148(var_98_float, var_145_cvector, (float)2.6179938316345215);
		var_145_cvector = var_97_cvector;
		var_98_float = var_97_cvector | var_97_cvector;
		var_148_bool = var_98_float >= (float)10000.0;
		if(var_148_bool != 0) {
			var_149_cvector = CVector(0,0,0);
			func_1326(var_149_cvector);
			var_1_bool = var_149_cvector + var_97_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1241;
		}
	}
	var_152_bool = var_2_bool == 0; //@nz
	if(var_152_bool == 1) goto Label_1211;
	
}


func_1949(var_51_int, var_52_string)
{
	var_53_int = 0; var_54_int = 0;
	GetInvItemByName(var_54_int, var_52_string);
	var_54_int = var_51_int;
	return 2;
}


func_926(var_14_bool, var_15_object)
{
	var_16_bool = 0; var_17_object = Obj();
	var_15_object = var_17_object;
	func_1484(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
	return 0;
}


func_1310(var_0_bool, var_63_bool)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	GetDirection(var_66_cvector);
	var_68_cvector = CVector(0,0,0); var_69_object = Obj();
	var_69_object = var_0_bool;
	func_1331(var_68_cvector, var_69_object);
	var_68_cvector = var_67_cvector;
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_66_cvector = var_75_cvector;
	var_67_cvector = var_76_cvector;
	func_1601(var_74_float, var_75_cvector, var_76_cvector);
	var_63_bool = var_74_float >= (float)-0.3420201241970062;
	return 4;
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


func_1954()
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_13_bool = 0;
	func_1774((bool)0);
	return 0;
}


func_163()
{
	var_130_bool = 0;
	func_1575(var_130_bool);
	var_133_bool = var_130_bool == 0; //@nz
	if(var_133_bool != 0) {
		func_1743();
	}
	return 0;
}


func_1698(var_54_object)
{
	var_55_object = Obj();
	var_54_object = var_55_object;
	TaskCall(5);
	func_935(var_55_object);
	TaskReturn();
	return 0;
}


func_933(var_115_string)
{
	var_115_string = "run";
	return 0;
}


func_1443(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
}


func_1575(var_130_bool)
{
	var_131_bool = 0; var_132_bool = 0;
	IsLoaded(var_132_bool);
	var_132_bool = var_130_bool;
	return 2;
}


func_1448(var_20_bool, var_21_object)
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
		func_1443(var_31_bool, var_32_object);
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


func_935(var_55_object)
{
	Face(var_55_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_65_object = Obj();
	var_55_object = var_65_object;
	func_1000(var_57_cvector, var_58_bool, var_55_object, var_65_object);
	return 0;
}


func_1706(var_50_int, var_51_object)
{
	var_52_bool = 0; var_53_object = Obj();
	var_51_object = var_53_object;
	func_1484(var_52_bool, var_53_object);
	if(var_52_bool != 0) {
		var_50_int = 2;
	} else {
		var_50_int = 0;
	}
	return 0;
	
}


func_683(var_67_object)
{
	var_68_bool = 0; var_69_bool = 0;
	
Label_684:
	var_70_bool = 0; var_71_object = Obj();
	var_67_object = var_71_object;
	TaskCall(4);
	func_773(var_70_bool, var_71_object);
	TaskReturn();
	if(var_72_bool != 0) {
		Face(var_67_object);
		WaitForAnimEnd(var_69_bool);
		var_125_bool = var_69_bool == 0; //@nz
		if(var_125_bool != 0) {
		} else {
			PlayAnimation("all", "dattack_begin");
			WaitForAnimEnd(var_69_bool);
			var_128_bool = var_69_bool == 0; //@nz
			if(var_128_bool != 0) {
				goto Label_731;
			}
			var_129_float = 0; var_130_object = Obj();
			var_67_object = var_130_object;
			func_1338(var_129_float, var_130_object);
			var_138_bool = var_129_float <= (float)90000.0;
			if(var_138_bool != 0) {
				var_139_float = 0; var_140_object = Obj(); var_141_float = 0;
				var_67_object = var_140_object;
				func_1380(var_139_float, var_140_object, (float)0.20000000298023224);
			}
			PlayAnimation("all", "dattack_end");
			WaitForAnimEnd(var_69_bool);
			var_191_bool = var_69_bool == 0; //@nz
			if(var_191_bool != 0) {
				goto Label_731;
			}
			StopAsync();
			goto Label_684;
		}
	}
Label_731:
	return 2;
	
}


func_1580(var_41_cvector, var_42_cvector)
{
	var_43_float = 0; var_44_float = 0;
	var_45_int = var_42_cvector | var_42_cvector;
	var_44_float = sqrt(var_45_int);
	var_46_float = 9.999999974752427e-07;
	var_47_bool = var_44_float < var_46_float;
	if(var_47_bool != 0) {
		var_41_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_41_cvector = var_42_cvector / var_44_float;
	return 2;
}


func_1962(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = GlobalVars[0];
	if(var_24_bool != 0) {
		IsOverrideActive(var_23_bool);
		var_25_bool = var_23_bool == 0; //@nz
		if(var_25_bool != 0) {
			WorkWithCorpse(var_21_object);
		}
		return 2;
	}
	return 2;
}


func_1326(var_83_cvector)
{
	var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	GetPosition(var_85_cvector);
	var_85_cvector = var_83_cvector;
	return 2;
}


func_1331(var_68_cvector, var_69_object)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	GetPosition(var_72_cvector);
	@@var_69_object:GetPosition(var_73_cvector);
	var_68_cvector = var_73_cvector - var_72_cvector;
	return 4;
}


func_1716(var_84_object)
{
	var_85_object = Obj();
	var_84_object = var_85_object;
	TaskCall(6);
	func_1178(var_86_object, var_87_cvector, var_88_bool, var_85_object);
	TaskReturn();
	return 0;
}


func_1973(var_63_bool, var_64_object)
{
	var_65_bool = 0; var_66_bool = 0;
	IsPlayerActor(var_64_object, var_66_bool);
	var_66_bool = var_63_bool;
	return 2;
}


func_1590(var_181_float, var_182_float, var_183_float, var_184_float)
{
	var_185_bool = var_182_float < var_183_float;
	if(var_185_bool != 0) {
		var_183_float = var_181_float;
		return 0;
	}
	var_186_bool = var_182_float > var_184_float;
	if(var_186_bool != 0) {
		var_184_float = var_181_float;
		return 0;
	}
	var_182_float = var_181_float;
	return 0;
}


func_311(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_440(var_10_cvector, var_11_bool);
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


func_1978(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_571()
{
	var_157_int = 0; var_158_int = 0; var_159_int = 0; var_160_int = 0; var_161_bool = 0; var_162_float = 0; var_163_bool = 0; var_164_int = 0; var_165_int = 0; var_166_int = 0; var_167_int = 0; var_168_bool = 0; var_169_float = 0; var_170_bool = 0;
	WaitForAnimEnd();
	var_171_bool = 0;
	func_1575(var_171_bool);
	var_172_bool = var_171_bool == 0; //@nz
	if(var_172_bool != 0) {
		return 14;
	}
	func_1660((int)0);
	var_173_int = var_164_int;
	var_165_int = 0;
	
Label_585:
	var_186_bool = 0;
	var_186_bool = 0;
	var_188_bool = var_165_int < (int)5;
	if(var_188_bool != 0) {
		var_189_bool = 0;
		func_1575(var_189_bool);
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
			func_1653(var_195_string, var_196_int);
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


func_1724(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_1981()
{
	return 0;
}


func_1338(var_39_float, var_40_object)
{
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	GetPosition(var_44_cvector);
	@@var_40_object:GetPosition(var_45_cvector);
	var_46_cvector = var_45_cvector - var_44_cvector;
	var_39_float = var_46_cvector | var_46_cvector;
	return 6;
}


func_1727()
{
	return 0;
}


func_1983(var_15_bool, var_16_object, var_17_object)
{
	var_18_string = ""; var_19_bool = 0; var_20_string = ""; var_21_bool = 0;
	var_22_bool = 0; var_23_object = Obj(); var_24_string = "";
	var_17_object = var_23_object;
	func_1346(var_22_bool, var_23_object, "class");
	var_31_bool = var_22_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	@@var_17_object:GetProperty("class", var_20_string);
	var_34_bool = var_20_string == "rat";
	if(var_34_bool != 0) {
		var_15_bool = 0;
		return 4;
	EMIT "GOTO 0x7d7";
	}
	var_36_bool = var_20_string == "dog";
	if(var_36_bool != 0) {
		var_15_bool = 0;
		return 4;
	}
	CanSee(var_21_bool, var_16_object);
	var_37_bool = 0;
	var_37_bool = 1;
	var_38_bool = var_21_bool;
	if(var_38_bool != 1) {
		var_39_float = 0; var_40_object = Obj();
		var_16_object = var_40_object;
		func_1338(var_39_float, var_40_object);
		var_48_bool = var_39_float <= (float)250000.0;
		if(var_48_bool != 1) {
			var_37_bool = 0;
		}
	}
	if(var_37_bool != 0) {
		ReportReputationChange(var_16_object, var_17_object, (float)-0.30000001192092896);
		var_15_bool = 1;
		return 4;
	}
	var_15_bool = 0;
	return 4;
}


func_1729(var_15_int)
{
	var_15_int = 0;
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


func_1732()
{
	return 0;
}


func_1601(var_74_float, var_75_cvector, var_76_cvector)
{
	var_77_int = var_75_cvector | var_76_cvector;
	var_78_int = var_75_cvector | var_75_cvector;
	var_79_int = var_76_cvector | var_76_cvector;
	var_80_float = var_78_int * var_79_int;
	var_81_float = sqrt(var_80_float);
	var_74_float = var_77_int / var_81_float;
	return 0;
}


func_1734(var_14_int)
{
	var_14_int = 2;
	return 0;
}


func_454(var_155_bool)
{
	var_155_bool = 0;
	return 0;
}


func_1346(var_38_bool, var_39_object, var_40_string)
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


func_1737(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_1962(var_21_object);
	return 0;
}


func_970(var_0_bool, var_25_cvector, var_26_float)
{
	var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0;
	GetPosition(var_33_cvector);
	@@@var_0_bool:GetPosition(var_34_cvector);
	GetDirection(var_35_cvector);
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0);
	var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
	var_42_cvector = var_33_cvector - var_34_cvector;
	func_1580(var_41_cvector, var_42_cvector);
	var_49_float = var_35_cvector * (float)0.75;
	var_40_cvector = var_41_cvector + var_49_float;
	func_1580(var_39_cvector, var_40_cvector);
	var_39_cvector = var_36_cvector;
	FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, (int)32, (float)7000.0);
	var_38_float = var_38_float - (int)100;
	var_54_bool = var_38_float < (int)0;
	if(var_54_bool != 0) {
		var_38_float = 0;
	}
	var_25_cvector = var_37_cvector * var_38_float;
	return 12;
}


func_1609(var_22_int)
{
	var_23_float = 0; var_24_float = 0;
	GetGameTime(var_24_float);
	var_26_int = 0;
	var_26_int = var_24_float / (int)24;
	var_22_int = (int)1 + var_26_int;
	return 2;
}


func_1484(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_17_object = var_21_object;
	func_1448(var_20_bool, var_21_object);
	var_37_bool = var_20_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_17_object = var_39_object;
	func_1346(var_38_bool, var_39_object, "noaccess");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	@@var_17_object:GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == (int)0;
	return 2;
}


func_1358(var_169_bool, var_170_object, var_171_string, var_172_float, var_173_float, var_174_float)
{
	var_175_float = 0; var_176_float = 0;
	var_177_bool = 0; var_178_object = Obj(); var_179_string = "";
	var_170_object = var_178_object;
	var_171_string = var_179_string;
	func_1346(var_177_bool, var_178_object, var_179_string);
	var_180_bool = var_177_bool == 0; //@nz
	if(var_180_bool != 0) {
		var_169_bool = 0;
		return 2;
	}
	@@var_170_object:GetProperty(var_171_string, var_176_float);
	var_181_float = 0; var_182_float = 0; var_183_float = 0; var_184_float = 0;
	var_182_float = var_176_float + var_172_float;
	var_173_float = var_183_float;
	var_174_float = var_184_float;
	func_1590(var_181_float, var_182_float, var_183_float, var_184_float);
	@@var_170_object:SetProperty(var_171_string, var_181_float);
	var_169_bool = 1;
	return 2;
}


func_1743()
{
	return 0;
}


func_336(var_2_bool, var_12_object)
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_12_object = var_18_object;
	func_1484(var_17_bool, var_18_object);
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
	func_1677(var_55_object);
	var_54_int = var_16_int;
	var_57_bool = var_16_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_16_int > (int)1;
		if(var_59_bool != 0) {
			func_319(var_16_int);
		}
		var_61_object = Obj();
		var_12_object = var_61_object;
		func_1680(var_61_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1744(var_19_int, var_20_int)
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
		if(var_47_bool == 0) goto Label_1762;
		return 8;
	}
Label_1762:
	(int)0 = (int)0 + var_19_int;
	var_43_bool = var_34_int == (int)0;
	if(var_43_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_36_int, "Money");
	AddItem(var_37_bool, var_36_int, (int)0, var_34_int);
	return 8;
	
}


func_1618(var_12_object)
{
	var_13_object = Obj();
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
	return 0;
}


func_732()
{
	StopAsync();
	StopAnimation();
	return 0;
}


func_1116(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
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


func_1380(var_139_float, var_140_object, var_141_float)
{
	var_142_int = 0; var_143_float = 0; var_144_float = 0; var_145_int = 0; var_146_float = 0; var_147_float = 0;
	var_148_bool = 0; var_149_object = Obj(); var_150_string = "";
	var_140_object = var_149_object;
	func_1346(var_148_bool, var_149_object, "disease");
	var_151_bool = var_148_bool == 0; //@nz
	if(var_151_bool != 0) {
		var_139_float = 0;
		return 6;
	}
	var_152_bool = 0; var_153_object = Obj(); var_154_string = "";
	var_140_object = var_153_object;
	func_1346(var_152_bool, var_153_object, "armor_disease");
	if(var_152_bool != 0) {
		@@var_140_object:GetProperty("armor_disease", var_145_int);
		var_157_bool = var_145_int < (int)100;
		if(var_157_bool != 0) {
			var_160_float = var_145_int / (float)100.0;
			var_161_int = (int)1 - var_160_float;
			var_141_float = var_141_float * var_161_int;
		} else {
					var_139_float = 0;
					return 6;
		}
	}
	var_162_bool = 0; var_163_object = Obj(); var_164_string = "";
	var_140_object = var_163_object;
	func_1346(var_162_bool, var_163_object, "immunity");
	if(var_162_bool != 0) {
		@@var_140_object:GetProperty("immunity", var_147_float);
		var_166_bool = var_147_float < var_141_float;
		if(var_166_bool != 0) {
			@@var_140_object:SetProperty("immunity", (int)0);
			var_146_float = var_141_float - var_147_float;
		} else {
			var_188_int = var_147_float - var_141_float;
			@@var_140_object:SetProperty("immunity", var_188_int);
			var_141_float = var_139_float;
			return 6;

		}
	}
	var_169_bool = 0; var_170_object = Obj(); var_171_string = ""; var_172_float = 0; var_173_float = 0; var_174_float = 0;
	var_140_object = var_170_object;
	var_146_float = var_172_float;
	func_1358(var_169_bool, var_170_object, "disease", var_172_float, (float)0, (float)1);
	var_141_float = var_139_float;
	return 6;
	
}


func_1508(var_15_object, var_16_int)
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


func_1000(var_0_bool, var_1_bool, var_2_bool, var_65_object)
{
	var_66_cvector = CVector(0,0,0); var_67_float = 0; var_68_bool = 0; var_69_cvector = CVector(0,0,0); var_70_float = 0; var_71_cvector = CVector(0,0,0); var_72_float = 0; var_73_bool = 0; var_74_cvector = CVector(0,0,0); var_75_float = 0;
	var_0_bool = var_65_object;
	var_76_cvector = CVector(0,0,0); var_77_float = 0;
	func_970(var_75_float, var_76_cvector, (float)1.7453293800354004);
	var_76_cvector = var_71_cvector;
	var_72_float = var_71_cvector | var_71_cvector;
	var_107_bool = var_72_float < (float)10000.0;
	if(var_107_bool != 0) {
		var_109_float = sqrt(var_72_float);
		var_110_int = "Can't retreat, distance: " + var_109_float;
		Trace(var_110_int);
		Sleep((float)0.5);
		return 10;
	}
	var_112_float = GetByIndex(var_71_cvector, 0);
	var_113_float = GetByIndex(var_71_cvector, 2);
	Rotate(var_112_float, var_113_float);
	var_114_cvector = CVector(0,0,0);
	func_1326(var_114_cvector);
	var_1_bool = var_114_cvector + var_71_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1033:
	MovePoint(var_1_bool, (int)1, var_73_bool);
	var_120_bool = var_73_bool;
	if(var_120_bool != 0) {
		var_121_bool = var_0_bool == 0; //@ne
		if(var_121_bool != 0) {
			goto Label_1063;
		EMIT "GOTO 0x425";

		Label_1063:
			return 10;
		}
		var_122_cvector = CVector(0,0,0); var_123_float = 0;
		func_970(var_75_float, var_122_cvector, (float)2.6179938316345215);
		var_122_cvector = var_74_cvector;
		var_75_float = var_74_cvector | var_74_cvector;
		var_125_bool = var_75_float >= (float)10000.0;
		if(var_125_bool != 0) {
			var_126_cvector = CVector(0,0,0);
			func_1326(var_126_cvector);
			var_1_bool = var_126_cvector + var_74_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1063;
		}
	}
	var_129_bool = var_2_bool == 0; //@nz
	if(var_129_bool == 1) goto Label_1033;
	
}


func_1132(var_0_bool, var_63_bool)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0);
	GetDirection(var_66_cvector);
	var_68_cvector = CVector(0,0,0); var_69_object = Obj();
	var_69_object = var_0_bool;
	func_1331(var_68_cvector, var_69_object);
	var_68_cvector = var_67_cvector;
	var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0);
	var_66_cvector = var_75_cvector;
	var_67_cvector = var_76_cvector;
	func_1601(var_74_float, var_75_cvector, var_76_cvector);
	var_63_bool = var_74_float >= (float)-0.3420201241970062;
	return 4;
}


func_2029()
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1774(var_13_bool)
{
	var_14_int = 0; var_15_bool = 0; var_16_int = 0; var_17_bool = 0;
	var_18_bool = var_13_bool;
	if(var_18_bool != 0) {
		var_19_int = 0; var_20_int = 0;
		var_22_int = 0;
		func_1609(var_22_int);
		var_29_float = var_22_int * (int)100;
		var_20_int = (int)100 + var_29_float;
		func_1744((int)0, var_20_int);
		irand(var_16_int, (int)9);
		var_50_bool = var_16_int == (int)0;
		if(var_50_bool != 0) {
			var_51_int = 0; var_52_string = "";
			func_1949(var_51_int, "lemon");
			AddItem(var_17_bool, var_51_int, (int)0, (int)1);
		} else {
			var_58_bool = var_16_int == (int)1;
			if(var_58_bool != 0) {
				var_59_int = 0; var_60_string = "";
				func_1949(var_59_int, "rusk");
				AddItem(var_17_bool, var_59_int, (int)0, (int)1);
				goto Label_1862;
			}
			var_64_bool = var_16_int == (int)2;
			if(var_64_bool != 0) {
				var_65_int = 0; var_66_string = "";
				func_1949(var_65_int, "hook");
				AddItem(var_17_bool, var_65_int, (int)0, (int)1);
				goto Label_1862;
			}
			var_70_bool = var_16_int == (int)4;
			if(var_70_bool != 0) {
				var_71_int = 0; var_72_string = "";
				func_1949(var_71_int, "syringe");
				AddItem(var_17_bool, var_71_int, (int)0, (int)1);
				goto Label_1862;
			}
			var_76_bool = var_16_int == (int)5;
			if(var_76_bool != 0) {
				var_77_int = 0; var_78_string = "";
				func_1949(var_77_int, "watch");
				AddItem(var_17_bool, var_77_int, (int)0, (int)1);
				goto Label_1862;
			}
			var_82_bool = var_16_int == (int)6;
			if(var_82_bool == 0) goto Label_1862;
			var_83_int = 0; var_84_string = "";
			func_1949(var_83_int, "razor");
			AddItem(var_17_bool, var_83_int, (int)0, (int)1);
	}
		var_87_int = 0; var_88_int = 0;
		var_90_int = 0;
		func_1609(var_90_int);
		var_92_float = var_90_int * (int)50;
		var_88_int = (int)50 + var_92_float;
		func_1744((int)0, var_88_int);
		irand(var_16_int, (int)8);
		var_95_bool = var_16_int == (int)0;
		if(var_95_bool != 0) {
			var_96_int = 0; var_97_string = "";
			func_1949(var_96_int, "beads");
			AddItem(var_17_bool, var_96_int, (int)0, (int)1);
			goto Label_1948;
		}
		var_101_bool = var_16_int == (int)1;
		if(var_101_bool != 0) {
			var_102_int = 0; var_103_string = "";
			func_1949(var_102_int, "bracelet");
			AddItem(var_17_bool, var_102_int, (int)0, (int)1);
			goto Label_1948;
		}
		var_107_bool = var_16_int == (int)2;
		if(var_107_bool != 0) {
			var_108_int = 0; var_109_string = "";
			func_1949(var_108_int, "ear_ring");
			AddItem(var_17_bool, var_108_int, (int)0, (int)1);
			goto Label_1948;
		}
		var_113_bool = var_16_int == (int)3;
		if(var_113_bool != 0) {
			var_114_int = 0; var_115_string = "";
			func_1949(var_114_int, "gold_ring");
			AddItem(var_17_bool, var_114_int, (int)0, (int)1);
			goto Label_1948;
		}
		var_119_bool = var_16_int == (int)4;
		if(var_119_bool != 0) {
			var_120_int = 0; var_121_string = "";
			func_1949(var_120_int, "silver_ring");
			AddItem(var_17_bool, var_120_int, (int)0, (int)1);
			goto Label_1948;
		}
		var_125_bool = var_16_int == (int)5;
		if(var_125_bool == 0) goto Label_1948;
		var_126_int = 0; var_127_string = "";
		func_1949(var_126_int, "flower");
		AddItem(var_17_bool, var_126_int, (int)0, (int)1);
	}
Label_1862:
	goto Label_1948;
	
Label_1948:
	return 4;
	
}


func_1653(var_179_string, var_180_int)
{
	var_181_string = ""; var_182_string = "";
	var_183_int = var_180_int;
	if(var_183_int != 0) {
		"idle" = "idle" + var_180_int;
	}
	var_182_string = var_179_string;
	return 2;
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


func_1660(var_173_int)
{
	var_174_int = 0; var_175_bool = 0; var_176_int = 0; var_177_bool = 0;
	var_176_int = 0;
	
Label_1662:
	var_179_string = ""; var_180_int = 0;
	var_176_int = var_180_int;
	func_1653(var_179_string, var_180_int);
	HasAnimation(var_177_bool, "all", var_179_string);
	var_184_bool = var_177_bool == 0; //@nz
	if(var_184_bool != 0) {
	} else {
		var_176_int = var_176_int + (int)1;
		goto Label_1662;
	}
	var_176_int = var_173_int;
	return 4;
	
}


