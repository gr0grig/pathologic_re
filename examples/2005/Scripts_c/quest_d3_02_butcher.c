maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		@SensePlayerOnly(true);
		func_43((float)300, (float)100);
	}

	void OnAttacked(int var_0_int, int iDamageType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		bool var_17_bool;
		@IsPlayerActor(var_15_bool, var_17_bool);
		if(var_17_bool != 0) {
			TaskCall(1);
			func_287();
			TaskReturn();
		}
	}

	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		float var_18_float; cvector var_19_cvector;
		if(var_15_bool == "trigger") {
			@GetEyesHeight(var_18_float);
			var_22_float = GetByIndex(var_19_cvector, 1);
			SetByIndex(var_19_cvector, 1) = (var_22_float + var_18_float);
			@PlayGlobalSound("growl", var_19_cvector);
			TaskCall(1);
			func_287();
			TaskReturn();
		} else {
			string var_524_string;
			var_15_bool = var_524_string;
			func_88(var_524_string);
		}
	
	}

	void OnLoad(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		func_187(var_13_object, var_14_bool);
		bool var_18_bool = false;
		if(var_5_bool != 0) {
			bool var_20_bool;
			func_120(var_20_bool);
			if(var_20_bool != 0)
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			object var_21_object;
			func_1749(var_21_object);
			@RemoveActor(var_21_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, int var_6_int, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(var_15_bool == 10) {
			bool var_18_bool;
			func_149(var_13_bool, var_14_object, var_15_bool, var_18_bool);
			if(var_18_bool != 0) {
				if(!var_2_bool) { //@nz
					func_1697(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


task task_1
{
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_15_object;
		func_1749(var_15_object);
		@RemoveActor(var_15_object);
		@Hold();
	}

}


task task_2
{
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_15_object;
		func_1749(var_15_object);
		@RemoveActor(var_15_object);
		@Hold();
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, int var_15_int)
	{
		if(var_15_int == 1) {
			func_1805(var_1_int);
		} else {
			int var_23_int;
			func_1190(var_14_bool, var_23_int, var_23_int);
		}
	
	}

	// @pe
	void OnSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_int == var_15_object) {
			if(!var_2_bool) //@nz
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_bool = true;
			object var_19_object;
			var_15_object = var_19_object;
			func_1697(var_19_object);
		}
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		bool var_16_bool = false;
		if(var_1_int == var_15_object) {
			if(var_2_bool != 0)
				var_16_bool = true;
		}
		if(var_16_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		@RequestClearPath(var_15_object);
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
		func_1046(var_15_object);
		object var_20_object;
		var_15_object = var_20_object;
		func_1893();
	}

}


task task_3
{
	// @pe
	void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
	{
	}

	// @pe
	void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
	{
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
	{
	}

}


// @pe
void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1599(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_1667(var_23_float, var_24_cvector, var_25_cvector);
}


void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_1849(var_16_object);
}


void func_1793(bool var_17_bool, string var_18_string, string var_19_string)
{
	object var_21_object;
	@FindActor(var_21_object, var_18_string);
	if(var_21_object == null)
		var_17_bool = false;
	@Trigger(var_21_object, var_19_string);
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1667(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1555(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1400(bool var_160_bool, object var_161_object)
{
	bool var_163_bool;
	@IsPlayerActor(var_161_object, var_163_bool);
	var_163_bool = var_160_bool;
}


void func_1417(float var_405_float, object var_406_object, float var_407_float, int var_408_int)
{
	int var_418_int; int var_420_int;
	object var_425_object;
	var_406_object = var_425_object;
	bool var_424_bool;
	func_1405(var_424_bool, var_425_object, "health");
	if(!var_424_bool) //@nz
		var_405_float = 0.0;
	bool var_428_bool; object var_429_object;
	func_1405(var_428_bool, var_429_object, "armor");
	if(!var_428_bool) //@nz
		var_418_int = 0;
	else
		var_429_object->GetProperty("armor", var_418_int);
	string var_433_string; int var_434_int;
	var_408_int = var_434_int;
	func_1371(var_433_string, var_434_int);
	string var_419_string = "armor_" + var_433_string;
	bool var_439_bool; object var_440_object; string var_441_string;
	var_406_object = var_440_object;
	func_1405(var_439_bool, var_440_object, var_441_string);
	if(!var_439_bool) //@nz
		var_420_int = 0;
	else
		var_406_object->GetProperty(var_441_string, var_420_int);

	float var_443_float;
	func_1765(var_443_float, ((var_418_int + var_420_int) / 100.0), (float)1);
	float var_421_float;
	var_443_float = var_421_float;
	float var_422_float;
	var_406_object->GetProperty("health", var_422_float);
	float var_423_float = var_407_float * (1 - var_421_float);
	float var_453_float;
	func_1772(var_453_float, (var_422_float - var_423_float), (float)0, (float)1);
	var_406_object->SetProperty("health", var_453_float);
	bool var_459_bool; object var_460_object;
	var_406_object = var_460_object;
	func_1400(var_459_bool, var_460_object);
	if(var_459_bool != 0) {
		float var_461_float = -var_423_float;
		func_1783(var_461_float);
	}
	var_423_float = var_405_float;
	
}


void func_780(int var_0_int, bool var_293_bool, float var_294_float)
{
	bool var_300_bool; cvector var_301_cvector; cvector var_302_cvector; cvector var_303_cvector; float var_304_float;
	
	for(;;) {
		@IsAnimationPlaying(var_300_bool);
		if(!var_300_bool) //@nz
			break;
		bool var_306_bool;
		func_851(var_306_bool);
		if(var_306_bool != 0) {
			var_293_bool = true;
			return 10;
		}
		bool var_349_bool;
		func_1531(var_349_bool, var_0_int);
		if(!var_349_bool) { //@nz
			var_293_bool = false;
			return 10;
		}
		var_0_int->GetPFPosition(var_301_cvector); //@t
		@GetPFPosition(var_302_cvector);
		var_303_cvector = var_301_cvector - var_302_cvector;
		var_304_float = var_303_cvector | var_303_cvector;
		if(var_304_float < (var_294_float * var_294_float)) {
			bool var_354_bool; float var_355_float;
			var_294_float = var_355_float;
			func_616(var_303_cvector, var_304_float, var_354_bool, var_355_float);
			var_293_bool = true;
			return 10;
		}
		@sync();
	}
	func_955(var_304_float);
	var_293_bool = false;
}


void func_1805(object var_18_object)
{
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_912(int var_0_int, bool var_256_bool)
{
	bool var_258_bool;
	var_261_bool = IsFuncExist(var_0_int, "IsAttacking", 1);
	if(var_261_bool != 0) {
		var_0_int->IsAttacking(var_258_bool); //@t
		var_258_bool = var_256_bool;
	}
	var_256_bool = false;
}


void func_1681(object var_239_object)
{
	cvector var_243_cvector;
	var_239_object->GetPosition(var_243_cvector);
	cvector var_244_cvector;
	@GetPosition(var_244_cvector);
	cvector var_245_cvector = var_243_cvector - var_244_cvector;
	var_246_float = GetByIndex(var_245_cvector, 0);
	var_247_float = GetByIndex(var_245_cvector, 2);
	@RotateAsync(var_246_float, var_247_float);
}


void func_1555(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_149(int var_0_int, int var_1_int, object var_4_object, bool var_18_bool)
{
	if(var_4_object == null)
		var_18_bool = false;
	float var_22_float;
	func_1392(var_22_float, var_4_object);
	float var_20_float = sqrt(var_22_float);
	if(var_2_bool != 0)
		var_20_float -= var_1_int;
	var_18_bool = var_20_float < var_0_int;
}


void func_1814(void)
{
	object var_367_object;
	@GetScene(var_367_object);
	object var_369_object;
	func_1749(var_369_object);
	@BroadcastMessage("battle", var_369_object, var_367_object);
}
EMIT "Stack[-1] = 0";


void func_1046(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_1212(var_15_object);
}


void func_280(bool var_75_bool)
{
	var_75_bool = true;
}


void func_282(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_923(bool var_2_bool, bool var_5_bool)
{
	int var_376_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_375_float;
	@rand(var_375_float);
	float var_382_float;
	func_973(var_382_float);
	if(var_375_float < var_382_float) {
		@irand(var_376_int, var_2_bool);
		@Speak("attack" + (var_376_int + 1));
		int var_387_int;
		func_971(var_387_int);
		var_5_bool = var_387_int;
	}
}


void func_1692(bool var_20_bool)
{
	bool var_22_bool;
	@IsLoaded(var_22_bool);
	var_22_bool = var_20_bool;
}


void func_542(int var_1_int, bool var_2_bool, object var_4_object)
{
	bool var_61_bool; bool var_62_bool; cvector var_63_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_61_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_61_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_62_bool, ("attack" + (var_2_bool + 1)));
			if(!var_62_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_63_cvector, "all", "bjump");
		var_77_float = GetByIndex(var_63_cvector, 2);
		var_4_object = -var_77_float;

	}
}


void func_287(void)
{
	object var_31_object;
	@FindActor(var_31_object, "player");
	object var_33_object;
	object var_30_object;
	func_313(var_27_bool, var_28_float, var_29_int, var_30_object, var_33_object, var_33_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1697(object var_19_object)
{
	float var_22_float;
	var_19_object->GetEyesHeight(var_22_float);
	cvector var_23_cvector = [0.0, 0.0, 0.0];
	var_24_float = GetByIndex(var_23_cvector, 1);
	var_22_float = var_24_float;
	SetByIndex(var_23_cvector, 1) = var_24_float;
	@LookAsync(var_19_object, "head", var_23_cvector);
}


void func_1825(string var_56_string, int var_57_int)
{
	string var_59_string = "idle";
	if(var_57_int != 0)
		var_59_string += var_57_int;
	var_59_string = var_56_string;
}


// @pe
void func_1190(int var_0_int, int var_1_int, int var_23_int)
{
	if(var_23_int != 0)
		return 0;
	bool var_26_bool;
	func_1228(var_26_bool, var_1_int);
	if(!var_26_bool) //@nz
		var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_1832(int var_50_int)
{
	int var_53_int; bool var_54_bool;
	var_53_int = 0;
	
	for(;;) {
		string var_56_string; int var_57_int;
		var_53_int = var_57_int;
		func_1825(var_56_string, var_57_int);
		@HasAnimation(var_54_bool, "all", var_56_string);
		if(!var_54_bool) //@nz
			break;
		var_53_int += 1;
	}
	var_53_int = var_50_int;
}


void func_43(float var_16_float, float var_17_float)
{
	
Label_44:
	for(;;) {
		bool var_20_bool;
		func_1692(var_20_bool);
		var_23_bool = !var_20_bool; //@nz
		if(var_23_bool == 0) goto Label_52;
		@Hold();
	}
	
Label_52:
	float var_19_float;
	@rand(var_19_float, 3);
	@Sleep(var_19_float + 3);
	float var_27_float; float var_28_float;
	float var_18_float;
	func_122(var_14_bool, var_27_float, var_28_float, var_18_float, var_19_float, var_27_float, var_28_float);
	@sync();
	goto Label_44;
}
EMIT "Return(); Pop(2)";


// @pe
void func_299(float var_402_float)
{
	var_402_float = 0.1;
}


void func_1708(string var_47_string)
{
	bool var_56_bool; int var_57_int; bool var_58_bool; int var_59_int; bool var_60_bool; float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
	@IsExisting3DSound(var_56_bool, var_47_string);
	if(!var_56_bool) { //@nz
		var_57_int = 0;

		for(;;) {
			@IsExisting3DSound(var_58_bool, (var_47_string + (var_57_int + 1)));
			if(!var_58_bool) { //@nz
				break;
			Label_1728:
				@irand(var_59_int, var_57_int);
				var_47_string += (var_59_int + 1);
	}
			@Is3DSoundLoaded(var_60_bool, var_47_string);
			if(var_60_bool != 0) {
				@GetEyesHeight(var_61_float);
				@GetDirection(var_62_cvector);
				var_63_cvector = var_62_cvector * 50;
				var_74_float = GetByIndex(var_63_cvector, 1);
				SetByIndex(var_63_cvector, 1) = (var_74_float + var_61_float);
				@PlayGlobalSound(var_47_string, var_63_cvector);
			}
		}
		var_57_int += 1;
	}
	var_69_bool = !var_57_int; //@nz
	if(var_69_bool == 0) goto Label_1728;
}


// @pe
void func_302(int var_409_int)
{
	var_409_int = 0;
}


void func_823(int var_0_int, bool var_308_bool)
{
	cvector var_314_cvector; cvector var_315_cvector;
	bool var_319_bool;
	func_1531(var_319_bool, var_0_int);
	if(!var_319_bool) { //@nz
		var_308_bool = false;
		return 10;
	}
	bool var_322_bool;
	float var_318_float;
	func_912(var_318_float, var_322_bool);
	if(var_322_bool != 0) {
		var_0_int->GetPFPosition(var_314_cvector); //@t
		@GetPFPosition(var_315_cvector);
		var_0_int->GetAttackDistance(var_318_float); //@t
		var_308_bool = ((var_314_cvector - var_315_cvector) | (var_314_cvector - var_315_cvector)) <= ((var_318_float + 50) * (var_318_float + 50));
		return 10;
	}
	var_308_bool = false;
}


void func_313(int var_0_int, bool var_3_bool, bool var_5_bool, object var_33_object, bool var_34_bool, float var_35_float, bool var_142_bool, bool var_234_bool)
{
	float var_47_float; cvector var_48_cvector; cvector var_49_cvector; bool var_51_bool; float var_54_float; cvector var_55_cvector; bool var_56_bool; float var_57_float;
	func_542(var_55_cvector, var_56_bool, var_57_float);
	var_5_bool = 0;
	var_82_bool = IsFuncExist(var_33_object, "@GetAttackDistance", 1);
	if(var_82_bool != 0) {
		var_33_object->GetAttackDistance(var_47_float);
		var_47_float += 50;
	} else {
						var_35_float = var_47_float;
	}
	if(var_47_float >= 150)
		var_47_float = 150;
	var_3_bool = false;
	var_0_int = var_33_object;
	bool var_50_bool;
	@IsPlayerActor(var_0_int, var_50_bool);
	if(var_50_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_88_object;
		func_1749(var_88_object);
		@SendPlayerEnemy(var_33_object, var_88_object);
	}
	if(var_34_bool != 0)
		var_51_bool = false;
	else
		var_51_bool = true;

	
Label_353:
	for(;;) {
		bool var_93_bool = false;
		bool var_94_bool;
		func_1531(var_94_bool, var_0_int);
		if(var_94_bool != 0) {
			if(!var_3_bool) //@nz
				var_93_bool = true;
		}
		if(var_93_bool != 0) {
			func_955(var_57_float);
			var_0_int->GetPFPosition(var_48_cvector); //@t
			@GetPFPosition(var_49_cvector);
			var_54_float = (var_48_cvector - var_49_cvector) | (var_48_cvector - var_49_cvector);
			if(var_54_float >= ((400.0 + var_47_float) * (400.0 + var_47_float))) {
				bool var_136_bool; float var_138_float;
				var_47_float = var_138_float;
				TaskCall(2);
				func_983(var_144_bool, var_136_bool, var_0_int, var_138_float, 3000.0, true, false);
				TaskReturn();
				if(!var_142_bool) { //@nz
				} else {
					var_51_bool = false;
			} else {
			if(var_54_float >= (var_35_float * var_35_float)) {
				var_0_int->GetPFPosition(var_55_cvector); //@t
				@CanReachByPF(var_56_bool, var_55_cvector);
				if(!var_56_bool) { //@nz
					bool var_228_bool; float var_230_float;
					var_47_float = var_230_float;
					TaskCall(2);
					func_983(var_236_bool, var_228_bool, var_0_int, var_230_float, 3000.0, true, false);
					TaskReturn();
					if(!var_234_bool) { //@nz
						goto Label_525;
					}
					var_51_bool = false;
					goto Label_353;
				}
				if(!var_51_bool) { //@nz
					func_1681(var_0_int);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_955(var_57_float);
					@StopAsync();
					var_51_bool = true;
					bool var_250_bool;
					func_1531(var_250_bool, var_0_int);
					if(!var_250_bool) { //@nz
						goto Label_525;
					}
				}
				@rand(var_57_float);
				bool var_253_bool;
				var_255_bool = var_57_float < 0.25;
				if(var_255_bool != 1) {
					bool var_256_bool;
					func_912(true, var_256_bool);
					if(var_256_bool != 1)
						var_253_bool = false;
				}
				if(var_253_bool != 0) {
					@Face(var_0_int);
					func_962();
					@PlayAnimation("all", "attack_stay");
					bool var_293_bool; float var_294_float;
					func_780(var_57_float, var_293_bool, var_294_float);
					@StopAsync();
				} else {
					@Face(var_0_int);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_955(var_57_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_511_bool;
					func_912(var_57_float, var_511_bool);
					var_512_bool = !var_511_bool; //@nz
					if(var_512_bool == 0) goto Label_515;
					bool var_513_bool;
					func_1531(var_513_bool, var_0_int);
					if(!var_513_bool) { //@nz
						goto Label_525;
					}
					var_0_int->GetPFPosition(var_48_cvector); //@t
					@GetPFPosition(var_49_cvector);
					if(!(((var_48_cvector - var_49_cvector) | (var_48_cvector - var_49_cvector)) < (var_294_float * var_294_float))) goto Label_515;
					bool var_518_bool; float var_519_float;
					var_35_float = var_519_float;
					func_616(var_56_bool, var_57_float, var_518_bool, var_519_float);
					var_520_bool = !var_518_bool; //@nz
					if(var_520_bool == 0) goto Label_515;
					goto Label_525;
			}
				bool var_521_bool; float var_522_float;
				var_35_float = var_522_float;
				func_616(var_56_bool, var_57_float, var_521_bool, var_522_float);
				if(!var_521_bool) { //@nz
					goto Label_525;
				}
				var_51_bool = true;

			}
		Label_515:
			goto Label_524;
			}
			Label_524:
			}
		}
	Label_525:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_50_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_1849(object var_16_object)
{
	bool var_17_bool;
	func_1793(var_17_bool, "quest_d1_03", "butcher_death");
	object var_23_object;
	var_16_object = var_23_object;
	TaskCall(3);
	func_1239(var_23_object);
	TaskReturn();
}


// @pe
void func_187(bool var_2_bool, bool var_3_bool)
{
	func_282();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_955(int var_0_int)
{
	func_1805(var_0_int);
}


void func_1212(int var_0_int)
{
	var_0_int = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1339(string var_46_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_47_string;
	var_46_string = var_47_string;
	func_1708(var_47_string);
	@PlayAnimation("all", var_46_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_46_string);
	@RemoveEnvelope();
}


void func_1599(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1385(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1755(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1661:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1555(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1661;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_1667(var_66_float, var_67_cvector, var_68_cvector);
}


void func_960(int var_466_int)
{
	var_466_int = 0;
}


void func_577(int var_0_int, float var_391_float, int var_392_int)
{
	object var_396_object; float var_397_float; float var_398_float;
	@GetVictim((var_391_float * 0.9), var_396_object);
	@ReportAttack(var_0_int);
	if(var_396_object == var_0_int) {
		float var_402_float; object var_403_object; int var_404_int;
		var_396_object = var_403_object;
		var_392_int = var_404_int;
		func_299(var_404_int);
		var_402_float = var_397_float;
		float var_405_float; object var_406_object; float var_407_float; int var_408_int;
		var_396_object = var_406_object;
		int var_409_int; object var_410_object; int var_411_int;
		var_396_object = var_410_object;
		var_392_int = var_411_int;
		func_302(var_411_int);
		var_409_int = var_408_int;
		func_1417(var_405_float, var_406_object, var_407_float, var_408_int);
		var_405_float = var_398_float;
		int var_466_int;
		func_960(var_466_int);
		@ReportHit(var_0_int, var_466_int, var_398_float, var_407_float);
		object var_467_object; float var_468_float;
		var_396_object = var_467_object;
		var_398_float = var_468_float;
		func_967();
	}
}
EMIT "Stack[-3] = 0";


void func_962(void)
{
	func_1708("attack_stay");
}


void func_1088(int var_0_int, int var_1_int, bool var_165_bool, object var_166_object, float var_167_float, float var_168_float, bool var_169_bool, bool var_170_bool)
{
	bool var_179_bool; object var_181_object; cvector var_182_cvector; cvector var_183_cvector; float var_185_float; object var_186_object;
	var_0_int = false;
	var_1_int = var_166_object;
	bool var_180_bool;
	var_170_bool = var_180_bool;
	
	for(;;) {
		bool var_187_bool; object var_188_object;
		var_166_object = var_188_object;
		func_1228(var_187_bool, var_188_object);
		if(!var_187_bool) { //@nz
			var_165_bool = false;
			return 16;
		}
		var_166_object->GetPosition(var_182_cvector);
		@GetPosition(var_183_cvector);
		var_185_float = (var_182_cvector - var_183_cvector) | (var_182_cvector - var_183_cvector);
		bool var_192_bool = false;
		if(var_168_float > 0) {
			if(var_185_float > (var_168_float * var_168_float))
				var_192_bool = true;
		}
		if(var_192_bool != 0) {
			@Stop();
			var_165_bool = false;
			return 16;
		}
		if(var_185_float > (var_167_float * var_167_float)) {
			var_166_object->GetPFPosition(var_182_cvector);
			@FindPathTo(var_186_object, var_182_cvector);
			if(var_186_object != null) {
				var_186_object = var_181_object;
				var_186_object = null;
			}
			if(var_181_object != null) {
				if(var_180_bool == 0) goto Label_1141;
				var_180_bool = false;
				@RotatePath(var_181_object, var_179_bool);
				if(!var_179_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_205_string;
						func_1235(var_205_string);
						string var_206_string;
						func_1237(var_206_string);
						@FollowPath(var_181_object, var_169_bool, var_179_bool, var_205_string, var_206_string);
						if(!var_179_bool) { //@nz
							if(var_0_int == 0) goto Label_1160;
							var_181_object = null;
						}
					EMIT "GOTO 0x489";

					Label_1160:
						} else {
					var_181_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_179_bool);
					if(!var_179_bool) { //@nz
						if(var_0_int != 0) {
							var_181_object = null;
							goto Label_1188;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1188;
		}
			var_186_object = null;
			goto Label_1186;

		Label_1186:
			var_181_object = null;

		}
	Label_1188:
		for(;;) {
			var_165_bool = !var_0_int;
			return 16;

			}
	}
	
}


void func_68(bool var_5_bool)
{
	var_5_bool = true;
	bool var_528_bool;
	@IsLoaded(var_528_bool);
	bool var_529_bool = false;
	if(!var_528_bool) { //@nz
		bool var_531_bool;
		func_120(var_531_bool);
		if(var_531_bool != 0)
			var_529_bool = true;
	}
	if(var_529_bool != 0) {
		object var_532_object;
		func_1749(var_532_object);
		@RemoveActor(var_532_object);
	}
}


// @pe
void func_967(void)
{
}


void func_201(void)
{
	int var_43_int; int var_44_int; bool var_45_bool; float var_46_float; bool var_47_bool;
	@WaitForAnimEnd();
	bool var_48_bool;
	func_1692(var_48_bool);
	if(!var_48_bool) //@nz
		return 14;
	int var_50_int;
	func_1832(var_50_int);
	int var_41_int;
	var_50_int = var_41_int;
	int var_42_int = 0;
	
	for(;;) {
		bool var_63_bool = false;
		if(var_42_int < 5) {
			bool var_66_bool;
			func_1692(var_66_bool);
			if(var_66_bool != 0)
				var_63_bool = true;
		}
		if(var_63_bool != 0) {
			@irand(var_43_int, 3);
			if(var_43_int == 0) {
				if(var_41_int == 0) goto Label_248;
				@irand(var_44_int, var_41_int);
				string var_72_string; int var_73_int;
				var_44_int = var_73_int;
				func_1825(var_72_string, var_73_int);
				@PlayAnimation("all", var_72_string);
				@WaitForAnimEnd(var_45_bool);
				if(!var_45_bool) { //@nz
				} else {
			} else {
			if(var_43_int == 1) {
				@rand(var_46_float, 4);
				@Sleep((var_46_float + 1), var_47_bool);
				if(!var_47_bool) { //@nz
					goto Label_277;
				}
			} else if(var_42_int != 0) {
				goto Label_277;
			}
			}
					bool var_75_bool;
					func_280(var_75_bool);
					var_76_bool = !var_75_bool; //@nz
					if(var_76_bool == 0) goto Label_272;
			}
		}
	Label_277:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_272:
		@ResetAAS();
		var_42_int += 1;
	}
	
}


void func_969(bool var_491_bool)
{
	var_491_bool = true;
}


void func_971(int var_387_int)
{
	var_387_int = 1;
}


// @pe
void func_1228(bool var_26_bool, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1531(var_28_bool, var_29_object);
	var_28_bool = var_26_bool;
}


void func_973(float var_382_float)
{
	var_382_float = 0.5;
}


void func_1490(bool var_43_bool, object var_44_object)
{
	bool var_46_bool;
	var_44_object->IsDead(var_46_bool);
	var_46_bool = var_43_bool;
}


void func_851(bool var_306_bool)
{
	bool var_307_bool = false;
	bool var_308_bool;
	func_823(var_307_bool, var_308_bool);
	if(var_308_bool != 0) {
		bool var_325_bool;
		func_867(var_306_bool, var_307_bool, var_325_bool);
		if(var_325_bool != 0)
			var_307_bool = true;
	}
	if(var_307_bool != 0) {
		var_306_bool = true;
		return 0;
	}
	var_306_bool = false;
}


void func_1235(string var_205_string)
{
	var_205_string = "walk";
}


void func_1749(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_1237(string var_206_string)
{
	var_206_string = "run";
}


void func_983(bool var_2_bool, bool var_136_bool, object var_137_object, float var_138_float, float var_139_float, bool var_140_bool, bool var_141_bool)
{
	object var_149_object;
	func_1805(var_149_object);
	@SetTimer(1, 5);
	bool var_147_bool;
	@CanSee(var_147_bool, var_149_object);
	if(var_147_bool != 0) {
		var_2_bool = true;
		object var_153_object;
		var_137_object = var_153_object;
		func_1697(var_153_object);
	} else {
		var_2_bool = false;
	}
	bool var_160_bool; object var_161_object;
	func_1400(var_160_bool, var_161_object);
	if(var_160_bool != 0) {
		object var_164_object;
		func_1749(var_164_object);
		@SendPlayerEnemy(var_161_object, var_164_object);
	}
	bool var_165_bool; object var_166_object; float var_167_float; float var_168_float; bool var_169_bool; bool var_170_bool;
	var_137_object = var_166_object;
	var_138_float = var_167_float;
	var_139_float = var_168_float;
	var_140_bool = var_169_bool;
	var_141_bool = var_170_bool;
	bool var_148_bool;
	func_1088(var_147_bool, var_148_bool, var_165_bool, var_166_object, var_167_float, var_168_float, var_169_bool, var_170_bool);
	var_165_bool = var_148_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_148_bool = var_136_bool;
	
}


// @pe
void func_88(string var_524_string)
{
	if(var_524_string == "cleanup")
		func_68(var_524_string);
}


void func_1495(bool var_32_bool, object var_33_object)
{
	if(var_33_object == null) {
		var_32_bool = false;
		return 4;
	}
	bool var_39_bool = false;
	var_42_bool = IsFuncExist(var_33_object, "IsDead", 1);
	if(var_42_bool != 0) {
		bool var_43_bool; object var_44_object;
		var_33_object = var_44_object;
		func_1490(var_43_bool, var_44_object);
		if(var_43_bool != 0)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		var_32_bool = false;
		return 4;
	}
	object var_36_object;
	@GetScene(var_36_object);
	if(var_36_object == null) {
		var_32_bool = false;
		return 4;
	}
	object var_37_object;
	var_33_object->GetScene(var_37_object);
	if(var_36_object != var_37_object) {
		var_32_bool = false;
		return 4;
	}
	var_32_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1239(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_1248(var_24_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1371(string var_433_string, int var_434_int)
{
	if(var_434_int == 2) {
		var_433_string = "fire";
		return 0;
	EMIT "GOTO 0x567";
	}
	if(var_434_int == 1) {
		var_433_string = "bullet";
		return 0;
	}
	var_433_string = "phys";
}


void func_1755(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_1248(object var_24_object)
{
	cvector var_35_cvector; cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; string var_39_string; object var_40_object; bool var_41_bool; bool var_42_bool; float var_43_float; cvector var_44_cvector;
	if(var_24_object == null) {
		func_1339("fdie");
	} else {
		var_24_object->GetPosition(var_35_cvector);
		@GetPosition(var_36_cvector);
		@GetDirection(var_37_cvector);
		var_38_cvector = var_36_cvector - var_35_cvector;
		var_78_float = GetByIndex(var_38_cvector, 0);
		var_79_float = GetByIndex(var_37_cvector, 0);
		var_81_float = GetByIndex(var_38_cvector, 2);
		var_82_float = GetByIndex(var_37_cvector, 2);
		if(((var_78_float * var_79_float) + (var_81_float * var_82_float)) >= 0)
			var_39_string = "fdie";
		else
			var_39_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_24_object = var_40_object;
		var_89_bool = IsFuncExist(var_24_object, "GetScriptProperty", 2);
		if(var_89_bool != 0) {
			var_24_object->HasScriptProperty(var_41_bool, "Owner");
			if(var_41_bool != 0) {
				var_24_object->GetScriptProperty(var_40_object, "Owner");
				if(var_40_object == null)
					var_24_object = var_40_object;
			}
		}
		var_96_bool = IsFuncExist(var_40_object, "@GetEyesHeight", 1);
		if(var_96_bool != 0) {
			var_40_object->GetEyesHeight(var_43_float);
			var_44_cvector = [0.0, 0.0, 0.0];
			var_97_float = GetByIndex(var_44_cvector, 1);
			var_43_float = var_97_float;
			SetByIndex(var_44_cvector, 1) = var_97_float;
			@LookAsync(var_24_object, "head", var_44_cvector);
			var_42_bool = true;
		} else {
			var_42_bool = false;

		}
		string var_99_string;
		var_39_string = var_99_string;
		func_1708(var_99_string);
		@PlayAnimation("all", var_39_string);
		@WaitForAnimEnd();
		if(var_42_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_39_string);
		@RemoveEnvelope();
		var_40_object = null;
	}
	
}


void func_867(int var_0_int, object var_4_object, bool var_325_bool)
{
	object var_331_object; float var_333_float; cvector var_334_cvector; cvector var_335_cvector;
	@GetScene(var_331_object);
	bool var_332_bool = false;
	
	for(;;) {
		cvector var_336_cvector;
		func_1385(var_336_cvector, var_0_int);
		var_342_int = -var_336_cvector;
		@FindDirLength(var_333_float, var_342_int, var_4_object);
		if(var_333_float < var_4_object) {
		} else {
				@Face(var_0_int);
				@PlayAnimation("all", "bjump");
				var_0_int->GetPFPosition(var_334_cvector); //@t
				@GetPFPosition(var_335_cvector);
				@WaitForAnimEnd();
				func_955(var_335_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_332_bool = true;
				bool var_347_bool;
				func_823(var_335_cvector, var_347_bool);
				var_348_bool = !var_347_bool; //@nz
				if(var_348_bool == 0) goto Label_908;
		}
		for(;;) {
			var_332_bool = var_325_bool;

		}

	Label_908:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1765(float var_443_float, float var_444_float, float var_445_float)
{
	if(var_444_float < var_445_float)
		var_444_float = var_443_float;
	else
		var_445_float = var_443_float;
	
}


void func_616(int var_0_int, int var_1_int, bool var_354_bool, float var_355_float)
{
	string var_363_string;
	func_955(var_363_string);
	int var_360_int;
	@irand(var_360_int, var_1_int);
	@Face(var_0_int);
	@SetAttackState(true);
	func_1814();
	@PlayAnimation("all", ("attack_begin" + (var_360_int + 1)));
	@WaitForAnimEnd();
	int var_362_int;
	func_923(var_362_int, var_363_string);
	bool var_388_bool;
	func_1531(var_388_bool, var_0_int);
	if(!var_388_bool) { //@nz
		@StopAsync();
		var_354_bool = false;
		return 8;
	}
	float var_391_float; int var_392_int;
	var_355_float = var_391_float;
	var_360_int = var_392_int;
	func_577(var_363_string, var_391_float, var_392_int);
	bool var_361_bool;
	@HasAnimation(var_361_bool, "all", ("attack_middle" + var_360_int));
	if(var_361_bool != 0) {
		func_1814();
		@PlayAnimation("all", ("attack_middle" + var_360_int));
		@WaitForAnimEnd();
		func_955(var_363_string);
		bool var_476_bool;
		func_1531(var_476_bool, var_0_int);
		if(!var_476_bool) { //@nz
			@StopAsync();
			var_354_bool = false;
			return 8;
		}
		float var_479_float; int var_480_int;
		var_355_float = var_479_float;
		func_577(var_363_string, var_479_float, var_480_int);
		var_362_int = 1;

		for(;;) {
			var_363_string = (("attack_middle" + var_480_int) + "_") + var_362_int;
			@HasAnimation(var_361_bool, "all", var_363_string);
			if(!var_361_bool) { //@nz
			} else {
				func_1814();
				@PlayAnimation("all", var_363_string);
				@WaitForAnimEnd();
				func_955(var_363_string);
				bool var_502_bool;
				func_1531(var_502_bool, var_0_int);
				if(!var_502_bool) { //@nz
					@StopAsync();
					var_354_bool = false;
					return 8;
				}
				float var_505_float; int var_506_int;
				var_355_float = var_505_float;
				var_360_int = var_506_int;
				func_577(var_363_string, var_505_float, var_506_int);
				var_362_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_360_int));
		bool var_491_bool;
		func_969(var_491_bool);
		if(var_491_bool != 0) {
			bool var_492_bool;
			func_753(var_492_bool, 0.75);
			@StopAsync();
		}
		var_354_bool = true;
		return 8;

	}
}


void func_1385(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


// @pe
void func_1772(float var_453_float, float var_454_float, float var_455_float, float var_456_float)
{
	if(var_454_float < var_455_float) {
		var_455_float = var_453_float;
		return 0;
	}
	if(var_454_float > var_456_float) {
		var_456_float = var_453_float;
		return 0;
	}
	var_454_float = var_453_float;
}


void func_1392(float var_22_float, object var_23_object)
{
	cvector var_27_cvector;
	@GetPosition(var_27_cvector);
	cvector var_28_cvector;
	var_23_object->GetPosition(var_28_cvector);
	var_22_float = (var_28_cvector - var_27_cvector) | (var_28_cvector - var_27_cvector);
}


void func_753(bool var_492_bool, float var_493_float)
{
	float var_496_float; bool var_497_bool;
	@rand(var_496_float);
	if(var_496_float < var_493_float) {

		for(;;) {
			@IsAnimationPlaying(var_497_bool);
			if(!var_497_bool) { //@nz
			} else {
				bool var_500_bool;
				func_851(var_500_bool);
				if(var_500_bool != 0) {
					var_492_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_492_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_955(var_497_bool);
}


void func_1783(float var_461_float)
{
	object var_463_object;
	@CreateFloatVector(var_463_object);
	var_463_object->add(var_461_float);
	@SendWorldWndMessage(15, var_463_object);
}
EMIT "Stack[-1] = 0";


void func_120(bool var_20_bool)
{
	var_20_bool = true;
}


// @pe
void func_122(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_27_float, float var_28_float)
{
	bool var_29_bool;
	func_1692(var_29_bool);
	if(!var_29_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_27_float;
	var_1_int = var_28_float;
	@SetTimer(10, 1.0);
	func_201();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1531(bool var_28_bool, object var_29_object)
{
	object var_33_object;
	var_29_object = var_33_object;
	bool var_32_bool;
	func_1495(var_32_bool, var_33_object);
	if(!var_32_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_50_bool; object var_51_object;
	func_1405(var_50_bool, var_51_object, "noaccess");
	if(!var_50_bool) { //@nz
		var_28_bool = true;
		return 2;
	}
	int var_31_int;
	var_51_object->GetProperty("noaccess", var_31_int);
	var_28_bool = var_31_int == 0;
}


void func_1405(bool var_50_bool, object var_51_object, string var_52_string)
{
	var_57_bool = IsFuncExist(var_51_object, "HasProperty", 2);
	if(!var_57_bool) { //@nz
		var_50_bool = false;
		return 2;
	}
	bool var_54_bool;
	var_51_object->HasProperty(var_52_string, var_54_bool);
	var_54_bool = var_50_bool;
}


