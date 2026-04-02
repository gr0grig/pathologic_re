// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	}

}


task task_1
{
	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2293(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			object var_24_object;
			var_17_bool = var_24_object;
			func_2296(var_24_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_2302();
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, float var_3_float, float var_4_float, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int, bool var_14_bool, object var_15_object, object var_16_object, object var_17_object, object var_18_object, string var_19_string, bool var_20_bool)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, string var_2_string, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
	}

}


maintask task_2
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		@SensePlayerOnly(true);
		func_2326();
		func_185();
	
		for(;;) {
			var_2_bool = false;
			func_398(var_15_string, var_16_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2293(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_27_object;
			var_17_bool = var_27_object;
			func_2296(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2252(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_61_object;
			var_17_bool = var_61_object;
			func_2262(var_61_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		func_2370(var_23_object);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_24_int; object var_25_object;
			var_17_string = var_25_object;
			func_2270(var_24_int, var_25_object);
			var_24_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_333(var_20_int);
				object var_67_object;
				var_17_string = var_67_object;
				func_2277(var_67_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2283(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_27_object;
			var_17_bool = var_27_object;
			func_2286();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		func_2288(var_23_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_333(var_20_int);
			string var_29_string; object var_30_object;
			var_18_bool = var_29_string;
			var_17_string = var_30_object;
			func_2291();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_18_object;
		func_358(var_18_object, var_18_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_18_object;
		func_358(var_18_object, var_18_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, int var_4_int, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_333(var_16_bool);
		func_2302();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_333(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2197();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		@RequestClearPath(var_17_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		@Stop();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2293(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_26_object;
			var_17_bool = var_26_object;
			func_2296(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2252(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_60_object;
			var_17_bool = var_60_object;
			func_2262(var_60_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		func_2370(var_23_object);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_24_int; object var_25_object;
			var_17_string = var_25_object;
			func_2270(var_24_int, var_25_object);
			var_24_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_662();
				object var_66_object;
				var_17_string = var_66_object;
				func_2277(var_66_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2283(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_26_object;
			var_17_bool = var_26_object;
			func_2286();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		func_2288(var_23_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_662();
			string var_28_string; object var_29_object;
			var_18_bool = var_28_string;
			var_17_string = var_29_object;
			func_2291();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_662();
		func_2302();
	}

}


task task_4
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2293(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_28_object;
			var_17_bool = var_28_object;
			func_2296(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2252(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_62_object;
			var_17_bool = var_62_object;
			func_2262(var_62_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		func_2370(var_23_object);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_24_int; object var_25_object;
			var_17_string = var_25_object;
			func_2270(var_24_int, var_25_object);
			var_24_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_831();
				object var_68_object;
				var_17_string = var_68_object;
				func_2277(var_68_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2283(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_28_object;
			var_17_bool = var_28_object;
			func_2286();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		func_2288(var_23_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_831();
			string var_30_string; object var_31_object;
			var_18_bool = var_30_string;
			var_17_string = var_31_object;
			func_2291();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_831();
		object var_20_object;
		var_17_bool = var_20_object;
		func_2197();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 111)
			return 4;
		bool var_24_bool;
		func_1857(var_24_bool, var_0_bool);
		if(!var_24_bool) { //@nz
			func_831();
			return 4;
		}
		cvector var_20_cvector;
		@GetDirection(var_20_cvector);
		cvector var_61_cvector;
		func_1733(var_61_cvector, var_0_bool);
		cvector var_21_cvector;
		var_61_cvector = var_21_cvector;
		float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
		var_20_cvector = var_68_cvector;
		var_21_cvector = var_69_cvector;
		func_2159(var_67_float, var_68_cvector, var_69_cvector);
		if(var_67_float < 0.49999997)
			func_1948(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_831();
		func_2302();
	}

}


task task_5
{
}


task task_6
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_1529(var_16_bool);
		func_2302();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, int var_12_int, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 0)
			return 0;
		bool var_20_bool;
		func_1545(var_20_bool, var_1_bool);
		if(!var_20_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		@RequestClearPath(var_17_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_1529(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2197();
	}

}


task task_7
{
}


task task_8
{
	// @pe
	void event_11(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, int var_17_int, int var_18_int)
	{
		if(1 != 0) {
			func_2105();
			if(var_17_int == 15766) {
				func_1672(var_18_int, "Neutral");
				var_0_bool->SetMessage(14535); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(15227, -1, 16504); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_42_bool;
			func_2324(var_42_bool);
			if(var_42_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x699";
	
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, string var_18_string)
{
	float var_20_float;
	if(var_18_string == "health") {
		@GetProperty("health", var_20_float);
		if(var_20_float <= 0)
			@SignalDeath(var_17_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_2176(var_18_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
{
	object var_21_object;
	var_17_object = var_21_object;
	int var_22_int;
	var_18_int = var_22_int;
	float var_23_float;
	var_19_float = var_23_float;
	func_1881(var_22_int, var_23_float);
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


// @pe
void func_1545(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1857(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


void func_1552(string var_169_string)
{
	var_169_string = "walk";
}


void func_1554(string var_170_string)
{
	var_170_string = "run";
}


void func_1556(bool var_0_bool, int var_35_int, object var_36_object)
{
	var_0_bool = var_36_object;
	bool var_46_bool; object var_47_object;
	var_36_object = var_47_object;
	func_1964(var_46_bool, var_47_object);
	if(!var_46_bool) { //@nz
		var_35_int = -2;
		return 8;
	}
	object var_42_object;
	@CreateDialog(var_42_object);
	int var_87_int;
	func_2320(var_87_int);
	var_42_object->SetNPCName(var_87_int);
	string var_88_string;
	func_2322(var_88_string);
	var_42_object->SetPhoto(var_88_string);
	int var_89_int;
	func_2303(var_89_int);
	var_42_object->SetPlayerName(var_89_int);
	bool var_43_bool;
	@IsOverrideActive(var_43_bool);
	if(var_43_bool != 0) {
		var_35_int = -2;
		return 8;
	}
	@DoDialog(var_42_object);
	object var_98_object; object var_99_object;
	var_36_object = var_98_object;
	var_42_object = var_99_object;
	TaskCall(8);
	func_1619(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	bool var_45_bool;
	var_42_object->IsDialogEnd(var_45_bool);
	
	for(;;) {
		var_132_bool = !var_45_bool; //@nz
		if(var_132_bool == 0) goto Label_1608;
		@sync();
		var_42_object->IsDialogEnd(var_45_bool);
	}
	
Label_1608:
	object var_133_object;
	var_36_object = var_133_object;
	func_2020();
	@StopDialog(var_42_object);
	var_42_object->GetReturnValue(-1);
	int var_44_int = var_35_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_22(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_55(var_20_object);
	object var_70_object;
	var_19_object = var_70_object;
	func_2373();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2072(void)
{
	@CameraSwitchToNormal();
}


void func_2076(string var_27_string)
{
	@Trace("playing " + var_27_string);
	float var_30_float;
	float var_31_float;
	@lshGetAnimTimes(var_27_string, var_30_float, var_31_float);
	@lshPlayAnimation(var_30_float, var_31_float);
	@Trace("start: " + var_30_float);
	@Trace("end: " + var_31_float);
}


void func_2094(object var_77_object)
{
	float var_80_float;
	var_77_object->GetEyesHeight(var_80_float);
	cvector var_81_cvector = [0.0, 0.0, 0.0];
	var_82_float = GetByIndex(var_81_cvector, 1);
	var_80_float = var_82_float;
	SetByIndex(var_81_cvector, 1) = var_82_float;
	@LookAsync(var_77_object, "head", var_81_cvector);
}


void func_55(object var_20_object)
{
	cvector var_31_cvector; cvector var_32_cvector; cvector var_33_cvector; cvector var_34_cvector; string var_35_string; object var_36_object; bool var_37_bool; bool var_38_bool; float var_39_float; cvector var_40_cvector;
	if(var_20_object == null) {
		func_142("fdie");
	} else {
		var_20_object->GetPosition(var_31_cvector);
		@GetPosition(var_32_cvector);
		@GetDirection(var_33_cvector);
		var_34_cvector = var_32_cvector - var_31_cvector;
		var_45_float = GetByIndex(var_34_cvector, 0);
		var_46_float = GetByIndex(var_33_cvector, 0);
		var_48_float = GetByIndex(var_34_cvector, 2);
		var_49_float = GetByIndex(var_33_cvector, 2);
		if(((var_45_float * var_46_float) + (var_48_float * var_49_float)) >= 0)
			var_35_string = "fdie";
		else
			var_35_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_20_object = var_36_object;
		var_56_bool = IsFuncExist(var_20_object, "GetScriptProperty", 2);
		if(var_56_bool != 0) {
			var_20_object->HasScriptProperty(var_37_bool, "Owner");
			if(var_37_bool != 0) {
				var_20_object->GetScriptProperty(var_36_object, "Owner");
				if(var_36_object == null)
					var_20_object = var_36_object;
			}
		}
		var_63_bool = IsFuncExist(var_36_object, "@GetEyesHeight", 1);
		if(var_63_bool != 0) {
			var_36_object->GetEyesHeight(var_39_float);
			var_40_cvector = [0.0, 0.0, 0.0];
			var_64_float = GetByIndex(var_40_cvector, 1);
			var_39_float = var_64_float;
			SetByIndex(var_40_cvector, 1) = var_64_float;
			@LookAsync(var_20_object, "head", var_40_cvector);
			var_38_bool = true;
		} else {
			var_38_bool = false;

		}
		@PlayAnimation("all", var_35_string);
		@WaitForAnimEnd();
		if(var_38_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_35_string);
		@RemoveEnvelope();
		var_36_object = null;
	}
	
}


void func_2105(void)
{
	bool var_20_bool;
	func_2324(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_2112(cvector var_71_cvector, cvector var_72_cvector)
{
	float var_75_float = sqrt(var_72_cvector | var_72_cvector);
	if(var_75_float < 0.000001)
		var_71_cvector = [0.0, 0.0, 0.0];
	var_71_cvector = var_72_cvector / var_75_float;
}


// @pe
void func_2122(float var_333_float, float var_334_float, float var_335_float)
{
	if(var_334_float < var_335_float)
		var_334_float = var_333_float;
	else
		var_335_float = var_333_float;
	
}


void func_593(void)
{
	int var_55_int; int var_56_int; bool var_57_bool; float var_58_float; bool var_59_bool;
	@WaitForAnimEnd();
	bool var_60_bool;
	func_1959(var_60_bool);
	if(!var_60_bool) //@nz
		return 14;
	int var_62_int;
	func_2218(var_62_int);
	int var_53_int;
	var_62_int = var_53_int;
	int var_54_int = 0;
	
	for(;;) {
		bool var_75_bool = false;
		if(var_54_int < 5) {
			bool var_78_bool;
			func_1959(var_78_bool);
			if(var_78_bool != 0)
				var_75_bool = true;
		}
		if(var_75_bool != 0) {
			@irand(var_55_int, 3);
			if(var_55_int == 0) {
				if(var_53_int == 0) goto Label_640;
				@irand(var_56_int, var_53_int);
				string var_84_string; int var_85_int;
				var_56_int = var_85_int;
				func_2211(var_84_string, var_85_int);
				@PlayAnimation("all", var_84_string);
				@WaitForAnimEnd(var_57_bool);
				if(!var_57_bool) { //@nz
				} else {
			} else {
			if(var_55_int == 1) {
				@rand(var_58_float, 4);
				@Sleep((var_58_float + 1), var_59_bool);
				if(!var_59_bool) { //@nz
					goto Label_661;
				}
			} else if(var_54_int != 0) {
				goto Label_661;
			}
			}
				var_54_int += 1;
			}
		}
	Label_661:
		return 14;

	}
	
}


// @pe
void func_2129(float var_343_float, float var_344_float, float var_345_float, float var_346_float)
{
	if(var_344_float < var_345_float) {
		var_345_float = var_343_float;
		return 0;
	}
	if(var_344_float > var_346_float) {
		var_346_float = var_343_float;
		return 0;
	}
	var_344_float = var_343_float;
}


// @pe
void func_1619(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_98_object, object var_99_object)
{
	var_0_bool = var_99_object;
	var_1_bool = var_98_object;
	var_3_bool = false;
	if(1 != 0) {
		func_1672(var_99_object, "Neutral");
		var_0_bool->SetMessage(14535); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(15227, -1, 16504); //@t
		goto Label_1642;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x657";
	}
Label_1642:
	bool var_124_bool;
	func_2324(var_124_bool);
	if(var_124_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_2076(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_1671;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1671:
		return 0;

	}
	
}


void func_1112(bool var_0_bool, float var_283_float, int var_284_int)
{
	object var_288_object; float var_289_float; float var_290_float;
	@GetVictim((var_283_float * 0.9), var_288_object);
	@ReportAttack(var_0_bool);
	if(var_288_object == var_0_bool) {
		float var_294_float; object var_295_object; int var_296_int;
		var_288_object = var_295_object;
		var_284_int = var_296_int;
		func_901(var_296_int);
		var_294_float = var_289_float;
		float var_297_float; object var_298_object; float var_299_float; int var_300_int;
		var_288_object = var_298_object;
		int var_301_int; object var_302_object; int var_303_int;
		var_288_object = var_302_object;
		var_284_int = var_303_int;
		func_904(var_303_int);
		var_301_int = var_300_int;
		func_1752(var_297_float, var_298_object, var_299_float, var_300_int);
		var_297_float = var_290_float;
		int var_350_int;
		func_1390(var_350_int);
		@ReportHit(var_0_bool, var_350_int, var_290_float, var_299_float);
		object var_351_object; float var_352_float;
		var_288_object = var_351_object;
		var_290_float = var_352_float;
		func_1392();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2140(float var_70_float, cvector var_71_cvector, cvector var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_70_float = (var_73_float * var_74_float) + (var_76_float * var_77_float);
}


// @pe
void func_2149(float var_79_float, cvector var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0);
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_84_float = GetByIndex(var_80_cvector, 2);
	var_85_float = GetByIndex(var_80_cvector, 2);
	var_79_float = sqrt((var_81_float * var_82_float) + (var_84_float * var_85_float));
}


// @pe
void func_2159(float var_67_float, cvector var_68_cvector, cvector var_69_cvector)
{
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	cvector var_72_cvector;
	var_69_cvector = var_72_cvector;
	float var_70_float;
	func_2140(var_70_float, var_71_cvector, var_72_cvector);
	float var_79_float; cvector var_80_cvector;
	var_68_cvector = var_80_cvector;
	func_2149(var_79_float, var_80_cvector);
	float var_88_float; cvector var_89_cvector;
	var_69_cvector = var_89_cvector;
	func_2149(var_88_float, var_89_cvector);
	var_67_float = var_70_float / (var_79_float * var_88_float);
}


void func_1151(bool var_0_bool, bool var_1_bool, bool var_254_bool, float var_255_float)
{
	int var_258_int;
	@irand(var_258_int, var_1_bool);
	var_258_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_258_int));
	@WaitForAnimEnd();
	bool var_259_bool;
	func_1358(var_258_int, var_259_bool);
	bool var_280_bool;
	func_1857(var_280_bool, var_0_bool);
	if(!var_280_bool) { //@nz
		@StopAsync();
		var_254_bool = false;
		return 4;
	}
	float var_283_float; int var_284_int;
	var_255_float = var_283_float;
	var_258_int = var_284_int;
	func_1112(var_259_bool, var_283_float, var_284_int);
	@HasAnimation(var_259_bool, "all", ("attack_middle" + var_258_int));
	if(var_259_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_258_int));
		@WaitForAnimEnd();
		bool var_360_bool;
		func_1857(var_360_bool, var_0_bool);
		if(!var_360_bool) { //@nz
			@StopAsync();
			var_254_bool = false;
			return 4;
		}
		float var_363_float; int var_364_int;
		var_255_float = var_363_float;
		var_258_int = var_364_int;
		func_1112(var_259_bool, var_363_float, var_364_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_258_int));
	bool var_369_bool;
	func_1231(var_369_bool, 0.75);
	@StopAsync();
	var_254_bool = true;
}


// @pe
void func_2176(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	TaskCall(1);
	func_22(var_19_object);
	TaskReturn();
}


// @pe
void func_1672(bool var_2_bool, string var_23_string)
{
	bool var_24_bool;
	func_2324(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	if(var_23_string == var_2_bool)
		return 0;
	string var_27_string;
	func_2076(var_27_string);
	var_2_bool = var_27_string;
}


// @pe
void func_142(string var_42_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_42_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_42_string);
	@RemoveEnvelope();
}


void func_662(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_667(bool var_0_bool, object var_69_object)
{
	var_0_bool = var_69_object;
	bool var_76_bool;
	func_718(var_76_bool);
	cvector var_74_cvector;
	@GetDirection(var_74_cvector);
	cvector var_84_cvector;
	func_1733(var_84_cvector, var_0_bool);
	cvector var_75_cvector;
	var_84_cvector = var_75_cvector;
	float var_90_float; cvector var_91_cvector; cvector var_92_cvector;
	var_74_cvector = var_91_cvector;
	var_75_cvector = var_92_cvector;
	func_2159(var_90_float, var_91_cvector, var_92_cvector);
	if(var_90_float < 0) {
		func_1948(var_0_bool);
		var_76_bool = true;
	} else {
		@Sleep(1.5, var_76_bool);
	}
	if(var_76_bool != 0) {
		func_1948(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2211(string var_68_string, int var_69_int)
{
	string var_71_string = "idle";
	if(var_69_int != 0)
		var_71_string += var_69_int;
	var_71_string = var_68_string;
}


void func_2218(int var_62_int)
{
	int var_65_int; bool var_66_bool;
	var_65_int = 0;
	
	for(;;) {
		string var_68_string; int var_69_int;
		var_65_int = var_69_int;
		func_2211(var_68_string, var_69_int);
		@HasAnimation(var_66_bool, "all", var_68_string);
		if(!var_66_bool) //@nz
			break;
		var_65_int += 1;
	}
	var_65_int = var_62_int;
}


void func_185(void)
{
	bool var_19_bool;
	func_1959(var_19_bool);
	if(!var_19_bool) //@nz
		func_2302();
}


// @pe
void func_2235(int var_60_int)
{
	bool var_62_bool;
	func_2368(var_62_bool);
	if(var_62_bool != 0)
		var_60_int = 2;
	else
		var_60_int = 0;
	
}


// @pe
void func_1725(string var_325_string, int var_326_int)
{
	if(var_326_int == 1)
		var_325_string = "fire";
	var_325_string = "phys";
}


// @pe
void func_2244(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	TaskCall(4);
	func_667(var_70_object, var_69_object);
	TaskReturn();
}


void func_1733(cvector var_61_cvector, object var_62_object)
{
	cvector var_65_cvector;
	@GetPosition(var_65_cvector);
	cvector var_66_cvector;
	var_62_object->GetPosition(var_66_cvector);
	var_61_cvector = var_66_cvector - var_65_cvector;
}


// @pe
void func_2252(int var_26_int, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1857(var_28_bool, var_29_object);
	if(var_28_bool != 0)
		var_26_int = 2;
	else
		var_26_int = 0;
	
}


void func_1740(bool var_44_bool, object var_45_object, string var_46_string)
{
	var_51_bool = IsFuncExist(var_45_object, "HasProperty", 2);
	if(!var_51_bool) { //@nz
		var_44_bool = false;
		return 2;
	}
	bool var_48_bool;
	var_45_object->HasProperty(var_46_string, var_48_bool);
	var_48_bool = var_44_bool;
}


void func_718(bool var_0_bool)
{
	func_2094(var_0_bool);
}


void func_1231(bool var_369_bool, float var_370_float)
{
	float var_373_float; bool var_374_bool;
	@rand(var_373_float);
	if(var_373_float < var_370_float) {

		for(;;) {
			@IsAnimationPlaying(var_374_bool);
			if(!var_374_bool) { //@nz
			} else {
				bool var_377_bool;
				func_1295(var_374_bool, var_377_bool);
				if(var_377_bool != 0) {
					var_369_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_369_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


// @pe
void func_2262(object var_69_object)
{
	object var_70_object;
	var_69_object = var_70_object;
	TaskCall(5);
	func_893(var_70_object);
	TaskReturn();
}


void func_1752(float var_297_float, object var_298_object, float var_299_float, int var_300_int)
{
	int var_310_int; int var_312_int;
	object var_317_object;
	var_298_object = var_317_object;
	bool var_316_bool;
	func_1740(var_316_bool, var_317_object, "health");
	if(!var_316_bool) //@nz
		var_297_float = 0.0;
	bool var_320_bool; object var_321_object;
	func_1740(var_320_bool, var_321_object, "armor");
	if(!var_320_bool) //@nz
		var_310_int = 0;
	else
		var_321_object->GetProperty("armor", var_310_int);
	string var_325_string; int var_326_int;
	var_300_int = var_326_int;
	func_1725(var_325_string, var_326_int);
	string var_311_string = "armor_" + var_325_string;
	bool var_329_bool; object var_330_object; string var_331_string;
	var_298_object = var_330_object;
	func_1740(var_329_bool, var_330_object, var_331_string);
	if(!var_329_bool) //@nz
		var_312_int = 0;
	else
		var_298_object->GetProperty(var_331_string, var_312_int);

	float var_333_float;
	func_2122(var_333_float, ((var_310_int + var_312_int) / 100.0), (float)1);
	float var_313_float;
	var_333_float = var_313_float;
	float var_314_float;
	var_298_object->GetProperty("health", var_314_float);
	float var_343_float;
	func_2129(var_343_float, (var_314_float - (var_299_float * (1 - var_313_float))), (float)0, (float)1);
	var_298_object->SetProperty("health", var_343_float);
	float var_315_float = var_297_float;
	
}


// @pe
void func_2270(int var_24_int, object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	int var_26_int;
	func_2252(var_26_int, var_27_object);
	var_26_int = var_24_int;
}


// @pe
void func_2277(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	func_2262(var_69_object);
}


void func_1255(bool var_0_bool, bool var_211_bool, float var_212_float)
{
	bool var_218_bool; cvector var_219_cvector; cvector var_220_cvector; cvector var_221_cvector; float var_222_float;
	
	for(;;) {
		@IsAnimationPlaying(var_218_bool);
		if(!var_218_bool) //@nz
			break;
		bool var_224_bool;
		func_1295(var_222_float, var_224_bool);
		if(var_224_bool != 0) {
			var_211_bool = true;
			return 10;
		}
		bool var_249_bool;
		func_1857(var_249_bool, var_0_bool);
		if(!var_249_bool) { //@nz
			var_211_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_219_cvector); //@t
		@GetPFPosition(var_220_cvector);
		var_221_cvector = var_219_cvector - var_220_cvector;
		var_222_float = var_221_cvector | var_221_cvector;
		if(var_222_float < (var_212_float * var_212_float)) {
			bool var_254_bool; float var_255_float;
			var_212_float = var_255_float;
			func_1151(var_221_cvector, var_222_float, var_254_bool, var_255_float);
			var_211_bool = true;
			return 10;
		}
		@sync();
	}
	var_211_bool = false;
}


// @pe
void func_2283(int var_20_int)
{
	var_20_int = 0;
}


// @pe
void func_2286(void)
{
}


// @pe
void func_2288(int var_21_int)
{
	var_21_int = 0;
}


// @pe
void func_2291(void)
{
}


// @pe
void func_2293(int var_20_int)
{
	var_20_int = 2;
}


// @pe
void func_2296(object var_28_object)
{
	object var_29_object;
	func_2330(var_29_object, var_29_object);
}


void func_2302(void)
{
}


void func_2303(int var_89_int)
{
	int var_91_int;
	@GetVariable("player", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0x90e";
	}
	if(var_91_int == 1) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
}


void func_1295(bool var_0_bool, bool var_224_bool)
{
	cvector var_230_cvector; cvector var_231_cvector;
	bool var_235_bool;
	func_1857(var_235_bool, var_0_bool);
	if(!var_235_bool) { //@nz
		var_224_bool = false;
		return 10;
	}
	bool var_238_bool;
	float var_234_float;
	func_1347(var_234_float, var_238_bool);
	if(var_238_bool != 0) {
		var_0_bool->GetPFPosition(var_230_cvector); //@t
		@GetPFPosition(var_231_cvector);
		var_0_bool->GetAttackDistance(var_234_float); //@t
		var_234_float += 50;
		if(((var_230_cvector - var_231_cvector) | (var_230_cvector - var_231_cvector)) <= (var_234_float * var_234_float)) {
			func_1328(var_234_float);
			var_224_bool = true;
			return 10;
		}
	}
	var_224_bool = false;
}


void func_2320(int var_87_int)
{
	var_87_int = 3348;
}


void func_2322(string var_88_string)
{
	var_88_string = "ui/NPC_None.png";
}


void func_2324(bool var_20_bool)
{
	var_20_bool = false;
}


void func_2326(void)
{
	var_18_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_1816(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_2330(object var_29_object, object var_37_object)
{
	bool var_31_bool;
	var_32_bool = GlobalVars[0];
	if(var_32_bool != 0) {
		@IsOverrideActive(var_31_bool);
		if(!var_31_bool) //@nz
			@WorkWithCorpse(var_29_object);
		return 2;
	EMIT "GOTO 0x93f";
	}
	int var_35_int; object var_36_object;
	var_29_object = var_36_object;
	TaskCall(7);
	func_1556(var_37_object, var_35_int, var_36_object);
	TaskReturn();
	if(1000 == var_37_object) {
		bool var_135_bool; object var_136_object;
		var_29_object = var_136_object;
		func_2024(var_135_bool, var_136_object);
		if(!var_135_bool) //@nz
			return 2;
		object var_165_object;
		var_29_object = var_165_object;
		TaskCall(0);
		func_0(var_165_object);
		TaskReturn();
		object var_170_object;
		var_29_object = var_170_object;
		func_2072();
	}
}


void func_1821(bool var_26_bool, object var_27_object)
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
		func_1816(var_37_bool, var_38_object);
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


void func_1328(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_244_cvector;
	var_0_bool->GetPFPosition(var_244_cvector); //@t
	cvector var_245_cvector;
	@GetPFPosition(var_245_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_831(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_2368(bool var_62_bool)
{
	var_62_bool = false;
}


void func_1857(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_1821(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1740(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


// @pe
void func_2370(bool var_21_bool)
{
	var_21_bool = false;
}


void func_1347(bool var_0_bool, bool var_203_bool)
{
	bool var_205_bool;
	var_208_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_208_bool != 0) {
		var_0_bool->IsAttacking(var_205_bool); //@t
		var_205_bool = var_203_bool;
	}
	var_203_bool = false;
}


// @pe
void func_2373(void)
{
	var_71_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_333(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_462(var_16_string, var_17_bool);
}


void func_1358(bool var_2_bool, object var_4_object)
{
	int var_268_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_267_float;
	@rand(var_267_float);
	float var_274_float;
	func_1396(var_274_float);
	if(var_267_float < var_274_float) {
		@irand(var_268_int, var_2_bool);
		@Speak("attack" + (var_268_int + 1));
		int var_279_int;
		func_1394(var_279_int);
		var_4_object = var_279_int;
	}
}


void func_341(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_469(var_21_bool, var_22_int);
}


void func_1881(object var_21_object, int var_22_int)
{
	object var_34_object; object var_35_object; cvector var_36_cvector; float var_37_float; string var_43_string;
	bool var_44_bool = false;
	if(var_22_int != 4) {
		if(var_22_int != 5)
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		@GetScene(var_34_object);
		@GetPosition(var_36_cvector);
		@GetEyesHeight(var_37_float);
		var_49_float = GetByIndex(var_36_cvector, 1);
		SetByIndex(var_36_cvector, 1) = (var_49_float + (var_37_float / 2));
		@AddActorByType(var_35_object, "scripted", var_34_object, var_36_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_35_object = null;
		var_34_object = null;
	}
	if(var_21_object == null)
		return 20;
	int var_38_int;
	@GetSecondaryAnimationType(var_38_int);
	if(var_38_int < 0)
		return 20;
	cvector var_39_cvector;
	var_21_object->GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetDirection(var_41_cvector);
	cvector var_42_cvector = var_40_cvector - var_39_cvector;
	var_58_float = GetByIndex(var_42_cvector, 0);
	var_59_float = GetByIndex(var_41_cvector, 0);
	var_61_float = GetByIndex(var_42_cvector, 2);
	var_62_float = GetByIndex(var_41_cvector, 2);
	if(((var_58_float * var_59_float) + (var_61_float * var_62_float)) >= 0)
		var_43_string = "fhit";
	else
		var_43_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_43_string + "1"), (var_43_string + "2"), -10);
	
}


void func_358(bool var_2_bool, object var_18_object)
{
	bool var_23_bool; object var_24_object;
	func_1857(var_23_bool, var_24_object);
	if(!var_23_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_21_bool;
	@IsPlayerActor(var_24_object, var_21_bool);
	if(!var_21_bool) //@nz
		return 4;
	int var_60_int; object var_61_object;
	var_18_object = var_61_object;
	func_2235(var_61_object);
	int var_22_int;
	var_60_int = var_22_int;
	if(var_22_int > 0) {
		if(var_22_int > 1)
			func_341(var_22_int);
		object var_68_object;
		var_18_object = var_68_object;
		func_2244(var_68_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1390(int var_350_int)
{
	var_350_int = 0;
}


// @pe
void func_1392(void)
{
}


void func_1394(int var_279_int)
{
	var_279_int = 1;
}


void func_1396(float var_274_float)
{
	var_274_float = 0.5;
}


void func_1405(bool var_0_bool, bool var_1_bool, bool var_127_bool, object var_128_object, float var_129_float, float var_130_float, bool var_131_bool, bool var_132_bool)
{
	bool var_143_bool; object var_145_object; cvector var_146_cvector; cvector var_147_cvector; float var_149_float; object var_150_object;
	var_0_bool = false;
	var_1_bool = var_128_object;
	bool var_144_bool;
	var_132_bool = var_144_bool;
	
	for(;;) {
		bool var_151_bool; object var_152_object;
		var_128_object = var_152_object;
		func_1545(var_151_bool, var_152_object);
		if(!var_151_bool) { //@nz
			var_127_bool = false;
			return 16;
		}
		var_128_object->GetPosition(var_146_cvector);
		@GetPosition(var_147_cvector);
		var_149_float = (var_146_cvector - var_147_cvector) | (var_146_cvector - var_147_cvector);
		bool var_156_bool = false;
		if(var_130_float > 0) {
			if(var_149_float > (var_130_float * var_130_float))
				var_156_bool = true;
		}
		if(var_156_bool != 0) {
			@Stop();
			var_127_bool = false;
			return 16;
		}
		if(var_149_float > (var_129_float * var_129_float)) {
			var_128_object->GetPFPosition(var_146_cvector);
			@FindPathTo(var_150_object, var_146_cvector);
			if(var_150_object != null) {
				var_150_object = var_145_object;
				var_150_object = null;
			}
			if(var_145_object != null) {
				if(var_144_bool == 0) goto Label_1458;
				var_144_bool = false;
				@RotatePath(var_145_object, var_143_bool);
				if(!var_143_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_169_string;
						func_1552(var_169_string);
						string var_170_string;
						func_1554(var_170_string);
						@FollowPath(var_145_object, var_131_bool, var_143_bool, var_169_string, var_170_string);
						if(!var_143_bool) { //@nz
							if(var_0_bool == 0) goto Label_1477;
							var_145_object = null;
						}
					EMIT "GOTO 0x5c6";

					Label_1477:
						} else {
					var_145_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_143_bool);
					if(!var_143_bool) { //@nz
						if(var_0_bool != 0) {
							var_145_object = null;
							goto Label_1505;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1505;
		}
			var_150_object = null;
			goto Label_1503;

		Label_1503:
			var_145_object = null;

		}
	Label_1505:
		for(;;) {
			var_127_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_893(object var_70_object)
{
	object var_76_object;
	func_907(var_71_object, var_72_int, var_73_int, var_74_bool, var_75_int, var_76_object, var_76_object, true, 180.0);
}


// @pe
void func_901(float var_294_float)
{
	var_294_float = 0.03;
}


// @pe
void func_904(int var_301_int)
{
	var_301_int = 0;
}


void func_907(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_76_object, bool var_77_bool, float var_78_float, bool var_133_bool)
{
	bool var_89_bool; bool var_90_bool; float var_91_float; cvector var_92_cvector; cvector var_93_cvector; bool var_94_bool; bool var_95_bool; float var_97_float; float var_98_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_89_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_89_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_90_bool, ("attack" + (var_2_bool + 1)));
			if(!var_90_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_112_bool = IsFuncExist(var_76_object, "@GetAttackDistance", 1);
			if(var_112_bool != 0) {
				var_76_object->GetAttackDistance(var_91_float);
				var_91_float += 50;
			} else {
								var_78_float = var_91_float;

			}
			if(var_91_float >= 150)
				var_91_float = 150;
			var_3_bool = false;
			var_0_bool = var_76_object;
			@IsPlayerActor(var_0_bool, var_94_bool);
			if(var_77_bool != 0)
				var_95_bool = false;
			else
				var_95_bool = true;

			for(;;) {
				bool var_117_bool = false;
				bool var_118_bool;
				func_1857(var_118_bool, var_0_bool);
				if(var_118_bool != 0) {
					if(!var_3_bool) //@nz
						var_117_bool = true;
				}
				if(var_117_bool != 0) {
					var_0_bool->GetPFPosition(var_92_cvector); //@t
					@GetPFPosition(var_93_cvector);
					var_97_float = (var_92_cvector - var_93_cvector) | (var_92_cvector - var_93_cvector);
					if(var_97_float >= ((400.0 + var_91_float) * (400.0 + var_91_float))) {
						bool var_127_bool; float var_129_float;
						var_91_float = var_129_float;
						TaskCall(6);
						func_1405(var_133_bool, var_134_object, var_127_bool, var_0_bool, var_129_float, 3000.0, true, false);
						TaskReturn();
						if(!var_133_bool) { //@nz
						} else {
							var_95_bool = false;
					} else {
					if(var_97_float >= (var_78_float * var_78_float)) {
						if(!var_95_bool) { //@nz
							func_1948(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_95_bool = true;
						}
						@rand(var_98_float);
						bool var_200_bool;
						var_202_bool = var_98_float < 0.6;
						if(var_202_bool != 1) {
							bool var_203_bool;
							func_1347(true, var_203_bool);
							if(var_203_bool != 1)
								var_200_bool = false;
						}
						if(var_200_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_211_bool; float var_212_float;
							func_1255(var_98_float, var_211_bool, var_212_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_381_bool;
							func_1347(var_98_float, var_381_bool);
							var_382_bool = !var_381_bool; //@nz
							if(var_382_bool == 0) goto Label_1085;
							bool var_383_bool;
							func_1857(var_383_bool, var_0_bool);
							if(!var_383_bool) { //@nz
								goto Label_1095;
							}
							var_0_bool->GetPFPosition(var_92_cvector); //@t
							@GetPFPosition(var_93_cvector);
							var_97_float = (var_92_cvector - var_93_cvector) | (var_92_cvector - var_93_cvector);
							if(!(var_97_float < (var_212_float * var_212_float))) goto Label_1085;
							bool var_388_bool; float var_389_float;
							var_78_float = var_389_float;
							func_1151(var_97_float, var_98_float, var_388_bool, var_389_float);
							var_390_bool = !var_388_bool; //@nz
							if(var_390_bool == 0) goto Label_1085;
							goto Label_1095;
					}
						bool var_391_bool; float var_392_float;
						var_78_float = var_392_float;
						func_1151(var_97_float, var_98_float, var_391_bool, var_392_float);
						if(!var_391_bool) { //@nz
							goto Label_1095;
						}
						var_95_bool = true;

					}
				Label_1085:
					goto Label_1094;
					}
					Label_1094:
					}
				}
			Label_1095:
				@WaitForAnimEnd();
				if(var_3_bool != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_94_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_398(bool var_0_bool, bool var_1_bool)
{
	float var_30_float; cvector var_31_cvector; cvector var_32_cvector; float var_33_float; bool var_34_bool; object var_35_object; bool var_36_bool;
	@rand(var_30_float, 0.5);
	@Sleep(var_30_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_410:
				@GetPosition(var_32_cvector);
				@GetCameraFarDistance(var_33_float);
				@GetRandomPFPointInCircle(var_31_cvector, var_32_cvector, (var_33_float * 2.5), var_34_bool);
				if(var_34_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_410;
			}
				var_1_bool = false;
		}
		}
		goto Label_427;

	Label_427:
		@FindShiftedPathTo(var_35_object, var_31_cvector);
		if(var_35_object != null) {
			@RotatePath(var_35_object, var_36_bool);
			if(var_36_bool != 0) {
				bool var_44_bool;
				func_476(var_44_bool);
				@FollowPath(var_35_object, var_44_bool, var_36_bool);
				var_35_object = null;
				if(var_36_bool != 0) {
					TaskCall(3);
					func_593();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_35_object = null;
	}
	
}


void func_1948(object var_93_object)
{
	cvector var_97_cvector;
	var_93_object->GetPosition(var_97_cvector);
	cvector var_98_cvector;
	@GetPosition(var_98_cvector);
	cvector var_99_cvector = var_97_cvector - var_98_cvector;
	var_100_float = GetByIndex(var_99_cvector, 0);
	var_101_float = GetByIndex(var_99_cvector, 2);
	@RotateAsync(var_100_float, var_101_float);
}


void func_1959(bool var_19_bool)
{
	bool var_21_bool;
	@IsLoaded(var_21_bool);
	var_21_bool = var_19_bool;
}


void func_1964(bool var_46_bool, object var_47_object)
{
	cvector var_57_cvector;
	var_47_object->GetPosition(var_57_cvector);
	float var_56_float;
	var_47_object->GetEyesHeight(var_56_float);
	var_64_float = GetByIndex(var_57_cvector, 1);
	SetByIndex(var_57_cvector, 1) = (var_64_float + var_56_float);
	cvector var_58_cvector;
	@GetPosition(var_58_cvector);
	@GetEyesHeight(var_56_float);
	var_65_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (var_65_float + var_56_float);
	cvector var_59_cvector = var_57_cvector - var_58_cvector;
	var_66_float = GetByIndex(var_59_cvector, 1);
	SetByIndex(var_59_cvector, 1) = (float)0;
	var_68_float = sqrt(var_59_cvector | var_59_cvector);
	var_59_cvector /= var_68_float;
	cvector var_60_cvector = -var_59_cvector;
	cvector var_71_cvector;
	func_2112(var_71_cvector, (var_60_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_61_cvector = ((var_59_cvector * 70) + (var_71_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_63_bool;
	@IsOverrideActive(var_63_bool);
	if(var_63_bool != 0)
		var_46_bool = false;
	@StopWorld();
	@CameraTransit((var_58_cvector + var_61_cvector), var_60_cvector);
	var_84_float = GetByIndex(var_61_cvector, 0);
	var_85_float = GetByIndex(var_61_cvector, 2);
	@Rotate(var_84_float, var_85_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_46_bool = true;
}


void func_462(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_469(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_476(bool var_44_bool)
{
	var_44_bool = false;
}


// @pe
void func_2020(void)
{
	@CameraSwitchToNormal();
}


void func_2024(bool var_135_bool, object var_136_object)
{
	cvector var_146_cvector;
	var_136_object->GetPosition(var_146_cvector);
	float var_145_float;
	var_136_object->GetEyesHeight(var_145_float);
	var_153_float = GetByIndex(var_146_cvector, 1);
	SetByIndex(var_146_cvector, 1) = (var_153_float + var_145_float);
	cvector var_147_cvector;
	@GetPosition(var_147_cvector);
	@GetEyesHeight(var_145_float);
	var_154_float = GetByIndex(var_147_cvector, 1);
	SetByIndex(var_147_cvector, 1) = (var_154_float + var_145_float);
	cvector var_148_cvector = var_146_cvector - var_147_cvector;
	var_155_float = GetByIndex(var_148_cvector, 1);
	SetByIndex(var_148_cvector, 1) = (float)0;
	var_157_float = sqrt(var_148_cvector | var_148_cvector);
	var_148_cvector /= var_157_float;
	cvector var_149_cvector = -var_148_cvector;
	cvector var_150_cvector = (var_148_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_152_bool;
	@IsOverrideActive(var_152_bool);
	if(var_152_bool != 0)
		var_135_bool = false;
	@StopWorld();
	@CameraTransit((var_147_cvector + var_150_cvector), var_149_cvector);
	var_162_float = GetByIndex(var_150_cvector, 0);
	var_163_float = GetByIndex(var_150_cvector, 2);
	@Rotate(var_162_float, var_163_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_135_bool = true;
}


void func_1529(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


