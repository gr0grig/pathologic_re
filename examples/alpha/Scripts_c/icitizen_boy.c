// @GLOBALS: 0:object:,1:bool:

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
		func_2572(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			object var_24_object;
			var_17_bool = var_24_object;
			func_2575(var_24_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_2581();
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
		func_2787();
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
		func_2572(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_27_object;
			var_17_bool = var_27_object;
			func_2575(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2541(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_61_object;
			var_17_bool = var_61_object;
			func_2551(var_61_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		bool var_21_bool;
		func_2835(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_57_int; object var_58_object;
			var_17_string = var_58_object;
			func_2559(var_57_int, var_58_object);
			var_57_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_333(var_20_int);
				object var_94_object;
				var_17_string = var_94_object;
				func_2566(var_94_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2582(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_66_object;
			var_17_bool = var_66_object;
			func_2595(var_66_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		func_2601(var_23_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_333(var_20_int);
			string var_29_string; object var_30_object;
			var_18_bool = var_29_string;
			var_17_string = var_30_object;
			func_2604();
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
		func_2581();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_333(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2486();
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
		func_2572(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_26_object;
			var_17_bool = var_26_object;
			func_2575(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2541(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_60_object;
			var_17_bool = var_60_object;
			func_2551(var_60_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		bool var_21_bool;
		func_2835(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_57_int; object var_58_object;
			var_17_string = var_58_object;
			func_2559(var_57_int, var_58_object);
			var_57_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_662();
				object var_93_object;
				var_17_string = var_93_object;
				func_2566(var_93_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2582(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_65_object;
			var_17_bool = var_65_object;
			func_2595(var_65_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		func_2601(var_23_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_662();
			string var_28_string; object var_29_object;
			var_18_bool = var_28_string;
			var_17_string = var_29_object;
			func_2604();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_662();
		func_2581();
	}

}


task task_4
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2572(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_28_object;
			var_17_bool = var_28_object;
			func_2575(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2541(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_62_object;
			var_17_bool = var_62_object;
			func_2551(var_62_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_17_string = var_22_object;
		object var_23_object;
		var_18_bool = var_23_object;
		bool var_21_bool;
		func_2835(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_57_int; object var_58_object;
			var_17_string = var_58_object;
			func_2559(var_57_int, var_58_object);
			var_57_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_831();
				object var_95_object;
				var_17_string = var_95_object;
				func_2566(var_95_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2582(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_67_object;
			var_17_bool = var_67_object;
			func_2595(var_67_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		func_2601(var_23_object);
		int var_20_int;
		int var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_831();
			string var_30_string; object var_31_object;
			var_18_bool = var_30_string;
			var_17_string = var_31_object;
			func_2604();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_831();
		object var_20_object;
		var_17_bool = var_20_object;
		func_2486();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 111)
			return 4;
		bool var_24_bool;
		func_2137(var_24_bool, var_0_bool);
		if(!var_24_bool) { //@nz
			func_831();
			return 4;
		}
		cvector var_20_cvector;
		@GetDirection(var_20_cvector);
		cvector var_61_cvector;
		func_2005(var_61_cvector, var_0_bool);
		cvector var_21_cvector;
		var_61_cvector = var_21_cvector;
		float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
		var_20_cvector = var_68_cvector;
		var_21_cvector = var_69_cvector;
		func_2439(var_67_float, var_68_cvector, var_69_cvector);
		if(var_67_float < 0.49999997)
			func_2228(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_831();
		func_2581();
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
		func_2581();
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
		func_2486();
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
			func_2385();
			if(var_18_int == 14637) {
				object var_23_object = var_1_bool;
				func_2606(var_0_bool);
			}
			if(var_17_int == 14636) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(13402); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(13403, -1, 14637); //@t
				var_0_bool->AddReply(13404, -1, 14638); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=553";
			EMIT "Call 0x6b5";
			EMIT "Pop(1)";
			EMIT "Push((int) 14671)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
			EMIT "Pop(0)";
			EMIT "Push((int) 14672)";
			EMIT "Push((int) 15911)";
			EMIT "Push((int) 15910)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
			EMIT "Pop(3)";
			EMIT "Push((int) 14681)";
			EMIT "Push((int) 15921)";
			EMIT "Push((int) 15920)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=553";
			EMIT "Call 0x6b5";
			EMIT "Pop(1)";
			EMIT "Push((int) 14684)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
			EMIT "Pop(0)";
			EMIT "Push((int) 14685)";
			EMIT "Push((int) 15926)";
			EMIT "Push((int) 15925)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
			EMIT "Pop(3)";
			EMIT "Push((int) 14696)";
			EMIT "Push((int) 15937)";
			EMIT "Push((int) 15936)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_17_int == 15937) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14697); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14698, -1, 15938); //@t
				return 0;
			}
			if(var_17_int == 15926) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14686); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14687, 15928, 15927); //@t
				var_0_bool->AddReply(14695, -1, 15935); //@t
				return 0;
			}
			if(var_17_int == 15928) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14688); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14689, 15930, 15929); //@t
				var_0_bool->AddReply(14694, -1, 15934); //@t
				return 0;
			}
			if(var_17_int == 15930) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14690); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14691, -1, 15931); //@t
				var_0_bool->AddReply(14692, -1, 15932); //@t
				var_0_bool->AddReply(14693, -1, 15933); //@t
				return 0;
			}
			if(var_17_int == 15921) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14682); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14683, 15913, 15922); //@t
				return 0;
			}
			if(var_17_int == 15911) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14673); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14674, 15913, 15912); //@t
				var_0_bool->AddReply(14678, 15917, 15916); //@t
				return 0;
			}
			if(var_17_int == 15917) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14679); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14680, 15913, 15918); //@t
				return 0;
			}
			if(var_17_int == 15913) {
				func_1717(var_18_int, "Neutral");
				var_0_bool->SetMessage(14675); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14676, -1, 15914); //@t
				var_0_bool->AddReply(14677, -1, 15915); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_124_bool;
			func_2785(var_124_bool);
			if(var_124_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6c6";
	
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
	func_2465(var_18_object);
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
	func_2161(var_22_int, var_23_float);
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
void func_2566(object var_95_object)
{
	object var_96_object;
	var_95_object = var_96_object;
	func_2551(var_96_object);
}


// @pe
void func_1545(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_2137(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


// @pe
void func_2572(int var_20_int)
{
	var_20_int = 2;
}


// @pe
void func_2575(object var_28_object)
{
	object var_29_object;
	func_2795(var_29_object, var_29_object);
}


void func_1552(string var_168_string)
{
	var_168_string = "walk";
}


void func_1554(string var_169_string)
{
	var_169_string = "run";
}


void func_1556(bool var_0_bool, int var_35_int, object var_36_object)
{
	var_0_bool = var_36_object;
	bool var_46_bool; object var_47_object;
	var_36_object = var_47_object;
	func_2244(var_46_bool, var_47_object);
	if(!var_46_bool) { //@nz
		var_35_int = -2;
		return 8;
	}
	object var_42_object;
	@CreateDialog(var_42_object);
	int var_87_int;
	func_2781(var_87_int);
	var_42_object->SetNPCName(var_87_int);
	string var_88_string;
	func_2783(var_88_string);
	var_42_object->SetPhoto(var_88_string);
	int var_89_int;
	func_2611(var_89_int);
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
		var_135_bool = !var_45_bool; //@nz
		if(var_135_bool == 0) goto Label_1608;
		@sync();
		var_42_object->IsDialogEnd(var_45_bool);
	}
	
Label_1608:
	object var_136_object;
	var_36_object = var_136_object;
	func_2300();
	@StopDialog(var_42_object);
	var_42_object->GetReturnValue(-1);
	int var_44_int = var_35_int;
}
EMIT "Stack[-4] = 0";


void func_2581(void)
{
}


void func_2582(int var_20_int, object var_21_object)
{
	bool var_23_bool;
	@CanSee(var_23_bool, var_21_object);
	if(var_23_bool != 0) {
		int var_25_int; object var_26_object;
		var_21_object = var_26_object;
		func_2541(var_25_int, var_26_object);
		var_25_int = var_20_int;
	}
	var_20_int = 0;
}


// @pe
void func_22(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_55(var_20_object);
	object var_70_object;
	var_19_object = var_70_object;
	func_2884();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2595(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	func_2551(var_68_object);
}


// @pe
void func_2601(int var_21_int)
{
	var_21_int = 0;
}


// @pe
void func_2604(void)
{
}


// @pe
void func_2606(object var_24_object)
{
	var_24_object->SetReturnValue(1000);
}


void func_2096(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_2611(int var_89_int)
{
	int var_91_int;
	@GetVariable("player", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0xa42";
	}
	if(var_91_int == 1) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
}


void func_2101(bool var_26_bool, object var_27_object)
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
		func_2096(var_37_bool, var_38_object);
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


void func_2628(int var_80_int, int var_81_int)
{
	int var_96_int;
	if(var_80_int > var_81_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_95_int = 0;
	if(var_80_int != var_81_int) {
		@irand(var_96_int, (var_81_int - var_80_int));
	} else if(var_80_int == 0) {
		return 8;
	}
	var_95_int += var_80_int;
	if(var_95_int == 0)
		return 8;
	int var_97_int;
	@GetInvItemByName(var_97_int, "Money");
	bool var_98_bool;
	@AddItem(var_98_bool, var_97_int, 0, var_95_int);
	
}


void func_593(void)
{
	int var_95_int; int var_96_int; bool var_97_bool; float var_98_float; bool var_99_bool;
	@WaitForAnimEnd();
	bool var_100_bool;
	func_2239(var_100_bool);
	if(!var_100_bool) //@nz
		return 14;
	int var_102_int;
	func_2507(var_102_int);
	int var_93_int;
	var_102_int = var_93_int;
	int var_94_int = 0;
	
	for(;;) {
		bool var_115_bool = false;
		if(var_94_int < 5) {
			bool var_118_bool;
			func_2239(var_118_bool);
			if(var_118_bool != 0)
				var_115_bool = true;
		}
		if(var_115_bool != 0) {
			@irand(var_95_int, 3);
			if(var_95_int == 0) {
				if(var_93_int == 0) goto Label_640;
				@irand(var_96_int, var_93_int);
				string var_124_string; int var_125_int;
				var_96_int = var_125_int;
				func_2500(var_124_string, var_125_int);
				@PlayAnimation("all", var_124_string);
				@WaitForAnimEnd(var_97_bool);
				if(!var_97_bool) { //@nz
				} else {
			} else {
			if(var_95_int == 1) {
				@rand(var_98_float, 4);
				@Sleep((var_98_float + 1), var_99_bool);
				if(!var_99_bool) { //@nz
					goto Label_661;
				}
			} else if(var_94_int != 0) {
				goto Label_661;
			}
			}
				var_94_int += 1;
			}
		}
	Label_661:
		return 14;

	}
	
}


// @pe
void func_1619(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_98_object, object var_99_object)
{
	var_0_bool = var_99_object;
	var_1_bool = var_98_object;
	var_3_bool = false;
	if(1 != 0) {
		func_1717(var_99_object, "Neutral");
		var_0_bool->SetMessage(13402); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(13403, -1, 14637); //@t
		var_0_bool->AddReply(13404, -1, 14638); //@t
		goto Label_1687;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=553";
	EMIT "Call 0x6b5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14671)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
	EMIT "Pop(0)";
	EMIT "Push((int) 14672)";
	EMIT "Push((int) 15911)";
	EMIT "Push((int) 15910)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "Push((int) 14681)";
	EMIT "Push((int) 15921)";
	EMIT "Push((int) 15920)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "GOTO 0x697";
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=553";
	EMIT "Call 0x6b5";
	EMIT "Pop(1)";
	EMIT "Push((int) 14684)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
	EMIT "Pop(0)";
	EMIT "Push((int) 14685)";
	EMIT "Push((int) 15926)";
	EMIT "Push((int) 15925)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "Push((int) 14696)";
	EMIT "Push((int) 15937)";
	EMIT "Push((int) 15936)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "GOTO 0x697";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x657";
	}
Label_1687:
	bool var_127_bool;
	func_2785(var_127_bool);
	if(var_127_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_2356(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_1716;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1716:
		return 0;

	}
	
}


void func_1112(bool var_0_bool, float var_282_float, int var_283_int)
{
	object var_287_object; float var_288_float; float var_289_float;
	@GetVictim((var_282_float * 0.9), var_287_object);
	@ReportAttack(var_0_bool);
	if(var_287_object == var_0_bool) {
		float var_293_float; object var_294_object; int var_295_int;
		var_287_object = var_294_object;
		var_283_int = var_295_int;
		func_901(var_295_int);
		var_293_float = var_288_float;
		float var_296_float; object var_297_object; float var_298_float; int var_299_int;
		var_287_object = var_297_object;
		int var_300_int; object var_301_object; int var_302_int;
		var_287_object = var_301_object;
		var_283_int = var_302_int;
		func_904(var_302_int);
		var_300_int = var_299_int;
		func_2032(var_296_float, var_297_object, var_298_float, var_299_int);
		var_296_float = var_289_float;
		int var_349_int;
		func_1390(var_349_int);
		@ReportHit(var_0_bool, var_349_int, var_289_float, var_298_float);
		object var_350_object; float var_351_float;
		var_287_object = var_350_object;
		var_289_float = var_351_float;
		func_1392();
	}
}
EMIT "Stack[-3] = 0";


void func_2137(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_2101(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_2020(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_2658(void)
{
	bool var_77_bool;
	@ClearSubContainer(0);
	int var_83_int;
	func_2456(var_83_int);
	func_2628(0, (10 + (var_83_int * 10)));
	int var_78_int;
	@irand(var_78_int, 4);
	if(var_78_int == 0) {
		int var_112_int;
		func_2776(var_112_int, "hook");
		@AddItem(var_77_bool, var_112_int, 0, 1);
	}
	@irand(var_78_int, 10);
	if(var_78_int == 0) {
		int var_121_int;
		func_2776(var_121_int, "watch");
		@AddItem(var_77_bool, var_121_int, 0, 1);
	}
}


void func_2161(object var_21_object, int var_22_int)
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


void func_1151(bool var_0_bool, bool var_1_bool, bool var_253_bool, float var_254_float)
{
	int var_257_int;
	@irand(var_257_int, var_1_bool);
	var_257_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_257_int));
	@WaitForAnimEnd();
	bool var_258_bool;
	func_1358(var_257_int, var_258_bool);
	bool var_279_bool;
	func_2137(var_279_bool, var_0_bool);
	if(!var_279_bool) { //@nz
		@StopAsync();
		var_253_bool = false;
		return 4;
	}
	float var_282_float; int var_283_int;
	var_254_float = var_282_float;
	var_257_int = var_283_int;
	func_1112(var_258_bool, var_282_float, var_283_int);
	@HasAnimation(var_258_bool, "all", ("attack_middle" + var_257_int));
	if(var_258_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_257_int));
		@WaitForAnimEnd();
		bool var_359_bool;
		func_2137(var_359_bool, var_0_bool);
		if(!var_359_bool) { //@nz
			@StopAsync();
			var_253_bool = false;
			return 4;
		}
		float var_362_float; int var_363_int;
		var_254_float = var_362_float;
		var_257_int = var_363_int;
		func_1112(var_258_bool, var_362_float, var_363_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_257_int));
	bool var_368_bool;
	func_1231(var_368_bool, 0.75);
	@StopAsync();
	var_253_bool = true;
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


void func_2702(bool var_19_bool)
{
	int var_22_int; bool var_23_bool;
	@ClearSubContainer(0);
	if(var_19_bool != 0) {
		@irand(var_22_int, 3);
		if(var_22_int != 0) {
			int var_29_int;
			func_2776(var_29_int, "alpha_pills");
			@AddItem(var_23_bool, var_29_int, 0, var_22_int);
		}
		@irand(var_22_int, 3);
		if(var_22_int != 0) {
			int var_37_int;
			func_2776(var_37_int, "meradorm");
			@AddItem(var_23_bool, var_37_int, 0, var_22_int);
		}
	} else {
		@irand(var_22_int, 3);
		if(var_22_int == 0) {
			int var_43_int;
			func_2776(var_43_int, "lockpick");
			@AddItem(var_23_bool, var_43_int, 0, 1);
		}
		@irand(var_22_int, 4);
		if(var_22_int != 0) {
			int var_50_int;
			func_2776(var_50_int, "rifle_ammo");
			@AddItem(var_23_bool, var_50_int, 0, var_22_int);
		}
		@irand(var_22_int, 4);
		if(!(var_22_int != 0)) goto Label_2775;
		int var_56_int;
		func_2776(var_56_int, "revolver_ammo");
		@AddItem(var_23_bool, var_56_int, 0, var_22_int);
	}
Label_2775:
	
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
	func_2005(var_84_cvector, var_0_bool);
	cvector var_75_cvector;
	var_84_cvector = var_75_cvector;
	float var_90_float; cvector var_91_cvector; cvector var_92_cvector;
	var_74_cvector = var_91_cvector;
	var_75_cvector = var_92_cvector;
	func_2439(var_90_float, var_91_cvector, var_92_cvector);
	if(var_90_float < 0) {
		func_2228(var_0_bool);
		var_76_bool = true;
	} else {
		@Sleep(1.5, var_76_bool);
	}
	if(var_76_bool != 0) {
		func_2228(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2228(object var_93_object)
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


// @pe
void func_1717(bool var_2_bool, string var_28_string)
{
	bool var_29_bool;
	func_2785(var_29_bool);
	if(!var_29_bool) //@nz
		return 0;
	if(var_28_string == var_2_bool)
		return 0;
	string var_32_string;
	func_2356(var_32_string);
	var_2_bool = var_32_string;
}


void func_185(void)
{
	bool var_59_bool;
	func_2239(var_59_bool);
	if(!var_59_bool) //@nz
		func_2581();
}


void func_2239(bool var_59_bool)
{
	bool var_61_bool;
	@IsLoaded(var_61_bool);
	var_61_bool = var_59_bool;
}


void func_2244(bool var_46_bool, object var_47_object)
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
	func_2392(var_71_cvector, (var_60_cvector ^ [0.0, 1.0, 0.0]));
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


void func_718(bool var_0_bool)
{
	func_2374(var_0_bool);
}


void func_1231(bool var_368_bool, float var_369_float)
{
	float var_372_float; bool var_373_bool;
	@rand(var_372_float);
	if(var_372_float < var_369_float) {

		for(;;) {
			@IsAnimationPlaying(var_373_bool);
			if(!var_373_bool) { //@nz
			} else {
				bool var_376_bool;
				func_1295(var_373_bool, var_376_bool);
				if(var_376_bool != 0) {
					var_368_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_368_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_2776(int var_29_int, string var_30_string)
{
	int var_32_int;
	@GetInvItemByName(var_32_int, var_30_string);
	var_32_int = var_29_int;
}


void func_2781(int var_87_int)
{
	var_87_int = 3343;
}


void func_2783(string var_88_string)
{
	var_88_string = "ui/NPC_None.png";
}


void func_2785(bool var_20_bool)
{
	var_20_bool = false;
}


void func_2787(void)
{
	var_18_bool = GlobalVars[1];
	GlobalVars[1] = false;
	func_2702(true);
}


void func_1255(bool var_0_bool, bool var_210_bool, float var_211_float)
{
	bool var_217_bool; cvector var_218_cvector; cvector var_219_cvector; cvector var_220_cvector; float var_221_float;
	
	for(;;) {
		@IsAnimationPlaying(var_217_bool);
		if(!var_217_bool) //@nz
			break;
		bool var_223_bool;
		func_1295(var_221_float, var_223_bool);
		if(var_223_bool != 0) {
			var_210_bool = true;
			return 10;
		}
		bool var_248_bool;
		func_2137(var_248_bool, var_0_bool);
		if(!var_248_bool) { //@nz
			var_210_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_218_cvector); //@t
		@GetPFPosition(var_219_cvector);
		var_220_cvector = var_218_cvector - var_219_cvector;
		var_221_float = var_220_cvector | var_220_cvector;
		if(var_221_float < (var_211_float * var_211_float)) {
			bool var_253_bool; float var_254_float;
			var_211_float = var_254_float;
			func_1151(var_220_cvector, var_221_float, var_253_bool, var_254_float);
			var_210_bool = true;
			return 10;
		}
		@sync();
	}
	var_210_bool = false;
}


void func_2795(object var_29_object, object var_37_object)
{
	bool var_31_bool;
	var_32_bool = GlobalVars[1];
	if(var_32_bool != 0) {
		@IsOverrideActive(var_31_bool);
		if(!var_31_bool) //@nz
			@WorkWithCorpse(var_29_object);
		return 2;
	EMIT "GOTO 0xb10";
	}
	int var_35_int; object var_36_object;
	var_29_object = var_36_object;
	TaskCall(7);
	func_1556(var_37_object, var_35_int, var_36_object);
	TaskReturn();
	if(1000 == var_37_object) {
		bool var_138_bool; object var_139_object;
		var_29_object = var_139_object;
		func_2304(var_138_bool, var_139_object);
		if(!var_138_bool) //@nz
			return 2;
		object var_168_object;
		var_29_object = var_168_object;
		TaskCall(0);
		func_0(var_168_object);
		TaskReturn();
		object var_173_object;
		var_29_object = var_173_object;
		func_2352();
	}
}


// @pe
void func_2300(void)
{
	@CameraSwitchToNormal();
}


void func_2304(bool var_138_bool, object var_139_object)
{
	cvector var_149_cvector;
	var_139_object->GetPosition(var_149_cvector);
	float var_148_float;
	var_139_object->GetEyesHeight(var_148_float);
	var_156_float = GetByIndex(var_149_cvector, 1);
	SetByIndex(var_149_cvector, 1) = (var_156_float + var_148_float);
	cvector var_150_cvector;
	@GetPosition(var_150_cvector);
	@GetEyesHeight(var_148_float);
	var_157_float = GetByIndex(var_150_cvector, 1);
	SetByIndex(var_150_cvector, 1) = (var_157_float + var_148_float);
	cvector var_151_cvector = var_149_cvector - var_150_cvector;
	var_158_float = GetByIndex(var_151_cvector, 1);
	SetByIndex(var_151_cvector, 1) = (float)0;
	var_160_float = sqrt(var_151_cvector | var_151_cvector);
	var_151_cvector /= var_160_float;
	cvector var_152_cvector = -var_151_cvector;
	cvector var_153_cvector = (var_151_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_155_bool;
	@IsOverrideActive(var_155_bool);
	if(var_155_bool != 0)
		var_138_bool = false;
	@StopWorld();
	@CameraTransit((var_150_cvector + var_153_cvector), var_152_cvector);
	var_165_float = GetByIndex(var_153_cvector, 0);
	var_166_float = GetByIndex(var_153_cvector, 2);
	@Rotate(var_165_float, var_166_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_138_bool = true;
}


void func_1295(bool var_0_bool, bool var_223_bool)
{
	cvector var_229_cvector; cvector var_230_cvector;
	bool var_234_bool;
	func_2137(var_234_bool, var_0_bool);
	if(!var_234_bool) { //@nz
		var_223_bool = false;
		return 10;
	}
	bool var_237_bool;
	float var_233_float;
	func_1347(var_233_float, var_237_bool);
	if(var_237_bool != 0) {
		var_0_bool->GetPFPosition(var_229_cvector); //@t
		@GetPFPosition(var_230_cvector);
		var_0_bool->GetAttackDistance(var_233_float); //@t
		var_233_float += 50;
		if(((var_229_cvector - var_230_cvector) | (var_229_cvector - var_230_cvector)) <= (var_233_float * var_233_float)) {
			func_1328(var_233_float);
			var_223_bool = true;
			return 10;
		}
	}
	var_223_bool = false;
}


void func_2833(bool var_62_bool)
{
	var_62_bool = false;
}


void func_2835(bool var_21_bool, object var_22_object, object var_23_object)
{
	object var_29_object;
	var_23_object = var_29_object;
	bool var_28_bool;
	func_2020(var_28_bool, var_29_object, "class");
	if(!var_28_bool) { //@nz
		var_21_bool = false;
		return 4;
	}
	bool var_27_bool;
	@CanSee(var_27_bool, var_22_object);
	bool var_38_bool = true;
	if(var_27_bool != 1) {
		float var_40_float; object var_41_object;
		func_2012(var_40_float, var_41_object);
		var_49_bool = var_40_float <= 250000.0;
		if(var_49_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 0) {
		@ReportReputationChange(var_41_object, var_23_object, -0.3);
		var_21_bool = true;
		return 4;
	}
	@CanSee(var_27_bool, var_23_object);
	bool var_51_bool = true;
	if(var_27_bool != 1) {
		float var_53_float; object var_54_object;
		var_23_object = var_54_object;
		func_2012(var_53_float, var_54_object);
		var_56_bool = var_53_float <= 250000.0;
		if(var_56_bool != 1)
			var_51_bool = false;
	}
	if(var_51_bool != 0) {
		var_21_bool = true;
		return 4;
	}
	var_21_bool = false;
}


void func_1328(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_243_cvector;
	var_0_bool->GetPFPosition(var_243_cvector); //@t
	cvector var_244_cvector;
	@GetPFPosition(var_244_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


// @pe
void func_2352(void)
{
	@CameraSwitchToNormal();
}


void func_2356(string var_32_string)
{
	@Trace("playing " + var_32_string);
	float var_35_float;
	float var_36_float;
	@lshGetAnimTimes(var_32_string, var_35_float, var_36_float);
	@lshPlayAnimation(var_35_float, var_36_float);
	@Trace("start: " + var_35_float);
	@Trace("end: " + var_36_float);
}


void func_831(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1347(bool var_0_bool, bool var_202_bool)
{
	bool var_204_bool;
	var_207_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_207_bool != 0) {
		var_0_bool->IsAttacking(var_204_bool); //@t
		var_204_bool = var_202_bool;
	}
	var_202_bool = false;
}


// @pe
void func_2884(void)
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = true;
	@SetRTEnvelope(50, 40);
	bool var_74_bool = true;
	func_2658();
}


void func_2374(object var_77_object)
{
	float var_80_float;
	var_77_object->GetEyesHeight(var_80_float);
	cvector var_81_cvector = [0.0, 0.0, 0.0];
	var_82_float = GetByIndex(var_81_cvector, 1);
	var_80_float = var_82_float;
	SetByIndex(var_81_cvector, 1) = var_82_float;
	@LookAsync(var_77_object, "head", var_81_cvector);
}


void func_333(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_462(var_16_string, var_17_bool);
}


void func_1358(bool var_2_bool, object var_4_object)
{
	int var_267_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_266_float;
	@rand(var_266_float);
	float var_273_float;
	func_1396(var_273_float);
	if(var_266_float < var_273_float) {
		@irand(var_267_int, var_2_bool);
		@Speak("attack" + (var_267_int + 1));
		int var_278_int;
		func_1394(var_278_int);
		var_4_object = var_278_int;
	}
}


void func_2385(void)
{
	bool var_20_bool;
	func_2785(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_341(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_469(var_21_bool, var_22_int);
}


void func_2392(cvector var_71_cvector, cvector var_72_cvector)
{
	float var_75_float = sqrt(var_72_cvector | var_72_cvector);
	if(var_75_float < 0.000001)
		var_71_cvector = [0.0, 0.0, 0.0];
	var_71_cvector = var_72_cvector / var_75_float;
}


// @pe
void func_2402(float var_332_float, float var_333_float, float var_334_float)
{
	if(var_333_float < var_334_float)
		var_333_float = var_332_float;
	else
		var_334_float = var_332_float;
	
}


void func_358(bool var_2_bool, object var_18_object)
{
	bool var_23_bool; object var_24_object;
	func_2137(var_23_bool, var_24_object);
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
	func_2524(var_61_object);
	int var_22_int;
	var_60_int = var_22_int;
	if(var_22_int > 0) {
		if(var_22_int > 1)
			func_341(var_22_int);
		object var_68_object;
		var_18_object = var_68_object;
		func_2533(var_68_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_2409(float var_342_float, float var_343_float, float var_344_float, float var_345_float)
{
	if(var_343_float < var_344_float) {
		var_344_float = var_342_float;
		return 0;
	}
	if(var_343_float > var_345_float) {
		var_345_float = var_342_float;
		return 0;
	}
	var_343_float = var_342_float;
}


void func_1390(int var_349_int)
{
	var_349_int = 0;
}


// @pe
void func_1392(void)
{
}


void func_1394(int var_278_int)
{
	var_278_int = 1;
}


void func_1396(float var_273_float)
{
	var_273_float = 0.5;
}


// @pe
void func_2420(float var_70_float, cvector var_71_cvector, cvector var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_70_float = (var_73_float * var_74_float) + (var_76_float * var_77_float);
}


void func_1405(bool var_0_bool, bool var_1_bool, bool var_126_bool, object var_127_object, float var_128_float, float var_129_float, bool var_130_bool, bool var_131_bool)
{
	bool var_142_bool; object var_144_object; cvector var_145_cvector; cvector var_146_cvector; float var_148_float; object var_149_object;
	var_0_bool = false;
	var_1_bool = var_127_object;
	bool var_143_bool;
	var_131_bool = var_143_bool;
	
	for(;;) {
		bool var_150_bool; object var_151_object;
		var_127_object = var_151_object;
		func_1545(var_150_bool, var_151_object);
		if(!var_150_bool) { //@nz
			var_126_bool = false;
			return 16;
		}
		var_127_object->GetPosition(var_145_cvector);
		@GetPosition(var_146_cvector);
		var_148_float = (var_145_cvector - var_146_cvector) | (var_145_cvector - var_146_cvector);
		bool var_155_bool = false;
		if(var_129_float > 0) {
			if(var_148_float > (var_129_float * var_129_float))
				var_155_bool = true;
		}
		if(var_155_bool != 0) {
			@Stop();
			var_126_bool = false;
			return 16;
		}
		if(var_148_float > (var_128_float * var_128_float)) {
			var_127_object->GetPFPosition(var_145_cvector);
			@FindPathTo(var_149_object, var_145_cvector);
			if(var_149_object != null) {
				var_149_object = var_144_object;
				var_149_object = null;
			}
			if(var_144_object != null) {
				if(var_143_bool == 0) goto Label_1458;
				var_143_bool = false;
				@RotatePath(var_144_object, var_142_bool);
				if(!var_142_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_168_string;
						func_1552(var_168_string);
						string var_169_string;
						func_1554(var_169_string);
						@FollowPath(var_144_object, var_130_bool, var_142_bool, var_168_string, var_169_string);
						if(!var_142_bool) { //@nz
							if(var_0_bool == 0) goto Label_1477;
							var_144_object = null;
						}
					EMIT "GOTO 0x5c6";

					Label_1477:
						} else {
					var_144_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_142_bool);
					if(!var_142_bool) { //@nz
						if(var_0_bool != 0) {
							var_144_object = null;
							goto Label_1505;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1505;
		}
			var_149_object = null;
			goto Label_1503;

		Label_1503:
			var_144_object = null;

		}
	Label_1505:
		for(;;) {
			var_126_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_2429(float var_79_float, cvector var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0);
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_84_float = GetByIndex(var_80_cvector, 2);
	var_85_float = GetByIndex(var_80_cvector, 2);
	var_79_float = sqrt((var_81_float * var_82_float) + (var_84_float * var_85_float));
}


// @pe
void func_893(object var_69_object)
{
	object var_75_object;
	func_907(var_70_object, var_71_int, var_72_int, var_73_bool, var_74_int, var_75_object, var_75_object, true, 180.0);
}


// @pe
void func_901(float var_293_float)
{
	var_293_float = 0.03;
}


// @pe
void func_2439(float var_67_float, cvector var_68_cvector, cvector var_69_cvector)
{
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	cvector var_72_cvector;
	var_69_cvector = var_72_cvector;
	float var_70_float;
	func_2420(var_70_float, var_71_cvector, var_72_cvector);
	float var_79_float; cvector var_80_cvector;
	var_68_cvector = var_80_cvector;
	func_2429(var_79_float, var_80_cvector);
	float var_88_float; cvector var_89_cvector;
	var_69_cvector = var_89_cvector;
	func_2429(var_88_float, var_89_cvector);
	var_67_float = var_70_float / (var_79_float * var_88_float);
}


// @pe
void func_904(int var_300_int)
{
	var_300_int = 0;
}


void func_907(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_75_object, bool var_76_bool, float var_77_float, bool var_132_bool)
{
	bool var_88_bool; bool var_89_bool; float var_90_float; cvector var_91_cvector; cvector var_92_cvector; bool var_93_bool; bool var_94_bool; float var_96_float; float var_97_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_88_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_88_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_89_bool, ("attack" + (var_2_bool + 1)));
			if(!var_89_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_111_bool = IsFuncExist(var_75_object, "@GetAttackDistance", 1);
			if(var_111_bool != 0) {
				var_75_object->GetAttackDistance(var_90_float);
				var_90_float += 50;
			} else {
								var_77_float = var_90_float;

			}
			if(var_90_float >= 150)
				var_90_float = 150;
			var_3_bool = false;
			var_0_bool = var_75_object;
			@IsPlayerActor(var_0_bool, var_93_bool);
			if(var_76_bool != 0)
				var_94_bool = false;
			else
				var_94_bool = true;

			for(;;) {
				bool var_116_bool = false;
				bool var_117_bool;
				func_2137(var_117_bool, var_0_bool);
				if(var_117_bool != 0) {
					if(!var_3_bool) //@nz
						var_116_bool = true;
				}
				if(var_116_bool != 0) {
					var_0_bool->GetPFPosition(var_91_cvector); //@t
					@GetPFPosition(var_92_cvector);
					var_96_float = (var_91_cvector - var_92_cvector) | (var_91_cvector - var_92_cvector);
					if(var_96_float >= ((400.0 + var_90_float) * (400.0 + var_90_float))) {
						bool var_126_bool; float var_128_float;
						var_90_float = var_128_float;
						TaskCall(6);
						func_1405(var_132_bool, var_133_object, var_126_bool, var_0_bool, var_128_float, 3000.0, true, false);
						TaskReturn();
						if(!var_132_bool) { //@nz
						} else {
							var_94_bool = false;
					} else {
					if(var_96_float >= (var_77_float * var_77_float)) {
						if(!var_94_bool) { //@nz
							func_2228(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_94_bool = true;
						}
						@rand(var_97_float);
						bool var_199_bool;
						var_201_bool = var_97_float < 0.6;
						if(var_201_bool != 1) {
							bool var_202_bool;
							func_1347(true, var_202_bool);
							if(var_202_bool != 1)
								var_199_bool = false;
						}
						if(var_199_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_210_bool; float var_211_float;
							func_1255(var_97_float, var_210_bool, var_211_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_380_bool;
							func_1347(var_97_float, var_380_bool);
							var_381_bool = !var_380_bool; //@nz
							if(var_381_bool == 0) goto Label_1085;
							bool var_382_bool;
							func_2137(var_382_bool, var_0_bool);
							if(!var_382_bool) { //@nz
								goto Label_1095;
							}
							var_0_bool->GetPFPosition(var_91_cvector); //@t
							@GetPFPosition(var_92_cvector);
							var_96_float = (var_91_cvector - var_92_cvector) | (var_91_cvector - var_92_cvector);
							if(!(var_96_float < (var_211_float * var_211_float))) goto Label_1085;
							bool var_387_bool; float var_388_float;
							var_77_float = var_388_float;
							func_1151(var_96_float, var_97_float, var_387_bool, var_388_float);
							var_389_bool = !var_387_bool; //@nz
							if(var_389_bool == 0) goto Label_1085;
							goto Label_1095;
					}
						bool var_390_bool; float var_391_float;
						var_77_float = var_391_float;
						func_1151(var_96_float, var_97_float, var_390_bool, var_391_float);
						if(!var_390_bool) { //@nz
							goto Label_1095;
						}
						var_94_bool = true;

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
				if(var_93_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_398(bool var_0_bool, bool var_1_bool)
{
	float var_70_float; cvector var_71_cvector; cvector var_72_cvector; float var_73_float; bool var_74_bool; object var_75_object; bool var_76_bool;
	@rand(var_70_float, 0.5);
	@Sleep(var_70_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_410:
				@GetPosition(var_72_cvector);
				@GetCameraFarDistance(var_73_float);
				@GetRandomPFPointInCircle(var_71_cvector, var_72_cvector, (var_73_float * 2.5), var_74_bool);
				if(var_74_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_410;
			}
				var_1_bool = false;
		}
		}
		goto Label_427;

	Label_427:
		@FindShiftedPathTo(var_75_object, var_71_cvector);
		if(var_75_object != null) {
			@RotatePath(var_75_object, var_76_bool);
			if(var_76_bool != 0) {
				bool var_84_bool;
				func_476(var_84_bool);
				@FollowPath(var_75_object, var_84_bool, var_76_bool);
				var_75_object = null;
				if(var_76_bool != 0) {
					TaskCall(3);
					func_593();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_75_object = null;
	}
	
}


void func_2456(int var_83_int)
{
	float var_85_float;
	@GetGameTime(var_85_float);
	var_83_int = 1 + (var_85_float / 24);
}


// @pe
void func_2465(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	TaskCall(1);
	func_22(var_19_object);
	TaskReturn();
}


void func_2500(string var_108_string, int var_109_int)
{
	string var_111_string = "idle";
	if(var_109_int != 0)
		var_111_string += var_109_int;
	var_111_string = var_108_string;
}


void func_2507(int var_102_int)
{
	int var_105_int; bool var_106_bool;
	var_105_int = 0;
	
	for(;;) {
		string var_108_string; int var_109_int;
		var_105_int = var_109_int;
		func_2500(var_108_string, var_109_int);
		@HasAnimation(var_106_bool, "all", var_108_string);
		if(!var_106_bool) //@nz
			break;
		var_105_int += 1;
	}
	var_105_int = var_102_int;
}


// @pe
void func_1997(string var_324_string, int var_325_int)
{
	if(var_325_int == 1)
		var_324_string = "fire";
	var_324_string = "phys";
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


void func_2005(cvector var_61_cvector, object var_62_object)
{
	cvector var_65_cvector;
	@GetPosition(var_65_cvector);
	cvector var_66_cvector;
	var_62_object->GetPosition(var_66_cvector);
	var_61_cvector = var_66_cvector - var_65_cvector;
}


// @pe
void func_2524(int var_60_int)
{
	bool var_62_bool;
	func_2833(var_62_bool);
	if(var_62_bool != 0)
		var_60_int = 2;
	else
		var_60_int = 0;
	
}


void func_476(bool var_84_bool)
{
	var_84_bool = false;
}


void func_2012(float var_40_float, object var_41_object)
{
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	var_41_object->GetPosition(var_46_cvector);
	var_40_float = (var_46_cvector - var_45_cvector) | (var_46_cvector - var_45_cvector);
}


void func_2020(bool var_44_bool, object var_45_object, string var_46_string)
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


// @pe
void func_2533(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	TaskCall(4);
	func_667(var_70_object, var_69_object);
	TaskReturn();
}


// @pe
void func_2541(int var_25_int, object var_26_object)
{
	object var_28_object;
	var_26_object = var_28_object;
	bool var_27_bool;
	func_2137(var_27_bool, var_28_object);
	if(var_27_bool != 0)
		var_25_int = 2;
	else
		var_25_int = 0;
	
}


void func_2032(float var_296_float, object var_297_object, float var_298_float, int var_299_int)
{
	int var_309_int; int var_311_int;
	object var_316_object;
	var_297_object = var_316_object;
	bool var_315_bool;
	func_2020(var_315_bool, var_316_object, "health");
	if(!var_315_bool) //@nz
		var_296_float = 0.0;
	bool var_319_bool; object var_320_object;
	func_2020(var_319_bool, var_320_object, "armor");
	if(!var_319_bool) //@nz
		var_309_int = 0;
	else
		var_320_object->GetProperty("armor", var_309_int);
	string var_324_string; int var_325_int;
	var_299_int = var_325_int;
	func_1997(var_324_string, var_325_int);
	string var_310_string = "armor_" + var_324_string;
	bool var_328_bool; object var_329_object; string var_330_string;
	var_297_object = var_329_object;
	func_2020(var_328_bool, var_329_object, var_330_string);
	if(!var_328_bool) //@nz
		var_311_int = 0;
	else
		var_297_object->GetProperty(var_330_string, var_311_int);

	float var_332_float;
	func_2402(var_332_float, ((var_309_int + var_311_int) / 100.0), (float)1);
	float var_312_float;
	var_332_float = var_312_float;
	float var_313_float;
	var_297_object->GetProperty("health", var_313_float);
	float var_342_float;
	func_2409(var_342_float, (var_313_float - (var_298_float * (1 - var_312_float))), (float)0, (float)1);
	var_297_object->SetProperty("health", var_342_float);
	float var_314_float = var_296_float;
	
}


// @pe
void func_2551(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	TaskCall(5);
	func_893(var_69_object);
	TaskReturn();
}


void func_1529(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2559(int var_57_int, object var_58_object)
{
	object var_60_object;
	var_58_object = var_60_object;
	int var_59_int;
	func_2541(var_59_int, var_60_object);
	var_59_int = var_57_int;
}


