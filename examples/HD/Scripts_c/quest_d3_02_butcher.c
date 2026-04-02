maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		@SensePlayerOnly(true);
		func_43(var_15_bool, (float)300, (float)100);
	}

	void OnAttacked(int var_0_int, int iDamageType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_18_bool;
		@IsPlayerActor(var_16_bool, var_18_bool);
		if(var_18_bool != 0) {
			TaskCall(1);
			func_277();
			TaskReturn();
		}
	}

	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, string var_7_string, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		float var_19_float; cvector var_20_cvector;
		if(var_16_bool == "trigger") {
			@GetEyesHeight(var_19_float);
			var_23_float = GetByIndex(var_20_cvector, 1);
			SetByIndex(var_20_cvector, 1) = (var_23_float + var_19_float);
			@PlayGlobalSound("growl", var_20_cvector);
			TaskCall(1);
			func_277();
			TaskReturn();
		} else {
			string var_529_string;
			var_16_bool = var_529_string;
			func_81(var_529_string);
		}
	
	}

	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		if(var_6_bool != 0)
			func_177(var_14_object, var_15_bool);
		bool var_20_bool = false;
		if(var_5_bool != 0) {
			bool var_22_bool;
			func_110(var_22_bool);
			if(var_22_bool != 0)
				var_20_bool = true;
		}
		if(var_20_bool != 0) {
			object var_23_object;
			func_1747(var_23_object);
			@RemoveActor(var_23_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == 10) {
			bool var_19_bool;
			func_139(var_14_bool, var_15_object, var_16_bool, var_19_bool);
			if(var_19_bool != 0) {
				if(!var_2_bool) { //@nz
					func_1695(var_4_object);
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
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_16_object;
		func_1747(var_16_object);
		@RemoveActor(var_16_object);
		@Hold();
	}

}


task task_2
{
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_16_object;
		func_1747(var_16_object);
		@RemoveActor(var_16_object);
		@Hold();
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, int var_16_int)
	{
		if(var_16_int == 1) {
			func_1810(var_1_int);
		} else {
			int var_24_int;
			func_1180(var_15_bool, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_int == var_16_object) {
			if(!var_2_bool) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_bool = true;
			object var_20_object;
			var_16_object = var_20_object;
			func_1695(var_20_object);
		}
	}

	// @pe
	void OnStopSee(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_int == var_16_object) {
			if(var_2_bool != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		@RequestClearPath(var_16_object);
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		func_1036(var_16_object);
		object var_21_object;
		var_16_object = var_21_object;
		func_1898();
	}

}


task task_3
{
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_16_object;
		func_1747(var_16_object);
		@RemoveActor(var_16_object);
		@Hold();
	}

	// @pe
	void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
	{
	}

	// @pe
	void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
	{
	}

	// @pe
	void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
	}

}


// @pe
void OnHit(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_1597(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(int var_0_int, int iHitType, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_22_object;
	var_16_object = var_22_object;
	int var_23_int;
	var_17_int = var_23_int;
	float var_24_float;
	var_18_float = var_24_float;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	func_1665(var_24_float, var_25_cvector, var_26_cvector);
}


void OnPropertyChange(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_1854(var_17_object);
}


void func_1665(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_1553(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_770(int var_0_int, bool var_294_bool, float var_295_float)
{
	bool var_301_bool; cvector var_302_cvector; cvector var_303_cvector; cvector var_304_cvector; float var_305_float;
	
	for(;;) {
		@IsAnimationPlaying(var_301_bool);
		if(!var_301_bool) //@nz
			break;
		bool var_307_bool;
		func_841(var_307_bool);
		if(var_307_bool != 0) {
			var_294_bool = true;
			return 10;
		}
		bool var_350_bool;
		func_1529(var_350_bool, var_0_int);
		if(!var_350_bool) { //@nz
			var_294_bool = false;
			return 10;
		}
		var_0_int->GetPFPosition(var_302_cvector); //@t
		@GetPFPosition(var_303_cvector);
		var_304_cvector = var_302_cvector - var_303_cvector;
		var_305_float = var_304_cvector | var_304_cvector;
		if(var_305_float < (var_295_float * var_295_float)) {
			bool var_355_bool; float var_356_float;
			var_295_float = var_356_float;
			func_606(var_304_cvector, var_305_float, var_355_bool, var_356_float);
			var_294_bool = true;
			return 10;
		}
		@sync();
	}
	func_945(var_305_float);
	var_294_bool = false;
}


void func_902(int var_0_int, bool var_257_bool)
{
	bool var_259_bool;
	var_262_bool = IsFuncExist(var_0_int, "IsAttacking", 1);
	if(var_262_bool != 0) {
		var_0_int->IsAttacking(var_259_bool); //@t
		var_259_bool = var_257_bool;
	}
	var_257_bool = false;
}


void func_1798(bool var_18_bool, string var_19_string, string var_20_string)
{
	object var_22_object;
	@FindActor(var_22_object, var_19_string);
	if(var_22_object == null)
		var_18_bool = false;
	@Trigger(var_22_object, var_20_string);
	var_18_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1415(float var_406_float, object var_407_object, float var_408_float, int var_409_int)
{
	int var_419_int; int var_421_int;
	object var_426_object;
	var_407_object = var_426_object;
	bool var_425_bool;
	func_1403(var_425_bool, var_426_object, "health");
	if(!var_425_bool) //@nz
		var_406_float = 0.0;
	bool var_429_bool; object var_430_object;
	func_1403(var_429_bool, var_430_object, "armor");
	if(!var_429_bool) //@nz
		var_419_int = 0;
	else
		var_430_object->GetProperty("armor", var_419_int);
	string var_434_string; int var_435_int;
	var_409_int = var_435_int;
	func_1369(var_434_string, var_435_int);
	string var_420_string = "armor_" + var_434_string;
	bool var_440_bool; object var_441_object; string var_442_string;
	var_407_object = var_441_object;
	func_1403(var_440_bool, var_441_object, var_442_string);
	if(!var_440_bool) //@nz
		var_421_int = 0;
	else
		var_407_object->GetProperty(var_442_string, var_421_int);

	float var_444_float;
	func_1763(var_444_float, ((var_419_int + var_421_int) / 100.0), (float)1);
	float var_422_float;
	var_444_float = var_422_float;
	float var_423_float;
	var_407_object->GetProperty("health", var_423_float);
	float var_424_float = var_408_float * (1 - var_422_float);
	float var_454_float;
	func_1770(var_454_float, (var_423_float - var_424_float), (float)0, (float)1);
	var_407_object->SetProperty("health", var_454_float);
	bool var_460_bool; object var_461_object;
	var_407_object = var_461_object;
	func_1398(var_460_bool, var_461_object);
	if(var_460_bool != 0) {
		float var_462_float = -var_424_float;
		func_1781(var_462_float);
	}
	var_424_float = var_406_float;
	
}


void func_139(int var_0_int, int var_1_int, object var_4_object, bool var_19_bool)
{
	if(var_4_object == null)
		var_19_bool = false;
	float var_23_float;
	func_1390(var_23_float, var_4_object);
	float var_21_float = sqrt(var_23_float);
	if(var_2_bool != 0)
		var_21_float -= var_1_int;
	var_19_bool = var_21_float < var_0_int;
}


void func_1036(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_1202(var_16_object);
}


void func_270(bool var_76_bool)
{
	var_76_bool = true;
}


void func_1679(object var_240_object)
{
	cvector var_244_cvector;
	var_240_object->GetPosition(var_244_cvector);
	cvector var_245_cvector;
	@GetPosition(var_245_cvector);
	cvector var_246_cvector = var_244_cvector - var_245_cvector;
	var_247_float = GetByIndex(var_246_cvector, 0);
	var_248_float = GetByIndex(var_246_cvector, 2);
	@RotateAsync(var_247_float, var_248_float);
}


void func_272(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_913(bool var_2_bool, bool var_5_bool)
{
	int var_377_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_376_float;
	@rand(var_376_float);
	float var_383_float;
	func_963(var_383_float);
	if(var_376_float < var_383_float) {
		@irand(var_377_int, var_2_bool);
		@Speak("attack" + (var_377_int + 1));
		int var_388_int;
		func_961(var_388_int);
		var_5_bool = var_388_int;
	}
}


void func_1810(object var_19_object)
{
	bool var_21_bool;
	@IsPlayerActor(var_19_object, var_21_bool);
	if(var_21_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1553(object var_33_object)
{
	string var_47_string;
	if(var_33_object == null)
		return 14;
	bool var_41_bool;
	@IsDead(var_41_bool);
	if(var_41_bool != 0)
		return 14;
	int var_42_int;
	@GetSecondaryAnimationType(var_42_int);
	if(var_42_int < 0)
		return 14;
	cvector var_43_cvector;
	var_33_object->GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_47_string = "fhit";
	else
		var_47_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_47_string + "1"), (var_47_string + "2"), -10);
	
}


void func_532(int var_1_int, bool var_2_bool, object var_4_object)
{
	bool var_62_bool; bool var_63_bool; cvector var_64_cvector;
	var_1_int = 0;
	
	for(;;) {
		@HasAnimation(var_62_bool, "all", ("attack_begin" + (var_1_int + 1)));
		if(!var_62_bool) { //@nz
		} else {
			var_1_int += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_63_bool, ("attack" + (var_2_bool + 1)));
			if(!var_63_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_64_cvector, "all", "bjump");
		var_78_float = GetByIndex(var_64_cvector, 2);
		var_4_object = -var_78_float;

	}
}


void func_277(void)
{
	object var_32_object;
	@FindActor(var_32_object, "player");
	object var_34_object;
	object var_31_object;
	func_303(var_28_bool, var_29_float, var_30_int, var_31_object, var_34_object, var_34_object, true, 180.0);
}
EMIT "Stack[-1] = 0";


void func_1690(bool var_28_bool)
{
	bool var_30_bool;
	@IsLoaded(var_30_bool);
	var_30_bool = var_28_bool;
}


void func_1819(void)
{
	object var_368_object;
	@GetScene(var_368_object);
	object var_370_object;
	func_1747(var_370_object);
	@BroadcastMessage("battle", var_370_object, var_368_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1180(int var_0_int, int var_1_int, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1218(var_27_bool, var_1_int);
	if(!var_27_bool) //@nz
		var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_1695(object var_20_object)
{
	float var_23_float;
	var_20_object->GetEyesHeight(var_23_float);
	cvector var_24_cvector = [0.0, 0.0, 0.0];
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	@LookAsync(var_20_object, "head", var_24_cvector);
}


// @pe
void func_289(float var_403_float)
{
	var_403_float = 0.1;
}


// @pe
void func_292(int var_410_int)
{
	var_410_int = 0;
}


void func_1830(string var_57_string, int var_58_int)
{
	string var_60_string = "idle";
	if(var_58_int != 0)
		var_60_string += var_58_int;
	var_60_string = var_57_string;
}


void func_1706(string var_48_string)
{
	bool var_57_bool; int var_58_int; bool var_59_bool; int var_60_int; bool var_61_bool; float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
	@IsExisting3DSound(var_57_bool, var_48_string);
	if(!var_57_bool) { //@nz
		var_58_int = 0;

		for(;;) {
			@IsExisting3DSound(var_59_bool, (var_48_string + (var_58_int + 1)));
			if(!var_59_bool) { //@nz
				break;
			Label_1726:
				@irand(var_60_int, var_58_int);
				var_48_string += (var_60_int + 1);
	}
			@Is3DSoundLoaded(var_61_bool, var_48_string);
			if(var_61_bool != 0) {
				@GetEyesHeight(var_62_float);
				@GetDirection(var_63_cvector);
				var_64_cvector = var_63_cvector * 50;
				var_75_float = GetByIndex(var_64_cvector, 1);
				SetByIndex(var_64_cvector, 1) = (var_75_float + var_62_float);
				@PlayGlobalSound(var_48_string, var_64_cvector);
			}
		}
		var_58_int += 1;
	}
	var_70_bool = !var_58_int; //@nz
	if(var_70_bool == 0) goto Label_1726;
}


void func_43(bool var_6_bool, float var_17_float, float var_18_float)
{
	float var_19_float; bool var_20_bool; float var_21_float; bool var_22_bool;
	var_6_bool = false;
	
	for(;;) {
		@rand(var_21_float, 3);
		@Sleep((var_21_float + 3), var_22_bool);
		var_6_bool = true;
		float var_26_float; float var_27_float;
		var_17_float = var_26_float;
		func_112(var_27_float, var_19_float, var_20_bool, var_21_float, var_22_bool, var_26_float, var_27_float);
		var_6_bool = false;
	}
}
EMIT "Return(); Pop(4)";


void func_1837(int var_51_int)
{
	int var_54_int; bool var_55_bool;
	var_54_int = 0;
	
	for(;;) {
		string var_57_string; int var_58_int;
		var_54_int = var_58_int;
		func_1830(var_57_string, var_58_int);
		@HasAnimation(var_55_bool, "all", var_57_string);
		if(!var_55_bool) //@nz
			break;
		var_54_int += 1;
	}
	var_54_int = var_51_int;
}


void func_813(int var_0_int, bool var_309_bool)
{
	cvector var_315_cvector; cvector var_316_cvector;
	bool var_320_bool;
	func_1529(var_320_bool, var_0_int);
	if(!var_320_bool) { //@nz
		var_309_bool = false;
		return 10;
	}
	bool var_323_bool;
	float var_319_float;
	func_902(var_319_float, var_323_bool);
	if(var_323_bool != 0) {
		var_0_int->GetPFPosition(var_315_cvector); //@t
		@GetPFPosition(var_316_cvector);
		var_0_int->GetAttackDistance(var_319_float); //@t
		var_309_bool = ((var_315_cvector - var_316_cvector) | (var_315_cvector - var_316_cvector)) <= ((var_319_float + 50) * (var_319_float + 50));
		return 10;
	}
	var_309_bool = false;
}


void func_303(int var_0_int, bool var_3_bool, bool var_5_bool, object var_34_object, bool var_35_bool, float var_36_float, bool var_143_bool, bool var_235_bool)
{
	float var_48_float; cvector var_49_cvector; cvector var_50_cvector; bool var_52_bool; float var_55_float; cvector var_56_cvector; bool var_57_bool; float var_58_float;
	func_532(var_56_cvector, var_57_bool, var_58_float);
	var_5_bool = 0;
	var_83_bool = IsFuncExist(var_34_object, "@GetAttackDistance", 1);
	if(var_83_bool != 0) {
		var_34_object->GetAttackDistance(var_48_float);
		var_48_float += 50;
	} else {
						var_36_float = var_48_float;
	}
	if(var_48_float >= 150)
		var_48_float = 150;
	var_3_bool = false;
	var_0_int = var_34_object;
	bool var_51_bool;
	@IsPlayerActor(var_0_int, var_51_bool);
	if(var_51_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_89_object;
		func_1747(var_89_object);
		@SendPlayerEnemy(var_34_object, var_89_object);
	}
	if(var_35_bool != 0)
		var_52_bool = false;
	else
		var_52_bool = true;

	
Label_343:
	for(;;) {
		bool var_94_bool = false;
		bool var_95_bool;
		func_1529(var_95_bool, var_0_int);
		if(var_95_bool != 0) {
			if(!var_3_bool) //@nz
				var_94_bool = true;
		}
		if(var_94_bool != 0) {
			func_945(var_58_float);
			var_0_int->GetPFPosition(var_49_cvector); //@t
			@GetPFPosition(var_50_cvector);
			var_55_float = (var_49_cvector - var_50_cvector) | (var_49_cvector - var_50_cvector);
			if(var_55_float >= ((400.0 + var_48_float) * (400.0 + var_48_float))) {
				bool var_137_bool; float var_139_float;
				var_48_float = var_139_float;
				TaskCall(2);
				func_973(var_145_bool, var_137_bool, var_0_int, var_139_float, 3000.0, true, false);
				TaskReturn();
				if(!var_143_bool) { //@nz
				} else {
					var_52_bool = false;
			} else {
			if(var_55_float >= (var_36_float * var_36_float)) {
				var_0_int->GetPFPosition(var_56_cvector); //@t
				@CanReachByPF(var_57_bool, var_56_cvector);
				if(!var_57_bool) { //@nz
					bool var_229_bool; float var_231_float;
					var_48_float = var_231_float;
					TaskCall(2);
					func_973(var_237_bool, var_229_bool, var_0_int, var_231_float, 3000.0, true, false);
					TaskReturn();
					if(!var_235_bool) { //@nz
						goto Label_515;
					}
					var_52_bool = false;
					goto Label_343;
				}
				if(!var_52_bool) { //@nz
					func_1679(var_0_int);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_945(var_58_float);
					@StopAsync();
					var_52_bool = true;
					bool var_251_bool;
					func_1529(var_251_bool, var_0_int);
					if(!var_251_bool) { //@nz
						goto Label_515;
					}
				}
				@rand(var_58_float);
				bool var_254_bool;
				var_256_bool = var_58_float < 0.25;
				if(var_256_bool != 1) {
					bool var_257_bool;
					func_902(true, var_257_bool);
					if(var_257_bool != 1)
						var_254_bool = false;
				}
				if(var_254_bool != 0) {
					@Face(var_0_int);
					func_952();
					@PlayAnimation("all", "attack_stay");
					bool var_294_bool; float var_295_float;
					func_770(var_58_float, var_294_bool, var_295_float);
					@StopAsync();
				} else {
					@Face(var_0_int);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_945(var_58_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_516_bool;
					func_902(var_58_float, var_516_bool);
					var_517_bool = !var_516_bool; //@nz
					if(var_517_bool == 0) goto Label_505;
					bool var_518_bool;
					func_1529(var_518_bool, var_0_int);
					if(!var_518_bool) { //@nz
						goto Label_515;
					}
					var_0_int->GetPFPosition(var_49_cvector); //@t
					@GetPFPosition(var_50_cvector);
					if(!(((var_49_cvector - var_50_cvector) | (var_49_cvector - var_50_cvector)) < (var_295_float * var_295_float))) goto Label_505;
					bool var_523_bool; float var_524_float;
					var_36_float = var_524_float;
					func_606(var_57_bool, var_58_float, var_523_bool, var_524_float);
					var_525_bool = !var_523_bool; //@nz
					if(var_525_bool == 0) goto Label_505;
					goto Label_515;
			}
				bool var_526_bool; float var_527_float;
				var_36_float = var_527_float;
				func_606(var_57_bool, var_58_float, var_526_bool, var_527_float);
				if(!var_526_bool) { //@nz
					goto Label_515;
				}
				var_52_bool = true;

			}
		Label_505:
			goto Label_514;
			}
			Label_514:
			}
		}
	Label_515:
		@WaitForAnimEnd();
		if(var_3_bool != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_51_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_177(bool var_2_bool, bool var_3_bool)
{
	func_272();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_945(int var_0_int)
{
	func_1810(var_0_int);
}


void func_1202(int var_0_int)
{
	var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_950(int var_471_int)
{
	var_471_int = 0;
}


void func_567(int var_0_int, float var_392_float, int var_393_int)
{
	object var_397_object; float var_398_float; float var_399_float;
	@GetVictim((var_392_float * 0.9), var_397_object);
	@ReportAttack(var_0_int);
	if(var_397_object == var_0_int) {
		float var_403_float; object var_404_object; int var_405_int;
		var_397_object = var_404_object;
		var_393_int = var_405_int;
		func_289(var_405_int);
		var_403_float = var_398_float;
		float var_406_float; object var_407_object; float var_408_float; int var_409_int;
		var_397_object = var_407_object;
		int var_410_int; object var_411_object; int var_412_int;
		var_397_object = var_411_object;
		var_393_int = var_412_int;
		func_292(var_412_int);
		var_410_int = var_409_int;
		func_1415(var_406_float, var_407_object, var_408_float, var_409_int);
		var_406_float = var_399_float;
		int var_471_int;
		func_950(var_471_int);
		@ReportHit(var_0_int, var_471_int, var_399_float, var_408_float);
		object var_472_object; float var_473_float;
		var_397_object = var_472_object;
		var_399_float = var_473_float;
		func_957();
	}
}
EMIT "Stack[-3] = 0";


void func_952(void)
{
	func_1706("attack_stay");
}


void func_1078(int var_0_int, int var_1_int, bool var_166_bool, object var_167_object, float var_168_float, float var_169_float, bool var_170_bool, bool var_171_bool)
{
	bool var_180_bool; object var_182_object; cvector var_183_cvector; cvector var_184_cvector; float var_186_float; object var_187_object;
	var_0_int = false;
	var_1_int = var_167_object;
	bool var_181_bool;
	var_171_bool = var_181_bool;
	
	for(;;) {
		bool var_188_bool; object var_189_object;
		var_167_object = var_189_object;
		func_1218(var_188_bool, var_189_object);
		if(!var_188_bool) { //@nz
			var_166_bool = false;
			return 16;
		}
		var_167_object->GetPosition(var_183_cvector);
		@GetPosition(var_184_cvector);
		var_186_float = (var_183_cvector - var_184_cvector) | (var_183_cvector - var_184_cvector);
		bool var_193_bool = false;
		if(var_169_float > 0) {
			if(var_186_float > (var_169_float * var_169_float))
				var_193_bool = true;
		}
		if(var_193_bool != 0) {
			@Stop();
			var_166_bool = false;
			return 16;
		}
		if(var_186_float > (var_168_float * var_168_float)) {
			var_167_object->GetPFPosition(var_183_cvector);
			@FindPathTo(var_187_object, var_183_cvector);
			if(var_187_object != null) {
				var_187_object = var_182_object;
				var_187_object = null;
			}
			if(var_182_object != null) {
				if(var_181_bool == 0) goto Label_1131;
				var_181_bool = false;
				@RotatePath(var_182_object, var_180_bool);
				if(!var_180_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_206_string;
						func_1225(var_206_string);
						string var_207_string;
						func_1227(var_207_string);
						@FollowPath(var_182_object, var_170_bool, var_180_bool, var_206_string, var_207_string);
						if(!var_180_bool) { //@nz
							if(var_0_int == 0) goto Label_1150;
							var_182_object = null;
						}
					EMIT "GOTO 0x47f";

					Label_1150:
						} else {
					var_182_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_180_bool);
					if(!var_180_bool) { //@nz
						if(var_0_int != 0) {
							var_182_object = null;
							goto Label_1178;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1178;
		}
			var_187_object = null;
			goto Label_1176;

		Label_1176:
			var_182_object = null;

		}
	Label_1178:
		for(;;) {
			var_166_bool = !var_0_int;
			return 16;

			}
	}
	
}


// @pe
void func_1337(string var_47_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_48_string;
	var_47_string = var_48_string;
	func_1706(var_48_string);
	@PlayAnimation("all", var_47_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_47_string);
	@RemoveEnvelope();
}


void func_61(bool var_5_bool)
{
	var_5_bool = true;
	bool var_532_bool = false;
	bool var_533_bool;
	func_1690(var_533_bool);
	if(!var_533_bool) { //@nz
		bool var_537_bool;
		func_110(var_537_bool);
		if(var_537_bool != 0)
			var_532_bool = true;
	}
	if(var_532_bool != 0) {
		object var_538_object;
		func_1747(var_538_object);
		@RemoveActor(var_538_object);
	}
}


// @pe
void func_957(void)
{
}


void func_191(void)
{
	int var_44_int; int var_45_int; bool var_46_bool; float var_47_float; bool var_48_bool;
	@WaitForAnimEnd();
	bool var_49_bool;
	func_1690(var_49_bool);
	if(!var_49_bool) //@nz
		return 14;
	int var_51_int;
	func_1837(var_51_int);
	int var_42_int;
	var_51_int = var_42_int;
	int var_43_int = 0;
	
	for(;;) {
		bool var_64_bool = false;
		if(var_43_int < 5) {
			bool var_67_bool;
			func_1690(var_67_bool);
			if(var_67_bool != 0)
				var_64_bool = true;
		}
		if(var_64_bool != 0) {
			@irand(var_44_int, 3);
			if(var_44_int == 0) {
				if(var_42_int == 0) goto Label_238;
				@irand(var_45_int, var_42_int);
				string var_73_string; int var_74_int;
				var_45_int = var_74_int;
				func_1830(var_73_string, var_74_int);
				@PlayAnimation("all", var_73_string);
				@WaitForAnimEnd(var_46_bool);
				if(!var_46_bool) { //@nz
				} else {
			} else {
			if(var_44_int == 1) {
				@rand(var_47_float, 4);
				@Sleep((var_47_float + 1), var_48_bool);
				if(!var_48_bool) { //@nz
					goto Label_267;
				}
			} else if(var_43_int != 0) {
				goto Label_267;
			}
			}
					bool var_76_bool;
					func_270(var_76_bool);
					var_77_bool = !var_76_bool; //@nz
					if(var_77_bool == 0) goto Label_262;
			}
		}
	Label_267:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_262:
		@ResetAAS();
		var_43_int += 1;
	}
	
}


void func_959(bool var_496_bool)
{
	var_496_bool = true;
}


void func_961(int var_388_int)
{
	var_388_int = 1;
}


// @pe
void func_1218(bool var_27_bool, object var_28_object)
{
	object var_30_object;
	var_28_object = var_30_object;
	bool var_29_bool;
	func_1529(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
}


void func_963(float var_383_float)
{
	var_383_float = 0.5;
}


void func_1597(object var_20_object, int var_21_int, float var_22_float)
{
	cvector var_32_cvector; object var_33_object; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	bool var_41_bool = false;
	bool var_42_bool = false;
	if(var_20_object != 0) {
		if(var_21_int != 4)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(var_21_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		cvector var_48_cvector; cvector var_49_cvector;
		cvector var_50_cvector; object var_51_object;
		var_20_object = var_51_object;
		func_1383(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_1753(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_1659:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_1553(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_1659;
	int var_39_int;
	@irand(var_39_int, var_38_int);
	cvector var_40_cvector;
	var_33_object->get(var_40_cvector, var_39_int);
	object var_65_object; int var_66_int; float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	var_20_object = var_65_object;
	var_21_int = var_66_int;
	var_22_float = var_67_float;
	var_40_cvector = var_68_cvector;
	var_69_cvector = -var_32_cvector;
	func_1665(var_67_float, var_68_cvector, var_69_cvector);
}


// @pe
void func_1854(object var_17_object)
{
	bool var_18_bool;
	func_1798(var_18_bool, "quest_d1_03", "butcher_death");
	object var_24_object;
	var_17_object = var_24_object;
	TaskCall(3);
	func_1237(var_24_object);
	TaskReturn();
}


void func_841(bool var_307_bool)
{
	bool var_308_bool = false;
	bool var_309_bool;
	func_813(var_308_bool, var_309_bool);
	if(var_309_bool != 0) {
		bool var_326_bool;
		func_857(var_307_bool, var_308_bool, var_326_bool);
		if(var_326_bool != 0)
			var_308_bool = true;
	}
	if(var_308_bool != 0) {
		var_307_bool = true;
		return 0;
	}
	var_307_bool = false;
}


void func_1225(string var_206_string)
{
	var_206_string = "walk";
}


void func_1227(string var_207_string)
{
	var_207_string = "run";
}


void func_973(bool var_2_bool, bool var_137_bool, object var_138_object, float var_139_float, float var_140_float, bool var_141_bool, bool var_142_bool)
{
	object var_150_object;
	func_1810(var_150_object);
	@SetTimer(1, 5);
	bool var_148_bool;
	@CanSee(var_148_bool, var_150_object);
	if(var_148_bool != 0) {
		var_2_bool = true;
		object var_154_object;
		var_138_object = var_154_object;
		func_1695(var_154_object);
	} else {
		var_2_bool = false;
	}
	bool var_161_bool; object var_162_object;
	func_1398(var_161_bool, var_162_object);
	if(var_161_bool != 0) {
		object var_165_object;
		func_1747(var_165_object);
		@SendPlayerEnemy(var_162_object, var_165_object);
	}
	bool var_166_bool; object var_167_object; float var_168_float; float var_169_float; bool var_170_bool; bool var_171_bool;
	var_138_object = var_167_object;
	var_139_float = var_168_float;
	var_140_float = var_169_float;
	var_141_bool = var_170_bool;
	var_142_bool = var_171_bool;
	bool var_149_bool;
	func_1078(var_148_bool, var_149_bool, var_166_bool, var_167_object, var_168_float, var_169_float, var_170_bool, var_171_bool);
	var_166_bool = var_149_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_149_bool = var_137_bool;
	
}


void func_1488(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


// @pe
void func_81(string var_529_string)
{
	if(var_529_string == "cleanup")
		func_61(var_529_string);
}


void func_1747(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_1493(bool var_33_bool, object var_34_object)
{
	if(var_34_object == null) {
		var_33_bool = false;
		return 4;
	}
	bool var_40_bool = false;
	var_43_bool = IsFuncExist(var_34_object, "IsDead", 1);
	if(var_43_bool != 0) {
		bool var_44_bool; object var_45_object;
		var_34_object = var_45_object;
		func_1488(var_44_bool, var_45_object);
		if(var_44_bool != 0)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		var_33_bool = false;
		return 4;
	}
	object var_37_object;
	@GetScene(var_37_object);
	if(var_37_object == null) {
		var_33_bool = false;
		return 4;
	}
	object var_38_object;
	var_34_object->GetScene(var_38_object);
	if(var_37_object != var_38_object) {
		var_33_bool = false;
		return 4;
	}
	var_33_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1237(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_1246(var_25_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_857(int var_0_int, object var_4_object, bool var_326_bool)
{
	object var_332_object; float var_334_float; cvector var_335_cvector; cvector var_336_cvector;
	@GetScene(var_332_object);
	bool var_333_bool = false;
	
	for(;;) {
		cvector var_337_cvector;
		func_1383(var_337_cvector, var_0_int);
		var_343_int = -var_337_cvector;
		@FindDirLength(var_334_float, var_343_int, var_4_object);
		if(var_334_float < var_4_object) {
		} else {
				@Face(var_0_int);
				@PlayAnimation("all", "bjump");
				var_0_int->GetPFPosition(var_335_cvector); //@t
				@GetPFPosition(var_336_cvector);
				@WaitForAnimEnd();
				func_945(var_336_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_333_bool = true;
				bool var_348_bool;
				func_813(var_336_cvector, var_348_bool);
				var_349_bool = !var_348_bool; //@nz
				if(var_349_bool == 0) goto Label_898;
		}
		for(;;) {
			var_333_bool = var_326_bool;

		}

	Label_898:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_1369(string var_434_string, int var_435_int)
{
	if(var_435_int == 2) {
		var_434_string = "fire";
		return 0;
	EMIT "GOTO 0x565";
	}
	if(var_435_int == 1) {
		var_434_string = "bullet";
		return 0;
	}
	var_434_string = "phys";
}


void func_1753(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


void func_606(int var_0_int, int var_1_int, bool var_355_bool, float var_356_float)
{
	string var_364_string;
	func_945(var_364_string);
	int var_361_int;
	@irand(var_361_int, var_1_int);
	@Face(var_0_int);
	@SetAttackState(true);
	func_1819();
	@PlayAnimation("all", ("attack_begin" + (var_361_int + 1)));
	@WaitForAnimEnd();
	int var_363_int;
	func_913(var_363_int, var_364_string);
	bool var_389_bool;
	func_1529(var_389_bool, var_0_int);
	if(!var_389_bool) { //@nz
		@StopAsync();
		var_355_bool = false;
		return 8;
	}
	float var_392_float; int var_393_int;
	var_356_float = var_392_float;
	var_361_int = var_393_int;
	func_567(var_364_string, var_392_float, var_393_int);
	bool var_362_bool;
	@HasAnimation(var_362_bool, "all", ("attack_middle" + var_361_int));
	if(var_362_bool != 0) {
		func_1819();
		@PlayAnimation("all", ("attack_middle" + var_361_int));
		@WaitForAnimEnd();
		func_945(var_364_string);
		bool var_481_bool;
		func_1529(var_481_bool, var_0_int);
		if(!var_481_bool) { //@nz
			@StopAsync();
			var_355_bool = false;
			return 8;
		}
		float var_484_float; int var_485_int;
		var_356_float = var_484_float;
		func_567(var_364_string, var_484_float, var_485_int);
		var_363_int = 1;

		for(;;) {
			var_364_string = (("attack_middle" + var_485_int) + "_") + var_363_int;
			@HasAnimation(var_362_bool, "all", var_364_string);
			if(!var_362_bool) { //@nz
			} else {
				func_1819();
				@PlayAnimation("all", var_364_string);
				@WaitForAnimEnd();
				func_945(var_364_string);
				bool var_507_bool;
				func_1529(var_507_bool, var_0_int);
				if(!var_507_bool) { //@nz
					@StopAsync();
					var_355_bool = false;
					return 8;
				}
				float var_510_float; int var_511_int;
				var_356_float = var_510_float;
				var_361_int = var_511_int;
				func_567(var_364_string, var_510_float, var_511_int);
				var_363_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_361_int));
		bool var_496_bool;
		func_959(var_496_bool);
		if(var_496_bool != 0) {
			bool var_497_bool;
			func_743(var_497_bool, 0.75);
			@StopAsync();
		}
		var_355_bool = true;
		return 8;

	}
}


void func_1246(object var_25_object)
{
	cvector var_36_cvector; cvector var_37_cvector; cvector var_38_cvector; cvector var_39_cvector; string var_40_string; object var_41_object; bool var_42_bool; bool var_43_bool; float var_44_float; cvector var_45_cvector;
	if(var_25_object == null) {
		func_1337("fdie");
	} else {
		var_25_object->GetPosition(var_36_cvector);
		@GetPosition(var_37_cvector);
		@GetDirection(var_38_cvector);
		var_39_cvector = var_37_cvector - var_36_cvector;
		var_79_float = GetByIndex(var_39_cvector, 0);
		var_80_float = GetByIndex(var_38_cvector, 0);
		var_82_float = GetByIndex(var_39_cvector, 2);
		var_83_float = GetByIndex(var_38_cvector, 2);
		if(((var_79_float * var_80_float) + (var_82_float * var_83_float)) >= 0)
			var_40_string = "fdie";
		else
			var_40_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_25_object = var_41_object;
		var_90_bool = IsFuncExist(var_25_object, "GetScriptProperty", 2);
		if(var_90_bool != 0) {
			var_25_object->HasScriptProperty(var_42_bool, "Owner");
			if(var_42_bool != 0) {
				var_25_object->GetScriptProperty(var_41_object, "Owner");
				if(var_41_object == null)
					var_25_object = var_41_object;
			}
		}
		var_97_bool = IsFuncExist(var_41_object, "@GetEyesHeight", 1);
		if(var_97_bool != 0) {
			var_41_object->GetEyesHeight(var_44_float);
			var_45_cvector = [0.0, 0.0, 0.0];
			var_98_float = GetByIndex(var_45_cvector, 1);
			var_44_float = var_98_float;
			SetByIndex(var_45_cvector, 1) = var_98_float;
			@LookAsync(var_25_object, "head", var_45_cvector);
			var_43_bool = true;
		} else {
			var_43_bool = false;

		}
		string var_100_string;
		var_40_string = var_100_string;
		func_1706(var_100_string);
		@PlayAnimation("all", var_40_string);
		@WaitForAnimEnd();
		if(var_43_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_40_string);
		@RemoveEnvelope();
		var_41_object = null;
	}
	
}


// @pe
void func_1763(float var_444_float, float var_445_float, float var_446_float)
{
	if(var_445_float < var_446_float)
		var_445_float = var_444_float;
	else
		var_446_float = var_444_float;
	
}


void func_743(bool var_497_bool, float var_498_float)
{
	float var_501_float; bool var_502_bool;
	@rand(var_501_float);
	if(var_501_float < var_498_float) {

		for(;;) {
			@IsAnimationPlaying(var_502_bool);
			if(!var_502_bool) { //@nz
			} else {
				bool var_505_bool;
				func_841(var_505_bool);
				if(var_505_bool != 0) {
					var_497_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_497_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_945(var_502_bool);
}


void func_1383(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


// @pe
void func_1770(float var_454_float, float var_455_float, float var_456_float, float var_457_float)
{
	if(var_455_float < var_456_float) {
		var_456_float = var_454_float;
		return 0;
	}
	if(var_455_float > var_457_float) {
		var_457_float = var_454_float;
		return 0;
	}
	var_455_float = var_454_float;
}


void func_110(bool var_22_bool)
{
	var_22_bool = true;
}


void func_1390(float var_23_float, object var_24_object)
{
	cvector var_28_cvector;
	@GetPosition(var_28_cvector);
	cvector var_29_cvector;
	var_24_object->GetPosition(var_29_cvector);
	var_23_float = (var_29_cvector - var_28_cvector) | (var_29_cvector - var_28_cvector);
}


// @pe
void func_112(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_26_float, float var_27_float)
{
	bool var_28_bool;
	func_1690(var_28_bool);
	if(!var_28_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_26_float;
	var_1_int = var_27_float;
	@SetTimer(10, 1.0);
	func_191();
	if(!false) //@nz
		@KillTimer(10);
}


void func_1781(float var_462_float)
{
	object var_464_object;
	@CreateFloatVector(var_464_object);
	var_464_object->add(var_462_float);
	if(var_462_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_464_object);
}
EMIT "Stack[-1] = 0";


void func_1398(bool var_161_bool, object var_162_object)
{
	bool var_164_bool;
	@IsPlayerActor(var_162_object, var_164_bool);
	var_164_bool = var_161_bool;
}


void func_1529(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_1493(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_1403(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


void func_1403(bool var_51_bool, object var_52_object, string var_53_string)
{
	var_58_bool = IsFuncExist(var_52_object, "HasProperty", 2);
	if(!var_58_bool) { //@nz
		var_51_bool = false;
		return 2;
	}
	bool var_55_bool;
	var_52_object->HasProperty(var_53_string, var_55_bool);
	var_55_bool = var_51_bool;
}


