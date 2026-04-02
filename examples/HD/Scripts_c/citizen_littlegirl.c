// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool;
		func_4023(var_23_bool);
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
		func_4025();
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
		func_3596(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_3599(var_32_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3401(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3484(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_75_object;
			var_22_bool = var_75_object;
			func_3494(var_75_object);
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
		func_4079(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_3502(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_251(var_26_int);
				object var_110_object;
				var_22_object = var_110_object;
				func_3512(var_110_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3586(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_3589();
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
		func_3315(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_251(var_25_int);
			object var_59_object; string var_60_string;
			var_22_string = var_59_object;
			var_23_bool = var_60_string;
			func_3347(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_23_bool = var_209_string;
			var_22_string = var_210_object;
			func_3591(var_210_object);
			var_208_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_192;
			if(var_25_int > 1)
				func_251(var_25_int);
			string var_215_string; object var_216_object;
			var_23_bool = var_215_string;
			var_22_string = var_216_object;
			func_3594();
		}
	Label_192:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; string var_24_string;
		func_3414(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_251(var_24_string);
			string var_33_string;
			var_22_bool = var_33_string;
			func_3430(var_33_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; object var_24_object;
		func_3372(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_251(var_24_object);
			object var_38_object;
			var_22_bool = var_38_object;
			func_3395(var_38_object);
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
		func_3605();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_251(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_3309();
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
		func_3596(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_3599(var_31_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3401(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3484(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_74_object;
			var_22_bool = var_74_object;
			func_3494(var_74_object);
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
		func_4079(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_3502(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_654();
				object var_109_object;
				var_22_object = var_109_object;
				func_3512(var_109_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3586(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_3589();
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
		func_3315(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_654();
			object var_58_object; string var_59_string;
			var_22_string = var_58_object;
			var_23_bool = var_59_string;
			func_3347(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_23_bool = var_208_string;
			var_22_string = var_209_object;
			func_3591(var_209_object);
			var_207_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_537;
			if(var_25_int > 1)
				func_654();
			string var_214_string; object var_215_object;
			var_23_bool = var_214_string;
			var_22_string = var_215_object;
			func_3594();
		}
	Label_537:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_3414(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_654();
			string var_32_string;
			var_22_bool = var_32_string;
			func_3430(var_32_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_654();
		func_3605();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_3372(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_654();
			object var_37_object;
			var_22_bool = var_37_object;
			func_3395(var_37_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3596(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_3599(var_33_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_3401(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_3484(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_76_object;
			var_22_bool = var_76_object;
			func_3494(var_76_object);
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
		func_4079(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_74_int; object var_75_object; bool var_76_bool;
			var_22_object = var_75_object;
			var_24_bool = var_76_bool;
			func_3502(var_75_object, var_76_bool);
			var_74_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_858();
				object var_111_object;
				var_22_object = var_111_object;
				func_3512(var_111_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_3586(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_3589();
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
		func_3315(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_858();
			object var_60_object; string var_61_string;
			var_22_string = var_60_object;
			var_23_bool = var_61_string;
			func_3347(var_60_object, var_61_string);
		} else {
			int var_209_int; string var_210_string; object var_211_object;
			var_23_bool = var_210_string;
			var_22_string = var_211_object;
			func_3591(var_211_object);
			var_209_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_843;
			if(var_25_int > 1)
				func_858();
			string var_216_string; object var_217_object;
			var_23_bool = var_216_string;
			var_22_string = var_217_object;
			func_3594();
		}
	Label_843:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_3414(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_858();
			string var_34_string;
			var_22_bool = var_34_string;
			func_3430(var_34_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_858();
		object var_25_object;
		var_22_bool = var_25_object;
		func_3309();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		if(var_22_bool != 111)
			return 4;
		bool var_29_bool;
		func_2957(var_29_bool, var_0_bool);
		if(!var_29_bool) { //@nz
			func_858();
			return 4;
		}
		cvector var_25_cvector;
		@GetDirection(var_25_cvector);
		cvector var_66_cvector;
		func_2884(var_66_cvector, var_0_bool);
		cvector var_26_cvector;
		var_66_cvector = var_26_cvector;
		float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
		var_25_cvector = var_73_cvector;
		var_26_cvector = var_74_cvector;
		func_3268(var_72_float, var_73_cvector, var_74_cvector);
		if(var_72_float < 0.49999997)
			func_2981(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_858();
		func_3605();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_3372(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_858();
			object var_39_object;
			var_22_bool = var_39_object;
			func_3395(var_39_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1124(var_21_bool);
		func_3605();
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
			func_2879(var_94_cvector);
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
		func_3309();
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
			func_2879(var_94_cvector);
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
		func_3309();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1505(var_21_bool);
		func_3605();
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
			func_2879(var_94_cvector);
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
		func_3309();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1699(var_21_bool);
		func_3605();
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
			func_2879(var_94_cvector);
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
		func_3309();
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
			func_3187();
			if(var_23_int == 45744) {
				object var_28_object = var_1_bool;
				func_3660(var_0_bool);
			}
			if(var_23_int == 39574) {
				object var_33_object = var_1_bool;
				func_3660(var_0_bool);
			}
			if(var_23_int == 39576) {
				object var_37_object = var_1_bool;
				func_3660(var_0_bool);
			}
			if(var_22_int == 45743) {
				bool var_41_bool;
				func_3677(var_1_bool);
				if(var_41_bool != 0) {
					func_2055(var_23_int, "Neutral");
					var_0_bool->SetMessage(543287); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_67_bool = true;
					bool var_68_bool = true;
					bool var_69_bool;
					func_3721(var_69_bool, var_1_bool);
					if(var_69_bool != 1) {
						bool var_80_bool;
						func_3731(var_80_bool, var_1_bool);
						if(var_80_bool != 1)
							var_68_bool = false;
					}
					if(var_68_bool != 1) {
						bool var_86_bool;
						func_3741(var_86_bool, var_1_bool);
						if(var_86_bool != 1)
							var_67_bool = false;
					}
					if(var_67_bool != 0)
						var_0_bool->AddReply(543290, 45747, 45746); //@t
					bool var_95_bool = true;
					bool var_96_bool = true;
					bool var_97_bool;
					func_3711(var_97_bool, var_1_bool);
					if(var_97_bool != 1) {
						bool var_103_bool;
						func_3751(var_103_bool, var_1_bool);
						if(var_103_bool != 1)
							var_96_bool = false;
					}
					if(var_96_bool != 1) {
						bool var_109_bool;
						func_3771(var_109_bool, var_1_bool);
						if(var_109_bool != 1)
							var_95_bool = false;
					}
					if(var_95_bool != 0)
						var_0_bool->AddReply(543294, 45752, 45750); //@t
					bool var_118_bool;
					func_3761(var_118_bool, var_1_bool);
					if(var_118_bool != 0)
						var_0_bool->AddReply(543295, 45761, 45751); //@t
					var_0_bool->AddReply(543288, -1, 45744); //@t
					var_0_bool->AddReply(543289, -1, 45745); //@t
					var_0_bool->AddReply(543304, -1, 45760); //@t
					return 0;
				}
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537723); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_138_bool;
				func_3665(var_1_bool);
				if(var_138_bool != 0)
					var_0_bool->AddReply(537724, 39573, 39572); //@t
				bool var_147_bool;
				func_3665(var_1_bool);
				if(!var_147_bool) //@nz
					var_0_bool->AddReply(537728, -1, 39576); //@t
				bool var_153_bool = false;
				bool var_154_bool = false;
				bool var_155_bool = false;
				bool var_156_bool;
				func_3665(var_1_bool);
				if(var_156_bool != 0) {
					bool var_158_bool;
					func_3701(var_158_bool, var_1_bool);
					if(var_158_bool != 0)
						var_155_bool = true;
				}
				if(var_155_bool != 0) {
					bool var_164_bool;
					func_3781(var_164_bool, var_1_bool);
					if(var_164_bool != 0)
						var_154_bool = true;
				}
				if(var_154_bool != 0) {
					bool var_179_bool;
					func_3689(var_1_bool);
					if(var_179_bool != 0)
						var_153_bool = true;
				}
				if(var_153_bool != 0)
					var_0_bool->AddReply(537729, 39578, 39577); //@t
				bool var_188_bool = false;
				bool var_189_bool = false;
				bool var_190_bool;
				func_3665(var_1_bool);
				if(var_190_bool != 0) {
					bool var_192_bool;
					func_3701(var_192_bool, var_1_bool);
					if(var_192_bool != 0)
						var_189_bool = true;
				}
				if(var_189_bool != 0) {
					bool var_194_bool;
					func_3791(var_194_bool, var_1_bool);
					if(var_194_bool != 0)
						var_188_bool = true;
				}
				if(var_188_bool != 0)
					var_0_bool->AddReply(537740, 39589, 39588); //@t
				bool var_204_bool;
				func_3741(var_204_bool, var_1_bool);
				if(var_204_bool != 0)
					var_0_bool->AddReply(537755, 39604, 39603); //@t
				var_0_bool->AddReply(537783, -1, 39634); //@t
				var_0_bool->AddReply(537784, -1, 39635); //@t
				return 0;
			}
			if(var_22_int == 39604) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537756); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537757, 39606, 39605); //@t
				var_0_bool->AddReply(537766, 39615, 39614); //@t
				var_0_bool->AddReply(537782, -1, 39633); //@t
				return 0;
			}
			if(var_22_int == 39615) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537767); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537768, 39617, 39616); //@t
				var_0_bool->AddReply(537781, -1, 39632); //@t
				return 0;
			}
			if(var_22_int == 39617) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537769); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537770, 39608, 39618); //@t
				var_0_bool->AddReply(537771, 39621, 39620); //@t
				return 0;
			}
			if(var_22_int == 39621) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537772); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_252_bool;
				func_3665(var_1_bool);
				if(var_252_bool != 0)
					var_0_bool->AddReply(537773, 39623, 39622); //@t
				var_0_bool->AddReply(537777, 39628, 39627); //@t
				return 0;
			}
			if(var_22_int == 39628) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537778); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537779, 39608, 39629); //@t
				bool var_267_bool;
				func_3665(var_1_bool);
				if(var_267_bool != 0)
					var_0_bool->AddReply(537780, -1, 39631); //@t
				return 0;
			}
			if(var_22_int == 39623) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537774); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537775, 39608, 39624); //@t
				var_0_bool->AddReply(537776, -1, 39626); //@t
				return 0;
			}
			if(var_22_int == 39606) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537758); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537759, 39608, 39607); //@t
				return 0;
			}
			if(var_22_int == 39608) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537760); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537761, 39610, 39609); //@t
				var_0_bool->AddReply(537765, -1, 39613); //@t
				return 0;
			}
			if(var_22_int == 39610) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537762); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537763, -1, 39611); //@t
				var_0_bool->AddReply(537764, -1, 39612); //@t
				return 0;
			}
			if(var_22_int == 39589) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537741); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537742, 39591, 39590); //@t
				var_0_bool->AddReply(537747, 39596, 39595); //@t
				var_0_bool->AddReply(537754, -1, 39602); //@t
				return 0;
			}
			if(var_22_int == 39596) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537748); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537749, 39598, 39597); //@t
				var_0_bool->AddReply(537753, -1, 39601); //@t
				return 0;
			}
			if(var_22_int == 39598) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537750); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537751, -1, 39599); //@t
				var_0_bool->AddReply(537752, -1, 39600); //@t
				return 0;
			}
			if(var_22_int == 39591) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537743); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537744, -1, 39592); //@t
				var_0_bool->AddReply(537745, -1, 39593); //@t
				var_0_bool->AddReply(537746, -1, 39594); //@t
				return 0;
			}
			if(var_22_int == 39578) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537730); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537731, 39580, 39579); //@t
				var_0_bool->AddReply(537738, -1, 39586); //@t
				return 0;
			}
			if(var_22_int == 39580) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537732); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537733, 39582, 39581); //@t
				var_0_bool->AddReply(537737, -1, 39585); //@t
				return 0;
			}
			if(var_22_int == 39582) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537734); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537735, -1, 39583); //@t
				var_0_bool->AddReply(537736, -1, 39584); //@t
				return 0;
			}
			if(var_22_int == 39573) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(537725); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537726, -1, 39574); //@t
				var_0_bool->AddReply(537727, -1, 39575); //@t
				return 0;
			}
			if(var_22_int == 45761) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(543305); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543306, -1, 45762); //@t
				var_0_bool->AddReply(543307, 45766, 45763); //@t
				return 0;
			}
			if(var_22_int == 45766) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(543310); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543312, -1, 45768); //@t
				var_0_bool->AddReply(543311, -1, 45767); //@t
				return 0;
			}
			if(var_22_int == 45752) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(543296); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543297, 45755, 45753); //@t
				var_0_bool->AddReply(543298, 45756, 45754); //@t
				return 0;
			}
			if(var_22_int == 45756) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(543300); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543302, -1, 45758); //@t
				var_0_bool->AddReply(543303, -1, 45759); //@t
				return 0;
			}
			if(var_22_int == 45755) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(543299); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543301, -1, 45757); //@t
				return 0;
			}
			if(var_22_int == 45747) {
				func_2055(var_23_int, "Neutral");
				var_0_bool->SetMessage(543291); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543292, -1, 45748); //@t
				var_0_bool->AddReply(543293, -1, 45749); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_452_bool;
			func_4023(var_452_bool);
			if(var_452_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x81e";
	
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
		bool var_363_bool;
		func_4023(var_363_bool);
		if(var_363_bool == 0) goto Label_15;
		func_3145("Neutral");
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
void func_3586(int var_25_int)
{
	var_25_int = 0;
}


// @pe
void func_3589(void)
{
}


// @pe
void func_3591(int var_209_int)
{
	var_209_int = 0;
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
	func_3226(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_3226(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_2055(bool var_2_bool, string var_49_string)
{
	bool var_50_bool;
	func_4023(var_50_bool);
	if(!var_50_bool) //@nz
		return 0;
	if(var_49_string == var_2_bool)
		return 0;
	string var_53_string; bool var_54_bool;
	var_49_string = var_53_string;
	if(var_49_string == "")
		var_54_bool = false;
	else
		var_54_bool = true;
	func_3161(var_53_string, var_54_bool);
	var_2_bool = var_49_string;
	
}


// @pe
void func_3594(void)
{
}


// @pe
void func_3596(int var_25_int)
{
	var_25_int = 2;
}


// @pe
void func_3084(bool var_328_bool, object var_329_object)
{
	object var_331_object;
	var_329_object = var_331_object;
	bool var_330_bool;
	func_3092(var_330_bool, var_331_object, (float)70);
	var_330_bool = var_328_bool;
}


// @pe
void func_3599(object var_33_object)
{
	object var_34_object;
	func_4033(var_34_object, var_34_object);
}


void func_3092(bool var_330_bool, object var_331_object, float var_332_float)
{
	cvector var_342_cvector;
	var_331_object->GetPosition(var_342_cvector);
	float var_341_float;
	var_331_object->GetEyesHeight(var_341_float);
	var_349_float = GetByIndex(var_342_cvector, 1);
	SetByIndex(var_342_cvector, 1) = (var_349_float + var_341_float);
	cvector var_343_cvector;
	@GetPosition(var_343_cvector);
	@GetEyesHeight(var_341_float);
	var_350_float = GetByIndex(var_343_cvector, 1);
	SetByIndex(var_343_cvector, 1) = (var_350_float + var_341_float);
	cvector var_344_cvector = var_342_cvector - var_343_cvector;
	var_351_float = GetByIndex(var_344_cvector, 1);
	SetByIndex(var_344_cvector, 1) = (float)0;
	var_353_float = sqrt(var_344_cvector | var_344_cvector);
	var_344_cvector /= var_353_float;
	cvector var_345_cvector = -var_344_cvector;
	cvector var_346_cvector = (var_344_cvector * var_332_float) - [0.0, 10.0, 0.0];
	bool var_348_bool;
	@IsOverrideActive(var_348_bool);
	if(var_348_bool != 0)
		var_330_bool = false;
	@StopWorld();
	@CameraTransit((var_343_cvector + var_346_cvector), var_345_cvector, true);
	var_358_float = GetByIndex(var_346_cvector, 0);
	var_359_float = GetByIndex(var_346_cvector, 2);
	@Rotate(var_358_float, var_359_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_330_bool = true;
}


void func_3605(void)
{
}


void func_3606(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
}


// @pe
void func_3611(object var_40_object)
{
	object var_41_object;
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
}


void func_3619(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	@CanSee(var_40_bool, var_38_object);
	var_37_bool = true;
	if(var_40_bool != 1) {
		float var_42_float; object var_43_object;
		var_38_object = var_43_object;
		func_2891(var_42_float, var_43_object);
		var_51_bool = var_42_float <= 4000000;
		if(var_51_bool != 1)
			var_37_bool = false;
	}
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
	func_2879(var_191_cvector);
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
				func_2879(var_201_cvector);
				var_1_bool = var_201_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1616; //@nz

	}
}


// @pe
void func_3634(object var_139_object)
{
	object var_140_object;
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
}


void func_55(void)
{
	bool var_88_bool;
	func_2992(var_88_bool);
	if(!var_88_bool) //@nz
		func_3605();
}


// @pe
void func_3642(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_3619(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
}


void func_573(void)
{
	int var_128_int; int var_129_int; bool var_130_bool; float var_131_float; bool var_132_bool;
	@WaitForAnimEnd();
	bool var_133_bool;
	func_2992(var_133_bool);
	if(!var_133_bool) //@nz
		return 14;
	int var_135_int;
	func_3450(var_135_int);
	int var_126_int;
	var_135_int = var_126_int;
	int var_127_int = 0;
	
	for(;;) {
		bool var_148_bool = false;
		if(var_127_int < 5) {
			bool var_151_bool;
			func_2992(var_151_bool);
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
				func_3443(var_157_string, var_158_int);
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
void func_3649(object var_207_object)
{
	object var_208_object;
	var_207_object = var_208_object;
	func_3634(var_208_object);
}


// @pe
void func_3140(void)
{
	@CameraSwitchToNormal(true);
}


// @pe
void func_3655(bool var_30_bool)
{
	var_30_bool = false;
}


void func_3145(string var_223_string)
{
	bool var_227_bool; float var_228_float; float var_229_float;
	@lshHasAnimation(var_227_bool, var_223_string);
	if(var_227_bool != 0) {
		@lshGetAnimTimes(var_223_string, var_228_float, var_229_float);
		@lshPlayAnimation(var_228_float, var_229_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_223_string);
	}
	
}


// @pe
void func_3658(void)
{
}


// @pe
void func_3660(object var_29_object)
{
	var_29_object->SetReturnValue(1000);
}


// @pe
void func_3665(bool var_138_bool)
{
	int var_140_int;
	func_3285(var_140_int, "branch");
	if(var_140_int == 0) {
		var_138_bool = true;
		return 0;
	}
	var_138_bool = false;
}


void func_3161(string var_53_string, bool var_54_bool)
{
	bool var_60_bool; float var_61_float; float var_62_float;
	@lshHasAnimation(var_60_bool, var_53_string);
	if(var_60_bool != 0) {
		@lshGetAnimTimes(var_53_string, var_61_float, var_62_float);
		@lshPlayAnimation(var_61_float, var_62_float, var_54_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_53_string);
	}
	
}


// @pe
void func_3677(bool var_41_bool)
{
	int var_43_int;
	func_3285(var_43_int, "branch");
	if(var_43_int == 2)
		var_41_bool = true;
	var_41_bool = false;
}


void func_1124(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_3176(object var_91_object)
{
	float var_94_float;
	var_91_object->GetEyesHeight(var_94_float);
	cvector var_95_cvector = [0.0, 0.0, 0.0];
	var_96_float = GetByIndex(var_95_cvector, 1);
	var_94_float = var_96_float;
	SetByIndex(var_95_cvector, 1) = var_96_float;
	@LookAsync(var_91_object, "head", var_95_cvector);
}


// @pe
void func_3689(bool var_179_bool)
{
	int var_181_int;
	func_3285(var_181_int, "d1q01FirstGeorgVisit");
	if(var_181_int == 1)
		var_179_bool = true;
	var_179_bool = false;
}


void func_3187(void)
{
	bool var_25_bool;
	func_4023(var_25_bool);
	if(var_25_bool != 0)
		@lshStopSpeech();
}


void func_1140(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2884(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_3701(bool var_158_bool, object var_159_object)
{
	object var_161_object;
	var_159_object = var_161_object;
	func_3801(var_161_object);
	bool var_160_bool;
	if(var_160_bool != 0) {
		var_158_bool = true;
		return 0;
	}
	var_158_bool = false;
}


void func_3194(string var_53_string, int var_54_int, int var_55_int)
{
	bool var_57_bool;
	int var_59_int;
	var_54_int = var_59_int;
	int var_60_int;
	var_55_int = var_60_int;
	bool var_58_bool;
	func_3236(var_58_bool, var_59_int, var_60_int);
	if(var_58_bool != 0)
		@AddItem(var_57_bool, var_53_string, 0);
}


// @pe
void func_3711(bool var_97_bool, object var_98_object)
{
	object var_100_object;
	var_98_object = var_100_object;
	func_3808(var_100_object);
	bool var_99_bool;
	if(var_99_bool != 0) {
		var_97_bool = true;
		return 0;
	}
	var_97_bool = false;
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
	func_3226(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_3226(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_3205(string var_29_string, int var_30_int, int var_31_int, int var_32_int)
{
	int var_35_int; bool var_36_bool;
	int var_38_int;
	var_30_int = var_38_int;
	int var_39_int;
	var_31_int = var_39_int;
	bool var_37_bool;
	func_3236(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		@irand(var_35_int, var_32_int);
		@AddItem(var_36_bool, var_29_string, 0, (var_35_int + 1));
	}
}


// @pe
void func_3721(bool var_69_bool, object var_70_object)
{
	object var_72_object;
	var_70_object = var_72_object;
	func_3815(var_72_object);
	bool var_71_bool;
	if(var_71_bool != 0) {
		var_69_bool = true;
		return 0;
	}
	var_69_bool = false;
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


// @pe
void func_3731(bool var_80_bool, object var_81_object)
{
	object var_83_object;
	var_81_object = var_83_object;
	func_3822(var_83_object);
	bool var_82_bool;
	if(var_82_bool != 0) {
		var_80_bool = true;
		return 0;
	}
	var_80_bool = false;
}


void func_3220(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_659(bool var_0_bool, object var_83_object)
{
	var_0_bool = var_83_object;
	bool var_90_bool;
	func_710(var_90_bool);
	cvector var_88_cvector;
	@GetDirection(var_88_cvector);
	cvector var_98_cvector;
	func_2884(var_98_cvector, var_0_bool);
	cvector var_89_cvector;
	var_98_cvector = var_89_cvector;
	float var_104_float; cvector var_105_cvector; cvector var_106_cvector;
	var_88_cvector = var_105_cvector;
	var_89_cvector = var_106_cvector;
	func_3268(var_104_float, var_105_cvector, var_106_cvector);
	if(var_104_float < 0) {
		func_2981(var_0_bool);
		var_90_bool = true;
	} else {
		@Sleep(1.5, var_90_bool);
	}
	if(var_90_bool != 0) {
		func_2981(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_3226(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_55_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_55_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_55_float;
}


// @pe
void func_3741(bool var_86_bool, object var_87_object)
{
	object var_89_object;
	var_87_object = var_89_object;
	func_3829(var_89_object);
	bool var_88_bool;
	if(var_88_bool != 0) {
		var_86_bool = true;
		return 0;
	}
	var_86_bool = false;
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
	func_2879(var_168_cvector);
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
				func_2879(var_180_cvector);
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


void func_3236(bool var_37_bool, int var_38_int, int var_39_int)
{
	int var_41_int;
	@irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
}


// @pe
void func_3751(bool var_103_bool, object var_104_object)
{
	object var_106_object;
	var_104_object = var_106_object;
	func_3836(var_106_object);
	bool var_105_bool;
	if(var_105_bool != 0) {
		var_103_bool = true;
		return 0;
	}
	var_103_bool = false;
}


// @pe
void func_3241(float var_85_float, cvector var_86_cvector, cvector var_87_cvector)
{
	var_92_float = sqrt((var_86_cvector | var_86_cvector) * (var_87_cvector | var_87_cvector));
	var_85_float = (var_86_cvector | var_87_cvector) / var_92_float;
}


// @pe
void func_3761(bool var_118_bool, object var_119_object)
{
	object var_121_object;
	var_119_object = var_121_object;
	func_3843(var_121_object);
	bool var_120_bool;
	if(var_120_bool != 0) {
		var_118_bool = true;
		return 0;
	}
	var_118_bool = false;
}


// @pe
void func_3249(float var_75_float, cvector var_76_cvector, cvector var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_75_float = (var_78_float * var_79_float) + (var_81_float * var_82_float);
}


void func_1715(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2884(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_3258(float var_84_float, cvector var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_84_float = sqrt((var_86_float * var_87_float) + (var_89_float * var_90_float));
}


// @pe
void func_3771(bool var_109_bool, object var_110_object)
{
	object var_112_object;
	var_110_object = var_112_object;
	func_3850(var_112_object);
	bool var_111_bool;
	if(var_111_bool != 0) {
		var_109_bool = true;
		return 0;
	}
	var_109_bool = false;
}


void func_1731(bool var_0_bool, int var_47_int, object var_48_object)
{
	var_0_bool = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_2997(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_106_int;
	func_4017(var_106_int);
	var_54_object->SetNPCName(var_106_int);
	int var_107_int;
	func_4015(var_107_int);
	var_54_object->SetNPCDescription(var_107_int);
	string var_108_string;
	func_4019(var_108_string);
	var_54_object->SetPhoto(var_108_string);
	string var_109_string;
	func_4021(var_109_string);
	var_54_object->SetPhoto2(var_109_string);
	int var_110_int;
	func_3889(var_110_int);
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
		var_318_bool = !var_57_bool; //@nz
		if(var_318_bool == 0) goto Label_1794;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_1794:
	object var_319_object;
	var_48_object = var_319_object;
	func_3066();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


// @pe
void func_3268(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	cvector var_77_cvector;
	var_74_cvector = var_77_cvector;
	float var_75_float;
	func_3249(var_75_float, var_76_cvector, var_77_cvector);
	float var_84_float; cvector var_85_cvector;
	var_73_cvector = var_85_cvector;
	func_3258(var_84_float, var_85_cvector);
	float var_93_float; cvector var_94_cvector;
	var_74_cvector = var_94_cvector;
	func_3258(var_93_float, var_94_cvector);
	var_72_float = var_75_float / (var_84_float * var_93_float);
}


// @pe
void func_3781(bool var_164_bool, object var_165_object)
{
	object var_167_object;
	var_165_object = var_167_object;
	func_3857(var_167_object);
	bool var_166_bool;
	if(var_166_bool != 0) {
		var_164_bool = true;
		return 0;
	}
	var_164_bool = false;
}


void func_710(bool var_0_bool)
{
	func_3176(var_0_bool);
}


// @pe
void func_3791(bool var_194_bool, object var_195_object)
{
	object var_197_object;
	var_195_object = var_197_object;
	func_3878(var_197_object);
	bool var_196_bool;
	if(var_196_bool != 0) {
		var_194_bool = true;
		return 0;
	}
	var_194_bool = false;
}


void func_3285(int var_43_int, string var_44_string)
{
	int var_46_int;
	@GetVariable(var_44_string, var_46_int);
	var_46_int = var_43_int;
}


// @pe
void func_3801(bool var_160_bool)
{
	int var_162_int;
	func_3290(var_162_int);
	var_160_bool = var_162_int == 1;
}


void func_3290(int var_72_int)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_72_int = 1 + (var_74_float / 24);
}


// @pe
void func_3808(bool var_99_bool)
{
	int var_101_int;
	func_3290(var_101_int);
	var_99_bool = var_101_int == 2;
}


void func_3299(int var_169_int)
{
	float var_171_float;
	@GetGameTime(var_171_float);
	int var_172_int;
	var_171_float = var_172_int;
	var_169_int = var_172_int % 24;
}


// @pe
void func_3815(bool var_71_bool)
{
	int var_73_int;
	func_3290(var_73_int);
	var_71_bool = var_73_int == 3;
}


// @pe
void func_3822(bool var_82_bool)
{
	int var_84_int;
	func_3290(var_84_int);
	var_82_bool = var_84_int == 4;
}


// @pe
void func_3315(bool var_26_bool, object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		bool var_31_bool; object var_32_object;
		var_27_object = var_32_object;
		func_3606(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xd11";
	}
	if(var_28_string == "player_shot") {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_3619(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0xd11";
	}
	if(var_28_string == "battle") {
		bool var_54_bool; object var_55_object;
		var_27_object = var_55_object;
		func_3642(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = false;
}


// @pe
void func_3829(bool var_88_bool)
{
	int var_90_int;
	func_3290(var_90_int);
	var_88_bool = var_90_int == 5;
}


void func_251(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
}


// @pe
void func_3836(bool var_105_bool)
{
	int var_107_int;
	func_3290(var_107_int);
	var_105_bool = var_107_int == 6;
}


void func_259(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
}


// @pe
void func_3843(bool var_120_bool)
{
	int var_122_int;
	func_3290(var_122_int);
	var_120_bool = var_122_int == 8;
}


// @pe
void func_3850(bool var_111_bool)
{
	int var_113_int;
	func_3290(var_113_int);
	var_111_bool = var_113_int == 10;
}


// @pe
void func_1805(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_119_object, object var_120_object)
{
	var_0_bool = var_120_object;
	var_1_bool = var_119_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_126_bool;
		func_3677(var_1_bool);
		if(var_126_bool != 0) {
			func_2055(var_120_object, "Neutral");
			var_0_bool->SetMessage(543287); //@t
			var_0_bool->ClearReplies(); //@t
			bool var_152_bool = true;
			bool var_153_bool = true;
			bool var_154_bool;
			func_3721(var_154_bool, var_1_bool);
			if(var_154_bool != 1) {
				bool var_165_bool;
				func_3731(var_165_bool, var_1_bool);
				if(var_165_bool != 1)
					var_153_bool = false;
			}
			if(var_153_bool != 1) {
				bool var_171_bool;
				func_3741(var_171_bool, var_1_bool);
				if(var_171_bool != 1)
					var_152_bool = false;
			}
			if(var_152_bool != 0)
				var_0_bool->AddReply(543290, 45747, 45746); //@t
			bool var_180_bool = true;
			bool var_181_bool = true;
			bool var_182_bool;
			func_3711(var_182_bool, var_1_bool);
			if(var_182_bool != 1) {
				bool var_188_bool;
				func_3751(var_188_bool, var_1_bool);
				if(var_188_bool != 1)
					var_181_bool = false;
			}
			if(var_181_bool != 1) {
				bool var_194_bool;
				func_3771(var_194_bool, var_1_bool);
				if(var_194_bool != 1)
					var_180_bool = false;
			}
			if(var_180_bool != 0)
				var_0_bool->AddReply(543294, 45752, 45750); //@t
			bool var_203_bool;
			func_3761(var_203_bool, var_1_bool);
			if(var_203_bool != 0)
				var_0_bool->AddReply(543295, 45761, 45751); //@t
			var_0_bool->AddReply(543288, -1, 45744); //@t
			var_0_bool->AddReply(543289, -1, 45745); //@t
			var_0_bool->AddReply(543304, -1, 45760); //@t
		} else {
					func_2055(var_120_object, "Neutral");
					var_0_bool->SetMessage(537723); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_241_bool;
					func_3665(var_1_bool);
					if(var_241_bool != 0)
						var_0_bool->AddReply(537724, 39573, 39572); //@t
					bool var_250_bool;
					func_3665(var_1_bool);
					if(!var_250_bool) //@nz
						var_0_bool->AddReply(537728, -1, 39576); //@t
					bool var_256_bool = false;
					bool var_257_bool = false;
					bool var_258_bool = false;
					bool var_259_bool;
					func_3665(var_1_bool);
					if(var_259_bool != 0) {
						bool var_261_bool;
						func_3701(var_261_bool, var_1_bool);
						if(var_261_bool != 0)
							var_258_bool = true;
					}
					if(var_258_bool != 0) {
						bool var_267_bool;
						func_3781(var_267_bool, var_1_bool);
						if(var_267_bool != 0)
							var_257_bool = true;
					}
					if(var_257_bool != 0) {
						bool var_282_bool;
						func_3689(var_1_bool);
						if(var_282_bool != 0)
							var_256_bool = true;
					}
					if(var_256_bool != 0)
						var_0_bool->AddReply(537729, 39578, 39577); //@t
					bool var_291_bool = false;
					bool var_292_bool = false;
					bool var_293_bool;
					func_3665(var_1_bool);
					if(var_293_bool != 0) {
						bool var_295_bool;
						func_3701(var_295_bool, var_1_bool);
						if(var_295_bool != 0)
							var_292_bool = true;
					}
					if(var_292_bool != 0) {
						bool var_297_bool;
						func_3791(var_297_bool, var_1_bool);
						if(var_297_bool != 0)
							var_291_bool = true;
					}
					if(var_291_bool != 0)
						var_0_bool->AddReply(537740, 39589, 39588); //@t
					bool var_307_bool;
					func_3741(var_307_bool, var_1_bool);
					if(var_307_bool != 0)
						var_0_bool->AddReply(537755, 39604, 39603); //@t
					var_0_bool->AddReply(537783, -1, 39634); //@t
					var_0_bool->AddReply(537784, -1, 39635); //@t
		}
	}
	for(;;) {
		bool var_221_bool;
		func_4023(var_221_bool);
		if(var_221_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_3145(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_2054;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2054:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x711";


// @pe
void func_3857(bool var_166_bool)
{
	bool var_168_bool = false;
	int var_169_int;
	func_3299(var_169_int);
	if(var_169_int >= 0) {
		int var_176_int;
		func_3299(var_176_int);
		if(var_176_int < 12)
			var_168_bool = true;
	}
	if(var_168_bool != 0) {
		var_166_bool = true;
		return 0;
	}
	var_166_bool = false;
}


// @pe
void func_3347(object var_60_object, string var_61_string)
{
	if(var_61_string == "unholster") {
		object var_64_object;
		var_60_object = var_64_object;
		func_3611(var_64_object);
	} else if(var_61_string == "player_shot") {
			object var_139_object;
			var_60_object = var_139_object;
			func_3634(var_139_object);
	}
Label_3371:
	for(;;) {

	}
	
	if(!(var_61_string == "battle")) goto Label_3371;
	object var_207_object;
	var_60_object = var_207_object;
	func_3649(var_207_object);
}


void func_276(bool var_2_bool, object var_23_object)
{
	bool var_28_bool; object var_29_object;
	func_2957(var_28_bool, var_29_object);
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
	func_3467(var_66_object);
	int var_27_int;
	var_65_int = var_27_int;
	if(var_27_int > 0) {
		if(var_27_int > 1)
			func_259(var_27_int);
		object var_82_object;
		var_23_object = var_82_object;
		func_3476(var_82_object);
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
void func_3878(bool var_196_bool)
{
	int var_198_int;
	func_3299(var_198_int);
	if(var_198_int >= 12)
		var_196_bool = true;
	var_196_bool = false;
}


void func_3372(bool var_23_bool, object var_24_object)
{
	bool var_26_bool;
	bool var_27_bool = false;
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_3606(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		func_2899(var_32_bool, var_33_object);
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


void func_1327(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2884(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_3889(int var_110_int)
{
	int var_112_int;
	@GetVariable("branch", var_112_int);
	if(var_112_int == 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0xf40";
	}
	if(var_112_int == 1) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
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


void func_2879(cvector var_94_cvector)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
}


void func_3906(int var_40_int)
{
	int var_42_int;
	@GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
}


// @pe
void func_3395(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_3611(var_40_object);
}


void func_2884(cvector var_79_cvector, object var_80_object)
{
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	cvector var_84_cvector;
	var_80_object->GetPosition(var_84_cvector);
	var_79_cvector = var_84_cvector - var_83_cvector;
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
	func_3226(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_3226(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_3912(float var_68_float)
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
void func_3401(object var_25_object)
{
	bool var_26_bool; object var_27_object;
	func_2899(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		object var_30_object;
		func_3220(var_30_object);
		@ReportReputationChange(var_27_object, var_30_object, -0.03);
	}
}


void func_2891(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


void func_2899(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
}


void func_3414(bool var_23_bool, string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_3655(var_31_object);
		var_30_bool = var_23_bool;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = false;
}


// @pe
void func_3926(object var_39_object)
{
	int var_40_int;
	func_3906(var_40_int);
	if(var_40_int == 1)
		@WorkWithCorpse(var_39_object);
	else
		@Barter(var_39_object);
	
}


void func_2904(bool var_51_bool, object var_52_object, string var_53_string)
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


void func_858(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_3939(bool var_24_bool)
{
	int var_26_int;
	@ClearSubContainer(0);
	if(var_24_bool != 0) {
		func_3205("rifle_ammo", 1, 2, 2);
		func_3205("revolver_ammo", 1, 2, 2);
		func_3205("samopal_ammo", 2, 2, 2);
	} else {
		func_3194("lockpick", 1, 4);
		func_3205("alpha_pills", 1, 2, 3);
		func_3194("meradorm", 1, 2);
		func_3194("powder", 1, 15);
		int var_72_int;
		func_3290(var_72_int);
		var_72_int = var_26_int;
		if(var_26_int >= 4)
			func_3194("beta_pills", 1, 2);
		if(!(var_26_int >= 6)) goto Label_4014;
		func_3194("gamma_pills", 1, 7);
	}
Label_4014:
	
}


void func_2916(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
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
	func_2879(var_97_cvector);
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
				func_2879(var_109_cvector);
				var_1_bool = var_109_cvector + var_53_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1422; //@nz

	}
}


void func_3430(string var_34_string)
{
	object var_36_object;
	if(var_34_string == "heal") {
		@FindActor(var_36_object, "player");
		object var_40_object;
		var_36_object = var_40_object;
		func_3658();
		var_36_object = null;
	}
}


void func_2921(bool var_33_bool, object var_34_object)
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
		func_2916(var_44_bool, var_45_object);
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


void func_3443(string var_141_string, int var_142_int)
{
	string var_144_string = "idle";
	if(var_142_int != 0)
		var_144_string += var_142_int;
	var_144_string = var_141_string;
}


void func_375(float var_107_float)
{
	float var_109_float;
	@GetCameraFarDistance(var_109_float);
	var_109_float = var_107_float;
}


void func_3450(int var_135_int)
{
	int var_138_int; bool var_139_bool;
	var_138_int = 0;
	
	for(;;) {
		string var_141_string; int var_142_int;
		var_138_int = var_142_int;
		func_3443(var_141_string, var_142_int);
		@HasAnimation(var_139_bool, "all", var_141_string);
		if(!var_139_bool) //@nz
			break;
		var_138_int += 1;
	}
	var_138_int = var_135_int;
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
void func_3467(int var_65_int)
{
	bool var_67_bool;
	func_4073(var_67_bool);
	if(var_67_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
}


void func_2957(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_2921(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_2904(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
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
void func_3476(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	TaskCall(3);
	func_659(var_84_object, var_83_object);
	TaskReturn();
}


// @pe
void func_3484(int var_34_int, object var_35_object)
{
	object var_37_object;
	var_35_object = var_37_object;
	bool var_36_bool;
	func_2957(var_36_bool, var_37_object);
	if(var_36_bool != 0)
		var_34_int = 2;
	else
		var_34_int = 0;
	
}


void func_2981(object var_98_object)
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
void func_3494(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
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
void func_3502(int var_74_int, object var_75_object)
{
	object var_78_object;
	var_75_object = var_78_object;
	bool var_77_bool;
	func_2957(var_77_bool, var_78_object);
	if(var_77_bool != 0)
		var_74_int = 2;
	else
		var_74_int = 0;
	
}


void func_4015(int var_107_int)
{
	var_107_int = 515561;
}


void func_2992(bool var_88_bool)
{
	bool var_90_bool;
	@IsLoaded(var_90_bool);
	var_90_bool = var_88_bool;
}


void func_4017(int var_106_int)
{
	var_106_int = 503346;
}


void func_4019(string var_108_string)
{
	var_108_string = "ui/NPC_Citizen1.png";
}


void func_2997(bool var_58_bool, object var_59_object, float var_60_float)
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
	func_3226(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
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
	func_4023(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_3060;
		@LookAsyncCamera("head");
	}
Label_3060:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


void func_4021(string var_109_string)
{
	var_109_string = "ui/NPC_Citizen1_b.png";
}


void func_4023(bool var_25_bool)
{
	var_25_bool = false;
}


// @pe
void func_3512(object var_111_object)
{
	object var_112_object;
	var_111_object = var_112_object;
	TaskCall(5);
	func_1186(var_113_object, var_114_cvector, var_115_bool, var_112_object);
	TaskReturn();
}


void func_4025(void)
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_3939(false);
}


void func_3520(bool var_31_bool, object var_32_object, object var_33_object, float var_34_float)
{
	object var_40_object;
	var_33_object = var_40_object;
	bool var_39_bool;
	func_2904(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_31_bool = false;
		return 4;
	}
	string var_37_string;
	var_33_object->GetProperty("class", var_37_string);
	if(var_37_string == "rat") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0xdde";
	}
	if(var_37_string == "rat_big") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0xdde";
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
		func_2891(var_58_float, var_59_object);
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
		func_2891(var_70_float, var_71_object);
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


void func_4033(object var_34_object, object var_49_object)
{
	bool var_36_bool;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		@IsOverrideActive(var_36_bool);
		if(!var_36_bool) { //@nz
			object var_39_object;
			var_34_object = var_39_object;
			func_3926(var_39_object);
		}
		return 2;
	EMIT "GOTO 0xfe8";
	}
	int var_47_int; object var_48_object;
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	if(1000 == var_49_object) {
		bool var_328_bool; object var_329_object;
		var_34_object = var_329_object;
		func_3084(var_328_bool, var_329_object);
		if(!var_328_bool) //@nz
			return 2;
		object var_361_object;
		var_34_object = var_361_object;
		TaskCall(0);
		func_0(var_361_object);
		TaskReturn();
		object var_368_object;
		var_34_object = var_368_object;
		func_3140();
	}
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
	func_3226(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_3226(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
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
	func_2879(var_140_cvector);
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
				func_2879(var_152_cvector);
				var_1_bool = var_152_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1041; //@nz

	}
}


void func_4073(bool var_67_bool)
{
	float var_68_float;
	func_3912(var_68_float);
	var_67_bool = var_68_float > 0.2;
}


// @pe
void func_4079(bool var_27_bool, object var_28_object, object var_29_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	object var_33_object;
	var_29_object = var_33_object;
	bool var_31_bool;
	func_3520(var_31_bool, var_32_object, var_33_object, 700.0);
	var_31_bool = var_27_bool;
}


void func_1521(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_2884(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_3241(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_3066(void)
{
	bool var_321_bool;
	@CameraSwitchToNormal(true);
	bool var_323_bool;
	func_4023(var_323_bool);
	if(var_323_bool != 0) {
	} else {
		@HasAnimationTrack(var_321_bool, "head");
		if(var_321_bool == 0) goto Label_3083;
		@UnlookAsync("head");
	}
Label_3083:
	
}


