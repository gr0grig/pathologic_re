// @IMPORTS: Hold/0,StopGroup0/0,sync/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,irand/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,StopAnimation/0,SensePlayerOnly/1,Sleep/1,GetRandomPFPointInCircle/4,RotatePath/2,FollowPath/3,GetCameraFarDistance/1,RequestClearPath/1,FindShiftedPathTo/2,FindLongestDir/6,Trace/1,Rotate/2,SetTimer/2,MovePoint/3,KillTimer/1,FindDirLength/3,IsPlayerActor/2,GetScene/1,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,IsLoaded/1,IsExisting3DSound/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,GetProperty/2,SignalDeath/1,ReportReputationChange/3,FindActor/2,HasAnimation/3
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:Can't retreat, distance: |W:HasProperty|A:HasProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|A:GetProperty|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:health|W:unholster|W:player_shot|W:battle|A:IsWeaponHolstered|W:heal|W:player|W:idle
// @RUN_OP: 0x1a3
// @RUN_TASK: 3
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars= params=1
// @EVENT_0: op=0x1c vars=object
// @EVENT_6: op=0x2a vars=
// @EVENT_22: op=0xa3 vars=object,int,float,float
// @EVENT_16: op=0xa5 vars=object,string
// @EVENT_41: op=0xa7 vars=object
// @TASK_2: vars= params=0
// @EVENT_0: op=0xa9 vars=object
// @EVENT_17: op=0xbd vars=object
// @EVENT_30: op=0xd5 vars=object,object,bool
// @EVENT_40: op=0xf1 vars=object
// @EVENT_42: op=0x105 vars=object,string
// @EVENT_26: op=0x12a vars=string
// @EVENT_6: op=0x138 vars=
// @EVENT_1: op=0x13f vars=object
// @TASK_3: vars=bool,bool params=0
// @EVENT_0: op=0x1ba vars=object
// @EVENT_17: op=0x1ce vars=object
// @EVENT_30: op=0x1e6 vars=object,object,bool
// @EVENT_40: op=0x202 vars=object
// @EVENT_42: op=0x216 vars=object,string
// @EVENT_26: op=0x23b vars=string
// @EVENT_1: op=0x249 vars=object
// @EVENT_6: op=0x257 vars=
// @EVENT_10: op=0x29e vars=object
// @EVENT_28: op=0x2a2 vars=
// @EVENT_41: op=0x2ac vars=object
// @TASK_4: vars=object,cvector,bool params=1
// @EVENT_6: op=0x2bd vars=
// @EVENT_7: op=0x32b vars=int
// @EVENT_41: op=0x366 vars=object
// @TASK_5: vars=object,cvector,bool params=1
// @EVENT_7: op=0x3e6 vars=int
// @EVENT_41: op=0x421 vars=object
// @STANDALONE_EVENT_16: op=0x564 vars=object,string
// @STANDALONE_EVENT_41: op=0x571 vars=object
// @STANDALONE_EVENT_22: op=0x577 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x57f vars=object,int,float,float,cvector,cvector
// @PE: 0xd,0x2a,0x89,0xa3,0xa5,0xa7,0x12a,0x138,0x13f,0x23b,0x249,0x257,0x29e,0x2ac,0x2bd,0x366,0x421,0x554,0x55c,0x571,0x577,0x57f,0x589,0x5a9,0x5d9,0x5df,0x621,0x62b,0x633,0x63d,0x645,0x648,0x64a,0x652,0x655,0x657,0x65a,0x65c,0x65f,0x661,0x664,0x666,0x669,0x66b,0x66e,0x671

task_0_event_5(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1605(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_8_bool = Obj();
		func_1608();
	}
	return 2;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_1612();
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


task_2_event_0(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1605(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_414();
		}
		var_8_bool = Obj();
		func_1608();
	}
	return 2;
}


task_2_event_17(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_object = Obj();
	var_8_bool = var_11_object;
	func_1503(var_11_object);
	var_20_int = 0; var_21_object = Obj();
	var_8_bool = var_21_object;
	func_1569(var_20_int, var_21_object);
	var_20_int = var_10_int;
	var_57_bool = var_10_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_10_int > (int)1;
		if(var_59_bool != 0) {
			func_414();
		}
		var_60_object = Obj();
		var_8_bool = var_60_object;
		func_1579(var_60_object);
	}
	return 2;
}


task_2_event_30(var_0_object, var_1_object, var_2_bool, var_3_bool, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0;
	var_8_object = var_14_object;
	var_9_cvector = var_15_object;
	var_10_bool = var_16_bool;
	func_1649(var_16_bool);
	if(var_13_bool != 0) {
		var_17_int = 0; var_18_object = Obj(); var_19_bool = 0;
		var_8_object = var_18_object;
		var_10_bool = var_19_bool;
		func_1587(var_18_object, var_19_bool);
		var_17_int = var_12_int;
		var_55_bool = var_12_int > (int)0;
		if(var_55_bool != 0) {
			var_57_bool = var_12_int > (int)1;
			if(var_57_bool != 0) {
				func_414();
			}
			var_58_object = Obj();
			var_8_object = var_58_object;
			func_1597(var_58_object);
		}
	}
	return 2;
}


task_2_event_40(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1618(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_414();
		}
		var_8_bool = Obj();
		func_1621();
	}
	return 2;
}


task_2_event_42(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_bool = 0; var_13_object = Obj(); var_14_string = "";
	var_8_cvector = var_13_object;
	var_9_bool = var_14_string;
	func_1417(var_12_bool, var_13_object, var_14_string);
	if(var_12_bool != 0) {
		func_414();
		var_27_object = Obj(); var_28_string = "";
		var_8_cvector = var_27_object;
		var_9_bool = var_28_string;
		func_1449(var_27_object, var_28_string);
	} else {
		var_38_int = 0; var_39_string = ""; var_40_object = Obj();
		var_9_bool = var_39_string;
		var_8_cvector = var_40_object;
		func_1623(var_40_object);
		var_38_int = var_11_int;
		var_42_bool = var_11_int > (int)0;
		if(var_42_bool == 0) goto Label_297;
		var_44_bool = var_11_int > (int)1;
		if(var_44_bool != 0) {
			func_414();
		}
		var_45_string = ""; var_46_object = Obj();
		var_9_bool = var_45_string;
		var_8_cvector = var_46_object;
		func_1626();
	}
Label_297:
	return 2;
	
}


task_2_event_26(var_0_string, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_string = "";
	var_8_bool = var_10_string;
	func_1516(var_9_bool, var_10_string);
	if(var_9_bool != 0) {
		func_414();
		var_18_string = "";
		var_8_bool = var_18_string;
		func_1532(var_18_string);
	}
	return 0;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_414();
	func_1612();
	return 0;
}


task_2_event_1(var_0_object, var_1_bool, var_2_bool, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_bool = var_10_object;
	func_1474(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_414();
		var_21_object = Obj();
		var_8_bool = var_21_object;
		func_1497(var_21_object);
	}
	return 0;
}


task_3_event_0(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1605(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_677(var_9_int, var_10_int);
		}
		var_8_bool = Obj();
		func_1608();
	}
	return 2;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_object = Obj();
	var_8_bool = var_11_object;
	func_1503(var_11_object);
	var_20_int = 0; var_21_object = Obj();
	var_8_bool = var_21_object;
	func_1569(var_20_int, var_21_object);
	var_20_int = var_10_int;
	var_57_bool = var_10_int > (int)0;
	if(var_57_bool != 0) {
		var_59_bool = var_10_int > (int)1;
		if(var_59_bool != 0) {
			func_677(var_9_int, var_10_int);
		}
		var_60_object = Obj();
		var_8_bool = var_60_object;
		func_1579(var_60_object);
	}
	return 2;
}


task_3_event_30(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_cvector, var_10_bool)
{
	var_11_int = 0; var_12_int = 0;
	var_13_bool = 0; var_14_object = Obj(); var_15_object = Obj(); var_16_bool = 0;
	var_8_object = var_14_object;
	var_9_cvector = var_15_object;
	var_10_bool = var_16_bool;
	func_1649(var_16_bool);
	if(var_13_bool != 0) {
		var_17_int = 0; var_18_object = Obj(); var_19_bool = 0;
		var_8_object = var_18_object;
		var_10_bool = var_19_bool;
		func_1587(var_18_object, var_19_bool);
		var_17_int = var_12_int;
		var_55_bool = var_12_int > (int)0;
		if(var_55_bool != 0) {
			var_57_bool = var_12_int > (int)1;
			if(var_57_bool != 0) {
				func_677(var_11_int, var_12_int);
			}
			var_58_object = Obj();
			var_8_object = var_58_object;
			func_1597(var_58_object);
		}
	}
	return 2;
}


task_3_event_40(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_int = 0; var_10_int = 0;
	var_11_int = 0; var_12_object = Obj();
	var_8_bool = var_12_object;
	func_1618(var_12_object);
	var_11_int = var_10_int;
	var_14_bool = var_10_int > (int)0;
	if(var_14_bool != 0) {
		var_16_bool = var_10_int > (int)1;
		if(var_16_bool != 0) {
			func_677(var_9_int, var_10_int);
		}
		var_8_bool = Obj();
		func_1621();
	}
	return 2;
}


task_3_event_42(var_0_bool, var_1_bool, var_2_object, var_3_string, var_4_object, var_5_cvector, var_6_bool, var_7_object, var_8_cvector, var_9_bool)
{
	var_10_int = 0; var_11_int = 0;
	var_12_bool = 0; var_13_object = Obj(); var_14_string = "";
	var_8_cvector = var_13_object;
	var_9_bool = var_14_string;
	func_1417(var_12_bool, var_13_object, var_14_string);
	if(var_12_bool != 0) {
		func_677(var_10_int, var_11_int);
		var_27_object = Obj(); var_28_string = "";
		var_8_cvector = var_27_object;
		var_9_bool = var_28_string;
		func_1449(var_27_object, var_28_string);
	} else {
		var_38_int = 0; var_39_string = ""; var_40_object = Obj();
		var_9_bool = var_39_string;
		var_8_cvector = var_40_object;
		func_1623(var_40_object);
		var_38_int = var_11_int;
		var_42_bool = var_11_int > (int)0;
		if(var_42_bool == 0) goto Label_570;
		var_44_bool = var_11_int > (int)1;
		if(var_44_bool != 0) {
			func_677(var_10_int, var_11_int);
		}
		var_45_string = ""; var_46_object = Obj();
		var_9_bool = var_45_string;
		var_8_cvector = var_46_object;
		func_1626();
	}
Label_570:
	return 2;
	
}


task_3_event_26(var_0_bool, var_1_bool, var_2_string, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_string = "";
	var_8_bool = var_10_string;
	func_1516(var_9_bool, var_10_string);
	if(var_9_bool != 0) {
		func_677(var_7_cvector, var_8_bool);
		var_18_string = "";
		var_8_bool = var_18_string;
		func_1532(var_18_string);
	}
	return 0;
}


task_3_event_1(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	var_9_bool = 0; var_10_object = Obj();
	var_8_bool = var_10_object;
	func_1474(var_9_bool, var_10_object);
	if(var_9_bool != 0) {
		func_677(var_7_cvector, var_8_bool);
		var_21_object = Obj();
		var_8_bool = var_21_object;
		func_1497(var_21_object);
	}
	return 0;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_677(var_6_cvector, var_7_bool);
	func_1612();
	return 0;
}


task_3_event_10(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	RequestClearPath(var_8_bool);
	return 0;
}


task_3_event_28(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	Stop();
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_object, var_3_object, var_4_cvector, var_5_bool, var_6_object, var_7_cvector, var_8_bool)
{
	func_677(var_7_cvector, var_8_bool);
	var_8_bool = Obj();
	func_1393();
	return 0;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	func_863(var_7_bool);
	func_1612();
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
		func_708(var_16_float, var_22_cvector, (float)1.7453293800354004);
		var_22_cvector = var_15_cvector;
		var_16_float = var_15_cvector | var_15_cvector;
		var_52_bool = 0;
		var_52_bool = 0;
		var_54_bool = var_16_float >= (float)2500.0;
		if(var_54_bool != 0) {
			var_55_bool = 0;
			var_56_float = var_14_float * var_14_float;
			var_58_float = var_56_float * (float)2.25;
			var_59_bool = var_16_float >= var_58_float;
			if(var_59_bool != 1) {
				var_60_bool = 0;
				func_879((bool)1, var_60_bool);
				if(var_60_bool != 1) {
					var_55_bool = 0;
				}
			}
			if(var_55_bool != 0) {
				var_52_bool = 1;
			}
		}
		if(var_52_bool == 0) goto Label_862;
		Stop();
		var_80_cvector = CVector(0,0,0);
		func_1082(var_80_cvector);
		var_1_bool = var_80_cvector + var_15_cvector;
	}
Label_862:
	return 8;
	
}


task_4_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_object, var_7_cvector, var_8_bool)
{
	func_863(var_8_bool);
	var_8_bool = Obj();
	func_1393();
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
		func_895(var_16_float, var_22_cvector, (float)1.7453293800354004);
		var_22_cvector = var_15_cvector;
		var_16_float = var_15_cvector | var_15_cvector;
		var_52_bool = 0;
		var_52_bool = 0;
		var_54_bool = var_16_float >= (float)2500.0;
		if(var_54_bool != 0) {
			var_55_bool = 0;
			var_56_float = var_14_float * var_14_float;
			var_58_float = var_56_float * (float)2.25;
			var_59_bool = var_16_float >= var_58_float;
			if(var_59_bool != 1) {
				var_60_bool = 0;
				func_1066((bool)1, var_60_bool);
				if(var_60_bool != 1) {
					var_55_bool = 0;
				}
			}
			if(var_55_bool != 0) {
				var_52_bool = 1;
			}
		}
		if(var_52_bool == 0) goto Label_1049;
		Stop();
		var_80_cvector = CVector(0,0,0);
		func_1082(var_80_cvector);
		var_1_bool = var_80_cvector + var_15_cvector;
	}
Label_1049:
	return 8;
	
}


task_5_event_41(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object)
{
	func_1050(var_8_object);
	var_8_object = Obj();
	func_1393();
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
	func_1372(var_9_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_1220(var_12_object, var_13_int, var_14_float);
	return 0;
}


event_43(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_float, var_11_float, var_12_cvector, var_13_cvector)
{
	var_14_object = Obj(); var_15_int = 0; var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0);
	var_8_object = var_14_object;
	var_9_int = var_15_int;
	var_10_float = var_16_float;
	var_12_cvector = var_17_cvector;
	var_13_cvector = var_18_cvector;
	func_1288(var_16_float, var_17_cvector, var_18_cvector);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_object, var_3_cvector, var_4_bool, var_5_object, var_6_cvector, var_7_bool)
{
	SensePlayerOnly((bool)1);
	func_1648();
	func_433();
	
Label_428:
	func_606(var_6_cvector, var_7_bool);
	goto Label_428;
}
EMIT "Return(); Pop(0)";


func_1152(var_20_bool, var_21_object)
{
	var_22_int = 0; var_23_int = 0;
	var_24_bool = 0; var_25_object = Obj();
	var_21_object = var_25_object;
	func_1116(var_24_bool, var_25_object);
	var_41_bool = var_24_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	var_21_object = var_43_object;
	func_1099(var_42_bool, var_43_object, "noaccess");
	var_51_bool = var_42_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_20_bool = 1;
		return 2;
	}
	@@var_21_object:GetProperty("noaccess", var_23_int);
	var_20_bool = var_23_int == (int)0;
	return 2;
}


func_0()
{
	
Label_0:
	Hold();
	var_13_bool = 0;
	func_1302(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool == 1) goto Label_0;
	return 0;
}


func_1288(var_14_object, var_17_cvector, var_18_cvector)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	GetScene(var_21_object);
	AddActorByType(var_22_object, "scripted", var_21_object, var_17_cvector, var_18_cvector, "blood_dir.xml");
	var_25_object = Obj();
	var_14_object = var_25_object;
	func_1176(var_25_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_137(var_33_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_34_string = "";
	var_33_string = var_34_string;
	func_1307(var_34_string);
	PlayAnimation("all", var_33_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_33_string);
	RemoveEnvelope();
	return 0;
}


func_1417(var_12_bool, var_13_object, var_14_string)
{
	var_16_bool = var_14_string == "unholster";
	if(var_16_bool != 0) {
		var_17_bool = 0; var_18_object = Obj();
		var_13_object = var_18_object;
		func_1628(var_18_object);
		var_17_bool = var_12_bool;
		return 0;
	EMIT "GOTO 0x5a7";
	}
	var_20_bool = var_14_string == "player_shot";
	if(var_20_bool != 0) {
		var_21_bool = 0; var_22_object = Obj();
		var_13_object = var_22_object;
		func_1633(var_22_object);
		var_21_bool = var_12_bool;
		return 0;
	EMIT "GOTO 0x5a7";
	}
	var_24_bool = var_14_string == "battle";
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_13_object = var_26_object;
		func_1638(var_26_object);
		var_25_bool = var_12_bool;
		return 0;
	}
	var_12_bool = 0;
	return 0;
}


func_1545(var_64_string, var_65_int)
{
	var_66_string = ""; var_67_string = "";
	var_68_int = var_65_int;
	if(var_68_int != 0) {
		"idle" = "idle" + var_65_int;
	}
	var_67_string = var_64_string;
	return 2;
}


func_13(var_10_object)
{
	EventDisable(0);
	var_11_object = Obj();
	var_10_object = var_11_object;
	func_46(var_11_object);
	var_10_object = Obj();
	func_1610();
	EventEnable(0);
	
Label_24:
	Hold();
	goto Label_24;
}
EMIT "Return(); Pop(0)";


func_1552(var_58_int)
{
	var_59_int = 0; var_60_bool = 0; var_61_int = 0; var_62_bool = 0;
	var_61_int = 0;
	
Label_1554:
	var_64_string = ""; var_65_int = 0;
	var_61_int = var_65_int;
	func_1545(var_64_string, var_65_int);
	HasAnimation(var_62_bool, "all", var_64_string);
	var_69_bool = var_62_bool == 0; //@nz
	if(var_69_bool != 0) {
	} else {
		var_61_int = var_61_int + (int)1;
		goto Label_1554;
	}
	var_61_int = var_58_int;
	return 4;
	
}


func_1302(var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	IsLoaded(var_11_bool);
	var_11_bool = var_9_bool;
	return 2;
}


func_1176(var_25_object)
{
	var_26_bool = 0; var_27_int = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_bool = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_string = "";
	var_40_bool = var_25_object == 0; //@ne
	if(var_40_bool != 0) {
		return 14;
	}
	IsDead(var_33_bool);
	var_41_bool = var_33_bool;
	if(var_41_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_34_int);
	var_43_bool = var_34_int < (int)0;
	if(var_43_bool != 0) {
		return 14;
	}
	@@var_25_object:GetPosition(var_35_cvector);
	GetPosition(var_36_cvector);
	GetDirection(var_37_cvector);
	var_38_cvector = var_36_cvector - var_35_cvector;
	var_44_float = GetByIndex(var_38_cvector, 0);
	var_45_float = GetByIndex(var_37_cvector, 0);
	var_46_float = var_44_float * var_45_float;
	var_47_float = GetByIndex(var_38_cvector, 2);
	var_48_float = GetByIndex(var_37_cvector, 2);
	var_49_float = var_47_float * var_48_float;
	var_50_int = var_46_float + var_49_float;
	var_52_bool = var_50_int >= (int)0;
	if(var_52_bool != 0) {
		var_39_string = "fhit";
	} else {
		var_39_string = "bhit";
	}
	var_55_int = var_39_string + "1";
	var_57_int = var_39_string + "2";
	FadeSecondaryAnimation("hit_react", var_55_int, var_57_int, (int)-10);
	return 14;
	
}


func_665(var_30_float)
{
	var_31_float = 0; var_32_float = 0;
	GetCameraFarDistance(var_32_float);
	var_32_float = var_30_float;
	return 2;
}


func_1050(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1307(var_34_string)
{
	var_35_bool = 0; var_36_int = 0; var_37_bool = 0; var_38_int = 0; var_39_bool = 0; var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	IsExisting3DSound(var_43_bool, var_34_string);
	var_51_bool = var_43_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_44_int = 0;

	Label_1313:
		var_53_int = var_44_int + (int)1;
		var_54_int = var_34_string + var_53_int;
		IsExisting3DSound(var_45_bool, var_54_int);
		var_55_bool = var_45_bool == 0; //@nz
		if(var_55_bool != 0) {
		} else {
			var_44_int = var_44_int + (int)1;
			goto Label_1313;
		}
		var_56_bool = var_44_int == 0; //@nz
		if(var_56_bool != 0) {
			return 16;
		}
		irand(var_46_int, var_44_int);
		var_58_int = var_46_int + (int)1;
		var_34_string = var_34_string + var_58_int;
	}
	Is3DSoundLoaded(var_47_bool, var_34_string);
	var_59_bool = var_47_bool;
	if(var_59_bool != 0) {
		GetEyesHeight(var_48_float);
		GetDirection(var_49_cvector);
		var_50_cvector = var_49_cvector * (int)50;
		var_61_float = GetByIndex(var_50_cvector, 1);
		var_61_float = var_61_float + var_48_float;
		SetByIndex(var_50_cvector, 1) = var_61_float;
		PlayGlobalSound(var_34_string, var_50_cvector);
	}
	return 16;
	
}


func_412(var_83_bool)
{
	var_83_bool = 1;
	return 0;
}


func_925(var_0_bool, var_1_bool, var_2_object, var_59_object)
{
	var_63_cvector = CVector(0,0,0); var_64_float = 0; var_65_bool = 0; var_66_cvector = CVector(0,0,0); var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_float = 0; var_70_bool = 0; var_71_cvector = CVector(0,0,0); var_72_float = 0;
	var_0_bool = var_59_object;
	var_73_cvector = CVector(0,0,0); var_74_float = 0;
	func_895(var_72_float, var_73_cvector, (float)1.7453293800354004);
	var_73_cvector = var_68_cvector;
	var_69_float = var_68_cvector | var_68_cvector;
	var_104_bool = var_69_float < (float)2500.0;
	if(var_104_bool != 0) {
		var_105_cvector = CVector(0,0,0); var_106_float = 0;
		func_895(var_72_float, var_105_cvector, (float)2.6179938316345215);
		var_105_cvector = var_68_cvector;
		var_69_float = var_68_cvector | var_68_cvector;
		var_108_bool = var_69_float < (float)2500.0;
		if(var_108_bool != 0) {
			var_110_float = sqrt(var_69_float);
			var_111_int = "Can't retreat, distance: " + var_110_float;
			Trace(var_111_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_113_float = GetByIndex(var_68_cvector, 0);
	var_114_float = GetByIndex(var_68_cvector, 2);
	Rotate(var_113_float, var_114_float);
	var_115_cvector = CVector(0,0,0);
	func_1082(var_115_cvector);
	var_1_bool = var_115_cvector + var_68_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_967:
	MovePoint(var_1_bool, (int)1, var_70_bool);
	var_121_bool = var_70_bool;
	if(var_121_bool != 0) {
		var_122_bool = var_0_bool == 0; //@ne
		if(var_122_bool != 0) {
			goto Label_997;
		EMIT "GOTO 0x3e3";

		Label_997:
			return 10;
		}
		var_123_cvector = CVector(0,0,0); var_124_float = 0;
		func_895(var_72_float, var_123_cvector, (float)2.6179938316345215);
		var_123_cvector = var_71_cvector;
		var_72_float = var_71_cvector | var_71_cvector;
		var_126_bool = var_72_float >= (float)2500.0;
		if(var_126_bool != 0) {
			var_127_cvector = CVector(0,0,0);
			func_1082(var_127_cvector);
			var_1_bool = var_127_cvector + var_71_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_997;
		}
	}
	var_130_bool = var_2_object == 0; //@nz
	if(var_130_bool == 1) goto Label_967;
	
}


func_414()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_1569(var_20_int, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_1152(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		var_20_int = 2;
	} else {
		var_20_int = 0;
	}
	return 0;
	
}


func_677(var_0_bool, var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	Stop();
	StopGroup0();
	return 0;
}


func_1449(var_27_object, var_28_string)
{
	var_30_bool = var_28_string == "unholster";
	if(var_30_bool != 0) {
		var_27_object = Obj();
		func_1631();
	} else {
		var_33_bool = var_28_string == "player_shot";
		if(var_33_bool != 0) {
			var_27_object = Obj();
			func_1636();
			goto Label_1473;
		}
		var_36_bool = var_28_string == "battle";
		if(var_36_bool == 0) goto Label_1473;
		var_27_object = Obj();
		func_1641();
	}
Label_1473:
	return 0;
	
}


func_1066(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	GetDirection(var_63_cvector);
	var_65_cvector = CVector(0,0,0); var_66_object = Obj();
	var_66_object = var_0_bool;
	func_1087(var_65_cvector, var_66_object);
	var_65_cvector = var_64_cvector;
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1364(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= (float)-0.3420201241970062;
	return 4;
}


func_1579(var_60_object)
{
	var_61_object = Obj();
	var_60_object = var_61_object;
	TaskCall(4);
	func_738(var_62_object, var_63_cvector, var_64_bool, var_61_object);
	TaskReturn();
	return 0;
}


func_46(var_11_object)
{
	var_12_cvector = CVector(0,0,0); var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_string = ""; var_17_object = Obj(); var_18_bool = 0; var_19_bool = 0; var_20_float = 0; var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_string = ""; var_27_object = Obj(); var_28_bool = 0; var_29_bool = 0; var_30_float = 0; var_31_cvector = CVector(0,0,0);
	var_32_bool = var_11_object == 0; //@ne
	if(var_32_bool != 0) {
		var_33_string = "";
		func_137("fdie");
	} else {
		@@var_11_object:GetPosition(var_22_cvector);
		GetPosition(var_23_cvector);
		GetDirection(var_24_cvector);
		var_25_cvector = var_23_cvector - var_22_cvector;
		var_65_float = GetByIndex(var_25_cvector, 0);
		var_66_float = GetByIndex(var_24_cvector, 0);
		var_67_float = var_65_float * var_66_float;
		var_68_float = GetByIndex(var_25_cvector, 2);
		var_69_float = GetByIndex(var_24_cvector, 2);
		var_70_float = var_68_float * var_69_float;
		var_71_int = var_67_float + var_70_float;
		var_73_bool = var_71_int >= (int)0;
		if(var_73_bool != 0) {
			var_26_string = "fdie";
		} else {
				var_26_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_11_object = var_27_object;
		var_76_bool = IsFuncExist(var_11_object, "GetScriptProperty", (int)2);
		if(var_76_bool != 0) {
			@@var_11_object:HasScriptProperty(var_28_bool, "Owner");
			var_78_bool = var_28_bool;
			if(var_78_bool != 0) {
				@@var_11_object:GetScriptProperty(var_27_object, "Owner");
				var_80_bool = var_27_object == 0; //@ne
				if(var_80_bool != 0) {
					var_11_object = var_27_object;
				}
			}
		}
		var_83_bool = IsFuncExist(var_27_object, "@GetEyesHeight", (int)1);
		if(var_83_bool != 0) {
			@@var_27_object:GetEyesHeight(var_30_float);
			var_31_cvector = CVector(0.0, 0.0, 0.0);
			var_84_float = GetByIndex(var_31_cvector, 1);
			var_30_float = var_84_float;
			SetByIndex(var_31_cvector, 1) = var_84_float;
			LookAsync(var_11_object, "head", var_31_cvector);
			var_29_bool = 1;
		} else {
			var_29_bool = 0;

		}
		var_86_string = "";
		var_26_string = var_86_string;
		func_1307(var_86_string);
		PlayAnimation("all", var_26_string);
		WaitForAnimEnd();
		var_88_bool = var_29_bool;
		if(var_88_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_26_string);
		RemoveEnvelope();
		var_27_object = 0;
	}
	return 20;
	
}


func_433()
{
	var_9_bool = 0;
	func_1302(var_9_bool);
	var_12_bool = var_9_bool == 0; //@nz
	if(var_12_bool != 0) {
		func_1612();
	}
	return 0;
}


func_1587(var_17_int, var_18_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_18_object = var_21_object;
	func_1152(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		var_17_int = 2;
	} else {
		var_17_int = 0;
	}
	return 0;
	
}


func_693(var_40_bool)
{
	var_40_bool = 0;
	return 0;
}


func_695(var_34_object, var_35_cvector)
{
	var_36_object = Obj(); var_37_object = Obj();
	FindShiftedPathTo(var_37_object, var_35_cvector);
	var_37_object = var_34_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1082(var_80_cvector)
{
	var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	GetPosition(var_82_cvector);
	var_82_cvector = var_80_cvector;
	return 2;
}


func_1597(var_58_object)
{
	var_59_object = Obj();
	var_58_object = var_59_object;
	TaskCall(5);
	func_925(var_60_object, var_61_cvector, var_62_bool, var_59_object);
	TaskReturn();
	return 0;
}


func_1087(var_42_cvector, var_43_object)
{
	var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0);
	GetPosition(var_46_cvector);
	@@var_43_object:GetPosition(var_47_cvector);
	var_42_cvector = var_47_cvector - var_46_cvector;
	return 4;
}


func_1474(var_9_bool, var_10_object)
{
	var_11_bool = 0; var_12_bool = 0;
	var_13_bool = 0;
	var_13_bool = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_10_object = var_15_object;
	func_1628(var_15_object);
	if(var_14_bool != 0) {
		var_16_bool = 0; var_17_object = Obj();
		var_10_object = var_17_object;
		func_1094(var_16_bool, var_17_object);
		if(var_16_bool != 0) {
			var_13_bool = 1;
		}
	}
	if(var_13_bool != 0) {
		@@var_10_object:IsWeaponHolstered(var_12_bool);
		var_20_bool = var_12_bool == 0; //@nz
		if(var_20_bool != 0) {
			var_9_bool = 1;
			return 2;
		}
	}
	var_9_bool = 0;
	return 2;
}


func_708(var_0_bool, var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0;
	GetPosition(var_30_cvector);
	@@@var_0_bool:GetPosition(var_31_cvector);
	GetDirection(var_32_cvector);
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_39_cvector = var_30_cvector - var_31_cvector;
	func_1354(var_38_cvector, var_39_cvector);
	var_46_float = var_32_cvector * (float)0.75;
	var_37_cvector = var_38_cvector + var_46_float;
	func_1354(var_36_cvector, var_37_cvector);
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


func_1605(var_11_int)
{
	var_11_int = 0;
	return 0;
}


func_1220(var_12_object, var_13_int, var_14_float)
{
	var_15_cvector = CVector(0,0,0); var_16_object = Obj(); var_17_int = 0; var_18_bool = 0; var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_int = 0; var_22_int = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0);
	var_33_bool = 0;
	var_33_bool = 0;
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_object = var_12_object;
	if(var_35_object != 0) {
		var_37_bool = var_13_int != (int)4;
		if(var_37_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_39_bool = var_13_int != (int)5;
		if(var_39_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0);
		var_42_cvector = CVector(0,0,0); var_43_object = Obj();
		var_12_object = var_43_object;
		func_1087(var_42_cvector, var_43_object);
		var_42_cvector = var_41_cvector;
		func_1354(var_40_cvector, var_41_cvector);
		var_40_cvector = var_24_cvector;
		CreateVectorVector(var_25_object);
		var_26_int = 1;

	Label_1249:
		var_54_int = "hit" + var_26_int;
		GetGeometryLocator(var_54_int, var_27_bool, var_28_cvector, var_29_cvector);
		var_55_bool = var_27_bool == 0; //@nz
		if(var_55_bool != 0) {
		} else {
			var_103_int = var_29_cvector | var_24_cvector;
			var_105_bool = var_103_int >= (float)0.7071067690849304;
			if(var_105_bool != 0) {
				@@var_25_object:add(var_28_cvector);
			}
			var_26_int = var_26_int + (int)1;
			goto Label_1249;
		}
		@@var_25_object:size(var_30_int);
		var_56_int = var_30_int;
		if(var_56_int != 0) {
			irand(var_31_int, var_30_int);
			@@var_25_object:get(var_32_cvector, var_31_int);
			var_57_object = Obj(); var_58_int = 0; var_59_float = 0; var_60_cvector = CVector(0,0,0); var_61_cvector = CVector(0,0,0);
			var_12_object = var_57_object;
			var_13_int = var_58_int;
			var_14_float = var_59_float;
			var_32_cvector = var_60_cvector;
			var_61_cvector = -var_24_cvector;
			func_1288(var_59_float, var_60_cvector, var_61_cvector);
			return 18;
		}
		var_25_object = 0;
	}
	var_102_object = Obj();
	var_12_object = var_102_object;
	func_1176(var_102_object);
	return 18;
	
}


func_1094(var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsPlayerActor(var_17_object, var_19_bool);
	var_19_bool = var_16_bool;
	return 2;
}


func_1608()
{
	return 0;
}


func_1348(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	self(var_18_object);
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1610()
{
	return 0;
}


func_1354(var_40_cvector, var_41_cvector)
{
	var_48_float = 0; var_49_float = 0;
	var_50_int = var_41_cvector | var_41_cvector;
	var_49_float = sqrt(var_50_int);
	var_51_float = 9.999999974752427e-07;
	var_52_bool = var_49_float < var_51_float;
	if(var_52_bool != 0) {
		var_40_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_40_cvector = var_41_cvector / var_49_float;
	return 2;
}


func_1612()
{
	TaskCall(0);
	func_0();
	TaskReturn();
	return 0;
}


func_333()
{
	var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_bool = 0; var_49_int = 0; var_50_int = 0; var_51_int = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_bool = 0;
	WaitForAnimEnd();
	var_56_bool = 0;
	func_1302(var_56_bool);
	var_57_bool = var_56_bool == 0; //@nz
	if(var_57_bool != 0) {
		return 14;
	}
	func_1552((int)0);
	var_58_int = var_49_int;
	var_50_int = 0;
	
Label_347:
	var_71_bool = 0;
	var_71_bool = 0;
	var_73_bool = var_50_int < (int)5;
	if(var_73_bool != 0) {
		var_74_bool = 0;
		func_1302(var_74_bool);
		if(var_74_bool != 0) {
			var_71_bool = 1;
		}
	}
	if(var_71_bool != 0) {
		irand(var_51_int, (int)3);
		var_77_bool = var_51_int == (int)0;
		if(var_77_bool != 0) {
			var_78_int = var_49_int;
			if(var_78_int == 0) goto Label_380;
			irand(var_52_int, var_49_int);
			var_80_string = ""; var_81_int = 0;
			var_52_int = var_81_int;
			func_1545(var_80_string, var_81_int);
			PlayAnimation("all", var_80_string);
			WaitForAnimEnd(var_53_bool);
			var_82_bool = var_53_bool == 0; //@nz
			if(var_82_bool != 0) {
			} else {
		} else {
				var_87_bool = var_51_int == (int)1;
				if(var_87_bool != 0) {
					rand(var_54_float, (int)4);
					var_90_int = var_54_float + (int)1;
					Sleep(var_90_int, var_55_bool);
					var_91_bool = var_55_bool == 0; //@nz
					if(var_91_bool != 0) {
						goto Label_409;
					}
					goto Label_398;
				}
				var_92_int = var_50_int;
				if(var_92_int == 0) goto Label_398;
				goto Label_409;
		}
		Label_398:
			var_83_bool = 0;
			func_412(var_83_bool);
			var_84_bool = var_83_bool == 0; //@nz
			if(var_84_bool != 0) {
				goto Label_409;
			}
			ResetAAS();
			var_50_int = var_50_int + (int)1;
			goto Label_347;

		}
	}
Label_409:
	ResetAAS();
	return 14;
	
}


func_1099(var_42_bool, var_43_object, var_44_string)
{
	var_45_bool = 0; var_46_bool = 0;
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", (int)2);
	var_50_bool = var_49_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_42_bool = 0;
		return 2;
	}
	@@var_43_object:HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
	return 2;
}


func_1618(var_11_int)
{
	var_11_int = 0;
	return 0;
}


func_1364(var_71_float, var_72_cvector, var_73_cvector)
{
	var_74_int = var_72_cvector | var_73_cvector;
	var_75_int = var_72_cvector | var_72_cvector;
	var_76_int = var_73_cvector | var_73_cvector;
	var_77_float = var_75_int * var_76_int;
	var_78_float = sqrt(var_77_float);
	var_71_float = var_74_int / var_78_float;
	return 0;
}


func_1621()
{
	return 0;
}


func_1623(var_38_int)
{
	var_38_int = 0;
	return 0;
}


func_1111(var_35_bool, var_36_object)
{
	var_37_bool = 0; var_38_bool = 0;
	@@var_36_object:IsDead(var_38_bool);
	var_38_bool = var_35_bool;
	return 2;
}


func_1497(var_21_object)
{
	var_21_object = Obj();
	func_1631();
	return 0;
}


func_1626()
{
	return 0;
}


func_1116(var_24_bool, var_25_object)
{
	var_26_object = Obj(); var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj();
	var_30_bool = var_25_object == 0; //@ne
	if(var_30_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	var_31_bool = 0;
	var_31_bool = 0;
	var_34_bool = IsFuncExist(var_25_object, "IsDead", (int)1);
	if(var_34_bool != 0) {
		var_35_bool = 0; var_36_object = Obj();
		var_25_object = var_36_object;
		func_1111(var_35_bool, var_36_object);
		if(var_35_bool != 0) {
			var_31_bool = 1;
		}
	}
	if(var_31_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	GetScene(var_28_object);
	var_39_bool = var_28_object == 0; //@ne
	if(var_39_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	@@var_25_object:GetScene(var_29_object);
	var_40_bool = var_28_object != var_29_object;
	if(var_40_bool != 0) {
		var_24_bool = 0;
		return 4;
	}
	var_24_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1372(var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	TaskCall(1);
	func_13(var_10_object);
	TaskReturn();
	return 0;
}


func_606(var_0_bool, var_1_bool)
{
	var_15_float = 0; var_16_cvector = CVector(0,0,0); var_17_cvector = CVector(0,0,0); var_18_bool = 0; var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_bool = 0; var_25_object = Obj(); var_26_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_21_float, (float)0.5);
	Sleep(var_21_float);
	
Label_614:
	var_28_bool = var_0_bool == 0; //@nz
	if(var_28_bool != 0) {
		var_29_bool = var_1_bool == 0; //@nz
		if(var_29_bool != 0) {

		Label_618:
			GetPosition(var_23_cvector);
			var_30_float = 0;
			func_665(var_30_float);
			GetRandomPFPointInCircle(var_22_cvector, var_23_cvector, var_30_float, var_24_bool);
			var_33_bool = var_24_bool;
			if(var_33_bool != 0) {
			} else {
					Sleep((int)1);
					goto Label_618;
		}
				var_1_bool = false;
	}
			return 12;
	}
	goto Label_634;
	
Label_634:
	var_34_object = Obj(); var_35_cvector = CVector(0,0,0);
	var_22_cvector = var_35_cvector;
	func_695(var_34_object, var_35_cvector);
	var_34_object = var_25_object;
	var_38_bool = var_25_object != 0; //@nn
	if(var_38_bool != 0) {
		RotatePath(var_25_object, var_26_bool);
		var_39_bool = var_26_bool;
		if(var_39_bool != 0) {
			var_40_bool = 0;
			func_693(var_40_bool);
			FollowPath(var_25_object, var_40_bool, var_26_bool);
			var_25_object = 0;
			var_41_bool = var_26_bool;
			if(var_41_bool != 0) {
				TaskCall(2);
				func_333();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_25_object = 0;
	goto Label_614;
	
}


func_1503(var_11_object)
{
	var_12_bool = 0; var_13_object = Obj();
	var_11_object = var_13_object;
	func_1094(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		var_16_object = Obj();
		func_1348(var_16_object);
		ReportReputationChange(var_11_object, var_16_object, (float)0.0);
	}
	return 0;
}


func_863(var_2_object)
{
	Stop();
	KillTimer((int)120);
	var_2_object = true;
	return 0;
}


func_1628(var_14_bool)
{
	var_14_bool = 0;
	return 0;
}


func_1633(var_21_bool)
{
	var_21_bool = 0;
	return 0;
}


func_1631()
{
	return 0;
}


func_1636()
{
	return 0;
}


func_738(var_0_bool, var_1_bool, var_2_object, var_61_object)
{
	var_65_cvector = CVector(0,0,0); var_66_float = 0; var_67_bool = 0; var_68_cvector = CVector(0,0,0); var_69_float = 0; var_70_cvector = CVector(0,0,0); var_71_float = 0; var_72_bool = 0; var_73_cvector = CVector(0,0,0); var_74_float = 0;
	var_0_bool = var_61_object;
	var_75_cvector = CVector(0,0,0); var_76_float = 0;
	func_708(var_74_float, var_75_cvector, (float)1.7453293800354004);
	var_75_cvector = var_70_cvector;
	var_71_float = var_70_cvector | var_70_cvector;
	var_106_bool = var_71_float < (float)2500.0;
	if(var_106_bool != 0) {
		var_107_cvector = CVector(0,0,0); var_108_float = 0;
		func_708(var_74_float, var_107_cvector, (float)2.6179938316345215);
		var_107_cvector = var_70_cvector;
		var_71_float = var_70_cvector | var_70_cvector;
		var_110_bool = var_71_float < (float)2500.0;
		if(var_110_bool != 0) {
			var_112_float = sqrt(var_71_float);
			var_113_int = "Can't retreat, distance: " + var_112_float;
			Trace(var_113_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_115_float = GetByIndex(var_70_cvector, 0);
	var_116_float = GetByIndex(var_70_cvector, 2);
	Rotate(var_115_float, var_116_float);
	var_117_cvector = CVector(0,0,0);
	func_1082(var_117_cvector);
	var_1_bool = var_117_cvector + var_70_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_object = false;
	
Label_780:
	MovePoint(var_1_bool, (int)1, var_72_bool);
	var_123_bool = var_72_bool;
	if(var_123_bool != 0) {
		var_124_bool = var_0_bool == 0; //@ne
		if(var_124_bool != 0) {
			goto Label_810;
		EMIT "GOTO 0x328";

		Label_810:
			return 10;
		}
		var_125_cvector = CVector(0,0,0); var_126_float = 0;
		func_708(var_74_float, var_125_cvector, (float)2.6179938316345215);
		var_125_cvector = var_73_cvector;
		var_74_float = var_73_cvector | var_73_cvector;
		var_128_bool = var_74_float >= (float)2500.0;
		if(var_128_bool != 0) {
			var_129_cvector = CVector(0,0,0);
			func_1082(var_129_cvector);
			var_1_bool = var_129_cvector + var_73_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_810;
		}
	}
	var_132_bool = var_2_object == 0; //@nz
	if(var_132_bool == 1) goto Label_780;
	
}


func_1638(var_25_bool)
{
	var_25_bool = 0;
	return 0;
}


func_1641()
{
	return 0;
}


func_1643(var_16_bool)
{
	var_16_bool = 0;
	return 0;
}


func_1516(var_9_bool, var_10_string)
{
	var_11_object = Obj(); var_12_object = Obj();
	var_14_bool = var_10_string == "heal";
	if(var_14_bool != 0) {
		FindActor(var_12_object, "player");
		var_16_bool = 0; var_17_object = Obj();
		var_12_object = var_17_object;
		func_1643(var_17_object);
		var_16_bool = var_9_bool;
		return 2;
	EMIT "Stack[-1] = 0";
	}
	var_9_bool = 0;
	return 2;
}


func_1646()
{
	return 0;
}


func_879(var_0_bool, var_60_bool)
{
	var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0); var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	GetDirection(var_63_cvector);
	var_65_cvector = CVector(0,0,0); var_66_object = Obj();
	var_66_object = var_0_bool;
	func_1087(var_65_cvector, var_66_object);
	var_65_cvector = var_64_cvector;
	var_71_float = 0; var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	var_63_cvector = var_72_cvector;
	var_64_cvector = var_73_cvector;
	func_1364(var_71_float, var_72_cvector, var_73_cvector);
	var_60_bool = var_71_float >= (float)-0.3420201241970062;
	return 4;
}


func_1648()
{
	return 0;
}


func_1649(var_13_bool)
{
	var_13_bool = 1;
	return 0;
}


func_1532(var_18_string)
{
	var_19_object = Obj(); var_20_object = Obj();
	var_22_bool = var_18_string == "heal";
	if(var_22_bool != 0) {
		FindActor(var_20_object, "player");
		var_20_object = Obj();
		func_1646();
		var_20_object = 0;
	}
	return 2;
}


func_895(var_0_bool, var_22_cvector, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_float = 0;
	GetPosition(var_30_cvector);
	@@@var_0_bool:GetPosition(var_31_cvector);
	GetDirection(var_32_cvector);
	var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0);
	var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0);
	var_39_cvector = var_30_cvector - var_31_cvector;
	func_1354(var_38_cvector, var_39_cvector);
	var_46_float = var_32_cvector * (float)0.75;
	var_37_cvector = var_38_cvector + var_46_float;
	func_1354(var_36_cvector, var_37_cvector);
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


