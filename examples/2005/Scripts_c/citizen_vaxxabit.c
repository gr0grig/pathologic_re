// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2781(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			object var_23_object;
			var_16_bool = var_23_object;
			func_2784(var_23_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_2790();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		@SensePlayerOnly(true);
		func_2837();
		func_171();
	
		for(;;) {
			var_2_bool = false;
			func_432(var_14_cvector, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2781(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_367(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2784(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2586(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2669(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_367(var_18_int);
			object var_69_object;
			var_16_bool = var_69_object;
			func_2679(var_69_object);
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
		func_2857(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2687(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_367(var_20_int);
				object var_104_object;
				var_16_object = var_104_object;
				func_2697(var_104_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2771(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_367(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_2774();
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
		func_2500(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_367(var_19_int);
			object var_51_object; string var_52_string;
			var_16_cvector = var_51_object;
			var_17_bool = var_52_string;
			func_2532(var_51_object, var_52_string);
		} else {
			int var_199_int; string var_200_string; object var_201_object;
			var_17_bool = var_200_string;
			var_16_cvector = var_201_object;
			func_2776(var_201_object);
			var_199_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_308;
			if(var_19_int > 1)
				func_367(var_19_int);
			string var_206_string; object var_207_object;
			var_17_bool = var_206_string;
			var_16_cvector = var_207_object;
			func_2779();
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool; string var_18_string;
		func_2599(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_367(var_18_string);
			string var_27_string;
			var_16_bool = var_27_string;
			func_2615(var_27_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool; object var_18_object;
		func_2557(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_367(var_18_object);
			object var_32_object;
			var_16_bool = var_32_object;
			func_2580(var_32_object);
		} else {
			object var_106_object;
			func_392(var_106_object, var_106_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_17_object;
		func_392(var_17_object, var_17_object);
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
		func_367(var_15_bool);
		func_2790();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_367(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2476();
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


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2781(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_770();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2784(var_25_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2586(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2669(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_770();
			object var_68_object;
			var_16_bool = var_68_object;
			func_2679(var_68_object);
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
		func_2857(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2687(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_770();
				object var_103_object;
				var_16_object = var_103_object;
				func_2697(var_103_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2771(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_770();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2774();
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
		func_2500(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_770();
			object var_50_object; string var_51_string;
			var_16_cvector = var_50_object;
			var_17_bool = var_51_string;
			func_2532(var_50_object, var_51_string);
		} else {
			int var_198_int; string var_199_string; object var_200_object;
			var_17_bool = var_199_string;
			var_16_cvector = var_200_object;
			func_2776(var_200_object);
			var_198_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_653;
			if(var_19_int > 1)
				func_770();
			string var_205_string; object var_206_object;
			var_17_bool = var_205_string;
			var_16_cvector = var_206_object;
			func_2779();
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		string var_18_string;
		var_16_bool = var_18_string;
		bool var_17_bool;
		func_2599(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_770();
			string var_26_string;
			var_16_bool = var_26_string;
			func_2615(var_26_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_770();
		func_2790();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2557(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_770();
			object var_31_object;
			var_16_bool = var_31_object;
			func_2580(var_31_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2781(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_974();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2784(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2586(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2669(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_974();
			object var_70_object;
			var_16_bool = var_70_object;
			func_2679(var_70_object);
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
		func_2857(var_22_object, var_23_object, var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_68_int; object var_69_object; bool var_70_bool;
			var_16_object = var_69_object;
			var_18_bool = var_70_bool;
			func_2687(var_69_object, var_70_bool);
			var_68_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_974();
				object var_105_object;
				var_16_object = var_105_object;
				func_2697(var_105_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2771(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_974();
			object var_27_object;
			var_16_bool = var_27_object;
			func_2774();
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
		func_2500(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_974();
			object var_52_object; string var_53_string;
			var_16_cvector = var_52_object;
			var_17_bool = var_53_string;
			func_2532(var_52_object, var_53_string);
		} else {
			int var_200_int; string var_201_string; object var_202_object;
			var_17_bool = var_201_string;
			var_16_cvector = var_202_object;
			func_2776(var_202_object);
			var_200_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_959;
			if(var_19_int > 1)
				func_974();
			string var_207_string; object var_208_object;
			var_17_bool = var_207_string;
			var_16_cvector = var_208_object;
			func_2779();
		}
	Label_959:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		string var_18_string;
		var_16_bool = var_18_string;
		bool var_17_bool;
		func_2599(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_974();
			string var_28_string;
			var_16_bool = var_28_string;
			func_2615(var_28_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_974();
		object var_19_object;
		var_16_bool = var_19_object;
		func_2476();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 111)
			return 4;
		bool var_23_bool;
		func_1897(var_23_bool, var_0_bool);
		if(!var_23_bool) { //@nz
			func_974();
			return 4;
		}
		cvector var_19_cvector;
		@GetDirection(var_19_cvector);
		cvector var_60_cvector;
		func_1824(var_60_cvector, var_0_bool);
		cvector var_20_cvector;
		var_60_cvector = var_20_cvector;
		float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
		var_19_cvector = var_67_cvector;
		var_20_cvector = var_68_cvector;
		func_2158(var_66_float, var_67_cvector, var_68_cvector);
		if(var_66_float < 0.49999997)
			func_2047(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_974();
		func_2790();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2557(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_974();
			object var_33_object;
			var_16_bool = var_33_object;
			func_2580(var_33_object);
		}
	}

}


task task_4
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1212(var_15_bool);
		func_2790();
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
			func_1057(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1228(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1211;
			@Stop();
			cvector var_88_cvector;
			func_1819(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1211:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1212(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2476();
	}

}


task task_5
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
			func_1244(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1415(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1398;
			@Stop();
			cvector var_88_cvector;
			func_1819(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1398:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1399(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2476();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1593(var_15_bool);
		func_2790();
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
			func_1438(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1609(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1592;
			@Stop();
			cvector var_88_cvector;
			func_1819(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1592:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1593(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2476();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1787(var_15_bool);
		func_2790();
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
			func_1632(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_1803(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_1786;
			@Stop();
			cvector var_88_cvector;
			func_1819(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_1786:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object)
	{
		func_1787(var_16_object);
		object var_18_object;
		var_16_object = var_18_object;
		func_2476();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_2455(var_17_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_1965(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, cvector var_5_cvector, bool var_6_bool, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_22_object;
	var_16_object = var_22_object;
	int var_23_int;
	var_17_int = var_23_int;
	float var_24_float;
	var_18_float = var_24_float;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	func_2033(var_24_float, var_25_cvector, var_26_cvector);
}


// @pe
void func_0(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_33(var_19_object);
	object var_99_object;
	var_18_object = var_99_object;
	func_2866(var_99_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_517(bool var_47_bool)
{
	var_47_bool = false;
}


void func_519(object var_41_object, cvector var_42_cvector)
{
	object var_44_object;
	@FindShiftedPathTo(var_44_object, var_42_cvector);
	var_44_object = var_41_object;
}
EMIT "Stack[-1] = 0";


void func_2058(bool var_18_bool)
{
	bool var_20_bool;
	@IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
}


void func_2063(object var_76_object)
{
	float var_79_float;
	var_76_object->GetEyesHeight(var_79_float);
	cvector var_80_cvector = [0.0, 0.0, 0.0];
	var_81_float = GetByIndex(var_80_cvector, 1);
	var_79_float = var_81_float;
	SetByIndex(var_80_cvector, 1) = var_81_float;
	@LookAsync(var_76_object, "head", var_80_cvector);
}


// @pe
void func_2580(object var_33_object)
{
	object var_34_object;
	var_33_object = var_34_object;
	func_2796(var_34_object);
}


// @pe
void func_2586(object var_19_object)
{
	bool var_20_bool; object var_21_object;
	func_1839(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		object var_24_object;
		func_2115(var_24_object);
		@ReportReputationChange(var_21_object, var_24_object, 0.0);
	}
}


void func_2074(string var_42_string)
{
	bool var_51_bool; int var_52_int; bool var_53_bool; int var_54_int; bool var_55_bool; float var_56_float; cvector var_57_cvector; cvector var_58_cvector;
	@IsExisting3DSound(var_51_bool, var_42_string);
	if(!var_51_bool) { //@nz
		var_52_int = 0;

		for(;;) {
			@IsExisting3DSound(var_53_bool, (var_42_string + (var_52_int + 1)));
			if(!var_53_bool) { //@nz
				break;
			Label_2094:
				@irand(var_54_int, var_52_int);
				var_42_string += (var_54_int + 1);
	}
			@Is3DSoundLoaded(var_55_bool, var_42_string);
			if(var_55_bool != 0) {
				@GetEyesHeight(var_56_float);
				@GetDirection(var_57_cvector);
				var_58_cvector = var_57_cvector * 50;
				var_69_float = GetByIndex(var_58_cvector, 1);
				SetByIndex(var_58_cvector, 1) = (var_69_float + var_56_float);
				@PlayGlobalSound(var_42_string, var_58_cvector);
			}
		}
		var_52_int += 1;
	}
	var_64_bool = !var_52_int; //@nz
	if(var_64_bool == 0) goto Label_2094;
}


void func_33(object var_19_object)
{
	cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; cvector var_33_cvector; string var_34_string; object var_35_object; bool var_36_bool; bool var_37_bool; float var_38_float; cvector var_39_cvector;
	if(var_19_object == null) {
		func_124("fdie");
	} else {
		var_19_object->GetPosition(var_30_cvector);
		@GetPosition(var_31_cvector);
		@GetDirection(var_32_cvector);
		var_33_cvector = var_31_cvector - var_30_cvector;
		var_73_float = GetByIndex(var_33_cvector, 0);
		var_74_float = GetByIndex(var_32_cvector, 0);
		var_76_float = GetByIndex(var_33_cvector, 2);
		var_77_float = GetByIndex(var_32_cvector, 2);
		if(((var_73_float * var_74_float) + (var_76_float * var_77_float)) >= 0)
			var_34_string = "fdie";
		else
			var_34_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_19_object = var_35_object;
		var_84_bool = IsFuncExist(var_19_object, "GetScriptProperty", 2);
		if(var_84_bool != 0) {
			var_19_object->HasScriptProperty(var_36_bool, "Owner");
			if(var_36_bool != 0) {
				var_19_object->GetScriptProperty(var_35_object, "Owner");
				if(var_35_object == null)
					var_19_object = var_35_object;
			}
		}
		var_91_bool = IsFuncExist(var_35_object, "@GetEyesHeight", 1);
		if(var_91_bool != 0) {
			var_35_object->GetEyesHeight(var_38_float);
			var_39_cvector = [0.0, 0.0, 0.0];
			var_92_float = GetByIndex(var_39_cvector, 1);
			var_38_float = var_92_float;
			SetByIndex(var_39_cvector, 1) = var_92_float;
			@LookAsync(var_19_object, "head", var_39_cvector);
			var_37_bool = true;
		} else {
			var_37_bool = false;

		}
		string var_94_string;
		var_34_string = var_94_string;
		func_2074(var_94_string);
		@PlayAnimation("all", var_34_string);
		@WaitForAnimEnd();
		if(var_37_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_34_string);
		@RemoveEnvelope();
		var_35_object = null;
	}
	
}


void func_1057(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_2121(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_2121(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_2599(bool var_17_bool, string var_18_string)
{
	object var_20_object;
	if(var_18_string == "heal") {
		@FindActor(var_20_object, "player");
		bool var_24_bool; object var_25_object;
		var_20_object = var_25_object;
		func_2832(var_25_object);
		var_24_bool = var_17_bool;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = false;
}


void func_2615(string var_28_string)
{
	object var_30_object;
	if(var_28_string == "heal") {
		@FindActor(var_30_object, "player");
		object var_34_object;
		var_30_object = var_34_object;
		func_2835();
		var_30_object = null;
	}
}


void func_1593(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1087(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_71_object)
{
	float var_81_float; cvector var_83_cvector; float var_84_float;
	cvector var_85_cvector;
	func_1057(var_84_float, var_85_cvector, 1.7453294);
	cvector var_80_cvector;
	var_85_cvector = var_80_cvector;
	if((var_80_cvector | var_80_cvector) < 2500.0) {
		cvector var_117_cvector;
		func_1057(var_84_float, var_117_cvector, 2.6179938);
		var_117_cvector = var_80_cvector;
		var_81_float = var_80_cvector | var_80_cvector;
		if(var_81_float < 2500.0) {
			var_122_float = sqrt(var_81_float);
			@Trace("Can't retreat, distance: " + var_122_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_125_float = GetByIndex(var_80_cvector, 0);
	var_126_float = GetByIndex(var_80_cvector, 2);
	@Rotate(var_125_float, var_126_float);
	cvector var_127_cvector;
	func_1819(var_127_cvector);
	@SetTimer(120, 0.5);
	
Label_1129:
	bool var_82_bool;
	@MovePoint((var_127_cvector + var_80_cvector), 1, var_82_bool);
	if(var_82_bool != 0) {
		if(var_71_object == null) {
			goto Label_1159;
		EMIT "GOTO 0x485";

		Label_1159:
			for(;;) {
				return 10;
		}
			cvector var_135_cvector;
			func_1057(var_84_float, var_135_cvector, 2.6179938);
			var_135_cvector = var_83_cvector;
			if((var_83_cvector | var_83_cvector) >= 2500.0) {
				cvector var_139_cvector;
				func_1819(var_139_cvector);
				var_1_bool = var_139_cvector + var_83_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1129; //@nz

	}
}


void func_2115(object var_104_object)
{
	object var_106_object;
	@self(var_106_object);
	var_106_object = var_104_object;
}
EMIT "Stack[-1] = 0";


void func_2628(string var_71_string, int var_72_int)
{
	string var_74_string = "idle";
	if(var_72_int != 0)
		var_74_string += var_72_int;
	var_74_string = var_71_string;
}


void func_2121(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


void func_1609(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1824(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_2635(int var_65_int)
{
	int var_68_int; bool var_69_bool;
	var_68_int = 0;
	
	for(;;) {
		string var_71_string; int var_72_int;
		var_68_int = var_72_int;
		func_2628(var_71_string, var_72_int);
		@HasAnimation(var_69_bool, "all", var_71_string);
		if(!var_69_bool) //@nz
			break;
		var_68_int += 1;
	}
	var_68_int = var_65_int;
}


// @pe
void func_2131(float var_79_float, cvector var_80_cvector, cvector var_81_cvector)
{
	var_86_float = sqrt((var_80_cvector | var_80_cvector) * (var_81_cvector | var_81_cvector));
	var_79_float = (var_80_cvector | var_81_cvector) / var_86_float;
}


// @pe
void func_2139(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_69_float = (var_72_float * var_73_float) + (var_75_float * var_76_float);
}


// @pe
void func_2652(int var_59_int)
{
	bool var_61_bool;
	func_2855(var_61_bool);
	if(var_61_bool != 0)
		var_59_int = 2;
	else
		var_59_int = 0;
	
}


void func_1632(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_2121(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_2121(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
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
void func_2148(float var_78_float, cvector var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_78_float = sqrt((var_80_float * var_81_float) + (var_83_float * var_84_float));
}


// @pe
void func_2661(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(3);
	func_775(var_69_object, var_68_object);
	TaskReturn();
}


// @pe
void func_2669(int var_28_int, object var_29_object)
{
	object var_31_object;
	var_29_object = var_31_object;
	bool var_30_bool;
	func_1897(var_30_bool, var_31_object);
	if(var_30_bool != 0)
		var_28_int = 2;
	else
		var_28_int = 0;
	
}


// @pe
void func_2158(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	cvector var_70_cvector;
	var_67_cvector = var_70_cvector;
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	float var_69_float;
	func_2139(var_69_float, var_70_cvector, var_71_cvector);
	float var_78_float; cvector var_79_cvector;
	var_67_cvector = var_79_cvector;
	func_2148(var_78_float, var_79_cvector);
	float var_87_float; cvector var_88_cvector;
	var_68_cvector = var_88_cvector;
	func_2148(var_87_float, var_88_cvector);
	var_66_float = var_69_float / (var_78_float * var_87_float);
}


// @pe
void func_2679(object var_70_object)
{
	object var_71_object;
	var_70_object = var_71_object;
	TaskCall(4);
	func_1087(var_72_object, var_73_cvector, var_74_bool, var_71_object);
	TaskReturn();
}


// @pe
void func_124(string var_41_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_42_string;
	var_41_string = var_42_string;
	func_2074(var_42_string);
	@PlayAnimation("all", var_41_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_41_string);
	@RemoveEnvelope();
}


void func_1662(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_132_object)
{
	float var_142_float; cvector var_144_cvector; float var_145_float;
	cvector var_146_cvector;
	func_1632(var_145_float, var_146_cvector, 1.7453294);
	cvector var_141_cvector;
	var_146_cvector = var_141_cvector;
	if((var_141_cvector | var_141_cvector) < 2500.0) {
		cvector var_173_cvector;
		func_1632(var_145_float, var_173_cvector, 2.6179938);
		var_173_cvector = var_141_cvector;
		var_142_float = var_141_cvector | var_141_cvector;
		if(var_142_float < 2500.0) {
			var_178_float = sqrt(var_142_float);
			@Trace("Can't retreat, distance: " + var_178_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_181_float = GetByIndex(var_141_cvector, 0);
	var_182_float = GetByIndex(var_141_cvector, 2);
	@Rotate(var_181_float, var_182_float);
	cvector var_183_cvector;
	func_1819(var_183_cvector);
	@SetTimer(120, 0.5);
	
Label_1704:
	bool var_143_bool;
	@MovePoint((var_183_cvector + var_141_cvector), 1, var_143_bool);
	if(var_143_bool != 0) {
		if(var_132_object == null) {
			goto Label_1734;
		EMIT "GOTO 0x6c4";

		Label_1734:
			for(;;) {
				return 10;
		}
			cvector var_189_cvector;
			func_1632(var_145_float, var_189_cvector, 2.6179938);
			var_189_cvector = var_144_cvector;
			if((var_144_cvector | var_144_cvector) >= 2500.0) {
				cvector var_193_cvector;
				func_1819(var_193_cvector);
				var_1_bool = var_193_cvector + var_144_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1704; //@nz

	}
}


void func_2175(int var_118_int)
{
	float var_120_float;
	@GetGameTime(var_120_float);
	var_118_int = 1 + (var_120_float / 24);
}


// @pe
void func_2687(int var_68_int, object var_69_object)
{
	object var_72_object;
	var_69_object = var_72_object;
	bool var_71_bool;
	func_1897(var_71_bool, var_72_object);
	if(var_71_bool != 0)
		var_68_int = 2;
	else
		var_68_int = 0;
	
}


void func_2184(int var_223_int)
{
	int var_225_int;
	@GetVariable("branch", var_225_int);
	var_225_int = var_223_int;
}


// @pe
void func_2697(object var_105_object)
{
	object var_106_object;
	var_105_object = var_106_object;
	TaskCall(5);
	func_1274(var_107_object, var_108_cvector, var_109_bool, var_106_object);
	TaskReturn();
}


// @pe
void func_2190(object var_33_object)
{
	int var_34_int;
	func_2184(var_34_int);
	if(var_34_int == 1)
		@WorkWithCorpse(var_33_object);
	else
		@Barter(var_33_object);
	
}


void func_2705(bool var_25_bool, object var_26_object, object var_27_object, float var_28_float)
{
	object var_34_object;
	var_27_object = var_34_object;
	bool var_33_bool;
	func_1844(var_33_bool, var_34_object, "class");
	if(!var_33_bool) { //@nz
		var_25_bool = false;
		return 4;
	}
	string var_31_string;
	var_27_object->GetProperty("class", var_31_string);
	if(var_31_string == "rat") {
		var_25_bool = false;
		return 4;
	EMIT "GOTO 0xaaf";
	}
	if(var_31_string == "rat_big") {
		var_25_bool = false;
		return 4;
	EMIT "GOTO 0xaaf";
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
		func_1831(var_52_float, var_53_object);
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
		func_1831(var_64_float, var_65_object);
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


void func_2203(int var_115_int, int var_116_int)
{
	if(var_115_int > var_116_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_128_int = 0;
	if(var_115_int != var_116_int) {
		@irand(var_128_int, (var_116_int - var_115_int));
	} else if(var_115_int == 0) {
		return 4;
	}
	var_128_int += var_115_int;
	if(var_128_int == 0)
		return 4;
	int var_136_int;
	func_2450(var_136_int, "Money");
	bool var_129_bool;
	@AddItem(var_129_bool, var_136_int, 0, var_128_int);
	
}


void func_171(void)
{
	bool var_18_bool;
	func_2058(var_18_bool);
	if(!var_18_bool) //@nz
		func_2790();
}


void func_689(void)
{
	int var_58_int; int var_59_int; bool var_60_bool; float var_61_float; bool var_62_bool;
	@WaitForAnimEnd();
	bool var_63_bool;
	func_2058(var_63_bool);
	if(!var_63_bool) //@nz
		return 14;
	int var_65_int;
	func_2635(var_65_int);
	int var_56_int;
	var_65_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_78_bool = false;
		if(var_57_int < 5) {
			bool var_81_bool;
			func_2058(var_81_bool);
			if(var_81_bool != 0)
				var_78_bool = true;
		}
		if(var_78_bool != 0) {
			@irand(var_58_int, 3);
			if(var_58_int == 0) {
				if(var_56_int == 0) goto Label_736;
				@irand(var_59_int, var_56_int);
				string var_87_string; int var_88_int;
				var_59_int = var_88_int;
				func_2628(var_87_string, var_88_int);
				@PlayAnimation("all", var_87_string);
				@WaitForAnimEnd(var_60_bool);
				if(!var_60_bool) { //@nz
				} else {
			} else {
			if(var_58_int == 1) {
				@rand(var_61_float, 4);
				@Sleep((var_61_float + 1), var_62_bool);
				if(!var_62_bool) { //@nz
					goto Label_765;
				}
			} else if(var_57_int != 0) {
				goto Label_765;
			}
			}
					bool var_90_bool;
					func_768(var_90_bool);
					var_91_bool = !var_90_bool; //@nz
					if(var_91_bool == 0) goto Label_760;
			}
		}
	Label_765:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_760:
		@ResetAAS();
		var_57_int += 1;
	}
	
}


void func_2234(string var_229_string)
{
	object var_233_object;
	@CreateInvItem(var_233_object);
	var_233_object->SetItemName(var_229_string);
	var_233_object->SetProperty("Organ", 1);
	int var_234_int;
	var_233_object->GetItemID(var_234_int);
	bool var_235_bool;
	@AddItem(var_235_bool, var_233_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1212(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_2251(void)
{
	int var_223_int;
	func_2184(var_223_int);
	if(var_223_int != 1) {
	}
	func_2234("liver");
	func_2234("kidney");
	func_2234("heart");
	func_2234("blood");
}


void func_1228(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1824(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


// @pe
void func_2771(int var_19_int)
{
	var_19_int = 0;
}


// @pe
void func_2774(void)
{
}


// @pe
void func_2776(int var_200_int)
{
	var_200_int = 0;
}


// @pe
void func_2779(void)
{
}


void func_1244(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_2121(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_2121(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
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
void func_2781(int var_19_int)
{
	var_19_int = 2;
}


// @pe
void func_2784(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_2841(var_28_object);
}


void func_2275(bool var_109_bool)
{
	int var_112_int; bool var_113_bool;
	if(var_109_bool != 0) {
		int var_118_int;
		func_2175(var_118_int);
		func_2203(0, (100 + (var_118_int * 100)));
		@irand(var_112_int, 8);
		if(var_112_int == 0) {
			int var_146_int;
			func_2450(var_146_int, "lemon");
			@AddItem(var_113_bool, var_146_int, 0, 1);
		} else {
				if(var_112_int == 1) {
					int var_152_int;
					func_2450(var_152_int, "rusk");
					@AddItem(var_113_bool, var_152_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_112_int == 2) {
				int var_158_int;
				func_2450(var_158_int, "hook");
				@AddItem(var_113_bool, var_158_int, 0, 1);
			} else if(var_112_int == 4) {
				int var_164_int;
				func_2450(var_164_int, "syringe");
				@AddItem(var_113_bool, var_164_int, 0, 1);
			} else if(var_112_int == 5) {
				int var_170_int;
				func_2450(var_170_int, "watch");
				@AddItem(var_113_bool, var_170_int, 0, 1);
			} else if(var_112_int == 6) {
				int var_176_int;
				func_2450(var_176_int, "razor");
				@AddItem(var_113_bool, var_176_int, 0, 1);
			}
	}
		int var_183_int;
		func_2175(var_183_int);
		func_2203(0, (50 + (var_183_int * 50)));
		@irand(var_112_int, 7);
		if(var_112_int == 0) {
			int var_189_int;
			func_2450(var_189_int, "beads");
			@AddItem(var_113_bool, var_189_int, 0, 1);
		} else if(var_112_int == 1) {
			int var_195_int;
			func_2450(var_195_int, "bracelet");
			@AddItem(var_113_bool, var_195_int, 0, 1);
		} else if(var_112_int == 2) {
			int var_201_int;
			func_2450(var_201_int, "ear_ring");
			@AddItem(var_113_bool, var_201_int, 0, 1);
		} else if(var_112_int == 3) {
			int var_207_int;
			func_2450(var_207_int, "gold_ring");
			@AddItem(var_113_bool, var_207_int, 0, 1);
		} else if(var_112_int == 4) {
			int var_213_int;
			func_2450(var_213_int, "silver_ring");
			@AddItem(var_113_bool, var_213_int, 0, 1);
		} else if(var_112_int == 5) {
			int var_219_int;
			func_2450(var_219_int, "flower");
			@AddItem(var_113_bool, var_219_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_2790(void)
{
}


void func_2791(bool var_22_bool, object var_23_object)
{
	bool var_25_bool;
	@CanSee(var_25_bool, var_23_object);
	var_25_bool = var_22_bool;
}


// @pe
void func_2796(object var_34_object)
{
	object var_35_object;
	var_34_object = var_35_object;
	TaskCall(6);
	func_1468(var_36_object, var_37_cvector, var_38_bool, var_35_object);
	TaskReturn();
}


void func_2804(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	@CanSee(var_34_bool, var_32_object);
	var_31_bool = true;
	if(var_34_bool != 1) {
		float var_36_float; object var_37_object;
		var_32_object = var_37_object;
		func_1831(var_36_float, var_37_object);
		var_45_bool = var_36_float <= 4000000;
		if(var_45_bool != 1)
			var_31_bool = false;
	}
}


void func_1274(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_106_object)
{
	float var_116_float; cvector var_118_cvector; float var_119_float;
	cvector var_120_cvector;
	func_1244(var_119_float, var_120_cvector, 1.7453294);
	cvector var_115_cvector;
	var_120_cvector = var_115_cvector;
	if((var_115_cvector | var_115_cvector) < 2500.0) {
		cvector var_152_cvector;
		func_1244(var_119_float, var_152_cvector, 2.6179938);
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
	func_1819(var_162_cvector);
	@SetTimer(120, 0.5);
	
Label_1316:
	bool var_117_bool;
	@MovePoint((var_162_cvector + var_115_cvector), 1, var_117_bool);
	if(var_117_bool != 0) {
		if(var_106_object == null) {
			goto Label_1346;
		EMIT "GOTO 0x540";

		Label_1346:
			for(;;) {
				return 10;
		}
			cvector var_170_cvector;
			func_1244(var_119_float, var_170_cvector, 2.6179938);
			var_170_cvector = var_118_cvector;
			if((var_118_cvector | var_118_cvector) >= 2500.0) {
				cvector var_174_cvector;
				func_1819(var_174_cvector);
				var_1_bool = var_174_cvector + var_118_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1316; //@nz

	}
}


void func_1787(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_768(bool var_90_bool)
{
	var_90_bool = true;
}


void func_770(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2819(object var_131_object)
{
	object var_132_object;
	var_131_object = var_132_object;
	TaskCall(7);
	func_1662(var_133_object, var_134_cvector, var_135_bool, var_132_object);
	TaskReturn();
}


void func_775(bool var_0_bool, object var_68_object)
{
	var_0_bool = var_68_object;
	bool var_75_bool;
	func_826(var_75_bool);
	cvector var_73_cvector;
	@GetDirection(var_73_cvector);
	cvector var_83_cvector;
	func_1824(var_83_cvector, var_0_bool);
	cvector var_74_cvector;
	var_83_cvector = var_74_cvector;
	float var_89_float; cvector var_90_cvector; cvector var_91_cvector;
	var_73_cvector = var_90_cvector;
	var_74_cvector = var_91_cvector;
	func_2158(var_89_float, var_90_cvector, var_91_cvector);
	if(var_89_float < 0) {
		func_2047(var_0_bool);
		var_75_bool = true;
	} else {
		@Sleep(1.5, var_75_bool);
	}
	if(var_75_bool != 0) {
		func_2047(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_1803(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1824(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


// @pe
void func_2827(bool var_48_bool)
{
	var_48_bool = false;
}


// @pe
void func_2830(void)
{
}


// @pe
void func_2832(bool var_24_bool)
{
	var_24_bool = false;
}


// @pe
void func_2835(void)
{
}


void func_2837(void)
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_2841(object var_28_object)
{
	bool var_30_bool;
	var_31_bool = GlobalVars[0];
	if(var_31_bool != 0) {
		@IsOverrideActive(var_30_bool);
		if(!var_30_bool) { //@nz
			object var_33_object;
			var_28_object = var_33_object;
			func_2190(var_33_object);
		}
	EMIT "GOTO 0xb26";
	}
}


void func_1819(cvector var_88_cvector)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
}


void func_1824(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


void func_2855(bool var_61_bool)
{
	var_61_bool = true;
}


void func_1831(float var_36_float, object var_37_object)
{
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	var_37_object->GetPosition(var_42_cvector);
	var_36_float = (var_42_cvector - var_41_cvector) | (var_42_cvector - var_41_cvector);
}


// @pe
void func_2857(bool var_21_bool, object var_22_object, object var_23_object)
{
	object var_26_object;
	var_22_object = var_26_object;
	object var_27_object;
	var_23_object = var_27_object;
	bool var_25_bool;
	func_2705(var_25_bool, var_26_object, var_27_object, 700.0);
	var_25_bool = var_21_bool;
}


void func_1839(bool var_100_bool, object var_101_object)
{
	bool var_103_bool;
	@IsPlayerActor(var_101_object, var_103_bool);
	var_103_bool = var_100_bool;
}


// @pe
void func_2866(object var_99_object)
{
	bool var_100_bool; object var_101_object;
	func_1839(var_100_bool, var_101_object);
	if(var_100_bool != 0) {
		object var_104_object;
		func_2115(var_104_object);
		@ReportReputationChange(var_101_object, var_104_object, -0.05, true);
		func_2275(true);
	}
	func_2251();
	var_243_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1844(bool var_45_bool, object var_46_object, string var_47_string)
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


void func_826(bool var_0_bool)
{
	func_2063(var_0_bool);
}


void func_1856(bool var_38_bool, object var_39_object)
{
	bool var_41_bool;
	var_39_object->IsDead(var_41_bool);
	var_41_bool = var_38_bool;
}


void func_1861(bool var_27_bool, object var_28_object)
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
		func_1856(var_38_bool, var_39_object);
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


void func_1897(bool var_23_bool, object var_24_object)
{
	object var_28_object;
	var_24_object = var_28_object;
	bool var_27_bool;
	func_1861(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_23_bool = false;
		return 2;
	}
	bool var_45_bool; object var_46_object;
	func_1844(var_45_bool, var_46_object, "noaccess");
	if(!var_45_bool) { //@nz
		var_23_bool = true;
		return 2;
	}
	int var_26_int;
	var_46_object->GetProperty("noaccess", var_26_int);
	var_23_bool = var_26_int == 0;
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_15_cvector, var_16_bool);
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_20_bool, var_21_int);
}


void func_1399(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1921(object var_33_object)
{
	string var_47_string;
	if(var_33_object == null)
		return 14;
	bool var_41_bool;
	@IsDead(var_41_bool);
	if(var_41_bool != 0)
		return 14;
	int var_42_int;
	@GetSecondaryAnimationType(var_42_int);
	if(var_42_int < 0)
		return 14;
	cvector var_43_cvector;
	var_33_object->GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_47_string = "fhit";
	else
		var_47_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_47_string + "1"), (var_47_string + "2"), -10);
	
}


void func_1415(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_1824(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2131(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
}


void func_392(bool var_2_bool, object var_17_object)
{
	bool var_22_bool; object var_23_object;
	func_1897(var_22_bool, var_23_object);
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
	func_2652(var_60_object);
	int var_21_int;
	var_59_int = var_21_int;
	if(var_21_int > 0) {
		if(var_21_int > 1)
			func_375(var_21_int);
		object var_67_object;
		var_17_object = var_67_object;
		func_2661(var_67_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_2450(int var_136_int, string var_137_string)
{
	int var_139_int;
	@GetInvItemByName(var_139_int, var_137_string);
	var_139_int = var_136_int;
}


// @pe
void func_2455(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	TaskCall(0);
	func_0(var_18_object);
	TaskReturn();
}


void func_1438(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_2121(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_2121(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_1965(object var_20_object, int var_21_int, float var_22_float)
{
	cvector var_32_cvector; object var_33_object; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	bool var_41_bool = false;
	bool var_42_bool = false;
	if(var_20_object != 0) {
		if(var_21_int != 4)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(var_21_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		cvector var_48_cvector; cvector var_49_cvector;
		cvector var_50_cvector; object var_51_object;
		var_20_object = var_51_object;
		func_1824(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2121(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_2027:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_1921(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_2027;
	int var_39_int;
	@irand(var_39_int, var_38_int);
	cvector var_40_cvector;
	var_33_object->get(var_40_cvector, var_39_int);
	object var_65_object; int var_66_int; float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	var_20_object = var_65_object;
	var_21_int = var_66_int;
	var_22_float = var_67_float;
	var_40_cvector = var_68_cvector;
	var_69_cvector = -var_32_cvector;
	func_2033(var_67_float, var_68_cvector, var_69_cvector);
}


void func_432(bool var_0_bool, bool var_1_bool)
{
	float var_28_float; cvector var_29_cvector; cvector var_30_cvector; bool var_31_bool; object var_32_object; bool var_33_bool;
	@rand(var_28_float, 0.5);
	@Sleep(var_28_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_444:
				@GetPosition(var_30_cvector);
				float var_37_float;
				func_491(var_37_float);
				@GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool);
				if(var_31_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_444;
			}
				var_1_bool = false;
		}
		}
		goto Label_460;

	Label_460:
		object var_41_object; cvector var_42_cvector;
		var_29_cvector = var_42_cvector;
		func_519(var_41_object, var_42_cvector);
		var_41_object = var_32_object;
		if(var_32_object != null) {
			@RotatePath(var_32_object, var_33_bool);
			if(var_33_bool != 0) {
				bool var_47_bool;
				func_517(var_47_bool);
				@FollowPath(var_32_object, var_47_bool, var_33_bool);
				var_32_object = null;
				if(var_33_bool != 0) {
					TaskCall(2);
					func_689();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_32_object = null;
	}
	
}


void func_1468(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_35_object)
{
	float var_45_float; cvector var_47_cvector; float var_48_float;
	cvector var_49_cvector;
	func_1438(var_48_float, var_49_cvector, 1.7453294);
	cvector var_44_cvector;
	var_49_cvector = var_44_cvector;
	if((var_44_cvector | var_44_cvector) < 2500.0) {
		cvector var_81_cvector;
		func_1438(var_48_float, var_81_cvector, 2.6179938);
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
	func_1819(var_91_cvector);
	@SetTimer(120, 0.5);
	
Label_1510:
	bool var_46_bool;
	@MovePoint((var_91_cvector + var_44_cvector), 1, var_46_bool);
	if(var_46_bool != 0) {
		if(var_35_object == null) {
			goto Label_1540;
		EMIT "GOTO 0x602";

		Label_1540:
			for(;;) {
				return 10;
		}
			cvector var_99_cvector;
			func_1438(var_48_float, var_99_cvector, 2.6179938);
			var_99_cvector = var_47_cvector;
			if((var_47_cvector | var_47_cvector) >= 2500.0) {
				cvector var_103_cvector;
				func_1819(var_103_cvector);
				var_1_bool = var_103_cvector + var_47_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1510; //@nz

	}
}


// @pe
void func_2500(bool var_20_bool, object var_21_object, string var_22_string)
{
	if(var_22_string == "unholster") {
		bool var_25_bool; object var_26_object;
		var_21_object = var_26_object;
		func_2791(var_25_bool, var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x9e2";
	}
	if(var_22_string == "player_shot") {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_2804(var_31_bool, var_32_object);
		var_31_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0x9e2";
	}
	if(var_22_string == "battle") {
		bool var_48_bool; object var_49_object;
		var_21_object = var_49_object;
		func_2827(var_49_object);
		var_48_bool = var_20_bool;
		return 0;
	}
	var_20_bool = false;
}


void func_974(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_2532(object var_52_object, string var_53_string)
{
	if(var_53_string == "unholster") {
		object var_56_object;
		var_52_object = var_56_object;
		func_2796(var_56_object);
	} else if(var_53_string == "player_shot") {
			object var_131_object;
			var_52_object = var_131_object;
			func_2819(var_131_object);
	}
Label_2556:
	for(;;) {

	}
	
	if(!(var_53_string == "battle")) goto Label_2556;
	object var_199_object;
	var_52_object = var_199_object;
	func_2830();
}


void func_491(float var_37_float)
{
	float var_39_float;
	@GetCameraFarDistance(var_39_float);
	var_39_float = var_37_float;
}


void func_2033(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_1921(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_2557(bool var_17_bool, object var_18_object)
{
	bool var_20_bool;
	bool var_21_bool = false;
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_2791(var_22_bool, var_23_object);
	if(var_22_bool != 0) {
		bool var_26_bool; object var_27_object;
		func_1839(var_26_bool, var_27_object);
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


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_2047(object var_92_object)
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


