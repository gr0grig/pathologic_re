// @GLOBALS: 0:object:,1:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


task task_1
{
	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2174(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			object var_23_object;
			var_16_bool = var_23_object;
			func_2177(var_23_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_2183();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, float var_3_float, float var_4_float, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, string var_18_string, bool var_19_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, string var_2_string, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
	}

}


maintask task_2
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		@SensePlayerOnly(true);
		func_2389();
		func_185();
	
		for(;;) {
			var_2_bool = false;
			func_398(var_14_string, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2174(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_333(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2177(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		int var_19_int;
		func_2138(var_19_int, var_20_object);
		int var_18_int;
		var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_333(var_18_int);
			object var_60_object;
			var_16_bool = var_60_object;
			func_2148(var_60_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_string = var_21_object;
		object var_22_object;
		var_17_bool = var_22_object;
		bool var_20_bool;
		func_2437(var_20_bool, var_21_object, var_22_object);
		if(var_20_bool != 0) {
			int var_46_int; object var_47_object;
			var_16_string = var_47_object;
			func_2156(var_46_int, var_47_object);
			var_46_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_333(var_19_int);
				object var_87_object;
				var_16_string = var_87_object;
				func_2166(var_87_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2184(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_333(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2187();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		string var_21_string;
		var_17_bool = var_21_string;
		object var_22_object;
		var_16_string = var_22_object;
		func_2189(var_22_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			string var_28_string; object var_29_object;
			var_17_bool = var_28_string;
			var_16_string = var_29_object;
			func_2192();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_17_object;
		func_358(var_17_object, var_17_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_17_object;
		func_358(var_17_object, var_17_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, int var_4_int, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		if(var_16_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_333(var_15_bool);
		func_2183();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_333(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2083();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		@Stop();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2174(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_662();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2177(var_25_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		int var_19_int;
		func_2138(var_19_int, var_20_object);
		int var_18_int;
		var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_662();
			object var_59_object;
			var_16_bool = var_59_object;
			func_2148(var_59_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_string = var_21_object;
		object var_22_object;
		var_17_bool = var_22_object;
		bool var_20_bool;
		func_2437(var_20_bool, var_21_object, var_22_object);
		if(var_20_bool != 0) {
			int var_46_int; object var_47_object;
			var_16_string = var_47_object;
			func_2156(var_46_int, var_47_object);
			var_46_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_662();
				object var_86_object;
				var_16_string = var_86_object;
				func_2166(var_86_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2184(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_662();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2187();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		string var_21_string;
		var_17_bool = var_21_string;
		object var_22_object;
		var_16_string = var_22_object;
		func_2189(var_22_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			string var_27_string; object var_28_object;
			var_17_bool = var_27_string;
			var_16_string = var_28_object;
			func_2192();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_662();
		func_2183();
	}

}


task task_4
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2174(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_831();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2177(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		int var_19_int;
		func_2138(var_19_int, var_20_object);
		int var_18_int;
		var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_831();
			object var_61_object;
			var_16_bool = var_61_object;
			func_2148(var_61_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_string = var_21_object;
		object var_22_object;
		var_17_bool = var_22_object;
		bool var_20_bool;
		func_2437(var_20_bool, var_21_object, var_22_object);
		if(var_20_bool != 0) {
			int var_46_int; object var_47_object;
			var_16_string = var_47_object;
			func_2156(var_46_int, var_47_object);
			var_46_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_831();
				object var_88_object;
				var_16_string = var_88_object;
				func_2166(var_88_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2184(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_831();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2187();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		string var_21_string;
		var_17_bool = var_21_string;
		object var_22_object;
		var_16_string = var_22_object;
		func_2189(var_22_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			string var_29_string; object var_30_object;
			var_17_bool = var_29_string;
			var_16_string = var_30_object;
			func_2192();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_831();
		object var_19_object;
		var_16_bool = var_19_object;
		func_2083();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		if(var_16_bool != 111)
			return 4;
		bool var_23_bool;
		func_1744(var_23_bool, var_0_bool);
		if(!var_23_bool) { //@nz
			func_831();
			return 4;
		}
		cvector var_19_cvector;
		@GetDirection(var_19_cvector);
		cvector var_60_cvector;
		func_1676(var_60_cvector, var_0_bool);
		cvector var_20_cvector;
		var_60_cvector = var_20_cvector;
		float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
		var_19_cvector = var_67_cvector;
		var_20_cvector = var_68_cvector;
		func_2036(var_66_float, var_67_cvector, var_68_cvector);
		if(var_66_float < 0.49999997)
			func_1835(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_831();
		func_2183();
	}

}


task task_5
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_1074(var_15_bool);
		func_2183();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		cvector var_21_cvector; float var_22_float; cvector var_23_cvector; float var_24_float;
		if(var_16_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_21_cvector);
			@FindDirLength(var_22_float, var_21_cvector, 7000.0);
			cvector var_30_cvector;
			func_928(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 10000.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1090(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1073;
			@Stop();
			cvector var_88_cvector;
			func_1671(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1073:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_1074(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2083();
	}

}


task task_6
{
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, int var_11_int, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		cvector var_21_cvector; float var_22_float; cvector var_23_cvector; float var_24_float;
		if(var_16_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_21_cvector);
			@FindDirLength(var_22_float, var_21_cvector, 7000.0);
			cvector var_30_cvector;
			func_1106(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 10000.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1268(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1251;
			@Stop();
			cvector var_88_cvector;
			func_1671(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1251:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_1252(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2083();
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, int var_16_int, int var_17_int)
	{
		if(1 != 0) {
			func_1992();
			if(var_17_int == 14633) {
				object var_22_object = var_1_bool;
				func_2194(var_0_bool);
			}
			if(var_16_int == 14632) {
				func_1445(var_17_int, "Neutral");
				var_0_bool->SetMessage(13398); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(13399, -1, 14633); //@t
				var_0_bool->AddReply(13400, -1, 14634); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=367";
			EMIT "Call 0x5a5";
			EMIT "Pop(1)";
			EMIT "Push((int) 14771)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
			EMIT "Pop(0)";
			EMIT "Push((int) 14772)";
			EMIT "Push((int) 16019)";
			EMIT "Push((int) 16018)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
			EMIT "Pop(3)";
			EMIT "Push((int) 14779)";
			EMIT "Push((int) -1)";
			EMIT "Push((int) 16025)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=367";
			EMIT "Call 0x5a5";
			EMIT "Pop(1)";
			EMIT "Push((int) 14780)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
			EMIT "Pop(0)";
			EMIT "Push((int) 14781)";
			EMIT "Push((int) 16028)";
			EMIT "Push((int) 16027)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
			EMIT "Pop(3)";
			EMIT "Push((int) 14786)";
			EMIT "Push((int) 16033)";
			EMIT "Push((int) 16032)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_16_int == 16033) {
				func_1445(var_17_int, "Neutral");
				var_0_bool->SetMessage(14787); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14788, 16035, 16034); //@t
				var_0_bool->AddReply(14792, -1, 16038); //@t
				return 0;
			}
			if(var_16_int == 16035) {
				func_1445(var_17_int, "Neutral");
				var_0_bool->SetMessage(14789); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14790, -1, 16036); //@t
				var_0_bool->AddReply(14791, -1, 16037); //@t
				return 0;
			}
			if(var_16_int == 16028) {
				func_1445(var_17_int, "Neutral");
				var_0_bool->SetMessage(14782); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14783, -1, 16029); //@t
				var_0_bool->AddReply(14784, -1, 16030); //@t
				var_0_bool->AddReply(14785, -1, 16031); //@t
				return 0;
			}
			if(var_16_int == 16019) {
				func_1445(var_17_int, "Neutral");
				var_0_bool->SetMessage(14773); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14774, 16021, 16020); //@t
				var_0_bool->AddReply(14778, -1, 16024); //@t
				return 0;
			}
			if(var_16_int == 16021) {
				func_1445(var_17_int, "Neutral");
				var_0_bool->SetMessage(14775); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14776, -1, 16022); //@t
				var_0_bool->AddReply(14777, -1, 16023); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_102_bool;
			func_2387(var_102_bool);
			if(var_102_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x5b6";
	
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_2062(var_17_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_1768(var_21_int, var_22_float);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		@WaitForAnimEnd();
		@PlayAnimation("all", "idle");
		if(false != 0)
			return 0;
	}
}
EMIT "Return(); Pop(0)";


void func_2053(int var_82_int)
{
	float var_84_float;
	@GetGameTime(var_84_float);
	var_82_int = 1 + (var_84_float / 24);
}


// @pe
void func_2062(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	TaskCall(1);
	func_22(var_18_object);
	TaskReturn();
}


// @pe
void func_22(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_55(var_19_object);
	object var_69_object;
	var_18_object = var_69_object;
	func_2481();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2097(string var_116_string, int var_117_int)
{
	string var_119_string = "idle";
	if(var_117_int != 0)
		var_119_string += var_117_int;
	var_119_string = var_116_string;
}


void func_1074(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_55(object var_19_object)
{
	cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; cvector var_33_cvector; string var_34_string; object var_35_object; bool var_36_bool; bool var_37_bool; float var_38_float; cvector var_39_cvector;
	if(var_19_object == null) {
		func_142("fdie");
	} else {
		var_19_object->GetPosition(var_30_cvector);
		@GetPosition(var_31_cvector);
		@GetDirection(var_32_cvector);
		var_33_cvector = var_31_cvector - var_30_cvector;
		var_44_float = GetByIndex(var_33_cvector, 0);
		var_45_float = GetByIndex(var_32_cvector, 0);
		var_47_float = GetByIndex(var_33_cvector, 2);
		var_48_float = GetByIndex(var_32_cvector, 2);
		if(((var_44_float * var_45_float) + (var_47_float * var_48_float)) >= 0)
			var_34_string = "fdie";
		else
			var_34_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_19_object = var_35_object;
		var_55_bool = IsFuncExist(var_19_object, "GetScriptProperty", 2);
		if(var_55_bool != 0) {
			var_19_object->HasScriptProperty(var_36_bool, "Owner");
			if(var_36_bool != 0) {
				var_19_object->GetScriptProperty(var_35_object, "Owner");
				if(var_35_object == null)
					var_19_object = var_35_object;
			}
		}
		var_62_bool = IsFuncExist(var_35_object, "@GetEyesHeight", 1);
		if(var_62_bool != 0) {
			var_35_object->GetEyesHeight(var_38_float);
			var_39_cvector = [0.0, 0.0, 0.0];
			var_63_float = GetByIndex(var_39_cvector, 1);
			var_38_float = var_63_float;
			SetByIndex(var_39_cvector, 1) = var_63_float;
			@LookAsync(var_19_object, "head", var_39_cvector);
			var_37_bool = true;
		} else {
			var_37_bool = false;

		}
		@PlayAnimation("all", var_34_string);
		@WaitForAnimEnd();
		if(var_37_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_34_string);
		@RemoveEnvelope();
		var_35_object = null;
	}
	
}


void func_2104(int var_110_int)
{
	int var_113_int; bool var_114_bool;
	var_113_int = 0;
	
	for(;;) {
		string var_116_string; int var_117_int;
		var_113_int = var_117_int;
		func_2097(var_116_string, var_117_int);
		@HasAnimation(var_114_bool, "all", var_116_string);
		if(!var_114_bool) //@nz
			break;
		var_113_int += 1;
	}
	var_113_int = var_110_int;
}


void func_1090(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1676(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2009(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


// @pe
void func_2121(int var_59_int)
{
	bool var_61_bool;
	func_2435(var_61_bool);
	if(var_61_bool != 0)
		var_59_int = 2;
	else
		var_59_int = 0;
	
}


void func_593(void)
{
	int var_103_int; int var_104_int; bool var_105_bool; float var_106_float; bool var_107_bool;
	@WaitForAnimEnd();
	bool var_108_bool;
	func_1846(var_108_bool);
	if(!var_108_bool) //@nz
		return 14;
	int var_110_int;
	func_2104(var_110_int);
	int var_101_int;
	var_110_int = var_101_int;
	int var_102_int = 0;
	
	for(;;) {
		bool var_123_bool = false;
		if(var_102_int < 5) {
			bool var_126_bool;
			func_1846(var_126_bool);
			if(var_126_bool != 0)
				var_123_bool = true;
		}
		if(var_123_bool != 0) {
			@irand(var_103_int, 3);
			if(var_103_int == 0) {
				if(var_101_int == 0) goto Label_640;
				@irand(var_104_int, var_101_int);
				string var_132_string; int var_133_int;
				var_104_int = var_133_int;
				func_2097(var_132_string, var_133_int);
				@PlayAnimation("all", var_132_string);
				@WaitForAnimEnd(var_105_bool);
				if(!var_105_bool) { //@nz
				} else {
			} else {
			if(var_103_int == 1) {
				@rand(var_106_float, 4);
				@Sleep((var_106_float + 1), var_107_bool);
				if(!var_107_bool) { //@nz
					goto Label_661;
				}
			} else if(var_102_int != 0) {
				goto Label_661;
			}
			}
				var_102_int += 1;
			}
		}
	Label_661:
		return 14;

	}
	
}


// @pe
void func_2130(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(4);
	func_667(var_69_object, var_68_object);
	TaskReturn();
}


void func_1106(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1999(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1999(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


// @pe
void func_2138(int var_19_int, object var_20_object)
{
	object var_22_object;
	var_20_object = var_22_object;
	bool var_21_bool;
	func_1744(var_21_bool, var_22_object);
	if(var_21_bool != 0)
		var_19_int = 2;
	else
		var_19_int = 0;
	
}


// @pe
void func_2148(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(5);
	func_893(var_62_object);
	TaskReturn();
}


// @pe
void func_2156(int var_46_int, object var_47_object)
{
	object var_49_object;
	var_47_object = var_49_object;
	bool var_48_bool;
	func_1744(var_48_bool, var_49_object);
	if(var_48_bool != 0)
		var_46_int = 2;
	else
		var_46_int = 0;
	
}


void func_1136(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_89_object)
{
	cvector var_101_cvector; float var_102_float;
	cvector var_103_cvector;
	func_1106(var_102_float, var_103_cvector, 1.7453294);
	cvector var_98_cvector;
	var_103_cvector = var_98_cvector;
	float var_99_float = var_98_cvector | var_98_cvector;
	if(var_99_float < 10000.0) {
		var_136_float = sqrt(var_99_float);
		@Trace("Can't retreat, distance: " + var_136_float);
		@Sleep(0.5);
		return 10;
	}
	var_139_float = GetByIndex(var_98_cvector, 0);
	var_140_float = GetByIndex(var_98_cvector, 2);
	@Rotate(var_139_float, var_140_float);
	cvector var_141_cvector;
	func_1671(var_141_cvector);
	@SetTimer(120, 0.5);
	
Label_1169:
	bool var_100_bool;
	@MovePoint((var_141_cvector + var_98_cvector), 1, var_100_bool);
	if(var_100_bool != 0) {
		if(var_89_object == null) {
			goto Label_1199;
		EMIT "GOTO 0x4ad";

		Label_1199:
			for(;;) {
				return 10;
		}
			cvector var_149_cvector;
			func_1106(var_102_float, var_149_cvector, 2.6179938);
			var_149_cvector = var_101_cvector;
			if((var_101_cvector | var_101_cvector) >= 10000.0) {
				cvector var_153_cvector;
				func_1671(var_153_cvector);
				var_1_bool = var_153_cvector + var_101_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1169; //@nz

	}
}


// @pe
void func_2166(object var_88_object)
{
	object var_89_object;
	var_88_object = var_89_object;
	TaskCall(6);
	func_1136(var_90_object, var_91_cvector, var_92_bool, var_89_object);
	TaskReturn();
}


// @pe
void func_2174(int var_19_int)
{
	var_19_int = 2;
}


// @pe
void func_2177(object var_27_object)
{
	object var_28_object;
	func_2397(var_28_object, var_28_object);
}


void func_2183(void)
{
}


// @pe
void func_2184(int var_19_int)
{
	var_19_int = 0;
}


void func_1671(cvector var_88_cvector)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
}


// @pe
void func_2187(void)
{
}


void func_1676(cvector var_73_cvector, object var_74_object)
{
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	cvector var_78_cvector;
	var_74_object->GetPosition(var_78_cvector);
	var_73_cvector = var_78_cvector - var_77_cvector;
}


// @pe
void func_2189(int var_20_int)
{
	var_20_int = 0;
}


// @pe
void func_142(string var_41_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_41_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_41_string);
	@RemoveEnvelope();
}


// @pe
void func_2192(void)
{
}


// @pe
void func_2194(object var_23_object)
{
	var_23_object->SetReturnValue(1000);
}


void func_1683(float var_27_float, object var_28_object)
{
	cvector var_32_cvector;
	@GetPosition(var_32_cvector);
	cvector var_33_cvector;
	var_28_object->GetPosition(var_33_cvector);
	var_27_float = (var_33_cvector - var_32_cvector) | (var_33_cvector - var_32_cvector);
}


void func_662(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2199(int var_88_int)
{
	int var_90_int;
	@GetVariable("player", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x8a6";
	}
	if(var_90_int == 1) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
}


void func_1691(bool var_45_bool, object var_46_object, string var_47_string)
{
	var_52_bool = IsFuncExist(var_46_object, "HasProperty", 2);
	if(!var_52_bool) { //@nz
		var_45_bool = false;
		return 2;
	}
	bool var_49_bool;
	var_46_object->HasProperty(var_47_string, var_49_bool);
	var_49_bool = var_45_bool;
}


void func_667(bool var_0_bool, object var_68_object)
{
	var_0_bool = var_68_object;
	bool var_75_bool;
	func_718(var_75_bool);
	cvector var_73_cvector;
	@GetDirection(var_73_cvector);
	cvector var_83_cvector;
	func_1676(var_83_cvector, var_0_bool);
	cvector var_74_cvector;
	var_83_cvector = var_74_cvector;
	float var_89_float; cvector var_90_cvector; cvector var_91_cvector;
	var_73_cvector = var_90_cvector;
	var_74_cvector = var_91_cvector;
	func_2036(var_89_float, var_90_cvector, var_91_cvector);
	if(var_89_float < 0) {
		func_1835(var_0_bool);
		var_75_bool = true;
	} else {
		@Sleep(1.5, var_75_bool);
	}
	if(var_75_bool != 0) {
		func_1835(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_1703(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


void func_2216(int var_79_int, int var_80_int)
{
	int var_95_int;
	if(var_79_int > var_80_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_94_int = 0;
	if(var_79_int != var_80_int) {
		@irand(var_95_int, (var_80_int - var_79_int));
	} else if(var_79_int == 0) {
		return 8;
	}
	var_94_int += var_79_int;
	if(var_94_int == 0)
		return 8;
	int var_96_int;
	@GetInvItemByName(var_96_int, "Money");
	bool var_97_bool;
	@AddItem(var_97_bool, var_96_int, 0, var_94_int);
	
}


void func_1708(bool var_27_bool, object var_28_object)
{
	if(var_28_object == null) {
		var_27_bool = false;
		return 4;
	}
	bool var_34_bool = false;
	var_37_bool = IsFuncExist(var_28_object, "IsDead", 1);
	if(var_37_bool != 0) {
		bool var_38_bool; object var_39_object;
		var_28_object = var_39_object;
		func_1703(var_38_bool, var_39_object);
		if(var_38_bool != 0)
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		var_27_bool = false;
		return 4;
	}
	object var_31_object;
	@GetScene(var_31_object);
	if(var_31_object == null) {
		var_27_bool = false;
		return 4;
	}
	object var_32_object;
	var_28_object->GetScene(var_32_object);
	if(var_31_object != var_32_object) {
		var_27_bool = false;
		return 4;
	}
	var_27_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_185(void)
{
	bool var_67_bool;
	func_1846(var_67_bool);
	if(!var_67_bool) //@nz
		func_2183();
}


void func_2246(void)
{
	bool var_76_bool;
	@ClearSubContainer(0);
	int var_82_int;
	func_2053(var_82_int);
	func_2216(0, (3 + (var_82_int * 5)));
	int var_77_int;
	@irand(var_77_int, 4);
	if(var_77_int == 0) {
		int var_111_int;
		func_2378(var_111_int, "flower");
		@AddItem(var_76_bool, var_111_int, 0, 1);
	}
	@irand(var_77_int, 5);
	if(var_77_int == 0) {
		int var_120_int;
		func_2378(var_120_int, "needle");
		@AddItem(var_76_bool, var_120_int, 0, 1);
	}
}


void func_718(bool var_0_bool)
{
	func_1981(var_0_bool);
}


void func_1744(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1708(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1691(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


void func_1252(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1768(object var_20_object, int var_21_int)
{
	object var_33_object; object var_34_object; cvector var_35_cvector; float var_36_float; string var_42_string;
	bool var_43_bool = false;
	if(var_21_int != 4) {
		if(var_21_int != 5)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		@GetScene(var_33_object);
		@GetPosition(var_35_cvector);
		@GetEyesHeight(var_36_float);
		var_48_float = GetByIndex(var_35_cvector, 1);
		SetByIndex(var_35_cvector, 1) = (var_48_float + (var_36_float / 2));
		@AddActorByType(var_34_object, "scripted", var_33_object, var_35_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_34_object = null;
		var_33_object = null;
	}
	if(var_20_object == null)
		return 20;
	int var_37_int;
	@GetSecondaryAnimationType(var_37_int);
	if(var_37_int < 0)
		return 20;
	cvector var_38_cvector;
	var_20_object->GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_41_cvector = var_39_cvector - var_38_cvector;
	var_57_float = GetByIndex(var_41_cvector, 0);
	var_58_float = GetByIndex(var_40_cvector, 0);
	var_60_float = GetByIndex(var_41_cvector, 2);
	var_61_float = GetByIndex(var_40_cvector, 2);
	if(((var_57_float * var_58_float) + (var_60_float * var_61_float)) >= 0)
		var_42_string = "fhit";
	else
		var_42_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_42_string + "1"), (var_42_string + "2"), -10);
	
}


void func_2290(bool var_18_bool)
{
	bool var_22_bool; int var_23_int; int var_24_int;
	@ClearSubContainer(0);
	if(var_18_bool != 0) {
		@irand(var_23_int, 3);
		if(var_23_int != 0) {
			int var_30_int;
			func_2378(var_30_int, "rifle_ammo");
			@AddItem(var_22_bool, var_30_int, 0, var_23_int);
		}
		@irand(var_23_int, 3);
		if(var_23_int != 0) {
			int var_38_int;
			func_2378(var_38_int, "revolver_ammo");
			@AddItem(var_22_bool, var_38_int, 0, var_23_int);
		}
	} else {
		@irand(var_24_int, 3);
		if(var_24_int == 0) {
			int var_44_int;
			func_2378(var_44_int, "lockpick");
			@AddItem(var_22_bool, var_44_int, 0, 1);
		}
		@irand(var_24_int, 2);
		if(var_24_int != 0) {
			int var_51_int;
			func_2378(var_51_int, "alpha_pills");
			@AddItem(var_22_bool, var_51_int, 0, var_24_int);
		}
		@irand(var_24_int, 2);
		if(var_24_int != 0) {
			int var_57_int;
			func_2378(var_57_int, "meradorm");
			@AddItem(var_22_bool, var_57_int, 0, var_24_int);
		}
		@irand(var_24_int, 10);
		if(!(var_24_int == 0)) goto Label_2377;
		int var_63_int;
		func_2378(var_63_int, "powder");
		@AddItem(var_22_bool, var_63_int, 0, 1);
	}
Label_2377:
	
}


void func_1268(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1676(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2009(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_1284(bool var_0_bool, int var_34_int, object var_35_object)
{
	var_0_bool = var_35_object;
	bool var_45_bool; object var_46_object;
	var_35_object = var_46_object;
	func_1851(var_45_bool, var_46_object);
	if(!var_45_bool) { //@nz
		var_34_int = -2;
		return 8;
	}
	object var_41_object;
	@CreateDialog(var_41_object);
	int var_86_int;
	func_2383(var_86_int);
	var_41_object->SetNPCName(var_86_int);
	string var_87_string;
	func_2385(var_87_string);
	var_41_object->SetPhoto(var_87_string);
	int var_88_int;
	func_2199(var_88_int);
	var_41_object->SetPlayerName(var_88_int);
	bool var_42_bool;
	@IsOverrideActive(var_42_bool);
	if(var_42_bool != 0) {
		var_34_int = -2;
		return 8;
	}
	@DoDialog(var_41_object);
	object var_97_object; object var_98_object;
	var_35_object = var_97_object;
	var_41_object = var_98_object;
	TaskCall(8);
	func_1347(var_99_object, var_100_object, var_101_string, var_102_bool, var_97_object, var_98_object);
	TaskReturn();
	bool var_44_bool;
	var_41_object->IsDialogEnd(var_44_bool);
	
	for(;;) {
		var_134_bool = !var_44_bool; //@nz
		if(var_134_bool == 0) goto Label_1336;
		@sync();
		var_41_object->IsDialogEnd(var_44_bool);
	}
	
Label_1336:
	object var_135_object;
	var_35_object = var_135_object;
	func_1907();
	@StopDialog(var_41_object);
	var_41_object->GetReturnValue(-1);
	int var_43_int = var_34_int;
}
EMIT "Stack[-4] = 0";


void func_1835(object var_92_object)
{
	cvector var_96_cvector;
	var_92_object->GetPosition(var_96_cvector);
	cvector var_97_cvector;
	@GetPosition(var_97_cvector);
	cvector var_98_cvector = var_96_cvector - var_97_cvector;
	var_99_float = GetByIndex(var_98_cvector, 0);
	var_100_float = GetByIndex(var_98_cvector, 2);
	@RotateAsync(var_99_float, var_100_float);
}


void func_1846(bool var_67_bool)
{
	bool var_69_bool;
	@IsLoaded(var_69_bool);
	var_69_bool = var_67_bool;
}


void func_1851(bool var_45_bool, object var_46_object)
{
	cvector var_56_cvector;
	var_46_object->GetPosition(var_56_cvector);
	float var_55_float;
	var_46_object->GetEyesHeight(var_55_float);
	var_63_float = GetByIndex(var_56_cvector, 1);
	SetByIndex(var_56_cvector, 1) = (var_63_float + var_55_float);
	cvector var_57_cvector;
	@GetPosition(var_57_cvector);
	@GetEyesHeight(var_55_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_64_float + var_55_float);
	cvector var_58_cvector = var_56_cvector - var_57_cvector;
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (float)0;
	var_67_float = sqrt(var_58_cvector | var_58_cvector);
	var_58_cvector /= var_67_float;
	cvector var_59_cvector = -var_58_cvector;
	cvector var_70_cvector;
	func_1999(var_70_cvector, (var_59_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_60_cvector = ((var_58_cvector * 70) + (var_70_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_62_bool;
	@IsOverrideActive(var_62_bool);
	if(var_62_bool != 0)
		var_45_bool = false;
	@StopWorld();
	@CameraTransit((var_57_cvector + var_60_cvector), var_59_cvector);
	var_83_float = GetByIndex(var_60_cvector, 0);
	var_84_float = GetByIndex(var_60_cvector, 2);
	@Rotate(var_83_float, var_84_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_45_bool = true;
}


void func_831(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_1347(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_97_object, object var_98_object)
{
	var_0_bool = var_98_object;
	var_1_bool = var_97_object;
	var_3_bool = false;
	if(1 != 0) {
		func_1445(var_98_object, "Neutral");
		var_0_bool->SetMessage(13398); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(13399, -1, 14633); //@t
		var_0_bool->AddReply(13400, -1, 14634); //@t
		goto Label_1415;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=367";
	EMIT "Call 0x5a5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14771)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
	EMIT "Pop(0)";
	EMIT "Push((int) 14772)";
	EMIT "Push((int) 16019)";
	EMIT "Push((int) 16018)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "Push((int) 14779)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 16025)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "GOTO 0x587";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=367";
	EMIT "Call 0x5a5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14780)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=383";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=394";
	EMIT "Pop(0)";
	EMIT "Push((int) 14781)";
	EMIT "Push((int) 16028)";
	EMIT "Push((int) 16027)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "Push((int) 14786)";
	EMIT "Push((int) 16033)";
	EMIT "Push((int) 16032)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=407";
	EMIT "Pop(3)";
	EMIT "GOTO 0x587";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x547";
	}
Label_1415:
	bool var_126_bool;
	func_2387(var_126_bool);
	if(var_126_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_1963(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_1444;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1444:
		return 0;

	}
	
}


void func_2378(int var_30_int, string var_31_string)
{
	int var_33_int;
	@GetInvItemByName(var_33_int, var_31_string);
	var_33_int = var_30_int;
}


void func_333(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_462(var_15_string, var_16_bool);
}


void func_2383(int var_86_int)
{
	var_86_int = 3346;
}


void func_2385(string var_87_string)
{
	var_87_string = "ui/NPC_None.png";
}


void func_2387(bool var_19_bool)
{
	var_19_bool = false;
}


void func_2389(void)
{
	var_17_bool = GlobalVars[1];
	GlobalVars[1] = false;
	func_2290(false);
}


void func_341(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_469(var_20_bool, var_21_int);
}


void func_2397(object var_28_object, object var_36_object)
{
	bool var_30_bool;
	var_31_bool = GlobalVars[1];
	if(var_31_bool != 0) {
		@IsOverrideActive(var_30_bool);
		if(!var_30_bool) //@nz
			@WorkWithCorpse(var_28_object);
		return 2;
	EMIT "GOTO 0x982";
	}
	int var_34_int; object var_35_object;
	var_28_object = var_35_object;
	TaskCall(7);
	func_1284(var_36_object, var_34_int, var_35_object);
	TaskReturn();
	if(1000 == var_36_object) {
		bool var_137_bool; object var_138_object;
		var_28_object = var_138_object;
		func_1911(var_137_bool, var_138_object);
		if(!var_137_bool) //@nz
			return 2;
		object var_167_object;
		var_28_object = var_167_object;
		TaskCall(0);
		func_0(var_167_object);
		TaskReturn();
		object var_172_object;
		var_28_object = var_172_object;
		func_1959();
	}
}


void func_358(bool var_2_bool, object var_17_object)
{
	bool var_22_bool; object var_23_object;
	func_1744(var_22_bool, var_23_object);
	if(!var_22_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_20_bool;
	@IsPlayerActor(var_23_object, var_20_bool);
	if(!var_20_bool) //@nz
		return 4;
	int var_59_int; object var_60_object;
	var_17_object = var_60_object;
	func_2121(var_60_object);
	int var_21_int;
	var_59_int = var_21_int;
	if(var_21_int > 0) {
		if(var_21_int > 1)
			func_341(var_21_int);
		object var_67_object;
		var_17_object = var_67_object;
		func_2130(var_67_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_1907(void)
{
	@CameraSwitchToNormal();
}


void func_1911(bool var_137_bool, object var_138_object)
{
	cvector var_148_cvector;
	var_138_object->GetPosition(var_148_cvector);
	float var_147_float;
	var_138_object->GetEyesHeight(var_147_float);
	var_155_float = GetByIndex(var_148_cvector, 1);
	SetByIndex(var_148_cvector, 1) = (var_155_float + var_147_float);
	cvector var_149_cvector;
	@GetPosition(var_149_cvector);
	@GetEyesHeight(var_147_float);
	var_156_float = GetByIndex(var_149_cvector, 1);
	SetByIndex(var_149_cvector, 1) = (var_156_float + var_147_float);
	cvector var_150_cvector = var_148_cvector - var_149_cvector;
	var_157_float = GetByIndex(var_150_cvector, 1);
	SetByIndex(var_150_cvector, 1) = (float)0;
	var_159_float = sqrt(var_150_cvector | var_150_cvector);
	var_150_cvector /= var_159_float;
	cvector var_151_cvector = -var_150_cvector;
	cvector var_152_cvector = (var_150_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_154_bool;
	@IsOverrideActive(var_154_bool);
	if(var_154_bool != 0)
		var_137_bool = false;
	@StopWorld();
	@CameraTransit((var_149_cvector + var_152_cvector), var_151_cvector);
	var_164_float = GetByIndex(var_152_cvector, 0);
	var_165_float = GetByIndex(var_152_cvector, 2);
	@Rotate(var_164_float, var_165_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_137_bool = true;
}


// @pe
void func_893(object var_62_object)
{
	@Face(var_62_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_72_object;
	func_958(var_64_cvector, var_65_bool, var_72_object, var_72_object);
}


void func_2435(bool var_61_bool)
{
	var_61_bool = true;
}


void func_2437(bool var_20_bool, object var_21_object, object var_22_object)
{
	bool var_24_bool;
	@CanSee(var_24_bool, var_21_object);
	bool var_25_bool = true;
	if(var_24_bool != 1) {
		float var_27_float; object var_28_object;
		func_1683(var_27_float, var_28_object);
		var_36_bool = var_27_float <= 250000.0;
		if(var_36_bool != 1)
			var_25_bool = false;
	}
	if(var_25_bool != 0) {
		@ReportReputationChange(var_28_object, var_22_object, -0.3);
		@SetProperty("ToDie", true);
		var_20_bool = true;
		return 2;
	}
	@CanSee(var_24_bool, var_22_object);
	bool var_40_bool = true;
	if(var_24_bool != 1) {
		float var_42_float; object var_43_object;
		var_22_object = var_43_object;
		func_1683(var_42_float, var_43_object);
		var_45_bool = var_42_float <= 250000.0;
		if(var_45_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 0) {
		var_20_bool = true;
		return 2;
	}
	var_20_bool = false;
}


void func_398(bool var_0_bool, bool var_1_bool)
{
	float var_78_float; cvector var_79_cvector; cvector var_80_cvector; float var_81_float; bool var_82_bool; object var_83_object; bool var_84_bool;
	@rand(var_78_float, 0.5);
	@Sleep(var_78_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_410:
				@GetPosition(var_80_cvector);
				@GetCameraFarDistance(var_81_float);
				@GetRandomPFPointInCircle(var_79_cvector, var_80_cvector, (var_81_float * 2.5), var_82_bool);
				if(var_82_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_410;
			}
				var_1_bool = false;
		}
		}
		goto Label_427;

	Label_427:
		@FindShiftedPathTo(var_83_object, var_79_cvector);
		if(var_83_object != null) {
			@RotatePath(var_83_object, var_84_bool);
			if(var_84_bool != 0) {
				bool var_92_bool;
				func_476(var_92_bool);
				@FollowPath(var_83_object, var_92_bool, var_84_bool);
				var_83_object = null;
				if(var_84_bool != 0) {
					TaskCall(3);
					func_593();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_83_object = null;
	}
	
}


void func_928(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1999(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1999(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


// @pe
void func_1445(bool var_2_bool, string var_27_string)
{
	bool var_28_bool;
	func_2387(var_28_bool);
	if(!var_28_bool) //@nz
		return 0;
	if(var_27_string == var_2_bool)
		return 0;
	string var_31_string;
	func_1963(var_31_string);
	var_2_bool = var_31_string;
}


// @pe
void func_1959(void)
{
	@CameraSwitchToNormal();
}


void func_1963(string var_31_string)
{
	@Trace("playing " + var_31_string);
	float var_34_float;
	float var_35_float;
	@lshGetAnimTimes(var_31_string, var_34_float, var_35_float);
	@lshPlayAnimation(var_34_float, var_35_float);
	@Trace("start: " + var_34_float);
	@Trace("end: " + var_35_float);
}


// @pe
void func_2481(void)
{
	var_70_bool = GlobalVars[1];
	GlobalVars[1] = true;
	@SetRTEnvelope(50, 40);
	bool var_73_bool = true;
	func_2246();
}


void func_1981(object var_76_object)
{
	float var_79_float;
	var_76_object->GetEyesHeight(var_79_float);
	cvector var_80_cvector = [0.0, 0.0, 0.0];
	var_81_float = GetByIndex(var_80_cvector, 1);
	var_79_float = var_81_float;
	SetByIndex(var_80_cvector, 1) = var_81_float;
	@LookAsync(var_76_object, "head", var_80_cvector);
}


void func_958(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_72_object)
{
	cvector var_81_cvector; float var_82_float;
	cvector var_83_cvector;
	func_928(var_82_float, var_83_cvector, 1.7453294);
	cvector var_78_cvector;
	var_83_cvector = var_78_cvector;
	float var_79_float = var_78_cvector | var_78_cvector;
	if(var_79_float < 10000.0) {
		var_116_float = sqrt(var_79_float);
		@Trace("Can't retreat, distance: " + var_116_float);
		@Sleep(0.5);
		return 10;
	}
	var_119_float = GetByIndex(var_78_cvector, 0);
	var_120_float = GetByIndex(var_78_cvector, 2);
	@Rotate(var_119_float, var_120_float);
	cvector var_121_cvector;
	func_1671(var_121_cvector);
	@SetTimer(120, 0.5);
	
Label_991:
	bool var_80_bool;
	@MovePoint((var_121_cvector + var_78_cvector), 1, var_80_bool);
	if(var_80_bool != 0) {
		if(var_72_object == null) {
			goto Label_1021;
		EMIT "GOTO 0x3fb";

		Label_1021:
			for(;;) {
				return 10;
		}
			cvector var_129_cvector;
			func_928(var_82_float, var_129_cvector, 2.6179938);
			var_129_cvector = var_81_cvector;
			if((var_81_cvector | var_81_cvector) >= 10000.0) {
				cvector var_133_cvector;
				func_1671(var_133_cvector);
				var_1_bool = var_133_cvector + var_81_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_991; //@nz

	}
}


void func_1992(void)
{
	bool var_19_bool;
	func_2387(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_462(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1999(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_49_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_49_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_49_float;
}


void func_469(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_2009(float var_79_float, cvector var_80_cvector, cvector var_81_cvector)
{
	var_86_float = sqrt((var_80_cvector | var_80_cvector) * (var_81_cvector | var_81_cvector));
	var_79_float = (var_80_cvector | var_81_cvector) / var_86_float;
}


void func_476(bool var_92_bool)
{
	var_92_bool = false;
}


// @pe
void func_2017(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_69_float = (var_72_float * var_73_float) + (var_75_float * var_76_float);
}


// @pe
void func_2026(float var_78_float, cvector var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_78_float = sqrt((var_80_float * var_81_float) + (var_83_float * var_84_float));
}


// @pe
void func_2036(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	cvector var_70_cvector;
	var_67_cvector = var_70_cvector;
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	float var_69_float;
	func_2017(var_69_float, var_70_cvector, var_71_cvector);
	float var_78_float; cvector var_79_cvector;
	var_67_cvector = var_79_cvector;
	func_2026(var_78_float, var_79_cvector);
	float var_87_float; cvector var_88_cvector;
	var_68_cvector = var_88_cvector;
	func_2026(var_87_float, var_88_cvector);
	var_66_float = var_69_float / (var_78_float * var_87_float);
}


