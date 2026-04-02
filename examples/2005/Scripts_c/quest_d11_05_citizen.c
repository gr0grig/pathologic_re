maintask task_0
{
	void init(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool)
	{
	
		for(;;) {
			@Sleep(3);
			func_42();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
		void OnAttacked(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, object var_13_object)
		{
		object var_15_object;
		var_13_object = var_15_object;
			bool var_14_bool;
		func_1798(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_123();
			object var_50_object;
			var_13_object = var_50_object;
			func_1805(var_50_object);
		}
		}

	void OnSee(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_11_bool;
		@IsPlayerActor(var_9_bool, var_11_bool);
		if(var_11_bool != 0) {
			object var_13_object;
			var_9_bool = var_13_object;
			func_8();
		}
	}

	void OnHear(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_11_bool;
		@IsPlayerActor(var_9_bool, var_11_bool);
		if(var_11_bool != 0) {
			object var_13_object;
			var_9_bool = var_13_object;
			func_8();
		}
	}

}


task task_1
{
	void OnUse(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
		bool var_11_bool;
		@IsOverrideActive(var_11_bool);
		if(!var_11_bool) { //@nz
			object var_13_object;
			var_9_bool = var_13_object;
			func_1817(var_13_object);
		}
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool)
	{
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, int var_9_int)
	{
		if(var_9_int == 1) {
			func_1709(var_1_int);
		} else {
			int var_17_int;
			func_1179(var_8_bool, var_17_int, var_17_int);
		}
	
	}

	// @pe
	void OnSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(!var_2_int) //@nz
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = true;
			object var_13_object;
			var_9_object = var_13_object;
			func_1568(var_13_object);
		}
	}

	// @pe
	void OnStopSee(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		bool var_10_bool = false;
		if(var_1_int == var_9_object) {
			if(var_2_int != 0)
				var_10_bool = true;
		}
		if(var_10_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		@RequestClearPath(var_9_object);
	}

	// @pe
	void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
	{
		func_1035(var_9_object);
		object var_14_object;
		var_9_object = var_14_object;
		func_1792();
	}

}


// @pe
void OnHit(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float)
{
	object var_13_object;
	var_9_object = var_13_object;
	int var_14_int;
	var_10_int = var_14_int;
	float var_15_float;
	var_11_float = var_15_float;
	func_1470(var_13_object, var_14_int, var_15_float);
}


// @pe
void OnHit2(object actor, int iHitType, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, int var_10_int, float var_11_float, float var_12_float, cvector var_13_cvector, cvector var_14_cvector)
{
	object var_15_object;
	var_9_object = var_15_object;
	int var_16_int;
	var_10_int = var_16_int;
	float var_17_float;
	var_11_float = var_17_float;
	cvector var_18_cvector;
	var_13_cvector = var_18_cvector;
	cvector var_19_cvector;
	var_14_cvector = var_19_cvector;
	func_1538(var_17_float, var_18_cvector, var_19_cvector);
}


void OnPropertyChange(object var_0_object, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, string var_10_string)
{
	float var_12_float;
	if(var_10_string == "health") {
		@GetProperty("health", var_12_float);
		if(var_12_float <= 0)
			@SignalDeath(var_9_object);
	}
}


// @pe
void OnDeath(object actor, int var_1_int, int var_2_int, bool var_3_bool, float var_4_float, int var_5_int, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object)
{
	object var_10_object;
	var_9_object = var_10_object;
	func_1753(var_10_object);
}


// @pe
void func_128(object var_11_object)
{
	object var_13_object;
	var_11_object = var_13_object;
	bool var_12_bool;
	func_1249(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		bool var_16_bool; object var_17_object;
		var_11_object = var_17_object;
		func_1654(var_16_bool, var_17_object, 0.0);
	}
	object var_54_object;
	var_11_object = var_54_object;
	func_144(var_54_object);
}


void func_1538(object var_15_object, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_22_object;
	@GetScene(var_22_object);
	object var_23_object;
	@AddActorByType(var_23_object, "scripted", var_22_object, var_18_cvector, var_19_cvector, "blood_dir.xml");
	object var_26_object;
	var_15_object = var_26_object;
	func_1426(var_26_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_260(string var_77_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_78_string;
	var_77_string = var_78_string;
	func_1579(var_78_string);
	@PlayAnimation("all", var_77_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_77_string);
	@RemoveEnvelope();
}


// @pe
void func_1798(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1402(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


void func_1288(float var_402_float, object var_403_object, float var_404_float, int var_405_int)
{
	int var_415_int; int var_417_int;
	object var_422_object;
	var_403_object = var_422_object;
	bool var_421_bool;
	func_1254(var_421_bool, var_422_object, "health");
	if(!var_421_bool) //@nz
		var_402_float = 0.0;
	bool var_425_bool; object var_426_object;
	func_1254(var_425_bool, var_426_object, "armor");
	if(!var_425_bool) //@nz
		var_415_int = 0;
	else
		var_426_object->GetProperty("armor", var_415_int);
	string var_430_string; int var_431_int;
	var_405_int = var_431_int;
	func_1228(var_430_string, var_431_int);
	string var_416_string = "armor_" + var_430_string;
	bool var_436_bool; object var_437_object; string var_438_string;
	var_403_object = var_437_object;
	func_1254(var_436_bool, var_437_object, var_438_string);
	if(!var_436_bool) //@nz
		var_417_int = 0;
	else
		var_403_object->GetProperty(var_438_string, var_417_int);

	float var_440_float;
	func_1636(var_440_float, ((var_415_int + var_417_int) / 100.0), (float)1);
	float var_418_float;
	var_440_float = var_418_float;
	float var_419_float;
	var_403_object->GetProperty("health", var_419_float);
	float var_420_float = var_404_float * (1 - var_418_float);
	float var_450_float;
	func_1643(var_450_float, (var_419_float - var_420_float), (float)0, (float)1);
	var_403_object->SetProperty("health", var_450_float);
	bool var_456_bool; object var_457_object;
	var_403_object = var_457_object;
	func_1249(var_456_bool, var_457_object);
	if(var_456_bool != 0) {
		float var_458_float = -var_420_float;
		func_1689(var_458_float);
	}
	var_420_float = var_402_float;
	
}


void func_777(object var_0_object, bool var_290_bool, float var_291_float)
{
	bool var_297_bool; cvector var_298_cvector; cvector var_299_cvector; cvector var_300_cvector; float var_301_float;
	
	for(;;) {
		@IsAnimationPlaying(var_297_bool);
		if(!var_297_bool) //@nz
			break;
		bool var_303_bool;
		func_848(var_303_bool);
		if(var_303_bool != 0) {
			var_290_bool = true;
			return 10;
		}
		bool var_346_bool;
		func_1402(var_346_bool, var_0_object);
		if(!var_346_bool) { //@nz
			var_290_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_298_cvector); //@t
		@GetPFPosition(var_299_cvector);
		var_300_cvector = var_298_cvector - var_299_cvector;
		var_301_float = var_300_cvector | var_300_cvector;
		if(var_301_float < (var_291_float * var_291_float)) {
			bool var_351_bool; float var_352_float;
			var_291_float = var_352_float;
			func_613(var_300_cvector, var_301_float, var_351_bool, var_352_float);
			var_290_bool = true;
			return 10;
		}
		@sync();
	}
	func_952(var_301_float);
	var_290_bool = false;
}


void func_1035(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1201(var_9_object);
}


// @pe
void func_1805(object var_50_object)
{
	object var_51_object;
	var_50_object = var_51_object;
	func_1830(var_51_object);
}


void func_909(object var_0_object, bool var_253_bool)
{
	bool var_255_bool;
	var_258_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_258_bool != 0) {
		var_0_object->IsAttacking(var_255_bool); //@t
		var_255_bool = var_253_bool;
	}
	var_253_bool = false;
}


// @pe
void func_144(object var_54_object)
{
	object var_55_object;
	var_54_object = var_55_object;
	func_169(var_55_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1552(object var_236_object)
{
	cvector var_240_cvector;
	var_236_object->GetPosition(var_240_cvector);
	cvector var_241_cvector;
	@GetPosition(var_241_cvector);
	cvector var_242_cvector = var_240_cvector - var_241_cvector;
	var_243_float = GetByIndex(var_242_cvector, 0);
	var_244_float = GetByIndex(var_242_cvector, 2);
	@RotateAsync(var_243_float, var_244_float);
}


void func_1426(object var_26_object)
{
	string var_40_string;
	if(var_26_object == null)
		return 14;
	bool var_34_bool;
	@IsDead(var_34_bool);
	if(var_34_bool != 0)
		return 14;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 14;
	cvector var_36_cvector;
	var_26_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_45_float = GetByIndex(var_39_cvector, 0);
	var_46_float = GetByIndex(var_38_cvector, 0);
	var_48_float = GetByIndex(var_39_cvector, 2);
	var_49_float = GetByIndex(var_38_cvector, 2);
	if(((var_45_float * var_46_float) + (var_48_float * var_49_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


void func_1811(int var_14_int)
{
	int var_16_int;
	@GetVariable("branch", var_16_int);
	var_16_int = var_14_int;
}


void func_920(int var_2_int, float var_5_float)
{
	int var_373_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_372_float;
	@rand(var_372_float);
	float var_379_float;
	func_970(var_379_float);
	if(var_372_float < var_379_float) {
		@irand(var_373_int, var_2_int);
		@Speak("attack" + (var_373_int + 1));
		int var_384_int;
		func_968(var_384_int);
		var_5_float = var_384_int;
	}
}


// @pe
void func_1817(object var_13_object)
{
	int var_14_int;
	func_1811(var_14_int);
	if(var_14_int == 1)
		@WorkWithCorpse(var_13_object);
	else
		@Barter(var_13_object);
	
}


void func_1689(float var_458_float)
{
	object var_460_object;
	@CreateFloatVector(var_460_object);
	var_460_object->add(var_458_float);
	@SendWorldWndMessage(15, var_460_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1179(object var_0_object, int var_1_int, int var_17_int)
{
	if(var_17_int != 0)
		return 0;
	bool var_20_bool;
	func_1217(var_20_bool, var_1_int);
	if(!var_20_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


void func_1563(bool var_24_bool)
{
	bool var_26_bool;
	@IsLoaded(var_26_bool);
	var_26_bool = var_24_bool;
}


void func_539(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_92_bool; bool var_93_bool; cvector var_94_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_92_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_92_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_93_bool, ("attack" + (var_2_int + 1)));
			if(!var_93_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_94_cvector, "all", "bjump");
		var_108_float = GetByIndex(var_94_cvector, 2);
		var_4_bool = -var_108_float;

	}
}


void func_1568(object var_13_object)
{
	float var_16_float;
	var_13_object->GetEyesHeight(var_16_float);
	cvector var_17_cvector = [0.0, 0.0, 0.0];
	var_18_float = GetByIndex(var_17_cvector, 1);
	var_16_float = var_18_float;
	SetByIndex(var_17_cvector, 1) = var_18_float;
	@LookAsync(var_13_object, "head", var_17_cvector);
}


void func_1699(float var_23_float)
{
	object var_25_object;
	@CreateFloatVector(var_25_object);
	var_25_object->add(var_23_float);
	@SendWorldWndMessage(16, var_25_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_292(object var_57_object)
{
	
	for(;;) {
		object var_64_object;
		func_310(var_60_int, var_61_bool, var_62_float, var_63_int, var_64_object, var_64_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(0)";


void func_1830(object var_51_object)
{
	object var_53_object;
	@GetScene(var_53_object);
	object var_54_object;
	func_1620(var_54_object);
	var_53_object->RemoveStationaryActor(var_54_object);
	object var_57_object;
	var_51_object = var_57_object;
	TaskCall(2);
	func_292(var_57_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_169(object var_55_object)
{
	cvector var_66_cvector; cvector var_67_cvector; cvector var_68_cvector; cvector var_69_cvector; string var_70_string; object var_71_object; bool var_72_bool; bool var_73_bool; float var_74_float; cvector var_75_cvector;
	if(var_55_object == null) {
		func_260("fdie");
	} else {
		var_55_object->GetPosition(var_66_cvector);
		@GetPosition(var_67_cvector);
		@GetDirection(var_68_cvector);
		var_69_cvector = var_67_cvector - var_66_cvector;
		var_109_float = GetByIndex(var_69_cvector, 0);
		var_110_float = GetByIndex(var_68_cvector, 0);
		var_112_float = GetByIndex(var_69_cvector, 2);
		var_113_float = GetByIndex(var_68_cvector, 2);
		if(((var_109_float * var_110_float) + (var_112_float * var_113_float)) >= 0)
			var_70_string = "fdie";
		else
			var_70_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_55_object = var_71_object;
		var_120_bool = IsFuncExist(var_55_object, "GetScriptProperty", 2);
		if(var_120_bool != 0) {
			var_55_object->HasScriptProperty(var_72_bool, "Owner");
			if(var_72_bool != 0) {
				var_55_object->GetScriptProperty(var_71_object, "Owner");
				if(var_71_object == null)
					var_55_object = var_71_object;
			}
		}
		var_127_bool = IsFuncExist(var_71_object, "@GetEyesHeight", 1);
		if(var_127_bool != 0) {
			var_71_object->GetEyesHeight(var_74_float);
			var_75_cvector = [0.0, 0.0, 0.0];
			var_128_float = GetByIndex(var_75_cvector, 1);
			var_74_float = var_128_float;
			SetByIndex(var_75_cvector, 1) = var_128_float;
			@LookAsync(var_55_object, "head", var_75_cvector);
			var_73_bool = true;
		} else {
			var_73_bool = false;

		}
		string var_130_string;
		var_70_string = var_130_string;
		func_1579(var_130_string);
		@PlayAnimation("all", var_70_string);
		@WaitForAnimEnd();
		if(var_73_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_70_string);
		@RemoveEnvelope();
		var_71_object = null;
	}
	
}


void func_42(void)
{
	int var_19_int; int var_20_int; bool var_21_bool; float var_22_float; bool var_23_bool;
	@WaitForAnimEnd();
	bool var_24_bool;
	func_1563(var_24_bool);
	if(!var_24_bool) //@nz
		return 14;
	int var_28_int;
	func_1736(var_28_int);
	int var_17_int;
	var_28_int = var_17_int;
	int var_18_int = 0;
	
	for(;;) {
		bool var_41_bool = false;
		if(var_18_int < 5) {
			bool var_44_bool;
			func_1563(var_44_bool);
			if(var_44_bool != 0)
				var_41_bool = true;
		}
		if(var_41_bool != 0) {
			@irand(var_19_int, 3);
			if(var_19_int == 0) {
				if(var_17_int == 0) goto Label_89;
				@irand(var_20_int, var_17_int);
				string var_50_string; int var_51_int;
				var_20_int = var_51_int;
				func_1729(var_50_string, var_51_int);
				@PlayAnimation("all", var_50_string);
				@WaitForAnimEnd(var_21_bool);
				if(!var_21_bool) { //@nz
				} else {
			} else {
			if(var_19_int == 1) {
				@rand(var_22_float, 4);
				@Sleep((var_22_float + 1), var_23_bool);
				if(!var_23_bool) { //@nz
					goto Label_118;
				}
			} else if(var_18_int != 0) {
				goto Label_118;
			}
			}
					bool var_53_bool;
					func_121(var_53_bool);
					var_54_bool = !var_53_bool; //@nz
					if(var_54_bool == 0) goto Label_113;
			}
		}
	Label_118:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_113:
		@ResetAAS();
		var_18_int += 1;
	}
	
}


void func_1579(string var_78_string)
{
	bool var_87_bool; int var_88_int; bool var_89_bool; int var_90_int; bool var_91_bool; float var_92_float; cvector var_93_cvector; cvector var_94_cvector;
	@IsExisting3DSound(var_87_bool, var_78_string);
	if(!var_87_bool) { //@nz
		var_88_int = 0;

		for(;;) {
			@IsExisting3DSound(var_89_bool, (var_78_string + (var_88_int + 1)));
			if(!var_89_bool) { //@nz
				break;
			Label_1599:
				@irand(var_90_int, var_88_int);
				var_78_string += (var_90_int + 1);
	}
			@Is3DSoundLoaded(var_91_bool, var_78_string);
			if(var_91_bool != 0) {
				@GetEyesHeight(var_92_float);
				@GetDirection(var_93_cvector);
				var_94_cvector = var_93_cvector * 50;
				var_105_float = GetByIndex(var_94_cvector, 1);
				SetByIndex(var_94_cvector, 1) = (var_105_float + var_92_float);
				@PlayGlobalSound(var_78_string, var_94_cvector);
			}
		}
		var_88_int += 1;
	}
	var_100_bool = !var_88_int; //@nz
	if(var_100_bool == 0) goto Label_1599;
}


void func_1709(object var_12_object)
{
	bool var_14_bool;
	@IsPlayerActor(var_12_object, var_14_bool);
	if(var_14_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_304(float var_399_float)
{
	var_399_float = 0.03;
}


void func_1201(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_307(int var_406_int)
{
	var_406_int = 0;
}


void func_820(object var_0_object, bool var_305_bool)
{
	cvector var_311_cvector; cvector var_312_cvector;
	bool var_316_bool;
	func_1402(var_316_bool, var_0_object);
	if(!var_316_bool) { //@nz
		var_305_bool = false;
		return 10;
	}
	bool var_319_bool;
	float var_315_float;
	func_909(var_315_float, var_319_bool);
	if(var_319_bool != 0) {
		var_0_object->GetPFPosition(var_311_cvector); //@t
		@GetPFPosition(var_312_cvector);
		var_0_object->GetAttackDistance(var_315_float); //@t
		var_305_bool = ((var_311_cvector - var_312_cvector) | (var_311_cvector - var_312_cvector)) <= ((var_315_float + 50) * (var_315_float + 50));
		return 10;
	}
	var_305_bool = false;
}


void func_1077(object var_0_object, object var_1_object, bool var_162_bool, object var_163_object, float var_164_float, float var_165_float, bool var_166_bool, bool var_167_bool)
{
	bool var_176_bool; object var_178_object; cvector var_179_cvector; cvector var_180_cvector; float var_182_float; object var_183_object;
	var_0_object = false;
	var_1_object = var_163_object;
	bool var_177_bool;
	var_167_bool = var_177_bool;
	
	for(;;) {
		bool var_184_bool; object var_185_object;
		var_163_object = var_185_object;
		func_1217(var_184_bool, var_185_object);
		if(!var_184_bool) { //@nz
			var_162_bool = false;
			return 16;
		}
		var_163_object->GetPosition(var_179_cvector);
		@GetPosition(var_180_cvector);
		var_182_float = (var_179_cvector - var_180_cvector) | (var_179_cvector - var_180_cvector);
		bool var_189_bool = false;
		if(var_165_float > 0) {
			if(var_182_float > (var_165_float * var_165_float))
				var_189_bool = true;
		}
		if(var_189_bool != 0) {
			@Stop();
			var_162_bool = false;
			return 16;
		}
		if(var_182_float > (var_164_float * var_164_float)) {
			var_163_object->GetPFPosition(var_179_cvector);
			@FindPathTo(var_183_object, var_179_cvector);
			if(var_183_object != null) {
				var_183_object = var_178_object;
				var_183_object = null;
			}
			if(var_178_object != null) {
				if(var_177_bool == 0) goto Label_1130;
				var_177_bool = false;
				@RotatePath(var_178_object, var_176_bool);
				if(!var_176_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_202_string;
						func_1224(var_202_string);
						string var_203_string;
						func_1226(var_203_string);
						@FollowPath(var_178_object, var_166_bool, var_176_bool, var_202_string, var_203_string);
						if(!var_176_bool) { //@nz
							if(var_0_object == 0) goto Label_1149;
							var_178_object = null;
						}
					EMIT "GOTO 0x47e";

					Label_1149:
						} else {
					var_178_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_176_bool);
					if(!var_176_bool) { //@nz
						if(var_0_object != 0) {
							var_178_object = null;
							goto Label_1177;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1177;
		}
			var_183_object = null;
			goto Label_1175;

		Label_1175:
			var_178_object = null;

		}
	Label_1177:
		for(;;) {
			var_162_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_310(object var_0_object, int var_3_int, float var_5_float, object var_64_object, bool var_65_bool, float var_66_float, bool var_139_bool, bool var_231_bool)
{
	float var_78_float; cvector var_79_cvector; cvector var_80_cvector; bool var_82_bool; float var_85_float; cvector var_86_cvector; bool var_87_bool; float var_88_float;
	func_539(var_86_cvector, var_87_bool, var_88_float);
	var_5_float = 0;
	var_113_bool = IsFuncExist(var_64_object, "@GetAttackDistance", 1);
	if(var_113_bool != 0) {
		var_64_object->GetAttackDistance(var_78_float);
		var_78_float += 50;
	} else {
						var_66_float = var_78_float;
	}
	if(var_78_float >= 150)
		var_78_float = 150;
	var_3_int = false;
	var_0_object = var_64_object;
	bool var_81_bool;
	@IsPlayerActor(var_0_object, var_81_bool);
	if(var_81_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_119_object;
		func_1620(var_119_object);
		@SendPlayerEnemy(var_64_object, var_119_object);
	}
	if(var_65_bool != 0)
		var_82_bool = false;
	else
		var_82_bool = true;

	
Label_350:
	for(;;) {
		bool var_122_bool = false;
		bool var_123_bool;
		func_1402(var_123_bool, var_0_object);
		if(var_123_bool != 0) {
			if(!var_3_int) //@nz
				var_122_bool = true;
		}
		if(var_122_bool != 0) {
			func_952(var_88_float);
			var_0_object->GetPFPosition(var_79_cvector); //@t
			@GetPFPosition(var_80_cvector);
			var_85_float = (var_79_cvector - var_80_cvector) | (var_79_cvector - var_80_cvector);
			if(var_85_float >= ((400.0 + var_78_float) * (400.0 + var_78_float))) {
				bool var_133_bool; float var_135_float;
				var_78_float = var_135_float;
				TaskCall(3);
				func_972(var_141_bool, var_133_bool, var_0_object, var_135_float, 3000.0, true, false);
				TaskReturn();
				if(!var_139_bool) { //@nz
				} else {
					var_82_bool = false;
			} else {
			if(var_85_float >= (var_66_float * var_66_float)) {
				var_0_object->GetPFPosition(var_86_cvector); //@t
				@CanReachByPF(var_87_bool, var_86_cvector);
				if(!var_87_bool) { //@nz
					bool var_225_bool; float var_227_float;
					var_78_float = var_227_float;
					TaskCall(3);
					func_972(var_233_bool, var_225_bool, var_0_object, var_227_float, 3000.0, true, false);
					TaskReturn();
					if(!var_231_bool) { //@nz
						goto Label_522;
					}
					var_82_bool = false;
					goto Label_350;
				}
				if(!var_82_bool) { //@nz
					func_1552(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_952(var_88_float);
					@StopAsync();
					var_82_bool = true;
					bool var_247_bool;
					func_1402(var_247_bool, var_0_object);
					if(!var_247_bool) { //@nz
						goto Label_522;
					}
				}
				@rand(var_88_float);
				bool var_250_bool;
				var_252_bool = var_88_float < 0.25;
				if(var_252_bool != 1) {
					bool var_253_bool;
					func_909(true, var_253_bool);
					if(var_253_bool != 1)
						var_250_bool = false;
				}
				if(var_250_bool != 0) {
					@Face(var_0_object);
					func_959();
					@PlayAnimation("all", "attack_stay");
					bool var_290_bool; float var_291_float;
					func_777(var_88_float, var_290_bool, var_291_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_952(var_88_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_508_bool;
					func_909(var_88_float, var_508_bool);
					var_509_bool = !var_508_bool; //@nz
					if(var_509_bool == 0) goto Label_512;
					bool var_510_bool;
					func_1402(var_510_bool, var_0_object);
					if(!var_510_bool) { //@nz
						goto Label_522;
					}
					var_0_object->GetPFPosition(var_79_cvector); //@t
					@GetPFPosition(var_80_cvector);
					if(!(((var_79_cvector - var_80_cvector) | (var_79_cvector - var_80_cvector)) < (var_291_float * var_291_float))) goto Label_512;
					bool var_515_bool; float var_516_float;
					var_66_float = var_516_float;
					func_613(var_87_bool, var_88_float, var_515_bool, var_516_float);
					var_517_bool = !var_515_bool; //@nz
					if(var_517_bool == 0) goto Label_512;
					goto Label_522;
			}
				bool var_518_bool; float var_519_float;
				var_66_float = var_519_float;
				func_613(var_87_bool, var_88_float, var_518_bool, var_519_float);
				if(!var_518_bool) { //@nz
					goto Label_522;
				}
				var_82_bool = true;

			}
		Label_512:
			goto Label_521;
			}
			Label_521:
			}
		}
	Label_522:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_81_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1718(void)
{
	object var_364_object;
	@GetScene(var_364_object);
	object var_366_object;
	func_1620(var_366_object);
	@BroadcastMessage("battle", var_366_object, var_364_object);
}
EMIT "Stack[-1] = 0";


void func_952(object var_0_object)
{
	func_1709(var_0_object);
}


void func_957(int var_463_int)
{
	var_463_int = 0;
}


void func_574(object var_0_object, float var_388_float, int var_389_int)
{
	object var_393_object; float var_394_float; float var_395_float;
	@GetVictim((var_388_float * 0.9), var_393_object);
	@ReportAttack(var_0_object);
	if(var_393_object == var_0_object) {
		float var_399_float; object var_400_object; int var_401_int;
		var_393_object = var_400_object;
		var_389_int = var_401_int;
		func_304(var_401_int);
		var_399_float = var_394_float;
		float var_402_float; object var_403_object; float var_404_float; int var_405_int;
		var_393_object = var_403_object;
		int var_406_int; object var_407_object; int var_408_int;
		var_393_object = var_407_object;
		var_389_int = var_408_int;
		func_307(var_408_int);
		var_406_int = var_405_int;
		func_1288(var_402_float, var_403_object, var_404_float, var_405_int);
		var_402_float = var_395_float;
		int var_463_int;
		func_957(var_463_int);
		@ReportHit(var_0_object, var_463_int, var_395_float, var_404_float);
		object var_464_object; float var_465_float;
		var_393_object = var_464_object;
		var_395_float = var_465_float;
		func_964();
	}
}
EMIT "Stack[-3] = 0";


void func_959(void)
{
	func_1579("attack_stay");
}


void func_1470(object var_13_object, int var_14_int, float var_15_float)
{
	cvector var_25_cvector; object var_26_object; int var_27_int; bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	bool var_34_bool = false;
	bool var_35_bool = false;
	if(var_13_object != 0) {
		if(var_14_int != 4)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		if(var_14_int != 5)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		cvector var_41_cvector; cvector var_42_cvector;
		cvector var_43_cvector; object var_44_object;
		var_13_object = var_44_object;
		func_1242(var_43_cvector, var_44_object);
		var_43_cvector = var_42_cvector;
		func_1626(var_41_cvector, var_42_cvector);
		var_41_cvector = var_25_cvector;
		@CreateVectorVector(var_26_object);
		var_27_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_27_int), var_28_bool, var_29_cvector, var_30_cvector);
			if(!var_28_bool) { //@nz
				break;
			Label_1532:
				var_26_object = null;
	}
			object var_103_object;
			var_13_object = var_103_object;
			func_1426(var_103_object);
		}
		if((var_30_cvector | var_25_cvector) >= 0.70710677)
			var_26_object->add(var_29_cvector);
		var_27_int += 1;
	}
	int var_31_int;
	var_26_object->size(var_31_int);
	if(var_31_int == 0) goto Label_1532;
	int var_32_int;
	@irand(var_32_int, var_31_int);
	cvector var_33_cvector;
	var_26_object->get(var_33_cvector, var_32_int);
	object var_58_object; int var_59_int; float var_60_float; cvector var_61_cvector; cvector var_62_cvector;
	var_13_object = var_58_object;
	var_14_int = var_59_int;
	var_15_float = var_60_float;
	var_33_cvector = var_61_cvector;
	var_62_cvector = -var_25_cvector;
	func_1538(var_60_float, var_61_cvector, var_62_cvector);
}


void func_1729(string var_34_string, int var_35_int)
{
	string var_37_string = "idle";
	if(var_35_int != 0)
		var_37_string += var_35_int;
	var_37_string = var_34_string;
}


// @pe
void func_1217(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1402(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


// @pe
void func_964(void)
{
}


void func_966(bool var_488_bool)
{
	var_488_bool = true;
}


void func_1736(int var_28_int)
{
	int var_31_int; bool var_32_bool;
	var_31_int = 0;
	
	for(;;) {
		string var_34_string; int var_35_int;
		var_31_int = var_35_int;
		func_1729(var_34_string, var_35_int);
		@HasAnimation(var_32_bool, "all", var_34_string);
		if(!var_32_bool) //@nz
			break;
		var_31_int += 1;
	}
	var_31_int = var_28_int;
}


void func_968(int var_384_int)
{
	var_384_int = 1;
}


void func_970(float var_379_float)
{
	var_379_float = 0.5;
}


void func_1224(string var_202_string)
{
	var_202_string = "walk";
}


void func_972(int var_2_int, bool var_133_bool, object var_134_object, float var_135_float, float var_136_float, bool var_137_bool, bool var_138_bool)
{
	object var_146_object;
	func_1709(var_146_object);
	@SetTimer(1, 5);
	bool var_144_bool;
	@CanSee(var_144_bool, var_146_object);
	if(var_144_bool != 0) {
		var_2_int = true;
		object var_150_object;
		var_134_object = var_150_object;
		func_1568(var_150_object);
	} else {
		var_2_int = false;
	}
	bool var_157_bool; object var_158_object;
	func_1249(var_157_bool, var_158_object);
	if(var_157_bool != 0) {
		object var_161_object;
		func_1620(var_161_object);
		@SendPlayerEnemy(var_158_object, var_161_object);
	}
	bool var_162_bool; object var_163_object; float var_164_float; float var_165_float; bool var_166_bool; bool var_167_bool;
	var_134_object = var_163_object;
	var_135_float = var_164_float;
	var_136_float = var_165_float;
	var_137_bool = var_166_bool;
	var_138_bool = var_167_bool;
	bool var_145_bool;
	func_1077(var_144_bool, var_145_bool, var_162_bool, var_163_object, var_164_float, var_165_float, var_166_bool, var_167_bool);
	var_162_bool = var_145_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_145_bool = var_133_bool;
	
}


void func_1226(string var_203_string)
{
	var_203_string = "run";
}


// @pe
void func_1228(string var_430_string, int var_431_int)
{
	if(var_431_int == 2) {
		var_430_string = "fire";
		return 0;
	EMIT "GOTO 0x4d8";
	}
	if(var_431_int == 1) {
		var_430_string = "bullet";
		return 0;
	}
	var_430_string = "phys";
}


void func_848(bool var_303_bool)
{
	bool var_304_bool = false;
	bool var_305_bool;
	func_820(var_304_bool, var_305_bool);
	if(var_305_bool != 0) {
		bool var_322_bool;
		func_864(var_303_bool, var_304_bool, var_322_bool);
		if(var_322_bool != 0)
			var_304_bool = true;
	}
	if(var_304_bool != 0) {
		var_303_bool = true;
		return 0;
	}
	var_303_bool = false;
}


void func_1361(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_1620(object var_54_object)
{
	object var_56_object;
	@self(var_56_object);
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


void func_1366(bool var_26_bool, object var_27_object)
{
	if(var_27_object == null) {
		var_26_bool = false;
		return 4;
	}
	bool var_33_bool = false;
	var_36_bool = IsFuncExist(var_27_object, "IsDead", 1);
	if(var_36_bool != 0) {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_1361(var_37_bool, var_38_object);
		if(var_37_bool != 0)
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		var_26_bool = false;
		return 4;
	}
	object var_30_object;
	@GetScene(var_30_object);
	if(var_30_object == null) {
		var_26_bool = false;
		return 4;
	}
	object var_31_object;
	var_27_object->GetScene(var_31_object);
	if(var_30_object != var_31_object) {
		var_26_bool = false;
		return 4;
	}
	var_26_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1753(object var_10_object)
{
	object var_11_object;
	var_10_object = var_11_object;
	TaskCall(1);
	func_128(var_11_object);
	TaskReturn();
}


void func_1242(cvector var_43_cvector, object var_44_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_44_object->GetPosition(var_48_cvector);
	var_43_cvector = var_48_cvector - var_47_cvector;
}


void func_1626(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_50_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_50_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_50_float;
}


void func_864(object var_0_object, bool var_4_bool, bool var_322_bool)
{
	object var_328_object; float var_330_float; cvector var_331_cvector; cvector var_332_cvector;
	@GetScene(var_328_object);
	bool var_329_bool = false;
	
	for(;;) {
		cvector var_333_cvector;
		func_1242(var_333_cvector, var_0_object);
		var_339_int = -var_333_cvector;
		@FindDirLength(var_330_float, var_339_int, var_4_bool);
		if(var_330_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_331_cvector); //@t
				@GetPFPosition(var_332_cvector);
				@WaitForAnimEnd();
				func_952(var_332_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_329_bool = true;
				bool var_344_bool;
				func_820(var_332_cvector, var_344_bool);
				var_345_bool = !var_344_bool; //@nz
				if(var_345_bool == 0) goto Label_905;
		}
		for(;;) {
			var_329_bool = var_322_bool;

		}

	Label_905:
	}
}
EMIT "Stack[-5] = 0";


void func_1249(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
}


// @pe
void func_1636(float var_440_float, float var_441_float, float var_442_float)
{
	if(var_441_float < var_442_float)
		var_441_float = var_440_float;
	else
		var_442_float = var_440_float;
	
}


void func_613(object var_0_object, object var_1_object, bool var_351_bool, float var_352_float)
{
	string var_360_string;
	func_952(var_360_string);
	int var_357_int;
	@irand(var_357_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_1718();
	@PlayAnimation("all", ("attack_begin" + (var_357_int + 1)));
	@WaitForAnimEnd();
	int var_359_int;
	func_920(var_359_int, var_360_string);
	bool var_385_bool;
	func_1402(var_385_bool, var_0_object);
	if(!var_385_bool) { //@nz
		@StopAsync();
		var_351_bool = false;
		return 8;
	}
	float var_388_float; int var_389_int;
	var_352_float = var_388_float;
	var_357_int = var_389_int;
	func_574(var_360_string, var_388_float, var_389_int);
	bool var_358_bool;
	@HasAnimation(var_358_bool, "all", ("attack_middle" + var_357_int));
	if(var_358_bool != 0) {
		func_1718();
		@PlayAnimation("all", ("attack_middle" + var_357_int));
		@WaitForAnimEnd();
		func_952(var_360_string);
		bool var_473_bool;
		func_1402(var_473_bool, var_0_object);
		if(!var_473_bool) { //@nz
			@StopAsync();
			var_351_bool = false;
			return 8;
		}
		float var_476_float; int var_477_int;
		var_352_float = var_476_float;
		func_574(var_360_string, var_476_float, var_477_int);
		var_359_int = 1;

		for(;;) {
			var_360_string = (("attack_middle" + var_477_int) + "_") + var_359_int;
			@HasAnimation(var_358_bool, "all", var_360_string);
			if(!var_358_bool) { //@nz
			} else {
				func_1718();
				@PlayAnimation("all", var_360_string);
				@WaitForAnimEnd();
				func_952(var_360_string);
				bool var_499_bool;
				func_1402(var_499_bool, var_0_object);
				if(!var_499_bool) { //@nz
					@StopAsync();
					var_351_bool = false;
					return 8;
				}
				float var_502_float; int var_503_int;
				var_352_float = var_502_float;
				var_357_int = var_503_int;
				func_574(var_360_string, var_502_float, var_503_int);
				var_359_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_357_int));
		bool var_488_bool;
		func_966(var_488_bool);
		if(var_488_bool != 0) {
			bool var_489_bool;
			func_750(var_489_bool, 0.75);
			@StopAsync();
		}
		var_351_bool = true;
		return 8;

	}
}


void func_1254(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


// @pe
void func_1643(float var_45_float, float var_46_float, float var_47_float, float var_48_float)
{
	if(var_46_float < var_47_float) {
		var_47_float = var_45_float;
		return 0;
	}
	if(var_46_float > var_48_float) {
		var_48_float = var_45_float;
		return 0;
	}
	var_46_float = var_45_float;
}


void func_750(bool var_489_bool, float var_490_float)
{
	float var_493_float; bool var_494_bool;
	@rand(var_493_float);
	if(var_493_float < var_490_float) {

		for(;;) {
			@IsAnimationPlaying(var_494_bool);
			if(!var_494_bool) { //@nz
			} else {
				bool var_497_bool;
				func_848(var_497_bool);
				if(var_497_bool != 0) {
					var_489_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_489_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_952(var_494_bool);
}


void func_1266(bool var_27_bool, object var_28_object, string var_29_string, float var_30_float, float var_31_float, float var_32_float)
{
	object var_36_object;
	var_28_object = var_36_object;
	string var_37_string;
	var_29_string = var_37_string;
	bool var_35_bool;
	func_1254(var_35_bool, var_36_object, var_37_string);
	if(!var_35_bool) //@nz
		var_27_bool = false;
	float var_34_float;
	var_28_object->GetProperty(var_29_string, var_34_float);
	float var_45_float; float var_47_float; float var_48_float;
	var_31_float = var_47_float;
	var_32_float = var_48_float;
	func_1643(var_45_float, (var_34_float + var_30_float), var_47_float, var_48_float);
	var_28_object->SetProperty(var_29_string, var_45_float);
	var_27_bool = true;
}


// @pe
void func_1654(bool var_16_bool, object var_17_object, float var_18_float)
{
	if(!var_17_object) { //@nz
		var_16_bool = false;
		return 0;
	}
	if(var_18_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_18_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_23_float;
		var_18_float = var_23_float;
		func_1699(var_23_float);
		bool var_27_bool; object var_28_object; float var_30_float;
		var_17_object = var_28_object;
		var_18_float = var_30_float;
		func_1266(var_27_bool, var_28_object, "reputation", var_30_float, (float)0, (float)1);
		var_16_bool = true;
		return 0;

	}
	
	var_16_bool = false;
}


void func_121(bool var_53_bool)
{
	var_53_bool = true;
}


void func_1402(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_1366(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1254(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_123(void)
{
	@StopAnimation();
	@StopGroup0();
}


