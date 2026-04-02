// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2744(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			object var_19_object;
			var_12_bool = var_19_object;
			func_2747(var_19_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_2753();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		int var_14_int; int var_15_int;
		var_0_bool = false;
		@SensePlayerOnly(true);
		func_2824();
		func_190();
	
		for(;;) {
			@irand(var_14_int, 2);
			if(var_14_int == 0) {
				var_0_bool = true;
				func_2845();
				var_0_bool = false;
				@ResetAAS();
			} else {
			@irand(var_15_int, 4);
			@Sleep(var_15_int + 1);
			}
		}
	
	}
	EMIT "Return(); Pop(4)";

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2744(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_392(var_14_int);
			object var_23_object;
			var_12_bool = var_23_object;
			func_2747(var_23_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		func_2550(var_15_object);
		int var_24_int; object var_25_object;
		var_12_bool = var_25_object;
		func_2609(var_24_int, var_25_object);
		int var_14_int;
		var_24_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_392(var_14_int);
			object var_66_object;
			var_12_bool = var_66_object;
			func_2619(var_66_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_12_bool = var_18_object;
		object var_19_object;
		var_13_object = var_19_object;
		bool var_20_bool;
		var_14_bool = var_20_bool;
		bool var_17_bool;
		func_2877(var_17_bool, var_18_object, var_19_object, var_20_bool);
		if(var_17_bool != 0) {
			int var_79_int; object var_80_object; bool var_81_bool;
			var_12_bool = var_80_object;
			var_14_bool = var_81_bool;
			func_2702(var_80_object, var_81_bool);
			var_79_int = var_16_int;
			if(var_16_int > 0) {
				if(var_16_int > 1)
					func_392(var_16_int);
				object var_118_object;
				var_12_bool = var_118_object;
				func_2709(var_118_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		int var_15_int;
		func_2754(var_15_int, var_16_object);
		int var_14_int;
		var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_392(var_14_int);
			object var_63_object;
			var_12_bool = var_63_object;
			func_2770(var_63_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		int var_15_int;
		object var_17_object;
		var_12_object = var_17_object;
		string var_18_string;
		var_13_bool = var_18_string;
		bool var_16_bool;
		func_2464(var_16_bool, var_17_object, var_18_string);
		if(var_16_bool != 0) {
			func_392(var_15_int);
			object var_46_object; string var_47_string;
			var_12_object = var_46_object;
			var_13_bool = var_47_string;
			func_2496(var_46_object, var_47_string);
		} else {
			int var_122_int; string var_123_string; object var_124_object;
			var_13_bool = var_123_string;
			var_12_object = var_124_object;
			func_2776(var_124_object);
			var_122_int = var_15_int;
			if(!(var_15_int > 0)) goto Label_327;
			if(var_15_int > 1)
				func_392(var_15_int);
			string var_129_string; object var_130_object;
			var_13_bool = var_129_string;
			var_12_object = var_130_object;
			func_2779();
		}
	Label_327:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, string var_2_string, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		bool var_13_bool; string var_14_string;
		func_2563(var_13_bool, var_14_string);
		if(var_13_bool != 0) {
			func_392(var_14_string);
			string var_24_string;
			var_12_bool = var_24_string;
			func_2579(var_24_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(var_0_bool != 0)
			return 0;
		bool var_14_bool; object var_15_object;
		func_2521(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_392(var_15_object);
			object var_28_object;
			var_12_bool = var_28_object;
			func_2544(var_28_object);
		} else {
			object var_30_object;
			func_414(var_30_object, var_30_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(var_0_bool != 0)
			return 0;
		object var_14_object;
		func_414(var_14_object, var_14_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(var_12_bool != 110) {
		}
		var_1_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_392(var_11_bool);
		func_2753();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_392(var_12_bool);
		object var_15_object;
		var_12_bool = var_15_object;
		func_2440();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		func_2744(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_646();
			object var_23_object;
			var_12_bool = var_23_object;
			func_2747(var_23_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_15_object;
		var_12_bool = var_15_object;
		func_2550(var_15_object);
		int var_24_int; object var_25_object;
		var_12_bool = var_25_object;
		func_2609(var_24_int, var_25_object);
		int var_14_int;
		var_24_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_646();
			object var_66_object;
			var_12_bool = var_66_object;
			func_2619(var_66_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_12_bool = var_18_object;
		object var_19_object;
		var_13_object = var_19_object;
		bool var_20_bool;
		var_14_bool = var_20_bool;
		bool var_17_bool;
		func_2877(var_17_bool, var_18_object, var_19_object, var_20_bool);
		if(var_17_bool != 0) {
			int var_79_int; object var_80_object; bool var_81_bool;
			var_12_bool = var_80_object;
			var_14_bool = var_81_bool;
			func_2702(var_80_object, var_81_bool);
			var_79_int = var_16_int;
			if(var_16_int > 0) {
				if(var_16_int > 1)
					func_646();
				object var_118_object;
				var_12_bool = var_118_object;
				func_2709(var_118_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_16_object;
		var_12_bool = var_16_object;
		int var_15_int;
		func_2754(var_15_int, var_16_object);
		int var_14_int;
		var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_646();
			object var_63_object;
			var_12_bool = var_63_object;
			func_2770(var_63_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		int var_15_int;
		object var_17_object;
		var_12_object = var_17_object;
		string var_18_string;
		var_13_bool = var_18_string;
		bool var_16_bool;
		func_2464(var_16_bool, var_17_object, var_18_string);
		if(var_16_bool != 0) {
			func_646();
			object var_46_object; string var_47_string;
			var_12_object = var_46_object;
			var_13_bool = var_47_string;
			func_2496(var_46_object, var_47_string);
		} else {
			int var_122_int; string var_123_string; object var_124_object;
			var_13_bool = var_123_string;
			var_12_object = var_124_object;
			func_2776(var_124_object);
			var_122_int = var_15_int;
			if(!(var_15_int > 0)) goto Label_631;
			if(var_15_int > 1)
				func_646();
			string var_129_string; object var_130_object;
			var_13_bool = var_129_string;
			var_12_object = var_130_object;
			func_2779();
		}
	Label_631:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		string var_14_string;
		var_12_bool = var_14_string;
		bool var_13_bool;
		func_2563(var_13_bool, var_14_string);
		if(var_13_bool != 0) {
			func_646();
			string var_24_string;
			var_12_bool = var_24_string;
			func_2579(var_24_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_646();
		object var_15_object;
		var_12_bool = var_15_object;
		func_2440();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		if(var_12_bool != 111)
			return 4;
		bool var_19_bool;
		func_1821(var_19_bool, var_0_bool);
		if(!var_19_bool) { //@nz
			func_646();
			return 4;
		}
		cvector var_15_cvector;
		@GetDirection(var_15_cvector);
		cvector var_56_cvector;
		func_1675(var_56_cvector, var_0_bool);
		cvector var_16_cvector;
		var_56_cvector = var_16_cvector;
		float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
		var_15_cvector = var_63_cvector;
		var_16_cvector = var_64_cvector;
		func_2092(var_62_float, var_63_cvector, var_64_cvector);
		if(var_62_float < 0.49999997)
			func_1971(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_646();
		func_2753();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		object var_14_object;
		var_12_bool = var_14_object;
		bool var_13_bool;
		func_2521(var_13_bool, var_14_object);
		if(var_13_bool != 0) {
			func_646();
			object var_27_object;
			var_12_bool = var_27_object;
			func_2544(var_27_object);
		}
	}

}


task task_3
{
}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool)
	{
		func_1468(var_11_bool);
		func_2753();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, int var_12_int)
	{
		if(var_12_int == 1) {
			func_2128(var_1_bool);
		} else {
			int var_20_int;
			func_1612(var_11_bool, var_20_int, var_20_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool = false;
		if(var_1_bool == var_12_object) {
			if(!var_2_object) //@nz
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_object = true;
			object var_16_object;
			var_12_object = var_16_object;
			func_1987(var_16_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		bool var_13_bool = false;
		if(var_1_bool == var_12_object) {
			if(var_2_object != 0)
				var_13_bool = true;
		}
		if(var_13_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		@RequestClearPath(var_12_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
	{
		func_1468(var_12_object);
		object var_17_object;
		var_12_object = var_17_object;
		func_2440();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2419(var_13_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1889(var_16_object, var_17_int, var_18_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, int var_4_int, int var_5_int, bool var_6_bool, float var_7_float, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, float var_14_float, float var_15_float, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_18_object;
	var_12_object = var_18_object;
	int var_19_int;
	var_13_int = var_19_int;
	float var_20_float;
	var_14_float = var_20_float;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	func_1957(var_20_float, var_21_cvector, var_22_cvector);
}


// @pe
void func_0(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_33(var_15_object);
	object var_95_object;
	var_14_object = var_95_object;
	func_2887(var_95_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2563(bool var_13_bool, string var_14_string)
{
	object var_16_object;
	if(var_14_string == "heal") {
		@FindActor(var_16_object, "player");
		bool var_20_bool; object var_21_object;
		var_16_object = var_21_object;
		func_2812(var_21_object);
		var_20_bool = var_13_bool;
	EMIT "Stack[-1] = 0";
	}
	var_13_bool = false;
}


// @pe
void func_2055(float var_450_float, float var_451_float, float var_452_float)
{
	if(var_451_float < var_452_float)
		var_451_float = var_450_float;
	else
		var_452_float = var_450_float;
	
}


// @pe
void func_2062(float var_460_float, float var_461_float, float var_462_float, float var_463_float)
{
	if(var_461_float < var_462_float) {
		var_462_float = var_460_float;
		return 0;
	}
	if(var_461_float > var_463_float) {
		var_463_float = var_460_float;
		return 0;
	}
	var_461_float = var_460_float;
}


void func_1039(bool var_0_bool, bool var_1_bool, bool var_361_bool, float var_362_float)
{
	string var_370_string;
	func_1378(var_370_string);
	int var_367_int;
	@irand(var_367_int, var_1_bool);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2137();
	@PlayAnimation("all", ("attack_begin" + (var_367_int + 1)));
	@WaitForAnimEnd();
	int var_369_int;
	func_1346(var_369_int, var_370_string);
	bool var_395_bool;
	func_1821(var_395_bool, var_0_bool);
	if(!var_395_bool) { //@nz
		@StopAsync();
		var_361_bool = false;
		return 8;
	}
	float var_398_float; int var_399_int;
	var_362_float = var_398_float;
	var_367_int = var_399_int;
	func_1000(var_370_string, var_398_float, var_399_int);
	bool var_368_bool;
	@HasAnimation(var_368_bool, "all", ("attack_middle" + var_367_int));
	if(var_368_bool != 0) {
		func_2137();
		@PlayAnimation("all", ("attack_middle" + var_367_int));
		@WaitForAnimEnd();
		func_1378(var_370_string);
		bool var_483_bool;
		func_1821(var_483_bool, var_0_bool);
		if(!var_483_bool) { //@nz
			@StopAsync();
			var_361_bool = false;
			return 8;
		}
		float var_486_float; int var_487_int;
		var_362_float = var_486_float;
		func_1000(var_370_string, var_486_float, var_487_int);
		var_369_int = 1;

		for(;;) {
			var_370_string = (("attack_middle" + var_487_int) + "_") + var_369_int;
			@HasAnimation(var_368_bool, "all", var_370_string);
			if(!var_368_bool) { //@nz
			} else {
				func_2137();
				@PlayAnimation("all", var_370_string);
				@WaitForAnimEnd();
				func_1378(var_370_string);
				bool var_509_bool;
				func_1821(var_509_bool, var_0_bool);
				if(!var_509_bool) { //@nz
					@StopAsync();
					var_361_bool = false;
					return 8;
				}
				float var_512_float; int var_513_int;
				var_362_float = var_512_float;
				var_367_int = var_513_int;
				func_1000(var_370_string, var_512_float, var_513_int);
				var_369_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_367_int));
		bool var_498_bool;
		func_1392(var_498_bool);
		if(var_498_bool != 0) {
			bool var_499_bool;
			func_1176(var_499_bool, 0.75);
			@StopAsync();
		}
		var_361_bool = true;
		return 8;

	}
}


void func_2579(string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		object var_30_object;
		var_26_object = var_30_object;
		func_2815();
		var_26_object = null;
	}
}


// @pe
void func_2073(float var_65_float, cvector var_66_cvector, cvector var_67_cvector)
{
	var_68_float = GetByIndex(var_66_cvector, 0);
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_71_float = GetByIndex(var_66_cvector, 2);
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_65_float = (var_68_float * var_69_float) + (var_71_float * var_72_float);
}


// @pe
void func_2592(int var_21_int)
{
	bool var_23_bool;
	func_2875(var_23_bool);
	if(var_23_bool != 0)
		var_21_int = 2;
	else
		var_21_int = 0;
	
}


void func_33(object var_15_object)
{
	cvector var_26_cvector; cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; string var_30_string; object var_31_object; bool var_32_bool; bool var_33_bool; float var_34_float; cvector var_35_cvector;
	if(var_15_object == null) {
		func_124("fdie");
	} else {
		var_15_object->GetPosition(var_26_cvector);
		@GetPosition(var_27_cvector);
		@GetDirection(var_28_cvector);
		var_29_cvector = var_27_cvector - var_26_cvector;
		var_69_float = GetByIndex(var_29_cvector, 0);
		var_70_float = GetByIndex(var_28_cvector, 0);
		var_72_float = GetByIndex(var_29_cvector, 2);
		var_73_float = GetByIndex(var_28_cvector, 2);
		if(((var_69_float * var_70_float) + (var_72_float * var_73_float)) >= 0)
			var_30_string = "fdie";
		else
			var_30_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_15_object = var_31_object;
		var_80_bool = IsFuncExist(var_15_object, "GetScriptProperty", 2);
		if(var_80_bool != 0) {
			var_15_object->HasScriptProperty(var_32_bool, "Owner");
			if(var_32_bool != 0) {
				var_15_object->GetScriptProperty(var_31_object, "Owner");
				if(var_31_object == null)
					var_15_object = var_31_object;
			}
		}
		var_87_bool = IsFuncExist(var_31_object, "@GetEyesHeight", 1);
		if(var_87_bool != 0) {
			var_31_object->GetEyesHeight(var_34_float);
			var_35_cvector = [0.0, 0.0, 0.0];
			var_88_float = GetByIndex(var_35_cvector, 1);
			var_34_float = var_88_float;
			SetByIndex(var_35_cvector, 1) = var_88_float;
			@LookAsync(var_15_object, "head", var_35_cvector);
			var_33_bool = true;
		} else {
			var_33_bool = false;

		}
		string var_90_string;
		var_30_string = var_90_string;
		func_1998(var_90_string);
		@PlayAnimation("all", var_30_string);
		@WaitForAnimEnd();
		if(var_33_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_30_string);
		@RemoveEnvelope();
		var_31_object = null;
	}
	
}


// @pe
void func_2082(float var_74_float, cvector var_75_cvector)
{
	var_76_float = GetByIndex(var_75_cvector, 0);
	var_77_float = GetByIndex(var_75_cvector, 0);
	var_79_float = GetByIndex(var_75_cvector, 2);
	var_80_float = GetByIndex(var_75_cvector, 2);
	var_74_float = sqrt((var_76_float * var_77_float) + (var_79_float * var_80_float));
}


// @pe
void func_2601(object var_54_object)
{
	object var_55_object;
	var_54_object = var_55_object;
	TaskCall(2);
	func_447(var_56_object, var_55_object);
	TaskReturn();
}


// @pe
void func_2092(float var_62_float, cvector var_63_cvector, cvector var_64_cvector)
{
	cvector var_66_cvector;
	var_63_cvector = var_66_cvector;
	cvector var_67_cvector;
	var_64_cvector = var_67_cvector;
	float var_65_float;
	func_2073(var_65_float, var_66_cvector, var_67_cvector);
	float var_74_float; cvector var_75_cvector;
	var_63_cvector = var_75_cvector;
	func_2082(var_74_float, var_75_cvector);
	float var_83_float; cvector var_84_cvector;
	var_64_cvector = var_84_cvector;
	func_2082(var_83_float, var_84_cvector);
	var_62_float = var_65_float / (var_74_float * var_83_float);
}


// @pe
void func_2609(int var_21_int, object var_22_object)
{
	object var_24_object;
	var_22_object = var_24_object;
	bool var_23_bool;
	func_1821(var_23_bool, var_24_object);
	if(var_23_bool != 0)
		var_21_int = 2;
	else
		var_21_int = 0;
	
}


// @pe
void func_2619(object var_64_object)
{
	object var_65_object;
	var_64_object = var_65_object;
	TaskCall(3);
	func_722(var_65_object);
	TaskReturn();
}


void func_2109(float var_468_float)
{
	object var_470_object;
	@CreateFloatVector(var_470_object);
	var_470_object->add(var_468_float);
	@SendWorldWndMessage(15, var_470_object);
}
EMIT "Stack[-1] = 0";


void func_2627(bool var_28_bool, object var_29_object, bool var_30_bool)
{
	bool var_35_bool; object var_36_object;
	func_1695(var_35_bool, var_36_object, "class");
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 4;
	}
	string var_33_string;
	@GetProperty("class", var_33_string);
	string var_34_string;
	var_36_object->GetProperty("class", var_34_string);
	bool var_47_bool = false;
	if(!var_30_bool) { //@nz
		if(var_33_string == var_34_string)
			var_47_bool = true;
	}
	if(var_47_bool != 0) {
		var_28_bool = true;
		return 4;
	}
	if(var_34_string == "rat") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa8c";
	}
	if(var_34_string == "rat_big") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa8c";
	}
	if(var_34_string == "dog") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa8c";
	}
	if(var_34_string == "grabitel") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa8c";
	}
	if(var_34_string == "bomber") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa8c";
	}
	if(var_34_string == "sanitar") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa8c";
	}
	if(var_34_string == "hunter") {
		var_28_bool = false;
		return 4;
	EMIT "GOTO 0xa8c";
	}
	if(var_34_string == "soldier") {
		var_28_bool = false;
		return 4;
	}
	var_28_bool = true;
}


void func_2119(int var_27_int)
{
	float var_29_float;
	@GetGameTime(var_29_float);
	var_27_int = 1 + (var_29_float / 24);
}


// @pe
void func_1612(bool var_0_bool, bool var_1_bool, int var_20_int)
{
	if(var_20_int != 0)
		return 0;
	bool var_23_bool;
	func_1650(var_23_bool, var_1_bool);
	if(!var_23_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2128(object var_15_object)
{
	bool var_17_bool;
	@IsPlayerActor(var_15_object, var_17_bool);
	if(var_17_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2137(void)
{
	object var_374_object;
	@GetScene(var_374_object);
	object var_376_object;
	func_2039(var_376_object);
	@BroadcastMessage("battle", var_376_object, var_374_object);
}
EMIT "Stack[-1] = 0";


void func_1634(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2148(int var_219_int)
{
	int var_221_int;
	@GetVariable("branch", var_221_int);
	var_221_int = var_219_int;
}


// @pe
void func_2154(object var_29_object)
{
	int var_30_int;
	func_2148(var_30_int);
	if(var_30_int == 1)
		@WorkWithCorpse(var_29_object);
	else
		@Barter(var_29_object);
	
}


// @pe
void func_1650(bool var_23_bool, object var_24_object)
{
	object var_26_object;
	var_24_object = var_26_object;
	bool var_25_bool;
	func_1821(var_25_bool, var_26_object);
	var_25_bool = var_23_bool;
}


void func_2167(int var_24_int, int var_25_int)
{
	if(var_24_int > var_25_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_37_int = 0;
	if(var_24_int != var_25_int) {
		@irand(var_37_int, (var_25_int - var_24_int));
	} else if(var_24_int == 0) {
		return 4;
	}
	var_37_int += var_24_int;
	if(var_37_int == 0)
		return 4;
	int var_45_int;
	func_2414(var_45_int, "Money");
	bool var_38_bool;
	@AddItem(var_38_bool, var_45_int, 0, var_37_int);
	
}


void func_1657(string var_212_string)
{
	var_212_string = "walk";
}


void func_1659(string var_213_string)
{
	var_213_string = "run";
}


// @pe
void func_124(string var_37_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_38_string;
	var_37_string = var_38_string;
	func_1998(var_38_string);
	@PlayAnimation("all", var_37_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_37_string);
	@RemoveEnvelope();
}


// @pe
void func_1661(string var_440_string, int var_441_int)
{
	if(var_441_int == 2) {
		var_440_string = "fire";
		return 0;
	EMIT "GOTO 0x689";
	}
	if(var_441_int == 1) {
		var_440_string = "bullet";
		return 0;
	}
	var_440_string = "phys";
}


void func_646(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1675(cvector var_46_cvector, object var_47_object)
{
	cvector var_50_cvector;
	@GetPosition(var_50_cvector);
	cvector var_51_cvector;
	var_47_object->GetPosition(var_51_cvector);
	var_46_cvector = var_51_cvector - var_50_cvector;
}


// @pe
void func_2702(int var_79_int, object var_80_object)
{
	object var_83_object;
	var_80_object = var_83_object;
	int var_82_int;
	func_2609(var_82_int, var_83_object);
	var_82_int = var_79_int;
}


void func_1682(float var_30_float, object var_31_object)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_31_object->GetPosition(var_36_cvector);
	var_30_float = (var_36_cvector - var_35_cvector) | (var_36_cvector - var_35_cvector);
}


// @pe
void func_2709(object var_118_object)
{
	object var_119_object;
	var_118_object = var_119_object;
	func_2619(var_119_object);
}


void func_2198(string var_225_string)
{
	object var_229_object;
	@CreateInvItem(var_229_object);
	var_229_object->SetItemName(var_225_string);
	var_229_object->SetProperty("Organ", 1);
	int var_230_int;
	var_229_object->GetItemID(var_230_int);
	bool var_231_bool;
	@AddItem(var_231_bool, var_229_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1176(bool var_499_bool, float var_500_float)
{
	float var_503_float; bool var_504_bool;
	@rand(var_503_float);
	if(var_503_float < var_500_float) {

		for(;;) {
			@IsAnimationPlaying(var_504_bool);
			if(!var_504_bool) { //@nz
			} else {
				bool var_507_bool;
				func_1274(var_507_bool);
				if(var_507_bool != 0) {
					var_499_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_499_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1378(var_504_bool);
}


void func_1690(bool var_96_bool, object var_97_object)
{
	bool var_99_bool;
	@IsPlayerActor(var_97_object, var_99_bool);
	var_99_bool = var_96_bool;
}


void func_2715(bool var_21_bool, object var_22_object, object var_23_object, float var_24_float, bool var_25_bool)
{
	object var_29_object;
	var_23_object = var_29_object;
	bool var_28_bool;
	func_2627(var_28_bool, var_29_object, !var_25_bool);
	if(!var_28_bool) { //@nz
		var_21_bool = false;
		return 2;
	}
	bool var_27_bool;
	@CanSee(var_27_bool, var_22_object);
	bool var_67_bool = true;
	if(var_27_bool != 1) {
		float var_69_float; object var_70_object;
		var_22_object = var_70_object;
		func_1682(var_69_float, var_70_object);
		var_78_bool = var_69_float <= (var_24_float * var_24_float);
		if(var_78_bool != 1)
			var_67_bool = false;
	}
	if(var_67_bool != 0) {
		var_21_bool = true;
		return 2;
	}
	var_21_bool = false;
}


void func_1695(bool var_47_bool, object var_48_object, string var_49_string)
{
	var_54_bool = IsFuncExist(var_48_object, "HasProperty", 2);
	if(!var_54_bool) { //@nz
		var_47_bool = false;
		return 2;
	}
	bool var_51_bool;
	var_48_object->HasProperty(var_49_string, var_51_bool);
	var_51_bool = var_47_bool;
}


void func_2215(void)
{
	int var_219_int;
	func_2148(var_219_int);
	if(var_219_int != 1) {
	}
	func_2198("liver");
	func_2198("kidney");
	func_2198("heart");
	func_2198("blood");
}


void func_1707(float var_412_float, object var_413_object, float var_414_float, int var_415_int)
{
	int var_425_int; int var_427_int;
	object var_432_object;
	var_413_object = var_432_object;
	bool var_431_bool;
	func_1695(var_431_bool, var_432_object, "health");
	if(!var_431_bool) //@nz
		var_412_float = 0.0;
	bool var_435_bool; object var_436_object;
	func_1695(var_435_bool, var_436_object, "armor");
	if(!var_435_bool) //@nz
		var_425_int = 0;
	else
		var_436_object->GetProperty("armor", var_425_int);
	string var_440_string; int var_441_int;
	var_415_int = var_441_int;
	func_1661(var_440_string, var_441_int);
	string var_426_string = "armor_" + var_440_string;
	bool var_446_bool; object var_447_object; string var_448_string;
	var_413_object = var_447_object;
	func_1695(var_446_bool, var_447_object, var_448_string);
	if(!var_446_bool) //@nz
		var_427_int = 0;
	else
		var_413_object->GetProperty(var_448_string, var_427_int);

	float var_450_float;
	func_2055(var_450_float, ((var_425_int + var_427_int) / 100.0), (float)1);
	float var_428_float;
	var_450_float = var_428_float;
	float var_429_float;
	var_413_object->GetProperty("health", var_429_float);
	float var_430_float = var_414_float * (1 - var_428_float);
	float var_460_float;
	func_2062(var_460_float, (var_429_float - var_430_float), (float)0, (float)1);
	var_413_object->SetProperty("health", var_460_float);
	bool var_466_bool; object var_467_object;
	var_413_object = var_467_object;
	func_1690(var_466_bool, var_467_object);
	if(var_466_bool != 0) {
		float var_468_float = -var_430_float;
		func_2109(var_468_float);
	}
	var_430_float = var_412_float;
	
}


void func_1203(bool var_0_bool, bool var_300_bool, float var_301_float)
{
	bool var_307_bool; cvector var_308_cvector; cvector var_309_cvector; cvector var_310_cvector; float var_311_float;
	
	for(;;) {
		@IsAnimationPlaying(var_307_bool);
		if(!var_307_bool) //@nz
			break;
		bool var_313_bool;
		func_1274(var_313_bool);
		if(var_313_bool != 0) {
			var_300_bool = true;
			return 10;
		}
		bool var_356_bool;
		func_1821(var_356_bool, var_0_bool);
		if(!var_356_bool) { //@nz
			var_300_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_308_cvector); //@t
		@GetPFPosition(var_309_cvector);
		var_310_cvector = var_308_cvector - var_309_cvector;
		var_311_float = var_310_cvector | var_310_cvector;
		if(var_311_float < (var_301_float * var_301_float)) {
			bool var_361_bool; float var_362_float;
			var_301_float = var_362_float;
			func_1039(var_310_cvector, var_311_float, var_361_bool, var_362_float);
			var_300_bool = true;
			return 10;
		}
		@sync();
	}
	func_1378(var_311_float);
	var_300_bool = false;
}


// @pe
void func_2744(int var_15_int)
{
	var_15_int = 2;
}


// @pe
void func_2747(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_2832(var_24_object);
}


void func_190(void)
{
	bool var_132_bool;
	func_1982(var_132_bool);
	if(!var_132_bool) //@nz
		func_2753();
}


void func_2239(bool var_18_bool)
{
	int var_21_int; bool var_22_bool;
	if(var_18_bool != 0) {
		int var_27_int;
		func_2119(var_27_int);
		func_2167(0, (100 + (var_27_int * 100)));
		@irand(var_21_int, 8);
		if(var_21_int == 0) {
			int var_55_int;
			func_2414(var_55_int, "lemon");
			@AddItem(var_22_bool, var_55_int, 0, 1);
		} else {
				if(var_21_int == 1) {
					int var_61_int;
					func_2414(var_61_int, "rusk");
					@AddItem(var_22_bool, var_61_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_21_int == 2) {
				int var_67_int;
				func_2414(var_67_int, "hook");
				@AddItem(var_22_bool, var_67_int, 0, 1);
			} else if(var_21_int == 4) {
				int var_73_int;
				func_2414(var_73_int, "syringe");
				@AddItem(var_22_bool, var_73_int, 0, 1);
			} else if(var_21_int == 5) {
				int var_79_int;
				func_2414(var_79_int, "watch");
				@AddItem(var_22_bool, var_79_int, 0, 1);
			} else if(var_21_int == 6) {
				int var_85_int;
				func_2414(var_85_int, "razor");
				@AddItem(var_22_bool, var_85_int, 0, 1);
			}
	}
		int var_92_int;
		func_2119(var_92_int);
		func_2167(0, (50 + (var_92_int * 50)));
		@irand(var_21_int, 7);
		if(var_21_int == 0) {
			int var_98_int;
			func_2414(var_98_int, "beads");
			@AddItem(var_22_bool, var_98_int, 0, 1);
		} else if(var_21_int == 1) {
			int var_104_int;
			func_2414(var_104_int, "bracelet");
			@AddItem(var_22_bool, var_104_int, 0, 1);
		} else if(var_21_int == 2) {
			int var_110_int;
			func_2414(var_110_int, "ear_ring");
			@AddItem(var_22_bool, var_110_int, 0, 1);
		} else if(var_21_int == 3) {
			int var_116_int;
			func_2414(var_116_int, "gold_ring");
			@AddItem(var_22_bool, var_116_int, 0, 1);
		} else if(var_21_int == 4) {
			int var_122_int;
			func_2414(var_122_int, "silver_ring");
			@AddItem(var_22_bool, var_122_int, 0, 1);
		} else if(var_21_int == 5) {
			int var_128_int;
			func_2414(var_128_int, "flower");
			@AddItem(var_22_bool, var_128_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_2753(void)
{
}


void func_2754(int var_15_int, object var_16_object)
{
	@Trace("Received steal");
	bool var_18_bool;
	@CanSee(var_18_bool, var_16_object);
	if(var_18_bool != 0) {
		int var_21_int; object var_22_object;
		var_16_object = var_22_object;
		func_2609(var_21_int, var_22_object);
		var_21_int = var_15_int;
	}
	var_15_int = 0;
}


// @pe
void func_2770(object var_63_object)
{
	object var_64_object;
	var_63_object = var_64_object;
	func_2619(var_64_object);
}


// @pe
void func_722(object var_65_object)
{
	object var_72_object;
	func_736(var_68_int, var_69_bool, var_70_float, var_71_int, var_72_object, var_72_object, true, 180.0);
}


// @pe
void func_2776(int var_122_int)
{
	var_122_int = 0;
}


// @pe
void func_730(float var_409_float)
{
	var_409_float = 0.05;
}


// @pe
void func_2779(void)
{
}


// @pe
void func_733(int var_416_int)
{
	var_416_int = 0;
}


void func_1246(bool var_0_bool, bool var_315_bool)
{
	cvector var_321_cvector; cvector var_322_cvector;
	bool var_326_bool;
	func_1821(var_326_bool, var_0_bool);
	if(!var_326_bool) { //@nz
		var_315_bool = false;
		return 10;
	}
	bool var_329_bool;
	float var_325_float;
	func_1335(var_325_float, var_329_bool);
	if(var_329_bool != 0) {
		var_0_bool->GetPFPosition(var_321_cvector); //@t
		@GetPFPosition(var_322_cvector);
		var_0_bool->GetAttackDistance(var_325_float); //@t
		var_315_bool = ((var_321_cvector - var_322_cvector) | (var_321_cvector - var_322_cvector)) <= ((var_325_float + 50) * (var_325_float + 50));
		return 10;
	}
	var_315_bool = false;
}


// @pe
void func_2781(bool var_18_bool)
{
	var_18_bool = false;
}


void func_736(bool var_0_bool, object var_3_object, int var_5_int, object var_72_object, bool var_73_bool, float var_74_float, bool var_149_bool, bool var_241_bool)
{
	float var_86_float; cvector var_87_cvector; cvector var_88_cvector; bool var_90_bool; float var_93_float; cvector var_94_cvector; bool var_95_bool; float var_96_float;
	func_965(var_94_cvector, var_95_bool, var_96_float);
	var_5_int = 0;
	var_121_bool = IsFuncExist(var_72_object, "@GetAttackDistance", 1);
	if(var_121_bool != 0) {
		var_72_object->GetAttackDistance(var_86_float);
		var_86_float += 50;
	} else {
						var_74_float = var_86_float;
	}
	if(var_86_float >= 150)
		var_86_float = 150;
	var_3_object = false;
	var_0_bool = var_72_object;
	bool var_89_bool;
	@IsPlayerActor(var_0_bool, var_89_bool);
	if(var_89_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_127_object;
		func_2039(var_127_object);
		@SendPlayerEnemy(var_72_object, var_127_object);
	}
	if(var_73_bool != 0)
		var_90_bool = false;
	else
		var_90_bool = true;

	
Label_776:
	for(;;) {
		bool var_132_bool = false;
		bool var_133_bool;
		func_1821(var_133_bool, var_0_bool);
		if(var_133_bool != 0) {
			if(!var_3_object) //@nz
				var_132_bool = true;
		}
		if(var_132_bool != 0) {
			func_1378(var_96_float);
			var_0_bool->GetPFPosition(var_87_cvector); //@t
			@GetPFPosition(var_88_cvector);
			var_93_float = (var_87_cvector - var_88_cvector) | (var_87_cvector - var_88_cvector);
			if(var_93_float >= ((400.0 + var_86_float) * (400.0 + var_86_float))) {
				bool var_143_bool; float var_145_float;
				var_86_float = var_145_float;
				TaskCall(4);
				func_1405(var_151_bool, var_143_bool, var_0_bool, var_145_float, 3000.0, true, false);
				TaskReturn();
				if(!var_149_bool) { //@nz
				} else {
					var_90_bool = false;
			} else {
			if(var_93_float >= (var_74_float * var_74_float)) {
				var_0_bool->GetPFPosition(var_94_cvector); //@t
				@CanReachByPF(var_95_bool, var_94_cvector);
				if(!var_95_bool) { //@nz
					bool var_235_bool; float var_237_float;
					var_86_float = var_237_float;
					TaskCall(4);
					func_1405(var_243_bool, var_235_bool, var_0_bool, var_237_float, 3000.0, true, false);
					TaskReturn();
					if(!var_241_bool) { //@nz
						goto Label_948;
					}
					var_90_bool = false;
					goto Label_776;
				}
				if(!var_90_bool) { //@nz
					func_1971(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1378(var_96_float);
					@StopAsync();
					var_90_bool = true;
					bool var_257_bool;
					func_1821(var_257_bool, var_0_bool);
					if(!var_257_bool) { //@nz
						goto Label_948;
					}
				}
				@rand(var_96_float);
				bool var_260_bool;
				var_262_bool = var_96_float < 0.25;
				if(var_262_bool != 1) {
					bool var_263_bool;
					func_1335(true, var_263_bool);
					if(var_263_bool != 1)
						var_260_bool = false;
				}
				if(var_260_bool != 0) {
					@Face(var_0_bool);
					func_1385();
					@PlayAnimation("all", "attack_stay");
					bool var_300_bool; float var_301_float;
					func_1203(var_96_float, var_300_bool, var_301_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1378(var_96_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_518_bool;
					func_1335(var_96_float, var_518_bool);
					var_519_bool = !var_518_bool; //@nz
					if(var_519_bool == 0) goto Label_938;
					bool var_520_bool;
					func_1821(var_520_bool, var_0_bool);
					if(!var_520_bool) { //@nz
						goto Label_948;
					}
					var_0_bool->GetPFPosition(var_87_cvector); //@t
					@GetPFPosition(var_88_cvector);
					if(!(((var_87_cvector - var_88_cvector) | (var_87_cvector - var_88_cvector)) < (var_301_float * var_301_float))) goto Label_938;
					bool var_525_bool; float var_526_float;
					var_74_float = var_526_float;
					func_1039(var_95_bool, var_96_float, var_525_bool, var_526_float);
					var_527_bool = !var_525_bool; //@nz
					if(var_527_bool == 0) goto Label_938;
					goto Label_948;
			}
				bool var_528_bool; float var_529_float;
				var_74_float = var_529_float;
				func_1039(var_95_bool, var_96_float, var_528_bool, var_529_float);
				if(!var_528_bool) { //@nz
					goto Label_948;
				}
				var_90_bool = true;

			}
		Label_938:
			goto Label_947;
			}
			Label_947:
			}
		}
	Label_948:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_89_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_2784(void)
{
}


void func_2786(bool var_25_bool, object var_26_object)
{
	bool var_28_bool;
	@CanSee(var_28_bool, var_26_object);
	var_25_bool = true;
	if(var_28_bool != 1) {
		float var_30_float; object var_31_object;
		var_26_object = var_31_object;
		func_1682(var_30_float, var_31_object);
		var_39_bool = var_30_float <= 2250000;
		if(var_39_bool != 1)
			var_25_bool = false;
	}
}


// @pe
void func_2801(object var_53_object)
{
	object var_54_object;
	var_53_object = var_54_object;
	func_2601(var_54_object);
}


void func_1780(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


// @pe
void func_2807(bool var_42_bool)
{
	var_42_bool = false;
}


void func_1785(bool var_29_bool, object var_30_object)
{
	if(var_30_object == null) {
		var_29_bool = false;
		return 4;
	}
	bool var_36_bool = false;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", 1);
	if(var_39_bool != 0) {
		bool var_40_bool; object var_41_object;
		var_30_object = var_41_object;
		func_1780(var_40_bool, var_41_object);
		if(var_40_bool != 0)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		var_29_bool = false;
		return 4;
	}
	object var_33_object;
	@GetScene(var_33_object);
	if(var_33_object == null) {
		var_29_bool = false;
		return 4;
	}
	object var_34_object;
	var_30_object->GetScene(var_34_object);
	if(var_33_object != var_34_object) {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1274(bool var_313_bool)
{
	bool var_314_bool = false;
	bool var_315_bool;
	func_1246(var_314_bool, var_315_bool);
	if(var_315_bool != 0) {
		bool var_332_bool;
		func_1290(var_313_bool, var_314_bool, var_332_bool);
		if(var_332_bool != 0)
			var_314_bool = true;
	}
	if(var_314_bool != 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


// @pe
void func_2810(void)
{
}


// @pe
void func_2812(bool var_20_bool)
{
	var_20_bool = false;
}


// @pe
void func_2815(void)
{
}


void func_2817(string var_146_string, int var_147_int)
{
	string var_149_string = "idle";
	if(var_147_int != 0)
		var_149_string += var_147_int;
	var_149_string = var_146_string;
}


void func_2824(void)
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2239(true);
}


void func_1290(bool var_0_bool, object var_4_object, bool var_332_bool)
{
	object var_338_object; float var_340_float; cvector var_341_cvector; cvector var_342_cvector;
	@GetScene(var_338_object);
	bool var_339_bool = false;
	
	for(;;) {
		cvector var_343_cvector;
		func_1675(var_343_cvector, var_0_bool);
		var_349_int = -var_343_cvector;
		@FindDirLength(var_340_float, var_349_int, var_4_object);
		if(var_340_float < var_4_object) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_341_cvector); //@t
				@GetPFPosition(var_342_cvector);
				@WaitForAnimEnd();
				func_1378(var_342_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_339_bool = true;
				bool var_354_bool;
				func_1246(var_342_cvector, var_354_bool);
				var_355_bool = !var_354_bool; //@nz
				if(var_355_bool == 0) goto Label_1331;
		}
		for(;;) {
			var_339_bool = var_332_bool;

		}

	Label_1331:
	}
}
EMIT "Stack[-5] = 0";


void func_2832(object var_24_object)
{
	bool var_26_bool;
	var_27_bool = GlobalVars[0];
	if(var_27_bool != 0) {
		@IsOverrideActive(var_26_bool);
		if(!var_26_bool) { //@nz
			object var_29_object;
			var_24_object = var_29_object;
			func_2154(var_29_object);
		}
	}
}


void func_2845(void)
{
	int var_142_int; bool var_143_bool;
	var_142_int = 0;
	
	for(;;) {
		string var_146_string; int var_147_int;
		var_142_int = var_147_int;
		func_2817(var_146_string, var_147_int);
		@HasAnimation(var_143_bool, "all", var_146_string);
		if(!var_143_bool) //@nz
			break;
		var_142_int += 1;
	}
	int var_144_int;
	@irand(var_144_int, var_142_int);
	string var_153_string; int var_154_int;
	var_144_int = var_154_int;
	func_2817(var_153_string, var_154_int);
	@PlayAnimation("all", var_153_string);
	@WaitForAnimEnd();
}


void func_1821(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_1785(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_1695(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


void func_1845(object var_29_object)
{
	string var_43_string;
	if(var_29_object == null)
		return 14;
	bool var_37_bool;
	@IsDead(var_37_bool);
	if(var_37_bool != 0)
		return 14;
	int var_38_int;
	@GetSecondaryAnimationType(var_38_int);
	if(var_38_int < 0)
		return 14;
	cvector var_39_cvector;
	var_29_object->GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_42_cvector = var_40_cvector - var_39_cvector;
	var_48_float = GetByIndex(var_42_cvector, 0);
	var_49_float = GetByIndex(var_41_cvector, 0);
	var_51_float = GetByIndex(var_42_cvector, 2);
	var_52_float = GetByIndex(var_41_cvector, 2);
	if(((var_48_float * var_49_float) + (var_51_float * var_52_float)) >= 0)
		var_43_string = "fhit";
	else
		var_43_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_43_string + "1"), (var_43_string + "2"), -10);
	
}


void func_1335(bool var_0_bool, bool var_263_bool)
{
	bool var_265_bool;
	var_268_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_268_bool != 0) {
		var_0_bool->IsAttacking(var_265_bool); //@t
		var_265_bool = var_263_bool;
	}
	var_263_bool = false;
}


void func_2872(void)
{
	@StopAnimation();
}


void func_2875(bool var_23_bool)
{
	var_23_bool = true;
}


// @pe
void func_2877(bool var_17_bool, object var_18_object, object var_19_object, bool var_20_bool)
{
	object var_22_object;
	var_18_object = var_22_object;
	object var_23_object;
	var_19_object = var_23_object;
	bool var_25_bool;
	var_20_bool = var_25_bool;
	bool var_21_bool;
	func_2715(var_21_bool, var_22_object, var_23_object, 500.0, var_25_bool);
	var_21_bool = var_17_bool;
}


void func_1346(object var_2_object, int var_5_int)
{
	int var_383_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_int != 0) {
		if((var_5_int + -1) > 0)
			return 4;
	}
	float var_382_float;
	@rand(var_382_float);
	float var_389_float;
	func_1396(var_389_float);
	if(var_382_float < var_389_float) {
		@irand(var_383_int, var_2_object);
		@Speak("attack" + (var_383_int + 1));
		int var_394_int;
		func_1394(var_394_int);
		var_5_int = var_394_int;
	}
}


// @pe
void func_2887(object var_95_object)
{
	bool var_96_bool; object var_97_object;
	func_1690(var_96_bool, var_97_object);
	if(var_96_bool != 0) {
		object var_100_object;
		func_2039(var_100_object);
		@ReportReputationChange(var_97_object, var_100_object, -0.07, true);
		func_2239(true);
	}
	func_2215();
	var_239_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1889(object var_16_object, int var_17_int, float var_18_float)
{
	cvector var_28_cvector; object var_29_object; int var_30_int; bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	bool var_37_bool = false;
	bool var_38_bool = false;
	if(var_16_object != 0) {
		if(var_17_int != 4)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		if(var_17_int != 5)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		cvector var_44_cvector; cvector var_45_cvector;
		cvector var_46_cvector; object var_47_object;
		var_16_object = var_47_object;
		func_1675(var_46_cvector, var_47_object);
		var_46_cvector = var_45_cvector;
		func_2045(var_44_cvector, var_45_cvector);
		var_44_cvector = var_28_cvector;
		@CreateVectorVector(var_29_object);
		var_30_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_30_int), var_31_bool, var_32_cvector, var_33_cvector);
			if(!var_31_bool) { //@nz
				break;
			Label_1951:
				var_29_object = null;
	}
			object var_106_object;
			var_16_object = var_106_object;
			func_1845(var_106_object);
		}
		if((var_33_cvector | var_28_cvector) >= 0.70710677)
			var_29_object->add(var_32_cvector);
		var_30_int += 1;
	}
	int var_34_int;
	var_29_object->size(var_34_int);
	if(var_34_int == 0) goto Label_1951;
	int var_35_int;
	@irand(var_35_int, var_34_int);
	cvector var_36_cvector;
	var_29_object->get(var_36_cvector, var_35_int);
	object var_61_object; int var_62_int; float var_63_float; cvector var_64_cvector; cvector var_65_cvector;
	var_16_object = var_61_object;
	var_17_int = var_62_int;
	var_18_float = var_63_float;
	var_36_cvector = var_64_cvector;
	var_65_cvector = -var_28_cvector;
	func_1957(var_63_float, var_64_cvector, var_65_cvector);
}


void func_1378(bool var_0_bool)
{
	func_2128(var_0_bool);
}


void func_1383(int var_473_int)
{
	var_473_int = 0;
}


void func_1385(void)
{
	func_1998("attack_stay");
}


// @pe
void func_1390(void)
{
}


void func_2414(int var_45_int, string var_46_string)
{
	int var_48_int;
	@GetInvItemByName(var_48_int, var_46_string);
	var_48_int = var_45_int;
}


void func_1392(bool var_498_bool)
{
	var_498_bool = true;
}


void func_1394(int var_394_int)
{
	var_394_int = 1;
}


// @pe
void func_2419(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	TaskCall(0);
	func_0(var_14_object);
	TaskReturn();
}


void func_1396(float var_389_float)
{
	var_389_float = 0.5;
}


void func_1405(object var_2_object, bool var_143_bool, object var_144_object, float var_145_float, float var_146_float, bool var_147_bool, bool var_148_bool)
{
	object var_156_object;
	func_2128(var_156_object);
	@SetTimer(1, 5);
	bool var_154_bool;
	@CanSee(var_154_bool, var_156_object);
	if(var_154_bool != 0) {
		var_2_object = true;
		object var_160_object;
		var_144_object = var_160_object;
		func_1987(var_160_object);
	} else {
		var_2_object = false;
	}
	bool var_167_bool; object var_168_object;
	func_1690(var_167_bool, var_168_object);
	if(var_167_bool != 0) {
		object var_171_object;
		func_2039(var_171_object);
		@SendPlayerEnemy(var_168_object, var_171_object);
	}
	bool var_172_bool; object var_173_object; float var_174_float; float var_175_float; bool var_176_bool; bool var_177_bool;
	var_144_object = var_173_object;
	var_145_float = var_174_float;
	var_146_float = var_175_float;
	var_147_bool = var_176_bool;
	var_148_bool = var_177_bool;
	bool var_155_bool;
	func_1510(var_154_bool, var_155_bool, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool);
	var_172_bool = var_155_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_155_bool = var_143_bool;
	
}


void func_392(bool var_1_bool)
{
	@KillTimer(110);
	var_1_bool = false;
	if(var_0_bool != 0)
		func_2872();
	else
		@Stop();
	
}


void func_414(bool var_1_bool, object var_14_object)
{
	if(var_1_bool != 0)
		return 4;
	bool var_17_bool;
	@IsPlayerActor(var_14_object, var_17_bool);
	if(!var_17_bool) //@nz
		return 4;
	int var_21_int; object var_22_object;
	var_14_object = var_22_object;
	func_2592(var_22_object);
	int var_18_int;
	var_21_int = var_18_int;
	if(var_18_int > 0) {
		if(var_18_int > 1)
			func_392(var_18_int);
		object var_30_object;
		var_14_object = var_30_object;
		func_2601(var_30_object);
		var_1_bool = true;
		@SetTimer(110, 5.0);
	}
}


// @pe
void func_2464(bool var_16_bool, object var_17_object, string var_18_string)
{
	if(var_18_string == "unholster") {
		bool var_21_bool; object var_22_object;
		var_17_object = var_22_object;
		func_2781(var_22_object);
		var_21_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x9be";
	}
	if(var_18_string == "player_shot") {
		bool var_25_bool; object var_26_object;
		var_17_object = var_26_object;
		func_2786(var_25_bool, var_26_object);
		var_25_bool = var_16_bool;
		return 0;
	EMIT "GOTO 0x9be";
	}
	if(var_18_string == "battle") {
		bool var_42_bool; object var_43_object;
		var_17_object = var_43_object;
		func_2807(var_43_object);
		var_42_bool = var_16_bool;
		return 0;
	}
	var_16_bool = false;
}


void func_1957(object var_18_object, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_25_object;
	@GetScene(var_25_object);
	object var_26_object;
	@AddActorByType(var_26_object, "scripted", var_25_object, var_21_cvector, var_22_cvector, "blood_dir.xml");
	object var_29_object;
	var_18_object = var_29_object;
	func_1845(var_29_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1971(object var_88_object)
{
	cvector var_92_cvector;
	var_88_object->GetPosition(var_92_cvector);
	cvector var_93_cvector;
	@GetPosition(var_93_cvector);
	cvector var_94_cvector = var_92_cvector - var_93_cvector;
	var_95_float = GetByIndex(var_94_cvector, 0);
	var_96_float = GetByIndex(var_94_cvector, 2);
	@RotateAsync(var_95_float, var_96_float);
}


void func_1468(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1634(var_12_object);
}


void func_1982(bool var_132_bool)
{
	bool var_134_bool;
	@IsLoaded(var_134_bool);
	var_134_bool = var_132_bool;
}


void func_447(bool var_0_bool, object var_55_object)
{
	var_0_bool = var_55_object;
	bool var_62_bool;
	func_498(var_62_bool);
	cvector var_60_cvector;
	@GetDirection(var_60_cvector);
	cvector var_70_cvector;
	func_1675(var_70_cvector, var_0_bool);
	cvector var_61_cvector;
	var_70_cvector = var_61_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_60_cvector = var_77_cvector;
	var_61_cvector = var_78_cvector;
	func_2092(var_76_float, var_77_cvector, var_78_cvector);
	if(var_76_float < 0) {
		func_1971(var_0_bool);
		var_62_bool = true;
	} else {
		@Sleep(1.5, var_62_bool);
	}
	if(var_62_bool != 0) {
		func_1971(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


// @pe
void func_2496(object var_46_object, string var_47_string)
{
	if(var_47_string == "unholster") {
		object var_50_object;
		var_46_object = var_50_object;
		func_2784();
	} else if(var_47_string == "player_shot") {
			object var_53_object;
			var_46_object = var_53_object;
			func_2801(var_53_object);
	}
Label_2520:
	for(;;) {

	}
	
	if(!(var_47_string == "battle")) goto Label_2520;
	object var_121_object;
	var_46_object = var_121_object;
	func_2810();
}


void func_1987(object var_16_object)
{
	float var_19_float;
	var_16_object->GetEyesHeight(var_19_float);
	cvector var_20_cvector = [0.0, 0.0, 0.0];
	var_21_float = GetByIndex(var_20_cvector, 1);
	var_19_float = var_21_float;
	SetByIndex(var_20_cvector, 1) = var_21_float;
	@LookAsync(var_16_object, "head", var_20_cvector);
}


void func_965(bool var_1_bool, object var_2_object, object var_4_object)
{
	bool var_100_bool; bool var_101_bool; cvector var_102_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_100_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_100_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_101_bool, ("attack" + (var_2_object + 1)));
			if(!var_101_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_102_cvector, "all", "bjump");
		var_116_float = GetByIndex(var_102_cvector, 2);
		var_4_object = -var_116_float;

	}
}


void func_1998(string var_38_string)
{
	bool var_47_bool; int var_48_int; bool var_49_bool; int var_50_int; bool var_51_bool; float var_52_float; cvector var_53_cvector; cvector var_54_cvector;
	@IsExisting3DSound(var_47_bool, var_38_string);
	if(!var_47_bool) { //@nz
		var_48_int = 0;

		for(;;) {
			@IsExisting3DSound(var_49_bool, (var_38_string + (var_48_int + 1)));
			if(!var_49_bool) { //@nz
				break;
			Label_2018:
				@irand(var_50_int, var_48_int);
				var_38_string += (var_50_int + 1);
	}
			@Is3DSoundLoaded(var_51_bool, var_38_string);
			if(var_51_bool != 0) {
				@GetEyesHeight(var_52_float);
				@GetDirection(var_53_cvector);
				var_54_cvector = var_53_cvector * 50;
				var_65_float = GetByIndex(var_54_cvector, 1);
				SetByIndex(var_54_cvector, 1) = (var_65_float + var_52_float);
				@PlayGlobalSound(var_38_string, var_54_cvector);
			}
		}
		var_48_int += 1;
	}
	var_60_bool = !var_48_int; //@nz
	if(var_60_bool == 0) goto Label_2018;
}


void func_2521(bool var_13_bool, object var_14_object)
{
	bool var_16_bool;
	bool var_17_bool = false;
	bool var_18_bool; object var_19_object;
	var_14_object = var_19_object;
	func_2781(var_19_object);
	if(var_18_bool != 0) {
		bool var_20_bool; object var_21_object;
		func_1690(var_20_bool, var_21_object);
		if(var_20_bool != 0)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_21_object->IsWeaponHolstered(var_16_bool);
		if(!var_16_bool) //@nz
			var_13_bool = true;
	}
	var_13_bool = false;
}


void func_1510(bool var_0_bool, bool var_1_bool, bool var_172_bool, object var_173_object, float var_174_float, float var_175_float, bool var_176_bool, bool var_177_bool)
{
	bool var_186_bool; object var_188_object; cvector var_189_cvector; cvector var_190_cvector; float var_192_float; object var_193_object;
	var_0_bool = false;
	var_1_bool = var_173_object;
	bool var_187_bool;
	var_177_bool = var_187_bool;
	
	for(;;) {
		bool var_194_bool; object var_195_object;
		var_173_object = var_195_object;
		func_1650(var_194_bool, var_195_object);
		if(!var_194_bool) { //@nz
			var_172_bool = false;
			return 16;
		}
		var_173_object->GetPosition(var_189_cvector);
		@GetPosition(var_190_cvector);
		var_192_float = (var_189_cvector - var_190_cvector) | (var_189_cvector - var_190_cvector);
		bool var_199_bool = false;
		if(var_175_float > 0) {
			if(var_192_float > (var_175_float * var_175_float))
				var_199_bool = true;
		}
		if(var_199_bool != 0) {
			@Stop();
			var_172_bool = false;
			return 16;
		}
		if(var_192_float > (var_174_float * var_174_float)) {
			var_173_object->GetPFPosition(var_189_cvector);
			@FindPathTo(var_193_object, var_189_cvector);
			if(var_193_object != null) {
				var_193_object = var_188_object;
				var_193_object = null;
			}
			if(var_188_object != null) {
				if(var_187_bool == 0) goto Label_1563;
				var_187_bool = false;
				@RotatePath(var_188_object, var_186_bool);
				if(!var_186_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_212_string;
						func_1657(var_212_string);
						string var_213_string;
						func_1659(var_213_string);
						@FollowPath(var_188_object, var_176_bool, var_186_bool, var_212_string, var_213_string);
						if(!var_186_bool) { //@nz
							if(var_0_bool == 0) goto Label_1582;
							var_188_object = null;
						}
					EMIT "GOTO 0x62f";

					Label_1582:
						} else {
					var_188_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_186_bool);
					if(!var_186_bool) { //@nz
						if(var_0_bool != 0) {
							var_188_object = null;
							goto Label_1610;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1610;
		}
			var_193_object = null;
			goto Label_1608;

		Label_1608:
			var_188_object = null;

		}
	Label_1610:
		for(;;) {
			var_172_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1000(bool var_0_bool, float var_398_float, int var_399_int)
{
	object var_403_object; float var_404_float; float var_405_float;
	@GetVictim((var_398_float * 0.9), var_403_object);
	@ReportAttack(var_0_bool);
	if(var_403_object == var_0_bool) {
		float var_409_float; object var_410_object; int var_411_int;
		var_403_object = var_410_object;
		var_399_int = var_411_int;
		func_730(var_411_int);
		var_409_float = var_404_float;
		float var_412_float; object var_413_object; float var_414_float; int var_415_int;
		var_403_object = var_413_object;
		int var_416_int; object var_417_object; int var_418_int;
		var_403_object = var_417_object;
		var_399_int = var_418_int;
		func_733(var_418_int);
		var_416_int = var_415_int;
		func_1707(var_412_float, var_413_object, var_414_float, var_415_int);
		var_412_float = var_405_float;
		int var_473_int;
		func_1383(var_473_int);
		@ReportHit(var_0_bool, var_473_int, var_405_float, var_414_float);
		object var_474_object; float var_475_float;
		var_403_object = var_474_object;
		var_405_float = var_475_float;
		func_1390();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2544(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_2784();
}


void func_498(bool var_0_bool)
{
	func_1987(var_0_bool);
}


// @pe
void func_2550(object var_15_object)
{
	bool var_16_bool; object var_17_object;
	func_1690(var_16_bool, var_17_object);
	if(var_16_bool != 0) {
		object var_20_object;
		func_2039(var_20_object);
		@ReportReputationChange(var_17_object, var_20_object, -0.03);
	}
}


void func_2039(object var_100_object)
{
	object var_102_object;
	@self(var_102_object);
	var_102_object = var_100_object;
}
EMIT "Stack[-1] = 0";


void func_2045(cvector var_44_cvector, cvector var_45_cvector)
{
	float var_53_float = sqrt(var_45_cvector | var_45_cvector);
	if(var_53_float < 0.000001)
		var_44_cvector = [0.0, 0.0, 0.0];
	var_44_cvector = var_45_cvector / var_53_float;
}


