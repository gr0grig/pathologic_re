// @GLOBALS: 0:bool:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		@SensePlayerOnly(true);
		func_2406();
		func_15();
	
		for(;;) {
			var_2_bool = false;
			func_276(var_14_cvector, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2209(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_211(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2212(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2014(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2097(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_211(var_18_int);
			object var_69_object;
			var_16_bool = var_69_object;
			func_2107(var_69_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_16_object = var_22_object;
		object var_23_object;
		var_17_cvector = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		func_2434(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2115(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_211(var_20_int);
				object var_104_object;
				var_16_object = var_104_object;
				func_2125(var_104_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2199(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_211(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2202();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_cvector = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_1928(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_211(var_19_int);
			object var_53_object; string var_54_string;
			var_16_cvector = var_53_object;
			var_17_bool = var_54_string;
			func_1960(var_53_object, var_54_string);
		} else {
			int var_202_int; string var_203_string; object var_204_object;
			var_17_bool = var_203_string;
			var_16_cvector = var_204_object;
			func_2204(var_204_object);
			var_202_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_152;
			if(var_19_int > 1)
				func_211(var_19_int);
			string var_209_string; object var_210_object;
			var_17_bool = var_209_string;
			var_16_cvector = var_210_object;
			func_2207();
		}
	Label_152:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool; string var_18_string;
		func_2027(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_211(var_18_string);
			string var_27_string;
			var_16_bool = var_27_string;
			func_2043(var_27_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool; object var_18_object;
		func_1985(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_211(var_18_object);
			object var_32_object;
			var_16_bool = var_32_object;
			func_2008(var_32_object);
		} else {
			object var_106_object;
			func_236(var_106_object, var_106_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_17_object;
		func_236(var_17_object, var_17_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_211(var_15_bool);
		func_2218();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_211(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1922();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		@Stop();
	}

}


task task_1
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2209(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_614();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2212(var_25_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2014(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2097(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_614();
			object var_68_object;
			var_16_bool = var_68_object;
			func_2107(var_68_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_16_object = var_22_object;
		object var_23_object;
		var_17_cvector = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		func_2434(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2115(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_614();
				object var_103_object;
				var_16_object = var_103_object;
				func_2125(var_103_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2199(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_614();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2202();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_cvector = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_1928(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_614();
			object var_52_object; string var_53_string;
			var_16_cvector = var_52_object;
			var_17_bool = var_53_string;
			func_1960(var_52_object, var_53_string);
		} else {
			int var_201_int; string var_202_string; object var_203_object;
			var_17_bool = var_202_string;
			var_16_cvector = var_203_object;
			func_2204(var_203_object);
			var_201_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_497;
			if(var_19_int > 1)
				func_614();
			string var_208_string; object var_209_object;
			var_17_bool = var_208_string;
			var_16_cvector = var_209_object;
			func_2207();
		}
	Label_497:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		string var_18_string;
		var_16_bool = var_18_string;
		bool var_17_bool;
		func_2027(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_614();
			string var_26_string;
			var_16_bool = var_26_string;
			func_2043(var_26_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_614();
		func_2218();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_1985(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_614();
			object var_31_object;
			var_16_bool = var_31_object;
			func_2008(var_31_object);
		}
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2209(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_818();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2212(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2014(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2097(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_818();
			object var_70_object;
			var_16_bool = var_70_object;
			func_2107(var_70_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_16_object = var_22_object;
		object var_23_object;
		var_17_cvector = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		func_2434(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2115(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_818();
				object var_105_object;
				var_16_object = var_105_object;
				func_2125(var_105_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2199(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_818();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2202();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_cvector = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_1928(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_818();
			object var_54_object; string var_55_string;
			var_16_cvector = var_54_object;
			var_17_bool = var_55_string;
			func_1960(var_54_object, var_55_string);
		} else {
			int var_203_int; string var_204_string; object var_205_object;
			var_17_bool = var_204_string;
			var_16_cvector = var_205_object;
			func_2204(var_205_object);
			var_203_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_803;
			if(var_19_int > 1)
				func_818();
			string var_210_string; object var_211_object;
			var_17_bool = var_210_string;
			var_16_cvector = var_211_object;
			func_2207();
		}
	Label_803:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		string var_18_string;
		var_16_bool = var_18_string;
		bool var_17_bool;
		func_2027(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_818();
			string var_28_string;
			var_16_bool = var_28_string;
			func_2043(var_28_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_818();
		object var_19_object;
		var_16_bool = var_19_object;
		func_1922();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 111)
			return 4;
		bool var_23_bool;
		func_1769(var_23_bool, var_0_bool);
		if(!var_23_bool) { //@nz
			func_818();
			return 4;
		}
		cvector var_19_cvector;
		@GetDirection(var_19_cvector);
		cvector var_60_cvector;
		func_1696(var_60_cvector, var_0_bool);
		cvector var_20_cvector;
		var_60_cvector = var_20_cvector;
		float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
		var_19_cvector = var_67_cvector;
		var_20_cvector = var_68_cvector;
		func_1894(var_66_float, var_67_cvector, var_68_cvector);
		if(var_66_float < 0.49999997)
			func_1793(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_818();
		func_2218();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_1985(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_818();
			object var_33_object;
			var_16_bool = var_33_object;
			func_2008(var_33_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1084(var_15_bool);
		func_2218();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, int var_7_int, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
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
			func_929(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1100(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1083;
			@Stop();
			cvector var_88_cvector;
			func_1691(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1083:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1084(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1922();
	}

}


task task_4
{
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, int var_10_int, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
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
			func_1116(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1287(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1270;
			@Stop();
			cvector var_88_cvector;
			func_1691(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1270:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1271(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1922();
	}

}


task task_5
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1465(var_15_bool);
		func_2218();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, int var_13_int, object var_14_object, cvector var_15_cvector, bool var_16_bool)
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
			func_1310(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1481(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1464;
			@Stop();
			cvector var_88_cvector;
			func_1691(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1464:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1465(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1922();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1659(var_15_bool);
		func_2218();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, int var_16_int)
	{
		cvector var_21_cvector; float var_22_float; cvector var_23_cvector; float var_24_float;
		if(var_16_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_21_cvector);
			@FindDirLength(var_22_float, var_21_cvector, 7000.0);
			cvector var_30_cvector;
			func_1504(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1675(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1658;
			@Stop();
			cvector var_88_cvector;
			func_1691(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1658:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object)
	{
		func_1659(var_16_object);
		object var_18_object;
		var_16_object = var_18_object;
		func_1922();
	}

}


// @pe
void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, string var_17_string)
{
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object)
{
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
}


void func_2056(string var_152_string, int var_153_int)
{
	string var_155_string = "idle";
	if(var_153_int != 0)
		var_155_string += var_153_int;
	var_155_string = var_152_string;
}


void func_15(void)
{
	bool var_99_bool;
	func_1804(var_99_bool);
	if(!var_99_bool) //@nz
		func_2218();
}


void func_2063(int var_146_int)
{
	int var_149_int; bool var_150_bool;
	var_149_int = 0;
	
	for(;;) {
		string var_152_string; int var_153_int;
		var_149_int = var_153_int;
		func_2056(var_152_string, var_153_int);
		@HasAnimation(var_150_bool, "all", var_152_string);
		if(!var_150_bool) //@nz
			break;
		var_149_int += 1;
	}
	var_149_int = var_146_int;
}


void func_533(void)
{
	int var_139_int; int var_140_int; bool var_141_bool; float var_142_float; bool var_143_bool;
	@WaitForAnimEnd();
	bool var_144_bool;
	func_1804(var_144_bool);
	if(!var_144_bool) //@nz
		return 14;
	int var_146_int;
	func_2063(var_146_int);
	int var_137_int;
	var_146_int = var_137_int;
	int var_138_int = 0;
	
	for(;;) {
		bool var_159_bool = false;
		if(var_138_int < 5) {
			bool var_162_bool;
			func_1804(var_162_bool);
			if(var_162_bool != 0)
				var_159_bool = true;
		}
		if(var_159_bool != 0) {
			@irand(var_139_int, 3);
			if(var_139_int == 0) {
				if(var_137_int == 0) goto Label_580;
				@irand(var_140_int, var_137_int);
				string var_168_string; int var_169_int;
				var_140_int = var_169_int;
				func_2056(var_168_string, var_169_int);
				@PlayAnimation("all", var_168_string);
				@WaitForAnimEnd(var_141_bool);
				if(!var_141_bool) { //@nz
				} else {
			} else {
			if(var_139_int == 1) {
				@rand(var_142_float, 4);
				@Sleep((var_142_float + 1), var_143_bool);
				if(!var_143_bool) { //@nz
					goto Label_609;
				}
			} else if(var_138_int != 0) {
				goto Label_609;
			}
			}
					bool var_171_bool;
					func_612(var_171_bool);
					var_172_bool = !var_171_bool; //@nz
					if(var_172_bool == 0) goto Label_604;
			}
		}
	Label_609:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_604:
		@ResetAAS();
		var_138_int += 1;
	}
	
}


// @pe
void func_2080(int var_59_int)
{
	bool var_61_bool;
	func_2428(var_61_bool);
	if(var_61_bool != 0)
		var_59_int = 2;
	else
		var_59_int = 0;
	
}


// @pe
void func_2089(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(2);
	func_619(var_78_object, var_77_object);
	TaskReturn();
}


// @pe
void func_2097(int var_28_int, object var_29_object)
{
	object var_31_object;
	var_29_object = var_31_object;
	bool var_30_bool;
	func_1769(var_30_bool, var_31_object);
	if(var_30_bool != 0)
		var_28_int = 2;
	else
		var_28_int = 0;
	
}


// @pe
void func_2107(object var_70_object)
{
	object var_71_object;
	var_70_object = var_71_object;
	TaskCall(3);
	func_894(var_71_object);
	TaskReturn();
}


void func_1084(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_2115(int var_68_int, object var_69_object)
{
	object var_72_object;
	var_69_object = var_72_object;
	bool var_71_bool;
	func_1769(var_71_bool, var_72_object);
	if(var_71_bool != 0)
		var_68_int = 2;
	else
		var_68_int = 0;
	
}


void func_1100(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1696(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


// @pe
void func_2125(object var_105_object)
{
	object var_106_object;
	var_105_object = var_106_object;
	TaskCall(4);
	func_1146(var_107_object, var_108_cvector, var_109_bool, var_106_object);
	TaskReturn();
}


void func_2133(bool var_25_bool, object var_26_object, object var_27_object, float var_28_float)
{
	object var_34_object;
	var_27_object = var_34_object;
	bool var_33_bool;
	func_1716(var_33_bool, var_34_object, "class");
	if(!var_33_bool) { //@nz
		var_25_bool = false;
		return 4;
	}
	string var_31_string;
	var_27_object->GetProperty("class", var_31_string);
	if(var_31_string == "rat") {
		var_25_bool = false;
		return 4;
	EMIT "GOTO 0x873";
	}
	if(var_31_string == "rat_big") {
		var_25_bool = false;
		return 4;
	EMIT "GOTO 0x873";
	}
	if(var_31_string == "dog") {
		var_25_bool = false;
		return 4;
	}
	bool var_32_bool;
	@CanSee(var_32_bool, var_26_object);
	bool var_50_bool = true;
	if(var_32_bool != 1) {
		float var_52_float; object var_53_object;
		var_26_object = var_53_object;
		func_1703(var_52_float, var_53_object);
		var_61_bool = var_52_float <= (var_28_float * var_28_float);
		if(var_61_bool != 1)
			var_50_bool = false;
	}
	if(var_50_bool != 0) {
		var_25_bool = true;
		return 4;
	}
	@CanSee(var_32_bool, var_27_object);
	bool var_62_bool = true;
	if(var_32_bool != 1) {
		float var_64_float; object var_65_object;
		var_27_object = var_65_object;
		func_1703(var_64_float, var_65_object);
		var_67_bool = var_64_float <= (var_28_float * var_28_float);
		if(var_67_bool != 1)
			var_62_bool = false;
	}
	if(var_62_bool != 0) {
		var_25_bool = true;
		return 4;
	}
	var_25_bool = false;
}


void func_1116(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1852(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1852(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_612(bool var_171_bool)
{
	var_171_bool = true;
}


void func_614(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_619(bool var_0_bool, object var_77_object)
{
	var_0_bool = var_77_object;
	bool var_84_bool;
	func_670(var_84_bool);
	cvector var_82_cvector;
	@GetDirection(var_82_cvector);
	cvector var_92_cvector;
	func_1696(var_92_cvector, var_0_bool);
	cvector var_83_cvector;
	var_92_cvector = var_83_cvector;
	float var_98_float; cvector var_99_cvector; cvector var_100_cvector;
	var_82_cvector = var_99_cvector;
	var_83_cvector = var_100_cvector;
	func_1894(var_98_float, var_99_cvector, var_100_cvector);
	if(var_98_float < 0) {
		func_1793(var_0_bool);
		var_84_bool = true;
	} else {
		@Sleep(1.5, var_84_bool);
	}
	if(var_84_bool != 0) {
		func_1793(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_1146(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_106_object)
{
	float var_116_float; cvector var_118_cvector; float var_119_float;
	cvector var_120_cvector;
	func_1116(var_119_float, var_120_cvector, 1.7453294);
	cvector var_115_cvector;
	var_120_cvector = var_115_cvector;
	if((var_115_cvector | var_115_cvector) < 2500.0) {
		cvector var_152_cvector;
		func_1116(var_119_float, var_152_cvector, 2.6179938);
		var_152_cvector = var_115_cvector;
		var_116_float = var_115_cvector | var_115_cvector;
		if(var_116_float < 2500.0) {
			var_157_float = sqrt(var_116_float);
			@Trace("Can't retreat, distance: " + var_157_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_160_float = GetByIndex(var_115_cvector, 0);
	var_161_float = GetByIndex(var_115_cvector, 2);
	@Rotate(var_160_float, var_161_float);
	cvector var_162_cvector;
	func_1691(var_162_cvector);
	@SetTimer(120, 0.5);
	
Label_1188:
	bool var_117_bool;
	@MovePoint((var_162_cvector + var_115_cvector), 1, var_117_bool);
	if(var_117_bool != 0) {
		if(var_106_object == null) {
			goto Label_1218;
		EMIT "GOTO 0x4c0";

		Label_1218:
			for(;;) {
				return 10;
		}
			cvector var_170_cvector;
			func_1116(var_119_float, var_170_cvector, 2.6179938);
			var_170_cvector = var_118_cvector;
			if((var_118_cvector | var_118_cvector) >= 2500.0) {
				cvector var_174_cvector;
				func_1691(var_174_cvector);
				var_1_bool = var_174_cvector + var_118_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1188; //@nz

	}
}


void func_1659(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1675(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1696(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


// @pe
void func_2199(int var_19_int)
{
	var_19_int = 0;
}


// @pe
void func_2202(void)
{
}


void func_1691(cvector var_88_cvector)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
}


// @pe
void func_2204(int var_203_int)
{
	var_203_int = 0;
}


void func_670(bool var_0_bool)
{
	func_1809(var_0_bool);
}


// @pe
void func_2207(void)
{
}


void func_1696(cvector var_73_cvector, object var_74_object)
{
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	cvector var_78_cvector;
	var_74_object->GetPosition(var_78_cvector);
	var_73_cvector = var_78_cvector - var_77_cvector;
}


// @pe
void func_2209(int var_19_int)
{
	var_19_int = 2;
}


// @pe
void func_2212(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_2414(var_28_object);
}


void func_1703(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


void func_2218(void)
{
}


void func_2219(bool var_22_bool, object var_23_object)
{
	bool var_25_bool;
	@CanSee(var_25_bool, var_23_object);
	var_25_bool = var_22_bool;
}


void func_1711(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	@IsPlayerActor(var_27_object, var_29_bool);
	var_29_bool = var_26_bool;
}


// @pe
void func_2224(object var_34_object)
{
	object var_35_object;
	var_34_object = var_35_object;
	TaskCall(5);
	func_1340(var_36_object, var_37_cvector, var_38_bool, var_35_object);
	TaskReturn();
}


void func_1716(bool var_45_bool, object var_46_object, string var_47_string)
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


void func_2232(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	@CanSee(var_34_bool, var_32_object);
	var_31_bool = true;
	if(var_34_bool != 1) {
		float var_36_float; object var_37_object;
		var_32_object = var_37_object;
		func_1703(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 4000000;
		if(var_45_bool != 1)
			var_31_bool = false;
	}
}


void func_1728(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


void func_1733(bool var_27_bool, object var_28_object)
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
		func_1728(var_38_bool, var_39_object);
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


// @pe
void func_2247(object var_133_object)
{
	object var_134_object;
	var_133_object = var_134_object;
	TaskCall(6);
	func_1534(var_135_object, var_136_cvector, var_137_bool, var_134_object);
	TaskReturn();
}


// @pe
void func_2255(bool var_48_bool, object var_49_object)
{
	object var_51_object;
	var_49_object = var_51_object;
	bool var_50_bool;
	func_2232(var_50_bool, var_51_object);
	var_50_bool = var_48_bool;
}


void func_211(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_347(var_15_cvector, var_16_bool);
}


// @pe
void func_2262(object var_201_object)
{
	object var_202_object;
	var_201_object = var_202_object;
	func_2247(var_202_object);
}


void func_219(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_354(var_20_bool, var_21_int);
}


// @pe
void func_2268(bool var_24_bool)
{
	var_24_bool = false;
}


// @pe
void func_2271(void)
{
}


void func_2273(int var_34_int)
{
	int var_36_int;
	@GetVariable("branch", var_36_int);
	var_36_int = var_34_int;
}


void func_2279(float var_62_float)
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


void func_1769(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1733(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1716(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


void func_236(bool var_2_bool, object var_17_object)
{
	bool var_22_bool; object var_23_object;
	func_1769(var_22_bool, var_23_object);
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
	func_2080(var_60_object);
	int var_21_int;
	var_59_int = var_21_int;
	if(var_21_int > 0) {
		if(var_21_int > 1)
			func_219(var_21_int);
		object var_76_object;
		var_17_object = var_76_object;
		func_2089(var_76_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_2293(object var_33_object)
{
	int var_34_int;
	func_2273(var_34_int);
	if(var_34_int == 1)
		@WorkWithCorpse(var_33_object);
	else
		@Barter(var_33_object);
	
}


void func_1271(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1793(object var_92_object)
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


void func_2306(bool var_18_bool)
{
	@ClearSubContainer(0);
	int var_26_int;
	func_1911(var_26_int);
	int var_24_int;
	var_26_int = var_24_int;
	if(var_18_bool != 0) {
		func_1831("alpha_pills", 1, 2, 4);
		func_1831("meradorm", 2, 3, 3);
		if(var_24_int >= 3)
			func_1820("beta_pills", 1, 4);
		if(var_24_int >= 8) {
			func_1831("monomicin", 1, 2, 2);
		} else {
				if(var_24_int >= 4)
					func_1820("monomicin", 1, 2);
				func_1820("lockpick", 1, 4);
				func_1820("rifle_ammo", 1, 2);
				func_1820("revolver_ammo", 1, 2);
				func_1831("samopal_ammo", 1, 2, 2);
				if(var_24_int >= 8)
					func_1831("monomicin", 1, 2, 2);
			}
			} else if(var_24_int >= 4) {
		func_1820("monomicin", 1, 2);
			}
	
}


void func_1287(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1696(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_1804(bool var_99_bool)
{
	bool var_101_bool;
	@IsLoaded(var_101_bool);
	var_101_bool = var_99_bool;
}


void func_1809(object var_85_object)
{
	float var_88_float;
	var_85_object->GetEyesHeight(var_88_float);
	cvector var_89_cvector = [0.0, 0.0, 0.0];
	var_90_float = GetByIndex(var_89_cvector, 1);
	var_88_float = var_90_float;
	SetByIndex(var_89_cvector, 1) = var_90_float;
	@LookAsync(var_85_object, "head", var_89_cvector);
}


void func_276(bool var_0_bool, bool var_1_bool)
{
	float var_109_float; cvector var_110_cvector; cvector var_111_cvector; bool var_112_bool; object var_113_object; bool var_114_bool;
	@rand(var_109_float, 0.5);
	@Sleep(var_109_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_288:
				@GetPosition(var_111_cvector);
				float var_118_float;
				func_335(var_118_float);
				@GetRandomPFPointInCircle(var_110_cvector, var_111_cvector, var_118_float, var_112_bool);
				if(var_112_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_288;
			}
				var_1_bool = false;
		}
		}
		goto Label_304;

	Label_304:
		object var_122_object; cvector var_123_cvector;
		var_110_cvector = var_123_cvector;
		func_363(var_122_object, var_123_cvector);
		var_122_object = var_113_object;
		if(var_113_object != null) {
			@RotatePath(var_113_object, var_114_bool);
			if(var_114_bool != 0) {
				bool var_128_bool;
				func_361(var_128_bool);
				@FollowPath(var_113_object, var_128_bool, var_114_bool);
				var_113_object = null;
				if(var_114_bool != 0) {
					TaskCall(1);
					func_533();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_113_object = null;
	}
	
}


void func_1820(string var_55_string, int var_56_int, int var_57_int)
{
	bool var_59_bool;
	int var_61_int;
	var_56_int = var_61_int;
	int var_62_int;
	var_57_int = var_62_int;
	bool var_60_bool;
	func_1862(var_60_bool, var_61_int, var_62_int);
	if(var_60_bool != 0)
		@AddItem(var_59_bool, var_55_string, 0);
}


void func_1310(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1852(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1852(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_1831(string var_33_string, int var_34_int, int var_35_int, int var_36_int)
{
	int var_39_int; bool var_40_bool;
	int var_42_int;
	var_34_int = var_42_int;
	int var_43_int;
	var_35_int = var_43_int;
	bool var_41_bool;
	func_1862(var_41_bool, var_42_int, var_43_int);
	if(var_41_bool != 0) {
		@irand(var_39_int, var_36_int);
		@AddItem(var_40_bool, var_33_string, 0, (var_39_int + 1));
	}
}


void func_818(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1846(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_1852(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_49_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_49_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_49_float;
}


void func_1340(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_35_object)
{
	float var_45_float; cvector var_47_cvector; float var_48_float;
	cvector var_49_cvector;
	func_1310(var_48_float, var_49_cvector, 1.7453294);
	cvector var_44_cvector;
	var_49_cvector = var_44_cvector;
	if((var_44_cvector | var_44_cvector) < 2500.0) {
		cvector var_81_cvector;
		func_1310(var_48_float, var_81_cvector, 2.6179938);
		var_81_cvector = var_44_cvector;
		var_45_float = var_44_cvector | var_44_cvector;
		if(var_45_float < 2500.0) {
			var_86_float = sqrt(var_45_float);
			@Trace("Can't retreat, distance: " + var_86_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_89_float = GetByIndex(var_44_cvector, 0);
	var_90_float = GetByIndex(var_44_cvector, 2);
	@Rotate(var_89_float, var_90_float);
	cvector var_91_cvector;
	func_1691(var_91_cvector);
	@SetTimer(120, 0.5);
	
Label_1382:
	bool var_46_bool;
	@MovePoint((var_91_cvector + var_44_cvector), 1, var_46_bool);
	if(var_46_bool != 0) {
		if(var_35_object == null) {
			goto Label_1412;
		EMIT "GOTO 0x582";

		Label_1412:
			for(;;) {
				return 10;
		}
			cvector var_99_cvector;
			func_1310(var_48_float, var_99_cvector, 2.6179938);
			var_99_cvector = var_47_cvector;
			if((var_47_cvector | var_47_cvector) >= 2500.0) {
				cvector var_103_cvector;
				func_1691(var_103_cvector);
				var_1_bool = var_103_cvector + var_47_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1382; //@nz

	}
}


void func_1862(bool var_41_bool, int var_42_int, int var_43_int)
{
	int var_45_int;
	@irand(var_45_int, var_43_int);
	var_41_bool = var_45_int < var_42_int;
}


// @pe
void func_1867(float var_79_float, cvector var_80_cvector, cvector var_81_cvector)
{
	var_86_float = sqrt((var_80_cvector | var_80_cvector) * (var_81_cvector | var_81_cvector));
	var_79_float = (var_80_cvector | var_81_cvector) / var_86_float;
}


void func_335(float var_118_float)
{
	float var_120_float;
	@GetCameraFarDistance(var_120_float);
	var_120_float = var_118_float;
}


// @pe
void func_1875(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_69_float = (var_72_float * var_73_float) + (var_75_float * var_76_float);
}


void func_347(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1884(float var_78_float, cvector var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_78_float = sqrt((var_80_float * var_81_float) + (var_83_float * var_84_float));
}


void func_354(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_2406(void)
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2306(false);
}


// @pe
void func_1894(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	cvector var_70_cvector;
	var_67_cvector = var_70_cvector;
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	float var_69_float;
	func_1875(var_69_float, var_70_cvector, var_71_cvector);
	float var_78_float; cvector var_79_cvector;
	var_67_cvector = var_79_cvector;
	func_1884(var_78_float, var_79_cvector);
	float var_87_float; cvector var_88_cvector;
	var_68_cvector = var_88_cvector;
	func_1884(var_87_float, var_88_cvector);
	var_66_float = var_69_float / (var_78_float * var_87_float);
}


void func_361(bool var_128_bool)
{
	var_128_bool = false;
}


void func_363(object var_122_object, cvector var_123_cvector)
{
	object var_125_object;
	@FindShiftedPathTo(var_125_object, var_123_cvector);
	var_125_object = var_122_object;
}
EMIT "Stack[-1] = 0";


void func_2414(object var_28_object)
{
	bool var_30_bool;
	var_31_bool = GlobalVars[0];
	if(var_31_bool != 0) {
		@IsOverrideActive(var_30_bool);
		if(!var_30_bool) { //@nz
			object var_33_object;
			var_28_object = var_33_object;
			func_2293(var_33_object);
		}
	EMIT "GOTO 0x97b";
	}
}


void func_1911(int var_26_int)
{
	float var_28_float;
	@GetGameTime(var_28_float);
	var_26_int = 1 + (var_28_float / 24);
}


void func_2428(bool var_61_bool)
{
	float var_62_float;
	func_2279(var_62_float);
	var_61_bool = var_62_float > 0.6;
}


// @pe
void func_894(object var_71_object)
{
	@Face(var_71_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_81_object;
	func_959(var_73_cvector, var_74_bool, var_81_object, var_81_object);
}


// @pe
void func_2434(bool var_21_bool, object var_22_object, object var_23_object)
{
	object var_26_object;
	var_22_object = var_26_object;
	object var_27_object;
	var_23_object = var_27_object;
	bool var_25_bool;
	func_2133(var_25_bool, var_26_object, var_27_object, 700.0);
	var_25_bool = var_21_bool;
}


// @pe
void func_1928(bool var_20_bool, object var_21_object, string var_22_string)
{
	if(var_22_string == "unholster") {
		bool var_25_bool; object var_26_object;
		var_21_object = var_26_object;
		func_2219(var_25_bool, var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x7a6";
	}
	if(var_22_string == "player_shot") {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_2232(var_31_bool, var_32_object);
		var_31_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x7a6";
	}
	if(var_22_string == "battle") {
		bool var_48_bool; object var_49_object;
		var_21_object = var_49_object;
		func_2255(var_48_bool, var_49_object);
		var_48_bool = var_20_bool;
		return 0;
	}
	var_20_bool = false;
}


void func_929(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1852(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1852(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
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
void func_1960(object var_54_object, string var_55_string)
{
	if(var_55_string == "unholster") {
		object var_58_object;
		var_54_object = var_58_object;
		func_2224(var_58_object);
	} else if(var_55_string == "player_shot") {
			object var_133_object;
			var_54_object = var_133_object;
			func_2247(var_133_object);
	}
Label_1984:
	for(;;) {

	}
	
	if(!(var_55_string == "battle")) goto Label_1984;
	object var_201_object;
	var_54_object = var_201_object;
	func_2262(var_201_object);
}


void func_1465(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_959(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_81_object)
{
	float var_88_float; cvector var_90_cvector; float var_91_float;
	cvector var_92_cvector;
	func_929(var_91_float, var_92_cvector, 1.7453294);
	cvector var_87_cvector;
	var_92_cvector = var_87_cvector;
	if((var_87_cvector | var_87_cvector) < 2500.0) {
		cvector var_124_cvector;
		func_929(var_91_float, var_124_cvector, 2.6179938);
		var_124_cvector = var_87_cvector;
		var_88_float = var_87_cvector | var_87_cvector;
		if(var_88_float < 2500.0) {
			var_129_float = sqrt(var_88_float);
			@Trace("Can't retreat, distance: " + var_129_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_132_float = GetByIndex(var_87_cvector, 0);
	var_133_float = GetByIndex(var_87_cvector, 2);
	@Rotate(var_132_float, var_133_float);
	cvector var_134_cvector;
	func_1691(var_134_cvector);
	@SetTimer(120, 0.5);
	
Label_1001:
	bool var_89_bool;
	@MovePoint((var_134_cvector + var_87_cvector), 1, var_89_bool);
	if(var_89_bool != 0) {
		if(var_81_object == null) {
			goto Label_1031;
		EMIT "GOTO 0x405";

		Label_1031:
			for(;;) {
				return 10;
		}
			cvector var_142_cvector;
			func_929(var_91_float, var_142_cvector, 2.6179938);
			var_142_cvector = var_90_cvector;
			if((var_90_cvector | var_90_cvector) >= 2500.0) {
				cvector var_146_cvector;
				func_1691(var_146_cvector);
				var_1_bool = var_146_cvector + var_90_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1001; //@nz

	}
}


void func_1985(bool var_17_bool, object var_18_object)
{
	bool var_20_bool;
	bool var_21_bool = false;
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_2219(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		bool var_26_bool; object var_27_object;
		func_1711(var_26_bool, var_27_object);
		if(var_26_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		var_27_object->IsWeaponHolstered(var_20_bool);
		if(!var_20_bool) //@nz
			var_17_bool = true;
	}
	var_17_bool = false;
}


void func_1481(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1696(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1867(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


// @pe
void func_2008(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	func_2224(var_34_object);
}


// @pe
void func_2014(object var_19_object)
{
	bool var_20_bool; object var_21_object;
	func_1711(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		object var_24_object;
		func_1846(var_24_object);
		@ReportReputationChange(var_21_object, var_24_object, -0.05);
	}
}


void func_1504(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1852(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1852(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_2027(bool var_17_bool, string var_18_string)
{
	object var_20_object;
	if(var_18_string == "heal") {
		@FindActor(var_20_object, "player");
		bool var_24_bool; object var_25_object;
		var_20_object = var_25_object;
		func_2268(var_25_object);
		var_24_bool = var_17_bool;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = false;
}


void func_2043(string var_28_string)
{
	object var_30_object;
	if(var_28_string == "heal") {
		@FindActor(var_30_object, "player");
		object var_34_object;
		var_30_object = var_34_object;
		func_2271();
		var_30_object = null;
	}
}


void func_1534(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_134_object)
{
	float var_144_float; cvector var_146_cvector; float var_147_float;
	cvector var_148_cvector;
	func_1504(var_147_float, var_148_cvector, 1.7453294);
	cvector var_143_cvector;
	var_148_cvector = var_143_cvector;
	if((var_143_cvector | var_143_cvector) < 2500.0) {
		cvector var_175_cvector;
		func_1504(var_147_float, var_175_cvector, 2.6179938);
		var_175_cvector = var_143_cvector;
		var_144_float = var_143_cvector | var_143_cvector;
		if(var_144_float < 2500.0) {
			var_180_float = sqrt(var_144_float);
			@Trace("Can't retreat, distance: " + var_180_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_183_float = GetByIndex(var_143_cvector, 0);
	var_184_float = GetByIndex(var_143_cvector, 2);
	@Rotate(var_183_float, var_184_float);
	cvector var_185_cvector;
	func_1691(var_185_cvector);
	@SetTimer(120, 0.5);
	
Label_1576:
	bool var_145_bool;
	@MovePoint((var_185_cvector + var_143_cvector), 1, var_145_bool);
	if(var_145_bool != 0) {
		if(var_134_object == null) {
			goto Label_1606;
		EMIT "GOTO 0x644";

		Label_1606:
			for(;;) {
				return 10;
		}
			cvector var_191_cvector;
			func_1504(var_147_float, var_191_cvector, 2.6179938);
			var_191_cvector = var_146_cvector;
			if((var_146_cvector | var_146_cvector) >= 2500.0) {
				cvector var_195_cvector;
				func_1691(var_195_cvector);
				var_1_bool = var_195_cvector + var_146_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1576; //@nz

	}
}


