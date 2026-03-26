// @IMPORTS: SensePlayerOnly/1,IsPlayerActor/2,PlayGlobalSound/1,Hold/0,IsLoaded/1,RemoveActor/1,FindActor/2,HasAnimation/3,IsExisting3DSound/2,GetPFPosition/1,PlayAnimation/2,WaitForAnimEnd/0,StopAsync/0,rand/1,Face/1,SetSpeed/1,Stop/0,Sleep/1,GetVictim/2,ReportAttack/1,ReportHit/4,irand/2,SetAttackState/1,IsAnimationPlaying/1,sync/0,Speak/1,GetPosition/1,FindPathTo/2,RotatePath/2,SetTimer/2,FollowPath/5,KillTimer/1,Sleep/2,RequestClearPath/1,GetDirection/1,RemoveRTEnvelope/0,SetDeathState/0,LookAsync/3,UnlookAsync/1,LockAnimationEnd/2,RemoveEnvelope/0,StopSecondaryAnimation/0,GetScene/1,GetEyesHeight/1,AddActorByType/6,GetSecondaryAnimationType/1,FadeSecondaryAnimation/4,RotateAsync/2,self/1,Trigger/2,GetProperty/2,SignalDeath/1
// @STRINGS: W:trigger|W:growl|W:cleanup|W:restore|W:player|W:all|W:attack_begin|W:attack|W:@GetAttackDistance|A:GetAttackDistance|A:GetPFPosition|W:attack_on|W:attack_stay|W:fjump|W:attack_off|W:attack_middle|W:attack_end|W:bjump|W:IsAttacking|A:IsAttacking|A:GetPosition|W:walk|W:run|W:fdie|W:bdie|W:GetScriptProperty|W:Owner|A:HasScriptProperty|A:GetScriptProperty|W:@GetEyesHeight|A:GetEyesHeight|W:head|W:fire|W:phys|W:HasProperty|A:HasProperty|W:health|W:armor|A:GetProperty|W:armor_|A:SetProperty|A:IsDead|W:IsDead|A:GetScene|W:noaccess|W:scripted|W:blood.xml|W:fhit|W:bhit|W:hit_react|W:1|W:2|W:quest_d1_03|W:butcher_death
// @RUN_OP: 0x0
// @RUN_TASK: 0
// @TASK_0: vars=bool params=0
// @EVENT_17: op=0x7 vars=object
// @EVENT_26: op=0x12 vars=string
// @EVENT_6: op=0x44 vars=
// @TASK_1: vars=object,int,int,bool,int params=0
// @EVENT_6: op=0x68 vars=
// @TASK_2: vars=bool,object params=6
// @EVENT_6: op=0x25b vars=
// @EVENT_7: op=0x2c9 vars=int
// @EVENT_10: op=0x2db vars=object
// @EVENT_41: op=0x2e6 vars=object
// @TASK_3: vars= params=1
// @EVENT_22: op=0x370 vars=object,int,float,float
// @EVENT_16: op=0x372 vars=object,string
// @EVENT_41: op=0x374 vars=object
// @STANDALONE_EVENT_22: op=0x48a vars=object,int,float,float
// @STANDALONE_EVENT_16: op=0x492 vars=object,string
// @STANDALONE_EVENT_41: op=0x49f vars=object
// @PE: 0x12,0x62,0x65,0x255,0x2c9,0x2db,0x2e6,0x2ef,0x2fa,0x35a,0x370,0x372,0x374,0x376,0x45f,0x466,0x47d,0x48a,0x49f

task_0_event_17(var_0_bool, var_1_object, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_9_bool = 0; var_10_bool = 0;
	IsPlayerActor(var_8_object, var_10_bool);
	var_11_bool = var_10_bool;
	if(var_11_bool != 0) {
		TaskCall(1);
		func_86();
		TaskReturn();
	}
	return 2;
}


task_0_event_26(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_5_bool, var_6_int, var_7_bool, var_8_object)
{
	var_10_bool = var_8_object == "trigger";
	if(var_10_bool != 0) {
		PlayGlobalSound("growl");
		TaskCall(1);
		func_86();
		TaskReturn();
	} else {
		var_372_string = "";
		var_8_object = var_372_string;
		func_40(var_8_object, var_372_string);
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
		func_84(var_10_bool);
		if(var_10_bool != 0) {
			var_8_bool = 1;
		}
	}
	if(var_8_bool != 0) {
		var_11_object = Obj();
		func_1113(var_11_object);
		RemoveActor(var_11_object);
	}
	return 0;
}


task_1_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj();
	func_1113(var_8_object);
	RemoveActor(var_8_object);
	Hold();
	return 0;
}


task_2_event_6(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	var_8_object = Obj();
	func_1113(var_8_object);
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
	func_751(var_11_bool, var_12_object);
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
	func_735(var_8_object);
	var_8_object = Obj();
	func_1183();
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
	func_1035(var_13_int, var_14_float);
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
	func_1149(var_9_object);
	return 0;
}


main(var_0_bool, var_1_object, var_2_int, var_3_int, var_4_bool, var_5_int, var_6_bool, var_7_object)
{
	SensePlayerOnly((bool)1);
	func_36();
	return 0;
}


func_771(var_17_object)
{
	var_18_cvector = CVector(0,0,0); var_19_cvector = CVector(0,0,0); var_20_cvector = CVector(0,0,0); var_21_cvector = CVector(0,0,0); var_22_string = ""; var_23_object = Obj(); var_24_bool = 0; var_25_bool = 0; var_26_float = 0; var_27_cvector = CVector(0,0,0); var_28_cvector = CVector(0,0,0); var_29_cvector = CVector(0,0,0); var_30_cvector = CVector(0,0,0); var_31_cvector = CVector(0,0,0); var_32_string = ""; var_33_object = Obj(); var_34_bool = 0; var_35_bool = 0; var_36_float = 0; var_37_cvector = CVector(0,0,0);
	var_38_bool = var_17_object == 0; //@ne
	if(var_38_bool != 0) {
		var_39_string = "";
		func_858("fdie");
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


func_906(var_273_float, var_274_object, var_275_float, var_276_int)
{
	var_280_int = 0; var_281_string = ""; var_282_int = 0; var_283_float = 0; var_284_float = 0; var_285_float = 0; var_286_int = 0; var_287_string = ""; var_288_int = 0; var_289_float = 0; var_290_float = 0; var_291_float = 0;
	var_292_bool = 0; var_293_object = Obj(); var_294_string = "";
	var_274_object = var_293_object;
	func_894(var_292_bool, var_293_object, "health");
	var_295_bool = var_292_bool == 0; //@nz
	if(var_295_bool != 0) {
		var_273_float = 0.0;
		return 12;
	}
	var_296_bool = 0; var_297_object = Obj(); var_298_string = "";
	var_274_object = var_297_object;
	func_894(var_296_bool, var_297_object, "armor");
	var_299_bool = var_296_bool == 0; //@nz
	if(var_299_bool != 0) {
		var_286_int = 0;
	} else {
			@@var_274_object:GetProperty("armor", var_286_int);
	}
	var_301_string = ""; var_302_int = 0;
	var_276_int = var_302_int;
	func_886(var_301_string, var_302_int);
	var_287_string = "armor_" + var_301_string;
	var_305_bool = 0; var_306_object = Obj(); var_307_string = "";
	var_274_object = var_306_object;
	var_287_string = var_307_string;
	func_894(var_305_bool, var_306_object, var_307_string);
	var_308_bool = var_305_bool == 0; //@nz
	if(var_308_bool != 0) {
		var_288_int = 0;
	} else {
		@@var_274_object:GetProperty(var_287_string, var_288_int);

	}
	var_309_float = 0; var_310_float = 0; var_311_float = 0;
	var_312_int = var_286_int + var_288_int;
	var_310_float = var_312_int / (float)100.0;
	func_1119(var_309_float, var_310_float, (float)1);
	var_309_float = var_289_float;
	@@var_274_object:GetProperty("health", var_290_float);
	var_317_int = (int)1 - var_289_float;
	var_291_float = var_275_float * var_317_int;
	var_319_float = 0; var_320_float = 0; var_321_float = 0; var_322_float = 0;
	var_320_float = var_290_float - var_291_float;
	func_1126(var_319_float, var_320_float, (float)0, (float)1);
	@@var_274_object:SetProperty("health", var_319_float);
	var_291_float = var_273_float;
	return 12;
	
}


func_1035(var_12_object, var_13_int)
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


func_533(var_0_bool)
{
	var_218_cvector = CVector(0,0,0); var_219_cvector = CVector(0,0,0); var_220_cvector = CVector(0,0,0); var_221_cvector = CVector(0,0,0);
	Face(var_0_bool);
	PlayAnimation("all", "bjump");
	@@@var_0_bool:GetPFPosition(var_220_cvector);
	GetPFPosition(var_221_cvector);
	WaitForAnimEnd();
	StopAsync();
	SetSpeed(CVector(0.0, 0.0, 0.0));
	return 4;
}


func_36()
{
	
Label_36:
	Hold();
	goto Label_36;
}
EMIT "Return(); Pop(0)";


func_40(var_0_bool, var_372_string)
{
	var_373_bool = 0; var_374_bool = 0;
	var_376_bool = var_372_string == "cleanup";
	if(var_376_bool != 0) {
		var_0_bool = true;
		IsLoaded(var_374_bool);
		var_377_bool = 0;
		var_377_bool = 0;
		var_378_bool = var_374_bool == 0; //@nz
		if(var_378_bool != 0) {
			var_379_bool = 0;
			func_84(var_379_bool);
			if(var_379_bool != 0) {
				var_377_bool = 1;
			}
		}
		if(var_377_bool != 0) {
			var_380_object = Obj();
			func_1113(var_380_object);
			RemoveActor(var_380_object);
		}
	} else {
		var_384_bool = var_372_string == "restore";
		if(var_384_bool == 0) goto Label_67;
		var_0_bool = false;
	}
Label_67:
	return 2;
	
}


func_552(var_0_bool, var_179_bool)
{
	var_180_bool = 0; var_181_bool = 0;
	var_184_bool = IsFuncExist(var_0_bool, "IsAttacking", (int)1);
	if(var_184_bool != 0) {
		@@@var_0_bool:IsAttacking(var_181_bool);
		var_181_bool = var_179_bool;
		return 2;
	}
	var_179_bool = 0;
	return 2;
}


func_563(var_2_object, var_4_int)
{
	var_241_float = 0; var_242_int = 0; var_243_float = 0; var_244_int = 0;
	var_245_bool = var_2_object == 0; //@nz
	if(var_245_bool != 0) {
		return 4;
	}
	var_246_int = var_4_int;
	if(var_246_int != 0) {
		var_4_int = var_4_int + (int)-1;
		var_249_bool = var_4_int > (int)0;
		if(var_249_bool != 0) {
			return 4;
		}
	}
	rand(var_243_float);
	var_250_float = 0;
	func_601(var_250_float);
	var_251_bool = var_243_float < var_250_float;
	if(var_251_bool != 0) {
		irand(var_244_int, var_2_object);
		var_244_int = var_244_int + (int)1;
		var_254_int = "attack" + var_244_int;
		Speak(var_254_int);
		var_255_int = 0;
		func_599(var_255_int);
		var_4_int = var_255_int;
	}
	return 4;
}


func_436(var_345_bool, var_346_float)
{
	var_347_float = 0; var_348_bool = 0; var_349_float = 0; var_350_bool = 0;
	rand(var_349_float);
	var_351_bool = var_349_float < var_346_float;
	if(var_351_bool != 0) {

	Label_441:
		IsAnimationPlaying(var_350_bool);
		var_352_bool = var_350_bool == 0; //@nz
		if(var_352_bool != 0) {
		} else {
			var_353_bool = 0;
			func_500(var_350_bool, var_353_bool);
			if(var_353_bool != 0) {
				var_345_bool = 1;
				sync();
				goto Label_441;
			}
			return 4;
	}
		WaitForAnimEnd();
	}
	goto Label_458;
	
Label_458:
	var_345_bool = 0;
	return 4;
	
}


func_317(var_0_bool, var_259_float, var_260_int)
{
	var_261_object = Obj(); var_262_float = 0; var_263_float = 0; var_264_object = Obj(); var_265_float = 0; var_266_float = 0;
	var_268_float = var_259_float * (float)0.8999999761581421;
	GetVictim(var_268_float, var_264_object);
	ReportAttack(var_0_bool);
	var_269_bool = var_264_object == var_0_bool;
	if(var_269_bool != 0) {
		var_270_float = 0; var_271_object = Obj(); var_272_int = 0;
		var_264_object = var_271_object;
		var_260_int = var_272_int;
		func_98(var_272_int);
		var_270_float = var_265_float;
		var_273_float = 0; var_274_object = Obj(); var_275_float = 0; var_276_int = 0;
		var_264_object = var_274_object;
		var_265_float = var_275_float;
		var_277_int = 0; var_278_object = Obj(); var_279_int = 0;
		var_264_object = var_278_object;
		var_260_int = var_279_int;
		func_101(var_279_int);
		var_277_int = var_276_int;
		func_906(var_273_float, var_274_object, var_275_float, var_276_int);
		var_273_float = var_266_float;
		var_326_int = 0;
		func_595(var_326_int);
		ReportHit(var_0_bool, var_326_int, var_266_float, var_265_float);
		var_327_object = Obj(); var_328_float = 0;
		var_264_object = var_327_object;
		var_266_float = var_328_float;
		func_597();
	}
	return 6;
}
EMIT "Stack[-3] = 0";


func_970(var_28_bool, var_29_object)
{
	var_30_bool = 0; var_31_bool = 0;
	@@var_29_object:IsDead(var_31_bool);
	var_31_bool = var_28_bool;
	return 2;
}


func_460(var_0_bool, var_187_bool, var_188_float)
{
	var_189_bool = 0; var_190_cvector = CVector(0,0,0); var_191_cvector = CVector(0,0,0); var_192_cvector = CVector(0,0,0); var_193_float = 0; var_194_bool = 0; var_195_cvector = CVector(0,0,0); var_196_cvector = CVector(0,0,0); var_197_cvector = CVector(0,0,0); var_198_float = 0;
	
Label_461:
	IsAnimationPlaying(var_194_bool);
	var_199_bool = var_194_bool == 0; //@nz
	if(var_199_bool != 0) {
	} else {
		var_200_bool = 0;
		func_500(var_198_float, var_200_bool);
		if(var_200_bool != 0) {
			var_187_bool = 1;
			return 10;
		}
		var_225_bool = 0; var_226_object = Obj();
		var_226_object = var_0_bool;
		func_1011(var_225_bool, var_226_object);
		var_227_bool = var_225_bool == 0; //@nz
		if(var_227_bool != 0) {
			var_187_bool = 0;
			return 10;
		}
		@@@var_0_bool:GetPFPosition(var_195_cvector);
		GetPFPosition(var_196_cvector);
		var_197_cvector = var_195_cvector - var_196_cvector;
		var_198_float = var_197_cvector | var_197_cvector;
		var_228_float = var_188_float * var_188_float;
		var_229_bool = var_198_float < var_228_float;
		if(var_229_bool != 0) {
			var_230_bool = 0; var_231_float = 0;
			var_188_float = var_231_float;
			func_356(var_197_cvector, var_198_float, var_230_bool, var_231_float);
			var_187_bool = 1;
			sync();
			goto Label_461;
		}
		return 10;
	}
	var_187_bool = 0;
	return 10;
	
}


func_1102(var_165_object)
{
	var_166_cvector = CVector(0,0,0); var_167_cvector = CVector(0,0,0); var_168_cvector = CVector(0,0,0); var_169_cvector = CVector(0,0,0); var_170_cvector = CVector(0,0,0); var_171_cvector = CVector(0,0,0);
	@@var_165_object:GetPosition(var_169_cvector);
	GetPosition(var_170_cvector);
	var_171_cvector = var_169_cvector - var_170_cvector;
	var_172_float = GetByIndex(var_171_cvector, 0);
	var_173_float = GetByIndex(var_171_cvector, 2);
	RotateAsync(var_172_float, var_173_float);
	return 6;
}


func_975(var_17_bool, var_18_object)
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
		func_970(var_28_bool, var_29_object);
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


func_595(var_326_int)
{
	var_326_int = 0;
	return 0;
}


func_84(var_10_bool)
{
	var_10_bool = 1;
	return 0;
}


func_597()
{
	return 0;
}


func_86()
{
	var_17_object = Obj(); var_18_object = Obj();
	FindActor(var_18_object, "player");
	var_20_object = Obj(); var_21_bool = 0; var_22_float = 0;
	var_18_object = var_20_object;
	func_112(var_13_int, var_14_int, var_15_bool, var_16_int, var_17_object, var_18_object, var_20_object, (bool)1, (float)180.0);
	return 2;
}
EMIT "Stack[-1] = 0";


func_599(var_255_int)
{
	var_255_int = 1;
	return 0;
}


func_1113(var_8_object)
{
	var_9_object = Obj(); var_10_object = Obj();
	self(var_10_object);
	var_10_object = var_8_object;
	return 2;
}
EMIT "Stack[-1] = 0";


func_601(var_250_float)
{
	var_250_float = 0.5;
	return 0;
}


func_858(var_39_string)
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


func_735(var_0_bool)
{
	var_0_bool = true;
	KillTimer((int)0);
	Stop();
	return 0;
}


func_1119(var_309_float, var_310_float, var_311_float)
{
	var_314_bool = var_310_float < var_311_float;
	if(var_314_bool != 0) {
		var_310_float = var_309_float;
	} else {
		var_311_float = var_309_float;
	}
	return 0;
	
}


func_98(var_270_float)
{
	var_270_float = 0.10000000149011612;
	return 0;
}


func_611(var_0_bool, var_1_string, var_103_bool, var_104_object, var_105_float, var_106_float, var_107_bool, var_108_bool)
{
	var_111_bool = 0; var_112_bool = 0; var_113_object = Obj(); var_114_cvector = CVector(0,0,0); var_115_cvector = CVector(0,0,0); var_116_cvector = CVector(0,0,0); var_117_float = 0; var_118_object = Obj(); var_119_bool = 0; var_120_bool = 0; var_121_object = Obj(); var_122_cvector = CVector(0,0,0); var_123_cvector = CVector(0,0,0); var_124_cvector = CVector(0,0,0); var_125_float = 0; var_126_object = Obj();
	var_0_bool = false;
	var_1_string = var_104_object;
	var_108_bool = var_120_bool;
	
Label_615:
	var_127_bool = 0; var_128_object = Obj();
	var_104_object = var_128_object;
	func_751(var_127_bool, var_128_object);
	var_131_bool = var_127_bool == 0; //@nz
	if(var_131_bool != 0) {
		var_103_bool = 0;
		return 16;
	}
	@@var_104_object:GetPosition(var_122_cvector);
	GetPosition(var_123_cvector);
	var_124_cvector = var_122_cvector - var_123_cvector;
	var_125_float = var_124_cvector | var_124_cvector;
	var_132_bool = 0;
	var_132_bool = 0;
	var_134_bool = var_106_float > (int)0;
	if(var_134_bool != 0) {
		var_135_float = var_106_float * var_106_float;
		var_136_bool = var_125_float > var_135_float;
		if(var_136_bool != 0) {
			var_132_bool = 1;
		}
	}
	if(var_132_bool != 0) {
		Stop();
		var_103_bool = 0;
		return 16;
	}
	var_137_float = var_105_float * var_105_float;
	var_138_bool = var_125_float > var_137_float;
	if(var_138_bool != 0) {
		@@var_104_object:GetPFPosition(var_122_cvector);
		FindPathTo(var_126_object, var_122_cvector);
		var_139_bool = var_126_object != 0; //@nn
		if(var_139_bool != 0) {
			var_126_object = var_121_object;
			var_126_object = 0;
		}
		var_140_bool = var_121_object != 0; //@nn
		if(var_140_bool != 0) {
			var_141_bool = var_120_bool;
			if(var_141_bool == 0) goto Label_664;
			var_120_bool = 0;
			RotatePath(var_121_object, var_119_bool);
			var_142_bool = var_119_bool == 0; //@nz
			if(var_142_bool != 0) {
			} else {
				SetTimer((int)0, (float)0.30000001192092896);
				var_145_string = "";
				func_758(var_145_string);
				var_146_string = "";
				func_760(var_146_string);
				FollowPath(var_121_object, var_107_bool, var_119_bool, var_145_string, var_146_string);
				var_147_bool = var_119_bool == 0; //@nz
				if(var_147_bool != 0) {
					var_148_bool = var_0_bool;
					if(var_148_bool != 0) {
						var_121_object = 0;
						goto Label_711;
					EMIT "GOTO 0x2ac";
					}
				} else {
					var_121_object = 0;
		} else {
					KillTimer((int)0);
					Sleep((float)0.5, var_119_bool);
					var_151_bool = var_119_bool == 0; //@nz
					if(var_151_bool != 0) {
						var_152_bool = var_0_bool;
						if(var_152_bool != 0) {
							var_121_object = 0;
							goto Label_711;
						}
					}
					SetTimer((int)0, (float)0.30000001192092896);
	}
				KillTimer((int)0);
				goto Label_711;
	}
			var_126_object = 0;
			goto Label_709;

		Label_709:
			var_121_object = 0;

		}
		goto Label_615;
	}
Label_711:
	var_103_bool = !var_0_bool;
	return 16;
	
}


func_356(var_0_bool, var_1_string, var_230_bool, var_231_float)
{
	var_232_int = 0; var_233_bool = 0; var_234_int = 0; var_235_bool = 0;
	irand(var_234_int, var_1_string);
	var_234_int = var_234_int + (int)1;
	Face(var_0_bool);
	SetAttackState((bool)1);
	var_240_int = "attack_begin" + var_234_int;
	PlayAnimation("all", var_240_int);
	WaitForAnimEnd();
	func_563(var_234_int, var_235_bool);
	var_256_bool = 0; var_257_object = Obj();
	var_257_object = var_0_bool;
	func_1011(var_256_bool, var_257_object);
	var_258_bool = var_256_bool == 0; //@nz
	if(var_258_bool != 0) {
		StopAsync();
		var_230_bool = 0;
		return 4;
	}
	var_259_float = 0; var_260_int = 0;
	var_231_float = var_259_float;
	var_234_int = var_260_int;
	func_317(var_235_bool, var_259_float, var_260_int);
	var_331_int = "attack_middle" + var_234_int;
	HasAnimation(var_235_bool, "all", var_331_int);
	var_332_bool = var_235_bool;
	if(var_332_bool != 0) {
		var_335_int = "attack_middle" + var_234_int;
		PlayAnimation("all", var_335_int);
		WaitForAnimEnd();
		var_336_bool = 0; var_337_object = Obj();
		var_337_object = var_0_bool;
		func_1011(var_336_bool, var_337_object);
		var_338_bool = var_336_bool == 0; //@nz
		if(var_338_bool != 0) {
			StopAsync();
			var_230_bool = 0;
			return 4;
		}
		var_339_float = 0; var_340_int = 0;
		var_231_float = var_339_float;
		var_234_int = var_340_int;
		func_317(var_235_bool, var_339_float, var_340_int);
	}
	SetAttackState((bool)0);
	var_344_int = "attack_end" + var_234_int;
	PlayAnimation("all", var_344_int);
	var_345_bool = 0; var_346_float = 0;
	func_436(var_345_bool, (float)0.75);
	StopAsync();
	var_230_bool = 1;
	return 4;
}


func_101(var_277_int)
{
	var_277_int = 0;
	return 0;
}


func_1126(var_319_float, var_320_float, var_321_float, var_322_float)
{
	var_323_bool = var_320_float < var_321_float;
	if(var_323_bool != 0) {
		var_321_float = var_319_float;
		return 0;
	}
	var_324_bool = var_320_float > var_322_float;
	if(var_324_bool != 0) {
		var_322_float = var_319_float;
		return 0;
	}
	var_320_float = var_319_float;
	return 0;
}


func_751(var_11_bool, var_12_object)
{
	var_13_bool = 0; var_14_object = Obj();
	var_12_object = var_14_object;
	func_1011(var_13_bool, var_14_object);
	var_13_bool = var_11_bool;
	return 0;
}


func_112(var_0_bool, var_1_string, var_2_object, var_3_int, var_4_int, var_20_object, var_21_bool, var_22_float, var_109_bool)
{
	var_23_bool = 0; var_24_bool = 0; var_25_float = 0; var_26_cvector = CVector(0,0,0); var_27_cvector = CVector(0,0,0); var_28_bool = 0; var_29_bool = 0; var_30_cvector = CVector(0,0,0); var_31_float = 0; var_32_float = 0; var_33_bool = 0; var_34_bool = 0; var_35_float = 0; var_36_cvector = CVector(0,0,0); var_37_cvector = CVector(0,0,0); var_38_bool = 0; var_39_bool = 0; var_40_cvector = CVector(0,0,0); var_41_float = 0; var_42_float = 0;
	var_1_string = 0;
	
Label_114:
	var_46_int = var_1_string + (int)1;
	var_47_int = "attack_begin" + var_46_int;
	HasAnimation(var_33_bool, "all", var_47_int);
	var_48_bool = var_33_bool == 0; //@nz
	if(var_48_bool != 0) {
	} else {
									var_1_string = var_1_string + (int)1;
									goto Label_114;
	}
	var_2_object = 0;
	
Label_128:
	var_51_int = var_2_object + (int)1;
	var_52_int = "attack" + var_51_int;
	IsExisting3DSound(var_34_bool, var_52_int);
	var_53_bool = var_34_bool == 0; //@nz
	if(var_53_bool != 0) {
	} else {
								var_2_object = var_2_object + (int)1;
								goto Label_128;

	}
	var_4_int = 0;
	var_56_bool = IsFuncExist(var_20_object, "@GetAttackDistance", (int)1);
	if(var_56_bool != 0) {
		@@var_20_object:GetAttackDistance(var_35_float);
		var_35_float = var_35_float + (int)50;
	} else {
							var_22_float = var_35_float;

	}
	var_59_bool = var_35_float >= (int)150;
	if(var_59_bool != 0) {
		var_35_float = 150;
	}
	var_3_int = false;
	var_0_bool = var_20_object;
	IsPlayerActor(var_0_bool, var_38_bool);
	var_60_bool = var_21_bool;
	if(var_60_bool != 0) {
		var_39_bool = 0;
	} else {
						var_39_bool = 1;

	}
Label_164:
	var_61_bool = 0;
	var_61_bool = 0;
	var_62_bool = 0; var_63_object = Obj();
	var_63_object = var_0_bool;
	func_1011(var_62_bool, var_63_object);
	if(var_62_bool != 0) {
		var_96_bool = var_3_int == 0; //@nz
		if(var_96_bool != 0) {
			var_61_bool = 1;
		}
	}
	if(var_61_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_36_cvector);
		GetPFPosition(var_37_cvector);
		var_40_cvector = var_36_cvector - var_37_cvector;
		var_41_float = var_40_cvector | var_40_cvector;
		var_98_int = (float)400.0 + var_35_float;
		var_100_int = (float)400.0 + var_35_float;
		var_101_float = var_98_int * var_100_int;
		var_102_bool = var_41_float >= var_101_float;
		if(var_102_bool != 0) {
			var_103_bool = 0; var_104_object = Obj(); var_105_float = 0; var_106_float = 0; var_107_bool = 0; var_108_bool = 0;
			var_104_object = var_0_bool;
			var_35_float = var_105_float;
			TaskCall(2);
			func_611(var_109_bool, var_110_object, var_103_bool, var_104_object, var_105_float, (float)3000.0, (bool)1, (bool)0);
			TaskReturn();
			var_156_bool = var_109_bool == 0; //@nz
			if(var_156_bool != 0) {
			} else {
		} else {
				var_162_float = var_22_float * var_22_float;
				var_163_bool = var_41_float >= var_162_float;
				if(var_163_bool != 0) {
					var_164_bool = (bool)0 == 0; //@nz
					if(var_164_bool != 0) {
						var_165_object = Obj();
						var_165_object = var_0_bool;
						func_1102(var_165_object);
						PlayAnimation("all", "attack_on");
						WaitForAnimEnd();
						StopAsync();
						var_39_bool = 1;
					}
					rand(var_42_float);
					var_176_bool = 0;
					var_178_bool = var_42_float < (float)0.6000000238418579;
					if(var_178_bool != 1) {
						var_179_bool = 0;
						func_552((bool)1, var_179_bool);
						if(var_179_bool != 1) {
							var_176_bool = 0;
						}
					}
					if(var_176_bool != 0) {
						Face(var_0_bool);
						PlayAnimation("all", "attack_stay");
						var_187_bool = 0; var_188_float = 0;
						var_22_float = var_188_float;
						func_460(var_42_float, var_187_bool, var_188_float);
						StopAsync();
					} else {
						Face(var_0_bool);
						PlayAnimation("all", "fjump");
						WaitForAnimEnd();
						SetSpeed(CVector(0.0, 0.0, 0.0));
						Stop();
						StopAsync();
						var_357_bool = 0;
						func_552(var_42_float, var_357_bool);
						var_358_bool = var_357_bool == 0; //@nz
						if(var_358_bool == 0) goto Label_290;
						var_359_bool = 0; var_360_object = Obj();
						var_360_object = var_0_bool;
						func_1011(var_359_bool, var_360_object);
						var_361_bool = var_359_bool == 0; //@nz
						if(var_361_bool != 0) {
							goto Label_300;
						}
						@@@var_0_bool:GetPFPosition(var_36_cvector);
						GetPFPosition(var_37_cvector);
						var_40_cvector = var_36_cvector - var_37_cvector;
						var_41_float = var_40_cvector | var_40_cvector;
						var_362_float = var_22_float * var_22_float;
						var_363_bool = var_41_float < var_362_float;
						if(var_363_bool == 0) goto Label_290;
						var_364_bool = 0; var_365_float = 0;
						var_22_float = var_365_float;
						func_356(var_41_float, var_42_float, var_364_bool, var_365_float);
						var_366_bool = var_364_bool == 0; //@nz
						if(var_366_bool == 0) goto Label_290;
						goto Label_300;
				}
					var_367_bool = 0; var_368_float = 0;
					var_22_float = var_368_float;
					func_356(var_41_float, var_42_float, var_367_bool, var_368_float);
					var_369_bool = var_367_bool == 0; //@nz
					if(var_369_bool != 0) {
						goto Label_300;
					}
					var_39_bool = 1;

				}
			Label_290:
				goto Label_299;
		}
		Label_299:
			goto Label_164;

		}
	}
Label_300:
	WaitForAnimEnd();
	var_157_int = var_3_int;
	if(var_157_int != 0) {
		return 20;
	}
	PlayAnimation("all", "attack_off");
	WaitForAnimEnd();
	var_160_bool = var_38_bool;
	if(var_160_bool != 0) {
		Sleep((float)2.0);
	}
	return 20;
	
}


func_1137(var_10_bool, var_11_string, var_12_string)
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


func_1011(var_13_bool, var_14_object)
{
	var_15_int = 0; var_16_int = 0;
	var_17_bool = 0; var_18_object = Obj();
	var_14_object = var_18_object;
	func_975(var_17_bool, var_18_object);
	var_34_bool = var_17_bool == 0; //@nz
	if(var_34_bool != 0) {
		var_13_bool = 0;
		return 2;
	}
	var_35_bool = 0; var_36_object = Obj(); var_37_string = "";
	var_14_object = var_36_object;
	func_894(var_35_bool, var_36_object, "noaccess");
	var_44_bool = var_35_bool == 0; //@nz
	if(var_44_bool != 0) {
		var_13_bool = 1;
		return 2;
	}
	@@var_14_object:GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == (int)0;
	return 2;
}


func_500(var_0_bool, var_200_bool)
{
	var_201_cvector = CVector(0,0,0); var_202_cvector = CVector(0,0,0); var_203_cvector = CVector(0,0,0); var_204_float = 0; var_205_float = 0; var_206_cvector = CVector(0,0,0); var_207_cvector = CVector(0,0,0); var_208_cvector = CVector(0,0,0); var_209_float = 0; var_210_float = 0;
	var_211_bool = 0; var_212_object = Obj();
	var_212_object = var_0_bool;
	func_1011(var_211_bool, var_212_object);
	var_213_bool = var_211_bool == 0; //@nz
	if(var_213_bool != 0) {
		var_200_bool = 0;
		return 10;
	}
	var_214_bool = 0;
	func_552(var_210_float, var_214_bool);
	if(var_214_bool != 0) {
		@@@var_0_bool:GetPFPosition(var_206_cvector);
		GetPFPosition(var_207_cvector);
		var_208_cvector = var_206_cvector - var_207_cvector;
		var_209_float = var_208_cvector | var_208_cvector;
		@@@var_0_bool:GetAttackDistance(var_210_float);
		var_210_float = var_210_float + (int)50;
		var_216_float = var_210_float * var_210_float;
		var_217_bool = var_209_float <= var_216_float;
		if(var_217_bool != 0) {
			func_533(var_210_float);
			var_200_bool = 1;
			return 10;
		}
	}
	var_200_bool = 0;
	return 10;
}


func_758(var_145_string)
{
	var_145_string = "walk";
	return 0;
}


func_886(var_301_string, var_302_int)
{
	var_304_bool = var_302_int == (int)1;
	if(var_304_bool != 0) {
		var_301_string = "fire";
		return 0;
	}
	var_301_string = "phys";
	return 0;
}


func_760(var_146_string)
{
	var_146_string = "run";
	return 0;
}


func_762(var_16_object)
{
	var_17_object = Obj();
	var_16_object = var_17_object;
	func_771(var_17_object);
	
Label_767:
	Hold();
	goto Label_767;
}
EMIT "Return(); Pop(0)";


func_1149(var_9_object)
{
	var_10_bool = 0; var_11_string = ""; var_12_string = "";
	func_1137(var_10_bool, "quest_d1_03", "butcher_death");
	var_16_object = Obj();
	var_9_object = var_16_object;
	TaskCall(3);
	func_762(var_16_object);
	TaskReturn();
	return 0;
}


func_894(var_35_bool, var_36_object, var_37_string)
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


