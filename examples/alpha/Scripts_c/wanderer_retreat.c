// @IMPORTS: Hold/0,StopGroup0/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,FindLongestDir/6,Trace/1,Rotate/2,SetTimer/2,MovePoint/3,KillTimer/1,FindDirLength/3,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,GetProperty/2,SignalDeath/1,HasAnimation/3
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:health|W:idle
// @RUN_OP: 0x9a
// @RUN_TASK: 2
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @TASK_1: vars= params=1
// @EVENT_0: op=0x15 vars=object
// @EVENT_6: op=0x23 vars=
// @EVENT_22: op=0x94 vars=object,int,float,float
// @EVENT_16: op=0x96 vars=object,string
// @EVENT_41: op=0x98 vars=object
// @TASK_2: vars=bool,bool params=0
// @EVENT_0: op=0xb1 vars=object
// @EVENT_17: op=0xc5 vars=object
// @EVENT_30: op=0xd9 vars=object,object
// @EVENT_40: op=0xf3 vars=object
// @EVENT_42: op=0x107 vars=object,string
// @EVENT_6: op=0x11d vars=
// @EVENT_10: op=0x15d vars=object
// @EVENT_28: op=0x161 vars=
// @EVENT_41: op=0x16b vars=object
// @TASK_3: vars= params=0
// @EVENT_0: op=0x176 vars=object
// @EVENT_17: op=0x18a vars=object
// @EVENT_30: op=0x19e vars=object,object
// @EVENT_40: op=0x1b8 vars=object
// @EVENT_42: op=0x1cc vars=object,string
// @EVENT_6: op=0x1e2 vars=
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_6: op=0x233 vars=
// @EVENT_7: op=0x298 vars=int
// @EVENT_41: op=0x2d3 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x34a vars=int
// @EVENT_41: op=0x385 vars=object
// @STANDALONE_EVENT_16: op=0x459 vars=object,string
// @STANDALONE_EVENT_41: op=0x466 vars=object
// @STANDALONE_EVENT_22: op=0x46c vars=object,int,float,float
// @PE: 0x6,0x7e,0x94,0x96,0x98,0x15d,0x16b,0x2d3,0x385,0x449,0x451,0x466,0x46c,0x48c,0x496,0x49e,0x4a8,0x4b0,0x4b3,0x4b5,0x4bd,0x4c0,0x4c2,0x4c5,0x4c8

task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	StopGroup0();
	return 0;
}


task_1_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1200(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_8_bool = Obj();
		func_1203();
	}
	return 2;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_1207();
	return 0;
}


task_1_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_cvector, var_11_bool)
{
	return 0;
}


task_1_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	return 0;
}


task_1_event_41(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1200(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_356(var_9_int, var_10_int);
		}
		var_8_bool = Obj();
		func_1203();
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1164(var_11_int, var_12_object);
	var_11_int = var_10_int;
	var_48_bool = var_10_int > (int)0;
	if(var_48_bool != 0) {
		var_50_bool = var_10_int > (int)1;
		if(var_50_bool != 0) {
			func_356(var_9_int, var_10_int);
		}
		var_51_object = Obj();
		var_8_bool = var_51_object;
		func_1174(var_51_object);
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj();
	var_8_cvector = var_13_object;
	var_9_bool = var_14_object;
	func_1224(var_14_object);
	if(var_12_bool != 0) {
		var_15_int = 0; var_16_object = Obj();
		var_8_cvector = var_16_object;
		func_1182(var_15_int, var_16_object);
		var_15_int = var_11_int;
		var_52_bool = var_11_int > (int)0;
		if(var_52_bool != 0) {
			var_54_bool = var_11_int > (int)1;
			if(var_54_bool != 0) {
				func_356(var_10_int, var_11_int);
			}
			var_55_object = Obj();
			var_8_cvector = var_55_object;
			func_1192(var_55_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1213(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_356(var_9_int, var_10_int);
		}
		var_8_bool = Obj();
		func_1216();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_string = ""; var_14_object = Obj();
	var_9_bool = var_13_string;
	var_8_cvector = var_14_object;
	func_1218(var_14_object);
	var_12_int = var_11_int;
	var_16_bool = var_11_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_11_int > (int)1;
		if(var_18_bool != 0) {
			func_356(var_10_int, var_11_int);
		}
		var_19_string = ""; var_20_object = Obj();
		var_9_bool = var_19_string;
		var_8_cvector = var_20_object;
		func_1221();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_356(var_6_cvector, var_7_bool);
	func_1207();
	return 0;
}


task_2_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	RequestClearPath(var_8_bool);
	return 0;
}


task_2_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	Stop();
	return 0;
}


task_2_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_356(var_7_cvector, var_8_bool);
	var_8_bool = Obj();
	func_1126();
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1200(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_558();
		}
		var_8_bool = Obj();
		func_1203();
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1164(var_11_int, var_12_object);
	var_11_int = var_10_int;
	var_48_bool = var_10_int > (int)0;
	if(var_48_bool != 0) {
		var_50_bool = var_10_int > (int)1;
		if(var_50_bool != 0) {
			func_558();
		}
		var_51_object = Obj();
		var_8_bool = var_51_object;
		func_1174(var_51_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_bool = 0; var_13_object = Obj(); var_14_object = Obj();
	var_8_cvector = var_13_object;
	var_9_bool = var_14_object;
	func_1224(var_14_object);
	if(var_12_bool != 0) {
		var_15_int = 0; var_16_object = Obj();
		var_8_cvector = var_16_object;
		func_1182(var_15_int, var_16_object);
		var_15_int = var_11_int;
		var_52_bool = var_11_int > (int)0;
		if(var_52_bool != 0) {
			var_54_bool = var_11_int > (int)1;
			if(var_54_bool != 0) {
				func_558();
			}
			var_55_object = Obj();
			var_8_cvector = var_55_object;
			func_1192(var_55_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1213(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_558();
		}
		var_8_bool = Obj();
		func_1216();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_int = 0; var_13_string = ""; var_14_object = Obj();
	var_9_bool = var_13_string;
	var_8_cvector = var_14_object;
	func_1218(var_14_object);
	var_12_int = var_11_int;
	var_16_bool = var_11_int > (int)0;
	if(var_16_bool != 0) {
		var_18_bool = var_11_int > (int)1;
		if(var_18_bool != 0) {
			func_558();
		}
		var_19_string = ""; var_20_object = Obj();
		var_9_bool = var_19_string;
		var_8_cvector = var_20_object;
		func_1221();
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_558();
	func_1207();
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_716(var_7_bool);
	func_1207();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_int, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0;
	var_18_bool = var_8_bool != (int)120;
	if(var_18_bool != 0) {
		return 8;
	}
	var_19_bool = var_0_bool == 0; //@ne
	if(var_19_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_13_cvector);
		FindDirLength(var_14_float, var_13_cvector, (float)7000.0);
		var_22_cvector = CVector(0,0,0); var_23_float = 0;
		func_570(var_16_float, var_22_cvector, (float)1.7453293800354004);
		var_22_cvector = var_15_cvector;
		var_16_float = var_15_cvector | var_15_cvector;
		var_52_bool = 0;
		var_52_bool = 0;
		var_54_bool = var_16_float >= (float)10000.0;
		if(var_54_bool != 0) {
			var_55_bool = 0;
			var_56_float = var_14_float * var_14_float;
			var_58_float = var_56_float * (float)2.25;
			var_59_bool = var_16_float >= var_58_float;
			if(var_59_bool != 1) {
				var_60_bool = 0;
				func_732((bool)1, var_60_bool);
				if(var_60_bool != 1) {
					var_55_bool = 0;
				}
			}
			if(var_55_bool != 0) {
				var_52_bool = 1;
			}
		}
		if(var_52_bool == 0) goto Label_715;
		Stop();
		var_80_cvector = CVector(0,0,0);
		func_926(var_80_cvector);
		var_1_bool = var_80_cvector + var_15_cvector;
	}
Label_715:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_716(var_8_bool);
	var_8_bool = Obj();
	func_1126();
	return 0;
}


task_5_event_7(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_int)
{
	var_9_cvector = CVector(0,0,0); var_10_float = 0; var_11_cvector = CVector(0,0,0); var_12_float = 0; var_13_cvector = CVector(0,0,0); var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0;
	var_18_bool = var_8_int != (int)120;
	if(var_18_bool != 0) {
		return 8;
	}
	var_19_bool = var_0_bool == 0; //@ne
	if(var_19_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_object = true;
	} else {
		GetDirection(var_13_cvector);
		FindDirLength(var_14_float, var_13_cvector, (float)7000.0);
		var_22_cvector = CVector(0,0,0); var_23_float = 0;
		func_748(var_16_float, var_22_cvector, (float)1.7453293800354004);
		var_22_cvector = var_15_cvector;
		var_16_float = var_15_cvector | var_15_cvector;
		var_52_bool = 0;
		var_52_bool = 0;
		var_54_bool = var_16_float >= (float)10000.0;
		if(var_54_bool != 0) {
			var_55_bool = 0;
			var_56_float = var_14_float * var_14_float;
			var_58_float = var_56_float * (float)2.25;
			var_59_bool = var_16_float >= var_58_float;
			if(var_59_bool != 1) {
				var_60_bool = 0;
				func_910((bool)1, var_60_bool);
				if(var_60_bool != 1) {
					var_55_bool = 0;
				}
			}
			if(var_55_bool != 0) {
				var_52_bool = 1;
			}
		}
		if(var_52_bool == 0) goto Label_893;
		Stop();
		var_80_cvector = CVector(0,0,0);
		func_926(var_80_cvector);
		var_1_bool = var_80_cvector + var_15_cvector;
	}
Label_893:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_894(var_8_object);
	var_8_object = Obj();
	func_1126();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_string)
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


event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	func_1105(var_9_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_1015(var_13_int, var_14_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	SensePlayerOnly((bool)1);
	func_1223();
	func_168();
	
Label_163:
	func_292(var_6_cvector, var_7_bool);
	goto Label_163;
}
EMIT "Return(); Pop(0)";


func_0()
{
	Hold();
	return 0;
}


func_6(var_10_object)
{
	EventDisable(0);
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_39(var_11_object);
	var_10_object = Obj();
	func_1205();
	EventEnable(0);
	
Label_17:
	Hold();
	goto Label_17;
}
EMIT "Return(); Pop(0)";


func_778(var_0_bool, var_1_bool, var_2_object, var_56_object)
{
	var_60_cvector = CVector(0,0,0); var_61_float = 0; var_62_bool = 0; var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_float = 0;
	var_0_bool = var_56_object;
	var_70_cvector = CVector(0,0,0); var_71_float = 0;
	func_748(var_69_float, var_70_cvector, (float)1.7453293800354004);
	var_70_cvector = var_65_cvector;
	var_66_float = var_65_cvector | var_65_cvector;
	var_101_bool = var_66_float < (float)10000.0;
	if(var_101_bool != 0) {
		var_103_float = sqrt(var_66_float);
		var_104_int = "Can't retreat, distance: " + var_103_float;
		Trace(var_104_int);
		Sleep((float)0.5);
		return 10;
	}
	var_106_float = GetByIndex(var_65_cvector, 0);
	var_107_float = GetByIndex(var_65_cvector, 2);
	Rotate(var_106_float, var_107_float);
	var_108_cvector = CVector(0,0,0);
	func_926(var_108_cvector);
	var_1_bool = var_108_cvector + var_65_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_811:
	MovePoint(var_1_bool, (int)1, var_67_bool);
	var_114_bool = var_67_bool;
	if(var_114_bool != 0) {
		var_115_bool = var_0_bool == 0; //@ne
		if(var_115_bool != 0) {
			goto Label_841;
		EMIT "GOTO 0x347";

		Label_841:
			return 10;
		}
		var_116_cvector = CVector(0,0,0); var_117_float = 0;
		func_748(var_69_float, var_116_cvector, (float)2.6179938316345215);
		var_116_cvector = var_68_cvector;
		var_69_float = var_68_cvector | var_68_cvector;
		var_119_bool = var_69_float >= (float)10000.0;
		if(var_119_bool != 0) {
			var_120_cvector = CVector(0,0,0);
			func_926(var_120_cvector);
			var_1_bool = var_120_cvector + var_68_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_841;
		}
	}
	var_123_bool = var_2_object == 0; //@nz
	if(var_123_bool == 1) goto Label_811;
	
}


func_1164(var_11_int, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_991(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		var_11_int = 2;
	} else {
		var_11_int = 0;
	}
	return 0;
	
}


func_910(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	GetDirection(var_63_cvector);
	var_65_cvector = CVector(0,0,0); var_66_object = Obj();
	var_66_object = var_0_bool;
	func_931(var_65_cvector, var_66_object);
	var_65_cvector = var_64_cvector;
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1097(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= (float)-0.3420201241970062;
	return 4;
}


func_894(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1174(var_51_object)
{
	var_52_object = Obj();
	var_51_object = var_52_object;
	TaskCall(4);
	func_600(var_53_object, var_54_cvector, var_55_bool, var_52_object);
	TaskReturn();
	return 0;
}


func_1182(var_15_int, var_16_object)
{
	var_17_bool = 0; var_18_object = Obj();
	var_16_object = var_18_object;
	func_991(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		var_15_int = 2;
	} else {
		var_15_int = 0;
	}
	return 0;
	
}


func_926(var_80_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	GetPosition(var_82_cvector);
	var_82_cvector = var_80_cvector;
	return 2;
}


func_931(var_65_cvector, var_66_object)
{
	var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
	GetPosition(var_69_cvector);
	@@var_66_object:GetPosition(var_70_cvector);
	var_65_cvector = var_70_cvector - var_69_cvector;
	return 4;
}


func_292(var_0_bool, var_1_bool)
{
	var_13_float = 0; var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_bool = 0; var_18_object = Obj(); var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_20_float, (float)0.5);
	Sleep(var_20_float);
	
Label_300:
	var_28_bool = var_0_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_29_bool = var_1_bool == 0; //@nz
		if(var_29_bool != 0) {

		Label_304:
			GetPosition(var_22_cvector);
			GetCameraFarDistance(var_23_float);
			var_23_float = var_23_float * (float)2.5;
			GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, var_23_float, var_24_bool);
			var_31_bool = var_24_bool;
			if(var_31_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_304;
		}
				var_1_bool = false;
	}
			return 14;
	}
	goto Label_321;
	
Label_321:
	FindShiftedPathTo(var_25_object, var_21_cvector);
	var_32_bool = var_25_object != 0; //@nn
	if(var_32_bool != 0) {
		RotatePath(var_25_object, var_26_bool);
		var_33_bool = var_26_bool;
		if(var_33_bool != 0) {
			var_34_bool = 0;
			func_372(var_34_bool);
			FollowPath(var_25_object, var_34_bool, var_26_bool);
			var_25_object = 0;
			var_35_bool = var_26_bool;
			if(var_35_bool != 0) {
				TaskCall(3);
				func_489();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_25_object = 0;
	goto Label_300;
	
}


func_39(var_11_object)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_string = ""; var_17_object = Obj(); var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0);
	var_32_bool = var_11_object == 0; //@ne
	if(var_32_bool != 0) {
		var_33_string = "";
		func_126("fdie");
	} else {
		@@var_11_object:GetPosition(var_22_cvector);
		GetPosition(var_23_cvector);
		GetDirection(var_24_cvector);
		var_25_cvector = var_23_cvector - var_22_cvector;
		var_36_float = GetByIndex(var_25_cvector, 0);
		var_37_float = GetByIndex(var_24_cvector, 0);
		var_38_float = var_36_float * var_37_float;
		var_39_float = GetByIndex(var_25_cvector, 2);
		var_40_float = GetByIndex(var_24_cvector, 2);
		var_41_float = var_39_float * var_40_float;
		var_42_int = var_38_float + var_41_float;
		var_44_bool = var_42_int >= (int)0;
		if(var_44_bool != 0) {
			var_26_string = "fdie";
		} else {
				var_26_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_11_object = var_27_object;
		var_47_bool = IsFuncExist(var_11_object, "GetScriptProperty", (int)2);
		if(var_47_bool != 0) {
			@@var_11_object:HasScriptProperty(var_28_bool, "Owner");
			var_49_bool = var_28_bool;
			if(var_49_bool != 0) {
				@@var_11_object:GetScriptProperty(var_27_object, "Owner");
				var_51_bool = var_27_object == 0; //@ne
				if(var_51_bool != 0) {
					var_11_object = var_27_object;
				}
			}
		}
		var_54_bool = IsFuncExist(var_27_object, "@GetEyesHeight", (int)1);
		if(var_54_bool != 0) {
			@@var_27_object:GetEyesHeight(var_30_float);
			var_31_cvector = CVector(0.0, 0.0, 0.0);
			var_55_float = GetByIndex(var_31_cvector, 1);
			var_30_float = var_55_float;
			SetByIndex(var_31_cvector, 1) = var_55_float;
			LookAsync(var_11_object, "head", var_31_cvector);
			var_29_bool = 1;
		} else {
			var_29_bool = 0;

		}
		PlayAnimation("all", var_26_string);
		WaitForAnimEnd();
		var_58_bool = var_29_bool;
		if(var_58_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_26_string);
		RemoveEnvelope();
		var_27_object = 0;
	}
	return 20;
	
}


func_168()
{
	var_9_bool = 0;
	func_1082(var_9_bool);
	var_12_bool = var_9_bool == 0; //@nz
	if(var_12_bool != 0) {
		func_1207();
	}
	return 0;
}


func_1192(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	TaskCall(5);
	func_778(var_57_object, var_58_cvector, var_59_bool, var_56_object);
	TaskReturn();
	return 0;
}


func_938(var_39_bool, var_40_object, var_41_string)
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


func_558()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1200(var_11_int)
{
	var_11_int = 0;
	return 0;
}


func_1203()
{
	return 0;
}


func_1205()
{
	return 0;
}


func_950(var_32_bool, var_33_object)
{
	var_34_bool = 0; var_35_bool = 0;
	@@var_33_object:IsDead(var_35_bool);
	var_35_bool = var_32_bool;
	return 2;
}


func_1207()
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


func_1082(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	IsLoaded(var_11_bool);
	var_11_bool = var_9_bool;
	return 2;
}


func_570(var_0_bool, var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0;
	GetPosition(var_30_cvector);
	@@@var_0_bool:GetPosition(var_31_cvector);
	GetDirection(var_32_cvector);
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_39_cvector = var_30_cvector - var_31_cvector;
	func_1087(var_38_cvector, var_39_cvector);
	var_46_float = var_32_cvector * (float)0.75;
	var_37_cvector = var_38_cvector + var_46_float;
	func_1087(var_36_cvector, var_37_cvector);
	var_36_cvector = var_33_cvector;
	FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, (int)32, (float)7000.0);
	var_35_float = var_35_float - (int)100;
	var_51_bool = var_35_float < (int)0;
	if(var_51_bool != 0) {
		var_35_float = 0;
	}
	var_22_cvector = var_34_cvector * var_35_float;
	return 12;
}


func_955(var_21_bool, var_22_object)
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
		func_950(var_32_bool, var_33_object);
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


func_1213(var_11_int)
{
	var_11_int = 0;
	return 0;
}


func_1087(var_38_cvector, var_39_cvector)
{
	var_40_float = 0; var_41_float = 0;
	var_42_int = var_39_cvector | var_39_cvector;
	var_41_float = sqrt(var_42_int);
	var_43_float = 9.999999974752427e-07;
	var_44_bool = var_41_float < var_43_float;
	if(var_44_bool != 0) {
		var_38_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_38_cvector = var_39_cvector / var_41_float;
	return 2;
}


func_1216()
{
	return 0;
}


func_1218(var_12_int)
{
	var_12_int = 0;
	return 0;
}


func_1221()
{
	return 0;
}


func_1223()
{
	return 0;
}


func_1224(var_12_bool)
{
	var_12_bool = 1;
	return 0;
}


func_1097(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_int = var_72_cvector | var_73_cvector;
	var_75_int = var_72_cvector | var_72_cvector;
	var_76_int = var_73_cvector | var_73_cvector;
	var_77_float = var_75_int * var_76_int;
	var_78_float = sqrt(var_77_float);
	var_71_float = var_74_int / var_78_float;
	return 0;
}


func_716(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1105(var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	TaskCall(1);
	func_6(var_10_object);
	TaskReturn();
	return 0;
}


func_600(var_0_bool, var_1_bool, var_2_object, var_52_object)
{
	var_56_cvector = CVector(0,0,0); var_57_float = 0; var_58_bool = 0; var_59_cvector = CVector(0,0,0); var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_float = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0); var_65_float = 0;
	var_0_bool = var_52_object;
	var_66_cvector = CVector(0,0,0); var_67_float = 0;
	func_570(var_65_float, var_66_cvector, (float)1.7453293800354004);
	var_66_cvector = var_61_cvector;
	var_62_float = var_61_cvector | var_61_cvector;
	var_97_bool = var_62_float < (float)10000.0;
	if(var_97_bool != 0) {
		var_99_float = sqrt(var_62_float);
		var_100_int = "Can't retreat, distance: " + var_99_float;
		Trace(var_100_int);
		Sleep((float)0.5);
		return 10;
	}
	var_102_float = GetByIndex(var_61_cvector, 0);
	var_103_float = GetByIndex(var_61_cvector, 2);
	Rotate(var_102_float, var_103_float);
	var_104_cvector = CVector(0,0,0);
	func_926(var_104_cvector);
	var_1_bool = var_104_cvector + var_61_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_633:
	MovePoint(var_1_bool, (int)1, var_63_bool);
	var_110_bool = var_63_bool;
	if(var_110_bool != 0) {
		var_111_bool = var_0_bool == 0; //@ne
		if(var_111_bool != 0) {
			goto Label_663;
		EMIT "GOTO 0x295";

		Label_663:
			return 10;
		}
		var_112_cvector = CVector(0,0,0); var_113_float = 0;
		func_570(var_65_float, var_112_cvector, (float)2.6179938316345215);
		var_112_cvector = var_64_cvector;
		var_65_float = var_64_cvector | var_64_cvector;
		var_115_bool = var_65_float >= (float)10000.0;
		if(var_115_bool != 0) {
			var_116_cvector = CVector(0,0,0);
			func_926(var_116_cvector);
			var_1_bool = var_116_cvector + var_64_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_663;
		}
	}
	var_119_bool = var_2_object == 0; //@nz
	if(var_119_bool == 1) goto Label_633;
	
}


func_732(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	GetDirection(var_63_cvector);
	var_65_cvector = CVector(0,0,0); var_66_object = Obj();
	var_66_object = var_0_bool;
	func_931(var_65_cvector, var_66_object);
	var_65_cvector = var_64_cvector;
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1097(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= (float)-0.3420201241970062;
	return 4;
}


func_991(var_17_bool, var_18_object)
{
	var_19_int = 0; var_20_int = 0;
	var_21_bool = 0; var_22_object = Obj();
	var_18_object = var_22_object;
	func_955(var_21_bool, var_22_object);
	var_38_bool = var_21_bool == 0; //@nz
	if(var_38_bool != 0) {
		var_17_bool = 0;
		return 2;
	}
	var_39_bool = 0; var_40_object = Obj(); var_41_string = "";
	var_18_object = var_40_object;
	func_938(var_39_bool, var_40_object, "noaccess");
	var_48_bool = var_39_bool == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 1;
		return 2;
	}
	@@var_18_object:GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == (int)0;
	return 2;
}


func_356(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_489()
{
	var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_bool = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_bool = 0;
	WaitForAnimEnd();
	var_50_bool = 0;
	func_1082(var_50_bool);
	var_51_bool = var_50_bool == 0; //@nz
	if(var_51_bool != 0) {
		return 14;
	}
	func_1147((int)0);
	var_52_int = var_43_int;
	var_44_int = 0;
	
Label_503:
	var_65_bool = 0;
	var_65_bool = 0;
	var_67_bool = var_44_int < (int)5;
	if(var_67_bool != 0) {
		var_68_bool = 0;
		func_1082(var_68_bool);
		if(var_68_bool != 0) {
			var_65_bool = 1;
		}
	}
	if(var_65_bool != 0) {
		irand(var_45_int, (int)3);
		var_71_bool = var_45_int == (int)0;
		if(var_71_bool != 0) {
			var_72_int = var_43_int;
			if(var_72_int == 0) goto Label_536;
			irand(var_46_int, var_43_int);
			var_74_string = ""; var_75_int = 0;
			var_46_int = var_75_int;
			func_1140(var_74_string, var_75_int);
			PlayAnimation("all", var_74_string);
			WaitForAnimEnd(var_47_bool);
			var_76_bool = var_47_bool == 0; //@nz
			if(var_76_bool != 0) {
			} else {
		} else {
				var_79_bool = var_45_int == (int)1;
				if(var_79_bool != 0) {
					rand(var_48_float, (int)4);
					var_82_int = var_48_float + (int)1;
					Sleep(var_82_int, var_49_bool);
					var_83_bool = var_49_bool == 0; //@nz
					if(var_83_bool != 0) {
						goto Label_557;
					}
					goto Label_554;
				}
				var_84_int = var_44_int;
				if(var_84_int == 0) goto Label_554;
				goto Label_557;
		}
		Label_554:
			var_44_int = var_44_int + (int)1;
			goto Label_503;

		}
	}
Label_557:
	return 14;
	
}


func_748(var_0_bool, var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0;
	GetPosition(var_30_cvector);
	@@@var_0_bool:GetPosition(var_31_cvector);
	GetDirection(var_32_cvector);
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_39_cvector = var_30_cvector - var_31_cvector;
	func_1087(var_38_cvector, var_39_cvector);
	var_46_float = var_32_cvector * (float)0.75;
	var_37_cvector = var_38_cvector + var_46_float;
	func_1087(var_36_cvector, var_37_cvector);
	var_36_cvector = var_33_cvector;
	FindLongestDir(var_34_cvector, var_35_float, var_33_cvector, var_23_float, (int)32, (float)7000.0);
	var_35_float = var_35_float - (int)100;
	var_51_bool = var_35_float < (int)0;
	if(var_51_bool != 0) {
		var_35_float = 0;
	}
	var_22_cvector = var_34_cvector * var_35_float;
	return 12;
}


func_372(var_34_bool)
{
	var_34_bool = 0;
	return 0;
}


func_1140(var_58_string, var_59_int)
{
	var_60_string = ""; var_61_string = "";
	var_62_int = var_59_int;
	if(var_62_int != 0) {
		"idle" = "idle" + var_59_int;
	}
	var_61_string = var_58_string;
	return 2;
}


func_1015(var_12_object, var_13_int)
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


func_1147(var_52_int)
{
	var_53_int = 0; var_54_bool = 0; var_55_int = 0; var_56_bool = 0;
	var_55_int = 0;
	
Label_1149:
	var_58_string = ""; var_59_int = 0;
	var_55_int = var_59_int;
	func_1140(var_58_string, var_59_int);
	HasAnimation(var_56_bool, "all", var_58_string);
	var_63_bool = var_56_bool == 0; //@nz
	if(var_63_bool != 0) {
	} else {
		var_55_int = var_55_int + (int)1;
		goto Label_1149;
	}
	var_55_int = var_52_int;
	return 4;
	
}


func_126(var_33_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_33_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_33_string);
	RemoveEnvelope();
	return 0;
}


