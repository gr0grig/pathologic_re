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
		func_2786(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			object var_24_object;
			var_17_bool = var_24_object;
			func_2789(var_24_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_2795();
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
		func_3029();
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
		func_2786(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_27_object;
			var_17_bool = var_27_object;
			func_2789(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2704(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_61_object;
			var_17_bool = var_61_object;
			func_2714(var_61_object);
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
		func_3080(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_72_int; object var_73_object;
			var_17_string = var_73_object;
			func_2722(var_72_int, var_73_object);
			var_72_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_333(var_20_int);
				object var_109_object;
				var_17_string = var_109_object;
				func_2729(var_109_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2735(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_333(var_19_int);
			object var_27_object;
			var_17_bool = var_27_object;
			func_2738();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		int var_21_int;
		func_2740(var_21_int, var_22_string, var_23_object);
		int var_20_int;
		var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_333(var_20_int);
			string var_70_string; object var_71_object;
			var_18_bool = var_70_string;
			var_17_string = var_71_object;
			func_2752(var_70_string, var_71_object);
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
		func_2795();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_333(var_17_bool);
		object var_19_object;
		var_17_bool = var_19_object;
		func_2649();
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
		func_2786(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_26_object;
			var_17_bool = var_26_object;
			func_2789(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2704(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_60_object;
			var_17_bool = var_60_object;
			func_2714(var_60_object);
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
		func_3080(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_72_int; object var_73_object;
			var_17_string = var_73_object;
			func_2722(var_72_int, var_73_object);
			var_72_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_662();
				object var_108_object;
				var_17_string = var_108_object;
				func_2729(var_108_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2735(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_662();
			object var_26_object;
			var_17_bool = var_26_object;
			func_2738();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		int var_21_int;
		func_2740(var_21_int, var_22_string, var_23_object);
		int var_20_int;
		var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_662();
			string var_69_string; object var_70_object;
			var_18_bool = var_69_string;
			var_17_string = var_70_object;
			func_2752(var_69_string, var_70_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_662();
		func_2795();
	}

}


task task_4
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2786(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_28_object;
			var_17_bool = var_28_object;
			func_2789(var_28_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		int var_20_int;
		func_2704(var_20_int, var_21_object);
		int var_19_int;
		var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_62_object;
			var_17_bool = var_62_object;
			func_2714(var_62_object);
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
		func_3080(var_21_bool, var_22_object, var_23_object);
		if(var_21_bool != 0) {
			int var_72_int; object var_73_object;
			var_17_string = var_73_object;
			func_2722(var_72_int, var_73_object);
			var_72_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_831();
				object var_110_object;
				var_17_string = var_110_object;
				func_2729(var_110_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		func_2735(var_21_object);
		int var_19_int;
		int var_20_int = var_19_int;
		if(var_19_int > 0) {
			if(var_19_int > 1)
				func_831();
			object var_28_object;
			var_17_bool = var_28_object;
			func_2738();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object, object var_14_object, object var_15_object, object var_16_object, string var_17_string, bool var_18_bool)
	{
		string var_22_string;
		var_18_bool = var_22_string;
		object var_23_object;
		var_17_string = var_23_object;
		int var_21_int;
		func_2740(var_21_int, var_22_string, var_23_object);
		int var_20_int;
		var_21_int = var_20_int;
		if(var_20_int > 0) {
			if(var_20_int > 1)
				func_831();
			string var_71_string; object var_72_object;
			var_18_bool = var_71_string;
			var_17_string = var_72_object;
			func_2752(var_71_string, var_72_object);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		func_831();
		object var_20_object;
		var_17_bool = var_20_object;
		func_2649();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, object var_13_object, object var_14_object, object var_15_object, string var_16_string, bool var_17_bool)
	{
		if(var_17_bool != 111)
			return 4;
		bool var_24_bool;
		func_2300(var_24_bool, var_0_bool);
		if(!var_24_bool) { //@nz
			func_831();
			return 4;
		}
		cvector var_20_cvector;
		@GetDirection(var_20_cvector);
		cvector var_61_cvector;
		func_2168(var_61_cvector, var_0_bool);
		cvector var_21_cvector;
		var_61_cvector = var_21_cvector;
		float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
		var_20_cvector = var_68_cvector;
		var_21_cvector = var_69_cvector;
		func_2602(var_67_float, var_68_cvector, var_69_cvector);
		if(var_67_float < 0.49999997)
			func_2391(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_14_object, string var_15_string, bool var_16_bool)
	{
		func_831();
		func_2795();
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
		func_2795();
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
		func_2649();
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
			func_2548();
			if(var_17_int == 15769) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14538); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14539, 15771, 15770); //@t
				var_0_bool->AddReply(14564, 15799, 15798); //@t
				var_0_bool->AddReply(14571, -1, 15805); //@t
				var_0_bool->AddReply(14572, -1, 15806); //@t
				var_0_bool->AddReply(14573, -1, 15807); //@t
				var_0_bool->AddReply(14574, -1, 15808); //@t
				var_0_bool->AddReply(14575, -1, 15809); //@t
				var_0_bool->AddReply(14576, 15811, 15810); //@t
				var_0_bool->AddReply(14578, -1, 15812); //@t
				return 0;
			EMIT "PushEmpty(string)";
			EMIT "Stack[-1] = \"Neutral\" // @poff=553";
			EMIT "Call 0x6c4";
			EMIT "Pop(1)";
			EMIT "Push((int) 14579)";
			EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
			EMIT "Pop(1)";
			EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
			EMIT "Pop(0)";
			EMIT "Push((int) 14580)";
			EMIT "Push((int) 15815)";
			EMIT "Push((int) 15814)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
			EMIT "Pop(3)";
			EMIT "Push((int) 14589)";
			EMIT "Push((int) -1)";
			EMIT "Push((int) 15823)";
			EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
			EMIT "Pop(3)";
			EMIT "Return(); Pop(0)";
			}
			if(var_17_int == 15815) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14581); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14582, 15817, 15816); //@t
				var_0_bool->AddReply(14585, 15820, 15819); //@t
				return 0;
			}
			if(var_17_int == 15820) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14586); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14587, -1, 15821); //@t
				var_0_bool->AddReply(14588, -1, 15822); //@t
				return 0;
			}
			if(var_17_int == 15817) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14583); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14584, -1, 15818); //@t
				return 0;
			}
			if(var_17_int == 15811) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14577); //@t
				var_0_bool->ClearReplies(); //@t
				return 0;
			}
			if(var_17_int == 15799) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14565); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14566, 15801, 15800); //@t
				return 0;
			}
			if(var_17_int == 15801) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14567); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14568, 15803, 15802); //@t
				var_0_bool->AddReply(14570, -1, 15804); //@t
				return 0;
			}
			if(var_17_int == 15803) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14569); //@t
				var_0_bool->ClearReplies(); //@t
				return 0;
			}
			if(var_17_int == 15771) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14540); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14541, 15773, 15772); //@t
				var_0_bool->AddReply(14545, 15778, 15777); //@t
				var_0_bool->AddReply(14557, 15790, 15789); //@t
				var_0_bool->AddReply(14563, -1, 15797); //@t
				return 0;
			}
			if(var_17_int == 15790) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14558); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14559, 15773, 15791); //@t
				var_0_bool->AddReply(14560, 15794, 15793); //@t
				return 0;
			}
			if(var_17_int == 15794) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14561); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14562, 15778, 15795); //@t
				return 0;
			}
			if(var_17_int == 15778) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14546); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14547, 15780, 15779); //@t
				var_0_bool->AddReply(14556, -1, 15788); //@t
				return 0;
			}
			if(var_17_int == 15780) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14548); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14549, 15782, 15781); //@t
				var_0_bool->AddReply(14555, -1, 15787); //@t
				return 0;
			}
			if(var_17_int == 15782) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14550); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14551, 15784, 15783); //@t
				var_0_bool->AddReply(14554, -1, 15786); //@t
				return 0;
			}
			if(var_17_int == 15784) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14552); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14553, -1, 15785); //@t
				return 0;
			}
			if(var_17_int == 15773) {
				func_1732(var_18_int, "Neutral");
				var_0_bool->SetMessage(14542); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(14543, 15778, 15774); //@t
				var_0_bool->AddReply(14544, -1, 15776); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_198_bool;
			func_3027(var_198_bool);
			if(var_198_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x6d5";
	
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
	func_2628(var_18_object);
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
	func_2324(var_22_int, var_23_float);
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


void func_3075(bool var_62_bool)
{
	var_62_bool = false;
}


// @pe
void func_2565(float var_340_float, float var_341_float, float var_342_float)
{
	if(var_341_float < var_342_float)
		var_341_float = var_340_float;
	else
		var_342_float = var_340_float;
	
}


// @pe
void func_3077(bool var_63_bool)
{
	var_63_bool = true;
}


void func_3080(bool var_21_bool, object var_22_object, object var_23_object)
{
	object var_29_object;
	var_23_object = var_29_object;
	bool var_28_bool;
	func_2183(var_28_bool, var_29_object, "class");
	if(!var_28_bool) { //@nz
		var_21_bool = false;
		return 4;
	}
	string var_26_string;
	var_23_object->GetProperty("class", var_26_string);
	bool var_39_bool = false;
	bool var_40_bool = false;
	bool var_41_bool = false;
	bool var_42_bool = false;
	bool var_43_bool = false;
	bool var_44_bool = false;
	if(var_26_string != "littleboy") {
		if(var_26_string != "littlegirl")
			var_44_bool = true;
	}
	if(var_44_bool != 0) {
		if(var_26_string != "boy")
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		if(var_26_string != "girl")
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(var_26_string != "wasted_girl")
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_26_string != "woman")
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		if(var_26_string != "unosha")
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		var_21_bool = false;
		return 4;
	}
	bool var_27_bool;
	@CanSee(var_27_bool, var_22_object);
	bool var_59_bool = true;
	if(var_27_bool != 1) {
		float var_61_float; object var_62_object;
		func_2175(var_61_float, var_62_object);
		var_70_bool = var_61_float <= 250000.0;
		if(var_70_bool != 1)
			var_59_bool = false;
	}
	if(var_59_bool != 0) {
		@ReportReputationChange(var_62_object, var_23_object, -0.3);
		var_21_bool = true;
		return 4;
	}
	var_21_bool = false;
}


// @pe
void func_1545(bool var_20_bool, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_2300(var_22_bool, var_23_object);
	var_22_bool = var_20_bool;
}


// @pe
void func_2572(float var_350_float, float var_351_float, float var_352_float, float var_353_float)
{
	if(var_351_float < var_352_float) {
		var_352_float = var_350_float;
		return 0;
	}
	if(var_351_float > var_353_float) {
		var_353_float = var_350_float;
		return 0;
	}
	var_351_float = var_350_float;
}


void func_1552(string var_176_string)
{
	var_176_string = "walk";
}


void func_1554(string var_177_string)
{
	var_177_string = "run";
}


void func_1556(bool var_0_bool, int var_35_int, object var_36_object)
{
	var_0_bool = var_36_object;
	bool var_46_bool; object var_47_object;
	var_36_object = var_47_object;
	func_2407(var_46_bool, var_47_object);
	if(!var_46_bool) { //@nz
		var_35_int = -2;
		return 8;
	}
	object var_42_object;
	@CreateDialog(var_42_object);
	int var_87_int;
	func_3023(var_87_int);
	var_42_object->SetNPCName(var_87_int);
	string var_88_string;
	func_3025(var_88_string);
	var_42_object->SetPhoto(var_88_string);
	int var_89_int;
	func_2796(var_89_int);
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
		var_156_bool = !var_45_bool; //@nz
		if(var_156_bool == 0) goto Label_1608;
		@sync();
		var_42_object->IsDialogEnd(var_45_bool);
	}
	
Label_1608:
	object var_157_object;
	var_36_object = var_157_object;
	func_2463();
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
	func_3162();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2583(float var_70_float, cvector var_71_cvector, cvector var_72_cvector)
{
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_74_float = GetByIndex(var_72_cvector, 0);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_77_float = GetByIndex(var_72_cvector, 2);
	var_70_float = (var_73_float * var_74_float) + (var_76_float * var_77_float);
}


// @pe
void func_2592(float var_79_float, cvector var_80_cvector)
{
	var_81_float = GetByIndex(var_80_cvector, 0);
	var_82_float = GetByIndex(var_80_cvector, 0);
	var_84_float = GetByIndex(var_80_cvector, 2);
	var_85_float = GetByIndex(var_80_cvector, 2);
	var_79_float = sqrt((var_81_float * var_82_float) + (var_84_float * var_85_float));
}


// @pe
void func_2602(float var_67_float, cvector var_68_cvector, cvector var_69_cvector)
{
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	cvector var_72_cvector;
	var_69_cvector = var_72_cvector;
	float var_70_float;
	func_2583(var_70_float, var_71_cvector, var_72_cvector);
	float var_79_float; cvector var_80_cvector;
	var_68_cvector = var_80_cvector;
	func_2592(var_79_float, var_80_cvector);
	float var_88_float; cvector var_89_cvector;
	var_69_cvector = var_89_cvector;
	func_2592(var_88_float, var_89_cvector);
	var_67_float = var_70_float / (var_79_float * var_88_float);
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


void func_2619(int var_28_int)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_28_int = 1 + (var_30_float / 24);
}


// @pe
void func_2628(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	TaskCall(1);
	func_22(var_19_object);
	TaskReturn();
}


void func_593(void)
{
	int var_172_int; int var_173_int; bool var_174_bool; float var_175_float; bool var_176_bool;
	@WaitForAnimEnd();
	bool var_177_bool;
	func_2402(var_177_bool);
	if(!var_177_bool) //@nz
		return 14;
	int var_179_int;
	func_2670(var_179_int);
	int var_170_int;
	var_179_int = var_170_int;
	int var_171_int = 0;
	
	for(;;) {
		bool var_192_bool = false;
		if(var_171_int < 5) {
			bool var_195_bool;
			func_2402(var_195_bool);
			if(var_195_bool != 0)
				var_192_bool = true;
		}
		if(var_192_bool != 0) {
			@irand(var_172_int, 3);
			if(var_172_int == 0) {
				if(var_170_int == 0) goto Label_640;
				@irand(var_173_int, var_170_int);
				string var_201_string; int var_202_int;
				var_173_int = var_202_int;
				func_2663(var_201_string, var_202_int);
				@PlayAnimation("all", var_201_string);
				@WaitForAnimEnd(var_174_bool);
				if(!var_174_bool) { //@nz
				} else {
			} else {
			if(var_172_int == 1) {
				@rand(var_175_float, 4);
				@Sleep((var_175_float + 1), var_176_bool);
				if(!var_176_bool) { //@nz
					goto Label_661;
				}
			} else if(var_171_int != 0) {
				goto Label_661;
			}
			}
				var_171_int += 1;
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
		func_1732(var_99_object, "Neutral");
		var_0_bool->SetMessage(14538); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(14539, 15771, 15770); //@t
		var_0_bool->AddReply(14564, 15799, 15798); //@t
		var_0_bool->AddReply(14571, -1, 15805); //@t
		var_0_bool->AddReply(14572, -1, 15806); //@t
		var_0_bool->AddReply(14573, -1, 15807); //@t
		var_0_bool->AddReply(14574, -1, 15808); //@t
		var_0_bool->AddReply(14575, -1, 15809); //@t
		var_0_bool->AddReply(14576, 15811, 15810); //@t
		var_0_bool->AddReply(14578, -1, 15812); //@t
		goto Label_1702;
	EMIT "PushEmpty(string)";
	EMIT "Stack[-1] = \"Neutral\" // @poff=553";
	EMIT "Call 0x6c4";
	EMIT "Pop(1)";
	EMIT "Push((int) 14579)";
	EMIT "@@@ SetMessage(Stack[-1]); Obj=0 // @poff=569";
	EMIT "Pop(1)";
	EMIT "@@@ ClearReplies(); Obj=0 // @poff=580";
	EMIT "Pop(0)";
	EMIT "Push((int) 14580)";
	EMIT "Push((int) 15815)";
	EMIT "Push((int) 15814)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "Push((int) 14589)";
	EMIT "Push((int) -1)";
	EMIT "Push((int) 15823)";
	EMIT "@@@ AddReply(Stack[-3], Stack[-2], Stack[-1]); Obj=0 // @poff=593";
	EMIT "Pop(3)";
	EMIT "GOTO 0x6a6";
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x657";
	}
Label_1702:
	bool var_148_bool;
	func_3027(var_148_bool);
	if(var_148_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_2519(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_1731;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1731:
		return 0;

	}
	
}


void func_1112(bool var_0_bool, float var_290_float, int var_291_int)
{
	object var_295_object; float var_296_float; float var_297_float;
	@GetVictim((var_290_float * 0.9), var_295_object);
	@ReportAttack(var_0_bool);
	if(var_295_object == var_0_bool) {
		float var_301_float; object var_302_object; int var_303_int;
		var_295_object = var_302_object;
		var_291_int = var_303_int;
		func_901(var_303_int);
		var_301_float = var_296_float;
		float var_304_float; object var_305_object; float var_306_float; int var_307_int;
		var_295_object = var_305_object;
		int var_308_int; object var_309_object; int var_310_int;
		var_295_object = var_309_object;
		var_291_int = var_310_int;
		func_904(var_310_int);
		var_308_int = var_307_int;
		func_2195(var_304_float, var_305_object, var_306_float, var_307_int);
		var_304_float = var_297_float;
		int var_357_int;
		func_1390(var_357_int);
		@ReportHit(var_0_bool, var_357_int, var_297_float, var_306_float);
		object var_358_object; float var_359_float;
		var_295_object = var_358_object;
		var_297_float = var_359_float;
		func_1392();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_3162(void)
{
	var_71_bool = GlobalVars[1];
	GlobalVars[1] = true;
	@SetRTEnvelope(50, 40);
}


void func_2663(string var_185_string, int var_186_int)
{
	string var_188_string = "idle";
	if(var_186_int != 0)
		var_188_string += var_186_int;
	var_188_string = var_185_string;
}


void func_2670(int var_179_int)
{
	int var_182_int; bool var_183_bool;
	var_182_int = 0;
	
	for(;;) {
		string var_185_string; int var_186_int;
		var_182_int = var_186_int;
		func_2663(var_185_string, var_186_int);
		@HasAnimation(var_183_bool, "all", var_185_string);
		if(!var_183_bool) //@nz
			break;
		var_182_int += 1;
	}
	var_182_int = var_179_int;
}


// @pe
void func_2160(string var_332_string, int var_333_int)
{
	if(var_333_int == 1)
		var_332_string = "fire";
	var_332_string = "phys";
}


void func_2168(cvector var_61_cvector, object var_62_object)
{
	cvector var_65_cvector;
	@GetPosition(var_65_cvector);
	cvector var_66_cvector;
	var_62_object->GetPosition(var_66_cvector);
	var_61_cvector = var_66_cvector - var_65_cvector;
}


void func_1151(bool var_0_bool, bool var_1_bool, bool var_261_bool, float var_262_float)
{
	int var_265_int;
	@irand(var_265_int, var_1_bool);
	var_265_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_265_int));
	@WaitForAnimEnd();
	bool var_266_bool;
	func_1358(var_265_int, var_266_bool);
	bool var_287_bool;
	func_2300(var_287_bool, var_0_bool);
	if(!var_287_bool) { //@nz
		@StopAsync();
		var_261_bool = false;
		return 4;
	}
	float var_290_float; int var_291_int;
	var_262_float = var_290_float;
	var_265_int = var_291_int;
	func_1112(var_266_bool, var_290_float, var_291_int);
	@HasAnimation(var_266_bool, "all", ("attack_middle" + var_265_int));
	if(var_266_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_265_int));
		@WaitForAnimEnd();
		bool var_367_bool;
		func_2300(var_367_bool, var_0_bool);
		if(!var_367_bool) { //@nz
			@StopAsync();
			var_261_bool = false;
			return 4;
		}
		float var_370_float; int var_371_int;
		var_262_float = var_370_float;
		var_265_int = var_371_int;
		func_1112(var_266_bool, var_370_float, var_371_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_265_int));
	bool var_376_bool;
	func_1231(var_376_bool, 0.75);
	@StopAsync();
	var_261_bool = true;
}


// @pe
void func_2687(int var_60_int)
{
	bool var_62_bool;
	func_3075(var_62_bool);
	if(var_62_bool != 0)
		var_60_int = 2;
	else
		var_60_int = 0;
	
}


void func_2175(float var_61_float, object var_62_object)
{
	cvector var_66_cvector;
	@GetPosition(var_66_cvector);
	cvector var_67_cvector;
	var_62_object->GetPosition(var_67_cvector);
	var_61_float = (var_67_cvector - var_66_cvector) | (var_67_cvector - var_66_cvector);
}


void func_2183(bool var_44_bool, object var_45_object, string var_46_string)
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
void func_2696(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	TaskCall(4);
	func_667(var_70_object, var_69_object);
	TaskReturn();
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


// @pe
void func_2704(int var_74_int, object var_75_object)
{
	object var_77_object;
	var_75_object = var_77_object;
	bool var_76_bool;
	func_2300(var_76_bool, var_77_object);
	if(var_76_bool != 0)
		var_74_int = 2;
	else
		var_74_int = 0;
	
}


void func_2195(float var_304_float, object var_305_object, float var_306_float, int var_307_int)
{
	int var_317_int; int var_319_int;
	object var_324_object;
	var_305_object = var_324_object;
	bool var_323_bool;
	func_2183(var_323_bool, var_324_object, "health");
	if(!var_323_bool) //@nz
		var_304_float = 0.0;
	bool var_327_bool; object var_328_object;
	func_2183(var_327_bool, var_328_object, "armor");
	if(!var_327_bool) //@nz
		var_317_int = 0;
	else
		var_328_object->GetProperty("armor", var_317_int);
	string var_332_string; int var_333_int;
	var_307_int = var_333_int;
	func_2160(var_332_string, var_333_int);
	string var_318_string = "armor_" + var_332_string;
	bool var_336_bool; object var_337_object; string var_338_string;
	var_305_object = var_337_object;
	func_2183(var_336_bool, var_337_object, var_338_string);
	if(!var_336_bool) //@nz
		var_319_int = 0;
	else
		var_305_object->GetProperty(var_338_string, var_319_int);

	float var_340_float;
	func_2565(var_340_float, ((var_317_int + var_319_int) / 100.0), (float)1);
	float var_320_float;
	var_340_float = var_320_float;
	float var_321_float;
	var_305_object->GetProperty("health", var_321_float);
	float var_350_float;
	func_2572(var_350_float, (var_321_float - (var_306_float * (1 - var_320_float))), (float)0, (float)1);
	var_305_object->SetProperty("health", var_350_float);
	float var_322_float = var_304_float;
	
}


void func_662(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2714(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(5);
	func_893(var_77_object);
	TaskReturn();
}


void func_667(bool var_0_bool, object var_69_object)
{
	var_0_bool = var_69_object;
	bool var_76_bool;
	func_718(var_76_bool);
	cvector var_74_cvector;
	@GetDirection(var_74_cvector);
	cvector var_84_cvector;
	func_2168(var_84_cvector, var_0_bool);
	cvector var_75_cvector;
	var_84_cvector = var_75_cvector;
	float var_90_float; cvector var_91_cvector; cvector var_92_cvector;
	var_74_cvector = var_91_cvector;
	var_75_cvector = var_92_cvector;
	func_2602(var_90_float, var_91_cvector, var_92_cvector);
	if(var_90_float < 0) {
		func_2391(var_0_bool);
		var_76_bool = true;
	} else {
		@Sleep(1.5, var_76_bool);
	}
	if(var_76_bool != 0) {
		func_2391(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


// @pe
void func_2722(int var_72_int, object var_73_object)
{
	object var_75_object;
	var_73_object = var_75_object;
	int var_74_int;
	func_2704(var_74_int, var_75_object);
	var_74_int = var_72_int;
}


// @pe
void func_2729(object var_110_object)
{
	object var_111_object;
	var_110_object = var_111_object;
	func_2714(var_111_object);
}


// @pe
void func_2735(int var_20_int)
{
	var_20_int = 0;
}


// @pe
void func_2738(void)
{
}


// @pe
void func_2740(int var_21_int, string var_22_string, object var_23_object)
{
	if(var_22_string == "killme") {
		int var_26_int; object var_27_object;
		var_23_object = var_27_object;
		func_2762(var_26_int, var_27_object);
		var_26_int = var_21_int;
		return 0;
	}
	var_21_int = 0;
}


void func_185(void)
{
	bool var_136_bool;
	func_2402(var_136_bool);
	if(!var_136_bool) //@nz
		func_2795();
}


// @pe
void func_2752(string var_71_string, object var_72_object)
{
	if(var_71_string == "killme") {
		object var_75_object;
		var_72_object = var_75_object;
		func_2780(var_75_object);
	}
}


// @pe
void func_1732(bool var_2_bool, string var_23_string)
{
	bool var_24_bool;
	func_3027(var_24_bool);
	if(!var_24_bool) //@nz
		return 0;
	if(var_23_string == var_2_bool)
		return 0;
	string var_27_string;
	func_2519(var_27_string);
	var_2_bool = var_27_string;
}


// @pe
void func_2762(int var_26_int, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_2300(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_26_int = 0;
		return 0;
	}
	bool var_63_bool; object var_64_object;
	var_27_object = var_64_object;
	func_3077(var_64_object);
	if(var_63_bool != 0)
		var_26_int = 2;
	else
		var_26_int = 0;
	
}


void func_718(bool var_0_bool)
{
	func_2537(var_0_bool);
}


void func_1231(bool var_376_bool, float var_377_float)
{
	float var_380_float; bool var_381_bool;
	@rand(var_380_float);
	if(var_380_float < var_377_float) {

		for(;;) {
			@IsAnimationPlaying(var_381_bool);
			if(!var_381_bool) { //@nz
			} else {
				bool var_384_bool;
				func_1295(var_381_bool, var_384_bool);
				if(var_384_bool != 0) {
					var_376_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_376_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_2259(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_2264(bool var_26_bool, object var_27_object)
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
		func_2259(var_37_bool, var_38_object);
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


// @pe
void func_2780(object var_75_object)
{
	object var_76_object;
	var_75_object = var_76_object;
	func_2714(var_76_object);
}


// @pe
void func_2786(int var_20_int)
{
	var_20_int = 2;
}


// @pe
void func_2789(object var_28_object)
{
	object var_29_object;
	func_3037(var_29_object, var_29_object);
}


void func_1255(bool var_0_bool, bool var_218_bool, float var_219_float)
{
	bool var_225_bool; cvector var_226_cvector; cvector var_227_cvector; cvector var_228_cvector; float var_229_float;
	
	for(;;) {
		@IsAnimationPlaying(var_225_bool);
		if(!var_225_bool) //@nz
			break;
		bool var_231_bool;
		func_1295(var_229_float, var_231_bool);
		if(var_231_bool != 0) {
			var_218_bool = true;
			return 10;
		}
		bool var_256_bool;
		func_2300(var_256_bool, var_0_bool);
		if(!var_256_bool) { //@nz
			var_218_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_226_cvector); //@t
		@GetPFPosition(var_227_cvector);
		var_228_cvector = var_226_cvector - var_227_cvector;
		var_229_float = var_228_cvector | var_228_cvector;
		if(var_229_float < (var_219_float * var_219_float)) {
			bool var_261_bool; float var_262_float;
			var_219_float = var_262_float;
			func_1151(var_228_cvector, var_229_float, var_261_bool, var_262_float);
			var_218_bool = true;
			return 10;
		}
		@sync();
	}
	var_218_bool = false;
}


void func_2795(void)
{
}


void func_2796(int var_89_int)
{
	int var_91_int;
	@GetVariable("player", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 200001;
		return 2;
	EMIT "GOTO 0xafb";
	}
	if(var_91_int == 1) {
		var_89_int = 200002;
		return 2;
	}
	var_89_int = 200003;
}


void func_2300(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_2264(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_2183(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_2813(int var_25_int, int var_26_int)
{
	int var_41_int;
	if(var_25_int > var_26_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_40_int = 0;
	if(var_25_int != var_26_int) {
		@irand(var_41_int, (var_26_int - var_25_int));
	} else if(var_25_int == 0) {
		return 8;
	}
	var_40_int += var_25_int;
	if(var_40_int == 0)
		return 8;
	int var_42_int;
	@GetInvItemByName(var_42_int, "Money");
	bool var_43_bool;
	@AddItem(var_43_bool, var_42_int, 0, var_40_int);
	
}


void func_1295(bool var_0_bool, bool var_231_bool)
{
	cvector var_237_cvector; cvector var_238_cvector;
	bool var_242_bool;
	func_2300(var_242_bool, var_0_bool);
	if(!var_242_bool) { //@nz
		var_231_bool = false;
		return 10;
	}
	bool var_245_bool;
	float var_241_float;
	func_1347(var_241_float, var_245_bool);
	if(var_245_bool != 0) {
		var_0_bool->GetPFPosition(var_237_cvector); //@t
		@GetPFPosition(var_238_cvector);
		var_0_bool->GetAttackDistance(var_241_float); //@t
		var_241_float += 50;
		if(((var_237_cvector - var_238_cvector) | (var_237_cvector - var_238_cvector)) <= (var_241_float * var_241_float)) {
			func_1328(var_241_float);
			var_231_bool = true;
			return 10;
		}
	}
	var_231_bool = false;
}


void func_2324(object var_21_object, int var_22_int)
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


void func_2843(bool var_19_bool)
{
	int var_22_int; bool var_23_bool;
	if(var_19_bool != 0) {
		int var_28_int;
		func_2619(var_28_int);
		func_2813(0, (100 + (var_28_int * 100)));
		@irand(var_22_int, 9);
		if(var_22_int == 0) {
			int var_57_int;
			func_3018(var_57_int, "lemon");
			@AddItem(var_23_bool, var_57_int, 0, 1);
		} else {
				if(var_22_int == 1) {
					int var_65_int;
					func_3018(var_65_int, "rusk");
					@AddItem(var_23_bool, var_65_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_22_int == 2) {
				int var_71_int;
				func_3018(var_71_int, "hook");
				@AddItem(var_23_bool, var_71_int, 0, 1);
			} else if(var_22_int == 4) {
				int var_77_int;
				func_3018(var_77_int, "syringe");
				@AddItem(var_23_bool, var_77_int, 0, 1);
			} else if(var_22_int == 5) {
				int var_83_int;
				func_3018(var_83_int, "watch");
				@AddItem(var_23_bool, var_83_int, 0, 1);
			} else if(var_22_int == 6) {
				int var_89_int;
				func_3018(var_89_int, "razor");
				@AddItem(var_23_bool, var_89_int, 0, 1);
			}
	}
		int var_96_int;
		func_2619(var_96_int);
		func_2813(0, (50 + (var_96_int * 50)));
		@irand(var_22_int, 8);
		if(var_22_int == 0) {
			int var_102_int;
			func_3018(var_102_int, "beads");
			@AddItem(var_23_bool, var_102_int, 0, 1);
		} else if(var_22_int == 1) {
			int var_108_int;
			func_3018(var_108_int, "bracelet");
			@AddItem(var_23_bool, var_108_int, 0, 1);
		} else if(var_22_int == 2) {
			int var_114_int;
			func_3018(var_114_int, "ear_ring");
			@AddItem(var_23_bool, var_114_int, 0, 1);
		} else if(var_22_int == 3) {
			int var_120_int;
			func_3018(var_120_int, "gold_ring");
			@AddItem(var_23_bool, var_120_int, 0, 1);
		} else if(var_22_int == 4) {
			int var_126_int;
			func_3018(var_126_int, "silver_ring");
			@AddItem(var_23_bool, var_126_int, 0, 1);
		} else if(var_22_int == 5) {
			int var_132_int;
			func_3018(var_132_int, "flower");
			@AddItem(var_23_bool, var_132_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1328(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_251_cvector;
	var_0_bool->GetPFPosition(var_251_cvector); //@t
	cvector var_252_cvector;
	@GetPFPosition(var_252_cvector);
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


void func_1347(bool var_0_bool, bool var_210_bool)
{
	bool var_212_bool;
	var_215_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_215_bool != 0) {
		var_0_bool->IsAttacking(var_212_bool); //@t
		var_212_bool = var_210_bool;
	}
	var_210_bool = false;
}


void func_333(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_462(var_16_string, var_17_bool);
}


void func_1358(bool var_2_bool, object var_4_object)
{
	int var_275_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_274_float;
	@rand(var_274_float);
	float var_281_float;
	func_1396(var_281_float);
	if(var_274_float < var_281_float) {
		@irand(var_275_int, var_2_bool);
		@Speak("attack" + (var_275_int + 1));
		int var_286_int;
		func_1394(var_286_int);
		var_4_object = var_286_int;
	}
}


void func_341(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_469(var_21_bool, var_22_int);
}


void func_2391(object var_93_object)
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


void func_2402(bool var_136_bool)
{
	bool var_138_bool;
	@IsLoaded(var_138_bool);
	var_138_bool = var_136_bool;
}


void func_358(bool var_2_bool, object var_18_object)
{
	bool var_23_bool; object var_24_object;
	func_2300(var_23_bool, var_24_object);
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
	func_2687(var_61_object);
	int var_22_int;
	var_60_int = var_22_int;
	if(var_22_int > 0) {
		if(var_22_int > 1)
			func_341(var_22_int);
		object var_68_object;
		var_18_object = var_68_object;
		func_2696(var_68_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_2407(bool var_46_bool, object var_47_object)
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
	func_2555(var_71_cvector, (var_60_cvector ^ [0.0, 1.0, 0.0]));
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


void func_1390(int var_357_int)
{
	var_357_int = 0;
}


// @pe
void func_1392(void)
{
}


void func_1394(int var_286_int)
{
	var_286_int = 1;
}


void func_1396(float var_281_float)
{
	var_281_float = 0.5;
}


// @pe
void func_893(object var_77_object)
{
	object var_83_object;
	func_907(var_78_object, var_79_int, var_80_int, var_81_bool, var_82_int, var_83_object, var_83_object, true, 180.0);
}


void func_1405(bool var_0_bool, bool var_1_bool, bool var_134_bool, object var_135_object, float var_136_float, float var_137_float, bool var_138_bool, bool var_139_bool)
{
	bool var_150_bool; object var_152_object; cvector var_153_cvector; cvector var_154_cvector; float var_156_float; object var_157_object;
	var_0_bool = false;
	var_1_bool = var_135_object;
	bool var_151_bool;
	var_139_bool = var_151_bool;
	
	for(;;) {
		bool var_158_bool; object var_159_object;
		var_135_object = var_159_object;
		func_1545(var_158_bool, var_159_object);
		if(!var_158_bool) { //@nz
			var_134_bool = false;
			return 16;
		}
		var_135_object->GetPosition(var_153_cvector);
		@GetPosition(var_154_cvector);
		var_156_float = (var_153_cvector - var_154_cvector) | (var_153_cvector - var_154_cvector);
		bool var_163_bool = false;
		if(var_137_float > 0) {
			if(var_156_float > (var_137_float * var_137_float))
				var_163_bool = true;
		}
		if(var_163_bool != 0) {
			@Stop();
			var_134_bool = false;
			return 16;
		}
		if(var_156_float > (var_136_float * var_136_float)) {
			var_135_object->GetPFPosition(var_153_cvector);
			@FindPathTo(var_157_object, var_153_cvector);
			if(var_157_object != null) {
				var_157_object = var_152_object;
				var_157_object = null;
			}
			if(var_152_object != null) {
				if(var_151_bool == 0) goto Label_1458;
				var_151_bool = false;
				@RotatePath(var_152_object, var_150_bool);
				if(!var_150_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_176_string;
						func_1552(var_176_string);
						string var_177_string;
						func_1554(var_177_string);
						@FollowPath(var_152_object, var_138_bool, var_150_bool, var_176_string, var_177_string);
						if(!var_150_bool) { //@nz
							if(var_0_bool == 0) goto Label_1477;
							var_152_object = null;
						}
					EMIT "GOTO 0x5c6";

					Label_1477:
						} else {
					var_152_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_150_bool);
					if(!var_150_bool) { //@nz
						if(var_0_bool != 0) {
							var_152_object = null;
							goto Label_1505;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1505;
		}
			var_157_object = null;
			goto Label_1503;

		Label_1503:
			var_152_object = null;

		}
	Label_1505:
		for(;;) {
			var_134_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_901(float var_301_float)
{
	var_301_float = 0.05;
}


// @pe
void func_904(int var_308_int)
{
	var_308_int = 0;
}


void func_907(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_83_object, bool var_84_bool, float var_85_float, bool var_140_bool)
{
	bool var_96_bool; bool var_97_bool; float var_98_float; cvector var_99_cvector; cvector var_100_cvector; bool var_101_bool; bool var_102_bool; float var_104_float; float var_105_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_96_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_96_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_97_bool, ("attack" + (var_2_bool + 1)));
			if(!var_97_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_119_bool = IsFuncExist(var_83_object, "@GetAttackDistance", 1);
			if(var_119_bool != 0) {
				var_83_object->GetAttackDistance(var_98_float);
				var_98_float += 50;
			} else {
								var_85_float = var_98_float;

			}
			if(var_98_float >= 150)
				var_98_float = 150;
			var_3_bool = false;
			var_0_bool = var_83_object;
			@IsPlayerActor(var_0_bool, var_101_bool);
			if(var_84_bool != 0)
				var_102_bool = false;
			else
				var_102_bool = true;

			for(;;) {
				bool var_124_bool = false;
				bool var_125_bool;
				func_2300(var_125_bool, var_0_bool);
				if(var_125_bool != 0) {
					if(!var_3_bool) //@nz
						var_124_bool = true;
				}
				if(var_124_bool != 0) {
					var_0_bool->GetPFPosition(var_99_cvector); //@t
					@GetPFPosition(var_100_cvector);
					var_104_float = (var_99_cvector - var_100_cvector) | (var_99_cvector - var_100_cvector);
					if(var_104_float >= ((400.0 + var_98_float) * (400.0 + var_98_float))) {
						bool var_134_bool; float var_136_float;
						var_98_float = var_136_float;
						TaskCall(6);
						func_1405(var_140_bool, var_141_object, var_134_bool, var_0_bool, var_136_float, 3000.0, true, false);
						TaskReturn();
						if(!var_140_bool) { //@nz
						} else {
							var_102_bool = false;
					} else {
					if(var_104_float >= (var_85_float * var_85_float)) {
						if(!var_102_bool) { //@nz
							func_2391(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_102_bool = true;
						}
						@rand(var_105_float);
						bool var_207_bool;
						var_209_bool = var_105_float < 0.6;
						if(var_209_bool != 1) {
							bool var_210_bool;
							func_1347(true, var_210_bool);
							if(var_210_bool != 1)
								var_207_bool = false;
						}
						if(var_207_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_218_bool; float var_219_float;
							func_1255(var_105_float, var_218_bool, var_219_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_388_bool;
							func_1347(var_105_float, var_388_bool);
							var_389_bool = !var_388_bool; //@nz
							if(var_389_bool == 0) goto Label_1085;
							bool var_390_bool;
							func_2300(var_390_bool, var_0_bool);
							if(!var_390_bool) { //@nz
								goto Label_1095;
							}
							var_0_bool->GetPFPosition(var_99_cvector); //@t
							@GetPFPosition(var_100_cvector);
							var_104_float = (var_99_cvector - var_100_cvector) | (var_99_cvector - var_100_cvector);
							if(!(var_104_float < (var_219_float * var_219_float))) goto Label_1085;
							bool var_395_bool; float var_396_float;
							var_85_float = var_396_float;
							func_1151(var_104_float, var_105_float, var_395_bool, var_396_float);
							var_397_bool = !var_395_bool; //@nz
							if(var_397_bool == 0) goto Label_1085;
							goto Label_1095;
					}
						bool var_398_bool; float var_399_float;
						var_85_float = var_399_float;
						func_1151(var_104_float, var_105_float, var_398_bool, var_399_float);
						if(!var_398_bool) { //@nz
							goto Label_1095;
						}
						var_102_bool = true;

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
				if(var_101_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_398(bool var_0_bool, bool var_1_bool)
{
	float var_147_float; cvector var_148_cvector; cvector var_149_cvector; float var_150_float; bool var_151_bool; object var_152_object; bool var_153_bool;
	@rand(var_147_float, 0.5);
	@Sleep(var_147_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_410:
				@GetPosition(var_149_cvector);
				@GetCameraFarDistance(var_150_float);
				@GetRandomPFPointInCircle(var_148_cvector, var_149_cvector, (var_150_float * 2.5), var_151_bool);
				if(var_151_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_410;
			}
				var_1_bool = false;
		}
		}
		goto Label_427;

	Label_427:
		@FindShiftedPathTo(var_152_object, var_148_cvector);
		if(var_152_object != null) {
			@RotatePath(var_152_object, var_153_bool);
			if(var_153_bool != 0) {
				bool var_161_bool;
				func_476(var_161_bool);
				@FollowPath(var_152_object, var_161_bool, var_153_bool);
				var_152_object = null;
				if(var_153_bool != 0) {
					TaskCall(3);
					func_593();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_152_object = null;
	}
	
}


// @pe
void func_2463(void)
{
	@CameraSwitchToNormal();
}


void func_2467(bool var_159_bool, object var_160_object)
{
	cvector var_170_cvector;
	var_160_object->GetPosition(var_170_cvector);
	float var_169_float;
	var_160_object->GetEyesHeight(var_169_float);
	var_177_float = GetByIndex(var_170_cvector, 1);
	SetByIndex(var_170_cvector, 1) = (var_177_float + var_169_float);
	cvector var_171_cvector;
	@GetPosition(var_171_cvector);
	@GetEyesHeight(var_169_float);
	var_178_float = GetByIndex(var_171_cvector, 1);
	SetByIndex(var_171_cvector, 1) = (var_178_float + var_169_float);
	cvector var_172_cvector = var_170_cvector - var_171_cvector;
	var_179_float = GetByIndex(var_172_cvector, 1);
	SetByIndex(var_172_cvector, 1) = (float)0;
	var_181_float = sqrt(var_172_cvector | var_172_cvector);
	var_172_cvector /= var_181_float;
	cvector var_173_cvector = -var_172_cvector;
	cvector var_174_cvector = (var_172_cvector * 70) - [0.0, 10.0, 0.0];
	bool var_176_bool;
	@IsOverrideActive(var_176_bool);
	if(var_176_bool != 0)
		var_159_bool = false;
	@StopWorld();
	@CameraTransit((var_171_cvector + var_174_cvector), var_173_cvector);
	var_186_float = GetByIndex(var_174_cvector, 0);
	var_187_float = GetByIndex(var_174_cvector, 2);
	@Rotate(var_186_float, var_187_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_159_bool = true;
}


void func_3018(int var_57_int, string var_58_string)
{
	int var_60_int;
	@GetInvItemByName(var_60_int, var_58_string);
	var_60_int = var_57_int;
}


void func_462(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_3023(int var_87_int)
{
	var_87_int = 3349;
}


void func_3025(string var_88_string)
{
	var_88_string = "ui/NPC_None.png";
}


void func_3027(bool var_20_bool)
{
	var_20_bool = false;
}


// @pe
void func_2515(void)
{
	@CameraSwitchToNormal();
}


void func_3029(void)
{
	var_18_bool = GlobalVars[1];
	GlobalVars[1] = false;
	func_2843(true);
}


void func_469(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_2519(string var_27_string)
{
	@Trace("playing " + var_27_string);
	float var_30_float;
	float var_31_float;
	@lshGetAnimTimes(var_27_string, var_30_float, var_31_float);
	@lshPlayAnimation(var_30_float, var_31_float);
	@Trace("start: " + var_30_float);
	@Trace("end: " + var_31_float);
}


void func_476(bool var_161_bool)
{
	var_161_bool = false;
}


void func_3037(object var_29_object, object var_37_object)
{
	bool var_31_bool;
	var_32_bool = GlobalVars[1];
	if(var_32_bool != 0) {
		@IsOverrideActive(var_31_bool);
		if(!var_31_bool) //@nz
			@WorkWithCorpse(var_29_object);
		return 2;
	EMIT "GOTO 0xc02";
	}
	int var_35_int; object var_36_object;
	var_29_object = var_36_object;
	TaskCall(7);
	func_1556(var_37_object, var_35_int, var_36_object);
	TaskReturn();
	if(1000 == var_37_object) {
		bool var_159_bool; object var_160_object;
		var_29_object = var_160_object;
		func_2467(var_159_bool, var_160_object);
		if(!var_159_bool) //@nz
			return 2;
		object var_189_object;
		var_29_object = var_189_object;
		TaskCall(0);
		func_0(var_189_object);
		TaskReturn();
		object var_194_object;
		var_29_object = var_194_object;
		func_2515();
	}
}


void func_2537(object var_77_object)
{
	float var_80_float;
	var_77_object->GetEyesHeight(var_80_float);
	cvector var_81_cvector = [0.0, 0.0, 0.0];
	var_82_float = GetByIndex(var_81_cvector, 1);
	var_80_float = var_82_float;
	SetByIndex(var_81_cvector, 1) = var_82_float;
	@LookAsync(var_77_object, "head", var_81_cvector);
}


void func_2548(void)
{
	bool var_20_bool;
	func_3027(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_1529(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2555(cvector var_71_cvector, cvector var_72_cvector)
{
	float var_75_float = sqrt(var_72_cvector | var_72_cvector);
	if(var_75_float < 0.000001)
		var_71_cvector = [0.0, 0.0, 0.0];
	var_71_cvector = var_72_cvector / var_75_float;
}


