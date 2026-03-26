// @IMPORTS: SensePlayerOnly/1,IsPlayerActor/2,GetEyesHeight/1,PlayGlobalSound/2,rand/2,Sleep/2,RemoveActor/1,FindActor/2,SetTimer/2,KillTimer/1,UnlookAsync/1,WaitForAnimEnd/0,irand/2,PlayAnimation/2,WaitForAnimEnd/1,ResetAAS/0,StopAnimation/0,StopGroup0/0,Hold/0,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,CanSee/2,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,Is3DSoundLoaded/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1
// @STRINGS: W:trigger|W:growl|W:cleanup|W:player|W:head|W:all|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:idle|W:quest_d1_03|W:butcher_death
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=int,int,bool,bool,object,bool,bool params=0
// @EVENT_17: op=0x9 vars=object
// @EVENT_26: op=0x14 vars=string
// @EVENT_6: op=0x59 vars=
// @EVENT_7: op=0x9a vars=int
// @TASK_1: vars=object,int,int,bool,float,int params=0
// @EVENT_6: op=0x127 vars=
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_6: op=0x3c5 vars=
// @EVENT_7: op=0x3fe vars=int
// @EVENT_1: op=0x419 vars=object
// @EVENT_2: op=0x428 vars=object
// @EVENT_10: op=0x4ae vars=object
// @EVENT_41: op=0x4b9 vars=object
// @TASK_3: vars= params=1
// @EVENT_6: op=0x4cd vars=
// @EVENT_22: op=0x553 vars=object,int,float,float
// @EVENT_16: op=0x555 vars=object,string
// @EVENT_41: op=0x557 vars=object
// @STANDALONE_EVENT_22: op=0x74b vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x753 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x75d vars=object,string
// @STANDALONE_EVENT_41: op=0x76a vars=object
// @PE: 0x51,0x70,0x9a,0xb1,0x121,0x124,0x3bd,0x3fe,0x419,0x428,0x49c,0x4ae,0x4b9,0x4c2,0x4d5,0x539,0x553,0x555,0x557,0x559,0x6e3,0x6ea,0x73e,0x74b,0x753,0x76a

task_0_event_17(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_bool = 0; var_18_bool = 0;
	IsPlayerActor(var_16_bool, var_18_bool);
	var_19_bool = var_18_bool;
	if(var_19_bool != 0) {
		TaskCall(1);
		func_277();
		TaskReturn();
	}
	return 2;
}


task_0_event_26(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_string, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_17_float = 0; var_18_cvector = CVector(0,0,0); var_19_float = 0; var_20_cvector = CVector(0,0,0);
	var_22_bool = var_16_bool == "trigger";
	if(var_22_bool != 0) {
		GetEyesHeight(var_19_float);
		var_23_float = GetByIndex(var_20_cvector, 1);
		var_23_float = var_23_float + var_19_float;
		SetByIndex(var_20_cvector, 1) = var_23_float;
		PlayGlobalSound("growl", var_20_cvector);
		TaskCall(1);
		func_277();
		TaskReturn();
	} else {
		var_529_string = "";
		var_16_bool = var_529_string;
		func_81(var_529_string);
	}
	return 4;
	
}


task_0_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_bool = var_6_bool;
	if(var_16_bool != 0) {
		func_177(var_14_object, var_15_bool);
	}
	var_20_bool = 0;
	var_20_bool = 0;
	var_21_bool = var_5_bool;
	if(var_21_bool != 0) {
		var_22_bool = 0;
		func_110(var_22_bool);
		if(var_22_bool != 0) {
			var_20_bool = 1;
		}
	}
	if(var_20_bool != 0) {
		var_23_object = Obj();
		func_1747(var_23_object);
		RemoveActor(var_23_object);
	}
	return 0;
}


task_0_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_int, var_8_object, var_9_int, var_10_int, var_11_bool, var_12_float, var_13_int, var_14_bool, var_15_object, var_16_bool)
{
	var_18_bool = var_16_bool == (int)10;
	if(var_18_bool != 0) {
		var_19_bool = 0;
		func_139(var_14_bool, var_15_object, var_16_bool, var_19_bool);
		if(var_19_bool != 0) {
			var_32_bool = var_2_bool == 0; //@nz
			if(var_32_bool != 0) {
				var_33_object = Obj();
				var_33_object = var_4_object;
				func_1695(var_33_object);
				var_2_bool = true;
			}
		} else {
			var_40_bool = var_2_bool;
			if(var_40_bool == 0) goto Label_176;
			UnlookAsync("head");
			var_2_bool = false;
		}
	}
Label_176:
	return 0;
	
}


task_1_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_object = Obj();
	func_1747(var_16_object);
	RemoveActor(var_16_object);
	Hold();
	return 0;
}


task_2_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_object = Obj();
	func_1747(var_16_object);
	RemoveActor(var_16_object);
	Hold();
	return 0;
}


task_2_event_7(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_int)
{
	var_18_bool = var_16_int == (int)1;
	if(var_18_bool != 0) {
		var_19_object = Obj();
		var_19_object = var_1_int;
		func_1810(var_19_object);
	} else {
		var_24_int = 0;
		var_16_int = var_24_int;
		func_1180(var_15_bool, var_16_int, var_24_int);
	}
	return 0;
	
}


task_2_event_1(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_int == var_16_object;
	if(var_18_bool != 0) {
		var_19_bool = var_2_bool == 0; //@nz
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_bool = true;
		var_20_object = Obj();
		var_16_object = var_20_object;
		func_1695(var_20_object);
	}
	return 0;
}


task_2_event_2(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_bool = 0;
	var_17_bool = 0;
	var_18_bool = var_1_int == var_16_object;
	if(var_18_bool != 0) {
		var_19_bool = var_2_bool;
		if(var_19_bool != 0) {
			var_17_bool = 1;
		}
	}
	if(var_17_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	return 0;
}


task_2_event_10(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	RequestClearPath(var_16_object);
	return 0;
}


task_2_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	func_1036(var_16_object);
	var_16_object = Obj();
	func_1898();
	return 0;
}


task_3_event_6(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	var_16_object = Obj();
	func_1747(var_16_object);
	RemoveActor(var_16_object);
	Hold();
	return 0;
}


task_3_event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	return 0;
}


task_3_event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	return 0;
}


task_3_event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	return 0;
}


event_22(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float)
{
	var_20_object = Obj(); var_21_int = 0; var_22_float = 0;
	var_16_object = var_20_object;
	var_17_int = var_21_int;
	var_18_float = var_22_float;
	func_1597(var_20_object, var_21_int, var_22_float);
	return 0;
}


event_43(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_int, var_18_float, var_19_float, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_int = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0);
	var_16_object = var_22_object;
	var_17_int = var_23_int;
	var_18_float = var_24_float;
	var_20_cvector = var_25_cvector;
	var_21_cvector = var_26_cvector;
	func_1665(var_24_float, var_25_cvector, var_26_cvector);
	return 0;
}


event_16(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object, var_17_string)
{
	var_18_float = 0; var_19_float = 0;
	var_21_bool = var_17_string == "health";
	if(var_21_bool != 0) {
		GetProperty("health", var_19_float);
		var_24_bool = var_19_float <= (int)0;
		if(var_24_bool != 0) {
			SignalDeath(var_16_object);
		}
	}
	return 2;
}


event_41(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool, var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_1854(var_17_object);
	return 0;
}


main(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_5_bool, var_6_bool, var_7_object, var_8_int, var_9_int, var_10_bool, var_11_float, var_12_int, var_13_bool, var_14_object, var_15_bool)
{
	SensePlayerOnly((bool)1);
	var_17_float = 0; var_18_float = 0;
	func_43(var_15_bool, (float)300, (float)100);
	return 0;
}


func_1665(var_22_object, var_25_cvector, var_26_cvector)
{
	var_27_object = Obj(); var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj();
	GetScene(var_29_object);
	AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	var_33_object = Obj();
	var_22_object = var_33_object;
	func_1553(var_33_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_770(var_0_int, var_294_bool, var_295_float)
{
	var_296_bool = 0; var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_cvector = CVector(0,0,0); var_300_float = 0; var_301_bool = 0; var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_cvector = CVector(0,0,0); var_305_float = 0;
	
Label_771:
	IsAnimationPlaying(var_301_bool);
	var_306_bool = var_301_bool == 0; //@nz
	if(var_306_bool != 0) {
	} else {
		var_307_bool = 0;
		func_841(var_307_bool);
		if(var_307_bool != 0) {
			var_294_bool = 1;
			return 10;
		}
		var_350_bool = 0; var_351_object = Obj();
		var_351_object = var_0_int;
		func_1529(var_350_bool, var_351_object);
		var_352_bool = var_350_bool == 0; //@nz
		if(var_352_bool != 0) {
			var_294_bool = 0;
			return 10;
		}
		@@@var_0_int:GetPFPosition(var_302_cvector);
		GetPFPosition(var_303_cvector);
		var_304_cvector = var_302_cvector - var_303_cvector;
		var_305_float = var_304_cvector | var_304_cvector;
		var_353_float = var_295_float * var_295_float;
		var_354_bool = var_305_float < var_353_float;
		if(var_354_bool != 0) {
			var_355_bool = 0; var_356_float = 0;
			var_295_float = var_356_float;
			func_606(var_304_cvector, var_305_float, var_355_bool, var_356_float);
			var_294_bool = 1;
			sync();
			goto Label_771;
		}
		return 10;
	}
	func_945(var_305_float);
	var_294_bool = 0;
	return 10;
	
}


func_902(var_0_int, var_257_bool)
{
	var_258_bool = 0; var_259_bool = 0;
	var_262_bool = IsFuncExist(var_0_int, "IsAttacking", (int)1);
	if(var_262_bool != 0) {
		@@@var_0_int:IsAttacking(var_259_bool);
		var_259_bool = var_257_bool;
		return 2;
	}
	var_257_bool = 0;
	return 2;
}


func_1798(var_18_bool, var_19_string, var_20_string)
{
	var_21_object = Obj(); var_22_object = Obj();
	FindActor(var_22_object, var_19_string);
	var_23_bool = var_22_object == 0; //@ne
	if(var_23_bool != 0) {
		var_18_bool = 0;
		return 2;
	}
	Trigger(var_22_object, var_20_string);
	var_18_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1415(var_406_float, var_407_object, var_408_float, var_409_int)
{
	var_413_int = 0; var_414_string = ""; var_415_int = 0; var_416_float = 0; var_417_float = 0; var_418_float = 0; var_419_int = 0; var_420_string = ""; var_421_int = 0; var_422_float = 0; var_423_float = 0; var_424_float = 0;
	var_425_bool = 0; var_426_object = Obj(); var_427_string = "";
	var_407_object = var_426_object;
	func_1403(var_425_bool, var_426_object, "health");
	var_428_bool = var_425_bool == 0; //@nz
	if(var_428_bool != 0) {
		var_406_float = 0.0;
		return 12;
	}
	var_429_bool = 0; var_430_object = Obj(); var_431_string = "";
	var_407_object = var_430_object;
	func_1403(var_429_bool, var_430_object, "armor");
	var_432_bool = var_429_bool == 0; //@nz
	if(var_432_bool != 0) {
		var_419_int = 0;
	} else {
			@@var_407_object:GetProperty("armor", var_419_int);
	}
	var_434_string = ""; var_435_int = 0;
	var_409_int = var_435_int;
	func_1369(var_434_string, var_435_int);
	var_420_string = "armor_" + var_434_string;
	var_440_bool = 0; var_441_object = Obj(); var_442_string = "";
	var_407_object = var_441_object;
	var_420_string = var_442_string;
	func_1403(var_440_bool, var_441_object, var_442_string);
	var_443_bool = var_440_bool == 0; //@nz
	if(var_443_bool != 0) {
		var_421_int = 0;
	} else {
		@@var_407_object:GetProperty(var_420_string, var_421_int);

	}
	var_444_float = 0; var_445_float = 0; var_446_float = 0;
	var_447_int = var_419_int + var_421_int;
	var_445_float = var_447_int / (float)100.0;
	func_1763(var_444_float, var_445_float, (float)1);
	var_444_float = var_422_float;
	@@var_407_object:GetProperty("health", var_423_float);
	var_452_int = (int)1 - var_422_float;
	var_424_float = var_408_float * var_452_int;
	var_454_float = 0; var_455_float = 0; var_456_float = 0; var_457_float = 0;
	var_455_float = var_423_float - var_424_float;
	func_1770(var_454_float, var_455_float, (float)0, (float)1);
	@@var_407_object:SetProperty("health", var_454_float);
	var_460_bool = 0; var_461_object = Obj();
	var_407_object = var_461_object;
	func_1398(var_460_bool, var_461_object);
	if(var_460_bool != 0) {
		var_462_float = 0;
		var_462_float = -var_424_float;
		func_1781(var_462_float);
	}
	var_424_float = var_406_float;
	return 12;
	
}


func_139(var_0_int, var_1_int, var_4_object, var_19_bool)
{
	var_20_float = 0; var_21_float = 0;
	var_22_bool = var_4_object == 0; //@ne
	if(var_22_bool != 0) {
		var_19_bool = 0;
		return 2;
	}
	var_23_float = 0; var_24_object = Obj();
	var_24_object = var_4_object;
	func_1390(var_23_float, var_24_object);
	var_21_float = sqrt(var_23_float);
	var_31_bool = var_2_bool;
	if(var_31_bool != 0) {
		var_21_float = var_21_float - var_1_int;
	}
	var_19_bool = var_21_float < var_0_int;
	return 2;
}


func_1036(var_2_bool)
{
	KillTimer((int)1);
	var_18_bool = var_2_bool;
	if(var_18_bool != 0) {
		var_2_bool = false;
		UnlookAsync("head");
	}
	func_1202(var_16_object);
	return 0;
}


func_270(var_76_bool)
{
	var_76_bool = 1;
	return 0;
}


func_1679(var_240_object)
{
	var_241_cvector = CVector(0,0,0); var_242_cvector = CVector(0,0,0); var_243_cvector = CVector(0,0,0); var_244_cvector = CVector(0,0,0); var_245_cvector = CVector(0,0,0); var_246_cvector = CVector(0,0,0);
	@@var_240_object:GetPosition(var_244_cvector);
	GetPosition(var_245_cvector);
	var_246_cvector = var_244_cvector - var_245_cvector;
	var_247_float = GetByIndex(var_246_cvector, 0);
	var_248_float = GetByIndex(var_246_cvector, 2);
	RotateAsync(var_247_float, var_248_float);
	return 6;
}


func_272()
{
	StopAnimation();
	StopGroup0();
	return 0;
}


func_913(var_2_bool, var_5_bool)
{
	var_374_float = 0; var_375_int = 0; var_376_float = 0; var_377_int = 0;
	var_378_bool = var_2_bool == 0; //@nz
	if(var_378_bool != 0) {
		return 4;
	}
	var_379_bool = var_5_bool;
	if(var_379_bool != 0) {
		var_5_bool = var_5_bool + (int)-1;
		var_382_bool = var_5_bool > (int)0;
		if(var_382_bool != 0) {
			return 4;
		}
	}
	rand(var_376_float);
	var_383_float = 0;
	func_963(var_383_float);
	var_384_bool = var_376_float < var_383_float;
	if(var_384_bool != 0) {
		irand(var_377_int, var_2_bool);
		var_377_int = var_377_int + (int)1;
		var_387_int = "attack" + var_377_int;
		Speak(var_387_int);
		var_388_int = 0;
		func_961(var_388_int);
		var_5_bool = var_388_int;
	}
	return 4;
}


func_1810(var_19_object)
{
	var_20_bool = 0; var_21_bool = 0;
	IsPlayerActor(var_19_object, var_21_bool);
	var_22_bool = var_21_bool;
	if(var_22_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1553(var_33_object)
{
	var_34_bool = 0; var_35_int = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_bool = 0; var_42_int = 0; var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0); var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_string = "";
	var_48_bool = var_33_object == 0; //@ne
	if(var_48_bool != 0) {
		return 14;
	}
	IsDead(var_41_bool);
	var_49_bool = var_41_bool;
	if(var_49_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_42_int);
	var_51_bool = var_42_int < (int)0;
	if(var_51_bool != 0) {
		return 14;
	}
	@@var_33_object:GetPosition(var_43_cvector);
	GetPosition(var_44_cvector);
	GetDirection(var_45_cvector);
	var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_54_float = var_52_float * var_53_float;
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	var_57_float = var_55_float * var_56_float;
	var_58_int = var_54_float + var_57_float;
	var_60_bool = var_58_int >= (int)0;
	if(var_60_bool != 0) {
		var_47_string = "fhit";
	} else {
		var_47_string = "bhit";
	}
	var_63_int = var_47_string + "1";
	var_65_int = var_47_string + "2";
	FadeSecondaryAnimation("hit_react", var_63_int, var_65_int, (int)-10);
	return 14;
	
}


func_532(var_1_int, var_2_bool, var_4_object)
{
	var_59_bool = 0; var_60_bool = 0; var_61_cvector = CVector(0,0,0); var_62_bool = 0; var_63_bool = 0; var_64_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_534:
	var_68_int = var_1_int + (int)1;
	var_69_int = "attack_begin" + var_68_int;
	HasAnimation(var_62_bool, "all", var_69_int);
	var_70_bool = var_62_bool == 0; //@nz
	if(var_70_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_534;
	}
	var_2_bool = 0;
	
Label_548:
	var_73_int = var_2_bool + (int)1;
	var_74_int = "attack" + var_73_int;
	IsExisting3DSound(var_63_bool, var_74_int);
	var_75_bool = var_63_bool == 0; //@nz
	if(var_75_bool != 0) {
	} else {
		var_2_bool = var_2_bool + (int)1;
		goto Label_548;

	}
	GetAnimationOffset(var_64_cvector, "all", "bjump");
	var_78_float = GetByIndex(var_64_cvector, 2);
	var_4_object = -var_78_float;
	return 6;
	
}


func_277()
{
	var_31_object = Obj(); var_32_object = Obj();
	FindActor(var_32_object, "player");
	var_34_object = Obj(); var_35_bool = 0; var_36_float = 0;
	var_32_object = var_34_object;
	func_303(var_28_bool, var_29_float, var_30_int, var_31_object, var_32_object, var_34_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1690(var_28_bool)
{
	var_29_bool = 0; var_30_bool = 0;
	IsLoaded(var_30_bool);
	var_30_bool = var_28_bool;
	return 2;
}


func_1819()
{
	var_367_object = Obj(); var_368_object = Obj();
	GetScene(var_368_object);
	var_370_object = Obj();
	func_1747(var_370_object);
	BroadcastMessage("battle", var_370_object, var_368_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1180(var_0_int, var_1_int, var_24_int)
{
	var_26_bool = var_24_int != (int)0;
	if(var_26_bool != 0) {
		return 0;
	}
	var_27_bool = 0; var_28_object = Obj();
	var_28_object = var_1_int;
	func_1218(var_27_bool, var_28_object);
	var_63_bool = var_27_bool == 0; //@nz
	if(var_63_bool != 0) {
		var_0_int = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1695(var_20_object)
{
	var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_float = 0; var_24_cvector = CVector(0,0,0);
	@@var_20_object:GetEyesHeight(var_23_float);
	var_24_cvector = CVector(0.0, 0.0, 0.0);
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	LookAsync(var_20_object, "head", var_24_cvector);
	return 4;
}


func_289(var_403_float)
{
	var_403_float = 0.10000000149011612;
	return 0;
}


func_292(var_410_int)
{
	var_410_int = 0;
	return 0;
}


func_1830(var_57_string, var_58_int)
{
	var_59_string = ""; var_60_string = "";
	var_61_int = var_58_int;
	if(var_61_int != 0) {
		"idle" = "idle" + var_58_int;
	}
	var_60_string = var_57_string;
	return 2;
}


func_1706(var_48_string)
{
	var_49_bool = 0; var_50_int = 0; var_51_bool = 0; var_52_int = 0; var_53_bool = 0; var_54_float = 0; var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_int = 0; var_59_bool = 0; var_60_int = 0; var_61_bool = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
	IsExisting3DSound(var_57_bool, var_48_string);
	var_65_bool = var_57_bool == 0; //@nz
	if(var_65_bool != 0) {
		var_58_int = 0;

	Label_1712:
		var_67_int = var_58_int + (int)1;
		var_68_int = var_48_string + var_67_int;
		IsExisting3DSound(var_59_bool, var_68_int);
		var_69_bool = var_59_bool == 0; //@nz
		if(var_69_bool != 0) {
		} else {
			var_58_int = var_58_int + (int)1;
			goto Label_1712;
		}
		var_70_bool = var_58_int == 0; //@nz
		if(var_70_bool != 0) {
			return 16;
		}
		irand(var_60_int, var_58_int);
		var_72_int = var_60_int + (int)1;
		var_48_string = var_48_string + var_72_int;
	}
	Is3DSoundLoaded(var_61_bool, var_48_string);
	var_73_bool = var_61_bool;
	if(var_73_bool != 0) {
		GetEyesHeight(var_62_float);
		GetDirection(var_63_cvector);
		var_64_cvector = var_63_cvector * (int)50;
		var_75_float = GetByIndex(var_64_cvector, 1);
		var_75_float = var_75_float + var_62_float;
		SetByIndex(var_64_cvector, 1) = var_75_float;
		PlayGlobalSound(var_48_string, var_64_cvector);
	}
	return 16;
	
}


func_43(var_6_bool, var_17_float, var_18_float)
{
	var_19_float = 0; var_20_bool = 0; var_21_float = 0; var_22_bool = 0;
	var_6_bool = false;
	
Label_45:
	rand(var_21_float, (int)3);
	var_25_int = var_21_float + (int)3;
	Sleep(var_25_int, var_22_bool);
	var_6_bool = true;
	var_26_float = 0; var_27_float = 0;
	var_17_float = var_26_float;
	var_18_float = var_27_float;
	func_112(var_18_float, var_19_float, var_20_bool, var_21_float, var_22_bool, var_26_float, var_27_float);
	var_6_bool = false;
	goto Label_45;
}
EMIT "Return(); Pop(4)";


func_1837(var_51_int)
{
	var_52_int = 0; var_53_bool = 0; var_54_int = 0; var_55_bool = 0;
	var_54_int = 0;
	
Label_1839:
	var_57_string = ""; var_58_int = 0;
	var_54_int = var_58_int;
	func_1830(var_57_string, var_58_int);
	HasAnimation(var_55_bool, "all", var_57_string);
	var_62_bool = var_55_bool == 0; //@nz
	if(var_62_bool != 0) {
	} else {
		var_54_int = var_54_int + (int)1;
		goto Label_1839;
	}
	var_54_int = var_51_int;
	return 4;
	
}


func_813(var_0_int, var_309_bool)
{
	var_310_cvector = CVector(0,0,0); var_311_cvector = CVector(0,0,0); var_312_cvector = CVector(0,0,0); var_313_float = 0; var_314_float = 0; var_315_cvector = CVector(0,0,0); var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_float = 0; var_319_float = 0;
	var_320_bool = 0; var_321_object = Obj();
	var_321_object = var_0_int;
	func_1529(var_320_bool, var_321_object);
	var_322_bool = var_320_bool == 0; //@nz
	if(var_322_bool != 0) {
		var_309_bool = 0;
		return 10;
	}
	var_323_bool = 0;
	func_902(var_319_float, var_323_bool);
	if(var_323_bool != 0) {
		@@@var_0_int:GetPFPosition(var_315_cvector);
		GetPFPosition(var_316_cvector);
		var_317_cvector = var_315_cvector - var_316_cvector;
		var_318_float = var_317_cvector | var_317_cvector;
		@@@var_0_int:GetAttackDistance(var_319_float);
		var_319_float = var_319_float + (int)50;
		var_325_float = var_319_float * var_319_float;
		var_309_bool = var_318_float <= var_325_float;
		return 10;
	}
	var_309_bool = 0;
	return 10;
}


func_303(var_0_int, var_3_bool, var_5_bool, var_34_object, var_35_bool, var_36_float, var_143_bool, var_235_bool)
{
	var_37_float = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_bool = 0; var_41_bool = 0; var_42_float = 0; var_43_cvector = CVector(0,0,0); var_44_float = 0; var_45_cvector = CVector(0,0,0); var_46_bool = 0; var_47_float = 0; var_48_float = 0; var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0); var_51_bool = 0; var_52_bool = 0; var_53_float = 0; var_54_cvector = CVector(0,0,0); var_55_float = 0; var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_float = 0;
	func_532(var_56_cvector, var_57_bool, var_58_float);
	var_5_bool = 0;
	var_83_bool = IsFuncExist(var_34_object, "@GetAttackDistance", (int)1);
	if(var_83_bool != 0) {
		@@var_34_object:GetAttackDistance(var_48_float);
		var_48_float = var_48_float + (int)50;
	} else {
							var_36_float = var_48_float;
	}
	var_86_bool = var_48_float >= (int)150;
	if(var_86_bool != 0) {
		var_48_float = 150;
	}
	var_3_bool = false;
	var_0_int = var_34_object;
	IsPlayerActor(var_0_int, var_51_bool);
	var_87_bool = var_51_bool;
	if(var_87_bool != 0) {
		PlayGlobalMusic("attack");
		var_89_object = Obj();
		func_1747(var_89_object);
		SendPlayerEnemy(var_34_object, var_89_object);
	}
	var_92_bool = var_35_bool;
	if(var_92_bool != 0) {
		var_52_bool = 0;
	} else {
						var_52_bool = 1;

	}
	var_53_float = (float)400.0 + var_48_float;
	
Label_343:
	var_94_bool = 0;
	var_94_bool = 0;
	var_95_bool = 0; var_96_object = Obj();
	var_96_object = var_0_int;
	func_1529(var_95_bool, var_96_object);
	if(var_95_bool != 0) {
		var_129_bool = var_3_bool == 0; //@nz
		if(var_129_bool != 0) {
			var_94_bool = 1;
		}
	}
	if(var_94_bool != 0) {
		func_945(var_58_float);
		@@@var_0_int:GetPFPosition(var_49_cvector);
		GetPFPosition(var_50_cvector);
		var_54_cvector = var_49_cvector - var_50_cvector;
		var_55_float = var_54_cvector | var_54_cvector;
		var_135_float = var_53_float * var_53_float;
		var_136_bool = var_55_float >= var_135_float;
		if(var_136_bool != 0) {
			var_137_bool = 0; var_138_object = Obj(); var_139_float = 0; var_140_float = 0; var_141_bool = 0; var_142_bool = 0;
			var_138_object = var_0_int;
			var_48_float = var_139_float;
			TaskCall(2);
			func_973(var_145_bool, var_137_bool, var_138_object, var_139_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_220_bool = var_143_bool == 0; //@nz
			if(var_220_bool != 0) {
			} else {
				var_52_bool = 0;
		} else {
				var_226_float = var_36_float * var_36_float;
				var_227_bool = var_55_float >= var_226_float;
				if(var_227_bool != 0) {
					@@@var_0_int:GetPFPosition(var_56_cvector);
					CanReachByPF(var_57_bool, var_56_cvector);
					var_228_bool = var_57_bool == 0; //@nz
					if(var_228_bool != 0) {
						var_229_bool = 0; var_230_object = Obj(); var_231_float = 0; var_232_float = 0; var_233_bool = 0; var_234_bool = 0;
						var_230_object = var_0_int;
						var_48_float = var_231_float;
						TaskCall(2);
						func_973(var_237_bool, var_229_bool, var_230_object, var_231_float, (float)3000.0, (bool)1, (bool)0);
						TaskReturn();
						var_238_bool = var_235_bool == 0; //@nz
						if(var_238_bool != 0) {
							goto Label_515;
						}
						var_52_bool = 0;
						goto Label_343;
					}
					var_239_bool = var_52_bool == 0; //@nz
					if(var_239_bool != 0) {
						var_240_object = Obj();
						var_240_object = var_0_int;
						func_1679(var_240_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_945(var_58_float);
						StopAsync();
						var_52_bool = 1;
						var_251_bool = 0; var_252_object = Obj();
						var_252_object = var_0_int;
						func_1529(var_251_bool, var_252_object);
						var_253_bool = var_251_bool == 0; //@nz
						if(var_253_bool != 0) {
							goto Label_515;
						}
					}
					rand(var_58_float);
					var_254_bool = 0;
					var_256_bool = var_58_float < (float)0.25;
					if(var_256_bool != 1) {
						var_257_bool = 0;
						func_902((bool)1, var_257_bool);
						if(var_257_bool != 1) {
							var_254_bool = 0;
						}
					}
					if(var_254_bool != 0) {
						Face(var_0_int);
						func_952();
						PlayAnimation("all", "attack_stay");
						var_294_bool = 0; var_295_float = 0;
						var_36_float = var_295_float;
						func_770(var_58_float, var_294_bool, var_295_float);
						StopAsync();
					} else {
						Face(var_0_int);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_945(var_58_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_516_bool = 0;
						func_902(var_58_float, var_516_bool);
						var_517_bool = var_516_bool == 0; //@nz
						if(var_517_bool == 0) goto Label_505;
						var_518_bool = 0; var_519_object = Obj();
						var_519_object = var_0_int;
						func_1529(var_518_bool, var_519_object);
						var_520_bool = var_518_bool == 0; //@nz
						if(var_520_bool != 0) {
							goto Label_515;
						}
						@@@var_0_int:GetPFPosition(var_49_cvector);
						GetPFPosition(var_50_cvector);
						var_54_cvector = var_49_cvector - var_50_cvector;
						var_55_float = var_54_cvector | var_54_cvector;
						var_521_float = var_36_float * var_36_float;
						var_522_bool = var_55_float < var_521_float;
						if(var_522_bool == 0) goto Label_505;
						var_523_bool = 0; var_524_float = 0;
						var_36_float = var_524_float;
						func_606(var_57_bool, var_58_float, var_523_bool, var_524_float);
						var_525_bool = var_523_bool == 0; //@nz
						if(var_525_bool == 0) goto Label_505;
						goto Label_515;
				}
					var_526_bool = 0; var_527_float = 0;
					var_36_float = var_527_float;
					func_606(var_57_bool, var_58_float, var_526_bool, var_527_float);
					var_528_bool = var_526_bool == 0; //@nz
					if(var_528_bool != 0) {
						goto Label_515;
					}
					var_52_bool = 1;

				}
			Label_505:
				goto Label_514;
		}
		Label_514:
			goto Label_343;

		}
	}
Label_515:
	WaitForAnimEnd();
	var_221_bool = var_3_bool;
	if(var_221_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_224_bool = var_51_bool;
	if(var_224_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_177(var_2_bool, var_3_bool)
{
	func_272();
	KillTimer((int)10);
	var_18_bool = var_2_bool;
	if(var_18_bool != 0) {
		UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
	return 0;
}


func_945(var_0_int)
{
	var_130_object = Obj();
	var_130_object = var_0_int;
	func_1810(var_130_object);
	return 0;
}


func_1202(var_0_int)
{
	var_0_int = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_950(var_471_int)
{
	var_471_int = 0;
	return 0;
}


func_567(var_0_int, var_392_float, var_393_int)
{
	var_394_object = Obj(); var_395_float = 0; var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_float = 0;
	var_401_float = var_392_float * (float)0.8999999761581421;
	GetVictim(var_401_float, var_397_object);
	ReportAttack(var_0_int);
	var_402_bool = var_397_object == var_0_int;
	if(var_402_bool != 0) {
		var_403_float = 0; var_404_object = Obj(); var_405_int = 0;
		var_397_object = var_404_object;
		var_393_int = var_405_int;
		func_289(var_405_int);
		var_403_float = var_398_float;
		var_406_float = 0; var_407_object = Obj(); var_408_float = 0; var_409_int = 0;
		var_397_object = var_407_object;
		var_398_float = var_408_float;
		var_410_int = 0; var_411_object = Obj(); var_412_int = 0;
		var_397_object = var_411_object;
		var_393_int = var_412_int;
		func_292(var_412_int);
		var_410_int = var_409_int;
		func_1415(var_406_float, var_407_object, var_408_float, var_409_int);
		var_406_float = var_399_float;
		var_471_int = 0;
		func_950(var_471_int);
		ReportHit(var_0_int, var_471_int, var_399_float, var_398_float);
		var_472_object = Obj(); var_473_float = 0;
		var_397_object = var_472_object;
		var_399_float = var_473_float;
		func_957();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_952()
{
	var_263_string = "";
	func_1706("attack_stay");
	return 0;
}


func_1078(var_0_int, var_1_int, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool)
{
	var_172_bool = 0; var_173_bool = 0; var_174_object = Obj(); var_175_cvector = CVector(0,0,0); var_176_cvector = CVector(0,0,0); var_177_cvector = CVector(0,0,0); var_178_float = 0; var_179_object = Obj(); var_180_bool = 0; var_181_bool = 0; var_182_object = Obj(); var_183_cvector = CVector(0,0,0); var_184_cvector = CVector(0,0,0); var_185_cvector = CVector(0,0,0); var_186_float = 0; var_187_object = Obj();
	var_0_int = false;
	var_1_int = var_167_object;
	var_171_bool = var_181_bool;
	
Label_1082:
	var_188_bool = 0; var_189_object = Obj();
	var_167_object = var_189_object;
	func_1218(var_188_bool, var_189_object);
	var_192_bool = var_188_bool == 0; //@nz
	if(var_192_bool != 0) {
		var_166_bool = 0;
		return 16;
	}
	@@var_167_object:GetPosition(var_183_cvector);
	GetPosition(var_184_cvector);
	var_185_cvector = var_183_cvector - var_184_cvector;
	var_186_float = var_185_cvector | var_185_cvector;
	var_193_bool = 0;
	var_193_bool = 0;
	var_195_bool = var_169_float > (int)0;
	if(var_195_bool != 0) {
		var_196_float = var_169_float * var_169_float;
		var_197_bool = var_186_float > var_196_float;
		if(var_197_bool != 0) {
			var_193_bool = 1;
		}
	}
	if(var_193_bool != 0) {
		Stop();
		var_166_bool = 0;
		return 16;
	}
	var_198_float = var_168_float * var_168_float;
	var_199_bool = var_186_float > var_198_float;
	if(var_199_bool != 0) {
		@@var_167_object:GetPFPosition(var_183_cvector);
		FindPathTo(var_187_object, var_183_cvector);
		var_200_bool = var_187_object != 0; //@nn
		if(var_200_bool != 0) {
			var_187_object = var_182_object;
			var_187_object = 0;
		}
		var_201_bool = var_182_object != 0; //@nn
		if(var_201_bool != 0) {
			var_202_bool = var_181_bool;
			if(var_202_bool == 0) goto Label_1131;
			var_181_bool = 0;
			RotatePath(var_182_object, var_180_bool);
			var_203_bool = var_180_bool == 0; //@nz
			if(var_203_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_206_string = "";
				func_1225(var_206_string);
				var_207_string = "";
				func_1227(var_207_string);
				FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string);
				var_208_bool = var_180_bool == 0; //@nz
				if(var_208_bool != 0) {
					var_209_int = var_0_int;
					if(var_209_int != 0) {
						var_182_object = 0;
						goto Label_1178;
					EMIT "GOTO 0x47f";
					}
				} else {
					var_182_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_180_bool);
					var_212_bool = var_180_bool == 0; //@nz
					if(var_212_bool != 0) {
						var_213_int = var_0_int;
						if(var_213_int != 0) {
							var_182_object = 0;
							goto Label_1178;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1178;
	}
			var_187_object = 0;
			goto Label_1176;

		Label_1176:
			var_182_object = 0;

		}
		goto Label_1082;
	}
Label_1178:
	var_166_bool = !var_0_int;
	return 16;
	
}


func_1337(var_47_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_48_string = "";
	var_47_string = var_48_string;
	func_1706(var_48_string);
	PlayAnimation("all", var_47_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_47_string);
	RemoveEnvelope();
	return 0;
}


func_61(var_5_bool)
{
	var_5_bool = true;
	var_532_bool = 0;
	var_532_bool = 0;
	var_533_bool = 0;
	func_1690(var_533_bool);
	var_536_bool = var_533_bool == 0; //@nz
	if(var_536_bool != 0) {
		var_537_bool = 0;
		func_110(var_537_bool);
		if(var_537_bool != 0) {
			var_532_bool = 1;
		}
	}
	if(var_532_bool != 0) {
		var_538_object = Obj();
		func_1747(var_538_object);
		RemoveActor(var_538_object);
	}
	return 0;
}


func_957()
{
	return 0;
}


func_191()
{
	var_35_int = 0; var_36_int = 0; var_37_int = 0; var_38_int = 0; var_39_bool = 0; var_40_float = 0; var_41_bool = 0; var_42_int = 0; var_43_int = 0; var_44_int = 0; var_45_int = 0; var_46_bool = 0; var_47_float = 0; var_48_bool = 0;
	WaitForAnimEnd();
	var_49_bool = 0;
	func_1690(var_49_bool);
	var_50_bool = var_49_bool == 0; //@nz
	if(var_50_bool != 0) {
		return 14;
	}
	func_1837((int)0);
	var_51_int = var_42_int;
	var_43_int = 0;
	
Label_205:
	var_64_bool = 0;
	var_64_bool = 0;
	var_66_bool = var_43_int < (int)5;
	if(var_66_bool != 0) {
		var_67_bool = 0;
		func_1690(var_67_bool);
		if(var_67_bool != 0) {
			var_64_bool = 1;
		}
	}
	if(var_64_bool != 0) {
		irand(var_44_int, (int)3);
		var_70_bool = var_44_int == (int)0;
		if(var_70_bool != 0) {
			var_71_int = var_42_int;
			if(var_71_int == 0) goto Label_238;
			irand(var_45_int, var_42_int);
			var_73_string = ""; var_74_int = 0;
			var_45_int = var_74_int;
			func_1830(var_73_string, var_74_int);
			PlayAnimation("all", var_73_string);
			WaitForAnimEnd(var_46_bool);
			var_75_bool = var_46_bool == 0; //@nz
			if(var_75_bool != 0) {
			} else {
		} else {
				var_80_bool = var_44_int == (int)1;
				if(var_80_bool != 0) {
					rand(var_47_float, (int)4);
					var_83_int = var_47_float + (int)1;
					Sleep(var_83_int, var_48_bool);
					var_84_bool = var_48_bool == 0; //@nz
					if(var_84_bool != 0) {
						goto Label_267;
					}
					goto Label_256;
				}
				var_85_int = var_43_int;
				if(var_85_int == 0) goto Label_256;
				goto Label_267;
		}
		Label_256:
			var_76_bool = 0;
			func_270(var_76_bool);
			var_77_bool = var_76_bool == 0; //@nz
			if(var_77_bool != 0) {
				goto Label_267;
			}
			ResetAAS();
			var_43_int = var_43_int + (int)1;
			goto Label_205;

		}
	}
Label_267:
	ResetAAS();
	return 14;
	
}


func_959(var_496_bool)
{
	var_496_bool = 1;
	return 0;
}


func_961(var_388_int)
{
	var_388_int = 1;
	return 0;
}


func_1218(var_27_bool, var_28_object)
{
	var_29_bool = 0; var_30_object = Obj();
	var_28_object = var_30_object;
	func_1529(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
	return 0;
}


func_963(var_383_float)
{
	var_383_float = 0.5;
	return 0;
}


func_1597(var_20_object, var_21_int, var_22_float)
{
	var_23_cvector = CVector(0,0,0); var_24_object = Obj(); var_25_int = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_int = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_object = Obj(); var_34_int = 0; var_35_bool = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_int = 0; var_39_int = 0; var_40_cvector = CVector(0,0,0);
	var_41_bool = 0;
	var_41_bool = 0;
	var_42_bool = 0;
	var_42_bool = 0;
	var_43_object = var_20_object;
	if(var_43_object != 0) {
		var_45_bool = var_21_int != (int)4;
		if(var_45_bool != 0) {
			var_42_bool = 1;
		}
	}
	if(var_42_bool != 0) {
		var_47_bool = var_21_int != (int)5;
		if(var_47_bool != 0) {
			var_41_bool = 1;
		}
	}
	if(var_41_bool != 0) {
		var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0);
		var_50_cvector = CVector(0,0,0); var_51_object = Obj();
		var_20_object = var_51_object;
		func_1383(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_1753(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		CreateVectorVector(var_33_object);
		var_34_int = 1;

	Label_1626:
		var_62_int = "hit" + var_34_int;
		GetGeometryLocator(var_62_int, var_35_bool, var_36_cvector, var_37_cvector);
		var_63_bool = var_35_bool == 0; //@nz
		if(var_63_bool != 0) {
		} else {
			var_111_int = var_37_cvector | var_32_cvector;
			var_113_bool = var_111_int >= (float)0.7071067690849304;
			if(var_113_bool != 0) {
				@@var_33_object:add(var_36_cvector);
			}
			var_34_int = var_34_int + (int)1;
			goto Label_1626;
		}
		@@var_33_object:size(var_38_int);
		var_64_int = var_38_int;
		if(var_64_int != 0) {
			irand(var_39_int, var_38_int);
			@@var_33_object:get(var_40_cvector, var_39_int);
			var_65_object = Obj(); var_66_int = 0; var_67_float = 0; var_68_cvector = CVector(0,0,0); var_69_cvector = CVector(0,0,0);
			var_20_object = var_65_object;
			var_21_int = var_66_int;
			var_22_float = var_67_float;
			var_40_cvector = var_68_cvector;
			var_69_cvector = -var_32_cvector;
			func_1665(var_67_float, var_68_cvector, var_69_cvector);
			return 18;
		}
		var_33_object = 0;
	}
	var_110_object = Obj();
	var_20_object = var_110_object;
	func_1553(var_110_object);
	return 18;
	
}


func_1854(var_17_object)
{
	var_18_bool = 0; var_19_string = ""; var_20_string = "";
	func_1798(var_18_bool, "quest_d1_03", "butcher_death");
	var_24_object = Obj();
	var_17_object = var_24_object;
	TaskCall(3);
	func_1237(var_24_object);
	TaskReturn();
	return 0;
}


func_841(var_307_bool)
{
	var_308_bool = 0;
	var_308_bool = 0;
	var_309_bool = 0;
	func_813(var_308_bool, var_309_bool);
	if(var_309_bool != 0) {
		var_326_bool = 0;
		func_857(var_307_bool, var_308_bool, var_326_bool);
		if(var_326_bool != 0) {
			var_308_bool = 1;
		}
	}
	if(var_308_bool != 0) {
		var_307_bool = 1;
		return 0;
	}
	var_307_bool = 0;
	return 0;
}


func_1225(var_206_string)
{
	var_206_string = "walk";
	return 0;
}


func_1227(var_207_string)
{
	var_207_string = "run";
	return 0;
}


func_973(var_2_bool, var_137_bool, var_138_object, var_139_float, var_140_float, var_141_bool, var_142_bool)
{
	var_146_bool = 0; var_147_bool = 0; var_148_bool = 0; var_149_bool = 0;
	var_150_object = Obj();
	var_138_object = var_150_object;
	func_1810(var_150_object);
	SetTimer((int)1, (int)5);
	CanSee(var_148_bool, var_138_object);
	var_153_bool = var_148_bool;
	if(var_153_bool != 0) {
		var_2_bool = true;
		var_154_object = Obj();
		var_138_object = var_154_object;
		func_1695(var_154_object);
	} else {
		var_2_bool = false;
	}
	var_161_bool = 0; var_162_object = Obj();
	var_138_object = var_162_object;
	func_1398(var_161_bool, var_162_object);
	if(var_161_bool != 0) {
		var_165_object = Obj();
		func_1747(var_165_object);
		SendPlayerEnemy(var_138_object, var_165_object);
	}
	var_166_bool = 0; var_167_object = Obj(); var_168_float = 0; var_169_float = 0; var_170_bool = 0; var_171_bool = 0;
	var_138_object = var_167_object;
	var_139_float = var_168_float;
	var_140_float = var_169_float;
	var_141_bool = var_170_bool;
	var_142_bool = var_171_bool;
	func_1078(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool);
	var_166_bool = var_149_bool;
	var_217_bool = var_2_bool;
	if(var_217_bool != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_149_bool = var_137_bool;
	return 4;
	
}


func_1488(var_44_bool, var_45_object)
{
	var_46_bool = 0; var_47_bool = 0;
	@@var_45_object:IsDead(var_47_bool);
	var_47_bool = var_44_bool;
	return 2;
}


func_81(var_529_string)
{
	var_531_bool = var_529_string == "cleanup";
	if(var_531_bool != 0) {
		func_61(var_529_string);
	}
	return 0;
}


func_1747(var_16_object)
{
	var_17_object = Obj(); var_18_object = Obj();
	self(var_18_object);
	var_18_object = var_16_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1493(var_33_bool, var_34_object)
{
	var_35_object = Obj(); var_36_object = Obj(); var_37_object = Obj(); var_38_object = Obj();
	var_39_bool = var_34_object == 0; //@ne
	if(var_39_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_40_bool = 0;
	var_40_bool = 0;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", (int)1);
	if(var_43_bool != 0) {
		var_44_bool = 0; var_45_object = Obj();
		var_34_object = var_45_object;
		func_1488(var_44_bool, var_45_object);
		if(var_44_bool != 0) {
			var_40_bool = 1;
		}
	}
	if(var_40_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	GetScene(var_37_object);
	var_48_bool = var_37_object == 0; //@ne
	if(var_48_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	@@var_34_object:GetScene(var_38_object);
	var_49_bool = var_37_object != var_38_object;
	if(var_49_bool != 0) {
		var_33_bool = 0;
		return 4;
	}
	var_33_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1237(var_24_object)
{
	var_25_object = Obj();
	var_24_object = var_25_object;
	func_1246(var_25_object);
	
Label_1242:
	Hold();
	goto Label_1242;
}
EMIT "Return(); Pop(0)";


func_857(var_0_int, var_4_object, var_326_bool)
{
	var_327_object = Obj(); var_328_bool = 0; var_329_float = 0; var_330_cvector = CVector(0,0,0); var_331_cvector = CVector(0,0,0); var_332_object = Obj(); var_333_bool = 0; var_334_float = 0; var_335_cvector = CVector(0,0,0); var_336_cvector = CVector(0,0,0);
	GetScene(var_332_object);
	var_333_bool = 0;
	
Label_861:
	var_337_cvector = CVector(0,0,0); var_338_object = Obj();
	var_338_object = var_0_int;
	func_1383(var_337_cvector, var_338_object);
	var_343_int = -var_337_cvector;
	FindDirLength(var_334_float, var_343_int, var_4_object);
	var_344_bool = var_334_float < var_4_object;
	if(var_344_bool != 0) {
	} else {
		Face(var_0_int);
		PlayAnimation("all", "bjump");
		@@@var_0_int:GetPFPosition(var_335_cvector);
		GetPFPosition(var_336_cvector);
		WaitForAnimEnd();
		func_945(var_336_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_333_bool = 1;
		var_348_bool = 0;
		func_813(var_336_cvector, var_348_bool);
		var_349_bool = var_348_bool == 0; //@nz
		if(var_349_bool != 0) {
			goto Label_899;
		}
		goto Label_861;
	}
Label_899:
	var_333_bool = var_326_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1369(var_434_string, var_435_int)
{
	var_437_bool = var_435_int == (int)2;
	if(var_437_bool != 0) {
		var_434_string = "fire";
		return 0;
	EMIT "GOTO 0x565";
	}
	var_439_bool = var_435_int == (int)1;
	if(var_439_bool != 0) {
		var_434_string = "bullet";
		return 0;
	}
	var_434_string = "phys";
	return 0;
}


func_1753(var_48_cvector, var_49_cvector)
{
	var_56_float = 0; var_57_float = 0;
	var_58_int = var_49_cvector | var_49_cvector;
	var_57_float = sqrt(var_58_int);
	var_59_float = 9.999999974752427e-07;
	var_60_bool = var_57_float < var_59_float;
	if(var_60_bool != 0) {
		var_48_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_48_cvector = var_49_cvector / var_57_float;
	return 2;
}


func_606(var_0_int, var_1_int, var_355_bool, var_356_float)
{
	var_357_int = 0; var_358_bool = 0; var_359_int = 0; var_360_string = ""; var_361_int = 0; var_362_bool = 0; var_363_int = 0; var_364_string = "";
	func_945(var_364_string);
	irand(var_361_int, var_1_int);
	var_361_int = var_361_int + (int)1;
	Face(var_0_int);
	SetAttackState((bool)1);
	func_1819();
	var_373_int = "attack_begin" + var_361_int;
	PlayAnimation("all", var_373_int);
	WaitForAnimEnd();
	func_913(var_363_int, var_364_string);
	var_389_bool = 0; var_390_object = Obj();
	var_390_object = var_0_int;
	func_1529(var_389_bool, var_390_object);
	var_391_bool = var_389_bool == 0; //@nz
	if(var_391_bool != 0) {
		StopAsync();
		var_355_bool = 0;
		return 8;
	}
	var_392_float = 0; var_393_int = 0;
	var_356_float = var_392_float;
	var_361_int = var_393_int;
	func_567(var_364_string, var_392_float, var_393_int);
	var_476_int = "attack_middle" + var_361_int;
	HasAnimation(var_362_bool, "all", var_476_int);
	var_477_bool = var_362_bool;
	if(var_477_bool != 0) {
		func_1819();
		var_480_int = "attack_middle" + var_361_int;
		PlayAnimation("all", var_480_int);
		WaitForAnimEnd();
		func_945(var_364_string);
		var_481_bool = 0; var_482_object = Obj();
		var_482_object = var_0_int;
		func_1529(var_481_bool, var_482_object);
		var_483_bool = var_481_bool == 0; //@nz
		if(var_483_bool != 0) {
			StopAsync();
			var_355_bool = 0;
			return 8;
		}
		var_484_float = 0; var_485_int = 0;
		var_356_float = var_484_float;
		var_361_int = var_485_int;
		func_567(var_364_string, var_484_float, var_485_int);
		var_363_int = 1;

	Label_683:
		var_487_int = "attack_middle" + var_361_int;
		var_489_int = var_487_int + "_";
		var_364_string = var_489_int + var_363_int;
		HasAnimation(var_362_bool, "all", var_364_string);
		var_491_bool = var_362_bool == 0; //@nz
		if(var_491_bool != 0) {
		} else {
			func_1819();
			PlayAnimation("all", var_364_string);
			WaitForAnimEnd();
			func_945(var_364_string);
			var_507_bool = 0; var_508_object = Obj();
			var_508_object = var_0_int;
			func_1529(var_507_bool, var_508_object);
			var_509_bool = var_507_bool == 0; //@nz
			if(var_509_bool != 0) {
				StopAsync();
				var_355_bool = 0;
				var_510_float = 0; var_511_int = 0;
				var_356_float = var_510_float;
				var_361_int = var_511_int;
				func_567(var_364_string, var_510_float, var_511_int);
				var_363_int = var_363_int + (int)1;
				goto Label_683;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_495_int = "attack_end" + var_361_int;
	PlayAnimation("all", var_495_int);
	var_496_bool = 0;
	func_959(var_496_bool);
	if(var_496_bool != 0) {
		var_497_bool = 0; var_498_float = 0;
		func_743(var_497_bool, (float)0.75);
		StopAsync();
	}
	var_355_bool = 1;
	return 8;
	
}


func_1246(var_25_object)
{
	var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_string = ""; var_31_object = Obj(); var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_string = ""; var_41_object = Obj(); var_42_bool = 0; var_43_bool = 0; var_44_float = 0; var_45_cvector = CVector(0,0,0);
	var_46_bool = var_25_object == 0; //@ne
	if(var_46_bool != 0) {
		var_47_string = "";
		func_1337("fdie");
	} else {
		@@var_25_object:GetPosition(var_36_cvector);
		GetPosition(var_37_cvector);
		GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_79_float = GetByIndex(var_39_cvector, 0);
		var_80_float = GetByIndex(var_38_cvector, 0);
		var_81_float = var_79_float * var_80_float;
		var_82_float = GetByIndex(var_39_cvector, 2);
		var_83_float = GetByIndex(var_38_cvector, 2);
		var_84_float = var_82_float * var_83_float;
		var_85_int = var_81_float + var_84_float;
		var_87_bool = var_85_int >= (int)0;
		if(var_87_bool != 0) {
			var_40_string = "fdie";
		} else {
				var_40_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_25_object = var_41_object;
		var_90_bool = IsFuncExist(var_25_object, "GetScriptProperty", (int)2);
		if(var_90_bool != 0) {
			@@var_25_object:HasScriptProperty(var_42_bool, "Owner");
			var_92_bool = var_42_bool;
			if(var_92_bool != 0) {
				@@var_25_object:GetScriptProperty(var_41_object, "Owner");
				var_94_bool = var_41_object == 0; //@ne
				if(var_94_bool != 0) {
					var_25_object = var_41_object;
				}
			}
		}
		var_97_bool = IsFuncExist(var_41_object, "@GetEyesHeight", (int)1);
		if(var_97_bool != 0) {
			@@var_41_object:GetEyesHeight(var_44_float);
			var_45_cvector = CVector(0.0, 0.0, 0.0);
			var_98_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_98_float;
			SetByIndex(var_45_cvector, 1) = var_98_float;
			LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = 1;
		} else {
			var_43_bool = 0;

		}
		var_100_string = "";
		var_40_string = var_100_string;
		func_1706(var_100_string);
		PlayAnimation("all", var_40_string);
		WaitForAnimEnd();
		var_102_bool = var_43_bool;
		if(var_102_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_40_string);
		RemoveEnvelope();
		var_41_object = 0;
	}
	return 20;
	
}


func_1763(var_444_float, var_445_float, var_446_float)
{
	var_449_bool = var_445_float < var_446_float;
	if(var_449_bool != 0) {
		var_445_float = var_444_float;
	} else {
		var_446_float = var_444_float;
	}
	return 0;
	
}


func_743(var_497_bool, var_498_float)
{
	var_499_float = 0; var_500_bool = 0; var_501_float = 0; var_502_bool = 0;
	rand(var_501_float);
	var_503_bool = var_501_float < var_498_float;
	if(var_503_bool != 0) {

	Label_748:
		IsAnimationPlaying(var_502_bool);
		var_504_bool = var_502_bool == 0; //@nz
		if(var_504_bool != 0) {
		} else {
			var_505_bool = 0;
			func_841(var_505_bool);
			if(var_505_bool != 0) {
				var_497_bool = 1;
				sync();
				goto Label_748;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_945(var_502_bool);
	}
	goto Label_768;
	
Label_768:
	var_497_bool = 0;
	return 4;
	
}


func_1383(var_50_cvector, var_51_object)
{
	var_52_cvector = CVector(0,0,0); var_53_cvector = CVector(0,0,0); var_54_cvector = CVector(0,0,0); var_55_cvector = CVector(0,0,0);
	GetPosition(var_54_cvector);
	@@var_51_object:GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
	return 4;
}


func_1770(var_454_float, var_455_float, var_456_float, var_457_float)
{
	var_458_bool = var_455_float < var_456_float;
	if(var_458_bool != 0) {
		var_456_float = var_454_float;
		return 0;
	}
	var_459_bool = var_455_float > var_457_float;
	if(var_459_bool != 0) {
		var_457_float = var_454_float;
		return 0;
	}
	var_455_float = var_454_float;
	return 0;
}


func_110(var_22_bool)
{
	var_22_bool = 1;
	return 0;
}


func_1390(var_23_float, var_24_object)
{
	var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0);
	GetPosition(var_28_cvector);
	@@var_24_object:GetPosition(var_29_cvector);
	var_30_cvector = var_29_cvector - var_28_cvector;
	var_23_float = var_30_cvector | var_30_cvector;
	return 6;
}


func_112(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, var_26_float, var_27_float)
{
	var_28_bool = 0;
	func_1690(var_28_bool);
	var_31_bool = var_28_bool == 0; //@nz
	if(var_31_bool != 0) {
		return 0;
	}
	FindActor(var_4_object, "player");
	var_2_bool = false;
	var_3_bool = false;
	var_0_int = var_26_float;
	var_1_int = var_27_float;
	SetTimer((int)10, (float)1.0);
	func_191();
	var_86_bool = var_3_bool == 0; //@nz
	if(var_86_bool != 0) {
		KillTimer((int)10);
	}
	return 0;
}


func_1781(var_462_float)
{
	var_463_object = Obj(); var_464_object = Obj();
	CreateFloatVector(var_464_object);
	@@var_464_object:add(var_462_float);
	var_466_bool = var_462_float < (int)0;
	if(var_466_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_464_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1398(var_161_bool, var_162_object)
{
	var_163_bool = 0; var_164_bool = 0;
	IsPlayerActor(var_162_object, var_164_bool);
	var_164_bool = var_161_bool;
	return 2;
}


func_1529(var_29_bool, var_30_object)
{
	var_31_int = 0; var_32_int = 0;
	var_33_bool = 0; var_34_object = Obj();
	var_30_object = var_34_object;
	func_1493(var_33_bool, var_34_object);
	var_50_bool = var_33_bool == 0; //@nz
	if(var_50_bool != 0) {
		var_29_bool = 0;
		return 2;
	}
	var_51_bool = 0; var_52_object = Obj(); var_53_string = "";
	var_30_object = var_52_object;
	func_1403(var_51_bool, var_52_object, "noaccess");
	var_60_bool = var_51_bool == 0; //@nz
	if(var_60_bool != 0) {
		var_29_bool = 1;
		return 2;
	}
	@@var_30_object:GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == (int)0;
	return 2;
}


func_1403(var_51_bool, var_52_object, var_53_string)
{
	var_54_bool = 0; var_55_bool = 0;
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", (int)2);
	var_59_bool = var_58_bool == 0; //@nz
	if(var_59_bool != 0) {
		var_51_bool = 0;
		return 2;
	}
	@@var_52_object:HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
	return 2;
}


