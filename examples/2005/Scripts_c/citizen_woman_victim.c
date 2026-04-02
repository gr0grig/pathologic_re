// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2629(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			object var_20_object;
			var_13_bool = var_20_object;
			func_2632(var_20_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_2638();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		@SensePlayerOnly(true);
		func_2696();
		func_171();
	
		for(;;) {
			var_2_bool = false;
			func_432(var_11_cvector, var_12_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2629(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_23_object;
			var_13_bool = var_23_object;
			func_2632(var_23_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2434(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2517(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_66_object;
			var_13_bool = var_66_object;
			func_2527(var_66_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_13_object = var_19_object;
		object var_20_object;
		var_14_cvector = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		func_2730(var_19_object, var_20_object, var_21_bool);
		bool var_18_bool;
		if(var_18_bool != 0) {
			int var_65_int; object var_66_object; bool var_67_bool;
			var_13_object = var_66_object;
			var_15_bool = var_67_bool;
			func_2535(var_66_object, var_67_bool);
			var_65_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_367(var_17_int);
				object var_101_object;
				var_13_object = var_101_object;
				func_2545(var_101_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2619(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_23_object;
			var_13_bool = var_23_object;
			func_2622();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_13_cvector = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_2348(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_367(var_16_int);
			object var_48_object; string var_49_string;
			var_13_cvector = var_48_object;
			var_14_bool = var_49_string;
			func_2380(var_48_object, var_49_string);
		} else {
			int var_132_int; string var_133_string; object var_134_object;
			var_14_bool = var_133_string;
			var_13_cvector = var_134_object;
			func_2624(var_134_object);
			var_132_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_308;
			if(var_16_int > 1)
				func_367(var_16_int);
			string var_139_string; object var_140_object;
			var_14_bool = var_139_string;
			var_13_cvector = var_140_object;
			func_2627();
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		bool var_14_bool; string var_15_string;
		func_2447(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_367(var_15_string);
			string var_24_string;
			var_13_bool = var_24_string;
			func_2463(var_24_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		bool var_14_bool; object var_15_object;
		func_2405(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_367(var_15_object);
			object var_27_object;
			var_13_bool = var_27_object;
			func_2428(var_27_object);
		} else {
			object var_29_object;
			func_392(var_29_object, var_29_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_14_object;
		func_392(var_14_object, var_14_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_367(var_12_bool);
		func_2638();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_367(var_13_bool);
		object var_15_object;
		var_13_bool = var_15_object;
		func_2324();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		@RequestClearPath(var_13_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2629(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_22_object;
			var_13_bool = var_22_object;
			func_2632(var_22_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2434(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2517(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_65_object;
			var_13_bool = var_65_object;
			func_2527(var_65_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_13_object = var_19_object;
		object var_20_object;
		var_14_cvector = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		func_2730(var_19_object, var_20_object, var_21_bool);
		bool var_18_bool;
		if(var_18_bool != 0) {
			int var_65_int; object var_66_object; bool var_67_bool;
			var_13_object = var_66_object;
			var_15_bool = var_67_bool;
			func_2535(var_66_object, var_67_bool);
			var_65_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_770();
				object var_100_object;
				var_13_object = var_100_object;
				func_2545(var_100_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2619(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_22_object;
			var_13_bool = var_22_object;
			func_2622();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_13_cvector = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_2348(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_770();
			object var_47_object; string var_48_string;
			var_13_cvector = var_47_object;
			var_14_bool = var_48_string;
			func_2380(var_47_object, var_48_string);
		} else {
			int var_131_int; string var_132_string; object var_133_object;
			var_14_bool = var_132_string;
			var_13_cvector = var_133_object;
			func_2624(var_133_object);
			var_131_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_653;
			if(var_16_int > 1)
				func_770();
			string var_138_string; object var_139_object;
			var_14_bool = var_138_string;
			var_13_cvector = var_139_object;
			func_2627();
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		string var_15_string;
		var_13_bool = var_15_string;
		bool var_14_bool;
		func_2447(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_770();
			string var_23_string;
			var_13_bool = var_23_string;
			func_2463(var_23_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_770();
		func_2638();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_15_object;
		var_13_bool = var_15_object;
		bool var_14_bool;
		func_2405(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_770();
			object var_26_object;
			var_13_bool = var_26_object;
			func_2428(var_26_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2629(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_24_object;
			var_13_bool = var_24_object;
			func_2632(var_24_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2434(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2517(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_67_object;
			var_13_bool = var_67_object;
			func_2527(var_67_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_13_object = var_19_object;
		object var_20_object;
		var_14_cvector = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		func_2730(var_19_object, var_20_object, var_21_bool);
		bool var_18_bool;
		if(var_18_bool != 0) {
			int var_65_int; object var_66_object; bool var_67_bool;
			var_13_object = var_66_object;
			var_15_bool = var_67_bool;
			func_2535(var_66_object, var_67_bool);
			var_65_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_974();
				object var_102_object;
				var_13_object = var_102_object;
				func_2545(var_102_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_2619(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_24_object;
			var_13_bool = var_24_object;
			func_2622();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_13_cvector = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_2348(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_974();
			object var_49_object; string var_50_string;
			var_13_cvector = var_49_object;
			var_14_bool = var_50_string;
			func_2380(var_49_object, var_50_string);
		} else {
			int var_133_int; string var_134_string; object var_135_object;
			var_14_bool = var_134_string;
			var_13_cvector = var_135_object;
			func_2624(var_135_object);
			var_133_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_959;
			if(var_16_int > 1)
				func_974();
			string var_140_string; object var_141_object;
			var_14_bool = var_140_string;
			var_13_cvector = var_141_object;
			func_2627();
		}
	Label_959:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		string var_15_string;
		var_13_bool = var_15_string;
		bool var_14_bool;
		func_2447(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_974();
			string var_25_string;
			var_13_bool = var_25_string;
			func_2463(var_25_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_974();
		object var_16_object;
		var_13_bool = var_16_object;
		func_2324();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		if(var_13_bool != 111)
			return 4;
		bool var_20_bool;
		func_1731(var_20_bool, var_0_bool);
		if(!var_20_bool) { //@nz
			func_974();
			return 4;
		}
		cvector var_16_cvector;
		@GetDirection(var_16_cvector);
		cvector var_57_cvector;
		func_1658(var_57_cvector, var_0_bool);
		cvector var_17_cvector;
		var_57_cvector = var_17_cvector;
		float var_63_float; cvector var_64_cvector; cvector var_65_cvector;
		var_16_cvector = var_64_cvector;
		var_17_cvector = var_65_cvector;
		func_1992(var_63_float, var_64_cvector, var_65_cvector);
		if(var_63_float < 0.49999997)
			func_1881(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_974();
		func_2638();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		object var_15_object;
		var_13_bool = var_15_object;
		bool var_14_bool;
		func_2405(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_974();
			object var_28_object;
			var_13_bool = var_28_object;
			func_2428(var_28_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_1240(var_12_bool);
		func_2638();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, int var_7_int, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		cvector var_18_cvector; float var_19_float; cvector var_20_cvector; float var_21_float;
		if(var_13_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_18_cvector);
			@FindDirLength(var_19_float, var_18_cvector, 7000.0);
			cvector var_27_cvector;
			func_1085(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_1256(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_1239;
			@Stop();
			cvector var_85_cvector;
			func_1653(var_85_cvector);
			var_1_bool = var_85_cvector + var_20_cvector;
		}
	Label_1239:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_1240(var_13_bool);
		object var_15_object;
		var_13_bool = var_15_object;
		func_2324();
	}

}


task task_5
{
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		cvector var_18_cvector; float var_19_float; cvector var_20_cvector; float var_21_float;
		if(var_13_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_18_cvector);
			@FindDirLength(var_19_float, var_18_cvector, 7000.0);
			cvector var_27_cvector;
			func_1272(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_1443(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_1426;
			@Stop();
			cvector var_85_cvector;
			func_1653(var_85_cvector);
			var_1_bool = var_85_cvector + var_20_cvector;
		}
	Label_1426:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_1427(var_13_bool);
		object var_15_object;
		var_13_bool = var_15_object;
		func_2324();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		func_1621(var_12_bool);
		func_2638();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, int var_13_int)
	{
		cvector var_18_cvector; float var_19_float; cvector var_20_cvector; float var_21_float;
		if(var_13_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_18_cvector);
			@FindDirLength(var_19_float, var_18_cvector, 7000.0);
			cvector var_27_cvector;
			func_1466(var_21_float, var_27_cvector, 1.7453294);
			var_27_cvector = var_20_cvector;
			var_21_float = var_20_cvector | var_20_cvector;
			bool var_57_bool = false;
			if(var_21_float >= 2500.0) {
				bool var_60_bool;
				var_64_bool = var_21_float >= ((var_19_float * var_19_float) * 2.25);
				if(var_64_bool != 1) {
					bool var_65_bool;
					func_1637(true, var_65_bool);
					if(var_65_bool != 1)
						var_60_bool = false;
				}
				if(var_60_bool != 0)
					var_57_bool = true;
			}
			if(var_57_bool == 0) goto Label_1620;
			@Stop();
			cvector var_85_cvector;
			func_1653(var_85_cvector);
			var_1_bool = var_85_cvector + var_20_cvector;
		}
	Label_1620:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
	{
		func_1621(var_13_object);
		object var_15_object;
		var_13_object = var_15_object;
		func_2324();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, string var_14_string)
{
	float var_16_float;
	if(var_14_string == "health") {
		@GetProperty("health", var_16_float);
		if(var_16_float <= 0)
			@SignalDeath(var_13_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_2303(var_14_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
{
	object var_17_object;
	var_13_object = var_17_object;
	int var_18_int;
	var_14_int = var_18_int;
	float var_19_float;
	var_15_float = var_19_float;
	func_1799(var_17_object, var_18_int, var_19_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_19_object;
	var_13_object = var_19_object;
	int var_20_int;
	var_14_int = var_20_int;
	float var_21_float;
	var_15_float = var_21_float;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	func_1867(var_21_float, var_22_cvector, var_23_cvector);
}


// @pe
void func_0(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_33(var_16_object);
	object var_96_object;
	var_15_object = var_96_object;
	func_2739(var_96_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2051(int var_21_int, int var_22_int)
{
	if(var_21_int > var_22_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_34_int = 0;
	if(var_21_int != var_22_int) {
		@irand(var_34_int, (var_22_int - var_21_int));
	} else if(var_21_int == 0) {
		return 4;
	}
	var_34_int += var_21_int;
	if(var_34_int == 0)
		return 4;
	int var_42_int;
	func_2298(var_42_int, "Money");
	bool var_35_bool;
	@AddItem(var_35_bool, var_42_int, 0, var_34_int);
	
}


void func_517(bool var_158_bool)
{
	var_158_bool = false;
}


void func_519(object var_152_object, cvector var_153_cvector)
{
	object var_155_object;
	@FindShiftedPathTo(var_155_object, var_153_cvector);
	var_155_object = var_152_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1050(object var_68_object)
{
	@Face(var_68_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_78_object;
	func_1115(var_70_cvector, var_71_bool, var_78_object, var_78_object);
}


void func_33(object var_16_object)
{
	cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; string var_31_string; object var_32_object; bool var_33_bool; bool var_34_bool; float var_35_float; cvector var_36_cvector;
	if(var_16_object == null) {
		func_124("fdie");
	} else {
		var_16_object->GetPosition(var_27_cvector);
		@GetPosition(var_28_cvector);
		@GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		if(((var_70_float * var_71_float) + (var_73_float * var_74_float)) >= 0)
			var_31_string = "fdie";
		else
			var_31_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", 2);
		if(var_81_bool != 0) {
			var_16_object->HasScriptProperty(var_33_bool, "Owner");
			if(var_33_bool != 0) {
				var_16_object->GetScriptProperty(var_32_object, "Owner");
				if(var_32_object == null)
					var_16_object = var_32_object;
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", 1);
		if(var_88_bool != 0) {
			var_32_object->GetEyesHeight(var_35_float);
			var_36_cvector = [0.0, 0.0, 0.0];
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			@LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = true;
		} else {
			var_34_bool = false;

		}
		string var_91_string;
		var_31_string = var_91_string;
		func_1908(var_91_string);
		@PlayAnimation("all", var_31_string);
		@WaitForAnimEnd();
		if(var_34_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_31_string);
		@RemoveEnvelope();
		var_32_object = null;
	}
	
}


void func_2082(string var_226_string)
{
	object var_230_object;
	@CreateInvItem(var_230_object);
	var_230_object->SetItemName(var_226_string);
	var_230_object->SetProperty("Organ", 1);
	int var_231_int;
	var_230_object->GetItemID(var_231_int);
	bool var_232_bool;
	@AddItem(var_232_bool, var_230_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_2099(void)
{
	int var_220_int;
	func_2018(var_220_int);
	if(var_220_int != 1) {
	}
	func_2082("liver");
	func_2082("kidney");
	func_2082("heart");
	func_2082("blood");
}


// @pe
void func_2619(int var_16_int)
{
	var_16_int = 0;
}


void func_1085(bool var_0_bool, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_bool->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1955(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1955(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


// @pe
void func_2622(void)
{
}


// @pe
void func_2624(int var_133_int)
{
	var_133_int = 0;
}


// @pe
void func_2627(void)
{
}


// @pe
void func_2629(int var_16_int)
{
	var_16_int = 2;
}


// @pe
void func_2632(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_2704(var_25_object);
}


void func_2123(bool var_15_bool)
{
	int var_18_int; bool var_19_bool;
	if(var_15_bool != 0) {
		int var_24_int;
		func_2009(var_24_int);
		func_2051(0, (100 + (var_24_int * 100)));
		@irand(var_18_int, 8);
		if(var_18_int == 0) {
			int var_52_int;
			func_2298(var_52_int, "lemon");
			@AddItem(var_19_bool, var_52_int, 0, 1);
		} else {
				if(var_18_int == 1) {
					int var_58_int;
					func_2298(var_58_int, "rusk");
					@AddItem(var_19_bool, var_58_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_18_int == 2) {
				int var_64_int;
				func_2298(var_64_int, "hook");
				@AddItem(var_19_bool, var_64_int, 0, 1);
			} else if(var_18_int == 4) {
				int var_70_int;
				func_2298(var_70_int, "syringe");
				@AddItem(var_19_bool, var_70_int, 0, 1);
			} else if(var_18_int == 5) {
				int var_76_int;
				func_2298(var_76_int, "watch");
				@AddItem(var_19_bool, var_76_int, 0, 1);
			} else if(var_18_int == 6) {
				int var_82_int;
				func_2298(var_82_int, "razor");
				@AddItem(var_19_bool, var_82_int, 0, 1);
			}
	}
		int var_89_int;
		func_2009(var_89_int);
		func_2051(0, (50 + (var_89_int * 50)));
		@irand(var_18_int, 7);
		if(var_18_int == 0) {
			int var_95_int;
			func_2298(var_95_int, "beads");
			@AddItem(var_19_bool, var_95_int, 0, 1);
		} else if(var_18_int == 1) {
			int var_101_int;
			func_2298(var_101_int, "bracelet");
			@AddItem(var_19_bool, var_101_int, 0, 1);
		} else if(var_18_int == 2) {
			int var_107_int;
			func_2298(var_107_int, "ear_ring");
			@AddItem(var_19_bool, var_107_int, 0, 1);
		} else if(var_18_int == 3) {
			int var_113_int;
			func_2298(var_113_int, "gold_ring");
			@AddItem(var_19_bool, var_113_int, 0, 1);
		} else if(var_18_int == 4) {
			int var_119_int;
			func_2298(var_119_int, "silver_ring");
			@AddItem(var_19_bool, var_119_int, 0, 1);
		} else if(var_18_int == 5) {
			int var_125_int;
			func_2298(var_125_int, "flower");
			@AddItem(var_19_bool, var_125_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_2638(void)
{
}


// @pe
void func_2639(bool var_19_bool)
{
	var_19_bool = false;
}


// @pe
void func_2642(void)
{
}


void func_2644(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	@CanSee(var_29_bool, var_27_object);
	var_26_bool = true;
	if(var_29_bool != 1) {
		float var_31_float; object var_32_object;
		var_27_object = var_32_object;
		func_1665(var_31_float, var_32_object);
		var_40_bool = var_31_float <= 4000000;
		if(var_40_bool != 1)
			var_26_bool = false;
	}
}


void func_1621(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1115(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_78_object)
{
	float var_85_float; cvector var_87_cvector; float var_88_float;
	cvector var_89_cvector;
	func_1085(var_88_float, var_89_cvector, 1.7453294);
	cvector var_84_cvector;
	var_89_cvector = var_84_cvector;
	if((var_84_cvector | var_84_cvector) < 2500.0) {
		cvector var_121_cvector;
		func_1085(var_88_float, var_121_cvector, 2.6179938);
		var_121_cvector = var_84_cvector;
		var_85_float = var_84_cvector | var_84_cvector;
		if(var_85_float < 2500.0) {
			var_126_float = sqrt(var_85_float);
			@Trace("Can't retreat, distance: " + var_126_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_129_float = GetByIndex(var_84_cvector, 0);
	var_130_float = GetByIndex(var_84_cvector, 2);
	@Rotate(var_129_float, var_130_float);
	cvector var_131_cvector;
	func_1653(var_131_cvector);
	@SetTimer(120, 0.5);
	
Label_1157:
	bool var_86_bool;
	@MovePoint((var_131_cvector + var_84_cvector), 1, var_86_bool);
	if(var_86_bool != 0) {
		if(var_78_object == null) {
			goto Label_1187;
		EMIT "GOTO 0x4a1";

		Label_1187:
			for(;;) {
				return 10;
		}
			cvector var_139_cvector;
			func_1085(var_88_float, var_139_cvector, 2.6179938);
			var_139_cvector = var_87_cvector;
			if((var_87_cvector | var_87_cvector) >= 2500.0) {
				cvector var_143_cvector;
				func_1653(var_143_cvector);
				var_1_bool = var_143_cvector + var_87_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1157; //@nz

	}
}


// @pe
void func_2659(object var_56_object)
{
	object var_57_object;
	var_56_object = var_57_object;
	TaskCall(6);
	func_1496(var_58_object, var_59_cvector, var_60_bool, var_57_object);
	TaskReturn();
}


void func_1637(bool var_0_bool, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_1658(var_70_cvector, var_0_bool);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1965(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


// @pe
void func_2667(bool var_43_bool, object var_44_object)
{
	object var_46_object;
	var_44_object = var_46_object;
	bool var_45_bool;
	func_2644(var_45_bool, var_46_object);
	var_45_bool = var_43_bool;
}


// @pe
void func_2674(object var_131_object)
{
	object var_132_object;
	var_131_object = var_132_object;
	func_2659(var_132_object);
}


void func_1653(cvector var_85_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	var_87_cvector = var_85_cvector;
}


// @pe
void func_2680(bool var_21_bool)
{
	var_21_bool = false;
}


void func_1658(cvector var_47_cvector, object var_48_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_48_object->GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
}


// @pe
void func_2683(void)
{
}


// @pe
void func_124(string var_38_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_39_string;
	var_38_string = var_39_string;
	func_1908(var_39_string);
	@PlayAnimation("all", var_38_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_38_string);
	@RemoveEnvelope();
}


void func_2685(void)
{
	object var_38_object;
	@GetActiveScene(var_38_object);
	object var_40_object;
	func_1949(var_40_object);
	@BroadcastMessage("killme", var_40_object, var_38_object);
}
EMIT "Stack[-1] = 0";


void func_1665(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


void func_2696(void)
{
	var_14_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2123(false);
}


void func_1673(bool var_97_bool, object var_98_object)
{
	bool var_100_bool;
	@IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
}


void func_1678(bool var_42_bool, object var_43_object, string var_44_string)
{
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", 2);
	if(!var_49_bool) { //@nz
		var_42_bool = false;
		return 2;
	}
	bool var_46_bool;
	var_43_object->HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
}


void func_2704(object var_25_object)
{
	bool var_27_bool;
	var_28_bool = GlobalVars[0];
	if(var_28_bool != 0) {
		@IsOverrideActive(var_27_bool);
		if(!var_27_bool) { //@nz
			object var_30_object;
			var_25_object = var_30_object;
			func_2038(var_30_object);
		}
	EMIT "GOTO 0xaa0";
	}
	func_2685();
}


void func_1690(bool var_35_bool, object var_36_object)
{
	bool var_38_bool;
	var_36_object->IsDead(var_38_bool);
	var_38_bool = var_35_bool;
}


void func_1695(bool var_24_bool, object var_25_object)
{
	if(var_25_object == null) {
		var_24_bool = false;
		return 4;
	}
	bool var_31_bool = false;
	var_34_bool = IsFuncExist(var_25_object, "IsDead", 1);
	if(var_34_bool != 0) {
		bool var_35_bool; object var_36_object;
		var_25_object = var_36_object;
		func_1690(var_35_bool, var_36_object);
		if(var_35_bool != 0)
			var_31_bool = true;
	}
	if(var_31_bool != 0) {
		var_24_bool = false;
		return 4;
	}
	object var_28_object;
	@GetScene(var_28_object);
	if(var_28_object == null) {
		var_24_bool = false;
		return 4;
	}
	object var_29_object;
	var_25_object->GetScene(var_29_object);
	if(var_28_object != var_29_object) {
		var_24_bool = false;
		return 4;
	}
	var_24_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2721(bool var_58_bool)
{
	func_2685();
	float var_65_float;
	func_2024(var_65_float);
	var_58_bool = var_65_float > 0.7;
}


// @pe
void func_2730(bool var_18_bool, object var_19_object, object var_20_object)
{
	object var_23_object;
	var_19_object = var_23_object;
	object var_24_object;
	var_20_object = var_24_object;
	bool var_22_bool;
	func_2553(var_22_bool, var_23_object, var_24_object, 500.0);
	var_22_bool = var_18_bool;
}


void func_171(void)
{
	bool var_129_bool;
	func_1892(var_129_bool);
	if(!var_129_bool) //@nz
		func_2638();
}


void func_689(void)
{
	int var_169_int; int var_170_int; bool var_171_bool; float var_172_float; bool var_173_bool;
	@WaitForAnimEnd();
	bool var_174_bool;
	func_1892(var_174_bool);
	if(!var_174_bool) //@nz
		return 14;
	int var_176_int;
	func_2483(var_176_int);
	int var_167_int;
	var_176_int = var_167_int;
	int var_168_int = 0;
	
	for(;;) {
		bool var_189_bool = false;
		if(var_168_int < 5) {
			bool var_192_bool;
			func_1892(var_192_bool);
			if(var_192_bool != 0)
				var_189_bool = true;
		}
		if(var_189_bool != 0) {
			@irand(var_169_int, 3);
			if(var_169_int == 0) {
				if(var_167_int == 0) goto Label_736;
				@irand(var_170_int, var_167_int);
				string var_198_string; int var_199_int;
				var_170_int = var_199_int;
				func_2476(var_198_string, var_199_int);
				@PlayAnimation("all", var_198_string);
				@WaitForAnimEnd(var_171_bool);
				if(!var_171_bool) { //@nz
				} else {
			} else {
			if(var_169_int == 1) {
				@rand(var_172_float, 4);
				@Sleep((var_172_float + 1), var_173_bool);
				if(!var_173_bool) { //@nz
					goto Label_765;
				}
			} else if(var_168_int != 0) {
				goto Label_765;
			}
			}
					bool var_201_bool;
					func_768(var_201_bool);
					var_202_bool = !var_201_bool; //@nz
					if(var_202_bool == 0) goto Label_760;
			}
		}
	Label_765:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_760:
		@ResetAAS();
		var_168_int += 1;
	}
	
}


// @pe
void func_2739(object var_96_object)
{
	bool var_97_bool; object var_98_object;
	func_1673(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		object var_101_object;
		func_1949(var_101_object);
		@ReportReputationChange(var_98_object, var_101_object, -0.1, true);
		func_2123(false);
	}
	func_2099();
	var_240_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1731(bool var_20_bool, object var_21_object)
{
	object var_25_object;
	var_21_object = var_25_object;
	bool var_24_bool;
	func_1695(var_24_bool, var_25_object);
	if(!var_24_bool) { //@nz
		var_20_bool = false;
		return 2;
	}
	bool var_42_bool; object var_43_object;
	func_1678(var_42_bool, var_43_object, "noaccess");
	if(!var_42_bool) { //@nz
		var_20_bool = true;
		return 2;
	}
	int var_23_int;
	var_43_object->GetProperty("noaccess", var_23_int);
	var_20_bool = var_23_int == 0;
}


void func_1240(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1755(object var_30_object)
{
	string var_44_string;
	if(var_30_object == null)
		return 14;
	bool var_38_bool;
	@IsDead(var_38_bool);
	if(var_38_bool != 0)
		return 14;
	int var_39_int;
	@GetSecondaryAnimationType(var_39_int);
	if(var_39_int < 0)
		return 14;
	cvector var_40_cvector;
	var_30_object->GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetDirection(var_42_cvector);
	cvector var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_44_string = "fhit";
	else
		var_44_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_44_string + "1"), (var_44_string + "2"), -10);
	
}


void func_1256(bool var_0_bool, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_1658(var_70_cvector, var_0_bool);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1965(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


void func_1272(bool var_0_bool, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_bool->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1955(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1955(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


void func_2298(int var_42_int, string var_43_string)
{
	int var_45_int;
	@GetInvItemByName(var_45_int, var_43_string);
	var_45_int = var_42_int;
}


// @pe
void func_2303(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	TaskCall(0);
	func_0(var_15_object);
	TaskReturn();
}


void func_768(bool var_201_bool)
{
	var_201_bool = true;
}


void func_770(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1799(object var_17_object, int var_18_int, float var_19_float)
{
	cvector var_29_cvector; object var_30_object; int var_31_int; bool var_32_bool; cvector var_33_cvector; cvector var_34_cvector;
	bool var_38_bool = false;
	bool var_39_bool = false;
	if(var_17_object != 0) {
		if(var_18_int != 4)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		if(var_18_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		cvector var_45_cvector; cvector var_46_cvector;
		cvector var_47_cvector; object var_48_object;
		var_17_object = var_48_object;
		func_1658(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_1955(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		@CreateVectorVector(var_30_object);
		var_31_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_31_int), var_32_bool, var_33_cvector, var_34_cvector);
			if(!var_32_bool) { //@nz
				break;
			Label_1861:
				var_30_object = null;
	}
			object var_107_object;
			var_17_object = var_107_object;
			func_1755(var_107_object);
		}
		if((var_34_cvector | var_29_cvector) >= 0.70710677)
			var_30_object->add(var_33_cvector);
		var_31_int += 1;
	}
	int var_35_int;
	var_30_object->size(var_35_int);
	if(var_35_int == 0) goto Label_1861;
	int var_36_int;
	@irand(var_36_int, var_35_int);
	cvector var_37_cvector;
	var_30_object->get(var_37_cvector, var_36_int);
	object var_62_object; int var_63_int; float var_64_float; cvector var_65_cvector; cvector var_66_cvector;
	var_17_object = var_62_object;
	var_18_int = var_63_int;
	var_19_float = var_64_float;
	var_37_cvector = var_65_cvector;
	var_66_cvector = -var_29_cvector;
	func_1867(var_64_float, var_65_cvector, var_66_cvector);
}


void func_775(bool var_0_bool, object var_80_object)
{
	var_0_bool = var_80_object;
	bool var_87_bool;
	func_826(var_87_bool);
	cvector var_85_cvector;
	@GetDirection(var_85_cvector);
	cvector var_95_cvector;
	func_1658(var_95_cvector, var_0_bool);
	cvector var_86_cvector;
	var_95_cvector = var_86_cvector;
	float var_101_float; cvector var_102_cvector; cvector var_103_cvector;
	var_85_cvector = var_102_cvector;
	var_86_cvector = var_103_cvector;
	func_1992(var_101_float, var_102_cvector, var_103_cvector);
	if(var_101_float < 0) {
		func_1881(var_0_bool);
		var_87_bool = true;
	} else {
		@Sleep(1.5, var_87_bool);
	}
	if(var_87_bool != 0) {
		func_1881(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_1302(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_103_object)
{
	float var_113_float; cvector var_115_cvector; float var_116_float;
	cvector var_117_cvector;
	func_1272(var_116_float, var_117_cvector, 1.7453294);
	cvector var_112_cvector;
	var_117_cvector = var_112_cvector;
	if((var_112_cvector | var_112_cvector) < 2500.0) {
		cvector var_149_cvector;
		func_1272(var_116_float, var_149_cvector, 2.6179938);
		var_149_cvector = var_112_cvector;
		var_113_float = var_112_cvector | var_112_cvector;
		if(var_113_float < 2500.0) {
			var_154_float = sqrt(var_113_float);
			@Trace("Can't retreat, distance: " + var_154_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_157_float = GetByIndex(var_112_cvector, 0);
	var_158_float = GetByIndex(var_112_cvector, 2);
	@Rotate(var_157_float, var_158_float);
	cvector var_159_cvector;
	func_1653(var_159_cvector);
	@SetTimer(120, 0.5);
	
Label_1344:
	bool var_114_bool;
	@MovePoint((var_159_cvector + var_112_cvector), 1, var_114_bool);
	if(var_114_bool != 0) {
		if(var_103_object == null) {
			goto Label_1374;
		EMIT "GOTO 0x55c";

		Label_1374:
			for(;;) {
				return 10;
		}
			cvector var_167_cvector;
			func_1272(var_116_float, var_167_cvector, 2.6179938);
			var_167_cvector = var_115_cvector;
			if((var_115_cvector | var_115_cvector) >= 2500.0) {
				cvector var_171_cvector;
				func_1653(var_171_cvector);
				var_1_bool = var_171_cvector + var_115_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1344; //@nz

	}
}


// @pe
void func_2348(bool var_17_bool, object var_18_object, string var_19_string)
{
	if(var_19_string == "unholster") {
		bool var_22_bool; object var_23_object;
		var_18_object = var_23_object;
		func_2639(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x94a";
	}
	if(var_19_string == "player_shot") {
		bool var_26_bool; object var_27_object;
		var_18_object = var_27_object;
		func_2644(var_26_bool, var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0x94a";
	}
	if(var_19_string == "battle") {
		bool var_43_bool; object var_44_object;
		var_18_object = var_44_object;
		func_2667(var_43_bool, var_44_object);
		var_43_bool = var_17_bool;
		return 0;
	}
	var_17_bool = false;
}


void func_826(bool var_0_bool)
{
	func_1897(var_0_bool);
}


void func_1867(object var_19_object, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_26_object;
	@GetScene(var_26_object);
	object var_27_object;
	@AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	object var_30_object;
	var_19_object = var_30_object;
	func_1755(var_30_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2380(object var_49_object, string var_50_string)
{
	if(var_50_string == "unholster") {
		object var_53_object;
		var_49_object = var_53_object;
		func_2642();
	} else if(var_50_string == "player_shot") {
			object var_56_object;
			var_49_object = var_56_object;
			func_2659(var_56_object);
	}
Label_2404:
	for(;;) {

	}
	
	if(!(var_50_string == "battle")) goto Label_2404;
	object var_131_object;
	var_49_object = var_131_object;
	func_2674(var_131_object);
}


void func_1881(object var_89_object)
{
	cvector var_93_cvector;
	var_89_object->GetPosition(var_93_cvector);
	cvector var_94_cvector;
	@GetPosition(var_94_cvector);
	cvector var_95_cvector = var_93_cvector - var_94_cvector;
	var_96_float = GetByIndex(var_95_cvector, 0);
	var_97_float = GetByIndex(var_95_cvector, 2);
	@RotateAsync(var_96_float, var_97_float);
}


void func_1892(bool var_129_bool)
{
	bool var_131_bool;
	@IsLoaded(var_131_bool);
	var_131_bool = var_129_bool;
}


void func_2405(bool var_14_bool, object var_15_object)
{
	bool var_17_bool;
	bool var_18_bool = false;
	bool var_19_bool; object var_20_object;
	var_15_object = var_20_object;
	func_2639(var_20_object);
	if(var_19_bool != 0) {
		bool var_21_bool; object var_22_object;
		func_1673(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			var_18_bool = true;
	}
	if(var_18_bool != 0) {
		var_22_object->IsWeaponHolstered(var_17_bool);
		if(!var_17_bool) //@nz
			var_14_bool = true;
	}
	var_14_bool = false;
}


void func_1897(object var_88_object)
{
	float var_91_float;
	var_88_object->GetEyesHeight(var_91_float);
	cvector var_92_cvector = [0.0, 0.0, 0.0];
	var_93_float = GetByIndex(var_92_cvector, 1);
	var_91_float = var_93_float;
	SetByIndex(var_92_cvector, 1) = var_93_float;
	@LookAsync(var_88_object, "head", var_92_cvector);
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_12_cvector, var_13_bool);
}


void func_1908(string var_39_string)
{
	bool var_48_bool; int var_49_int; bool var_50_bool; int var_51_int; bool var_52_bool; float var_53_float; cvector var_54_cvector; cvector var_55_cvector;
	@IsExisting3DSound(var_48_bool, var_39_string);
	if(!var_48_bool) { //@nz
		var_49_int = 0;

		for(;;) {
			@IsExisting3DSound(var_50_bool, (var_39_string + (var_49_int + 1)));
			if(!var_50_bool) { //@nz
				break;
			Label_1928:
				@irand(var_51_int, var_49_int);
				var_39_string += (var_51_int + 1);
	}
			@Is3DSoundLoaded(var_52_bool, var_39_string);
			if(var_52_bool != 0) {
				@GetEyesHeight(var_53_float);
				@GetDirection(var_54_cvector);
				var_55_cvector = var_54_cvector * 50;
				var_66_float = GetByIndex(var_55_cvector, 1);
				SetByIndex(var_55_cvector, 1) = (var_66_float + var_53_float);
				@PlayGlobalSound(var_39_string, var_55_cvector);
			}
		}
		var_49_int += 1;
	}
	var_61_bool = !var_49_int; //@nz
	if(var_61_bool == 0) goto Label_1928;
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_17_bool, var_18_int);
}


// @pe
void func_2428(object var_28_object)
{
	object var_29_object;
	var_28_object = var_29_object;
	func_2642();
}


// @pe
void func_2434(object var_16_object)
{
	bool var_17_bool; object var_18_object;
	func_1673(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		object var_21_object;
		func_1949(var_21_object);
		@ReportReputationChange(var_18_object, var_21_object, -0.05);
	}
}


void func_392(bool var_2_bool, object var_14_object)
{
	bool var_19_bool; object var_20_object;
	func_1731(var_19_bool, var_20_object);
	if(!var_19_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_17_bool;
	@IsPlayerActor(var_20_object, var_17_bool);
	if(!var_17_bool) //@nz
		return 4;
	int var_56_int; object var_57_object;
	var_14_object = var_57_object;
	func_2500(var_57_object);
	int var_18_int;
	var_56_int = var_18_int;
	if(var_18_int > 0) {
		if(var_18_int > 1)
			func_375(var_18_int);
		object var_79_object;
		var_14_object = var_79_object;
		func_2509(var_79_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_2447(bool var_14_bool, string var_15_string)
{
	object var_17_object;
	if(var_15_string == "heal") {
		@FindActor(var_17_object, "player");
		bool var_21_bool; object var_22_object;
		var_17_object = var_22_object;
		func_2680(var_22_object);
		var_21_bool = var_14_bool;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = false;
}


void func_1427(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1949(object var_101_object)
{
	object var_103_object;
	@self(var_103_object);
	var_103_object = var_101_object;
}
EMIT "Stack[-1] = 0";


void func_2463(string var_25_string)
{
	object var_27_object;
	if(var_25_string == "heal") {
		@FindActor(var_27_object, "player");
		object var_31_object;
		var_27_object = var_31_object;
		func_2683();
		var_27_object = null;
	}
}


void func_1955(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_54_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_54_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_54_float;
}


void func_1443(bool var_0_bool, bool var_65_bool)
{
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_70_cvector;
	func_1658(var_70_cvector, var_0_bool);
	cvector var_69_cvector;
	var_70_cvector = var_69_cvector;
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector;
	var_68_cvector = var_77_cvector;
	var_69_cvector = var_78_cvector;
	func_1965(var_76_float, var_77_cvector, var_78_cvector);
	var_65_bool = var_76_float >= -0.34202012;
}


void func_2476(string var_182_string, int var_183_int)
{
	string var_185_string = "idle";
	if(var_183_int != 0)
		var_185_string += var_183_int;
	var_185_string = var_182_string;
}


// @pe
void func_1965(float var_76_float, cvector var_77_cvector, cvector var_78_cvector)
{
	var_83_float = sqrt((var_77_cvector | var_77_cvector) * (var_78_cvector | var_78_cvector));
	var_76_float = (var_77_cvector | var_78_cvector) / var_83_float;
}


void func_432(bool var_0_bool, bool var_1_bool)
{
	float var_139_float; cvector var_140_cvector; cvector var_141_cvector; bool var_142_bool; object var_143_object; bool var_144_bool;
	@rand(var_139_float, 0.5);
	@Sleep(var_139_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_444:
				@GetPosition(var_141_cvector);
				float var_148_float;
				func_491(var_148_float);
				@GetRandomPFPointInCircle(var_140_cvector, var_141_cvector, var_148_float, var_142_bool);
				if(var_142_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_444;
			}
				var_1_bool = false;
		}
		}
		goto Label_460;

	Label_460:
		object var_152_object; cvector var_153_cvector;
		var_140_cvector = var_153_cvector;
		func_519(var_152_object, var_153_cvector);
		var_152_object = var_143_object;
		if(var_143_object != null) {
			@RotatePath(var_143_object, var_144_bool);
			if(var_144_bool != 0) {
				bool var_158_bool;
				func_517(var_158_bool);
				@FollowPath(var_143_object, var_158_bool, var_144_bool);
				var_143_object = null;
				if(var_144_bool != 0) {
					TaskCall(2);
					func_689();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_143_object = null;
	}
	
}


void func_2483(int var_176_int)
{
	int var_179_int; bool var_180_bool;
	var_179_int = 0;
	
	for(;;) {
		string var_182_string; int var_183_int;
		var_179_int = var_183_int;
		func_2476(var_182_string, var_183_int);
		@HasAnimation(var_180_bool, "all", var_182_string);
		if(!var_180_bool) //@nz
			break;
		var_179_int += 1;
	}
	var_179_int = var_176_int;
}


// @pe
void func_1973(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_70_float = GetByIndex(var_68_cvector, 0);
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_73_float = GetByIndex(var_68_cvector, 2);
	var_66_float = (var_69_float * var_70_float) + (var_72_float * var_73_float);
}


void func_1466(bool var_0_bool, cvector var_27_cvector, float var_28_float)
{
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	var_0_bool->GetPosition(var_36_cvector); //@t
	cvector var_37_cvector;
	@GetDirection(var_37_cvector);
	cvector var_41_cvector;
	cvector var_43_cvector;
	func_1955(var_43_cvector, (var_35_cvector - var_36_cvector));
	func_1955(var_41_cvector, (var_43_cvector + (var_37_cvector * 0.75)));
	cvector var_38_cvector;
	var_41_cvector = var_38_cvector;
	cvector var_39_cvector;
	float var_40_float;
	@FindLongestDir(var_39_cvector, var_40_float, var_38_cvector, var_28_float, 32, 7000.0);
	if((var_40_float - 100) < 0)
		var_40_float = 0;
	var_27_cvector = var_39_cvector * var_40_float;
}


// @pe
void func_1982(float var_75_float, cvector var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_80_float = GetByIndex(var_76_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_75_float = sqrt((var_77_float * var_78_float) + (var_80_float * var_81_float));
}


// @pe
void func_2500(int var_56_int)
{
	bool var_58_bool;
	func_2721(var_58_bool);
	if(var_58_bool != 0)
		var_56_int = 2;
	else
		var_56_int = 0;
	
}


// @pe
void func_1992(float var_63_float, cvector var_64_cvector, cvector var_65_cvector)
{
	cvector var_67_cvector;
	var_64_cvector = var_67_cvector;
	cvector var_68_cvector;
	var_65_cvector = var_68_cvector;
	float var_66_float;
	func_1973(var_66_float, var_67_cvector, var_68_cvector);
	float var_75_float; cvector var_76_cvector;
	var_64_cvector = var_76_cvector;
	func_1982(var_75_float, var_76_cvector);
	float var_84_float; cvector var_85_cvector;
	var_65_cvector = var_85_cvector;
	func_1982(var_84_float, var_85_cvector);
	var_63_float = var_66_float / (var_75_float * var_84_float);
}


// @pe
void func_2509(object var_79_object)
{
	object var_80_object;
	var_79_object = var_80_object;
	TaskCall(3);
	func_775(var_81_object, var_80_object);
	TaskReturn();
}


void func_974(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_2517(int var_25_int, object var_26_object)
{
	object var_28_object;
	var_26_object = var_28_object;
	bool var_27_bool;
	func_1731(var_27_bool, var_28_object);
	if(var_27_bool != 0)
		var_25_int = 2;
	else
		var_25_int = 0;
	
}


void func_1496(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_57_object)
{
	float var_67_float; cvector var_69_cvector; float var_70_float;
	cvector var_71_cvector;
	func_1466(var_70_float, var_71_cvector, 1.7453294);
	cvector var_66_cvector;
	var_71_cvector = var_66_cvector;
	if((var_66_cvector | var_66_cvector) < 2500.0) {
		cvector var_103_cvector;
		func_1466(var_70_float, var_103_cvector, 2.6179938);
		var_103_cvector = var_66_cvector;
		var_67_float = var_66_cvector | var_66_cvector;
		if(var_67_float < 2500.0) {
			var_108_float = sqrt(var_67_float);
			@Trace("Can't retreat, distance: " + var_108_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_111_float = GetByIndex(var_66_cvector, 0);
	var_112_float = GetByIndex(var_66_cvector, 2);
	@Rotate(var_111_float, var_112_float);
	cvector var_113_cvector;
	func_1653(var_113_cvector);
	@SetTimer(120, 0.5);
	
Label_1538:
	bool var_68_bool;
	@MovePoint((var_113_cvector + var_66_cvector), 1, var_68_bool);
	if(var_68_bool != 0) {
		if(var_57_object == null) {
			goto Label_1568;
		EMIT "GOTO 0x61e";

		Label_1568:
			for(;;) {
				return 10;
		}
			cvector var_121_cvector;
			func_1466(var_70_float, var_121_cvector, 2.6179938);
			var_121_cvector = var_69_cvector;
			if((var_69_cvector | var_69_cvector) >= 2500.0) {
				cvector var_125_cvector;
				func_1653(var_125_cvector);
				var_1_bool = var_125_cvector + var_69_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1538; //@nz

	}
}


void func_2009(int var_24_int)
{
	float var_26_float;
	@GetGameTime(var_26_float);
	var_24_int = 1 + (var_26_float / 24);
}


// @pe
void func_2527(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(4);
	func_1050(var_68_object);
	TaskReturn();
}


void func_2018(int var_220_int)
{
	int var_222_int;
	@GetVariable("branch", var_222_int);
	var_222_int = var_220_int;
}


// @pe
void func_2535(int var_65_int, object var_66_object)
{
	object var_69_object;
	var_66_object = var_69_object;
	bool var_68_bool;
	func_1731(var_68_bool, var_69_object);
	if(var_68_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
}


void func_2024(float var_65_float)
{
	object var_68_object;
	@FindActor(var_68_object, "player");
	if(!var_68_object) //@nz
		var_65_float = 0;
	float var_69_float;
	var_68_object->GetProperty("reputation", var_69_float);
	var_69_float = var_65_float;
}
EMIT "Stack[-2] = 0";


void func_491(float var_148_float)
{
	float var_150_float;
	@GetCameraFarDistance(var_150_float);
	var_150_float = var_148_float;
}


// @pe
void func_2545(object var_102_object)
{
	object var_103_object;
	var_102_object = var_103_object;
	TaskCall(5);
	func_1302(var_104_object, var_105_cvector, var_106_bool, var_103_object);
	TaskReturn();
}


// @pe
void func_2038(object var_30_object)
{
	int var_31_int;
	func_2018(var_31_int);
	if(var_31_int == 1)
		@WorkWithCorpse(var_30_object);
	else
		@Barter(var_30_object);
	
}


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_2553(bool var_22_bool, object var_23_object, object var_24_object, float var_25_float)
{
	object var_31_object;
	var_24_object = var_31_object;
	bool var_30_bool;
	func_1678(var_30_bool, var_31_object, "class");
	if(!var_30_bool) { //@nz
		var_22_bool = false;
		return 4;
	}
	string var_28_string;
	var_24_object->GetProperty("class", var_28_string);
	if(var_28_string == "rat") {
		var_22_bool = false;
		return 4;
	EMIT "GOTO 0xa17";
	}
	if(var_28_string == "rat_big") {
		var_22_bool = false;
		return 4;
	EMIT "GOTO 0xa17";
	}
	if(var_28_string == "dog") {
		var_22_bool = false;
		return 4;
	}
	bool var_29_bool;
	@CanSee(var_29_bool, var_23_object);
	bool var_47_bool = true;
	if(var_29_bool != 1) {
		float var_49_float; object var_50_object;
		var_23_object = var_50_object;
		func_1665(var_49_float, var_50_object);
		var_58_bool = var_49_float <= (var_25_float * var_25_float);
		if(var_58_bool != 1)
			var_47_bool = false;
	}
	if(var_47_bool != 0) {
		var_22_bool = true;
		return 4;
	}
	@CanSee(var_29_bool, var_24_object);
	bool var_59_bool = true;
	if(var_29_bool != 1) {
		float var_61_float; object var_62_object;
		var_24_object = var_62_object;
		func_1665(var_61_float, var_62_object);
		var_64_bool = var_61_float <= (var_25_float * var_25_float);
		if(var_64_bool != 1)
			var_59_bool = false;
	}
	if(var_59_bool != 0) {
		var_22_bool = true;
		return 4;
	}
	var_22_bool = false;
}


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


