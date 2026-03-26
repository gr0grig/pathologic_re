// @IMPORTS: Hold/0,StopGroup0/0,sync/0,IsPlayerActor/2,GetScene/1,MovePoint/3,WaitForAnimEnd/1,Stop/0,FindActor/2,Sleep/1,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,SetRTEnvelope/2,IsOverrideActive/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetProperty/2,Rotate/3,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,IsLoaded/1,AddItem/4,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,Trigger/2,BroadcastMessage/3,GetVariable/2,WorkWithCorpse/1,Barter/1,CreateInvItem/1,RemoveActor/1,SignalDeath/1
// @STRINGS: W:path|W:attack|W:quest_b4_01|W:patrol_attack|A:GetLocator|W:player|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle|W:branch|A:SetItemName|W:Organ|A:GetItemID|W:liver|W:kidney|W:heart|W:blood|W:patrol_dead|W:revolver_ammo|W:meradorm|W:morfin|W:alpha_pills|W:beta_pills
// @RUN_OP: 0xd
// @RUN_TASK: 1
// @TASK_0: vars= params=0
// @EVENT_5: op=0x8 vars=
// @TASK_1: vars=int,bool params=0
// @EVENT_26: op=0x21 vars=string
// @EVENT_17: op=0x2e vars=object
// @TASK_2: vars=object,int,int,bool,float,int params=0
// @TASK_3: vars=bool,object,bool params=6
// @EVENT_7: op=0x380 vars=int
// @EVENT_1: op=0x39b vars=object
// @EVENT_2: op=0x3aa vars=object
// @EVENT_10: op=0x430 vars=object
// @EVENT_41: op=0x43b vars=object
// @TASK_4: vars= params=1
// @EVENT_0: op=0x45c vars=object
// @EVENT_22: op=0x4db vars=object,int,float,float
// @EVENT_16: op=0x4dd vars=object,string
// @EVENT_41: op=0x4df vars=object
// @STANDALONE_EVENT_6: op=0x705 vars=
// @STANDALONE_EVENT_22: op=0x73a vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x742 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x74c vars=object,string
// @STANDALONE_EVENT_41: op=0x759 vars=object
// @PE: 0x21,0x9e,0xb3,0xb6,0x347,0x380,0x39b,0x3aa,0x41e,0x430,0x43b,0x444,0x44f,0x4c1,0x4db,0x4dd,0x4df,0x4e1,0x681,0x688,0x6cf,0x73a,0x742,0x759

task_0_event_5(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	StopGroup0();
	sync();
	return 0;
}


task_1_event_26(var_0_int, var_1_bool, var_2_string, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_13_bool = var_11_bool == "attack";
	if(var_13_bool != 0) {
		func_154(var_11_bool);
		TaskCall(2);
		func_160();
		TaskReturn();
	}
	return 0;
}


task_1_event_17(var_0_int, var_1_bool, var_2_object, var_3_object, var_4_int, var_5_int, var_6_bool, var_7_float, var_8_int, var_9_bool, var_10_object, var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0;
	IsPlayerActor(var_11_bool, var_13_bool);
	var_14_bool = var_13_bool;
	if(var_14_bool != 0) {
		var_15_bool = 0; var_16_string = ""; var_17_string = "";
		func_1705(var_15_bool, "quest_b4_01", "patrol_attack");
	}
	return 2;
}


task_3_event_7(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_int)
{
	var_13_bool = var_11_int == (int)1;
	if(var_13_bool != 0) {
		var_14_object = Obj();
		var_14_object = var_1_bool;
		func_1717(var_14_object);
	} else {
		var_19_int = 0;
		var_11_int = var_19_int;
		func_1054(var_10_bool, var_11_int, var_19_int);
	}
	return 0;
	
}


task_3_event_1(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_bool == var_11_object;
	if(var_13_bool != 0) {
		var_14_bool = var_2_object == 0; //@nz
		if(var_14_bool != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_object = true;
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1582(var_15_object);
	}
	return 0;
}


task_3_event_2(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0;
	var_12_bool = 0;
	var_13_bool = var_1_bool == var_11_object;
	if(var_13_bool != 0) {
		var_14_object = var_2_object;
		if(var_14_object != 0) {
			var_12_bool = 1;
		}
	}
	if(var_12_bool != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	return 0;
}


task_3_event_10(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	RequestClearPath(var_11_object);
	return 0;
}


task_3_event_41(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	func_910(var_11_object);
	var_11_object = Obj();
	func_1881();
	return 0;
}


task_4_event_0(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_bool = 0; var_13_bool = 0;
	IsOverrideActive(var_13_bool);
	var_14_bool = var_13_bool == 0; //@nz
	if(var_14_bool != 0) {
		var_15_object = Obj();
		var_11_object = var_15_object;
		func_1743(var_15_object);
	}
	return 2;
}


task_4_event_22(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	return 0;
}


task_4_event_16(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
{
	return 0;
}


task_4_event_41(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	return 0;
}


event_6(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_object = Obj();
	func_1649(var_11_object);
	RemoveActor(var_11_object);
	Hold();
	return 0;
}


event_22(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float)
{
	var_15_object = Obj(); var_16_int = 0; var_17_float = 0;
	var_11_object = var_15_object;
	var_12_int = var_16_int;
	var_13_float = var_17_float;
	func_1484(var_15_object, var_16_int, var_17_float);
	return 0;
}


event_43(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_int, var_13_float, var_14_float, var_15_cvector, var_16_cvector)
{
	var_17_object = Obj(); var_18_int = 0; var_19_float = 0; var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0);
	var_11_object = var_17_object;
	var_12_int = var_18_int;
	var_13_float = var_19_float;
	var_15_cvector = var_20_cvector;
	var_16_cvector = var_21_cvector;
	func_1552(var_19_float, var_20_cvector, var_21_cvector);
	return 0;
}


event_16(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object, var_12_string)
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


event_41(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool, var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_1805(var_12_object);
	return 0;
}


main(var_0_int, var_1_bool, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_float, var_7_int, var_8_bool, var_9_object, var_10_bool)
{
	var_11_bool = 0;
	func_1577(var_11_bool);
	var_14_bool = var_11_bool == 0; //@nz
	if(var_14_bool != 0) {
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	var_17_bool = 0; var_18_string = ""; var_19_int = 0;
	var_20_string = ""; var_21_string = "";
	func_1287(var_20_string, "path");
	var_20_string = var_18_string;
	func_57(var_10_bool, var_17_bool, var_18_string, (int)1);
	return 0;
}


func_0()
{
	
Label_0:
	Hold();
	var_15_bool = 0;
	func_1577(var_15_bool);
	var_16_bool = var_15_bool == 0; //@nz
	if(var_16_bool == 1) goto Label_0;
	return 0;
}


func_1665(var_434_float, var_435_float, var_436_float)
{
	var_439_bool = var_435_float < var_436_float;
	if(var_439_bool != 0) {
		var_435_float = var_434_float;
	} else {
		var_436_float = var_434_float;
	}
	return 0;
	
}


func_1287(var_20_string, var_21_string)
{
	var_22_string = ""; var_23_string = "";
	GetProperty(var_21_string, var_23_string);
	var_23_string = var_20_string;
	return 2;
}


func_1672(var_444_float, var_445_float, var_446_float, var_447_float)
{
	var_448_bool = var_445_float < var_446_float;
	if(var_448_bool != 0) {
		var_446_float = var_444_float;
		return 0;
	}
	var_449_bool = var_445_float > var_447_float;
	if(var_449_bool != 0) {
		var_447_float = var_444_float;
		return 0;
	}
	var_445_float = var_444_float;
	return 0;
}


func_652(var_0_int, var_284_bool, var_285_float)
{
	var_286_bool = 0; var_287_cvector = CVector(0,0,0); var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_float = 0; var_291_bool = 0; var_292_cvector = CVector(0,0,0); var_293_cvector = CVector(0,0,0); var_294_cvector = CVector(0,0,0); var_295_float = 0;
	
Label_653:
	IsAnimationPlaying(var_291_bool);
	var_296_bool = var_291_bool == 0; //@nz
	if(var_296_bool != 0) {
	} else {
		var_297_bool = 0;
		func_723(var_297_bool);
		if(var_297_bool != 0) {
			var_284_bool = 1;
			return 10;
		}
		var_340_bool = 0; var_341_object = Obj();
		var_341_object = var_0_int;
		func_1406(var_340_bool, var_341_object);
		var_342_bool = var_340_bool == 0; //@nz
		if(var_342_bool != 0) {
			var_284_bool = 0;
			return 10;
		}
		@@@var_0_int:GetPFPosition(var_292_cvector);
		GetPFPosition(var_293_cvector);
		var_294_cvector = var_292_cvector - var_293_cvector;
		var_295_float = var_294_cvector | var_294_cvector;
		var_343_float = var_285_float * var_285_float;
		var_344_bool = var_295_float < var_343_float;
		if(var_344_bool != 0) {
			var_345_bool = 0; var_346_float = 0;
			var_285_float = var_346_float;
			func_488(var_294_cvector, var_295_float, var_345_bool, var_346_float);
			var_284_bool = 1;
			sync();
			goto Label_653;
		}
		return 10;
	}
	func_827(var_295_float);
	var_284_bool = 0;
	return 10;
	
}


func_1292(var_396_float, var_397_object, var_398_float, var_399_int)
{
	var_403_int = 0; var_404_string = ""; var_405_int = 0; var_406_float = 0; var_407_float = 0; var_408_float = 0; var_409_int = 0; var_410_string = ""; var_411_int = 0; var_412_float = 0; var_413_float = 0; var_414_float = 0;
	var_415_bool = 0; var_416_object = Obj(); var_417_string = "";
	var_397_object = var_416_object;
	func_1275(var_415_bool, var_416_object, "health");
	var_418_bool = var_415_bool == 0; //@nz
	if(var_418_bool != 0) {
		var_396_float = 0.0;
		return 12;
	}
	var_419_bool = 0; var_420_object = Obj(); var_421_string = "";
	var_397_object = var_420_object;
	func_1275(var_419_bool, var_420_object, "armor");
	var_422_bool = var_419_bool == 0; //@nz
	if(var_422_bool != 0) {
		var_409_int = 0;
	} else {
			@@var_397_object:GetProperty("armor", var_409_int);
	}
	var_424_string = ""; var_425_int = 0;
	var_399_int = var_425_int;
	func_1249(var_424_string, var_425_int);
	var_410_string = "armor_" + var_424_string;
	var_430_bool = 0; var_431_object = Obj(); var_432_string = "";
	var_397_object = var_431_object;
	var_410_string = var_432_string;
	func_1275(var_430_bool, var_431_object, var_432_string);
	var_433_bool = var_430_bool == 0; //@nz
	if(var_433_bool != 0) {
		var_411_int = 0;
	} else {
		@@var_397_object:GetProperty(var_410_string, var_411_int);

	}
	var_434_float = 0; var_435_float = 0; var_436_float = 0;
	var_437_int = var_409_int + var_411_int;
	var_435_float = var_437_int / (float)100.0;
	func_1665(var_434_float, var_435_float, (float)1);
	var_434_float = var_412_float;
	@@var_397_object:GetProperty("health", var_413_float);
	var_442_int = (int)1 - var_412_float;
	var_414_float = var_398_float * var_442_int;
	var_444_float = 0; var_445_float = 0; var_446_float = 0; var_447_float = 0;
	var_445_float = var_413_float - var_414_float;
	func_1672(var_444_float, var_445_float, (float)0, (float)1);
	@@var_397_object:SetProperty("health", var_444_float);
	var_450_bool = 0; var_451_object = Obj();
	var_397_object = var_451_object;
	func_1270(var_450_bool, var_451_object);
	if(var_450_bool != 0) {
		var_452_float = 0;
		var_452_float = -var_414_float;
		func_1688(var_452_float);
	}
	var_414_float = var_396_float;
	return 12;
	
}


func_910(var_2_object)
{
	KillTimer((int)1);
	var_13_object = var_2_object;
	if(var_13_object != 0) {
		var_2_object = false;
		UnlookAsync("head");
	}
	func_1076(var_11_object);
	return 0;
}


func_1805(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	var_15_bool = 0; var_16_string = ""; var_17_string = "";
	func_1705(var_15_bool, "quest_b4_01", "patrol_dead");
	AddItem(var_14_bool, "revolver_ammo", (int)0, (int)4);
	AddItem(var_14_bool, "meradorm", (int)0, (int)1);
	AddItem(var_14_bool, "morfin", (int)0, (int)1);
	var_30_string = ""; var_31_int = 0; var_32_int = 0; var_33_int = 0;
	func_1593("alpha_pills", (int)2, (int)3, (int)5);
	var_46_string = ""; var_47_int = 0; var_48_int = 0; var_49_int = 0;
	func_1593("beta_pills", (int)2, (int)3, (int)4);
	func_1773();
	var_70_object = Obj();
	var_12_object = var_70_object;
	TaskCall(4);
	func_1103(var_70_object);
	TaskReturn();
	return 2;
}


func_784(var_0_int, var_247_bool)
{
	var_248_bool = 0; var_249_bool = 0;
	var_252_bool = IsFuncExist(var_0_int, "IsAttacking", (int)1);
	if(var_252_bool != 0) {
		@@@var_0_int:IsAttacking(var_249_bool);
		var_249_bool = var_247_bool;
		return 2;
	}
	var_247_bool = 0;
	return 2;
}


func_1552(var_17_object, var_20_cvector, var_21_cvector)
{
	var_22_object = Obj(); var_23_object = Obj(); var_24_object = Obj(); var_25_object = Obj();
	GetScene(var_24_object);
	AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	var_28_object = Obj();
	var_17_object = var_28_object;
	func_1440(var_28_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1683(var_38_bool, var_39_int, var_40_int)
{
	var_41_int = 0; var_42_int = 0;
	irand(var_42_int, var_40_int);
	var_38_bool = var_42_int < var_39_int;
	return 2;
}


func_1430(var_53_bool, var_54_cvector)
{
	var_55_cvector = CVector(0,0,0); var_56_cvector = CVector(0,0,0); var_57_bool = 0; var_58_cvector = CVector(0,0,0); var_59_cvector = CVector(0,0,0); var_60_bool = 0;
	GetPosition(var_58_cvector);
	var_59_cvector = var_54_cvector - var_58_cvector;
	var_61_float = GetByIndex(var_59_cvector, 0);
	var_62_float = GetByIndex(var_59_cvector, 2);
	Rotate(var_61_float, var_62_float, var_60_bool);
	var_60_bool = var_53_bool;
	return 6;
}


func_1688(var_452_float)
{
	var_453_object = Obj(); var_454_object = Obj();
	CreateFloatVector(var_454_object);
	@@var_454_object:add(var_452_float);
	var_456_bool = var_452_float < (int)0;
	if(var_456_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_454_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_154(var_1_bool)
{
	Stop();
	var_1_bool = true;
	return 0;
}


func_795(var_2_string, var_5_int)
{
	var_364_float = 0; var_365_int = 0; var_366_float = 0; var_367_int = 0;
	var_368_bool = var_2_string == 0; //@nz
	if(var_368_bool != 0) {
		return 4;
	}
	var_369_int = var_5_int;
	if(var_369_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_372_bool = var_5_int > (int)0;
		if(var_372_bool != 0) {
			return 4;
		}
	}
	rand(var_366_float);
	var_373_float = 0;
	func_845(var_373_float);
	var_374_bool = var_366_float < var_373_float;
	if(var_374_bool != 0) {
		irand(var_367_int, var_2_string);
		var_367_int = var_367_int + (int)1;
		var_377_int = "attack" + var_367_int;
		Speak(var_377_int);
		var_378_int = 0;
		func_843(var_378_int);
		var_5_int = var_378_int;
	}
	return 4;
}


func_414(var_1_bool, var_2_string, var_4_int)
{
	var_49_bool = 0; var_50_bool = 0; var_51_cvector = CVector(0,0,0); var_52_bool = 0; var_53_bool = 0; var_54_cvector = CVector(0,0,0);
	var_1_bool = 0;
	
Label_416:
	var_58_int = var_1_bool + (int)1;
	var_59_int = "attack_begin" + var_58_int;
	HasAnimation(var_52_bool, "all", var_59_int);
	var_60_bool = var_52_bool == 0; //@nz
	if(var_60_bool != 0) {
	} else {
			var_1_bool = var_1_bool + (int)1;
			goto Label_416;
	}
	var_2_string = 0;
	
Label_430:
	var_63_int = var_2_string + (int)1;
	var_64_int = "attack" + var_63_int;
	IsExisting3DSound(var_53_bool, var_64_int);
	var_65_bool = var_53_bool == 0; //@nz
	if(var_65_bool != 0) {
	} else {
		var_2_string = var_2_string + (int)1;
		goto Label_430;

	}
	GetAnimationOffset(var_54_cvector, "all", "bjump");
	var_68_float = GetByIndex(var_54_cvector, 2);
	var_4_int = -var_68_float;
	return 6;
	
}


func_158()
{
	return 0;
}


func_160()
{
	var_20_object = Obj(); var_21_object = Obj();
	FindActor(var_21_object, "player");
	var_23_bool = var_21_object == 0; //@nz
	if(var_23_bool != 0) {
		return 2;
	}
Label_167:
	var_24_object = Obj(); var_25_bool = 0; var_26_float = 0;
	var_21_object = var_24_object;
	func_185(var_17_bool, var_18_float, var_19_int, var_20_object, var_21_object, var_24_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_167;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_1566(var_230_object)
{
	var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0); var_233_cvector = CVector(0,0,0); var_234_cvector = CVector(0,0,0); var_235_cvector = CVector(0,0,0); var_236_cvector = CVector(0,0,0);
	@@var_230_object:GetPosition(var_234_cvector);
	GetPosition(var_235_cvector);
	var_236_cvector = var_234_cvector - var_235_cvector;
	var_237_float = GetByIndex(var_236_cvector, 0);
	var_238_float = GetByIndex(var_236_cvector, 2);
	RotateAsync(var_237_float, var_238_float);
	return 6;
}


func_1054(var_0_int, var_1_bool, var_19_int)
{
	var_21_bool = var_19_int != (int)0;
	if(var_21_bool != 0) {
		return 0;
	}
	var_22_bool = 0; var_23_object = Obj();
	var_23_object = var_1_bool;
	func_1092(var_22_bool, var_23_object);
	var_58_bool = var_22_bool == 0; //@nz
	if(var_58_bool != 0) {
		var_0_int = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1440(var_28_object)
{
	var_29_bool = 0; var_30_int = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_cvector = CVector(0,0,0); var_34_cvector = CVector(0,0,0); var_35_string = ""; var_36_bool = 0; var_37_int = 0; var_38_cvector = CVector(0,0,0); var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_cvector = CVector(0,0,0); var_42_string = "";
	var_43_bool = var_28_object == 0; //@ne
	if(var_43_bool != 0) {
		return 14;
	}
	IsDead(var_36_bool);
	var_44_bool = var_36_bool;
	if(var_44_bool != 0) {
		return 14;
	}
	GetSecondaryAnimationType(var_37_int);
	var_46_bool = var_37_int < (int)0;
	if(var_46_bool != 0) {
		return 14;
	}
	@@var_28_object:GetPosition(var_38_cvector);
	GetPosition(var_39_cvector);
	GetDirection(var_40_cvector);
	var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_49_float = var_47_float * var_48_float;
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	var_52_float = var_50_float * var_51_float;
	var_53_int = var_49_float + var_52_float;
	var_55_bool = var_53_int >= (int)0;
	if(var_55_bool != 0) {
		var_42_string = "fhit";
	} else {
		var_42_string = "bhit";
	}
	var_58_int = var_42_string + "1";
	var_60_int = var_42_string + "2";
	FadeSecondaryAnimation("hit_react", var_58_int, var_60_int, (int)-10);
	return 14;
	
}


func_1577(var_11_bool)
{
	var_12_bool = 0; var_13_bool = 0;
	IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
	return 2;
}


func_1705(var_15_bool, var_16_string, var_17_string)
{
	var_18_object = Obj(); var_19_object = Obj();
	FindActor(var_19_object, var_16_string);
	var_20_bool = var_19_object == 0; //@ne
	if(var_20_bool != 0) {
		var_15_bool = 0;
		return 2;
	}
	Trigger(var_19_object, var_17_string);
	var_15_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1582(var_15_object)
{
	var_16_float = 0; var_17_cvector = CVector(0,0,0); var_18_float = 0; var_19_cvector = CVector(0,0,0);
	@@var_15_object:GetEyesHeight(var_18_float);
	var_19_cvector = CVector(0.0, 0.0, 0.0);
	var_20_float = GetByIndex(var_19_cvector, 1);
	var_18_float = var_20_float;
	SetByIndex(var_19_cvector, 1) = var_20_float;
	LookAsync(var_15_object, "head", var_19_cvector);
	return 4;
}


func_179(var_393_float)
{
	var_393_float = 0.20000000298023224;
	return 0;
}


func_1076(var_0_int)
{
	var_0_int = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1717(var_14_object)
{
	var_15_bool = 0; var_16_bool = 0;
	IsPlayerActor(var_14_object, var_16_bool);
	var_17_bool = var_16_bool;
	if(var_17_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_182(var_400_int)
{
	var_400_int = 0;
	return 0;
}


func_695(var_0_int, var_299_bool)
{
	var_300_cvector = CVector(0,0,0); var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_float = 0; var_304_float = 0; var_305_cvector = CVector(0,0,0); var_306_cvector = CVector(0,0,0); var_307_cvector = CVector(0,0,0); var_308_float = 0; var_309_float = 0;
	var_310_bool = 0; var_311_object = Obj();
	var_311_object = var_0_int;
	func_1406(var_310_bool, var_311_object);
	var_312_bool = var_310_bool == 0; //@nz
	if(var_312_bool != 0) {
		var_299_bool = 0;
		return 10;
	}
	var_313_bool = 0;
	func_784(var_309_float, var_313_bool);
	if(var_313_bool != 0) {
		@@@var_0_int:GetPFPosition(var_305_cvector);
		GetPFPosition(var_306_cvector);
		var_307_cvector = var_305_cvector - var_306_cvector;
		var_308_float = var_307_cvector | var_307_cvector;
		@@@var_0_int:GetAttackDistance(var_309_float);
		var_309_float = var_309_float + (int)50;
		var_315_float = var_309_float * var_309_float;
		var_299_bool = var_308_float <= var_315_float;
		return 10;
	}
	var_299_bool = 0;
	return 10;
}


func_952(var_0_int, var_1_bool, var_156_bool, var_157_object, var_158_float, var_159_float, var_160_bool, var_161_bool)
{
	var_162_bool = 0; var_163_bool = 0; var_164_object = Obj(); var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_float = 0; var_169_object = Obj(); var_170_bool = 0; var_171_bool = 0; var_172_object = Obj(); var_173_cvector = CVector(0,0,0); var_174_cvector = CVector(0,0,0); var_175_cvector = CVector(0,0,0); var_176_float = 0; var_177_object = Obj();
	var_0_int = false;
	var_1_bool = var_157_object;
	var_161_bool = var_171_bool;
	
Label_956:
	var_178_bool = 0; var_179_object = Obj();
	var_157_object = var_179_object;
	func_1092(var_178_bool, var_179_object);
	var_182_bool = var_178_bool == 0; //@nz
	if(var_182_bool != 0) {
		var_156_bool = 0;
		return 16;
	}
	@@var_157_object:GetPosition(var_173_cvector);
	GetPosition(var_174_cvector);
	var_175_cvector = var_173_cvector - var_174_cvector;
	var_176_float = var_175_cvector | var_175_cvector;
	var_183_bool = 0;
	var_183_bool = 0;
	var_185_bool = var_159_float > (int)0;
	if(var_185_bool != 0) {
		var_186_float = var_159_float * var_159_float;
		var_187_bool = var_176_float > var_186_float;
		if(var_187_bool != 0) {
			var_183_bool = 1;
		}
	}
	if(var_183_bool != 0) {
		Stop();
		var_156_bool = 0;
		return 16;
	}
	var_188_float = var_158_float * var_158_float;
	var_189_bool = var_176_float > var_188_float;
	if(var_189_bool != 0) {
		@@var_157_object:GetPFPosition(var_173_cvector);
		FindPathTo(var_177_object, var_173_cvector);
		var_190_bool = var_177_object != 0; //@nn
		if(var_190_bool != 0) {
			var_177_object = var_172_object;
			var_177_object = 0;
		}
		var_191_bool = var_172_object != 0; //@nn
		if(var_191_bool != 0) {
			var_192_bool = var_171_bool;
			if(var_192_bool == 0) goto Label_1005;
			var_171_bool = 0;
			RotatePath(var_172_object, var_170_bool);
			var_193_bool = var_170_bool == 0; //@nz
			if(var_193_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_196_string = "";
				func_1099(var_196_string);
				var_197_string = "";
				func_1101(var_197_string);
				FollowPath(var_172_object, var_160_bool, var_170_bool, var_196_string, var_197_string);
				var_198_bool = var_170_bool == 0; //@nz
				if(var_198_bool != 0) {
					var_199_int = var_0_int;
					if(var_199_int != 0) {
						var_172_object = 0;
						goto Label_1052;
					EMIT "GOTO 0x401";
					}
				} else {
					var_172_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_170_bool);
					var_202_bool = var_170_bool == 0; //@nz
					if(var_202_bool != 0) {
						var_203_int = var_0_int;
						if(var_203_int != 0) {
							var_172_object = 0;
							goto Label_1052;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_1052;
	}
			var_177_object = 0;
			goto Label_1050;

		Label_1050:
			var_172_object = 0;

		}
		goto Label_956;
	}
Label_1052:
	var_156_bool = !var_0_int;
	return 16;
	
}


func_185(var_0_int, var_3_object, var_5_int, var_24_object, var_25_bool, var_26_float, var_133_bool, var_225_bool)
{
	var_27_float = 0; var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_bool = 0; var_31_bool = 0; var_32_float = 0; var_33_cvector = CVector(0,0,0); var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_bool = 0; var_37_float = 0; var_38_float = 0; var_39_cvector = CVector(0,0,0); var_40_cvector = CVector(0,0,0); var_41_bool = 0; var_42_bool = 0; var_43_float = 0; var_44_cvector = CVector(0,0,0); var_45_float = 0; var_46_cvector = CVector(0,0,0); var_47_bool = 0; var_48_float = 0;
	func_414(var_46_cvector, var_47_bool, var_48_float);
	var_5_int = 0;
	var_73_bool = IsFuncExist(var_24_object, "@GetAttackDistance", (int)1);
	if(var_73_bool != 0) {
		@@var_24_object:GetAttackDistance(var_38_float);
		var_38_float = var_38_float + (int)50;
	} else {
							var_26_float = var_38_float;
	}
	var_76_bool = var_38_float >= (int)150;
	if(var_76_bool != 0) {
		var_38_float = 150;
	}
	var_3_object = false;
	var_0_int = var_24_object;
	IsPlayerActor(var_0_int, var_41_bool);
	var_77_bool = var_41_bool;
	if(var_77_bool != 0) {
		PlayGlobalMusic("attack");
		var_79_object = Obj();
		func_1649(var_79_object);
		SendPlayerEnemy(var_24_object, var_79_object);
	}
	var_82_bool = var_25_bool;
	if(var_82_bool != 0) {
		var_42_bool = 0;
	} else {
						var_42_bool = 1;

	}
	var_43_float = (float)400.0 + var_38_float;
	
Label_225:
	var_84_bool = 0;
	var_84_bool = 0;
	var_85_bool = 0; var_86_object = Obj();
	var_86_object = var_0_int;
	func_1406(var_85_bool, var_86_object);
	if(var_85_bool != 0) {
		var_119_bool = var_3_object == 0; //@nz
		if(var_119_bool != 0) {
			var_84_bool = 1;
		}
	}
	if(var_84_bool != 0) {
		func_827(var_48_float);
		@@@var_0_int:GetPFPosition(var_39_cvector);
		GetPFPosition(var_40_cvector);
		var_44_cvector = var_39_cvector - var_40_cvector;
		var_45_float = var_44_cvector | var_44_cvector;
		var_125_float = var_43_float * var_43_float;
		var_126_bool = var_45_float >= var_125_float;
		if(var_126_bool != 0) {
			var_127_bool = 0; var_128_object = Obj(); var_129_float = 0; var_130_float = 0; var_131_bool = 0; var_132_bool = 0;
			var_128_object = var_0_int;
			var_38_float = var_129_float;
			TaskCall(3);
			func_847(var_135_bool, var_127_bool, var_128_object, var_129_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_210_bool = var_133_bool == 0; //@nz
			if(var_210_bool != 0) {
			} else {
				var_42_bool = 0;
		} else {
				var_216_float = var_26_float * var_26_float;
				var_217_bool = var_45_float >= var_216_float;
				if(var_217_bool != 0) {
					@@@var_0_int:GetPFPosition(var_46_cvector);
					CanReachByPF(var_47_bool, var_46_cvector);
					var_218_bool = var_47_bool == 0; //@nz
					if(var_218_bool != 0) {
						var_219_bool = 0; var_220_object = Obj(); var_221_float = 0; var_222_float = 0; var_223_bool = 0; var_224_bool = 0;
						var_220_object = var_0_int;
						var_38_float = var_221_float;
						TaskCall(3);
						func_847(var_227_bool, var_219_bool, var_220_object, var_221_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_228_bool = var_225_bool == 0; //@nz
						if(var_228_bool != 0) {
							goto Label_397;
						}
						var_42_bool = 0;
						goto Label_225;
					}
					var_229_bool = var_42_bool == 0; //@nz
					if(var_229_bool != 0) {
						var_230_object = Obj();
						var_230_object = var_0_int;
						func_1566(var_230_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_827(var_48_float);
						StopAsync();
						var_42_bool = 1;
						var_241_bool = 0; var_242_object = Obj();
						var_242_object = var_0_int;
						func_1406(var_241_bool, var_242_object);
						var_243_bool = var_241_bool == 0; //@nz
						if(var_243_bool != 0) {
							goto Label_397;
						}
					}
					rand(var_48_float);
					var_244_bool = 0;
					var_246_bool = var_48_float < (float)0.25;
					if(var_246_bool != 1) {
						var_247_bool = 0;
						func_784((bool)1, var_247_bool);
						if(var_247_bool != 1) {
							var_244_bool = 0;
						}
					}
					if(var_244_bool != 0) {
						Face(var_0_int);
						func_834();
						PlayAnimation("all", "attack_stay");
						var_284_bool = 0; var_285_float = 0;
						var_26_float = var_285_float;
						func_652(var_48_float, var_284_bool, var_285_float);
						StopAsync();
					} else {
						Face(var_0_int);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_827(var_48_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_506_bool = 0;
						func_784(var_48_float, var_506_bool);
						var_507_bool = var_506_bool == 0; //@nz
						if(var_507_bool == 0) goto Label_387;
						var_508_bool = 0; var_509_object = Obj();
						var_509_object = var_0_int;
						func_1406(var_508_bool, var_509_object);
						var_510_bool = var_508_bool == 0; //@nz
						if(var_510_bool != 0) {
							goto Label_397;
						}
						@@@var_0_int:GetPFPosition(var_39_cvector);
						GetPFPosition(var_40_cvector);
						var_44_cvector = var_39_cvector - var_40_cvector;
						var_45_float = var_44_cvector | var_44_cvector;
						var_511_float = var_26_float * var_26_float;
						var_512_bool = var_45_float < var_511_float;
						if(var_512_bool == 0) goto Label_387;
						var_513_bool = 0; var_514_float = 0;
						var_26_float = var_514_float;
						func_488(var_47_bool, var_48_float, var_513_bool, var_514_float);
						var_515_bool = var_513_bool == 0; //@nz
						if(var_515_bool == 0) goto Label_387;
						goto Label_397;
				}
					var_516_bool = 0; var_517_float = 0;
					var_26_float = var_517_float;
					func_488(var_47_bool, var_48_float, var_516_bool, var_517_float);
					var_518_bool = var_516_bool == 0; //@nz
					if(var_518_bool != 0) {
						goto Label_397;
					}
					var_42_bool = 1;

				}
			Label_387:
				goto Label_396;
		}
		Label_396:
			goto Label_225;

		}
	}
Label_397:
	WaitForAnimEnd();
	var_211_object = var_3_object;
	if(var_211_object != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_214_bool = var_41_bool;
	if(var_214_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_57(var_0_int, var_17_bool, var_18_string, var_19_int)
{
	var_24_object = Obj(); var_25_bool = 0; var_26_bool = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_bool = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_bool = 0; var_34_object = Obj(); var_35_bool = 0; var_36_bool = 0; var_37_cvector = CVector(0,0,0); var_38_cvector = CVector(0,0,0); var_39_bool = 0; var_40_bool = 0; var_41_cvector = CVector(0,0,0); var_42_cvector = CVector(0,0,0); var_43_bool = 0;
	GetScene(var_34_object);
	var_0_int = 0;
	
Label_61:
	var_45_int = var_0_int + (int)1;
	var_46_int = var_18_string + var_45_int;
	@@var_34_object:GetLocator(var_46_int, var_35_bool);
	var_47_bool = var_35_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
		var_0_int = var_0_int + (int)1;
		goto Label_61;
	}
	var_48_bool = var_0_int == 0; //@nz
	if(var_48_bool != 0) {
		var_17_bool = 0;
		return 20;
	}
Label_76:
	var_49_bool = var_19_int < var_0_int;
	if(var_49_bool != 0) {
		var_51_int = var_19_int + (int)1;
		var_52_int = var_18_string + var_51_int;
		@@var_34_object:GetLocator(var_52_int, var_36_bool, var_37_cvector, var_38_cvector);
		var_53_bool = 0; var_54_cvector = CVector(0,0,0);
		var_37_cvector = var_54_cvector;
		func_1430(var_53_bool, var_54_cvector);
		if(var_53_bool != 0) {
			MovePoint(var_37_cvector, (int)0, var_39_bool);
			var_64_bool = var_39_bool;
			if(var_64_bool != 0) {
				WaitForAnimEnd(var_39_bool);
				var_65_bool = var_39_bool;
				if(var_65_bool != 0) {
					var_66_int = 0; var_67_cvector = CVector(0,0,0); var_68_cvector = CVector(0,0,0);
					var_19_int = var_66_int;
					var_37_cvector = var_67_cvector;
					var_38_cvector = var_68_cvector;
					func_158();
					var_19_int = var_19_int + (int)1;
					goto Label_76;
				}
			}
		}
		var_70_bool = var_1_bool;
		if(var_70_bool != 0) {
			var_17_bool = 1;
			goto Label_76;
		}
		return 20;
	}
	var_19_int = var_0_int - (int)2;
	
Label_113:
	var_73_bool = var_19_int >= (int)0;
	if(var_73_bool != 0) {
		var_75_int = var_19_int + (int)1;
		var_76_int = var_18_string + var_75_int;
		@@var_34_object:GetLocator(var_76_int, var_40_bool, var_41_cvector, var_42_cvector);
		var_77_bool = 0; var_78_cvector = CVector(0,0,0);
		var_41_cvector = var_78_cvector;
		func_1430(var_77_bool, var_78_cvector);
		if(var_77_bool != 0) {
			MovePoint(var_41_cvector, (int)0, var_43_bool);
			var_80_bool = var_43_bool;
			if(var_80_bool != 0) {
				WaitForAnimEnd(var_43_bool);
				var_81_bool = var_43_bool;
				if(var_81_bool != 0) {
					var_82_int = 0; var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0);
					var_19_int = var_82_int;
					var_41_cvector = var_83_cvector;
					var_42_cvector = var_84_cvector;
					func_158();
					var_19_int = var_19_int + (int)-1;
					goto Label_113;
				}
			}
		}
		var_86_bool = var_1_bool;
		if(var_86_bool != 0) {
			var_17_bool = 1;
			goto Label_113;
		}
		var_19_int = 0;
		goto Label_76;
	}
	return 20;
	
}
EMIT "Stack[-23] = (bool) 1";
EMIT "Return(); Pop(20)";
EMIT "Stack[-10] = 0";


func_827(var_0_int)
{
	var_120_object = Obj();
	var_120_object = var_0_int;
	func_1717(var_120_object);
	return 0;
}


func_1593(var_30_string, var_31_int, var_32_int, var_33_int)
{
	var_34_int = 0; var_35_bool = 0; var_36_int = 0; var_37_bool = 0;
	var_38_bool = 0; var_39_int = 0; var_40_int = 0;
	var_31_int = var_39_int;
	var_32_int = var_40_int;
	func_1683(var_38_bool, var_39_int, var_40_int);
	if(var_38_bool != 0) {
		irand(var_36_int, var_33_int);
		var_45_int = var_36_int + (int)1;
		AddItem(var_37_bool, var_30_string, (int)0, var_45_int);
	}
	return 4;
}


func_1726()
{
	var_357_object = Obj(); var_358_object = Obj();
	GetScene(var_358_object);
	var_360_object = Obj();
	func_1649(var_360_object);
	BroadcastMessage("battle", var_360_object, var_358_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_832(var_461_int)
{
	var_461_int = 0;
	return 0;
}


func_449(var_0_int, var_382_float, var_383_int)
{
	var_384_object = Obj(); var_385_float = 0; var_386_float = 0; var_387_object = Obj(); var_388_float = 0; var_389_float = 0;
	var_391_float = var_382_float * (float)0.8999999761581421;
	GetVictim(var_391_float, var_387_object);
	ReportAttack(var_0_int);
	var_392_bool = var_387_object == var_0_int;
	if(var_392_bool != 0) {
		var_393_float = 0; var_394_object = Obj(); var_395_int = 0;
		var_387_object = var_394_object;
		var_383_int = var_395_int;
		func_179(var_395_int);
		var_393_float = var_388_float;
		var_396_float = 0; var_397_object = Obj(); var_398_float = 0; var_399_int = 0;
		var_387_object = var_397_object;
		var_388_float = var_398_float;
		var_400_int = 0; var_401_object = Obj(); var_402_int = 0;
		var_387_object = var_401_object;
		var_383_int = var_402_int;
		func_182(var_402_int);
		var_400_int = var_399_int;
		func_1292(var_396_float, var_397_object, var_398_float, var_399_int);
		var_396_float = var_389_float;
		var_461_int = 0;
		func_832(var_461_int);
		ReportHit(var_0_int, var_461_int, var_389_float, var_388_float);
		var_462_object = Obj(); var_463_float = 0;
		var_387_object = var_462_object;
		var_389_float = var_463_float;
		func_839();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_834()
{
	var_253_string = "";
	func_1608("attack_stay");
	return 0;
}


func_1217(var_93_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_94_string = "";
	var_93_string = var_94_string;
	func_1608(var_94_string);
	PlayAnimation("all", var_93_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_93_string);
	RemoveEnvelope();
	return 0;
}


func_1092(var_22_bool, var_23_object)
{
	var_24_bool = 0; var_25_object = Obj();
	var_23_object = var_25_object;
	func_1406(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
	return 0;
}


func_839()
{
	return 0;
}


func_1608(var_94_string)
{
	var_95_bool = 0; var_96_int = 0; var_97_bool = 0; var_98_int = 0; var_99_bool = 0; var_100_float = 0; var_101_cvector = CVector(0,0,0); var_102_cvector = CVector(0,0,0); var_103_bool = 0; var_104_int = 0; var_105_bool = 0; var_106_int = 0; var_107_bool = 0; var_108_float = 0; var_109_cvector = CVector(0,0,0); var_110_cvector = CVector(0,0,0);
	IsExisting3DSound(var_103_bool, var_94_string);
	var_111_bool = var_103_bool == 0; //@nz
	if(var_111_bool != 0) {
		var_104_int = 0;

	Label_1614:
		var_113_int = var_104_int + (int)1;
		var_114_int = var_94_string + var_113_int;
		IsExisting3DSound(var_105_bool, var_114_int);
		var_115_bool = var_105_bool == 0; //@nz
		if(var_115_bool != 0) {
		} else {
			var_104_int = var_104_int + (int)1;
			goto Label_1614;
		}
		var_116_bool = var_104_int == 0; //@nz
		if(var_116_bool != 0) {
			return 16;
		}
		irand(var_106_int, var_104_int);
		var_118_int = var_106_int + (int)1;
		var_94_string = var_94_string + var_118_int;
	}
	Is3DSoundLoaded(var_107_bool, var_94_string);
	var_119_bool = var_107_bool;
	if(var_119_bool != 0) {
		GetEyesHeight(var_108_float);
		GetDirection(var_109_cvector);
		var_110_cvector = var_109_cvector * (int)50;
		var_121_float = GetByIndex(var_110_cvector, 1);
		var_121_float = var_121_float + var_108_float;
		SetByIndex(var_110_cvector, 1) = var_121_float;
		PlayGlobalSound(var_94_string, var_110_cvector);
	}
	return 16;
	
}


func_841(var_486_bool)
{
	var_486_bool = 1;
	return 0;
}


func_1737(var_50_int)
{
	var_51_int = 0; var_52_int = 0;
	GetVariable("branch", var_52_int);
	var_52_int = var_50_int;
	return 2;
}


func_843(var_378_int)
{
	var_378_int = 1;
	return 0;
}


func_1099(var_196_string)
{
	var_196_string = "walk";
	return 0;
}


func_845(var_373_float)
{
	var_373_float = 0.5;
	return 0;
}


func_1101(var_197_string)
{
	var_197_string = "run";
	return 0;
}


func_847(var_2_string, var_127_bool, var_128_object, var_129_float, var_130_float, var_131_bool, var_132_bool)
{
	var_136_bool = 0; var_137_bool = 0; var_138_bool = 0; var_139_bool = 0;
	var_140_object = Obj();
	var_128_object = var_140_object;
	func_1717(var_140_object);
	SetTimer((int)1, (int)5);
	CanSee(var_138_bool, var_128_object);
	var_143_bool = var_138_bool;
	if(var_143_bool != 0) {
		var_2_string = true;
		var_144_object = Obj();
		var_128_object = var_144_object;
		func_1582(var_144_object);
	} else {
		var_2_string = false;
	}
	var_151_bool = 0; var_152_object = Obj();
	var_128_object = var_152_object;
	func_1270(var_151_bool, var_152_object);
	if(var_151_bool != 0) {
		var_155_object = Obj();
		func_1649(var_155_object);
		SendPlayerEnemy(var_128_object, var_155_object);
	}
	var_156_bool = 0; var_157_object = Obj(); var_158_float = 0; var_159_float = 0; var_160_bool = 0; var_161_bool = 0;
	var_128_object = var_157_object;
	var_129_float = var_158_float;
	var_130_float = var_159_float;
	var_131_bool = var_160_bool;
	var_132_bool = var_161_bool;
	func_952(var_138_bool, var_139_bool, var_156_bool, var_157_object, var_158_float, var_159_float, var_160_bool, var_161_bool);
	var_156_bool = var_139_bool;
	var_207_string = var_2_string;
	if(var_207_string != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_139_bool = var_127_bool;
	return 4;
	
}


func_1743(var_15_object)
{
	var_16_int = 0;
	func_1737(var_16_int);
	var_21_bool = var_16_int == (int)1;
	if(var_21_bool != 0) {
		WorkWithCorpse(var_15_object);
	} else {
		Barter(var_15_object);
	}
	return 0;
	
}


func_1103(var_70_object)
{
	var_71_object = Obj();
	var_70_object = var_71_object;
	func_1126(var_71_object);
	SetRTEnvelope((int)50, (int)40);
	
Label_1112:
	Hold();
	goto Label_1112;
}
EMIT "Return(); Pop(0)";


func_1484(var_15_object, var_16_int, var_17_float)
{
	var_18_cvector = CVector(0,0,0); var_19_object = Obj(); var_20_int = 0; var_21_bool = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_int = 0; var_25_int = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_object = Obj(); var_29_int = 0; var_30_bool = 0; var_31_cvector = CVector(0,0,0); var_32_cvector = CVector(0,0,0); var_33_int = 0; var_34_int = 0; var_35_cvector = CVector(0,0,0);
	var_36_bool = 0;
	var_36_bool = 0;
	var_37_bool = 0;
	var_37_bool = 0;
	var_38_object = var_15_object;
	if(var_38_object != 0) {
		var_40_bool = var_16_int != (int)4;
		if(var_40_bool != 0) {
			var_37_bool = 1;
		}
	}
	if(var_37_bool != 0) {
		var_42_bool = var_16_int != (int)5;
		if(var_42_bool != 0) {
			var_36_bool = 1;
		}
	}
	if(var_36_bool != 0) {
		var_43_cvector = CVector(0,0,0); var_44_cvector = CVector(0,0,0);
		var_45_cvector = CVector(0,0,0); var_46_object = Obj();
		var_15_object = var_46_object;
		func_1263(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1655(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		CreateVectorVector(var_28_object);
		var_29_int = 1;

	Label_1513:
		var_57_int = "hit" + var_29_int;
		GetGeometryLocator(var_57_int, var_30_bool, var_31_cvector, var_32_cvector);
		var_58_bool = var_30_bool == 0; //@nz
		if(var_58_bool != 0) {
		} else {
			var_106_int = var_32_cvector | var_27_cvector;
			var_108_bool = var_106_int >= (float)0.7071067690849304;
			if(var_108_bool != 0) {
				@@var_28_object:add(var_31_cvector);
			}
			var_29_int = var_29_int + (int)1;
			goto Label_1513;
		}
		@@var_28_object:size(var_33_int);
		var_59_int = var_33_int;
		if(var_59_int != 0) {
			irand(var_34_int, var_33_int);
			@@var_28_object:get(var_35_cvector, var_34_int);
			var_60_object = Obj(); var_61_int = 0; var_62_float = 0; var_63_cvector = CVector(0,0,0); var_64_cvector = CVector(0,0,0);
			var_15_object = var_60_object;
			var_16_int = var_61_int;
			var_17_float = var_62_float;
			var_35_cvector = var_63_cvector;
			var_64_cvector = -var_27_cvector;
			func_1552(var_62_float, var_63_cvector, var_64_cvector);
			return 18;
		}
		var_28_object = 0;
	}
	var_105_object = Obj();
	var_15_object = var_105_object;
	func_1440(var_105_object);
	return 18;
	
}


func_723(var_297_bool)
{
	var_298_bool = 0;
	var_298_bool = 0;
	var_299_bool = 0;
	func_695(var_298_bool, var_299_bool);
	if(var_299_bool != 0) {
		var_316_bool = 0;
		func_739(var_297_bool, var_298_bool, var_316_bool);
		if(var_316_bool != 0) {
			var_298_bool = 1;
		}
	}
	if(var_298_bool != 0) {
		var_297_bool = 1;
		return 0;
	}
	var_297_bool = 0;
	return 0;
}


func_1365(var_39_bool, var_40_object)
{
	var_41_bool = 0; var_42_bool = 0;
	@@var_40_object:IsDead(var_42_bool);
	var_42_bool = var_39_bool;
	return 2;
}


func_1370(var_28_bool, var_29_object)
{
	var_30_object = Obj(); var_31_object = Obj(); var_32_object = Obj(); var_33_object = Obj();
	var_34_bool = var_29_object == 0; //@ne
	if(var_34_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_35_bool = 0;
	var_35_bool = 0;
	var_38_bool = IsFuncExist(var_29_object, "IsDead", (int)1);
	if(var_38_bool != 0) {
		var_39_bool = 0; var_40_object = Obj();
		var_29_object = var_40_object;
		func_1365(var_39_bool, var_40_object);
		if(var_39_bool != 0) {
			var_35_bool = 1;
		}
	}
	if(var_35_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	GetScene(var_32_object);
	var_43_bool = var_32_object == 0; //@ne
	if(var_43_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	@@var_29_object:GetScene(var_33_object);
	var_44_bool = var_32_object != var_33_object;
	if(var_44_bool != 0) {
		var_28_bool = 0;
		return 4;
	}
	var_28_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1756(var_56_string)
{
	var_57_object = Obj(); var_58_int = 0; var_59_bool = 0; var_60_object = Obj(); var_61_int = 0; var_62_bool = 0;
	CreateInvItem(var_60_object);
	@@var_60_object:SetItemName(var_56_string);
	@@var_60_object:SetProperty("Organ", (int)1);
	@@var_60_object:GetItemID(var_61_int);
	AddItem(var_62_bool, var_60_object, (int)0, (int)1);
	return 6;
}
EMIT "Stack[-3] = 0";


func_1249(var_424_string, var_425_int)
{
	var_427_bool = var_425_int == (int)2;
	if(var_427_bool != 0) {
		var_424_string = "fire";
		return 0;
	EMIT "GOTO 0x4ed";
	}
	var_429_bool = var_425_int == (int)1;
	if(var_429_bool != 0) {
		var_424_string = "bullet";
		return 0;
	}
	var_424_string = "phys";
	return 0;
}


func_739(var_0_int, var_4_int, var_316_bool)
{
	var_317_object = Obj(); var_318_bool = 0; var_319_float = 0; var_320_cvector = CVector(0,0,0); var_321_cvector = CVector(0,0,0); var_322_object = Obj(); var_323_bool = 0; var_324_float = 0; var_325_cvector = CVector(0,0,0); var_326_cvector = CVector(0,0,0);
	GetScene(var_322_object);
	var_323_bool = 0;
	
Label_743:
	var_327_cvector = CVector(0,0,0); var_328_object = Obj();
	var_328_object = var_0_int;
	func_1263(var_327_cvector, var_328_object);
	var_333_int = -var_327_cvector;
	FindDirLength(var_324_float, var_333_int, var_4_int);
	var_334_bool = var_324_float < var_4_int;
	if(var_334_bool != 0) {
	} else {
		Face(var_0_int);
		PlayAnimation("all", "bjump");
		@@@var_0_int:GetPFPosition(var_325_cvector);
		GetPFPosition(var_326_cvector);
		WaitForAnimEnd();
		func_827(var_326_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_323_bool = 1;
		var_338_bool = 0;
		func_695(var_326_cvector, var_338_bool);
		var_339_bool = var_338_bool == 0; //@nz
		if(var_339_bool != 0) {
			goto Label_781;
		}
		goto Label_743;
	}
Label_781:
	var_323_bool = var_316_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_1126(var_71_object)
{
	var_72_cvector = CVector(0,0,0); var_73_cvector = CVector(0,0,0); var_74_cvector = CVector(0,0,0); var_75_cvector = CVector(0,0,0); var_76_string = ""; var_77_object = Obj(); var_78_bool = 0; var_79_bool = 0; var_80_float = 0; var_81_cvector = CVector(0,0,0); var_82_cvector = CVector(0,0,0); var_83_cvector = CVector(0,0,0); var_84_cvector = CVector(0,0,0); var_85_cvector = CVector(0,0,0); var_86_string = ""; var_87_object = Obj(); var_88_bool = 0; var_89_bool = 0; var_90_float = 0; var_91_cvector = CVector(0,0,0);
	var_92_bool = var_71_object == 0; //@ne
	if(var_92_bool != 0) {
		var_93_string = "";
		func_1217("fdie");
	} else {
		@@var_71_object:GetPosition(var_82_cvector);
		GetPosition(var_83_cvector);
		GetDirection(var_84_cvector);
		var_85_cvector = var_83_cvector - var_82_cvector;
		var_125_float = GetByIndex(var_85_cvector, 0);
		var_126_float = GetByIndex(var_84_cvector, 0);
		var_127_float = var_125_float * var_126_float;
		var_128_float = GetByIndex(var_85_cvector, 2);
		var_129_float = GetByIndex(var_84_cvector, 2);
		var_130_float = var_128_float * var_129_float;
		var_131_int = var_127_float + var_130_float;
		var_133_bool = var_131_int >= (int)0;
		if(var_133_bool != 0) {
			var_86_string = "fdie";
		} else {
				var_86_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_71_object = var_87_object;
		var_136_bool = IsFuncExist(var_71_object, "GetScriptProperty", (int)2);
		if(var_136_bool != 0) {
			@@var_71_object:HasScriptProperty(var_88_bool, "Owner");
			var_138_bool = var_88_bool;
			if(var_138_bool != 0) {
				@@var_71_object:GetScriptProperty(var_87_object, "Owner");
				var_140_bool = var_87_object == 0; //@ne
				if(var_140_bool != 0) {
					var_71_object = var_87_object;
				}
			}
		}
		var_143_bool = IsFuncExist(var_87_object, "@GetEyesHeight", (int)1);
		if(var_143_bool != 0) {
			@@var_87_object:GetEyesHeight(var_90_float);
			var_91_cvector = CVector(0.0, 0.0, 0.0);
			var_144_float = GetByIndex(var_91_cvector, 1);
			var_90_float = var_144_float;
			SetByIndex(var_91_cvector, 1) = var_144_float;
			LookAsync(var_71_object, "head", var_91_cvector);
			var_89_bool = 1;
		} else {
			var_89_bool = 0;

		}
		var_146_string = "";
		var_86_string = var_146_string;
		func_1608(var_146_string);
		PlayAnimation("all", var_86_string);
		WaitForAnimEnd();
		var_148_bool = var_89_bool;
		if(var_148_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_86_string);
		RemoveEnvelope();
		var_87_object = 0;
	}
	return 20;
	
}


func_488(var_0_int, var_1_bool, var_345_bool, var_346_float)
{
	var_347_int = 0; var_348_bool = 0; var_349_int = 0; var_350_string = ""; var_351_int = 0; var_352_bool = 0; var_353_int = 0; var_354_string = "";
	func_827(var_354_string);
	irand(var_351_int, var_1_bool);
	var_351_int = var_351_int + (int)1;
	Face(var_0_int);
	SetAttackState((bool)1);
	func_1726();
	var_363_int = "attack_begin" + var_351_int;
	PlayAnimation("all", var_363_int);
	WaitForAnimEnd();
	func_795(var_353_int, var_354_string);
	var_379_bool = 0; var_380_object = Obj();
	var_380_object = var_0_int;
	func_1406(var_379_bool, var_380_object);
	var_381_bool = var_379_bool == 0; //@nz
	if(var_381_bool != 0) {
		StopAsync();
		var_345_bool = 0;
		return 8;
	}
	var_382_float = 0; var_383_int = 0;
	var_346_float = var_382_float;
	var_351_int = var_383_int;
	func_449(var_354_string, var_382_float, var_383_int);
	var_466_int = "attack_middle" + var_351_int;
	HasAnimation(var_352_bool, "all", var_466_int);
	var_467_bool = var_352_bool;
	if(var_467_bool != 0) {
		func_1726();
		var_470_int = "attack_middle" + var_351_int;
		PlayAnimation("all", var_470_int);
		WaitForAnimEnd();
		func_827(var_354_string);
		var_471_bool = 0; var_472_object = Obj();
		var_472_object = var_0_int;
		func_1406(var_471_bool, var_472_object);
		var_473_bool = var_471_bool == 0; //@nz
		if(var_473_bool != 0) {
			StopAsync();
			var_345_bool = 0;
			return 8;
		}
		var_474_float = 0; var_475_int = 0;
		var_346_float = var_474_float;
		var_351_int = var_475_int;
		func_449(var_354_string, var_474_float, var_475_int);
		var_353_int = 1;

	Label_565:
		var_477_int = "attack_middle" + var_351_int;
		var_479_int = var_477_int + "_";
		var_354_string = var_479_int + var_353_int;
		HasAnimation(var_352_bool, "all", var_354_string);
		var_481_bool = var_352_bool == 0; //@nz
		if(var_481_bool != 0) {
		} else {
			func_1726();
			PlayAnimation("all", var_354_string);
			WaitForAnimEnd();
			func_827(var_354_string);
			var_497_bool = 0; var_498_object = Obj();
			var_498_object = var_0_int;
			func_1406(var_497_bool, var_498_object);
			var_499_bool = var_497_bool == 0; //@nz
			if(var_499_bool != 0) {
				StopAsync();
				var_345_bool = 0;
				var_500_float = 0; var_501_int = 0;
				var_346_float = var_500_float;
				var_351_int = var_501_int;
				func_449(var_354_string, var_500_float, var_501_int);
				var_353_int = var_353_int + (int)1;
				goto Label_565;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_485_int = "attack_end" + var_351_int;
	PlayAnimation("all", var_485_int);
	var_486_bool = 0;
	func_841(var_486_bool);
	if(var_486_bool != 0) {
		var_487_bool = 0; var_488_float = 0;
		func_625(var_487_bool, (float)0.75);
		StopAsync();
	}
	var_345_bool = 1;
	return 8;
	
}


func_1773()
{
	var_50_int = 0;
	func_1737(var_50_int);
	var_55_bool = var_50_int != (int)1;
	if(var_55_bool != 0) {
		return 0;
	}
	var_56_string = "";
	func_1756("liver");
	var_67_string = "";
	func_1756("kidney");
	var_68_string = "";
	func_1756("heart");
	var_69_string = "";
	func_1756("blood");
	return 0;
}


func_1263(var_45_cvector, var_46_object)
{
	var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0); var_49_cvector = CVector(0,0,0); var_50_cvector = CVector(0,0,0);
	GetPosition(var_49_cvector);
	@@var_46_object:GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
	return 4;
}


func_1649(var_11_object)
{
	var_12_object = Obj(); var_13_object = Obj();
	self(var_13_object);
	var_13_object = var_11_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_625(var_487_bool, var_488_float)
{
	var_489_float = 0; var_490_bool = 0; var_491_float = 0; var_492_bool = 0;
	rand(var_491_float);
	var_493_bool = var_491_float < var_488_float;
	if(var_493_bool != 0) {

	Label_630:
		IsAnimationPlaying(var_492_bool);
		var_494_bool = var_492_bool == 0; //@nz
		if(var_494_bool != 0) {
		} else {
			var_495_bool = 0;
			func_723(var_495_bool);
			if(var_495_bool != 0) {
				var_487_bool = 1;
				sync();
				goto Label_630;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_827(var_492_bool);
	}
	goto Label_650;
	
Label_650:
	var_487_bool = 0;
	return 4;
	
}


func_1270(var_151_bool, var_152_object)
{
	var_153_bool = 0; var_154_bool = 0;
	IsPlayerActor(var_152_object, var_154_bool);
	var_154_bool = var_151_bool;
	return 2;
}


func_1655(var_43_cvector, var_44_cvector)
{
	var_51_float = 0; var_52_float = 0;
	var_53_int = var_44_cvector | var_44_cvector;
	var_52_float = sqrt(var_53_int);
	var_54_float = 9.999999974752427e-07;
	var_55_bool = var_52_float < var_54_float;
	if(var_55_bool != 0) {
		var_43_cvector = CVector(0.0, 0.0, 0.0);
		return 2;
	}
	var_43_cvector = var_44_cvector / var_52_float;
	return 2;
}


func_1275(var_46_bool, var_47_object, var_48_string)
{
	var_49_bool = 0; var_50_bool = 0;
	var_53_bool = IsFuncExist(var_47_object, "HasProperty", (int)2);
	var_54_bool = var_53_bool == 0; //@nz
	if(var_54_bool != 0) {
		var_46_bool = 0;
		return 2;
	}
	@@var_47_object:HasProperty(var_48_string, var_50_bool);
	var_50_bool = var_46_bool;
	return 2;
}


func_1406(var_24_bool, var_25_object)
{
	var_26_int = 0; var_27_int = 0;
	var_28_bool = 0; var_29_object = Obj();
	var_25_object = var_29_object;
	func_1370(var_28_bool, var_29_object);
	var_45_bool = var_28_bool == 0; //@nz
	if(var_45_bool != 0) {
		var_24_bool = 0;
		return 2;
	}
	var_46_bool = 0; var_47_object = Obj(); var_48_string = "";
	var_25_object = var_47_object;
	func_1275(var_46_bool, var_47_object, "noaccess");
	var_55_bool = var_46_bool == 0; //@nz
	if(var_55_bool != 0) {
		var_24_bool = 1;
		return 2;
	}
	@@var_25_object:GetProperty("noaccess", var_27_int);
	var_24_bool = var_27_int == (int)0;
	return 2;
}


