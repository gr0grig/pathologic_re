// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool;
		func_3523(var_23_bool);
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
		func_3525();
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
		func_3226(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_3229(var_32_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3041(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3124(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_75_object;
			var_22_bool = var_75_object;
			func_3134(var_75_object);
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
		func_3575(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_3142(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_251(var_26_int);
				object var_112_object;
				var_22_object = var_112_object;
				func_3152(var_112_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3236(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_3239();
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
		func_2955(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_251(var_25_int);
			object var_59_object; string var_60_string;
			var_22_string = var_59_object;
			var_23_bool = var_60_string;
			func_2987(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_23_bool = var_209_string;
			var_22_string = var_210_object;
			func_3241(var_210_object);
			var_208_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_192;
			if(var_25_int > 1)
				func_251(var_25_int);
			string var_215_string; object var_216_object;
			var_23_bool = var_215_string;
			var_22_string = var_216_object;
			func_3244();
		}
	Label_192:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; string var_24_string;
		func_3054(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_251(var_24_string);
			string var_33_string;
			var_22_bool = var_33_string;
			func_3070(var_33_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; object var_24_object;
		func_3012(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_251(var_24_object);
			object var_38_object;
			var_22_bool = var_38_object;
			func_3035(var_38_object);
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
		func_3235();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_251(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_2949();
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
		func_3226(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_3229(var_31_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3041(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3124(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_74_object;
			var_22_bool = var_74_object;
			func_3134(var_74_object);
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
		func_3575(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_3142(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_654();
				object var_111_object;
				var_22_object = var_111_object;
				func_3152(var_111_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3236(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_3239();
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
		func_2955(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_654();
			object var_58_object; string var_59_string;
			var_22_string = var_58_object;
			var_23_bool = var_59_string;
			func_2987(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_23_bool = var_208_string;
			var_22_string = var_209_object;
			func_3241(var_209_object);
			var_207_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_537;
			if(var_25_int > 1)
				func_654();
			string var_214_string; object var_215_object;
			var_23_bool = var_214_string;
			var_22_string = var_215_object;
			func_3244();
		}
	Label_537:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_3054(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_654();
			string var_32_string;
			var_22_bool = var_32_string;
			func_3070(var_32_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_654();
		func_3235();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_3012(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_654();
			object var_37_object;
			var_22_bool = var_37_object;
			func_3035(var_37_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3226(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_3229(var_33_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3041(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3124(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_76_object;
			var_22_bool = var_76_object;
			func_3134(var_76_object);
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
		func_3575(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_3142(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_858();
				object var_113_object;
				var_22_object = var_113_object;
				func_3152(var_113_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3236(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_3239();
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
		func_2955(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_858();
			object var_60_object; string var_61_string;
			var_22_string = var_60_object;
			var_23_bool = var_61_string;
			func_2987(var_60_object, var_61_string);
		} else {
			int var_209_int; string var_210_string; object var_211_object;
			var_23_bool = var_210_string;
			var_22_string = var_211_object;
			func_3241(var_211_object);
			var_209_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_843;
			if(var_25_int > 1)
				func_858();
			string var_216_string; object var_217_object;
			var_23_bool = var_216_string;
			var_22_string = var_217_object;
			func_3244();
		}
	Label_843:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_3054(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_858();
			string var_34_string;
			var_22_bool = var_34_string;
			func_3070(var_34_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_858();
		object var_25_object;
		var_22_bool = var_25_object;
		func_2949();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		if(var_22_bool != 111)
			return 4;
		bool var_29_bool;
		func_2619(var_29_bool, var_0_bool);
		if(!var_29_bool) { //@nz
			func_858();
			return 4;
		}
		cvector var_25_cvector;
		@GetDirection(var_25_cvector);
		cvector var_66_cvector;
		func_2546(var_66_cvector, var_0_bool);
		cvector var_26_cvector;
		var_66_cvector = var_26_cvector;
		float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
		var_25_cvector = var_73_cvector;
		var_26_cvector = var_74_cvector;
		func_2908(var_72_float, var_73_cvector, var_74_cvector);
		if(var_72_float < 0.49999997)
			func_2643(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_858();
		func_3235();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_3012(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_858();
			object var_39_object;
			var_22_bool = var_39_object;
			func_3035(var_39_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1124(var_21_bool);
		func_3235();
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
			func_2541(var_94_cvector);
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
		func_2949();
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
			func_2541(var_94_cvector);
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
		func_2949();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1505(var_21_bool);
		func_3235();
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
			func_2541(var_94_cvector);
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
		func_2949();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1699(var_21_bool);
		func_3235();
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
			func_2541(var_94_cvector);
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
		func_2949();
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
			func_2827();
			if(var_23_int == 39574) {
				object var_28_object = var_1_bool;
				func_3300(var_0_bool);
			}
			if(var_23_int == 39576) {
				object var_33_object = var_1_bool;
				func_3300(var_0_bool);
			}
			if(var_22_int == 39571) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537723); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_50_bool;
				func_3305(var_1_bool);
				if(var_50_bool != 0)
					var_0_bool->AddReply(537724, 39573, 39572); //@t
				bool var_61_bool;
				func_3305(var_1_bool);
				if(!var_61_bool) //@nz
					var_0_bool->AddReply(537728, -1, 39576); //@t
				bool var_67_bool = false;
				bool var_68_bool = false;
				bool var_69_bool;
				func_3305(var_1_bool);
				if(var_69_bool != 0) {
					bool var_71_bool;
					func_3317(var_71_bool, var_1_bool);
					if(var_71_bool != 0)
						var_68_bool = true;
				}
				if(var_68_bool != 0) {
					bool var_82_bool;
					func_3337(var_82_bool, var_1_bool);
					if(var_82_bool != 0)
						var_67_bool = true;
				}
				if(var_67_bool != 0)
					var_0_bool->AddReply(537729, 39578, 39577); //@t
				bool var_100_bool = false;
				bool var_101_bool = false;
				bool var_102_bool;
				func_3305(var_1_bool);
				if(var_102_bool != 0) {
					bool var_104_bool;
					func_3317(var_104_bool, var_1_bool);
					if(var_104_bool != 0)
						var_101_bool = true;
				}
				if(var_101_bool != 0) {
					bool var_106_bool;
					func_3347(var_106_bool, var_1_bool);
					if(var_106_bool != 0)
						var_100_bool = true;
				}
				if(var_100_bool != 0)
					var_0_bool->AddReply(537740, 39589, 39588); //@t
				bool var_116_bool = false;
				bool var_117_bool;
				func_3305(var_1_bool);
				if(var_117_bool != 0) {
					bool var_119_bool;
					func_3327(var_119_bool, var_1_bool);
					if(var_119_bool != 0)
						var_116_bool = true;
				}
				if(var_116_bool != 0)
					var_0_bool->AddReply(537755, 39604, 39603); //@t
				var_0_bool->AddReply(537783, -1, 39634); //@t
				var_0_bool->AddReply(537784, -1, 39635); //@t
				return 0;
			}
			if(var_22_int == 39604) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537757, 39606, 39605); //@t
				var_0_bool->AddReply(537766, 39615, 39614); //@t
				var_0_bool->AddReply(537782, -1, 39633); //@t
				return 0;
			}
			if(var_22_int == 39615) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537767); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537768, 39617, 39616); //@t
				var_0_bool->AddReply(537781, -1, 39632); //@t
				return 0;
			}
			if(var_22_int == 39617) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537769); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537770, 39608, 39618); //@t
				var_0_bool->AddReply(537771, 39621, 39620); //@t
				return 0;
			}
			if(var_22_int == 39621) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537772); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537773, 39623, 39622); //@t
				var_0_bool->AddReply(537777, 39628, 39627); //@t
				return 0;
			}
			if(var_22_int == 39628) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537778); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537779, 39608, 39629); //@t
				var_0_bool->AddReply(537780, -1, 39631); //@t
				return 0;
			}
			if(var_22_int == 39623) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537774); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537775, 39608, 39624); //@t
				var_0_bool->AddReply(537776, -1, 39626); //@t
				return 0;
			}
			if(var_22_int == 39606) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537758); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537759, 39608, 39607); //@t
				return 0;
			}
			if(var_22_int == 39608) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537760); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537761, 39610, 39609); //@t
				var_0_bool->AddReply(537765, -1, 39613); //@t
				return 0;
			}
			if(var_22_int == 39610) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537762); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537763, -1, 39611); //@t
				var_0_bool->AddReply(537764, -1, 39612); //@t
				return 0;
			}
			if(var_22_int == 39589) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537741); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537742, 39591, 39590); //@t
				var_0_bool->AddReply(537747, 39596, 39595); //@t
				var_0_bool->AddReply(537754, -1, 39602); //@t
				return 0;
			}
			if(var_22_int == 39596) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537748); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537749, 39598, 39597); //@t
				var_0_bool->AddReply(537753, -1, 39601); //@t
				return 0;
			}
			if(var_22_int == 39598) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537750); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537751, -1, 39599); //@t
				var_0_bool->AddReply(537752, -1, 39600); //@t
				return 0;
			}
			if(var_22_int == 39591) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537743); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537744, -1, 39592); //@t
				var_0_bool->AddReply(537745, -1, 39593); //@t
				var_0_bool->AddReply(537746, -1, 39594); //@t
				return 0;
			}
			if(var_22_int == 39578) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537730); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537731, 39580, 39579); //@t
				var_0_bool->AddReply(537738, -1, 39586); //@t
				var_0_bool->AddReply(537739, -1, 39587); //@t
				return 0;
			}
			if(var_22_int == 39580) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537732); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537733, 39582, 39581); //@t
				var_0_bool->AddReply(537737, -1, 39585); //@t
				return 0;
			}
			if(var_22_int == 39582) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537734); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537735, -1, 39583); //@t
				var_0_bool->AddReply(537736, -1, 39584); //@t
				return 0;
			}
			if(var_22_int == 39573) {
				func_1959(var_23_int, "Neutral");
				var_0_bool->SetMessage(537725); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537726, -1, 39574); //@t
				var_0_bool->AddReply(537727, -1, 39575); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_313_bool;
			func_3523(var_313_bool);
			if(var_313_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x7be";
	
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
		bool var_278_bool;
		func_3523(var_278_bool);
		if(var_278_bool == 0) goto Label_15;
		func_2803("Neutral");
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


void func_2561(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
}


void func_2566(bool var_51_bool, object var_52_object, string var_53_string)
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
	func_2866(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2866(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_3083(string var_141_string, int var_142_int)
{
	string var_144_string = "idle";
	if(var_142_int != 0)
		var_144_string += var_142_int;
	var_144_string = var_141_string;
}


void func_3090(int var_135_int)
{
	int var_138_int; bool var_139_bool;
	var_138_int = 0;
	
	for(;;) {
		string var_141_string; int var_142_int;
		var_138_int = var_142_int;
		func_3083(var_141_string, var_142_int);
		@HasAnimation(var_139_bool, "all", var_141_string);
		if(!var_139_bool) //@nz
			break;
		var_138_int += 1;
	}
	var_138_int = var_135_int;
}


void func_2578(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_2583(bool var_33_bool, object var_34_object)
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
		func_2578(var_44_bool, var_45_object);
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
void func_3107(int var_65_int)
{
	bool var_67_bool;
	func_3573(var_67_bool);
	if(var_67_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
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
	func_2541(var_191_cvector);
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
				func_2541(var_201_cvector);
				var_1_bool = var_201_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1616; //@nz

	}
}


// @pe
void func_3116(object var_73_object)
{
	object var_74_object;
	var_73_object = var_74_object;
	TaskCall(3);
	func_659(var_75_object, var_74_object);
	TaskReturn();
}


// @pe
void func_3124(int var_34_int, object var_35_object)
{
	object var_37_object;
	var_35_object = var_37_object;
	bool var_36_bool;
	func_2619(var_36_bool, var_37_object);
	if(var_36_bool != 0)
		var_34_int = 2;
	else
		var_34_int = 0;
	
}


void func_55(void)
{
	bool var_88_bool;
	func_2654(var_88_bool);
	if(!var_88_bool) //@nz
		func_3235();
}


void func_2619(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_2583(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_2566(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


void func_573(void)
{
	int var_128_int; int var_129_int; bool var_130_bool; float var_131_float; bool var_132_bool;
	@WaitForAnimEnd();
	bool var_133_bool;
	func_2654(var_133_bool);
	if(!var_133_bool) //@nz
		return 14;
	int var_135_int;
	func_3090(var_135_int);
	int var_126_int;
	var_135_int = var_126_int;
	int var_127_int = 0;
	
	for(;;) {
		bool var_148_bool = false;
		if(var_127_int < 5) {
			bool var_151_bool;
			func_2654(var_151_bool);
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
				func_3083(var_157_string, var_158_int);
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
void func_3134(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
}


// @pe
void func_3142(int var_76_int, object var_77_object)
{
	object var_80_object;
	var_77_object = var_80_object;
	bool var_79_bool;
	func_2619(var_79_bool, var_80_object);
	if(var_79_bool != 0)
		var_76_int = 2;
	else
		var_76_int = 0;
	
}


// @pe
void func_3152(object var_113_object)
{
	object var_114_object;
	var_113_object = var_114_object;
	TaskCall(5);
	func_1186(var_115_object, var_116_cvector, var_117_bool, var_114_object);
	TaskReturn();
}


void func_2643(object var_98_object)
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


void func_3160(bool var_31_bool, object var_32_object, object var_33_object, float var_34_float)
{
	object var_40_object;
	var_33_object = var_40_object;
	bool var_39_bool;
	func_2566(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_31_bool = false;
		return 4;
	}
	string var_37_string;
	var_33_object->GetProperty("class", var_37_string);
	if(var_37_string == "rat") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0xc76";
	}
	if(var_37_string == "rat_big") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0xc76";
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
		func_2553(var_58_float, var_59_object);
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
		func_2553(var_70_float, var_71_object);
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


void func_2654(bool var_88_bool)
{
	bool var_90_bool;
	@IsLoaded(var_90_bool);
	var_90_bool = var_88_bool;
}


void func_2659(bool var_58_bool, object var_59_object, float var_60_float)
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
	func_2866(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
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
	func_3523(var_100_bool);
	if(var_100_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_2721;
		@LookAsyncCamera("head");
	}
Label_2721:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_1124(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1140(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2546(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2881(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
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
	func_2866(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2866(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
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


void func_659(bool var_0_bool, object var_74_object)
{
	var_0_bool = var_74_object;
	bool var_81_bool;
	func_710(var_81_bool);
	cvector var_79_cvector;
	@GetDirection(var_79_cvector);
	cvector var_89_cvector;
	func_2546(var_89_cvector, var_0_bool);
	cvector var_80_cvector;
	var_89_cvector = var_80_cvector;
	float var_95_float; cvector var_96_cvector; cvector var_97_cvector;
	var_79_cvector = var_96_cvector;
	var_80_cvector = var_97_cvector;
	func_2908(var_95_float, var_96_cvector, var_97_cvector);
	if(var_95_float < 0) {
		func_2643(var_0_bool);
		var_81_bool = true;
	} else {
		@Sleep(1.5, var_81_bool);
	}
	if(var_81_bool != 0) {
		func_2643(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


// @pe
void func_3226(int var_25_int)
{
	var_25_int = 2;
}


// @pe
void func_3229(object var_33_object)
{
	object var_34_object;
	func_3533(var_34_object, var_34_object);
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
	func_2541(var_170_cvector);
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
				func_2541(var_182_cvector);
				var_1_bool = var_182_cvector + var_126_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1228; //@nz

	}
}


void func_3235(void)
{
}


// @pe
void func_3236(int var_25_int)
{
	var_25_int = 0;
}


void func_1699(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_3239(void)
{
}


void func_2727(void)
{
	bool var_238_bool;
	@CameraSwitchToNormal();
	bool var_239_bool;
	func_3523(var_239_bool);
	if(var_239_bool != 0) {
	} else {
		@HasAnimationTrack(var_238_bool, "head");
		if(var_238_bool == 0) goto Label_2743;
		@UnlookAsync("head");
	}
Label_2743:
	
}


// @pe
void func_3241(int var_209_int)
{
	var_209_int = 0;
}


// @pe
void func_3244(void)
{
}


void func_3246(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
}


void func_1715(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2546(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2881(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_3251(object var_40_object)
{
	object var_41_object;
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
}


// @pe
void func_2744(bool var_244_bool, object var_245_object)
{
	object var_247_object;
	var_245_object = var_247_object;
	bool var_246_bool;
	func_2752(var_246_bool, var_247_object, (float)70);
	var_246_bool = var_244_bool;
}


void func_3259(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	@CanSee(var_40_bool, var_38_object);
	var_37_bool = true;
	if(var_40_bool != 1) {
		float var_42_float; object var_43_object;
		var_38_object = var_43_object;
		func_2553(var_42_float, var_43_object);
		var_51_bool = var_42_float <= 4000000;
		if(var_51_bool != 1)
			var_37_bool = false;
	}
}


void func_2752(bool var_246_bool, object var_247_object, float var_248_float)
{
	cvector var_258_cvector;
	var_247_object->GetPosition(var_258_cvector);
	float var_257_float;
	var_247_object->GetEyesHeight(var_257_float);
	var_265_float = GetByIndex(var_258_cvector, 1);
	SetByIndex(var_258_cvector, 1) = (var_265_float + var_257_float);
	cvector var_259_cvector;
	@GetPosition(var_259_cvector);
	@GetEyesHeight(var_257_float);
	var_266_float = GetByIndex(var_259_cvector, 1);
	SetByIndex(var_259_cvector, 1) = (var_266_float + var_257_float);
	cvector var_260_cvector = var_258_cvector - var_259_cvector;
	var_267_float = GetByIndex(var_260_cvector, 1);
	SetByIndex(var_260_cvector, 1) = (float)0;
	var_269_float = sqrt(var_260_cvector | var_260_cvector);
	var_260_cvector /= var_269_float;
	cvector var_261_cvector = -var_260_cvector;
	cvector var_262_cvector = (var_260_cvector * var_248_float) - [0.0, 10.0, 0.0];
	bool var_264_bool;
	@IsOverrideActive(var_264_bool);
	if(var_264_bool != 0)
		var_246_bool = false;
	@StopWorld();
	@CameraTransit((var_259_cvector + var_262_cvector), var_261_cvector);
	var_273_float = GetByIndex(var_262_cvector, 0);
	var_274_float = GetByIndex(var_262_cvector, 2);
	@Rotate(var_273_float, var_274_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_246_bool = true;
}


void func_1731(bool var_0_bool, int var_47_int, object var_48_object)
{
	var_0_bool = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_2659(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_105_int;
	func_3517(var_105_int);
	var_54_object->SetNPCName(var_105_int);
	int var_106_int;
	func_3515(var_106_int);
	var_54_object->SetNPCDescription(var_106_int);
	string var_107_string;
	func_3519(var_107_string);
	var_54_object->SetPhoto(var_107_string);
	string var_108_string;
	func_3521(var_108_string);
	var_54_object->SetPhoto2(var_108_string);
	int var_109_int;
	func_3403(var_109_int);
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
		var_235_bool = !var_57_bool; //@nz
		if(var_235_bool == 0) goto Label_1794;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_1794:
	object var_236_object;
	var_48_object = var_236_object;
	func_2727();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_710(bool var_0_bool)
{
	func_2816(var_0_bool);
}


// @pe
void func_3274(object var_139_object)
{
	object var_140_object;
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
}


// @pe
void func_3282(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_3259(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
}


// @pe
void func_3289(object var_207_object)
{
	object var_208_object;
	var_207_object = var_208_object;
	func_3274(var_208_object);
}


// @pe
void func_3295(bool var_30_bool)
{
	var_30_bool = false;
}


// @pe
void func_3298(void)
{
}


// @pe
void func_3300(object var_29_object)
{
	var_29_object->SetReturnValue(1000);
}


// @pe
void func_3305(bool var_50_bool)
{
	int var_52_int;
	func_2925(var_52_int, "branch");
	if(var_52_int == 0) {
		var_50_bool = true;
		return 0;
	}
	var_50_bool = false;
}


// @pe
void func_2799(void)
{
	@CameraSwitchToNormal();
}


void func_2803(string var_224_string)
{
	float var_227_float; float var_228_float;
	@lshGetAnimTimes(var_224_string, var_227_float, var_228_float);
	@lshPlayAnimation(var_227_float, var_228_float, false);
}


// @pe
void func_3317(bool var_71_bool, object var_72_object)
{
	object var_74_object;
	var_72_object = var_74_object;
	func_3357(var_74_object);
	bool var_73_bool;
	if(var_73_bool != 0) {
		var_71_bool = true;
		return 0;
	}
	var_71_bool = false;
}


void func_2810(string var_41_string, bool var_42_bool)
{
	float var_47_float; float var_48_float;
	@lshGetAnimTimes(var_41_string, var_47_float, var_48_float);
	@lshPlayAnimation(var_47_float, var_48_float, var_42_bool);
}


void func_251(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
}


// @pe
void func_3327(bool var_119_bool, object var_120_object)
{
	object var_122_object;
	var_120_object = var_122_object;
	func_3364(var_122_object);
	bool var_121_bool;
	if(var_121_bool != 0) {
		var_119_bool = true;
		return 0;
	}
	var_119_bool = false;
}


void func_2816(object var_82_object)
{
	float var_85_float;
	var_82_object->GetEyesHeight(var_85_float);
	cvector var_86_cvector = [0.0, 0.0, 0.0];
	var_87_float = GetByIndex(var_86_cvector, 1);
	var_85_float = var_87_float;
	SetByIndex(var_86_cvector, 1) = var_87_float;
	@LookAsync(var_82_object, "head", var_86_cvector);
}


void func_259(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
}


// @pe
void func_3337(bool var_82_bool, object var_83_object)
{
	object var_85_object;
	var_83_object = var_85_object;
	func_3371(var_85_object);
	bool var_84_bool;
	if(var_84_bool != 0) {
		var_82_bool = true;
		return 0;
	}
	var_82_bool = false;
}


void func_2827(void)
{
	bool var_25_bool;
	func_3523(var_25_bool);
	if(var_25_bool != 0)
		@lshStopSpeech();
}


// @pe
void func_1805(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_118_object, object var_119_object)
{
	var_0_bool = var_119_object;
	var_1_bool = var_118_object;
	var_3_bool = false;
	if(1 != 0) {
		func_1959(var_119_object, "Neutral");
		var_0_bool->SetMessage(537723); //@t
		var_0_bool->ClearReplies(); //@t
		bool var_138_bool;
		func_3305(var_1_bool);
		if(var_138_bool != 0)
			var_0_bool->AddReply(537724, 39573, 39572); //@t
		bool var_149_bool;
		func_3305(var_1_bool);
		if(!var_149_bool) //@nz
			var_0_bool->AddReply(537728, -1, 39576); //@t
		bool var_155_bool = false;
		bool var_156_bool = false;
		bool var_157_bool;
		func_3305(var_1_bool);
		if(var_157_bool != 0) {
			bool var_159_bool;
			func_3317(var_159_bool, var_1_bool);
			if(var_159_bool != 0)
				var_156_bool = true;
		}
		if(var_156_bool != 0) {
			bool var_170_bool;
			func_3337(var_170_bool, var_1_bool);
			if(var_170_bool != 0)
				var_155_bool = true;
		}
		if(var_155_bool != 0)
			var_0_bool->AddReply(537729, 39578, 39577); //@t
		bool var_188_bool = false;
		bool var_189_bool = false;
		bool var_190_bool;
		func_3305(var_1_bool);
		if(var_190_bool != 0) {
			bool var_192_bool;
			func_3317(var_192_bool, var_1_bool);
			if(var_192_bool != 0)
				var_189_bool = true;
		}
		if(var_189_bool != 0) {
			bool var_194_bool;
			func_3347(var_194_bool, var_1_bool);
			if(var_194_bool != 0)
				var_188_bool = true;
		}
		if(var_188_bool != 0)
			var_0_bool->AddReply(537740, 39589, 39588); //@t
		bool var_204_bool = false;
		bool var_205_bool;
		func_3305(var_1_bool);
		if(var_205_bool != 0) {
			bool var_207_bool;
			func_3327(var_207_bool, var_1_bool);
			if(var_207_bool != 0)
				var_204_bool = true;
		}
		if(var_204_bool != 0)
			var_0_bool->AddReply(537755, 39604, 39603); //@t
		var_0_bool->AddReply(537783, -1, 39634); //@t
		var_0_bool->AddReply(537784, -1, 39635); //@t
		goto Label_1929;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x711";
	}
Label_1929:
	bool var_222_bool;
	func_3523(var_222_bool);
	if(var_222_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_bool != 0) {
			} else {
				func_2803(var_2_bool);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_bool != 0) {
				goto Label_1958;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_1958:
		return 0;

	}
	
}


void func_2834(string var_53_string, int var_54_int, int var_55_int)
{
	bool var_57_bool;
	int var_59_int;
	var_54_int = var_59_int;
	int var_60_int;
	var_55_int = var_60_int;
	bool var_58_bool;
	func_2876(var_58_bool, var_59_int, var_60_int);
	if(var_58_bool != 0)
		@AddItem(var_57_bool, var_53_string, 0);
}


// @pe
void func_3347(bool var_106_bool, object var_107_object)
{
	object var_109_object;
	var_107_object = var_109_object;
	func_3392(var_109_object);
	bool var_108_bool;
	if(var_108_bool != 0) {
		var_106_bool = true;
		return 0;
	}
	var_106_bool = false;
}


void func_276(bool var_2_bool, object var_23_object)
{
	bool var_28_bool; object var_29_object;
	func_2619(var_28_bool, var_29_object);
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
	func_3107(var_66_object);
	int var_27_int;
	var_65_int = var_27_int;
	if(var_27_int > 0) {
		if(var_27_int > 1)
			func_259(var_27_int);
		object var_73_object;
		var_23_object = var_73_object;
		func_3116(var_73_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_3357(bool var_73_bool)
{
	int var_75_int;
	func_2930(var_75_int);
	var_73_bool = var_75_int == 1;
}


void func_2845(string var_29_string, int var_30_int, int var_31_int, int var_32_int)
{
	int var_35_int; bool var_36_bool;
	int var_38_int;
	var_30_int = var_38_int;
	int var_39_int;
	var_31_int = var_39_int;
	bool var_37_bool;
	func_2876(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		@irand(var_35_int, var_32_int);
		@AddItem(var_36_bool, var_29_string, 0, (var_35_int + 1));
	}
}


void func_1311(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_3364(bool var_121_bool)
{
	int var_123_int;
	func_2930(var_123_int);
	var_121_bool = var_123_int == 5;
}


// @pe
void func_3371(bool var_84_bool)
{
	bool var_86_bool = false;
	int var_87_int;
	func_2939(var_87_int);
	if(var_87_int >= 0) {
		int var_94_int;
		func_2939(var_94_int);
		if(var_94_int < 12)
			var_86_bool = true;
	}
	if(var_86_bool != 0) {
		var_84_bool = true;
		return 0;
	}
	var_84_bool = false;
}


void func_2860(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_1327(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2546(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2881(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_2866(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_55_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_55_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_55_float;
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


void func_2876(bool var_37_bool, int var_38_int, int var_39_int)
{
	int var_41_int;
	@irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
}


// @pe
void func_3392(bool var_108_bool)
{
	int var_110_int;
	func_2939(var_110_int);
	if(var_110_int >= 12)
		var_108_bool = true;
	var_108_bool = false;
}


// @pe
void func_2881(float var_85_float, cvector var_86_cvector, cvector var_87_cvector)
{
	var_92_float = sqrt((var_86_cvector | var_86_cvector) * (var_87_cvector | var_87_cvector));
	var_85_float = (var_86_cvector | var_87_cvector) / var_92_float;
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
	func_2866(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2866(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_2889(float var_75_float, cvector var_76_cvector, cvector var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_75_float = (var_78_float * var_79_float) + (var_81_float * var_82_float);
}


void func_3403(int var_109_int)
{
	int var_111_int;
	@GetVariable("branch", var_111_int);
	if(var_111_int == 0) {
		var_109_int = 1;
		return 2;
	EMIT "GOTO 0xd5a";
	}
	if(var_111_int == 1) {
		var_109_int = 2;
		return 2;
	}
	var_109_int = 3;
}


// @pe
void func_2898(float var_84_float, cvector var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_84_float = sqrt((var_86_float * var_87_float) + (var_89_float * var_90_float));
}


void func_858(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_2908(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	cvector var_77_cvector;
	var_74_cvector = var_77_cvector;
	float var_75_float;
	func_2889(var_75_float, var_76_cvector, var_77_cvector);
	float var_84_float; cvector var_85_cvector;
	var_73_cvector = var_85_cvector;
	func_2898(var_84_float, var_85_cvector);
	float var_93_float; cvector var_94_cvector;
	var_74_cvector = var_94_cvector;
	func_2898(var_93_float, var_94_cvector);
	var_72_float = var_75_float / (var_84_float * var_93_float);
}


void func_3420(int var_40_int)
{
	int var_42_int;
	@GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
}


// @pe
void func_3426(object var_39_object)
{
	int var_40_int;
	func_3420(var_40_int);
	if(var_40_int == 1)
		@WorkWithCorpse(var_39_object);
	else
		@Barter(var_39_object);
	
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
	func_2541(var_97_cvector);
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
				func_2541(var_109_cvector);
				var_1_bool = var_109_cvector + var_53_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1422; //@nz

	}
}


void func_2925(int var_52_int, string var_53_string)
{
	int var_55_int;
	@GetVariable(var_53_string, var_55_int);
	var_55_int = var_52_int;
}


void func_3439(bool var_24_bool)
{
	int var_26_int;
	@ClearSubContainer(0);
	if(var_24_bool != 0) {
		func_2845("rifle_ammo", 1, 2, 2);
		func_2845("revolver_ammo", 1, 2, 2);
		func_2845("samopal_ammo", 2, 2, 2);
	} else {
		func_2834("lockpick", 1, 4);
		func_2845("alpha_pills", 1, 2, 3);
		func_2834("meradorm", 1, 2);
		func_2834("powder", 1, 15);
		int var_72_int;
		func_2930(var_72_int);
		var_72_int = var_26_int;
		if(var_26_int >= 4)
			func_2834("beta_pills", 1, 2);
		if(!(var_26_int >= 6)) goto Label_3514;
		func_2834("gamma_pills", 1, 7);
	}
Label_3514:
	
}


void func_2930(int var_72_int)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_72_int = 1 + (var_74_float / 24);
}


void func_375(float var_107_float)
{
	float var_109_float;
	@GetCameraFarDistance(var_109_float);
	var_109_float = var_107_float;
}


void func_2939(int var_87_int)
{
	float var_89_float;
	@GetGameTime(var_89_float);
	int var_90_int;
	var_89_float = var_90_int;
	var_87_int = var_90_int % 24;
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
void func_2955(bool var_26_bool, object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		bool var_31_bool; object var_32_object;
		var_27_object = var_32_object;
		func_3246(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xba9";
	}
	if(var_28_string == "player_shot") {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_3259(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xba9";
	}
	if(var_28_string == "battle") {
		bool var_54_bool; object var_55_object;
		var_27_object = var_55_object;
		func_3282(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = false;
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
void func_1959(bool var_2_bool, string var_37_string)
{
	bool var_38_bool;
	func_3523(var_38_bool);
	if(!var_38_bool) //@nz
		return 0;
	if(var_37_string == var_2_bool)
		return 0;
	string var_41_string; bool var_42_bool;
	var_37_string = var_41_string;
	if(var_37_string == "")
		var_42_bool = false;
	else
		var_42_bool = true;
	func_2810(var_41_string, var_42_bool);
	var_2_bool = var_37_string;
	
}


// @pe
void func_2987(object var_60_object, string var_61_string)
{
	if(var_61_string == "unholster") {
		object var_64_object;
		var_60_object = var_64_object;
		func_3251(var_64_object);
	} else if(var_61_string == "player_shot") {
			object var_139_object;
			var_60_object = var_139_object;
			func_3274(var_139_object);
	}
Label_3011:
	for(;;) {

	}
	
	if(!(var_61_string == "battle")) goto Label_3011;
	object var_207_object;
	var_60_object = var_207_object;
	func_3289(var_207_object);
}


void func_3515(int var_106_int)
{
	var_106_int = 515561;
}


void func_3517(int var_105_int)
{
	var_105_int = 503346;
}


void func_3519(string var_107_string)
{
	var_107_string = "ui/NPC_Citizen1.png";
}


void func_3521(string var_108_string)
{
	var_108_string = "ui/NPC_Citizen1_b.png";
}


void func_3523(bool var_25_bool)
{
	var_25_bool = false;
}


void func_3012(bool var_23_bool, object var_24_object)
{
	bool var_26_bool;
	bool var_27_bool = false;
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_3246(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		func_2561(var_32_bool, var_33_object);
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


void func_3525(void)
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_3439(false);
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
	func_2866(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_2866(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_3533(object var_34_object, object var_49_object)
{
	bool var_36_bool;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		@IsOverrideActive(var_36_bool);
		if(!var_36_bool) { //@nz
			object var_39_object;
			var_34_object = var_39_object;
			func_3426(var_39_object);
		}
		return 2;
	EMIT "GOTO 0xdf4";
	}
	int var_47_int; object var_48_object;
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	if(1000 == var_49_object) {
		bool var_244_bool; object var_245_object;
		var_34_object = var_245_object;
		func_2744(var_244_bool, var_245_object);
		if(!var_244_bool) //@nz
			return 2;
		object var_276_object;
		var_34_object = var_276_object;
		TaskCall(0);
		func_0(var_276_object);
		TaskReturn();
		object var_283_object;
		var_34_object = var_283_object;
		func_2799();
	}
}


// @pe
void func_3035(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_3251(var_40_object);
}


// @pe
void func_3041(object var_25_object)
{
	bool var_26_bool; object var_27_object;
	func_2561(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		object var_30_object;
		func_2860(var_30_object);
		@ReportReputationChange(var_27_object, var_30_object, -0.03);
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
	func_2541(var_140_cvector);
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
				func_2541(var_152_cvector);
				var_1_bool = var_152_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1041; //@nz

	}
}


void func_2541(cvector var_94_cvector)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
}


void func_3054(bool var_23_bool, string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_3295(var_31_object);
		var_30_bool = var_23_bool;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = false;
}


void func_1521(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2546(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_2881(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_2546(cvector var_79_cvector, object var_80_object)
{
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	cvector var_84_cvector;
	var_80_object->GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
}


void func_3573(bool var_67_bool)
{
	var_67_bool = true;
}


// @pe
void func_3575(bool var_27_bool, object var_28_object, object var_29_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	object var_33_object;
	var_29_object = var_33_object;
	bool var_31_bool;
	func_3160(var_31_bool, var_32_object, var_33_object, 500.0);
	if(var_31_bool != 0) {
		@SetProperty("ToDie", true);
		var_27_bool = true;
		return 0;
	}
	var_27_bool = false;
}


void func_2553(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


void func_3070(string var_34_string)
{
	object var_36_object;
	if(var_34_string == "heal") {
		@FindActor(var_36_object, "player");
		object var_40_object;
		var_36_object = var_40_object;
		func_3298();
		var_36_object = null;
	}
}


