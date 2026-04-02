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
		func_1966(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			object var_23_object;
			var_16_bool = var_23_object;
			func_1969(var_23_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_1975();
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
		func_2223();
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
		func_1966(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_333(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_1969(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		int var_19_int;
		func_1920(var_19_int, var_20_object);
		int var_18_int;
		var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_333(var_18_int);
			object var_60_object;
			var_16_bool = var_60_object;
			func_1930(var_60_object);
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
		func_2275(var_20_bool, var_21_object, var_22_object);
		if(var_20_bool != 0) {
			int var_55_int; object var_56_object;
			var_16_string = var_56_object;
			func_1938(var_55_int, var_56_object);
			var_55_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_333(var_19_int);
				object var_90_object;
				var_16_string = var_90_object;
				func_1948(var_90_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_1956(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_333(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_1959();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		string var_21_string;
		var_17_bool = var_21_string;
		object var_22_object;
		var_16_string = var_22_object;
		func_1961(var_22_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			string var_28_string; object var_29_object;
			var_17_bool = var_28_string;
			var_16_string = var_29_object;
			func_1964();
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
		func_1975();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_333(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1865();
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
		func_1966(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_662();
			object var_25_object;
			var_16_bool = var_25_object;
			func_1969(var_25_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		int var_19_int;
		func_1920(var_19_int, var_20_object);
		int var_18_int;
		var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_662();
			object var_59_object;
			var_16_bool = var_59_object;
			func_1930(var_59_object);
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
		func_2275(var_20_bool, var_21_object, var_22_object);
		if(var_20_bool != 0) {
			int var_55_int; object var_56_object;
			var_16_string = var_56_object;
			func_1938(var_55_int, var_56_object);
			var_55_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_662();
				object var_89_object;
				var_16_string = var_89_object;
				func_1948(var_89_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_1956(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_662();
			object var_25_object;
			var_16_bool = var_25_object;
			func_1959();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		string var_21_string;
		var_17_bool = var_21_string;
		object var_22_object;
		var_16_string = var_22_object;
		func_1961(var_22_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			string var_27_string; object var_28_object;
			var_17_bool = var_27_string;
			var_16_string = var_28_object;
			func_1964();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_662();
		func_1975();
	}

}


task task_4
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_1966(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_831();
			object var_27_object;
			var_16_bool = var_27_object;
			func_1969(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		int var_19_int;
		func_1920(var_19_int, var_20_object);
		int var_18_int;
		var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_831();
			object var_61_object;
			var_16_bool = var_61_object;
			func_1930(var_61_object);
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
		func_2275(var_20_bool, var_21_object, var_22_object);
		if(var_20_bool != 0) {
			int var_55_int; object var_56_object;
			var_16_string = var_56_object;
			func_1938(var_55_int, var_56_object);
			var_55_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_831();
				object var_91_object;
				var_16_string = var_91_object;
				func_1948(var_91_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_1956(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_831();
			object var_27_object;
			var_16_bool = var_27_object;
			func_1959();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		string var_21_string;
		var_17_bool = var_21_string;
		object var_22_object;
		var_16_string = var_22_object;
		func_1961(var_22_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			string var_29_string; object var_30_object;
			var_17_bool = var_29_string;
			var_16_string = var_30_object;
			func_1964();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_831();
		object var_19_object;
		var_16_bool = var_19_object;
		func_1865();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		if(var_16_bool != 111)
			return 4;
		bool var_23_bool;
		func_1526(var_23_bool, var_0_bool);
		if(!var_23_bool) { //@nz
			func_831();
			return 4;
		}
		cvector var_19_cvector;
		@GetDirection(var_19_cvector);
		cvector var_60_cvector;
		func_1458(var_60_cvector, var_0_bool);
		cvector var_20_cvector;
		var_60_cvector = var_20_cvector;
		float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
		var_19_cvector = var_67_cvector;
		var_20_cvector = var_68_cvector;
		func_1818(var_66_float, var_67_cvector, var_68_cvector);
		if(var_66_float < 0.49999997)
			func_1617(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_831();
		func_1975();
	}

}


task task_5
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, string var_14_string, bool var_15_bool)
	{
		func_1074(var_15_bool);
		func_1975();
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
			func_1453(var_88_cvector);
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
		func_1865();
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
			func_1453(var_88_cvector);
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
		func_1865();
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
			func_1774();
			if(var_16_int == 16507) {
				func_1400(var_17_int, "Neutral");
				var_0_bool->SetMessage(15230); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(15231, -1, 16508); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_41_bool;
			func_2207(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x589";
	
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
	func_1844(var_17_object);
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
	func_1550(var_21_int, var_22_float);
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


void func_1550(object var_20_object, int var_21_int)
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


// @pe
void func_22(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_55(var_19_object);
	object var_69_object;
	var_18_object = var_69_object;
	func_2321();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


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


void func_1090(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1458(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1791(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_593(void)
{
	int var_171_int; int var_172_int; bool var_173_bool; float var_174_float; bool var_175_bool;
	@WaitForAnimEnd();
	bool var_176_bool;
	func_1628(var_176_bool);
	if(!var_176_bool) //@nz
		return 14;
	int var_178_int;
	func_1886(var_178_int);
	int var_169_int;
	var_178_int = var_169_int;
	int var_170_int = 0;
	
	for(;;) {
		bool var_191_bool = false;
		if(var_170_int < 5) {
			bool var_194_bool;
			func_1628(var_194_bool);
			if(var_194_bool != 0)
				var_191_bool = true;
		}
		if(var_191_bool != 0) {
			@irand(var_171_int, 3);
			if(var_171_int == 0) {
				if(var_169_int == 0) goto Label_640;
				@irand(var_172_int, var_169_int);
				string var_200_string; int var_201_int;
				var_172_int = var_201_int;
				func_1879(var_200_string, var_201_int);
				@PlayAnimation("all", var_200_string);
				@WaitForAnimEnd(var_173_bool);
				if(!var_173_bool) { //@nz
				} else {
			} else {
			if(var_171_int == 1) {
				@rand(var_174_float, 4);
				@Sleep((var_174_float + 1), var_175_bool);
				if(!var_175_bool) { //@nz
					goto Label_661;
				}
			} else if(var_170_int != 0) {
				goto Label_661;
			}
			}
				var_170_int += 1;
			}
		}
	Label_661:
		return 14;

	}
	
}


void func_1617(object var_92_object)
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
	func_1781(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1781(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_1628(bool var_135_bool)
{
	bool var_137_bool;
	@IsLoaded(var_137_bool);
	var_137_bool = var_135_bool;
}


void func_1633(bool var_45_bool, object var_46_object)
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
	func_1781(var_70_cvector, (var_59_cvector ^ [0.0, 1.0, 0.0]));
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


void func_1136(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_92_object)
{
	cvector var_104_cvector; float var_105_float;
	cvector var_106_cvector;
	func_1106(var_105_float, var_106_cvector, 1.7453294);
	cvector var_101_cvector;
	var_106_cvector = var_101_cvector;
	float var_102_float = var_101_cvector | var_101_cvector;
	if(var_102_float < 10000.0) {
		var_139_float = sqrt(var_102_float);
		@Trace("Can't retreat, distance: " + var_139_float);
		@Sleep(0.5);
		return 10;
	}
	var_142_float = GetByIndex(var_101_cvector, 0);
	var_143_float = GetByIndex(var_101_cvector, 2);
	@Rotate(var_142_float, var_143_float);
	cvector var_144_cvector;
	func_1453(var_144_cvector);
	@SetTimer(120, 0.5);
	
Label_1169:
	bool var_103_bool;
	@MovePoint((var_144_cvector + var_101_cvector), 1, var_103_bool);
	if(var_103_bool != 0) {
		if(var_92_object == null) {
			goto Label_1199;
		EMIT "GOTO 0x4ad";

		Label_1199:
			for(;;) {
				return 10;
		}
			cvector var_152_cvector;
			func_1106(var_105_float, var_152_cvector, 2.6179938);
			var_152_cvector = var_104_cvector;
			if((var_104_cvector | var_104_cvector) >= 10000.0) {
				cvector var_156_cvector;
				func_1453(var_156_cvector);
				var_1_bool = var_156_cvector + var_104_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1169; //@nz

	}
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


void func_662(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2198(int var_56_int, string var_57_string)
{
	int var_59_int;
	@GetInvItemByName(var_59_int, var_57_string);
	var_59_int = var_56_int;
}


// @pe
void func_1689(void)
{
	@CameraSwitchToNormal();
}


void func_2203(int var_86_int)
{
	var_86_int = 3351;
}


void func_667(bool var_0_bool, object var_77_object)
{
	var_0_bool = var_77_object;
	bool var_84_bool;
	func_718(var_84_bool);
	cvector var_82_cvector;
	@GetDirection(var_82_cvector);
	cvector var_92_cvector;
	func_1458(var_92_cvector, var_0_bool);
	cvector var_83_cvector;
	var_92_cvector = var_83_cvector;
	float var_98_float; cvector var_99_cvector; cvector var_100_cvector;
	var_82_cvector = var_99_cvector;
	var_83_cvector = var_100_cvector;
	func_1818(var_98_float, var_99_cvector, var_100_cvector);
	if(var_98_float < 0) {
		func_1617(var_0_bool);
		var_84_bool = true;
	} else {
		@Sleep(1.5, var_84_bool);
	}
	if(var_84_bool != 0) {
		func_1617(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2205(string var_87_string)
{
	var_87_string = "ui/NPC_None.png";
}


void func_1693(bool var_134_bool, object var_135_object)
{
	cvector var_145_cvector;
	var_135_object->GetPosition(var_145_cvector);
	float var_144_float;
	var_135_object->GetEyesHeight(var_144_float);
	var_152_float = GetByIndex(var_145_cvector, 1);
	SetByIndex(var_145_cvector, 1) = (var_152_float + var_144_float);
	cvector var_146_cvector;
	@GetPosition(var_146_cvector);
	@GetEyesHeight(var_144_float);
	var_153_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_153_float + var_144_float);
	cvector var_147_cvector = var_145_cvector - var_146_cvector;
	var_154_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (float)0;
	var_156_float = sqrt(var_147_cvector | var_147_cvector);
	var_147_cvector /= var_156_float;
	cvector var_148_cvector = -var_147_cvector;
	cvector var_149_cvector = (var_147_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_151_bool;
	@IsOverrideActive(var_151_bool);
	if(var_151_bool != 0)
		var_134_bool = false;
	@StopWorld();
	@CameraTransit((var_146_cvector + var_149_cvector), var_148_cvector);
	var_161_float = GetByIndex(var_149_cvector, 0);
	var_162_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_161_float, var_162_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_134_bool = true;
}


void func_2207(bool var_19_bool)
{
	var_19_bool = false;
}


void func_2209(float var_62_float)
{
	object var_65_object;
	@FindActor(var_65_object, "player");
	if(!var_65_object) //@nz
		var_62_float = 0;
	float var_66_float;
	var_65_object->GetProperty("reputation", var_66_float);
	var_66_float = var_62_float;
}
EMIT "Stack[-2] = 0";


void func_2223(void)
{
	var_17_bool = GlobalVars[1];
	GlobalVars[1] = false;
	func_2023(false);
}


void func_2231(object var_28_object, object var_36_object)
{
	bool var_30_bool;
	var_31_bool = GlobalVars[1];
	if(var_31_bool != 0) {
		@IsOverrideActive(var_30_bool);
		if(!var_30_bool) //@nz
			@WorkWithCorpse(var_28_object);
		return 2;
	EMIT "GOTO 0x8dc";
	}
	int var_34_int; object var_35_object;
	var_28_object = var_35_object;
	TaskCall(7);
	func_1284(var_36_object, var_34_int, var_35_object);
	TaskReturn();
	if(1000 == var_36_object) {
		bool var_134_bool; object var_135_object;
		var_28_object = var_135_object;
		func_1693(var_134_bool, var_135_object);
		if(!var_134_bool) //@nz
			return 2;
		object var_164_object;
		var_28_object = var_164_object;
		TaskCall(0);
		func_0(var_164_object);
		TaskReturn();
		object var_169_object;
		var_28_object = var_169_object;
		func_1741();
	}
}


void func_185(void)
{
	bool var_135_bool;
	func_1628(var_135_bool);
	if(!var_135_bool) //@nz
		func_1975();
}


// @pe
void func_1741(void)
{
	@CameraSwitchToNormal();
}


void func_718(bool var_0_bool)
{
	func_1763(var_0_bool);
}


void func_1745(string var_26_string)
{
	@Trace("playing " + var_26_string);
	float var_29_float;
	float var_30_float;
	@lshGetAnimTimes(var_26_string, var_29_float, var_30_float);
	@lshPlayAnimation(var_29_float, var_30_float);
	@Trace("start: " + var_29_float);
	@Trace("end: " + var_30_float);
}


void func_2269(bool var_61_bool)
{
	float var_62_float;
	func_2209(var_62_float);
	var_61_bool = var_62_float > 0.9;
}


void func_2275(bool var_20_bool, object var_21_object, object var_22_object)
{
	object var_28_object;
	var_22_object = var_28_object;
	bool var_27_bool;
	func_1473(var_27_bool, var_28_object, "class");
	if(!var_27_bool) { //@nz
		var_20_bool = false;
		return 4;
	}
	string var_25_string;
	var_22_object->GetProperty("class", var_25_string);
	if(var_25_string == "rat") {
		var_20_bool = false;
		return 4;
	EMIT "GOTO 0x8fb";
	}
	if(var_25_string == "dog") {
		var_20_bool = false;
		return 4;
	}
	bool var_26_bool;
	@CanSee(var_26_bool, var_21_object);
	bool var_42_bool = true;
	if(var_26_bool != 1) {
		float var_44_float; object var_45_object;
		func_1465(var_44_float, var_45_object);
		var_53_bool = var_44_float <= 250000.0;
		if(var_53_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 0) {
		@ReportReputationChange(var_45_object, var_22_object, -0.3);
		var_20_bool = true;
		return 4;
	}
	var_20_bool = false;
}


void func_1763(object var_85_object)
{
	float var_88_float;
	var_85_object->GetEyesHeight(var_88_float);
	cvector var_89_cvector = [0.0, 0.0, 0.0];
	var_90_float = GetByIndex(var_89_cvector, 1);
	var_88_float = var_90_float;
	SetByIndex(var_89_cvector, 1) = var_90_float;
	@LookAsync(var_85_object, "head", var_89_cvector);
}


void func_1252(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1774(void)
{
	bool var_19_bool;
	func_2207(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_1268(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1458(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1791(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_1781(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_49_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_49_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_49_float;
}


// @pe
void func_1791(float var_79_float, cvector var_80_cvector, cvector var_81_cvector)
{
	var_86_float = sqrt((var_80_cvector | var_80_cvector) * (var_81_cvector | var_81_cvector));
	var_79_float = (var_80_cvector | var_81_cvector) / var_86_float;
}


void func_1284(bool var_0_bool, int var_34_int, object var_35_object)
{
	var_0_bool = var_35_object;
	bool var_45_bool; object var_46_object;
	var_35_object = var_46_object;
	func_1633(var_45_bool, var_46_object);
	if(!var_45_bool) { //@nz
		var_34_int = -2;
		return 8;
	}
	object var_41_object;
	@CreateDialog(var_41_object);
	int var_86_int;
	func_2203(var_86_int);
	var_41_object->SetNPCName(var_86_int);
	string var_87_string;
	func_2205(var_87_string);
	var_41_object->SetPhoto(var_87_string);
	int var_88_int;
	func_1976(var_88_int);
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
		var_131_bool = !var_44_bool; //@nz
		if(var_131_bool == 0) goto Label_1336;
		@sync();
		var_41_object->IsDialogEnd(var_44_bool);
	}
	
Label_1336:
	object var_132_object;
	var_35_object = var_132_object;
	func_1689();
	@StopDialog(var_41_object);
	var_41_object->GetReturnValue(-1);
	int var_43_int = var_34_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_1799(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_69_float = (var_72_float * var_73_float) + (var_75_float * var_76_float);
}


// @pe
void func_1808(float var_78_float, cvector var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_78_float = sqrt((var_80_float * var_81_float) + (var_83_float * var_84_float));
}


// @pe
void func_2321(void)
{
	var_70_bool = GlobalVars[1];
	GlobalVars[1] = true;
	@SetRTEnvelope(50, 40);
}


// @pe
void func_1818(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	cvector var_70_cvector;
	var_67_cvector = var_70_cvector;
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	float var_69_float;
	func_1799(var_69_float, var_70_cvector, var_71_cvector);
	float var_78_float; cvector var_79_cvector;
	var_67_cvector = var_79_cvector;
	func_1808(var_78_float, var_79_cvector);
	float var_87_float; cvector var_88_cvector;
	var_68_cvector = var_88_cvector;
	func_1808(var_87_float, var_88_cvector);
	var_66_float = var_69_float / (var_78_float * var_87_float);
}


void func_1835(int var_27_int)
{
	float var_29_float;
	@GetGameTime(var_29_float);
	var_27_int = 1 + (var_29_float / 24);
}


// @pe
void func_1844(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	TaskCall(1);
	func_22(var_18_object);
	TaskReturn();
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
		func_1400(var_98_object, "Neutral");
		var_0_bool->SetMessage(15230); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(15231, -1, 16508); //@t
		goto Label_1370;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x547";
	}
Label_1370:
	bool var_123_bool;
	func_2207(var_123_bool);
	if(var_123_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_1745(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_1399;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1399:
		return 0;

	}
	
}


void func_333(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_462(var_15_string, var_16_bool);
}


void func_341(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_469(var_20_bool, var_21_int);
}


void func_1879(string var_184_string, int var_185_int)
{
	string var_187_string = "idle";
	if(var_185_int != 0)
		var_187_string += var_185_int;
	var_187_string = var_184_string;
}


void func_1886(int var_178_int)
{
	int var_181_int; bool var_182_bool;
	var_181_int = 0;
	
	for(;;) {
		string var_184_string; int var_185_int;
		var_181_int = var_185_int;
		func_1879(var_184_string, var_185_int);
		@HasAnimation(var_182_bool, "all", var_184_string);
		if(!var_182_bool) //@nz
			break;
		var_181_int += 1;
	}
	var_181_int = var_178_int;
}


void func_358(bool var_2_bool, object var_17_object)
{
	bool var_22_bool; object var_23_object;
	func_1526(var_22_bool, var_23_object);
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
	func_1903(var_60_object);
	int var_21_int;
	var_59_int = var_21_int;
	if(var_21_int > 0) {
		if(var_21_int > 1)
			func_341(var_21_int);
		object var_76_object;
		var_17_object = var_76_object;
		func_1912(var_76_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_1903(int var_59_int)
{
	bool var_61_bool;
	func_2269(var_61_bool);
	if(var_61_bool != 0)
		var_59_int = 2;
	else
		var_59_int = 0;
	
}


// @pe
void func_1400(bool var_2_bool, string var_22_string)
{
	bool var_23_bool;
	func_2207(var_23_bool);
	if(!var_23_bool) //@nz
		return 0;
	if(var_22_string == var_2_bool)
		return 0;
	string var_26_string;
	func_1745(var_26_string);
	var_2_bool = var_26_string;
}


// @pe
void func_1912(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(4);
	func_667(var_78_object, var_77_object);
	TaskReturn();
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


// @pe
void func_1920(int var_19_int, object var_20_object)
{
	object var_22_object;
	var_20_object = var_22_object;
	bool var_21_bool;
	func_1526(var_21_bool, var_22_object);
	if(var_21_bool != 0)
		var_19_int = 2;
	else
		var_19_int = 0;
	
}


// @pe
void func_1930(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(5);
	func_893(var_62_object);
	TaskReturn();
}


void func_398(bool var_0_bool, bool var_1_bool)
{
	float var_146_float; cvector var_147_cvector; cvector var_148_cvector; float var_149_float; bool var_150_bool; object var_151_object; bool var_152_bool;
	@rand(var_146_float, 0.5);
	@Sleep(var_146_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_410:
				@GetPosition(var_148_cvector);
				@GetCameraFarDistance(var_149_float);
				@GetRandomPFPointInCircle(var_147_cvector, var_148_cvector, (var_149_float * 2.5), var_150_bool);
				if(var_150_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_410;
			}
				var_1_bool = false;
		}
		}
		goto Label_427;

	Label_427:
		@FindShiftedPathTo(var_151_object, var_147_cvector);
		if(var_151_object != null) {
			@RotatePath(var_151_object, var_152_bool);
			if(var_152_bool != 0) {
				bool var_160_bool;
				func_476(var_160_bool);
				@FollowPath(var_151_object, var_160_bool, var_152_bool);
				var_151_object = null;
				if(var_152_bool != 0) {
					TaskCall(3);
					func_593();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_151_object = null;
	}
	
}


// @pe
void func_1938(int var_55_int, object var_56_object)
{
	object var_58_object;
	var_56_object = var_58_object;
	bool var_57_bool;
	func_1526(var_57_bool, var_58_object);
	if(var_57_bool != 0)
		var_55_int = 2;
	else
		var_55_int = 0;
	
}


// @pe
void func_1948(object var_91_object)
{
	object var_92_object;
	var_91_object = var_92_object;
	TaskCall(6);
	func_1136(var_93_object, var_94_cvector, var_95_bool, var_92_object);
	TaskReturn();
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
	func_1781(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1781(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
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
void func_1956(int var_19_int)
{
	var_19_int = 0;
}


// @pe
void func_1959(void)
{
}


// @pe
void func_1961(int var_20_int)
{
	var_20_int = 0;
}


// @pe
void func_1964(void)
{
}


void func_1453(cvector var_88_cvector)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
}


// @pe
void func_1966(int var_19_int)
{
	var_19_int = 2;
}


// @pe
void func_1969(object var_27_object)
{
	object var_28_object;
	func_2231(var_28_object, var_28_object);
}


void func_1458(cvector var_73_cvector, object var_74_object)
{
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	cvector var_78_cvector;
	var_74_object->GetPosition(var_78_cvector);
	var_73_cvector = var_78_cvector - var_77_cvector;
}


void func_1975(void)
{
}


void func_1976(int var_88_int)
{
	int var_90_int;
	@GetVariable("player", var_90_int);
	if(var_90_int == 0) {
		var_88_int = 200001;
		return 2;
	EMIT "GOTO 0x7c7";
	}
	if(var_90_int == 1) {
		var_88_int = 200002;
		return 2;
	}
	var_88_int = 200003;
}


void func_1465(float var_44_float, object var_45_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_45_object->GetPosition(var_50_cvector);
	var_44_float = (var_50_cvector - var_49_cvector) | (var_50_cvector - var_49_cvector);
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
	func_1453(var_121_cvector);
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
				func_1453(var_133_cvector);
				var_1_bool = var_133_cvector + var_81_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_991; //@nz

	}
}


void func_1473(bool var_45_bool, object var_46_object, string var_47_string)
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


void func_1993(int var_24_int, int var_25_int)
{
	int var_40_int;
	if(var_24_int > var_25_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_39_int = 0;
	if(var_24_int != var_25_int) {
		@irand(var_40_int, (var_25_int - var_24_int));
	} else if(var_24_int == 0) {
		return 8;
	}
	var_39_int += var_24_int;
	if(var_39_int == 0)
		return 8;
	int var_41_int;
	@GetInvItemByName(var_41_int, "Money");
	bool var_42_bool;
	@AddItem(var_42_bool, var_41_int, 0, var_39_int);
	
}


void func_1485(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


void func_462(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1490(bool var_27_bool, object var_28_object)
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
		func_1485(var_38_bool, var_39_object);
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


void func_469(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_476(bool var_160_bool)
{
	var_160_bool = false;
}


void func_2023(bool var_18_bool)
{
	int var_21_int; bool var_22_bool;
	if(var_18_bool != 0) {
		int var_27_int;
		func_1835(var_27_int);
		func_1993(0, (100 + (var_27_int * 100)));
		@irand(var_21_int, 9);
		if(var_21_int == 0) {
			int var_56_int;
			func_2198(var_56_int, "lemon");
			@AddItem(var_22_bool, var_56_int, 0, 1);
		} else {
				if(var_21_int == 1) {
					int var_64_int;
					func_2198(var_64_int, "rusk");
					@AddItem(var_22_bool, var_64_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_21_int == 2) {
				int var_70_int;
				func_2198(var_70_int, "hook");
				@AddItem(var_22_bool, var_70_int, 0, 1);
			} else if(var_21_int == 4) {
				int var_76_int;
				func_2198(var_76_int, "syringe");
				@AddItem(var_22_bool, var_76_int, 0, 1);
			} else if(var_21_int == 5) {
				int var_82_int;
				func_2198(var_82_int, "watch");
				@AddItem(var_22_bool, var_82_int, 0, 1);
			} else if(var_21_int == 6) {
				int var_88_int;
				func_2198(var_88_int, "razor");
				@AddItem(var_22_bool, var_88_int, 0, 1);
			}
	}
		int var_95_int;
		func_1835(var_95_int);
		func_1993(0, (50 + (var_95_int * 50)));
		@irand(var_21_int, 8);
		if(var_21_int == 0) {
			int var_101_int;
			func_2198(var_101_int, "beads");
			@AddItem(var_22_bool, var_101_int, 0, 1);
		} else if(var_21_int == 1) {
			int var_107_int;
			func_2198(var_107_int, "bracelet");
			@AddItem(var_22_bool, var_107_int, 0, 1);
		} else if(var_21_int == 2) {
			int var_113_int;
			func_2198(var_113_int, "ear_ring");
			@AddItem(var_22_bool, var_113_int, 0, 1);
		} else if(var_21_int == 3) {
			int var_119_int;
			func_2198(var_119_int, "gold_ring");
			@AddItem(var_22_bool, var_119_int, 0, 1);
		} else if(var_21_int == 4) {
			int var_125_int;
			func_2198(var_125_int, "silver_ring");
			@AddItem(var_22_bool, var_125_int, 0, 1);
		} else if(var_21_int == 5) {
			int var_131_int;
			func_2198(var_131_int, "flower");
			@AddItem(var_22_bool, var_131_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1526(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1490(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1473(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


