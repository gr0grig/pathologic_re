// @GLOBALS: 0:bool:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool;
		func_6173(var_23_bool);
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
		func_6175();
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
		func_5694(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_5697(var_32_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_5509(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5592(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_75_object;
			var_22_bool = var_75_object;
			func_5602(var_75_object);
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
		func_6225(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_5610(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_251(var_26_int);
				object var_112_object;
				var_22_object = var_112_object;
				func_5620(var_112_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_5704(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_251(var_24_int);
			object var_32_object;
			var_22_bool = var_32_object;
			func_5707();
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
		func_5423(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_251(var_25_int);
			object var_59_object; string var_60_string;
			var_22_string = var_59_object;
			var_23_bool = var_60_string;
			func_5455(var_59_object, var_60_string);
		} else {
			int var_208_int; string var_209_string; object var_210_object;
			var_23_bool = var_209_string;
			var_22_string = var_210_object;
			func_5709(var_210_object);
			var_208_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_192;
			if(var_25_int > 1)
				func_251(var_25_int);
			string var_215_string; object var_216_object;
			var_23_bool = var_215_string;
			var_22_string = var_216_object;
			func_5712();
		}
	Label_192:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; string var_24_string;
		func_5522(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_251(var_24_string);
			string var_33_string;
			var_22_bool = var_33_string;
			func_5538(var_33_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		bool var_23_bool; object var_24_object;
		func_5480(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_251(var_24_object);
			object var_38_object;
			var_22_bool = var_38_object;
			func_5503(var_38_object);
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
		func_5703();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_251(var_22_bool);
		object var_24_object;
		var_22_bool = var_24_object;
		func_5417();
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
		func_5694(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_5697(var_31_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_5509(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5592(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_74_object;
			var_22_bool = var_74_object;
			func_5602(var_74_object);
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
		func_6225(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_5610(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_654();
				object var_111_object;
				var_22_object = var_111_object;
				func_5620(var_111_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_5704(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_654();
			object var_31_object;
			var_22_bool = var_31_object;
			func_5707();
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
		func_5423(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_654();
			object var_58_object; string var_59_string;
			var_22_string = var_58_object;
			var_23_bool = var_59_string;
			func_5455(var_58_object, var_59_string);
		} else {
			int var_207_int; string var_208_string; object var_209_object;
			var_23_bool = var_208_string;
			var_22_string = var_209_object;
			func_5709(var_209_object);
			var_207_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_537;
			if(var_25_int > 1)
				func_654();
			string var_214_string; object var_215_object;
			var_23_bool = var_214_string;
			var_22_string = var_215_object;
			func_5712();
		}
	Label_537:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_5522(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_654();
			string var_32_string;
			var_22_bool = var_32_string;
			func_5538(var_32_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_654();
		func_5703();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_5480(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_654();
			object var_37_object;
			var_22_bool = var_37_object;
			func_5503(var_37_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_5694(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_5697(var_33_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_25_object;
		var_22_bool = var_25_object;
		func_5509(var_25_object);
		int var_34_int; object var_35_object;
		var_22_bool = var_35_object;
		func_5592(var_34_int, var_35_object);
		int var_24_int;
		var_34_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_76_object;
			var_22_bool = var_76_object;
			func_5602(var_76_object);
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
		func_6225(var_28_object, var_29_object, var_30_bool);
		bool var_27_bool;
		if(var_27_bool != 0) {
			int var_76_int; object var_77_object; bool var_78_bool;
			var_22_object = var_77_object;
			var_24_bool = var_78_bool;
			func_5610(var_77_object, var_78_bool);
			var_76_int = var_26_int;
			if(var_26_int > 0) {
				if(var_26_int > 1)
					func_858();
				object var_113_object;
				var_22_object = var_113_object;
				func_5620(var_113_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_26_object;
		var_22_bool = var_26_object;
		func_5704(var_26_object);
		int var_24_int;
		int var_25_int = var_24_int;
		if(var_24_int > 0) {
			if(var_24_int > 1)
				func_858();
			object var_33_object;
			var_22_bool = var_33_object;
			func_5707();
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
		func_5423(var_26_bool, var_27_object, var_28_string);
		if(var_26_bool != 0) {
			func_858();
			object var_60_object; string var_61_string;
			var_22_string = var_60_object;
			var_23_bool = var_61_string;
			func_5455(var_60_object, var_61_string);
		} else {
			int var_209_int; string var_210_string; object var_211_object;
			var_23_bool = var_210_string;
			var_22_string = var_211_object;
			func_5709(var_211_object);
			var_209_int = var_25_int;
			if(!(var_25_int > 0)) goto Label_843;
			if(var_25_int > 1)
				func_858();
			string var_216_string; object var_217_object;
			var_23_bool = var_216_string;
			var_22_string = var_217_object;
			func_5712();
		}
	Label_843:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		string var_24_string;
		var_22_bool = var_24_string;
		bool var_23_bool;
		func_5522(var_23_bool, var_24_string);
		if(var_23_bool != 0) {
			func_858();
			string var_34_string;
			var_22_bool = var_34_string;
			func_5538(var_34_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		func_858();
		object var_25_object;
		var_22_bool = var_25_object;
		func_5417();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		if(var_22_bool != 111)
			return 4;
		bool var_29_bool;
		func_5065(var_29_bool, var_0_bool);
		if(!var_29_bool) { //@nz
			func_858();
			return 4;
		}
		cvector var_25_cvector;
		@GetDirection(var_25_cvector);
		cvector var_66_cvector;
		func_4992(var_66_cvector, var_0_bool);
		cvector var_26_cvector;
		var_66_cvector = var_26_cvector;
		float var_72_float; cvector var_73_cvector; cvector var_74_cvector;
		var_25_cvector = var_73_cvector;
		var_26_cvector = var_74_cvector;
		func_5376(var_72_float, var_73_cvector, var_74_cvector);
		if(var_72_float < 0.49999997)
			func_5089(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_858();
		func_5703();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool, object var_18_object, object var_19_object, object var_20_object, string var_21_string, bool var_22_bool)
	{
		object var_24_object;
		var_22_bool = var_24_object;
		bool var_23_bool;
		func_5480(var_23_bool, var_24_object);
		if(var_23_bool != 0) {
			func_858();
			object var_39_object;
			var_22_bool = var_39_object;
			func_5503(var_39_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1124(var_21_bool);
		func_5703();
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
			func_4987(var_94_cvector);
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
		func_5417();
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
			func_4987(var_94_cvector);
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
		func_5417();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1505(var_21_bool);
		func_5703();
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
			func_4987(var_94_cvector);
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
		func_5417();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, object var_18_object, object var_19_object, string var_20_string, bool var_21_bool)
	{
		func_1699(var_21_bool);
		func_5703();
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
			func_4987(var_94_cvector);
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
		func_5417();
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
			func_5295();
			if(var_23_int == 45706) {
				object var_28_object = var_1_bool;
				func_5768(var_0_bool);
			}
			if(var_23_int == 45718) {
				object var_33_object = var_1_bool;
				func_5768(var_0_bool);
			}
			if(var_23_int == 45732) {
				object var_37_object = var_1_bool;
				func_5768(var_0_bool);
			}
			if(var_23_int == 39354) {
				object var_41_object = var_1_bool;
				func_5768(var_0_bool);
			}
			if(var_22_int == 45703) {
				bool var_45_bool;
				func_5785(var_1_bool);
				if(var_45_bool != 0) {
					func_2491(var_23_int, "Neutral");
					var_0_bool->SetMessage(543247); //@t
					var_0_bool->ClearReplies(); //@t
					bool var_71_bool = true;
					bool var_72_bool = true;
					bool var_73_bool;
					func_5807(var_73_bool, var_1_bool);
					if(var_73_bool != 1) {
						bool var_84_bool;
						func_5857(var_84_bool, var_1_bool);
						if(var_84_bool != 1)
							var_72_bool = false;
					}
					if(var_72_bool != 1) {
						bool var_90_bool;
						func_5887(var_90_bool, var_1_bool);
						if(var_90_bool != 1)
							var_71_bool = false;
					}
					if(var_71_bool != 0)
						var_0_bool->AddReply(543249, 45709, 45705); //@t
					bool var_99_bool;
					func_5837(var_99_bool, var_1_bool);
					if(var_99_bool != 0)
						var_0_bool->AddReply(543251, 45719, 45707); //@t
					bool var_108_bool = true;
					bool var_109_bool;
					func_5837(var_109_bool, var_1_bool);
					if(var_109_bool != 1) {
						bool var_111_bool;
						func_5847(var_111_bool, var_1_bool);
						if(var_111_bool != 1)
							var_108_bool = false;
					}
					if(var_108_bool != 0)
						var_0_bool->AddReply(543277, 45734, 45733); //@t
					bool var_120_bool = true;
					bool var_121_bool;
					func_5867(var_121_bool, var_1_bool);
					if(var_121_bool != 1) {
						bool var_127_bool;
						func_5877(var_127_bool, var_1_bool);
						if(var_127_bool != 1)
							var_120_bool = false;
					}
					if(var_120_bool != 0)
						var_0_bool->AddReply(543282, 45739, 45738); //@t
					bool var_136_bool = true;
					bool var_137_bool = true;
					bool var_138_bool = true;
					bool var_139_bool;
					func_5797(var_139_bool, var_1_bool);
					if(var_139_bool != 1) {
						bool var_145_bool;
						func_5807(var_145_bool, var_1_bool);
						if(var_145_bool != 1)
							var_138_bool = false;
					}
					if(var_138_bool != 1) {
						bool var_147_bool;
						func_5817(var_147_bool, var_1_bool);
						if(var_147_bool != 1)
							var_137_bool = false;
					}
					if(var_137_bool != 1) {
						bool var_153_bool;
						func_5827(var_153_bool, var_1_bool);
						if(var_153_bool != 1)
							var_136_bool = false;
					}
					if(var_136_bool != 0)
						var_0_bool->AddReply(543250, -1, 45706); //@t
					bool var_162_bool = true;
					bool var_163_bool = true;
					bool var_164_bool = true;
					bool var_165_bool;
					func_5837(var_165_bool, var_1_bool);
					if(var_165_bool != 1) {
						bool var_167_bool;
						func_5847(var_167_bool, var_1_bool);
						if(var_167_bool != 1)
							var_164_bool = false;
					}
					if(var_164_bool != 1) {
						bool var_169_bool;
						func_5857(var_169_bool, var_1_bool);
						if(var_169_bool != 1)
							var_163_bool = false;
					}
					if(var_163_bool != 1) {
						bool var_171_bool;
						func_5867(var_171_bool, var_1_bool);
						if(var_171_bool != 1)
							var_162_bool = false;
					}
					if(var_162_bool != 0)
						var_0_bool->AddReply(543262, -1, 45718); //@t
					bool var_176_bool = true;
					bool var_177_bool = true;
					bool var_178_bool = true;
					bool var_179_bool;
					func_5877(var_179_bool, var_1_bool);
					if(var_179_bool != 1) {
						bool var_181_bool;
						func_5887(var_181_bool, var_1_bool);
						if(var_181_bool != 1)
							var_178_bool = false;
					}
					if(var_178_bool != 1) {
						bool var_183_bool;
						func_5897(var_183_bool, var_1_bool);
						if(var_183_bool != 1)
							var_177_bool = false;
					}
					if(var_177_bool != 1) {
						bool var_189_bool;
						func_5907(var_189_bool, var_1_bool);
						if(var_189_bool != 1)
							var_176_bool = false;
					}
					if(var_176_bool != 0)
						var_0_bool->AddReply(543276, -1, 45732); //@t
					bool var_198_bool = true;
					bool var_199_bool = true;
					bool var_200_bool = true;
					bool var_201_bool;
					func_5797(var_201_bool, var_1_bool);
					if(var_201_bool != 1) {
						bool var_203_bool;
						func_5817(var_203_bool, var_1_bool);
						if(var_203_bool != 1)
							var_200_bool = false;
					}
					if(var_200_bool != 1) {
						bool var_205_bool;
						func_5827(var_205_bool, var_1_bool);
						if(var_205_bool != 1)
							var_199_bool = false;
					}
					if(var_199_bool != 1) {
						bool var_207_bool;
						func_5857(var_207_bool, var_1_bool);
						if(var_207_bool != 1)
							var_198_bool = false;
					}
					if(var_198_bool != 0)
						var_0_bool->AddReply(543248, -1, 45704); //@t
					bool var_212_bool = true;
					bool var_213_bool = true;
					bool var_214_bool = true;
					bool var_215_bool;
					func_5847(var_215_bool, var_1_bool);
					if(var_215_bool != 1) {
						bool var_217_bool;
						func_5837(var_217_bool, var_1_bool);
						if(var_217_bool != 1)
							var_214_bool = false;
					}
					if(var_214_bool != 1) {
						bool var_219_bool;
						func_5867(var_219_bool, var_1_bool);
						if(var_219_bool != 1)
							var_213_bool = false;
					}
					if(var_213_bool != 1) {
						bool var_221_bool;
						func_5807(var_221_bool, var_1_bool);
						if(var_221_bool != 1)
							var_212_bool = false;
					}
					if(var_212_bool != 0)
						var_0_bool->AddReply(543252, -1, 45708); //@t
					bool var_226_bool = true;
					bool var_227_bool;
					func_5897(var_227_bool, var_1_bool);
					if(var_227_bool != 1) {
						bool var_229_bool;
						func_5907(var_229_bool, var_1_bool);
						if(var_229_bool != 1)
							var_226_bool = false;
					}
					if(var_226_bool != 0)
						var_0_bool->AddReply(543281, -1, 45737); //@t
					bool var_234_bool = true;
					bool var_235_bool;
					func_5877(var_235_bool, var_1_bool);
					if(var_235_bool != 1) {
						bool var_237_bool;
						func_5887(var_237_bool, var_1_bool);
						if(var_237_bool != 1)
							var_234_bool = false;
					}
					if(var_234_bool != 0)
						var_0_bool->AddReply(543275, -1, 45731); //@t
					return 0;
				}
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537506); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537507, -1, 39354); //@t
				bool var_247_bool = false;
				bool var_248_bool = false;
				bool var_249_bool;
				func_5773(var_1_bool);
				if(var_249_bool != 0) {
					bool var_255_bool;
					func_5797(var_255_bool, var_1_bool);
					if(var_255_bool != 0)
						var_248_bool = true;
				}
				if(var_248_bool != 0) {
					bool var_257_bool;
					func_5917(var_257_bool, var_1_bool);
					if(var_257_bool != 0)
						var_247_bool = true;
				}
				if(var_247_bool != 0)
					var_0_bool->AddReply(537508, 39356, 39355); //@t
				bool var_275_bool = false;
				bool var_276_bool = false;
				bool var_277_bool;
				func_5773(var_1_bool);
				if(var_277_bool != 0) {
					bool var_279_bool;
					func_5797(var_279_bool, var_1_bool);
					if(var_279_bool != 0)
						var_276_bool = true;
				}
				if(var_276_bool != 0) {
					bool var_281_bool;
					func_5927(var_281_bool, var_1_bool);
					if(var_281_bool != 0)
						var_275_bool = true;
				}
				if(var_275_bool != 0)
					var_0_bool->AddReply(537524, 39372, 39371); //@t
				bool var_291_bool = false;
				bool var_292_bool;
				func_5773(var_1_bool);
				if(var_292_bool != 0) {
					bool var_294_bool;
					func_5807(var_294_bool, var_1_bool);
					if(var_294_bool != 0)
						var_291_bool = true;
				}
				if(var_291_bool != 0)
					var_0_bool->AddReply(537534, 39382, 39381); //@t
				bool var_299_bool = false;
				bool var_300_bool;
				func_5773(var_1_bool);
				if(var_300_bool != 0) {
					bool var_302_bool;
					func_5817(var_302_bool, var_1_bool);
					if(var_302_bool != 0)
						var_299_bool = true;
				}
				if(var_299_bool != 0)
					var_0_bool->AddReply(537549, 39397, 39396); //@t
				bool var_307_bool = false;
				bool var_308_bool;
				func_5773(var_1_bool);
				if(var_308_bool != 0) {
					bool var_310_bool;
					func_5827(var_310_bool, var_1_bool);
					if(var_310_bool != 0)
						var_307_bool = true;
				}
				if(var_307_bool != 0)
					var_0_bool->AddReply(537559, 39407, 39406); //@t
				bool var_315_bool = false;
				bool var_316_bool;
				func_5773(var_1_bool);
				if(var_316_bool != 0) {
					bool var_318_bool;
					func_5837(var_318_bool, var_1_bool);
					if(var_318_bool != 0)
						var_315_bool = true;
				}
				if(var_315_bool != 0)
					var_0_bool->AddReply(537571, 39419, 39418); //@t
				bool var_323_bool = false;
				bool var_324_bool;
				func_5773(var_1_bool);
				if(var_324_bool != 0) {
					bool var_326_bool;
					func_5847(var_326_bool, var_1_bool);
					if(var_326_bool != 0)
						var_323_bool = true;
				}
				if(var_323_bool != 0)
					var_0_bool->AddReply(537593, 39442, 39441); //@t
				bool var_331_bool = false;
				bool var_332_bool;
				func_5773(var_1_bool);
				if(var_332_bool != 0) {
					bool var_334_bool;
					func_5857(var_334_bool, var_1_bool);
					if(var_334_bool != 0)
						var_331_bool = true;
				}
				if(var_331_bool != 0)
					var_0_bool->AddReply(537603, 39452, 39451); //@t
				bool var_339_bool = false;
				bool var_340_bool;
				func_5773(var_1_bool);
				if(var_340_bool != 0) {
					bool var_342_bool;
					func_5867(var_342_bool, var_1_bool);
					if(var_342_bool != 0)
						var_339_bool = true;
				}
				if(var_339_bool != 0)
					var_0_bool->AddReply(537621, 39470, 39469); //@t
				bool var_347_bool;
				func_5877(var_347_bool, var_1_bool);
				if(var_347_bool != 0)
					var_0_bool->AddReply(537633, 39482, 39481); //@t
				bool var_352_bool;
				func_5887(var_352_bool, var_1_bool);
				if(var_352_bool != 0)
					var_0_bool->AddReply(537640, 39489, 39488); //@t
				bool var_357_bool = false;
				bool var_358_bool;
				func_5773(var_1_bool);
				if(var_358_bool != 0) {
					bool var_360_bool;
					func_5897(var_360_bool, var_1_bool);
					if(var_360_bool != 0)
						var_357_bool = true;
				}
				if(var_357_bool != 0)
					var_0_bool->AddReply(537647, 39496, 39495); //@t
				bool var_365_bool = false;
				bool var_366_bool = false;
				bool var_367_bool;
				func_5773(var_1_bool);
				if(var_367_bool != 0) {
					bool var_369_bool;
					func_5927(var_369_bool, var_1_bool);
					if(var_369_bool != 0)
						var_366_bool = true;
				}
				if(var_366_bool != 0) {
					bool var_371_bool;
					func_5797(var_371_bool, var_1_bool);
					if(var_371_bool != 0)
						var_365_bool = true;
				}
				if(var_365_bool != 0)
					var_0_bool->AddReply(537659, 39508, 39507); //@t
				bool var_376_bool;
				func_5797(var_376_bool, var_1_bool);
				if(var_376_bool != 0)
					var_0_bool->AddReply(537665, 39514, 39513); //@t
				bool var_381_bool;
				func_5797(var_381_bool, var_1_bool);
				if(var_381_bool != 0)
					var_0_bool->AddReply(537671, 39520, 39519); //@t
				bool var_386_bool = false;
				bool var_387_bool;
				func_5797(var_387_bool, var_1_bool);
				if(var_387_bool != 0) {
					bool var_389_bool;
					func_5917(var_389_bool, var_1_bool);
					if(var_389_bool != 0)
						var_386_bool = true;
				}
				if(var_386_bool != 0)
					var_0_bool->AddReply(537689, 39538, 39537); //@t
				bool var_394_bool = false;
				bool var_395_bool;
				func_5797(var_395_bool, var_1_bool);
				if(var_395_bool != 0) {
					bool var_397_bool;
					func_5917(var_397_bool, var_1_bool);
					if(var_397_bool != 0)
						var_394_bool = true;
				}
				if(var_394_bool != 0)
					var_0_bool->AddReply(537702, 39551, 39550); //@t
				var_0_bool->AddReply(537721, -1, 39569); //@t
				return 0;
			}
			if(var_22_int == 39551) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537703); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537704, 39553, 39552); //@t
				return 0;
			}
			if(var_22_int == 39553) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537705); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537706, 39555, 39554); //@t
				var_0_bool->AddReply(537717, 39566, 39565); //@t
				return 0;
			}
			if(var_22_int == 39566) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537718); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537719, -1, 39567); //@t
				bool var_429_bool;
				func_5773(var_1_bool);
				if(var_429_bool != 0)
					var_0_bool->AddReply(537720, -1, 39568); //@t
				return 0;
			}
			if(var_22_int == 39555) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537707); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537708, 39557, 39556); //@t
				var_0_bool->AddReply(537711, 39560, 39559); //@t
				return 0;
			}
			if(var_22_int == 39560) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537712); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_448_bool;
				func_5773(var_1_bool);
				if(var_448_bool != 0)
					var_0_bool->AddReply(537713, -1, 39561); //@t
				var_0_bool->AddReply(537714, 39563, 39562); //@t
				return 0;
			}
			if(var_22_int == 39563) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537715); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537716, -1, 39564); //@t
				return 0;
			}
			if(var_22_int == 39557) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537709); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537710, -1, 39558); //@t
				return 0;
			}
			if(var_22_int == 39538) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537690); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537691, 39540, 39539); //@t
				var_0_bool->AddReply(537701, -1, 39549); //@t
				return 0;
			}
			if(var_22_int == 39540) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537692); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537693, 39542, 39541); //@t
				var_0_bool->AddReply(537696, 39545, 39544); //@t
				return 0;
			}
			if(var_22_int == 39545) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537697); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537698, 39547, 39546); //@t
				return 0;
			}
			if(var_22_int == 39547) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537699); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537700, -1, 39548); //@t
				return 0;
			}
			if(var_22_int == 39542) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537694); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537695, -1, 39543); //@t
				return 0;
			}
			if(var_22_int == 39520) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537672); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537673, 39522, 39521); //@t
				var_0_bool->AddReply(537678, 39527, 39526); //@t
				return 0;
			}
			if(var_22_int == 39527) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537679); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537680, 39529, 39528); //@t
				return 0;
			}
			if(var_22_int == 39529) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537681); //@t
				var_0_bool->ClearReplies(); //@t
				bool var_532_bool;
				func_5773(var_1_bool);
				if(var_532_bool != 0)
					var_0_bool->AddReply(537682, 39531, 39530); //@t
				var_0_bool->AddReply(537688, -1, 39536); //@t
				return 0;
			}
			if(var_22_int == 39531) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537683); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537684, 39533, 39532); //@t
				var_0_bool->AddReply(537687, -1, 39535); //@t
				return 0;
			}
			if(var_22_int == 39533) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537685); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537686, -1, 39534); //@t
				return 0;
			}
			if(var_22_int == 39522) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537674); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537675, 39524, 39523); //@t
				return 0;
			}
			if(var_22_int == 39524) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537676); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537677, -1, 39525); //@t
				return 0;
			}
			if(var_22_int == 39514) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537666); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537667, 39516, 39515); //@t
				var_0_bool->AddReply(537670, -1, 39518); //@t
				return 0;
			}
			if(var_22_int == 39516) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537668); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537669, -1, 39517); //@t
				return 0;
			}
			if(var_22_int == 39508) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537660); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537661, 39510, 39509); //@t
				var_0_bool->AddReply(537664, -1, 39512); //@t
				return 0;
			}
			if(var_22_int == 39510) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537662); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537663, -1, 39511); //@t
				return 0;
			}
			if(var_22_int == 39496) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537648); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537649, 39498, 39497); //@t
				var_0_bool->AddReply(537658, -1, 39506); //@t
				return 0;
			}
			if(var_22_int == 39498) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537650); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537651, 39500, 39499); //@t
				var_0_bool->AddReply(537657, -1, 39505); //@t
				return 0;
			}
			if(var_22_int == 39500) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537652); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537653, -1, 39501); //@t
				var_0_bool->AddReply(537654, 39503, 39502); //@t
				return 0;
			}
			if(var_22_int == 39503) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537655); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537656, -1, 39504); //@t
				return 0;
			}
			if(var_22_int == 39489) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537641); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537642, 39491, 39490); //@t
				var_0_bool->AddReply(537646, -1, 39494); //@t
				return 0;
			}
			if(var_22_int == 39491) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537643); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537644, -1, 39492); //@t
				bool var_659_bool;
				func_5773(var_1_bool);
				if(var_659_bool != 0)
					var_0_bool->AddReply(537645, -1, 39493); //@t
				return 0;
			}
			if(var_22_int == 39482) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537634); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537635, 39484, 39483); //@t
				var_0_bool->AddReply(537639, -1, 39487); //@t
				return 0;
			}
			if(var_22_int == 39484) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537636); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537637, -1, 39485); //@t
				var_0_bool->AddReply(537638, -1, 39486); //@t
				return 0;
			}
			if(var_22_int == 39470) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537622); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537623, 39472, 39471); //@t
				var_0_bool->AddReply(537632, -1, 39480); //@t
				return 0;
			}
			if(var_22_int == 39472) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537624); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537625, 39474, 39473); //@t
				return 0;
			}
			if(var_22_int == 39474) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537626); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537627, -1, 39475); //@t
				var_0_bool->AddReply(537628, 39477, 39476); //@t
				return 0;
			}
			if(var_22_int == 39477) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537629); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537630, -1, 39478); //@t
				var_0_bool->AddReply(537631, -1, 39479); //@t
				return 0;
			}
			if(var_22_int == 39452) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537604); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537605, 39454, 39453); //@t
				var_0_bool->AddReply(537612, 39461, 39460); //@t
				return 0;
			}
			if(var_22_int == 39461) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537613); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537614, 39463, 39462); //@t
				var_0_bool->AddReply(537620, -1, 39468); //@t
				return 0;
			}
			if(var_22_int == 39463) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537615); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537616, 39465, 39464); //@t
				return 0;
			}
			if(var_22_int == 39465) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537617); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537618, -1, 39466); //@t
				var_0_bool->AddReply(537619, -1, 39467); //@t
				return 0;
			}
			if(var_22_int == 39454) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537606); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537607, 39456, 39455); //@t
				var_0_bool->AddReply(537611, -1, 39459); //@t
				return 0;
			}
			if(var_22_int == 39456) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537608); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537609, -1, 39457); //@t
				var_0_bool->AddReply(537610, -1, 39458); //@t
				return 0;
			}
			if(var_22_int == 39442) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537594); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537595, 39444, 39443); //@t
				var_0_bool->AddReply(537602, -1, 39450); //@t
				return 0;
			}
			if(var_22_int == 39444) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537596); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537597, 39446, 39445); //@t
				var_0_bool->AddReply(537601, -1, 39449); //@t
				return 0;
			}
			if(var_22_int == 39446) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537598); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537599, -1, 39447); //@t
				var_0_bool->AddReply(537600, -1, 39448); //@t
				return 0;
			}
			if(var_22_int == 39419) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537572); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537573, 39421, 39420); //@t
				var_0_bool->AddReply(537578, 39426, 39425); //@t
				var_0_bool->AddReply(537588, 39437, 39436); //@t
				var_0_bool->AddReply(537592, -1, 39440); //@t
				return 0;
			}
			if(var_22_int == 39437) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537589); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537590, -1, 39438); //@t
				var_0_bool->AddReply(537591, -1, 39439); //@t
				return 0;
			}
			if(var_22_int == 39426) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537579); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537580, 39421, 39427); //@t
				var_0_bool->AddReply(537581, 39430, 39429); //@t
				return 0;
			}
			if(var_22_int == 39430) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537582); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537583, 39432, 39431); //@t
				var_0_bool->AddReply(537587, -1, 39435); //@t
				return 0;
			}
			if(var_22_int == 39432) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537584); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537585, -1, 39433); //@t
				var_0_bool->AddReply(537586, -1, 39434); //@t
				return 0;
			}
			if(var_22_int == 39421) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537574); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537575, 39423, 39422); //@t
				return 0;
			}
			if(var_22_int == 39423) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537576); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537577, -1, 39424); //@t
				return 0;
			}
			if(var_22_int == 39407) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537560); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537561, 39409, 39408); //@t
				var_0_bool->AddReply(537570, -1, 39417); //@t
				return 0;
			}
			if(var_22_int == 39409) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537562); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537563, 39411, 39410); //@t
				var_0_bool->AddReply(537567, 39415, 39414); //@t
				return 0;
			}
			if(var_22_int == 39415) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537568); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537569, -1, 39416); //@t
				return 0;
			}
			if(var_22_int == 39411) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537564); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537565, -1, 39412); //@t
				var_0_bool->AddReply(537566, -1, 39413); //@t
				return 0;
			}
			if(var_22_int == 39397) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537550); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537551, 39399, 39398); //@t
				var_0_bool->AddReply(537558, -1, 39405); //@t
				return 0;
			}
			if(var_22_int == 39399) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537552); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537553, 39401, 39400); //@t
				var_0_bool->AddReply(537557, -1, 39404); //@t
				return 0;
			}
			if(var_22_int == 39401) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537554); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537555, -1, 39402); //@t
				var_0_bool->AddReply(537556, -1, 39403); //@t
				return 0;
			}
			if(var_22_int == 39382) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537535); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537536, 39384, 39383); //@t
				return 0;
			}
			if(var_22_int == 39384) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537537); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537538, 39386, 39385); //@t
				var_0_bool->AddReply(537548, -1, 39395); //@t
				return 0;
			}
			if(var_22_int == 39386) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537539); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537540, 39388, 39387); //@t
				var_0_bool->AddReply(537543, -1, 39390); //@t
				var_0_bool->AddReply(537544, 39392, 39391); //@t
				return 0;
			}
			if(var_22_int == 39392) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537545); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537546, -1, 39393); //@t
				var_0_bool->AddReply(537547, -1, 39394); //@t
				return 0;
			}
			if(var_22_int == 39388) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537541); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537542, -1, 39389); //@t
				return 0;
			}
			if(var_22_int == 39372) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537525); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537526, 39374, 39373); //@t
				var_0_bool->AddReply(537533, -1, 39380); //@t
				return 0;
			}
			if(var_22_int == 39374) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537527); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537528, 39376, 39375); //@t
				var_0_bool->AddReply(537532, -1, 39379); //@t
				return 0;
			}
			if(var_22_int == 39376) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537529); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537530, -1, 39377); //@t
				var_0_bool->AddReply(537531, -1, 39378); //@t
				return 0;
			}
			if(var_22_int == 39356) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537509); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537510, 39358, 39357); //@t
				var_0_bool->AddReply(537520, 39368, 39367); //@t
				return 0;
			}
			if(var_22_int == 39368) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537521); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537522, -1, 39369); //@t
				var_0_bool->AddReply(537523, -1, 39370); //@t
				return 0;
			}
			if(var_22_int == 39358) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537511); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537512, 39360, 39359); //@t
				var_0_bool->AddReply(537519, -1, 39366); //@t
				return 0;
			}
			if(var_22_int == 39360) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537513); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537514, 39362, 39361); //@t
				var_0_bool->AddReply(537518, -1, 39365); //@t
				return 0;
			}
			if(var_22_int == 39362) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(537515); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537516, -1, 39363); //@t
				var_0_bool->AddReply(537517, -1, 39364); //@t
				return 0;
			}
			if(var_22_int == 45739) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543283); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543284, -1, 45740); //@t
				var_0_bool->AddReply(543285, -1, 45741); //@t
				var_0_bool->AddReply(543286, -1, 45742); //@t
				return 0;
			}
			if(var_22_int == 45734) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543278); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543279, -1, 45735); //@t
				var_0_bool->AddReply(543280, -1, 45736); //@t
				return 0;
			}
			if(var_22_int == 45719) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543263); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543264, 45723, 45720); //@t
				var_0_bool->AddReply(543265, -1, 45721); //@t
				var_0_bool->AddReply(543266, -1, 45722); //@t
				return 0;
			}
			if(var_22_int == 45723) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543267); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543268, 45727, 45724); //@t
				var_0_bool->AddReply(543269, -1, 45725); //@t
				var_0_bool->AddReply(543270, -1, 45726); //@t
				return 0;
			}
			if(var_22_int == 45727) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543271); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543272, -1, 45728); //@t
				var_0_bool->AddReply(543273, -1, 45729); //@t
				var_0_bool->AddReply(543274, -1, 45730); //@t
				return 0;
			}
			if(var_22_int == 45709) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543253); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543254, 45714, 45710); //@t
				var_0_bool->AddReply(543255, 45716, 45711); //@t
				var_0_bool->AddReply(543256, -1, 45712); //@t
				var_0_bool->AddReply(543257, -1, 45713); //@t
				return 0;
			}
			if(var_22_int == 45716) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543260); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543261, -1, 45717); //@t
				return 0;
			}
			if(var_22_int == 45714) {
				func_2491(var_23_int, "Neutral");
				var_0_bool->SetMessage(543258); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(543259, -1, 45715); //@t
				return 0;
			}
			var_3_bool = true;
			bool var_1164_bool;
			func_6173(var_1164_bool);
			if(var_1164_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9d2";
	
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
		bool var_549_bool;
		func_6173(var_549_bool);
		if(var_549_bool == 0) goto Label_15;
		func_5253("Neutral");
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
	func_5334(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5334(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_6165(int var_107_int)
{
	var_107_int = 515560;
}


void func_6167(int var_106_int)
{
	var_106_int = 503345;
}


void func_6169(string var_108_string)
{
	var_108_string = "ui/NPC_Citizen3.png";
}


void func_6171(string var_109_string)
{
	var_109_string = "ui/NPC_Citizen3_b.png";
}


void func_6173(bool var_25_bool)
{
	var_25_bool = false;
}


void func_6175(void)
{
	var_23_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_6089(true);
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
	func_4987(var_191_cvector);
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
				func_4987(var_201_cvector);
				var_1_bool = var_201_cvector + var_152_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1616; //@nz

	}
}


void func_6183(object var_34_object, object var_49_object)
{
	bool var_36_bool;
	var_37_bool = GlobalVars[0];
	if(var_37_bool != 0) {
		@IsOverrideActive(var_36_bool);
		if(!var_36_bool) { //@nz
			object var_39_object;
			var_34_object = var_39_object;
			func_6076(var_39_object);
		}
		return 2;
	EMIT "GOTO 0x184e";
	}
	int var_47_int; object var_48_object;
	var_34_object = var_48_object;
	TaskCall(8);
	func_1731(var_49_object, var_47_int, var_48_object);
	TaskReturn();
	if(1000 == var_49_object) {
		bool var_514_bool; object var_515_object;
		var_34_object = var_515_object;
		func_5192(var_514_bool, var_515_object);
		if(!var_514_bool) //@nz
			return 2;
		object var_547_object;
		var_34_object = var_547_object;
		TaskCall(0);
		func_0(var_547_object);
		TaskReturn();
		object var_554_object;
		var_34_object = var_554_object;
		func_5248();
	}
}


void func_5174(void)
{
	bool var_507_bool;
	@CameraSwitchToNormal(true);
	bool var_509_bool;
	func_6173(var_509_bool);
	if(var_509_bool != 0) {
	} else {
		@HasAnimationTrack(var_507_bool, "head");
		if(var_507_bool == 0) goto Label_5191;
		@UnlookAsync("head");
	}
Label_5191:
	
}


void func_55(void)
{
	bool var_88_bool;
	func_5100(var_88_bool);
	if(!var_88_bool) //@nz
		func_5703();
}


void func_573(void)
{
	int var_128_int; int var_129_int; bool var_130_bool; float var_131_float; bool var_132_bool;
	@WaitForAnimEnd();
	bool var_133_bool;
	func_5100(var_133_bool);
	if(!var_133_bool) //@nz
		return 14;
	int var_135_int;
	func_5558(var_135_int);
	int var_126_int;
	var_135_int = var_126_int;
	int var_127_int = 0;
	
	for(;;) {
		bool var_148_bool = false;
		if(var_127_int < 5) {
			bool var_151_bool;
			func_5100(var_151_bool);
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
				func_5551(var_157_string, var_158_int);
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
void func_5694(int var_25_int)
{
	var_25_int = 2;
}


// @pe
void func_5697(object var_33_object)
{
	object var_34_object;
	func_6183(var_34_object, var_34_object);
}


void func_5703(void)
{
}


// @pe
void func_5704(int var_25_int)
{
	var_25_int = 0;
}


// @pe
void func_5192(bool var_514_bool, object var_515_object)
{
	object var_517_object;
	var_515_object = var_517_object;
	bool var_516_bool;
	func_5200(var_516_bool, var_517_object, (float)70);
	var_516_bool = var_514_bool;
}


// @pe
void func_5707(void)
{
}


// @pe
void func_5709(int var_209_int)
{
	var_209_int = 0;
}


void func_6223(bool var_67_bool)
{
	var_67_bool = true;
}


// @pe
void func_5712(void)
{
}


// @pe
void func_6225(bool var_27_bool, object var_28_object, object var_29_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	object var_33_object;
	var_29_object = var_33_object;
	bool var_31_bool;
	func_5628(var_31_bool, var_32_object, var_33_object, 500.0);
	if(var_31_bool != 0) {
		@SetProperty("ToDie", true);
		var_27_bool = true;
		return 0;
	}
	var_27_bool = false;
}


void func_5200(bool var_516_bool, object var_517_object, float var_518_float)
{
	cvector var_528_cvector;
	var_517_object->GetPosition(var_528_cvector);
	float var_527_float;
	var_517_object->GetEyesHeight(var_527_float);
	var_535_float = GetByIndex(var_528_cvector, 1);
	SetByIndex(var_528_cvector, 1) = (var_535_float + var_527_float);
	cvector var_529_cvector;
	@GetPosition(var_529_cvector);
	@GetEyesHeight(var_527_float);
	var_536_float = GetByIndex(var_529_cvector, 1);
	SetByIndex(var_529_cvector, 1) = (var_536_float + var_527_float);
	cvector var_530_cvector = var_528_cvector - var_529_cvector;
	var_537_float = GetByIndex(var_530_cvector, 1);
	SetByIndex(var_530_cvector, 1) = (float)0;
	var_539_float = sqrt(var_530_cvector | var_530_cvector);
	var_530_cvector /= var_539_float;
	cvector var_531_cvector = -var_530_cvector;
	cvector var_532_cvector = (var_530_cvector * var_518_float) - [0.0, 10.0, 0.0];
	bool var_534_bool;
	@IsOverrideActive(var_534_bool);
	if(var_534_bool != 0)
		var_516_bool = false;
	@StopWorld();
	@CameraTransit((var_529_cvector + var_532_cvector), var_531_cvector, true);
	var_544_float = GetByIndex(var_532_cvector, 0);
	var_545_float = GetByIndex(var_532_cvector, 2);
	@Rotate(var_544_float, var_545_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_516_bool = true;
}


void func_5714(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	@CanSee(var_31_bool, var_29_object);
	var_31_bool = var_28_bool;
}


// @pe
void func_5719(object var_40_object)
{
	object var_41_object;
	var_40_object = var_41_object;
	TaskCall(6);
	func_1380(var_42_object, var_43_cvector, var_44_bool, var_41_object);
	TaskReturn();
}


void func_5727(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	@CanSee(var_40_bool, var_38_object);
	var_37_bool = true;
	if(var_40_bool != 1) {
		float var_42_float; object var_43_object;
		var_38_object = var_43_object;
		func_4999(var_42_float, var_43_object);
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
void func_5742(object var_139_object)
{
	object var_140_object;
	var_139_object = var_140_object;
	TaskCall(7);
	func_1574(var_141_object, var_142_cvector, var_143_bool, var_140_object);
	TaskReturn();
}


void func_1140(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4992(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_5750(bool var_54_bool, object var_55_object)
{
	object var_57_object;
	var_55_object = var_57_object;
	bool var_56_bool;
	func_5727(var_56_bool, var_57_object);
	var_56_bool = var_54_bool;
}


// @pe
void func_5757(object var_207_object)
{
	object var_208_object;
	var_207_object = var_208_object;
	func_5742(var_208_object);
}


// @pe
void func_5248(void)
{
	@CameraSwitchToNormal(true);
}


// @pe
void func_5763(bool var_30_bool)
{
	var_30_bool = false;
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
	func_5334(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5334(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_5253(string var_325_string)
{
	bool var_329_bool; float var_330_float; float var_331_float;
	@lshHasAnimation(var_329_bool, var_325_string);
	if(var_329_bool != 0) {
		@lshGetAnimTimes(var_325_string, var_330_float, var_331_float);
		@lshPlayAnimation(var_330_float, var_331_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_325_string);
	}
	
}


// @pe
void func_5766(void)
{
}


// @pe
void func_5768(object var_29_object)
{
	var_29_object->SetReturnValue(1000);
}


void func_652(bool var_160_bool)
{
	var_160_bool = true;
}


// @pe
void func_5773(bool var_249_bool)
{
	int var_251_int;
	func_5393(var_251_int, "branch");
	if(var_251_int == 0) {
		var_249_bool = true;
		return 0;
	}
	var_249_bool = false;
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
	func_4992(var_89_cvector, var_0_bool);
	cvector var_80_cvector;
	var_89_cvector = var_80_cvector;
	float var_95_float; cvector var_96_cvector; cvector var_97_cvector;
	var_79_cvector = var_96_cvector;
	var_80_cvector = var_97_cvector;
	func_5376(var_95_float, var_96_cvector, var_97_cvector);
	if(var_95_float < 0) {
		func_5089(var_0_bool);
		var_81_bool = true;
	} else {
		@Sleep(1.5, var_81_bool);
	}
	if(var_81_bool != 0) {
		func_5089(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_5269(string var_57_string, bool var_58_bool)
{
	bool var_64_bool; float var_65_float; float var_66_float;
	@lshHasAnimation(var_64_bool, var_57_string);
	if(var_64_bool != 0) {
		@lshGetAnimTimes(var_57_string, var_65_float, var_66_float);
		@lshPlayAnimation(var_65_float, var_66_float, var_58_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_57_string);
	}
	
}


// @pe
void func_5785(bool var_45_bool)
{
	int var_47_int;
	func_5393(var_47_int, "branch");
	if(var_47_int == 2)
		var_45_bool = true;
	var_45_bool = false;
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
	func_4987(var_170_cvector);
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
				func_4987(var_182_cvector);
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


void func_5284(object var_82_object)
{
	float var_85_float;
	var_82_object->GetEyesHeight(var_85_float);
	cvector var_86_cvector = [0.0, 0.0, 0.0];
	var_87_float = GetByIndex(var_86_cvector, 1);
	var_85_float = var_87_float;
	SetByIndex(var_86_cvector, 1) = var_87_float;
	@LookAsync(var_82_object, "head", var_86_cvector);
}


// @pe
void func_5797(bool var_139_bool, object var_140_object)
{
	object var_142_object;
	var_140_object = var_142_object;
	func_5937(var_142_object);
	bool var_141_bool;
	if(var_141_bool != 0) {
		var_139_bool = true;
		return 0;
	}
	var_139_bool = false;
}


// @pe
void func_5807(bool var_73_bool, object var_74_object)
{
	object var_76_object;
	var_74_object = var_76_object;
	func_5944(var_76_object);
	bool var_75_bool;
	if(var_75_bool != 0) {
		var_73_bool = true;
		return 0;
	}
	var_73_bool = false;
}


void func_5295(void)
{
	bool var_25_bool;
	func_6173(var_25_bool);
	if(var_25_bool != 0)
		@lshStopSpeech();
}


void func_1715(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4992(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_5302(string var_53_string, int var_54_int, int var_55_int)
{
	bool var_57_bool;
	int var_59_int;
	var_54_int = var_59_int;
	int var_60_int;
	var_55_int = var_60_int;
	bool var_58_bool;
	func_5344(var_58_bool, var_59_int, var_60_int);
	if(var_58_bool != 0)
		@AddItem(var_57_bool, var_53_string, 0);
}


// @pe
void func_5817(bool var_147_bool, object var_148_object)
{
	object var_150_object;
	var_148_object = var_150_object;
	func_5951(var_150_object);
	bool var_149_bool;
	if(var_149_bool != 0) {
		var_147_bool = true;
		return 0;
	}
	var_147_bool = false;
}


void func_5313(string var_29_string, int var_30_int, int var_31_int, int var_32_int)
{
	int var_35_int; bool var_36_bool;
	int var_38_int;
	var_30_int = var_38_int;
	int var_39_int;
	var_31_int = var_39_int;
	bool var_37_bool;
	func_5344(var_37_bool, var_38_int, var_39_int);
	if(var_37_bool != 0) {
		@irand(var_35_int, var_32_int);
		@AddItem(var_36_bool, var_29_string, 0, (var_35_int + 1));
	}
}


// @pe
void func_5827(bool var_153_bool, object var_154_object)
{
	object var_156_object;
	var_154_object = var_156_object;
	func_5958(var_156_object);
	bool var_155_bool;
	if(var_155_bool != 0) {
		var_153_bool = true;
		return 0;
	}
	var_153_bool = false;
}


void func_1731(bool var_0_bool, int var_47_int, object var_48_object)
{
	var_0_bool = var_48_object;
	bool var_58_bool; object var_59_object;
	var_48_object = var_59_object;
	func_5105(var_58_bool, var_59_object, 70.0);
	if(!var_58_bool) { //@nz
		var_47_int = -2;
		return 8;
	}
	object var_54_object;
	@CreateDialog(var_54_object);
	int var_106_int;
	func_6167(var_106_int);
	var_54_object->SetNPCName(var_106_int);
	int var_107_int;
	func_6165(var_107_int);
	var_54_object->SetNPCDescription(var_107_int);
	string var_108_string;
	func_6169(var_108_string);
	var_54_object->SetPhoto(var_108_string);
	string var_109_string;
	func_6171(var_109_string);
	var_54_object->SetPhoto2(var_109_string);
	int var_110_int;
	func_6053(var_110_int);
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
		var_504_bool = !var_57_bool; //@nz
		if(var_504_bool == 0) goto Label_1794;
		@sync();
		var_54_object->IsDialogEnd(var_57_bool);
	}
	
Label_1794:
	object var_505_object;
	var_48_object = var_505_object;
	func_5174();
	@StopDialog(var_54_object);
	var_54_object->GetReturnValue(-1);
	int var_56_int = var_47_int;
}
EMIT "Stack[-4] = 0";


void func_710(bool var_0_bool)
{
	func_5284(var_0_bool);
}


// @pe
void func_5837(bool var_99_bool, object var_100_object)
{
	object var_102_object;
	var_100_object = var_102_object;
	func_5965(var_102_object);
	bool var_101_bool;
	if(var_101_bool != 0) {
		var_99_bool = true;
		return 0;
	}
	var_99_bool = false;
}


void func_5328(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_5334(cvector var_52_cvector, cvector var_53_cvector)
{
	float var_55_float = sqrt(var_53_cvector | var_53_cvector);
	if(var_55_float < 0.000001)
		var_52_cvector = [0.0, 0.0, 0.0];
	var_52_cvector = var_53_cvector / var_55_float;
}


// @pe
void func_5847(bool var_111_bool, object var_112_object)
{
	object var_114_object;
	var_112_object = var_114_object;
	func_5972(var_114_object);
	bool var_113_bool;
	if(var_113_bool != 0) {
		var_111_bool = true;
		return 0;
	}
	var_111_bool = false;
}


void func_5344(bool var_37_bool, int var_38_int, int var_39_int)
{
	int var_41_int;
	@irand(var_41_int, var_39_int);
	var_37_bool = var_41_int < var_38_int;
}


// @pe
void func_5857(bool var_84_bool, object var_85_object)
{
	object var_87_object;
	var_85_object = var_87_object;
	func_5979(var_87_object);
	bool var_86_bool;
	if(var_86_bool != 0) {
		var_84_bool = true;
		return 0;
	}
	var_84_bool = false;
}


// @pe
void func_5349(float var_85_float, cvector var_86_cvector, cvector var_87_cvector)
{
	var_92_float = sqrt((var_86_cvector | var_86_cvector) * (var_87_cvector | var_87_cvector));
	var_85_float = (var_86_cvector | var_87_cvector) / var_92_float;
}


// @pe
void func_5867(bool var_121_bool, object var_122_object)
{
	object var_124_object;
	var_122_object = var_124_object;
	func_5986(var_124_object);
	bool var_123_bool;
	if(var_123_bool != 0) {
		var_121_bool = true;
		return 0;
	}
	var_121_bool = false;
}


// @pe
void func_5357(float var_75_float, cvector var_76_cvector, cvector var_77_cvector)
{
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_79_float = GetByIndex(var_77_cvector, 0);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_82_float = GetByIndex(var_77_cvector, 2);
	var_75_float = (var_78_float * var_79_float) + (var_81_float * var_82_float);
}


// @pe
void func_5877(bool var_127_bool, object var_128_object)
{
	object var_130_object;
	var_128_object = var_130_object;
	func_5993(var_130_object);
	bool var_129_bool;
	if(var_129_bool != 0) {
		var_127_bool = true;
		return 0;
	}
	var_127_bool = false;
}


// @pe
void func_5366(float var_84_float, cvector var_85_cvector)
{
	var_86_float = GetByIndex(var_85_cvector, 0);
	var_87_float = GetByIndex(var_85_cvector, 0);
	var_89_float = GetByIndex(var_85_cvector, 2);
	var_90_float = GetByIndex(var_85_cvector, 2);
	var_84_float = sqrt((var_86_float * var_87_float) + (var_89_float * var_90_float));
}


void func_251(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_387(var_21_string, var_22_bool);
}


// @pe
void func_5887(bool var_90_bool, object var_91_object)
{
	object var_93_object;
	var_91_object = var_93_object;
	func_6000(var_93_object);
	bool var_92_bool;
	if(var_92_bool != 0) {
		var_90_bool = true;
		return 0;
	}
	var_90_bool = false;
}


// @pe
void func_5376(float var_72_float, cvector var_73_cvector, cvector var_74_cvector)
{
	cvector var_76_cvector;
	var_73_cvector = var_76_cvector;
	cvector var_77_cvector;
	var_74_cvector = var_77_cvector;
	float var_75_float;
	func_5357(var_75_float, var_76_cvector, var_77_cvector);
	float var_84_float; cvector var_85_cvector;
	var_73_cvector = var_85_cvector;
	func_5366(var_84_float, var_85_cvector);
	float var_93_float; cvector var_94_cvector;
	var_74_cvector = var_94_cvector;
	func_5366(var_93_float, var_94_cvector);
	var_72_float = var_75_float / (var_84_float * var_93_float);
}


void func_259(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_394(var_26_bool, var_27_int);
}


// @pe
void func_5897(bool var_183_bool, object var_184_object)
{
	object var_186_object;
	var_184_object = var_186_object;
	func_6007(var_186_object);
	bool var_185_bool;
	if(var_185_bool != 0) {
		var_183_bool = true;
		return 0;
	}
	var_183_bool = false;
}


// @pe
void func_1805(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_119_object, object var_120_object)
{
	var_0_bool = var_120_object;
	var_1_bool = var_119_object;
	var_3_bool = false;
	if(1 != 0) {
		bool var_126_bool;
		func_5785(var_1_bool);
		if(var_126_bool != 0) {
			func_2491(var_120_object, "Neutral");
			var_0_bool->SetMessage(543247); //@t
			var_0_bool->ClearReplies(); //@t
			bool var_152_bool = true;
			bool var_153_bool = true;
			bool var_154_bool;
			func_5807(var_154_bool, var_1_bool);
			if(var_154_bool != 1) {
				bool var_165_bool;
				func_5857(var_165_bool, var_1_bool);
				if(var_165_bool != 1)
					var_153_bool = false;
			}
			if(var_153_bool != 1) {
				bool var_171_bool;
				func_5887(var_171_bool, var_1_bool);
				if(var_171_bool != 1)
					var_152_bool = false;
			}
			if(var_152_bool != 0)
				var_0_bool->AddReply(543249, 45709, 45705); //@t
			bool var_180_bool;
			func_5837(var_180_bool, var_1_bool);
			if(var_180_bool != 0)
				var_0_bool->AddReply(543251, 45719, 45707); //@t
			bool var_189_bool = true;
			bool var_190_bool;
			func_5837(var_190_bool, var_1_bool);
			if(var_190_bool != 1) {
				bool var_192_bool;
				func_5847(var_192_bool, var_1_bool);
				if(var_192_bool != 1)
					var_189_bool = false;
			}
			if(var_189_bool != 0)
				var_0_bool->AddReply(543277, 45734, 45733); //@t
			bool var_201_bool = true;
			bool var_202_bool;
			func_5867(var_202_bool, var_1_bool);
			if(var_202_bool != 1) {
				bool var_208_bool;
				func_5877(var_208_bool, var_1_bool);
				if(var_208_bool != 1)
					var_201_bool = false;
			}
			if(var_201_bool != 0)
				var_0_bool->AddReply(543282, 45739, 45738); //@t
			bool var_217_bool = true;
			bool var_218_bool = true;
			bool var_219_bool = true;
			bool var_220_bool;
			func_5797(var_220_bool, var_1_bool);
			if(var_220_bool != 1) {
				bool var_226_bool;
				func_5807(var_226_bool, var_1_bool);
				if(var_226_bool != 1)
					var_219_bool = false;
			}
			if(var_219_bool != 1) {
				bool var_228_bool;
				func_5817(var_228_bool, var_1_bool);
				if(var_228_bool != 1)
					var_218_bool = false;
			}
			if(var_218_bool != 1) {
				bool var_234_bool;
				func_5827(var_234_bool, var_1_bool);
				if(var_234_bool != 1)
					var_217_bool = false;
			}
			if(var_217_bool != 0)
				var_0_bool->AddReply(543250, -1, 45706); //@t
			bool var_243_bool = true;
			bool var_244_bool = true;
			bool var_245_bool = true;
			bool var_246_bool;
			func_5837(var_246_bool, var_1_bool);
			if(var_246_bool != 1) {
				bool var_248_bool;
				func_5847(var_248_bool, var_1_bool);
				if(var_248_bool != 1)
					var_245_bool = false;
			}
			if(var_245_bool != 1) {
				bool var_250_bool;
				func_5857(var_250_bool, var_1_bool);
				if(var_250_bool != 1)
					var_244_bool = false;
			}
			if(var_244_bool != 1) {
				bool var_252_bool;
				func_5867(var_252_bool, var_1_bool);
				if(var_252_bool != 1)
					var_243_bool = false;
			}
			if(var_243_bool != 0)
				var_0_bool->AddReply(543262, -1, 45718); //@t
			bool var_257_bool = true;
			bool var_258_bool = true;
			bool var_259_bool = true;
			bool var_260_bool;
			func_5877(var_260_bool, var_1_bool);
			if(var_260_bool != 1) {
				bool var_262_bool;
				func_5887(var_262_bool, var_1_bool);
				if(var_262_bool != 1)
					var_259_bool = false;
			}
			if(var_259_bool != 1) {
				bool var_264_bool;
				func_5897(var_264_bool, var_1_bool);
				if(var_264_bool != 1)
					var_258_bool = false;
			}
			if(var_258_bool != 1) {
				bool var_270_bool;
				func_5907(var_270_bool, var_1_bool);
				if(var_270_bool != 1)
					var_257_bool = false;
			}
			if(var_257_bool != 0)
				var_0_bool->AddReply(543276, -1, 45732); //@t
			bool var_279_bool = true;
			bool var_280_bool = true;
			bool var_281_bool = true;
			bool var_282_bool;
			func_5797(var_282_bool, var_1_bool);
			if(var_282_bool != 1) {
				bool var_284_bool;
				func_5817(var_284_bool, var_1_bool);
				if(var_284_bool != 1)
					var_281_bool = false;
			}
			if(var_281_bool != 1) {
				bool var_286_bool;
				func_5827(var_286_bool, var_1_bool);
				if(var_286_bool != 1)
					var_280_bool = false;
			}
			if(var_280_bool != 1) {
				bool var_288_bool;
				func_5857(var_288_bool, var_1_bool);
				if(var_288_bool != 1)
					var_279_bool = false;
			}
			if(var_279_bool != 0)
				var_0_bool->AddReply(543248, -1, 45704); //@t
			bool var_293_bool = true;
			bool var_294_bool = true;
			bool var_295_bool = true;
			bool var_296_bool;
			func_5847(var_296_bool, var_1_bool);
			if(var_296_bool != 1) {
				bool var_298_bool;
				func_5837(var_298_bool, var_1_bool);
				if(var_298_bool != 1)
					var_295_bool = false;
			}
			if(var_295_bool != 1) {
				bool var_300_bool;
				func_5867(var_300_bool, var_1_bool);
				if(var_300_bool != 1)
					var_294_bool = false;
			}
			if(var_294_bool != 1) {
				bool var_302_bool;
				func_5807(var_302_bool, var_1_bool);
				if(var_302_bool != 1)
					var_293_bool = false;
			}
			if(var_293_bool != 0)
				var_0_bool->AddReply(543252, -1, 45708); //@t
			bool var_307_bool = true;
			bool var_308_bool;
			func_5897(var_308_bool, var_1_bool);
			if(var_308_bool != 1) {
				bool var_310_bool;
				func_5907(var_310_bool, var_1_bool);
				if(var_310_bool != 1)
					var_307_bool = false;
			}
			if(var_307_bool != 0)
				var_0_bool->AddReply(543281, -1, 45737); //@t
			bool var_315_bool = true;
			bool var_316_bool;
			func_5877(var_316_bool, var_1_bool);
			if(var_316_bool != 1) {
				bool var_318_bool;
				func_5887(var_318_bool, var_1_bool);
				if(var_318_bool != 1)
					var_315_bool = false;
			}
			if(var_315_bool != 0)
				var_0_bool->AddReply(543275, -1, 45731); //@t
		} else {
					func_2491(var_120_object, "Neutral");
					var_0_bool->SetMessage(537506); //@t
					var_0_bool->ClearReplies(); //@t
					var_0_bool->AddReply(537507, -1, 39354); //@t
					bool var_346_bool = false;
					bool var_347_bool = false;
					bool var_348_bool;
					func_5773(var_1_bool);
					if(var_348_bool != 0) {
						bool var_354_bool;
						func_5797(var_354_bool, var_1_bool);
						if(var_354_bool != 0)
							var_347_bool = true;
					}
					if(var_347_bool != 0) {
						bool var_356_bool;
						func_5917(var_356_bool, var_1_bool);
						if(var_356_bool != 0)
							var_346_bool = true;
					}
					if(var_346_bool != 0)
						var_0_bool->AddReply(537508, 39356, 39355); //@t
					bool var_374_bool = false;
					bool var_375_bool = false;
					bool var_376_bool;
					func_5773(var_1_bool);
					if(var_376_bool != 0) {
						bool var_378_bool;
						func_5797(var_378_bool, var_1_bool);
						if(var_378_bool != 0)
							var_375_bool = true;
					}
					if(var_375_bool != 0) {
						bool var_380_bool;
						func_5927(var_380_bool, var_1_bool);
						if(var_380_bool != 0)
							var_374_bool = true;
					}
					if(var_374_bool != 0)
						var_0_bool->AddReply(537524, 39372, 39371); //@t
					bool var_390_bool = false;
					bool var_391_bool;
					func_5773(var_1_bool);
					if(var_391_bool != 0) {
						bool var_393_bool;
						func_5807(var_393_bool, var_1_bool);
						if(var_393_bool != 0)
							var_390_bool = true;
					}
					if(var_390_bool != 0)
						var_0_bool->AddReply(537534, 39382, 39381); //@t
					bool var_398_bool = false;
					bool var_399_bool;
					func_5773(var_1_bool);
					if(var_399_bool != 0) {
						bool var_401_bool;
						func_5817(var_401_bool, var_1_bool);
						if(var_401_bool != 0)
							var_398_bool = true;
					}
					if(var_398_bool != 0)
						var_0_bool->AddReply(537549, 39397, 39396); //@t
					bool var_406_bool = false;
					bool var_407_bool;
					func_5773(var_1_bool);
					if(var_407_bool != 0) {
						bool var_409_bool;
						func_5827(var_409_bool, var_1_bool);
						if(var_409_bool != 0)
							var_406_bool = true;
					}
					if(var_406_bool != 0)
						var_0_bool->AddReply(537559, 39407, 39406); //@t
					bool var_414_bool = false;
					bool var_415_bool;
					func_5773(var_1_bool);
					if(var_415_bool != 0) {
						bool var_417_bool;
						func_5837(var_417_bool, var_1_bool);
						if(var_417_bool != 0)
							var_414_bool = true;
					}
					if(var_414_bool != 0)
						var_0_bool->AddReply(537571, 39419, 39418); //@t
					bool var_422_bool = false;
					bool var_423_bool;
					func_5773(var_1_bool);
					if(var_423_bool != 0) {
						bool var_425_bool;
						func_5847(var_425_bool, var_1_bool);
						if(var_425_bool != 0)
							var_422_bool = true;
					}
					if(var_422_bool != 0)
						var_0_bool->AddReply(537593, 39442, 39441); //@t
					bool var_430_bool = false;
					bool var_431_bool;
					func_5773(var_1_bool);
					if(var_431_bool != 0) {
						bool var_433_bool;
						func_5857(var_433_bool, var_1_bool);
						if(var_433_bool != 0)
							var_430_bool = true;
					}
					if(var_430_bool != 0)
						var_0_bool->AddReply(537603, 39452, 39451); //@t
					bool var_438_bool = false;
					bool var_439_bool;
					func_5773(var_1_bool);
					if(var_439_bool != 0) {
						bool var_441_bool;
						func_5867(var_441_bool, var_1_bool);
						if(var_441_bool != 0)
							var_438_bool = true;
					}
					if(var_438_bool != 0)
						var_0_bool->AddReply(537621, 39470, 39469); //@t
					bool var_446_bool;
					func_5877(var_446_bool, var_1_bool);
					if(var_446_bool != 0)
						var_0_bool->AddReply(537633, 39482, 39481); //@t
					bool var_451_bool;
					func_5887(var_451_bool, var_1_bool);
					if(var_451_bool != 0)
						var_0_bool->AddReply(537640, 39489, 39488); //@t
					bool var_456_bool = false;
					bool var_457_bool;
					func_5773(var_1_bool);
					if(var_457_bool != 0) {
						bool var_459_bool;
						func_5897(var_459_bool, var_1_bool);
						if(var_459_bool != 0)
							var_456_bool = true;
					}
					if(var_456_bool != 0)
						var_0_bool->AddReply(537647, 39496, 39495); //@t
					bool var_464_bool = false;
					bool var_465_bool = false;
					bool var_466_bool;
					func_5773(var_1_bool);
					if(var_466_bool != 0) {
						bool var_468_bool;
						func_5927(var_468_bool, var_1_bool);
						if(var_468_bool != 0)
							var_465_bool = true;
					}
					if(var_465_bool != 0) {
						bool var_470_bool;
						func_5797(var_470_bool, var_1_bool);
						if(var_470_bool != 0)
							var_464_bool = true;
					}
					if(var_464_bool != 0)
						var_0_bool->AddReply(537659, 39508, 39507); //@t
					bool var_475_bool;
					func_5797(var_475_bool, var_1_bool);
					if(var_475_bool != 0)
						var_0_bool->AddReply(537665, 39514, 39513); //@t
					bool var_480_bool;
					func_5797(var_480_bool, var_1_bool);
					if(var_480_bool != 0)
						var_0_bool->AddReply(537671, 39520, 39519); //@t
					bool var_485_bool = false;
					bool var_486_bool;
					func_5797(var_486_bool, var_1_bool);
					if(var_486_bool != 0) {
						bool var_488_bool;
						func_5917(var_488_bool, var_1_bool);
						if(var_488_bool != 0)
							var_485_bool = true;
					}
					if(var_485_bool != 0)
						var_0_bool->AddReply(537689, 39538, 39537); //@t
					bool var_493_bool = false;
					bool var_494_bool;
					func_5797(var_494_bool, var_1_bool);
					if(var_494_bool != 0) {
						bool var_496_bool;
						func_5917(var_496_bool, var_1_bool);
						if(var_496_bool != 0)
							var_493_bool = true;
					}
					if(var_493_bool != 0)
						var_0_bool->AddReply(537702, 39551, 39550); //@t
					var_0_bool->AddReply(537721, -1, 39569); //@t
		}
	}
	for(;;) {
		bool var_323_bool;
		func_6173(var_323_bool);
		if(var_323_bool != 0) {

			for(;;) {
				@lshWaitForAnimEnd();
				if(var_3_bool != 0) {
				} else {
					func_5253(var_2_bool);
				}
		} else {
			@PlayAnimation("all", "idle");

			for(;;) {
				@WaitForAnimEnd();
				if(var_3_bool != 0) {
					goto Label_2490;
				}
				@PlayAnimation("all", "idle");
			}

		}
		Label_2490:
			return 0;

		}

	}
}
EMIT "Return(); Pop(0)";
EMIT "GOTO 0x711";


void func_5393(int var_47_int, string var_48_string)
{
	int var_50_int;
	@GetVariable(var_48_string, var_50_int);
	var_50_int = var_47_int;
}


// @pe
void func_5907(bool var_189_bool, object var_190_object)
{
	object var_192_object;
	var_190_object = var_192_object;
	func_6014(var_192_object);
	bool var_191_bool;
	if(var_191_bool != 0) {
		var_189_bool = true;
		return 0;
	}
	var_189_bool = false;
}


void func_276(bool var_2_bool, object var_23_object)
{
	bool var_28_bool; object var_29_object;
	func_5065(var_28_bool, var_29_object);
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
	func_5575(var_66_object);
	int var_27_int;
	var_65_int = var_27_int;
	if(var_27_int > 0) {
		if(var_27_int > 1)
			func_259(var_27_int);
		object var_73_object;
		var_23_object = var_73_object;
		func_5584(var_73_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_5398(int var_72_int)
{
	float var_74_float;
	@GetGameTime(var_74_float);
	var_72_int = 1 + (var_74_float / 24);
}


// @pe
void func_5917(bool var_257_bool, object var_258_object)
{
	object var_260_object;
	var_258_object = var_260_object;
	func_6021(var_260_object);
	bool var_259_bool;
	if(var_259_bool != 0) {
		var_257_bool = true;
		return 0;
	}
	var_257_bool = false;
}


void func_1311(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_5407(int var_262_int)
{
	float var_264_float;
	@GetGameTime(var_264_float);
	int var_265_int;
	var_264_float = var_265_int;
	var_262_int = var_265_int % 24;
}


// @pe
void func_5927(bool var_281_bool, object var_282_object)
{
	object var_284_object;
	var_282_object = var_284_object;
	func_6042(var_284_object);
	bool var_283_bool;
	if(var_283_bool != 0) {
		var_281_bool = true;
		return 0;
	}
	var_281_bool = false;
}


// @pe
void func_5423(bool var_26_bool, object var_27_object, string var_28_string)
{
	if(var_28_string == "unholster") {
		bool var_31_bool; object var_32_object;
		var_27_object = var_32_object;
		func_5714(var_31_bool, var_32_object);
		var_31_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x154d";
	}
	if(var_28_string == "player_shot") {
		bool var_37_bool; object var_38_object;
		var_27_object = var_38_object;
		func_5727(var_37_bool, var_38_object);
		var_37_bool = var_26_bool;
		return 0;
	EMIT "GOTO 0x154d";
	}
	if(var_28_string == "battle") {
		bool var_54_bool; object var_55_object;
		var_27_object = var_55_object;
		func_5750(var_54_bool, var_55_object);
		var_54_bool = var_26_bool;
		return 0;
	}
	var_26_bool = false;
}


void func_1327(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4992(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


// @pe
void func_5937(bool var_141_bool)
{
	int var_143_int;
	func_5398(var_143_int);
	var_141_bool = var_143_int == 1;
}


// @pe
void func_5944(bool var_75_bool)
{
	int var_77_int;
	func_5398(var_77_int);
	var_75_bool = var_77_int == 2;
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


// @pe
void func_5951(bool var_149_bool)
{
	int var_151_int;
	func_5398(var_151_int);
	var_149_bool = var_151_int == 3;
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
	func_5334(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5334(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
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
void func_5958(bool var_155_bool)
{
	int var_157_int;
	func_5398(var_157_int);
	var_155_bool = var_157_int == 4;
}


// @pe
void func_5965(bool var_101_bool)
{
	int var_103_int;
	func_5398(var_103_int);
	var_101_bool = var_103_int == 5;
}


// @pe
void func_5455(object var_60_object, string var_61_string)
{
	if(var_61_string == "unholster") {
		object var_64_object;
		var_60_object = var_64_object;
		func_5719(var_64_object);
	} else if(var_61_string == "player_shot") {
			object var_139_object;
			var_60_object = var_139_object;
			func_5742(var_139_object);
	}
Label_5479:
	for(;;) {

	}
	
	if(!(var_61_string == "battle")) goto Label_5479;
	object var_207_object;
	var_60_object = var_207_object;
	func_5757(var_207_object);
}


// @pe
void func_5972(bool var_113_bool)
{
	int var_115_int;
	func_5398(var_115_int);
	var_113_bool = var_115_int == 6;
}


void func_858(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_5979(bool var_86_bool)
{
	int var_88_int;
	func_5398(var_88_int);
	var_86_bool = var_88_int == 7;
}


// @pe
void func_5986(bool var_123_bool)
{
	int var_125_int;
	func_5398(var_125_int);
	var_123_bool = var_125_int == 8;
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
	func_4987(var_97_cvector);
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
				func_4987(var_109_cvector);
				var_1_bool = var_109_cvector + var_53_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1422; //@nz

	}
}


void func_5480(bool var_23_bool, object var_24_object)
{
	bool var_26_bool;
	bool var_27_bool = false;
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_5714(var_28_bool, var_29_object);
	if(var_28_bool != 0) {
		bool var_32_bool; object var_33_object;
		func_5007(var_32_bool, var_33_object);
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
void func_5993(bool var_129_bool)
{
	int var_131_int;
	func_5398(var_131_int);
	var_129_bool = var_131_int == 9;
}


// @pe
void func_6000(bool var_92_bool)
{
	int var_94_int;
	func_5398(var_94_int);
	var_92_bool = var_94_int == 10;
}


void func_375(float var_107_float)
{
	float var_109_float;
	@GetCameraFarDistance(var_109_float);
	var_109_float = var_107_float;
}


// @pe
void func_6007(bool var_185_bool)
{
	int var_187_int;
	func_5398(var_187_int);
	var_185_bool = var_187_int == 11;
}


void func_4987(cvector var_94_cvector)
{
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	var_96_cvector = var_94_cvector;
}


// @pe
void func_6014(bool var_191_bool)
{
	int var_193_int;
	func_5398(var_193_int);
	var_191_bool = var_193_int == 12;
}


// @pe
void func_5503(object var_39_object)
{
	object var_40_object;
	var_39_object = var_40_object;
	func_5719(var_40_object);
}


void func_4992(cvector var_79_cvector, object var_80_object)
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


// @pe
void func_5509(object var_25_object)
{
	bool var_26_bool; object var_27_object;
	func_5007(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		object var_30_object;
		func_5328(var_30_object);
		@ReportReputationChange(var_27_object, var_30_object, -0.03);
	}
}


// @pe
void func_6021(bool var_259_bool)
{
	bool var_261_bool = false;
	int var_262_int;
	func_5407(var_262_int);
	if(var_262_int >= 0) {
		int var_269_int;
		func_5407(var_269_int);
		if(var_269_int < 12)
			var_261_bool = true;
	}
	if(var_261_bool != 0) {
		var_259_bool = true;
		return 0;
	}
	var_259_bool = false;
}


void func_4999(float var_42_float, object var_43_object)
{
	cvector var_47_cvector;
	@GetPosition(var_47_cvector);
	cvector var_48_cvector;
	var_43_object->GetPosition(var_48_cvector);
	var_42_float = (var_48_cvector - var_47_cvector) | (var_48_cvector - var_47_cvector);
}


void func_394(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_5007(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	@IsPlayerActor(var_33_object, var_35_bool);
	var_35_bool = var_32_bool;
}


void func_401(bool var_117_bool)
{
	var_117_bool = false;
}


void func_5522(bool var_23_bool, string var_24_string)
{
	object var_26_object;
	if(var_24_string == "heal") {
		@FindActor(var_26_object, "player");
		bool var_30_bool; object var_31_object;
		var_26_object = var_31_object;
		func_5763(var_31_object);
		var_30_bool = var_23_bool;
	EMIT "Stack[-1] = 0";
	}
	var_23_bool = false;
}


void func_403(object var_111_object, cvector var_112_cvector)
{
	object var_114_object;
	@FindShiftedPathTo(var_114_object, var_112_cvector);
	var_114_object = var_111_object;
}
EMIT "Stack[-1] = 0";


void func_5012(bool var_51_bool, object var_52_object, string var_53_string)
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
void func_6042(bool var_283_bool)
{
	int var_285_int;
	func_5407(var_285_int);
	if(var_285_int >= 12)
		var_283_bool = true;
	var_283_bool = false;
}


void func_5024(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_5538(string var_34_string)
{
	object var_36_object;
	if(var_34_string == "heal") {
		@FindActor(var_36_object, "player");
		object var_40_object;
		var_36_object = var_40_object;
		func_5766();
		var_36_object = null;
	}
}


void func_6053(int var_110_int)
{
	int var_112_int;
	@GetVariable("branch", var_112_int);
	if(var_112_int == 0) {
		var_110_int = 1;
		return 2;
	EMIT "GOTO 0x17b4";
	}
	if(var_112_int == 1) {
		var_110_int = 2;
		return 2;
	}
	var_110_int = 3;
}


void func_5029(bool var_33_bool, object var_34_object)
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
		func_5024(var_44_bool, var_45_object);
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


void func_5551(string var_141_string, int var_142_int)
{
	string var_144_string = "idle";
	if(var_142_int != 0)
		var_144_string += var_142_int;
	var_144_string = var_141_string;
}


void func_5558(int var_135_int)
{
	int var_138_int; bool var_139_bool;
	var_138_int = 0;
	
	for(;;) {
		string var_141_string; int var_142_int;
		var_138_int = var_142_int;
		func_5551(var_141_string, var_142_int);
		@HasAnimation(var_139_bool, "all", var_141_string);
		if(!var_139_bool) //@nz
			break;
		var_138_int += 1;
	}
	var_138_int = var_135_int;
}


void func_6070(int var_40_int)
{
	int var_42_int;
	@GetVariable("branch", var_42_int);
	var_42_int = var_40_int;
}


// @pe
void func_2491(bool var_2_bool, string var_53_string)
{
	bool var_54_bool;
	func_6173(var_54_bool);
	if(!var_54_bool) //@nz
		return 0;
	if(var_53_string == var_2_bool)
		return 0;
	string var_57_string; bool var_58_bool;
	var_53_string = var_57_string;
	if(var_53_string == "")
		var_58_bool = false;
	else
		var_58_bool = true;
	func_5269(var_57_string, var_58_bool);
	var_2_bool = var_53_string;
	
}


// @pe
void func_6076(object var_39_object)
{
	int var_40_int;
	func_6070(var_40_int);
	if(var_40_int == 1)
		@WorkWithCorpse(var_39_object);
	else
		@Barter(var_39_object);
	
}


// @pe
void func_5575(int var_65_int)
{
	bool var_67_bool;
	func_6223(var_67_bool);
	if(var_67_bool != 0)
		var_65_int = 2;
	else
		var_65_int = 0;
	
}


void func_5065(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_5029(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_5012(var_51_bool, var_52_object, "noaccess");
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
	func_5334(var_52_cvector, (var_44_cvector - var_45_cvector));
	func_5334(var_50_cvector, (var_52_cvector + (var_46_cvector * 0.75)));
	cvector var_47_cvector;
	var_50_cvector = var_47_cvector;
	cvector var_48_cvector;
	float var_49_float;
	@FindLongestDir(var_48_cvector, var_49_float, var_47_cvector, var_37_float, 32, 7000.0);
	if((var_49_float - 100) < 0)
		var_49_float = 0;
	var_36_cvector = var_48_cvector * var_49_float;
}


void func_6089(bool var_24_bool)
{
	int var_26_int;
	@ClearSubContainer(0);
	if(var_24_bool != 0) {
		func_5313("rifle_ammo", 1, 2, 2);
		func_5313("revolver_ammo", 1, 2, 2);
		func_5313("samopal_ammo", 2, 2, 2);
	} else {
		func_5302("lockpick", 1, 4);
		func_5313("alpha_pills", 1, 2, 3);
		func_5302("meradorm", 1, 2);
		func_5302("powder", 1, 15);
		int var_72_int;
		func_5398(var_72_int);
		var_72_int = var_26_int;
		if(var_26_int >= 4)
			func_5302("beta_pills", 1, 2);
		if(!(var_26_int >= 6)) goto Label_6164;
		func_5302("gamma_pills", 1, 7);
	}
Label_6164:
	
}


// @pe
void func_5584(object var_73_object)
{
	object var_74_object;
	var_73_object = var_74_object;
	TaskCall(3);
	func_659(var_75_object, var_74_object);
	TaskReturn();
}


// @pe
void func_5592(int var_34_int, object var_35_object)
{
	object var_37_object;
	var_35_object = var_37_object;
	bool var_36_bool;
	func_5065(var_36_bool, var_37_object);
	if(var_36_bool != 0)
		var_34_int = 2;
	else
		var_34_int = 0;
	
}


void func_5089(object var_98_object)
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
void func_5602(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(4);
	func_934(var_77_object);
	TaskReturn();
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
	func_4987(var_140_cvector);
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
				func_4987(var_152_cvector);
				var_1_bool = var_152_cvector + var_96_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1041; //@nz

	}
}


// @pe
void func_5610(int var_76_int, object var_77_object)
{
	object var_80_object;
	var_77_object = var_80_object;
	bool var_79_bool;
	func_5065(var_79_bool, var_80_object);
	if(var_79_bool != 0)
		var_76_int = 2;
	else
		var_76_int = 0;
	
}


void func_5100(bool var_88_bool)
{
	bool var_90_bool;
	@IsLoaded(var_90_bool);
	var_90_bool = var_88_bool;
}


void func_1521(bool var_0_bool, bool var_74_bool)
{
	cvector var_77_cvector;
	@GetDirection(var_77_cvector);
	cvector var_79_cvector;
	func_4992(var_79_cvector, var_0_bool);
	cvector var_78_cvector;
	var_79_cvector = var_78_cvector;
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector;
	var_77_cvector = var_86_cvector;
	var_78_cvector = var_87_cvector;
	func_5349(var_85_float, var_86_cvector, var_87_cvector);
	var_74_bool = var_85_float >= -0.34202012;
}


void func_5105(bool var_58_bool, object var_59_object, float var_60_float)
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
	func_5334(var_85_cvector, (var_74_cvector ^ [0.0, 1.0, 0.0]));
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
	func_6173(var_101_bool);
	if(var_101_bool != 0) {
	} else {
		@HasAnimationTrack(var_78_bool, "head");
		if(var_78_bool == 0) goto Label_5168;
		@LookAsyncCamera("head");
	}
Label_5168:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_58_bool = true;
	
}


// @pe
void func_5620(object var_113_object)
{
	object var_114_object;
	var_113_object = var_114_object;
	TaskCall(5);
	func_1186(var_115_object, var_116_cvector, var_117_bool, var_114_object);
	TaskReturn();
}


void func_5628(bool var_31_bool, object var_32_object, object var_33_object, float var_34_float)
{
	object var_40_object;
	var_33_object = var_40_object;
	bool var_39_bool;
	func_5012(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_31_bool = false;
		return 4;
	}
	string var_37_string;
	var_33_object->GetProperty("class", var_37_string);
	if(var_37_string == "rat") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x161a";
	}
	if(var_37_string == "rat_big") {
		var_31_bool = false;
		return 4;
	EMIT "GOTO 0x161a";
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
		func_4999(var_58_float, var_59_object);
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
		func_4999(var_70_float, var_71_object);
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


