// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,GetGameTime/1,GetProperty/2,SignalDeath/1,HasAnimation/3,GetInvItemByName/2,AddItem/4,ClearSubContainer/1,IsOverrideActive/1,WorkWithCorpse/1,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:health|W:idle|W:GenerateMoney: iMin > iMax|W:Money|W:hook|W:watch|W:class|W:rat
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
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_6: op=0x383 vars=
// @EVENT_7: op=0x3e8 vars=int
// @EVENT_41: op=0x423 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x49a vars=int
// @EVENT_41: op=0x4d5 vars=object
// @STANDALONE_EVENT_16: op=0x5f4 vars=object,string
// @STANDALONE_EVENT_41: op=0x601 vars=object
// @STANDALONE_EVENT_22: op=0x607 vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x118,0x11e,0x124,0x147,0x1b1,0x334,0x367,0x423,0x4d5,0x5b7,0x5bf,0x5c8,0x5d2,0x5ec,0x601,0x607,0x627,0x630,0x638,0x642,0x64a,0x654,0x65c,0x65f,0x661,0x664,0x666,0x669,0x6fc

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1638(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_17_object = Obj();
		var_10_bool = var_17_object;
		func_1641(var_17_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_1647();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool, var_11_object, var_12_cvector, var_13_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1638(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_311(var_12_int);
		}
		var_20_object = Obj();
		var_10_bool = var_20_object;
		func_1641(var_20_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1592(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_50_bool = var_12_int > (int)0;
	if(var_50_bool != 0) {
		var_52_bool = var_12_int > (int)1;
		if(var_52_bool != 0) {
			func_311(var_12_int);
		}
		var_54_object = Obj();
		var_10_bool = var_54_object;
		func_1602(var_54_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_10_cvector = var_15_object;
	var_11_bool = var_16_object;
	func_1748(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_47_int = 0; var_48_object = Obj();
		var_10_cvector = var_48_object;
		func_1610(var_47_int, var_48_object);
		var_47_int = var_13_int;
		var_78_bool = var_13_int > (int)0;
		if(var_78_bool != 0) {
			var_80_bool = var_13_int > (int)1;
			if(var_80_bool != 0) {
				func_311(var_13_int);
			}
			var_82_object = Obj();
			var_10_cvector = var_82_object;
			func_1620(var_82_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1628(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_311(var_12_int);
		}
		var_10_bool = Obj();
		func_1631();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_string = ""; var_16_object = Obj();
	var_11_bool = var_15_string;
	var_10_cvector = var_16_object;
	func_1633(var_16_object);
	var_14_int = var_13_int;
	var_18_bool = var_13_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_13_int > (int)1;
		if(var_20_bool != 0) {
			func_311(var_13_int);
		}
		var_22_string = ""; var_23_object = Obj();
		var_11_bool = var_22_string;
		var_10_cvector = var_23_object;
		func_1636();
	}
	return 2;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_object = Obj();
	var_10_bool = var_11_object;
	func_336(var_10_bool, var_11_object);
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_object = Obj();
	var_10_bool = var_11_object;
	func_336(var_10_bool, var_11_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_12_bool = var_10_bool != (int)110;
	if(var_12_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_311(var_9_bool);
	func_1647();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_311(var_10_bool);
	var_10_bool = Obj();
	func_1537();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	RequestClearPath(var_10_bool);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1638(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_640();
		}
		var_19_object = Obj();
		var_10_bool = var_19_object;
		func_1641(var_19_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1592(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_50_bool = var_12_int > (int)0;
	if(var_50_bool != 0) {
		var_52_bool = var_12_int > (int)1;
		if(var_52_bool != 0) {
			func_640();
		}
		var_53_object = Obj();
		var_10_bool = var_53_object;
		func_1602(var_53_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_10_cvector = var_15_object;
	var_11_bool = var_16_object;
	func_1748(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_47_int = 0; var_48_object = Obj();
		var_10_cvector = var_48_object;
		func_1610(var_47_int, var_48_object);
		var_47_int = var_13_int;
		var_78_bool = var_13_int > (int)0;
		if(var_78_bool != 0) {
			var_80_bool = var_13_int > (int)1;
			if(var_80_bool != 0) {
				func_640();
			}
			var_81_object = Obj();
			var_10_cvector = var_81_object;
			func_1620(var_81_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1628(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_640();
		}
		var_10_bool = Obj();
		func_1631();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_string = ""; var_16_object = Obj();
	var_11_bool = var_15_string;
	var_10_cvector = var_16_object;
	func_1633(var_16_object);
	var_14_int = var_13_int;
	var_18_bool = var_13_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_13_int > (int)1;
		if(var_20_bool != 0) {
			func_640();
		}
		var_21_string = ""; var_22_object = Obj();
		var_11_bool = var_21_string;
		var_10_cvector = var_22_object;
		func_1636();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_640();
	func_1647();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1638(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_809();
		}
		var_21_object = Obj();
		var_10_bool = var_21_object;
		func_1641(var_21_object);
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1592(var_13_int, var_14_object);
	var_13_int = var_12_int;
	var_50_bool = var_12_int > (int)0;
	if(var_50_bool != 0) {
		var_52_bool = var_12_int > (int)1;
		if(var_52_bool != 0) {
			func_809();
		}
		var_55_object = Obj();
		var_10_bool = var_55_object;
		func_1602(var_55_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj(); var_16_object = Obj();
	var_10_cvector = var_15_object;
	var_11_bool = var_16_object;
	func_1748(var_14_bool, var_15_object, var_16_object);
	if(var_14_bool != 0) {
		var_47_int = 0; var_48_object = Obj();
		var_10_cvector = var_48_object;
		func_1610(var_47_int, var_48_object);
		var_47_int = var_13_int;
		var_78_bool = var_13_int > (int)0;
		if(var_78_bool != 0) {
			var_80_bool = var_13_int > (int)1;
			if(var_80_bool != 0) {
				func_809();
			}
			var_83_object = Obj();
			var_10_cvector = var_83_object;
			func_1620(var_83_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_object = Obj();
	var_10_bool = var_14_object;
	func_1628(var_14_object);
	var_13_int = var_12_int;
	var_16_bool = var_12_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_12_int > (int)1;
		if(var_18_bool != 0) {
			func_809();
		}
		var_10_bool = Obj();
		func_1631();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	var_12_int = 0; var_13_int = 0;
	var_14_int = 0; var_15_string = ""; var_16_object = Obj();
	var_11_bool = var_15_string;
	var_10_cvector = var_16_object;
	func_1633(var_16_object);
	var_14_int = var_13_int;
	var_18_bool = var_13_int > (int)0;
	if(var_18_bool != 0) {
		var_20_bool = var_13_int > (int)1;
		if(var_20_bool != 0) {
			func_809();
		}
		var_23_string = ""; var_24_object = Obj();
		var_11_bool = var_23_string;
		var_10_cvector = var_24_object;
		func_1636();
	}
	return 2;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	func_809();
	var_10_bool = Obj();
	func_1537();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_int, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0);
	var_16_bool = var_10_bool != (int)111;
	if(var_16_bool != 0) {
		return 4;
	}
	var_17_bool = 0; var_18_object = Obj();
	var_18_object = var_0_bool;
	func_1335(var_17_bool, var_18_object);
	var_51_bool = var_17_bool == 0; //@nz
	if(var_51_bool != 0) {
		func_809();
		return 4;
	}
	GetDirection(var_13_cvector);
	var_54_cvector = CVector(0,0,0); var_55_object = Obj();
	var_55_object = var_0_bool;
	func_1267(var_54_cvector, var_55_object);
	var_54_cvector = var_14_cvector;
	var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
	var_13_cvector = var_61_cvector;
	var_14_cvector = var_62_cvector;
	func_1490(var_60_float, var_61_cvector, var_62_cvector);
	var_85_bool = var_60_float < (float)0.4999999701976776;
	if(var_85_bool != 0) {
		var_86_object = Obj();
		var_86_object = var_0_bool;
		func_1426(var_86_object);
	}
	return 4;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_809();
	func_1647();
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_1052(var_9_bool);
	func_1647();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_int, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0;
	var_20_bool = var_10_bool != (int)120;
	if(var_20_bool != 0) {
		return 8;
	}
	var_21_bool = var_0_bool == 0; //@ne
	if(var_21_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_15_cvector);
		FindDirLength(var_16_float, var_15_cvector, (float)7000.0);
		var_24_cvector = CVector(0,0,0); var_25_float = 0;
		func_906(var_18_float, var_24_cvector, (float)1.7453293800354004);
		var_24_cvector = var_17_cvector;
		var_18_float = var_17_cvector | var_17_cvector;
		var_54_bool = 0;
		var_54_bool = 0;
		var_56_bool = var_18_float >= (float)10000.0;
		if(var_56_bool != 0) {
			var_57_bool = 0;
			var_58_float = var_16_float * var_16_float;
			var_60_float = var_58_float * (float)2.25;
			var_61_bool = var_18_float >= var_60_float;
			if(var_61_bool != 1) {
				var_62_bool = 0;
				func_1068((bool)1, var_62_bool);
				if(var_62_bool != 1) {
					var_57_bool = 0;
				}
			}
			if(var_57_bool != 0) {
				var_54_bool = 1;
			}
		}
		if(var_54_bool == 0) goto Label_1051;
		Stop();
		var_82_cvector = CVector(0,0,0);
		func_1262(var_82_cvector);
		var_1_bool = var_82_cvector + var_17_cvector;
	}
Label_1051:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_object, var_9_cvector, var_10_bool)
{
	func_1052(var_10_bool);
	var_10_bool = Obj();
	func_1537();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_int)
{
	var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0;
	var_20_bool = var_10_int != (int)120;
	if(var_20_bool != 0) {
		return 8;
	}
	var_21_bool = var_0_bool == 0; //@ne
	if(var_21_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_15_cvector);
		FindDirLength(var_16_float, var_15_cvector, (float)7000.0);
		var_24_cvector = CVector(0,0,0); var_25_float = 0;
		func_1084(var_18_float, var_24_cvector, (float)1.7453293800354004);
		var_24_cvector = var_17_cvector;
		var_18_float = var_17_cvector | var_17_cvector;
		var_54_bool = 0;
		var_54_bool = 0;
		var_56_bool = var_18_float >= (float)10000.0;
		if(var_56_bool != 0) {
			var_57_bool = 0;
			var_58_float = var_16_float * var_16_float;
			var_60_float = var_58_float * (float)2.25;
			var_61_bool = var_18_float >= var_60_float;
			if(var_61_bool != 1) {
				var_62_bool = 0;
				func_1246((bool)1, var_62_bool);
				if(var_62_bool != 1) {
					var_57_bool = 0;
				}
			}
			if(var_57_bool != 0) {
				var_54_bool = 1;
			}
		}
		if(var_54_bool == 0) goto Label_1229;
		Stop();
		var_82_cvector = CVector(0,0,0);
		func_1262(var_82_cvector);
		var_1_bool = var_82_cvector + var_17_cvector;
	}
Label_1229:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	func_1230(var_10_object);
	var_10_object = Obj();
	func_1537();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_string)
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


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_1516(var_11_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_int, var_12_float, var_13_float)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0;
	var_10_object = var_14_object;
	var_11_int = var_15_int;
	var_12_float = var_16_float;
	func_1359(var_15_int, var_16_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	SensePlayerOnly((bool)1);
	func_1727();
	func_163();
	
Label_157:
	var_2_bool = false;
	func_376(var_8_cvector, var_9_bool);
	goto Label_157;
}
EMIT "Return(); Pop(0)";


func_640()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_0(var_12_object)
{
	EventDisable(0);
	var_13_object = Obj();
	var_12_object = var_13_object;
	func_33(var_13_object);
	var_12_object = Obj();
	func_1788();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1282(var_39_bool, var_40_object, var_41_string)
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


func_645(var_0_bool, var_62_object)
{
	var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_bool = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_bool = 0;
	var_0_bool = var_62_object;
	func_696(var_69_bool);
	GetDirection(var_67_cvector);
	var_77_cvector = CVector(0,0,0); var_78_object = Obj();
	var_78_object = var_0_bool;
	func_1267(var_77_cvector, var_78_object);
	var_77_cvector = var_68_cvector;
	var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0);
	var_67_cvector = var_84_cvector;
	var_68_cvector = var_85_cvector;
	func_1490(var_83_float, var_84_cvector, var_85_cvector);
	var_108_bool = var_83_float < (int)0;
	if(var_108_bool != 0) {
		var_109_object = Obj();
		var_109_object = var_0_bool;
		func_1426(var_109_object);
		var_69_bool = 1;
	} else {
		Sleep((float)1.5, var_69_bool);
	}
	var_118_bool = var_69_bool;
	if(var_118_bool != 0) {
		var_119_object = Obj();
		var_119_object = var_0_bool;
		func_1426(var_119_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_906(var_0_bool, var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0;
	GetPosition(var_32_cvector);
	@@@var_0_bool:GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	var_41_cvector = var_32_cvector - var_33_cvector;
	func_1453(var_40_cvector, var_41_cvector);
	var_48_float = var_34_cvector * (float)0.75;
	var_39_cvector = var_40_cvector + var_48_float;
	func_1453(var_38_cvector, var_39_cvector);
	var_38_cvector = var_35_cvector;
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, (int)32, (float)7000.0);
	var_37_float = var_37_float - (int)100;
	var_53_bool = var_37_float < (int)0;
	if(var_53_bool != 0) {
		var_37_float = 0;
	}
	var_24_cvector = var_36_cvector * var_37_float;
	return 12;
}


func_1294(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	@@var_33_object:IsDead(var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_1551(var_112_string, var_113_int)
{
	var_114_string = ""; var_115_string = "";
	var_116_int = var_113_int;
	if(var_116_int != 0) {
		"idle" = "idle" + var_113_int;
	}
	var_115_string = var_112_string;
	return 2;
}


func_1678()
{
	var_13_bool = 0; var_14_int = 0; var_15_bool = 0; var_16_int = 0;
	ClearSubContainer((int)0);
	var_18_int = 0; var_19_int = 0;
	var_21_int = 0;
	func_1507(var_21_int);
	var_28_float = var_21_int * (int)10;
	var_19_int = (int)10 + var_28_float;
	func_1648((int)0, var_19_int);
	irand(var_16_int, (int)4);
	var_49_bool = var_16_int == (int)0;
	if(var_49_bool != 0) {
		var_50_int = 0; var_51_string = "";
		func_1722(var_50_int, "hook");
		AddItem(var_15_bool, var_50_int, (int)0, (int)1);
	}
	irand(var_16_int, (int)10);
	var_58_bool = var_16_int == (int)0;
	if(var_58_bool != 0) {
		var_59_int = 0; var_60_string = "";
		func_1722(var_59_int, "watch");
		AddItem(var_15_bool, var_59_int, (int)0, (int)1);
	}
	return 4;
}


func_1426(var_86_object)
{
	var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0); var_92_cvector = CVector(0,0,0);
	@@var_86_object:GetPosition(var_90_cvector);
	GetPosition(var_91_cvector);
	var_92_cvector = var_90_cvector - var_91_cvector;
	var_93_float = GetByIndex(var_92_cvector, 0);
	var_94_float = GetByIndex(var_92_cvector, 2);
	RotateAsync(var_93_float, var_94_float);
	return 6;
}


func_1299(var_21_bool, var_22_object)
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
		func_1294(var_32_bool, var_33_object);
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


func_1558(var_106_int)
{
	var_107_int = 0; var_108_bool = 0; var_109_int = 0; var_110_bool = 0;
	var_109_int = 0;
	
Label_1560:
	var_112_string = ""; var_113_int = 0;
	var_109_int = var_113_int;
	func_1551(var_112_string, var_113_int);
	HasAnimation(var_110_bool, "all", var_112_string);
	var_117_bool = var_110_bool == 0; //@nz
	if(var_117_bool != 0) {
	} else {
		var_109_int = var_109_int + (int)1;
		goto Label_1560;
	}
	var_109_int = var_106_int;
	return 4;
	
}


func_1052(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1437(var_63_bool)
{
	var_64_bool = 0; var_65_bool = 0;
	IsLoaded(var_65_bool);
	var_65_bool = var_63_bool;
	return 2;
}


func_33(var_13_object)
{
	var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_string = ""; var_19_object = Obj(); var_20_bool = 0; var_21_bool = 0; var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_string = ""; var_29_object = Obj(); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = var_13_object == 0; //@ne
	if(var_34_bool != 0) {
		var_35_string = "";
		func_120("fdie");
	} else {
		@@var_13_object:GetPosition(var_24_cvector);
		GetPosition(var_25_cvector);
		GetDirection(var_26_cvector);
		var_27_cvector = var_25_cvector - var_24_cvector;
		var_38_float = GetByIndex(var_27_cvector, 0);
		var_39_float = GetByIndex(var_26_cvector, 0);
		var_40_float = var_38_float * var_39_float;
		var_41_float = GetByIndex(var_27_cvector, 2);
		var_42_float = GetByIndex(var_26_cvector, 2);
		var_43_float = var_41_float * var_42_float;
		var_44_int = var_40_float + var_43_float;
		var_46_bool = var_44_int >= (int)0;
		if(var_46_bool != 0) {
			var_28_string = "fdie";
		} else {
				var_28_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_13_object = var_29_object;
		var_49_bool = IsFuncExist(var_13_object, "GetScriptProperty", (int)2);
		if(var_49_bool != 0) {
			@@var_13_object:HasScriptProperty(var_30_bool, "Owner");
			var_51_bool = var_30_bool;
			if(var_51_bool != 0) {
				@@var_13_object:GetScriptProperty(var_29_object, "Owner");
				var_53_bool = var_29_object == 0; //@ne
				if(var_53_bool != 0) {
					var_13_object = var_29_object;
				}
			}
		}
		var_56_bool = IsFuncExist(var_29_object, "@GetEyesHeight", (int)1);
		if(var_56_bool != 0) {
			@@var_29_object:GetEyesHeight(var_32_float);
			var_33_cvector = CVector(0.0, 0.0, 0.0);
			var_57_float = GetByIndex(var_33_cvector, 1);
			var_32_float = var_57_float;
			SetByIndex(var_33_cvector, 1) = var_57_float;
			LookAsync(var_13_object, "head", var_33_cvector);
			var_31_bool = 1;
		} else {
			var_31_bool = 0;

		}
		PlayAnimation("all", var_28_string);
		WaitForAnimEnd();
		var_60_bool = var_31_bool;
		if(var_60_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_28_string);
		RemoveEnvelope();
		var_29_object = 0;
	}
	return 20;
	
}


func_1442(var_70_object)
{
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_cvector = CVector(0,0,0);
	@@var_70_object:GetEyesHeight(var_73_float);
	var_74_cvector = CVector(0.0, 0.0, 0.0);
	var_75_float = GetByIndex(var_74_cvector, 1);
	var_73_float = var_75_float;
	SetByIndex(var_74_cvector, 1) = var_75_float;
	LookAsync(var_70_object, "head", var_74_cvector);
	return 4;
}


func_163()
{
	var_63_bool = 0;
	func_1437(var_63_bool);
	var_66_bool = var_63_bool == 0; //@nz
	if(var_66_bool != 0) {
		func_1647();
	}
	return 0;
}


func_1575(var_53_int)
{
	var_55_bool = 0;
	func_1746(var_55_bool);
	if(var_55_bool != 0) {
		var_53_int = 2;
	} else {
		var_53_int = 0;
	}
	return 0;
	
}


func_936(var_0_bool, var_1_bool, var_2_bool, var_66_object)
{
	var_67_cvector = CVector(0,0,0); var_68_float = 0; var_69_bool = 0; var_70_cvector = CVector(0,0,0); var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0;
	var_0_bool = var_66_object;
	var_77_cvector = CVector(0,0,0); var_78_float = 0;
	func_906(var_76_float, var_77_cvector, (float)1.7453293800354004);
	var_77_cvector = var_72_cvector;
	var_73_float = var_72_cvector | var_72_cvector;
	var_108_bool = var_73_float < (float)10000.0;
	if(var_108_bool != 0) {
		var_110_float = sqrt(var_73_float);
		var_111_int = "Can't retreat, distance: " + var_110_float;
		Trace(var_111_int);
		Sleep((float)0.5);
		return 10;
	}
	var_113_float = GetByIndex(var_72_cvector, 0);
	var_114_float = GetByIndex(var_72_cvector, 2);
	Rotate(var_113_float, var_114_float);
	var_115_cvector = CVector(0,0,0);
	func_1262(var_115_cvector);
	var_1_bool = var_115_cvector + var_72_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_969:
	MovePoint(var_1_bool, (int)1, var_74_bool);
	var_121_bool = var_74_bool;
	if(var_121_bool != 0) {
		var_122_bool = var_0_bool == 0; //@ne
		if(var_122_bool != 0) {
			goto Label_999;
		EMIT "GOTO 0x3e5";

		Label_999:
			return 10;
		}
		var_123_cvector = CVector(0,0,0); var_124_float = 0;
		func_906(var_76_float, var_123_cvector, (float)2.6179938316345215);
		var_123_cvector = var_75_cvector;
		var_76_float = var_75_cvector | var_75_cvector;
		var_126_bool = var_76_float >= (float)10000.0;
		if(var_126_bool != 0) {
			var_127_cvector = CVector(0,0,0);
			func_1262(var_127_cvector);
			var_1_bool = var_127_cvector + var_75_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_999;
		}
	}
	var_130_bool = var_2_bool == 0; //@nz
	if(var_130_bool == 1) goto Label_969;
	
}


func_809()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1068(var_0_bool, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetDirection(var_65_cvector);
	var_67_cvector = CVector(0,0,0); var_68_object = Obj();
	var_68_object = var_0_bool;
	func_1267(var_67_cvector, var_68_object);
	var_67_cvector = var_66_cvector;
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1463(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= (float)-0.3420201241970062;
	return 4;
}


func_1453(var_40_cvector, var_41_cvector)
{
	var_42_float = 0; var_43_float = 0;
	var_44_int = var_41_cvector | var_41_cvector;
	var_43_float = sqrt(var_44_int);
	var_45_float = 9.999999974752427e-07;
	var_46_bool = var_43_float < var_45_float;
	if(var_46_bool != 0) {
		var_40_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_40_cvector = var_41_cvector / var_43_float;
	return 2;
}


func_1584(var_61_object)
{
	var_62_object = Obj();
	var_61_object = var_62_object;
	TaskCall(3);
	func_645(var_63_object, var_62_object);
	TaskReturn();
	return 0;
}


func_311(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_440(var_9_cvector, var_10_bool);
	return 0;
}


func_1592(var_13_int, var_14_object)
{
	var_15_bool = 0; var_16_object = Obj();
	var_14_object = var_16_object;
	func_1335(var_15_bool, var_16_object);
	if(var_15_bool != 0) {
		var_13_int = 2;
	} else {
		var_13_int = 0;
	}
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


func_1335(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_18_object = var_22_object;
	func_1299(var_21_bool, var_22_object);
	var_38_bool = var_21_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_18_object = var_40_object;
	func_1282(var_39_bool, var_40_object, "noaccess");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	@@var_18_object:GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == (int)0;
	return 2;
}


func_571()
{
	var_90_int = 0; var_91_int = 0; var_92_int = 0; var_93_int = 0; var_94_bool = 0; var_95_float = 0; var_96_bool = 0; var_97_int = 0; var_98_int = 0; var_99_int = 0; var_100_int = 0; var_101_bool = 0; var_102_float = 0; var_103_bool = 0;
	WaitForAnimEnd();
	var_104_bool = 0;
	func_1437(var_104_bool);
	var_105_bool = var_104_bool == 0; //@nz
	if(var_105_bool != 0) {
		return 14;
	}
	func_1558((int)0);
	var_106_int = var_97_int;
	var_98_int = 0;
	
Label_585:
	var_119_bool = 0;
	var_119_bool = 0;
	var_121_bool = var_98_int < (int)5;
	if(var_121_bool != 0) {
		var_122_bool = 0;
		func_1437(var_122_bool);
		if(var_122_bool != 0) {
			var_119_bool = 1;
		}
	}
	if(var_119_bool != 0) {
		irand(var_99_int, (int)3);
		var_125_bool = var_99_int == (int)0;
		if(var_125_bool != 0) {
			var_126_int = var_97_int;
			if(var_126_int == 0) goto Label_618;
			irand(var_100_int, var_97_int);
			var_128_string = ""; var_129_int = 0;
			var_100_int = var_129_int;
			func_1551(var_128_string, var_129_int);
			PlayAnimation("all", var_128_string);
			WaitForAnimEnd(var_101_bool);
			var_130_bool = var_101_bool == 0; //@nz
			if(var_130_bool != 0) {
			} else {
		} else {
				var_133_bool = var_99_int == (int)1;
				if(var_133_bool != 0) {
					rand(var_102_float, (int)4);
					var_136_int = var_102_float + (int)1;
					Sleep(var_136_int, var_103_bool);
					var_137_bool = var_103_bool == 0; //@nz
					if(var_137_bool != 0) {
						goto Label_639;
					}
					goto Label_636;
				}
				var_138_int = var_98_int;
				if(var_138_int == 0) goto Label_636;
				goto Label_639;
		}
		Label_636:
			var_98_int = var_98_int + (int)1;
			goto Label_585;

		}
	}
Label_639:
	return 14;
	
}


func_696(var_0_bool)
{
	var_70_object = Obj();
	var_70_object = var_0_bool;
	func_1442(var_70_object);
	return 0;
}


func_1463(var_73_float, var_74_cvector, var_75_cvector)
{
	var_76_int = var_74_cvector | var_75_cvector;
	var_77_int = var_74_cvector | var_74_cvector;
	var_78_int = var_75_cvector | var_75_cvector;
	var_79_float = var_77_int * var_78_int;
	var_80_float = sqrt(var_79_float);
	var_73_float = var_76_int / var_80_float;
	return 0;
}


func_1084(var_0_bool, var_24_cvector, var_25_float)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_float = 0;
	GetPosition(var_32_cvector);
	@@@var_0_bool:GetPosition(var_33_cvector);
	GetDirection(var_34_cvector);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
	var_41_cvector = var_32_cvector - var_33_cvector;
	func_1453(var_40_cvector, var_41_cvector);
	var_48_float = var_34_cvector * (float)0.75;
	var_39_cvector = var_40_cvector + var_48_float;
	func_1453(var_38_cvector, var_39_cvector);
	var_38_cvector = var_35_cvector;
	FindLongestDir(var_36_cvector, var_37_float, var_35_cvector, var_25_float, (int)32, (float)7000.0);
	var_37_float = var_37_float - (int)100;
	var_53_bool = var_37_float < (int)0;
	if(var_53_bool != 0) {
		var_37_float = 0;
	}
	var_24_cvector = var_36_cvector * var_37_float;
	return 12;
}


func_1727()
{
	var_11_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	var_12_bool = 0;
	var_12_bool = 0;
	func_1678();
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
	func_447(var_14_bool, var_15_int);
	return 0;
}


func_1602(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	TaskCall(4);
	func_871(var_56_object);
	TaskReturn();
	return 0;
}


func_1471(var_63_float, var_64_cvector, var_65_cvector)
{
	var_66_float = GetByIndex(var_64_cvector, 0);
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = var_66_float * var_67_float;
	var_69_float = GetByIndex(var_64_cvector, 2);
	var_70_float = GetByIndex(var_65_cvector, 2);
	var_71_float = var_69_float * var_70_float;
	var_63_float = var_68_float + var_71_float;
	return 0;
}


func_454(var_88_bool)
{
	var_88_bool = 0;
	return 0;
}


func_1735(var_22_object)
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


func_1480(var_72_float, var_73_cvector)
{
	var_74_float = GetByIndex(var_73_cvector, 0);
	var_75_float = GetByIndex(var_73_cvector, 0);
	var_76_float = var_74_float * var_75_float;
	var_77_float = GetByIndex(var_73_cvector, 2);
	var_78_float = GetByIndex(var_73_cvector, 2);
	var_79_float = var_77_float * var_78_float;
	var_80_int = var_76_float + var_79_float;
	var_72_float = sqrt(var_80_int);
	return 0;
}


func_1610(var_47_int, var_48_object)
{
	var_49_bool = 0; var_50_object = Obj();
	var_48_object = var_50_object;
	func_1335(var_49_bool, var_50_object);
	if(var_49_bool != 0) {
		var_47_int = 2;
	} else {
		var_47_int = 0;
	}
	return 0;
	
}


func_1230(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1359(var_14_object, var_15_int)
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


func_336(var_2_bool, var_11_object)
{
	var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_int = 0;
	var_16_bool = 0; var_17_object = Obj();
	var_11_object = var_17_object;
	func_1335(var_16_bool, var_17_object);
	var_50_bool = var_16_bool == 0; //@nz
	if(var_50_bool != 0) {
		return 4;
	}
	var_51_bool = var_2_bool;
	if(var_51_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_11_object, var_14_bool);
	var_52_bool = var_14_bool == 0; //@nz
	if(var_52_bool != 0) {
		return 4;
	}
	var_53_int = 0; var_54_object = Obj();
	var_11_object = var_54_object;
	func_1575(var_54_object);
	var_53_int = var_15_int;
	var_57_bool = var_15_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_15_int > (int)1;
		if(var_59_bool != 0) {
			func_319(var_15_int);
		}
		var_61_object = Obj();
		var_11_object = var_61_object;
		func_1584(var_61_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_1490(var_60_float, var_61_cvector, var_62_cvector)
{
	var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	var_61_cvector = var_64_cvector;
	var_62_cvector = var_65_cvector;
	func_1471(var_63_float, var_64_cvector, var_65_cvector);
	var_72_float = 0; var_73_cvector = CVector(0,0,0);
	var_61_cvector = var_73_cvector;
	func_1480(var_72_float, var_73_cvector);
	var_81_float = 0; var_82_cvector = CVector(0,0,0);
	var_62_cvector = var_82_cvector;
	func_1480(var_81_float, var_82_cvector);
	var_83_float = var_72_float * var_81_float;
	var_60_float = var_63_float / var_83_float;
	return 0;
}


func_1746(var_55_bool)
{
	var_55_bool = 1;
	return 0;
}


func_1748(var_14_bool, var_15_object, var_16_object)
{
	var_17_string = ""; var_18_bool = 0; var_19_string = ""; var_20_bool = 0;
	var_21_bool = 0; var_22_object = Obj(); var_23_string = "";
	var_16_object = var_22_object;
	func_1282(var_21_bool, var_22_object, "class");
	var_30_bool = var_21_bool == 0; //@nz
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_16_object:GetProperty("class", var_19_string);
	var_33_bool = var_19_string == "rat";
	if(var_33_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	CanSee(var_20_bool, var_15_object);
	var_34_bool = 0;
	var_34_bool = 1;
	var_35_bool = var_20_bool;
	if(var_35_bool != 1) {
		var_36_float = 0; var_37_object = Obj();
		var_15_object = var_37_object;
		func_1274(var_36_float, var_37_object);
		var_45_bool = var_36_float <= (float)250000.0;
		if(var_45_bool != 1) {
			var_34_bool = 0;
		}
	}
	if(var_34_bool != 0) {
		ReportReputationChange(var_15_object, var_16_object, (float)-0.30000001192092896);
		var_14_bool = 1;
		return 4;
	}
	var_14_bool = 0;
	return 4;
}


func_1620(var_83_object)
{
	var_84_object = Obj();
	var_83_object = var_84_object;
	TaskCall(5);
	func_1114(var_85_object, var_86_cvector, var_87_bool, var_84_object);
	TaskReturn();
	return 0;
}


func_1722(var_50_int, var_51_string)
{
	var_52_int = 0; var_53_int = 0;
	GetInvItemByName(var_53_int, var_51_string);
	var_53_int = var_50_int;
	return 2;
}


func_1114(var_0_bool, var_1_bool, var_2_bool, var_84_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0;
	var_0_bool = var_84_object;
	var_98_cvector = CVector(0,0,0); var_99_float = 0;
	func_1084(var_97_float, var_98_cvector, (float)1.7453293800354004);
	var_98_cvector = var_93_cvector;
	var_94_float = var_93_cvector | var_93_cvector;
	var_129_bool = var_94_float < (float)10000.0;
	if(var_129_bool != 0) {
		var_131_float = sqrt(var_94_float);
		var_132_int = "Can't retreat, distance: " + var_131_float;
		Trace(var_132_int);
		Sleep((float)0.5);
		return 10;
	}
	var_134_float = GetByIndex(var_93_cvector, 0);
	var_135_float = GetByIndex(var_93_cvector, 2);
	Rotate(var_134_float, var_135_float);
	var_136_cvector = CVector(0,0,0);
	func_1262(var_136_cvector);
	var_1_bool = var_136_cvector + var_93_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_1147:
	MovePoint(var_1_bool, (int)1, var_95_bool);
	var_142_bool = var_95_bool;
	if(var_142_bool != 0) {
		var_143_bool = var_0_bool == 0; //@ne
		if(var_143_bool != 0) {
			goto Label_1177;
		EMIT "GOTO 0x497";

		Label_1177:
			return 10;
		}
		var_144_cvector = CVector(0,0,0); var_145_float = 0;
		func_1084(var_97_float, var_144_cvector, (float)2.6179938316345215);
		var_144_cvector = var_96_cvector;
		var_97_float = var_96_cvector | var_96_cvector;
		var_147_bool = var_97_float >= (float)10000.0;
		if(var_147_bool != 0) {
			var_148_cvector = CVector(0,0,0);
			func_1262(var_148_cvector);
			var_1_bool = var_148_cvector + var_96_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_1177;
		}
	}
	var_151_bool = var_2_bool == 0; //@nz
	if(var_151_bool == 1) goto Label_1147;
	
}


func_1628(var_13_int)
{
	var_13_int = 0;
	return 0;
}


func_120(var_35_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_35_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_35_string);
	RemoveEnvelope();
	return 0;
}


func_1246(var_0_bool, var_62_bool)
{
	var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0);
	GetDirection(var_65_cvector);
	var_67_cvector = CVector(0,0,0); var_68_object = Obj();
	var_68_object = var_0_bool;
	func_1267(var_67_cvector, var_68_object);
	var_67_cvector = var_66_cvector;
	var_73_float = 0; var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0);
	var_65_cvector = var_74_cvector;
	var_66_cvector = var_75_cvector;
	func_1463(var_73_float, var_74_cvector, var_75_cvector);
	var_62_bool = var_73_float >= (float)-0.3420201241970062;
	return 4;
}


func_1631()
{
	return 0;
}


func_1633(var_14_int)
{
	var_14_int = 0;
	return 0;
}


func_1507(var_21_int)
{
	var_22_float = 0; var_23_float = 0;
	GetGameTime(var_23_float);
	var_25_int = 0;
	var_25_int = var_23_float / (int)24;
	var_21_int = (int)1 + var_25_int;
	return 2;
}


func_1636()
{
	return 0;
}


func_1638(var_13_int)
{
	var_13_int = 2;
	return 0;
}


func_871(var_56_object)
{
	Face(var_56_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_66_object = Obj();
	var_56_object = var_66_object;
	func_936(var_58_cvector, var_59_bool, var_56_object, var_66_object);
	return 0;
}


func_1641(var_21_object)
{
	var_22_object = Obj();
	var_21_object = var_22_object;
	func_1735(var_22_object);
	return 0;
}


func_1516(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	TaskCall(0);
	func_0(var_12_object);
	TaskReturn();
	return 0;
}


func_1262(var_82_cvector)
{
	var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
	GetPosition(var_84_cvector);
	var_84_cvector = var_82_cvector;
	return 2;
}


func_1647()
{
	return 0;
}


func_1648(var_18_int, var_19_int)
{
	var_29_int = 0; var_30_int = 0; var_31_int = 0; var_32_bool = 0; var_33_int = 0; var_34_int = 0; var_35_int = 0; var_36_bool = 0;
	var_37_bool = var_18_int > var_19_int;
	if(var_37_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_39_bool = var_18_int != var_19_int;
	if(var_39_bool != 0) {
		var_40_int = var_19_int - var_18_int;
		irand(var_34_int, var_40_int);
	} else {
		var_46_bool = var_18_int == (int)0;
		if(var_46_bool == 0) goto Label_1666;
		return 8;
	}
Label_1666:
	(int)0 = (int)0 + var_18_int;
	var_42_bool = var_33_int == (int)0;
	if(var_42_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_35_int, "Money");
	AddItem(var_36_bool, var_35_int, (int)0, var_33_int);
	return 8;
	
}


func_1267(var_67_cvector, var_68_object)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0);
	GetPosition(var_71_cvector);
	@@var_68_object:GetPosition(var_72_cvector);
	var_67_cvector = var_72_cvector - var_71_cvector;
	return 4;
}


func_376(var_0_bool, var_1_bool)
{
	var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_float = 0; var_71_bool = 0; var_72_object = Obj(); var_73_bool = 0; var_74_float = 0; var_75_cvector = CVector(0,0,0); var_76_cvector = CVector(0,0,0); var_77_float = 0; var_78_bool = 0; var_79_object = Obj(); var_80_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_74_float, (float)0.5);
	Sleep(var_74_float);
	
Label_384:
	var_82_bool = var_0_bool == 0; //@nz
	if(var_82_bool != 0) {
		var_83_bool = var_1_bool == 0; //@nz
		if(var_83_bool != 0) {

		Label_388:
			GetPosition(var_76_cvector);
			GetCameraFarDistance(var_77_float);
			var_77_float = var_77_float * (float)2.5;
			GetRandomPFPointInCircle(var_75_cvector, var_76_cvector, var_77_float, var_78_bool);
			var_85_bool = var_78_bool;
			if(var_85_bool != 0) {
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
	FindShiftedPathTo(var_79_object, var_75_cvector);
	var_86_bool = var_79_object != 0; //@nn
	if(var_86_bool != 0) {
		RotatePath(var_79_object, var_80_bool);
		var_87_bool = var_80_bool;
		if(var_87_bool != 0) {
			var_88_bool = 0;
			func_454(var_88_bool);
			FollowPath(var_79_object, var_88_bool, var_80_bool);
			var_79_object = 0;
			var_89_bool = var_80_bool;
			if(var_89_bool != 0) {
				TaskCall(2);
				func_571();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_79_object = 0;
	goto Label_384;
	
}


func_1274(var_36_float, var_37_object)
{
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0);
	GetPosition(var_41_cvector);
	@@var_37_object:GetPosition(var_42_cvector);
	var_43_cvector = var_42_cvector - var_41_cvector;
	var_36_float = var_43_cvector | var_43_cvector;
	return 6;
}


func_1788()
{
	var_64_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


