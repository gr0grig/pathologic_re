// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool;
		func_6563(var_23_bool);
		if(var_23_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		@SensePlayerOnly(true);
		func_6565();
		func_55();
	
		for(;;) {
			var_2_bool = false;
			func_316(var_20_string, var_21_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_6046(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_6049(var_32_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_5851(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5934(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_75_object;
			var_22_bool = var_75_object;
			func_5944(var_75_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		int var_26_int;
		object var_28_object;
		var_22_object = var_28_object;
		object var_29_object;
		var_23_string = var_29_object;
		bool var_30_bool;
		var_24_bool = var_30_bool;
		func_6619(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_5952(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_251(var_26_int);
				object var_110_object;
				var_22_object = var_110_object;
				func_5962(var_110_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_6036(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_6039();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, object var_20_object, object var_21_object, string var_22_string, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_22_string = var_27_object;
		string var_28_string;
		var_23_bool = var_28_string;
		bool var_26_bool;
		func_5765(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_251(var_25_int);
			object var_59_object; string var_60_string;
			var_22_string = var_59_object;
			var_23_bool = var_60_string;
			func_5797(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_23_bool = var_209_string;
			var_22_string = var_210_object;
			func_6041(var_210_object);
			var_208_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_192;
			if(var_25_int > 1)
				func_251(var_25_int);
			string var_215_string; object var_216_object;
			var_23_bool = var_215_string;
			var_22_string = var_216_object;
			func_6044();
		}
	Label_192:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; string var_24_string;
		func_5864(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_251(var_24_string);
			string var_33_string;
			var_22_bool = var_33_string;
			func_5880(var_33_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; object var_24_object;
		func_5822(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_251(var_24_object);
			object var_38_object;
			var_22_bool = var_38_object;
			func_5845(var_38_object);
		} else {
			object var_112_object;
			func_276(var_112_object, var_112_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_23_object;
		func_276(var_23_object, var_23_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, int var_4_int, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		if(var_22_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_251(var_21_bool);
		func_6055();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_251(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_5759();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		@RequestClearPath(var_22_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_6046(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_6049(var_31_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_5851(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5934(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_74_object;
			var_22_bool = var_74_object;
			func_5944(var_74_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		int var_26_int;
		object var_28_object;
		var_22_object = var_28_object;
		object var_29_object;
		var_23_string = var_29_object;
		bool var_30_bool;
		var_24_bool = var_30_bool;
		func_6619(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_5952(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_654();
				object var_109_object;
				var_22_object = var_109_object;
				func_5962(var_109_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_6036(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_6039();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, object var_20_object, object var_21_object, string var_22_string, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_22_string = var_27_object;
		string var_28_string;
		var_23_bool = var_28_string;
		bool var_26_bool;
		func_5765(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_654();
			object var_58_object; string var_59_string;
			var_22_string = var_58_object;
			var_23_bool = var_59_string;
			func_5797(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_23_bool = var_208_string;
			var_22_string = var_209_object;
			func_6041(var_209_object);
			var_207_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_537;
			if(var_25_int > 1)
				func_654();
			string var_214_string; object var_215_object;
			var_23_bool = var_214_string;
			var_22_string = var_215_object;
			func_6044();
		}
	Label_537:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_5864(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_654();
			string var_32_string;
			var_22_bool = var_32_string;
			func_5880(var_32_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_654();
		func_6055();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_5822(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_654();
			object var_37_object;
			var_22_bool = var_37_object;
			func_5845(var_37_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_6046(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_6049(var_33_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_5851(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5934(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_76_object;
			var_22_bool = var_76_object;
			func_5944(var_76_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool, object var_20_object, object var_21_object, object var_22_object, string var_23_string, bool var_24_bool)
	{
		int var_26_int;
		object var_28_object;
		var_22_object = var_28_object;
		object var_29_object;
		var_23_string = var_29_object;
		bool var_30_bool;
		var_24_bool = var_30_bool;
		func_6619(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_5952(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_858();
				object var_111_object;
				var_22_object = var_111_object;
				func_5962(var_111_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_6036(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_6039();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, string var_6_string, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool, object var_19_object, object var_20_object, object var_21_object, string var_22_string, bool var_23_bool)
	{
		int var_25_int;
		object var_27_object;
		var_22_string = var_27_object;
		string var_28_string;
		var_23_bool = var_28_string;
		bool var_26_bool;
		func_5765(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_858();
			object var_60_object; string var_61_string;
			var_22_string = var_60_object;
			var_23_bool = var_61_string;
			func_5797(var_60_object, var_61_string);
		} else {
			int var_209_int; string var_210_string; object var_211_object;
			var_23_bool = var_210_string;
			var_22_string = var_211_object;
			func_6041(var_211_object);
			var_209_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_843;
			if(var_25_int > 1)
				func_858();
			string var_216_string; object var_217_object;
			var_23_bool = var_216_string;
			var_22_string = var_217_object;
			func_6044();
		}
	Label_843:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_5864(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_858();
			string var_34_string;
			var_22_bool = var_34_string;
			func_5880(var_34_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_858();
		object var_25_object;
		var_22_bool = var_25_object;
		func_5759();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		if(var_22_bool != 111)
			return 4;
		bool var_29_bool;
		func_5396(var_29_bool, var_0_bool);
		if(!var_29_bool) { //@nz
			func_858();
			return 4;
		}
		cvector var_25_cvector;
		@GetDirection(var_25_cvector);
		cvector var_66_cvector;
		func_5323(var_66_cvector, var_0_bool);
		cvector var_26_cvector;
		var_66_cvector = var_26_cvector;
		float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
		var_25_cvector = var_73_cvector;
		var_26_cvector = var_74_cvector;
		func_5707(var_72_float, var_73_cvector, var_74_cvector);
		if(var_72_float < 0.49999997)
			func_5420(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_858();
		func_6055();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_5822(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_858();
			object var_39_object;
			var_22_bool = var_39_object;
			func_5845(var_39_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1124(var_21_bool);
		func_6055();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_969(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_1140(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_1123;
			@Stop();
			cvector var_94_cvector;
			func_5318(var_94_cvector);
			var_1_bool = var_94_cvector + var_29_cvector;
		}
	Label_1123:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_1124(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_5759();
	}

}


task task_5
{
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_1156(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_1327(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_1310;
			@Stop();
			cvector var_94_cvector;
			func_5318(var_94_cvector);
			var_1_bool = var_94_cvector + var_29_cvector;
		}
	Label_1310:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_1311(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_5759();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1505(var_21_bool);
		func_6055();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, int var_14_int, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_1350(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_1521(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_1504;
			@Stop();
			cvector var_94_cvector;
			func_5318(var_94_cvector);
			var_1_bool = var_94_cvector + var_29_cvector;
		}
	Label_1504:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_1505(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_5759();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1699(var_21_bool);
		func_6055();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, int var_17_int, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		cvector var_27_cvector; float var_28_float; cvector var_29_cvector; float var_30_float;
		if(var_22_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_27_cvector);
			@FindDirLength(var_28_float, var_27_cvector, 7000.0);
			cvector var_36_cvector;
			func_1544(var_30_float, var_36_cvector, 1.7453294);
			var_36_cvector = var_29_cvector;
			var_30_float = var_29_cvector | var_29_cvector;
			bool var_66_bool = false;
			if(var_30_float >= 2500.0) {
				bool var_69_bool;
				var_73_bool = var_30_float >= ((var_28_float * var_28_float) * 2.25);
				if(var_73_bool != 1) {
					bool var_74_bool;
					func_1715(true, var_74_bool);
					if(var_74_bool != 1)
						var_69_bool = false;
				}
				if(var_69_bool != 0)
					var_66_bool = true;
			}
			if(var_66_bool == 0) goto Label_1698;
			@Stop();
			cvector var_94_cvector;
			func_5318(var_94_cvector);
			var_1_bool = var_94_cvector + var_29_cvector;
		}
	Label_1698:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_1699(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_5759();
	}

}


task task_8
{
}


task task_9
{
	// @pe
	void event_11(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, int var_22_int, int var_23_int)
	{
		if(1 != 0) {
			func_5626();
			if(var_23_int == 45666) {
				object var_28_object = var_1_bool;
				func_6120(var_0_bool);
			}
			if(var_23_int == 45667) {
				object var_33_object = var_1_bool;
				func_6120(var_0_bool);
			}
			if(var_23_int == 45668) {
				object var_37_object = var_1_bool;
				func_6120(var_0_bool);
			}
			if(var_23_int == 39084) {
				object var_41_object = var_1_bool;
				func_6120(var_0_bool);
			}
			if(var_23_int == 39093) {
				object var_45_object; object var_46_object;
				var_45_object = var_1_bool;
				var_46_object = var_0_bool;
				func_6110();
			}
			if(var_23_int == 39094) {
				object var_59_object; object var_60_object;
				var_59_object = var_1_bool;
				var_60_object = var_0_bool;
				func_6110();
			}
			if(var_23_int == 39095) {
				object var_63_object; object var_64_object;
				var_63_object = var_1_bool;
				var_64_object = var_0_bool;
				func_6110();
			}
			if(var_22_int == 45665) {
				bool var_67_bool;
				func_6137(var_1_bool);
				if(var_67_bool != 0) {
					func_2447(var_23_int, "Neutral");
					var_0_bool->SetMessage(543209); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_93_bool = true;
					bool var_94_bool;
					func_6219(var_94_bool, var_1_bool);
					if(var_94_bool != 1) {
						bool var_105_bool;
						func_6239(var_105_bool, var_1_bool);
						if(var_105_bool != 1)
							var_93_bool = false;
					}
					if(var_93_bool != 0)
						var_0_bool->AddReply(543240, 45697, 45696); //@t
					bool var_114_bool = true;
					bool var_115_bool = true;
					bool var_116_bool = true;
					bool var_117_bool;
					func_6149(var_117_bool, var_1_bool);
					if(var_117_bool != 1) {
						bool var_123_bool;
						func_6169(var_123_bool, var_1_bool);
						if(var_123_bool != 1)
							var_116_bool = false;
					}
					if(var_116_bool != 1) {
						bool var_129_bool;
						func_6189(var_129_bool, var_1_bool);
						if(var_129_bool != 1)
							var_115_bool = false;
					}
					if(var_115_bool != 1) {
						bool var_135_bool;
						func_6179(var_135_bool, var_1_bool);
						if(var_135_bool != 1)
							var_114_bool = false;
					}
					if(var_114_bool != 0)
						var_0_bool->AddReply(543233, 45690, 45689); //@t
					bool var_144_bool;
					func_6159(var_144_bool, var_1_bool);
					if(var_144_bool != 0)
						var_0_bool->AddReply(543214, 45672, 45670); //@t
					bool var_153_bool = true;
					bool var_154_bool = true;
					bool var_155_bool = true;
					bool var_156_bool;
					func_6149(var_156_bool, var_1_bool);
					if(var_156_bool != 1) {
						bool var_158_bool;
						func_6159(var_158_bool, var_1_bool);
						if(var_158_bool != 1)
							var_155_bool = false;
					}
					if(var_155_bool != 1) {
						bool var_160_bool;
						func_6169(var_160_bool, var_1_bool);
						if(var_160_bool != 1)
							var_154_bool = false;
					}
					if(var_154_bool != 1) {
						bool var_162_bool;
						func_6179(var_162_bool, var_1_bool);
						if(var_162_bool != 1)
							var_153_bool = false;
					}
					if(var_153_bool != 0)
						var_0_bool->AddReply(543210, -1, 45666); //@t
					bool var_167_bool = true;
					bool var_168_bool = true;
					bool var_169_bool;
					func_6189(var_169_bool, var_1_bool);
					if(var_169_bool != 1) {
						bool var_171_bool;
						func_6199(var_171_bool, var_1_bool);
						if(var_171_bool != 1)
							var_168_bool = false;
					}
					if(var_168_bool != 1) {
						bool var_177_bool;
						func_6209(var_177_bool, var_1_bool);
						if(var_177_bool != 1)
							var_167_bool = false;
					}
					if(var_167_bool != 0)
						var_0_bool->AddReply(543211, -1, 45667); //@t
					bool var_186_bool = true;
					bool var_187_bool = true;
					bool var_188_bool = true;
					bool var_189_bool = true;
					bool var_190_bool;
					func_6219(var_190_bool, var_1_bool);
					if(var_190_bool != 1) {
						bool var_192_bool;
						func_6229(var_192_bool, var_1_bool);
						if(var_192_bool != 1)
							var_189_bool = false;
					}
					if(var_189_bool != 1) {
						bool var_198_bool;
						func_6239(var_198_bool, var_1_bool);
						if(var_198_bool != 1)
							var_188_bool = false;
					}
					if(var_188_bool != 1) {
						bool var_200_bool;
						func_6249(var_200_bool, var_1_bool);
						if(var_200_bool != 1)
							var_187_bool = false;
					}
					if(var_187_bool != 1) {
						bool var_206_bool;
						func_6259(var_206_bool, var_1_bool);
						if(var_206_bool != 1)
							var_186_bool = false;
					}
					if(var_186_bool != 0)
						var_0_bool->AddReply(543212, -1, 45668); //@t
					bool var_215_bool = true;
					bool var_216_bool = true;
					bool var_217_bool = true;
					bool var_218_bool = true;
					bool var_219_bool;
					func_6149(var_219_bool, var_1_bool);
					if(var_219_bool != 1) {
						bool var_221_bool;
						func_6159(var_221_bool, var_1_bool);
						if(var_221_bool != 1)
							var_218_bool = false;
					}
					if(var_218_bool != 1) {
						bool var_223_bool;
						func_6179(var_223_bool, var_1_bool);
						if(var_223_bool != 1)
							var_217_bool = false;
					}
					if(var_217_bool != 1) {
						bool var_225_bool;
						func_6189(var_225_bool, var_1_bool);
						if(var_225_bool != 1)
							var_216_bool = false;
					}
					if(var_216_bool != 1) {
						bool var_227_bool;
						func_6209(var_227_bool, var_1_bool);
						if(var_227_bool != 1)
							var_215_bool = false;
					}
					if(var_215_bool != 0)
						var_0_bool->AddReply(543213, -1, 45669); //@t
					bool var_232_bool = true;
					bool var_233_bool = true;
					bool var_234_bool = true;
					bool var_235_bool = true;
					bool var_236_bool = true;
					bool var_237_bool = true;
					bool var_238_bool;
					func_6169(var_238_bool, var_1_bool);
					if(var_238_bool != 1) {
						bool var_240_bool;
						func_6199(var_240_bool, var_1_bool);
						if(var_240_bool != 1)
							var_237_bool = false;
					}
					if(var_237_bool != 1) {
						bool var_242_bool;
						func_6229(var_242_bool, var_1_bool);
						if(var_242_bool != 1)
							var_236_bool = false;
					}
					if(var_236_bool != 1) {
						bool var_244_bool;
						func_6259(var_244_bool, var_1_bool);
						if(var_244_bool != 1)
							var_235_bool = false;
					}
					if(var_235_bool != 1) {
						bool var_246_bool;
						func_6159(var_246_bool, var_1_bool);
						if(var_246_bool != 1)
							var_234_bool = false;
					}
					if(var_234_bool != 1) {
						bool var_248_bool;
						func_6219(var_248_bool, var_1_bool);
						if(var_248_bool != 1)
							var_233_bool = false;
					}
					if(var_233_bool != 1) {
						bool var_250_bool;
						func_6239(var_250_bool, var_1_bool);
						if(var_250_bool != 1)
							var_232_bool = false;
					}
					if(var_232_bool != 0)
						var_0_bool->AddReply(543215, -1, 45671); //@t
					bool var_255_bool = true;
					bool var_256_bool = true;
					bool var_257_bool = true;
					bool var_258_bool;
					func_6249(var_258_bool, var_1_bool);
					if(var_258_bool != 1) {
						bool var_260_bool;
						func_6229(var_260_bool, var_1_bool);
						if(var_260_bool != 1)
							var_257_bool = false;
					}
					if(var_257_bool != 1) {
						bool var_262_bool;
						func_6219(var_262_bool, var_1_bool);
						if(var_262_bool != 1)
							var_256_bool = false;
					}
					if(var_256_bool != 1) {
						bool var_264_bool;
						func_6209(var_264_bool, var_1_bool);
						if(var_264_bool != 1)
							var_255_bool = false;
					}
					if(var_255_bool != 0)
						var_0_bool->AddReply(543219, -1, 45675); //@t
					return 0;
				}
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537240); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537241, -1, 39084); //@t
				bool var_274_bool = false;
				bool var_275_bool;
				func_6125(var_1_bool);
				if(var_275_bool != 0) {
					bool var_281_bool;
					func_6149(var_281_bool, var_1_bool);
					if(var_281_bool != 0)
						var_274_bool = true;
				}
				if(var_274_bool != 0)
					var_0_bool->AddReply(537242, 39086, 39085); //@t
				bool var_286_bool;
				func_6149(var_286_bool, var_1_bool);
				if(var_286_bool != 0)
					var_0_bool->AddReply(537277, 39122, 39121); //@t
				bool var_291_bool;
				func_6159(var_291_bool, var_1_bool);
				if(var_291_bool != 0)
					var_0_bool->AddReply(537329, 39176, 39175); //@t
				bool var_296_bool = false;
				bool var_297_bool;
				func_6169(var_297_bool, var_1_bool);
				if(var_297_bool != 0) {
					bool var_299_bool;
					func_6269(var_299_bool, var_1_bool);
					if(var_299_bool != 0)
						var_296_bool = true;
				}
				if(var_296_bool != 0)
					var_0_bool->AddReply(537352, 39199, 39198); //@t
				bool var_317_bool = false;
				bool var_318_bool = false;
				bool var_319_bool;
				func_6125(var_1_bool);
				if(var_319_bool != 0) {
					bool var_321_bool;
					func_6169(var_321_bool, var_1_bool);
					if(var_321_bool != 0)
						var_318_bool = true;
				}
				if(var_318_bool != 0) {
					bool var_323_bool;
					func_6279(var_323_bool, var_1_bool);
					if(var_323_bool != 0)
						var_317_bool = true;
				}
				if(var_317_bool != 0)
					var_0_bool->AddReply(537359, 39206, 39205); //@t
				bool var_333_bool = false;
				bool var_334_bool;
				func_6179(var_334_bool, var_1_bool);
				if(var_334_bool != 0) {
					bool var_336_bool;
					func_6269(var_336_bool, var_1_bool);
					if(var_336_bool != 0)
						var_333_bool = true;
				}
				if(var_333_bool != 0)
					var_0_bool->AddReply(537380, 39227, 39226); //@t
				bool var_341_bool = false;
				bool var_342_bool;
				func_6179(var_342_bool, var_1_bool);
				if(var_342_bool != 0) {
					bool var_344_bool;
					func_6279(var_344_bool, var_1_bool);
					if(var_344_bool != 0)
						var_341_bool = true;
				}
				if(var_341_bool != 0)
					var_0_bool->AddReply(537390, 39237, 39236); //@t
				bool var_349_bool;
				func_6189(var_349_bool, var_1_bool);
				if(var_349_bool != 0)
					var_0_bool->AddReply(537400, 39247, 39246); //@t
				bool var_354_bool = false;
				bool var_355_bool;
				func_6125(var_1_bool);
				if(var_355_bool != 0) {
					bool var_357_bool;
					func_6199(var_357_bool, var_1_bool);
					if(var_357_bool != 0)
						var_354_bool = true;
				}
				if(var_354_bool != 0)
					var_0_bool->AddReply(537423, 39270, 39269); //@t
				bool var_362_bool;
				func_6209(var_362_bool, var_1_bool);
				if(var_362_bool != 0)
					var_0_bool->AddReply(537433, 39280, 39279); //@t
				bool var_367_bool = false;
				bool var_368_bool;
				func_6125(var_1_bool);
				if(var_368_bool != 0) {
					bool var_370_bool;
					func_6219(var_370_bool, var_1_bool);
					if(var_370_bool != 0)
						var_367_bool = true;
				}
				if(var_367_bool != 0)
					var_0_bool->AddReply(537451, 39299, 39298); //@t
				bool var_375_bool = false;
				bool var_376_bool;
				func_6125(var_1_bool);
				if(var_376_bool != 0) {
					bool var_378_bool;
					func_6229(var_378_bool, var_1_bool);
					if(var_378_bool != 0)
						var_375_bool = true;
				}
				if(var_375_bool != 0)
					var_0_bool->AddReply(537460, 39308, 39307); //@t
				bool var_383_bool = false;
				bool var_384_bool;
				func_6125(var_1_bool);
				if(var_384_bool != 0) {
					bool var_386_bool;
					func_6249(var_386_bool, var_1_bool);
					if(var_386_bool != 0)
						var_383_bool = true;
				}
				if(var_383_bool != 0)
					var_0_bool->AddReply(537473, 39321, 39320); //@t
				bool var_391_bool;
				func_6249(var_391_bool, var_1_bool);
				if(var_391_bool != 0)
					var_0_bool->AddReply(537483, 39331, 39330); //@t
				bool var_396_bool;
				func_6259(var_396_bool, var_1_bool);
				if(var_396_bool != 0)
					var_0_bool->AddReply(537493, 39341, 39340); //@t
				var_0_bool->AddReply(537503, -1, 39350); //@t
				var_0_bool->AddReply(537504, -1, 39351); //@t
				return 0;
			}
			if(var_22_int == 39341) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537494); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537495, 39343, 39342); //@t
				var_0_bool->AddReply(537499, 39347, 39346); //@t
				return 0;
			}
			if(var_22_int == 39347) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537500); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537501, -1, 39348); //@t
				bool var_424_bool;
				func_6125(var_1_bool);
				if(var_424_bool != 0)
					var_0_bool->AddReply(537502, -1, 39349); //@t
				return 0;
			}
			if(var_22_int == 39343) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537496); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537497, -1, 39344); //@t
				var_0_bool->AddReply(537498, -1, 39345); //@t
				return 0;
			}
			if(var_22_int == 39331) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537484); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537485, 39333, 39332); //@t
				var_0_bool->AddReply(537492, -1, 39339); //@t
				return 0;
			}
			if(var_22_int == 39333) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537486); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537487, 39335, 39334); //@t
				bool var_456_bool;
				func_6125(var_1_bool);
				if(var_456_bool != 0)
					var_0_bool->AddReply(537491, -1, 39338); //@t
				return 0;
			}
			if(var_22_int == 39335) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537488); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537489, -1, 39336); //@t
				var_0_bool->AddReply(537490, -1, 39337); //@t
				return 0;
			}
			if(var_22_int == 39321) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537474); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537475, 39323, 39322); //@t
				var_0_bool->AddReply(537482, -1, 39329); //@t
				return 0;
			}
			if(var_22_int == 39323) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537476); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537477, 39325, 39324); //@t
				var_0_bool->AddReply(537481, -1, 39328); //@t
				return 0;
			}
			if(var_22_int == 39325) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537478); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537479, -1, 39326); //@t
				var_0_bool->AddReply(537480, -1, 39327); //@t
				return 0;
			}
			if(var_22_int == 39308) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537461); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537462, 39310, 39309); //@t
				var_0_bool->AddReply(537472, -1, 39319); //@t
				return 0;
			}
			if(var_22_int == 39310) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537463); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537464, 39312, 39311); //@t
				var_0_bool->AddReply(537471, -1, 39318); //@t
				return 0;
			}
			if(var_22_int == 39312) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537465); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537466, 39314, 39313); //@t
				var_0_bool->AddReply(537470, -1, 39317); //@t
				return 0;
			}
			if(var_22_int == 39314) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537467); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537468, -1, 39315); //@t
				var_0_bool->AddReply(537469, -1, 39316); //@t
				return 0;
			}
			if(var_22_int == 39299) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537452); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537453, 39301, 39300); //@t
				var_0_bool->AddReply(537459, -1, 39306); //@t
				return 0;
			}
			if(var_22_int == 39301) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537454); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537455, 39303, 39302); //@t
				return 0;
			}
			if(var_22_int == 39303) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537456); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537457, -1, 39304); //@t
				var_0_bool->AddReply(537458, -1, 39305); //@t
				return 0;
			}
			if(var_22_int == 39280) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537434); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537435, 39282, 39281); //@t
				var_0_bool->AddReply(537447, 39294, 39293); //@t
				return 0;
			}
			if(var_22_int == 39294) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537448); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537449, 39284, 39295); //@t
				var_0_bool->AddReply(537450, -1, 39297); //@t
				return 0;
			}
			if(var_22_int == 39282) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537436); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537437, 39284, 39283); //@t
				return 0;
			}
			if(var_22_int == 39284) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537438); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537439, 39286, 39285); //@t
				var_0_bool->AddReply(537442, 39289, 39288); //@t
				return 0;
			}
			if(var_22_int == 39289) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537443); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537444, 39291, 39290); //@t
				return 0;
			}
			if(var_22_int == 39291) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537445); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537446, -1, 39292); //@t
				return 0;
			}
			if(var_22_int == 39286) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537440); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537441, -1, 39287); //@t
				return 0;
			}
			if(var_22_int == 39270) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537424); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537425, 39272, 39271); //@t
				var_0_bool->AddReply(537432, -1, 39278); //@t
				return 0;
			}
			if(var_22_int == 39272) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537426); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537427, 39274, 39273); //@t
				var_0_bool->AddReply(537431, -1, 39277); //@t
				return 0;
			}
			if(var_22_int == 39274) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537428); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537429, -1, 39275); //@t
				var_0_bool->AddReply(537430, -1, 39276); //@t
				return 0;
			}
			if(var_22_int == 39247) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537401); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537402, 39249, 39248); //@t
				bool var_663_bool;
				func_6125(var_1_bool);
				if(var_663_bool != 0)
					var_0_bool->AddReply(537418, 39265, 39264); //@t
				var_0_bool->AddReply(537422, -1, 39268); //@t
				return 0;
			}
			if(var_22_int == 39265) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537419); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537420, -1, 39266); //@t
				var_0_bool->AddReply(537421, -1, 39267); //@t
				return 0;
			}
			if(var_22_int == 39249) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537403); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537404, 39251, 39250); //@t
				var_0_bool->AddReply(537417, -1, 39263); //@t
				return 0;
			}
			if(var_22_int == 39251) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537405); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537406, 39253, 39252); //@t
				bool var_698_bool;
				func_6125(var_1_bool);
				if(var_698_bool != 0)
					var_0_bool->AddReply(537416, -1, 39262); //@t
				return 0;
			}
			if(var_22_int == 39253) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537407); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537408, 39255, 39254); //@t
				var_0_bool->AddReply(537415, -1, 39261); //@t
				return 0;
			}
			if(var_22_int == 39255) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537409); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537410, 39257, 39256); //@t
				var_0_bool->AddReply(537414, -1, 39260); //@t
				return 0;
			}
			if(var_22_int == 39257) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537411); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537412, -1, 39258); //@t
				var_0_bool->AddReply(537413, -1, 39259); //@t
				return 0;
			}
			if(var_22_int == 39237) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537391); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537392, 39239, 39238); //@t
				var_0_bool->AddReply(537397, 39244, 39243); //@t
				return 0;
			}
			if(var_22_int == 39244) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537398); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537399, -1, 39245); //@t
				return 0;
			}
			if(var_22_int == 39239) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537393); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537394, 39241, 39240); //@t
				return 0;
			}
			if(var_22_int == 39241) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537395); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537396, -1, 39242); //@t
				return 0;
			}
			if(var_22_int == 39227) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537381); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537382, 39229, 39228); //@t
				var_0_bool->AddReply(537386, 39233, 39232); //@t
				var_0_bool->AddReply(537389, -1, 39235); //@t
				return 0;
			}
			if(var_22_int == 39233) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537387); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537388, -1, 39234); //@t
				return 0;
			}
			if(var_22_int == 39229) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537383); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537384, -1, 39230); //@t
				var_0_bool->AddReply(537385, -1, 39231); //@t
				return 0;
			}
			if(var_22_int == 39206) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537360); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537361, 39208, 39207); //@t
				var_0_bool->AddReply(537376, 39223, 39222); //@t
				var_0_bool->AddReply(537379, -1, 39225); //@t
				return 0;
			}
			if(var_22_int == 39223) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537377); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537378, -1, 39224); //@t
				return 0;
			}
			if(var_22_int == 39208) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537362); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537363, 39210, 39209); //@t
				var_0_bool->AddReply(537369, 39216, 39215); //@t
				return 0;
			}
			if(var_22_int == 39216) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537370); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537371, 39218, 39217); //@t
				var_0_bool->AddReply(537375, -1, 39221); //@t
				return 0;
			}
			if(var_22_int == 39218) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537372); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537373, -1, 39219); //@t
				var_0_bool->AddReply(537374, -1, 39220); //@t
				return 0;
			}
			if(var_22_int == 39210) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537364); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537365, 39212, 39211); //@t
				return 0;
			}
			if(var_22_int == 39212) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537366); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537367, -1, 39213); //@t
				var_0_bool->AddReply(537368, -1, 39214); //@t
				return 0;
			}
			if(var_22_int == 39199) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537353); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537354, 39201, 39200); //@t
				var_0_bool->AddReply(537358, -1, 39204); //@t
				return 0;
			}
			if(var_22_int == 39201) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537355); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537356, -1, 39202); //@t
				var_0_bool->AddReply(537357, -1, 39203); //@t
				return 0;
			}
			if(var_22_int == 39176) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537330); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537331, 39178, 39177); //@t
				var_0_bool->AddReply(537341, 39188, 39187); //@t
				var_0_bool->AddReply(537351, -1, 39197); //@t
				return 0;
			}
			if(var_22_int == 39188) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537342); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537343, 39190, 39189); //@t
				var_0_bool->AddReply(537349, -1, 39195); //@t
				return 0;
			}
			if(var_22_int == 39190) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537344); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537345, 39192, 39191); //@t
				var_0_bool->AddReply(537348, -1, 39194); //@t
				return 0;
			}
			if(var_22_int == 39192) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537346); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537347, -1, 39193); //@t
				return 0;
			}
			if(var_22_int == 39178) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537332); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537333, 39180, 39179); //@t
				var_0_bool->AddReply(537336, 39183, 39182); //@t
				return 0;
			}
			if(var_22_int == 39183) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537337); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537338, 39185, 39184); //@t
				return 0;
			}
			if(var_22_int == 39185) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537339); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537340, 43752, 39186); //@t
				return 0;
			}
			if(var_22_int == 43752) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(541583); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(541584, -1, 43753); //@t
				return 0;
			}
			if(var_22_int == 39180) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537334); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537335, -1, 39181); //@t
				return 0;
			}
			if(var_22_int == 39122) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537278); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537279, 39124, 39123); //@t
				var_0_bool->AddReply(537292, 39124, 39137); //@t
				bool var_969_bool;
				func_6125(var_1_bool);
				if(var_969_bool != 0)
					var_0_bool->AddReply(537293, 39140, 39139); //@t
				bool var_974_bool;
				func_6125(var_1_bool);
				if(var_974_bool != 0)
					var_0_bool->AddReply(537304, 39151, 39150); //@t
				var_0_bool->AddReply(537328, -1, 39174); //@t
				return 0;
			}
			if(var_22_int == 39151) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537305); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537306, 39153, 39152); //@t
				var_0_bool->AddReply(537318, 39165, 39164); //@t
				return 0;
			}
			if(var_22_int == 39165) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537319); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537320, -1, 39166); //@t
				var_0_bool->AddReply(537321, 39168, 39167); //@t
				return 0;
			}
			if(var_22_int == 39168) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537322); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537323, -1, 39169); //@t
				var_0_bool->AddReply(537324, 39171, 39170); //@t
				return 0;
			}
			if(var_22_int == 39171) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537325); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537326, -1, 39172); //@t
				return 0;
			}
			if(var_22_int == 39153) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537307); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537308, 39155, 39154); //@t
				var_0_bool->AddReply(537317, -1, 39163); //@t
				return 0;
			}
			if(var_22_int == 39155) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537309); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537310, 39157, 39156); //@t
				var_0_bool->AddReply(537313, 39160, 39159); //@t
				return 0;
			}
			if(var_22_int == 39160) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537314); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537315, -1, 39161); //@t
				var_0_bool->AddReply(537316, -1, 39162); //@t
				return 0;
			}
			if(var_22_int == 39157) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537311); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537312, -1, 39158); //@t
				return 0;
			}
			if(var_22_int == 39140) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537294); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537295, 39142, 39141); //@t
				var_0_bool->AddReply(537301, 39148, 39147); //@t
				return 0;
			}
			if(var_22_int == 39148) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537302); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537303, -1, 39149); //@t
				return 0;
			}
			if(var_22_int == 39142) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537297, 39144, 39143); //@t
				return 0;
			}
			if(var_22_int == 39144) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537298); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537299, -1, 39145); //@t
				var_0_bool->AddReply(537300, -1, 39146); //@t
				return 0;
			}
			if(var_22_int == 39124) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537280); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537281, 39126, 39125); //@t
				var_0_bool->AddReply(537288, 39133, 39132); //@t
				return 0;
			}
			if(var_22_int == 39133) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537289); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537290, 39126, 39134); //@t
				var_0_bool->AddReply(537291, -1, 39136); //@t
				return 0;
			}
			if(var_22_int == 39126) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537282); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537283, 39128, 39127); //@t
				var_0_bool->AddReply(537287, -1, 39131); //@t
				return 0;
			}
			if(var_22_int == 39128) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537284); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537285, -1, 39129); //@t
				var_0_bool->AddReply(537286, -1, 39130); //@t
				return 0;
			}
			if(var_22_int == 39086) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537243); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537244, 39088, 39087); //@t
				var_0_bool->AddReply(537254, 39099, 39098); //@t
				var_0_bool->AddReply(537264, 39109, 39108); //@t
				var_0_bool->AddReply(537275, -1, 39119); //@t
				var_0_bool->AddReply(537276, -1, 39120); //@t
				return 0;
			}
			if(var_22_int == 39109) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537265); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537266, 44319, 39110); //@t
				var_0_bool->AddReply(537267, 39112, 39111); //@t
				return 0;
			}
			if(var_22_int == 39112) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537268); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537269, 39114, 39113); //@t
				var_0_bool->AddReply(537273, -1, 39117); //@t
				return 0;
			}
			if(var_22_int == 39114) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537270); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537271, -1, 39115); //@t
				var_0_bool->AddReply(537272, -1, 39116); //@t
				return 0;
			}
			if(var_22_int == 44319) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(542040); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(542041, -1, 44320); //@t
				var_0_bool->AddReply(542042, -1, 44321); //@t
				return 0;
			}
			if(var_22_int == 39099) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537255); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537256, 39101, 39100); //@t
				var_0_bool->AddReply(537260, 39105, 39104); //@t
				return 0;
			}
			if(var_22_int == 39105) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537261); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537262, -1, 39106); //@t
				var_0_bool->AddReply(537263, -1, 39107); //@t
				return 0;
			}
			if(var_22_int == 39101) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537257); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537258, -1, 39102); //@t
				var_0_bool->AddReply(537259, -1, 39103); //@t
				return 0;
			}
			if(var_22_int == 39088) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537245); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537246, 39090, 39089); //@t
				var_0_bool->AddReply(537253, 39090, 39096); //@t
				return 0;
			}
			if(var_22_int == 39090) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537247); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537248, 39092, 39091); //@t
				var_0_bool->AddReply(537252, -1, 39095); //@t
				return 0;
			}
			if(var_22_int == 39092) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(537249); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537250, -1, 39093); //@t
				var_0_bool->AddReply(537251, -1, 39094); //@t
				return 0;
			}
			if(var_22_int == 45672) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(543216); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543220, -1, 45676); //@t
				var_0_bool->AddReply(543221, 45678, 45677); //@t
				return 0;
			}
			if(var_22_int == 45678) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(543222); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543223, -1, 45679); //@t
				var_0_bool->AddReply(543225, 45682, 45681); //@t
				return 0;
			}
			if(var_22_int == 45682) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(543226); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543227, -1, 45683); //@t
				var_0_bool->AddReply(543228, 45686, 45684); //@t
				return 0;
			}
			if(var_22_int == 45686) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(543230); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543231, -1, 45687); //@t
				var_0_bool->AddReply(543232, -1, 45688); //@t
				return 0;
			}
			if(var_22_int == 45690) {
				bool var_1291_bool = true;
				bool var_1292_bool = true;
				bool var_1293_bool;
				func_6169(var_1293_bool, var_1_bool);
				if(var_1293_bool != 1) {
					bool var_1295_bool;
					func_6189(var_1295_bool, var_1_bool);
					if(var_1295_bool != 1)
						var_1292_bool = false;
				}
				if(var_1292_bool != 1) {
					bool var_1297_bool;
					func_6179(var_1297_bool, var_1_bool);
					if(var_1297_bool != 1)
						var_1291_bool = false;
				}
				if(var_1291_bool != 0) {
					func_2447(var_23_int, "Neutral");
					var_0_bool->SetMessage(543234); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543235, -1, 45691); //@t
					var_0_bool->AddReply(543236, -1, 45692); //@t
					return 0;
				}
				bool var_1307_bool;
				func_6149(var_1307_bool, var_1_bool);
				if(var_1307_bool != 0) {
					func_2447(var_23_int, "Neutral");
					var_0_bool->SetMessage(543237); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(543238, -1, 45694); //@t
					var_0_bool->AddReply(543239, -1, 45695); //@t
					return 0;
				}
			}
			if(var_22_int == 45697) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(543241); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543242, -1, 45698); //@t
				var_0_bool->AddReply(543243, 45700, 45699); //@t
				return 0;
			}
			if(var_22_int == 45700) {
				func_2447(var_23_int, "Neutral");
				var_0_bool->SetMessage(543244); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543245, -1, 45701); //@t
				var_0_bool->AddReply(543246, -1, 45702); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_1337_bool;
			func_6563(var_1337_bool);
			if(var_1337_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9a6";
	
	}

}


// @pe
void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, string var_23_string)
{
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object)
{
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, int var_23_int, float var_24_float, float var_25_float)
{
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool, object var_22_object, int var_23_int, float var_24_float, float var_25_float, cvector var_26_cvector, cvector var_27_cvector)
{
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_529_bool;
		func_6563(var_529_bool);
		if(var_529_bool == 0) goto Label_15;
		func_5584("Neutral");
		@lshWaitForAnimEnd();
		break;
	Label_24:
	}
	if(false == 0) goto Label_24;
	return 0;
	
Label_15:
	@WaitForAnimEnd();
	@PlayAnimation("all", "idle");
}
EMIT "Return(); Pop(0)";


void func_5633(string var_61_string, int var_62_int, int var_63_int)
{
	bool var_65_bool;
	int var_67_int;
	var_62_int = var_67_int;
	int var_68_int;
	var_63_int = var_68_int;
	bool var_66_bool;
	func_5675(var_66_bool, var_67_int, var_68_int);
	if(var_66_bool != 0)
		@AddItem(var_65_bool, var_61_string, 0);
}


// @pe
void func_6149(bool var_117_bool, object var_118_object)
{
	object var_120_object;
	var_118_object = var_120_object;
	func_6289(var_120_object);
	bool var_119_bool;
	if(var_119_bool != 0) {
		var_117_bool = true;
		return 0;
	}
	var_117_bool = false;
}


void func_1544(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_5665(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5665(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_5644(string var_39_string, int var_40_int, int var_41_int, int var_42_int)
{
	int var_45_int; bool var_46_bool;
	int var_48_int;
	var_40_int = var_48_int;
	int var_49_int;
	var_41_int = var_49_int;
	bool var_47_bool;
	func_5675(var_47_bool, var_48_int, var_49_int);
	if(var_47_bool != 0) {
		@irand(var_45_int, var_42_int);
		@AddItem(var_46_bool, var_39_string, 0, (var_45_int + 1));
	}
}


// @pe
void func_6159(bool var_144_bool, object var_145_object)
{
	object var_147_object;
	var_145_object = var_147_object;
	func_6296(var_147_object);
	bool var_146_bool;
	if(var_146_bool != 0) {
		var_144_bool = true;
		return 0;
	}
	var_144_bool = false;
}


// @pe
void func_6169(bool var_123_bool, object var_124_object)
{
	object var_126_object;
	var_124_object = var_126_object;
	func_6303(var_126_object);
	bool var_125_bool;
	if(var_125_bool != 0) {
		var_123_bool = true;
		return 0;
	}
	var_123_bool = false;
}


void func_5659(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_5665(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_55_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_55_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_55_float;
}


// @pe
void func_6179(bool var_135_bool, object var_136_object)
{
	object var_138_object;
	var_136_object = var_138_object;
	func_6310(var_138_object);
	bool var_137_bool;
	if(var_137_bool != 0) {
		var_135_bool = true;
		return 0;
	}
	var_135_bool = false;
}


void func_1574(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_140_object)
{
	float var_150_float; cvector var_152_cvector; float var_153_float;
	cvector var_154_cvector;
	func_1544(var_153_float, var_154_cvector, 1.7453294);
	cvector var_149_cvector;
	var_154_cvector = var_149_cvector;
	if((var_149_cvector | var_149_cvector) < 2500.0) {
		cvector var_181_cvector;
		func_1544(var_153_float, var_181_cvector, 2.6179938);
		var_181_cvector = var_149_cvector;
		var_150_float = var_149_cvector | var_149_cvector;
		if(var_150_float < 2500.0) {
			var_186_float = sqrt(var_150_float);
			@Trace("Can't retreat, distance: " + var_186_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_189_float = GetByIndex(var_149_cvector, 0);
	var_190_float = GetByIndex(var_149_cvector, 2);
	@Rotate(var_189_float, var_190_float);
	cvector var_191_cvector;
	func_5318(var_191_cvector);
	@SetTimer(120, 0.5);
	
Label_1616:
	bool var_151_bool;
	@MovePoint((var_191_cvector + var_149_cvector), 1, var_151_bool);
	if(var_151_bool != 0) {
		if(var_140_object == null) {
			goto Label_1646;
		EMIT "GOTO 0x66c";

		Label_1646:
			for(;;) {
				return 10;
		}
			cvector var_197_cvector;
			func_1544(var_153_float, var_197_cvector, 2.6179938);
			var_197_cvector = var_152_cvector;
			if((var_152_cvector | var_152_cvector) >= 2500.0) {
				cvector var_201_cvector;
				func_5318(var_201_cvector);
				var_1_bool = var_201_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1616; //@nz

	}
}


void func_5675(bool var_47_bool, int var_48_int, int var_49_int)
{
	int var_51_int;
	@irand(var_51_int, var_49_int);
	var_47_bool = var_51_int < var_48_int;
}


// @pe
void func_6189(bool var_129_bool, object var_130_object)
{
	object var_132_object;
	var_130_object = var_132_object;
	func_6317(var_132_object);
	bool var_131_bool;
	if(var_131_bool != 0) {
		var_129_bool = true;
		return 0;
	}
	var_129_bool = false;
}


// @pe
void func_5680(float var_85_float, cvector var_86_cvector, cvector var_87_cvector)
{
	var_92_float = sqrt((var_86_cvector | var_86_cvector) * (var_87_cvector | var_87_cvector));
	var_85_float = (var_86_cvector | var_87_cvector) / var_92_float;
}


void func_55(void)
{
	bool var_105_bool;
	func_5431(var_105_bool);
	if(!var_105_bool) //@nz
		func_6055();
}


// @pe
void func_6199(bool var_171_bool, object var_172_object)
{
	object var_174_object;
	var_172_object = var_174_object;
	func_6324(var_174_object);
	bool var_173_bool;
	if(var_173_bool != 0) {
		var_171_bool = true;
		return 0;
	}
	var_171_bool = false;
}


// @pe
void func_5688(float var_75_float, cvector var_76_cvector, cvector var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_75_float = (var_78_float * var_79_float) + (var_81_float * var_82_float);
}


void func_573(void)
{
	int var_145_int; int var_146_int; bool var_147_bool; float var_148_float; bool var_149_bool;
	@WaitForAnimEnd();
	bool var_150_bool;
	func_5431(var_150_bool);
	if(!var_150_bool) //@nz
		return 14;
	int var_152_int;
	func_5900(var_152_int);
	int var_143_int;
	var_152_int = var_143_int;
	int var_144_int = 0;
	
	for(;;) {
		bool var_165_bool = false;
		if(var_144_int < 5) {
			bool var_168_bool;
			func_5431(var_168_bool);
			if(var_168_bool != 0)
				var_165_bool = true;
		}
		if(var_165_bool != 0) {
			@irand(var_145_int, 3);
			if(var_145_int == 0) {
				if(var_143_int == 0) goto Label_620;
				@irand(var_146_int, var_143_int);
				string var_174_string; int var_175_int;
				var_146_int = var_175_int;
				func_5893(var_174_string, var_175_int);
				@PlayAnimation("all", var_174_string);
				@WaitForAnimEnd(var_147_bool);
				if(!var_147_bool) { //@nz
				} else {
			} else {
			if(var_145_int == 1) {
				@rand(var_148_float, 4);
				@Sleep((var_148_float + 1), var_149_bool);
				if(!var_149_bool) { //@nz
					goto Label_649;
				}
			} else if(var_144_int != 0) {
				goto Label_649;
			}
			}
					bool var_177_bool;
					func_652(var_177_bool);
					var_178_bool = !var_177_bool; //@nz
					if(var_178_bool == 0) goto Label_644;
			}
		}
	Label_649:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_644:
		@ResetAAS();
		var_144_int += 1;
	}
	
}


// @pe
void func_6209(bool var_177_bool, object var_178_object)
{
	object var_180_object;
	var_178_object = var_180_object;
	func_6331(var_180_object);
	bool var_179_bool;
	if(var_179_bool != 0) {
		var_177_bool = true;
		return 0;
	}
	var_177_bool = false;
}


// @pe
void func_5697(float var_84_float, cvector var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_84_float = sqrt((var_86_float * var_87_float) + (var_89_float * var_90_float));
}


// @pe
void func_5707(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	cvector var_77_cvector;
	var_74_cvector = var_77_cvector;
	float var_75_float;
	func_5688(var_75_float, var_76_cvector, var_77_cvector);
	float var_84_float; cvector var_85_cvector;
	var_73_cvector = var_85_cvector;
	func_5697(var_84_float, var_85_cvector);
	float var_93_float; cvector var_94_cvector;
	var_74_cvector = var_94_cvector;
	func_5697(var_93_float, var_94_cvector);
	var_72_float = var_75_float / (var_84_float * var_93_float);
}


// @pe
void func_6219(bool var_94_bool, object var_95_object)
{
	object var_97_object;
	var_95_object = var_97_object;
	func_6338(var_97_object);
	bool var_96_bool;
	if(var_96_bool != 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


// @pe
void func_6229(bool var_192_bool, object var_193_object)
{
	object var_195_object;
	var_193_object = var_195_object;
	func_6345(var_195_object);
	bool var_194_bool;
	if(var_194_bool != 0) {
		var_192_bool = true;
		return 0;
	}
	var_192_bool = false;
}


void func_5724(int var_69_int, string var_70_string)
{
	int var_72_int;
	@GetVariable(var_70_string, var_72_int);
	var_72_int = var_69_int;
}


// @pe
void func_6239(bool var_105_bool, object var_106_object)
{
	object var_108_object;
	var_106_object = var_108_object;
	func_6352(var_108_object);
	bool var_107_bool;
	if(var_107_bool != 0) {
		var_105_bool = true;
		return 0;
	}
	var_105_bool = false;
}


void func_5729(object var_49_object, string var_50_string)
{
	object var_53_object;
	@GetMainOutdoorScene(var_53_object);
	object var_54_object;
	@AddBlankActor(var_54_object, var_53_object, var_50_string, (var_50_string + ".bin"));
	var_54_object = var_49_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1124(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_6249(bool var_200_bool, object var_201_object)
{
	object var_203_object;
	var_201_object = var_203_object;
	func_6359(var_203_object);
	bool var_202_bool;
	if(var_202_bool != 0) {
		var_200_bool = true;
		return 0;
	}
	var_200_bool = false;
}


void func_5740(int var_32_int)
{
	float var_34_float;
	@GetGameTime(var_34_float);
	var_32_int = 1 + (var_34_float / 24);
}


// @pe
void func_6259(bool var_206_bool, object var_207_object)
{
	object var_209_object;
	var_207_object = var_209_object;
	func_6366(var_209_object);
	bool var_208_bool;
	if(var_208_bool != 0) {
		var_206_bool = true;
		return 0;
	}
	var_206_bool = false;
}


void func_1140(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_5323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_5749(int var_304_int)
{
	float var_306_float;
	@GetGameTime(var_306_float);
	int var_307_int;
	var_306_float = var_307_int;
	var_304_int = var_307_int % 24;
}


// @pe
void func_6269(bool var_299_bool, object var_300_object)
{
	object var_302_object;
	var_300_object = var_302_object;
	func_6373(var_302_object);
	bool var_301_bool;
	if(var_301_bool != 0) {
		var_299_bool = true;
		return 0;
	}
	var_299_bool = false;
}


void func_1156(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_5665(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5665(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


// @pe
void func_5765(bool var_26_bool, object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		bool var_31_bool; object var_32_object;
		var_27_object = var_32_object;
		func_6056(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x16a3";
	}
	if(var_28_string == "player_shot") {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_6069(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x16a3";
	}
	if(var_28_string == "battle") {
		bool var_54_bool; object var_55_object;
		var_27_object = var_55_object;
		func_6092(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = false;
}


// @pe
void func_6279(bool var_323_bool, object var_324_object)
{
	object var_326_object;
	var_324_object = var_326_object;
	func_6394(var_326_object);
	bool var_325_bool;
	if(var_325_bool != 0) {
		var_323_bool = true;
		return 0;
	}
	var_323_bool = false;
}


void func_652(bool var_177_bool)
{
	var_177_bool = true;
}


void func_654(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_6289(bool var_119_bool)
{
	int var_121_int;
	func_5740(var_121_int);
	var_119_bool = var_121_int == 1;
}


void func_659(bool var_0_bool, object var_83_object)
{
	var_0_bool = var_83_object;
	bool var_90_bool;
	func_710(var_90_bool);
	cvector var_88_cvector;
	@GetDirection(var_88_cvector);
	cvector var_98_cvector;
	func_5323(var_98_cvector, var_0_bool);
	cvector var_89_cvector;
	var_98_cvector = var_89_cvector;
	float var_104_float; cvector var_105_cvector; cvector var_106_cvector;
	var_88_cvector = var_105_cvector;
	var_89_cvector = var_106_cvector;
	func_5707(var_104_float, var_105_cvector, var_106_cvector);
	if(var_104_float < 0) {
		func_5420(var_0_bool);
		var_90_bool = true;
	} else {
		@Sleep(1.5, var_90_bool);
	}
	if(var_90_bool != 0) {
		func_5420(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


// @pe
void func_6296(bool var_146_bool)
{
	int var_148_int;
	func_5740(var_148_int);
	var_146_bool = var_148_int == 2;
}


// @pe
void func_6303(bool var_125_bool)
{
	int var_127_int;
	func_5740(var_127_int);
	var_125_bool = var_127_int == 3;
}


void func_1186(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_112_object)
{
	float var_122_float; cvector var_124_cvector; float var_125_float;
	cvector var_126_cvector;
	func_1156(var_125_float, var_126_cvector, 1.7453294);
	cvector var_121_cvector;
	var_126_cvector = var_121_cvector;
	if((var_121_cvector | var_121_cvector) < 2500.0) {
		cvector var_158_cvector;
		func_1156(var_125_float, var_158_cvector, 2.6179938);
		var_158_cvector = var_121_cvector;
		var_122_float = var_121_cvector | var_121_cvector;
		if(var_122_float < 2500.0) {
			var_163_float = sqrt(var_122_float);
			@Trace("Can't retreat, distance: " + var_163_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_166_float = GetByIndex(var_121_cvector, 0);
	var_167_float = GetByIndex(var_121_cvector, 2);
	@Rotate(var_166_float, var_167_float);
	cvector var_168_cvector;
	func_5318(var_168_cvector);
	@SetTimer(120, 0.5);
	
Label_1228:
	bool var_123_bool;
	@MovePoint((var_168_cvector + var_121_cvector), 1, var_123_bool);
	if(var_123_bool != 0) {
		if(var_112_object == null) {
			goto Label_1258;
		EMIT "GOTO 0x4e8";

		Label_1258:
			for(;;) {
				return 10;
		}
			cvector var_176_cvector;
			func_1156(var_125_float, var_176_cvector, 2.6179938);
			var_176_cvector = var_124_cvector;
			if((var_124_cvector | var_124_cvector) >= 2500.0) {
				cvector var_180_cvector;
				func_5318(var_180_cvector);
				var_1_bool = var_180_cvector + var_124_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1228; //@nz

	}
}


void func_1699(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_5797(object var_60_object, string var_61_string)
{
	if(var_61_string == "unholster") {
		object var_64_object;
		var_60_object = var_64_object;
		func_6061(var_64_object);
	} else if(var_61_string == "player_shot") {
			object var_139_object;
			var_60_object = var_139_object;
			func_6084(var_139_object);
	}
Label_5821:
	for(;;) {

	}
	
	if(!(var_61_string == "battle")) goto Label_5821;
	object var_207_object;
	var_60_object = var_207_object;
	func_6099(var_207_object);
}


// @pe
void func_6310(bool var_137_bool)
{
	int var_139_int;
	func_5740(var_139_int);
	var_137_bool = var_139_int == 4;
}


// @pe
void func_6317(bool var_131_bool)
{
	int var_133_int;
	func_5740(var_133_int);
	var_131_bool = var_133_int == 5;
}


void func_1715(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_5323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_6324(bool var_173_bool)
{
	int var_175_int;
	func_5740(var_175_int);
	var_173_bool = var_175_int == 6;
}


// @pe
void func_6331(bool var_179_bool)
{
	int var_181_int;
	func_5740(var_181_int);
	var_179_bool = var_181_int == 7;
}


void func_5822(bool var_23_bool, object var_24_object)
{
	bool var_26_bool;
	bool var_27_bool = false;
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_6056(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		func_5338(var_32_bool, var_33_object);
		if(var_32_bool != 0)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_33_object->IsWeaponHolstered(var_26_bool);
		if(!var_26_bool) //@nz
			var_23_bool = true;
	}
	var_23_bool = false;
}


// @pe
void func_6338(bool var_96_bool)
{
	int var_98_int;
	func_5740(var_98_int);
	var_96_bool = var_98_int == 8;
}


void func_1731(bool var_0_bool, int var_47_int, object var_48_object)
{
	var_0_bool = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_5436(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_106_int;
	func_6557(var_106_int);
	var_54_object->SetNPCName(var_106_int);
	int var_107_int;
	func_6555(var_107_int);
	var_54_object->SetNPCDescription(var_107_int);
	string var_108_string;
	func_6559(var_108_string);
	var_54_object->SetPhoto(var_108_string);
	string var_109_string;
	func_6561(var_109_string);
	var_54_object->SetPhoto2(var_109_string);
	int var_110_int;
	func_6405(var_110_int);
	var_54_object->SetPlayerName(var_110_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	object var_119_object; object var_120_object;
	var_48_object = var_119_object;
	var_54_object = var_120_object;
	TaskCall(9);
	func_1805(var_121_object, var_122_object, var_123_string, var_124_bool, var_119_object, var_120_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_484_bool = !var_57_bool; //@nz
		if(var_484_bool == 0) goto Label_1794;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_1794:
	object var_485_object;
	var_48_object = var_485_object;
	func_5505();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_710(bool var_0_bool)
{
	func_5615(var_0_bool);
}


void func_5318(cvector var_94_cvector)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
}


// @pe
void func_6345(bool var_194_bool)
{
	int var_196_int;
	func_5740(var_196_int);
	var_194_bool = var_196_int == 9;
}


void func_5323(cvector var_79_cvector, object var_80_object)
{
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	cvector var_84_cvector;
	var_80_object->GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
}


// @pe
void func_6352(bool var_107_bool)
{
	int var_109_int;
	func_5740(var_109_int);
	var_107_bool = var_109_int == 10;
}


void func_5330(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


// @pe
void func_5845(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_6061(var_40_object);
}


// @pe
void func_6359(bool var_202_bool)
{
	int var_204_int;
	func_5740(var_204_int);
	var_202_bool = var_204_int == 11;
}


void func_5338(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
}


// @pe
void func_5851(object var_25_object)
{
	bool var_26_bool; object var_27_object;
	func_5338(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		object var_30_object;
		func_5659(var_30_object);
		@ReportReputationChange(var_27_object, var_30_object, -0.05);
	}
}


// @pe
void func_6366(bool var_208_bool)
{
	int var_210_int;
	func_5740(var_210_int);
	var_208_bool = var_210_int == 12;
}


void func_5343(bool var_51_bool, object var_52_object, string var_53_string)
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


// @pe
void func_6373(bool var_301_bool)
{
	bool var_303_bool = false;
	int var_304_int;
	func_5749(var_304_int);
	if(var_304_int >= 0) {
		int var_311_int;
		func_5749(var_311_int);
		if(var_311_int < 12)
			var_303_bool = true;
	}
	if(var_303_bool != 0) {
		var_301_bool = true;
		return 0;
	}
	var_301_bool = false;
}


void func_5864(bool var_23_bool, string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_6105(var_31_object);
		var_30_bool = var_23_bool;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = false;
}


void func_5355(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_5360(bool var_33_bool, object var_34_object)
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
		func_5355(var_44_bool, var_45_object);
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


void func_5880(string var_34_string)
{
	object var_36_object;
	if(var_34_string == "heal") {
		@FindActor(var_36_object, "player");
		object var_40_object;
		var_36_object = var_40_object;
		func_6108();
		var_36_object = null;
	}
}


// @pe
void func_6394(bool var_325_bool)
{
	int var_327_int;
	func_5749(var_327_int);
	if(var_327_int >= 12)
		var_325_bool = true;
	var_325_bool = false;
}


void func_251(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
}


void func_259(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
}


void func_5893(string var_158_string, int var_159_int)
{
	string var_161_string = "idle";
	if(var_159_int != 0)
		var_161_string += var_159_int;
	var_161_string = var_158_string;
}


void func_6405(int var_110_int)
{
	int var_112_int;
	@GetVariable("branch", var_112_int);
	if(var_112_int == 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x1914";
	}
	if(var_112_int == 1) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
}


void func_5900(int var_152_int)
{
	int var_155_int; bool var_156_bool;
	var_155_int = 0;
	
	for(;;) {
		string var_158_string; int var_159_int;
		var_155_int = var_159_int;
		func_5893(var_158_string, var_159_int);
		@HasAnimation(var_156_bool, "all", var_158_string);
		if(!var_156_bool) //@nz
			break;
		var_155_int += 1;
	}
	var_155_int = var_152_int;
}


// @pe
void func_1805(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_119_object, object var_120_object)
{
	var_0_bool = var_120_object;
	var_1_bool = var_119_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_126_bool;
		func_6137(var_1_bool);
		if(var_126_bool != 0) {
			func_2447(var_120_object, "Neutral");
			var_0_bool->SetMessage(543209); //@t
			var_0_bool->ClearReplies(); //@t
			bool var_152_bool = true;
			bool var_153_bool;
			func_6219(var_153_bool, var_1_bool);
			if(var_153_bool != 1) {
				bool var_164_bool;
				func_6239(var_164_bool, var_1_bool);
				if(var_164_bool != 1)
					var_152_bool = false;
			}
			if(var_152_bool != 0)
				var_0_bool->AddReply(543240, 45697, 45696); //@t
			bool var_173_bool = true;
			bool var_174_bool = true;
			bool var_175_bool = true;
			bool var_176_bool;
			func_6149(var_176_bool, var_1_bool);
			if(var_176_bool != 1) {
				bool var_182_bool;
				func_6169(var_182_bool, var_1_bool);
				if(var_182_bool != 1)
					var_175_bool = false;
			}
			if(var_175_bool != 1) {
				bool var_188_bool;
				func_6189(var_188_bool, var_1_bool);
				if(var_188_bool != 1)
					var_174_bool = false;
			}
			if(var_174_bool != 1) {
				bool var_194_bool;
				func_6179(var_194_bool, var_1_bool);
				if(var_194_bool != 1)
					var_173_bool = false;
			}
			if(var_173_bool != 0)
				var_0_bool->AddReply(543233, 45690, 45689); //@t
			bool var_203_bool;
			func_6159(var_203_bool, var_1_bool);
			if(var_203_bool != 0)
				var_0_bool->AddReply(543214, 45672, 45670); //@t
			bool var_212_bool = true;
			bool var_213_bool = true;
			bool var_214_bool = true;
			bool var_215_bool;
			func_6149(var_215_bool, var_1_bool);
			if(var_215_bool != 1) {
				bool var_217_bool;
				func_6159(var_217_bool, var_1_bool);
				if(var_217_bool != 1)
					var_214_bool = false;
			}
			if(var_214_bool != 1) {
				bool var_219_bool;
				func_6169(var_219_bool, var_1_bool);
				if(var_219_bool != 1)
					var_213_bool = false;
			}
			if(var_213_bool != 1) {
				bool var_221_bool;
				func_6179(var_221_bool, var_1_bool);
				if(var_221_bool != 1)
					var_212_bool = false;
			}
			if(var_212_bool != 0)
				var_0_bool->AddReply(543210, -1, 45666); //@t
			bool var_226_bool = true;
			bool var_227_bool = true;
			bool var_228_bool;
			func_6189(var_228_bool, var_1_bool);
			if(var_228_bool != 1) {
				bool var_230_bool;
				func_6199(var_230_bool, var_1_bool);
				if(var_230_bool != 1)
					var_227_bool = false;
			}
			if(var_227_bool != 1) {
				bool var_236_bool;
				func_6209(var_236_bool, var_1_bool);
				if(var_236_bool != 1)
					var_226_bool = false;
			}
			if(var_226_bool != 0)
				var_0_bool->AddReply(543211, -1, 45667); //@t
			bool var_245_bool = true;
			bool var_246_bool = true;
			bool var_247_bool = true;
			bool var_248_bool = true;
			bool var_249_bool;
			func_6219(var_249_bool, var_1_bool);
			if(var_249_bool != 1) {
				bool var_251_bool;
				func_6229(var_251_bool, var_1_bool);
				if(var_251_bool != 1)
					var_248_bool = false;
			}
			if(var_248_bool != 1) {
				bool var_257_bool;
				func_6239(var_257_bool, var_1_bool);
				if(var_257_bool != 1)
					var_247_bool = false;
			}
			if(var_247_bool != 1) {
				bool var_259_bool;
				func_6249(var_259_bool, var_1_bool);
				if(var_259_bool != 1)
					var_246_bool = false;
			}
			if(var_246_bool != 1) {
				bool var_265_bool;
				func_6259(var_265_bool, var_1_bool);
				if(var_265_bool != 1)
					var_245_bool = false;
			}
			if(var_245_bool != 0)
				var_0_bool->AddReply(543212, -1, 45668); //@t
			bool var_274_bool = true;
			bool var_275_bool = true;
			bool var_276_bool = true;
			bool var_277_bool = true;
			bool var_278_bool;
			func_6149(var_278_bool, var_1_bool);
			if(var_278_bool != 1) {
				bool var_280_bool;
				func_6159(var_280_bool, var_1_bool);
				if(var_280_bool != 1)
					var_277_bool = false;
			}
			if(var_277_bool != 1) {
				bool var_282_bool;
				func_6179(var_282_bool, var_1_bool);
				if(var_282_bool != 1)
					var_276_bool = false;
			}
			if(var_276_bool != 1) {
				bool var_284_bool;
				func_6189(var_284_bool, var_1_bool);
				if(var_284_bool != 1)
					var_275_bool = false;
			}
			if(var_275_bool != 1) {
				bool var_286_bool;
				func_6209(var_286_bool, var_1_bool);
				if(var_286_bool != 1)
					var_274_bool = false;
			}
			if(var_274_bool != 0)
				var_0_bool->AddReply(543213, -1, 45669); //@t
			bool var_291_bool = true;
			bool var_292_bool = true;
			bool var_293_bool = true;
			bool var_294_bool = true;
			bool var_295_bool = true;
			bool var_296_bool = true;
			bool var_297_bool;
			func_6169(var_297_bool, var_1_bool);
			if(var_297_bool != 1) {
				bool var_299_bool;
				func_6199(var_299_bool, var_1_bool);
				if(var_299_bool != 1)
					var_296_bool = false;
			}
			if(var_296_bool != 1) {
				bool var_301_bool;
				func_6229(var_301_bool, var_1_bool);
				if(var_301_bool != 1)
					var_295_bool = false;
			}
			if(var_295_bool != 1) {
				bool var_303_bool;
				func_6259(var_303_bool, var_1_bool);
				if(var_303_bool != 1)
					var_294_bool = false;
			}
			if(var_294_bool != 1) {
				bool var_305_bool;
				func_6159(var_305_bool, var_1_bool);
				if(var_305_bool != 1)
					var_293_bool = false;
			}
			if(var_293_bool != 1) {
				bool var_307_bool;
				func_6219(var_307_bool, var_1_bool);
				if(var_307_bool != 1)
					var_292_bool = false;
			}
			if(var_292_bool != 1) {
				bool var_309_bool;
				func_6239(var_309_bool, var_1_bool);
				if(var_309_bool != 1)
					var_291_bool = false;
			}
			if(var_291_bool != 0)
				var_0_bool->AddReply(543215, -1, 45671); //@t
			bool var_314_bool = true;
			bool var_315_bool = true;
			bool var_316_bool = true;
			bool var_317_bool;
			func_6249(var_317_bool, var_1_bool);
			if(var_317_bool != 1) {
				bool var_319_bool;
				func_6229(var_319_bool, var_1_bool);
				if(var_319_bool != 1)
					var_316_bool = false;
			}
			if(var_316_bool != 1) {
				bool var_321_bool;
				func_6219(var_321_bool, var_1_bool);
				if(var_321_bool != 1)
					var_315_bool = false;
			}
			if(var_315_bool != 1) {
				bool var_323_bool;
				func_6209(var_323_bool, var_1_bool);
				if(var_323_bool != 1)
					var_314_bool = false;
			}
			if(var_314_bool != 0)
				var_0_bool->AddReply(543219, -1, 45675); //@t
		} else {
					func_2447(var_120_object, "Neutral");
					var_0_bool->SetMessage(537240); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(537241, -1, 39084); //@t
					bool var_351_bool = false;
					bool var_352_bool;
					func_6125(var_1_bool);
					if(var_352_bool != 0) {
						bool var_358_bool;
						func_6149(var_358_bool, var_1_bool);
						if(var_358_bool != 0)
							var_351_bool = true;
					}
					if(var_351_bool != 0)
						var_0_bool->AddReply(537242, 39086, 39085); //@t
					bool var_363_bool;
					func_6149(var_363_bool, var_1_bool);
					if(var_363_bool != 0)
						var_0_bool->AddReply(537277, 39122, 39121); //@t
					bool var_368_bool;
					func_6159(var_368_bool, var_1_bool);
					if(var_368_bool != 0)
						var_0_bool->AddReply(537329, 39176, 39175); //@t
					bool var_373_bool = false;
					bool var_374_bool;
					func_6169(var_374_bool, var_1_bool);
					if(var_374_bool != 0) {
						bool var_376_bool;
						func_6269(var_376_bool, var_1_bool);
						if(var_376_bool != 0)
							var_373_bool = true;
					}
					if(var_373_bool != 0)
						var_0_bool->AddReply(537352, 39199, 39198); //@t
					bool var_394_bool = false;
					bool var_395_bool = false;
					bool var_396_bool;
					func_6125(var_1_bool);
					if(var_396_bool != 0) {
						bool var_398_bool;
						func_6169(var_398_bool, var_1_bool);
						if(var_398_bool != 0)
							var_395_bool = true;
					}
					if(var_395_bool != 0) {
						bool var_400_bool;
						func_6279(var_400_bool, var_1_bool);
						if(var_400_bool != 0)
							var_394_bool = true;
					}
					if(var_394_bool != 0)
						var_0_bool->AddReply(537359, 39206, 39205); //@t
					bool var_410_bool = false;
					bool var_411_bool;
					func_6179(var_411_bool, var_1_bool);
					if(var_411_bool != 0) {
						bool var_413_bool;
						func_6269(var_413_bool, var_1_bool);
						if(var_413_bool != 0)
							var_410_bool = true;
					}
					if(var_410_bool != 0)
						var_0_bool->AddReply(537380, 39227, 39226); //@t
					bool var_418_bool = false;
					bool var_419_bool;
					func_6179(var_419_bool, var_1_bool);
					if(var_419_bool != 0) {
						bool var_421_bool;
						func_6279(var_421_bool, var_1_bool);
						if(var_421_bool != 0)
							var_418_bool = true;
					}
					if(var_418_bool != 0)
						var_0_bool->AddReply(537390, 39237, 39236); //@t
					bool var_426_bool;
					func_6189(var_426_bool, var_1_bool);
					if(var_426_bool != 0)
						var_0_bool->AddReply(537400, 39247, 39246); //@t
					bool var_431_bool = false;
					bool var_432_bool;
					func_6125(var_1_bool);
					if(var_432_bool != 0) {
						bool var_434_bool;
						func_6199(var_434_bool, var_1_bool);
						if(var_434_bool != 0)
							var_431_bool = true;
					}
					if(var_431_bool != 0)
						var_0_bool->AddReply(537423, 39270, 39269); //@t
					bool var_439_bool;
					func_6209(var_439_bool, var_1_bool);
					if(var_439_bool != 0)
						var_0_bool->AddReply(537433, 39280, 39279); //@t
					bool var_444_bool = false;
					bool var_445_bool;
					func_6125(var_1_bool);
					if(var_445_bool != 0) {
						bool var_447_bool;
						func_6219(var_447_bool, var_1_bool);
						if(var_447_bool != 0)
							var_444_bool = true;
					}
					if(var_444_bool != 0)
						var_0_bool->AddReply(537451, 39299, 39298); //@t
					bool var_452_bool = false;
					bool var_453_bool;
					func_6125(var_1_bool);
					if(var_453_bool != 0) {
						bool var_455_bool;
						func_6229(var_455_bool, var_1_bool);
						if(var_455_bool != 0)
							var_452_bool = true;
					}
					if(var_452_bool != 0)
						var_0_bool->AddReply(537460, 39308, 39307); //@t
					bool var_460_bool = false;
					bool var_461_bool;
					func_6125(var_1_bool);
					if(var_461_bool != 0) {
						bool var_463_bool;
						func_6249(var_463_bool, var_1_bool);
						if(var_463_bool != 0)
							var_460_bool = true;
					}
					if(var_460_bool != 0)
						var_0_bool->AddReply(537473, 39321, 39320); //@t
					bool var_468_bool;
					func_6249(var_468_bool, var_1_bool);
					if(var_468_bool != 0)
						var_0_bool->AddReply(537483, 39331, 39330); //@t
					bool var_473_bool;
					func_6259(var_473_bool, var_1_bool);
					if(var_473_bool != 0)
						var_0_bool->AddReply(537493, 39341, 39340); //@t
					var_0_bool->AddReply(537503, -1, 39350); //@t
					var_0_bool->AddReply(537504, -1, 39351); //@t
		}
	}
	for(;;) {
		bool var_328_bool;
		func_6563(var_328_bool);
		if(var_328_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_5584(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_2446;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2446:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x711";


void func_276(bool var_2_bool, object var_23_object)
{
	bool var_28_bool; object var_29_object;
	func_5396(var_28_bool, var_29_object);
	if(!var_28_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_26_bool;
	@IsPlayerActor(var_29_object, var_26_bool);
	if(!var_26_bool) //@nz
		return 4;
	int var_65_int; object var_66_object;
	var_23_object = var_66_object;
	func_5917(var_66_object);
	int var_27_int;
	var_65_int = var_27_int;
	if(var_27_int > 0) {
		if(var_27_int > 1)
			func_259(var_27_int);
		object var_82_object;
		var_23_object = var_82_object;
		func_5926(var_82_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_5396(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_5360(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_5343(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


void func_6422(int var_40_int)
{
	int var_42_int;
	@GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
}


void func_6428(float var_68_float)
{
	object var_71_object;
	@FindActor(var_71_object, "player");
	if(!var_71_object) //@nz
		var_68_float = 0;
	float var_72_float;
	var_71_object->GetProperty("reputation", var_72_float);
	var_72_float = var_68_float;
}
EMIT "Stack[-2] = 0";


// @pe
void func_5917(int var_65_int)
{
	bool var_67_bool;
	func_6613(var_67_bool);
	if(var_67_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
}


void func_1311(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_5926(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	TaskCall(3);
	func_659(var_84_object, var_83_object);
	TaskReturn();
}


// @pe
void func_6442(object var_39_object)
{
	int var_40_int;
	func_6422(var_40_int);
	if(var_40_int == 1)
		@WorkWithCorpse(var_39_object);
	else
		@Barter(var_39_object);
	
}


void func_5420(object var_98_object)
{
	cvector var_102_cvector;
	var_98_object->GetPosition(var_102_cvector);
	cvector var_103_cvector;
	@GetPosition(var_103_cvector);
	cvector var_104_cvector = var_102_cvector - var_103_cvector;
	var_105_float = GetByIndex(var_104_cvector, 0);
	var_106_float = GetByIndex(var_104_cvector, 2);
	@RotateAsync(var_105_float, var_106_float);
}


// @pe
void func_5934(int var_34_int, object var_35_object)
{
	object var_37_object;
	var_35_object = var_37_object;
	bool var_36_bool;
	func_5396(var_36_bool, var_37_object);
	if(var_36_bool != 0)
		var_34_int = 2;
	else
		var_34_int = 0;
	
}


void func_1327(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_5323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_5431(bool var_105_bool)
{
	bool var_107_bool;
	@IsLoaded(var_107_bool);
	var_107_bool = var_105_bool;
}


// @pe
void func_5944(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
}


void func_6455(bool var_24_bool)
{
	@ClearSubContainer(0);
	int var_32_int;
	func_5740(var_32_int);
	int var_30_int;
	var_32_int = var_30_int;
	if(var_24_bool != 0) {
		func_5644("alpha_pills", 1, 2, 4);
		func_5644("meradorm", 2, 3, 3);
		if(var_30_int >= 3)
			func_5633("beta_pills", 1, 4);
		if(var_30_int >= 8) {
			func_5644("monomicin", 1, 2, 2);
		} else {
				if(var_30_int >= 4)
					func_5633("monomicin", 1, 2);
				func_5633("lockpick", 1, 4);
				func_5633("rifle_ammo", 1, 2);
				func_5633("revolver_ammo", 1, 2);
				func_5644("samopal_ammo", 1, 2, 2);
				if(var_30_int >= 8)
					func_5644("monomicin", 1, 2, 2);
			}
			} else if(var_30_int >= 4) {
		func_5633("monomicin", 1, 2);
			}
	
}


void func_316(bool var_0_bool, bool var_1_bool)
{
	float var_115_float; cvector var_116_cvector; cvector var_117_cvector; bool var_118_bool; object var_119_object; bool var_120_bool;
	@rand(var_115_float, 0.5);
	@Sleep(var_115_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_328:
				@GetPosition(var_117_cvector);
				float var_124_float;
				func_375(var_124_float);
				@GetRandomPFPointInCircle(var_116_cvector, var_117_cvector, var_124_float, var_118_bool);
				if(var_118_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_328;
			}
				var_1_bool = false;
		}
		}
		goto Label_344;

	Label_344:
		object var_128_object; cvector var_129_cvector;
		var_116_cvector = var_129_cvector;
		func_403(var_128_object, var_129_cvector);
		var_128_object = var_119_object;
		if(var_119_object != null) {
			@RotatePath(var_119_object, var_120_bool);
			if(var_120_bool != 0) {
				bool var_134_bool;
				func_401(var_134_bool);
				@FollowPath(var_119_object, var_134_bool, var_120_bool);
				var_119_object = null;
				if(var_120_bool != 0) {
					TaskCall(2);
					func_573();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_119_object = null;
	}
	
}


void func_5436(bool var_58_bool, object var_59_object, float var_60_float)
{
	cvector var_71_cvector; bool var_78_bool;
	var_59_object->GetPosition(var_71_cvector);
	float var_70_float;
	var_59_object->GetEyesHeight(var_70_float);
	var_79_float = GetByIndex(var_71_cvector, 1);
	SetByIndex(var_71_cvector, 1) = (var_79_float + var_70_float);
	cvector var_72_cvector;
	@GetPosition(var_72_cvector);
	@GetEyesHeight(var_70_float);
	var_80_float = GetByIndex(var_72_cvector, 1);
	SetByIndex(var_72_cvector, 1) = (var_80_float + var_70_float);
	cvector var_73_cvector = var_71_cvector - var_72_cvector;
	var_81_float = GetByIndex(var_73_cvector, 1);
	SetByIndex(var_73_cvector, 1) = (float)0;
	var_83_float = sqrt(var_73_cvector | var_73_cvector);
	var_73_cvector /= var_83_float;
	cvector var_74_cvector = -var_73_cvector;
	cvector var_85_cvector;
	func_5665(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_75_cvector = ((var_73_cvector * var_60_float) + (var_85_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_77_bool;
	@IsOverrideActive(var_77_bool);
	if(var_77_bool != 0)
		var_58_bool = false;
	@StopWorld();
	@CameraTransit((var_72_cvector + var_75_cvector), var_74_cvector, true);
	var_99_float = GetByIndex(var_75_cvector, 0);
	var_100_float = GetByIndex(var_75_cvector, 2);
	@Rotate(var_99_float, var_100_float);
	bool var_101_bool;
	func_6563(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_5499;
		@LookAsyncCamera("head");
	}
Label_5499:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


// @pe
void func_5952(int var_74_int, object var_75_object)
{
	object var_78_object;
	var_75_object = var_78_object;
	bool var_77_bool;
	func_5396(var_77_bool, var_78_object);
	if(var_77_bool != 0)
		var_74_int = 2;
	else
		var_74_int = 0;
	
}


void func_1350(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_5665(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5665(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


// @pe
void func_5962(object var_111_object)
{
	object var_112_object;
	var_111_object = var_112_object;
	TaskCall(5);
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
}


void func_5970(bool var_31_bool, object var_32_object, object var_33_object, float var_34_float)
{
	object var_40_object;
	var_33_object = var_40_object;
	bool var_39_bool;
	func_5343(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_31_bool = false;
		return 4;
	}
	string var_37_string;
	var_33_object->GetProperty("class", var_37_string);
	if(var_37_string == "rat") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x1770";
	}
	if(var_37_string == "rat_big") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x1770";
	}
	if(var_37_string == "dog") {
		var_31_bool = false;
		return 4;
	}
	bool var_38_bool;
	@CanSee(var_38_bool, var_32_object);
	bool var_56_bool = true;
	if(var_38_bool != 1) {
		float var_58_float; object var_59_object;
		var_32_object = var_59_object;
		func_5330(var_58_float, var_59_object);
		var_67_bool = var_58_float <= (var_34_float * var_34_float);
		if(var_67_bool != 1)
			var_56_bool = false;
	}
	if(var_56_bool != 0) {
		var_31_bool = true;
		return 4;
	}
	@CanSee(var_38_bool, var_33_object);
	bool var_68_bool = true;
	if(var_38_bool != 1) {
		float var_70_float; object var_71_object;
		var_33_object = var_71_object;
		func_5330(var_70_float, var_71_object);
		var_73_bool = var_70_float <= (var_34_float * var_34_float);
		if(var_73_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 0) {
		var_31_bool = true;
		return 4;
	}
	var_31_bool = false;
}


void func_858(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1380(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_41_object)
{
	float var_51_float; cvector var_53_cvector; float var_54_float;
	cvector var_55_cvector;
	func_1350(var_54_float, var_55_cvector, 1.7453294);
	cvector var_50_cvector;
	var_55_cvector = var_50_cvector;
	if((var_50_cvector | var_50_cvector) < 2500.0) {
		cvector var_87_cvector;
		func_1350(var_54_float, var_87_cvector, 2.6179938);
		var_87_cvector = var_50_cvector;
		var_51_float = var_50_cvector | var_50_cvector;
		if(var_51_float < 2500.0) {
			var_92_float = sqrt(var_51_float);
			@Trace("Can't retreat, distance: " + var_92_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_95_float = GetByIndex(var_50_cvector, 0);
	var_96_float = GetByIndex(var_50_cvector, 2);
	@Rotate(var_95_float, var_96_float);
	cvector var_97_cvector;
	func_5318(var_97_cvector);
	@SetTimer(120, 0.5);
	
Label_1422:
	bool var_52_bool;
	@MovePoint((var_97_cvector + var_50_cvector), 1, var_52_bool);
	if(var_52_bool != 0) {
		if(var_41_object == null) {
			goto Label_1452;
		EMIT "GOTO 0x5aa";

		Label_1452:
			for(;;) {
				return 10;
		}
			cvector var_105_cvector;
			func_1350(var_54_float, var_105_cvector, 2.6179938);
			var_105_cvector = var_53_cvector;
			if((var_53_cvector | var_53_cvector) >= 2500.0) {
				cvector var_109_cvector;
				func_5318(var_109_cvector);
				var_1_bool = var_109_cvector + var_53_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1422; //@nz

	}
}


void func_375(float var_124_float)
{
	float var_126_float;
	@GetCameraFarDistance(var_126_float);
	var_126_float = var_124_float;
}


void func_5505(void)
{
	bool var_487_bool;
	@CameraSwitchToNormal(true);
	bool var_489_bool;
	func_6563(var_489_bool);
	if(var_489_bool != 0) {
	} else {
		@HasAnimationTrack(var_487_bool, "head");
		if(var_487_bool == 0) goto Label_5522;
		@UnlookAsync("head");
	}
Label_5522:
	
}


void func_387(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_394(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_2447(bool var_2_bool, string var_75_string)
{
	bool var_76_bool;
	func_6563(var_76_bool);
	if(!var_76_bool) //@nz
		return 0;
	if(var_75_string == var_2_bool)
		return 0;
	string var_79_string; bool var_80_bool;
	var_75_string = var_79_string;
	if(var_75_string == "")
		var_80_bool = false;
	else
		var_80_bool = true;
	func_5600(var_79_string, var_80_bool);
	var_2_bool = var_75_string;
	
}


void func_401(bool var_134_bool)
{
	var_134_bool = false;
}


void func_403(object var_128_object, cvector var_129_cvector)
{
	object var_131_object;
	@FindShiftedPathTo(var_131_object, var_129_cvector);
	var_131_object = var_128_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_6036(int var_25_int)
{
	var_25_int = 0;
}


// @pe
void func_5523(bool var_494_bool, object var_495_object)
{
	object var_497_object;
	var_495_object = var_497_object;
	bool var_496_bool;
	func_5531(var_496_bool, var_497_object, (float)70);
	var_496_bool = var_494_bool;
}


// @pe
void func_6039(void)
{
}


// @pe
void func_6041(int var_209_int)
{
	var_209_int = 0;
}


void func_6555(int var_107_int)
{
	var_107_int = 515559;
}


// @pe
void func_6044(void)
{
}


void func_6557(int var_106_int)
{
	var_106_int = 503344;
}


// @pe
void func_6046(int var_25_int)
{
	var_25_int = 2;
}


void func_6559(string var_108_string)
{
	var_108_string = "ui/NPC_Citizen1.png";
}


void func_5531(bool var_496_bool, object var_497_object, float var_498_float)
{
	cvector var_508_cvector;
	var_497_object->GetPosition(var_508_cvector);
	float var_507_float;
	var_497_object->GetEyesHeight(var_507_float);
	var_515_float = GetByIndex(var_508_cvector, 1);
	SetByIndex(var_508_cvector, 1) = (var_515_float + var_507_float);
	cvector var_509_cvector;
	@GetPosition(var_509_cvector);
	@GetEyesHeight(var_507_float);
	var_516_float = GetByIndex(var_509_cvector, 1);
	SetByIndex(var_509_cvector, 1) = (var_516_float + var_507_float);
	cvector var_510_cvector = var_508_cvector - var_509_cvector;
	var_517_float = GetByIndex(var_510_cvector, 1);
	SetByIndex(var_510_cvector, 1) = (float)0;
	var_519_float = sqrt(var_510_cvector | var_510_cvector);
	var_510_cvector /= var_519_float;
	cvector var_511_cvector = -var_510_cvector;
	cvector var_512_cvector = (var_510_cvector * var_498_float) - [0.0, 10.0, 0.0];
	bool var_514_bool;
	@IsOverrideActive(var_514_bool);
	if(var_514_bool != 0)
		var_496_bool = false;
	@StopWorld();
	@CameraTransit((var_509_cvector + var_512_cvector), var_511_cvector, true);
	var_524_float = GetByIndex(var_512_cvector, 0);
	var_525_float = GetByIndex(var_512_cvector, 2);
	@Rotate(var_524_float, var_525_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_496_bool = true;
}


// @pe
void func_6049(object var_33_object)
{
	object var_34_object;
	func_6573(var_34_object, var_34_object);
}


void func_6561(string var_109_string)
{
	var_109_string = "ui/NPC_Citizen1_b.png";
}


void func_6563(bool var_25_bool)
{
	var_25_bool = false;
}


void func_6565(void)
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_6455(false);
}


// @pe
void func_934(object var_77_object)
{
	@Face(var_77_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_87_object;
	func_999(var_79_cvector, var_80_bool, var_87_object, var_87_object);
}


void func_6055(void)
{
}


void func_6056(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
}


// @pe
void func_6061(object var_40_object)
{
	object var_41_object;
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
}


void func_6573(object var_34_object, object var_49_object)
{
	bool var_36_bool;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		@IsOverrideActive(var_36_bool);
		if(!var_36_bool) { //@nz
			object var_39_object;
			var_34_object = var_39_object;
			func_6442(var_39_object);
		}
		return 2;
	EMIT "GOTO 0x19d4";
	}
	int var_47_int; object var_48_object;
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	if(1000 == var_49_object) {
		bool var_494_bool; object var_495_object;
		var_34_object = var_495_object;
		func_5523(var_494_bool, var_495_object);
		if(!var_494_bool) //@nz
			return 2;
		object var_527_object;
		var_34_object = var_527_object;
		TaskCall(0);
		func_0(var_527_object);
		TaskReturn();
		object var_534_object;
		var_34_object = var_534_object;
		func_5579();
	}
}


void func_6069(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	@CanSee(var_40_bool, var_38_object);
	var_37_bool = true;
	if(var_40_bool != 1) {
		float var_42_float; object var_43_object;
		var_38_object = var_43_object;
		func_5330(var_42_float, var_43_object);
		var_51_bool = var_42_float <= 4000000;
		if(var_51_bool != 1)
			var_37_bool = false;
	}
}


// @pe
void func_6084(object var_139_object)
{
	object var_140_object;
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
}


void func_969(bool var_0_bool, cvector var_36_cvector, float var_37_float)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_0_bool->GetPosition(var_45_cvector); //@t
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_50_cvector;
	cvector var_52_cvector;
	func_5665(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5665(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


// @pe
void func_5579(void)
{
	@CameraSwitchToNormal(true);
}


// @pe
void func_6092(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_6069(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
}


void func_5584(string var_330_string)
{
	bool var_334_bool; float var_335_float; float var_336_float;
	@lshHasAnimation(var_334_bool, var_330_string);
	if(var_334_bool != 0) {
		@lshGetAnimTimes(var_330_string, var_335_float, var_336_float);
		@lshPlayAnimation(var_335_float, var_336_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_330_string);
	}
	
}


// @pe
void func_6099(object var_207_object)
{
	object var_208_object;
	var_207_object = var_208_object;
	func_6084(var_208_object);
}


void func_6613(bool var_67_bool)
{
	float var_68_float;
	func_6428(var_68_float);
	var_67_bool = var_68_float > 0.6;
}


// @pe
void func_6105(bool var_30_bool)
{
	var_30_bool = false;
}


// @pe
void func_6619(bool var_27_bool, object var_28_object, object var_29_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	object var_33_object;
	var_29_object = var_33_object;
	bool var_31_bool;
	func_5970(var_31_bool, var_32_object, var_33_object, 700.0);
	var_31_bool = var_27_bool;
}


// @pe
void func_6108(void)
{
}


// @pe
void func_6110(void)
{
	@SetVariable("d1GhostCatHDPathologic", 1);
	object var_49_object;
	func_5729(var_49_object, "quest_ghost_cat");
}


void func_5600(string var_79_string, bool var_80_bool)
{
	bool var_86_bool; float var_87_float; float var_88_float;
	@lshHasAnimation(var_86_bool, var_79_string);
	if(var_86_bool != 0) {
		@lshGetAnimTimes(var_79_string, var_87_float, var_88_float);
		@lshPlayAnimation(var_87_float, var_88_float, var_80_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_79_string);
	}
	
}


void func_1505(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_999(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_87_object)
{
	float var_94_float; cvector var_96_cvector; float var_97_float;
	cvector var_98_cvector;
	func_969(var_97_float, var_98_cvector, 1.7453294);
	cvector var_93_cvector;
	var_98_cvector = var_93_cvector;
	if((var_93_cvector | var_93_cvector) < 2500.0) {
		cvector var_130_cvector;
		func_969(var_97_float, var_130_cvector, 2.6179938);
		var_130_cvector = var_93_cvector;
		var_94_float = var_93_cvector | var_93_cvector;
		if(var_94_float < 2500.0) {
			var_135_float = sqrt(var_94_float);
			@Trace("Can't retreat, distance: " + var_135_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_138_float = GetByIndex(var_93_cvector, 0);
	var_139_float = GetByIndex(var_93_cvector, 2);
	@Rotate(var_138_float, var_139_float);
	cvector var_140_cvector;
	func_5318(var_140_cvector);
	@SetTimer(120, 0.5);
	
Label_1041:
	bool var_95_bool;
	@MovePoint((var_140_cvector + var_93_cvector), 1, var_95_bool);
	if(var_95_bool != 0) {
		if(var_87_object == null) {
			goto Label_1071;
		EMIT "GOTO 0x42d";

		Label_1071:
			for(;;) {
				return 10;
		}
			cvector var_148_cvector;
			func_969(var_97_float, var_148_cvector, 2.6179938);
			var_148_cvector = var_96_cvector;
			if((var_96_cvector | var_96_cvector) >= 2500.0) {
				cvector var_152_cvector;
				func_5318(var_152_cvector);
				var_1_bool = var_152_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1041; //@nz

	}
}


// @pe
void func_6120(object var_29_object)
{
	var_29_object->SetReturnValue(1000);
}


// @pe
void func_6125(bool var_275_bool)
{
	int var_277_int;
	func_5724(var_277_int, "branch");
	if(var_277_int == 0) {
		var_275_bool = true;
		return 0;
	}
	var_275_bool = false;
}


void func_5615(object var_91_object)
{
	float var_94_float;
	var_91_object->GetEyesHeight(var_94_float);
	cvector var_95_cvector = [0.0, 0.0, 0.0];
	var_96_float = GetByIndex(var_95_cvector, 1);
	var_94_float = var_96_float;
	SetByIndex(var_95_cvector, 1) = var_96_float;
	@LookAsync(var_91_object, "head", var_95_cvector);
}


void func_1521(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_5323(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5680(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_6137(bool var_67_bool)
{
	int var_69_int;
	func_5724(var_69_int, "branch");
	if(var_69_int == 2)
		var_67_bool = true;
	var_67_bool = false;
}


void func_5626(void)
{
	bool var_25_bool;
	func_6563(var_25_bool);
	if(var_25_bool != 0)
		@lshStopSpeech();
}


