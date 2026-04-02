// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool;
		func_5368(var_23_bool);
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
		func_5370();
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
		func_4914(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_4917(var_32_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_4719(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_4802(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_75_object;
			var_22_bool = var_75_object;
			func_4812(var_75_object);
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
		func_5424(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_4820(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_251(var_26_int);
				object var_110_object;
				var_22_object = var_110_object;
				func_4830(var_110_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_4904(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_4907();
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
		func_4633(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_251(var_25_int);
			object var_59_object; string var_60_string;
			var_22_string = var_59_object;
			var_23_bool = var_60_string;
			func_4665(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_23_bool = var_209_string;
			var_22_string = var_210_object;
			func_4909(var_210_object);
			var_208_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_192;
			if(var_25_int > 1)
				func_251(var_25_int);
			string var_215_string; object var_216_object;
			var_23_bool = var_215_string;
			var_22_string = var_216_object;
			func_4912();
		}
	Label_192:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; string var_24_string;
		func_4732(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_251(var_24_string);
			string var_33_string;
			var_22_bool = var_33_string;
			func_4748(var_33_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; object var_24_object;
		func_4690(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_251(var_24_object);
			object var_38_object;
			var_22_bool = var_38_object;
			func_4713(var_38_object);
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
		func_4923();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_251(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_4627();
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
		func_4914(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_4917(var_31_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_4719(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_4802(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_74_object;
			var_22_bool = var_74_object;
			func_4812(var_74_object);
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
		func_5424(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_4820(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_654();
				object var_109_object;
				var_22_object = var_109_object;
				func_4830(var_109_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_4904(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_4907();
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
		func_4633(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_654();
			object var_58_object; string var_59_string;
			var_22_string = var_58_object;
			var_23_bool = var_59_string;
			func_4665(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_23_bool = var_208_string;
			var_22_string = var_209_object;
			func_4909(var_209_object);
			var_207_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_537;
			if(var_25_int > 1)
				func_654();
			string var_214_string; object var_215_object;
			var_23_bool = var_214_string;
			var_22_string = var_215_object;
			func_4912();
		}
	Label_537:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_4732(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_654();
			string var_32_string;
			var_22_bool = var_32_string;
			func_4748(var_32_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_654();
		func_4923();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_4690(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_654();
			object var_37_object;
			var_22_bool = var_37_object;
			func_4713(var_37_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_4914(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_4917(var_33_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_4719(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_4802(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_76_object;
			var_22_bool = var_76_object;
			func_4812(var_76_object);
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
		func_5424(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_4820(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_858();
				object var_111_object;
				var_22_object = var_111_object;
				func_4830(var_111_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_4904(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_4907();
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
		func_4633(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_858();
			object var_60_object; string var_61_string;
			var_22_string = var_60_object;
			var_23_bool = var_61_string;
			func_4665(var_60_object, var_61_string);
		} else {
			int var_209_int; string var_210_string; object var_211_object;
			var_23_bool = var_210_string;
			var_22_string = var_211_object;
			func_4909(var_211_object);
			var_209_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_843;
			if(var_25_int > 1)
				func_858();
			string var_216_string; object var_217_object;
			var_23_bool = var_216_string;
			var_22_string = var_217_object;
			func_4912();
		}
	Label_843:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_4732(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_858();
			string var_34_string;
			var_22_bool = var_34_string;
			func_4748(var_34_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_858();
		object var_25_object;
		var_22_bool = var_25_object;
		func_4627();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		if(var_22_bool != 111)
			return 4;
		bool var_29_bool;
		func_4297(var_29_bool, var_0_bool);
		if(!var_29_bool) { //@nz
			func_858();
			return 4;
		}
		cvector var_25_cvector;
		@GetDirection(var_25_cvector);
		cvector var_66_cvector;
		func_4224(var_66_cvector, var_0_bool);
		cvector var_26_cvector;
		var_66_cvector = var_26_cvector;
		float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
		var_25_cvector = var_73_cvector;
		var_26_cvector = var_74_cvector;
		func_4586(var_72_float, var_73_cvector, var_74_cvector);
		if(var_72_float < 0.49999997)
			func_4321(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_858();
		func_4923();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_4690(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_858();
			object var_39_object;
			var_22_bool = var_39_object;
			func_4713(var_39_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1124(var_21_bool);
		func_4923();
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
			func_4219(var_94_cvector);
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
		func_4627();
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
			func_4219(var_94_cvector);
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
		func_4627();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1505(var_21_bool);
		func_4923();
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
			func_4219(var_94_cvector);
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
		func_4627();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1699(var_21_bool);
		func_4923();
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
			func_4219(var_94_cvector);
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
		func_4627();
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
			func_4505();
			if(var_23_int == 39354) {
				object var_28_object = var_1_bool;
				func_4978(var_0_bool);
			}
			if(var_22_int == 39353) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537506); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537507, -1, 39354); //@t
				bool var_49_bool = false;
				bool var_50_bool = false;
				bool var_51_bool;
				func_4983(var_1_bool);
				if(var_51_bool != 0) {
					bool var_59_bool;
					func_4995(var_59_bool, var_1_bool);
					if(var_59_bool != 0)
						var_50_bool = true;
				}
				if(var_50_bool != 0) {
					bool var_70_bool;
					func_5105(var_70_bool, var_1_bool);
					if(var_70_bool != 0)
						var_49_bool = true;
				}
				if(var_49_bool != 0)
					var_0_bool->AddReply(537508, 39356, 39355); //@t
				bool var_88_bool = false;
				bool var_89_bool = false;
				bool var_90_bool;
				func_4983(var_1_bool);
				if(var_90_bool != 0) {
					bool var_92_bool;
					func_4995(var_92_bool, var_1_bool);
					if(var_92_bool != 0)
						var_89_bool = true;
				}
				if(var_89_bool != 0) {
					bool var_94_bool;
					func_5115(var_94_bool, var_1_bool);
					if(var_94_bool != 0)
						var_88_bool = true;
				}
				if(var_88_bool != 0)
					var_0_bool->AddReply(537524, 39372, 39371); //@t
				bool var_104_bool = false;
				bool var_105_bool;
				func_4983(var_1_bool);
				if(var_105_bool != 0) {
					bool var_107_bool;
					func_5005(var_107_bool, var_1_bool);
					if(var_107_bool != 0)
						var_104_bool = true;
				}
				if(var_104_bool != 0)
					var_0_bool->AddReply(537534, 39382, 39381); //@t
				bool var_116_bool = false;
				bool var_117_bool;
				func_4983(var_1_bool);
				if(var_117_bool != 0) {
					bool var_119_bool;
					func_5015(var_119_bool, var_1_bool);
					if(var_119_bool != 0)
						var_116_bool = true;
				}
				if(var_116_bool != 0)
					var_0_bool->AddReply(537549, 39397, 39396); //@t
				bool var_128_bool = false;
				bool var_129_bool;
				func_4983(var_1_bool);
				if(var_129_bool != 0) {
					bool var_131_bool;
					func_5025(var_131_bool, var_1_bool);
					if(var_131_bool != 0)
						var_128_bool = true;
				}
				if(var_128_bool != 0)
					var_0_bool->AddReply(537559, 39407, 39406); //@t
				bool var_140_bool = false;
				bool var_141_bool;
				func_4983(var_1_bool);
				if(var_141_bool != 0) {
					bool var_143_bool;
					func_5035(var_143_bool, var_1_bool);
					if(var_143_bool != 0)
						var_140_bool = true;
				}
				if(var_140_bool != 0)
					var_0_bool->AddReply(537571, 39419, 39418); //@t
				bool var_152_bool = false;
				bool var_153_bool;
				func_4983(var_1_bool);
				if(var_153_bool != 0) {
					bool var_155_bool;
					func_5045(var_155_bool, var_1_bool);
					if(var_155_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0)
					var_0_bool->AddReply(537593, 39442, 39441); //@t
				bool var_164_bool = false;
				bool var_165_bool;
				func_4983(var_1_bool);
				if(var_165_bool != 0) {
					bool var_167_bool;
					func_5055(var_167_bool, var_1_bool);
					if(var_167_bool != 0)
						var_164_bool = true;
				}
				if(var_164_bool != 0)
					var_0_bool->AddReply(537603, 39452, 39451); //@t
				bool var_176_bool = false;
				bool var_177_bool;
				func_4983(var_1_bool);
				if(var_177_bool != 0) {
					bool var_179_bool;
					func_5065(var_179_bool, var_1_bool);
					if(var_179_bool != 0)
						var_176_bool = true;
				}
				if(var_176_bool != 0)
					var_0_bool->AddReply(537621, 39470, 39469); //@t
				bool var_188_bool = false;
				bool var_189_bool;
				func_4983(var_1_bool);
				if(var_189_bool != 0) {
					bool var_191_bool;
					func_5075(var_191_bool, var_1_bool);
					if(var_191_bool != 0)
						var_188_bool = true;
				}
				if(var_188_bool != 0)
					var_0_bool->AddReply(537633, 39482, 39481); //@t
				bool var_200_bool = false;
				bool var_201_bool;
				func_4983(var_1_bool);
				if(var_201_bool != 0) {
					bool var_203_bool;
					func_5085(var_203_bool, var_1_bool);
					if(var_203_bool != 0)
						var_200_bool = true;
				}
				if(var_200_bool != 0)
					var_0_bool->AddReply(537640, 39489, 39488); //@t
				bool var_212_bool = false;
				bool var_213_bool;
				func_4983(var_1_bool);
				if(var_213_bool != 0) {
					bool var_215_bool;
					func_5095(var_215_bool, var_1_bool);
					if(var_215_bool != 0)
						var_212_bool = true;
				}
				if(var_212_bool != 0)
					var_0_bool->AddReply(537647, 39496, 39495); //@t
				bool var_224_bool = false;
				bool var_225_bool = false;
				bool var_226_bool;
				func_4983(var_1_bool);
				if(var_226_bool != 0) {
					bool var_228_bool;
					func_5115(var_228_bool, var_1_bool);
					if(var_228_bool != 0)
						var_225_bool = true;
				}
				if(var_225_bool != 0) {
					bool var_230_bool;
					func_4995(var_230_bool, var_1_bool);
					if(var_230_bool != 0)
						var_224_bool = true;
				}
				if(var_224_bool != 0)
					var_0_bool->AddReply(537659, 39508, 39507); //@t
				bool var_235_bool = false;
				bool var_236_bool;
				func_4983(var_1_bool);
				if(var_236_bool != 0) {
					bool var_238_bool;
					func_4995(var_238_bool, var_1_bool);
					if(var_238_bool != 0)
						var_235_bool = true;
				}
				if(var_235_bool != 0)
					var_0_bool->AddReply(537665, 39514, 39513); //@t
				bool var_243_bool = false;
				bool var_244_bool;
				func_4983(var_1_bool);
				if(var_244_bool != 0) {
					bool var_246_bool;
					func_4995(var_246_bool, var_1_bool);
					if(var_246_bool != 0)
						var_243_bool = true;
				}
				if(var_243_bool != 0)
					var_0_bool->AddReply(537671, 39520, 39519); //@t
				bool var_251_bool = false;
				bool var_252_bool = false;
				bool var_253_bool;
				func_4983(var_1_bool);
				if(var_253_bool != 0) {
					bool var_255_bool;
					func_4995(var_255_bool, var_1_bool);
					if(var_255_bool != 0)
						var_252_bool = true;
				}
				if(var_252_bool != 0) {
					bool var_257_bool;
					func_5105(var_257_bool, var_1_bool);
					if(var_257_bool != 0)
						var_251_bool = true;
				}
				if(var_251_bool != 0)
					var_0_bool->AddReply(537689, 39538, 39537); //@t
				bool var_262_bool = false;
				bool var_263_bool = false;
				bool var_264_bool;
				func_4983(var_1_bool);
				if(var_264_bool != 0) {
					bool var_266_bool;
					func_4995(var_266_bool, var_1_bool);
					if(var_266_bool != 0)
						var_263_bool = true;
				}
				if(var_263_bool != 0) {
					bool var_268_bool;
					func_5105(var_268_bool, var_1_bool);
					if(var_268_bool != 0)
						var_262_bool = true;
				}
				if(var_262_bool != 0)
					var_0_bool->AddReply(537702, 39551, 39550); //@t
				var_0_bool->AddReply(537721, -1, 39569); //@t
				return 0;
			}
			if(var_22_int == 39551) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537704, 39553, 39552); //@t
				return 0;
			}
			if(var_22_int == 39553) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537706, 39555, 39554); //@t
				var_0_bool->AddReply(537717, 39566, 39565); //@t
				return 0;
			}
			if(var_22_int == 39566) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537718); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537719, -1, 39567); //@t
				var_0_bool->AddReply(537720, -1, 39568); //@t
				return 0;
			}
			if(var_22_int == 39555) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537708, 39557, 39556); //@t
				var_0_bool->AddReply(537711, 39560, 39559); //@t
				return 0;
			}
			if(var_22_int == 39560) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537712); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537713, -1, 39561); //@t
				var_0_bool->AddReply(537714, 39563, 39562); //@t
				return 0;
			}
			if(var_22_int == 39563) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537715); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537716, -1, 39564); //@t
				return 0;
			}
			if(var_22_int == 39557) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537710, -1, 39558); //@t
				return 0;
			}
			if(var_22_int == 39538) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537690); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537691, 39540, 39539); //@t
				var_0_bool->AddReply(537701, -1, 39549); //@t
				return 0;
			}
			if(var_22_int == 39540) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537692); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537693, 39542, 39541); //@t
				var_0_bool->AddReply(537696, 39545, 39544); //@t
				return 0;
			}
			if(var_22_int == 39545) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537697); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537698, 39547, 39546); //@t
				return 0;
			}
			if(var_22_int == 39547) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537699); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537700, -1, 39548); //@t
				return 0;
			}
			if(var_22_int == 39542) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537694); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537695, -1, 39543); //@t
				return 0;
			}
			if(var_22_int == 39520) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537672); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537673, 39522, 39521); //@t
				var_0_bool->AddReply(537678, 39527, 39526); //@t
				return 0;
			}
			if(var_22_int == 39527) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537679); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537680, 39529, 39528); //@t
				return 0;
			}
			if(var_22_int == 39529) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537681); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537682, 39531, 39530); //@t
				var_0_bool->AddReply(537688, -1, 39536); //@t
				return 0;
			}
			if(var_22_int == 39531) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537683); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537684, 39533, 39532); //@t
				var_0_bool->AddReply(537687, -1, 39535); //@t
				return 0;
			}
			if(var_22_int == 39533) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537686, -1, 39534); //@t
				return 0;
			}
			if(var_22_int == 39522) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537674); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537675, 39524, 39523); //@t
				return 0;
			}
			if(var_22_int == 39524) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537676); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537677, -1, 39525); //@t
				return 0;
			}
			if(var_22_int == 39514) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537666); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537667, 39516, 39515); //@t
				var_0_bool->AddReply(537670, -1, 39518); //@t
				return 0;
			}
			if(var_22_int == 39516) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537668); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537669, -1, 39517); //@t
				return 0;
			}
			if(var_22_int == 39508) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537660); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537661, 39510, 39509); //@t
				var_0_bool->AddReply(537664, -1, 39512); //@t
				return 0;
			}
			if(var_22_int == 39510) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537662); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537663, -1, 39511); //@t
				return 0;
			}
			if(var_22_int == 39496) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537648); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537649, 39498, 39497); //@t
				var_0_bool->AddReply(537658, -1, 39506); //@t
				return 0;
			}
			if(var_22_int == 39498) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537650); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537651, 39500, 39499); //@t
				var_0_bool->AddReply(537657, -1, 39505); //@t
				return 0;
			}
			if(var_22_int == 39500) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537652); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537653, -1, 39501); //@t
				var_0_bool->AddReply(537654, 39503, 39502); //@t
				return 0;
			}
			if(var_22_int == 39503) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537655); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537656, -1, 39504); //@t
				return 0;
			}
			if(var_22_int == 39489) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537641); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537642, 39491, 39490); //@t
				var_0_bool->AddReply(537646, -1, 39494); //@t
				return 0;
			}
			if(var_22_int == 39491) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537643); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537644, -1, 39492); //@t
				var_0_bool->AddReply(537645, -1, 39493); //@t
				return 0;
			}
			if(var_22_int == 39482) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537634); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537635, 39484, 39483); //@t
				var_0_bool->AddReply(537639, -1, 39487); //@t
				return 0;
			}
			if(var_22_int == 39484) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537636); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537637, -1, 39485); //@t
				var_0_bool->AddReply(537638, -1, 39486); //@t
				return 0;
			}
			if(var_22_int == 39470) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537622); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537623, 39472, 39471); //@t
				var_0_bool->AddReply(537632, -1, 39480); //@t
				return 0;
			}
			if(var_22_int == 39472) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537625, 39474, 39473); //@t
				return 0;
			}
			if(var_22_int == 39474) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537626); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537627, -1, 39475); //@t
				var_0_bool->AddReply(537628, 39477, 39476); //@t
				return 0;
			}
			if(var_22_int == 39477) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537629); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537630, -1, 39478); //@t
				var_0_bool->AddReply(537631, -1, 39479); //@t
				return 0;
			}
			if(var_22_int == 39452) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537604); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537605, 39454, 39453); //@t
				var_0_bool->AddReply(537612, 39461, 39460); //@t
				return 0;
			}
			if(var_22_int == 39461) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537613); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537614, 39463, 39462); //@t
				var_0_bool->AddReply(537620, -1, 39468); //@t
				return 0;
			}
			if(var_22_int == 39463) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537615); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537616, 39465, 39464); //@t
				return 0;
			}
			if(var_22_int == 39465) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537617); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537618, -1, 39466); //@t
				var_0_bool->AddReply(537619, -1, 39467); //@t
				return 0;
			}
			if(var_22_int == 39454) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537606); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537607, 39456, 39455); //@t
				var_0_bool->AddReply(537611, -1, 39459); //@t
				return 0;
			}
			if(var_22_int == 39456) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537608); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537609, -1, 39457); //@t
				var_0_bool->AddReply(537610, -1, 39458); //@t
				return 0;
			}
			if(var_22_int == 39442) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537594); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537595, 39444, 39443); //@t
				var_0_bool->AddReply(537602, -1, 39450); //@t
				return 0;
			}
			if(var_22_int == 39444) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537596); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537597, 39446, 39445); //@t
				var_0_bool->AddReply(537601, -1, 39449); //@t
				return 0;
			}
			if(var_22_int == 39446) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537598); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537599, -1, 39447); //@t
				var_0_bool->AddReply(537600, -1, 39448); //@t
				return 0;
			}
			if(var_22_int == 39419) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537572); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537573, 39421, 39420); //@t
				var_0_bool->AddReply(537578, 39426, 39425); //@t
				var_0_bool->AddReply(537588, 39437, 39436); //@t
				var_0_bool->AddReply(537592, -1, 39440); //@t
				return 0;
			}
			if(var_22_int == 39437) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537589); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537590, -1, 39438); //@t
				var_0_bool->AddReply(537591, -1, 39439); //@t
				return 0;
			}
			if(var_22_int == 39426) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537579); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537580, 39421, 39427); //@t
				var_0_bool->AddReply(537581, 39430, 39429); //@t
				return 0;
			}
			if(var_22_int == 39430) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537582); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537583, 39432, 39431); //@t
				var_0_bool->AddReply(537587, -1, 39435); //@t
				return 0;
			}
			if(var_22_int == 39432) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537584); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537585, -1, 39433); //@t
				var_0_bool->AddReply(537586, -1, 39434); //@t
				return 0;
			}
			if(var_22_int == 39421) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537574); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537575, 39423, 39422); //@t
				return 0;
			}
			if(var_22_int == 39423) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537576); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537577, -1, 39424); //@t
				return 0;
			}
			if(var_22_int == 39407) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537560); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537561, 39409, 39408); //@t
				var_0_bool->AddReply(537570, -1, 39417); //@t
				return 0;
			}
			if(var_22_int == 39409) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537562); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537563, 39411, 39410); //@t
				var_0_bool->AddReply(537567, 39415, 39414); //@t
				return 0;
			}
			if(var_22_int == 39415) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537568); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537569, -1, 39416); //@t
				return 0;
			}
			if(var_22_int == 39411) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537564); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537565, -1, 39412); //@t
				var_0_bool->AddReply(537566, -1, 39413); //@t
				return 0;
			}
			if(var_22_int == 39397) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537550); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537551, 39399, 39398); //@t
				var_0_bool->AddReply(537558, -1, 39405); //@t
				return 0;
			}
			if(var_22_int == 39399) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537552); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537553, 39401, 39400); //@t
				var_0_bool->AddReply(537557, -1, 39404); //@t
				return 0;
			}
			if(var_22_int == 39401) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537554); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537555, -1, 39402); //@t
				var_0_bool->AddReply(537556, -1, 39403); //@t
				return 0;
			}
			if(var_22_int == 39382) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537535); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537536, 39384, 39383); //@t
				return 0;
			}
			if(var_22_int == 39384) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537537); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537538, 39386, 39385); //@t
				var_0_bool->AddReply(537548, -1, 39395); //@t
				return 0;
			}
			if(var_22_int == 39386) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537539); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537540, 39388, 39387); //@t
				var_0_bool->AddReply(537543, -1, 39390); //@t
				var_0_bool->AddReply(537544, 39392, 39391); //@t
				return 0;
			}
			if(var_22_int == 39392) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537545); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537546, -1, 39393); //@t
				var_0_bool->AddReply(537547, -1, 39394); //@t
				return 0;
			}
			if(var_22_int == 39388) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537541); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537542, -1, 39389); //@t
				return 0;
			}
			if(var_22_int == 39372) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537525); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537526, 39374, 39373); //@t
				var_0_bool->AddReply(537533, -1, 39380); //@t
				return 0;
			}
			if(var_22_int == 39374) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537527); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537528, 39376, 39375); //@t
				var_0_bool->AddReply(537532, -1, 39379); //@t
				return 0;
			}
			if(var_22_int == 39376) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537529); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537530, -1, 39377); //@t
				var_0_bool->AddReply(537531, -1, 39378); //@t
				return 0;
			}
			if(var_22_int == 39356) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537509); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537510, 39358, 39357); //@t
				var_0_bool->AddReply(537520, 39368, 39367); //@t
				return 0;
			}
			if(var_22_int == 39368) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537521); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537522, -1, 39369); //@t
				var_0_bool->AddReply(537523, -1, 39370); //@t
				return 0;
			}
			if(var_22_int == 39358) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537511); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537512, 39360, 39359); //@t
				var_0_bool->AddReply(537519, -1, 39366); //@t
				return 0;
			}
			if(var_22_int == 39360) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537513); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537514, 39362, 39361); //@t
				var_0_bool->AddReply(537518, -1, 39365); //@t
				return 0;
			}
			if(var_22_int == 39362) {
				func_2231(var_23_int, "Neutral");
				var_0_bool->SetMessage(537515); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537516, -1, 39363); //@t
				var_0_bool->AddReply(537517, -1, 39364); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_935_bool;
			func_5368(var_935_bool);
			if(var_935_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8ce";
	
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


void func_4608(int var_72_int)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_72_int = 1 + (var_74_float / 24);
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_424_bool;
		func_5368(var_424_bool);
		if(var_424_bool == 0) goto Label_15;
		func_4481("Neutral");
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


// @pe
void func_5125(bool var_61_bool)
{
	int var_63_int;
	func_4608(var_63_int);
	var_61_bool = var_63_int == 1;
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
	func_4544(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4544(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_4617(int var_75_int)
{
	float var_77_float;
	@GetGameTime(var_77_float);
	int var_78_int;
	var_77_float = var_78_int;
	var_75_int = var_78_int % 24;
}


// @pe
void func_5132(bool var_109_bool)
{
	int var_111_int;
	func_4608(var_111_int);
	var_109_bool = var_111_int == 2;
}


// @pe
void func_5139(bool var_121_bool)
{
	int var_123_int;
	func_4608(var_123_int);
	var_121_bool = var_123_int == 3;
}


// @pe
void func_4633(bool var_26_bool, object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		bool var_31_bool; object var_32_object;
		var_27_object = var_32_object;
		func_4924(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x1237";
	}
	if(var_28_string == "player_shot") {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_4937(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x1237";
	}
	if(var_28_string == "battle") {
		bool var_54_bool; object var_55_object;
		var_27_object = var_55_object;
		func_4960(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = false;
}


// @pe
void func_5146(bool var_133_bool)
{
	int var_135_int;
	func_4608(var_135_int);
	var_133_bool = var_135_int == 4;
}


// @pe
void func_5153(bool var_145_bool)
{
	int var_147_int;
	func_4608(var_147_int);
	var_145_bool = var_147_int == 5;
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
	func_4219(var_191_cvector);
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
				func_4219(var_201_cvector);
				var_1_bool = var_201_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1616; //@nz

	}
}


// @pe
void func_5160(bool var_157_bool)
{
	int var_159_int;
	func_4608(var_159_int);
	var_157_bool = var_159_int == 6;
}


// @pe
void func_5167(bool var_169_bool)
{
	int var_171_int;
	func_4608(var_171_int);
	var_169_bool = var_171_int == 7;
}


// @pe
void func_5174(bool var_181_bool)
{
	int var_183_int;
	func_4608(var_183_int);
	var_181_bool = var_183_int == 8;
}


void func_55(void)
{
	bool var_88_bool;
	func_4332(var_88_bool);
	if(!var_88_bool) //@nz
		func_4923();
}


// @pe
void func_4665(object var_60_object, string var_61_string)
{
	if(var_61_string == "unholster") {
		object var_64_object;
		var_60_object = var_64_object;
		func_4929(var_64_object);
	} else if(var_61_string == "player_shot") {
			object var_139_object;
			var_60_object = var_139_object;
			func_4952(var_139_object);
	}
Label_4689:
	for(;;) {

	}
	
	if(!(var_61_string == "battle")) goto Label_4689;
	object var_207_object;
	var_60_object = var_207_object;
	func_4967(var_207_object);
}


void func_573(void)
{
	int var_128_int; int var_129_int; bool var_130_bool; float var_131_float; bool var_132_bool;
	@WaitForAnimEnd();
	bool var_133_bool;
	func_4332(var_133_bool);
	if(!var_133_bool) //@nz
		return 14;
	int var_135_int;
	func_4768(var_135_int);
	int var_126_int;
	var_135_int = var_126_int;
	int var_127_int = 0;
	
	for(;;) {
		bool var_148_bool = false;
		if(var_127_int < 5) {
			bool var_151_bool;
			func_4332(var_151_bool);
			if(var_151_bool != 0)
				var_148_bool = true;
		}
		if(var_148_bool != 0) {
			@irand(var_128_int, 3);
			if(var_128_int == 0) {
				if(var_126_int == 0) goto Label_620;
				@irand(var_129_int, var_126_int);
				string var_157_string; int var_158_int;
				var_129_int = var_158_int;
				func_4761(var_157_string, var_158_int);
				@PlayAnimation("all", var_157_string);
				@WaitForAnimEnd(var_130_bool);
				if(!var_130_bool) { //@nz
				} else {
			} else {
			if(var_128_int == 1) {
				@rand(var_131_float, 4);
				@Sleep((var_131_float + 1), var_132_bool);
				if(!var_132_bool) { //@nz
					goto Label_649;
				}
			} else if(var_127_int != 0) {
				goto Label_649;
			}
			}
					bool var_160_bool;
					func_652(var_160_bool);
					var_161_bool = !var_160_bool; //@nz
					if(var_161_bool == 0) goto Label_644;
			}
		}
	Label_649:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_644:
		@ResetAAS();
		var_127_int += 1;
	}
	
}


// @pe
void func_5181(bool var_193_bool)
{
	int var_195_int;
	func_4608(var_195_int);
	var_193_bool = var_195_int == 9;
}


// @pe
void func_5188(bool var_205_bool)
{
	int var_207_int;
	func_4608(var_207_int);
	var_205_bool = var_207_int == 10;
}


// @pe
void func_5195(bool var_217_bool)
{
	int var_219_int;
	func_4608(var_219_int);
	var_217_bool = var_219_int == 11;
}


void func_4690(bool var_23_bool, object var_24_object)
{
	bool var_26_bool;
	bool var_27_bool = false;
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_4924(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		func_4239(var_32_bool, var_33_object);
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
void func_5202(bool var_72_bool)
{
	bool var_74_bool = false;
	int var_75_int;
	func_4617(var_75_int);
	if(var_75_int >= 0) {
		int var_82_int;
		func_4617(var_82_int);
		if(var_82_int < 12)
			var_74_bool = true;
	}
	if(var_74_bool != 0) {
		var_72_bool = true;
		return 0;
	}
	var_72_bool = false;
}


void func_1124(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_5223(bool var_96_bool)
{
	int var_98_int;
	func_4617(var_98_int);
	if(var_98_int >= 12)
		var_96_bool = true;
	var_96_bool = false;
}


// @pe
void func_4713(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_4929(var_40_object);
}


// @pe
void func_4719(object var_25_object)
{
	bool var_26_bool; object var_27_object;
	func_4239(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		object var_30_object;
		func_4538(var_30_object);
		@ReportReputationChange(var_27_object, var_30_object, -0.03);
	}
}


void func_5234(int var_109_int)
{
	int var_111_int;
	@GetVariable("branch", var_111_int);
	if(var_111_int == 0) {
		var_109_int = 1;
		return 2;
	EMIT "GOTO 0x1481";
	}
	if(var_111_int == 1) {
		var_109_int = 2;
		return 2;
	}
	var_109_int = 3;
}


void func_1140(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4224(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4559(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_4603(int var_53_int, string var_54_string)
{
	int var_56_int;
	@GetVariable(var_54_string, var_56_int);
	var_56_int = var_53_int;
}


void func_4219(cvector var_94_cvector)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
}


void func_4732(bool var_23_bool, string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_4973(var_31_object);
		var_30_bool = var_23_bool;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = false;
}


void func_4224(cvector var_79_cvector, object var_80_object)
{
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	cvector var_84_cvector;
	var_80_object->GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
}


void func_5251(int var_40_int)
{
	int var_42_int;
	@GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
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
	func_4544(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4544(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_4231(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


void func_5257(float var_68_float)
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


void func_4748(string var_34_string)
{
	object var_36_object;
	if(var_34_string == "heal") {
		@FindActor(var_36_object, "player");
		object var_40_object;
		var_36_object = var_40_object;
		func_4976();
		var_36_object = null;
	}
}


void func_652(bool var_160_bool)
{
	var_160_bool = true;
}


void func_654(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_4239(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
}


void func_659(bool var_0_bool, object var_83_object)
{
	var_0_bool = var_83_object;
	bool var_90_bool;
	func_710(var_90_bool);
	cvector var_88_cvector;
	@GetDirection(var_88_cvector);
	cvector var_98_cvector;
	func_4224(var_98_cvector, var_0_bool);
	cvector var_89_cvector;
	var_98_cvector = var_89_cvector;
	float var_104_float; cvector var_105_cvector; cvector var_106_cvector;
	var_88_cvector = var_105_cvector;
	var_89_cvector = var_106_cvector;
	func_4586(var_104_float, var_105_cvector, var_106_cvector);
	if(var_104_float < 0) {
		func_4321(var_0_bool);
		var_90_bool = true;
	} else {
		@Sleep(1.5, var_90_bool);
	}
	if(var_90_bool != 0) {
		func_4321(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_4244(bool var_51_bool, object var_52_object, string var_53_string)
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
void func_5271(object var_39_object)
{
	int var_40_int;
	func_5251(var_40_int);
	if(var_40_int == 1)
		@WorkWithCorpse(var_39_object);
	else
		@Barter(var_39_object);
	
}


void func_4761(string var_141_string, int var_142_int)
{
	string var_144_string = "idle";
	if(var_142_int != 0)
		var_144_string += var_142_int;
	var_144_string = var_141_string;
}


void func_4768(int var_135_int)
{
	int var_138_int; bool var_139_bool;
	var_138_int = 0;
	
	for(;;) {
		string var_141_string; int var_142_int;
		var_138_int = var_142_int;
		func_4761(var_141_string, var_142_int);
		@HasAnimation(var_139_bool, "all", var_141_string);
		if(!var_139_bool) //@nz
			break;
		var_138_int += 1;
	}
	var_138_int = var_135_int;
}


void func_4256(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
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
	func_4219(var_168_cvector);
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
				func_4219(var_180_cvector);
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


void func_5284(bool var_24_bool)
{
	int var_26_int;
	@ClearSubContainer(0);
	if(var_24_bool != 0) {
		func_4523("rifle_ammo", 1, 2, 2);
		func_4523("revolver_ammo", 1, 2, 2);
		func_4523("samopal_ammo", 2, 2, 2);
	} else {
		func_4512("lockpick", 1, 4);
		func_4523("alpha_pills", 1, 2, 3);
		func_4512("meradorm", 1, 2);
		func_4512("powder", 1, 15);
		int var_72_int;
		func_4608(var_72_int);
		var_72_int = var_26_int;
		if(var_26_int >= 4)
			func_4512("beta_pills", 1, 2);
		if(!(var_26_int >= 6)) goto Label_5359;
		func_4512("gamma_pills", 1, 7);
	}
Label_5359:
	
}


void func_4261(bool var_33_bool, object var_34_object)
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
		func_4256(var_44_bool, var_45_object);
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


// @pe
void func_4785(int var_65_int)
{
	bool var_67_bool;
	func_5418(var_67_bool);
	if(var_67_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
}


void func_1715(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4224(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4559(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_2231(bool var_2_bool, string var_33_string)
{
	bool var_34_bool;
	func_5368(var_34_bool);
	if(!var_34_bool) //@nz
		return 0;
	if(var_33_string == var_2_bool)
		return 0;
	string var_37_string; bool var_38_bool;
	var_33_string = var_37_string;
	if(var_33_string == "")
		var_38_bool = false;
	else
		var_38_bool = true;
	func_4488(var_37_string, var_38_bool);
	var_2_bool = var_33_string;
	
}


// @pe
void func_4794(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	TaskCall(3);
	func_659(var_84_object, var_83_object);
	TaskReturn();
}


// @pe
void func_4802(int var_34_int, object var_35_object)
{
	object var_37_object;
	var_35_object = var_37_object;
	bool var_36_bool;
	func_4297(var_36_bool, var_37_object);
	if(var_36_bool != 0)
		var_34_int = 2;
	else
		var_34_int = 0;
	
}


void func_1731(bool var_0_bool, int var_47_int, object var_48_object)
{
	var_0_bool = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_4337(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_105_int;
	func_5362(var_105_int);
	var_54_object->SetNPCName(var_105_int);
	int var_106_int;
	func_5360(var_106_int);
	var_54_object->SetNPCDescription(var_106_int);
	string var_107_string;
	func_5364(var_107_string);
	var_54_object->SetPhoto(var_107_string);
	string var_108_string;
	func_5366(var_108_string);
	var_54_object->SetPhoto2(var_108_string);
	int var_109_int;
	func_5234(var_109_int);
	var_54_object->SetPlayerName(var_109_int);
	bool var_55_bool;
	@IsOverrideActive(var_55_bool);
	if(var_55_bool != 0) {
		var_47_int = -2;
		return 8;
	}
	@DoDialog(var_54_object);
	object var_118_object; object var_119_object;
	var_48_object = var_118_object;
	var_54_object = var_119_object;
	TaskCall(9);
	func_1805(var_120_object, var_121_object, var_122_string, var_123_bool, var_118_object, var_119_object);
	TaskReturn();
	bool var_57_bool;
	var_54_object->IsDialogEnd(var_57_bool);
	
	for(;;) {
		var_381_bool = !var_57_bool; //@nz
		if(var_381_bool == 0) goto Label_1794;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_1794:
	object var_382_object;
	var_48_object = var_382_object;
	func_4405();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_710(bool var_0_bool)
{
	func_4494(var_0_bool);
}


void func_4297(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_4261(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_4244(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


// @pe
void func_4812(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
}


// @pe
void func_4820(int var_74_int, object var_75_object)
{
	object var_78_object;
	var_75_object = var_78_object;
	bool var_77_bool;
	func_4297(var_77_bool, var_78_object);
	if(var_77_bool != 0)
		var_74_int = 2;
	else
		var_74_int = 0;
	
}


// @pe
void func_4830(object var_111_object)
{
	object var_112_object;
	var_111_object = var_112_object;
	TaskCall(5);
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
}


void func_4321(object var_98_object)
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


void func_4838(bool var_31_bool, object var_32_object, object var_33_object, float var_34_float)
{
	object var_40_object;
	var_33_object = var_40_object;
	bool var_39_bool;
	func_4244(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_31_bool = false;
		return 4;
	}
	string var_37_string;
	var_33_object->GetProperty("class", var_37_string);
	if(var_37_string == "rat") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x1304";
	}
	if(var_37_string == "rat_big") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x1304";
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
		func_4231(var_58_float, var_59_object);
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
		func_4231(var_70_float, var_71_object);
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


void func_4332(bool var_88_bool)
{
	bool var_90_bool;
	@IsLoaded(var_90_bool);
	var_90_bool = var_88_bool;
}


void func_5360(int var_106_int)
{
	var_106_int = 515560;
}


void func_4337(bool var_58_bool, object var_59_object, float var_60_float)
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
	func_4544(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_75_cvector = ((var_73_cvector * var_60_float) + (var_85_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_77_bool;
	@IsOverrideActive(var_77_bool);
	if(var_77_bool != 0)
		var_58_bool = false;
	@StopWorld();
	@CameraTransit((var_72_cvector + var_75_cvector), var_74_cvector);
	var_98_float = GetByIndex(var_75_cvector, 0);
	var_99_float = GetByIndex(var_75_cvector, 2);
	@Rotate(var_98_float, var_99_float);
	bool var_100_bool;
	func_5368(var_100_bool);
	if(var_100_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_4399;
		@LookAsyncCamera("head");
	}
Label_4399:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_5362(int var_105_int)
{
	var_105_int = 503345;
}


void func_5364(string var_107_string)
{
	var_107_string = "ui/NPC_Citizen3.png";
}


void func_5366(string var_108_string)
{
	var_108_string = "ui/NPC_Citizen3_b.png";
}


void func_5368(bool var_25_bool)
{
	var_25_bool = false;
}


void func_5370(void)
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_5284(true);
}


void func_251(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
}


void func_5378(object var_34_object, object var_49_object)
{
	bool var_36_bool;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		@IsOverrideActive(var_36_bool);
		if(!var_36_bool) { //@nz
			object var_39_object;
			var_34_object = var_39_object;
			func_5271(var_39_object);
		}
		return 2;
	EMIT "GOTO 0x1529";
	}
	int var_47_int; object var_48_object;
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	if(1000 == var_49_object) {
		bool var_390_bool; object var_391_object;
		var_34_object = var_391_object;
		func_4422(var_390_bool, var_391_object);
		if(!var_390_bool) //@nz
			return 2;
		object var_422_object;
		var_34_object = var_422_object;
		TaskCall(0);
		func_0(var_422_object);
		TaskReturn();
		object var_429_object;
		var_34_object = var_429_object;
		func_4477();
	}
}


void func_259(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
}


// @pe
void func_1805(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_118_object, object var_119_object)
{
	var_0_bool = var_119_object;
	var_1_bool = var_118_object;
	var_3_bool = false;
	if(1 != 0) {
		func_2231(var_119_object, "Neutral");
		var_0_bool->SetMessage(537506); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(537507, -1, 39354); //@t
		bool var_141_bool = false;
		bool var_142_bool = false;
		bool var_143_bool;
		func_4983(var_1_bool);
		if(var_143_bool != 0) {
			bool var_151_bool;
			func_4995(var_151_bool, var_1_bool);
			if(var_151_bool != 0)
				var_142_bool = true;
		}
		if(var_142_bool != 0) {
			bool var_162_bool;
			func_5105(var_162_bool, var_1_bool);
			if(var_162_bool != 0)
				var_141_bool = true;
		}
		if(var_141_bool != 0)
			var_0_bool->AddReply(537508, 39356, 39355); //@t
		bool var_180_bool = false;
		bool var_181_bool = false;
		bool var_182_bool;
		func_4983(var_1_bool);
		if(var_182_bool != 0) {
			bool var_184_bool;
			func_4995(var_184_bool, var_1_bool);
			if(var_184_bool != 0)
				var_181_bool = true;
		}
		if(var_181_bool != 0) {
			bool var_186_bool;
			func_5115(var_186_bool, var_1_bool);
			if(var_186_bool != 0)
				var_180_bool = true;
		}
		if(var_180_bool != 0)
			var_0_bool->AddReply(537524, 39372, 39371); //@t
		bool var_196_bool = false;
		bool var_197_bool;
		func_4983(var_1_bool);
		if(var_197_bool != 0) {
			bool var_199_bool;
			func_5005(var_199_bool, var_1_bool);
			if(var_199_bool != 0)
				var_196_bool = true;
		}
		if(var_196_bool != 0)
			var_0_bool->AddReply(537534, 39382, 39381); //@t
		bool var_208_bool = false;
		bool var_209_bool;
		func_4983(var_1_bool);
		if(var_209_bool != 0) {
			bool var_211_bool;
			func_5015(var_211_bool, var_1_bool);
			if(var_211_bool != 0)
				var_208_bool = true;
		}
		if(var_208_bool != 0)
			var_0_bool->AddReply(537549, 39397, 39396); //@t
		bool var_220_bool = false;
		bool var_221_bool;
		func_4983(var_1_bool);
		if(var_221_bool != 0) {
			bool var_223_bool;
			func_5025(var_223_bool, var_1_bool);
			if(var_223_bool != 0)
				var_220_bool = true;
		}
		if(var_220_bool != 0)
			var_0_bool->AddReply(537559, 39407, 39406); //@t
		bool var_232_bool = false;
		bool var_233_bool;
		func_4983(var_1_bool);
		if(var_233_bool != 0) {
			bool var_235_bool;
			func_5035(var_235_bool, var_1_bool);
			if(var_235_bool != 0)
				var_232_bool = true;
		}
		if(var_232_bool != 0)
			var_0_bool->AddReply(537571, 39419, 39418); //@t
		bool var_244_bool = false;
		bool var_245_bool;
		func_4983(var_1_bool);
		if(var_245_bool != 0) {
			bool var_247_bool;
			func_5045(var_247_bool, var_1_bool);
			if(var_247_bool != 0)
				var_244_bool = true;
		}
		if(var_244_bool != 0)
			var_0_bool->AddReply(537593, 39442, 39441); //@t
		bool var_256_bool = false;
		bool var_257_bool;
		func_4983(var_1_bool);
		if(var_257_bool != 0) {
			bool var_259_bool;
			func_5055(var_259_bool, var_1_bool);
			if(var_259_bool != 0)
				var_256_bool = true;
		}
		if(var_256_bool != 0)
			var_0_bool->AddReply(537603, 39452, 39451); //@t
		bool var_268_bool = false;
		bool var_269_bool;
		func_4983(var_1_bool);
		if(var_269_bool != 0) {
			bool var_271_bool;
			func_5065(var_271_bool, var_1_bool);
			if(var_271_bool != 0)
				var_268_bool = true;
		}
		if(var_268_bool != 0)
			var_0_bool->AddReply(537621, 39470, 39469); //@t
		bool var_280_bool = false;
		bool var_281_bool;
		func_4983(var_1_bool);
		if(var_281_bool != 0) {
			bool var_283_bool;
			func_5075(var_283_bool, var_1_bool);
			if(var_283_bool != 0)
				var_280_bool = true;
		}
		if(var_280_bool != 0)
			var_0_bool->AddReply(537633, 39482, 39481); //@t
		bool var_292_bool = false;
		bool var_293_bool;
		func_4983(var_1_bool);
		if(var_293_bool != 0) {
			bool var_295_bool;
			func_5085(var_295_bool, var_1_bool);
			if(var_295_bool != 0)
				var_292_bool = true;
		}
		if(var_292_bool != 0)
			var_0_bool->AddReply(537640, 39489, 39488); //@t
		bool var_304_bool = false;
		bool var_305_bool;
		func_4983(var_1_bool);
		if(var_305_bool != 0) {
			bool var_307_bool;
			func_5095(var_307_bool, var_1_bool);
			if(var_307_bool != 0)
				var_304_bool = true;
		}
		if(var_304_bool != 0)
			var_0_bool->AddReply(537647, 39496, 39495); //@t
		bool var_316_bool = false;
		bool var_317_bool = false;
		bool var_318_bool;
		func_4983(var_1_bool);
		if(var_318_bool != 0) {
			bool var_320_bool;
			func_5115(var_320_bool, var_1_bool);
			if(var_320_bool != 0)
				var_317_bool = true;
		}
		if(var_317_bool != 0) {
			bool var_322_bool;
			func_4995(var_322_bool, var_1_bool);
			if(var_322_bool != 0)
				var_316_bool = true;
		}
		if(var_316_bool != 0)
			var_0_bool->AddReply(537659, 39508, 39507); //@t
		bool var_327_bool = false;
		bool var_328_bool;
		func_4983(var_1_bool);
		if(var_328_bool != 0) {
			bool var_330_bool;
			func_4995(var_330_bool, var_1_bool);
			if(var_330_bool != 0)
				var_327_bool = true;
		}
		if(var_327_bool != 0)
			var_0_bool->AddReply(537665, 39514, 39513); //@t
		bool var_335_bool = false;
		bool var_336_bool;
		func_4983(var_1_bool);
		if(var_336_bool != 0) {
			bool var_338_bool;
			func_4995(var_338_bool, var_1_bool);
			if(var_338_bool != 0)
				var_335_bool = true;
		}
		if(var_335_bool != 0)
			var_0_bool->AddReply(537671, 39520, 39519); //@t
		bool var_343_bool = false;
		bool var_344_bool = false;
		bool var_345_bool;
		func_4983(var_1_bool);
		if(var_345_bool != 0) {
			bool var_347_bool;
			func_4995(var_347_bool, var_1_bool);
			if(var_347_bool != 0)
				var_344_bool = true;
		}
		if(var_344_bool != 0) {
			bool var_349_bool;
			func_5105(var_349_bool, var_1_bool);
			if(var_349_bool != 0)
				var_343_bool = true;
		}
		if(var_343_bool != 0)
			var_0_bool->AddReply(537689, 39538, 39537); //@t
		bool var_354_bool = false;
		bool var_355_bool = false;
		bool var_356_bool;
		func_4983(var_1_bool);
		if(var_356_bool != 0) {
			bool var_358_bool;
			func_4995(var_358_bool, var_1_bool);
			if(var_358_bool != 0)
				var_355_bool = true;
		}
		if(var_355_bool != 0) {
			bool var_360_bool;
			func_5105(var_360_bool, var_1_bool);
			if(var_360_bool != 0)
				var_354_bool = true;
		}
		if(var_354_bool != 0)
			var_0_bool->AddReply(537702, 39551, 39550); //@t
		var_0_bool->AddReply(537721, -1, 39569); //@t
		goto Label_2201;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x711";
	}
Label_2201:
	bool var_368_bool;
	func_5368(var_368_bool);
	if(var_368_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_4481(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_2230;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2230:
		return 0;

	}
	
}


void func_276(bool var_2_bool, object var_23_object)
{
	bool var_28_bool; object var_29_object;
	func_4297(var_28_bool, var_29_object);
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
	func_4785(var_66_object);
	int var_27_int;
	var_65_int = var_27_int;
	if(var_27_int > 0) {
		if(var_27_int > 1)
			func_259(var_27_int);
		object var_82_object;
		var_23_object = var_82_object;
		func_4794(var_82_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1311(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_4904(int var_25_int)
{
	var_25_int = 0;
}


void func_5418(bool var_67_bool)
{
	float var_68_float;
	func_5257(var_68_float);
	var_67_bool = var_68_float > 0.4;
}


// @pe
void func_4907(void)
{
}


// @pe
void func_4909(int var_209_int)
{
	var_209_int = 0;
}


void func_1327(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4224(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4559(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_5424(bool var_27_bool, object var_28_object, object var_29_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	object var_33_object;
	var_29_object = var_33_object;
	bool var_31_bool;
	func_4838(var_31_bool, var_32_object, var_33_object, 700.0);
	var_31_bool = var_27_bool;
}


// @pe
void func_4912(void)
{
}


// @pe
void func_4914(int var_25_int)
{
	var_25_int = 2;
}


// @pe
void func_4917(object var_33_object)
{
	object var_34_object;
	func_5378(var_34_object, var_34_object);
}


void func_4405(void)
{
	bool var_384_bool;
	@CameraSwitchToNormal();
	bool var_385_bool;
	func_5368(var_385_bool);
	if(var_385_bool != 0) {
	} else {
		@HasAnimationTrack(var_384_bool, "head");
		if(var_384_bool == 0) goto Label_4421;
		@UnlookAsync("head");
	}
Label_4421:
	
}


void func_4923(void)
{
}


void func_316(bool var_0_bool, bool var_1_bool)
{
	float var_98_float; cvector var_99_cvector; cvector var_100_cvector; bool var_101_bool; object var_102_object; bool var_103_bool;
	@rand(var_98_float, 0.5);
	@Sleep(var_98_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_328:
				@GetPosition(var_100_cvector);
				float var_107_float;
				func_375(var_107_float);
				@GetRandomPFPointInCircle(var_99_cvector, var_100_cvector, var_107_float, var_101_bool);
				if(var_101_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_328;
			}
				var_1_bool = false;
		}
		}
		goto Label_344;

	Label_344:
		object var_111_object; cvector var_112_cvector;
		var_99_cvector = var_112_cvector;
		func_403(var_111_object, var_112_cvector);
		var_111_object = var_102_object;
		if(var_102_object != null) {
			@RotatePath(var_102_object, var_103_bool);
			if(var_103_bool != 0) {
				bool var_117_bool;
				func_401(var_117_bool);
				@FollowPath(var_102_object, var_117_bool, var_103_bool);
				var_102_object = null;
				if(var_103_bool != 0) {
					TaskCall(2);
					func_573();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_102_object = null;
	}
	
}


void func_4924(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
}


// @pe
void func_4929(object var_40_object)
{
	object var_41_object;
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
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
	func_4544(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4544(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_4422(bool var_390_bool, object var_391_object)
{
	object var_393_object;
	var_391_object = var_393_object;
	bool var_392_bool;
	func_4430(var_392_bool, var_393_object, (float)70);
	var_392_bool = var_390_bool;
}


void func_4937(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	@CanSee(var_40_bool, var_38_object);
	var_37_bool = true;
	if(var_40_bool != 1) {
		float var_42_float; object var_43_object;
		var_38_object = var_43_object;
		func_4231(var_42_float, var_43_object);
		var_51_bool = var_42_float <= 4000000;
		if(var_51_bool != 1)
			var_37_bool = false;
	}
}


void func_4430(bool var_392_bool, object var_393_object, float var_394_float)
{
	cvector var_404_cvector;
	var_393_object->GetPosition(var_404_cvector);
	float var_403_float;
	var_393_object->GetEyesHeight(var_403_float);
	var_411_float = GetByIndex(var_404_cvector, 1);
	SetByIndex(var_404_cvector, 1) = (var_411_float + var_403_float);
	cvector var_405_cvector;
	@GetPosition(var_405_cvector);
	@GetEyesHeight(var_403_float);
	var_412_float = GetByIndex(var_405_cvector, 1);
	SetByIndex(var_405_cvector, 1) = (var_412_float + var_403_float);
	cvector var_406_cvector = var_404_cvector - var_405_cvector;
	var_413_float = GetByIndex(var_406_cvector, 1);
	SetByIndex(var_406_cvector, 1) = (float)0;
	var_415_float = sqrt(var_406_cvector | var_406_cvector);
	var_406_cvector /= var_415_float;
	cvector var_407_cvector = -var_406_cvector;
	cvector var_408_cvector = (var_406_cvector * var_394_float) - [0.0, 10.0, 0.0];
	bool var_410_bool;
	@IsOverrideActive(var_410_bool);
	if(var_410_bool != 0)
		var_392_bool = false;
	@StopWorld();
	@CameraTransit((var_405_cvector + var_408_cvector), var_407_cvector);
	var_419_float = GetByIndex(var_408_cvector, 0);
	var_420_float = GetByIndex(var_408_cvector, 2);
	@Rotate(var_419_float, var_420_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_392_bool = true;
}


// @pe
void func_4952(object var_139_object)
{
	object var_140_object;
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
}


void func_858(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_4960(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_4937(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
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
	func_4219(var_97_cvector);
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
				func_4219(var_109_cvector);
				var_1_bool = var_109_cvector + var_53_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1422; //@nz

	}
}


// @pe
void func_4967(object var_207_object)
{
	object var_208_object;
	var_207_object = var_208_object;
	func_4952(var_208_object);
}


// @pe
void func_4973(bool var_30_bool)
{
	var_30_bool = false;
}


// @pe
void func_4976(void)
{
}


// @pe
void func_4978(object var_29_object)
{
	var_29_object->SetReturnValue(1000);
}


// @pe
void func_4983(bool var_51_bool)
{
	int var_53_int;
	func_4603(var_53_int, "branch");
	if(var_53_int == 0) {
		var_51_bool = true;
		return 0;
	}
	var_51_bool = false;
}


void func_375(float var_107_float)
{
	float var_109_float;
	@GetCameraFarDistance(var_109_float);
	var_109_float = var_107_float;
}


// @pe
void func_4477(void)
{
	@CameraSwitchToNormal();
}


void func_4481(string var_370_string)
{
	float var_373_float; float var_374_float;
	@lshGetAnimTimes(var_370_string, var_373_float, var_374_float);
	@lshPlayAnimation(var_373_float, var_374_float, false);
}


void func_387(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_4995(bool var_59_bool, object var_60_object)
{
	object var_62_object;
	var_60_object = var_62_object;
	func_5125(var_62_object);
	bool var_61_bool;
	if(var_61_bool != 0) {
		var_59_bool = true;
		return 0;
	}
	var_59_bool = false;
}


void func_4488(string var_37_string, bool var_38_bool)
{
	float var_43_float; float var_44_float;
	@lshGetAnimTimes(var_37_string, var_43_float, var_44_float);
	@lshPlayAnimation(var_43_float, var_44_float, var_38_bool);
}


void func_394(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_5005(bool var_107_bool, object var_108_object)
{
	object var_110_object;
	var_108_object = var_110_object;
	func_5132(var_110_object);
	bool var_109_bool;
	if(var_109_bool != 0) {
		var_107_bool = true;
		return 0;
	}
	var_107_bool = false;
}


void func_4494(object var_91_object)
{
	float var_94_float;
	var_91_object->GetEyesHeight(var_94_float);
	cvector var_95_cvector = [0.0, 0.0, 0.0];
	var_96_float = GetByIndex(var_95_cvector, 1);
	var_94_float = var_96_float;
	SetByIndex(var_95_cvector, 1) = var_96_float;
	@LookAsync(var_91_object, "head", var_95_cvector);
}


void func_401(bool var_117_bool)
{
	var_117_bool = false;
}


void func_403(object var_111_object, cvector var_112_cvector)
{
	object var_114_object;
	@FindShiftedPathTo(var_114_object, var_112_cvector);
	var_114_object = var_111_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5015(bool var_119_bool, object var_120_object)
{
	object var_122_object;
	var_120_object = var_122_object;
	func_5139(var_122_object);
	bool var_121_bool;
	if(var_121_bool != 0) {
		var_119_bool = true;
		return 0;
	}
	var_119_bool = false;
}


void func_4505(void)
{
	bool var_25_bool;
	func_5368(var_25_bool);
	if(var_25_bool != 0)
		@lshStopSpeech();
}


void func_4512(string var_53_string, int var_54_int, int var_55_int)
{
	bool var_57_bool;
	int var_59_int;
	var_54_int = var_59_int;
	int var_60_int;
	var_55_int = var_60_int;
	bool var_58_bool;
	func_4554(var_58_bool, var_59_int, var_60_int);
	if(var_58_bool != 0)
		@AddItem(var_57_bool, var_53_string, 0);
}


// @pe
void func_5025(bool var_131_bool, object var_132_object)
{
	object var_134_object;
	var_132_object = var_134_object;
	func_5146(var_134_object);
	bool var_133_bool;
	if(var_133_bool != 0) {
		var_131_bool = true;
		return 0;
	}
	var_131_bool = false;
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


// @pe
void func_5035(bool var_143_bool, object var_144_object)
{
	object var_146_object;
	var_144_object = var_146_object;
	func_5153(var_146_object);
	bool var_145_bool;
	if(var_145_bool != 0) {
		var_143_bool = true;
		return 0;
	}
	var_143_bool = false;
}


void func_4523(string var_29_string, int var_30_int, int var_31_int, int var_32_int)
{
	int var_35_int; bool var_36_bool;
	int var_38_int;
	var_30_int = var_38_int;
	int var_39_int;
	var_31_int = var_39_int;
	bool var_37_bool;
	func_4554(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		@irand(var_35_int, var_32_int);
		@AddItem(var_36_bool, var_29_string, 0, (var_35_int + 1));
	}
}


// @pe
void func_5045(bool var_155_bool, object var_156_object)
{
	object var_158_object;
	var_156_object = var_158_object;
	func_5160(var_158_object);
	bool var_157_bool;
	if(var_157_bool != 0) {
		var_155_bool = true;
		return 0;
	}
	var_155_bool = false;
}


void func_4538(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5055(bool var_167_bool, object var_168_object)
{
	object var_170_object;
	var_168_object = var_170_object;
	func_5167(var_170_object);
	bool var_169_bool;
	if(var_169_bool != 0) {
		var_167_bool = true;
		return 0;
	}
	var_167_bool = false;
}


void func_4544(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_55_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_55_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_55_float;
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
	func_4544(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4544(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_5065(bool var_179_bool, object var_180_object)
{
	object var_182_object;
	var_180_object = var_182_object;
	func_5174(var_182_object);
	bool var_181_bool;
	if(var_181_bool != 0) {
		var_179_bool = true;
		return 0;
	}
	var_179_bool = false;
}


void func_4554(bool var_37_bool, int var_38_int, int var_39_int)
{
	int var_41_int;
	@irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
}


// @pe
void func_4559(float var_85_float, cvector var_86_cvector, cvector var_87_cvector)
{
	var_92_float = sqrt((var_86_cvector | var_86_cvector) * (var_87_cvector | var_87_cvector));
	var_85_float = (var_86_cvector | var_87_cvector) / var_92_float;
}


// @pe
void func_5075(bool var_191_bool, object var_192_object)
{
	object var_194_object;
	var_192_object = var_194_object;
	func_5181(var_194_object);
	bool var_193_bool;
	if(var_193_bool != 0) {
		var_191_bool = true;
		return 0;
	}
	var_191_bool = false;
}


// @pe
void func_4567(float var_75_float, cvector var_76_cvector, cvector var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_75_float = (var_78_float * var_79_float) + (var_81_float * var_82_float);
}


// @pe
void func_5085(bool var_203_bool, object var_204_object)
{
	object var_206_object;
	var_204_object = var_206_object;
	func_5188(var_206_object);
	bool var_205_bool;
	if(var_205_bool != 0) {
		var_203_bool = true;
		return 0;
	}
	var_203_bool = false;
}


// @pe
void func_4576(float var_84_float, cvector var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_84_float = sqrt((var_86_float * var_87_float) + (var_89_float * var_90_float));
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
	func_4219(var_140_cvector);
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
				func_4219(var_152_cvector);
				var_1_bool = var_152_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1041; //@nz

	}
}


// @pe
void func_5095(bool var_215_bool, object var_216_object)
{
	object var_218_object;
	var_216_object = var_218_object;
	func_5195(var_218_object);
	bool var_217_bool;
	if(var_217_bool != 0) {
		var_215_bool = true;
		return 0;
	}
	var_215_bool = false;
}


// @pe
void func_4586(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	cvector var_77_cvector;
	var_74_cvector = var_77_cvector;
	float var_75_float;
	func_4567(var_75_float, var_76_cvector, var_77_cvector);
	float var_84_float; cvector var_85_cvector;
	var_73_cvector = var_85_cvector;
	func_4576(var_84_float, var_85_cvector);
	float var_93_float; cvector var_94_cvector;
	var_74_cvector = var_94_cvector;
	func_4576(var_93_float, var_94_cvector);
	var_72_float = var_75_float / (var_84_float * var_93_float);
}


// @pe
void func_5105(bool var_70_bool, object var_71_object)
{
	object var_73_object;
	var_71_object = var_73_object;
	func_5202(var_73_object);
	bool var_72_bool;
	if(var_72_bool != 0) {
		var_70_bool = true;
		return 0;
	}
	var_70_bool = false;
}


void func_1521(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4224(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4559(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_5115(bool var_94_bool, object var_95_object)
{
	object var_97_object;
	var_95_object = var_97_object;
	func_5223(var_97_object);
	bool var_96_bool;
	if(var_96_bool != 0) {
		var_94_bool = true;
		return 0;
	}
	var_94_bool = false;
}


