// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_19_object;
		var_15_bool = var_19_object;
		func_2447(var_19_object);
		int var_17_int;
		int var_18_int = var_17_int;
		if(var_17_int > 0) {
			object var_22_object;
			var_15_bool = var_22_object;
			func_2450(var_22_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_2456();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		int var_17_int; int var_18_int;
		var_0_bool = false;
		@SensePlayerOnly(true);
		func_2545();
		func_190();
	
		for(;;) {
			@irand(var_17_int, 2);
			if(var_17_int == 0) {
				var_0_bool = true;
				func_2566();
				var_0_bool = false;
				@ResetAAS();
			} else {
			@irand(var_18_int, 4);
			@Sleep(var_18_int + 1);
			}
		}
	
	}
	EMIT "Return(); Pop(4)";

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_19_object;
		var_15_bool = var_19_object;
		func_2447(var_19_object);
		int var_17_int;
		int var_18_int = var_17_int;
		if(var_17_int > 0) {
			if(var_17_int > 1)
				func_392(var_17_int);
			object var_26_object;
			var_15_bool = var_26_object;
			func_2450(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_18_object;
		var_15_bool = var_18_object;
		func_2286(var_18_object);
		int var_27_int; object var_28_object;
		var_15_bool = var_28_object;
		func_2345(var_27_int, var_28_object);
		int var_17_int;
		var_27_int = var_17_int;
		if(var_17_int > 0) {
			if(var_17_int > 1)
				func_392(var_17_int);
			object var_69_object;
			var_15_bool = var_69_object;
			func_2355(var_69_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_15_object = var_21_object;
		object var_22_object;
		var_16_cvector = var_22_object;
		bool var_23_bool;
		var_17_bool = var_23_bool;
		func_2598(var_21_object, var_22_object, var_23_bool);
		bool var_20_bool;
		if(var_20_bool != 0) {
			int var_69_int; object var_70_object; bool var_71_bool;
			var_15_object = var_70_object;
			var_17_bool = var_71_bool;
			func_2363(var_70_object, var_71_bool);
			var_69_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_392(var_19_int);
				object var_106_object;
				var_15_object = var_106_object;
				func_2373(var_106_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_19_object;
		var_15_bool = var_19_object;
		int var_18_int;
		func_2457(var_18_int, var_19_object);
		int var_17_int;
		var_18_int = var_17_int;
		if(var_17_int > 0) {
			if(var_17_int > 1)
				func_392(var_17_int);
			object var_66_object;
			var_15_bool = var_66_object;
			func_2473(var_66_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		int var_18_int;
		object var_20_object;
		var_15_cvector = var_20_object;
		string var_21_string;
		var_16_bool = var_21_string;
		bool var_19_bool;
		func_2200(var_19_bool, var_20_object, var_21_string);
		if(var_19_bool != 0) {
			func_392(var_18_int);
			object var_53_object; string var_54_string;
			var_15_cvector = var_53_object;
			var_16_bool = var_54_string;
			func_2232(var_53_object, var_54_string);
		} else {
			int var_202_int; string var_203_string; object var_204_object;
			var_16_bool = var_203_string;
			var_15_cvector = var_204_object;
			func_2479(var_204_object);
			var_202_int = var_18_int;
			if(!(var_18_int > 0)) goto Label_327;
			if(var_18_int > 1)
				func_392(var_18_int);
			string var_209_string; object var_210_object;
			var_16_bool = var_209_string;
			var_15_cvector = var_210_object;
			func_2482();
		}
	Label_327:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, string var_2_string, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		bool var_16_bool; string var_17_string;
		func_2299(var_16_bool, var_17_string);
		if(var_16_bool != 0) {
			func_392(var_17_string);
			string var_27_string;
			var_15_bool = var_27_string;
			func_2315(var_27_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		if(var_0_bool != 0)
			return 0;
		bool var_17_bool; object var_18_object;
		func_2257(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_392(var_18_object);
			object var_33_object;
			var_15_bool = var_33_object;
			func_2280(var_33_object);
		} else {
			object var_107_object;
			func_414(var_107_object, var_107_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		if(var_0_bool != 0)
			return 0;
		object var_17_object;
		func_414(var_17_object, var_17_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		if(var_15_bool != 110) {
		}
		var_1_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_392(var_14_bool);
		func_2456();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_392(var_15_bool);
		object var_18_object;
		var_15_bool = var_18_object;
		func_2176();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_19_object;
		var_15_bool = var_19_object;
		func_2447(var_19_object);
		int var_17_int;
		int var_18_int = var_17_int;
		if(var_17_int > 0) {
			if(var_17_int > 1)
				func_646();
			object var_26_object;
			var_15_bool = var_26_object;
			func_2450(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_18_object;
		var_15_bool = var_18_object;
		func_2286(var_18_object);
		int var_27_int; object var_28_object;
		var_15_bool = var_28_object;
		func_2345(var_27_int, var_28_object);
		int var_17_int;
		var_27_int = var_17_int;
		if(var_17_int > 0) {
			if(var_17_int > 1)
				func_646();
			object var_69_object;
			var_15_bool = var_69_object;
			func_2355(var_69_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_15_object = var_21_object;
		object var_22_object;
		var_16_cvector = var_22_object;
		bool var_23_bool;
		var_17_bool = var_23_bool;
		func_2598(var_21_object, var_22_object, var_23_bool);
		bool var_20_bool;
		if(var_20_bool != 0) {
			int var_69_int; object var_70_object; bool var_71_bool;
			var_15_object = var_70_object;
			var_17_bool = var_71_bool;
			func_2363(var_70_object, var_71_bool);
			var_69_int = var_19_int;
			if(var_19_int > 0) {
				if(var_19_int > 1)
					func_646();
				object var_106_object;
				var_15_object = var_106_object;
				func_2373(var_106_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_19_object;
		var_15_bool = var_19_object;
		int var_18_int;
		func_2457(var_18_int, var_19_object);
		int var_17_int;
		var_18_int = var_17_int;
		if(var_17_int > 0) {
			if(var_17_int > 1)
				func_646();
			object var_66_object;
			var_15_bool = var_66_object;
			func_2473(var_66_object);
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		int var_18_int;
		object var_20_object;
		var_15_cvector = var_20_object;
		string var_21_string;
		var_16_bool = var_21_string;
		bool var_19_bool;
		func_2200(var_19_bool, var_20_object, var_21_string);
		if(var_19_bool != 0) {
			func_646();
			object var_53_object; string var_54_string;
			var_15_cvector = var_53_object;
			var_16_bool = var_54_string;
			func_2232(var_53_object, var_54_string);
		} else {
			int var_202_int; string var_203_string; object var_204_object;
			var_16_bool = var_203_string;
			var_15_cvector = var_204_object;
			func_2479(var_204_object);
			var_202_int = var_18_int;
			if(!(var_18_int > 0)) goto Label_631;
			if(var_18_int > 1)
				func_646();
			string var_209_string; object var_210_object;
			var_16_bool = var_209_string;
			var_15_cvector = var_210_object;
			func_2482();
		}
	Label_631:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		string var_17_string;
		var_15_bool = var_17_string;
		bool var_16_bool;
		func_2299(var_16_bool, var_17_string);
		if(var_16_bool != 0) {
			func_646();
			string var_27_string;
			var_15_bool = var_27_string;
			func_2315(var_27_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_646();
		object var_18_object;
		var_15_bool = var_18_object;
		func_2176();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		if(var_15_bool != 111)
			return 4;
		bool var_22_bool;
		func_1597(var_22_bool, var_0_bool);
		if(!var_22_bool) { //@nz
			func_646();
			return 4;
		}
		cvector var_18_cvector;
		@GetDirection(var_18_cvector);
		cvector var_59_cvector;
		func_1524(var_59_cvector, var_0_bool);
		cvector var_19_cvector;
		var_59_cvector = var_19_cvector;
		float var_65_float; cvector var_66_cvector; cvector var_67_cvector;
		var_18_cvector = var_66_cvector;
		var_19_cvector = var_67_cvector;
		func_1858(var_65_float, var_66_cvector, var_67_cvector);
		if(var_65_float < 0.49999997)
			func_1747(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_646();
		func_2456();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		object var_17_object;
		var_15_bool = var_17_object;
		bool var_16_bool;
		func_2257(var_16_bool, var_17_object);
		if(var_16_bool != 0) {
			func_646();
			object var_32_object;
			var_15_bool = var_32_object;
			func_2280(var_32_object);
		}
	}

}


task task_3
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_912(var_14_bool);
		func_2456();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, int var_6_int, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		cvector var_20_cvector; float var_21_float; cvector var_22_cvector; float var_23_float;
		if(var_15_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_20_cvector);
			@FindDirLength(var_21_float, var_20_cvector, 7000.0);
			cvector var_29_cvector;
			func_757(var_23_float, var_29_cvector, 1.7453294);
			var_29_cvector = var_22_cvector;
			var_23_float = var_22_cvector | var_22_cvector;
			bool var_59_bool = false;
			if(var_23_float >= 2500.0) {
				bool var_62_bool;
				var_66_bool = var_23_float >= ((var_21_float * var_21_float) * 2.25);
				if(var_66_bool != 1) {
					bool var_67_bool;
					func_928(true, var_67_bool);
					if(var_67_bool != 1)
						var_62_bool = false;
				}
				if(var_62_bool != 0)
					var_59_bool = true;
			}
			if(var_59_bool == 0) goto Label_911;
			@Stop();
			cvector var_87_cvector;
			func_1519(var_87_cvector);
			var_1_bool = var_87_cvector + var_22_cvector;
		}
	Label_911:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_912(var_15_bool);
		object var_17_object;
		var_15_bool = var_17_object;
		func_2176();
	}

}


task task_4
{
	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, int var_9_int, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		cvector var_20_cvector; float var_21_float; cvector var_22_cvector; float var_23_float;
		if(var_15_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_20_cvector);
			@FindDirLength(var_21_float, var_20_cvector, 7000.0);
			cvector var_29_cvector;
			func_944(var_23_float, var_29_cvector, 1.7453294);
			var_29_cvector = var_22_cvector;
			var_23_float = var_22_cvector | var_22_cvector;
			bool var_59_bool = false;
			if(var_23_float >= 2500.0) {
				bool var_62_bool;
				var_66_bool = var_23_float >= ((var_21_float * var_21_float) * 2.25);
				if(var_66_bool != 1) {
					bool var_67_bool;
					func_1115(true, var_67_bool);
					if(var_67_bool != 1)
						var_62_bool = false;
				}
				if(var_62_bool != 0)
					var_59_bool = true;
			}
			if(var_59_bool == 0) goto Label_1098;
			@Stop();
			cvector var_87_cvector;
			func_1519(var_87_cvector);
			var_1_bool = var_87_cvector + var_22_cvector;
		}
	Label_1098:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1099(var_15_bool);
		object var_17_object;
		var_15_bool = var_17_object;
		func_2176();
	}

}


task task_5
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_1293(var_14_bool);
		func_2456();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, int var_12_int, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		cvector var_20_cvector; float var_21_float; cvector var_22_cvector; float var_23_float;
		if(var_15_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_20_cvector);
			@FindDirLength(var_21_float, var_20_cvector, 7000.0);
			cvector var_29_cvector;
			func_1138(var_23_float, var_29_cvector, 1.7453294);
			var_29_cvector = var_22_cvector;
			var_23_float = var_22_cvector | var_22_cvector;
			bool var_59_bool = false;
			if(var_23_float >= 2500.0) {
				bool var_62_bool;
				var_66_bool = var_23_float >= ((var_21_float * var_21_float) * 2.25);
				if(var_66_bool != 1) {
					bool var_67_bool;
					func_1309(true, var_67_bool);
					if(var_67_bool != 1)
						var_62_bool = false;
				}
				if(var_62_bool != 0)
					var_59_bool = true;
			}
			if(var_59_bool == 0) goto Label_1292;
			@Stop();
			cvector var_87_cvector;
			func_1519(var_87_cvector);
			var_1_bool = var_87_cvector + var_22_cvector;
		}
	Label_1292:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1293(var_15_bool);
		object var_17_object;
		var_15_bool = var_17_object;
		func_2176();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_1487(var_14_bool);
		func_2456();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, int var_15_int)
	{
		cvector var_20_cvector; float var_21_float; cvector var_22_cvector; float var_23_float;
		if(var_15_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_object = true;
		} else {
			@GetDirection(var_20_cvector);
			@FindDirLength(var_21_float, var_20_cvector, 7000.0);
			cvector var_29_cvector;
			func_1332(var_23_float, var_29_cvector, 1.7453294);
			var_29_cvector = var_22_cvector;
			var_23_float = var_22_cvector | var_22_cvector;
			bool var_59_bool = false;
			if(var_23_float >= 2500.0) {
				bool var_62_bool;
				var_66_bool = var_23_float >= ((var_21_float * var_21_float) * 2.25);
				if(var_66_bool != 1) {
					bool var_67_bool;
					func_1503(true, var_67_bool);
					if(var_67_bool != 1)
						var_62_bool = false;
				}
				if(var_62_bool != 0)
					var_59_bool = true;
			}
			if(var_59_bool == 0) goto Label_1486;
			@Stop();
			cvector var_87_cvector;
			func_1519(var_87_cvector);
			var_1_bool = var_87_cvector + var_22_cvector;
		}
	Label_1486:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object)
	{
		func_1487(var_15_object);
		object var_17_object;
		var_15_object = var_17_object;
		func_2176();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, string var_16_string)
{
	float var_18_float;
	if(var_16_string == "health") {
		@GetProperty("health", var_18_float);
		if(var_18_float <= 0)
			@SignalDeath(var_15_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_2155(var_16_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float)
{
	object var_19_object;
	var_15_object = var_19_object;
	int var_20_int;
	var_16_int = var_20_int;
	float var_21_float;
	var_17_float = var_21_float;
	func_1665(var_19_object, var_20_int, var_21_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, bool var_5_bool, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, int var_16_int, float var_17_float, float var_18_float, cvector var_19_cvector, cvector var_20_cvector)
{
	object var_21_object;
	var_15_object = var_21_object;
	int var_22_int;
	var_16_int = var_22_int;
	float var_23_float;
	var_17_float = var_23_float;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	func_1733(var_23_float, var_24_cvector, var_25_cvector);
}


// @pe
void func_0(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_33(var_18_object);
	object var_98_object;
	var_17_object = var_98_object;
	func_2614(var_98_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1539(bool var_99_bool, object var_100_object)
{
	bool var_102_bool;
	@IsPlayerActor(var_100_object, var_102_bool);
	var_102_bool = var_99_bool;
}


void func_2566(void)
{
	int var_145_int; bool var_146_bool;
	var_145_int = 0;
	
	for(;;) {
		string var_149_string; int var_150_int;
		var_145_int = var_150_int;
		func_2538(var_149_string, var_150_int);
		@HasAnimation(var_146_bool, "all", var_149_string);
		if(!var_146_bool) //@nz
			break;
		var_145_int += 1;
	}
	int var_147_int;
	@irand(var_147_int, var_145_int);
	string var_156_string; int var_157_int;
	var_147_int = var_157_int;
	func_2538(var_156_string, var_157_int);
	@PlayAnimation("all", var_156_string);
	@WaitForAnimEnd();
}


void func_1544(bool var_44_bool, object var_45_object, string var_46_string)
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


void func_1556(bool var_37_bool, object var_38_object)
{
	bool var_40_bool;
	var_38_object->IsDead(var_40_bool);
	var_40_bool = var_37_bool;
}


void func_1561(bool var_26_bool, object var_27_object)
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
		func_1556(var_37_bool, var_38_object);
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


void func_33(object var_18_object)
{
	cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; string var_33_string; object var_34_object; bool var_35_bool; bool var_36_bool; float var_37_float; cvector var_38_cvector;
	if(var_18_object == null) {
		func_124("fdie");
	} else {
		var_18_object->GetPosition(var_29_cvector);
		@GetPosition(var_30_cvector);
		@GetDirection(var_31_cvector);
		var_32_cvector = var_30_cvector - var_29_cvector;
		var_72_float = GetByIndex(var_32_cvector, 0);
		var_73_float = GetByIndex(var_31_cvector, 0);
		var_75_float = GetByIndex(var_32_cvector, 2);
		var_76_float = GetByIndex(var_31_cvector, 2);
		if(((var_72_float * var_73_float) + (var_75_float * var_76_float)) >= 0)
			var_33_string = "fdie";
		else
			var_33_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_18_object = var_34_object;
		var_83_bool = IsFuncExist(var_18_object, "GetScriptProperty", 2);
		if(var_83_bool != 0) {
			var_18_object->HasScriptProperty(var_35_bool, "Owner");
			if(var_35_bool != 0) {
				var_18_object->GetScriptProperty(var_34_object, "Owner");
				if(var_34_object == null)
					var_18_object = var_34_object;
			}
		}
		var_90_bool = IsFuncExist(var_34_object, "@GetEyesHeight", 1);
		if(var_90_bool != 0) {
			var_34_object->GetEyesHeight(var_37_float);
			var_38_cvector = [0.0, 0.0, 0.0];
			var_91_float = GetByIndex(var_38_cvector, 1);
			var_37_float = var_91_float;
			SetByIndex(var_38_cvector, 1) = var_91_float;
			@LookAsync(var_18_object, "head", var_38_cvector);
			var_36_bool = true;
		} else {
			var_36_bool = false;

		}
		string var_93_string;
		var_33_string = var_93_string;
		func_1774(var_93_string);
		@PlayAnimation("all", var_33_string);
		@WaitForAnimEnd();
		if(var_36_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_33_string);
		@RemoveEnvelope();
		var_34_object = null;
	}
	
}


void func_2593(void)
{
	@StopAnimation();
}


void func_2596(bool var_26_bool)
{
	var_26_bool = true;
}


// @pe
void func_2598(bool var_20_bool, object var_21_object, object var_22_object)
{
	object var_25_object;
	var_21_object = var_25_object;
	object var_26_object;
	var_22_object = var_26_object;
	bool var_24_bool;
	func_2381(var_24_bool, var_25_object, var_26_object, 500.0);
	if(var_24_bool != 0) {
		@SetProperty("ToDie", true);
		var_20_bool = true;
		return 0;
	}
	var_20_bool = false;
}


// @pe
void func_2614(object var_98_object)
{
	bool var_99_bool; object var_100_object;
	func_1539(var_99_bool, var_100_object);
	if(var_99_bool != 0) {
		object var_103_object;
		func_1815(var_103_object);
		@ReportReputationChange(var_100_object, var_103_object, -0.1, true);
		func_1975(false);
	}
	func_1951();
	var_242_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1597(bool var_22_bool, object var_23_object)
{
	object var_27_object;
	var_23_object = var_27_object;
	bool var_26_bool;
	func_1561(var_26_bool, var_27_object);
	if(!var_26_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_44_bool; object var_45_object;
	func_1544(var_44_bool, var_45_object, "noaccess");
	if(!var_44_bool) { //@nz
		var_22_bool = true;
		return 2;
	}
	int var_25_int;
	var_45_object->GetProperty("noaccess", var_25_int);
	var_22_bool = var_25_int == 0;
}


void func_1099(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_1621(object var_32_object)
{
	string var_46_string;
	if(var_32_object == null)
		return 14;
	bool var_40_bool;
	@IsDead(var_40_bool);
	if(var_40_bool != 0)
		return 14;
	int var_41_int;
	@GetSecondaryAnimationType(var_41_int);
	if(var_41_int < 0)
		return 14;
	cvector var_42_cvector;
	var_32_object->GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetDirection(var_44_cvector);
	cvector var_45_cvector = var_43_cvector - var_42_cvector;
	var_51_float = GetByIndex(var_45_cvector, 0);
	var_52_float = GetByIndex(var_44_cvector, 0);
	var_54_float = GetByIndex(var_45_cvector, 2);
	var_55_float = GetByIndex(var_44_cvector, 2);
	if(((var_51_float * var_52_float) + (var_54_float * var_55_float)) >= 0)
		var_46_string = "fhit";
	else
		var_46_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_46_string + "1"), (var_46_string + "2"), -10);
	
}


void func_1115(bool var_0_bool, bool var_67_bool)
{
	cvector var_70_cvector;
	@GetDirection(var_70_cvector);
	cvector var_72_cvector;
	func_1524(var_72_cvector, var_0_bool);
	cvector var_71_cvector;
	var_72_cvector = var_71_cvector;
	float var_78_float; cvector var_79_cvector; cvector var_80_cvector;
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= -0.34202012;
}


void func_2150(int var_48_int, string var_49_string)
{
	int var_51_int;
	@GetInvItemByName(var_51_int, var_49_string);
	var_51_int = var_48_int;
}


// @pe
void func_2155(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	TaskCall(0);
	func_0(var_17_object);
	TaskReturn();
}


void func_1138(bool var_0_bool, cvector var_29_cvector, float var_30_float)
{
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	var_0_bool->GetPosition(var_38_cvector); //@t
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_43_cvector;
	cvector var_45_cvector;
	func_1821(var_45_cvector, (var_37_cvector - var_38_cvector));
	func_1821(var_43_cvector, (var_45_cvector + (var_39_cvector * 0.75)));
	cvector var_40_cvector;
	var_43_cvector = var_40_cvector;
	cvector var_41_cvector;
	float var_42_float;
	@FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, 32, 7000.0);
	if((var_42_float - 100) < 0)
		var_42_float = 0;
	var_29_cvector = var_41_cvector * var_42_float;
}


// @pe
void func_124(string var_40_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_41_string;
	var_40_string = var_41_string;
	func_1774(var_41_string);
	@PlayAnimation("all", var_40_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_40_string);
	@RemoveEnvelope();
}


void func_1665(object var_19_object, int var_20_int, float var_21_float)
{
	cvector var_31_cvector; object var_32_object; int var_33_int; bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	bool var_40_bool = false;
	bool var_41_bool = false;
	if(var_19_object != 0) {
		if(var_20_int != 4)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		if(var_20_int != 5)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		cvector var_47_cvector; cvector var_48_cvector;
		cvector var_49_cvector; object var_50_object;
		var_19_object = var_50_object;
		func_1524(var_49_cvector, var_50_object);
		var_49_cvector = var_48_cvector;
		func_1821(var_47_cvector, var_48_cvector);
		var_47_cvector = var_31_cvector;
		@CreateVectorVector(var_32_object);
		var_33_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_33_int), var_34_bool, var_35_cvector, var_36_cvector);
			if(!var_34_bool) { //@nz
				break;
			Label_1727:
				var_32_object = null;
	}
			object var_109_object;
			var_19_object = var_109_object;
			func_1621(var_109_object);
		}
		if((var_36_cvector | var_31_cvector) >= 0.70710677)
			var_32_object->add(var_35_cvector);
		var_33_int += 1;
	}
	int var_37_int;
	var_32_object->size(var_37_int);
	if(var_37_int == 0) goto Label_1727;
	int var_38_int;
	@irand(var_38_int, var_37_int);
	cvector var_39_cvector;
	var_32_object->get(var_39_cvector, var_38_int);
	object var_64_object; int var_65_int; float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
	var_19_object = var_64_object;
	var_20_int = var_65_int;
	var_21_float = var_66_float;
	var_39_cvector = var_67_cvector;
	var_68_cvector = -var_31_cvector;
	func_1733(var_66_float, var_67_cvector, var_68_cvector);
}


void func_646(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1168(bool var_0_bool, bool var_1_bool, object var_2_object, object var_34_object)
{
	float var_44_float; cvector var_46_cvector; float var_47_float;
	cvector var_48_cvector;
	func_1138(var_47_float, var_48_cvector, 1.7453294);
	cvector var_43_cvector;
	var_48_cvector = var_43_cvector;
	if((var_43_cvector | var_43_cvector) < 2500.0) {
		cvector var_80_cvector;
		func_1138(var_47_float, var_80_cvector, 2.6179938);
		var_80_cvector = var_43_cvector;
		var_44_float = var_43_cvector | var_43_cvector;
		if(var_44_float < 2500.0) {
			var_85_float = sqrt(var_44_float);
			@Trace("Can't retreat, distance: " + var_85_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_88_float = GetByIndex(var_43_cvector, 0);
	var_89_float = GetByIndex(var_43_cvector, 2);
	@Rotate(var_88_float, var_89_float);
	cvector var_90_cvector;
	func_1519(var_90_cvector);
	@SetTimer(120, 0.5);
	
Label_1210:
	bool var_45_bool;
	@MovePoint((var_90_cvector + var_43_cvector), 1, var_45_bool);
	if(var_45_bool != 0) {
		if(var_34_object == null) {
			goto Label_1240;
		EMIT "GOTO 0x4d6";

		Label_1240:
			for(;;) {
				return 10;
		}
			cvector var_98_cvector;
			func_1138(var_47_float, var_98_cvector, 2.6179938);
			var_98_cvector = var_46_cvector;
			if((var_46_cvector | var_46_cvector) >= 2500.0) {
				cvector var_102_cvector;
				func_1519(var_102_cvector);
				var_1_bool = var_102_cvector + var_46_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1210; //@nz

	}
}


// @pe
void func_2200(bool var_19_bool, object var_20_object, string var_21_string)
{
	if(var_21_string == "unholster") {
		bool var_24_bool; object var_25_object;
		var_20_object = var_25_object;
		func_2484(var_24_bool, var_25_object);
		var_24_bool = var_19_bool;
		return 0;
	EMIT "GOTO 0x8b6";
	}
	if(var_21_string == "player_shot") {
		bool var_30_bool; object var_31_object;
		var_20_object = var_31_object;
		func_2497(var_30_bool, var_31_object);
		var_30_bool = var_19_bool;
		return 0;
	EMIT "GOTO 0x8b6";
	}
	if(var_21_string == "battle") {
		bool var_47_bool; object var_48_object;
		var_20_object = var_48_object;
		func_2520(var_47_bool, var_48_object);
		var_47_bool = var_19_bool;
		return 0;
	}
	var_19_bool = false;
}


// @pe
void func_2232(object var_53_object, string var_54_string)
{
	if(var_54_string == "unholster") {
		object var_57_object;
		var_53_object = var_57_object;
		func_2489(var_57_object);
	} else if(var_54_string == "player_shot") {
			object var_132_object;
			var_53_object = var_132_object;
			func_2512(var_132_object);
	}
Label_2256:
	for(;;) {

	}
	
	if(!(var_54_string == "battle")) goto Label_2256;
	object var_200_object;
	var_53_object = var_200_object;
	func_2527(var_200_object);
}


void func_190(void)
{
	bool var_135_bool;
	func_1758(var_135_bool);
	if(!var_135_bool) //@nz
		func_2456();
}


void func_1733(object var_21_object, cvector var_24_cvector, cvector var_25_cvector)
{
	object var_28_object;
	@GetScene(var_28_object);
	object var_29_object;
	@AddActorByType(var_29_object, "scripted", var_28_object, var_24_cvector, var_25_cvector, "blood_dir.xml");
	object var_32_object;
	var_21_object = var_32_object;
	func_1621(var_32_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2257(bool var_16_bool, object var_17_object)
{
	bool var_19_bool;
	bool var_20_bool = false;
	bool var_21_bool; object var_22_object;
	var_17_object = var_22_object;
	func_2484(var_21_bool, var_22_object);
	if(var_21_bool != 0) {
		bool var_25_bool; object var_26_object;
		func_1539(var_25_bool, var_26_object);
		if(var_25_bool != 0)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		var_26_object->IsWeaponHolstered(var_19_bool);
		if(!var_19_bool) //@nz
			var_16_bool = true;
	}
	var_16_bool = false;
}


// @pe
void func_722(object var_68_object)
{
	@Face(var_68_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_78_object;
	func_787(var_70_cvector, var_71_bool, var_78_object, var_78_object);
}


void func_1747(object var_91_object)
{
	cvector var_95_cvector;
	var_91_object->GetPosition(var_95_cvector);
	cvector var_96_cvector;
	@GetPosition(var_96_cvector);
	cvector var_97_cvector = var_95_cvector - var_96_cvector;
	var_98_float = GetByIndex(var_97_cvector, 0);
	var_99_float = GetByIndex(var_97_cvector, 2);
	@RotateAsync(var_98_float, var_99_float);
}


void func_1758(bool var_135_bool)
{
	bool var_137_bool;
	@IsLoaded(var_137_bool);
	var_137_bool = var_135_bool;
}


void func_1763(object var_42_object)
{
	float var_45_float;
	var_42_object->GetEyesHeight(var_45_float);
	cvector var_46_cvector = [0.0, 0.0, 0.0];
	var_47_float = GetByIndex(var_46_cvector, 1);
	var_45_float = var_47_float;
	SetByIndex(var_46_cvector, 1) = var_47_float;
	@LookAsync(var_42_object, "head", var_46_cvector);
}


// @pe
void func_2280(object var_32_object)
{
	object var_33_object;
	var_32_object = var_33_object;
	func_2489(var_33_object);
}


void func_1774(string var_41_string)
{
	bool var_50_bool; int var_51_int; bool var_52_bool; int var_53_int; bool var_54_bool; float var_55_float; cvector var_56_cvector; cvector var_57_cvector;
	@IsExisting3DSound(var_50_bool, var_41_string);
	if(!var_50_bool) { //@nz
		var_51_int = 0;

		for(;;) {
			@IsExisting3DSound(var_52_bool, (var_41_string + (var_51_int + 1)));
			if(!var_52_bool) { //@nz
				break;
			Label_1794:
				@irand(var_53_int, var_51_int);
				var_41_string += (var_53_int + 1);
	}
			@Is3DSoundLoaded(var_54_bool, var_41_string);
			if(var_54_bool != 0) {
				@GetEyesHeight(var_55_float);
				@GetDirection(var_56_cvector);
				var_57_cvector = var_56_cvector * 50;
				var_68_float = GetByIndex(var_57_cvector, 1);
				SetByIndex(var_57_cvector, 1) = (var_68_float + var_55_float);
				@PlayGlobalSound(var_41_string, var_57_cvector);
			}
		}
		var_51_int += 1;
	}
	var_63_bool = !var_51_int; //@nz
	if(var_63_bool == 0) goto Label_1794;
}


// @pe
void func_2286(object var_18_object)
{
	bool var_19_bool; object var_20_object;
	func_1539(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		object var_23_object;
		func_1815(var_23_object);
		@ReportReputationChange(var_20_object, var_23_object, -0.05);
	}
}


void func_757(bool var_0_bool, cvector var_29_cvector, float var_30_float)
{
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	var_0_bool->GetPosition(var_38_cvector); //@t
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_43_cvector;
	cvector var_45_cvector;
	func_1821(var_45_cvector, (var_37_cvector - var_38_cvector));
	func_1821(var_43_cvector, (var_45_cvector + (var_39_cvector * 0.75)));
	cvector var_40_cvector;
	var_43_cvector = var_40_cvector;
	cvector var_41_cvector;
	float var_42_float;
	@FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, 32, 7000.0);
	if((var_42_float - 100) < 0)
		var_42_float = 0;
	var_29_cvector = var_41_cvector * var_42_float;
}


void func_2299(bool var_16_bool, string var_17_string)
{
	object var_19_object;
	if(var_17_string == "heal") {
		@FindActor(var_19_object, "player");
		bool var_23_bool; object var_24_object;
		var_19_object = var_24_object;
		func_2533(var_24_object);
		var_23_bool = var_16_bool;
	EMIT "Stack[-1] = 0";
	}
	var_16_bool = false;
}


void func_2315(string var_27_string)
{
	object var_29_object;
	if(var_27_string == "heal") {
		@FindActor(var_29_object, "player");
		object var_33_object;
		var_29_object = var_33_object;
		func_2536();
		var_29_object = null;
	}
}


void func_1293(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


void func_787(bool var_0_bool, bool var_1_bool, object var_2_object, object var_78_object)
{
	float var_85_float; cvector var_87_cvector; float var_88_float;
	cvector var_89_cvector;
	func_757(var_88_float, var_89_cvector, 1.7453294);
	cvector var_84_cvector;
	var_89_cvector = var_84_cvector;
	if((var_84_cvector | var_84_cvector) < 2500.0) {
		cvector var_121_cvector;
		func_757(var_88_float, var_121_cvector, 2.6179938);
		var_121_cvector = var_84_cvector;
		var_85_float = var_84_cvector | var_84_cvector;
		if(var_85_float < 2500.0) {
			var_126_float = sqrt(var_85_float);
			@Trace("Can't retreat, distance: " + var_126_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_129_float = GetByIndex(var_84_cvector, 0);
	var_130_float = GetByIndex(var_84_cvector, 2);
	@Rotate(var_129_float, var_130_float);
	cvector var_131_cvector;
	func_1519(var_131_cvector);
	@SetTimer(120, 0.5);
	
Label_829:
	bool var_86_bool;
	@MovePoint((var_131_cvector + var_84_cvector), 1, var_86_bool);
	if(var_86_bool != 0) {
		if(var_78_object == null) {
			goto Label_859;
		EMIT "GOTO 0x359";

		Label_859:
			for(;;) {
				return 10;
		}
			cvector var_139_cvector;
			func_757(var_88_float, var_139_cvector, 2.6179938);
			var_139_cvector = var_87_cvector;
			if((var_87_cvector | var_87_cvector) >= 2500.0) {
				cvector var_143_cvector;
				func_1519(var_143_cvector);
				var_1_bool = var_143_cvector + var_87_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_829; //@nz

	}
}


void func_1815(object var_103_object)
{
	object var_105_object;
	@self(var_105_object);
	var_105_object = var_103_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2328(int var_24_int)
{
	bool var_26_bool;
	func_2596(var_26_bool);
	if(var_26_bool != 0)
		var_24_int = 2;
	else
		var_24_int = 0;
	
}


void func_1821(cvector var_47_cvector, cvector var_48_cvector)
{
	float var_56_float = sqrt(var_48_cvector | var_48_cvector);
	if(var_56_float < 0.000001)
		var_47_cvector = [0.0, 0.0, 0.0];
	var_47_cvector = var_48_cvector / var_56_float;
}


void func_1309(bool var_0_bool, bool var_67_bool)
{
	cvector var_70_cvector;
	@GetDirection(var_70_cvector);
	cvector var_72_cvector;
	func_1524(var_72_cvector, var_0_bool);
	cvector var_71_cvector;
	var_72_cvector = var_71_cvector;
	float var_78_float; cvector var_79_cvector; cvector var_80_cvector;
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= -0.34202012;
}


// @pe
void func_2337(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	TaskCall(2);
	func_447(var_35_object, var_34_object);
	TaskReturn();
}


// @pe
void func_1831(float var_78_float, cvector var_79_cvector, cvector var_80_cvector)
{
	var_85_float = sqrt((var_79_cvector | var_79_cvector) * (var_80_cvector | var_80_cvector));
	var_78_float = (var_79_cvector | var_80_cvector) / var_85_float;
}


// @pe
void func_2345(int var_24_int, object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	bool var_26_bool;
	func_1597(var_26_bool, var_27_object);
	if(var_26_bool != 0)
		var_24_int = 2;
	else
		var_24_int = 0;
	
}


// @pe
void func_1839(float var_68_float, cvector var_69_cvector, cvector var_70_cvector)
{
	var_71_float = GetByIndex(var_69_cvector, 0);
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_74_float = GetByIndex(var_69_cvector, 2);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_68_float = (var_71_float * var_72_float) + (var_74_float * var_75_float);
}


// @pe
void func_2355(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(3);
	func_722(var_68_object);
	TaskReturn();
}


void func_1332(bool var_0_bool, cvector var_29_cvector, float var_30_float)
{
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	var_0_bool->GetPosition(var_38_cvector); //@t
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_43_cvector;
	cvector var_45_cvector;
	func_1821(var_45_cvector, (var_37_cvector - var_38_cvector));
	func_1821(var_43_cvector, (var_45_cvector + (var_39_cvector * 0.75)));
	cvector var_40_cvector;
	var_43_cvector = var_40_cvector;
	cvector var_41_cvector;
	float var_42_float;
	@FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, 32, 7000.0);
	if((var_42_float - 100) < 0)
		var_42_float = 0;
	var_29_cvector = var_41_cvector * var_42_float;
}


// @pe
void func_1848(float var_77_float, cvector var_78_cvector)
{
	var_79_float = GetByIndex(var_78_cvector, 0);
	var_80_float = GetByIndex(var_78_cvector, 0);
	var_82_float = GetByIndex(var_78_cvector, 2);
	var_83_float = GetByIndex(var_78_cvector, 2);
	var_77_float = sqrt((var_79_float * var_80_float) + (var_82_float * var_83_float));
}


// @pe
void func_2363(int var_69_int, object var_70_object)
{
	object var_73_object;
	var_70_object = var_73_object;
	bool var_72_bool;
	func_1597(var_72_bool, var_73_object);
	if(var_72_bool != 0)
		var_69_int = 2;
	else
		var_69_int = 0;
	
}


// @pe
void func_1858(float var_65_float, cvector var_66_cvector, cvector var_67_cvector)
{
	cvector var_69_cvector;
	var_66_cvector = var_69_cvector;
	cvector var_70_cvector;
	var_67_cvector = var_70_cvector;
	float var_68_float;
	func_1839(var_68_float, var_69_cvector, var_70_cvector);
	float var_77_float; cvector var_78_cvector;
	var_66_cvector = var_78_cvector;
	func_1848(var_77_float, var_78_cvector);
	float var_86_float; cvector var_87_cvector;
	var_67_cvector = var_87_cvector;
	func_1848(var_86_float, var_87_cvector);
	var_65_float = var_68_float / (var_77_float * var_86_float);
}


// @pe
void func_2373(object var_106_object)
{
	object var_107_object;
	var_106_object = var_107_object;
	TaskCall(4);
	func_974(var_108_object, var_109_cvector, var_110_bool, var_107_object);
	TaskReturn();
}


void func_2381(bool var_24_bool, object var_25_object, object var_26_object, float var_27_float)
{
	object var_33_object;
	var_26_object = var_33_object;
	bool var_32_bool;
	func_1544(var_32_bool, var_33_object, "class");
	if(!var_32_bool) { //@nz
		var_24_bool = false;
		return 4;
	}
	string var_30_string;
	var_26_object->GetProperty("class", var_30_string);
	if(var_30_string == "rat") {
		var_24_bool = false;
		return 4;
	EMIT "GOTO 0x96b";
	}
	if(var_30_string == "rat_big") {
		var_24_bool = false;
		return 4;
	EMIT "GOTO 0x96b";
	}
	if(var_30_string == "dog") {
		var_24_bool = false;
		return 4;
	}
	bool var_31_bool;
	@CanSee(var_31_bool, var_25_object);
	bool var_49_bool = true;
	if(var_31_bool != 1) {
		float var_51_float; object var_52_object;
		var_25_object = var_52_object;
		func_1531(var_51_float, var_52_object);
		var_60_bool = var_51_float <= (var_27_float * var_27_float);
		if(var_60_bool != 1)
			var_49_bool = false;
	}
	if(var_49_bool != 0) {
		var_24_bool = true;
		return 4;
	}
	@CanSee(var_31_bool, var_26_object);
	bool var_61_bool = true;
	if(var_31_bool != 1) {
		float var_63_float; object var_64_object;
		var_26_object = var_64_object;
		func_1531(var_63_float, var_64_object);
		var_66_bool = var_63_float <= (var_27_float * var_27_float);
		if(var_66_bool != 1)
			var_61_bool = false;
	}
	if(var_61_bool != 0) {
		var_24_bool = true;
		return 4;
	}
	var_24_bool = false;
}


void func_1362(bool var_0_bool, bool var_1_bool, object var_2_object, object var_133_object)
{
	float var_143_float; cvector var_145_cvector; float var_146_float;
	cvector var_147_cvector;
	func_1332(var_146_float, var_147_cvector, 1.7453294);
	cvector var_142_cvector;
	var_147_cvector = var_142_cvector;
	if((var_142_cvector | var_142_cvector) < 2500.0) {
		cvector var_174_cvector;
		func_1332(var_146_float, var_174_cvector, 2.6179938);
		var_174_cvector = var_142_cvector;
		var_143_float = var_142_cvector | var_142_cvector;
		if(var_143_float < 2500.0) {
			var_179_float = sqrt(var_143_float);
			@Trace("Can't retreat, distance: " + var_179_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_182_float = GetByIndex(var_142_cvector, 0);
	var_183_float = GetByIndex(var_142_cvector, 2);
	@Rotate(var_182_float, var_183_float);
	cvector var_184_cvector;
	func_1519(var_184_cvector);
	@SetTimer(120, 0.5);
	
Label_1404:
	bool var_144_bool;
	@MovePoint((var_184_cvector + var_142_cvector), 1, var_144_bool);
	if(var_144_bool != 0) {
		if(var_133_object == null) {
			goto Label_1434;
		EMIT "GOTO 0x598";

		Label_1434:
			for(;;) {
				return 10;
		}
			cvector var_190_cvector;
			func_1332(var_146_float, var_190_cvector, 2.6179938);
			var_190_cvector = var_145_cvector;
			if((var_145_cvector | var_145_cvector) >= 2500.0) {
				cvector var_194_cvector;
				func_1519(var_194_cvector);
				var_1_bool = var_194_cvector + var_145_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1404; //@nz

	}
}


void func_1875(int var_30_int)
{
	float var_32_float;
	@GetGameTime(var_32_float);
	var_30_int = 1 + (var_32_float / 24);
}


void func_1884(int var_222_int)
{
	int var_224_int;
	@GetVariable("branch", var_224_int);
	var_224_int = var_222_int;
}


// @pe
void func_1890(object var_32_object)
{
	int var_33_int;
	func_1884(var_33_int);
	if(var_33_int == 1)
		@WorkWithCorpse(var_32_object);
	else
		@Barter(var_32_object);
	
}


void func_1903(int var_27_int, int var_28_int)
{
	if(var_27_int > var_28_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_40_int = 0;
	if(var_27_int != var_28_int) {
		@irand(var_40_int, (var_28_int - var_27_int));
	} else if(var_27_int == 0) {
		return 4;
	}
	var_40_int += var_27_int;
	if(var_40_int == 0)
		return 4;
	int var_48_int;
	func_2150(var_48_int, "Money");
	bool var_41_bool;
	@AddItem(var_41_bool, var_48_int, 0, var_40_int);
	
}


void func_392(bool var_1_bool)
{
	@KillTimer(110);
	var_1_bool = false;
	if(var_0_bool != 0)
		func_2593();
	else
		@Stop();
	
}


void func_1934(string var_228_string)
{
	object var_232_object;
	@CreateInvItem(var_232_object);
	var_232_object->SetItemName(var_228_string);
	var_232_object->SetProperty("Organ", 1);
	int var_233_int;
	var_232_object->GetItemID(var_233_int);
	bool var_234_bool;
	@AddItem(var_234_bool, var_232_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_2447(int var_18_int)
{
	var_18_int = 2;
}


void func_912(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_2450(object var_26_object)
{
	object var_27_object;
	var_26_object = var_27_object;
	func_2553(var_27_object);
}


void func_2456(void)
{
}


void func_2457(int var_18_int, object var_19_object)
{
	@Trace("Received steal");
	bool var_21_bool;
	@CanSee(var_21_bool, var_19_object);
	if(var_21_bool != 0) {
		int var_24_int; object var_25_object;
		var_19_object = var_25_object;
		func_2345(var_24_int, var_25_object);
		var_24_int = var_18_int;
	}
	var_18_int = 0;
}


void func_414(bool var_1_bool, object var_17_object)
{
	if(var_1_bool != 0)
		return 4;
	bool var_20_bool;
	@IsPlayerActor(var_17_object, var_20_bool);
	if(!var_20_bool) //@nz
		return 4;
	int var_24_int; object var_25_object;
	var_17_object = var_25_object;
	func_2328(var_25_object);
	int var_21_int;
	var_24_int = var_21_int;
	if(var_21_int > 0) {
		if(var_21_int > 1)
			func_392(var_21_int);
		object var_33_object;
		var_17_object = var_33_object;
		func_2337(var_33_object);
		var_1_bool = true;
		@SetTimer(110, 5.0);
	}
}


void func_1951(void)
{
	int var_222_int;
	func_1884(var_222_int);
	if(var_222_int != 1) {
	}
	func_1934("liver");
	func_1934("kidney");
	func_1934("heart");
	func_1934("blood");
}


void func_928(bool var_0_bool, bool var_67_bool)
{
	cvector var_70_cvector;
	@GetDirection(var_70_cvector);
	cvector var_72_cvector;
	func_1524(var_72_cvector, var_0_bool);
	cvector var_71_cvector;
	var_72_cvector = var_71_cvector;
	float var_78_float; cvector var_79_cvector; cvector var_80_cvector;
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= -0.34202012;
}


// @pe
void func_2473(object var_66_object)
{
	object var_67_object;
	var_66_object = var_67_object;
	func_2355(var_67_object);
}


// @pe
void func_2479(int var_202_int)
{
	var_202_int = 0;
}


void func_944(bool var_0_bool, cvector var_29_cvector, float var_30_float)
{
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	var_0_bool->GetPosition(var_38_cvector); //@t
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_43_cvector;
	cvector var_45_cvector;
	func_1821(var_45_cvector, (var_37_cvector - var_38_cvector));
	func_1821(var_43_cvector, (var_45_cvector + (var_39_cvector * 0.75)));
	cvector var_40_cvector;
	var_43_cvector = var_40_cvector;
	cvector var_41_cvector;
	float var_42_float;
	@FindLongestDir(var_41_cvector, var_42_float, var_40_cvector, var_30_float, 32, 7000.0);
	if((var_42_float - 100) < 0)
		var_42_float = 0;
	var_29_cvector = var_41_cvector * var_42_float;
}


// @pe
void func_2482(void)
{
}


void func_2484(bool var_21_bool, object var_22_object)
{
	bool var_24_bool;
	@CanSee(var_24_bool, var_22_object);
	var_24_bool = var_21_bool;
}


void func_1975(bool var_21_bool)
{
	int var_24_int; bool var_25_bool;
	if(var_21_bool != 0) {
		int var_30_int;
		func_1875(var_30_int);
		func_1903(0, (100 + (var_30_int * 100)));
		@irand(var_24_int, 8);
		if(var_24_int == 0) {
			int var_58_int;
			func_2150(var_58_int, "lemon");
			@AddItem(var_25_bool, var_58_int, 0, 1);
		} else {
				if(var_24_int == 1) {
					int var_64_int;
					func_2150(var_64_int, "rusk");
					@AddItem(var_25_bool, var_64_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_24_int == 2) {
				int var_70_int;
				func_2150(var_70_int, "hook");
				@AddItem(var_25_bool, var_70_int, 0, 1);
			} else if(var_24_int == 4) {
				int var_76_int;
				func_2150(var_76_int, "syringe");
				@AddItem(var_25_bool, var_76_int, 0, 1);
			} else if(var_24_int == 5) {
				int var_82_int;
				func_2150(var_82_int, "watch");
				@AddItem(var_25_bool, var_82_int, 0, 1);
			} else if(var_24_int == 6) {
				int var_88_int;
				func_2150(var_88_int, "razor");
				@AddItem(var_25_bool, var_88_int, 0, 1);
			}
	}
		int var_95_int;
		func_1875(var_95_int);
		func_1903(0, (50 + (var_95_int * 50)));
		@irand(var_24_int, 7);
		if(var_24_int == 0) {
			int var_101_int;
			func_2150(var_101_int, "beads");
			@AddItem(var_25_bool, var_101_int, 0, 1);
		} else if(var_24_int == 1) {
			int var_107_int;
			func_2150(var_107_int, "bracelet");
			@AddItem(var_25_bool, var_107_int, 0, 1);
		} else if(var_24_int == 2) {
			int var_113_int;
			func_2150(var_113_int, "ear_ring");
			@AddItem(var_25_bool, var_113_int, 0, 1);
		} else if(var_24_int == 3) {
			int var_119_int;
			func_2150(var_119_int, "gold_ring");
			@AddItem(var_25_bool, var_119_int, 0, 1);
		} else if(var_24_int == 4) {
			int var_125_int;
			func_2150(var_125_int, "silver_ring");
			@AddItem(var_25_bool, var_125_int, 0, 1);
		} else if(var_24_int == 5) {
			int var_131_int;
			func_2150(var_131_int, "flower");
			@AddItem(var_25_bool, var_131_int, 0, 1);
			}
		}
		return 4;

	}
	
}


// @pe
void func_2489(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	TaskCall(5);
	func_1168(var_35_object, var_36_cvector, var_37_bool, var_34_object);
	TaskReturn();
}


void func_447(bool var_0_bool, object var_34_object)
{
	var_0_bool = var_34_object;
	bool var_41_bool;
	func_498(var_41_bool);
	cvector var_39_cvector;
	@GetDirection(var_39_cvector);
	cvector var_49_cvector;
	func_1524(var_49_cvector, var_0_bool);
	cvector var_40_cvector;
	var_49_cvector = var_40_cvector;
	float var_55_float; cvector var_56_cvector; cvector var_57_cvector;
	var_39_cvector = var_56_cvector;
	var_40_cvector = var_57_cvector;
	func_1858(var_55_float, var_56_cvector, var_57_cvector);
	if(var_55_float < 0) {
		func_1747(var_0_bool);
		var_41_bool = true;
	} else {
		@Sleep(1.5, var_41_bool);
	}
	if(var_41_bool != 0) {
		func_1747(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2497(bool var_30_bool, object var_31_object)
{
	bool var_33_bool;
	@CanSee(var_33_bool, var_31_object);
	var_30_bool = true;
	if(var_33_bool != 1) {
		float var_35_float; object var_36_object;
		var_31_object = var_36_object;
		func_1531(var_35_float, var_36_object);
		var_44_bool = var_35_float <= 4000000;
		if(var_44_bool != 1)
			var_30_bool = false;
	}
}


void func_974(bool var_0_bool, bool var_1_bool, object var_2_object, object var_107_object)
{
	float var_117_float; cvector var_119_cvector; float var_120_float;
	cvector var_121_cvector;
	func_944(var_120_float, var_121_cvector, 1.7453294);
	cvector var_116_cvector;
	var_121_cvector = var_116_cvector;
	if((var_116_cvector | var_116_cvector) < 2500.0) {
		cvector var_153_cvector;
		func_944(var_120_float, var_153_cvector, 2.6179938);
		var_153_cvector = var_116_cvector;
		var_117_float = var_116_cvector | var_116_cvector;
		if(var_117_float < 2500.0) {
			var_158_float = sqrt(var_117_float);
			@Trace("Can't retreat, distance: " + var_158_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_161_float = GetByIndex(var_116_cvector, 0);
	var_162_float = GetByIndex(var_116_cvector, 2);
	@Rotate(var_161_float, var_162_float);
	cvector var_163_cvector;
	func_1519(var_163_cvector);
	@SetTimer(120, 0.5);
	
Label_1016:
	bool var_118_bool;
	@MovePoint((var_163_cvector + var_116_cvector), 1, var_118_bool);
	if(var_118_bool != 0) {
		if(var_107_object == null) {
			goto Label_1046;
		EMIT "GOTO 0x414";

		Label_1046:
			for(;;) {
				return 10;
		}
			cvector var_171_cvector;
			func_944(var_120_float, var_171_cvector, 2.6179938);
			var_171_cvector = var_119_cvector;
			if((var_119_cvector | var_119_cvector) >= 2500.0) {
				cvector var_175_cvector;
				func_1519(var_175_cvector);
				var_1_bool = var_175_cvector + var_119_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1016; //@nz

	}
}


void func_1487(object var_2_object)
{
	@Stop();
	@KillTimer(120);
	var_2_object = true;
}


// @pe
void func_2512(object var_132_object)
{
	object var_133_object;
	var_132_object = var_133_object;
	TaskCall(6);
	func_1362(var_134_object, var_135_cvector, var_136_bool, var_133_object);
	TaskReturn();
}


// @pe
void func_2520(bool var_47_bool, object var_48_object)
{
	object var_50_object;
	var_48_object = var_50_object;
	bool var_49_bool;
	func_2497(var_49_bool, var_50_object);
	var_49_bool = var_47_bool;
}


void func_1503(bool var_0_bool, bool var_67_bool)
{
	cvector var_70_cvector;
	@GetDirection(var_70_cvector);
	cvector var_72_cvector;
	func_1524(var_72_cvector, var_0_bool);
	cvector var_71_cvector;
	var_72_cvector = var_71_cvector;
	float var_78_float; cvector var_79_cvector; cvector var_80_cvector;
	var_70_cvector = var_79_cvector;
	var_71_cvector = var_80_cvector;
	func_1831(var_78_float, var_79_cvector, var_80_cvector);
	var_67_bool = var_78_float >= -0.34202012;
}


// @pe
void func_2527(object var_200_object)
{
	object var_201_object;
	var_200_object = var_201_object;
	func_2512(var_201_object);
}


// @pe
void func_2533(bool var_23_bool)
{
	var_23_bool = false;
}


// @pe
void func_2536(void)
{
}


void func_2538(string var_149_string, int var_150_int)
{
	string var_152_string = "idle";
	if(var_150_int != 0)
		var_152_string += var_150_int;
	var_152_string = var_149_string;
}


void func_1519(cvector var_87_cvector)
{
	cvector var_89_cvector;
	@GetPosition(var_89_cvector);
	var_89_cvector = var_87_cvector;
}


void func_2545(void)
{
	var_20_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_1975(false);
}


void func_498(bool var_0_bool)
{
	func_1763(var_0_bool);
}


void func_1524(cvector var_49_cvector, object var_50_object)
{
	cvector var_53_cvector;
	@GetPosition(var_53_cvector);
	cvector var_54_cvector;
	var_50_object->GetPosition(var_54_cvector);
	var_49_cvector = var_54_cvector - var_53_cvector;
}


void func_2553(object var_27_object)
{
	bool var_29_bool;
	var_30_bool = GlobalVars[0];
	if(var_30_bool != 0) {
		@IsOverrideActive(var_29_bool);
		if(!var_29_bool) { //@nz
			object var_32_object;
			var_27_object = var_32_object;
			func_1890(var_32_object);
		}
	}
}


void func_1531(float var_35_float, object var_36_object)
{
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	var_36_object->GetPosition(var_41_cvector);
	var_35_float = (var_41_cvector - var_40_cvector) | (var_41_cvector - var_40_cvector);
}


