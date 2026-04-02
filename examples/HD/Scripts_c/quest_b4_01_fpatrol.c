task task_0
{
	void OnLoad(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		@StopGroup0();
		@sync();
	}

}


maintask task_1
{
	void init(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
	{
		bool var_11_bool;
		func_1577(var_11_bool);
		if(!var_11_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		bool var_17_bool; string var_18_string;
		string var_20_string;
		func_1287(var_20_string, "path");
		var_20_string = var_18_string;
		func_57(var_10_bool, var_17_bool, var_18_string, 1);
	}

	// @pe
	void OnTrigger(int var_0_int, bool var_1_bool, string var_2_string, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		if(var_11_bool == "attack") {
			func_154(var_11_bool);
			TaskCall(2);
			func_160();
			TaskReturn();
		}
	}

	void OnAttacked(int var_0_int, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		bool var_13_bool;
		@IsPlayerActor(var_11_bool, var_13_bool);
		if(var_13_bool != 0) {
			bool var_15_bool;
			func_1705(var_15_bool, "quest_b4_01", "patrol_attack");
		}
	}

}


task task_2
{
}


task task_3
{
	// @pe
	void OnTimer(int iID, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int)
	{
		if(var_11_int == 1) {
			func_1717(var_1_bool);
		} else {
			int var_19_int;
			func_1054(var_10_bool, var_19_int, var_19_int);
		}
	
	}

	// @pe
	void OnSee(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		bool var_12_bool = false;
		if(var_1_bool == var_11_object) {
			if(!var_2_object) //@nz
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_object = true;
			object var_15_object;
			var_11_object = var_15_object;
			func_1582(var_15_object);
		}
	}

	// @pe
	void OnStopSee(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		bool var_12_bool = false;
		if(var_1_bool == var_11_object) {
			if(var_2_object != 0)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	// @pe
	void OnDeath(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		func_910(var_11_object);
		object var_16_object;
		var_11_object = var_16_object;
		func_1881();
	}

}


task task_4
{
	void OnUse(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			object var_15_object;
			var_11_object = var_15_object;
			func_1743(var_15_object);
		}
	}

	// @pe
	void OnHit(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
	{
	}

	// @pe
	void OnPropertyChange(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, string var_12_string)
	{
	}

	// @pe
	void OnDeath(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
	{
	}

}


void OnUnload(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool)
{
	object var_11_object;
	func_1649(var_11_object);
	@RemoveActor(var_11_object);
	@Hold();
}


// @pe
void OnHit(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1484(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
{
	object var_17_object;
	var_11_object = var_17_object;
	int var_18_int;
	var_12_int = var_18_int;
	float var_19_float;
	var_13_float = var_19_float;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	func_1552(var_19_float, var_20_cvector, var_21_cvector);
}


void OnPropertyChange(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(int var_0_int, bool var_1_bool, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_1805(var_12_object);
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_15_bool;
	func_1577(var_15_bool);
	if(!var_15_bool) goto Label_0; //@nz
}


// @pe
void func_1665(float var_434_float, float var_435_float, float var_436_float)
{
	if(var_435_float < var_436_float)
		var_435_float = var_434_float;
	else
		var_436_float = var_434_float;
	
}


void func_1287(string var_20_string, string var_21_string)
{
	string var_23_string;
	@GetProperty(var_21_string, var_23_string);
	var_23_string = var_20_string;
}


// @pe
void func_1672(float var_444_float, float var_445_float, float var_446_float, float var_447_float)
{
	if(var_445_float < var_446_float) {
		var_446_float = var_444_float;
		return 0;
	}
	if(var_445_float > var_447_float) {
		var_447_float = var_444_float;
		return 0;
	}
	var_445_float = var_444_float;
}


void func_652(int var_0_int, bool var_284_bool, float var_285_float)
{
	bool var_291_bool; cvector var_292_cvector; cvector var_293_cvector; cvector var_294_cvector; float var_295_float;
	
	for(;;) {
		@IsAnimationPlaying(var_291_bool);
		if(!var_291_bool) //@nz
			break;
		bool var_297_bool;
		func_723(var_297_bool);
		if(var_297_bool != 0) {
			var_284_bool = true;
			return 10;
		}
		bool var_340_bool;
		func_1406(var_340_bool, var_0_int);
		if(!var_340_bool) { //@nz
			var_284_bool = false;
			return 10;
		}
		var_0_int->GetPFPosition(var_292_cvector); //@t
		@GetPFPosition(var_293_cvector);
		var_294_cvector = var_292_cvector - var_293_cvector;
		var_295_float = var_294_cvector | var_294_cvector;
		if(var_295_float < (var_285_float * var_285_float)) {
			bool var_345_bool; float var_346_float;
			var_285_float = var_346_float;
			func_488(var_294_cvector, var_295_float, var_345_bool, var_346_float);
			var_284_bool = true;
			return 10;
		}
		@sync();
	}
	func_827(var_295_float);
	var_284_bool = false;
}


void func_1292(float var_396_float, object var_397_object, float var_398_float, int var_399_int)
{
	int var_409_int; int var_411_int;
	object var_416_object;
	var_397_object = var_416_object;
	bool var_415_bool;
	func_1275(var_415_bool, var_416_object, "health");
	if(!var_415_bool) //@nz
		var_396_float = 0.0;
	bool var_419_bool; object var_420_object;
	func_1275(var_419_bool, var_420_object, "armor");
	if(!var_419_bool) //@nz
		var_409_int = 0;
	else
		var_420_object->GetProperty("armor", var_409_int);
	string var_424_string; int var_425_int;
	var_399_int = var_425_int;
	func_1249(var_424_string, var_425_int);
	string var_410_string = "armor_" + var_424_string;
	bool var_430_bool; object var_431_object; string var_432_string;
	var_397_object = var_431_object;
	func_1275(var_430_bool, var_431_object, var_432_string);
	if(!var_430_bool) //@nz
		var_411_int = 0;
	else
		var_397_object->GetProperty(var_432_string, var_411_int);

	float var_434_float;
	func_1665(var_434_float, ((var_409_int + var_411_int) / 100.0), (float)1);
	float var_412_float;
	var_434_float = var_412_float;
	float var_413_float;
	var_397_object->GetProperty("health", var_413_float);
	float var_414_float = var_398_float * (1 - var_412_float);
	float var_444_float;
	func_1672(var_444_float, (var_413_float - var_414_float), (float)0, (float)1);
	var_397_object->SetProperty("health", var_444_float);
	bool var_450_bool; object var_451_object;
	var_397_object = var_451_object;
	func_1270(var_450_bool, var_451_object);
	if(var_450_bool != 0) {
		float var_452_float = -var_414_float;
		func_1688(var_452_float);
	}
	var_414_float = var_396_float;
	
}


void func_910(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1076(var_11_object);
}


void func_1805(object var_12_object)
{
	bool var_15_bool;
	func_1705(var_15_bool, "quest_b4_01", "patrol_dead");
	bool var_14_bool;
	@AddItem(var_14_bool, "revolver_ammo", 0, 4);
	@AddItem(var_14_bool, "meradorm", 0, 1);
	@AddItem(var_14_bool, "morfin", 0, 1);
	func_1593("alpha_pills", 2, 3, 5);
	func_1593("beta_pills", 2, 3, 4);
	func_1773();
	object var_70_object;
	var_12_object = var_70_object;
	TaskCall(4);
	func_1103(var_70_object);
	TaskReturn();
}


void func_784(int var_0_int, bool var_247_bool)
{
	bool var_249_bool;
	var_252_bool = IsFuncExist(var_0_int, "IsAttacking", 1);
	if(var_252_bool != 0) {
		var_0_int->IsAttacking(var_249_bool); //@t
		var_249_bool = var_247_bool;
	}
	var_247_bool = false;
}


void func_1552(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1440(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1683(bool var_38_bool, int var_39_int, int var_40_int)
{
	int var_42_int;
	@irand(var_42_int, var_40_int);
	var_38_bool = var_42_int < var_39_int;
}


void func_1430(bool var_53_bool, cvector var_54_cvector)
{
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	cvector var_59_cvector = var_54_cvector - var_58_cvector;
	var_61_float = GetByIndex(var_59_cvector, 0);
	var_62_float = GetByIndex(var_59_cvector, 2);
	bool var_60_bool;
	@Rotate(var_61_float, var_62_float, var_60_bool);
	var_60_bool = var_53_bool;
}


void func_1688(float var_452_float)
{
	object var_454_object;
	@CreateFloatVector(var_454_object);
	var_454_object->add(var_452_float);
	if(var_452_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_454_object);
}
EMIT "Stack[-1] = 0";


void func_154(bool var_1_bool)
{
	@Stop();
	var_1_bool = true;
}


void func_795(string var_2_string, int var_5_int)
{
	int var_367_int;
	if(!var_2_string) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_366_float;
	@rand(var_366_float);
	float var_373_float;
	func_845(var_373_float);
	if(var_366_float < var_373_float) {
		@irand(var_367_int, var_2_string);
		@Speak("attack" + (var_367_int + 1));
		int var_378_int;
		func_843(var_378_int);
		var_5_int = var_378_int;
	}
}


void func_414(bool var_1_bool, string var_2_string, int var_4_int)
{
	bool var_52_bool; bool var_53_bool; cvector var_54_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_52_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_52_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_string = 0;

		for(;;) {
			@IsExisting3DSound(var_53_bool, ("attack" + (var_2_string + 1)));
			if(!var_53_bool) //@nz
				break;
			var_2_string += 1;
		}
		@GetAnimationOffset(var_54_cvector, "all", "bjump");
		var_68_float = GetByIndex(var_54_cvector, 2);
		var_4_int = -var_68_float;

	}
}


// @pe
void func_158(void)
{
}


void func_160(void)
{
	object var_20_object; object var_21_object;
	@FindActor(var_21_object, "player");
	if(!var_21_object) { //@nz
	}
	for(;;) {
		object var_24_object;
		func_185(var_17_bool, var_18_float, var_19_int, var_20_object, var_24_object, var_24_object, true, 180.0);
		@Sleep(1);
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_1566(object var_230_object)
{
	cvector var_234_cvector;
	var_230_object->GetPosition(var_234_cvector);
	cvector var_235_cvector;
	@GetPosition(var_235_cvector);
	cvector var_236_cvector = var_234_cvector - var_235_cvector;
	var_237_float = GetByIndex(var_236_cvector, 0);
	var_238_float = GetByIndex(var_236_cvector, 2);
	@RotateAsync(var_237_float, var_238_float);
}


// @pe
void func_1054(int var_0_int, bool var_1_bool, int var_19_int)
{
	if(var_19_int != 0)
		return 0;
	bool var_22_bool;
	func_1092(var_22_bool, var_1_bool);
	if(!var_22_bool) //@nz
		var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_1440(object var_28_object)
{
	string var_42_string;
	if(var_28_object == null)
		return 14;
	bool var_36_bool;
	@IsDead(var_36_bool);
	if(var_36_bool != 0)
		return 14;
	int var_37_int;
	@GetSecondaryAnimationType(var_37_int);
	if(var_37_int < 0)
		return 14;
	cvector var_38_cvector;
	var_28_object->GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	if(((var_47_float * var_48_float) + (var_50_float * var_51_float)) >= 0)
		var_42_string = "fhit";
	else
		var_42_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_42_string + "1"), (var_42_string + "2"), -10);
	
}


void func_1577(bool var_11_bool)
{
	bool var_13_bool;
	@IsLoaded(var_13_bool);
	var_13_bool = var_11_bool;
}


void func_1705(bool var_15_bool, string var_16_string, string var_17_string)
{
	object var_19_object;
	@FindActor(var_19_object, var_16_string);
	if(var_19_object == null)
		var_15_bool = false;
	@Trigger(var_19_object, var_17_string);
	var_15_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1582(object var_15_object)
{
	float var_18_float;
	var_15_object->GetEyesHeight(var_18_float);
	cvector var_19_cvector = [0.0, 0.0, 0.0];
	var_20_float = GetByIndex(var_19_cvector, 1);
	var_18_float = var_20_float;
	SetByIndex(var_19_cvector, 1) = var_20_float;
	@LookAsync(var_15_object, "head", var_19_cvector);
}


// @pe
void func_179(float var_393_float)
{
	var_393_float = 0.2;
}


void func_1076(int var_0_int)
{
	var_0_int = true;
	@KillTimer(0);
	@Stop();
}


void func_1717(object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	if(var_16_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_182(int var_400_int)
{
	var_400_int = 0;
}


void func_695(int var_0_int, bool var_299_bool)
{
	cvector var_305_cvector; cvector var_306_cvector;
	bool var_310_bool;
	func_1406(var_310_bool, var_0_int);
	if(!var_310_bool) { //@nz
		var_299_bool = false;
		return 10;
	}
	bool var_313_bool;
	float var_309_float;
	func_784(var_309_float, var_313_bool);
	if(var_313_bool != 0) {
		var_0_int->GetPFPosition(var_305_cvector); //@t
		@GetPFPosition(var_306_cvector);
		var_0_int->GetAttackDistance(var_309_float); //@t
		var_299_bool = ((var_305_cvector - var_306_cvector) | (var_305_cvector - var_306_cvector)) <= ((var_309_float + 50) * (var_309_float + 50));
		return 10;
	}
	var_299_bool = false;
}


void func_952(int var_0_int, bool var_1_bool, bool var_156_bool, object var_157_object, float var_158_float, float var_159_float, bool var_160_bool, bool var_161_bool)
{
	bool var_170_bool; object var_172_object; cvector var_173_cvector; cvector var_174_cvector; float var_176_float; object var_177_object;
	var_0_int = false;
	var_1_bool = var_157_object;
	bool var_171_bool;
	var_161_bool = var_171_bool;
	
	for(;;) {
		bool var_178_bool; object var_179_object;
		var_157_object = var_179_object;
		func_1092(var_178_bool, var_179_object);
		if(!var_178_bool) { //@nz
			var_156_bool = false;
			return 16;
		}
		var_157_object->GetPosition(var_173_cvector);
		@GetPosition(var_174_cvector);
		var_176_float = (var_173_cvector - var_174_cvector) | (var_173_cvector - var_174_cvector);
		bool var_183_bool = false;
		if(var_159_float > 0) {
			if(var_176_float > (var_159_float * var_159_float))
				var_183_bool = true;
		}
		if(var_183_bool != 0) {
			@Stop();
			var_156_bool = false;
			return 16;
		}
		if(var_176_float > (var_158_float * var_158_float)) {
			var_157_object->GetPFPosition(var_173_cvector);
			@FindPathTo(var_177_object, var_173_cvector);
			if(var_177_object != null) {
				var_177_object = var_172_object;
				var_177_object = null;
			}
			if(var_172_object != null) {
				if(var_171_bool == 0) goto Label_1005;
				var_171_bool = false;
				@RotatePath(var_172_object, var_170_bool);
				if(!var_170_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_196_string;
						func_1099(var_196_string);
						string var_197_string;
						func_1101(var_197_string);
						@FollowPath(var_172_object, var_160_bool, var_170_bool, var_196_string, var_197_string);
						if(!var_170_bool) { //@nz
							if(var_0_int == 0) goto Label_1024;
							var_172_object = null;
						}
					EMIT "GOTO 0x401";

					Label_1024:
						} else {
					var_172_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_170_bool);
					if(!var_170_bool) { //@nz
						if(var_0_int != 0) {
							var_172_object = null;
							goto Label_1052;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1052;
		}
			var_177_object = null;
			goto Label_1050;

		Label_1050:
			var_172_object = null;

		}
	Label_1052:
		for(;;) {
			var_156_bool = !var_0_int;
			return 16;

			}
	}
	
}


void func_185(int var_0_int, object var_3_object, int var_5_int, object var_24_object, bool var_25_bool, float var_26_float, bool var_133_bool, bool var_225_bool)
{
	float var_38_float; cvector var_39_cvector; cvector var_40_cvector; bool var_42_bool; float var_45_float; cvector var_46_cvector; bool var_47_bool; float var_48_float;
	func_414(var_46_cvector, var_47_bool, var_48_float);
	var_5_int = 0;
	var_73_bool = IsFuncExist(var_24_object, "@GetAttackDistance", 1);
	if(var_73_bool != 0) {
		var_24_object->GetAttackDistance(var_38_float);
		var_38_float += 50;
	} else {
						var_26_float = var_38_float;
	}
	if(var_38_float >= 150)
		var_38_float = 150;
	var_3_object = false;
	var_0_int = var_24_object;
	bool var_41_bool;
	@IsPlayerActor(var_0_int, var_41_bool);
	if(var_41_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_79_object;
		func_1649(var_79_object);
		@SendPlayerEnemy(var_24_object, var_79_object);
	}
	if(var_25_bool != 0)
		var_42_bool = false;
	else
		var_42_bool = true;

	
Label_225:
	for(;;) {
		bool var_84_bool = false;
		bool var_85_bool;
		func_1406(var_85_bool, var_0_int);
		if(var_85_bool != 0) {
			if(!var_3_object) //@nz
				var_84_bool = true;
		}
		if(var_84_bool != 0) {
			func_827(var_48_float);
			var_0_int->GetPFPosition(var_39_cvector); //@t
			@GetPFPosition(var_40_cvector);
			var_45_float = (var_39_cvector - var_40_cvector) | (var_39_cvector - var_40_cvector);
			if(var_45_float >= ((400.0 + var_38_float) * (400.0 + var_38_float))) {
				bool var_127_bool; float var_129_float;
				var_38_float = var_129_float;
				TaskCall(3);
				func_847(var_135_bool, var_127_bool, var_0_int, var_129_float, 10000.0, true, false);
				TaskReturn();
				if(!var_133_bool) { //@nz
				} else {
					var_42_bool = false;
			} else {
			if(var_45_float >= (var_26_float * var_26_float)) {
				var_0_int->GetPFPosition(var_46_cvector); //@t
				@CanReachByPF(var_47_bool, var_46_cvector);
				if(!var_47_bool) { //@nz
					bool var_219_bool; float var_221_float;
					var_38_float = var_221_float;
					TaskCall(3);
					func_847(var_227_bool, var_219_bool, var_0_int, var_221_float, 10000.0, true, false);
					TaskReturn();
					if(!var_225_bool) { //@nz
						goto Label_397;
					}
					var_42_bool = false;
					goto Label_225;
				}
				if(!var_42_bool) { //@nz
					func_1566(var_0_int);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_827(var_48_float);
					@StopAsync();
					var_42_bool = true;
					bool var_241_bool;
					func_1406(var_241_bool, var_0_int);
					if(!var_241_bool) { //@nz
						goto Label_397;
					}
				}
				@rand(var_48_float);
				bool var_244_bool;
				var_246_bool = var_48_float < 0.25;
				if(var_246_bool != 1) {
					bool var_247_bool;
					func_784(true, var_247_bool);
					if(var_247_bool != 1)
						var_244_bool = false;
				}
				if(var_244_bool != 0) {
					@Face(var_0_int);
					func_834();
					@PlayAnimation("all", "attack_stay");
					bool var_284_bool; float var_285_float;
					func_652(var_48_float, var_284_bool, var_285_float);
					@StopAsync();
				} else {
					@Face(var_0_int);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_827(var_48_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_506_bool;
					func_784(var_48_float, var_506_bool);
					var_507_bool = !var_506_bool; //@nz
					if(var_507_bool == 0) goto Label_387;
					bool var_508_bool;
					func_1406(var_508_bool, var_0_int);
					if(!var_508_bool) { //@nz
						goto Label_397;
					}
					var_0_int->GetPFPosition(var_39_cvector); //@t
					@GetPFPosition(var_40_cvector);
					if(!(((var_39_cvector - var_40_cvector) | (var_39_cvector - var_40_cvector)) < (var_285_float * var_285_float))) goto Label_387;
					bool var_513_bool; float var_514_float;
					var_26_float = var_514_float;
					func_488(var_47_bool, var_48_float, var_513_bool, var_514_float);
					var_515_bool = !var_513_bool; //@nz
					if(var_515_bool == 0) goto Label_387;
					goto Label_397;
			}
				bool var_516_bool; float var_517_float;
				var_26_float = var_517_float;
				func_488(var_47_bool, var_48_float, var_516_bool, var_517_float);
				if(!var_516_bool) { //@nz
					goto Label_397;
				}
				var_42_bool = true;

			}
		Label_387:
			goto Label_396;
			}
			Label_396:
			}
		}
	Label_397:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_41_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_57(int var_0_int, bool var_17_bool, string var_18_string, int var_19_int)
{
	object var_34_object; bool var_35_bool; bool var_36_bool; cvector var_37_cvector; cvector var_38_cvector; bool var_39_bool; bool var_40_bool; cvector var_41_cvector; cvector var_42_cvector; bool var_43_bool;
	@GetScene(var_34_object);
	var_0_int = 0;
	
	for(;;) {
		var_34_object->GetLocator((var_18_string + (var_0_int + 1)), var_35_bool);
		if(!var_35_bool) { //@nz
			break;
		Label_76:
			for(;;) {
				if(!(var_19_int < var_0_int)) goto Label_111;
				var_34_object->GetLocator((var_18_string + (var_19_int + 1)), var_36_bool, var_37_cvector, var_38_cvector);
				bool var_53_bool; cvector var_54_cvector;
				func_1430(var_53_bool, var_54_cvector);
				if(var_53_bool == 0) goto Label_106;
				@MovePoint(var_54_cvector, 0, var_39_bool);
				if(var_39_bool == 0) goto Label_106;
				@WaitForAnimEnd(var_39_bool);
				if(var_39_bool == 0) goto Label_106;
				int var_66_int; cvector var_67_cvector; cvector var_68_cvector;
				var_19_int = var_66_int;
				var_37_cvector = var_67_cvector;
				var_38_cvector = var_68_cvector;
				func_158();
				var_19_int += 1;
			}

		Label_106:
			if(var_1_bool != 0) {
				var_17_bool = true;
				goto Label_76;
			}
			return 20;

		Label_111:
			var_19_int = var_0_int - 2;

		Label_113:
			for(;;) {
				if(!(var_19_int >= 0)) goto Label_149;
				var_34_object->GetLocator((var_18_string + (var_19_int + 1)), var_40_bool, var_41_cvector, var_42_cvector);
				bool var_77_bool; cvector var_78_cvector;
				func_1430(var_77_bool, var_78_cvector);
				if(var_77_bool == 0) goto Label_144;
				@MovePoint(var_78_cvector, 0, var_43_bool);
				if(var_43_bool == 0) goto Label_144;
				@WaitForAnimEnd(var_43_bool);
				if(var_43_bool == 0) goto Label_144;
				int var_82_int; cvector var_83_cvector; cvector var_84_cvector;
				var_19_int = var_82_int;
				var_41_cvector = var_83_cvector;
				var_42_cvector = var_84_cvector;
				func_158();
				var_19_int += -1;
			}

		Label_144:
			if(var_1_bool != 0) {
				var_17_bool = true;
				goto Label_113;
			}
			return 20;

		Label_149:
			var_19_int = 0;
			goto Label_76;
		}
		var_0_int += 1;
	}
	var_48_bool = !var_0_int; //@nz
	if(var_48_bool == 0) goto Label_76;
	var_17_bool = false;
}
EMIT "Stack[-23] = (bool) 1";
EMIT "Return(); Pop(20)";
EMIT "Stack[-10] = 0";


void func_827(int var_0_int)
{
	func_1717(var_0_int);
}


void func_1593(string var_30_string, int var_31_int, int var_32_int, int var_33_int)
{
	int var_36_int; bool var_37_bool;
	int var_39_int;
	var_31_int = var_39_int;
	int var_40_int;
	var_32_int = var_40_int;
	bool var_38_bool;
	func_1683(var_38_bool, var_39_int, var_40_int);
	if(var_38_bool != 0) {
		@irand(var_36_int, var_33_int);
		@AddItem(var_37_bool, var_30_string, 0, (var_36_int + 1));
	}
}


void func_1726(void)
{
	object var_358_object;
	@GetScene(var_358_object);
	object var_360_object;
	func_1649(var_360_object);
	@BroadcastMessage("battle", var_360_object, var_358_object);
}
EMIT "Stack[-1] = 0";


void func_832(int var_461_int)
{
	var_461_int = 0;
}


void func_449(int var_0_int, float var_382_float, int var_383_int)
{
	object var_387_object; float var_388_float; float var_389_float;
	@GetVictim((var_382_float * 0.9), var_387_object);
	@ReportAttack(var_0_int);
	if(var_387_object == var_0_int) {
		float var_393_float; object var_394_object; int var_395_int;
		var_387_object = var_394_object;
		var_383_int = var_395_int;
		func_179(var_395_int);
		var_393_float = var_388_float;
		float var_396_float; object var_397_object; float var_398_float; int var_399_int;
		var_387_object = var_397_object;
		int var_400_int; object var_401_object; int var_402_int;
		var_387_object = var_401_object;
		var_383_int = var_402_int;
		func_182(var_402_int);
		var_400_int = var_399_int;
		func_1292(var_396_float, var_397_object, var_398_float, var_399_int);
		var_396_float = var_389_float;
		int var_461_int;
		func_832(var_461_int);
		@ReportHit(var_0_int, var_461_int, var_389_float, var_398_float);
		object var_462_object; float var_463_float;
		var_387_object = var_462_object;
		var_389_float = var_463_float;
		func_839();
	}
}
EMIT "Stack[-3] = 0";


void func_834(void)
{
	func_1608("attack_stay");
}


// @pe
void func_1217(string var_93_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_94_string;
	var_93_string = var_94_string;
	func_1608(var_94_string);
	@PlayAnimation("all", var_93_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_93_string);
	@RemoveEnvelope();
}


// @pe
void func_1092(bool var_22_bool, object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	bool var_24_bool;
	func_1406(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
}


// @pe
void func_839(void)
{
}


void func_1608(string var_94_string)
{
	bool var_103_bool; int var_104_int; bool var_105_bool; int var_106_int; bool var_107_bool; float var_108_float; cvector var_109_cvector; cvector var_110_cvector;
	@IsExisting3DSound(var_103_bool, var_94_string);
	if(!var_103_bool) { //@nz
		var_104_int = 0;

		for(;;) {
			@IsExisting3DSound(var_105_bool, (var_94_string + (var_104_int + 1)));
			if(!var_105_bool) { //@nz
				break;
			Label_1628:
				@irand(var_106_int, var_104_int);
				var_94_string += (var_106_int + 1);
	}
			@Is3DSoundLoaded(var_107_bool, var_94_string);
			if(var_107_bool != 0) {
				@GetEyesHeight(var_108_float);
				@GetDirection(var_109_cvector);
				var_110_cvector = var_109_cvector * 50;
				var_121_float = GetByIndex(var_110_cvector, 1);
				SetByIndex(var_110_cvector, 1) = (var_121_float + var_108_float);
				@PlayGlobalSound(var_94_string, var_110_cvector);
			}
		}
		var_104_int += 1;
	}
	var_116_bool = !var_104_int; //@nz
	if(var_116_bool == 0) goto Label_1628;
}


void func_841(bool var_486_bool)
{
	var_486_bool = true;
}


void func_1737(int var_50_int)
{
	int var_52_int;
	@GetVariable("branch", var_52_int);
	var_52_int = var_50_int;
}


void func_843(int var_378_int)
{
	var_378_int = 1;
}


void func_1099(string var_196_string)
{
	var_196_string = "walk";
}


void func_845(float var_373_float)
{
	var_373_float = 0.5;
}


void func_1101(string var_197_string)
{
	var_197_string = "run";
}


void func_847(string var_2_string, bool var_127_bool, object var_128_object, float var_129_float, float var_130_float, bool var_131_bool, bool var_132_bool)
{
	object var_140_object;
	func_1717(var_140_object);
	@SetTimer(1, 5);
	bool var_138_bool;
	@CanSee(var_138_bool, var_140_object);
	if(var_138_bool != 0) {
		var_2_string = true;
		object var_144_object;
		var_128_object = var_144_object;
		func_1582(var_144_object);
	} else {
		var_2_string = false;
	}
	bool var_151_bool; object var_152_object;
	func_1270(var_151_bool, var_152_object);
	if(var_151_bool != 0) {
		object var_155_object;
		func_1649(var_155_object);
		@SendPlayerEnemy(var_152_object, var_155_object);
	}
	bool var_156_bool; object var_157_object; float var_158_float; float var_159_float; bool var_160_bool; bool var_161_bool;
	var_128_object = var_157_object;
	var_129_float = var_158_float;
	var_130_float = var_159_float;
	var_131_bool = var_160_bool;
	var_132_bool = var_161_bool;
	bool var_139_bool;
	func_952(var_138_bool, var_139_bool, var_156_bool, var_157_object, var_158_float, var_159_float, var_160_bool, var_161_bool);
	var_156_bool = var_139_bool;
	if(var_2_string != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_139_bool = var_127_bool;
	
}


// @pe
void func_1743(object var_15_object)
{
	int var_16_int;
	func_1737(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


// @pe
void func_1103(object var_70_object)
{
	object var_71_object;
	var_70_object = var_71_object;
	func_1126(var_71_object);
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1484(object var_15_object, int var_16_int, float var_17_float)
{
	cvector var_27_cvector; object var_28_object; int var_29_int; bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	bool var_36_bool = false;
	bool var_37_bool = false;
	if(var_15_object != 0) {
		if(var_16_int != 4)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		if(var_16_int != 5)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		cvector var_43_cvector; cvector var_44_cvector;
		cvector var_45_cvector; object var_46_object;
		var_15_object = var_46_object;
		func_1263(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1655(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1546:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1440(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1546;
	int var_34_int;
	@irand(var_34_int, var_33_int);
	cvector var_35_cvector;
	var_28_object->get(var_35_cvector, var_34_int);
	object var_60_object; int var_61_int; float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
	var_15_object = var_60_object;
	var_16_int = var_61_int;
	var_17_float = var_62_float;
	var_35_cvector = var_63_cvector;
	var_64_cvector = -var_27_cvector;
	func_1552(var_62_float, var_63_cvector, var_64_cvector);
}


void func_723(bool var_297_bool)
{
	bool var_298_bool = false;
	bool var_299_bool;
	func_695(var_298_bool, var_299_bool);
	if(var_299_bool != 0) {
		bool var_316_bool;
		func_739(var_297_bool, var_298_bool, var_316_bool);
		if(var_316_bool != 0)
			var_298_bool = true;
	}
	if(var_298_bool != 0) {
		var_297_bool = true;
		return 0;
	}
	var_297_bool = false;
}


void func_1365(bool var_39_bool, object var_40_object)
{
	bool var_42_bool;
	var_40_object->IsDead(var_42_bool);
	var_42_bool = var_39_bool;
}


void func_1370(bool var_28_bool, object var_29_object)
{
	if(var_29_object == null) {
		var_28_bool = false;
		return 4;
	}
	bool var_35_bool = false;
	var_38_bool = IsFuncExist(var_29_object, "IsDead", 1);
	if(var_38_bool != 0) {
		bool var_39_bool; object var_40_object;
		var_29_object = var_40_object;
		func_1365(var_39_bool, var_40_object);
		if(var_39_bool != 0)
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		var_28_bool = false;
		return 4;
	}
	object var_32_object;
	@GetScene(var_32_object);
	if(var_32_object == null) {
		var_28_bool = false;
		return 4;
	}
	object var_33_object;
	var_29_object->GetScene(var_33_object);
	if(var_32_object != var_33_object) {
		var_28_bool = false;
		return 4;
	}
	var_28_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1756(string var_56_string)
{
	object var_60_object;
	@CreateInvItem(var_60_object);
	var_60_object->SetItemName(var_56_string);
	var_60_object->SetProperty("Organ", 1);
	int var_61_int;
	var_60_object->GetItemID(var_61_int);
	bool var_62_bool;
	@AddItem(var_62_bool, var_60_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_1249(string var_424_string, int var_425_int)
{
	if(var_425_int == 2) {
		var_424_string = "fire";
		return 0;
	EMIT "GOTO 0x4ed";
	}
	if(var_425_int == 1) {
		var_424_string = "bullet";
		return 0;
	}
	var_424_string = "phys";
}


void func_739(int var_0_int, int var_4_int, bool var_316_bool)
{
	object var_322_object; float var_324_float; cvector var_325_cvector; cvector var_326_cvector;
	@GetScene(var_322_object);
	bool var_323_bool = false;
	
	for(;;) {
		cvector var_327_cvector;
		func_1263(var_327_cvector, var_0_int);
		var_333_int = -var_327_cvector;
		@FindDirLength(var_324_float, var_333_int, var_4_int);
		if(var_324_float < var_4_int) {
		} else {
				@Face(var_0_int);
				@PlayAnimation("all", "bjump");
				var_0_int->GetPFPosition(var_325_cvector); //@t
				@GetPFPosition(var_326_cvector);
				@WaitForAnimEnd();
				func_827(var_326_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_323_bool = true;
				bool var_338_bool;
				func_695(var_326_cvector, var_338_bool);
				var_339_bool = !var_338_bool; //@nz
				if(var_339_bool == 0) goto Label_780;
		}
		for(;;) {
			var_323_bool = var_316_bool;

		}

	Label_780:
	}
}
EMIT "Stack[-5] = 0";


void func_1126(object var_71_object)
{
	cvector var_82_cvector; cvector var_83_cvector; cvector var_84_cvector; cvector var_85_cvector; string var_86_string; object var_87_object; bool var_88_bool; bool var_89_bool; float var_90_float; cvector var_91_cvector;
	if(var_71_object == null) {
		func_1217("fdie");
	} else {
		var_71_object->GetPosition(var_82_cvector);
		@GetPosition(var_83_cvector);
		@GetDirection(var_84_cvector);
		var_85_cvector = var_83_cvector - var_82_cvector;
		var_125_float = GetByIndex(var_85_cvector, 0);
		var_126_float = GetByIndex(var_84_cvector, 0);
		var_128_float = GetByIndex(var_85_cvector, 2);
		var_129_float = GetByIndex(var_84_cvector, 2);
		if(((var_125_float * var_126_float) + (var_128_float * var_129_float)) >= 0)
			var_86_string = "fdie";
		else
			var_86_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_71_object = var_87_object;
		var_136_bool = IsFuncExist(var_71_object, "GetScriptProperty", 2);
		if(var_136_bool != 0) {
			var_71_object->HasScriptProperty(var_88_bool, "Owner");
			if(var_88_bool != 0) {
				var_71_object->GetScriptProperty(var_87_object, "Owner");
				if(var_87_object == null)
					var_71_object = var_87_object;
			}
		}
		var_143_bool = IsFuncExist(var_87_object, "@GetEyesHeight", 1);
		if(var_143_bool != 0) {
			var_87_object->GetEyesHeight(var_90_float);
			var_91_cvector = [0.0, 0.0, 0.0];
			var_144_float = GetByIndex(var_91_cvector, 1);
			var_90_float = var_144_float;
			SetByIndex(var_91_cvector, 1) = var_144_float;
			@LookAsync(var_71_object, "head", var_91_cvector);
			var_89_bool = true;
		} else {
			var_89_bool = false;

		}
		string var_146_string;
		var_86_string = var_146_string;
		func_1608(var_146_string);
		@PlayAnimation("all", var_86_string);
		@WaitForAnimEnd();
		if(var_89_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_86_string);
		@RemoveEnvelope();
		var_87_object = null;
	}
	
}


void func_488(int var_0_int, bool var_1_bool, bool var_345_bool, float var_346_float)
{
	string var_354_string;
	func_827(var_354_string);
	int var_351_int;
	@irand(var_351_int, var_1_bool);
	@Face(var_0_int);
	@SetAttackState(true);
	func_1726();
	@PlayAnimation("all", ("attack_begin" + (var_351_int + 1)));
	@WaitForAnimEnd();
	int var_353_int;
	func_795(var_353_int, var_354_string);
	bool var_379_bool;
	func_1406(var_379_bool, var_0_int);
	if(!var_379_bool) { //@nz
		@StopAsync();
		var_345_bool = false;
		return 8;
	}
	float var_382_float; int var_383_int;
	var_346_float = var_382_float;
	var_351_int = var_383_int;
	func_449(var_354_string, var_382_float, var_383_int);
	bool var_352_bool;
	@HasAnimation(var_352_bool, "all", ("attack_middle" + var_351_int));
	if(var_352_bool != 0) {
		func_1726();
		@PlayAnimation("all", ("attack_middle" + var_351_int));
		@WaitForAnimEnd();
		func_827(var_354_string);
		bool var_471_bool;
		func_1406(var_471_bool, var_0_int);
		if(!var_471_bool) { //@nz
			@StopAsync();
			var_345_bool = false;
			return 8;
		}
		float var_474_float; int var_475_int;
		var_346_float = var_474_float;
		func_449(var_354_string, var_474_float, var_475_int);
		var_353_int = 1;

		for(;;) {
			var_354_string = (("attack_middle" + var_475_int) + "_") + var_353_int;
			@HasAnimation(var_352_bool, "all", var_354_string);
			if(!var_352_bool) { //@nz
			} else {
				func_1726();
				@PlayAnimation("all", var_354_string);
				@WaitForAnimEnd();
				func_827(var_354_string);
				bool var_497_bool;
				func_1406(var_497_bool, var_0_int);
				if(!var_497_bool) { //@nz
					@StopAsync();
					var_345_bool = false;
					return 8;
				}
				float var_500_float; int var_501_int;
				var_346_float = var_500_float;
				var_351_int = var_501_int;
				func_449(var_354_string, var_500_float, var_501_int);
				var_353_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_351_int));
		bool var_486_bool;
		func_841(var_486_bool);
		if(var_486_bool != 0) {
			bool var_487_bool;
			func_625(var_487_bool, 0.75);
			@StopAsync();
		}
		var_345_bool = true;
		return 8;

	}
}


void func_1773(void)
{
	int var_50_int;
	func_1737(var_50_int);
	if(var_50_int != 1) {
	}
	func_1756("liver");
	func_1756("kidney");
	func_1756("heart");
	func_1756("blood");
}


void func_1263(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_1649(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_625(bool var_487_bool, float var_488_float)
{
	float var_491_float; bool var_492_bool;
	@rand(var_491_float);
	if(var_491_float < var_488_float) {

		for(;;) {
			@IsAnimationPlaying(var_492_bool);
			if(!var_492_bool) { //@nz
			} else {
				bool var_495_bool;
				func_723(var_495_bool);
				if(var_495_bool != 0) {
					var_487_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_487_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_827(var_492_bool);
}


void func_1270(bool var_151_bool, object var_152_object)
{
	bool var_154_bool;
	@IsPlayerActor(var_152_object, var_154_bool);
	var_154_bool = var_151_bool;
}


void func_1655(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


void func_1275(bool var_46_bool, object var_47_object, string var_48_string)
{
	var_53_bool = IsFuncExist(var_47_object, "HasProperty", 2);
	if(!var_53_bool) { //@nz
		var_46_bool = false;
		return 2;
	}
	bool var_50_bool;
	var_47_object->HasProperty(var_48_string, var_50_bool);
	var_50_bool = var_46_bool;
}


void func_1406(bool var_24_bool, object var_25_object)
{
	object var_29_object;
	var_25_object = var_29_object;
	bool var_28_bool;
	func_1370(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_24_bool = false;
		return 2;
	}
	bool var_46_bool; object var_47_object;
	func_1275(var_46_bool, var_47_object, "noaccess");
	if(!var_46_bool) { //@nz
		var_24_bool = true;
		return 2;
	}
	int var_27_int;
	var_47_object->GetProperty("noaccess", var_27_int);
	var_24_bool = var_27_int == 0;
}


