// @IMPORTS: SensePlayerOnly/1,IsPlayerActor/2,Hold/0,IsLoaded/1,RemoveActor/1,FindActor/2,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,GetPosition/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,self/1,Trigger/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:quest_d4_03|W:gang_attack|W:cleanup|W:restore|W:player|W:all|W:attack_begin|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:death
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_17: op=0x7 vars=object
// @EVENT_26: op=0x17 vars=string
// @EVENT_6: op=0x46 vars=
// @TASK_1: vars=object,int,int,bool,int params=0
// @EVENT_6: op=0x6a vars=
// @TASK_2: vars=bool,object params=6
// @EVENT_6: op=0x25d vars=
// @EVENT_7: op=0x2cb vars=int
// @EVENT_10: op=0x2dd vars=object
// @EVENT_41: op=0x2e8 vars=object
// @TASK_3: vars= params=1
// @EVENT_6: op=0x2fc vars=
// @EVENT_22: op=0x37a vars=object,int,float,float
// @EVENT_16: op=0x37c vars=object,string
// @EVENT_41: op=0x37e vars=object
// @STANDALONE_EVENT_22: op=0x494 vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x49c vars=object,string
// @STANDALONE_EVENT_41: op=0x4a9 vars=object
// @PE: 0x17,0x64,0x67,0x257,0x2cb,0x2dd,0x2e8,0x2f1,0x304,0x364,0x37a,0x37c,0x37e,0x380,0x469,0x470,0x487,0x494,0x4a9

task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	IsPlayerActor(var_8_object, var_10_bool);
	var_11_bool = var_10_bool;
	if(var_11_bool != 0) {
		var_12_bool = 0; var_13_string = ""; var_14_string = "";
		func_1147(var_12_bool, "quest_d4_03", "gang_attack");
		TaskCall(1);
		func_88();
		TaskReturn();
	}
	return 2;
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_10_bool = var_8_object == "attack";
	if(var_10_bool != 0) {
		TaskCall(1);
		func_88();
		TaskReturn();
	} else {
		var_371_string = "";
		var_8_object = var_371_string;
		func_42(var_8_object, var_371_string);
	}
	return 0;
	
}


task_0_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_bool = 0;
	var_8_bool = 0;
	var_9_bool = var_0_bool;
	if(var_9_bool != 0) {
		var_10_bool = 0;
		func_86(var_10_bool);
		if(var_10_bool != 0) {
			var_8_bool = 1;
		}
	}
	if(var_8_bool != 0) {
		var_11_object = Obj();
		func_1123(var_11_object);
		RemoveActor(var_11_object);
	}
	return 0;
}


task_1_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj();
	func_1123(var_8_object);
	RemoveActor(var_8_object);
	Hold();
	return 0;
}


task_2_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj();
	func_1123(var_8_object);
	RemoveActor(var_8_object);
	Hold();
	return 0;
}


task_2_event_7(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_int)
{
	var_10_bool = var_8_int != (int)0;
	if(var_10_bool != 0) {
		return 0;
	}
	var_11_bool = 0; var_12_object = Obj();
	var_12_object = var_1_object;
	func_753(var_11_bool, var_12_object);
	var_47_bool = var_11_bool == 0; //@nz
	if(var_47_bool != 0) {
		var_0_bool = true;
	}
	KillTimer((int)0);
	Stop();
	return 0;
}


task_2_event_10(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	RequestClearPath(var_8_object);
	return 0;
}


task_2_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	func_737(var_8_object);
	var_8_object = Obj();
	func_1193();
	return 0;
}


task_3_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj();
	func_1123(var_8_object);
	RemoveActor(var_8_object);
	Hold();
	return 0;
}


task_3_event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	return 0;
}


task_3_event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_string)
{
	return 0;
}


task_3_event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	return 0;
}


event_22(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_int, var_10_float, var_11_float)
{
	var_12_object = Obj(); var_13_int = 0; var_14_float = 0;
	var_8_object = var_12_object;
	var_9_int = var_13_int;
	var_10_float = var_14_float;
	func_1045(var_13_int, var_14_float);
	return 0;
}


event_16(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object, var_9_string)
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


event_41(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object, var_8_object)
{
	var_9_object = Obj();
	var_8_object = var_9_object;
	func_1159(var_9_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	SensePlayerOnly((bool)1);
	func_38();
	return 0;
}


func_896(var_300_string, var_301_int)
{
	var_303_bool = var_301_int == (int)1;
	if(var_303_bool != 0) {
		var_300_string = "fire";
		return 0;
	}
	var_300_string = "phys";
	return 0;
}


func_772(var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_781(var_17_object);
	
Label_777:
	Hold();
	goto Label_777;
}
EMIT "Return(); Pop(0)";


func_1159(var_9_object)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = "";
	func_1147(var_10_bool, "quest_d4_03", "death");
	var_16_object = Obj();
	var_9_object = var_16_object;
	TaskCall(3);
	func_772(var_16_object);
	TaskReturn();
	return 0;
}


func_904(var_35_bool, var_36_object, var_37_string)
{
	var_38_bool = 0; var_39_bool = 0;
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", (int)2);
	var_43_bool = var_42_bool == 0; //@nz
	if(var_43_bool != 0) {
		var_35_bool = 0;
		return 2;
	}
	@@var_36_object:HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
	return 2;
}


func_781(var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_bool = 0; var_25_bool = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0);
	var_38_bool = var_17_object == 0; //@ne
	if(var_38_bool != 0) {
		var_39_string = "";
		func_868("fdie");
	} else {
		@@var_17_object:GetPosition(var_28_cvector);
		GetPosition(var_29_cvector);
		GetDirection(var_30_cvector);
		var_31_cvector = var_29_cvector - var_28_cvector;
		var_42_float = GetByIndex(var_31_cvector, 0);
		var_43_float = GetByIndex(var_30_cvector, 0);
		var_44_float = var_42_float * var_43_float;
		var_45_float = GetByIndex(var_31_cvector, 2);
		var_46_float = GetByIndex(var_30_cvector, 2);
		var_47_float = var_45_float * var_46_float;
		var_48_int = var_44_float + var_47_float;
		var_50_bool = var_48_int >= (int)0;
		if(var_50_bool != 0) {
			var_32_string = "fdie";
		} else {
				var_32_string = "bdie";
		}
		RemoveRTEnvelope();
		SetDeathState();
		Stop();
		StopAsync();
		var_17_object = var_33_object;
		var_53_bool = IsFuncExist(var_17_object, "GetScriptProperty", (int)2);
		if(var_53_bool != 0) {
			@@var_17_object:HasScriptProperty(var_34_bool, "Owner");
			var_55_bool = var_34_bool;
			if(var_55_bool != 0) {
				@@var_17_object:GetScriptProperty(var_33_object, "Owner");
				var_57_bool = var_33_object == 0; //@ne
				if(var_57_bool != 0) {
					var_17_object = var_33_object;
				}
			}
		}
		var_60_bool = IsFuncExist(var_33_object, "@GetEyesHeight", (int)1);
		if(var_60_bool != 0) {
			@@var_33_object:GetEyesHeight(var_36_float);
			var_37_cvector = CVector(0.0, 0.0, 0.0);
			var_61_float = GetByIndex(var_37_cvector, 1);
			var_36_float = var_61_float;
			SetByIndex(var_37_cvector, 1) = var_61_float;
			LookAsync(var_17_object, "head", var_37_cvector);
			var_35_bool = 1;
		} else {
			var_35_bool = 0;

		}
		PlayAnimation("all", var_32_string);
		WaitForAnimEnd();
		var_64_bool = var_35_bool;
		if(var_64_bool != 0) {
			StopAsync();
			UnlookAsync("head");
		}
		LockAnimationEnd("all", var_32_string);
		RemoveEnvelope();
		var_33_object = 0;
	}
	return 20;
	
}


func_916(var_272_float, var_273_object, var_274_float, var_275_int)
{
	var_279_int = 0; var_280_string = ""; var_281_int = 0; var_282_float = 0; var_283_float = 0; var_284_float = 0; var_285_int = 0; var_286_string = ""; var_287_int = 0; var_288_float = 0; var_289_float = 0; var_290_float = 0;
	var_291_bool = 0; var_292_object = Obj(); var_293_string = "";
	var_273_object = var_292_object;
	func_904(var_291_bool, var_292_object, "health");
	var_294_bool = var_291_bool == 0; //@nz
	if(var_294_bool != 0) {
		var_272_float = 0.0;
		return 12;
	}
	var_295_bool = 0; var_296_object = Obj(); var_297_string = "";
	var_273_object = var_296_object;
	func_904(var_295_bool, var_296_object, "armor");
	var_298_bool = var_295_bool == 0; //@nz
	if(var_298_bool != 0) {
		var_285_int = 0;
	} else {
			@@var_273_object:GetProperty("armor", var_285_int);
	}
	var_300_string = ""; var_301_int = 0;
	var_275_int = var_301_int;
	func_896(var_300_string, var_301_int);
	var_286_string = "armor_" + var_300_string;
	var_304_bool = 0; var_305_object = Obj(); var_306_string = "";
	var_273_object = var_305_object;
	var_286_string = var_306_string;
	func_904(var_304_bool, var_305_object, var_306_string);
	var_307_bool = var_304_bool == 0; //@nz
	if(var_307_bool != 0) {
		var_287_int = 0;
	} else {
		@@var_273_object:GetProperty(var_286_string, var_287_int);

	}
	var_308_float = 0; var_309_float = 0; var_310_float = 0;
	var_311_int = var_285_int + var_287_int;
	var_309_float = var_311_int / (float)100.0;
	func_1129(var_308_float, var_309_float, (float)1);
	var_308_float = var_288_float;
	@@var_273_object:GetProperty("health", var_289_float);
	var_316_int = (int)1 - var_288_float;
	var_290_float = var_274_float * var_316_int;
	var_318_float = 0; var_319_float = 0; var_320_float = 0; var_321_float = 0;
	var_319_float = var_289_float - var_290_float;
	func_1136(var_318_float, var_319_float, (float)0, (float)1);
	@@var_273_object:SetProperty("health", var_318_float);
	var_290_float = var_272_float;
	return 12;
	
}


func_1045(var_12_object, var_13_int)
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


func_535(var_0_bool)
{
	var_217_cvector = CVector(0,0,0); var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_219_cvector);
	GetPFPosition(var_220_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_38()
{
	
Label_38:
	Hold();
	goto Label_38;
}
EMIT "Return(); Pop(0)";


func_42(var_0_bool, var_371_string)
{
	var_372_bool = 0; var_373_bool = 0;
	var_375_bool = var_371_string == "cleanup";
	if(var_375_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_373_bool);
		var_376_bool = 0;
		var_376_bool = 0;
		var_377_bool = var_373_bool == 0; //@nz
		if(var_377_bool != 0) {
			var_378_bool = 0;
			func_86(var_378_bool);
			if(var_378_bool != 0) {
				var_376_bool = 1;
			}
		}
		if(var_376_bool != 0) {
			var_379_object = Obj();
			func_1123(var_379_object);
			RemoveActor(var_379_object);
		}
	} else {
		var_383_bool = var_371_string == "restore";
		if(var_383_bool == 0) goto Label_69;
		var_0_bool = false;
	}
Label_69:
	return 2;
	
}


func_554(var_0_bool, var_178_bool)
{
	var_179_bool = 0; var_180_bool = 0;
	var_183_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_183_bool != 0) {
		@@@var_0_bool:IsAttacking(var_180_bool);
		var_180_bool = var_178_bool;
		return 2;
	}
	var_178_bool = 0;
	return 2;
}


func_565(var_2_object, var_4_int)
{
	var_240_float = 0; var_241_int = 0; var_242_float = 0; var_243_int = 0;
	var_244_bool = var_2_object == 0; //@nz
	if(var_244_bool != 0) {
		return 4;
	}
	var_245_int = var_4_int;
	if(var_245_int != 0) {
		var_4_int = var_4_int + (int)-1;
		var_248_bool = var_4_int > (int)0;
		if(var_248_bool != 0) {
			return 4;
		}
	}
	rand(var_242_float);
	var_249_float = 0;
	func_603(var_249_float);
	var_250_bool = var_242_float < var_249_float;
	if(var_250_bool != 0) {
		irand(var_243_int, var_2_object);
		var_243_int = var_243_int + (int)1;
		var_253_int = "attack" + var_243_int;
		Speak(var_253_int);
		var_254_int = 0;
		func_601(var_254_int);
		var_4_int = var_254_int;
	}
	return 4;
}


func_438(var_344_bool, var_345_float)
{
	var_346_float = 0; var_347_bool = 0; var_348_float = 0; var_349_bool = 0;
	rand(var_348_float);
	var_350_bool = var_348_float < var_345_float;
	if(var_350_bool != 0) {

	Label_443:
		IsAnimationPlaying(var_349_bool);
		var_351_bool = var_349_bool == 0; //@nz
		if(var_351_bool != 0) {
		} else {
			var_352_bool = 0;
			func_502(var_349_bool, var_352_bool);
			if(var_352_bool != 0) {
				var_344_bool = 1;
				sync();
				goto Label_443;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_460;
	
Label_460:
	var_344_bool = 0;
	return 4;
	
}


func_319(var_0_bool, var_258_float, var_259_int)
{
	var_260_object = Obj(); var_261_float = 0; var_262_float = 0; var_263_object = Obj(); var_264_float = 0; var_265_float = 0;
	var_267_float = var_258_float * (float)0.8999999761581421;
	GetVictim(var_267_float, var_263_object);
	ReportAttack(var_0_bool);
	var_268_bool = var_263_object == var_0_bool;
	if(var_268_bool != 0) {
		var_269_float = 0; var_270_object = Obj(); var_271_int = 0;
		var_263_object = var_270_object;
		var_259_int = var_271_int;
		func_100(var_271_int);
		var_269_float = var_264_float;
		var_272_float = 0; var_273_object = Obj(); var_274_float = 0; var_275_int = 0;
		var_263_object = var_273_object;
		var_264_float = var_274_float;
		var_276_int = 0; var_277_object = Obj(); var_278_int = 0;
		var_263_object = var_277_object;
		var_259_int = var_278_int;
		func_103(var_278_int);
		var_276_int = var_275_int;
		func_916(var_272_float, var_273_object, var_274_float, var_275_int);
		var_272_float = var_265_float;
		var_325_int = 0;
		func_597(var_325_int);
		ReportHit(var_0_bool, var_325_int, var_265_float, var_264_float);
		var_326_object = Obj(); var_327_float = 0;
		var_263_object = var_326_object;
		var_265_float = var_327_float;
		func_599();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_462(var_0_bool, var_186_bool, var_187_float)
{
	var_188_bool = 0; var_189_cvector = CVector(0,0,0); var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_float = 0; var_193_bool = 0; var_194_cvector = CVector(0,0,0); var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_float = 0;
	
Label_463:
	IsAnimationPlaying(var_193_bool);
	var_198_bool = var_193_bool == 0; //@nz
	if(var_198_bool != 0) {
	} else {
		var_199_bool = 0;
		func_502(var_197_float, var_199_bool);
		if(var_199_bool != 0) {
			var_186_bool = 1;
			return 10;
		}
		var_224_bool = 0; var_225_object = Obj();
		var_225_object = var_0_bool;
		func_1021(var_224_bool, var_225_object);
		var_226_bool = var_224_bool == 0; //@nz
		if(var_226_bool != 0) {
			var_186_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_194_cvector);
		GetPFPosition(var_195_cvector);
		var_196_cvector = var_194_cvector - var_195_cvector;
		var_197_float = var_196_cvector | var_196_cvector;
		var_227_float = var_187_float * var_187_float;
		var_228_bool = var_197_float < var_227_float;
		if(var_228_bool != 0) {
			var_229_bool = 0; var_230_float = 0;
			var_187_float = var_230_float;
			func_358(var_196_cvector, var_197_float, var_229_bool, var_230_float);
			var_186_bool = 1;
			sync();
			goto Label_463;
		}
		return 10;
	}
	var_186_bool = 0;
	return 10;
	
}


func_980(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_597(var_325_int)
{
	var_325_int = 0;
	return 0;
}


func_86(var_10_bool)
{
	var_10_bool = 1;
	return 0;
}


func_599()
{
	return 0;
}


func_1112(var_164_object)
{
	var_165_cvector = CVector(0,0,0); var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0);
	@@var_164_object:GetPosition(var_168_cvector);
	GetPosition(var_169_cvector);
	var_170_cvector = var_168_cvector - var_169_cvector;
	var_171_float = GetByIndex(var_170_cvector, 0);
	var_172_float = GetByIndex(var_170_cvector, 2);
	RotateAsync(var_171_float, var_172_float);
	return 6;
}


func_88()
{
	var_16_object = Obj(); var_17_object = Obj();
	FindActor(var_17_object, "player");
	var_19_object = Obj(); var_20_bool = 0; var_21_float = 0;
	var_17_object = var_19_object;
	func_114(var_12_int, var_13_int, var_14_bool, var_15_int, var_16_object, var_17_object, var_19_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_601(var_254_int)
{
	var_254_int = 1;
	return 0;
}


func_603(var_249_float)
{
	var_249_float = 0.5;
	return 0;
}


func_985(var_17_bool, var_18_object)
{
	var_19_object = Obj(); var_20_object = Obj(); var_21_object = Obj(); var_22_object = Obj();
	var_23_bool = var_18_object == 0; //@ne
	if(var_23_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_24_bool = 0;
	var_24_bool = 0;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", (int)1);
	if(var_27_bool != 0) {
		var_28_bool = 0; var_29_object = Obj();
		var_18_object = var_29_object;
		func_980(var_28_bool, var_29_object);
		if(var_28_bool != 0) {
			var_24_bool = 1;
		}
	}
	if(var_24_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	GetScene(var_21_object);
	var_32_bool = var_21_object == 0; //@ne
	if(var_32_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	@@var_18_object:GetScene(var_22_object);
	var_33_bool = var_21_object != var_22_object;
	if(var_33_bool != 0) {
		var_17_bool = 0;
		return 4;
	}
	var_17_bool = 1;
	return 4;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


func_737(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1123(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj();
	self(var_10_object);
	var_10_object = var_8_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_100(var_269_float)
{
	var_269_float = 0.10000000149011612;
	return 0;
}


func_613(var_0_bool, var_1_string, var_102_bool, var_103_object, var_104_float, var_105_float, var_106_bool, var_107_bool)
{
	var_110_bool = 0; var_111_bool = 0; var_112_object = Obj(); var_113_cvector = CVector(0,0,0); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_float = 0; var_117_object = Obj(); var_118_bool = 0; var_119_bool = 0; var_120_object = Obj(); var_121_cvector = CVector(0,0,0); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_float = 0; var_125_object = Obj();
	var_0_bool = false;
	var_1_string = var_103_object;
	var_107_bool = var_119_bool;
	
Label_617:
	var_126_bool = 0; var_127_object = Obj();
	var_103_object = var_127_object;
	func_753(var_126_bool, var_127_object);
	var_130_bool = var_126_bool == 0; //@nz
	if(var_130_bool != 0) {
		var_102_bool = 0;
		return 16;
	}
	@@var_103_object:GetPosition(var_121_cvector);
	GetPosition(var_122_cvector);
	var_123_cvector = var_121_cvector - var_122_cvector;
	var_124_float = var_123_cvector | var_123_cvector;
	var_131_bool = 0;
	var_131_bool = 0;
	var_133_bool = var_105_float > (int)0;
	if(var_133_bool != 0) {
		var_134_float = var_105_float * var_105_float;
		var_135_bool = var_124_float > var_134_float;
		if(var_135_bool != 0) {
			var_131_bool = 1;
		}
	}
	if(var_131_bool != 0) {
		Stop();
		var_102_bool = 0;
		return 16;
	}
	var_136_float = var_104_float * var_104_float;
	var_137_bool = var_124_float > var_136_float;
	if(var_137_bool != 0) {
		@@var_103_object:GetPFPosition(var_121_cvector);
		FindPathTo(var_125_object, var_121_cvector);
		var_138_bool = var_125_object != 0; //@nn
		if(var_138_bool != 0) {
			var_125_object = var_120_object;
			var_125_object = 0;
		}
		var_139_bool = var_120_object != 0; //@nn
		if(var_139_bool != 0) {
			var_140_bool = var_119_bool;
			if(var_140_bool == 0) goto Label_666;
			var_119_bool = 0;
			RotatePath(var_120_object, var_118_bool);
			var_141_bool = var_118_bool == 0; //@nz
			if(var_141_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_144_string = "";
				func_760(var_144_string);
				var_145_string = "";
				func_762(var_145_string);
				FollowPath(var_120_object, var_106_bool, var_118_bool, var_144_string, var_145_string);
				var_146_bool = var_118_bool == 0; //@nz
				if(var_146_bool != 0) {
					var_147_bool = var_0_bool;
					if(var_147_bool != 0) {
						var_120_object = 0;
						goto Label_713;
					EMIT "GOTO 0x2ae";
					}
				} else {
					var_120_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_118_bool);
					var_150_bool = var_118_bool == 0; //@nz
					if(var_150_bool != 0) {
						var_151_bool = var_0_bool;
						if(var_151_bool != 0) {
							var_120_object = 0;
							goto Label_713;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_713;
	}
			var_125_object = 0;
			goto Label_711;

		Label_711:
			var_120_object = 0;

		}
		goto Label_617;
	}
Label_713:
	var_102_bool = !var_0_bool;
	return 16;
	
}


func_358(var_0_bool, var_1_string, var_229_bool, var_230_float)
{
	var_231_int = 0; var_232_bool = 0; var_233_int = 0; var_234_bool = 0;
	irand(var_233_int, var_1_string);
	var_233_int = var_233_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_239_int = "attack_begin" + var_233_int;
	PlayAnimation("all", var_239_int);
	WaitForAnimEnd();
	func_565(var_233_int, var_234_bool);
	var_255_bool = 0; var_256_object = Obj();
	var_256_object = var_0_bool;
	func_1021(var_255_bool, var_256_object);
	var_257_bool = var_255_bool == 0; //@nz
	if(var_257_bool != 0) {
		StopAsync();
		var_229_bool = 0;
		return 4;
	}
	var_258_float = 0; var_259_int = 0;
	var_230_float = var_258_float;
	var_233_int = var_259_int;
	func_319(var_234_bool, var_258_float, var_259_int);
	var_330_int = "attack_middle" + var_233_int;
	HasAnimation(var_234_bool, "all", var_330_int);
	var_331_bool = var_234_bool;
	if(var_331_bool != 0) {
		var_334_int = "attack_middle" + var_233_int;
		PlayAnimation("all", var_334_int);
		WaitForAnimEnd();
		var_335_bool = 0; var_336_object = Obj();
		var_336_object = var_0_bool;
		func_1021(var_335_bool, var_336_object);
		var_337_bool = var_335_bool == 0; //@nz
		if(var_337_bool != 0) {
			StopAsync();
			var_229_bool = 0;
			return 4;
		}
		var_338_float = 0; var_339_int = 0;
		var_230_float = var_338_float;
		var_233_int = var_339_int;
		func_319(var_234_bool, var_338_float, var_339_int);
	}
	SetAttackState((bool)0);
	var_343_int = "attack_end" + var_233_int;
	PlayAnimation("all", var_343_int);
	var_344_bool = 0; var_345_float = 0;
	func_438(var_344_bool, (float)0.75);
	StopAsync();
	var_229_bool = 1;
	return 4;
}


func_103(var_276_int)
{
	var_276_int = 1;
	return 0;
}


func_868(var_39_string)
{
	RemoveRTEnvelope();
	SetDeathState();
	Stop();
	StopAsync();
	StopSecondaryAnimation();
	PlayAnimation("all", var_39_string);
	WaitForAnimEnd();
	LockAnimationEnd("all", var_39_string);
	RemoveEnvelope();
	return 0;
}


func_1129(var_308_float, var_309_float, var_310_float)
{
	var_313_bool = var_309_float < var_310_float;
	if(var_313_bool != 0) {
		var_309_float = var_308_float;
	} else {
		var_310_float = var_308_float;
	}
	return 0;
	
}


func_1136(var_318_float, var_319_float, var_320_float, var_321_float)
{
	var_322_bool = var_319_float < var_320_float;
	if(var_322_bool != 0) {
		var_320_float = var_318_float;
		return 0;
	}
	var_323_bool = var_319_float > var_321_float;
	if(var_323_bool != 0) {
		var_321_float = var_318_float;
		return 0;
	}
	var_319_float = var_318_float;
	return 0;
}


func_753(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1021(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
	return 0;
}


func_114(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_19_object, var_20_bool, var_21_float, var_108_bool)
{
	var_22_bool = 0; var_23_bool = 0; var_24_float = 0; var_25_cvector = CVector(0,0,0); var_26_cvector = CVector(0,0,0); var_27_bool = 0; var_28_bool = 0; var_29_cvector = CVector(0,0,0); var_30_float = 0; var_31_float = 0; var_32_bool = 0; var_33_bool = 0; var_34_float = 0; var_35_cvector = CVector(0,0,0); var_36_cvector = CVector(0,0,0); var_37_bool = 0; var_38_bool = 0; var_39_cvector = CVector(0,0,0); var_40_float = 0; var_41_float = 0;
	var_1_string = 0;
	
Label_116:
	var_45_int = var_1_string + (int)1;
	var_46_int = "attack_begin" + var_45_int;
	HasAnimation(var_32_bool, "all", var_46_int);
	var_47_bool = var_32_bool == 0; //@nz
	if(var_47_bool != 0) {
	} else {
									var_1_string = var_1_string + (int)1;
									goto Label_116;
	}
	var_2_object = 0;
	
Label_130:
	var_50_int = var_2_object + (int)1;
	var_51_int = "attack" + var_50_int;
	IsExisting3DSound(var_33_bool, var_51_int);
	var_52_bool = var_33_bool == 0; //@nz
	if(var_52_bool != 0) {
	} else {
								var_2_object = var_2_object + (int)1;
								goto Label_130;

	}
	var_4_int = 0;
	var_55_bool = IsFuncExist(var_19_object, "@GetAttackDistance", (int)1);
	if(var_55_bool != 0) {
		@@var_19_object:GetAttackDistance(var_34_float);
		var_34_float = var_34_float + (int)50;
	} else {
							var_21_float = var_34_float;

	}
	var_58_bool = var_34_float >= (int)150;
	if(var_58_bool != 0) {
		var_34_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_19_object;
	IsPlayerActor(var_0_bool, var_37_bool);
	var_59_bool = var_20_bool;
	if(var_59_bool != 0) {
		var_38_bool = 0;
	} else {
						var_38_bool = 1;

	}
Label_166:
	var_60_bool = 0;
	var_60_bool = 0;
	var_61_bool = 0; var_62_object = Obj();
	var_62_object = var_0_bool;
	func_1021(var_61_bool, var_62_object);
	if(var_61_bool != 0) {
		var_95_bool = var_3_int == 0; //@nz
		if(var_95_bool != 0) {
			var_60_bool = 1;
		}
	}
	if(var_60_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_35_cvector);
		GetPFPosition(var_36_cvector);
		var_39_cvector = var_35_cvector - var_36_cvector;
		var_40_float = var_39_cvector | var_39_cvector;
		var_97_int = (float)400.0 + var_34_float;
		var_99_int = (float)400.0 + var_34_float;
		var_100_float = var_97_int * var_99_int;
		var_101_bool = var_40_float >= var_100_float;
		if(var_101_bool != 0) {
			var_102_bool = 0; var_103_object = Obj(); var_104_float = 0; var_105_float = 0; var_106_bool = 0; var_107_bool = 0;
			var_103_object = var_0_bool;
			var_34_float = var_104_float;
			TaskCall(2);
			func_613(var_108_bool, var_109_object, var_102_bool, var_103_object, var_104_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_155_bool = var_108_bool == 0; //@nz
			if(var_155_bool != 0) {
			} else {
		} else {
				var_161_float = var_21_float * var_21_float;
				var_162_bool = var_40_float >= var_161_float;
				if(var_162_bool != 0) {
					var_163_bool = (bool)0 == 0; //@nz
					if(var_163_bool != 0) {
						var_164_object = Obj();
						var_164_object = var_0_bool;
						func_1112(var_164_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_38_bool = 1;
					}
					rand(var_41_float);
					var_175_bool = 0;
					var_177_bool = var_41_float < (float)0.6000000238418579;
					if(var_177_bool != 1) {
						var_178_bool = 0;
						func_554((bool)1, var_178_bool);
						if(var_178_bool != 1) {
							var_175_bool = 0;
						}
					}
					if(var_175_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_186_bool = 0; var_187_float = 0;
						var_21_float = var_187_float;
						func_462(var_41_float, var_186_bool, var_187_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_356_bool = 0;
						func_554(var_41_float, var_356_bool);
						var_357_bool = var_356_bool == 0; //@nz
						if(var_357_bool == 0) goto Label_292;
						var_358_bool = 0; var_359_object = Obj();
						var_359_object = var_0_bool;
						func_1021(var_358_bool, var_359_object);
						var_360_bool = var_358_bool == 0; //@nz
						if(var_360_bool != 0) {
							goto Label_302;
						}
						@@@var_0_bool:GetPFPosition(var_35_cvector);
						GetPFPosition(var_36_cvector);
						var_39_cvector = var_35_cvector - var_36_cvector;
						var_40_float = var_39_cvector | var_39_cvector;
						var_361_float = var_21_float * var_21_float;
						var_362_bool = var_40_float < var_361_float;
						if(var_362_bool == 0) goto Label_292;
						var_363_bool = 0; var_364_float = 0;
						var_21_float = var_364_float;
						func_358(var_40_float, var_41_float, var_363_bool, var_364_float);
						var_365_bool = var_363_bool == 0; //@nz
						if(var_365_bool == 0) goto Label_292;
						goto Label_302;
				}
					var_366_bool = 0; var_367_float = 0;
					var_21_float = var_367_float;
					func_358(var_40_float, var_41_float, var_366_bool, var_367_float);
					var_368_bool = var_366_bool == 0; //@nz
					if(var_368_bool != 0) {
						goto Label_302;
					}
					var_38_bool = 1;

				}
			Label_292:
				goto Label_301;
		}
		Label_301:
			goto Label_166;

		}
	}
Label_302:
	WaitForAnimEnd();
	var_156_int = var_3_int;
	if(var_156_int != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_159_bool = var_37_bool;
	if(var_159_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_502(var_0_bool, var_199_bool)
{
	var_200_cvector = CVector(0,0,0); var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_float = 0; var_204_float = 0; var_205_cvector = CVector(0,0,0); var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_float = 0; var_209_float = 0;
	var_210_bool = 0; var_211_object = Obj();
	var_211_object = var_0_bool;
	func_1021(var_210_bool, var_211_object);
	var_212_bool = var_210_bool == 0; //@nz
	if(var_212_bool != 0) {
		var_199_bool = 0;
		return 10;
	}
	var_213_bool = 0;
	func_554(var_209_float, var_213_bool);
	if(var_213_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_205_cvector);
		GetPFPosition(var_206_cvector);
		var_207_cvector = var_205_cvector - var_206_cvector;
		var_208_float = var_207_cvector | var_207_cvector;
		@@@var_0_bool:GetAttackDistance(var_209_float);
		var_209_float = var_209_float + (int)50;
		var_215_float = var_209_float * var_209_float;
		var_216_bool = var_208_float <= var_215_float;
		if(var_216_bool != 0) {
			func_535(var_209_float);
			var_199_bool = 1;
			return 10;
		}
	}
	var_199_bool = 0;
	return 10;
}


func_760(var_144_string)
{
	var_144_string = "walk";
	return 0;
}


func_762(var_145_string)
{
	var_145_string = "run";
	return 0;
}


func_1147(var_10_bool, var_11_string, var_12_string)
{
	var_13_object = Obj(); var_14_object = Obj();
	FindActor(var_14_object, var_11_string);
	var_15_bool = var_14_object == 0; //@ne
	if(var_15_bool != 0) {
		var_10_bool = 0;
		return 2;
	}
	Trigger(var_14_object, var_12_string);
	var_10_bool = 1;
	return 2;
}
EMIT "Stack[-1] = 0";


func_1021(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_985(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_904(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


