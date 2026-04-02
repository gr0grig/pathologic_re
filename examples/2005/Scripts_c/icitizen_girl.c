// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool;
		func_5667(var_23_bool);
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
		func_5669();
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
		func_5159(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_5162(var_32_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_4974(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5057(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_75_object;
			var_22_bool = var_75_object;
			func_5067(var_75_object);
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
		func_5719(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_5075(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_251(var_26_int);
				object var_112_object;
				var_22_object = var_112_object;
				func_5085(var_112_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		int var_25_int;
		func_5169(var_25_int, var_26_object);
		int var_24_int;
		var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_72_object;
			var_22_bool = var_72_object;
			func_5185(var_72_object);
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
		func_4888(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_251(var_25_int);
			object var_59_object; string var_60_string;
			var_22_string = var_59_object;
			var_23_bool = var_60_string;
			func_4920(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_23_bool = var_209_string;
			var_22_string = var_210_object;
			func_5191(var_210_object);
			var_208_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_192;
			if(var_25_int > 1)
				func_251(var_25_int);
			string var_215_string; object var_216_object;
			var_23_bool = var_215_string;
			var_22_string = var_216_object;
			func_5194();
		}
	Label_192:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; string var_24_string;
		func_4987(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_251(var_24_string);
			string var_33_string;
			var_22_bool = var_33_string;
			func_5003(var_33_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; object var_24_object;
		func_4945(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_251(var_24_object);
			object var_38_object;
			var_22_bool = var_38_object;
			func_4968(var_38_object);
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
		func_5168();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_251(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_4882();
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
		func_5159(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_5162(var_31_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_4974(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5057(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_74_object;
			var_22_bool = var_74_object;
			func_5067(var_74_object);
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
		func_5719(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_5075(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_654();
				object var_111_object;
				var_22_object = var_111_object;
				func_5085(var_111_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		int var_25_int;
		func_5169(var_25_int, var_26_object);
		int var_24_int;
		var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_71_object;
			var_22_bool = var_71_object;
			func_5185(var_71_object);
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
		func_4888(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_654();
			object var_58_object; string var_59_string;
			var_22_string = var_58_object;
			var_23_bool = var_59_string;
			func_4920(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_23_bool = var_208_string;
			var_22_string = var_209_object;
			func_5191(var_209_object);
			var_207_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_537;
			if(var_25_int > 1)
				func_654();
			string var_214_string; object var_215_object;
			var_23_bool = var_214_string;
			var_22_string = var_215_object;
			func_5194();
		}
	Label_537:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_4987(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_654();
			string var_32_string;
			var_22_bool = var_32_string;
			func_5003(var_32_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_654();
		func_5168();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_4945(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_654();
			object var_37_object;
			var_22_bool = var_37_object;
			func_4968(var_37_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_5159(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_5162(var_33_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_4974(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5057(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_76_object;
			var_22_bool = var_76_object;
			func_5067(var_76_object);
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
		func_5719(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_5075(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_858();
				object var_113_object;
				var_22_object = var_113_object;
				func_5085(var_113_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		int var_25_int;
		func_5169(var_25_int, var_26_object);
		int var_24_int;
		var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_73_object;
			var_22_bool = var_73_object;
			func_5185(var_73_object);
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
		func_4888(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_858();
			object var_60_object; string var_61_string;
			var_22_string = var_60_object;
			var_23_bool = var_61_string;
			func_4920(var_60_object, var_61_string);
		} else {
			int var_209_int; string var_210_string; object var_211_object;
			var_23_bool = var_210_string;
			var_22_string = var_211_object;
			func_5191(var_211_object);
			var_209_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_843;
			if(var_25_int > 1)
				func_858();
			string var_216_string; object var_217_object;
			var_23_bool = var_216_string;
			var_22_string = var_217_object;
			func_5194();
		}
	Label_843:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_4987(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_858();
			string var_34_string;
			var_22_bool = var_34_string;
			func_5003(var_34_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_858();
		object var_25_object;
		var_22_bool = var_25_object;
		func_4882();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		if(var_22_bool != 111)
			return 4;
		bool var_29_bool;
		func_4552(var_29_bool, var_0_bool);
		if(!var_29_bool) { //@nz
			func_858();
			return 4;
		}
		cvector var_25_cvector;
		@GetDirection(var_25_cvector);
		cvector var_66_cvector;
		func_4479(var_66_cvector, var_0_bool);
		cvector var_26_cvector;
		var_66_cvector = var_26_cvector;
		float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
		var_25_cvector = var_73_cvector;
		var_26_cvector = var_74_cvector;
		func_4841(var_72_float, var_73_cvector, var_74_cvector);
		if(var_72_float < 0.49999997)
			func_4576(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_858();
		func_5168();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_4945(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_858();
			object var_39_object;
			var_22_bool = var_39_object;
			func_4968(var_39_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1124(var_21_bool);
		func_5168();
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
			func_4474(var_94_cvector);
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
		func_4882();
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
			func_4474(var_94_cvector);
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
		func_4882();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1505(var_21_bool);
		func_5168();
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
			func_4474(var_94_cvector);
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
		func_4882();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1699(var_21_bool);
		func_5168();
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
			func_4474(var_94_cvector);
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
		func_4882();
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
			func_4760();
			if(var_23_int == 39084) {
				object var_28_object = var_1_bool;
				func_5250(var_0_bool);
			}
			if(var_22_int == 39083) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537240); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537241, -1, 39084); //@t
				bool var_49_bool = false;
				bool var_50_bool;
				func_5255(var_1_bool);
				if(var_50_bool != 0) {
					bool var_58_bool;
					func_5267(var_58_bool, var_1_bool);
					if(var_58_bool != 0)
						var_49_bool = true;
				}
				if(var_49_bool != 0)
					var_0_bool->AddReply(537242, 39086, 39085); //@t
				bool var_72_bool = false;
				bool var_73_bool;
				func_5255(var_1_bool);
				if(var_73_bool != 0) {
					bool var_75_bool;
					func_5267(var_75_bool, var_1_bool);
					if(var_75_bool != 0)
						var_72_bool = true;
				}
				if(var_72_bool != 0)
					var_0_bool->AddReply(537277, 39122, 39121); //@t
				bool var_80_bool = false;
				bool var_81_bool;
				func_5255(var_1_bool);
				if(var_81_bool != 0) {
					bool var_83_bool;
					func_5277(var_83_bool, var_1_bool);
					if(var_83_bool != 0)
						var_80_bool = true;
				}
				if(var_80_bool != 0)
					var_0_bool->AddReply(537329, 39176, 39175); //@t
				bool var_92_bool = false;
				bool var_93_bool = false;
				bool var_94_bool;
				func_5255(var_1_bool);
				if(var_94_bool != 0) {
					bool var_96_bool;
					func_5287(var_96_bool, var_1_bool);
					if(var_96_bool != 0)
						var_93_bool = true;
				}
				if(var_93_bool != 0) {
					bool var_102_bool;
					func_5387(var_102_bool, var_1_bool);
					if(var_102_bool != 0)
						var_92_bool = true;
				}
				if(var_92_bool != 0)
					var_0_bool->AddReply(537352, 39199, 39198); //@t
				bool var_120_bool = false;
				bool var_121_bool = false;
				bool var_122_bool;
				func_5255(var_1_bool);
				if(var_122_bool != 0) {
					bool var_124_bool;
					func_5287(var_124_bool, var_1_bool);
					if(var_124_bool != 0)
						var_121_bool = true;
				}
				if(var_121_bool != 0) {
					bool var_126_bool;
					func_5397(var_126_bool, var_1_bool);
					if(var_126_bool != 0)
						var_120_bool = true;
				}
				if(var_120_bool != 0)
					var_0_bool->AddReply(537359, 39206, 39205); //@t
				bool var_136_bool = false;
				bool var_137_bool = false;
				bool var_138_bool;
				func_5255(var_1_bool);
				if(var_138_bool != 0) {
					bool var_140_bool;
					func_5297(var_140_bool, var_1_bool);
					if(var_140_bool != 0)
						var_137_bool = true;
				}
				if(var_137_bool != 0) {
					bool var_146_bool;
					func_5387(var_146_bool, var_1_bool);
					if(var_146_bool != 0)
						var_136_bool = true;
				}
				if(var_136_bool != 0)
					var_0_bool->AddReply(537380, 39227, 39226); //@t
				bool var_151_bool = false;
				bool var_152_bool = false;
				bool var_153_bool;
				func_5255(var_1_bool);
				if(var_153_bool != 0) {
					bool var_155_bool;
					func_5297(var_155_bool, var_1_bool);
					if(var_155_bool != 0)
						var_152_bool = true;
				}
				if(var_152_bool != 0) {
					bool var_157_bool;
					func_5397(var_157_bool, var_1_bool);
					if(var_157_bool != 0)
						var_151_bool = true;
				}
				if(var_151_bool != 0)
					var_0_bool->AddReply(537390, 39237, 39236); //@t
				bool var_162_bool = false;
				bool var_163_bool;
				func_5255(var_1_bool);
				if(var_163_bool != 0) {
					bool var_165_bool;
					func_5307(var_165_bool, var_1_bool);
					if(var_165_bool != 0)
						var_162_bool = true;
				}
				if(var_162_bool != 0)
					var_0_bool->AddReply(537400, 39247, 39246); //@t
				bool var_174_bool = false;
				bool var_175_bool;
				func_5255(var_1_bool);
				if(var_175_bool != 0) {
					bool var_177_bool;
					func_5317(var_177_bool, var_1_bool);
					if(var_177_bool != 0)
						var_174_bool = true;
				}
				if(var_174_bool != 0)
					var_0_bool->AddReply(537423, 39270, 39269); //@t
				bool var_186_bool = false;
				bool var_187_bool;
				func_5255(var_1_bool);
				if(var_187_bool != 0) {
					bool var_189_bool;
					func_5327(var_189_bool, var_1_bool);
					if(var_189_bool != 0)
						var_186_bool = true;
				}
				if(var_186_bool != 0)
					var_0_bool->AddReply(537433, 39280, 39279); //@t
				bool var_198_bool = false;
				bool var_199_bool;
				func_5255(var_1_bool);
				if(var_199_bool != 0) {
					bool var_201_bool;
					func_5337(var_201_bool, var_1_bool);
					if(var_201_bool != 0)
						var_198_bool = true;
				}
				if(var_198_bool != 0)
					var_0_bool->AddReply(537451, 39299, 39298); //@t
				bool var_210_bool = false;
				bool var_211_bool;
				func_5255(var_1_bool);
				if(var_211_bool != 0) {
					bool var_213_bool;
					func_5347(var_213_bool, var_1_bool);
					if(var_213_bool != 0)
						var_210_bool = true;
				}
				if(var_210_bool != 0)
					var_0_bool->AddReply(537460, 39308, 39307); //@t
				bool var_222_bool = false;
				bool var_223_bool;
				func_5255(var_1_bool);
				if(var_223_bool != 0) {
					bool var_225_bool;
					func_5357(var_225_bool, var_1_bool);
					if(var_225_bool != 0)
						var_222_bool = true;
				}
				if(var_222_bool != 0)
					var_0_bool->AddReply(537473, 39321, 39320); //@t
				bool var_234_bool = false;
				bool var_235_bool;
				func_5255(var_1_bool);
				if(var_235_bool != 0) {
					bool var_237_bool;
					func_5367(var_237_bool, var_1_bool);
					if(var_237_bool != 0)
						var_234_bool = true;
				}
				if(var_234_bool != 0)
					var_0_bool->AddReply(537483, 39331, 39330); //@t
				bool var_246_bool = false;
				bool var_247_bool;
				func_5255(var_1_bool);
				if(var_247_bool != 0) {
					bool var_249_bool;
					func_5377(var_249_bool, var_1_bool);
					if(var_249_bool != 0)
						var_246_bool = true;
				}
				if(var_246_bool != 0)
					var_0_bool->AddReply(537493, 39341, 39340); //@t
				var_0_bool->AddReply(537503, -1, 39350); //@t
				var_0_bool->AddReply(537504, -1, 39351); //@t
				return 0;
			}
			if(var_22_int == 39341) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537494); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537495, 39343, 39342); //@t
				var_0_bool->AddReply(537499, 39347, 39346); //@t
				return 0;
			}
			if(var_22_int == 39347) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537500); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537501, -1, 39348); //@t
				var_0_bool->AddReply(537502, -1, 39349); //@t
				return 0;
			}
			if(var_22_int == 39343) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537496); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537497, -1, 39344); //@t
				var_0_bool->AddReply(537498, -1, 39345); //@t
				return 0;
			}
			if(var_22_int == 39331) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537484); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537485, 39333, 39332); //@t
				var_0_bool->AddReply(537492, -1, 39339); //@t
				return 0;
			}
			if(var_22_int == 39333) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537486); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537487, 39335, 39334); //@t
				var_0_bool->AddReply(537491, -1, 39338); //@t
				return 0;
			}
			if(var_22_int == 39335) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537488); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537489, -1, 39336); //@t
				var_0_bool->AddReply(537490, -1, 39337); //@t
				return 0;
			}
			if(var_22_int == 39321) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537474); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537475, 39323, 39322); //@t
				var_0_bool->AddReply(537482, -1, 39329); //@t
				return 0;
			}
			if(var_22_int == 39323) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537476); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537477, 39325, 39324); //@t
				var_0_bool->AddReply(537481, -1, 39328); //@t
				return 0;
			}
			if(var_22_int == 39325) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537478); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537479, -1, 39326); //@t
				var_0_bool->AddReply(537480, -1, 39327); //@t
				return 0;
			}
			if(var_22_int == 39308) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537461); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537462, 39310, 39309); //@t
				var_0_bool->AddReply(537472, -1, 39319); //@t
				return 0;
			}
			if(var_22_int == 39310) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537463); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537464, 39312, 39311); //@t
				var_0_bool->AddReply(537471, -1, 39318); //@t
				return 0;
			}
			if(var_22_int == 39312) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537465); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537466, 39314, 39313); //@t
				var_0_bool->AddReply(537470, -1, 39317); //@t
				return 0;
			}
			if(var_22_int == 39314) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537467); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537468, -1, 39315); //@t
				var_0_bool->AddReply(537469, -1, 39316); //@t
				return 0;
			}
			if(var_22_int == 39299) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537452); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537453, 39301, 39300); //@t
				var_0_bool->AddReply(537459, -1, 39306); //@t
				return 0;
			}
			if(var_22_int == 39301) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537454); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537455, 39303, 39302); //@t
				return 0;
			}
			if(var_22_int == 39303) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537456); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537457, -1, 39304); //@t
				var_0_bool->AddReply(537458, -1, 39305); //@t
				return 0;
			}
			if(var_22_int == 39280) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537434); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537435, 39282, 39281); //@t
				var_0_bool->AddReply(537447, 39294, 39293); //@t
				return 0;
			}
			if(var_22_int == 39294) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537448); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537449, 39284, 39295); //@t
				var_0_bool->AddReply(537450, -1, 39297); //@t
				return 0;
			}
			if(var_22_int == 39282) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537436); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537437, 39284, 39283); //@t
				return 0;
			}
			if(var_22_int == 39284) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537438); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537439, 39286, 39285); //@t
				var_0_bool->AddReply(537442, 39289, 39288); //@t
				return 0;
			}
			if(var_22_int == 39289) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537443); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537444, 39291, 39290); //@t
				return 0;
			}
			if(var_22_int == 39291) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537445); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537446, -1, 39292); //@t
				return 0;
			}
			if(var_22_int == 39286) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537440); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537441, -1, 39287); //@t
				return 0;
			}
			if(var_22_int == 39270) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537424); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537425, 39272, 39271); //@t
				var_0_bool->AddReply(537432, -1, 39278); //@t
				return 0;
			}
			if(var_22_int == 39272) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537426); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537427, 39274, 39273); //@t
				var_0_bool->AddReply(537431, -1, 39277); //@t
				return 0;
			}
			if(var_22_int == 39274) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537428); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537429, -1, 39275); //@t
				var_0_bool->AddReply(537430, -1, 39276); //@t
				return 0;
			}
			if(var_22_int == 39247) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537401); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537402, 39249, 39248); //@t
				var_0_bool->AddReply(537418, 39265, 39264); //@t
				var_0_bool->AddReply(537422, -1, 39268); //@t
				return 0;
			}
			if(var_22_int == 39265) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537419); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537420, -1, 39266); //@t
				var_0_bool->AddReply(537421, -1, 39267); //@t
				return 0;
			}
			if(var_22_int == 39249) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537403); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537404, 39251, 39250); //@t
				var_0_bool->AddReply(537417, -1, 39263); //@t
				return 0;
			}
			if(var_22_int == 39251) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537405); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537406, 39253, 39252); //@t
				var_0_bool->AddReply(537416, -1, 39262); //@t
				return 0;
			}
			if(var_22_int == 39253) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537407); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537408, 39255, 39254); //@t
				var_0_bool->AddReply(537415, -1, 39261); //@t
				return 0;
			}
			if(var_22_int == 39255) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537409); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537410, 39257, 39256); //@t
				var_0_bool->AddReply(537414, -1, 39260); //@t
				return 0;
			}
			if(var_22_int == 39257) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537411); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537412, -1, 39258); //@t
				var_0_bool->AddReply(537413, -1, 39259); //@t
				return 0;
			}
			if(var_22_int == 39237) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537391); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537392, 39239, 39238); //@t
				var_0_bool->AddReply(537397, 39244, 39243); //@t
				return 0;
			}
			if(var_22_int == 39244) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537398); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537399, -1, 39245); //@t
				return 0;
			}
			if(var_22_int == 39239) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537393); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537394, 39241, 39240); //@t
				return 0;
			}
			if(var_22_int == 39241) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537395); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537396, -1, 39242); //@t
				return 0;
			}
			if(var_22_int == 39227) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537381); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537382, 39229, 39228); //@t
				var_0_bool->AddReply(537386, 39233, 39232); //@t
				var_0_bool->AddReply(537389, -1, 39235); //@t
				return 0;
			}
			if(var_22_int == 39233) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537387); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537388, -1, 39234); //@t
				return 0;
			}
			if(var_22_int == 39229) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537383); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537384, -1, 39230); //@t
				var_0_bool->AddReply(537385, -1, 39231); //@t
				return 0;
			}
			if(var_22_int == 39206) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537360); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537361, 39208, 39207); //@t
				var_0_bool->AddReply(537376, 39223, 39222); //@t
				var_0_bool->AddReply(537379, -1, 39225); //@t
				return 0;
			}
			if(var_22_int == 39223) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537377); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537378, -1, 39224); //@t
				return 0;
			}
			if(var_22_int == 39208) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537362); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537363, 39210, 39209); //@t
				var_0_bool->AddReply(537369, 39216, 39215); //@t
				return 0;
			}
			if(var_22_int == 39216) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537370); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537371, 39218, 39217); //@t
				var_0_bool->AddReply(537375, -1, 39221); //@t
				return 0;
			}
			if(var_22_int == 39218) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537372); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537373, -1, 39219); //@t
				var_0_bool->AddReply(537374, -1, 39220); //@t
				return 0;
			}
			if(var_22_int == 39210) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537364); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537365, 39212, 39211); //@t
				return 0;
			}
			if(var_22_int == 39212) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537366); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537367, -1, 39213); //@t
				var_0_bool->AddReply(537368, -1, 39214); //@t
				return 0;
			}
			if(var_22_int == 39199) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537353); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537354, 39201, 39200); //@t
				var_0_bool->AddReply(537358, -1, 39204); //@t
				return 0;
			}
			if(var_22_int == 39201) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537355); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537356, -1, 39202); //@t
				var_0_bool->AddReply(537357, -1, 39203); //@t
				return 0;
			}
			if(var_22_int == 39176) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537330); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537331, 39178, 39177); //@t
				var_0_bool->AddReply(537341, 39188, 39187); //@t
				var_0_bool->AddReply(537351, -1, 39197); //@t
				return 0;
			}
			if(var_22_int == 39188) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537342); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537343, 39190, 39189); //@t
				var_0_bool->AddReply(537349, -1, 39195); //@t
				return 0;
			}
			if(var_22_int == 39190) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537344); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537345, 39192, 39191); //@t
				var_0_bool->AddReply(537348, -1, 39194); //@t
				return 0;
			}
			if(var_22_int == 39192) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537346); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537347, -1, 39193); //@t
				return 0;
			}
			if(var_22_int == 39178) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537332); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537333, 39180, 39179); //@t
				var_0_bool->AddReply(537336, 39183, 39182); //@t
				return 0;
			}
			if(var_22_int == 39183) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537337); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537338, 39185, 39184); //@t
				return 0;
			}
			if(var_22_int == 39185) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537339); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537340, -1, 39186); //@t
				return 0;
			}
			if(var_22_int == 39180) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537334); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537335, -1, 39181); //@t
				return 0;
			}
			if(var_22_int == 39122) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537278); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537279, 39124, 39123); //@t
				var_0_bool->AddReply(537292, 39124, 39137); //@t
				var_0_bool->AddReply(537293, 39140, 39139); //@t
				var_0_bool->AddReply(537304, 39151, 39150); //@t
				var_0_bool->AddReply(537328, -1, 39174); //@t
				return 0;
			}
			if(var_22_int == 39151) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537305); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537306, 39153, 39152); //@t
				var_0_bool->AddReply(537318, 39165, 39164); //@t
				return 0;
			}
			if(var_22_int == 39165) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537319); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537320, -1, 39166); //@t
				var_0_bool->AddReply(537321, 39168, 39167); //@t
				return 0;
			}
			if(var_22_int == 39168) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537322); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537323, -1, 39169); //@t
				var_0_bool->AddReply(537324, 39171, 39170); //@t
				return 0;
			}
			if(var_22_int == 39171) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537325); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537326, -1, 39172); //@t
				return 0;
			}
			if(var_22_int == 39153) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537307); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537308, 39155, 39154); //@t
				var_0_bool->AddReply(537317, -1, 39163); //@t
				return 0;
			}
			if(var_22_int == 39155) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537309); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537310, 39157, 39156); //@t
				var_0_bool->AddReply(537313, 39160, 39159); //@t
				return 0;
			}
			if(var_22_int == 39160) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537314); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537315, -1, 39161); //@t
				var_0_bool->AddReply(537316, -1, 39162); //@t
				return 0;
			}
			if(var_22_int == 39157) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537311); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537312, -1, 39158); //@t
				return 0;
			}
			if(var_22_int == 39140) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537294); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537295, 39142, 39141); //@t
				var_0_bool->AddReply(537301, 39148, 39147); //@t
				return 0;
			}
			if(var_22_int == 39148) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537302); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537303, -1, 39149); //@t
				return 0;
			}
			if(var_22_int == 39142) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537297, 39144, 39143); //@t
				return 0;
			}
			if(var_22_int == 39144) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537298); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537299, -1, 39145); //@t
				var_0_bool->AddReply(537300, -1, 39146); //@t
				return 0;
			}
			if(var_22_int == 39124) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537280); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537281, 39126, 39125); //@t
				var_0_bool->AddReply(537288, 39133, 39132); //@t
				return 0;
			}
			if(var_22_int == 39133) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537289); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537290, 39126, 39134); //@t
				var_0_bool->AddReply(537291, -1, 39136); //@t
				return 0;
			}
			if(var_22_int == 39126) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537282); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537283, 39128, 39127); //@t
				var_0_bool->AddReply(537287, -1, 39131); //@t
				return 0;
			}
			if(var_22_int == 39128) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537284); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537285, -1, 39129); //@t
				var_0_bool->AddReply(537286, -1, 39130); //@t
				return 0;
			}
			if(var_22_int == 39086) {
				func_2189(var_23_int, "Neutral");
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
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537265); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537266, -1, 39110); //@t
				var_0_bool->AddReply(537267, 39112, 39111); //@t
				return 0;
			}
			if(var_22_int == 39112) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537268); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537269, 39114, 39113); //@t
				var_0_bool->AddReply(537273, -1, 39117); //@t
				return 0;
			}
			if(var_22_int == 39114) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537270); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537271, -1, 39115); //@t
				var_0_bool->AddReply(537272, -1, 39116); //@t
				return 0;
			}
			if(var_22_int == 39099) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537255); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537256, 39101, 39100); //@t
				var_0_bool->AddReply(537260, 39105, 39104); //@t
				return 0;
			}
			if(var_22_int == 39105) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537261); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537262, -1, 39106); //@t
				var_0_bool->AddReply(537263, -1, 39107); //@t
				return 0;
			}
			if(var_22_int == 39101) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537257); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537258, -1, 39102); //@t
				var_0_bool->AddReply(537259, -1, 39103); //@t
				return 0;
			}
			if(var_22_int == 39088) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537245); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537246, 39090, 39089); //@t
				var_0_bool->AddReply(537253, 39090, 39096); //@t
				return 0;
			}
			if(var_22_int == 39090) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537247); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537248, 39092, 39091); //@t
				var_0_bool->AddReply(537252, -1, 39095); //@t
				return 0;
			}
			if(var_22_int == 39092) {
				func_2189(var_23_int, "Neutral");
				var_0_bool->SetMessage(537249); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537250, -1, 39093); //@t
				var_0_bool->AddReply(537251, -1, 39094); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_1077_bool;
			func_5667(var_1077_bool);
			if(var_1077_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x8a4";
	
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
		bool var_412_bool;
		func_5667(var_412_bool);
		if(var_412_bool == 0) goto Label_15;
		func_4736("Neutral");
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
	func_4799(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4799(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_5659(int var_106_int)
{
	var_106_int = 515559;
}


void func_5661(int var_105_int)
{
	var_105_int = 503344;
}


void func_5663(string var_107_string)
{
	var_107_string = "ui/NPC_Citizen1.png";
}


void func_5665(string var_108_string)
{
	var_108_string = "ui/NPC_Citizen1_b.png";
}


void func_5667(bool var_25_bool)
{
	var_25_bool = false;
}


void func_5669(void)
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_5559(false);
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
	func_4474(var_191_cvector);
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
				func_4474(var_201_cvector);
				var_1_bool = var_201_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1616; //@nz

	}
}


// @pe
void func_5159(int var_25_int)
{
	var_25_int = 2;
}


// @pe
void func_5162(object var_33_object)
{
	object var_34_object;
	func_5677(var_34_object, var_34_object);
}


void func_5677(object var_34_object, object var_49_object)
{
	bool var_36_bool;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		@IsOverrideActive(var_36_bool);
		if(!var_36_bool) { //@nz
			object var_39_object;
			var_34_object = var_39_object;
			func_5546(var_39_object);
		}
		return 2;
	EMIT "GOTO 0x1654";
	}
	int var_47_int; object var_48_object;
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	if(1000 == var_49_object) {
		bool var_378_bool; object var_379_object;
		var_34_object = var_379_object;
		func_4677(var_378_bool, var_379_object);
		if(!var_378_bool) //@nz
			return 2;
		object var_410_object;
		var_34_object = var_410_object;
		TaskCall(0);
		func_0(var_410_object);
		TaskReturn();
		object var_417_object;
		var_34_object = var_417_object;
		func_4732();
	}
}


void func_5168(void)
{
}


void func_5169(int var_25_int, object var_26_object)
{
	@Trace("Received steal");
	bool var_28_bool;
	@CanSee(var_28_bool, var_26_object);
	if(var_28_bool != 0) {
		int var_31_int; object var_32_object;
		var_26_object = var_32_object;
		func_5057(var_31_int, var_32_object);
		var_31_int = var_25_int;
	}
	var_25_int = 0;
}


void func_4660(void)
{
	bool var_372_bool;
	@CameraSwitchToNormal();
	bool var_373_bool;
	func_5667(var_373_bool);
	if(var_373_bool != 0) {
	} else {
		@HasAnimationTrack(var_372_bool, "head");
		if(var_372_bool == 0) goto Label_4676;
		@UnlookAsync("head");
	}
Label_4676:
	
}


void func_55(void)
{
	bool var_105_bool;
	func_4587(var_105_bool);
	if(!var_105_bool) //@nz
		func_5168();
}


void func_573(void)
{
	int var_145_int; int var_146_int; bool var_147_bool; float var_148_float; bool var_149_bool;
	@WaitForAnimEnd();
	bool var_150_bool;
	func_4587(var_150_bool);
	if(!var_150_bool) //@nz
		return 14;
	int var_152_int;
	func_5023(var_152_int);
	int var_143_int;
	var_152_int = var_143_int;
	int var_144_int = 0;
	
	for(;;) {
		bool var_165_bool = false;
		if(var_144_int < 5) {
			bool var_168_bool;
			func_4587(var_168_bool);
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
				func_5016(var_174_string, var_175_int);
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
void func_5185(object var_73_object)
{
	object var_74_object;
	var_73_object = var_74_object;
	func_5067(var_74_object);
}


// @pe
void func_4677(bool var_378_bool, object var_379_object)
{
	object var_381_object;
	var_379_object = var_381_object;
	bool var_380_bool;
	func_4685(var_380_bool, var_381_object, (float)70);
	var_380_bool = var_378_bool;
}


// @pe
void func_5191(int var_209_int)
{
	var_209_int = 0;
}


// @pe
void func_5194(void)
{
}


void func_5196(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
}


void func_4685(bool var_380_bool, object var_381_object, float var_382_float)
{
	cvector var_392_cvector;
	var_381_object->GetPosition(var_392_cvector);
	float var_391_float;
	var_381_object->GetEyesHeight(var_391_float);
	var_399_float = GetByIndex(var_392_cvector, 1);
	SetByIndex(var_392_cvector, 1) = (var_399_float + var_391_float);
	cvector var_393_cvector;
	@GetPosition(var_393_cvector);
	@GetEyesHeight(var_391_float);
	var_400_float = GetByIndex(var_393_cvector, 1);
	SetByIndex(var_393_cvector, 1) = (var_400_float + var_391_float);
	cvector var_394_cvector = var_392_cvector - var_393_cvector;
	var_401_float = GetByIndex(var_394_cvector, 1);
	SetByIndex(var_394_cvector, 1) = (float)0;
	var_403_float = sqrt(var_394_cvector | var_394_cvector);
	var_394_cvector /= var_403_float;
	cvector var_395_cvector = -var_394_cvector;
	cvector var_396_cvector = (var_394_cvector * var_382_float) - [0.0, 10.0, 0.0];
	bool var_398_bool;
	@IsOverrideActive(var_398_bool);
	if(var_398_bool != 0)
		var_380_bool = false;
	@StopWorld();
	@CameraTransit((var_393_cvector + var_396_cvector), var_395_cvector);
	var_407_float = GetByIndex(var_396_cvector, 0);
	var_408_float = GetByIndex(var_396_cvector, 2);
	@Rotate(var_407_float, var_408_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_380_bool = true;
}


// @pe
void func_5201(object var_40_object)
{
	object var_41_object;
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
}


void func_5717(bool var_67_bool)
{
	var_67_bool = true;
}


// @pe
void func_5719(bool var_27_bool, object var_28_object, object var_29_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	object var_33_object;
	var_29_object = var_33_object;
	bool var_31_bool;
	func_5093(var_31_bool, var_32_object, var_33_object, 500.0);
	if(var_31_bool != 0) {
		@SetProperty("ToDie", true);
		var_27_bool = true;
		return 0;
	}
	var_27_bool = false;
}


void func_5209(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	@CanSee(var_40_bool, var_38_object);
	var_37_bool = true;
	if(var_40_bool != 1) {
		float var_42_float; object var_43_object;
		var_38_object = var_43_object;
		func_4486(var_42_float, var_43_object);
		var_51_bool = var_42_float <= 4000000;
		if(var_51_bool != 1)
			var_37_bool = false;
	}
}


void func_1124(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_5224(object var_139_object)
{
	object var_140_object;
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
}


// @pe
void func_5232(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_5209(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
}


void func_1140(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4479(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4814(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_5239(object var_207_object)
{
	object var_208_object;
	var_207_object = var_208_object;
	func_5224(var_208_object);
}


// @pe
void func_4732(void)
{
	@CameraSwitchToNormal();
}


// @pe
void func_5245(bool var_30_bool)
{
	var_30_bool = false;
}


void func_4736(string var_358_string)
{
	float var_361_float; float var_362_float;
	@lshGetAnimTimes(var_358_string, var_361_float, var_362_float);
	@lshPlayAnimation(var_361_float, var_362_float, false);
}


// @pe
void func_5248(void)
{
}


// @pe
void func_5250(object var_29_object)
{
	var_29_object->SetReturnValue(1000);
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
	func_4799(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4799(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_5255(bool var_50_bool)
{
	int var_52_int;
	func_4858(var_52_int, "branch");
	if(var_52_int == 0) {
		var_50_bool = true;
		return 0;
	}
	var_50_bool = false;
}


void func_4743(string var_37_string, bool var_38_bool)
{
	float var_43_float; float var_44_float;
	@lshGetAnimTimes(var_37_string, var_43_float, var_44_float);
	@lshPlayAnimation(var_43_float, var_44_float, var_38_bool);
}


void func_652(bool var_177_bool)
{
	var_177_bool = true;
}


void func_4749(object var_82_object)
{
	float var_85_float;
	var_82_object->GetEyesHeight(var_85_float);
	cvector var_86_cvector = [0.0, 0.0, 0.0];
	var_87_float = GetByIndex(var_86_cvector, 1);
	var_85_float = var_87_float;
	SetByIndex(var_86_cvector, 1) = var_87_float;
	@LookAsync(var_82_object, "head", var_86_cvector);
}


void func_654(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2189(bool var_2_bool, string var_33_string)
{
	bool var_34_bool;
	func_5667(var_34_bool);
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
	func_4743(var_37_string, var_38_bool);
	var_2_bool = var_33_string;
	
}


// @pe
void func_5267(bool var_58_bool, object var_59_object)
{
	object var_61_object;
	var_59_object = var_61_object;
	func_5407(var_61_object);
	bool var_60_bool;
	if(var_60_bool != 0) {
		var_58_bool = true;
		return 0;
	}
	var_58_bool = false;
}


void func_659(bool var_0_bool, object var_74_object)
{
	var_0_bool = var_74_object;
	bool var_81_bool;
	func_710(var_81_bool);
	cvector var_79_cvector;
	@GetDirection(var_79_cvector);
	cvector var_89_cvector;
	func_4479(var_89_cvector, var_0_bool);
	cvector var_80_cvector;
	var_89_cvector = var_80_cvector;
	float var_95_float; cvector var_96_cvector; cvector var_97_cvector;
	var_79_cvector = var_96_cvector;
	var_80_cvector = var_97_cvector;
	func_4841(var_95_float, var_96_cvector, var_97_cvector);
	if(var_95_float < 0) {
		func_4576(var_0_bool);
		var_81_bool = true;
	} else {
		@Sleep(1.5, var_81_bool);
	}
	if(var_81_bool != 0) {
		func_4576(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_4760(void)
{
	bool var_25_bool;
	func_5667(var_25_bool);
	if(var_25_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_5277(bool var_83_bool, object var_84_object)
{
	object var_86_object;
	var_84_object = var_86_object;
	func_5414(var_86_object);
	bool var_85_bool;
	if(var_85_bool != 0) {
		var_83_bool = true;
		return 0;
	}
	var_83_bool = false;
}


void func_4767(string var_61_string, int var_62_int, int var_63_int)
{
	bool var_65_bool;
	int var_67_int;
	var_62_int = var_67_int;
	int var_68_int;
	var_63_int = var_68_int;
	bool var_66_bool;
	func_4809(var_66_bool, var_67_int, var_68_int);
	if(var_66_bool != 0)
		@AddItem(var_65_bool, var_61_string, 0);
}


void func_1186(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_114_object)
{
	float var_124_float; cvector var_126_cvector; float var_127_float;
	cvector var_128_cvector;
	func_1156(var_127_float, var_128_cvector, 1.7453294);
	cvector var_123_cvector;
	var_128_cvector = var_123_cvector;
	if((var_123_cvector | var_123_cvector) < 2500.0) {
		cvector var_160_cvector;
		func_1156(var_127_float, var_160_cvector, 2.6179938);
		var_160_cvector = var_123_cvector;
		var_124_float = var_123_cvector | var_123_cvector;
		if(var_124_float < 2500.0) {
			var_165_float = sqrt(var_124_float);
			@Trace("Can't retreat, distance: " + var_165_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_168_float = GetByIndex(var_123_cvector, 0);
	var_169_float = GetByIndex(var_123_cvector, 2);
	@Rotate(var_168_float, var_169_float);
	cvector var_170_cvector;
	func_4474(var_170_cvector);
	@SetTimer(120, 0.5);
	
Label_1228:
	bool var_125_bool;
	@MovePoint((var_170_cvector + var_123_cvector), 1, var_125_bool);
	if(var_125_bool != 0) {
		if(var_114_object == null) {
			goto Label_1258;
		EMIT "GOTO 0x4e8";

		Label_1258:
			for(;;) {
				return 10;
		}
			cvector var_178_cvector;
			func_1156(var_127_float, var_178_cvector, 2.6179938);
			var_178_cvector = var_126_cvector;
			if((var_126_cvector | var_126_cvector) >= 2500.0) {
				cvector var_182_cvector;
				func_4474(var_182_cvector);
				var_1_bool = var_182_cvector + var_126_cvector;
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
void func_5287(bool var_96_bool, object var_97_object)
{
	object var_99_object;
	var_97_object = var_99_object;
	func_5421(var_99_object);
	bool var_98_bool;
	if(var_98_bool != 0) {
		var_96_bool = true;
		return 0;
	}
	var_96_bool = false;
}


void func_4778(string var_39_string, int var_40_int, int var_41_int, int var_42_int)
{
	int var_45_int; bool var_46_bool;
	int var_48_int;
	var_40_int = var_48_int;
	int var_49_int;
	var_41_int = var_49_int;
	bool var_47_bool;
	func_4809(var_47_bool, var_48_int, var_49_int);
	if(var_47_bool != 0) {
		@irand(var_45_int, var_42_int);
		@AddItem(var_46_bool, var_39_string, 0, (var_45_int + 1));
	}
}


// @pe
void func_5297(bool var_140_bool, object var_141_object)
{
	object var_143_object;
	var_141_object = var_143_object;
	func_5428(var_143_object);
	bool var_142_bool;
	if(var_142_bool != 0) {
		var_140_bool = true;
		return 0;
	}
	var_140_bool = false;
}


void func_1715(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4479(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4814(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_4793(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_5307(bool var_165_bool, object var_166_object)
{
	object var_168_object;
	var_166_object = var_168_object;
	func_5435(var_168_object);
	bool var_167_bool;
	if(var_167_bool != 0) {
		var_165_bool = true;
		return 0;
	}
	var_165_bool = false;
}


void func_4799(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_55_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_55_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_55_float;
}


void func_1731(bool var_0_bool, int var_47_int, object var_48_object)
{
	var_0_bool = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_4592(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_105_int;
	func_5661(var_105_int);
	var_54_object->SetNPCName(var_105_int);
	int var_106_int;
	func_5659(var_106_int);
	var_54_object->SetNPCDescription(var_106_int);
	string var_107_string;
	func_5663(var_107_string);
	var_54_object->SetPhoto(var_107_string);
	string var_108_string;
	func_5665(var_108_string);
	var_54_object->SetPhoto2(var_108_string);
	int var_109_int;
	func_5523(var_109_int);
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
		var_369_bool = !var_57_bool; //@nz
		if(var_369_bool == 0) goto Label_1794;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_1794:
	object var_370_object;
	var_48_object = var_370_object;
	func_4660();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_5317(bool var_177_bool, object var_178_object)
{
	object var_180_object;
	var_178_object = var_180_object;
	func_5442(var_180_object);
	bool var_179_bool;
	if(var_179_bool != 0) {
		var_177_bool = true;
		return 0;
	}
	var_177_bool = false;
}


void func_710(bool var_0_bool)
{
	func_4749(var_0_bool);
}


void func_4809(bool var_47_bool, int var_48_int, int var_49_int)
{
	int var_51_int;
	@irand(var_51_int, var_49_int);
	var_47_bool = var_51_int < var_48_int;
}


// @pe
void func_4814(float var_85_float, cvector var_86_cvector, cvector var_87_cvector)
{
	var_92_float = sqrt((var_86_cvector | var_86_cvector) * (var_87_cvector | var_87_cvector));
	var_85_float = (var_86_cvector | var_87_cvector) / var_92_float;
}


// @pe
void func_5327(bool var_189_bool, object var_190_object)
{
	object var_192_object;
	var_190_object = var_192_object;
	func_5449(var_192_object);
	bool var_191_bool;
	if(var_191_bool != 0) {
		var_189_bool = true;
		return 0;
	}
	var_189_bool = false;
}


// @pe
void func_4822(float var_75_float, cvector var_76_cvector, cvector var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_75_float = (var_78_float * var_79_float) + (var_81_float * var_82_float);
}


// @pe
void func_5337(bool var_201_bool, object var_202_object)
{
	object var_204_object;
	var_202_object = var_204_object;
	func_5456(var_204_object);
	bool var_203_bool;
	if(var_203_bool != 0) {
		var_201_bool = true;
		return 0;
	}
	var_201_bool = false;
}


// @pe
void func_4831(float var_84_float, cvector var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_84_float = sqrt((var_86_float * var_87_float) + (var_89_float * var_90_float));
}


// @pe
void func_5347(bool var_213_bool, object var_214_object)
{
	object var_216_object;
	var_214_object = var_216_object;
	func_5463(var_216_object);
	bool var_215_bool;
	if(var_215_bool != 0) {
		var_213_bool = true;
		return 0;
	}
	var_213_bool = false;
}


// @pe
void func_4841(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	cvector var_77_cvector;
	var_74_cvector = var_77_cvector;
	float var_75_float;
	func_4822(var_75_float, var_76_cvector, var_77_cvector);
	float var_84_float; cvector var_85_cvector;
	var_73_cvector = var_85_cvector;
	func_4831(var_84_float, var_85_cvector);
	float var_93_float; cvector var_94_cvector;
	var_74_cvector = var_94_cvector;
	func_4831(var_93_float, var_94_cvector);
	var_72_float = var_75_float / (var_84_float * var_93_float);
}


// @pe
void func_5357(bool var_225_bool, object var_226_object)
{
	object var_228_object;
	var_226_object = var_228_object;
	func_5470(var_228_object);
	bool var_227_bool;
	if(var_227_bool != 0) {
		var_225_bool = true;
		return 0;
	}
	var_225_bool = false;
}


// @pe
void func_5367(bool var_237_bool, object var_238_object)
{
	object var_240_object;
	var_238_object = var_240_object;
	func_5477(var_240_object);
	bool var_239_bool;
	if(var_239_bool != 0) {
		var_237_bool = true;
		return 0;
	}
	var_237_bool = false;
}


void func_4858(int var_52_int, string var_53_string)
{
	int var_55_int;
	@GetVariable(var_53_string, var_55_int);
	var_55_int = var_52_int;
}


void func_251(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
}


void func_4863(int var_32_int)
{
	float var_34_float;
	@GetGameTime(var_34_float);
	var_32_int = 1 + (var_34_float / 24);
}


// @pe
void func_5377(bool var_249_bool, object var_250_object)
{
	object var_252_object;
	var_250_object = var_252_object;
	func_5484(var_252_object);
	bool var_251_bool;
	if(var_251_bool != 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
}


void func_259(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
}


void func_4872(int var_107_int)
{
	float var_109_float;
	@GetGameTime(var_109_float);
	int var_110_int;
	var_109_float = var_110_int;
	var_107_int = var_110_int % 24;
}


// @pe
void func_5387(bool var_102_bool, object var_103_object)
{
	object var_105_object;
	var_103_object = var_105_object;
	func_5491(var_105_object);
	bool var_104_bool;
	if(var_104_bool != 0) {
		var_102_bool = true;
		return 0;
	}
	var_102_bool = false;
}


// @pe
void func_1805(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_118_object, object var_119_object)
{
	var_0_bool = var_119_object;
	var_1_bool = var_118_object;
	var_3_bool = false;
	if(1 != 0) {
		func_2189(var_119_object, "Neutral");
		var_0_bool->SetMessage(537240); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(537241, -1, 39084); //@t
		bool var_141_bool = false;
		bool var_142_bool;
		func_5255(var_1_bool);
		if(var_142_bool != 0) {
			bool var_150_bool;
			func_5267(var_150_bool, var_1_bool);
			if(var_150_bool != 0)
				var_141_bool = true;
		}
		if(var_141_bool != 0)
			var_0_bool->AddReply(537242, 39086, 39085); //@t
		bool var_164_bool = false;
		bool var_165_bool;
		func_5255(var_1_bool);
		if(var_165_bool != 0) {
			bool var_167_bool;
			func_5267(var_167_bool, var_1_bool);
			if(var_167_bool != 0)
				var_164_bool = true;
		}
		if(var_164_bool != 0)
			var_0_bool->AddReply(537277, 39122, 39121); //@t
		bool var_172_bool = false;
		bool var_173_bool;
		func_5255(var_1_bool);
		if(var_173_bool != 0) {
			bool var_175_bool;
			func_5277(var_175_bool, var_1_bool);
			if(var_175_bool != 0)
				var_172_bool = true;
		}
		if(var_172_bool != 0)
			var_0_bool->AddReply(537329, 39176, 39175); //@t
		bool var_184_bool = false;
		bool var_185_bool = false;
		bool var_186_bool;
		func_5255(var_1_bool);
		if(var_186_bool != 0) {
			bool var_188_bool;
			func_5287(var_188_bool, var_1_bool);
			if(var_188_bool != 0)
				var_185_bool = true;
		}
		if(var_185_bool != 0) {
			bool var_194_bool;
			func_5387(var_194_bool, var_1_bool);
			if(var_194_bool != 0)
				var_184_bool = true;
		}
		if(var_184_bool != 0)
			var_0_bool->AddReply(537352, 39199, 39198); //@t
		bool var_212_bool = false;
		bool var_213_bool = false;
		bool var_214_bool;
		func_5255(var_1_bool);
		if(var_214_bool != 0) {
			bool var_216_bool;
			func_5287(var_216_bool, var_1_bool);
			if(var_216_bool != 0)
				var_213_bool = true;
		}
		if(var_213_bool != 0) {
			bool var_218_bool;
			func_5397(var_218_bool, var_1_bool);
			if(var_218_bool != 0)
				var_212_bool = true;
		}
		if(var_212_bool != 0)
			var_0_bool->AddReply(537359, 39206, 39205); //@t
		bool var_228_bool = false;
		bool var_229_bool = false;
		bool var_230_bool;
		func_5255(var_1_bool);
		if(var_230_bool != 0) {
			bool var_232_bool;
			func_5297(var_232_bool, var_1_bool);
			if(var_232_bool != 0)
				var_229_bool = true;
		}
		if(var_229_bool != 0) {
			bool var_238_bool;
			func_5387(var_238_bool, var_1_bool);
			if(var_238_bool != 0)
				var_228_bool = true;
		}
		if(var_228_bool != 0)
			var_0_bool->AddReply(537380, 39227, 39226); //@t
		bool var_243_bool = false;
		bool var_244_bool = false;
		bool var_245_bool;
		func_5255(var_1_bool);
		if(var_245_bool != 0) {
			bool var_247_bool;
			func_5297(var_247_bool, var_1_bool);
			if(var_247_bool != 0)
				var_244_bool = true;
		}
		if(var_244_bool != 0) {
			bool var_249_bool;
			func_5397(var_249_bool, var_1_bool);
			if(var_249_bool != 0)
				var_243_bool = true;
		}
		if(var_243_bool != 0)
			var_0_bool->AddReply(537390, 39237, 39236); //@t
		bool var_254_bool = false;
		bool var_255_bool;
		func_5255(var_1_bool);
		if(var_255_bool != 0) {
			bool var_257_bool;
			func_5307(var_257_bool, var_1_bool);
			if(var_257_bool != 0)
				var_254_bool = true;
		}
		if(var_254_bool != 0)
			var_0_bool->AddReply(537400, 39247, 39246); //@t
		bool var_266_bool = false;
		bool var_267_bool;
		func_5255(var_1_bool);
		if(var_267_bool != 0) {
			bool var_269_bool;
			func_5317(var_269_bool, var_1_bool);
			if(var_269_bool != 0)
				var_266_bool = true;
		}
		if(var_266_bool != 0)
			var_0_bool->AddReply(537423, 39270, 39269); //@t
		bool var_278_bool = false;
		bool var_279_bool;
		func_5255(var_1_bool);
		if(var_279_bool != 0) {
			bool var_281_bool;
			func_5327(var_281_bool, var_1_bool);
			if(var_281_bool != 0)
				var_278_bool = true;
		}
		if(var_278_bool != 0)
			var_0_bool->AddReply(537433, 39280, 39279); //@t
		bool var_290_bool = false;
		bool var_291_bool;
		func_5255(var_1_bool);
		if(var_291_bool != 0) {
			bool var_293_bool;
			func_5337(var_293_bool, var_1_bool);
			if(var_293_bool != 0)
				var_290_bool = true;
		}
		if(var_290_bool != 0)
			var_0_bool->AddReply(537451, 39299, 39298); //@t
		bool var_302_bool = false;
		bool var_303_bool;
		func_5255(var_1_bool);
		if(var_303_bool != 0) {
			bool var_305_bool;
			func_5347(var_305_bool, var_1_bool);
			if(var_305_bool != 0)
				var_302_bool = true;
		}
		if(var_302_bool != 0)
			var_0_bool->AddReply(537460, 39308, 39307); //@t
		bool var_314_bool = false;
		bool var_315_bool;
		func_5255(var_1_bool);
		if(var_315_bool != 0) {
			bool var_317_bool;
			func_5357(var_317_bool, var_1_bool);
			if(var_317_bool != 0)
				var_314_bool = true;
		}
		if(var_314_bool != 0)
			var_0_bool->AddReply(537473, 39321, 39320); //@t
		bool var_326_bool = false;
		bool var_327_bool;
		func_5255(var_1_bool);
		if(var_327_bool != 0) {
			bool var_329_bool;
			func_5367(var_329_bool, var_1_bool);
			if(var_329_bool != 0)
				var_326_bool = true;
		}
		if(var_326_bool != 0)
			var_0_bool->AddReply(537483, 39331, 39330); //@t
		bool var_338_bool = false;
		bool var_339_bool;
		func_5255(var_1_bool);
		if(var_339_bool != 0) {
			bool var_341_bool;
			func_5377(var_341_bool, var_1_bool);
			if(var_341_bool != 0)
				var_338_bool = true;
		}
		if(var_338_bool != 0)
			var_0_bool->AddReply(537493, 39341, 39340); //@t
		var_0_bool->AddReply(537503, -1, 39350); //@t
		var_0_bool->AddReply(537504, -1, 39351); //@t
		goto Label_2159;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x711";
	}
Label_2159:
	bool var_356_bool;
	func_5667(var_356_bool);
	if(var_356_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_4736(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_2188;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_2188:
		return 0;

	}
	
}


void func_276(bool var_2_bool, object var_23_object)
{
	bool var_28_bool; object var_29_object;
	func_4552(var_28_bool, var_29_object);
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
	func_5040(var_66_object);
	int var_27_int;
	var_65_int = var_27_int;
	if(var_27_int > 0) {
		if(var_27_int > 1)
			func_259(var_27_int);
		object var_73_object;
		var_23_object = var_73_object;
		func_5049(var_73_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_5397(bool var_126_bool, object var_127_object)
{
	object var_129_object;
	var_127_object = var_129_object;
	func_5512(var_129_object);
	bool var_128_bool;
	if(var_128_bool != 0) {
		var_126_bool = true;
		return 0;
	}
	var_126_bool = false;
}


// @pe
void func_4888(bool var_26_bool, object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		bool var_31_bool; object var_32_object;
		var_27_object = var_32_object;
		func_5196(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x1336";
	}
	if(var_28_string == "player_shot") {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_5209(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x1336";
	}
	if(var_28_string == "battle") {
		bool var_54_bool; object var_55_object;
		var_27_object = var_55_object;
		func_5232(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = false;
}


void func_1311(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_5407(bool var_60_bool)
{
	int var_62_int;
	func_4863(var_62_int);
	var_60_bool = var_62_int == 1;
}


// @pe
void func_5414(bool var_85_bool)
{
	int var_87_int;
	func_4863(var_87_int);
	var_85_bool = var_87_int == 2;
}


// @pe
void func_5421(bool var_98_bool)
{
	int var_100_int;
	func_4863(var_100_int);
	var_98_bool = var_100_int == 3;
}


void func_1327(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4479(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4814(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_5428(bool var_142_bool)
{
	int var_144_int;
	func_4863(var_144_int);
	var_142_bool = var_144_int == 4;
}


// @pe
void func_4920(object var_60_object, string var_61_string)
{
	if(var_61_string == "unholster") {
		object var_64_object;
		var_60_object = var_64_object;
		func_5201(var_64_object);
	} else if(var_61_string == "player_shot") {
			object var_139_object;
			var_60_object = var_139_object;
			func_5224(var_139_object);
	}
Label_4944:
	for(;;) {

	}
	
	if(!(var_61_string == "battle")) goto Label_4944;
	object var_207_object;
	var_60_object = var_207_object;
	func_5239(var_207_object);
}


// @pe
void func_5435(bool var_167_bool)
{
	int var_169_int;
	func_4863(var_169_int);
	var_167_bool = var_169_int == 5;
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


// @pe
void func_5442(bool var_179_bool)
{
	int var_181_int;
	func_4863(var_181_int);
	var_179_bool = var_181_int == 6;
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
	func_4799(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4799(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_5449(bool var_191_bool)
{
	int var_193_int;
	func_4863(var_193_int);
	var_191_bool = var_193_int == 7;
}


// @pe
void func_5456(bool var_203_bool)
{
	int var_205_int;
	func_4863(var_205_int);
	var_203_bool = var_205_int == 8;
}


void func_4945(bool var_23_bool, object var_24_object)
{
	bool var_26_bool;
	bool var_27_bool = false;
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_5196(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		func_4494(var_32_bool, var_33_object);
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
void func_5463(bool var_215_bool)
{
	int var_217_int;
	func_4863(var_217_int);
	var_215_bool = var_217_int == 9;
}


void func_858(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_5470(bool var_227_bool)
{
	int var_229_int;
	func_4863(var_229_int);
	var_227_bool = var_229_int == 10;
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
	func_4474(var_97_cvector);
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
				func_4474(var_109_cvector);
				var_1_bool = var_109_cvector + var_53_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1422; //@nz

	}
}


// @pe
void func_5477(bool var_239_bool)
{
	int var_241_int;
	func_4863(var_241_int);
	var_239_bool = var_241_int == 11;
}


// @pe
void func_4968(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_5201(var_40_object);
}


// @pe
void func_5484(bool var_251_bool)
{
	int var_253_int;
	func_4863(var_253_int);
	var_251_bool = var_253_int == 12;
}


// @pe
void func_4974(object var_25_object)
{
	bool var_26_bool; object var_27_object;
	func_4494(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		object var_30_object;
		func_4793(var_30_object);
		@ReportReputationChange(var_27_object, var_30_object, -0.05);
	}
}


// @pe
void func_5491(bool var_104_bool)
{
	bool var_106_bool = false;
	int var_107_int;
	func_4872(var_107_int);
	if(var_107_int >= 0) {
		int var_114_int;
		func_4872(var_114_int);
		if(var_114_int < 12)
			var_106_bool = true;
	}
	if(var_106_bool != 0) {
		var_104_bool = true;
		return 0;
	}
	var_104_bool = false;
}


void func_375(float var_124_float)
{
	float var_126_float;
	@GetCameraFarDistance(var_126_float);
	var_126_float = var_124_float;
}


void func_4474(cvector var_94_cvector)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
}


void func_4987(bool var_23_bool, string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_5245(var_31_object);
		var_30_bool = var_23_bool;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = false;
}


void func_4479(cvector var_79_cvector, object var_80_object)
{
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	cvector var_84_cvector;
	var_80_object->GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
}


void func_387(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_4486(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


// @pe
void func_5512(bool var_128_bool)
{
	int var_130_int;
	func_4872(var_130_int);
	if(var_130_int >= 12)
		var_128_bool = true;
	var_128_bool = false;
}


void func_394(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_5003(string var_34_string)
{
	object var_36_object;
	if(var_34_string == "heal") {
		@FindActor(var_36_object, "player");
		object var_40_object;
		var_36_object = var_40_object;
		func_5248();
		var_36_object = null;
	}
}


void func_4494(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
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


void func_5523(int var_109_int)
{
	int var_111_int;
	@GetVariable("branch", var_111_int);
	if(var_111_int == 0) {
		var_109_int = 1;
		return 2;
	EMIT "GOTO 0x15a2";
	}
	if(var_111_int == 1) {
		var_109_int = 2;
		return 2;
	}
	var_109_int = 3;
}


void func_4499(bool var_51_bool, object var_52_object, string var_53_string)
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


void func_5016(string var_158_string, int var_159_int)
{
	string var_161_string = "idle";
	if(var_159_int != 0)
		var_161_string += var_159_int;
	var_161_string = var_158_string;
}


void func_5023(int var_152_int)
{
	int var_155_int; bool var_156_bool;
	var_155_int = 0;
	
	for(;;) {
		string var_158_string; int var_159_int;
		var_155_int = var_159_int;
		func_5016(var_158_string, var_159_int);
		@HasAnimation(var_156_bool, "all", var_158_string);
		if(!var_156_bool) //@nz
			break;
		var_155_int += 1;
	}
	var_155_int = var_152_int;
}


void func_4511(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_4516(bool var_33_bool, object var_34_object)
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
		func_4511(var_44_bool, var_45_object);
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


void func_5540(int var_40_int)
{
	int var_42_int;
	@GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
}


// @pe
void func_934(object var_75_object)
{
	@Face(var_75_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_85_object;
	func_999(var_77_cvector, var_78_bool, var_85_object, var_85_object);
}


// @pe
void func_5546(object var_39_object)
{
	int var_40_int;
	func_5540(var_40_int);
	if(var_40_int == 1)
		@WorkWithCorpse(var_39_object);
	else
		@Barter(var_39_object);
	
}


// @pe
void func_5040(int var_65_int)
{
	bool var_67_bool;
	func_5717(var_67_bool);
	if(var_67_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
}


void func_5559(bool var_24_bool)
{
	@ClearSubContainer(0);
	int var_32_int;
	func_4863(var_32_int);
	int var_30_int;
	var_32_int = var_30_int;
	if(var_24_bool != 0) {
		func_4778("alpha_pills", 1, 2, 4);
		func_4778("meradorm", 2, 3, 3);
		if(var_30_int >= 3)
			func_4767("beta_pills", 1, 4);
		if(var_30_int >= 8) {
			func_4778("monomicin", 1, 2, 2);
		} else {
				if(var_30_int >= 4)
					func_4767("monomicin", 1, 2);
				func_4767("lockpick", 1, 4);
				func_4767("rifle_ammo", 1, 2);
				func_4767("revolver_ammo", 1, 2);
				func_4778("samopal_ammo", 1, 2, 2);
				if(var_30_int >= 8)
					func_4778("monomicin", 1, 2, 2);
			}
			} else if(var_30_int >= 4) {
		func_4767("monomicin", 1, 2);
			}
	
}


// @pe
void func_5049(object var_73_object)
{
	object var_74_object;
	var_73_object = var_74_object;
	TaskCall(3);
	func_659(var_75_object, var_74_object);
	TaskReturn();
}


// @pe
void func_5057(int var_31_int, object var_32_object)
{
	object var_34_object;
	var_32_object = var_34_object;
	bool var_33_bool;
	func_4552(var_33_bool, var_34_object);
	if(var_33_bool != 0)
		var_31_int = 2;
	else
		var_31_int = 0;
	
}


void func_4552(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_4516(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_4499(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
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
	func_4799(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_4799(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_5067(object var_74_object)
{
	object var_75_object;
	var_74_object = var_75_object;
	TaskCall(4);
	func_934(var_75_object);
	TaskReturn();
}


// @pe
void func_5075(int var_76_int, object var_77_object)
{
	object var_80_object;
	var_77_object = var_80_object;
	bool var_79_bool;
	func_4552(var_79_bool, var_80_object);
	if(var_79_bool != 0)
		var_76_int = 2;
	else
		var_76_int = 0;
	
}


// @pe
void func_5085(object var_113_object)
{
	object var_114_object;
	var_113_object = var_114_object;
	TaskCall(5);
	func_1186(var_115_object, var_116_cvector, var_117_bool, var_114_object);
	TaskReturn();
}


void func_4576(object var_98_object)
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


void func_1505(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_5093(bool var_31_bool, object var_32_object, object var_33_object, float var_34_float)
{
	object var_40_object;
	var_33_object = var_40_object;
	bool var_39_bool;
	func_4499(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_31_bool = false;
		return 4;
	}
	string var_37_string;
	var_33_object->GetProperty("class", var_37_string);
	if(var_37_string == "rat") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x1403";
	}
	if(var_37_string == "rat_big") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x1403";
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
		func_4486(var_58_float, var_59_object);
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
		func_4486(var_70_float, var_71_object);
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


void func_999(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_85_object)
{
	float var_92_float; cvector var_94_cvector; float var_95_float;
	cvector var_96_cvector;
	func_969(var_95_float, var_96_cvector, 1.7453294);
	cvector var_91_cvector;
	var_96_cvector = var_91_cvector;
	if((var_91_cvector | var_91_cvector) < 2500.0) {
		cvector var_128_cvector;
		func_969(var_95_float, var_128_cvector, 2.6179938);
		var_128_cvector = var_91_cvector;
		var_92_float = var_91_cvector | var_91_cvector;
		if(var_92_float < 2500.0) {
			var_133_float = sqrt(var_92_float);
			@Trace("Can't retreat, distance: " + var_133_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_136_float = GetByIndex(var_91_cvector, 0);
	var_137_float = GetByIndex(var_91_cvector, 2);
	@Rotate(var_136_float, var_137_float);
	cvector var_138_cvector;
	func_4474(var_138_cvector);
	@SetTimer(120, 0.5);
	
Label_1041:
	bool var_93_bool;
	@MovePoint((var_138_cvector + var_91_cvector), 1, var_93_bool);
	if(var_93_bool != 0) {
		if(var_85_object == null) {
			goto Label_1071;
		EMIT "GOTO 0x42d";

		Label_1071:
			for(;;) {
				return 10;
		}
			cvector var_146_cvector;
			func_969(var_95_float, var_146_cvector, 2.6179938);
			var_146_cvector = var_94_cvector;
			if((var_94_cvector | var_94_cvector) >= 2500.0) {
				cvector var_150_cvector;
				func_4474(var_150_cvector);
				var_1_bool = var_150_cvector + var_94_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1041; //@nz

	}
}


void func_4587(bool var_105_bool)
{
	bool var_107_bool;
	@IsLoaded(var_107_bool);
	var_107_bool = var_105_bool;
}


void func_4592(bool var_58_bool, object var_59_object, float var_60_float)
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
	func_4799(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
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
	func_5667(var_100_bool);
	if(var_100_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_4654;
		@LookAsyncCamera("head");
	}
Label_4654:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_1521(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4479(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_4814(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


