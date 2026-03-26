// @IMPORTS: Hold/0,GetPosition/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,Stop/0,StopAsync/0,LookAsync/3,PlayAnimation/2,WaitForAnimEnd/0,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,SensePlayerOnly/1,KillTimer/1,ResetAAS/0,IsPlayerActor/2,SetTimer/2,rand/2,Sleep/1,GetCameraFarDistance/1,GetRandomPFPointInCircle/4,FindShiftedPathTo/2,RotatePath/2,FollowPath/3,RequestClearPath/1,StopGroup0/0,irand/2,WaitForAnimEnd/1,Sleep/2,StopAnimation/0,Face/1,FindPathTo/2,FollowPath/5,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,IsLoaded/1,self/1,GetProperty/2,SignalDeath/1,HasAnimation/3,CanSee/2,ReportReputationChange/3,SetRTEnvelope/2,RemoveActor/1
// @STRINGS: W:fdie|A:GetPosition|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:all|W:dattack_begin|W:dattack_end|W:zwalk|A:GetPFPosition|W:run|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:disease|W:armor_disease|W:immunity|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:health|W:idle
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
// @STANDALONE_EVENT_16: op=0x4b2 vars=object,string
// @STANDALONE_EVENT_41: op=0x4bf vars=object
// @STANDALONE_EVENT_22: op=0x4c5 vars=object,int,float,float
// @PE: 0x0,0x78,0x8e,0x90,0x92,0x118,0x11e,0x124,0x147,0x1b1,0x285,0x2e1,0x305,0x378,0x38a,0x395,0x39e,0x49f,0x4aa,0x4bf,0x4c5,0x4e5,0x4e8,0x4f0,0x4f3,0x4f5,0x4f8,0x4fa,0x4fd,0x4ff,0x502,0x504,0x507,0x512,0x515,0x52e

task_0_event_0(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1274(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_5_object = Obj();
		func_1277();
	}
	return 2;
}


task_0_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_1335();
	return 0;
}


task_0_event_22(var_0_object, var_1_int, var_2_float, var_3_float, var_4_bool, var_5_bool, var_6_bool, var_7_bool, var_8_object)
{
	return 0;
}


task_0_event_16(var_0_object, var_1_string, var_2_bool, var_3_bool, var_4_bool, var_5_bool, var_6_object)
{
	return 0;
}


task_0_event_41(var_0_object, var_1_bool, var_2_bool, var_3_bool, var_4_bool, var_5_object)
{
	return 0;
}


task_1_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1274(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_311(var_7_int);
		}
		var_5_object = Obj();
		func_1277();
	}
	return 2;
}


task_1_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1264(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_311(var_7_int);
		}
		var_5_object = Obj();
		func_1267();
	}
	return 2;
}


task_1_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj();
	var_5_bool = var_10_object;
	var_6_object = var_11_object;
	func_1303(var_9_bool, var_10_object, var_11_object);
	if(var_9_bool != 0) {
		var_27_int = 0; var_28_object = Obj();
		var_5_bool = var_28_object;
		func_1269(var_28_object);
		var_27_int = var_8_int;
		var_30_bool = var_8_int > (int)0;
		if(var_30_bool != 0) {
			var_32_bool = var_8_int > (int)1;
			if(var_32_bool != 0) {
				func_311(var_8_int);
			}
			var_5_bool = Obj();
			func_1272();
		}
	}
	return 2;
}


task_1_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1279(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_311(var_7_int);
		}
		var_5_object = Obj();
		func_1282();
	}
	return 2;
}


task_1_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_int = 0; var_10_string = ""; var_11_object = Obj();
	var_6_object = var_10_string;
	var_5_bool = var_11_object;
	func_1284(var_11_object);
	var_9_int = var_8_int;
	var_13_bool = var_8_int > (int)0;
	if(var_13_bool != 0) {
		var_15_bool = var_8_int > (int)1;
		if(var_15_bool != 0) {
			func_311(var_8_int);
		}
		var_17_string = ""; var_18_object = Obj();
		var_6_object = var_17_string;
		var_5_bool = var_18_object;
		func_1287();
	}
	return 2;
}


task_1_event_1(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_object = Obj();
	var_5_object = var_6_object;
	func_336(var_5_object, var_6_object);
	return 0;
}


task_1_event_3(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_object = Obj();
	var_5_object = var_6_object;
	func_336(var_5_object, var_6_object);
	return 0;
}


task_1_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_int, var_4_bool, var_5_object)
{
	var_7_bool = var_5_object != (int)110;
	if(var_7_bool != 0) {
		return 0;
	}
	var_2_bool = false;
	KillTimer((int)110);
	ResetAAS();
	return 0;
}


task_1_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_311(var_4_object);
	func_1335();
	return 0;
}


task_1_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_311(var_5_object);
	var_5_object = Obj();
	func_1215();
	return 0;
}


task_1_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	RequestClearPath(var_5_object);
	return 0;
}


task_1_event_28(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	Stop();
	return 0;
}


task_2_event_0(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1274(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_640();
		}
		var_5_object = Obj();
		func_1277();
	}
	return 2;
}


task_2_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1264(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_640();
		}
		var_5_object = Obj();
		func_1267();
	}
	return 2;
}


task_2_event_30(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_object, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_bool = 0; var_10_object = Obj(); var_11_object = Obj();
	var_5_bool = var_10_object;
	var_6_object = var_11_object;
	func_1303(var_9_bool, var_10_object, var_11_object);
	if(var_9_bool != 0) {
		var_27_int = 0; var_28_object = Obj();
		var_5_bool = var_28_object;
		func_1269(var_28_object);
		var_27_int = var_8_int;
		var_30_bool = var_8_int > (int)0;
		if(var_30_bool != 0) {
			var_32_bool = var_8_int > (int)1;
			if(var_32_bool != 0) {
				func_640();
			}
			var_5_bool = Obj();
			func_1272();
		}
	}
	return 2;
}


task_2_event_40(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1279(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_640();
		}
		var_5_object = Obj();
		func_1282();
	}
	return 2;
}


task_2_event_42(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_string, var_5_bool, var_6_object)
{
	var_7_int = 0; var_8_int = 0;
	var_9_int = 0; var_10_string = ""; var_11_object = Obj();
	var_6_object = var_10_string;
	var_5_bool = var_11_object;
	func_1284(var_11_object);
	var_9_int = var_8_int;
	var_13_bool = var_8_int > (int)0;
	if(var_13_bool != 0) {
		var_15_bool = var_8_int > (int)1;
		if(var_15_bool != 0) {
			func_640();
		}
		var_16_string = ""; var_17_object = Obj();
		var_6_object = var_16_string;
		var_5_bool = var_17_object;
		func_1287();
	}
	return 2;
}


task_2_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_640();
	func_1335();
	return 0;
}


task_3_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1298(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_732();
		}
		var_5_object = Obj();
		func_1301();
	}
	return 2;
}


task_3_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_732();
	func_1335();
	return 0;
}


task_3_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_object, var_4_bool, var_5_object)
{
	func_732();
	var_5_object = Obj();
	func_1215();
	return 0;
}


task_4_event_17(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_int = 0; var_7_int = 0;
	var_8_int = 0; var_9_object = Obj();
	var_5_object = var_9_object;
	func_1298(var_9_object);
	var_8_int = var_7_int;
	var_11_bool = var_7_int > (int)0;
	if(var_11_bool != 0) {
		var_13_bool = var_7_int > (int)1;
		if(var_13_bool != 0) {
			func_910(var_7_int);
		}
		var_5_object = Obj();
		func_1301();
	}
	return 2;
}


task_4_event_6(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	func_910(var_4_object);
	func_1335();
	return 0;
}


task_4_event_7(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_int)
{
	var_7_bool = var_5_int != (int)0;
	if(var_7_bool != 0) {
		return 0;
	}
	var_8_bool = 0; var_9_object = Obj();
	var_9_object = var_1_bool;
	func_926(var_8_bool, var_9_object);
	var_44_bool = var_8_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_4_event_10(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	RequestClearPath(var_5_object);
	return 0;
}


task_4_event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	func_910(var_5_object);
	var_5_object = Obj();
	func_1215();
	return 0;
}


event_16(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_string)
{
	var_7_float = 0; var_8_float = 0;
	var_10_bool = var_6_string == "health";
	if(var_10_bool != 0) {
		GetProperty("health", var_8_float);
		var_13_bool = var_8_float <= (int)0;
		if(var_13_bool != 0) {
			SignalDeath(var_5_object);
		}
	}
	return 2;
}


event_41(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object)
{
	var_6_object = Obj();
	var_5_object = var_6_object;
	func_1194(var_6_object);
	return 0;
}


event_22(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_int, var_7_float, var_8_float)
{
	var_9_object = Obj(); var_10_int = 0; var_11_float = 0;
	var_5_object = var_9_object;
	var_6_int = var_10_int;
	var_7_float = var_11_float;
	func_1105(var_10_int, var_11_float);
	return 0;
}


main(var_0_bool, var_1_bool, var_2_bool, var_3_bool, var_4_object)
{
	SensePlayerOnly((bool)1);
	func_1289();
	func_163();
	
Label_157:
	var_2_bool = false;
	func_376(var_3_bool, var_4_object);
	goto Label_157;
}
EMIT "Return(); Pop(0)";


func_640()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_0(var_7_object)
{
	EventDisable(0);
	var_8_object = Obj();
	var_7_object = var_8_object;
	func_33(var_8_object);
	var_7_object = Obj();
	func_1326();
	EventEnable(0);
	
Label_11:
	Hold();
	goto Label_11;
}
EMIT "Return(); Pop(0)";


func_1282()
{
	return 0;
}


func_1284(var_9_int)
{
	var_9_int = 0;
	return 0;
}


func_773(var_64_bool, var_65_object)
{
	var_68_bool = 0; var_69_object = Obj(); var_70_float = 0; var_71_float = 0; var_72_bool = 0; var_73_bool = 0;
	var_65_object = var_69_object;
	func_786(var_64_bool, var_65_object, var_68_bool, var_69_object, (float)150, (float)3000, (bool)0, (bool)1);
	var_68_bool = var_64_bool;
	return 0;
}


func_645(var_56_object)
{
	var_57_bool = 0; var_58_object = Obj();
	var_56_object = var_58_object;
	func_1293(var_57_bool, var_58_object);
	if(var_57_bool != 0) {
		var_61_object = Obj();
		var_56_object = var_61_object;
		func_683(var_61_object);
	}
	return 0;
}


func_1287()
{
	return 0;
}


func_1289()
{
	var_6_bool = GlobalVars[0];
	GlobalVars[0] = (bool)0;
	return 0;
}


func_1293(var_57_bool, var_58_object)
{
	var_59_bool = 0; var_60_bool = 0;
	IsPlayerActor(var_58_object, var_60_bool);
	var_60_bool = var_57_bool;
	return 2;
}


func_910(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_784(var_108_string)
{
	var_108_string = "zwalk";
	return 0;
}


func_1040(var_25_bool, var_26_object)
{
	var_27_bool = 0; var_28_bool = 0;
	@@var_26_object:IsDead(var_28_bool);
	var_28_bool = var_25_bool;
	return 2;
}


func_1298(var_8_int)
{
	var_8_int = 0;
	return 0;
}


func_786(var_0_bool, var_1_bool, var_68_bool, var_69_object, var_70_float, var_71_float, var_72_bool, var_73_bool)
{
	var_74_bool = 0; var_75_bool = 0; var_76_object = Obj(); var_77_cvector = CVector(0,0,0); var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_float = 0; var_81_object = Obj(); var_82_bool = 0; var_83_bool = 0; var_84_object = Obj(); var_85_cvector = CVector(0,0,0); var_86_cvector = CVector(0,0,0); var_87_cvector = CVector(0,0,0); var_88_float = 0; var_89_object = Obj();
	var_0_bool = false;
	var_1_bool = var_69_object;
	var_73_bool = var_83_bool;
	
Label_790:
	var_90_bool = 0; var_91_object = Obj();
	var_69_object = var_91_object;
	func_926(var_90_bool, var_91_object);
	var_94_bool = var_90_bool == 0; //@nz
	if(var_94_bool != 0) {
		var_68_bool = 0;
		return 16;
	}
	@@var_69_object:GetPosition(var_85_cvector);
	GetPosition(var_86_cvector);
	var_87_cvector = var_85_cvector - var_86_cvector;
	var_88_float = var_87_cvector | var_87_cvector;
	var_95_bool = 0;
	var_95_bool = 0;
	var_97_bool = var_71_float > (int)0;
	if(var_97_bool != 0) {
		var_98_float = var_71_float * var_71_float;
		var_99_bool = var_88_float > var_98_float;
		if(var_99_bool != 0) {
			var_95_bool = 1;
		}
	}
	if(var_95_bool != 0) {
		Stop();
		var_68_bool = 0;
		return 16;
	}
	var_100_float = var_70_float * var_70_float;
	var_101_bool = var_88_float > var_100_float;
	if(var_101_bool != 0) {
		@@var_69_object:GetPFPosition(var_85_cvector);
		FindPathTo(var_89_object, var_85_cvector);
		var_102_bool = var_89_object != 0; //@nn
		if(var_102_bool != 0) {
			var_89_object = var_84_object;
			var_89_object = 0;
		}
		var_103_bool = var_84_object != 0; //@nn
		if(var_103_bool != 0) {
			var_104_bool = var_83_bool;
			if(var_104_bool == 0) goto Label_839;
			var_83_bool = 0;
			RotatePath(var_84_object, var_82_bool);
			var_105_bool = var_82_bool == 0; //@nz
			if(var_105_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_108_string = "";
				func_784(var_108_string);
				var_109_string = "";
				func_933(var_109_string);
				FollowPath(var_84_object, var_72_bool, var_82_bool, var_108_string, var_109_string);
				var_110_bool = var_82_bool == 0; //@nz
				if(var_110_bool != 0) {
					var_111_bool = var_0_bool;
					if(var_111_bool != 0) {
						var_84_object = 0;
						goto Label_886;
					EMIT "GOTO 0x35b";
					}
				} else {
					var_84_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_82_bool);
					var_114_bool = var_82_bool == 0; //@nz
					if(var_114_bool != 0) {
						var_115_bool = var_0_bool;
						if(var_115_bool != 0) {
							var_84_object = 0;
							goto Label_886;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_886;
	}
			var_89_object = 0;
			goto Label_884;

		Label_884:
			var_84_object = 0;

		}
		goto Label_790;
	}
Label_886:
	var_68_bool = !var_0_bool;
	return 16;
	
}


func_1172(var_7_bool)
{
	var_8_bool = 0; var_9_bool = 0;
	IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
	return 2;
}


func_1301()
{
	return 0;
}


func_1045(var_14_bool, var_15_object)
{
	var_16_object = Obj(); var_17_object = Obj(); var_18_object = Obj(); var_19_object = Obj();
	var_20_bool = var_15_object == 0; //@ne
	if(var_20_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_21_bool = 0;
	var_21_bool = 0;
	var_24_bool = IsFuncExist(var_15_object, "IsDead", (int)1);
	if(var_24_bool != 0) {
		var_25_bool = 0; var_26_object = Obj();
		var_15_object = var_26_object;
		func_1040(var_25_bool, var_26_object);
		if(var_25_bool != 0) {
			var_21_bool = 1;
		}
	}
	if(var_21_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	GetScene(var_18_object);
	var_29_bool = var_18_object == 0; //@ne
	if(var_29_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	@@var_15_object:GetScene(var_19_object);
	var_30_bool = var_18_object != var_19_object;
	if(var_30_bool != 0) {
		var_14_bool = 0;
		return 4;
	}
	var_14_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1303(var_9_bool, var_10_object, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	CanSee(var_13_bool, var_10_object);
	var_14_bool = 0;
	var_14_bool = 1;
	var_15_bool = var_13_bool;
	if(var_15_bool != 1) {
		var_16_float = 0; var_17_object = Obj();
		var_10_object = var_17_object;
		func_935(var_16_float, var_17_object);
		var_25_bool = var_16_float <= (float)250000.0;
		if(var_25_bool != 1) {
			var_14_bool = 0;
		}
	}
	if(var_14_bool != 0) {
		ReportReputationChange(var_10_object, var_11_object, (float)-0.30000001192092896);
		var_9_bool = 1;
		return 2;
	}
	var_9_bool = 0;
	return 2;
}


func_1177(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_926(var_8_bool, var_9_object)
{
	var_10_bool = 0; var_11_object = Obj();
	var_9_object = var_11_object;
	func_1081(var_10_bool, var_11_object);
	var_10_bool = var_8_bool;
	return 0;
}


func_1183(var_175_float, var_176_float, var_177_float, var_178_float)
{
	var_179_bool = var_176_float < var_177_float;
	if(var_179_bool != 0) {
		var_177_float = var_175_float;
		return 0;
	}
	var_180_bool = var_176_float > var_178_float;
	if(var_180_bool != 0) {
		var_178_float = var_175_float;
		return 0;
	}
	var_176_float = var_175_float;
	return 0;
}


func_33(var_8_object)
{
	var_9_cvector = CVector(0,0,0); var_10_cvector = CVector(0,0,0); var_11_cvector = CVector(0,0,0); var_12_cvector = CVector(0,0,0); var_13_string = ""; var_14_object = Obj(); var_15_bool = 0; var_16_bool = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_string = ""; var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0);
	var_29_bool = var_8_object == 0; //@ne
	if(var_29_bool != 0) {
		var_30_string = "";
		func_120("fdie");
	} else {
		@@var_8_object:GetPosition(var_19_cvector);
		GetPosition(var_20_cvector);
		GetDirection(var_21_cvector);
		var_22_cvector = var_20_cvector - var_19_cvector;
		var_33_float = GetByIndex(var_22_cvector, 0);
		var_34_float = GetByIndex(var_21_cvector, 0);
		var_35_float = var_33_float * var_34_float;
		var_36_float = GetByIndex(var_22_cvector, 2);
		var_37_float = GetByIndex(var_21_cvector, 2);
		var_38_float = var_36_float * var_37_float;
		var_39_int = var_35_float + var_38_float;
		var_41_bool = var_39_int >= (int)0;
		if(var_41_bool != 0) {
			var_23_string = "fdie";
		} else {
				var_23_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_8_object = var_24_object;
		var_44_bool = IsFuncExist(var_8_object, "GetScriptProperty", (int)2);
		if(var_44_bool != 0) {
			@@var_8_object:HasScriptProperty(var_25_bool, "Owner");
			var_46_bool = var_25_bool;
			if(var_46_bool != 0) {
				@@var_8_object:GetScriptProperty(var_24_object, "Owner");
				var_48_bool = var_24_object == 0; //@ne
				if(var_48_bool != 0) {
					var_8_object = var_24_object;
				}
			}
		}
		var_51_bool = IsFuncExist(var_24_object, "@GetEyesHeight", (int)1);
		if(var_51_bool != 0) {
			@@var_24_object:GetEyesHeight(var_27_float);
			var_28_cvector = CVector(0.0, 0.0, 0.0);
			var_52_float = GetByIndex(var_28_cvector, 1);
			var_27_float = var_52_float;
			SetByIndex(var_28_cvector, 1) = var_52_float;
			LookAsync(var_8_object, "head", var_28_cvector);
			var_26_bool = 1;
		} else {
			var_26_bool = 0;

		}
		PlayAnimation("all", var_23_string);
		WaitForAnimEnd();
		var_55_bool = var_26_bool;
		if(var_55_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_23_string);
		RemoveEnvelope();
		var_24_object = 0;
	}
	return 20;
	
}


func_163()
{
	var_7_bool = 0;
	func_1172(var_7_bool);
	var_10_bool = var_7_bool == 0; //@nz
	if(var_10_bool != 0) {
		func_1335();
	}
	return 0;
}


func_933(var_109_string)
{
	var_109_string = "run";
	return 0;
}


func_935(var_16_float, var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0);
	GetPosition(var_21_cvector);
	@@var_17_object:GetPosition(var_22_cvector);
	var_23_cvector = var_22_cvector - var_21_cvector;
	var_16_float = var_23_cvector | var_23_cvector;
	return 6;
}


func_1194(var_6_object)
{
	var_7_object = Obj();
	var_6_object = var_7_object;
	TaskCall(0);
	func_0(var_7_object);
	TaskReturn();
	return 0;
}


func_683(var_61_object)
{
	var_62_bool = 0; var_63_bool = 0;
	
Label_684:
	var_64_bool = 0; var_65_object = Obj();
	var_61_object = var_65_object;
	TaskCall(4);
	func_773(var_64_bool, var_65_object);
	TaskReturn();
	if(var_66_bool != 0) {
		Face(var_61_object);
		WaitForAnimEnd(var_63_bool);
		var_119_bool = var_63_bool == 0; //@nz
		if(var_119_bool != 0) {
		} else {
			PlayAnimation("all", "dattack_begin");
			WaitForAnimEnd(var_63_bool);
			var_122_bool = var_63_bool == 0; //@nz
			if(var_122_bool != 0) {
				goto Label_731;
			}
			var_123_float = 0; var_124_object = Obj();
			var_61_object = var_124_object;
			func_935(var_123_float, var_124_object);
			var_132_bool = var_123_float <= (float)90000.0;
			if(var_132_bool != 0) {
				var_133_float = 0; var_134_object = Obj(); var_135_float = 0;
				var_61_object = var_134_object;
				func_977(var_133_float, var_134_object, (float)0.20000000298023224);
			}
			PlayAnimation("all", "dattack_end");
			WaitForAnimEnd(var_63_bool);
			var_185_bool = var_63_bool == 0; //@nz
			if(var_185_bool != 0) {
				goto Label_731;
			}
			StopAsync();
			goto Label_684;
		}
	}
Label_731:
	return 2;
	
}


func_1326()
{
	var_59_bool = GlobalVars[0];
	GlobalVars[0] = (bool)1;
	SetRTEnvelope((int)50, (int)40);
	return 0;
}


func_943(var_32_bool, var_33_object, var_34_string)
{
	var_35_bool = 0; var_36_bool = 0;
	var_39_bool = IsFuncExist(var_33_object, "HasProperty", (int)2);
	var_40_bool = var_39_bool == 0; //@nz
	if(var_40_bool != 0) {
		var_32_bool = 0;
		return 2;
	}
	@@var_33_object:HasProperty(var_34_string, var_36_bool);
	var_36_bool = var_32_bool;
	return 2;
}


func_311(var_2_bool)
{
	KillTimer((int)110);
	var_2_bool = false;
	func_440(var_4_bool, var_5_object);
	return 0;
}


func_1335()
{
	var_11_object = Obj();
	func_1177(var_11_object);
	RemoveActor(var_11_object);
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


func_1081(var_10_bool, var_11_object)
{
	var_12_int = 0; var_13_int = 0;
	var_14_bool = 0; var_15_object = Obj();
	var_11_object = var_15_object;
	func_1045(var_14_bool, var_15_object);
	var_31_bool = var_14_bool == 0; //@nz
	if(var_31_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	var_32_bool = 0; var_33_object = Obj(); var_34_string = "";
	var_11_object = var_33_object;
	func_943(var_32_bool, var_33_object, "noaccess");
	var_41_bool = var_32_bool == 0; //@nz
	if(var_41_bool != 0) {
		var_10_bool = 1;
		return 2;
	}
	@@var_11_object:GetProperty("noaccess", var_13_int);
	var_10_bool = var_13_int == (int)0;
	return 2;
}


func_571()
{
	var_37_int = 0; var_38_int = 0; var_39_int = 0; var_40_int = 0; var_41_bool = 0; var_42_float = 0; var_43_bool = 0; var_44_int = 0; var_45_int = 0; var_46_int = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_bool = 0;
	WaitForAnimEnd();
	var_51_bool = 0;
	func_1172(var_51_bool);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		return 14;
	}
	func_1236((int)0);
	var_53_int = var_44_int;
	var_45_int = 0;
	
Label_585:
	var_66_bool = 0;
	var_66_bool = 0;
	var_68_bool = var_45_int < (int)5;
	if(var_68_bool != 0) {
		var_69_bool = 0;
		func_1172(var_69_bool);
		if(var_69_bool != 0) {
			var_66_bool = 1;
		}
	}
	if(var_66_bool != 0) {
		irand(var_46_int, (int)3);
		var_72_bool = var_46_int == (int)0;
		if(var_72_bool != 0) {
			var_73_int = var_44_int;
			if(var_73_int == 0) goto Label_618;
			irand(var_47_int, var_44_int);
			var_75_string = ""; var_76_int = 0;
			var_47_int = var_76_int;
			func_1229(var_75_string, var_76_int);
			PlayAnimation("all", var_75_string);
			WaitForAnimEnd(var_48_bool);
			var_77_bool = var_48_bool == 0; //@nz
			if(var_77_bool != 0) {
			} else {
		} else {
				var_80_bool = var_46_int == (int)1;
				if(var_80_bool != 0) {
					rand(var_49_float, (int)4);
					var_83_int = var_49_float + (int)1;
					Sleep(var_83_int, var_50_bool);
					var_84_bool = var_50_bool == 0; //@nz
					if(var_84_bool != 0) {
						goto Label_639;
					}
					goto Label_636;
				}
				var_85_int = var_45_int;
				if(var_85_int == 0) goto Label_636;
				goto Label_639;
		}
		Label_636:
			var_45_int = var_45_int + (int)1;
			goto Label_585;

		}
	}
Label_639:
	return 14;
	
}


func_955(var_163_bool, var_164_object, var_165_string, var_166_float, var_167_float, var_168_float)
{
	var_169_float = 0; var_170_float = 0;
	var_171_bool = 0; var_172_object = Obj(); var_173_string = "";
	var_164_object = var_172_object;
	var_165_string = var_173_string;
	func_943(var_171_bool, var_172_object, var_173_string);
	var_174_bool = var_171_bool == 0; //@nz
	if(var_174_bool != 0) {
		var_163_bool = 0;
		return 2;
	}
	@@var_164_object:GetProperty(var_165_string, var_170_float);
	var_175_float = 0; var_176_float = 0; var_177_float = 0; var_178_float = 0;
	var_176_float = var_170_float + var_166_float;
	var_167_float = var_177_float;
	var_168_float = var_178_float;
	func_1183(var_175_float, var_176_float, var_177_float, var_178_float);
	@@var_164_object:SetProperty(var_165_string, var_175_float);
	var_163_bool = 1;
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
	func_447(var_9_bool, var_10_int);
	return 0;
}


func_454(var_35_bool)
{
	var_35_bool = 0;
	return 0;
}


func_1229(var_59_string, var_60_int)
{
	var_61_string = ""; var_62_string = "";
	var_63_int = var_60_int;
	if(var_63_int != 0) {
		"idle" = "idle" + var_60_int;
	}
	var_62_string = var_59_string;
	return 2;
}


func_336(var_2_bool, var_6_object)
{
	var_7_bool = 0; var_8_int = 0; var_9_bool = 0; var_10_int = 0;
	var_11_bool = 0; var_12_object = Obj();
	var_6_object = var_12_object;
	func_1081(var_11_bool, var_12_object);
	var_45_bool = var_11_bool == 0; //@nz
	if(var_45_bool != 0) {
		return 4;
	}
	var_46_bool = var_2_bool;
	if(var_46_bool != 0) {
		return 4;
	}
	IsPlayerActor(var_6_object, var_9_bool);
	var_47_bool = var_9_bool == 0; //@nz
	if(var_47_bool != 0) {
		return 4;
	}
	var_48_int = 0; var_49_object = Obj();
	var_6_object = var_49_object;
	func_1253(var_49_object);
	var_48_int = var_10_int;
	var_51_bool = var_10_int > (int)0;
	if(var_51_bool != 0) {
		var_53_bool = var_10_int > (int)1;
		if(var_53_bool != 0) {
			func_319(var_10_int);
		}
		var_55_object = Obj();
		var_6_object = var_55_object;
		func_1256(var_55_object);
		var_2_bool = true;
		SetTimer((int)110, (float)10.0);
	}
	return 4;
}


func_977(var_133_float, var_134_object, var_135_float)
{
	var_136_int = 0; var_137_float = 0; var_138_float = 0; var_139_int = 0; var_140_float = 0; var_141_float = 0;
	var_142_bool = 0; var_143_object = Obj(); var_144_string = "";
	var_134_object = var_143_object;
	func_943(var_142_bool, var_143_object, "disease");
	var_145_bool = var_142_bool == 0; //@nz
	if(var_145_bool != 0) {
		var_133_float = 0;
		return 6;
	}
	var_146_bool = 0; var_147_object = Obj(); var_148_string = "";
	var_134_object = var_147_object;
	func_943(var_146_bool, var_147_object, "armor_disease");
	if(var_146_bool != 0) {
		@@var_134_object:GetProperty("armor_disease", var_139_int);
		var_151_bool = var_139_int < (int)100;
		if(var_151_bool != 0) {
			var_154_float = var_139_int / (float)100.0;
			var_155_int = (int)1 - var_154_float;
			var_135_float = var_135_float * var_155_int;
		} else {
					var_133_float = 0;
					return 6;
		}
	}
	var_156_bool = 0; var_157_object = Obj(); var_158_string = "";
	var_134_object = var_157_object;
	func_943(var_156_bool, var_157_object, "immunity");
	if(var_156_bool != 0) {
		@@var_134_object:GetProperty("immunity", var_141_float);
		var_160_bool = var_141_float < var_135_float;
		if(var_160_bool != 0) {
			@@var_134_object:SetProperty("immunity", (int)0);
			var_140_float = var_135_float - var_141_float;
		} else {
			var_182_int = var_141_float - var_135_float;
			@@var_134_object:SetProperty("immunity", var_182_int);
			var_135_float = var_133_float;
			return 6;

		}
	}
	var_163_bool = 0; var_164_object = Obj(); var_165_string = ""; var_166_float = 0; var_167_float = 0; var_168_float = 0;
	var_134_object = var_164_object;
	var_140_float = var_166_float;
	func_955(var_163_bool, var_164_object, "disease", var_166_float, (float)0, (float)1);
	var_135_float = var_133_float;
	return 6;
	
}


func_1105(var_9_object, var_10_int)
{
	var_12_object = Obj(); var_13_object = Obj(); var_14_cvector = CVector(0,0,0); var_15_float = 0; var_16_int = 0; var_17_cvector = CVector(0,0,0); var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_string = ""; var_22_object = Obj(); var_23_object = Obj(); var_24_cvector = CVector(0,0,0); var_25_float = 0; var_26_int = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_string = "";
	var_32_bool = 0;
	var_32_bool = 0;
	var_34_bool = var_10_int != (int)4;
	if(var_34_bool != 0) {
		var_36_bool = var_10_int != (int)5;
		if(var_36_bool != 0) {
			var_32_bool = 1;
		}
	}
	if(var_32_bool != 0) {
		GetScene(var_22_object);
		GetPosition(var_24_cvector);
		GetEyesHeight(var_25_float);
		var_37_float = GetByIndex(var_24_cvector, 1);
		var_39_float = var_25_float / (int)2;
		var_37_float = var_37_float + var_39_float;
		SetByIndex(var_24_cvector, 1) = var_37_float;
		AddActorByType(var_23_object, "scripted", var_22_object, var_24_cvector, CVector(0.0, 0.0, 1.0), "blood.xml");
		var_23_object = 0;
		var_22_object = 0;
	}
	var_43_bool = var_9_object == 0; //@ne
	if(var_43_bool != 0) {
		return 20;
	}
	GetSecondaryAnimationType(var_26_int);
	var_45_bool = var_26_int < (int)0;
	if(var_45_bool != 0) {
		return 20;
	}
	@@var_9_object:GetPosition(var_27_cvector);
	GetPosition(var_28_cvector);
	GetDirection(var_29_cvector);
	var_30_cvector = var_28_cvector - var_27_cvector;
	var_46_float = GetByIndex(var_30_cvector, 0);
	var_47_float = GetByIndex(var_29_cvector, 0);
	var_48_float = var_46_float * var_47_float;
	var_49_float = GetByIndex(var_30_cvector, 2);
	var_50_float = GetByIndex(var_29_cvector, 2);
	var_51_float = var_49_float * var_50_float;
	var_52_int = var_48_float + var_51_float;
	var_54_bool = var_52_int >= (int)0;
	if(var_54_bool != 0) {
		var_31_string = "fhit";
	} else {
		var_31_string = "bhit";
	}
	var_57_int = var_31_string + "1";
	var_59_int = var_31_string + "2";
	FadeSecondaryAnimation("hit_react", var_57_int, var_59_int, (int)-10);
	return 20;
	
}


func_1236(var_53_int)
{
	var_54_int = 0; var_55_bool = 0; var_56_int = 0; var_57_bool = 0;
	var_56_int = 0;
	
Label_1238:
	var_59_string = ""; var_60_int = 0;
	var_56_int = var_60_int;
	func_1229(var_59_string, var_60_int);
	HasAnimation(var_57_bool, "all", var_59_string);
	var_64_bool = var_57_bool == 0; //@nz
	if(var_64_bool != 0) {
	} else {
		var_56_int = var_56_int + (int)1;
		goto Label_1238;
	}
	var_56_int = var_53_int;
	return 4;
	
}


func_732()
{
	StopAsync();
	StopAnimation();
	return 0;
}


func_120(var_30_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_30_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_30_string);
	RemoveEnvelope();
	return 0;
}


func_376(var_0_bool, var_1_bool)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_float = 0; var_18_bool = 0; var_19_object = Obj(); var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_bool = 0; var_26_object = Obj(); var_27_bool = 0;
	var_0_bool = false;
	var_1_bool = false;
	rand(var_21_float, (float)0.5);
	Sleep(var_21_float);
	
Label_384:
	var_29_bool = var_0_bool == 0; //@nz
	if(var_29_bool != 0) {
		var_30_bool = var_1_bool == 0; //@nz
		if(var_30_bool != 0) {

		Label_388:
			GetPosition(var_23_cvector);
			GetCameraFarDistance(var_24_float);
			var_24_float = var_24_float * (float)2.5;
			GetRandomPFPointInCircle(var_22_cvector, var_23_cvector, var_24_float, var_25_bool);
			var_32_bool = var_25_bool;
			if(var_32_bool != 0) {
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
	FindShiftedPathTo(var_26_object, var_22_cvector);
	var_33_bool = var_26_object != 0; //@nn
	if(var_33_bool != 0) {
		RotatePath(var_26_object, var_27_bool);
		var_34_bool = var_27_bool;
		if(var_34_bool != 0) {
			var_35_bool = 0;
			func_454(var_35_bool);
			FollowPath(var_26_object, var_35_bool, var_27_bool);
			var_26_object = 0;
			var_36_bool = var_27_bool;
			if(var_36_bool != 0) {
				TaskCall(2);
				func_571();
				TaskReturn();
			}
		}
	} else {
		Sleep((int)1);

	}
	var_26_object = 0;
	goto Label_384;
	
}


func_1253(var_48_int)
{
	var_48_int = 2;
	return 0;
}


func_1256(var_55_object)
{
	var_56_object = Obj();
	var_55_object = var_56_object;
	TaskCall(3);
	func_645(var_56_object);
	TaskReturn();
	return 0;
}


func_1264(var_8_int)
{
	var_8_int = 0;
	return 0;
}


func_1267()
{
	return 0;
}


func_1269(var_27_int)
{
	var_27_int = 0;
	return 0;
}


func_1272()
{
	return 0;
}


func_1274(var_8_int)
{
	var_8_int = 0;
	return 0;
}


func_1277()
{
	return 0;
}


func_1279(var_8_int)
{
	var_8_int = 0;
	return 0;
}


