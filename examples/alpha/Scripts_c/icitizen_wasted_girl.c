// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,irand/2,ResetAAS/0,Sleep/1,KillTimer/1,IsPlayerActor/2,SetTimer/2,Sleep/2,StopGroup0/0,Face/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,FindDirLength/3,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,IsLoaded/1,GetGameTime/1,GetProperty/2,SignalDeath/1,CanSee/2,GetInvItemByName/2,AddItem/4,IsOverrideActive/1,WorkWithCorpse/1,HasAnimation/3,StopAnimation/0,ReportReputationChange/3,SetProperty/2,SetRTEnvelope/2
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:attack_on|W:attack_stay|W:attack_off|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:health|W:GenerateMoney: iMin > iMax|W:Money|W:lemon|W:rusk|W:hook|W:syringe|W:watch|W:razor|W:beads|W:bracelet|W:ear_ring|W:gold_ring|W:silver_ring|W:flower|W:idle|W:ToDie
// @GLOBALS: 0:object:,1:bool:
// @RUN_OP: 0x94
// @RUN_TASK: 1
// @TASK_0: vars= params=1
// @EVENT_0: op=0xf vars=object
// @EVENT_6: op=0x1d vars=
// @EVENT_22: op=0x8e vars=object,int,float,float
// @EVENT_16: op=0x90 vars=object,string
// @EVENT_41: op=0x92 vars=object
// @TASK_1: vars=bool,bool params=0
// @EVENT_0: op=0xbf vars=object
// @EVENT_17: op=0xd3 vars=object
// @EVENT_30: op=0xe7 vars=object,object
// @EVENT_40: op=0x101 vars=object
// @EVENT_42: op=0x115 vars=object,string
// @EVENT_1: op=0x12b vars=object
// @EVENT_3: op=0x134 vars=object
// @EVENT_7: op=0x13d vars=int
// @EVENT_6: op=0x149 vars=
// @EVENT_41: op=0x15d vars=object
// @TASK_2: vars=object params=1
// @EVENT_0: op=0x1bf vars=object
// @EVENT_17: op=0x1d3 vars=object
// @EVENT_30: op=0x1e7 vars=object,object
// @EVENT_40: op=0x201 vars=object
// @EVENT_42: op=0x215 vars=object,string
// @EVENT_41: op=0x236 vars=object
// @EVENT_7: op=0x23f vars=int
// @EVENT_6: op=0x262 vars=
// @TASK_3: vars=object,cvector,bool params=1
// @EVENT_6: op=0x285 vars=
// @EVENT_7: op=0x2ea vars=int
// @EVENT_41: op=0x325 vars=object
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_7: op=0x39c vars=int
// @EVENT_41: op=0x3d7 vars=object
// @STANDALONE_EVENT_16: op=0x4f6 vars=object,string
// @STANDALONE_EVENT_41: op=0x503 vars=object
// @STANDALONE_EVENT_22: op=0x509 vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x12b,0x134,0x13d,0x15d,0x236,0x269,0x325,0x3d7,0x4b9,0x4c1,0x4ca,0x4d4,0x4ee,0x503,0x509,0x511,0x51a,0x522,0x52c,0x534,0x53e,0x546,0x549,0x55d,0x563,0x566,0x6a4

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_object = Obj();
	var_9_bool = var_13_object;
	func_1350(var_13_object);
	var_12_int = var_11_int;
	var_15_bool = var_11_int > (int)0;
	if(var_15_bool != 0) {
		var_16_object = Obj();
		var_9_bool = var_16_object;
		func_1353(var_16_object);
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_1359();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool, var_10_object, var_11_cvector, var_12_bool)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_object = Obj();
	var_9_bool = var_13_object;
	func_1350(var_13_object);
	var_12_int = var_11_int;
	var_15_bool = var_11_int > (int)0;
	if(var_15_bool != 0) {
		var_17_bool = var_11_int > (int)1;
		if(var_17_bool != 0) {
			func_336(var_11_int);
		}
		var_20_object = Obj();
		var_9_bool = var_20_object;
		func_1353(var_20_object);
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_object = Obj();
	var_9_bool = var_13_object;
	func_1314(var_12_int, var_13_object);
	var_12_int = var_11_int;
	var_49_bool = var_11_int > (int)0;
	if(var_49_bool != 0) {
		var_51_bool = var_11_int > (int)1;
		if(var_51_bool != 0) {
			func_336(var_11_int);
		}
		var_54_object = Obj();
		var_9_bool = var_54_object;
		func_1324(var_54_object);
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_9_cvector = var_14_object;
	var_10_bool = var_15_object;
	func_1652(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_41_int = 0; var_42_object = Obj();
		var_9_cvector = var_42_object;
		func_1332(var_41_int, var_42_object);
		var_41_int = var_12_int;
		var_78_bool = var_12_int > (int)0;
		if(var_78_bool != 0) {
			var_80_bool = var_12_int > (int)1;
			if(var_80_bool != 0) {
				func_336(var_12_int);
			}
			var_83_object = Obj();
			var_9_cvector = var_83_object;
			func_1342(var_83_object);
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_object = Obj();
	var_9_bool = var_13_object;
	func_1360(var_12_int, var_13_object);
	var_12_int = var_11_int;
	var_54_bool = var_11_int > (int)0;
	if(var_54_bool != 0) {
		var_56_bool = var_11_int > (int)1;
		if(var_56_bool != 0) {
			func_336(var_11_int);
		}
		var_59_object = Obj();
		var_9_bool = var_59_object;
		func_1373(var_59_object);
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_string = ""; var_15_object = Obj();
	var_10_bool = var_14_string;
	var_9_cvector = var_15_object;
	func_1379(var_15_object);
	var_13_int = var_12_int;
	var_17_bool = var_12_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_12_int > (int)1;
		if(var_19_bool != 0) {
			func_336(var_12_int);
		}
		var_22_string = ""; var_23_object = Obj();
		var_10_bool = var_22_string;
		var_9_cvector = var_23_object;
		func_1382();
	}
	return 2;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_bool = var_0_bool;
	if(var_10_bool != 0) {
		return 0;
	}
	var_11_object = Obj();
	var_9_bool = var_11_object;
	func_358(var_9_bool, var_11_object);
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_bool = var_0_bool;
	if(var_10_bool != 0) {
		return 0;
	}
	var_11_object = Obj();
	var_9_bool = var_11_object;
	func_358(var_9_bool, var_11_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_int, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_11_bool = var_9_bool != (int)110;
	if(var_11_bool != 0) {
		return 0;
	}
	var_1_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_336(var_8_bool);
	func_1359();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_336(var_9_bool);
	var_9_bool = Obj();
	func_1283();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_object = Obj();
	var_9_bool = var_13_object;
	func_1350(var_13_object);
	var_12_int = var_11_int;
	var_15_bool = var_11_int > (int)0;
	if(var_15_bool != 0) {
		var_17_bool = var_11_int > (int)1;
		if(var_17_bool != 0) {
			func_555();
		}
		var_20_object = Obj();
		var_9_bool = var_20_object;
		func_1353(var_20_object);
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_object = Obj();
	var_9_bool = var_13_object;
	func_1314(var_12_int, var_13_object);
	var_12_int = var_11_int;
	var_49_bool = var_11_int > (int)0;
	if(var_49_bool != 0) {
		var_51_bool = var_11_int > (int)1;
		if(var_51_bool != 0) {
			func_555();
		}
		var_54_object = Obj();
		var_9_bool = var_54_object;
		func_1324(var_54_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj();
	var_9_cvector = var_14_object;
	var_10_bool = var_15_object;
	func_1652(var_13_bool, var_14_object, var_15_object);
	if(var_13_bool != 0) {
		var_41_int = 0; var_42_object = Obj();
		var_9_cvector = var_42_object;
		func_1332(var_41_int, var_42_object);
		var_41_int = var_12_int;
		var_78_bool = var_12_int > (int)0;
		if(var_78_bool != 0) {
			var_80_bool = var_12_int > (int)1;
			if(var_80_bool != 0) {
				func_555();
			}
			var_83_object = Obj();
			var_9_cvector = var_83_object;
			func_1342(var_83_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_object = Obj();
	var_9_bool = var_13_object;
	func_1360(var_12_int, var_13_object);
	var_12_int = var_11_int;
	var_54_bool = var_11_int > (int)0;
	if(var_54_bool != 0) {
		var_56_bool = var_11_int > (int)1;
		if(var_56_bool != 0) {
			func_555();
		}
		var_59_object = Obj();
		var_9_bool = var_59_object;
		func_1373(var_59_object);
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_string, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_int = 0; var_14_string = ""; var_15_object = Obj();
	var_10_bool = var_14_string;
	var_9_cvector = var_15_object;
	func_1379(var_15_object);
	var_13_int = var_12_int;
	var_17_bool = var_12_int > (int)0;
	if(var_17_bool != 0) {
		var_19_bool = var_12_int > (int)1;
		if(var_19_bool != 0) {
			func_555();
		}
		var_22_string = ""; var_23_object = Obj();
		var_10_bool = var_22_string;
		var_9_cvector = var_23_object;
		func_1382();
	}
	return 2;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	func_555();
	var_9_bool = Obj();
	func_1283();
	return 0;
}


task_2_event_7(var_0_bool, var_1_bool, var_2_object, var_3_int, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0);
	var_15_bool = var_9_bool != (int)111;
	if(var_15_bool != 0) {
		return 4;
	}
	var_16_bool = 0; var_17_object = Obj();
	var_17_object = var_0_bool;
	func_1081(var_16_bool, var_17_object);
	var_50_bool = var_16_bool == 0; //@nz
	if(var_50_bool != 0) {
		func_555();
		return 4;
	}
	GetDirection(var_12_cvector);
	var_53_cvector = CVector(0,0,0); var_54_object = Obj();
	var_54_object = var_0_bool;
	func_1013(var_53_cvector, var_54_object);
	var_53_cvector = var_13_cvector;
	var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
	var_12_cvector = var_60_cvector;
	var_13_cvector = var_61_cvector;
	func_1236(var_59_float, var_60_cvector, var_61_cvector);
	var_84_bool = var_59_float < (float)0.4999999701976776;
	if(var_84_bool != 0) {
		var_85_object = Obj();
		var_85_object = var_0_bool;
		func_1172(var_85_object);
	}
	return 4;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_555();
	func_1359();
	return 0;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_798(var_8_bool);
	func_1359();
	return 0;
}


task_3_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_int, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0;
	var_19_bool = var_9_bool != (int)120;
	if(var_19_bool != 0) {
		return 8;
	}
	var_20_bool = var_0_bool == 0; //@ne
	if(var_20_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_14_cvector);
		FindDirLength(var_15_float, var_14_cvector, (float)7000.0);
		var_23_cvector = CVector(0,0,0); var_24_float = 0;
		func_652(var_17_float, var_23_cvector, (float)1.7453293800354004);
		var_23_cvector = var_16_cvector;
		var_17_float = var_16_cvector | var_16_cvector;
		var_53_bool = 0;
		var_53_bool = 0;
		var_55_bool = var_17_float >= (float)10000.0;
		if(var_55_bool != 0) {
			var_56_bool = 0;
			var_57_float = var_15_float * var_15_float;
			var_59_float = var_57_float * (float)2.25;
			var_60_bool = var_17_float >= var_59_float;
			if(var_60_bool != 1) {
				var_61_bool = 0;
				func_814((bool)1, var_61_bool);
				if(var_61_bool != 1) {
					var_56_bool = 0;
				}
			}
			if(var_56_bool != 0) {
				var_53_bool = 1;
			}
		}
		if(var_53_bool == 0) goto Label_797;
		Stop();
		var_81_cvector = CVector(0,0,0);
		func_1008(var_81_cvector);
		var_1_bool = var_81_cvector + var_16_cvector;
	}
Label_797:
	return 8;
	
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_object, var_8_cvector, var_9_bool)
{
	func_798(var_9_bool);
	var_9_bool = Obj();
	func_1283();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_int)
{
	var_10_cvector = CVector(0,0,0); var_11_float = 0; var_12_cvector = CVector(0,0,0); var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_float = 0;
	var_19_bool = var_9_int != (int)120;
	if(var_19_bool != 0) {
		return 8;
	}
	var_20_bool = var_0_bool == 0; //@ne
	if(var_20_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_14_cvector);
		FindDirLength(var_15_float, var_14_cvector, (float)7000.0);
		var_23_cvector = CVector(0,0,0); var_24_float = 0;
		func_830(var_17_float, var_23_cvector, (float)1.7453293800354004);
		var_23_cvector = var_16_cvector;
		var_17_float = var_16_cvector | var_16_cvector;
		var_53_bool = 0;
		var_53_bool = 0;
		var_55_bool = var_17_float >= (float)10000.0;
		if(var_55_bool != 0) {
			var_56_bool = 0;
			var_57_float = var_15_float * var_15_float;
			var_59_float = var_57_float * (float)2.25;
			var_60_bool = var_17_float >= var_59_float;
			if(var_60_bool != 1) {
				var_61_bool = 0;
				func_992((bool)1, var_61_bool);
				if(var_61_bool != 1) {
					var_56_bool = 0;
				}
			}
			if(var_56_bool != 0) {
				var_53_bool = 1;
			}
		}
		if(var_53_bool == 0) goto Label_975;
		Stop();
		var_81_cvector = CVector(0,0,0);
		func_1008(var_81_cvector);
		var_1_bool = var_81_cvector + var_16_cvector;
	}
Label_975:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	func_976(var_9_object);
	var_9_object = Obj();
	func_1283();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_string)
{
	var_11_float = 0; var_12_float = 0;
	var_14_bool = var_10_string == "health";
	if(var_14_bool != 0) {
		GetProperty("health", var_12_float);
		var_17_bool = var_12_float <= (int)0;
		if(var_17_bool != 0) {
			SignalDeath(var_9_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1262(var_10_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1105(var_14_int, var_15_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0; var_11_int = 0; var_12_int = 0;
	var_0_bool = false;
	SensePlayerOnly((bool)1);
	func_1601();
	func_182();
	
Label_159:
	irand(var_11_int, (int)2);
	var_138_bool = var_11_int == (int)0;
	if(var_138_bool != 0) {
		var_0_bool = true;
		func_1620();
		var_0_bool = false;
		ResetAAS();
	} else {
		irand(var_12_int, (int)4);
		var_158_int = var_12_int + (int)1;
		Sleep(var_158_int);
	}
	goto Label_159;
	
}
EMIT "Return(); Pop(4)";


func_0(var_11_object)
{
	EventDisable(0);
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_33(var_12_object);
	var_11_object = Obj();
	func_1700();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1028(var_38_bool, var_39_object, var_40_string)
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


func_1414(var_15_bool)
{
	var_16_int = 0; var_17_bool = 0; var_18_int = 0; var_19_bool = 0;
	var_20_bool = var_15_bool;
	if(var_20_bool != 0) {
		var_21_int = 0; var_22_int = 0;
		var_24_int = 0;
		func_1253(var_24_int);
		var_31_float = var_24_int * (int)100;
		var_22_int = (int)100 + var_31_float;
		func_1384((int)0, var_22_int);
		irand(var_18_int, (int)9);
		var_52_bool = var_18_int == (int)0;
		if(var_52_bool != 0) {
			var_53_int = 0; var_54_string = "";
			func_1589(var_53_int, "lemon");
			AddItem(var_19_bool, var_53_int, (int)0, (int)1);
		} else {
			var_60_bool = var_18_int == (int)1;
			if(var_60_bool != 0) {
				var_61_int = 0; var_62_string = "";
				func_1589(var_61_int, "rusk");
				AddItem(var_19_bool, var_61_int, (int)0, (int)1);
				goto Label_1502;
			}
			var_66_bool = var_18_int == (int)2;
			if(var_66_bool != 0) {
				var_67_int = 0; var_68_string = "";
				func_1589(var_67_int, "hook");
				AddItem(var_19_bool, var_67_int, (int)0, (int)1);
				goto Label_1502;
			}
			var_72_bool = var_18_int == (int)4;
			if(var_72_bool != 0) {
				var_73_int = 0; var_74_string = "";
				func_1589(var_73_int, "syringe");
				AddItem(var_19_bool, var_73_int, (int)0, (int)1);
				goto Label_1502;
			}
			var_78_bool = var_18_int == (int)5;
			if(var_78_bool != 0) {
				var_79_int = 0; var_80_string = "";
				func_1589(var_79_int, "watch");
				AddItem(var_19_bool, var_79_int, (int)0, (int)1);
				goto Label_1502;
			}
			var_84_bool = var_18_int == (int)6;
			if(var_84_bool == 0) goto Label_1502;
			var_85_int = 0; var_86_string = "";
			func_1589(var_85_int, "razor");
			AddItem(var_19_bool, var_85_int, (int)0, (int)1);
	}
		var_89_int = 0; var_90_int = 0;
		var_92_int = 0;
		func_1253(var_92_int);
		var_94_float = var_92_int * (int)50;
		var_90_int = (int)50 + var_94_float;
		func_1384((int)0, var_90_int);
		irand(var_18_int, (int)8);
		var_97_bool = var_18_int == (int)0;
		if(var_97_bool != 0) {
			var_98_int = 0; var_99_string = "";
			func_1589(var_98_int, "beads");
			AddItem(var_19_bool, var_98_int, (int)0, (int)1);
			goto Label_1588;
		}
		var_103_bool = var_18_int == (int)1;
		if(var_103_bool != 0) {
			var_104_int = 0; var_105_string = "";
			func_1589(var_104_int, "bracelet");
			AddItem(var_19_bool, var_104_int, (int)0, (int)1);
			goto Label_1588;
		}
		var_109_bool = var_18_int == (int)2;
		if(var_109_bool != 0) {
			var_110_int = 0; var_111_string = "";
			func_1589(var_110_int, "ear_ring");
			AddItem(var_19_bool, var_110_int, (int)0, (int)1);
			goto Label_1588;
		}
		var_115_bool = var_18_int == (int)3;
		if(var_115_bool != 0) {
			var_116_int = 0; var_117_string = "";
			func_1589(var_116_int, "gold_ring");
			AddItem(var_19_bool, var_116_int, (int)0, (int)1);
			goto Label_1588;
		}
		var_121_bool = var_18_int == (int)4;
		if(var_121_bool != 0) {
			var_122_int = 0; var_123_string = "";
			func_1589(var_122_int, "silver_ring");
			AddItem(var_19_bool, var_122_int, (int)0, (int)1);
			goto Label_1588;
		}
		var_127_bool = var_18_int == (int)5;
		if(var_127_bool == 0) goto Label_1588;
		var_128_int = 0; var_129_string = "";
		func_1589(var_128_int, "flower");
		AddItem(var_19_bool, var_128_int, (int)0, (int)1);
	}
Label_1502:
	goto Label_1588;
	
Label_1588:
	return 4;
	
}


func_391(var_0_bool, var_28_object)
{
	var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_bool = 0;
	var_0_bool = var_28_object;
	func_442(var_35_bool);
	GetDirection(var_33_cvector);
	var_43_cvector = CVector(0,0,0); var_44_object = Obj();
	var_44_object = var_0_bool;
	func_1013(var_43_cvector, var_44_object);
	var_43_cvector = var_34_cvector;
	var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	var_33_cvector = var_50_cvector;
	var_34_cvector = var_51_cvector;
	func_1236(var_49_float, var_50_cvector, var_51_cvector);
	var_74_bool = var_49_float < (int)0;
	if(var_74_bool != 0) {
		var_75_object = Obj();
		var_75_object = var_0_bool;
		func_1172(var_75_object);
		var_35_bool = 1;
	} else {
		Sleep((float)1.5, var_35_bool);
	}
	var_84_bool = var_35_bool;
	if(var_84_bool != 0) {
		var_85_object = Obj();
		var_85_object = var_0_bool;
		func_1172(var_85_object);
		SetTimer((int)111, (float)0.5);
		Sleep((float)5.0);
		KillTimer((int)111);
	}
	StopAsync();
	UnlookAsync("head");
	return 6;
	
}


func_652(var_0_bool, var_23_cvector, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0;
	GetPosition(var_31_cvector);
	@@@var_0_bool:GetPosition(var_32_cvector);
	GetDirection(var_33_cvector);
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0);
	var_40_cvector = var_31_cvector - var_32_cvector;
	func_1199(var_39_cvector, var_40_cvector);
	var_47_float = var_33_cvector * (float)0.75;
	var_38_cvector = var_39_cvector + var_47_float;
	func_1199(var_37_cvector, var_38_cvector);
	var_37_cvector = var_34_cvector;
	FindLongestDir(var_35_cvector, var_36_float, var_34_cvector, var_24_float, (int)32, (float)7000.0);
	var_36_float = var_36_float - (int)100;
	var_52_bool = var_36_float < (int)0;
	if(var_52_bool != 0) {
		var_36_float = 0;
	}
	var_23_cvector = var_35_cvector * var_36_float;
	return 12;
}


func_1040(var_31_bool, var_32_object)
{
	var_33_bool = 0; var_34_bool = 0;
	@@var_32_object:IsDead(var_34_bool);
	var_34_bool = var_31_bool;
	return 2;
}


func_1297(var_18_int)
{
	var_20_bool = 0;
	func_1650(var_20_bool);
	if(var_20_bool != 0) {
		var_18_int = 2;
	} else {
		var_18_int = 0;
	}
	return 0;
	
}


func_1172(var_85_object)
{
	var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_cvector = CVector(0,0,0); var_89_cvector = CVector(0,0,0); var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	@@var_85_object:GetPosition(var_89_cvector);
	GetPosition(var_90_cvector);
	var_91_cvector = var_89_cvector - var_90_cvector;
	var_92_float = GetByIndex(var_91_cvector, 0);
	var_93_float = GetByIndex(var_91_cvector, 2);
	RotateAsync(var_92_float, var_93_float);
	return 6;
}


func_1045(var_20_bool, var_21_object)
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
		func_1040(var_31_bool, var_32_object);
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


func_1306(var_27_object)
{
	var_28_object = Obj();
	var_27_object = var_28_object;
	TaskCall(2);
	func_391(var_29_object, var_28_object);
	TaskReturn();
	return 0;
}


func_798(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1183(var_132_bool)
{
	var_133_bool = 0; var_134_bool = 0;
	IsLoaded(var_134_bool);
	var_134_bool = var_132_bool;
	return 2;
}


func_33(var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0);
	var_33_bool = var_12_object == 0; //@ne
	if(var_33_bool != 0) {
		var_34_string = "";
		func_120("fdie");
	} else {
		@@var_12_object:GetPosition(var_23_cvector);
		GetPosition(var_24_cvector);
		GetDirection(var_25_cvector);
		var_26_cvector = var_24_cvector - var_23_cvector;
		var_37_float = GetByIndex(var_26_cvector, 0);
		var_38_float = GetByIndex(var_25_cvector, 0);
		var_39_float = var_37_float * var_38_float;
		var_40_float = GetByIndex(var_26_cvector, 2);
		var_41_float = GetByIndex(var_25_cvector, 2);
		var_42_float = var_40_float * var_41_float;
		var_43_int = var_39_float + var_42_float;
		var_45_bool = var_43_int >= (int)0;
		if(var_45_bool != 0) {
			var_27_string = "fdie";
		} else {
				var_27_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_12_object = var_28_object;
		var_48_bool = IsFuncExist(var_12_object, "GetScriptProperty", (int)2);
		if(var_48_bool != 0) {
			@@var_12_object:HasScriptProperty(var_29_bool, "Owner");
			var_50_bool = var_29_bool;
			if(var_50_bool != 0) {
				@@var_12_object:GetScriptProperty(var_28_object, "Owner");
				var_52_bool = var_28_object == 0; //@ne
				if(var_52_bool != 0) {
					var_12_object = var_28_object;
				}
			}
		}
		var_55_bool = IsFuncExist(var_28_object, "@GetEyesHeight", (int)1);
		if(var_55_bool != 0) {
			@@var_28_object:GetEyesHeight(var_31_float);
			var_32_cvector = CVector(0.0, 0.0, 0.0);
			var_56_float = GetByIndex(var_32_cvector, 1);
			var_31_float = var_56_float;
			SetByIndex(var_32_cvector, 1) = var_56_float;
			LookAsync(var_12_object, "head", var_32_cvector);
			var_30_bool = 1;
		} else {
			var_30_bool = 0;

		}
		PlayAnimation("all", var_27_string);
		WaitForAnimEnd();
		var_59_bool = var_30_bool;
		if(var_59_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_27_string);
		RemoveEnvelope();
		var_28_object = 0;
	}
	return 20;
	
}


func_1314(var_17_int, var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1081(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		var_17_int = 2;
	} else {
		var_17_int = 0;
	}
	return 0;
	
}


func_1700()
{
	var_63_bool = GlobalVars[1];
	GlobalVars[1] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_1188(var_36_object)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_float = 0; var_40_cvector = CVector(0,0,0);
	@@var_36_object:GetEyesHeight(var_39_float);
	var_40_cvector = CVector(0.0, 0.0, 0.0);
	var_41_float = GetByIndex(var_40_cvector, 1);
	var_39_float = var_41_float;
	SetByIndex(var_40_cvector, 1) = var_41_float;
	LookAsync(var_36_object, "head", var_40_cvector);
	return 4;
}


func_682(var_0_bool, var_1_bool, var_2_object, var_71_object)
{
	var_72_cvector = CVector(0,0,0); var_73_float = 0; var_74_bool = 0; var_75_cvector = CVector(0,0,0); var_76_float = 0; var_77_cvector = CVector(0,0,0); var_78_float = 0; var_79_bool = 0; var_80_cvector = CVector(0,0,0); var_81_float = 0;
	var_0_bool = var_71_object;
	var_82_cvector = CVector(0,0,0); var_83_float = 0;
	func_652(var_81_float, var_82_cvector, (float)1.7453293800354004);
	var_82_cvector = var_77_cvector;
	var_78_float = var_77_cvector | var_77_cvector;
	var_113_bool = var_78_float < (float)10000.0;
	if(var_113_bool != 0) {
		var_115_float = sqrt(var_78_float);
		var_116_int = "Can't retreat, distance: " + var_115_float;
		Trace(var_116_int);
		Sleep((float)0.5);
		return 10;
	}
	var_118_float = GetByIndex(var_77_cvector, 0);
	var_119_float = GetByIndex(var_77_cvector, 2);
	Rotate(var_118_float, var_119_float);
	var_120_cvector = CVector(0,0,0);
	func_1008(var_120_cvector);
	var_1_bool = var_120_cvector + var_77_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_715:
	MovePoint(var_1_bool, (int)1, var_79_bool);
	var_126_bool = var_79_bool;
	if(var_126_bool != 0) {
		var_127_bool = var_0_bool == 0; //@ne
		if(var_127_bool != 0) {
			goto Label_745;
		EMIT "GOTO 0x2e7";

		Label_745:
			return 10;
		}
		var_128_cvector = CVector(0,0,0); var_129_float = 0;
		func_652(var_81_float, var_128_cvector, (float)2.6179938316345215);
		var_128_cvector = var_80_cvector;
		var_81_float = var_80_cvector | var_80_cvector;
		var_131_bool = var_81_float >= (float)10000.0;
		if(var_131_bool != 0) {
			var_132_cvector = CVector(0,0,0);
			func_1008(var_132_cvector);
			var_1_bool = var_132_cvector + var_80_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_745;
		}
	}
	var_135_bool = var_2_object == 0; //@nz
	if(var_135_bool == 1) goto Label_715;
	
}


func_555()
{
	StopGroup0();
	StopAsync();
	UnlookAsync("head");
	KillTimer((int)111);
	return 0;
}


func_1324(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	TaskCall(3);
	func_617(var_61_object);
	TaskReturn();
	return 0;
}


func_814(var_0_bool, var_61_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	GetDirection(var_64_cvector);
	var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	var_67_object = var_0_bool;
	func_1013(var_66_cvector, var_67_object);
	var_66_cvector = var_65_cvector;
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_64_cvector = var_73_cvector;
	var_65_cvector = var_74_cvector;
	func_1209(var_72_float, var_73_cvector, var_74_cvector);
	var_61_bool = var_72_float >= (float)-0.3420201241970062;
	return 4;
}


func_1199(var_39_cvector, var_40_cvector)
{
	var_41_float = 0; var_42_float = 0;
	var_43_int = var_40_cvector | var_40_cvector;
	var_42_float = sqrt(var_43_int);
	var_44_float = 9.999999974752427e-07;
	var_45_bool = var_42_float < var_44_float;
	if(var_45_bool != 0) {
		var_39_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_39_cvector = var_40_cvector / var_42_float;
	return 2;
}


func_1332(var_41_int, var_42_object)
{
	var_43_bool = 0; var_44_object = Obj();
	var_42_object = var_44_object;
	func_1081(var_43_bool, var_44_object);
	if(var_43_bool != 0) {
		var_41_int = 2;
	} else {
		var_41_int = 0;
	}
	return 0;
	
}


func_1589(var_53_int, var_54_string)
{
	var_55_int = 0; var_56_int = 0;
	GetInvItemByName(var_56_int, var_54_string);
	var_56_int = var_53_int;
	return 2;
}


func_182()
{
	var_132_bool = 0;
	func_1183(var_132_bool);
	var_135_bool = var_132_bool == 0; //@nz
	if(var_135_bool != 0) {
		func_1359();
	}
	return 0;
}


func_1081(var_16_bool, var_17_object)
{
	var_18_int = 0; var_19_int = 0;
	var_20_bool = 0; var_21_object = Obj();
	var_17_object = var_21_object;
	func_1045(var_20_bool, var_21_object);
	var_37_bool = var_20_bool == 0; //@nz
	if(var_37_bool != 0) {
		var_16_bool = 0;
		return 2;
	}
	var_38_bool = 0; var_39_object = Obj(); var_40_string = "";
	var_17_object = var_39_object;
	func_1028(var_38_bool, var_39_object, "noaccess");
	var_47_bool = var_38_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_16_bool = 1;
		return 2;
	}
	@@var_17_object:GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == (int)0;
	return 2;
}


func_442(var_0_bool)
{
	var_36_object = Obj();
	var_36_object = var_0_bool;
	func_1188(var_36_object);
	return 0;
}


func_1209(var_72_float, var_73_cvector, var_74_cvector)
{
	var_75_int = var_73_cvector | var_74_cvector;
	var_76_int = var_73_cvector | var_73_cvector;
	var_77_int = var_74_cvector | var_74_cvector;
	var_78_float = var_76_int * var_77_int;
	var_79_float = sqrt(var_78_float);
	var_72_float = var_75_int / var_79_float;
	return 0;
}


func_1594(var_146_string, var_147_int)
{
	var_148_string = ""; var_149_string = "";
	var_150_int = var_147_int;
	if(var_150_int != 0) {
		"idle" = "idle" + var_147_int;
	}
	var_149_string = var_146_string;
	return 2;
}


func_1342(var_83_object)
{
	var_84_object = Obj();
	var_83_object = var_84_object;
	TaskCall(4);
	func_860(var_85_object, var_86_cvector, var_87_bool, var_84_object);
	TaskReturn();
	return 0;
}


func_830(var_0_bool, var_23_cvector, var_24_float)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_float = 0;
	GetPosition(var_31_cvector);
	@@@var_0_bool:GetPosition(var_32_cvector);
	GetDirection(var_33_cvector);
	var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0);
	var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0);
	var_40_cvector = var_31_cvector - var_32_cvector;
	func_1199(var_39_cvector, var_40_cvector);
	var_47_float = var_33_cvector * (float)0.75;
	var_38_cvector = var_39_cvector + var_47_float;
	func_1199(var_37_cvector, var_38_cvector);
	var_37_cvector = var_34_cvector;
	FindLongestDir(var_35_cvector, var_36_float, var_34_cvector, var_24_float, (int)32, (float)7000.0);
	var_36_float = var_36_float - (int)100;
	var_52_bool = var_36_float < (int)0;
	if(var_52_bool != 0) {
		var_36_float = 0;
	}
	var_23_cvector = var_35_cvector * var_36_float;
	return 12;
}


func_1601()
{
	var_14_bool = GlobalVars[1];
	GlobalVars[1] = (bool)0;
	var_15_bool = 0;
	func_1414((bool)0);
	return 0;
}


func_1217(var_62_float, var_63_cvector, var_64_cvector)
{
	var_65_float = GetByIndex(var_63_cvector, 0);
	var_66_float = GetByIndex(var_64_cvector, 0);
	var_67_float = var_65_float * var_66_float;
	var_68_float = GetByIndex(var_63_cvector, 2);
	var_69_float = GetByIndex(var_64_cvector, 2);
	var_70_float = var_68_float * var_69_float;
	var_62_float = var_67_float + var_70_float;
	return 0;
}


func_1350(var_12_int)
{
	var_12_int = 2;
	return 0;
}


func_1353(var_20_object)
{
	var_21_object = Obj();
	var_20_object = var_21_object;
	func_1609(var_21_object);
	return 0;
}


func_1226(var_71_float, var_72_cvector)
{
	var_73_float = GetByIndex(var_72_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_75_float = var_73_float * var_74_float;
	var_76_float = GetByIndex(var_72_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_78_float = var_76_float * var_77_float;
	var_79_int = var_75_float + var_78_float;
	var_71_float = sqrt(var_79_int);
	return 0;
}


func_1609(var_21_object)
{
	var_22_bool = 0; var_23_bool = 0;
	var_24_bool = GlobalVars[1];
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


func_1359()
{
	return 0;
}


func_336(var_1_bool)
{
	KillTimer((int)110);
	var_1_bool = false;
	var_11_bool = var_0_bool;
	if(var_11_bool != 0) {
		func_1647();
	} else {
		Stop();
	}
	return 0;
	
}


func_1360(var_12_int, var_13_object)
{
	var_14_bool = 0; var_15_bool = 0;
	CanSee(var_15_bool, var_13_object);
	var_16_bool = var_15_bool;
	if(var_16_bool != 0) {
		var_17_int = 0; var_18_object = Obj();
		var_13_object = var_18_object;
		func_1314(var_17_int, var_18_object);
		var_17_int = var_12_int;
		return 2;
	}
	var_12_int = 0;
	return 2;
}


func_976(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1105(var_13_object, var_14_int)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_int = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_string = ""; var_26_object = Obj(); var_27_object = Obj(); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = "";
	var_36_bool = 0;
	var_36_bool = 0;
	var_38_bool = var_14_int != (int)4;
	if(var_38_bool != 0) {
		var_40_bool = var_14_int != (int)5;
		if(var_40_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		GetScene(var_26_object);
		GetPosition(var_28_cvector);
		GetEyesHeight(var_29_float);
		var_41_float = GetByIndex(var_28_cvector, 1);
		var_43_float = var_29_float / (int)2;
		var_41_float = var_41_float + var_43_float;
		SetByIndex(var_28_cvector, 1) = var_41_float;
		AddActorByType(var_27_object, "scripted", var_26_object, var_28_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_27_object = 0;
		var_26_object = 0;
	}
	var_47_bool = var_13_object == 0; //@ne
	if(var_47_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_30_int);
	var_49_bool = var_30_int < (int)0;
	if(var_49_bool != 0) {
		return 20;
	}
	@@var_13_object:GetPosition(var_31_cvector);
	GetPosition(var_32_cvector);
	GetDirection(var_33_cvector);
	var_34_cvector = var_32_cvector - var_31_cvector;
	var_50_float = GetByIndex(var_34_cvector, 0);
	var_51_float = GetByIndex(var_33_cvector, 0);
	var_52_float = var_50_float * var_51_float;
	var_53_float = GetByIndex(var_34_cvector, 2);
	var_54_float = GetByIndex(var_33_cvector, 2);
	var_55_float = var_53_float * var_54_float;
	var_56_int = var_52_float + var_55_float;
	var_58_bool = var_56_int >= (int)0;
	if(var_58_bool != 0) {
		var_35_string = "fhit";
	} else {
		var_35_string = "bhit";
	}
	var_61_int = var_35_string + "1";
	var_63_int = var_35_string + "2";
	FadeSecondaryAnimation("hit_react", var_61_int, var_63_int, (int)-10);
	return 20;
	
}


func_1620()
{
	var_139_int = 0; var_140_bool = 0; var_141_int = 0; var_142_int = 0; var_143_bool = 0; var_144_int = 0;
	var_142_int = 0;
	
Label_1622:
	var_146_string = ""; var_147_int = 0;
	var_142_int = var_147_int;
	func_1594(var_146_string, var_147_int);
	HasAnimation(var_143_bool, "all", var_146_string);
	var_151_bool = var_143_bool == 0; //@nz
	if(var_151_bool != 0) {
	} else {
		var_142_int = var_142_int + (int)1;
		goto Label_1622;
	}
	irand(var_144_int, var_142_int);
	var_153_string = ""; var_154_int = 0;
	var_144_int = var_154_int;
	func_1594(var_153_string, var_154_int);
	PlayAnimation("all", var_153_string);
	WaitForAnimEnd();
	return 6;
	
}


func_1236(var_59_float, var_60_cvector, var_61_cvector)
{
	var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	var_60_cvector = var_63_cvector;
	var_61_cvector = var_64_cvector;
	func_1217(var_62_float, var_63_cvector, var_64_cvector);
	var_71_float = 0; var_72_cvector = CVector(0,0,0);
	var_60_cvector = var_72_cvector;
	func_1226(var_71_float, var_72_cvector);
	var_80_float = 0; var_81_cvector = CVector(0,0,0);
	var_61_cvector = var_81_cvector;
	func_1226(var_80_float, var_81_cvector);
	var_82_float = var_71_float * var_80_float;
	var_59_float = var_62_float / var_82_float;
	return 0;
}


func_860(var_0_bool, var_1_bool, var_2_object, var_84_object)
{
	var_88_cvector = CVector(0,0,0); var_89_float = 0; var_90_bool = 0; var_91_cvector = CVector(0,0,0); var_92_float = 0; var_93_cvector = CVector(0,0,0); var_94_float = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_float = 0;
	var_0_bool = var_84_object;
	var_98_cvector = CVector(0,0,0); var_99_float = 0;
	func_830(var_97_float, var_98_cvector, (float)1.7453293800354004);
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
	func_1008(var_136_cvector);
	var_1_bool = var_136_cvector + var_93_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_893:
	MovePoint(var_1_bool, (int)1, var_95_bool);
	var_142_bool = var_95_bool;
	if(var_142_bool != 0) {
		var_143_bool = var_0_bool == 0; //@ne
		if(var_143_bool != 0) {
			goto Label_923;
		EMIT "GOTO 0x399";

		Label_923:
			return 10;
		}
		var_144_cvector = CVector(0,0,0); var_145_float = 0;
		func_830(var_97_float, var_144_cvector, (float)2.6179938316345215);
		var_144_cvector = var_96_cvector;
		var_97_float = var_96_cvector | var_96_cvector;
		var_147_bool = var_97_float >= (float)10000.0;
		if(var_147_bool != 0) {
			var_148_cvector = CVector(0,0,0);
			func_1008(var_148_cvector);
			var_1_bool = var_148_cvector + var_96_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_923;
		}
	}
	var_151_bool = var_2_object == 0; //@nz
	if(var_151_bool == 1) goto Label_893;
	
}


func_1373(var_59_object)
{
	var_60_object = Obj();
	var_59_object = var_60_object;
	func_1324(var_60_object);
	return 0;
}


func_992(var_0_bool, var_61_bool)
{
	var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0);
	GetDirection(var_64_cvector);
	var_66_cvector = CVector(0,0,0); var_67_object = Obj();
	var_67_object = var_0_bool;
	func_1013(var_66_cvector, var_67_object);
	var_66_cvector = var_65_cvector;
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0);
	var_64_cvector = var_73_cvector;
	var_65_cvector = var_74_cvector;
	func_1209(var_72_float, var_73_cvector, var_74_cvector);
	var_61_bool = var_72_float >= (float)-0.3420201241970062;
	return 4;
}


func_1379(var_13_int)
{
	var_13_int = 0;
	return 0;
}


func_1253(var_24_int)
{
	var_25_float = 0; var_26_float = 0;
	GetGameTime(var_26_float);
	var_28_int = 0;
	var_28_int = var_26_float / (int)24;
	var_24_int = (int)1 + var_28_int;
	return 2;
}


func_1382()
{
	return 0;
}


func_358(var_1_bool, var_11_object)
{
	var_12_bool = 0; var_13_int = 0; var_14_bool = 0; var_15_int = 0;
	var_16_bool = var_1_bool;
	if(var_16_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_11_object, var_14_bool);
	var_17_bool = var_14_bool == 0; //@nz
	if(var_17_bool != 0) {
		return 4;
	}
	var_18_int = 0; var_19_object = Obj();
	var_11_object = var_19_object;
	func_1297(var_19_object);
	var_18_int = var_15_int;
	var_22_bool = var_15_int > (int)0;
	if(var_22_bool != 0) {
		var_24_bool = var_15_int > (int)1;
		if(var_24_bool != 0) {
			func_336(var_15_int);
		}
		var_27_object = Obj();
		var_11_object = var_27_object;
		func_1306(var_27_object);
		var_1_bool = true;
		SetTimer((int)110, (float)5.0);
	}
	return 4;
}


func_1384(var_21_int, var_22_int)
{
	var_32_int = 0; var_33_int = 0; var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0;
	var_40_bool = var_21_int > var_22_int;
	if(var_40_bool != 0) {
		Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	var_42_bool = var_21_int != var_22_int;
	if(var_42_bool != 0) {
		var_43_int = var_22_int - var_21_int;
		irand(var_37_int, var_43_int);
	} else {
		var_49_bool = var_21_int == (int)0;
		if(var_49_bool == 0) goto Label_1402;
		return 8;
	}
Label_1402:
	(int)0 = (int)0 + var_21_int;
	var_45_bool = var_36_int == (int)0;
	if(var_45_bool != 0) {
		return 8;
	}
	GetInvItemByName(var_38_int, "Money");
	AddItem(var_39_bool, var_38_int, (int)0, var_36_int);
	return 8;
	
}


func_617(var_61_object)
{
	Face(var_61_object);
	PlayAnimation("all", "attack_on");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_stay");
	WaitForAnimEnd();
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	StopAsync();
	var_71_object = Obj();
	var_61_object = var_71_object;
	func_682(var_63_cvector, var_64_bool, var_61_object, var_71_object);
	return 0;
}


func_1262(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(0);
	func_0(var_11_object);
	TaskReturn();
	return 0;
}


func_1647()
{
	StopAnimation();
	return 0;
}


func_1008(var_81_cvector)
{
	var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0);
	GetPosition(var_83_cvector);
	var_83_cvector = var_81_cvector;
	return 2;
}


func_1650(var_20_bool)
{
	var_20_bool = 1;
	return 0;
}


func_1652(var_13_bool, var_14_object, var_15_object)
{
	var_16_bool = 0; var_17_bool = 0;
	CanSee(var_17_bool, var_14_object);
	var_18_bool = 0;
	var_18_bool = 1;
	var_19_bool = var_17_bool;
	if(var_19_bool != 1) {
		var_20_float = 0; var_21_object = Obj();
		var_14_object = var_21_object;
		func_1020(var_20_float, var_21_object);
		var_29_bool = var_20_float <= (float)250000.0;
		if(var_29_bool != 1) {
			var_18_bool = 0;
		}
	}
	if(var_18_bool != 0) {
		ReportReputationChange(var_14_object, var_15_object, (float)-0.30000001192092896);
		SetProperty("ToDie", (bool)1);
		var_13_bool = 1;
		return 2;
	}
	CanSee(var_17_bool, var_15_object);
	var_33_bool = 0;
	var_33_bool = 1;
	var_34_bool = var_17_bool;
	if(var_34_bool != 1) {
		var_35_float = 0; var_36_object = Obj();
		var_15_object = var_36_object;
		func_1020(var_35_float, var_36_object);
		var_38_bool = var_35_float <= (float)250000.0;
		if(var_38_bool != 1) {
			var_33_bool = 0;
		}
	}
	if(var_33_bool != 0) {
		SetProperty("ToDie", (bool)1);
		var_13_bool = 1;
		return 2;
	}
	var_13_bool = 0;
	return 2;
}


func_1013(var_66_cvector, var_67_object)
{
	var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0);
	GetPosition(var_70_cvector);
	@@var_67_object:GetPosition(var_71_cvector);
	var_66_cvector = var_71_cvector - var_70_cvector;
	return 4;
}


func_120(var_34_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_34_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_34_string);
	RemoveEnvelope();
	return 0;
}


func_1020(var_20_float, var_21_object)
{
	var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	GetPosition(var_25_cvector);
	@@var_21_object:GetPosition(var_26_cvector);
	var_27_cvector = var_26_cvector - var_25_cvector;
	var_20_float = var_27_cvector | var_27_cvector;
	return 6;
}


