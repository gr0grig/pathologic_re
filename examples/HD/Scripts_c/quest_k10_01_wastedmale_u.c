// @IMPORTS: SensePlayerOnly/1,Hold/0,IsPlayerActor/2,RemoveActor/1,FindActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,SendWorldWndMessage/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1
// @STRINGS: W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|A:GetProperty|A:SetProperty|W:health|W:armor|W:armor_|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:reputation|W:battle
// @GLOBALS: 0:object:
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_17: op=0xc vars=object
// @EVENT_6: op=0x17 vars=
// @TASK_1: vars=object,int,int,bool,float,int params=0
// @EVENT_6: op=0x2f vars=
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_6: op=0x2cb vars=
// @EVENT_7: op=0x302 vars=int
// @EVENT_1: op=0x31d vars=object
// @EVENT_2: op=0x32c vars=object
// @EVENT_10: op=0x3b2 vars=object
// @EVENT_41: op=0x3bd vars=object
// @TASK_3: vars= params=1
// @EVENT_6: op=0x3d1 vars=
// @EVENT_22: op=0x455 vars=object,int,float,float
// @EVENT_16: op=0x457 vars=object,string
// @EVENT_41: op=0x459 vars=object
// @STANDALONE_EVENT_22: op=0x664 vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x66c vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x676 vars=object,string
// @STANDALONE_EVENT_41: op=0x683 vars=object
// @PE: 0x29,0x2c,0x2c3,0x302,0x31d,0x32c,0x3a0,0x3b2,0x3bd,0x3c6,0x3d7,0x43b,0x455,0x457,0x459,0x45b,0x5ee,0x5f5,0x600,0x652,0x664,0x66c,0x683

task_0_event_17(var_0_object, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_10_bool = 0; var_11_bool = 0;
	IsPlayerActor(var_9_bool, var_11_bool);
	var_12_bool = var_11_bool;
	if(var_12_bool != 0) {
		TaskCall(1);
		func_29();
		TaskReturn();
	}
	return 2;
}


task_0_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1502(var_9_object);
	RemoveActor(var_9_object);
	return 0;
}


task_1_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1502(var_9_object);
	RemoveActor(var_9_object);
	return 0;
}


task_2_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1502(var_9_object);
	RemoveActor(var_9_object);
	return 0;
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1598(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_928(var_8_bool, var_9_int, var_17_int);
	}
	return 0;
	
}


task_2_event_1(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_bool = var_2_int == 0; //@nz
		if(var_12_bool != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = true;
		var_13_object = Obj();
		var_9_object = var_13_object;
		func_1450(var_13_object);
	}
	return 0;
}


task_2_event_2(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_bool = 0;
	var_10_bool = 0;
	var_11_bool = var_1_int == var_9_object;
	if(var_11_bool != 0) {
		var_12_int = var_2_int;
		if(var_12_int != 0) {
			var_10_bool = 1;
		}
	}
	if(var_10_bool != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	RequestClearPath(var_9_object);
	return 0;
}


task_2_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	func_784(var_9_object);
	var_9_object = Obj();
	func_1667();
	return 0;
}


task_3_event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1502(var_9_object);
	RemoveActor(var_9_object);
	return 0;
}


task_3_event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	return 0;
}


task_3_event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
{
	return 0;
}


task_3_event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1357(var_13_object, var_14_int, var_15_float);
	return 0;
}


event_43(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float, var_13_cvector, var_14_cvector)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0);
	var_9_object = var_15_object;
	var_10_int = var_16_int;
	var_11_float = var_17_float;
	var_13_cvector = var_18_cvector;
	var_14_cvector = var_19_cvector;
	func_1425(var_17_float, var_18_cvector, var_19_cvector);
	return 0;
}


event_16(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_string)
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


event_41(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object)
{
	var_10_object = Obj();
	var_9_object = var_10_object;
	func_1618(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	SensePlayerOnly((bool)1);
	TaskCall(1);
	func_29();
	TaskReturn();
	
Label_8:
	Hold();
	goto Label_8;
}
EMIT "Return(); Pop(0)";


func_1536(var_15_bool, var_16_object, var_17_float)
{
	var_18_bool = var_16_object == 0; //@nz
	if(var_18_bool != 0) {
		var_15_bool = 0;
		return 0;
	}
	var_20_bool = var_17_float > (int)0;
	if(var_20_bool != 0) {
		SendWorldWndMessage((int)8);
	} else {
		var_51_bool = var_17_float < (int)0;
		if(var_51_bool != 0) {
			SendWorldWndMessage((int)9);
			goto Label_1557;
		}
		var_15_bool = 0;
		return 0;
	}
Label_1557:
	var_22_float = 0;
	var_17_float = var_22_float;
	func_1588(var_22_float);
	var_26_bool = 0; var_27_object = Obj(); var_28_string = ""; var_29_float = 0; var_30_float = 0; var_31_float = 0;
	var_16_object = var_27_object;
	var_17_float = var_29_float;
	func_1153(var_26_bool, var_27_object, "reputation", var_29_float, (float)0, (float)1);
	var_15_bool = 1;
	return 0;
	
}


func_1153(var_26_bool, var_27_object, var_28_string, var_29_float, var_30_float, var_31_float)
{
	var_32_float = 0; var_33_float = 0;
	var_34_bool = 0; var_35_object = Obj(); var_36_string = "";
	var_27_object = var_35_object;
	var_28_string = var_36_string;
	func_1141(var_34_bool, var_35_object, var_36_string);
	var_43_bool = var_34_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_26_bool = 0;
		return 2;
	}
	@@var_27_object:GetProperty(var_28_string, var_33_float);
	var_44_float = 0; var_45_float = 0; var_46_float = 0; var_47_float = 0;
	var_45_float = var_33_float + var_29_float;
	var_30_float = var_46_float;
	var_31_float = var_47_float;
	func_1525(var_44_float, var_45_float, var_46_float, var_47_float);
	@@var_27_object:SetProperty(var_28_string, var_44_float);
	var_26_bool = 1;
	return 2;
}


func_520(var_0_object, var_279_bool, var_280_float)
{
	var_281_bool = 0; var_282_cvector = CVector(0,0,0); var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_float = 0; var_286_bool = 0; var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_float = 0;
	
Label_521:
	IsAnimationPlaying(var_286_bool);
	var_291_bool = var_286_bool == 0; //@nz
	if(var_291_bool != 0) {
	} else {
		var_292_bool = 0;
		func_591(var_292_bool);
		if(var_292_bool != 0) {
			var_279_bool = 1;
			return 10;
		}
		var_335_bool = 0; var_336_object = Obj();
		var_336_object = var_0_object;
		func_1289(var_335_bool, var_336_object);
		var_337_bool = var_335_bool == 0; //@nz
		if(var_337_bool != 0) {
			var_279_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_287_cvector);
		GetPFPosition(var_288_cvector);
		var_289_cvector = var_287_cvector - var_288_cvector;
		var_290_float = var_289_cvector | var_289_cvector;
		var_338_float = var_280_float * var_280_float;
		var_339_bool = var_290_float < var_338_float;
		if(var_339_bool != 0) {
			var_340_bool = 0; var_341_float = 0;
			var_280_float = var_341_float;
			func_356(var_289_cvector, var_290_float, var_340_bool, var_341_float);
			var_279_bool = 1;
			sync();
			goto Label_521;
		}
		return 10;
	}
	func_695(var_290_float);
	var_279_bool = 0;
	return 10;
	
}


func_1289(var_80_bool, var_81_object)
{
	var_82_int = 0; var_83_int = 0;
	var_84_bool = 0; var_85_object = Obj();
	var_81_object = var_85_object;
	func_1253(var_84_bool, var_85_object);
	var_101_bool = var_84_bool == 0; //@nz
	if(var_101_bool != 0) {
		var_80_bool = 0;
		return 2;
	}
	var_102_bool = 0; var_103_object = Obj(); var_104_string = "";
	var_81_object = var_103_object;
	func_1141(var_102_bool, var_103_object, "noaccess");
	var_111_bool = var_102_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_80_bool = 1;
		return 2;
	}
	@@var_81_object:GetProperty("noaccess", var_83_int);
	var_80_bool = var_83_int == (int)0;
	return 2;
}


func_652(var_0_object, var_242_bool)
{
	var_243_bool = 0; var_244_bool = 0;
	var_247_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_247_bool != 0) {
		@@@var_0_object:IsAttacking(var_244_bool);
		var_244_bool = var_242_bool;
		return 2;
	}
	var_242_bool = 0;
	return 2;
}


func_784(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_950(var_9_object);
	return 0;
}


func_1425(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1313(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_663(var_2_int, var_5_int)
{
	var_359_float = 0; var_360_int = 0; var_361_float = 0; var_362_int = 0;
	var_363_bool = var_2_int == 0; //@nz
	if(var_363_bool != 0) {
		return 4;
	}
	var_364_int = var_5_int;
	if(var_364_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_367_bool = var_5_int > (int)0;
		if(var_367_bool != 0) {
			return 4;
		}
	}
	rand(var_361_float);
	var_368_float = 0;
	func_713(var_368_float);
	var_369_bool = var_361_float < var_368_float;
	if(var_369_bool != 0) {
		irand(var_362_int, var_2_int);
		var_362_int = var_362_int + (int)1;
		var_372_int = "attack" + var_362_int;
		Speak(var_372_int);
		var_373_int = 0;
		func_711(var_373_int);
		var_5_int = var_373_int;
	}
	return 4;
}


func_1175(var_391_float, var_392_object, var_393_float, var_394_int)
{
	var_398_int = 0; var_399_string = ""; var_400_int = 0; var_401_float = 0; var_402_float = 0; var_403_float = 0; var_404_int = 0; var_405_string = ""; var_406_int = 0; var_407_float = 0; var_408_float = 0; var_409_float = 0;
	var_410_bool = 0; var_411_object = Obj(); var_412_string = "";
	var_392_object = var_411_object;
	func_1141(var_410_bool, var_411_object, "health");
	var_413_bool = var_410_bool == 0; //@nz
	if(var_413_bool != 0) {
		var_391_float = 0.0;
		return 12;
	}
	var_414_bool = 0; var_415_object = Obj(); var_416_string = "";
	var_392_object = var_415_object;
	func_1141(var_414_bool, var_415_object, "armor");
	var_417_bool = var_414_bool == 0; //@nz
	if(var_417_bool != 0) {
		var_404_int = 0;
	} else {
			@@var_392_object:GetProperty("armor", var_404_int);
	}
	var_419_string = ""; var_420_int = 0;
	var_394_int = var_420_int;
	func_1115(var_419_string, var_420_int);
	var_405_string = "armor_" + var_419_string;
	var_425_bool = 0; var_426_object = Obj(); var_427_string = "";
	var_392_object = var_426_object;
	var_405_string = var_427_string;
	func_1141(var_425_bool, var_426_object, var_427_string);
	var_428_bool = var_425_bool == 0; //@nz
	if(var_428_bool != 0) {
		var_406_int = 0;
	} else {
		@@var_392_object:GetProperty(var_405_string, var_406_int);

	}
	var_429_float = 0; var_430_float = 0; var_431_float = 0;
	var_432_int = var_404_int + var_406_int;
	var_430_float = var_432_int / (float)100.0;
	func_1518(var_429_float, var_430_float, (float)1);
	var_429_float = var_407_float;
	@@var_392_object:GetProperty("health", var_408_float);
	var_437_int = (int)1 - var_407_float;
	var_409_float = var_393_float * var_437_int;
	var_439_float = 0; var_440_float = 0; var_441_float = 0; var_442_float = 0;
	var_440_float = var_408_float - var_409_float;
	func_1525(var_439_float, var_440_float, (float)0, (float)1);
	@@var_392_object:SetProperty("health", var_439_float);
	var_445_bool = 0; var_446_object = Obj();
	var_392_object = var_446_object;
	func_1136(var_445_bool, var_446_object);
	if(var_445_bool != 0) {
		var_447_float = 0;
		var_447_float = -var_409_float;
		func_1571(var_447_float);
	}
	var_409_float = var_391_float;
	return 12;
	
}


func_282(var_1_int, var_2_int, var_4_float)
{
	var_44_bool = 0; var_45_bool = 0; var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_bool = 0; var_49_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_284:
	var_53_int = var_1_int + (int)1;
	var_54_int = "attack_begin" + var_53_int;
	HasAnimation(var_47_bool, "all", var_54_int);
	var_55_bool = var_47_bool == 0; //@nz
	if(var_55_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_284;
	}
	var_2_int = 0;
	
Label_298:
	var_58_int = var_2_int + (int)1;
	var_59_int = "attack" + var_58_int;
	IsExisting3DSound(var_48_bool, var_59_int);
	var_60_bool = var_48_bool == 0; //@nz
	if(var_60_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_298;

	}
	GetAnimationOffset(var_49_cvector, "all", "bjump");
	var_63_float = GetByIndex(var_49_cvector, 2);
	var_4_float = -var_63_float;
	return 6;
	
}


func_29()
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, "player");
	var_19_object = Obj(); var_20_bool = 0; var_21_float = 0;
	var_17_object = var_19_object;
	func_53(var_13_bool, var_14_float, var_15_int, var_16_object, var_17_object, var_19_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1439(var_225_object)
{
	var_226_cvector = CVector(0,0,0); var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0);
	@@var_225_object:GetPosition(var_229_cvector);
	GetPosition(var_230_cvector);
	var_231_cvector = var_229_cvector - var_230_cvector;
	var_232_float = GetByIndex(var_231_cvector, 0);
	var_233_float = GetByIndex(var_231_cvector, 2);
	RotateAsync(var_232_float, var_233_float);
	return 6;
}


func_928(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_966(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1313(var_26_object)
{
	var_27_bool = 0; var_28_int = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_string = ""; var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = "";
	var_41_bool = var_26_object == 0; //@ne
	if(var_41_bool != 0) {
		return 14;
	}
	IsDead(var_34_bool);
	var_42_bool = var_34_bool;
	if(var_42_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_35_int);
	var_44_bool = var_35_int < (int)0;
	if(var_44_bool != 0) {
		return 14;
	}
	@@var_26_object:GetPosition(var_36_cvector);
	GetPosition(var_37_cvector);
	GetDirection(var_38_cvector);
	var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_47_float = var_45_float * var_46_float;
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	var_50_float = var_48_float * var_49_float;
	var_51_int = var_47_float + var_50_float;
	var_53_bool = var_51_int >= (int)0;
	if(var_53_bool != 0) {
		var_40_string = "fhit";
	} else {
		var_40_string = "bhit";
	}
	var_56_int = var_40_string + "1";
	var_58_int = var_40_string + "2";
	FadeSecondaryAnimation("hit_react", var_56_int, var_58_int, (int)-10);
	return 14;
	
}


func_1571(var_447_float)
{
	var_448_object = Obj(); var_449_object = Obj();
	CreateFloatVector(var_449_object);
	@@var_449_object:add(var_447_float);
	var_451_bool = var_447_float < (int)0;
	if(var_451_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_449_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_41(var_388_float)
{
	var_388_float = 0.10000000149011612;
	return 0;
}


func_1450(var_139_object)
{
	var_140_float = 0; var_141_cvector = CVector(0,0,0); var_142_float = 0; var_143_cvector = CVector(0,0,0);
	@@var_139_object:GetEyesHeight(var_142_float);
	var_143_cvector = CVector(0.0, 0.0, 0.0);
	var_144_float = GetByIndex(var_143_cvector, 1);
	var_142_float = var_144_float;
	SetByIndex(var_143_cvector, 1) = var_144_float;
	LookAsync(var_139_object, "head", var_143_cvector);
	return 4;
}


func_44(var_395_int)
{
	var_395_int = 0;
	return 0;
}


func_563(var_0_object, var_294_bool)
{
	var_295_cvector = CVector(0,0,0); var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_float = 0; var_299_float = 0; var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0;
	var_305_bool = 0; var_306_object = Obj();
	var_306_object = var_0_object;
	func_1289(var_305_bool, var_306_object);
	var_307_bool = var_305_bool == 0; //@nz
	if(var_307_bool != 0) {
		var_294_bool = 0;
		return 10;
	}
	var_308_bool = 0;
	func_652(var_304_float, var_308_bool);
	if(var_308_bool != 0) {
		@@@var_0_object:GetPFPosition(var_300_cvector);
		GetPFPosition(var_301_cvector);
		var_302_cvector = var_300_cvector - var_301_cvector;
		var_303_float = var_302_cvector | var_302_cvector;
		@@@var_0_object:GetAttackDistance(var_304_float);
		var_304_float = var_304_float + (int)50;
		var_310_float = var_304_float * var_304_float;
		var_294_bool = var_303_float <= var_310_float;
		return 10;
	}
	var_294_bool = 0;
	return 10;
}


func_1588(var_22_float)
{
	var_23_object = Obj(); var_24_object = Obj();
	CreateFloatVector(var_24_object);
	@@var_24_object:add(var_22_float);
	SendWorldWndMessage((int)16, var_24_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_53(var_0_object, var_3_bool, var_5_int, var_19_object, var_20_bool, var_21_float, var_128_bool, var_220_bool)
{
	var_22_float = 0; var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_bool = 0; var_26_bool = 0; var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_float = 0; var_30_cvector = CVector(0,0,0); var_31_bool = 0; var_32_float = 0; var_33_float = 0; var_34_cvector = CVector(0,0,0); var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_bool = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_cvector = CVector(0,0,0); var_42_bool = 0; var_43_float = 0;
	func_282(var_41_cvector, var_42_bool, var_43_float);
	var_5_int = 0;
	var_68_bool = IsFuncExist(var_19_object, "@GetAttackDistance", (int)1);
	if(var_68_bool != 0) {
		@@var_19_object:GetAttackDistance(var_33_float);
		var_33_float = var_33_float + (int)50;
	} else {
							var_21_float = var_33_float;
	}
	var_71_bool = var_33_float >= (int)150;
	if(var_71_bool != 0) {
		var_33_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_19_object;
	IsPlayerActor(var_0_object, var_36_bool);
	var_72_bool = var_36_bool;
	if(var_72_bool != 0) {
		PlayGlobalMusic("attack");
		var_74_object = Obj();
		func_1502(var_74_object);
		SendPlayerEnemy(var_19_object, var_74_object);
	}
	var_77_bool = var_20_bool;
	if(var_77_bool != 0) {
		var_37_bool = 0;
	} else {
						var_37_bool = 1;

	}
	var_38_float = (float)400.0 + var_33_float;
	
Label_93:
	var_79_bool = 0;
	var_79_bool = 0;
	var_80_bool = 0; var_81_object = Obj();
	var_81_object = var_0_object;
	func_1289(var_80_bool, var_81_object);
	if(var_80_bool != 0) {
		var_114_bool = var_3_bool == 0; //@nz
		if(var_114_bool != 0) {
			var_79_bool = 1;
		}
	}
	if(var_79_bool != 0) {
		func_695(var_43_float);
		@@@var_0_object:GetPFPosition(var_34_cvector);
		GetPFPosition(var_35_cvector);
		var_39_cvector = var_34_cvector - var_35_cvector;
		var_40_float = var_39_cvector | var_39_cvector;
		var_120_float = var_38_float * var_38_float;
		var_121_bool = var_40_float >= var_120_float;
		if(var_121_bool != 0) {
			var_122_bool = 0; var_123_object = Obj(); var_124_float = 0; var_125_float = 0; var_126_bool = 0; var_127_bool = 0;
			var_123_object = var_0_object;
			var_33_float = var_124_float;
			TaskCall(2);
			func_721(var_130_bool, var_122_bool, var_123_object, var_124_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_205_bool = var_128_bool == 0; //@nz
			if(var_205_bool != 0) {
			} else {
				var_37_bool = 0;
		} else {
				var_211_float = var_21_float * var_21_float;
				var_212_bool = var_40_float >= var_211_float;
				if(var_212_bool != 0) {
					@@@var_0_object:GetPFPosition(var_41_cvector);
					CanReachByPF(var_42_bool, var_41_cvector);
					var_213_bool = var_42_bool == 0; //@nz
					if(var_213_bool != 0) {
						var_214_bool = 0; var_215_object = Obj(); var_216_float = 0; var_217_float = 0; var_218_bool = 0; var_219_bool = 0;
						var_215_object = var_0_object;
						var_33_float = var_216_float;
						TaskCall(2);
						func_721(var_222_bool, var_214_bool, var_215_object, var_216_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_223_bool = var_220_bool == 0; //@nz
						if(var_223_bool != 0) {
							goto Label_265;
						}
						var_37_bool = 0;
						goto Label_93;
					}
					var_224_bool = var_37_bool == 0; //@nz
					if(var_224_bool != 0) {
						var_225_object = Obj();
						var_225_object = var_0_object;
						func_1439(var_225_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_695(var_43_float);
						StopAsync();
						var_37_bool = 1;
						var_236_bool = 0; var_237_object = Obj();
						var_237_object = var_0_object;
						func_1289(var_236_bool, var_237_object);
						var_238_bool = var_236_bool == 0; //@nz
						if(var_238_bool != 0) {
							goto Label_265;
						}
					}
					rand(var_43_float);
					var_239_bool = 0;
					var_241_bool = var_43_float < (float)0.25;
					if(var_241_bool != 1) {
						var_242_bool = 0;
						func_652((bool)1, var_242_bool);
						if(var_242_bool != 1) {
							var_239_bool = 0;
						}
					}
					if(var_239_bool != 0) {
						Face(var_0_object);
						func_702();
						PlayAnimation("all", "attack_stay");
						var_279_bool = 0; var_280_float = 0;
						var_21_float = var_280_float;
						func_520(var_43_float, var_279_bool, var_280_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_695(var_43_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_501_bool = 0;
						func_652(var_43_float, var_501_bool);
						var_502_bool = var_501_bool == 0; //@nz
						if(var_502_bool == 0) goto Label_255;
						var_503_bool = 0; var_504_object = Obj();
						var_504_object = var_0_object;
						func_1289(var_503_bool, var_504_object);
						var_505_bool = var_503_bool == 0; //@nz
						if(var_505_bool != 0) {
							goto Label_265;
						}
						@@@var_0_object:GetPFPosition(var_34_cvector);
						GetPFPosition(var_35_cvector);
						var_39_cvector = var_34_cvector - var_35_cvector;
						var_40_float = var_39_cvector | var_39_cvector;
						var_506_float = var_21_float * var_21_float;
						var_507_bool = var_40_float < var_506_float;
						if(var_507_bool == 0) goto Label_255;
						var_508_bool = 0; var_509_float = 0;
						var_21_float = var_509_float;
						func_356(var_42_bool, var_43_float, var_508_bool, var_509_float);
						var_510_bool = var_508_bool == 0; //@nz
						if(var_510_bool == 0) goto Label_255;
						goto Label_265;
				}
					var_511_bool = 0; var_512_float = 0;
					var_21_float = var_512_float;
					func_356(var_42_bool, var_43_float, var_511_bool, var_512_float);
					var_513_bool = var_511_bool == 0; //@nz
					if(var_513_bool != 0) {
						goto Label_265;
					}
					var_37_bool = 1;

				}
			Label_255:
				goto Label_264;
		}
		Label_264:
			goto Label_93;

		}
	}
Label_265:
	WaitForAnimEnd();
	var_206_bool = var_3_bool;
	if(var_206_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_209_bool = var_36_bool;
	if(var_209_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_1461(var_248_string)
{
	var_249_bool = 0; var_250_int = 0; var_251_bool = 0; var_252_int = 0; var_253_bool = 0; var_254_float = 0; var_255_cvector = CVector(0,0,0); var_256_cvector = CVector(0,0,0); var_257_bool = 0; var_258_int = 0; var_259_bool = 0; var_260_int = 0; var_261_bool = 0; var_262_float = 0; var_263_cvector = CVector(0,0,0); var_264_cvector = CVector(0,0,0);
	IsExisting3DSound(var_257_bool, var_248_string);
	var_265_bool = var_257_bool == 0; //@nz
	if(var_265_bool != 0) {
		var_258_int = 0;

	Label_1467:
		var_267_int = var_258_int + (int)1;
		var_268_int = var_248_string + var_267_int;
		IsExisting3DSound(var_259_bool, var_268_int);
		var_269_bool = var_259_bool == 0; //@nz
		if(var_269_bool != 0) {
		} else {
			var_258_int = var_258_int + (int)1;
			goto Label_1467;
		}
		var_270_bool = var_258_int == 0; //@nz
		if(var_270_bool != 0) {
			return 16;
		}
		irand(var_260_int, var_258_int);
		var_272_int = var_260_int + (int)1;
		var_248_string = var_248_string + var_272_int;
	}
	Is3DSoundLoaded(var_261_bool, var_248_string);
	var_273_bool = var_261_bool;
	if(var_273_bool != 0) {
		GetEyesHeight(var_262_float);
		GetDirection(var_263_cvector);
		var_264_cvector = var_263_cvector * (int)50;
		var_275_float = GetByIndex(var_264_cvector, 1);
		var_275_float = var_275_float + var_262_float;
		SetByIndex(var_264_cvector, 1) = var_275_float;
		PlayGlobalSound(var_248_string, var_264_cvector);
	}
	return 16;
	
}


func_695(var_0_object)
{
	var_115_object = Obj();
	var_115_object = var_0_object;
	func_1598(var_115_object);
	return 0;
}


func_950(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_826(var_0_object, var_1_int, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool)
{
	var_157_bool = 0; var_158_bool = 0; var_159_object = Obj(); var_160_cvector = CVector(0,0,0); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_float = 0; var_164_object = Obj(); var_165_bool = 0; var_166_bool = 0; var_167_object = Obj(); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_float = 0; var_172_object = Obj();
	var_0_object = false;
	var_1_int = var_152_object;
	var_156_bool = var_166_bool;
	
Label_830:
	var_173_bool = 0; var_174_object = Obj();
	var_152_object = var_174_object;
	func_966(var_173_bool, var_174_object);
	var_177_bool = var_173_bool == 0; //@nz
	if(var_177_bool != 0) {
		var_151_bool = 0;
		return 16;
	}
	@@var_152_object:GetPosition(var_168_cvector);
	GetPosition(var_169_cvector);
	var_170_cvector = var_168_cvector - var_169_cvector;
	var_171_float = var_170_cvector | var_170_cvector;
	var_178_bool = 0;
	var_178_bool = 0;
	var_180_bool = var_154_float > (int)0;
	if(var_180_bool != 0) {
		var_181_float = var_154_float * var_154_float;
		var_182_bool = var_171_float > var_181_float;
		if(var_182_bool != 0) {
			var_178_bool = 1;
		}
	}
	if(var_178_bool != 0) {
		Stop();
		var_151_bool = 0;
		return 16;
	}
	var_183_float = var_153_float * var_153_float;
	var_184_bool = var_171_float > var_183_float;
	if(var_184_bool != 0) {
		@@var_152_object:GetPFPosition(var_168_cvector);
		FindPathTo(var_172_object, var_168_cvector);
		var_185_bool = var_172_object != 0; //@nn
		if(var_185_bool != 0) {
			var_172_object = var_167_object;
			var_172_object = 0;
		}
		var_186_bool = var_167_object != 0; //@nn
		if(var_186_bool != 0) {
			var_187_bool = var_166_bool;
			if(var_187_bool == 0) goto Label_879;
			var_166_bool = 0;
			RotatePath(var_167_object, var_165_bool);
			var_188_bool = var_165_bool == 0; //@nz
			if(var_188_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_191_string = "";
				func_973(var_191_string);
				var_192_string = "";
				func_975(var_192_string);
				FollowPath(var_167_object, var_155_bool, var_165_bool, var_191_string, var_192_string);
				var_193_bool = var_165_bool == 0; //@nz
				if(var_193_bool != 0) {
					var_194_object = var_0_object;
					if(var_194_object != 0) {
						var_167_object = 0;
						goto Label_926;
					EMIT "GOTO 0x383";
					}
				} else {
					var_167_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_165_bool);
					var_197_bool = var_165_bool == 0; //@nz
					if(var_197_bool != 0) {
						var_198_object = var_0_object;
						if(var_198_object != 0) {
							var_167_object = 0;
							goto Label_926;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_926;
	}
			var_172_object = 0;
			goto Label_924;

		Label_924:
			var_167_object = 0;

		}
		goto Label_830;
	}
Label_926:
	var_151_bool = !var_0_object;
	return 16;
	
}


func_1083(var_76_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_77_string = "";
	var_76_string = var_77_string;
	func_1461(var_77_string);
	PlayAnimation("all", var_76_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_76_string);
	RemoveEnvelope();
	return 0;
}


func_700(var_456_int)
{
	var_456_int = 0;
	return 0;
}


func_317(var_0_object, var_377_float, var_378_int)
{
	var_379_object = Obj(); var_380_float = 0; var_381_float = 0; var_382_object = Obj(); var_383_float = 0; var_384_float = 0;
	var_386_float = var_377_float * (float)0.8999999761581421;
	GetVictim(var_386_float, var_382_object);
	ReportAttack(var_0_object);
	var_387_bool = var_382_object == var_0_object;
	if(var_387_bool != 0) {
		var_388_float = 0; var_389_object = Obj(); var_390_int = 0;
		var_382_object = var_389_object;
		var_378_int = var_390_int;
		func_41(var_390_int);
		var_388_float = var_383_float;
		var_391_float = 0; var_392_object = Obj(); var_393_float = 0; var_394_int = 0;
		var_382_object = var_392_object;
		var_383_float = var_393_float;
		var_395_int = 0; var_396_object = Obj(); var_397_int = 0;
		var_382_object = var_396_object;
		var_378_int = var_397_int;
		func_44(var_397_int);
		var_395_int = var_394_int;
		func_1175(var_391_float, var_392_object, var_393_float, var_394_int);
		var_391_float = var_384_float;
		var_456_int = 0;
		func_700(var_456_int);
		ReportHit(var_0_object, var_456_int, var_384_float, var_383_float);
		var_457_object = Obj(); var_458_float = 0;
		var_382_object = var_457_object;
		var_384_float = var_458_float;
		func_707();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_702()
{
	var_248_string = "";
	func_1461("attack_stay");
	return 0;
}


func_1598(var_115_object)
{
	var_116_bool = 0; var_117_bool = 0;
	IsPlayerActor(var_115_object, var_117_bool);
	var_118_bool = var_117_bool;
	if(var_118_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_707()
{
	return 0;
}


func_709(var_481_bool)
{
	var_481_bool = 1;
	return 0;
}


func_966(var_173_bool, var_174_object)
{
	var_175_bool = 0; var_176_object = Obj();
	var_174_object = var_176_object;
	func_1289(var_175_bool, var_176_object);
	var_175_bool = var_173_bool;
	return 0;
}


func_1607()
{
	var_352_object = Obj(); var_353_object = Obj();
	GetScene(var_353_object);
	var_355_object = Obj();
	func_1502(var_355_object);
	BroadcastMessage("battle", var_355_object, var_353_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_711(var_373_int)
{
	var_373_int = 1;
	return 0;
}


func_713(var_368_float)
{
	var_368_float = 0.5;
	return 0;
}


func_973(var_191_string)
{
	var_191_string = "walk";
	return 0;
}


func_1357(var_13_object, var_14_int, var_15_float)
{
	var_16_cvector = CVector(0,0,0); var_17_object = Obj(); var_18_int = 0; var_19_bool = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_int = 0; var_23_int = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_object = Obj(); var_27_int = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_int = 0; var_32_int = 0; var_33_cvector = CVector(0,0,0);
	var_34_bool = 0;
	var_34_bool = 0;
	var_35_bool = 0;
	var_35_bool = 0;
	var_36_object = var_13_object;
	if(var_36_object != 0) {
		var_38_bool = var_14_int != (int)4;
		if(var_38_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_40_bool = var_14_int != (int)5;
		if(var_40_bool != 0) {
			var_34_bool = 1;
		}
	}
	if(var_34_bool != 0) {
		var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0);
		var_43_cvector = CVector(0,0,0); var_44_object = Obj();
		var_13_object = var_44_object;
		func_1129(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1508(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1386:
		var_55_int = "hit" + var_27_int;
		GetGeometryLocator(var_55_int, var_28_bool, var_29_cvector, var_30_cvector);
		var_56_bool = var_28_bool == 0; //@nz
		if(var_56_bool != 0) {
		} else {
			var_104_int = var_30_cvector | var_25_cvector;
			var_106_bool = var_104_int >= (float)0.7071067690849304;
			if(var_106_bool != 0) {
				@@var_26_object:add(var_29_cvector);
			}
			var_27_int = var_27_int + (int)1;
			goto Label_1386;
		}
		@@var_26_object:size(var_31_int);
		var_57_int = var_31_int;
		if(var_57_int != 0) {
			irand(var_32_int, var_31_int);
			@@var_26_object:get(var_33_cvector, var_32_int);
			var_58_object = Obj(); var_59_int = 0; var_60_float = 0; var_61_cvector = CVector(0,0,0); var_62_cvector = CVector(0,0,0);
			var_13_object = var_58_object;
			var_14_int = var_59_int;
			var_15_float = var_60_float;
			var_33_cvector = var_61_cvector;
			var_62_cvector = -var_25_cvector;
			func_1425(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1313(var_103_object);
	return 18;
	
}


func_591(var_292_bool)
{
	var_293_bool = 0;
	var_293_bool = 0;
	var_294_bool = 0;
	func_563(var_293_bool, var_294_bool);
	if(var_294_bool != 0) {
		var_311_bool = 0;
		func_607(var_292_bool, var_293_bool, var_311_bool);
		if(var_311_bool != 0) {
			var_293_bool = 1;
		}
	}
	if(var_293_bool != 0) {
		var_292_bool = 1;
		return 0;
	}
	var_292_bool = 0;
	return 0;
}


func_975(var_192_string)
{
	var_192_string = "run";
	return 0;
}


func_721(var_2_int, var_122_bool, var_123_object, var_124_float, var_125_float, var_126_bool, var_127_bool)
{
	var_131_bool = 0; var_132_bool = 0; var_133_bool = 0; var_134_bool = 0;
	var_135_object = Obj();
	var_123_object = var_135_object;
	func_1598(var_135_object);
	SetTimer((int)1, (int)5);
	CanSee(var_133_bool, var_123_object);
	var_138_bool = var_133_bool;
	if(var_138_bool != 0) {
		var_2_int = true;
		var_139_object = Obj();
		var_123_object = var_139_object;
		func_1450(var_139_object);
	} else {
		var_2_int = false;
	}
	var_146_bool = 0; var_147_object = Obj();
	var_123_object = var_147_object;
	func_1136(var_146_bool, var_147_object);
	if(var_146_bool != 0) {
		var_150_object = Obj();
		func_1502(var_150_object);
		SendPlayerEnemy(var_123_object, var_150_object);
	}
	var_151_bool = 0; var_152_object = Obj(); var_153_float = 0; var_154_float = 0; var_155_bool = 0; var_156_bool = 0;
	var_123_object = var_152_object;
	var_124_float = var_153_float;
	var_125_float = var_154_float;
	var_126_bool = var_155_bool;
	var_127_bool = var_156_bool;
	func_826(var_133_bool, var_134_bool, var_151_bool, var_152_object, var_153_float, var_154_float, var_155_bool, var_156_bool);
	var_151_bool = var_134_bool;
	var_202_int = var_2_int;
	if(var_202_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_134_bool = var_122_bool;
	return 4;
	
}


func_1618(var_10_object)
{
	var_11_bool = 0; var_12_object = Obj();
	var_10_object = var_12_object;
	func_1136(var_11_bool, var_12_object);
	if(var_11_bool != 0) {
		var_15_bool = 0; var_16_object = Obj(); var_17_float = 0;
		var_10_object = var_16_object;
		func_1536(var_15_bool, var_16_object, (float)0.05000000074505806);
	}
	var_53_object = Obj();
	var_10_object = var_53_object;
	TaskCall(3);
	func_983(var_53_object);
	TaskReturn();
	return 0;
}


func_983(var_53_object)
{
	var_54_object = Obj();
	var_53_object = var_54_object;
	func_992(var_54_object);
	
Label_988:
	Hold();
	goto Label_988;
}
EMIT "Return(); Pop(0)";


func_1115(var_419_string, var_420_int)
{
	var_422_bool = var_420_int == (int)2;
	if(var_422_bool != 0) {
		var_419_string = "fire";
		return 0;
	EMIT "GOTO 0x467";
	}
	var_424_bool = var_420_int == (int)1;
	if(var_424_bool != 0) {
		var_419_string = "bullet";
		return 0;
	}
	var_419_string = "phys";
	return 0;
}


func_1502(var_74_object)
{
	var_75_object = Obj(); var_76_object = Obj();
	self(var_76_object);
	var_76_object = var_74_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_607(var_0_object, var_4_float, var_311_bool)
{
	var_312_object = Obj(); var_313_bool = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_object = Obj(); var_318_bool = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0);
	GetScene(var_317_object);
	var_318_bool = 0;
	
Label_611:
	var_322_cvector = CVector(0,0,0); var_323_object = Obj();
	var_323_object = var_0_object;
	func_1129(var_322_cvector, var_323_object);
	var_328_int = -var_322_cvector;
	FindDirLength(var_319_float, var_328_int, var_4_float);
	var_329_bool = var_319_float < var_4_float;
	if(var_329_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_320_cvector);
		GetPFPosition(var_321_cvector);
		WaitForAnimEnd();
		func_695(var_321_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_318_bool = 1;
		var_333_bool = 0;
		func_563(var_321_cvector, var_333_bool);
		var_334_bool = var_333_bool == 0; //@nz
		if(var_334_bool != 0) {
			goto Label_649;
		}
		goto Label_611;
	}
Label_649:
	var_318_bool = var_311_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_992(var_54_object)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_cvector = CVector(0,0,0); var_58_cvector = CVector(0,0,0); var_59_string = ""; var_60_object = Obj(); var_61_bool = 0; var_62_bool = 0; var_63_float = 0; var_64_cvector = CVector(0,0,0); var_65_cvector = CVector(0,0,0); var_66_cvector = CVector(0,0,0); var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0); var_69_string = ""; var_70_object = Obj(); var_71_bool = 0; var_72_bool = 0; var_73_float = 0; var_74_cvector = CVector(0,0,0);
	var_75_bool = var_54_object == 0; //@ne
	if(var_75_bool != 0) {
		var_76_string = "";
		func_1083("fdie");
	} else {
		@@var_54_object:GetPosition(var_65_cvector);
		GetPosition(var_66_cvector);
		GetDirection(var_67_cvector);
		var_68_cvector = var_66_cvector - var_65_cvector;
		var_108_float = GetByIndex(var_68_cvector, 0);
		var_109_float = GetByIndex(var_67_cvector, 0);
		var_110_float = var_108_float * var_109_float;
		var_111_float = GetByIndex(var_68_cvector, 2);
		var_112_float = GetByIndex(var_67_cvector, 2);
		var_113_float = var_111_float * var_112_float;
		var_114_int = var_110_float + var_113_float;
		var_116_bool = var_114_int >= (int)0;
		if(var_116_bool != 0) {
			var_69_string = "fdie";
		} else {
				var_69_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_54_object = var_70_object;
		var_119_bool = IsFuncExist(var_54_object, "GetScriptProperty", (int)2);
		if(var_119_bool != 0) {
			@@var_54_object:HasScriptProperty(var_71_bool, "Owner");
			var_121_bool = var_71_bool;
			if(var_121_bool != 0) {
				@@var_54_object:GetScriptProperty(var_70_object, "Owner");
				var_123_bool = var_70_object == 0; //@ne
				if(var_123_bool != 0) {
					var_54_object = var_70_object;
				}
			}
		}
		var_126_bool = IsFuncExist(var_70_object, "@GetEyesHeight", (int)1);
		if(var_126_bool != 0) {
			@@var_70_object:GetEyesHeight(var_73_float);
			var_74_cvector = CVector(0.0, 0.0, 0.0);
			var_127_float = GetByIndex(var_74_cvector, 1);
			var_73_float = var_127_float;
			SetByIndex(var_74_cvector, 1) = var_127_float;
			LookAsync(var_54_object, "head", var_74_cvector);
			var_72_bool = 1;
		} else {
			var_72_bool = 0;

		}
		var_129_string = "";
		var_69_string = var_129_string;
		func_1461(var_129_string);
		PlayAnimation("all", var_69_string);
		WaitForAnimEnd();
		var_131_bool = var_72_bool;
		if(var_131_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_69_string);
		RemoveEnvelope();
		var_70_object = 0;
	}
	return 20;
	
}


func_1248(var_95_bool, var_96_object)
{
	var_97_bool = 0; var_98_bool = 0;
	@@var_96_object:IsDead(var_98_bool);
	var_98_bool = var_95_bool;
	return 2;
}


func_356(var_0_object, var_1_int, var_340_bool, var_341_float)
{
	var_342_int = 0; var_343_bool = 0; var_344_int = 0; var_345_string = ""; var_346_int = 0; var_347_bool = 0; var_348_int = 0; var_349_string = "";
	func_695(var_349_string);
	irand(var_346_int, var_1_int);
	var_346_int = var_346_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1607();
	var_358_int = "attack_begin" + var_346_int;
	PlayAnimation("all", var_358_int);
	WaitForAnimEnd();
	func_663(var_348_int, var_349_string);
	var_374_bool = 0; var_375_object = Obj();
	var_375_object = var_0_object;
	func_1289(var_374_bool, var_375_object);
	var_376_bool = var_374_bool == 0; //@nz
	if(var_376_bool != 0) {
		StopAsync();
		var_340_bool = 0;
		return 8;
	}
	var_377_float = 0; var_378_int = 0;
	var_341_float = var_377_float;
	var_346_int = var_378_int;
	func_317(var_349_string, var_377_float, var_378_int);
	var_461_int = "attack_middle" + var_346_int;
	HasAnimation(var_347_bool, "all", var_461_int);
	var_462_bool = var_347_bool;
	if(var_462_bool != 0) {
		func_1607();
		var_465_int = "attack_middle" + var_346_int;
		PlayAnimation("all", var_465_int);
		WaitForAnimEnd();
		func_695(var_349_string);
		var_466_bool = 0; var_467_object = Obj();
		var_467_object = var_0_object;
		func_1289(var_466_bool, var_467_object);
		var_468_bool = var_466_bool == 0; //@nz
		if(var_468_bool != 0) {
			StopAsync();
			var_340_bool = 0;
			return 8;
		}
		var_469_float = 0; var_470_int = 0;
		var_341_float = var_469_float;
		var_346_int = var_470_int;
		func_317(var_349_string, var_469_float, var_470_int);
		var_348_int = 1;

	Label_433:
		var_472_int = "attack_middle" + var_346_int;
		var_474_int = var_472_int + "_";
		var_349_string = var_474_int + var_348_int;
		HasAnimation(var_347_bool, "all", var_349_string);
		var_476_bool = var_347_bool == 0; //@nz
		if(var_476_bool != 0) {
		} else {
			func_1607();
			PlayAnimation("all", var_349_string);
			WaitForAnimEnd();
			func_695(var_349_string);
			var_492_bool = 0; var_493_object = Obj();
			var_493_object = var_0_object;
			func_1289(var_492_bool, var_493_object);
			var_494_bool = var_492_bool == 0; //@nz
			if(var_494_bool != 0) {
				StopAsync();
				var_340_bool = 0;
				var_495_float = 0; var_496_int = 0;
				var_341_float = var_495_float;
				var_346_int = var_496_int;
				func_317(var_349_string, var_495_float, var_496_int);
				var_348_int = var_348_int + (int)1;
				goto Label_433;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_480_int = "attack_end" + var_346_int;
	PlayAnimation("all", var_480_int);
	var_481_bool = 0;
	func_709(var_481_bool);
	if(var_481_bool != 0) {
		var_482_bool = 0; var_483_float = 0;
		func_493(var_482_bool, (float)0.75);
		StopAsync();
	}
	var_340_bool = 1;
	return 8;
	
}


func_1253(var_84_bool, var_85_object)
{
	var_86_object = Obj(); var_87_object = Obj(); var_88_object = Obj(); var_89_object = Obj();
	var_90_bool = var_85_object == 0; //@ne
	if(var_90_bool != 0) {
		var_84_bool = 0;
		return 4;
	}
	var_91_bool = 0;
	var_91_bool = 0;
	var_94_bool = IsFuncExist(var_85_object, "IsDead", (int)1);
	if(var_94_bool != 0) {
		var_95_bool = 0; var_96_object = Obj();
		var_85_object = var_96_object;
		func_1248(var_95_bool, var_96_object);
		if(var_95_bool != 0) {
			var_91_bool = 1;
		}
	}
	if(var_91_bool != 0) {
		var_84_bool = 0;
		return 4;
	}
	GetScene(var_88_object);
	var_99_bool = var_88_object == 0; //@ne
	if(var_99_bool != 0) {
		var_84_bool = 0;
		return 4;
	}
	@@var_85_object:GetScene(var_89_object);
	var_100_bool = var_88_object != var_89_object;
	if(var_100_bool != 0) {
		var_84_bool = 0;
		return 4;
	}
	var_84_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1508(var_41_cvector, var_42_cvector)
{
	var_49_float = 0; var_50_float = 0;
	var_51_int = var_42_cvector | var_42_cvector;
	var_50_float = sqrt(var_51_int);
	var_52_float = 9.999999974752427e-07;
	var_53_bool = var_50_float < var_52_float;
	if(var_53_bool != 0) {
		var_41_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_41_cvector = var_42_cvector / var_50_float;
	return 2;
}


func_1129(var_322_cvector, var_323_object)
{
	var_324_cvector = CVector(0,0,0); var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0); var_327_cvector = CVector(0,0,0);
	GetPosition(var_326_cvector);
	@@var_323_object:GetPosition(var_327_cvector);
	var_322_cvector = var_327_cvector - var_326_cvector;
	return 4;
}


func_493(var_482_bool, var_483_float)
{
	var_484_float = 0; var_485_bool = 0; var_486_float = 0; var_487_bool = 0;
	rand(var_486_float);
	var_488_bool = var_486_float < var_483_float;
	if(var_488_bool != 0) {

	Label_498:
		IsAnimationPlaying(var_487_bool);
		var_489_bool = var_487_bool == 0; //@nz
		if(var_489_bool != 0) {
		} else {
			var_490_bool = 0;
			func_591(var_490_bool);
			if(var_490_bool != 0) {
				var_482_bool = 1;
				sync();
				goto Label_498;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_695(var_487_bool);
	}
	goto Label_518;
	
Label_518:
	var_482_bool = 0;
	return 4;
	
}


func_1518(var_429_float, var_430_float, var_431_float)
{
	var_434_bool = var_430_float < var_431_float;
	if(var_434_bool != 0) {
		var_430_float = var_429_float;
	} else {
		var_431_float = var_429_float;
	}
	return 0;
	
}


func_1136(var_146_bool, var_147_object)
{
	var_148_bool = 0; var_149_bool = 0;
	IsPlayerActor(var_147_object, var_149_bool);
	var_149_bool = var_146_bool;
	return 2;
}


func_1141(var_102_bool, var_103_object, var_104_string)
{
	var_105_bool = 0; var_106_bool = 0;
	var_109_bool = IsFuncExist(var_103_object, "HasProperty", (int)2);
	var_110_bool = var_109_bool == 0; //@nz
	if(var_110_bool != 0) {
		var_102_bool = 0;
		return 2;
	}
	@@var_103_object:HasProperty(var_104_string, var_106_bool);
	var_106_bool = var_102_bool;
	return 2;
}


func_1525(var_439_float, var_440_float, var_441_float, var_442_float)
{
	var_443_bool = var_440_float < var_441_float;
	if(var_443_bool != 0) {
		var_441_float = var_439_float;
		return 0;
	}
	var_444_bool = var_440_float > var_442_float;
	if(var_444_bool != 0) {
		var_442_float = var_439_float;
		return 0;
	}
	var_440_float = var_439_float;
	return 0;
}


