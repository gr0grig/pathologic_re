// @GLOBALS: 0:object:

maintask task_0
{
	// @pe
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int)
	{
		func_2455();
		func_2250();
	
		for(;;) {
			func_74(var_9_float, var_10_int);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		bool var_12_bool; object var_13_object;
		func_2475(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_145(var_10_float, var_13_object);
			object var_76_object;
			var_11_int = var_76_object;
			func_2482(var_76_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		bool var_12_bool; object var_13_object;
		func_2462(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_145(var_10_float, var_13_object);
			object var_76_object;
			var_11_int = var_76_object;
			func_2469(var_76_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1609(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2499(var_130_object);
		}
		func_145(var_13_int, var_100_object);
		object var_145_object;
		var_100_object = var_145_object;
		func_2523(var_145_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_17_bool;
		var_13_int = var_17_bool;
		bool var_14_bool;
		func_2602(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_bool = var_100_object;
			func_41();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		@RequestClearPath(var_11_int);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		func_145(var_10_float, var_11_int);
		object var_12_object;
		var_11_int = var_12_object;
		func_2596();
	}

}


task task_1
{
	// @pe
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		func_316();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		object var_13_object;
		var_11_int = var_13_object;
		bool var_12_bool;
		func_2475(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_316();
			object var_76_object;
			var_11_int = var_76_object;
			func_2482(var_76_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		object var_13_object;
		var_11_int = var_13_object;
		bool var_12_bool;
		func_2462(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_316();
			object var_76_object;
			var_11_int = var_76_object;
			func_2469(var_76_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1609(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2499(var_130_object);
		}
		func_316();
		object var_145_object;
		var_100_object = var_145_object;
		func_2523(var_145_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_17_bool;
		var_13_int = var_17_bool;
		bool var_14_bool;
		func_2602(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_bool = var_100_object;
			func_202();
		}
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		object var_12_object;
		var_11_int = var_12_object;
		func_2499(var_12_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_17_bool;
		var_13_int = var_17_bool;
		bool var_14_bool;
		func_2602(var_14_bool, var_15_object, var_16_object, var_17_bool);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, int var_5_int, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		if(var_11_int == 1) {
			func_1917(var_1_bool);
		} else {
			int var_19_int;
			func_542(var_10_float, var_19_int, var_19_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		bool var_12_bool = false;
		if(var_1_bool == var_11_int) {
			if(!var_2_bool) //@nz
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_bool = true;
			object var_15_object;
			var_11_int = var_15_object;
			func_1775(var_15_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		bool var_12_bool = false;
		if(var_1_bool == var_11_int) {
			if(var_2_bool != 0)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		@RequestClearPath(var_11_int);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int)
	{
		func_398(var_11_int);
		object var_16_object;
		var_11_int = var_16_object;
		func_2596();
	}

}


task task_3
{
	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object)
	{
		object var_12_object;
		var_11_object = var_12_object;
		func_2499(var_12_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_17_bool;
		var_13_bool = var_17_bool;
		bool var_14_bool;
		func_2602(var_14_bool, var_15_object, var_16_object, var_17_bool);
	}

}


task task_4
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			object var_15_object;
			var_11_object = var_15_object;
			func_1967(var_15_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object, string var_12_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1677(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
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
	func_1745(var_19_float, var_20_cvector, var_21_cvector);
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object, string var_12_string)
{
	if(var_12_string == "prc")
		@ResetAAS();
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_2538(var_12_object);
}


void func_2052(void)
{
	@ClearSubContainer(0);
	int var_33_int;
	func_1908(var_33_int);
	int var_31_int;
	var_33_int = var_31_int;
	func_1980(0, (100 + (var_31_int * 100)));
	func_1786("tourniquet", 1, 7);
	func_1786("bandage", 1, 7);
	func_1786("packet", 1, 10);
	func_1786("bottle_water", 1, 3);
	func_1797("rusk", 1, 3, 4);
	func_1786("hook", 1, 20);
	func_1786("watch", 1, 20);
	bool var_101_bool = false;
	if(var_31_int >= 3) {
		if(var_31_int < 6)
			var_101_bool = true;
	}
	if(var_101_bool != 0)
		func_1797("alpha_pills", 1, 2, 3);
	if(var_31_int >= 4)
		func_1797("beta_pills", 1, 4, 3);
	if(var_31_int >= 6) {
		func_1797("alpha_pills", 1, 2, 8);
		func_1797("gamma_pills", 1, 8, 3);
	}
	if(var_31_int >= 8) {
		func_1786("revolver_ammo", 1, 3);
		func_1786("rifle_ammo", 1, 3);
	}
	int var_134_int;
	func_2314(var_134_int, "patrol_mark");
	bool var_30_bool;
	@AddItem(var_30_bool, var_134_int, 0, 1);
}


// @pe
void func_542(bool var_0_bool, bool var_1_bool, int var_19_int)
{
	if(var_19_int != 0)
		return 0;
	bool var_22_bool;
	func_580(var_22_bool, var_1_bool);
	if(!var_22_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1568(bool var_39_bool, object var_40_object)
{
	bool var_42_bool;
	var_40_object->IsDead(var_42_bool);
	var_42_bool = var_39_bool;
}


void func_1059(bool var_578_bool, float var_579_float)
{
	float var_582_float; bool var_583_bool;
	@rand(var_582_float);
	if(var_582_float < var_579_float) {

		for(;;) {
			@IsAnimationPlaying(var_583_bool);
			if(!var_583_bool) { //@nz
			} else {
				bool var_586_bool;
				func_1157(var_586_bool);
				if(var_586_bool != 0) {
					var_578_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_578_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1261(var_583_bool);
}


void func_1573(bool var_28_bool, object var_29_object)
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
		func_1568(var_39_bool, var_40_object);
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


void func_2602(bool var_14_bool, object var_15_object, object var_16_object, bool var_17_bool)
{
	bool var_19_bool;
	object var_21_object;
	var_16_object = var_21_object;
	bool var_20_bool;
	func_2319(var_20_bool, var_21_object, !var_17_bool);
	if(var_20_bool != 0) {
		@CanSee(var_19_bool, var_15_object);
		bool var_88_bool = true;
		if(var_19_bool != 1) {
			float var_90_float; object var_91_object;
			var_15_object = var_91_object;
			func_1470(var_90_float, var_91_object);
			var_99_bool = var_90_float <= 160000.0;
			if(var_99_bool != 1)
				var_88_bool = false;
		}
		if(var_88_bool != 0)
			var_14_bool = true;
	}
	var_14_bool = false;
}


void func_564(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1086(bool var_0_bool, bool var_379_bool, float var_380_float)
{
	bool var_386_bool; cvector var_387_cvector; cvector var_388_cvector; cvector var_389_cvector; float var_390_float;
	
	for(;;) {
		@IsAnimationPlaying(var_386_bool);
		if(!var_386_bool) //@nz
			break;
		bool var_392_bool;
		func_1157(var_392_bool);
		if(var_392_bool != 0) {
			var_379_bool = true;
			return 10;
		}
		bool var_435_bool;
		func_1609(var_435_bool, var_0_bool);
		if(!var_435_bool) { //@nz
			var_379_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_387_cvector); //@t
		@GetPFPosition(var_388_cvector);
		var_389_cvector = var_387_cvector - var_388_cvector;
		var_390_float = var_389_cvector | var_389_cvector;
		if(var_390_float < (var_380_float * var_380_float)) {
			bool var_440_bool; float var_441_float;
			var_380_float = var_441_float;
			func_922(var_389_cvector, var_390_float, var_440_bool, var_441_float);
			var_379_bool = true;
			return 10;
		}
		@sync();
	}
	func_1261(var_390_float);
	var_379_bool = false;
}


// @pe
void func_580(bool var_22_bool, object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	bool var_24_bool;
	func_1609(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
}


void func_2628(bool var_14_bool, object var_15_object)
{
	float var_20_float; string var_21_string;
	bool var_22_bool; object var_23_object;
	func_1609(var_22_bool, var_23_object);
	if(!var_22_bool) { //@nz
		var_14_bool = false;
		return 6;
	}
	var_57_object = GlobalVars[0];
	bool var_19_bool;
	var_57_object->in(var_19_bool, var_23_object);
	if(var_19_bool != 0) {
		var_14_bool = true;
		return 6;
	}
	bool var_59_bool; object var_60_object;
	func_1478(var_59_bool, var_60_object);
	if(var_59_bool != 0) {
		var_60_object->GetProperty("reputation", var_20_float);
		var_14_bool = var_20_float < 0.33;
		return 6;
	}
	bool var_65_bool; object var_66_object;
	func_1483(var_65_bool, var_66_object, "class");
	if(var_65_bool != 0) {
		var_66_object->GetProperty("class", var_21_string);
		var_14_bool = true;
		bool var_69_bool = true;
		var_71_bool = var_21_string == "bomber";
		if(var_71_bool != 1) {
			var_73_bool = var_21_string == "hunter";
			if(var_73_bool != 1)
				var_69_bool = false;
		}
		if(var_69_bool != 1) {
			var_75_bool = var_21_string == "grabitel";
			if(var_75_bool != 1)
				var_14_bool = false;
		}
		return 6;
	}
	var_14_bool = false;
}


void func_1609(bool var_24_bool, object var_25_object)
{
	object var_29_object;
	var_25_object = var_29_object;
	bool var_28_bool;
	func_1573(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_24_bool = false;
		return 2;
	}
	bool var_46_bool; object var_47_object;
	func_1483(var_46_bool, var_47_object, "noaccess");
	if(!var_46_bool) { //@nz
		var_24_bool = true;
		return 2;
	}
	int var_27_int;
	var_47_object->GetProperty("noaccess", var_27_int);
	var_24_bool = var_27_int == 0;
}


void func_74(bool var_0_bool, bool var_1_bool)
{
	float var_82_float; cvector var_83_cvector; cvector var_84_cvector; bool var_85_bool; object var_86_object; bool var_87_bool;
	@rand(var_82_float, 0.5);
	@Sleep(var_82_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_86:
				@GetPosition(var_84_cvector);
				float var_91_float;
				func_133(var_91_float);
				@GetRandomPFPointInCircle(var_83_cvector, var_84_cvector, var_91_float, var_85_bool);
				if(var_85_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_86;
			}
				var_1_bool = false;
		}
		}
		goto Label_102;

	Label_102:
		object var_95_object; cvector var_96_cvector;
		var_83_cvector = var_96_cvector;
		func_163(var_95_object, var_96_cvector);
		var_95_object = var_86_object;
		if(var_86_object != null) {
			@RotatePath(var_86_object, var_87_bool);
			if(var_87_bool != 0) {
				bool var_101_bool;
				func_161(var_101_bool);
				@FollowPath(var_86_object, var_101_bool, var_87_bool);
				var_86_object = null;
				if(var_87_bool != 0) {
					TaskCall(1);
					func_235();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_86_object = null;
	}
	
}


void func_587(string var_291_string)
{
	var_291_string = "walk";
}


void func_589(string var_292_string)
{
	var_292_string = "run";
}


// @pe
void func_591(object var_147_object, bool var_148_bool)
{
	object var_155_object; bool var_156_bool;
	func_619(var_152_bool, var_153_float, var_154_int, var_155_object, var_156_bool, var_155_object, var_156_bool, 180.0);
}


// @pe
void func_599(float var_488_float)
{
	var_488_float = 0.1;
}


// @pe
void func_602(int var_495_int)
{
	var_495_int = 0;
}


void func_1633(object var_28_object)
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


void func_1129(bool var_0_bool, bool var_394_bool)
{
	cvector var_400_cvector; cvector var_401_cvector;
	bool var_405_bool;
	func_1609(var_405_bool, var_0_bool);
	if(!var_405_bool) { //@nz
		var_394_bool = false;
		return 10;
	}
	bool var_408_bool;
	float var_404_float;
	func_1218(var_404_float, var_408_bool);
	if(var_408_bool != 0) {
		var_0_bool->GetPFPosition(var_400_cvector); //@t
		@GetPFPosition(var_401_cvector);
		var_0_bool->GetAttackDistance(var_404_float); //@t
		var_394_bool = ((var_400_cvector - var_401_cvector) | (var_400_cvector - var_401_cvector)) <= ((var_404_float + 50) * (var_404_float + 50));
		return 10;
	}
	var_394_bool = false;
}


void func_619(bool var_0_bool, object var_3_object, bool var_5_bool, object var_155_object, bool var_156_bool, float var_157_float, bool var_230_bool, bool var_320_bool)
{
	float var_169_float; cvector var_170_cvector; cvector var_171_cvector; bool var_173_bool; float var_176_float; cvector var_177_cvector; bool var_178_bool; float var_179_float;
	func_848(var_177_cvector, var_178_bool, var_179_float);
	var_5_bool = 0;
	var_204_bool = IsFuncExist(var_155_object, "@GetAttackDistance", 1);
	if(var_204_bool != 0) {
		var_155_object->GetAttackDistance(var_169_float);
		var_169_float += 50;
	} else {
						var_157_float = var_169_float;
	}
	if(var_169_float >= 150)
		var_169_float = 150;
	var_3_object = false;
	var_0_bool = var_155_object;
	bool var_172_bool;
	@IsPlayerActor(var_0_bool, var_172_bool);
	if(var_172_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_210_object;
		func_1853(var_210_object);
		@SendPlayerEnemy(var_155_object, var_210_object);
	}
	if(var_156_bool != 0)
		var_173_bool = false;
	else
		var_173_bool = true;

	
Label_659:
	for(;;) {
		bool var_213_bool = false;
		bool var_214_bool;
		func_1609(var_214_bool, var_0_bool);
		if(var_214_bool != 0) {
			if(!var_3_object) //@nz
				var_213_bool = true;
		}
		if(var_213_bool != 0) {
			func_1261(var_179_float);
			var_0_bool->GetPFPosition(var_170_cvector); //@t
			@GetPFPosition(var_171_cvector);
			var_176_float = (var_170_cvector - var_171_cvector) | (var_170_cvector - var_171_cvector);
			if(var_176_float >= ((300.0 + var_169_float) * (300.0 + var_169_float))) {
				bool var_224_bool; float var_226_float;
				var_169_float = var_226_float;
				TaskCall(2);
				func_335(var_232_bool, var_224_bool, var_0_bool, var_226_float, 3000.0, true, false);
				TaskReturn();
				if(!var_230_bool) { //@nz
				} else {
					var_173_bool = false;
			} else {
			if(var_176_float >= (var_157_float * var_157_float)) {
				var_0_bool->GetPFPosition(var_177_cvector); //@t
				@CanReachByPF(var_178_bool, var_177_cvector);
				if(!var_178_bool) { //@nz
					bool var_314_bool; float var_316_float;
					var_169_float = var_316_float;
					TaskCall(2);
					func_335(var_322_bool, var_314_bool, var_0_bool, var_316_float, 3000.0, true, false);
					TaskReturn();
					if(!var_320_bool) { //@nz
						goto Label_831;
					}
					var_173_bool = false;
					goto Label_659;
				}
				if(!var_173_bool) { //@nz
					func_1759(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1261(var_179_float);
					@StopAsync();
					var_173_bool = true;
					bool var_336_bool;
					func_1609(var_336_bool, var_0_bool);
					if(!var_336_bool) { //@nz
						goto Label_831;
					}
				}
				@rand(var_179_float);
				bool var_339_bool;
				var_341_bool = var_179_float < 0.6;
				if(var_341_bool != 1) {
					bool var_342_bool;
					func_1218(true, var_342_bool);
					if(var_342_bool != 1)
						var_339_bool = false;
				}
				if(var_339_bool != 0) {
					@Face(var_0_bool);
					func_1268();
					@PlayAnimation("all", "attack_stay");
					bool var_379_bool; float var_380_float;
					func_1086(var_179_float, var_379_bool, var_380_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1261(var_179_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_597_bool;
					func_1218(var_179_float, var_597_bool);
					var_598_bool = !var_597_bool; //@nz
					if(var_598_bool == 0) goto Label_821;
					bool var_599_bool;
					func_1609(var_599_bool, var_0_bool);
					if(!var_599_bool) { //@nz
						goto Label_831;
					}
					var_0_bool->GetPFPosition(var_170_cvector); //@t
					@GetPFPosition(var_171_cvector);
					if(!(((var_170_cvector - var_171_cvector) | (var_170_cvector - var_171_cvector)) < (var_380_float * var_380_float))) goto Label_821;
					bool var_604_bool; float var_605_float;
					var_157_float = var_605_float;
					func_922(var_178_bool, var_179_float, var_604_bool, var_605_float);
					var_606_bool = !var_604_bool; //@nz
					if(var_606_bool == 0) goto Label_821;
					goto Label_831;
			}
				bool var_607_bool; float var_608_float;
				var_157_float = var_608_float;
				func_922(var_178_bool, var_179_float, var_607_bool, var_608_float);
				if(!var_607_bool) { //@nz
					goto Label_831;
				}
				var_173_bool = true;

			}
		Label_821:
			goto Label_830;
			}
			Label_830:
			}
		}
	Label_831:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_172_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_2179(void)
{
	@ClearSubContainer(0);
	int var_248_int;
	func_1908(var_248_int);
	int var_246_int;
	var_248_int = var_246_int;
	func_1980(0, (10 + (var_246_int * 5)));
	func_1786("bottle_water", 1, 3);
	func_1786("rusk", 1, 20);
	func_1786("hook", 1, 30);
	func_1786("watch", 1, 30);
	if(var_246_int >= 3)
		func_1797("alpha_pills", 1, 4, 3);
	if(var_246_int >= 4)
		func_1797("beta_pills", 1, 8, 3);
	if(var_246_int >= 6)
		func_1797("gamma_pills", 1, 16, 3);
}


void func_133(float var_91_float)
{
	float var_93_float;
	@GetCameraFarDistance(var_93_float);
	var_93_float = var_91_float;
}


void func_1157(bool var_392_bool)
{
	bool var_393_bool = false;
	bool var_394_bool;
	func_1129(var_393_bool, var_394_bool);
	if(var_394_bool != 0) {
		bool var_411_bool;
		func_1173(var_392_bool, var_393_bool, var_411_bool);
		if(var_411_bool != 0)
			var_393_bool = true;
	}
	if(var_393_bool != 0) {
		var_392_bool = true;
		return 0;
	}
	var_392_bool = false;
}


void func_1677(object var_15_object, int var_16_int, float var_17_float)
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
		func_1463(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1859(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1739:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1633(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1739;
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
	func_1745(var_62_float, var_63_cvector, var_64_cvector);
}


void func_145(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1173(bool var_0_bool, bool var_4_bool, bool var_411_bool)
{
	object var_417_object; float var_419_float; cvector var_420_cvector; cvector var_421_cvector;
	@GetScene(var_417_object);
	bool var_418_bool = false;
	
	for(;;) {
		cvector var_422_cvector;
		func_1463(var_422_cvector, var_0_bool);
		var_428_int = -var_422_cvector;
		@FindDirLength(var_419_float, var_428_int, var_4_bool);
		if(var_419_float < var_4_bool) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_420_cvector); //@t
				@GetPFPosition(var_421_cvector);
				@WaitForAnimEnd();
				func_1261(var_421_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_418_bool = true;
				bool var_433_bool;
				func_1129(var_421_cvector, var_433_bool);
				var_434_bool = !var_433_bool; //@nz
				if(var_434_bool == 0) goto Label_1214;
		}
		for(;;) {
			var_418_bool = var_411_bool;

		}

	Label_1214:
	}
}
EMIT "Stack[-5] = 0";


void func_161(bool var_101_bool)
{
	var_101_bool = false;
}


void func_163(object var_95_object, cvector var_96_cvector)
{
	object var_98_object;
	@FindShiftedPathTo(var_98_object, var_96_cvector);
	var_98_object = var_95_object;
}
EMIT "Stack[-1] = 0";


void func_1218(bool var_0_bool, bool var_342_bool)
{
	bool var_344_bool;
	var_347_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_347_bool != 0) {
		var_0_bool->IsAttacking(var_344_bool); //@t
		var_344_bool = var_342_bool;
	}
	var_342_bool = false;
}


void func_2250(void)
{
	@ClearSubContainer(0);
	int var_22_int;
	func_1908(var_22_int);
	int var_20_int;
	var_22_int = var_20_int;
	func_1797("fresh_meat", 1, 4, 3);
	func_1797("dried_meat", 1, 4, 3);
	func_1797("smoked_meat", 1, 4, 3);
	func_1797("vegetables", 1, 3, 3);
	if(var_20_int >= 3) {
		func_1786("revolver_ammo", 1, 5);
		func_1786("rifle_ammo", 1, 5);
		func_1786("samopal_ammo", 1, 5);
		func_1786("powder", 1, 500);
	}
}


void func_1229(object var_2_object, bool var_5_bool)
{
	int var_462_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_461_float;
	@rand(var_461_float);
	float var_468_float;
	func_1279(var_468_float);
	if(var_461_float < var_468_float) {
		@irand(var_462_int, var_2_object);
		@Speak("attack" + (var_462_int + 1));
		int var_473_int;
		func_1277(var_473_int);
		var_5_bool = var_473_int;
	}
}


void func_1745(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1633(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1759(object var_325_object)
{
	cvector var_329_cvector;
	var_325_object->GetPosition(var_329_cvector);
	cvector var_330_cvector;
	@GetPosition(var_330_cvector);
	cvector var_331_cvector = var_329_cvector - var_330_cvector;
	var_332_float = GetByIndex(var_331_cvector, 0);
	var_333_float = GetByIndex(var_331_cvector, 2);
	@RotateAsync(var_332_float, var_333_float);
}


void func_1770(bool var_117_bool)
{
	bool var_119_bool;
	@IsLoaded(var_119_bool);
	var_119_bool = var_117_bool;
}


void func_235(void)
{
	int var_112_int; int var_113_int; bool var_114_bool; float var_115_float; bool var_116_bool;
	@WaitForAnimEnd();
	bool var_117_bool;
	func_1770(var_117_bool);
	if(!var_117_bool) //@nz
		return 14;
	int var_121_int;
	func_1944(var_121_int);
	int var_110_int;
	var_121_int = var_110_int;
	int var_111_int = 0;
	
	for(;;) {
		bool var_134_bool = false;
		if(var_111_int < 5) {
			bool var_137_bool;
			func_1770(var_137_bool);
			if(var_137_bool != 0)
				var_134_bool = true;
		}
		if(var_134_bool != 0) {
			@irand(var_112_int, 3);
			if(var_112_int == 0) {
				if(var_110_int == 0) goto Label_282;
				@irand(var_113_int, var_110_int);
				string var_143_string; int var_144_int;
				var_113_int = var_144_int;
				func_1937(var_143_string, var_144_int);
				@PlayAnimation("all", var_143_string);
				@WaitForAnimEnd(var_114_bool);
				if(!var_114_bool) { //@nz
				} else {
			} else {
			if(var_112_int == 1) {
				@rand(var_115_float, 4);
				@Sleep((var_115_float + 1), var_116_bool);
				if(!var_116_bool) { //@nz
					goto Label_311;
				}
			} else if(var_111_int != 0) {
				goto Label_311;
			}
			}
					bool var_146_bool;
					func_314(var_146_bool);
					var_147_bool = !var_146_bool; //@nz
					if(var_147_bool == 0) goto Label_306;
			}
		}
	Label_311:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_306:
		@ResetAAS();
		var_111_int += 1;
	}
	
}


void func_1261(bool var_0_bool)
{
	func_1917(var_0_bool);
}


void func_1775(object var_15_object)
{
	float var_18_float;
	var_15_object->GetEyesHeight(var_18_float);
	cvector var_19_cvector = [0.0, 0.0, 0.0];
	var_20_float = GetByIndex(var_19_cvector, 1);
	var_18_float = var_20_float;
	SetByIndex(var_19_cvector, 1) = var_20_float;
	@LookAsync(var_15_object, "head", var_19_cvector);
}


void func_1266(int var_552_int)
{
	var_552_int = 0;
}


void func_1268(void)
{
	func_1812("attack_stay");
}


// @pe
void func_1273(void)
{
}


void func_1786(string var_58_string, int var_59_int, int var_60_int)
{
	bool var_62_bool;
	int var_64_int;
	var_59_int = var_64_int;
	int var_65_int;
	var_60_int = var_65_int;
	bool var_63_bool;
	func_1887(var_63_bool, var_64_int, var_65_int);
	if(var_63_bool != 0)
		@AddItem(var_62_bool, var_58_string, 0);
}


void func_1275(bool var_577_bool)
{
	var_577_bool = true;
}


void func_1277(int var_473_int)
{
	var_473_int = 1;
}


void func_1279(float var_468_float)
{
	var_468_float = 0.5;
}


void func_1281(object var_22_object)
{
	bool var_24_bool;
	@IsPlayerActor(var_22_object, var_24_bool);
	if(var_24_bool != 0)
		func_2052();
	else
		func_2179();
	func_2028();
	object var_158_object;
	var_22_object = var_158_object;
	func_1301(var_158_object);
	
}


void func_1797(string var_28_string, int var_29_int, int var_30_int, int var_31_int)
{
	int var_34_int; bool var_35_bool;
	int var_37_int;
	var_29_int = var_37_int;
	int var_38_int;
	var_30_int = var_38_int;
	bool var_36_bool;
	func_1887(var_36_bool, var_37_int, var_38_int);
	if(var_36_bool != 0) {
		@irand(var_34_int, var_31_int);
		@AddItem(var_35_bool, var_28_string, 0, (var_34_int + 1));
	}
}


void func_2314(int var_54_int, string var_55_string)
{
	int var_57_int;
	@GetInvItemByName(var_57_int, var_55_string);
	var_57_int = var_54_int;
}


void func_2319(bool var_20_bool, object var_21_object, bool var_22_bool)
{
	bool var_25_bool; object var_26_object;
	func_1483(var_25_bool, var_26_object, "class");
	if(!var_25_bool) { //@nz
		var_20_bool = false;
		return 2;
	}
	string var_24_string;
	var_26_object->GetProperty("class", var_24_string);
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	bool var_42_bool = true;
	bool var_43_bool = true;
	bool var_44_bool = true;
	bool var_45_bool = true;
	var_47_bool = var_24_string == "patrol";
	if(var_47_bool != 1) {
		var_49_bool = var_24_string == "sanitar";
		if(var_49_bool != 1)
			var_45_bool = false;
	}
	if(var_45_bool != 1) {
		var_51_bool = var_24_string == "soldier";
		if(var_51_bool != 1)
			var_44_bool = false;
	}
	if(var_44_bool != 1) {
		var_53_bool = var_24_string == "woman";
		if(var_53_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 1) {
		var_55_bool = var_24_string == "wasted_girl";
		if(var_55_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 1) {
		var_57_bool = var_24_string == "vaxxabitka";
		if(var_57_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_59_bool = var_24_string == "vaxxabit";
		if(var_59_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_61_bool = var_24_string == "little_girl";
		if(var_61_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_63_bool = var_24_string == "girl";
		if(var_63_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_65_bool = var_24_string == "dohodyaga";
		if(var_65_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_67_bool = var_24_string == "nudegirl";
		if(var_67_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 0) {
		var_20_bool = true;
		return 2;
	}
	if(var_22_bool != 0) {
		var_20_bool = false;
		return 2;
	}
	var_20_bool = true;
	bool var_69_bool = true;
	bool var_70_bool = true;
	bool var_71_bool = true;
	bool var_72_bool = true;
	bool var_73_bool = true;
	var_75_bool = var_24_string == "worker";
	if(var_75_bool != 1) {
		var_77_bool = var_24_string == "butcher";
		if(var_77_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 1) {
		var_79_bool = var_24_string == "boy";
		if(var_79_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 1) {
		var_81_bool = var_24_string == "unosha";
		if(var_81_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 1) {
		var_83_bool = var_24_string == "wasted_male";
		if(var_83_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 1) {
		var_85_bool = var_24_string == "alkash";
		if(var_85_bool != 1)
			var_69_bool = false;
	}
	if(var_69_bool != 1) {
		var_87_bool = var_24_string == "morlok";
		if(var_87_bool != 1)
			var_20_bool = false;
	}
}


void func_1812(string var_182_string)
{
	bool var_191_bool; int var_192_int; bool var_193_bool; int var_194_int; bool var_195_bool; float var_196_float; cvector var_197_cvector; cvector var_198_cvector;
	@IsExisting3DSound(var_191_bool, var_182_string);
	if(!var_191_bool) { //@nz
		var_192_int = 0;

		for(;;) {
			@IsExisting3DSound(var_193_bool, (var_182_string + (var_192_int + 1)));
			if(!var_193_bool) { //@nz
				break;
			Label_1832:
				@irand(var_194_int, var_192_int);
				var_182_string += (var_194_int + 1);
	}
			@Is3DSoundLoaded(var_195_bool, var_182_string);
			if(var_195_bool != 0) {
				@GetEyesHeight(var_196_float);
				@GetDirection(var_197_cvector);
				var_198_cvector = var_197_cvector * 50;
				var_209_float = GetByIndex(var_198_cvector, 1);
				SetByIndex(var_198_cvector, 1) = (var_209_float + var_196_float);
				@PlayGlobalSound(var_182_string, var_198_cvector);
			}
		}
		var_192_int += 1;
	}
	var_204_bool = !var_192_int; //@nz
	if(var_204_bool == 0) goto Label_1832;
}


// @pe
void func_1301(object var_158_object)
{
	object var_159_object;
	var_158_object = var_159_object;
	func_1326(var_159_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1326(object var_159_object)
{
	cvector var_170_cvector; cvector var_171_cvector; cvector var_172_cvector; cvector var_173_cvector; string var_174_string; object var_175_object; bool var_176_bool; bool var_177_bool; float var_178_float; cvector var_179_cvector;
	if(var_159_object == null) {
		func_1417("fdie");
	} else {
		var_159_object->GetPosition(var_170_cvector);
		@GetPosition(var_171_cvector);
		@GetDirection(var_172_cvector);
		var_173_cvector = var_171_cvector - var_170_cvector;
		var_213_float = GetByIndex(var_173_cvector, 0);
		var_214_float = GetByIndex(var_172_cvector, 0);
		var_216_float = GetByIndex(var_173_cvector, 2);
		var_217_float = GetByIndex(var_172_cvector, 2);
		if(((var_213_float * var_214_float) + (var_216_float * var_217_float)) >= 0)
			var_174_string = "fdie";
		else
			var_174_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_159_object = var_175_object;
		var_224_bool = IsFuncExist(var_159_object, "GetScriptProperty", 2);
		if(var_224_bool != 0) {
			var_159_object->HasScriptProperty(var_176_bool, "Owner");
			if(var_176_bool != 0) {
				var_159_object->GetScriptProperty(var_175_object, "Owner");
				if(var_175_object == null)
					var_159_object = var_175_object;
			}
		}
		var_231_bool = IsFuncExist(var_175_object, "@GetEyesHeight", 1);
		if(var_231_bool != 0) {
			var_175_object->GetEyesHeight(var_178_float);
			var_179_cvector = [0.0, 0.0, 0.0];
			var_232_float = GetByIndex(var_179_cvector, 1);
			var_178_float = var_232_float;
			SetByIndex(var_179_cvector, 1) = var_232_float;
			@LookAsync(var_159_object, "head", var_179_cvector);
			var_177_bool = true;
		} else {
			var_177_bool = false;

		}
		string var_234_string;
		var_174_string = var_234_string;
		func_1812(var_234_string);
		@PlayAnimation("all", var_174_string);
		@WaitForAnimEnd();
		if(var_177_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_174_string);
		@RemoveEnvelope();
		var_175_object = null;
	}
	
}


void func_314(bool var_146_bool)
{
	var_146_bool = true;
}


void func_316(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1853(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_1859(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


// @pe
void func_1869(float var_529_float, float var_530_float, float var_531_float)
{
	if(var_530_float < var_531_float)
		var_530_float = var_529_float;
	else
		var_531_float = var_529_float;
	
}


void func_335(object var_2_object, bool var_224_bool, object var_225_object, float var_226_float, float var_227_float, bool var_228_bool, bool var_229_bool)
{
	object var_237_object;
	func_1917(var_237_object);
	@SetTimer(1, 5);
	bool var_235_bool;
	@CanSee(var_235_bool, var_237_object);
	if(var_235_bool != 0) {
		var_2_object = true;
		object var_241_object;
		var_225_object = var_241_object;
		func_1775(var_241_object);
	} else {
		var_2_object = false;
	}
	bool var_248_bool; object var_249_object;
	func_1478(var_248_bool, var_249_object);
	if(var_248_bool != 0) {
		object var_250_object;
		func_1853(var_250_object);
		@SendPlayerEnemy(var_249_object, var_250_object);
	}
	bool var_251_bool; object var_252_object; float var_253_float; float var_254_float; bool var_255_bool; bool var_256_bool;
	var_225_object = var_252_object;
	var_226_float = var_253_float;
	var_227_float = var_254_float;
	var_228_bool = var_255_bool;
	var_229_bool = var_256_bool;
	bool var_236_bool;
	func_440(var_235_bool, var_236_bool, var_251_bool, var_252_object, var_253_float, var_254_float, var_255_bool, var_256_bool);
	var_251_bool = var_236_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_236_bool = var_224_bool;
	
}


void func_848(bool var_1_bool, object var_2_object, bool var_4_bool)
{
	bool var_183_bool; bool var_184_bool; cvector var_185_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_183_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_183_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_184_bool, ("attack" + (var_2_object + 1)));
			if(!var_184_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_185_cvector, "all", "bjump");
		var_199_float = GetByIndex(var_185_cvector, 2);
		var_4_bool = -var_199_float;

	}
}


// @pe
void func_1876(float var_539_float, float var_540_float, float var_541_float, float var_542_float)
{
	if(var_540_float < var_541_float) {
		var_541_float = var_539_float;
		return 0;
	}
	if(var_540_float > var_542_float) {
		var_542_float = var_539_float;
		return 0;
	}
	var_540_float = var_539_float;
}


void func_1887(bool var_36_bool, int var_37_int, int var_38_int)
{
	int var_40_int;
	@irand(var_40_int, var_38_int);
	var_36_bool = var_40_int < var_37_int;
}


void func_1892(object var_12_object)
{
	object var_14_object;
	@CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_1898(float var_547_float)
{
	object var_549_object;
	@CreateFloatVector(var_549_object);
	var_549_object->add(var_547_float);
	@SendWorldWndMessage(15, var_549_object);
}
EMIT "Stack[-1] = 0";


void func_883(bool var_0_bool, float var_477_float, int var_478_int)
{
	object var_482_object; float var_483_float; float var_484_float;
	@GetVictim((var_477_float * 0.9), var_482_object);
	@ReportAttack(var_0_bool);
	if(var_482_object == var_0_bool) {
		float var_488_float; object var_489_object; int var_490_int;
		var_482_object = var_489_object;
		var_478_int = var_490_int;
		func_599(var_490_int);
		var_488_float = var_483_float;
		float var_491_float; object var_492_object; float var_493_float; int var_494_int;
		var_482_object = var_492_object;
		int var_495_int; object var_496_object; int var_497_int;
		var_482_object = var_496_object;
		var_478_int = var_497_int;
		func_602(var_497_int);
		var_495_int = var_494_int;
		func_1495(var_491_float, var_492_object, var_493_float, var_494_int);
		var_491_float = var_484_float;
		int var_552_int;
		func_1266(var_552_int);
		@ReportHit(var_0_bool, var_552_int, var_484_float, var_493_float);
		object var_553_object; float var_554_float;
		var_482_object = var_553_object;
		var_484_float = var_554_float;
		func_1273();
	}
}
EMIT "Stack[-3] = 0";


void func_1908(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	var_22_int = 1 + (var_24_float / 24);
}


void func_1917(object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	if(var_16_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1926(void)
{
	object var_453_object;
	@GetScene(var_453_object);
	object var_455_object;
	func_1853(var_455_object);
	@BroadcastMessage("battle", var_455_object, var_453_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_1417(string var_181_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_182_string;
	var_181_string = var_182_string;
	func_1812(var_182_string);
	@PlayAnimation("all", var_181_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_181_string);
	@RemoveEnvelope();
}


void func_398(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_564(var_11_int);
}


void func_1937(string var_127_string, int var_128_int)
{
	string var_130_string = "idle";
	if(var_128_int != 0)
		var_130_string += var_128_int;
	var_130_string = var_127_string;
}


void func_2455(void)
{
	var_11_object = GlobalVars[0];
	object var_12_object;
	func_1892(var_12_object);
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
}


void func_1944(int var_121_int)
{
	int var_124_int; bool var_125_bool;
	var_124_int = 0;
	
	for(;;) {
		string var_127_string; int var_128_int;
		var_124_int = var_128_int;
		func_1937(var_127_string, var_128_int);
		@HasAnimation(var_125_bool, "all", var_127_string);
		if(!var_125_bool) //@nz
			break;
		var_124_int += 1;
	}
	var_124_int = var_121_int;
}


void func_922(bool var_0_bool, bool var_1_bool, bool var_440_bool, float var_441_float)
{
	string var_449_string;
	func_1261(var_449_string);
	int var_446_int;
	@irand(var_446_int, var_1_bool);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_1926();
	@PlayAnimation("all", ("attack_begin" + (var_446_int + 1)));
	@WaitForAnimEnd();
	int var_448_int;
	func_1229(var_448_int, var_449_string);
	bool var_474_bool;
	func_1609(var_474_bool, var_0_bool);
	if(!var_474_bool) { //@nz
		@StopAsync();
		var_440_bool = false;
		return 8;
	}
	float var_477_float; int var_478_int;
	var_441_float = var_477_float;
	var_446_int = var_478_int;
	func_883(var_449_string, var_477_float, var_478_int);
	bool var_447_bool;
	@HasAnimation(var_447_bool, "all", ("attack_middle" + var_446_int));
	if(var_447_bool != 0) {
		func_1926();
		@PlayAnimation("all", ("attack_middle" + var_446_int));
		@WaitForAnimEnd();
		func_1261(var_449_string);
		bool var_562_bool;
		func_1609(var_562_bool, var_0_bool);
		if(!var_562_bool) { //@nz
			@StopAsync();
			var_440_bool = false;
			return 8;
		}
		float var_565_float; int var_566_int;
		var_441_float = var_565_float;
		func_883(var_449_string, var_565_float, var_566_int);
		var_448_int = 1;

		for(;;) {
			var_449_string = (("attack_middle" + var_566_int) + "_") + var_448_int;
			@HasAnimation(var_447_bool, "all", var_449_string);
			if(!var_447_bool) { //@nz
			} else {
				func_1926();
				@PlayAnimation("all", var_449_string);
				@WaitForAnimEnd();
				func_1261(var_449_string);
				bool var_588_bool;
				func_1609(var_588_bool, var_0_bool);
				if(!var_588_bool) { //@nz
					@StopAsync();
					var_440_bool = false;
					return 8;
				}
				float var_591_float; int var_592_int;
				var_441_float = var_591_float;
				var_446_int = var_592_int;
				func_883(var_449_string, var_591_float, var_592_int);
				var_448_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_446_int));
		bool var_577_bool;
		func_1275(var_577_bool);
		if(var_577_bool != 0) {
			bool var_578_bool;
			func_1059(var_578_bool, 0.75);
			@StopAsync();
		}
		var_440_bool = true;
		return 8;

	}
}


// @pe
void func_2462(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2628(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


// @pe
void func_2469(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	func_2488(var_77_object);
}


// @pe
void func_1449(string var_519_string, int var_520_int)
{
	if(var_520_int == 2) {
		var_519_string = "fire";
		return 0;
	EMIT "GOTO 0x5b5";
	}
	if(var_520_int == 1) {
		var_519_string = "bullet";
		return 0;
	}
	var_519_string = "phys";
}


void func_1961(int var_138_int)
{
	int var_140_int;
	@GetVariable("branch", var_140_int);
	var_140_int = var_138_int;
}


// @pe
void func_2475(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2628(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


// @pe
void func_1967(object var_15_object)
{
	int var_16_int;
	func_1961(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


// @pe
void func_2482(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	func_2488(var_77_object);
}


void func_1463(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_440(bool var_0_bool, bool var_1_bool, bool var_251_bool, object var_252_object, float var_253_float, float var_254_float, bool var_255_bool, bool var_256_bool)
{
	bool var_265_bool; object var_267_object; cvector var_268_cvector; cvector var_269_cvector; float var_271_float; object var_272_object;
	var_0_bool = false;
	var_1_bool = var_252_object;
	bool var_266_bool;
	var_256_bool = var_266_bool;
	
	for(;;) {
		bool var_273_bool; object var_274_object;
		var_252_object = var_274_object;
		func_580(var_273_bool, var_274_object);
		if(!var_273_bool) { //@nz
			var_251_bool = false;
			return 16;
		}
		var_252_object->GetPosition(var_268_cvector);
		@GetPosition(var_269_cvector);
		var_271_float = (var_268_cvector - var_269_cvector) | (var_268_cvector - var_269_cvector);
		bool var_278_bool = false;
		if(var_254_float > 0) {
			if(var_271_float > (var_254_float * var_254_float))
				var_278_bool = true;
		}
		if(var_278_bool != 0) {
			@Stop();
			var_251_bool = false;
			return 16;
		}
		if(var_271_float > (var_253_float * var_253_float)) {
			var_252_object->GetPFPosition(var_268_cvector);
			@FindPathTo(var_272_object, var_268_cvector);
			if(var_272_object != null) {
				var_272_object = var_267_object;
				var_272_object = null;
			}
			if(var_267_object != null) {
				if(var_266_bool == 0) goto Label_493;
				var_266_bool = false;
				@RotatePath(var_267_object, var_265_bool);
				if(!var_265_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_291_string;
						func_587(var_291_string);
						string var_292_string;
						func_589(var_292_string);
						@FollowPath(var_267_object, var_255_bool, var_265_bool, var_291_string, var_292_string);
						if(!var_265_bool) { //@nz
							if(var_0_bool == 0) goto Label_512;
							var_267_object = null;
						}
					EMIT "GOTO 0x201";

					Label_512:
						} else {
					var_267_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_265_bool);
					if(!var_265_bool) { //@nz
						if(var_0_bool != 0) {
							var_267_object = null;
							goto Label_540;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_540;
		}
			var_272_object = null;
			goto Label_538;

		Label_538:
			var_267_object = null;

		}
	Label_540:
		for(;;) {
			var_251_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_2488(object var_77_object)
{
	object var_78_object;
	var_77_object = var_78_object;
	TaskCall(3);
	func_591(var_78_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_1980(int var_39_int, int var_40_int)
{
	if(var_39_int > var_40_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_46_int = 0;
	if(var_39_int != var_40_int) {
		@irand(var_46_int, (var_40_int - var_39_int));
	} else if(var_39_int == 0) {
		return 4;
	}
	var_46_int += var_39_int;
	if(var_46_int == 0)
		return 4;
	int var_54_int;
	func_2314(var_54_int, "Money");
	bool var_47_bool;
	@AddItem(var_47_bool, var_54_int, 0, var_46_int);
	
}


void func_1470(float var_90_float, object var_91_object)
{
	cvector var_95_cvector;
	@GetPosition(var_95_cvector);
	cvector var_96_cvector;
	var_91_object->GetPosition(var_96_cvector);
	var_90_float = (var_96_cvector - var_95_cvector) | (var_96_cvector - var_95_cvector);
}


void func_2499(object var_12_object)
{
	if(var_12_object == null) {
	}
	var_16_object = GlobalVars[0];
	bool var_14_bool;
	var_16_object->in(var_14_bool, var_12_object);
	if(!var_14_bool) { //@nz
		var_18_object = GlobalVars[0];
		var_18_object->add(var_12_object);
	}
	bool var_19_bool; object var_20_object;
	func_1478(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		object var_23_object;
		func_1853(var_23_object);
		@ReportReputationChange(var_20_object, var_23_object, -0.07);
	}
}


void func_1478(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	@IsPlayerActor(var_14_object, var_16_bool);
	var_16_bool = var_13_bool;
}


void func_1483(bool var_25_bool, object var_26_object, string var_27_string)
{
	var_32_bool = IsFuncExist(var_26_object, "HasProperty", 2);
	if(!var_32_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_29_bool;
	var_26_object->HasProperty(var_27_string, var_29_bool);
	var_29_bool = var_25_bool;
}


void func_1495(float var_491_float, object var_492_object, float var_493_float, int var_494_int)
{
	int var_504_int; int var_506_int;
	object var_511_object;
	var_492_object = var_511_object;
	bool var_510_bool;
	func_1483(var_510_bool, var_511_object, "health");
	if(!var_510_bool) //@nz
		var_491_float = 0.0;
	bool var_514_bool; object var_515_object;
	func_1483(var_514_bool, var_515_object, "armor");
	if(!var_514_bool) //@nz
		var_504_int = 0;
	else
		var_515_object->GetProperty("armor", var_504_int);
	string var_519_string; int var_520_int;
	var_494_int = var_520_int;
	func_1449(var_519_string, var_520_int);
	string var_505_string = "armor_" + var_519_string;
	bool var_525_bool; object var_526_object; string var_527_string;
	var_492_object = var_526_object;
	func_1483(var_525_bool, var_526_object, var_527_string);
	if(!var_525_bool) //@nz
		var_506_int = 0;
	else
		var_492_object->GetProperty(var_527_string, var_506_int);

	float var_529_float;
	func_1869(var_529_float, ((var_504_int + var_506_int) / 100.0), (float)1);
	float var_507_float;
	var_529_float = var_507_float;
	float var_508_float;
	var_492_object->GetProperty("health", var_508_float);
	float var_509_float = var_493_float * (1 - var_507_float);
	float var_539_float;
	func_1876(var_539_float, (var_508_float - var_509_float), (float)0, (float)1);
	var_492_object->SetProperty("health", var_539_float);
	bool var_545_bool; object var_546_object;
	var_492_object = var_546_object;
	func_1478(var_545_bool, var_546_object);
	if(var_545_bool != 0) {
		float var_547_float = -var_509_float;
		func_1898(var_547_float);
	}
	var_509_float = var_491_float;
	
}


// @pe
void func_2523(object var_145_object)
{
	object var_146_object;
	var_145_object = var_146_object;
	func_2499(var_146_object);
	object var_147_object;
	var_145_object = var_147_object;
	TaskCall(3);
	func_591(var_147_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_2011(string var_144_string)
{
	object var_148_object;
	@CreateInvItem(var_148_object);
	var_148_object->SetItemName(var_144_string);
	var_148_object->SetProperty("Organ", 1);
	int var_149_int;
	var_148_object->GetItemID(var_149_int);
	bool var_150_bool;
	@AddItem(var_150_bool, var_148_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_2538(object var_12_object)
{
	bool var_13_bool; object var_14_object;
	func_1478(var_13_bool, var_14_object);
	if(var_13_bool != 0) {
		object var_17_object;
		func_1853(var_17_object);
		@ReportReputationChange(var_14_object, var_17_object, -0.13, true);
	}
	object var_22_object;
	var_12_object = var_22_object;
	TaskCall(4);
	func_1281(var_22_object);
	TaskReturn();
}


void func_2028(void)
{
	int var_138_int;
	func_1961(var_138_int);
	if(var_138_int != 1) {
	}
	func_2011("liver");
	func_2011("kidney");
	func_2011("heart");
	func_2011("blood");
}


