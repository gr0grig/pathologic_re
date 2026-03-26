// @IMPORTS: Hold/0,Sleep/1,RemoveActor/1,FindActor/2,IsPlayerActor/2,PlayGlobalMusic/1,SendPlayerEnemy/2,GetPFPosition/1,CanReachByPF/2,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,HasAnimation/3,IsExisting3DSound/2,GetAnimationOffset/3,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,GetScene/1,FindDirLength/3,Speak/1,SetTimer/2,CanSee/2,UnlookAsync/1,KillTimer/1,GetPosition/1,FindPathTo/2,RotatePath/2,FollowPath/5,Sleep/2,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,IsDead/1,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,CreateVectorVector/1,GetGeometryLocator/4,AddActorByType/6,RotateAsync/2,Is3DSoundLoaded/2,GetEyesHeight/1,PlayGlobalSound/2,self/1,CreateFloatVector/1,RumblePlay/2,SendWorldWndMessage/2,BroadcastMessage/3,GetProperty/2,SignalDeath/1
// @STRINGS: W:cleanup|W:player|W:@GetAttackDistance|A:GetAttackDistance|W:attack|A:GetPFPosition|W:all|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_begin|W:bjump|W:attack_middle|W:_|W:attack_end|W:IsAttacking|A:IsAttacking|W:head|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:fire|W:bullet|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:fhit|W:bhit|W:hit_react|W:1|W:2|A:add|A:size|A:get|W:scripted|W:blood_dir.xml|W:battle
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars= params=0
// @EVENT_5: op=0x3 vars=
// @EVENT_26: op=0xc vars=string
// @TASK_1: vars=object,int,int,bool,float,int params=0
// @TASK_2: vars=bool,object,bool params=6
// @EVENT_7: op=0x2f6 vars=int
// @EVENT_1: op=0x311 vars=object
// @EVENT_2: op=0x320 vars=object
// @EVENT_10: op=0x3a6 vars=object
// @EVENT_41: op=0x3b1 vars=object
// @TASK_3: vars= params=1
// @EVENT_22: op=0x443 vars=object,int,float,float
// @EVENT_16: op=0x445 vars=object,string
// @EVENT_41: op=0x447 vars=object
// @STANDALONE_EVENT_6: op=0x5fd vars=
// @STANDALONE_EVENT_22: op=0x60d vars=object,int,float,float
// @STANDALONE_EVENT_43: op=0x615 vars=object,int,float,float,cvector,cvector
// @STANDALONE_EVENT_16: op=0x61f vars=object,string
// @STANDALONE_EVENT_41: op=0x62c vars=object
// @PE: 0xc,0x29,0x2c,0x2bd,0x2f6,0x311,0x320,0x394,0x3a6,0x3b1,0x3ba,0x3c5,0x429,0x443,0x445,0x447,0x449,0x5c6,0x5cd,0x605,0x60d,0x615,0x62c

task_0_event_5(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	Sleep((int)4);
	TaskCall(1);
	func_22();
	TaskReturn();
	return 0;
}


task_0_event_26(var_0_string, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_float, var_6_int, var_7_bool, var_8_object, var_9_bool)
{
	var_11_bool = var_9_bool == "cleanup";
	if(var_11_bool != 0) {
		var_12_object = Obj();
		func_1462(var_12_object);
		RemoveActor(var_12_object);
	}
	return 0;
}


task_2_event_7(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_int)
{
	var_11_bool = var_9_int == (int)1;
	if(var_11_bool != 0) {
		var_12_object = Obj();
		var_12_object = var_1_int;
		func_1513(var_12_object);
	} else {
		var_17_int = 0;
		var_9_int = var_17_int;
		func_916(var_8_bool, var_9_int, var_17_int);
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
		func_1410(var_13_object);
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
	func_772(var_9_object);
	var_9_object = Obj();
	func_1580();
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


event_6(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	var_9_object = Obj();
	func_1462(var_9_object);
	RemoveActor(var_9_object);
	Hold();
	return 0;
}


event_22(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool, var_9_object, var_10_int, var_11_float, var_12_float)
{
	var_13_object = Obj(); var_14_int = 0; var_15_float = 0;
	var_9_object = var_13_object;
	var_10_int = var_14_int;
	var_11_float = var_15_float;
	func_1317(var_13_object, var_14_int, var_15_float);
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
	func_1385(var_17_float, var_18_cvector, var_19_cvector);
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
	func_1541(var_10_object);
	return 0;
}


main(var_0_object, var_1_int, var_2_int, var_3_bool, var_4_float, var_5_int, var_6_bool, var_7_object, var_8_bool)
{
	Hold();
	return 0;
}


func_514(var_0_object, var_280_bool, var_281_float)
{
	var_282_bool = 0; var_283_cvector = CVector(0,0,0); var_284_cvector = CVector(0,0,0); var_285_cvector = CVector(0,0,0); var_286_float = 0; var_287_bool = 0; var_288_cvector = CVector(0,0,0); var_289_cvector = CVector(0,0,0); var_290_cvector = CVector(0,0,0); var_291_float = 0;
	
Label_515:
	IsAnimationPlaying(var_287_bool);
	var_292_bool = var_287_bool == 0; //@nz
	if(var_292_bool != 0) {
	} else {
		var_293_bool = 0;
		func_585(var_293_bool);
		if(var_293_bool != 0) {
			var_280_bool = 1;
			return 10;
		}
		var_336_bool = 0; var_337_object = Obj();
		var_337_object = var_0_object;
		func_1249(var_336_bool, var_337_object);
		var_338_bool = var_336_bool == 0; //@nz
		if(var_338_bool != 0) {
			var_280_bool = 0;
			return 10;
		}
		@@@var_0_object:GetPFPosition(var_288_cvector);
		GetPFPosition(var_289_cvector);
		var_290_cvector = var_288_cvector - var_289_cvector;
		var_291_float = var_290_cvector | var_290_cvector;
		var_339_float = var_281_float * var_281_float;
		var_340_bool = var_291_float < var_339_float;
		if(var_340_bool != 0) {
			var_341_bool = 0; var_342_float = 0;
			var_281_float = var_342_float;
			func_350(var_290_cvector, var_291_float, var_341_bool, var_342_float);
			var_280_bool = 1;
			sync();
			goto Label_515;
		}
		return 10;
	}
	func_689(var_291_float);
	var_280_bool = 0;
	return 10;
	
}


func_1410(var_13_object)
{
	var_14_float = 0; var_15_cvector = CVector(0,0,0); var_16_float = 0; var_17_cvector = CVector(0,0,0);
	@@var_13_object:GetEyesHeight(var_16_float);
	var_17_cvector = CVector(0.0, 0.0, 0.0);
	var_18_float = GetByIndex(var_17_cvector, 1);
	var_16_float = var_18_float;
	SetByIndex(var_17_cvector, 1) = var_18_float;
	LookAsync(var_13_object, "head", var_17_cvector);
	return 4;
}


func_772(var_2_int)
{
	KillTimer((int)1);
	var_11_int = var_2_int;
	if(var_11_int != 0) {
		var_2_int = false;
		UnlookAsync("head");
	}
	func_938(var_9_object);
	return 0;
}


func_1541(var_10_object)
{
	var_11_object = Obj();
	var_10_object = var_11_object;
	TaskCall(3);
	func_965(var_11_object);
	TaskReturn();
	return 0;
}


func_646(var_0_object, var_243_bool)
{
	var_244_bool = 0; var_245_bool = 0;
	var_248_bool = IsFuncExist(var_0_object, "IsAttacking", (int)1);
	if(var_248_bool != 0) {
		@@@var_0_object:IsAttacking(var_245_bool);
		var_245_bool = var_243_bool;
		return 2;
	}
	var_243_bool = 0;
	return 2;
}


func_1421(var_35_string)
{
	var_36_bool = 0; var_37_int = 0; var_38_bool = 0; var_39_int = 0; var_40_bool = 0; var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_cvector = CVector(0,0,0); var_44_bool = 0; var_45_int = 0; var_46_bool = 0; var_47_int = 0; var_48_bool = 0; var_49_float = 0; var_50_cvector = CVector(0,0,0); var_51_cvector = CVector(0,0,0);
	IsExisting3DSound(var_44_bool, var_35_string);
	var_52_bool = var_44_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_45_int = 0;

	Label_1427:
		var_54_int = var_45_int + (int)1;
		var_55_int = var_35_string + var_54_int;
		IsExisting3DSound(var_46_bool, var_55_int);
		var_56_bool = var_46_bool == 0; //@nz
		if(var_56_bool != 0) {
		} else {
			var_45_int = var_45_int + (int)1;
			goto Label_1427;
		}
		var_57_bool = var_45_int == 0; //@nz
		if(var_57_bool != 0) {
			return 16;
		}
		irand(var_47_int, var_45_int);
		var_59_int = var_47_int + (int)1;
		var_35_string = var_35_string + var_59_int;
	}
	Is3DSoundLoaded(var_48_bool, var_35_string);
	var_60_bool = var_48_bool;
	if(var_60_bool != 0) {
		GetEyesHeight(var_49_float);
		GetDirection(var_50_cvector);
		var_51_cvector = var_50_cvector * (int)50;
		var_62_float = GetByIndex(var_51_cvector, 1);
		var_62_float = var_62_float + var_49_float;
		SetByIndex(var_51_cvector, 1) = var_62_float;
		PlayGlobalSound(var_35_string, var_51_cvector);
	}
	return 16;
	
}


func_657(var_2_int, var_5_int)
{
	var_360_float = 0; var_361_int = 0; var_362_float = 0; var_363_int = 0;
	var_364_bool = var_2_int == 0; //@nz
	if(var_364_bool != 0) {
		return 4;
	}
	var_365_int = var_5_int;
	if(var_365_int != 0) {
		var_5_int = var_5_int + (int)-1;
		var_368_bool = var_5_int > (int)0;
		if(var_368_bool != 0) {
			return 4;
		}
	}
	rand(var_362_float);
	var_369_float = 0;
	func_707(var_369_float);
	var_370_bool = var_362_float < var_369_float;
	if(var_370_bool != 0) {
		irand(var_363_int, var_2_int);
		var_363_int = var_363_int + (int)1;
		var_373_int = "attack" + var_363_int;
		Speak(var_373_int);
		var_374_int = 0;
		func_705(var_374_int);
		var_5_int = var_374_int;
	}
	return 4;
}


func_276(var_1_int, var_2_int, var_4_float)
{
	var_45_bool = 0; var_46_bool = 0; var_47_cvector = CVector(0,0,0); var_48_bool = 0; var_49_bool = 0; var_50_cvector = CVector(0,0,0);
	var_1_int = 0;
	
Label_278:
	var_54_int = var_1_int + (int)1;
	var_55_int = "attack_begin" + var_54_int;
	HasAnimation(var_48_bool, "all", var_55_int);
	var_56_bool = var_48_bool == 0; //@nz
	if(var_56_bool != 0) {
	} else {
			var_1_int = var_1_int + (int)1;
			goto Label_278;
	}
	var_2_int = 0;
	
Label_292:
	var_59_int = var_2_int + (int)1;
	var_60_int = "attack" + var_59_int;
	IsExisting3DSound(var_49_bool, var_60_int);
	var_61_bool = var_49_bool == 0; //@nz
	if(var_61_bool != 0) {
	} else {
		var_2_int = var_2_int + (int)1;
		goto Label_292;

	}
	GetAnimationOffset(var_50_cvector, "all", "bjump");
	var_64_float = GetByIndex(var_50_cvector, 2);
	var_4_float = -var_64_float;
	return 6;
	
}


func_916(var_0_object, var_1_int, var_17_int)
{
	var_19_bool = var_17_int != (int)0;
	if(var_19_bool != 0) {
		return 0;
	}
	var_20_bool = 0; var_21_object = Obj();
	var_21_object = var_1_int;
	func_954(var_20_bool, var_21_object);
	var_56_bool = var_20_bool == 0; //@nz
	if(var_56_bool != 0) {
		var_0_object = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


func_22()
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, "player");
	var_19_bool = var_17_object == 0; //@nz
	if(var_19_bool != 0) {
		return 2;
	}
Label_29:
	var_20_object = Obj(); var_21_bool = 0; var_22_float = 0;
	var_17_object = var_20_object;
	func_47(var_13_bool, var_14_float, var_15_int, var_16_object, var_17_object, var_20_object, (bool)1, (float)180.0);
	Sleep((int)1);
	goto Label_29;
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


func_1317(var_13_object, var_14_int, var_15_float)
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
		func_1111(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1468(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		CreateVectorVector(var_26_object);
		var_27_int = 1;

	Label_1346:
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
			goto Label_1346;
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
			func_1385(var_60_float, var_61_cvector, var_62_cvector);
			return 18;
		}
		var_26_object = 0;
	}
	var_103_object = Obj();
	var_13_object = var_103_object;
	func_1273(var_103_object);
	return 18;
	
}


func_41(var_389_float)
{
	var_389_float = 0.10000000149011612;
	return 0;
}


func_938(var_0_object)
{
	var_0_object = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1065(var_34_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	var_35_string = "";
	var_34_string = var_35_string;
	func_1421(var_35_string);
	PlayAnimation("all", var_34_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_34_string);
	RemoveEnvelope();
	return 0;
}


func_44(var_396_int)
{
	var_396_int = 0;
	return 0;
}


func_557(var_0_object, var_295_bool)
{
	var_296_cvector = CVector(0,0,0); var_297_cvector = CVector(0,0,0); var_298_cvector = CVector(0,0,0); var_299_float = 0; var_300_float = 0; var_301_cvector = CVector(0,0,0); var_302_cvector = CVector(0,0,0); var_303_cvector = CVector(0,0,0); var_304_float = 0; var_305_float = 0;
	var_306_bool = 0; var_307_object = Obj();
	var_307_object = var_0_object;
	func_1249(var_306_bool, var_307_object);
	var_308_bool = var_306_bool == 0; //@nz
	if(var_308_bool != 0) {
		var_295_bool = 0;
		return 10;
	}
	var_309_bool = 0;
	func_646(var_305_float, var_309_bool);
	if(var_309_bool != 0) {
		@@@var_0_object:GetPFPosition(var_301_cvector);
		GetPFPosition(var_302_cvector);
		var_303_cvector = var_301_cvector - var_302_cvector;
		var_304_float = var_303_cvector | var_303_cvector;
		@@@var_0_object:GetAttackDistance(var_305_float);
		var_305_float = var_305_float + (int)50;
		var_311_float = var_305_float * var_305_float;
		var_295_bool = var_304_float <= var_311_float;
		return 10;
	}
	var_295_bool = 0;
	return 10;
}


func_814(var_0_object, var_1_int, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool)
{
	var_158_bool = 0; var_159_bool = 0; var_160_object = Obj(); var_161_cvector = CVector(0,0,0); var_162_cvector = CVector(0,0,0); var_163_cvector = CVector(0,0,0); var_164_float = 0; var_165_object = Obj(); var_166_bool = 0; var_167_bool = 0; var_168_object = Obj(); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0); var_172_float = 0; var_173_object = Obj();
	var_0_object = false;
	var_1_int = var_153_object;
	var_157_bool = var_167_bool;
	
Label_818:
	var_174_bool = 0; var_175_object = Obj();
	var_153_object = var_175_object;
	func_954(var_174_bool, var_175_object);
	var_178_bool = var_174_bool == 0; //@nz
	if(var_178_bool != 0) {
		var_152_bool = 0;
		return 16;
	}
	@@var_153_object:GetPosition(var_169_cvector);
	GetPosition(var_170_cvector);
	var_171_cvector = var_169_cvector - var_170_cvector;
	var_172_float = var_171_cvector | var_171_cvector;
	var_179_bool = 0;
	var_179_bool = 0;
	var_181_bool = var_155_float > (int)0;
	if(var_181_bool != 0) {
		var_182_float = var_155_float * var_155_float;
		var_183_bool = var_172_float > var_182_float;
		if(var_183_bool != 0) {
			var_179_bool = 1;
		}
	}
	if(var_179_bool != 0) {
		Stop();
		var_152_bool = 0;
		return 16;
	}
	var_184_float = var_154_float * var_154_float;
	var_185_bool = var_172_float > var_184_float;
	if(var_185_bool != 0) {
		@@var_153_object:GetPFPosition(var_169_cvector);
		FindPathTo(var_173_object, var_169_cvector);
		var_186_bool = var_173_object != 0; //@nn
		if(var_186_bool != 0) {
			var_173_object = var_168_object;
			var_173_object = 0;
		}
		var_187_bool = var_168_object != 0; //@nn
		if(var_187_bool != 0) {
			var_188_bool = var_167_bool;
			if(var_188_bool == 0) goto Label_867;
			var_167_bool = 0;
			RotatePath(var_168_object, var_166_bool);
			var_189_bool = var_166_bool == 0; //@nz
			if(var_189_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_192_string = "";
				func_961(var_192_string);
				var_193_string = "";
				func_963(var_193_string);
				FollowPath(var_168_object, var_156_bool, var_166_bool, var_192_string, var_193_string);
				var_194_bool = var_166_bool == 0; //@nz
				if(var_194_bool != 0) {
					var_195_object = var_0_object;
					if(var_195_object != 0) {
						var_168_object = 0;
						goto Label_914;
					EMIT "GOTO 0x377";
					}
				} else {
					var_168_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_166_bool);
					var_198_bool = var_166_bool == 0; //@nz
					if(var_198_bool != 0) {
						var_199_object = var_0_object;
						if(var_199_object != 0) {
							var_168_object = 0;
							goto Label_914;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_914;
	}
			var_173_object = 0;
			goto Label_912;

		Label_912:
			var_168_object = 0;

		}
		goto Label_818;
	}
Label_914:
	var_152_bool = !var_0_object;
	return 16;
	
}


func_47(var_0_object, var_3_bool, var_5_int, var_20_object, var_21_bool, var_22_float, var_129_bool, var_221_bool)
{
	var_23_float = 0; var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_bool = 0; var_27_bool = 0; var_28_float = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_cvector = CVector(0,0,0); var_32_bool = 0; var_33_float = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_float = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_cvector = CVector(0,0,0); var_43_bool = 0; var_44_float = 0;
	func_276(var_42_cvector, var_43_bool, var_44_float);
	var_5_int = 0;
	var_69_bool = IsFuncExist(var_20_object, "@GetAttackDistance", (int)1);
	if(var_69_bool != 0) {
		@@var_20_object:GetAttackDistance(var_34_float);
		var_34_float = var_34_float + (int)50;
	} else {
							var_22_float = var_34_float;
	}
	var_72_bool = var_34_float >= (int)150;
	if(var_72_bool != 0) {
		var_34_float = 150;
	}
	var_3_bool = false;
	var_0_object = var_20_object;
	IsPlayerActor(var_0_object, var_37_bool);
	var_73_bool = var_37_bool;
	if(var_73_bool != 0) {
		PlayGlobalMusic("attack");
		var_75_object = Obj();
		func_1462(var_75_object);
		SendPlayerEnemy(var_20_object, var_75_object);
	}
	var_78_bool = var_21_bool;
	if(var_78_bool != 0) {
		var_38_bool = 0;
	} else {
						var_38_bool = 1;

	}
	var_39_float = (float)400.0 + var_34_float;
	
Label_87:
	var_80_bool = 0;
	var_80_bool = 0;
	var_81_bool = 0; var_82_object = Obj();
	var_82_object = var_0_object;
	func_1249(var_81_bool, var_82_object);
	if(var_81_bool != 0) {
		var_115_bool = var_3_bool == 0; //@nz
		if(var_115_bool != 0) {
			var_80_bool = 1;
		}
	}
	if(var_80_bool != 0) {
		func_689(var_44_float);
		@@@var_0_object:GetPFPosition(var_35_cvector);
		GetPFPosition(var_36_cvector);
		var_40_cvector = var_35_cvector - var_36_cvector;
		var_41_float = var_40_cvector | var_40_cvector;
		var_121_float = var_39_float * var_39_float;
		var_122_bool = var_41_float >= var_121_float;
		if(var_122_bool != 0) {
			var_123_bool = 0; var_124_object = Obj(); var_125_float = 0; var_126_float = 0; var_127_bool = 0; var_128_bool = 0;
			var_124_object = var_0_object;
			var_34_float = var_125_float;
			TaskCall(2);
			func_709(var_131_bool, var_123_bool, var_124_object, var_125_float, (float)10000.0, (bool)1, (bool)0);
			TaskReturn();
			var_206_bool = var_129_bool == 0; //@nz
			if(var_206_bool != 0) {
			} else {
				var_38_bool = 0;
		} else {
				var_212_float = var_22_float * var_22_float;
				var_213_bool = var_41_float >= var_212_float;
				if(var_213_bool != 0) {
					@@@var_0_object:GetPFPosition(var_42_cvector);
					CanReachByPF(var_43_bool, var_42_cvector);
					var_214_bool = var_43_bool == 0; //@nz
					if(var_214_bool != 0) {
						var_215_bool = 0; var_216_object = Obj(); var_217_float = 0; var_218_float = 0; var_219_bool = 0; var_220_bool = 0;
						var_216_object = var_0_object;
						var_34_float = var_217_float;
						TaskCall(2);
						func_709(var_223_bool, var_215_bool, var_216_object, var_217_float, (float)10000.0, (bool)1, (bool)0);
						TaskReturn();
						var_224_bool = var_221_bool == 0; //@nz
						if(var_224_bool != 0) {
							goto Label_259;
						}
						var_38_bool = 0;
						goto Label_87;
					}
					var_225_bool = var_38_bool == 0; //@nz
					if(var_225_bool != 0) {
						var_226_object = Obj();
						var_226_object = var_0_object;
						func_1399(var_226_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						func_689(var_44_float);
						StopAsync();
						var_38_bool = 1;
						var_237_bool = 0; var_238_object = Obj();
						var_238_object = var_0_object;
						func_1249(var_237_bool, var_238_object);
						var_239_bool = var_237_bool == 0; //@nz
						if(var_239_bool != 0) {
							goto Label_259;
						}
					}
					rand(var_44_float);
					var_240_bool = 0;
					var_242_bool = var_44_float < (float)0.25;
					if(var_242_bool != 1) {
						var_243_bool = 0;
						func_646((bool)1, var_243_bool);
						if(var_243_bool != 1) {
							var_240_bool = 0;
						}
					}
					if(var_240_bool != 0) {
						Face(var_0_object);
						func_696();
						PlayAnimation("all", "attack_stay");
						var_280_bool = 0; var_281_float = 0;
						var_22_float = var_281_float;
						func_514(var_44_float, var_280_bool, var_281_float);
						StopAsync();
					} else {
						Face(var_0_object);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						func_689(var_44_float);
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_502_bool = 0;
						func_646(var_44_float, var_502_bool);
						var_503_bool = var_502_bool == 0; //@nz
						if(var_503_bool == 0) goto Label_249;
						var_504_bool = 0; var_505_object = Obj();
						var_505_object = var_0_object;
						func_1249(var_504_bool, var_505_object);
						var_506_bool = var_504_bool == 0; //@nz
						if(var_506_bool != 0) {
							goto Label_259;
						}
						@@@var_0_object:GetPFPosition(var_35_cvector);
						GetPFPosition(var_36_cvector);
						var_40_cvector = var_35_cvector - var_36_cvector;
						var_41_float = var_40_cvector | var_40_cvector;
						var_507_float = var_22_float * var_22_float;
						var_508_bool = var_41_float < var_507_float;
						if(var_508_bool == 0) goto Label_249;
						var_509_bool = 0; var_510_float = 0;
						var_22_float = var_510_float;
						func_350(var_43_bool, var_44_float, var_509_bool, var_510_float);
						var_511_bool = var_509_bool == 0; //@nz
						if(var_511_bool == 0) goto Label_249;
						goto Label_259;
				}
					var_512_bool = 0; var_513_float = 0;
					var_22_float = var_513_float;
					func_350(var_43_bool, var_44_float, var_512_bool, var_513_float);
					var_514_bool = var_512_bool == 0; //@nz
					if(var_514_bool != 0) {
						goto Label_259;
					}
					var_38_bool = 1;

				}
			Label_249:
				goto Label_258;
		}
		Label_258:
			goto Label_87;

		}
	}
Label_259:
	WaitForAnimEnd();
	var_207_bool = var_3_bool;
	if(var_207_bool != 0) {
		return 22;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_210_bool = var_37_bool;
	if(var_210_bool != 0) {
		Sleep((float)2.0);
	}
	return 22;
	
}


func_689(var_0_object)
{
	var_116_object = Obj();
	var_116_object = var_0_object;
	func_1513(var_116_object);
	return 0;
}


func_1462(var_9_object)
{
	var_10_object = Obj(); var_11_object = Obj();
	self(var_11_object);
	var_11_object = var_9_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_694(var_457_int)
{
	var_457_int = 0;
	return 0;
}


func_696()
{
	var_249_string = "";
	func_1421("attack_stay");
	return 0;
}


func_311(var_0_object, var_378_float, var_379_int)
{
	var_380_object = Obj(); var_381_float = 0; var_382_float = 0; var_383_object = Obj(); var_384_float = 0; var_385_float = 0;
	var_387_float = var_378_float * (float)0.8999999761581421;
	GetVictim(var_387_float, var_383_object);
	ReportAttack(var_0_object);
	var_388_bool = var_383_object == var_0_object;
	if(var_388_bool != 0) {
		var_389_float = 0; var_390_object = Obj(); var_391_int = 0;
		var_383_object = var_390_object;
		var_379_int = var_391_int;
		func_41(var_391_int);
		var_389_float = var_384_float;
		var_392_float = 0; var_393_object = Obj(); var_394_float = 0; var_395_int = 0;
		var_383_object = var_393_object;
		var_384_float = var_394_float;
		var_396_int = 0; var_397_object = Obj(); var_398_int = 0;
		var_383_object = var_397_object;
		var_379_int = var_398_int;
		func_44(var_398_int);
		var_396_int = var_395_int;
		func_1135(var_392_float, var_393_object, var_394_float, var_395_int);
		var_392_float = var_385_float;
		var_457_int = 0;
		func_694(var_457_int);
		ReportHit(var_0_object, var_457_int, var_385_float, var_384_float);
		var_458_object = Obj(); var_459_float = 0;
		var_383_object = var_458_object;
		var_385_float = var_459_float;
		func_701();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_954(var_20_bool, var_21_object)
{
	var_22_bool = 0; var_23_object = Obj();
	var_21_object = var_23_object;
	func_1249(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
	return 0;
}


func_1208(var_37_bool, var_38_object)
{
	var_39_bool = 0; var_40_bool = 0;
	@@var_38_object:IsDead(var_40_bool);
	var_40_bool = var_37_bool;
	return 2;
}


func_1468(var_41_cvector, var_42_cvector)
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


func_701()
{
	return 0;
}


func_1213(var_26_bool, var_27_object)
{
	var_28_object = Obj(); var_29_object = Obj(); var_30_object = Obj(); var_31_object = Obj();
	var_32_bool = var_27_object == 0; //@ne
	if(var_32_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_33_bool = 0;
	var_33_bool = 0;
	var_36_bool = IsFuncExist(var_27_object, "IsDead", (int)1);
	if(var_36_bool != 0) {
		var_37_bool = 0; var_38_object = Obj();
		var_27_object = var_38_object;
		func_1208(var_37_bool, var_38_object);
		if(var_37_bool != 0) {
			var_33_bool = 1;
		}
	}
	if(var_33_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	GetScene(var_30_object);
	var_41_bool = var_30_object == 0; //@ne
	if(var_41_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	@@var_27_object:GetScene(var_31_object);
	var_42_bool = var_30_object != var_31_object;
	if(var_42_bool != 0) {
		var_26_bool = 0;
		return 4;
	}
	var_26_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_703(var_482_bool)
{
	var_482_bool = 1;
	return 0;
}


func_705(var_374_int)
{
	var_374_int = 1;
	return 0;
}


func_961(var_192_string)
{
	var_192_string = "walk";
	return 0;
}


func_707(var_369_float)
{
	var_369_float = 0.5;
	return 0;
}


func_963(var_193_string)
{
	var_193_string = "run";
	return 0;
}


func_709(var_2_int, var_123_bool, var_124_object, var_125_float, var_126_float, var_127_bool, var_128_bool)
{
	var_132_bool = 0; var_133_bool = 0; var_134_bool = 0; var_135_bool = 0;
	var_136_object = Obj();
	var_124_object = var_136_object;
	func_1513(var_136_object);
	SetTimer((int)1, (int)5);
	CanSee(var_134_bool, var_124_object);
	var_139_bool = var_134_bool;
	if(var_139_bool != 0) {
		var_2_int = true;
		var_140_object = Obj();
		var_124_object = var_140_object;
		func_1410(var_140_object);
	} else {
		var_2_int = false;
	}
	var_147_bool = 0; var_148_object = Obj();
	var_124_object = var_148_object;
	func_1118(var_147_bool, var_148_object);
	if(var_147_bool != 0) {
		var_151_object = Obj();
		func_1462(var_151_object);
		SendPlayerEnemy(var_124_object, var_151_object);
	}
	var_152_bool = 0; var_153_object = Obj(); var_154_float = 0; var_155_float = 0; var_156_bool = 0; var_157_bool = 0;
	var_124_object = var_153_object;
	var_125_float = var_154_float;
	var_126_float = var_155_float;
	var_127_bool = var_156_bool;
	var_128_bool = var_157_bool;
	func_814(var_134_bool, var_135_bool, var_152_bool, var_153_object, var_154_float, var_155_float, var_156_bool, var_157_bool);
	var_152_bool = var_135_bool;
	var_203_int = var_2_int;
	if(var_203_int != 0) {
		UnlookAsync("head");
	}
	KillTimer((int)1);
	var_135_bool = var_123_bool;
	return 4;
	
}


func_1478(var_430_float, var_431_float, var_432_float)
{
	var_435_bool = var_431_float < var_432_float;
	if(var_435_bool != 0) {
		var_431_float = var_430_float;
	} else {
		var_432_float = var_430_float;
	}
	return 0;
	
}


func_965(var_11_object)
{
	var_12_object = Obj();
	var_11_object = var_12_object;
	func_974(var_12_object);
	
Label_970:
	Hold();
	goto Label_970;
}
EMIT "Return(); Pop(0)";


func_585(var_293_bool)
{
	var_294_bool = 0;
	var_294_bool = 0;
	var_295_bool = 0;
	func_557(var_294_bool, var_295_bool);
	if(var_295_bool != 0) {
		var_312_bool = 0;
		func_601(var_293_bool, var_294_bool, var_312_bool);
		if(var_312_bool != 0) {
			var_294_bool = 1;
		}
	}
	if(var_294_bool != 0) {
		var_293_bool = 1;
		return 0;
	}
	var_293_bool = 0;
	return 0;
}


func_1097(var_420_string, var_421_int)
{
	var_423_bool = var_421_int == (int)2;
	if(var_423_bool != 0) {
		var_420_string = "fire";
		return 0;
	EMIT "GOTO 0x455";
	}
	var_425_bool = var_421_int == (int)1;
	if(var_425_bool != 0) {
		var_420_string = "bullet";
		return 0;
	}
	var_420_string = "phys";
	return 0;
}


func_1485(var_440_float, var_441_float, var_442_float, var_443_float)
{
	var_444_bool = var_441_float < var_442_float;
	if(var_444_bool != 0) {
		var_442_float = var_440_float;
		return 0;
	}
	var_445_bool = var_441_float > var_443_float;
	if(var_445_bool != 0) {
		var_443_float = var_440_float;
		return 0;
	}
	var_441_float = var_440_float;
	return 0;
}


func_974(var_12_object)
{
	var_13_cvector = CVector(0,0,0); var_14_cvector = CVector(0,0,0); var_15_cvector = CVector(0,0,0); var_16_cvector = CVector(0,0,0); var_17_string = ""; var_18_object = Obj(); var_19_bool = 0; var_20_bool = 0; var_21_float = 0; var_22_cvector = CVector(0,0,0); var_23_cvector = CVector(0,0,0); var_24_cvector = CVector(0,0,0); var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_string = ""; var_28_object = Obj(); var_29_bool = 0; var_30_bool = 0; var_31_float = 0; var_32_cvector = CVector(0,0,0);
	var_33_bool = var_12_object == 0; //@ne
	if(var_33_bool != 0) {
		var_34_string = "";
		func_1065("fdie");
	} else {
		@@var_12_object:GetPosition(var_23_cvector);
		GetPosition(var_24_cvector);
		GetDirection(var_25_cvector);
		var_26_cvector = var_24_cvector - var_23_cvector;
		var_66_float = GetByIndex(var_26_cvector, 0);
		var_67_float = GetByIndex(var_25_cvector, 0);
		var_68_float = var_66_float * var_67_float;
		var_69_float = GetByIndex(var_26_cvector, 2);
		var_70_float = GetByIndex(var_25_cvector, 2);
		var_71_float = var_69_float * var_70_float;
		var_72_int = var_68_float + var_71_float;
		var_74_bool = var_72_int >= (int)0;
		if(var_74_bool != 0) {
			var_27_string = "fdie";
		} else {
				var_27_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_12_object = var_28_object;
		var_77_bool = IsFuncExist(var_12_object, "GetScriptProperty", (int)2);
		if(var_77_bool != 0) {
			@@var_12_object:HasScriptProperty(var_29_bool, "Owner");
			var_79_bool = var_29_bool;
			if(var_79_bool != 0) {
				@@var_12_object:GetScriptProperty(var_28_object, "Owner");
				var_81_bool = var_28_object == 0; //@ne
				if(var_81_bool != 0) {
					var_12_object = var_28_object;
				}
			}
		}
		var_84_bool = IsFuncExist(var_28_object, "@GetEyesHeight", (int)1);
		if(var_84_bool != 0) {
			@@var_28_object:GetEyesHeight(var_31_float);
			var_32_cvector = CVector(0.0, 0.0, 0.0);
			var_85_float = GetByIndex(var_32_cvector, 1);
			var_31_float = var_85_float;
			SetByIndex(var_32_cvector, 1) = var_85_float;
			LookAsync(var_12_object, "head", var_32_cvector);
			var_30_bool = 1;
		} else {
			var_30_bool = 0;

		}
		var_87_string = "";
		var_27_string = var_87_string;
		func_1421(var_87_string);
		PlayAnimation("all", var_27_string);
		WaitForAnimEnd();
		var_89_bool = var_30_bool;
		if(var_89_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_27_string);
		RemoveEnvelope();
		var_28_object = 0;
	}
	return 20;
	
}


func_1111(var_43_cvector, var_44_object)
{
	var_45_cvector = CVector(0,0,0); var_46_cvector = CVector(0,0,0); var_47_cvector = CVector(0,0,0); var_48_cvector = CVector(0,0,0);
	GetPosition(var_47_cvector);
	@@var_44_object:GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
	return 4;
}


func_1496(var_448_float)
{
	var_449_object = Obj(); var_450_object = Obj();
	CreateFloatVector(var_450_object);
	@@var_450_object:add(var_448_float);
	var_452_bool = var_448_float < (int)0;
	if(var_452_bool != 0) {
		RumblePlay((float)0.699999988079071, (int)500);
	}
	SendWorldWndMessage((int)15, var_450_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_601(var_0_object, var_4_float, var_312_bool)
{
	var_313_object = Obj(); var_314_bool = 0; var_315_float = 0; var_316_cvector = CVector(0,0,0); var_317_cvector = CVector(0,0,0); var_318_object = Obj(); var_319_bool = 0; var_320_float = 0; var_321_cvector = CVector(0,0,0); var_322_cvector = CVector(0,0,0);
	GetScene(var_318_object);
	var_319_bool = 0;
	
Label_605:
	var_323_cvector = CVector(0,0,0); var_324_object = Obj();
	var_324_object = var_0_object;
	func_1111(var_323_cvector, var_324_object);
	var_329_int = -var_323_cvector;
	FindDirLength(var_320_float, var_329_int, var_4_float);
	var_330_bool = var_320_float < var_4_float;
	if(var_330_bool != 0) {
	} else {
		Face(var_0_object);
		PlayAnimation("all", "bjump");
		@@@var_0_object:GetPFPosition(var_321_cvector);
		GetPFPosition(var_322_cvector);
		WaitForAnimEnd();
		func_689(var_322_cvector);
		StopAsync();
		SetSpeed(CVector(0.0, 0.0, 0.0));
		var_319_bool = 1;
		var_334_bool = 0;
		func_557(var_322_cvector, var_334_bool);
		var_335_bool = var_334_bool == 0; //@nz
		if(var_335_bool != 0) {
			goto Label_643;
		}
		goto Label_605;
	}
Label_643:
	var_319_bool = var_312_bool;
	return 10;
	
}
EMIT "Stack[-5] = 0";


func_350(var_0_object, var_1_int, var_341_bool, var_342_float)
{
	var_343_int = 0; var_344_bool = 0; var_345_int = 0; var_346_string = ""; var_347_int = 0; var_348_bool = 0; var_349_int = 0; var_350_string = "";
	func_689(var_350_string);
	irand(var_347_int, var_1_int);
	var_347_int = var_347_int + (int)1;
	Face(var_0_object);
	SetAttackState((bool)1);
	func_1522();
	var_359_int = "attack_begin" + var_347_int;
	PlayAnimation("all", var_359_int);
	WaitForAnimEnd();
	func_657(var_349_int, var_350_string);
	var_375_bool = 0; var_376_object = Obj();
	var_376_object = var_0_object;
	func_1249(var_375_bool, var_376_object);
	var_377_bool = var_375_bool == 0; //@nz
	if(var_377_bool != 0) {
		StopAsync();
		var_341_bool = 0;
		return 8;
	}
	var_378_float = 0; var_379_int = 0;
	var_342_float = var_378_float;
	var_347_int = var_379_int;
	func_311(var_350_string, var_378_float, var_379_int);
	var_462_int = "attack_middle" + var_347_int;
	HasAnimation(var_348_bool, "all", var_462_int);
	var_463_bool = var_348_bool;
	if(var_463_bool != 0) {
		func_1522();
		var_466_int = "attack_middle" + var_347_int;
		PlayAnimation("all", var_466_int);
		WaitForAnimEnd();
		func_689(var_350_string);
		var_467_bool = 0; var_468_object = Obj();
		var_468_object = var_0_object;
		func_1249(var_467_bool, var_468_object);
		var_469_bool = var_467_bool == 0; //@nz
		if(var_469_bool != 0) {
			StopAsync();
			var_341_bool = 0;
			return 8;
		}
		var_470_float = 0; var_471_int = 0;
		var_342_float = var_470_float;
		var_347_int = var_471_int;
		func_311(var_350_string, var_470_float, var_471_int);
		var_349_int = 1;

	Label_427:
		var_473_int = "attack_middle" + var_347_int;
		var_475_int = var_473_int + "_";
		var_350_string = var_475_int + var_349_int;
		HasAnimation(var_348_bool, "all", var_350_string);
		var_477_bool = var_348_bool == 0; //@nz
		if(var_477_bool != 0) {
		} else {
			func_1522();
			PlayAnimation("all", var_350_string);
			WaitForAnimEnd();
			func_689(var_350_string);
			var_493_bool = 0; var_494_object = Obj();
			var_494_object = var_0_object;
			func_1249(var_493_bool, var_494_object);
			var_495_bool = var_493_bool == 0; //@nz
			if(var_495_bool != 0) {
				StopAsync();
				var_341_bool = 0;
				var_496_float = 0; var_497_int = 0;
				var_342_float = var_496_float;
				var_347_int = var_497_int;
				func_311(var_350_string, var_496_float, var_497_int);
				var_349_int = var_349_int + (int)1;
				goto Label_427;
			}
			return 8;
		}
	}
	SetAttackState((bool)0);
	var_481_int = "attack_end" + var_347_int;
	PlayAnimation("all", var_481_int);
	var_482_bool = 0;
	func_703(var_482_bool);
	if(var_482_bool != 0) {
		var_483_bool = 0; var_484_float = 0;
		func_487(var_483_bool, (float)0.75);
		StopAsync();
	}
	var_341_bool = 1;
	return 8;
	
}


func_1118(var_147_bool, var_148_object)
{
	var_149_bool = 0; var_150_bool = 0;
	IsPlayerActor(var_148_object, var_150_bool);
	var_150_bool = var_147_bool;
	return 2;
}


func_1249(var_22_bool, var_23_object)
{
	var_24_int = 0; var_25_int = 0;
	var_26_bool = 0; var_27_object = Obj();
	var_23_object = var_27_object;
	func_1213(var_26_bool, var_27_object);
	var_43_bool = var_26_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_22_bool = 0;
		return 2;
	}
	var_44_bool = 0; var_45_object = Obj(); var_46_string = "";
	var_23_object = var_45_object;
	func_1123(var_44_bool, var_45_object, "noaccess");
	var_53_bool = var_44_bool == 0; //@nz
	if(var_53_bool != 0) {
		var_22_bool = 1;
		return 2;
	}
	@@var_23_object:GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == (int)0;
	return 2;
}


func_1123(var_44_bool, var_45_object, var_46_string)
{
	var_47_bool = 0; var_48_bool = 0;
	var_51_bool = IsFuncExist(var_45_object, "HasProperty", (int)2);
	var_52_bool = var_51_bool == 0; //@nz
	if(var_52_bool != 0) {
		var_44_bool = 0;
		return 2;
	}
	@@var_45_object:HasProperty(var_46_string, var_48_bool);
	var_48_bool = var_44_bool;
	return 2;
}


func_487(var_483_bool, var_484_float)
{
	var_485_float = 0; var_486_bool = 0; var_487_float = 0; var_488_bool = 0;
	rand(var_487_float);
	var_489_bool = var_487_float < var_484_float;
	if(var_489_bool != 0) {

	Label_492:
		IsAnimationPlaying(var_488_bool);
		var_490_bool = var_488_bool == 0; //@nz
		if(var_490_bool != 0) {
		} else {
			var_491_bool = 0;
			func_585(var_491_bool);
			if(var_491_bool != 0) {
				var_483_bool = 1;
				sync();
				goto Label_492;
			}
			return 4;
	}
		WaitForAnimEnd();
		func_689(var_488_bool);
	}
	goto Label_512;
	
Label_512:
	var_483_bool = 0;
	return 4;
	
}


func_1513(var_12_object)
{
	var_13_bool = 0; var_14_bool = 0;
	IsPlayerActor(var_12_object, var_14_bool);
	var_15_bool = var_14_bool;
	if(var_15_bool != 0) {
		PlayGlobalMusic("attack");
	}
	return 2;
}


func_1385(var_15_object, var_18_cvector, var_19_cvector)
{
	var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj(); var_23_object = Obj();
	GetScene(var_22_object);
	AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	var_26_object = Obj();
	var_15_object = var_26_object;
	func_1273(var_26_object);
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_1135(var_392_float, var_393_object, var_394_float, var_395_int)
{
	var_399_int = 0; var_400_string = ""; var_401_int = 0; var_402_float = 0; var_403_float = 0; var_404_float = 0; var_405_int = 0; var_406_string = ""; var_407_int = 0; var_408_float = 0; var_409_float = 0; var_410_float = 0;
	var_411_bool = 0; var_412_object = Obj(); var_413_string = "";
	var_393_object = var_412_object;
	func_1123(var_411_bool, var_412_object, "health");
	var_414_bool = var_411_bool == 0; //@nz
	if(var_414_bool != 0) {
		var_392_float = 0.0;
		return 12;
	}
	var_415_bool = 0; var_416_object = Obj(); var_417_string = "";
	var_393_object = var_416_object;
	func_1123(var_415_bool, var_416_object, "armor");
	var_418_bool = var_415_bool == 0; //@nz
	if(var_418_bool != 0) {
		var_405_int = 0;
	} else {
			@@var_393_object:GetProperty("armor", var_405_int);
	}
	var_420_string = ""; var_421_int = 0;
	var_395_int = var_421_int;
	func_1097(var_420_string, var_421_int);
	var_406_string = "armor_" + var_420_string;
	var_426_bool = 0; var_427_object = Obj(); var_428_string = "";
	var_393_object = var_427_object;
	var_406_string = var_428_string;
	func_1123(var_426_bool, var_427_object, var_428_string);
	var_429_bool = var_426_bool == 0; //@nz
	if(var_429_bool != 0) {
		var_407_int = 0;
	} else {
		@@var_393_object:GetProperty(var_406_string, var_407_int);

	}
	var_430_float = 0; var_431_float = 0; var_432_float = 0;
	var_433_int = var_405_int + var_407_int;
	var_431_float = var_433_int / (float)100.0;
	func_1478(var_430_float, var_431_float, (float)1);
	var_430_float = var_408_float;
	@@var_393_object:GetProperty("health", var_409_float);
	var_438_int = (int)1 - var_408_float;
	var_410_float = var_394_float * var_438_int;
	var_440_float = 0; var_441_float = 0; var_442_float = 0; var_443_float = 0;
	var_441_float = var_409_float - var_410_float;
	func_1485(var_440_float, var_441_float, (float)0, (float)1);
	@@var_393_object:SetProperty("health", var_440_float);
	var_446_bool = 0; var_447_object = Obj();
	var_393_object = var_447_object;
	func_1118(var_446_bool, var_447_object);
	if(var_446_bool != 0) {
		var_448_float = 0;
		var_448_float = -var_410_float;
		func_1496(var_448_float);
	}
	var_410_float = var_392_float;
	return 12;
	
}


func_1522()
{
	var_353_object = Obj(); var_354_object = Obj();
	GetScene(var_354_object);
	var_356_object = Obj();
	func_1462(var_356_object);
	BroadcastMessage("battle", var_356_object, var_354_object);
	return 2;
}
EMIT "Stack[-1] = 0";


func_1399(var_226_object)
{
	var_227_cvector = CVector(0,0,0); var_228_cvector = CVector(0,0,0); var_229_cvector = CVector(0,0,0); var_230_cvector = CVector(0,0,0); var_231_cvector = CVector(0,0,0); var_232_cvector = CVector(0,0,0);
	@@var_226_object:GetPosition(var_230_cvector);
	GetPosition(var_231_cvector);
	var_232_cvector = var_230_cvector - var_231_cvector;
	var_233_float = GetByIndex(var_232_cvector, 0);
	var_234_float = GetByIndex(var_232_cvector, 2);
	RotateAsync(var_233_float, var_234_float);
	return 6;
}


func_1273(var_26_object)
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


