// @GLOBALS: 0:bool:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		@SensePlayerOnly(true);
		func_2306();
		func_15();
	
		for(;;) {
			var_2_bool = false;
			func_262(var_14_cvector, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2138(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_197(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2141(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_1972(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2026(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_197(var_18_int);
			object var_69_object;
			var_16_bool = var_69_object;
			func_2036(var_69_object);
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
		func_2334(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2044(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_197(var_20_int);
				object var_104_object;
				var_16_object = var_104_object;
				func_2054(var_104_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2128(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_197(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2131();
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
		func_1886(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_197(var_19_int);
			object var_53_object; string var_54_string;
			var_16_cvector = var_53_object;
			var_17_bool = var_54_string;
			func_1918(var_53_object, var_54_string);
		} else {
			int var_202_int; string var_203_string; object var_204_object;
			var_17_bool = var_203_string;
			var_16_cvector = var_204_object;
			func_2133(var_204_object);
			var_202_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_152;
			if(var_19_int > 1)
				func_197(var_19_int);
			string var_209_string; object var_210_object;
			var_17_bool = var_209_string;
			var_16_cvector = var_210_object;
			func_2136();
		}
	Label_152:
	
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool; object var_18_object;
		func_1943(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_197(var_18_object);
			object var_32_object;
			var_16_bool = var_32_object;
			func_1966(var_32_object);
		} else {
			object var_106_object;
			func_222(var_106_object, var_106_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_17_object;
		func_222(var_17_object, var_17_object);
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
		func_197(var_15_bool);
		func_2147();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_197(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1880();
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
		func_2138(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_586();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2141(var_25_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_1972(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2026(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_586();
			object var_68_object;
			var_16_bool = var_68_object;
			func_2036(var_68_object);
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
		func_2334(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2044(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_586();
				object var_103_object;
				var_16_object = var_103_object;
				func_2054(var_103_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2128(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_586();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2131();
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
		func_1886(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_586();
			object var_52_object; string var_53_string;
			var_16_cvector = var_52_object;
			var_17_bool = var_53_string;
			func_1918(var_52_object, var_53_string);
		} else {
			int var_201_int; string var_202_string; object var_203_object;
			var_17_bool = var_202_string;
			var_16_cvector = var_203_object;
			func_2133(var_203_object);
			var_201_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_483;
			if(var_19_int > 1)
				func_586();
			string var_208_string; object var_209_object;
			var_17_bool = var_208_string;
			var_16_cvector = var_209_object;
			func_2136();
		}
	Label_483:
	
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_586();
		func_2147();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_1943(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_586();
			object var_31_object;
			var_16_bool = var_31_object;
			func_1966(var_31_object);
		}
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2138(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_776();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2141(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_1972(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2026(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_776();
			object var_70_object;
			var_16_bool = var_70_object;
			func_2036(var_70_object);
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
		func_2334(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2044(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_776();
				object var_105_object;
				var_16_object = var_105_object;
				func_2054(var_105_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2128(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_776();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2131();
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
		func_1886(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_776();
			object var_54_object; string var_55_string;
			var_16_cvector = var_54_object;
			var_17_bool = var_55_string;
			func_1918(var_54_object, var_55_string);
		} else {
			int var_203_int; string var_204_string; object var_205_object;
			var_17_bool = var_204_string;
			var_16_cvector = var_205_object;
			func_2133(var_205_object);
			var_203_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_775;
			if(var_19_int > 1)
				func_776();
			string var_210_string; object var_211_object;
			var_17_bool = var_210_string;
			var_16_cvector = var_211_object;
			func_2136();
		}
	Label_775:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_776();
		object var_19_object;
		var_16_bool = var_19_object;
		func_1880();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 111)
			return 4;
		bool var_23_bool;
		func_1727(var_23_bool, var_0_bool);
		if(!var_23_bool) { //@nz
			func_776();
			return 4;
		}
		cvector var_19_cvector;
		@GetDirection(var_19_cvector);
		cvector var_60_cvector;
		func_1654(var_60_cvector, var_0_bool);
		cvector var_20_cvector;
		var_60_cvector = var_20_cvector;
		float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
		var_19_cvector = var_67_cvector;
		var_20_cvector = var_68_cvector;
		func_1852(var_66_float, var_67_cvector, var_68_cvector);
		if(var_66_float < 0.49999997)
			func_1751(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_776();
		func_2147();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_1943(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_776();
			object var_33_object;
			var_16_bool = var_33_object;
			func_1966(var_33_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1042(var_15_bool);
		func_2147();
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
			func_887(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1058(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1041;
			@Stop();
			cvector var_88_cvector;
			func_1649(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1041:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1042(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1880();
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
			func_1074(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1245(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1228;
			@Stop();
			cvector var_88_cvector;
			func_1649(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1228:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1229(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1880();
	}

}


task task_5
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1423(var_15_bool);
		func_2147();
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
			func_1268(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1439(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1422;
			@Stop();
			cvector var_88_cvector;
			func_1649(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1422:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1423(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_1880();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1617(var_15_bool);
		func_2147();
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
			func_1462(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1633(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1616;
			@Stop();
			cvector var_88_cvector;
			func_1649(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1616:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object)
	{
		func_1617(var_16_object);
		object var_18_object;
		var_16_object = var_18_object;
		func_1880();
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


// @pe
void func_2054(object var_105_object)
{
	object var_106_object;
	var_105_object = var_106_object;
	TaskCall(4);
	func_1104(var_107_object, var_108_cvector, var_109_bool, var_106_object);
	TaskReturn();
}


void func_2062(bool var_25_bool, object var_26_object, object var_27_object, float var_28_float)
{
	object var_34_object;
	var_27_object = var_34_object;
	bool var_33_bool;
	func_1674(var_33_bool, var_34_object, "class");
	if(!var_33_bool) { //@nz
		var_25_bool = false;
		return 4;
	}
	string var_31_string;
	var_27_object->GetProperty("class", var_31_string);
	if(var_31_string == "rat") {
		var_25_bool = false;
		return 4;
	EMIT "GOTO 0x82c";
	}
	if(var_31_string == "rat_big") {
		var_25_bool = false;
		return 4;
	EMIT "GOTO 0x82c";
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
		func_1661(var_52_float, var_53_object);
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
		func_1661(var_64_float, var_65_object);
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


void func_15(void)
{
	bool var_82_bool;
	func_1762(var_82_bool);
	if(!var_82_bool) //@nz
		func_2147();
}


void func_1042(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1058(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1654(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1825(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_1074(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1810(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1810(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_584(bool var_154_bool)
{
	var_154_bool = true;
}


void func_586(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_591(bool var_0_bool, object var_77_object)
{
	var_0_bool = var_77_object;
	bool var_84_bool;
	func_642(var_84_bool);
	cvector var_82_cvector;
	@GetDirection(var_82_cvector);
	cvector var_92_cvector;
	func_1654(var_92_cvector, var_0_bool);
	cvector var_83_cvector;
	var_92_cvector = var_83_cvector;
	float var_98_float; cvector var_99_cvector; cvector var_100_cvector;
	var_82_cvector = var_99_cvector;
	var_83_cvector = var_100_cvector;
	func_1852(var_98_float, var_99_cvector, var_100_cvector);
	if(var_98_float < 0) {
		func_1751(var_0_bool);
		var_84_bool = true;
	} else {
		@Sleep(1.5, var_84_bool);
	}
	if(var_84_bool != 0) {
		func_1751(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


// @pe
void func_2128(int var_19_int)
{
	var_19_int = 0;
}


void func_1617(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1104(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_106_object)
{
	float var_116_float; cvector var_118_cvector; float var_119_float;
	cvector var_120_cvector;
	func_1074(var_119_float, var_120_cvector, 1.7453294);
	cvector var_115_cvector;
	var_120_cvector = var_115_cvector;
	if((var_115_cvector | var_115_cvector) < 2500.0) {
		cvector var_152_cvector;
		func_1074(var_119_float, var_152_cvector, 2.6179938);
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
	func_1649(var_162_cvector);
	@SetTimer(120, 0.5);
	
Label_1146:
	bool var_117_bool;
	@MovePoint((var_162_cvector + var_115_cvector), 1, var_117_bool);
	if(var_117_bool != 0) {
		if(var_106_object == null) {
			goto Label_1176;
		EMIT "GOTO 0x496";

		Label_1176:
			for(;;) {
				return 10;
		}
			cvector var_170_cvector;
			func_1074(var_119_float, var_170_cvector, 2.6179938);
			var_170_cvector = var_118_cvector;
			if((var_118_cvector | var_118_cvector) >= 2500.0) {
				cvector var_174_cvector;
				func_1649(var_174_cvector);
				var_1_bool = var_174_cvector + var_118_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1146; //@nz

	}
}


// @pe
void func_2131(void)
{
}


// @pe
void func_2133(int var_203_int)
{
	var_203_int = 0;
}


// @pe
void func_2136(void)
{
}


// @pe
void func_2138(int var_19_int)
{
	var_19_int = 2;
}


// @pe
void func_2141(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_2314(var_28_object);
}


void func_1633(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1654(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1825(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_2147(void)
{
}


void func_2148(bool var_22_bool, object var_23_object)
{
	bool var_25_bool;
	@CanSee(var_25_bool, var_23_object);
	var_25_bool = var_22_bool;
}


// @pe
void func_2153(object var_34_object)
{
	object var_35_object;
	var_34_object = var_35_object;
	TaskCall(5);
	func_1298(var_36_object, var_37_cvector, var_38_bool, var_35_object);
	TaskReturn();
}


void func_1649(cvector var_88_cvector)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
}


void func_2161(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	@CanSee(var_34_bool, var_32_object);
	var_31_bool = true;
	if(var_34_bool != 1) {
		float var_36_float; object var_37_object;
		var_32_object = var_37_object;
		func_1661(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 4000000;
		if(var_45_bool != 1)
			var_31_bool = false;
	}
}


void func_1654(cvector var_73_cvector, object var_74_object)
{
	cvector var_77_cvector;
	@GetPosition(var_77_cvector);
	cvector var_78_cvector;
	var_74_object->GetPosition(var_78_cvector);
	var_73_cvector = var_78_cvector - var_77_cvector;
}


void func_1661(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_2176(object var_133_object)
{
	object var_134_object;
	var_133_object = var_134_object;
	TaskCall(6);
	func_1492(var_135_object, var_136_cvector, var_137_bool, var_134_object);
	TaskReturn();
}


void func_642(bool var_0_bool)
{
	func_1767(var_0_bool);
}


void func_1669(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	@IsPlayerActor(var_27_object, var_29_bool);
	var_29_bool = var_26_bool;
}


// @pe
void func_2184(bool var_48_bool, object var_49_object)
{
	object var_51_object;
	var_49_object = var_51_object;
	bool var_50_bool;
	func_2161(var_50_bool, var_51_object);
	var_50_bool = var_48_bool;
}


void func_1674(bool var_45_bool, object var_46_object, string var_47_string)
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


// @pe
void func_2191(object var_201_object)
{
	object var_202_object;
	var_201_object = var_202_object;
	func_2176(var_202_object);
}


void func_2197(int var_34_int)
{
	int var_36_int;
	@GetVariable("branch", var_36_int);
	var_36_int = var_34_int;
}


void func_1686(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


void func_1691(bool var_27_bool, object var_28_object)
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
		func_1686(var_38_bool, var_39_object);
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


void func_2203(float var_62_float)
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


// @pe
void func_2217(object var_33_object)
{
	int var_34_int;
	func_2197(var_34_int);
	if(var_34_int == 1)
		@WorkWithCorpse(var_33_object);
	else
		@Barter(var_33_object);
	
}


void func_2230(bool var_18_bool)
{
	int var_20_int;
	@ClearSubContainer(0);
	if(var_18_bool != 0) {
		func_1789("rifle_ammo", 1, 2, 2);
		func_1789("revolver_ammo", 1, 2, 2);
		func_1789("samopal_ammo", 2, 2, 2);
	} else {
		func_1778("lockpick", 1, 4);
		func_1789("alpha_pills", 1, 2, 3);
		func_1778("meradorm", 1, 2);
		func_1778("powder", 1, 15);
		int var_66_int;
		func_1869(var_66_int);
		var_66_int = var_20_int;
		if(var_20_int >= 4)
			func_1778("beta_pills", 1, 2);
		if(!(var_20_int >= 6)) goto Label_2305;
		func_1778("gamma_pills", 1, 7);
	}
Label_2305:
	
}


void func_1727(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1691(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1674(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


void func_197(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_333(var_15_cvector, var_16_bool);
}


void func_205(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_340(var_20_bool, var_21_int);
}


void func_1229(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1751(object var_92_object)
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


void func_1245(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1654(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1825(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_222(bool var_2_bool, object var_17_object)
{
	bool var_22_bool; object var_23_object;
	func_1727(var_22_bool, var_23_object);
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
	func_2009(var_60_object);
	int var_21_int;
	var_59_int = var_21_int;
	if(var_21_int > 0) {
		if(var_21_int > 1)
			func_205(var_21_int);
		object var_76_object;
		var_17_object = var_76_object;
		func_2018(var_76_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1762(bool var_82_bool)
{
	bool var_84_bool;
	@IsLoaded(var_84_bool);
	var_84_bool = var_82_bool;
}


void func_1767(object var_85_object)
{
	float var_88_float;
	var_85_object->GetEyesHeight(var_88_float);
	cvector var_89_cvector = [0.0, 0.0, 0.0];
	var_90_float = GetByIndex(var_89_cvector, 1);
	var_88_float = var_90_float;
	SetByIndex(var_89_cvector, 1) = var_90_float;
	@LookAsync(var_85_object, "head", var_89_cvector);
}


void func_1778(string var_47_string, int var_48_int, int var_49_int)
{
	bool var_51_bool;
	int var_53_int;
	var_48_int = var_53_int;
	int var_54_int;
	var_49_int = var_54_int;
	bool var_52_bool;
	func_1820(var_52_bool, var_53_int, var_54_int);
	if(var_52_bool != 0)
		@AddItem(var_51_bool, var_47_string, 0);
}


void func_1268(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1810(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1810(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_1789(string var_23_string, int var_24_int, int var_25_int, int var_26_int)
{
	int var_29_int; bool var_30_bool;
	int var_32_int;
	var_24_int = var_32_int;
	int var_33_int;
	var_25_int = var_33_int;
	bool var_31_bool;
	func_1820(var_31_bool, var_32_int, var_33_int);
	if(var_31_bool != 0) {
		@irand(var_29_int, var_26_int);
		@AddItem(var_30_bool, var_23_string, 0, (var_29_int + 1));
	}
}


void func_2306(void)
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2230(false);
}


void func_262(bool var_0_bool, bool var_1_bool)
{
	float var_92_float; cvector var_93_cvector; cvector var_94_cvector; bool var_95_bool; object var_96_object; bool var_97_bool;
	@rand(var_92_float, 0.5);
	@Sleep(var_92_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_274:
				@GetPosition(var_94_cvector);
				float var_101_float;
				func_321(var_101_float);
				@GetRandomPFPointInCircle(var_93_cvector, var_94_cvector, var_101_float, var_95_bool);
				if(var_95_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_274;
			}
				var_1_bool = false;
		}
		}
		goto Label_290;

	Label_290:
		object var_105_object; cvector var_106_cvector;
		var_93_cvector = var_106_cvector;
		func_349(var_105_object, var_106_cvector);
		var_105_object = var_96_object;
		if(var_96_object != null) {
			@RotatePath(var_96_object, var_97_bool);
			if(var_97_bool != 0) {
				bool var_111_bool;
				func_347(var_111_bool);
				@FollowPath(var_96_object, var_111_bool, var_97_bool);
				var_96_object = null;
				if(var_97_bool != 0) {
					TaskCall(1);
					func_505();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_96_object = null;
	}
	
}


void func_776(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_2314(object var_28_object)
{
	bool var_30_bool;
	var_31_bool = GlobalVars[0];
	if(var_31_bool != 0) {
		@IsOverrideActive(var_30_bool);
		if(!var_30_bool) { //@nz
			object var_33_object;
			var_28_object = var_33_object;
			func_2217(var_33_object);
		}
	EMIT "GOTO 0x917";
	}
}


void func_1804(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_1810(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_49_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_49_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_49_float;
}


void func_1298(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_35_object)
{
	float var_45_float; cvector var_47_cvector; float var_48_float;
	cvector var_49_cvector;
	func_1268(var_48_float, var_49_cvector, 1.7453294);
	cvector var_44_cvector;
	var_49_cvector = var_44_cvector;
	if((var_44_cvector | var_44_cvector) < 2500.0) {
		cvector var_81_cvector;
		func_1268(var_48_float, var_81_cvector, 2.6179938);
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
	func_1649(var_91_cvector);
	@SetTimer(120, 0.5);
	
Label_1340:
	bool var_46_bool;
	@MovePoint((var_91_cvector + var_44_cvector), 1, var_46_bool);
	if(var_46_bool != 0) {
		if(var_35_object == null) {
			goto Label_1370;
		EMIT "GOTO 0x558";

		Label_1370:
			for(;;) {
				return 10;
		}
			cvector var_99_cvector;
			func_1268(var_48_float, var_99_cvector, 2.6179938);
			var_99_cvector = var_47_cvector;
			if((var_47_cvector | var_47_cvector) >= 2500.0) {
				cvector var_103_cvector;
				func_1649(var_103_cvector);
				var_1_bool = var_103_cvector + var_47_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1340; //@nz

	}
}


void func_2328(bool var_61_bool)
{
	float var_62_float;
	func_2203(var_62_float);
	var_61_bool = var_62_float > 0.2;
}


void func_1820(bool var_31_bool, int var_32_int, int var_33_int)
{
	int var_35_int;
	@irand(var_35_int, var_33_int);
	var_31_bool = var_35_int < var_32_int;
}


// @pe
void func_2334(bool var_21_bool, object var_22_object, object var_23_object)
{
	object var_26_object;
	var_22_object = var_26_object;
	object var_27_object;
	var_23_object = var_27_object;
	bool var_25_bool;
	func_2062(var_25_bool, var_26_object, var_27_object, 700.0);
	var_25_bool = var_21_bool;
}


// @pe
void func_1825(float var_79_float, cvector var_80_cvector, cvector var_81_cvector)
{
	var_86_float = sqrt((var_80_cvector | var_80_cvector) * (var_81_cvector | var_81_cvector));
	var_79_float = (var_80_cvector | var_81_cvector) / var_86_float;
}


// @pe
void func_1833(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_69_float = (var_72_float * var_73_float) + (var_75_float * var_76_float);
}


// @pe
void func_1842(float var_78_float, cvector var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_78_float = sqrt((var_80_float * var_81_float) + (var_83_float * var_84_float));
}


// @pe
void func_1852(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	cvector var_70_cvector;
	var_67_cvector = var_70_cvector;
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	float var_69_float;
	func_1833(var_69_float, var_70_cvector, var_71_cvector);
	float var_78_float; cvector var_79_cvector;
	var_67_cvector = var_79_cvector;
	func_1842(var_78_float, var_79_cvector);
	float var_87_float; cvector var_88_cvector;
	var_68_cvector = var_88_cvector;
	func_1842(var_87_float, var_88_cvector);
	var_66_float = var_69_float / (var_78_float * var_87_float);
}


void func_321(float var_101_float)
{
	float var_103_float;
	@GetCameraFarDistance(var_103_float);
	var_103_float = var_101_float;
}


void func_333(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1869(int var_66_int)
{
	float var_68_float;
	@GetGameTime(var_68_float);
	var_66_int = 1 + (var_68_float / 24);
}


void func_340(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_852(object var_71_object)
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
	func_917(var_73_cvector, var_74_bool, var_81_object, var_81_object);
}


void func_347(bool var_111_bool)
{
	var_111_bool = false;
}


void func_349(object var_105_object, cvector var_106_cvector)
{
	object var_108_object;
	@FindShiftedPathTo(var_108_object, var_106_cvector);
	var_108_object = var_105_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1886(bool var_20_bool, object var_21_object, string var_22_string)
{
	if(var_22_string == "unholster") {
		bool var_25_bool; object var_26_object;
		var_21_object = var_26_object;
		func_2148(var_25_bool, var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x77c";
	}
	if(var_22_string == "player_shot") {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_2161(var_31_bool, var_32_object);
		var_31_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x77c";
	}
	if(var_22_string == "battle") {
		bool var_48_bool; object var_49_object;
		var_21_object = var_49_object;
		func_2184(var_48_bool, var_49_object);
		var_48_bool = var_20_bool;
		return 0;
	}
	var_20_bool = false;
}


void func_887(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1810(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1810(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
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
void func_1918(object var_54_object, string var_55_string)
{
	if(var_55_string == "unholster") {
		object var_58_object;
		var_54_object = var_58_object;
		func_2153(var_58_object);
	} else if(var_55_string == "player_shot") {
			object var_133_object;
			var_54_object = var_133_object;
			func_2176(var_133_object);
	}
Label_1942:
	for(;;) {

	}
	
	if(!(var_55_string == "battle")) goto Label_1942;
	object var_201_object;
	var_54_object = var_201_object;
	func_2191(var_201_object);
}


void func_1423(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_917(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_81_object)
{
	float var_88_float; cvector var_90_cvector; float var_91_float;
	cvector var_92_cvector;
	func_887(var_91_float, var_92_cvector, 1.7453294);
	cvector var_87_cvector;
	var_92_cvector = var_87_cvector;
	if((var_87_cvector | var_87_cvector) < 2500.0) {
		cvector var_124_cvector;
		func_887(var_91_float, var_124_cvector, 2.6179938);
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
	func_1649(var_134_cvector);
	@SetTimer(120, 0.5);
	
Label_959:
	bool var_89_bool;
	@MovePoint((var_134_cvector + var_87_cvector), 1, var_89_bool);
	if(var_89_bool != 0) {
		if(var_81_object == null) {
			goto Label_989;
		EMIT "GOTO 0x3db";

		Label_989:
			for(;;) {
				return 10;
		}
			cvector var_142_cvector;
			func_887(var_91_float, var_142_cvector, 2.6179938);
			var_142_cvector = var_90_cvector;
			if((var_90_cvector | var_90_cvector) >= 2500.0) {
				cvector var_146_cvector;
				func_1649(var_146_cvector);
				var_1_bool = var_146_cvector + var_90_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_959; //@nz

	}
}


void func_1943(bool var_17_bool, object var_18_object)
{
	bool var_20_bool;
	bool var_21_bool = false;
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_2148(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		bool var_26_bool; object var_27_object;
		func_1669(var_26_bool, var_27_object);
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


void func_1439(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1654(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_1825(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


// @pe
void func_1966(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	func_2153(var_34_object);
}


// @pe
void func_1972(object var_19_object)
{
	bool var_20_bool; object var_21_object;
	func_1669(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		object var_24_object;
		func_1804(var_24_object);
		@ReportReputationChange(var_21_object, var_24_object, -0.03);
	}
}


void func_1462(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_1810(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_1810(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_1985(string var_135_string, int var_136_int)
{
	string var_138_string = "idle";
	if(var_136_int != 0)
		var_138_string += var_136_int;
	var_138_string = var_135_string;
}


void func_1992(int var_129_int)
{
	int var_132_int; bool var_133_bool;
	var_132_int = 0;
	
	for(;;) {
		string var_135_string; int var_136_int;
		var_132_int = var_136_int;
		func_1985(var_135_string, var_136_int);
		@HasAnimation(var_133_bool, "all", var_135_string);
		if(!var_133_bool) //@nz
			break;
		var_132_int += 1;
	}
	var_132_int = var_129_int;
}


void func_1492(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_134_object)
{
	float var_144_float; cvector var_146_cvector; float var_147_float;
	cvector var_148_cvector;
	func_1462(var_147_float, var_148_cvector, 1.7453294);
	cvector var_143_cvector;
	var_148_cvector = var_143_cvector;
	if((var_143_cvector | var_143_cvector) < 2500.0) {
		cvector var_175_cvector;
		func_1462(var_147_float, var_175_cvector, 2.6179938);
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
	func_1649(var_185_cvector);
	@SetTimer(120, 0.5);
	
Label_1534:
	bool var_145_bool;
	@MovePoint((var_185_cvector + var_143_cvector), 1, var_145_bool);
	if(var_145_bool != 0) {
		if(var_134_object == null) {
			goto Label_1564;
		EMIT "GOTO 0x61a";

		Label_1564:
			for(;;) {
				return 10;
		}
			cvector var_191_cvector;
			func_1462(var_147_float, var_191_cvector, 2.6179938);
			var_191_cvector = var_146_cvector;
			if((var_146_cvector | var_146_cvector) >= 2500.0) {
				cvector var_195_cvector;
				func_1649(var_195_cvector);
				var_1_bool = var_195_cvector + var_146_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1534; //@nz

	}
}


// @pe
void func_2009(int var_59_int)
{
	bool var_61_bool;
	func_2328(var_61_bool);
	if(var_61_bool != 0)
		var_59_int = 2;
	else
		var_59_int = 0;
	
}


// @pe
void func_2018(object var_76_object)
{
	object var_77_object;
	var_76_object = var_77_object;
	TaskCall(2);
	func_591(var_78_object, var_77_object);
	TaskReturn();
}


// @pe
void func_2026(int var_28_int, object var_29_object)
{
	object var_31_object;
	var_29_object = var_31_object;
	bool var_30_bool;
	func_1727(var_30_bool, var_31_object);
	if(var_30_bool != 0)
		var_28_int = 2;
	else
		var_28_int = 0;
	
}


// @pe
void func_2036(object var_70_object)
{
	object var_71_object;
	var_70_object = var_71_object;
	TaskCall(3);
	func_852(var_71_object);
	TaskReturn();
}


void func_505(void)
{
	int var_122_int; int var_123_int; bool var_124_bool; float var_125_float; bool var_126_bool;
	@WaitForAnimEnd();
	bool var_127_bool;
	func_1762(var_127_bool);
	if(!var_127_bool) //@nz
		return 14;
	int var_129_int;
	func_1992(var_129_int);
	int var_120_int;
	var_129_int = var_120_int;
	int var_121_int = 0;
	
	for(;;) {
		bool var_142_bool = false;
		if(var_121_int < 5) {
			bool var_145_bool;
			func_1762(var_145_bool);
			if(var_145_bool != 0)
				var_142_bool = true;
		}
		if(var_142_bool != 0) {
			@irand(var_122_int, 3);
			if(var_122_int == 0) {
				if(var_120_int == 0) goto Label_552;
				@irand(var_123_int, var_120_int);
				string var_151_string; int var_152_int;
				var_123_int = var_152_int;
				func_1985(var_151_string, var_152_int);
				@PlayAnimation("all", var_151_string);
				@WaitForAnimEnd(var_124_bool);
				if(!var_124_bool) { //@nz
				} else {
			} else {
			if(var_122_int == 1) {
				@rand(var_125_float, 4);
				@Sleep((var_125_float + 1), var_126_bool);
				if(!var_126_bool) { //@nz
					goto Label_581;
				}
			} else if(var_121_int != 0) {
				goto Label_581;
			}
			}
					bool var_154_bool;
					func_584(var_154_bool);
					var_155_bool = !var_154_bool; //@nz
					if(var_155_bool == 0) goto Label_576;
			}
		}
	Label_581:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_576:
		@ResetAAS();
		var_121_int += 1;
	}
	
}


// @pe
void func_2044(int var_68_int, object var_69_object)
{
	object var_72_object;
	var_69_object = var_72_object;
	bool var_71_bool;
	func_1727(var_71_bool, var_72_object);
	if(var_71_bool != 0)
		var_68_int = 2;
	else
		var_68_int = 0;
	
}


