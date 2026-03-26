// @IMPORTS: Sleep/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,rand/2,Sleep/2,ResetAAS/0,GetPosition/1,GetDirection/1,FindLongestDir/6,Trace/1,Rotate/2,MovePoint/3,Stop/0,FindDirLength/3,GetScene/1,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,CanSee/2,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,SetRTEnvelope/2,Hold/0,IsOverrideActive/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1
// @STRINGS: W:wonder|W:player|W:head|W:all|A:GetPosition|W:Can't retreat, distance: |A:RemoveStationaryActor|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle|W:idle|W:branch
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,bool,bool,object params=0
// @EVENT_26: op=0xa vars=string
// @EVENT_7: op=0x46 vars=int
// @TASK_1: vars=object,cvector,bool params=1
// @EVENT_17: op=0xb7 vars=object
// @EVENT_7: op=0x12c vars=int
// @EVENT_41: op=0x167 vars=object
// @TASK_2: vars=object,int,int,bool,float,int params=2
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x461 vars=int
// @EVENT_1: op=0x47c vars=object
// @EVENT_2: op=0x48b vars=object
// @EVENT_10: op=0x511 vars=object
// @EVENT_41: op=0x51c vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x545 vars=object
// @EVENT_22: op=0x5c4 vars=object,int,float,float
// @EVENT_16: op=0x5c6 vars=object,string
// @EVENT_41: op=0x5c8 vars=object
// @STANDALONE_EVENT_22: op=0x825 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x82d vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x837 vars=object,string
// @STANDALONE_EVENT_41: op=0x839 vars=object
// @PE: 0x1c,0x46,0xae,0xb7,0x167,0x194,0x197,0x428,0x461,0x47c,0x48b,0x4ff,0x511,0x51c,0x525,0x530,0x536,0x5aa,0x5c4,0x5c6,0x5c8,0x5ca,0x76f,0x776,0x781,0x789,0x7f9,0x810,0x825,0x82d,0x837,0x839,0x83f,0x846

task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_string, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_object = Obj(); var_19_object = Obj();
	var_21_bool = var_17_bool == "wonder";
	if(var_21_bool != 0) {
		Sleep((int)1);
		FindActor(var_19_object, "player");
		var_24_object = Obj();
		var_19_object = var_24_object;
		TaskCall(1);
		func_174(var_24_object);
		TaskReturn();
		var_19_object = 0;
	}
	return 2;
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_int, var_6_object, var_7_cvector, var_8_bool, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_19_bool = var_17_bool == (int)10;
	if(var_19_bool != 0) {
		var_20_bool = 0;
		func_55(var_15_bool, var_16_object, var_17_bool, var_20_bool);
		if(var_20_bool != 0) {
			var_33_bool = var_2_bool == 0; //@nz
			if(var_33_bool != 0) {
				var_34_object = Obj();
				var_34_object = var_4_object;
				func_1835(var_34_object);
				var_2_bool = true;
			}
		} else {
			var_41_bool = var_2_bool;
			if(var_41_bool == 0) goto Label_92;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_92:
	return 0;
	
}


task_1_event_17(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_bool = 0; var_19_object = Obj();
	var_17_bool = var_19_object;
	func_2111(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		func_352(var_17_bool);
		var_55_object = Obj();
		var_17_bool = var_55_object;
		func_2118(var_55_object);
	}
	return 0;
}


task_1_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_int, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_float = 0;
	var_27_bool = var_17_bool != (int)120;
	if(var_27_bool != 0) {
		return 8;
	}
	var_28_bool = var_0_int == 0; //@ne
	if(var_28_bool != 0) {
		Stop();
		KillTimer((int)1);
		var_2_bool = true;
	} else {
		GetDirection(var_22_cvector);
		FindDirLength(var_23_float, var_22_cvector, (float)7000.0);
		var_31_cvector = CVector(0,0,0); var_32_float = 0;
		func_197(var_25_float, var_31_cvector, (float)1.7453293800354004);
		var_31_cvector = var_24_cvector;
		var_25_float = var_24_cvector | var_24_cvector;
		var_61_bool = 0;
		var_61_bool = 0;
		var_63_bool = var_25_float >= (float)2500.0;
		if(var_63_bool != 0) {
			var_64_bool = 0;
			var_65_float = var_23_float * var_23_float;
			var_67_float = var_65_float * (float)2.25;
			var_68_bool = var_25_float >= var_67_float;
			if(var_68_bool != 1) {
				var_69_bool = 0;
				func_368((bool)1, var_69_bool);
				if(var_69_bool != 1) {
					var_64_bool = 0;
				}
			}
			if(var_64_bool != 0) {
				var_61_bool = 1;
			}
		}
		if(var_61_bool == 0) goto Label_351;
		Stop();
		var_89_cvector = CVector(0,0,0);
		func_1496(var_89_cvector);
		var_1_int = var_89_cvector + var_24_cvector;
	}
Label_351:
	return 8;
	
}


task_1_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_object, var_10_int, var_11_int, var_12_bool, var_13_float, var_14_int, var_15_bool, var_16_object, var_17_bool)
{
	func_352(var_17_bool);
	var_17_bool = Obj();
	func_2105();
	return 0;
}


task_3_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_int)
{
	var_19_bool = var_17_int == (int)1;
	if(var_19_bool != 0) {
		var_20_object = Obj();
		var_20_object = var_1_int;
		func_1991(var_20_object);
	} else {
		var_25_int = 0;
		var_17_int = var_25_int;
		func_1279(var_16_bool, var_17_int, var_25_int);
	}
	return 0;
	
}


task_3_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_int == var_17_object;
	if(var_19_bool != 0) {
		var_20_bool = var_2_bool == 0; //@nz
		if(var_20_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_bool = true;
		var_21_object = Obj();
		var_17_object = var_21_object;
		func_1835(var_21_object);
	}
	return 0;
}


task_3_event_2(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0;
	var_18_bool = 0;
	var_19_bool = var_1_int == var_17_object;
	if(var_19_bool != 0) {
		var_20_bool = var_2_bool;
		if(var_20_bool != 0) {
			var_18_bool = 1;
		}
	}
	if(var_18_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	RequestClearPath(var_17_object);
	return 0;
}


task_3_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	func_1135(var_17_object);
	var_17_object = Obj();
	func_2105();
	return 0;
}


task_4_event_0(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_bool = 0; var_19_bool = 0;
	IsOverrideActive(var_19_bool);
	var_20_bool = var_19_bool == 0; //@nz
	if(var_20_bool != 0) {
		var_21_object = Obj();
		var_17_object = var_21_object;
		func_2041(var_21_object);
	}
	return 2;
}


task_4_event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	return 0;
}


task_4_event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	return 0;
}


task_4_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	return 0;
}


event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float)
{
	var_21_object = Obj(); var_22_int = 0; var_23_float = 0;
	var_17_object = var_21_object;
	var_18_int = var_22_int;
	var_19_float = var_23_float;
	func_1737(var_21_object, var_22_int, var_23_float);
	return 0;
}


event_43(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_int, var_19_float, var_20_float, var_21_cvector, var_22_cvector)
{
	var_23_object = Obj(); var_24_int = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0);
	var_17_object = var_23_object;
	var_18_int = var_24_int;
	var_19_float = var_25_float;
	var_21_cvector = var_26_cvector;
	var_22_cvector = var_27_cvector;
	func_1805(var_25_float, var_26_cvector, var_27_cvector);
	return 0;
}


event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object, var_18_string)
{
	return 0;
}


event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, var_17_object)
{
	var_18_object = Obj();
	var_17_object = var_18_object;
	func_2064(var_18_object);
	return 0;
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_object, var_6_cvector, var_7_bool, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	
Label_0:
	Sleep((int)3);
	var_18_float = 0; var_19_float = 0;
	func_28(var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool, (float)300, (float)100);
	goto Label_0;
}
EMIT "Return(); Pop(0)";


func_2054()
{
	var_61_object = Obj(); var_62_object = Obj();
	GetScene(var_62_object);
	var_63_object = Obj();
	func_1887(var_63_object);
	@@var_62_object:RemoveStationaryActor(var_63_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_2064(var_18_object)
{
	var_19_bool = 0; var_20_object = Obj();
	var_18_object = var_20_object;
	func_1516(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		var_23_bool = 0; var_24_object = Obj(); var_25_float = 0;
		var_18_object = var_24_object;
		func_1929(var_23_bool, var_24_object, (float)-0.10000000149011612);
	}
	func_2054();
	var_66_object = Obj();
	var_18_object = var_66_object;
	TaskCall(4);
	func_1328(var_66_object);
	TaskReturn();
	return 0;
}


func_1555(var_407_float, var_408_object, var_409_float, var_410_int)
{
	var_414_int = 0; var_415_string = ""; var_416_int = 0; var_417_float = 0; var_418_float = 0; var_419_float = 0; var_420_int = 0; var_421_string = ""; var_422_int = 0; var_423_float = 0; var_424_float = 0; var_425_float = 0;
	var_426_bool = 0; var_427_object = Obj(); var_428_string = "";
	var_408_object = var_427_object;
	func_1521(var_426_bool, var_427_object, "health");
	var_429_bool = var_426_bool == 0; //@nz
	if(var_429_bool != 0) {
		var_407_float = 0.0;
		return 12;
	}
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_408_object = var_431_object;
	func_1521(var_430_bool, var_431_object, "armor");
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_420_int = 0;
	} else {
			@@var_408_object:GetProperty("armor", var_420_int);
	}
	var_435_string = ""; var_436_int = 0;
	var_410_int = var_436_int;
	func_1482(var_435_string, var_436_int);
	var_421_string = "armor_" + var_435_string;
	var_441_bool = 0; var_442_object = Obj(); var_443_string = "";
	var_408_object = var_442_object;
	var_421_string = var_443_string;
	func_1521(var_441_bool, var_442_object, var_443_string);
	var_444_bool = var_441_bool == 0; //@nz
	if(var_444_bool != 0) {
		var_422_int = 0;
	} else {
		@@var_408_object:GetProperty(var_421_string, var_422_int);

	}
	var_445_float = 0; var_446_float = 0; var_447_float = 0;
	var_448_int = var_420_int + var_422_int;
	var_446_float = var_448_int / (float)100.0;
	func_1903(var_445_float, var_446_float, (float)1);
	var_445_float = var_423_float;
	@@var_408_object:GetProperty("health", var_424_float);
	var_453_int = (int)1 - var_423_float;
	var_425_float = var_409_float * var_453_int;
	var_455_float = 0; var_456_float = 0; var_457_float = 0; var_458_float = 0;
	var_456_float = var_424_float - var_425_float;
	func_1910(var_455_float, var_456_float, (float)0, (float)1);
	@@var_408_object:SetProperty("health", var_455_float);
	var_461_bool = 0; var_462_object = Obj();
	var_408_object = var_462_object;
	func_1516(var_461_bool, var_462_object);
	if(var_461_bool != 0) {
		var_463_float = 0;
		var_463_float = -var_425_float;
		func_1964(var_463_float);
	}
	var_425_float = var_407_float;
	return 12;
	
}


func_28(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_18_float, var_19_float)
{
	var_20_bool = 0;
	func_1830(var_20_bool);
	var_23_bool = var_20_bool == 0; //@nz
	if(var_23_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_18_float;
	var_1_int = var_19_float;
	SetTimer((int)10, (float)1.0);
	func_93();
	var_78_bool = var_3_bool == 0; //@nz
	if(var_78_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1052(var_0_int)
{
	var_131_object = Obj();
	var_131_object = var_0_int;
	func_1991(var_131_object);
	return 0;
}


func_1057(var_472_int)
{
	var_472_int = 0;
	return 0;
}


func_1059()
{
	var_264_string = "";
	func_1846("attack_stay");
	return 0;
}


func_1064()
{
	return 0;
}


func_1066(var_497_bool)
{
	var_497_bool = 1;
	return 0;
}


func_1068(var_389_int)
{
	var_389_int = 1;
	return 0;
}


func_1070(var_384_float)
{
	var_384_float = 0.5;
	return 0;
}


func_1072(var_2_bool, var_138_bool, var_139_object, var_140_float, var_141_float, var_142_bool, var_143_bool)
{
	var_147_bool = 0; var_148_bool = 0; var_149_bool = 0; var_150_bool = 0;
	var_151_object = Obj();
	var_139_object = var_151_object;
	func_1991(var_151_object);
	SetTimer((int)1, (int)5);
	CanSee(var_149_bool, var_139_object);
	var_154_bool = var_149_bool;
	if(var_154_bool != 0) {
		var_2_bool = true;
		var_155_object = Obj();
		var_139_object = var_155_object;
		func_1835(var_155_object);
	} else {
		var_2_bool = false;
	}
	var_162_bool = 0; var_163_object = Obj();
	var_139_object = var_163_object;
	func_1516(var_162_bool, var_163_object);
	if(var_162_bool != 0) {
		var_166_object = Obj();
		func_1887(var_166_object);
		SendPlayerEnemy(var_139_object, var_166_object);
	}
	var_167_bool = 0; var_168_object = Obj(); var_169_float = 0; var_170_float = 0; var_171_bool = 0; var_172_bool = 0;
	var_139_object = var_168_object;
	var_140_float = var_169_float;
	var_141_float = var_170_float;
	var_142_bool = var_171_bool;
	var_143_bool = var_172_bool;
	func_1177(var_149_bool, var_150_bool, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool);
	var_167_bool = var_150_bool;
	var_218_bool = var_2_bool;
	if(var_218_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_150_bool = var_138_bool;
	return 4;
	
}


func_55(var_0_int, var_1_int, var_4_object, var_20_bool)
{
	var_21_float = 0; var_22_float = 0;
	var_23_bool = var_4_object == 0; //@ne
	if(var_23_bool != 0) {
		var_20_bool = 0;
		return 2;
	}
	var_24_float = 0; var_25_object = Obj();
	var_25_object = var_4_object;
	func_1508(var_24_float, var_25_object);
	var_22_float = sqrt(var_24_float);
	var_32_bool = var_2_bool;
	if(var_32_bool != 0) {
		var_22_float = var_22_float - var_1_int;
	}
	var_20_bool = var_22_float < var_0_int;
	return 2;
}


func_2111(var_18_bool, var_19_object)
{
	var_20_bool = 0; var_21_object = Obj();
	var_19_object = var_21_object;
	func_1669(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
	return 0;
}


func_2118(var_55_object)
{
	var_56_object = Obj(); var_57_bool = 0;
	var_55_object = var_56_object;
	TaskCall(2);
	func_384(var_56_object, (bool)1);
	TaskReturn();
	return 0;
}


func_1628(var_45_bool, var_46_object)
{
	var_47_bool = 0; var_48_bool = 0;
	@@var_46_object:IsDead(var_48_bool);
	var_48_bool = var_45_bool;
	return 2;
}


func_93()
{
	var_27_int = 0; var_28_int = 0; var_29_int = 0; var_30_int = 0; var_31_bool = 0; var_32_float = 0; var_33_bool = 0; var_34_int = 0; var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_bool = 0; var_39_float = 0; var_40_bool = 0;
	WaitForAnimEnd();
	var_41_bool = 0;
	func_1830(var_41_bool);
	var_42_bool = var_41_bool == 0; //@nz
	if(var_42_bool != 0) {
		return 14;
	}
	func_2018((int)0);
	var_43_int = var_34_int;
	var_35_int = 0;
	
Label_107:
	var_56_bool = 0;
	var_56_bool = 0;
	var_58_bool = var_35_int < (int)5;
	if(var_58_bool != 0) {
		var_59_bool = 0;
		func_1830(var_59_bool);
		if(var_59_bool != 0) {
			var_56_bool = 1;
		}
	}
	if(var_56_bool != 0) {
		irand(var_36_int, (int)3);
		var_62_bool = var_36_int == (int)0;
		if(var_62_bool != 0) {
			var_63_int = var_34_int;
			if(var_63_int == 0) goto Label_140;
			irand(var_37_int, var_34_int);
			var_65_string = ""; var_66_int = 0;
			var_37_int = var_66_int;
			func_2011(var_65_string, var_66_int);
			PlayAnimation("all", var_65_string);
			WaitForAnimEnd(var_38_bool);
			var_67_bool = var_38_bool == 0; //@nz
			if(var_67_bool != 0) {
			} else {
		} else {
				var_72_bool = var_36_int == (int)1;
				if(var_72_bool != 0) {
					rand(var_39_float, (int)4);
					var_75_int = var_39_float + (int)1;
					Sleep(var_75_int, var_40_bool);
					var_76_bool = var_40_bool == 0; //@nz
					if(var_76_bool != 0) {
						goto Label_169;
					}
					goto Label_158;
				}
				var_77_int = var_35_int;
				if(var_77_int == 0) goto Label_158;
				goto Label_169;
		}
		Label_158:
			var_68_bool = 0;
			func_172(var_68_bool);
			var_69_bool = var_68_bool == 0; //@nz
			if(var_69_bool != 0) {
				goto Label_169;
			}
			ResetAAS();
			var_35_int = var_35_int + (int)1;
			goto Label_107;

		}
	}
Label_169:
	ResetAAS();
	return 14;
	
}


func_1633(var_34_bool, var_35_object)
{
	var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj(); var_39_object = Obj();
	var_40_bool = var_35_object == 0; //@ne
	if(var_40_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_41_bool = 0;
	var_41_bool = 0;
	var_44_bool = IsFuncExist(var_35_object, "IsDead", (int)1);
	if(var_44_bool != 0) {
		var_45_bool = 0; var_46_object = Obj();
		var_35_object = var_46_object;
		func_1628(var_45_bool, var_46_object);
		if(var_45_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	GetScene(var_38_object);
	var_49_bool = var_38_object == 0; //@ne
	if(var_49_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	@@var_35_object:GetScene(var_39_object);
	var_50_bool = var_38_object != var_39_object;
	if(var_50_bool != 0) {
		var_34_bool = 0;
		return 4;
	}
	var_34_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1135(var_2_bool)
{
	KillTimer((int)1);
	var_19_bool = var_2_bool;
	if(var_19_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_1301(var_17_object);
	return 0;
}


func_639(var_1_int, var_2_bool, var_4_object)
{
	var_94_bool = 0; var_95_bool = 0; var_96_cvector = CVector(0,0,0); var_97_bool = 0; var_98_bool = 0; var_99_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_641:
	var_103_int = var_1_int + (int)1;
	var_104_int = "attack_begin" + var_103_int;
	HasAnimation(var_97_bool, "all", var_104_int);
	var_105_bool = var_97_bool == 0; //@nz
	if(var_105_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_641;
	}
	var_2_bool = 0;
	
Label_655:
	var_108_int = var_2_bool + (int)1;
	var_109_int = "attack" + var_108_int;
	IsExisting3DSound(var_98_bool, var_109_int);
	var_110_bool = var_98_bool == 0; //@nz
	if(var_110_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_655;

	}
	GetAnimationOffset(var_99_cvector, "all", "bjump");
	var_113_float = GetByIndex(var_99_cvector, 2);
	var_4_object = -var_113_float;
	return 6;
	
}


func_1669(var_30_bool, var_31_object)
{
	var_32_int = 0; var_33_int = 0;
	var_34_bool = 0; var_35_object = Obj();
	var_31_object = var_35_object;
	func_1633(var_34_bool, var_35_object);
	var_51_bool = var_34_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_30_bool = 0;
		return 2;
	}
	var_52_bool = 0; var_53_object = Obj(); var_54_string = "";
	var_31_object = var_53_object;
	func_1521(var_52_bool, var_53_object, "noaccess");
	var_61_bool = var_52_bool == 0; //@nz
	if(var_61_bool != 0) {
		var_30_bool = 1;
		return 2;
	}
	@@var_31_object:GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == (int)0;
	return 2;
}


func_1177(var_0_int, var_1_int, var_167_bool, var_168_object, var_169_float, var_170_float, var_171_bool, var_172_bool)
{
	var_173_bool = 0; var_174_bool = 0; var_175_object = Obj(); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_cvector = CVector(0,0,0); var_179_float = 0; var_180_object = Obj(); var_181_bool = 0; var_182_bool = 0; var_183_object = Obj(); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_cvector = CVector(0,0,0); var_187_float = 0; var_188_object = Obj();
	var_0_int = false;
	var_1_int = var_168_object;
	var_172_bool = var_182_bool;
	
Label_1181:
	var_189_bool = 0; var_190_object = Obj();
	var_168_object = var_190_object;
	func_1317(var_189_bool, var_190_object);
	var_193_bool = var_189_bool == 0; //@nz
	if(var_193_bool != 0) {
		var_167_bool = 0;
		return 16;
	}
	@@var_168_object:GetPosition(var_184_cvector);
	GetPosition(var_185_cvector);
	var_186_cvector = var_184_cvector - var_185_cvector;
	var_187_float = var_186_cvector | var_186_cvector;
	var_194_bool = 0;
	var_194_bool = 0;
	var_196_bool = var_170_float > (int)0;
	if(var_196_bool != 0) {
		var_197_float = var_170_float * var_170_float;
		var_198_bool = var_187_float > var_197_float;
		if(var_198_bool != 0) {
			var_194_bool = 1;
		}
	}
	if(var_194_bool != 0) {
		Stop();
		var_167_bool = 0;
		return 16;
	}
	var_199_float = var_169_float * var_169_float;
	var_200_bool = var_187_float > var_199_float;
	if(var_200_bool != 0) {
		@@var_168_object:GetPFPosition(var_184_cvector);
		FindPathTo(var_188_object, var_184_cvector);
		var_201_bool = var_188_object != 0; //@nn
		if(var_201_bool != 0) {
			var_188_object = var_183_object;
			var_188_object = 0;
		}
		var_202_bool = var_183_object != 0; //@nn
		if(var_202_bool != 0) {
			var_203_bool = var_182_bool;
			if(var_203_bool == 0) goto Label_1230;
			var_182_bool = 0;
			RotatePath(var_183_object, var_181_bool);
			var_204_bool = var_181_bool == 0; //@nz
			if(var_204_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_207_string = "";
				func_1324(var_207_string);
				var_208_string = "";
				func_1326(var_208_string);
				FollowPath(var_183_object, var_171_bool, var_181_bool, var_207_string, var_208_string);
				var_209_bool = var_181_bool == 0; //@nz
				if(var_209_bool != 0) {
					var_210_int = var_0_int;
					if(var_210_int != 0) {
						var_183_object = 0;
						goto Label_1277;
					EMIT "GOTO 0x4e2";
					}
				} else {
					var_183_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_181_bool);
					var_213_bool = var_181_bool == 0; //@nz
					if(var_213_bool != 0) {
						var_214_int = var_0_int;
						if(var_214_int != 0) {
							var_183_object = 0;
							goto Label_1277;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1277;
	}
			var_188_object = 0;
			goto Label_1275;

		Label_1275:
			var_183_object = 0;

		}
		goto Label_1181;
	}
Label_1277:
	var_167_bool = !var_0_int;
	return 16;
	
}


func_1693(var_34_object)
{
	var_35_bool = 0; var_36_int = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_string = ""; var_42_bool = 0; var_43_int = 0; var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_string = "";
	var_49_bool = var_34_object == 0; //@ne
	if(var_49_bool != 0) {
		return 14;
	}
	IsDead(var_42_bool);
	var_50_bool = var_42_bool;
	if(var_50_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_43_int);
	var_52_bool = var_43_int < (int)0;
	if(var_52_bool != 0) {
		return 14;
	}
	@@var_34_object:GetPosition(var_44_cvector);
	GetPosition(var_45_cvector);
	GetDirection(var_46_cvector);
	var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_55_float = var_53_float * var_54_float;
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	var_58_float = var_56_float * var_57_float;
	var_59_int = var_55_float + var_58_float;
	var_61_bool = var_59_int >= (int)0;
	if(var_61_bool != 0) {
		var_48_string = "fhit";
	} else {
		var_48_string = "bhit";
	}
	var_64_int = var_48_string + "1";
	var_66_int = var_48_string + "2";
	FadeSecondaryAnimation("hit_react", var_64_int, var_66_int, (int)-10);
	return 14;
	
}


func_674(var_0_int, var_393_float, var_394_int)
{
	var_395_object = Obj(); var_396_float = 0; var_397_float = 0; var_398_object = Obj(); var_399_float = 0; var_400_float = 0;
	var_402_float = var_393_float * (float)0.8999999761581421;
	GetVictim(var_402_float, var_398_object);
	ReportAttack(var_0_int);
	var_403_bool = var_398_object == var_0_int;
	if(var_403_bool != 0) {
		var_404_float = 0; var_405_object = Obj(); var_406_int = 0;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_404(var_406_int);
		var_404_float = var_399_float;
		var_407_float = 0; var_408_object = Obj(); var_409_float = 0; var_410_int = 0;
		var_398_object = var_408_object;
		var_399_float = var_409_float;
		var_411_int = 0; var_412_object = Obj(); var_413_int = 0;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_407(var_413_int);
		var_411_int = var_410_int;
		func_1555(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		var_472_int = 0;
		func_1057(var_472_int);
		ReportHit(var_0_int, var_472_int, var_400_float, var_399_float);
		var_473_object = Obj(); var_474_float = 0;
		var_398_object = var_473_object;
		var_400_float = var_474_float;
		func_1064();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_172(var_68_bool)
{
	var_68_bool = 1;
	return 0;
}


func_174(var_24_object)
{
	func_2054();
	var_33_object = Obj();
	var_24_object = var_33_object;
	func_227(var_26_cvector, var_27_bool, var_24_object, var_33_object);
	return 0;
}


func_197(var_0_int, var_31_cvector, var_32_float)
{
	var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_float = 0;
	GetPosition(var_39_cvector);
	@@@var_0_int:GetPosition(var_40_cvector);
	GetDirection(var_41_cvector);
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0);
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	var_48_cvector = var_39_cvector - var_40_cvector;
	func_1893(var_47_cvector, var_48_cvector);
	var_55_float = var_41_cvector * (float)0.75;
	var_46_cvector = var_47_cvector + var_55_float;
	func_1893(var_45_cvector, var_46_cvector);
	var_45_cvector = var_42_cvector;
	FindLongestDir(var_43_cvector, var_44_float, var_42_cvector, var_32_float, (int)32, (float)7000.0);
	var_44_float = var_44_float - (int)100;
	var_60_bool = var_44_float < (int)0;
	if(var_60_bool != 0) {
		var_44_float = 0;
	}
	var_31_cvector = var_43_cvector * var_44_float;
	return 12;
}


func_713(var_0_int, var_1_int, var_356_bool, var_357_float)
{
	var_358_int = 0; var_359_bool = 0; var_360_int = 0; var_361_string = ""; var_362_int = 0; var_363_bool = 0; var_364_int = 0; var_365_string = "";
	func_1052(var_365_string);
	irand(var_362_int, var_1_int);
	var_362_int = var_362_int + (int)1;
	Face(var_0_int);
	SetAttackState((bool)1);
	func_2000();
	var_374_int = "attack_begin" + var_362_int;
	PlayAnimation("all", var_374_int);
	WaitForAnimEnd();
	func_1020(var_364_int, var_365_string);
	var_390_bool = 0; var_391_object = Obj();
	var_391_object = var_0_int;
	func_1669(var_390_bool, var_391_object);
	var_392_bool = var_390_bool == 0; //@nz
	if(var_392_bool != 0) {
		StopAsync();
		var_356_bool = 0;
		return 8;
	}
	var_393_float = 0; var_394_int = 0;
	var_357_float = var_393_float;
	var_362_int = var_394_int;
	func_674(var_365_string, var_393_float, var_394_int);
	var_477_int = "attack_middle" + var_362_int;
	HasAnimation(var_363_bool, "all", var_477_int);
	var_478_bool = var_363_bool;
	if(var_478_bool != 0) {
		func_2000();
		var_481_int = "attack_middle" + var_362_int;
		PlayAnimation("all", var_481_int);
		WaitForAnimEnd();
		func_1052(var_365_string);
		var_482_bool = 0; var_483_object = Obj();
		var_483_object = var_0_int;
		func_1669(var_482_bool, var_483_object);
		var_484_bool = var_482_bool == 0; //@nz
		if(var_484_bool != 0) {
			StopAsync();
			var_356_bool = 0;
			return 8;
		}
		var_485_float = 0; var_486_int = 0;
		var_357_float = var_485_float;
		var_362_int = var_486_int;
		func_674(var_365_string, var_485_float, var_486_int);
		var_364_int = 1;

	Label_790:
		var_488_int = "attack_middle" + var_362_int;
		var_490_int = var_488_int + "_";
		var_365_string = var_490_int + var_364_int;
		HasAnimation(var_363_bool, "all", var_365_string);
		var_492_bool = var_363_bool == 0; //@nz
		if(var_492_bool != 0) {
		} else {
			func_2000();
			PlayAnimation("all", var_365_string);
			WaitForAnimEnd();
			func_1052(var_365_string);
			var_508_bool = 0; var_509_object = Obj();
			var_509_object = var_0_int;
			func_1669(var_508_bool, var_509_object);
			var_510_bool = var_508_bool == 0; //@nz
			if(var_510_bool != 0) {
				StopAsync();
				var_356_bool = 0;
				var_511_float = 0; var_512_int = 0;
				var_357_float = var_511_float;
				var_362_int = var_512_int;
				func_674(var_365_string, var_511_float, var_512_int);
				var_364_int = var_364_int + (int)1;
				goto Label_790;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_496_int = "attack_end" + var_362_int;
	PlayAnimation("all", var_496_int);
	var_497_bool = 0;
	func_1066(var_497_bool);
	if(var_497_bool != 0) {
		var_498_bool = 0; var_499_float = 0;
		func_850(var_498_bool, (float)0.75);
		StopAsync();
	}
	var_356_bool = 1;
	return 8;
	
}


func_1737(var_21_object, var_22_int, var_23_float)
{
	var_24_cvector = CVector(0,0,0); var_25_object = Obj(); var_26_int = 0; var_27_bool = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_int = 0; var_31_int = 0; var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_object = Obj(); var_35_int = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_int = 0; var_40_int = 0; var_41_cvector = CVector(0,0,0);
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_bool = 0;
	var_43_bool = 0;
	var_44_object = var_21_object;
	if(var_44_object != 0) {
		var_46_bool = var_22_int != (int)4;
		if(var_46_bool != 0) {
			var_43_bool = 1;
		}
	}
	if(var_43_bool != 0) {
		var_48_bool = var_22_int != (int)5;
		if(var_48_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
		var_51_cvector = CVector(0,0,0); var_52_object = Obj();
		var_21_object = var_52_object;
		func_1501(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_1893(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		CreateVectorVector(var_34_object);
		var_35_int = 1;

	Label_1766:
		var_63_int = "hit" + var_35_int;
		GetGeometryLocator(var_63_int, var_36_bool, var_37_cvector, var_38_cvector);
		var_64_bool = var_36_bool == 0; //@nz
		if(var_64_bool != 0) {
		} else {
			var_112_int = var_38_cvector | var_33_cvector;
			var_114_bool = var_112_int >= (float)0.7071067690849304;
			if(var_114_bool != 0) {
				@@var_34_object:add(var_37_cvector);
			}
			var_35_int = var_35_int + (int)1;
			goto Label_1766;
		}
		@@var_34_object:size(var_39_int);
		var_65_int = var_39_int;
		if(var_65_int != 0) {
			irand(var_40_int, var_39_int);
			@@var_34_object:get(var_41_cvector, var_40_int);
			var_66_object = Obj(); var_67_int = 0; var_68_float = 0; var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0);
			var_21_object = var_66_object;
			var_22_int = var_67_int;
			var_23_float = var_68_float;
			var_41_cvector = var_69_cvector;
			var_70_cvector = -var_33_cvector;
			func_1805(var_68_float, var_69_cvector, var_70_cvector);
			return 18;
		}
		var_34_object = 0;
	}
	var_111_object = Obj();
	var_21_object = var_111_object;
	func_1693(var_111_object);
	return 18;
	
}


func_227(var_0_int, var_1_int, var_2_bool, var_33_object)
{
	var_34_cvector = CVector(0,0,0); var_35_float = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_bool = 0; var_42_cvector = CVector(0,0,0); var_43_float = 0;
	var_0_int = var_33_object;
	var_44_cvector = CVector(0,0,0); var_45_float = 0;
	func_197(var_43_float, var_44_cvector, (float)1.7453293800354004);
	var_44_cvector = var_39_cvector;
	var_40_float = var_39_cvector | var_39_cvector;
	var_75_bool = var_40_float < (float)2500.0;
	if(var_75_bool != 0) {
		var_76_cvector = CVector(0,0,0); var_77_float = 0;
		func_197(var_43_float, var_76_cvector, (float)2.6179938316345215);
		var_76_cvector = var_39_cvector;
		var_40_float = var_39_cvector | var_39_cvector;
		var_79_bool = var_40_float < (float)2500.0;
		if(var_79_bool != 0) {
			var_81_float = sqrt(var_40_float);
			var_82_int = "Can't retreat, distance: " + var_81_float;
			Trace(var_82_int);
			Sleep((float)0.5);
			return 10;
		}
	}
	var_84_float = GetByIndex(var_39_cvector, 0);
	var_85_float = GetByIndex(var_39_cvector, 2);
	Rotate(var_84_float, var_85_float);
	var_86_cvector = CVector(0,0,0);
	func_1496(var_86_cvector);
	var_1_int = var_86_cvector + var_39_cvector;
	SetTimer((int)120, (float)0.5);
	var_2_bool = false;
	
Label_269:
	MovePoint(var_1_int, (int)1, var_41_bool);
	var_92_bool = var_41_bool;
	if(var_92_bool != 0) {
		var_93_bool = var_0_int == 0; //@ne
		if(var_93_bool != 0) {
			goto Label_299;
		EMIT "GOTO 0x129";

		Label_299:
			return 10;
		}
		var_94_cvector = CVector(0,0,0); var_95_float = 0;
		func_197(var_43_float, var_94_cvector, (float)2.6179938316345215);
		var_94_cvector = var_42_cvector;
		var_43_float = var_42_cvector | var_42_cvector;
		var_97_bool = var_43_float >= (float)2500.0;
		if(var_97_bool != 0) {
			var_98_cvector = CVector(0,0,0);
			func_1496(var_98_cvector);
			var_1_int = var_98_cvector + var_42_cvector;
			SetTimer((int)120, (float)0.5);
		} else {
			goto Label_299;
		}
	}
	var_101_bool = var_2_bool == 0; //@nz
	if(var_101_bool == 1) goto Label_269;
	
}


func_1279(var_0_int, var_1_int, var_25_int)
{
	var_27_bool = var_25_int != (int)0;
	if(var_27_bool != 0) {
		return 0;
	}
	var_28_bool = 0; var_29_object = Obj();
	var_29_object = var_1_int;
	func_1317(var_28_bool, var_29_object);
	var_64_bool = var_28_bool == 0; //@nz
	if(var_64_bool != 0) {
		var_0_int = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1805(var_23_object, var_26_cvector, var_27_cvector)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	GetScene(var_30_object);
	AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	var_34_object = Obj();
	var_23_object = var_34_object;
	func_1693(var_34_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1301(var_0_int)
{
	var_0_int = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1819(var_241_object)
{
	var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0); var_247_cvector = CVector(0,0,0);
	@@var_241_object:GetPosition(var_245_cvector);
	GetPosition(var_246_cvector);
	var_247_cvector = var_245_cvector - var_246_cvector;
	var_248_float = GetByIndex(var_247_cvector, 0);
	var_249_float = GetByIndex(var_247_cvector, 2);
	RotateAsync(var_248_float, var_249_float);
	return 6;
}


func_1317(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_object = Obj();
	var_29_object = var_31_object;
	func_1669(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
	return 0;
}


func_1830(var_20_bool)
{
	var_21_bool = 0; var_22_bool = 0;
	IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
	return 2;
}


func_1835(var_21_object)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_float = 0; var_25_cvector = CVector(0,0,0);
	@@var_21_object:GetEyesHeight(var_24_float);
	var_25_cvector = CVector(0.0, 0.0, 0.0);
	var_26_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_26_float;
	SetByIndex(var_25_cvector, 1) = var_26_float;
	LookAsync(var_21_object, "head", var_25_cvector);
	return 4;
}


func_1324(var_207_string)
{
	var_207_string = "walk";
	return 0;
}


func_1326(var_208_string)
{
	var_208_string = "run";
	return 0;
}


func_1328(var_66_object)
{
	var_67_object = Obj();
	var_66_object = var_67_object;
	func_1334(var_67_object);
	return 0;
}


func_1846(var_91_string)
{
	var_92_bool = 0; var_93_int = 0; var_94_bool = 0; var_95_int = 0; var_96_bool = 0; var_97_float = 0; var_98_cvector = CVector(0,0,0); var_99_cvector = CVector(0,0,0); var_100_bool = 0; var_101_int = 0; var_102_bool = 0; var_103_int = 0; var_104_bool = 0; var_105_float = 0; var_106_cvector = CVector(0,0,0); var_107_cvector = CVector(0,0,0);
	IsExisting3DSound(var_100_bool, var_91_string);
	var_108_bool = var_100_bool == 0; //@nz
	if(var_108_bool != 0) {
		var_101_int = 0;

	Label_1852:
		var_110_int = var_101_int + (int)1;
		var_111_int = var_91_string + var_110_int;
		IsExisting3DSound(var_102_bool, var_111_int);
		var_112_bool = var_102_bool == 0; //@nz
		if(var_112_bool != 0) {
		} else {
			var_101_int = var_101_int + (int)1;
			goto Label_1852;
		}
		var_113_bool = var_101_int == 0; //@nz
		if(var_113_bool != 0) {
			return 16;
		}
		irand(var_103_int, var_101_int);
		var_115_int = var_103_int + (int)1;
		var_91_string = var_91_string + var_115_int;
	}
	Is3DSoundLoaded(var_104_bool, var_91_string);
	var_116_bool = var_104_bool;
	if(var_116_bool != 0) {
		GetEyesHeight(var_105_float);
		GetDirection(var_106_cvector);
		var_107_cvector = var_106_cvector * (int)50;
		var_118_float = GetByIndex(var_107_cvector, 1);
		var_118_float = var_118_float + var_105_float;
		SetByIndex(var_107_cvector, 1) = var_118_float;
		PlayGlobalSound(var_91_string, var_107_cvector);
	}
	return 16;
	
}


func_1334(var_67_object)
{
	EventDisable(0);
	var_68_object = Obj();
	var_67_object = var_68_object;
	func_1359(var_68_object);
	SetRTEnvelope((int)50, (int)40);
	EventEnable(0);
	
Label_1345:
	Hold();
	goto Label_1345;
}
EMIT "Return(); Pop(0)";


func_1359(var_68_object)
{
	var_69_cvector = CVector(0,0,0); var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_string = ""; var_74_object = Obj(); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_cvector = CVector(0,0,0); var_80_cvector = CVector(0,0,0); var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_string = ""; var_84_object = Obj(); var_85_bool = 0; var_86_bool = 0; var_87_float = 0; var_88_cvector = CVector(0,0,0);
	var_89_bool = var_68_object == 0; //@ne
	if(var_89_bool != 0) {
		var_90_string = "";
		func_1450("fdie");
	} else {
		@@var_68_object:GetPosition(var_79_cvector);
		GetPosition(var_80_cvector);
		GetDirection(var_81_cvector);
		var_82_cvector = var_80_cvector - var_79_cvector;
		var_122_float = GetByIndex(var_82_cvector, 0);
		var_123_float = GetByIndex(var_81_cvector, 0);
		var_124_float = var_122_float * var_123_float;
		var_125_float = GetByIndex(var_82_cvector, 2);
		var_126_float = GetByIndex(var_81_cvector, 2);
		var_127_float = var_125_float * var_126_float;
		var_128_int = var_124_float + var_127_float;
		var_130_bool = var_128_int >= (int)0;
		if(var_130_bool != 0) {
			var_83_string = "fdie";
		} else {
				var_83_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_68_object = var_84_object;
		var_133_bool = IsFuncExist(var_68_object, "GetScriptProperty", (int)2);
		if(var_133_bool != 0) {
			@@var_68_object:HasScriptProperty(var_85_bool, "Owner");
			var_135_bool = var_85_bool;
			if(var_135_bool != 0) {
				@@var_68_object:GetScriptProperty(var_84_object, "Owner");
				var_137_bool = var_84_object == 0; //@ne
				if(var_137_bool != 0) {
					var_68_object = var_84_object;
				}
			}
		}
		var_140_bool = IsFuncExist(var_84_object, "@GetEyesHeight", (int)1);
		if(var_140_bool != 0) {
			@@var_84_object:GetEyesHeight(var_87_float);
			var_88_cvector = CVector(0.0, 0.0, 0.0);
			var_141_float = GetByIndex(var_88_cvector, 1);
			var_87_float = var_141_float;
			SetByIndex(var_88_cvector, 1) = var_141_float;
			LookAsync(var_68_object, "head", var_88_cvector);
			var_86_bool = 1;
		} else {
			var_86_bool = 0;

		}
		var_143_string = "";
		var_83_string = var_143_string;
		func_1846(var_143_string);
		PlayAnimation("all", var_83_string);
		WaitForAnimEnd();
		var_145_bool = var_86_bool;
		if(var_145_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_83_string);
		RemoveEnvelope();
		var_84_object = 0;
	}
	return 20;
	
}


func_850(var_498_bool, var_499_float)
{
	var_500_float = 0; var_501_bool = 0; var_502_float = 0; var_503_bool = 0;
	rand(var_502_float);
	var_504_bool = var_502_float < var_499_float;
	if(var_504_bool != 0) {

	Label_855:
		IsAnimationPlaying(var_503_bool);
		var_505_bool = var_503_bool == 0; //@nz
		if(var_505_bool != 0) {
		} else {
			var_506_bool = 0;
			func_948(var_506_bool);
			if(var_506_bool != 0) {
				var_498_bool = 1;
				sync();
				goto Label_855;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_1052(var_503_bool);
	}
	goto Label_875;
	
Label_875:
	var_498_bool = 0;
	return 4;
	
}


func_1887(var_63_object)
{
	var_64_object = Obj(); var_65_object = Obj();
	self(var_65_object);
	var_65_object = var_63_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_352(var_2_bool)
{
	Stop();
	KillTimer((int)120);
	var_2_bool = true;
	return 0;
}


func_1893(var_49_cvector, var_50_cvector)
{
	var_57_float = 0; var_58_float = 0;
	var_59_int = var_50_cvector | var_50_cvector;
	var_58_float = sqrt(var_59_int);
	var_60_float = 9.999999974752427e-07;
	var_61_bool = var_58_float < var_60_float;
	if(var_61_bool != 0) {
		var_49_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_49_cvector = var_50_cvector / var_58_float;
	return 2;
}


func_877(var_0_int, var_295_bool, var_296_float)
{
	var_297_bool = 0; var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_cvector = CVector(0,0,0); var_301_float = 0; var_302_bool = 0; var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_cvector = CVector(0,0,0); var_306_float = 0;
	
Label_878:
	IsAnimationPlaying(var_302_bool);
	var_307_bool = var_302_bool == 0; //@nz
	if(var_307_bool != 0) {
	} else {
		var_308_bool = 0;
		func_948(var_308_bool);
		if(var_308_bool != 0) {
			var_295_bool = 1;
			return 10;
		}
		var_351_bool = 0; var_352_object = Obj();
		var_352_object = var_0_int;
		func_1669(var_351_bool, var_352_object);
		var_353_bool = var_351_bool == 0; //@nz
		if(var_353_bool != 0) {
			var_295_bool = 0;
			return 10;
		}
		@@@var_0_int:GetPFPosition(var_303_cvector);
		GetPFPosition(var_304_cvector);
		var_305_cvector = var_303_cvector - var_304_cvector;
		var_306_float = var_305_cvector | var_305_cvector;
		var_354_float = var_296_float * var_296_float;
		var_355_bool = var_306_float < var_354_float;
		if(var_355_bool != 0) {
			var_356_bool = 0; var_357_float = 0;
			var_296_float = var_357_float;
			func_713(var_305_cvector, var_306_float, var_356_bool, var_357_float);
			var_295_bool = 1;
			sync();
			goto Label_878;
		}
		return 10;
	}
	func_1052(var_306_float);
	var_295_bool = 0;
	return 10;
	
}


func_1903(var_445_float, var_446_float, var_447_float)
{
	var_450_bool = var_446_float < var_447_float;
	if(var_450_bool != 0) {
		var_446_float = var_445_float;
	} else {
		var_447_float = var_445_float;
	}
	return 0;
	
}


func_368(var_0_int, var_69_bool)
{
	var_70_cvector = CVector(0,0,0); var_71_cvector = CVector(0,0,0); var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0);
	GetDirection(var_72_cvector);
	var_74_cvector = CVector(0,0,0); var_75_object = Obj();
	var_75_object = var_0_int;
	func_1501(var_74_cvector, var_75_object);
	var_74_cvector = var_73_cvector;
	var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0);
	var_72_cvector = var_81_cvector;
	var_73_cvector = var_82_cvector;
	func_1921(var_80_float, var_81_cvector, var_82_cvector);
	var_69_bool = var_80_float >= (float)-0.3420201241970062;
	return 4;
}


func_1910(var_52_float, var_53_float, var_54_float, var_55_float)
{
	var_56_bool = var_53_float < var_54_float;
	if(var_56_bool != 0) {
		var_54_float = var_52_float;
		return 0;
	}
	var_57_bool = var_53_float > var_55_float;
	if(var_57_bool != 0) {
		var_55_float = var_52_float;
		return 0;
	}
	var_53_float = var_52_float;
	return 0;
}


func_384(var_56_object, var_57_bool)
{
	var_64_object = Obj(); var_65_object = Obj();
	GetScene(var_65_object);
	var_66_object = Obj();
	func_1887(var_66_object);
	@@var_65_object:RemoveStationaryActor(var_66_object);
	
Label_392:
	var_69_object = Obj(); var_70_bool = 0; var_71_float = 0;
	var_56_object = var_69_object;
	var_57_bool = var_70_bool;
	func_410(var_63_int, var_56_object, var_57_bool, var_64_object, var_65_object, var_69_object, var_70_bool, (float)180.0);
	Sleep((int)1);
	goto Label_392;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_1921(var_80_float, var_81_cvector, var_82_cvector)
{
	var_83_int = var_81_cvector | var_82_cvector;
	var_84_int = var_81_cvector | var_81_cvector;
	var_85_int = var_82_cvector | var_82_cvector;
	var_86_float = var_84_int * var_85_int;
	var_87_float = sqrt(var_86_float);
	var_80_float = var_83_int / var_87_float;
	return 0;
}


func_1929(var_23_bool, var_24_object, var_25_float)
{
	var_26_bool = var_24_object == 0; //@nz
	if(var_26_bool != 0) {
		var_23_bool = 0;
		return 0;
	}
	var_28_bool = var_25_float > (int)0;
	if(var_28_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_59_bool = var_25_float < (int)0;
		if(var_59_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1950;
		}
		var_23_bool = 0;
		return 0;
	}
Label_1950:
	var_30_float = 0;
	var_25_float = var_30_float;
	func_1981(var_30_float);
	var_34_bool = 0; var_35_object = Obj(); var_36_string = ""; var_37_float = 0; var_38_float = 0; var_39_float = 0;
	var_24_object = var_35_object;
	var_25_float = var_37_float;
	func_1533(var_34_bool, var_35_object, "reputation", var_37_float, (float)0, (float)1);
	var_23_bool = 1;
	return 0;
	
}


func_404(var_404_float)
{
	var_404_float = 0.029999999329447746;
	return 0;
}


func_407(var_411_int)
{
	var_411_int = 0;
	return 0;
}


func_920(var_0_int, var_310_bool)
{
	var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_cvector = CVector(0,0,0); var_314_float = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_cvector = CVector(0,0,0); var_319_float = 0; var_320_float = 0;
	var_321_bool = 0; var_322_object = Obj();
	var_322_object = var_0_int;
	func_1669(var_321_bool, var_322_object);
	var_323_bool = var_321_bool == 0; //@nz
	if(var_323_bool != 0) {
		var_310_bool = 0;
		return 10;
	}
	var_324_bool = 0;
	func_1009(var_320_float, var_324_bool);
	if(var_324_bool != 0) {
		@@@var_0_int:GetPFPosition(var_316_cvector);
		GetPFPosition(var_317_cvector);
		var_318_cvector = var_316_cvector - var_317_cvector;
		var_319_float = var_318_cvector | var_318_cvector;
		@@@var_0_int:GetAttackDistance(var_320_float);
		var_320_float = var_320_float + (int)50;
		var_326_float = var_320_float * var_320_float;
		var_310_bool = var_319_float <= var_326_float;
		return 10;
	}
	var_310_bool = 0;
	return 10;
}


func_410(var_0_int, var_3_bool, var_5_object, var_69_object, var_70_bool, var_71_float, var_144_bool, var_236_bool)
{
	var_72_float = 0; var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_bool = 0; var_76_bool = 0; var_77_float = 0; var_78_cvector = CVector(0,0,0); var_79_float = 0; var_80_cvector = CVector(0,0,0); var_81_bool = 0; var_82_float = 0; var_83_float = 0; var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_bool = 0; var_87_bool = 0; var_88_float = 0; var_89_cvector = CVector(0,0,0); var_90_float = 0; var_91_cvector = CVector(0,0,0); var_92_bool = 0; var_93_float = 0;
	func_639(var_91_cvector, var_92_bool, var_93_float);
	var_5_object = 0;
	var_118_bool = IsFuncExist(var_69_object, "@GetAttackDistance", (int)1);
	if(var_118_bool != 0) {
		@@var_69_object:GetAttackDistance(var_83_float);
		var_83_float = var_83_float + (int)50;
	} else {
							var_71_float = var_83_float;
	}
	var_121_bool = var_83_float >= (int)150;
	if(var_121_bool != 0) {
		var_83_float = 150;
	}
	var_3_bool = false;
	var_0_int = var_69_object;
	IsPlayerActor(var_0_int, var_86_bool);
	var_122_bool = var_86_bool;
	if(var_122_bool != 0) {
		PlayGlobalMusic("attack");
		var_124_object = Obj();
		func_1887(var_124_object);
		SendPlayerEnemy(var_69_object, var_124_object);
	}
	var_125_bool = var_70_bool;
	if(var_125_bool != 0) {
		var_87_bool = 0;
	} else {
						var_87_bool = 1;

	}
	var_88_float = (float)400.0 + var_83_float;
	
Label_450:
	var_127_bool = 0;
	var_127_bool = 0;
	var_128_bool = 0; var_129_object = Obj();
	var_129_object = var_0_int;
	func_1669(var_128_bool, var_129_object);
	if(var_128_bool != 0) {
		var_130_bool = var_3_bool == 0; //@nz
		if(var_130_bool != 0) {
			var_127_bool = 1;
		}
	}
	if(var_127_bool != 0) {
		func_1052(var_93_float);
		@@@var_0_int:GetPFPosition(var_84_cvector);
		GetPFPosition(var_85_cvector);
		var_89_cvector = var_84_cvector - var_85_cvector;
		var_90_float = var_89_cvector | var_89_cvector;
		var_136_float = var_88_float * var_88_float;
		var_137_bool = var_90_float >= var_136_float;
		if(var_137_bool != 0) {
			var_138_bool = 0; var_139_object = Obj(); var_140_float = 0; var_141_float = 0; var_142_bool = 0; var_143_bool = 0;
			var_139_object = var_0_int;
			var_83_float = var_140_float;
			TaskCall(3);
			func_1072(var_146_bool, var_138_bool, var_139_object, var_140_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_221_bool = var_144_bool == 0; //@nz
			if(var_221_bool != 0) {
			} else {
				var_87_bool = 0;
		} else {
				var_227_float = var_71_float * var_71_float;
				var_228_bool = var_90_float >= var_227_float;
				if(var_228_bool != 0) {
					@@@var_0_int:GetPFPosition(var_91_cvector);
					CanReachByPF(var_92_bool, var_91_cvector);
					var_229_bool = var_92_bool == 0; //@nz
					if(var_229_bool != 0) {
						var_230_bool = 0; var_231_object = Obj(); var_232_float = 0; var_233_float = 0; var_234_bool = 0; var_235_bool = 0;
						var_231_object = var_0_int;
						var_83_float = var_232_float;
						TaskCall(3);
						func_1072(var_238_bool, var_230_bool, var_231_object, var_232_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_239_bool = var_236_bool == 0; //@nz
						if(var_239_bool != 0) {
							goto Label_622;
						}
						var_87_bool = 0;
						goto Label_450;
					}
					var_240_bool = var_87_bool == 0; //@nz
					if(var_240_bool != 0) {
						var_241_object = Obj();
						var_241_object = var_0_int;
						func_1819(var_241_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_1052(var_93_float);
						StopAsync();
						var_87_bool = 1;
						var_252_bool = 0; var_253_object = Obj();
						var_253_object = var_0_int;
						func_1669(var_252_bool, var_253_object);
						var_254_bool = var_252_bool == 0; //@nz
						if(var_254_bool != 0) {
							goto Label_622;
						}
					}
					rand(var_93_float);
					var_255_bool = 0;
					var_257_bool = var_93_float < (float)0.25;
					if(var_257_bool != 1) {
						var_258_bool = 0;
						func_1009((bool)1, var_258_bool);
						if(var_258_bool != 1) {
							var_255_bool = 0;
						}
					}
					if(var_255_bool != 0) {
						Face(var_0_int);
						func_1059();
						PlayAnimation("all", "attack_stay");
						var_295_bool = 0; var_296_float = 0;
						var_71_float = var_296_float;
						func_877(var_93_float, var_295_bool, var_296_float);
						StopAsync();
					} else {
						Face(var_0_int);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_1052(var_93_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_517_bool = 0;
						func_1009(var_93_float, var_517_bool);
						var_518_bool = var_517_bool == 0; //@nz
						if(var_518_bool == 0) goto Label_612;
						var_519_bool = 0; var_520_object = Obj();
						var_520_object = var_0_int;
						func_1669(var_519_bool, var_520_object);
						var_521_bool = var_519_bool == 0; //@nz
						if(var_521_bool != 0) {
							goto Label_622;
						}
						@@@var_0_int:GetPFPosition(var_84_cvector);
						GetPFPosition(var_85_cvector);
						var_89_cvector = var_84_cvector - var_85_cvector;
						var_90_float = var_89_cvector | var_89_cvector;
						var_522_float = var_71_float * var_71_float;
						var_523_bool = var_90_float < var_522_float;
						if(var_523_bool == 0) goto Label_612;
						var_524_bool = 0; var_525_float = 0;
						var_71_float = var_525_float;
						func_713(var_92_bool, var_93_float, var_524_bool, var_525_float);
						var_526_bool = var_524_bool == 0; //@nz
						if(var_526_bool == 0) goto Label_612;
						goto Label_622;
				}
					var_527_bool = 0; var_528_float = 0;
					var_71_float = var_528_float;
					func_713(var_92_bool, var_93_float, var_527_bool, var_528_float);
					var_529_bool = var_527_bool == 0; //@nz
					if(var_529_bool != 0) {
						goto Label_622;
					}
					var_87_bool = 1;

				}
			Label_612:
				goto Label_621;
		}
		Label_621:
			goto Label_450;

		}
	}
Label_622:
	WaitForAnimEnd();
	var_222_bool = var_3_bool;
	if(var_222_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_225_bool = var_86_bool;
	if(var_225_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1450(var_90_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_91_string = "";
	var_90_string = var_91_string;
	func_1846(var_91_string);
	PlayAnimation("all", var_90_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_90_string);
	RemoveEnvelope();
	return 0;
}


func_1964(var_463_float)
{
	var_464_object = Obj(); var_465_object = Obj();
	CreateFloatVector(var_465_object);
	@@var_465_object:add(var_463_float);
	var_467_bool = var_463_float < (int)0;
	if(var_467_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_465_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_948(var_308_bool)
{
	var_309_bool = 0;
	var_309_bool = 0;
	var_310_bool = 0;
	func_920(var_309_bool, var_310_bool);
	if(var_310_bool != 0) {
		var_327_bool = 0;
		func_964(var_308_bool, var_309_bool, var_327_bool);
		if(var_327_bool != 0) {
			var_309_bool = 1;
		}
	}
	if(var_309_bool != 0) {
		var_308_bool = 1;
		return 0;
	}
	var_308_bool = 0;
	return 0;
}


func_1981(var_30_float)
{
	var_31_object = Obj(); var_32_object = Obj();
	CreateFloatVector(var_32_object);
	@@var_32_object:add(var_30_float);
	SendWorldWndMessage((int)16, var_32_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_964(var_0_int, var_4_object, var_327_bool)
{
	var_328_object = Obj(); var_329_bool = 0; var_330_float = 0; var_331_cvector = CVector(0,0,0); var_332_cvector = CVector(0,0,0); var_333_object = Obj(); var_334_bool = 0; var_335_float = 0; var_336_cvector = CVector(0,0,0); var_337_cvector = CVector(0,0,0);
	GetScene(var_333_object);
	var_334_bool = 0;
	
Label_968:
	var_338_cvector = CVector(0,0,0); var_339_object = Obj();
	var_339_object = var_0_int;
	func_1501(var_338_cvector, var_339_object);
	var_344_int = -var_338_cvector;
	FindDirLength(var_335_float, var_344_int, var_4_object);
	var_345_bool = var_335_float < var_4_object;
	if(var_345_bool != 0) {
	} else {
		Face(var_0_int);
		PlayAnimation("all", "bjump");
		@@@var_0_int:GetPFPosition(var_336_cvector);
		GetPFPosition(var_337_cvector);
		WaitForAnimEnd();
		func_1052(var_337_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_334_bool = 1;
		var_349_bool = 0;
		func_920(var_337_cvector, var_349_bool);
		var_350_bool = var_349_bool == 0; //@nz
		if(var_350_bool != 0) {
			goto Label_1006;
		}
		goto Label_968;
	}
Label_1006:
	var_334_bool = var_327_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1991(var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_23_bool = var_22_bool;
	if(var_23_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1482(var_435_string, var_436_int)
{
	var_438_bool = var_436_int == (int)2;
	if(var_438_bool != 0) {
		var_435_string = "fire";
		return 0;
	EMIT "GOTO 0x5d6";
	}
	var_440_bool = var_436_int == (int)1;
	if(var_440_bool != 0) {
		var_435_string = "bullet";
		return 0;
	}
	var_435_string = "phys";
	return 0;
}


func_2000()
{
	var_368_object = Obj(); var_369_object = Obj();
	GetScene(var_369_object);
	var_371_object = Obj();
	func_1887(var_371_object);
	BroadcastMessage("battle", var_371_object, var_369_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1496(var_89_cvector)
{
	var_90_cvector = CVector(0,0,0); var_91_cvector = CVector(0,0,0);
	GetPosition(var_91_cvector);
	var_91_cvector = var_89_cvector;
	return 2;
}


func_2011(var_49_string, var_50_int)
{
	var_51_string = ""; var_52_string = "";
	var_53_int = var_50_int;
	if(var_53_int != 0) {
		"idle" = "idle" + var_50_int;
	}
	var_52_string = var_49_string;
	return 2;
}


func_1501(var_51_cvector, var_52_object)
{
	var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0);
	GetPosition(var_55_cvector);
	@@var_52_object:GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
	return 4;
}


func_2018(var_43_int)
{
	var_44_int = 0; var_45_bool = 0; var_46_int = 0; var_47_bool = 0;
	var_46_int = 0;
	
Label_2020:
	var_49_string = ""; var_50_int = 0;
	var_46_int = var_50_int;
	func_2011(var_49_string, var_50_int);
	HasAnimation(var_47_bool, "all", var_49_string);
	var_54_bool = var_47_bool == 0; //@nz
	if(var_54_bool != 0) {
	} else {
		var_46_int = var_46_int + (int)1;
		goto Label_2020;
	}
	var_46_int = var_43_int;
	return 4;
	
}


func_1508(var_24_float, var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0);
	GetPosition(var_29_cvector);
	@@var_25_object:GetPosition(var_30_cvector);
	var_31_cvector = var_30_cvector - var_29_cvector;
	var_24_float = var_31_cvector | var_31_cvector;
	return 6;
}


func_1516(var_19_bool, var_20_object)
{
	var_21_bool = 0; var_22_bool = 0;
	IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
	return 2;
}


func_1009(var_0_int, var_258_bool)
{
	var_259_bool = 0; var_260_bool = 0;
	var_263_bool = IsFuncExist(var_0_int, "IsAttacking", (int)1);
	if(var_263_bool != 0) {
		@@@var_0_int:IsAttacking(var_260_bool);
		var_260_bool = var_258_bool;
		return 2;
	}
	var_258_bool = 0;
	return 2;
}


func_1521(var_42_bool, var_43_object, var_44_string)
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


func_2035(var_22_int)
{
	var_23_int = 0; var_24_int = 0;
	GetVariable("branch", var_24_int);
	var_24_int = var_22_int;
	return 2;
}


func_2041(var_21_object)
{
	var_22_int = 0;
	func_2035(var_22_int);
	var_27_bool = var_22_int == (int)1;
	if(var_27_bool != 0) {
		WorkWithCorpse(var_21_object);
	} else {
		Barter(var_21_object);
	}
	return 0;
	
}


func_1020(var_2_bool, var_5_object)
{
	var_375_float = 0; var_376_int = 0; var_377_float = 0; var_378_int = 0;
	var_379_bool = var_2_bool == 0; //@nz
	if(var_379_bool != 0) {
		return 4;
	}
	var_380_object = var_5_object;
	if(var_380_object != 0) {
		var_5_object = var_5_object + (int)-1;
		var_383_bool = var_5_object > (int)0;
		if(var_383_bool != 0) {
			return 4;
		}
	}
	rand(var_377_float);
	var_384_float = 0;
	func_1070(var_384_float);
	var_385_bool = var_377_float < var_384_float;
	if(var_385_bool != 0) {
		irand(var_378_int, var_2_bool);
		var_378_int = var_378_int + (int)1;
		var_388_int = "attack" + var_378_int;
		Speak(var_388_int);
		var_389_int = 0;
		func_1068(var_389_int);
		var_5_object = var_389_int;
	}
	return 4;
}


func_1533(var_34_bool, var_35_object, var_36_string, var_37_float, var_38_float, var_39_float)
{
	var_40_float = 0; var_41_float = 0;
	var_42_bool = 0; var_43_object = Obj(); var_44_string = "";
	var_35_object = var_43_object;
	var_36_string = var_44_string;
	func_1521(var_42_bool, var_43_object, var_44_string);
	var_51_bool = var_42_bool == 0; //@nz
	if(var_51_bool != 0) {
		var_34_bool = 0;
		return 2;
	}
	@@var_35_object:GetProperty(var_36_string, var_41_float);
	var_52_float = 0; var_53_float = 0; var_54_float = 0; var_55_float = 0;
	var_53_float = var_41_float + var_37_float;
	var_38_float = var_54_float;
	var_39_float = var_55_float;
	func_1910(var_52_float, var_53_float, var_54_float, var_55_float);
	@@var_35_object:SetProperty(var_36_string, var_52_float);
	var_34_bool = 1;
	return 2;
}


