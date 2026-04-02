// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3090(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			object var_20_object;
			var_13_bool = var_20_object;
			func_3093(var_20_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_3099();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		@SensePlayerOnly(true);
		func_3136();
		func_171();
	
		for(;;) {
			var_2_bool = false;
			func_432(var_11_object, var_12_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3090(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_23_object;
			var_13_bool = var_23_object;
			func_3093(var_23_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2862(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2945(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_66_object;
			var_13_bool = var_66_object;
			func_2955(var_66_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_13_bool = var_19_object;
		object var_20_object;
		var_14_object = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		bool var_18_bool;
		func_3160(var_18_bool, var_19_object, var_20_object, var_21_bool);
		if(var_18_bool != 0) {
			int var_80_int; object var_81_object; bool var_82_bool;
			var_13_bool = var_81_object;
			var_15_bool = var_82_bool;
			func_3038(var_81_object, var_82_bool);
			var_80_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_367(var_17_int);
				object var_118_object;
				var_13_bool = var_118_object;
				func_3045(var_118_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3080(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_23_object;
			var_13_bool = var_23_object;
			func_3083();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_13_object = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_2776(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_367(var_16_int);
			object var_46_object; string var_47_string;
			var_13_object = var_46_object;
			var_14_bool = var_47_string;
			func_2808(var_46_object, var_47_string);
		} else {
			int var_122_int; string var_123_string; object var_124_object;
			var_14_bool = var_123_string;
			var_13_object = var_124_object;
			func_3085(var_124_object);
			var_122_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_308;
			if(var_16_int > 1)
				func_367(var_16_int);
			string var_129_string; object var_130_object;
			var_14_bool = var_129_string;
			var_13_object = var_130_object;
			func_3088();
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		bool var_14_bool; string var_15_string;
		func_2875(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_367(var_15_string);
			string var_24_string;
			var_13_bool = var_24_string;
			func_2891(var_24_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		bool var_14_bool; object var_15_object;
		func_2833(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_367(var_15_object);
			object var_27_object;
			var_13_bool = var_27_object;
			func_2856(var_27_object);
		} else {
			object var_29_object;
			func_392(var_29_object, var_29_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_14_object;
		func_392(var_14_object, var_14_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		if(var_13_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_367(var_12_bool);
		func_3099();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		func_367(var_13_bool);
		object var_15_object;
		var_13_bool = var_15_object;
		func_2752();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		@RequestClearPath(var_13_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3090(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_22_object;
			var_13_bool = var_22_object;
			func_3093(var_22_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2862(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2945(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_65_object;
			var_13_bool = var_65_object;
			func_2955(var_65_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_13_bool = var_19_object;
		object var_20_object;
		var_14_object = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		bool var_18_bool;
		func_3160(var_18_bool, var_19_object, var_20_object, var_21_bool);
		if(var_18_bool != 0) {
			int var_80_int; object var_81_object; bool var_82_bool;
			var_13_bool = var_81_object;
			var_15_bool = var_82_bool;
			func_3038(var_81_object, var_82_bool);
			var_80_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_770();
				object var_117_object;
				var_13_bool = var_117_object;
				func_3045(var_117_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3080(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_22_object;
			var_13_bool = var_22_object;
			func_3083();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_13_object = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_2776(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_770();
			object var_45_object; string var_46_string;
			var_13_object = var_45_object;
			var_14_bool = var_46_string;
			func_2808(var_45_object, var_46_string);
		} else {
			int var_121_int; string var_122_string; object var_123_object;
			var_14_bool = var_122_string;
			var_13_object = var_123_object;
			func_3085(var_123_object);
			var_121_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_653;
			if(var_16_int > 1)
				func_770();
			string var_128_string; object var_129_object;
			var_14_bool = var_128_string;
			var_13_object = var_129_object;
			func_3088();
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		string var_15_string;
		var_13_bool = var_15_string;
		bool var_14_bool;
		func_2875(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_770();
			string var_23_string;
			var_13_bool = var_23_string;
			func_2891(var_23_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_770();
		func_3099();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_13_bool = var_15_object;
		bool var_14_bool;
		func_2833(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_770();
			object var_26_object;
			var_13_bool = var_26_object;
			func_2856(var_26_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3090(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_24_object;
			var_13_bool = var_24_object;
			func_3093(var_24_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2862(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2945(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_67_object;
			var_13_bool = var_67_object;
			func_2955(var_67_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_13_bool = var_19_object;
		object var_20_object;
		var_14_object = var_20_object;
		bool var_21_bool;
		var_15_bool = var_21_bool;
		bool var_18_bool;
		func_3160(var_18_bool, var_19_object, var_20_object, var_21_bool);
		if(var_18_bool != 0) {
			int var_80_int; object var_81_object; bool var_82_bool;
			var_13_bool = var_81_object;
			var_15_bool = var_82_bool;
			func_3038(var_81_object, var_82_bool);
			var_80_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_974();
				object var_119_object;
				var_13_bool = var_119_object;
				func_3045(var_119_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3080(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_24_object;
			var_13_bool = var_24_object;
			func_3083();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		int var_16_int;
		object var_18_object;
		var_13_object = var_18_object;
		string var_19_string;
		var_14_bool = var_19_string;
		bool var_17_bool;
		func_2776(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_974();
			object var_47_object; string var_48_string;
			var_13_object = var_47_object;
			var_14_bool = var_48_string;
			func_2808(var_47_object, var_48_string);
		} else {
			int var_123_int; string var_124_string; object var_125_object;
			var_14_bool = var_124_string;
			var_13_object = var_125_object;
			func_3085(var_125_object);
			var_123_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_959;
			if(var_16_int > 1)
				func_974();
			string var_130_string; object var_131_object;
			var_14_bool = var_130_string;
			var_13_object = var_131_object;
			func_3088();
		}
	Label_959:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		string var_15_string;
		var_13_bool = var_15_string;
		bool var_14_bool;
		func_2875(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_974();
			string var_25_string;
			var_13_bool = var_25_string;
			func_2891(var_25_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		func_974();
		object var_16_object;
		var_13_bool = var_16_object;
		func_2752();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		if(var_13_bool != 111)
			return 4;
		bool var_20_bool;
		func_2149(var_20_bool, var_0_bool);
		if(!var_20_bool) { //@nz
			func_974();
			return 4;
		}
		cvector var_16_cvector;
		@GetDirection(var_16_cvector);
		cvector var_57_cvector;
		func_2003(var_57_cvector, var_0_bool);
		cvector var_17_cvector;
		var_57_cvector = var_17_cvector;
		float var_63_float; cvector var_64_cvector; cvector var_65_cvector;
		var_16_cvector = var_64_cvector;
		var_17_cvector = var_65_cvector;
		func_2451(var_63_float, var_64_cvector, var_65_cvector);
		if(var_63_float < 0.49999997)
			func_2299(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_974();
		func_3099();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_13_bool = var_15_object;
		bool var_14_bool;
		func_2833(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_974();
			object var_28_object;
			var_13_bool = var_28_object;
			func_2856(var_28_object);
		}
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_1796(var_12_bool);
		func_3099();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, int var_13_int)
	{
		if(var_13_int == 1) {
			func_2487(var_1_bool);
		} else {
			int var_21_int;
			func_1940(var_12_bool, var_21_int, var_21_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object)
	{
		bool var_14_bool = false;
		if(var_1_bool == var_13_object) {
			if(!var_2_bool) //@nz
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			var_2_bool = true;
			object var_17_object;
			var_13_object = var_17_object;
			func_2315(var_17_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object)
	{
		bool var_14_bool = false;
		if(var_1_bool == var_13_object) {
			if(var_2_bool != 0)
				var_14_bool = true;
		}
		if(var_14_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object)
	{
		@RequestClearPath(var_13_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object)
	{
		func_1796(var_13_object);
		object var_18_object;
		var_13_object = var_18_object;
		func_2752();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, string var_14_string)
{
	float var_16_float;
	if(var_14_string == "health") {
		@GetProperty("health", var_16_float);
		if(var_16_float <= 0)
			@SignalDeath(var_13_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_2731(var_14_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float)
{
	object var_17_object;
	var_13_object = var_17_object;
	int var_18_int;
	var_14_int = var_18_int;
	float var_19_float;
	var_15_float = var_19_float;
	func_2217(var_17_object, var_18_int, var_19_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, float var_15_float, float var_16_float, cvector var_17_cvector, cvector var_18_cvector)
{
	object var_19_object;
	var_13_object = var_19_object;
	int var_20_int;
	var_14_int = var_20_int;
	float var_21_float;
	var_15_float = var_21_float;
	cvector var_22_cvector;
	var_17_cvector = var_22_cvector;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	func_2285(var_21_float, var_22_cvector, var_23_cvector);
}


// @pe
void func_0(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	func_33(var_16_object);
	object var_96_object;
	var_15_object = var_96_object;
	func_3170(var_96_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_517(bool var_125_bool)
{
	var_125_bool = false;
}


void func_519(object var_119_object, cvector var_120_cvector)
{
	object var_122_object;
	@FindShiftedPathTo(var_122_object, var_120_cvector);
	var_122_object = var_119_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3080(int var_16_int)
{
	var_16_int = 0;
}


// @pe
void func_3083(void)
{
}


// @pe
void func_3085(int var_123_int)
{
	var_123_int = 0;
}


void func_2574(void)
{
	int var_152_int;
	func_2507(var_152_int);
	if(var_152_int != 1) {
	}
	func_2557("liver");
	func_2557("kidney");
	func_2557("heart");
	func_2557("blood");
}


// @pe
void func_3088(void)
{
}


// @pe
void func_3090(int var_16_int)
{
	var_16_int = 2;
}


// @pe
void func_3093(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_3144(var_25_object);
}


// @pe
void func_1050(object var_121_object)
{
	object var_128_object;
	func_1064(var_124_int, var_125_bool, var_126_float, var_127_int, var_128_object, var_128_object, true, 180.0);
}


void func_3099(void)
{
}


// @pe
void func_3100(bool var_19_bool)
{
	var_19_bool = false;
}


// @pe
void func_3103(void)
{
}


void func_33(object var_16_object)
{
	cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; string var_31_string; object var_32_object; bool var_33_bool; bool var_34_bool; float var_35_float; cvector var_36_cvector;
	if(var_16_object == null) {
		func_124("fdie");
	} else {
		var_16_object->GetPosition(var_27_cvector);
		@GetPosition(var_28_cvector);
		@GetDirection(var_29_cvector);
		var_30_cvector = var_28_cvector - var_27_cvector;
		var_70_float = GetByIndex(var_30_cvector, 0);
		var_71_float = GetByIndex(var_29_cvector, 0);
		var_73_float = GetByIndex(var_30_cvector, 2);
		var_74_float = GetByIndex(var_29_cvector, 2);
		if(((var_70_float * var_71_float) + (var_73_float * var_74_float)) >= 0)
			var_31_string = "fdie";
		else
			var_31_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_16_object = var_32_object;
		var_81_bool = IsFuncExist(var_16_object, "GetScriptProperty", 2);
		if(var_81_bool != 0) {
			var_16_object->HasScriptProperty(var_33_bool, "Owner");
			if(var_33_bool != 0) {
				var_16_object->GetScriptProperty(var_32_object, "Owner");
				if(var_32_object == null)
					var_16_object = var_32_object;
			}
		}
		var_88_bool = IsFuncExist(var_32_object, "@GetEyesHeight", 1);
		if(var_88_bool != 0) {
			var_32_object->GetEyesHeight(var_35_float);
			var_36_cvector = [0.0, 0.0, 0.0];
			var_89_float = GetByIndex(var_36_cvector, 1);
			var_35_float = var_89_float;
			SetByIndex(var_36_cvector, 1) = var_89_float;
			@LookAsync(var_16_object, "head", var_36_cvector);
			var_34_bool = true;
		} else {
			var_34_bool = false;

		}
		string var_91_string;
		var_31_string = var_91_string;
		func_2352(var_91_string);
		@PlayAnimation("all", var_31_string);
		@WaitForAnimEnd();
		if(var_34_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_31_string);
		@RemoveEnvelope();
		var_32_object = null;
	}
	
}


// @pe
void func_1058(float var_465_float)
{
	var_465_float = 0.03;
}


void func_3105(bool var_26_bool, object var_27_object)
{
	bool var_29_bool;
	@CanSee(var_29_bool, var_27_object);
	var_26_bool = true;
	if(var_29_bool != 1) {
		float var_31_float; object var_32_object;
		var_27_object = var_32_object;
		func_2010(var_31_float, var_32_object);
		var_40_bool = var_31_float <= 2250000;
		if(var_40_bool != 1)
			var_26_bool = false;
	}
}


// @pe
void func_1061(int var_472_int)
{
	var_472_int = 0;
}


void func_1574(bool var_0_bool, bool var_371_bool)
{
	cvector var_377_cvector; cvector var_378_cvector;
	bool var_382_bool;
	func_2149(var_382_bool, var_0_bool);
	if(!var_382_bool) { //@nz
		var_371_bool = false;
		return 10;
	}
	bool var_385_bool;
	float var_381_float;
	func_1663(var_381_float, var_385_bool);
	if(var_385_bool != 0) {
		var_0_bool->GetPFPosition(var_377_cvector); //@t
		@GetPFPosition(var_378_cvector);
		var_0_bool->GetAttackDistance(var_381_float); //@t
		var_371_bool = ((var_377_cvector - var_378_cvector) | (var_377_cvector - var_378_cvector)) <= ((var_381_float + 50) * (var_381_float + 50));
		return 10;
	}
	var_371_bool = false;
}


void func_2598(void)
{
	@ClearSubContainer(0);
	int var_113_int;
	func_2478(var_113_int);
	func_2526(0, (10 + (var_113_int * 10)));
	func_2326("hook", 1, 4);
	func_2326("watch", 1, 10);
}


void func_1064(bool var_0_bool, object var_3_object, object var_5_object, object var_128_object, bool var_129_bool, float var_130_float, bool var_205_bool, bool var_297_bool)
{
	float var_142_float; cvector var_143_cvector; cvector var_144_cvector; bool var_146_bool; float var_149_float; cvector var_150_cvector; bool var_151_bool; float var_152_float;
	func_1293(var_150_cvector, var_151_bool, var_152_float);
	var_5_object = 0;
	var_177_bool = IsFuncExist(var_128_object, "@GetAttackDistance", 1);
	if(var_177_bool != 0) {
		var_128_object->GetAttackDistance(var_142_float);
		var_142_float += 50;
	} else {
						var_130_float = var_142_float;
	}
	if(var_142_float >= 150)
		var_142_float = 150;
	var_3_object = false;
	var_0_bool = var_128_object;
	bool var_145_bool;
	@IsPlayerActor(var_0_bool, var_145_bool);
	if(var_145_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_183_object;
		func_2393(var_183_object);
		@SendPlayerEnemy(var_128_object, var_183_object);
	}
	if(var_129_bool != 0)
		var_146_bool = false;
	else
		var_146_bool = true;

	
Label_1104:
	for(;;) {
		bool var_188_bool = false;
		bool var_189_bool;
		func_2149(var_189_bool, var_0_bool);
		if(var_189_bool != 0) {
			if(!var_3_object) //@nz
				var_188_bool = true;
		}
		if(var_188_bool != 0) {
			func_1706(var_152_float);
			var_0_bool->GetPFPosition(var_143_cvector); //@t
			@GetPFPosition(var_144_cvector);
			var_149_float = (var_143_cvector - var_144_cvector) | (var_143_cvector - var_144_cvector);
			if(var_149_float >= ((400.0 + var_142_float) * (400.0 + var_142_float))) {
				bool var_199_bool; float var_201_float;
				var_142_float = var_201_float;
				TaskCall(5);
				func_1733(var_207_bool, var_199_bool, var_0_bool, var_201_float, 3000.0, true, false);
				TaskReturn();
				if(!var_205_bool) { //@nz
				} else {
					var_146_bool = false;
			} else {
			if(var_149_float >= (var_130_float * var_130_float)) {
				var_0_bool->GetPFPosition(var_150_cvector); //@t
				@CanReachByPF(var_151_bool, var_150_cvector);
				if(!var_151_bool) { //@nz
					bool var_291_bool; float var_293_float;
					var_142_float = var_293_float;
					TaskCall(5);
					func_1733(var_299_bool, var_291_bool, var_0_bool, var_293_float, 3000.0, true, false);
					TaskReturn();
					if(!var_297_bool) { //@nz
						goto Label_1276;
					}
					var_146_bool = false;
					goto Label_1104;
				}
				if(!var_146_bool) { //@nz
					func_2299(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1706(var_152_float);
					@StopAsync();
					var_146_bool = true;
					bool var_313_bool;
					func_2149(var_313_bool, var_0_bool);
					if(!var_313_bool) { //@nz
						goto Label_1276;
					}
				}
				@rand(var_152_float);
				bool var_316_bool;
				var_318_bool = var_152_float < 0.25;
				if(var_318_bool != 1) {
					bool var_319_bool;
					func_1663(true, var_319_bool);
					if(var_319_bool != 1)
						var_316_bool = false;
				}
				if(var_316_bool != 0) {
					@Face(var_0_bool);
					func_1713();
					@PlayAnimation("all", "attack_stay");
					bool var_356_bool; float var_357_float;
					func_1531(var_152_float, var_356_bool, var_357_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1706(var_152_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_574_bool;
					func_1663(var_152_float, var_574_bool);
					var_575_bool = !var_574_bool; //@nz
					if(var_575_bool == 0) goto Label_1266;
					bool var_576_bool;
					func_2149(var_576_bool, var_0_bool);
					if(!var_576_bool) { //@nz
						goto Label_1276;
					}
					var_0_bool->GetPFPosition(var_143_cvector); //@t
					@GetPFPosition(var_144_cvector);
					if(!(((var_143_cvector - var_144_cvector) | (var_143_cvector - var_144_cvector)) < (var_357_float * var_357_float))) goto Label_1266;
					bool var_581_bool; float var_582_float;
					var_130_float = var_582_float;
					func_1367(var_151_bool, var_152_float, var_581_bool, var_582_float);
					var_583_bool = !var_581_bool; //@nz
					if(var_583_bool == 0) goto Label_1266;
					goto Label_1276;
			}
				bool var_584_bool; float var_585_float;
				var_130_float = var_585_float;
				func_1367(var_151_bool, var_152_float, var_584_bool, var_585_float);
				if(!var_584_bool) { //@nz
					goto Label_1276;
				}
				var_146_bool = true;

			}
		Label_1266:
			goto Label_1275;
			}
			Label_1275:
			}
		}
	Label_1276:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_145_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_3120(object var_54_object)
{
	object var_55_object;
	var_54_object = var_55_object;
	func_2937(var_55_object);
}


// @pe
void func_3126(bool var_43_bool)
{
	var_43_bool = false;
}


// @pe
void func_3129(void)
{
}


// @pe
void func_3131(bool var_21_bool)
{
	var_21_bool = false;
}


void func_2108(bool var_41_bool, object var_42_object)
{
	bool var_44_bool;
	var_42_object->IsDead(var_44_bool);
	var_44_bool = var_41_bool;
}


// @pe
void func_3134(void)
{
}


void func_3136(void)
{
	var_14_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2626(true);
}


void func_2113(bool var_30_bool, object var_31_object)
{
	if(var_31_object == null) {
		var_30_bool = false;
		return 4;
	}
	bool var_37_bool = false;
	var_40_bool = IsFuncExist(var_31_object, "IsDead", 1);
	if(var_40_bool != 0) {
		bool var_41_bool; object var_42_object;
		var_31_object = var_42_object;
		func_2108(var_41_bool, var_42_object);
		if(var_41_bool != 0)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		var_30_bool = false;
		return 4;
	}
	object var_34_object;
	@GetScene(var_34_object);
	if(var_34_object == null) {
		var_30_bool = false;
		return 4;
	}
	object var_35_object;
	var_31_object->GetScene(var_35_object);
	if(var_34_object != var_35_object) {
		var_30_bool = false;
		return 4;
	}
	var_30_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1602(bool var_369_bool)
{
	bool var_370_bool = false;
	bool var_371_bool;
	func_1574(var_370_bool, var_371_bool);
	if(var_371_bool != 0) {
		bool var_388_bool;
		func_1618(var_369_bool, var_370_bool, var_388_bool);
		if(var_388_bool != 0)
			var_370_bool = true;
	}
	if(var_370_bool != 0) {
		var_369_bool = true;
		return 0;
	}
	var_369_bool = false;
}


void func_2626(bool var_15_bool)
{
	@ClearSubContainer(0);
	int var_23_int;
	func_2478(var_23_int);
	int var_21_int;
	var_23_int = var_21_int;
	if(var_15_bool != 0) {
		func_2337("alpha_pills", 1, 2, 4);
		func_2337("meradorm", 2, 3, 3);
		if(var_21_int >= 3)
			func_2326("beta_pills", 1, 4);
		if(var_21_int >= 8) {
			func_2337("monomicin", 1, 2, 2);
		} else {
				if(var_21_int >= 4)
					func_2326("monomicin", 1, 2);
				func_2326("lockpick", 1, 4);
				func_2326("rifle_ammo", 1, 2);
				func_2326("revolver_ammo", 1, 2);
				func_2337("samopal_ammo", 1, 2, 2);
				if(var_21_int >= 8)
					func_2337("monomicin", 1, 2, 2);
			}
			} else if(var_21_int >= 4) {
		func_2326("monomicin", 1, 2);
			}
	
}


void func_3144(object var_25_object)
{
	bool var_27_bool;
	var_28_bool = GlobalVars[0];
	if(var_28_bool != 0) {
		@IsOverrideActive(var_27_bool);
		if(!var_27_bool) { //@nz
			object var_30_object;
			var_25_object = var_30_object;
			func_2513(var_30_object);
		}
	EMIT "GOTO 0xc55";
	}
}


void func_1618(bool var_0_bool, object var_4_object, bool var_388_bool)
{
	object var_394_object; float var_396_float; cvector var_397_cvector; cvector var_398_cvector;
	@GetScene(var_394_object);
	bool var_395_bool = false;
	
	for(;;) {
		cvector var_399_cvector;
		func_2003(var_399_cvector, var_0_bool);
		var_405_int = -var_399_cvector;
		@FindDirLength(var_396_float, var_405_int, var_4_object);
		if(var_396_float < var_4_object) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_397_cvector); //@t
				@GetPFPosition(var_398_cvector);
				@WaitForAnimEnd();
				func_1706(var_398_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_395_bool = true;
				bool var_410_bool;
				func_1574(var_398_cvector, var_410_bool);
				var_411_bool = !var_410_bool; //@nz
				if(var_411_bool == 0) goto Label_1659;
		}
		for(;;) {
			var_395_bool = var_388_bool;

		}

	Label_1659:
	}
}
EMIT "Stack[-5] = 0";


void func_3158(bool var_58_bool)
{
	var_58_bool = false;
}


// @pe
void func_3160(bool var_18_bool, object var_19_object, object var_20_object, bool var_21_bool)
{
	object var_23_object;
	var_19_object = var_23_object;
	object var_24_object;
	var_20_object = var_24_object;
	bool var_26_bool;
	var_21_bool = var_26_bool;
	bool var_22_bool;
	func_3051(var_22_bool, var_23_object, var_24_object, 700.0, var_26_bool);
	var_22_bool = var_18_bool;
}


// @pe
void func_3170(object var_96_object)
{
	bool var_97_bool; object var_98_object;
	func_2018(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		object var_101_object;
		func_2393(var_101_object);
		@ReportReputationChange(var_98_object, var_101_object, -0.1, true);
		bool var_106_bool = true;
		func_2598();
	}
	func_2574();
	var_172_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_2149(bool var_26_bool, object var_27_object)
{
	object var_31_object;
	var_27_object = var_31_object;
	bool var_30_bool;
	func_2113(var_30_bool, var_31_object);
	if(!var_30_bool) { //@nz
		var_26_bool = false;
		return 2;
	}
	bool var_48_bool; object var_49_object;
	func_2023(var_48_bool, var_49_object, "noaccess");
	if(!var_48_bool) { //@nz
		var_26_bool = true;
		return 2;
	}
	int var_29_int;
	var_49_object->GetProperty("noaccess", var_29_int);
	var_26_bool = var_29_int == 0;
}


// @pe
void func_124(string var_38_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_39_string;
	var_38_string = var_39_string;
	func_2352(var_39_string);
	@PlayAnimation("all", var_38_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_38_string);
	@RemoveEnvelope();
}


void func_2173(object var_30_object)
{
	string var_44_string;
	if(var_30_object == null)
		return 14;
	bool var_38_bool;
	@IsDead(var_38_bool);
	if(var_38_bool != 0)
		return 14;
	int var_39_int;
	@GetSecondaryAnimationType(var_39_int);
	if(var_39_int < 0)
		return 14;
	cvector var_40_cvector;
	var_30_object->GetPosition(var_40_cvector);
	cvector var_41_cvector;
	@GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetDirection(var_42_cvector);
	cvector var_43_cvector = var_41_cvector - var_40_cvector;
	var_49_float = GetByIndex(var_43_cvector, 0);
	var_50_float = GetByIndex(var_42_cvector, 0);
	var_52_float = GetByIndex(var_43_cvector, 2);
	var_53_float = GetByIndex(var_42_cvector, 2);
	if(((var_49_float * var_50_float) + (var_52_float * var_53_float)) >= 0)
		var_44_string = "fhit";
	else
		var_44_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_44_string + "1"), (var_44_string + "2"), -10);
	
}


void func_1663(bool var_0_bool, bool var_319_bool)
{
	bool var_321_bool;
	var_324_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_324_bool != 0) {
		var_0_bool->IsAttacking(var_321_bool); //@t
		var_321_bool = var_319_bool;
	}
	var_319_bool = false;
}


void func_1674(bool var_2_bool, object var_5_object)
{
	int var_439_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_438_float;
	@rand(var_438_float);
	float var_445_float;
	func_1724(var_445_float);
	if(var_438_float < var_445_float) {
		@irand(var_439_int, var_2_bool);
		@Speak("attack" + (var_439_int + 1));
		int var_450_int;
		func_1722(var_450_int);
		var_5_object = var_450_int;
	}
}


void func_2726(int var_131_int, string var_132_string)
{
	int var_134_int;
	@GetInvItemByName(var_134_int, var_132_string);
	var_134_int = var_131_int;
}


void func_2217(object var_17_object, int var_18_int, float var_19_float)
{
	cvector var_29_cvector; object var_30_object; int var_31_int; bool var_32_bool; cvector var_33_cvector; cvector var_34_cvector;
	bool var_38_bool = false;
	bool var_39_bool = false;
	if(var_17_object != 0) {
		if(var_18_int != 4)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		if(var_18_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		cvector var_45_cvector; cvector var_46_cvector;
		cvector var_47_cvector; object var_48_object;
		var_17_object = var_48_object;
		func_2003(var_47_cvector, var_48_object);
		var_47_cvector = var_46_cvector;
		func_2399(var_45_cvector, var_46_cvector);
		var_45_cvector = var_29_cvector;
		@CreateVectorVector(var_30_object);
		var_31_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_31_int), var_32_bool, var_33_cvector, var_34_cvector);
			if(!var_32_bool) { //@nz
				break;
			Label_2279:
				var_30_object = null;
	}
			object var_107_object;
			var_17_object = var_107_object;
			func_2173(var_107_object);
		}
		if((var_34_cvector | var_29_cvector) >= 0.70710677)
			var_30_object->add(var_33_cvector);
		var_31_int += 1;
	}
	int var_35_int;
	var_30_object->size(var_35_int);
	if(var_35_int == 0) goto Label_2279;
	int var_36_int;
	@irand(var_36_int, var_35_int);
	cvector var_37_cvector;
	var_30_object->get(var_37_cvector, var_36_int);
	object var_62_object; int var_63_int; float var_64_float; cvector var_65_cvector; cvector var_66_cvector;
	var_17_object = var_62_object;
	var_18_int = var_63_int;
	var_19_float = var_64_float;
	var_37_cvector = var_65_cvector;
	var_66_cvector = -var_29_cvector;
	func_2285(var_64_float, var_65_cvector, var_66_cvector);
}


void func_1706(bool var_0_bool)
{
	func_2487(var_0_bool);
}


void func_171(void)
{
	bool var_96_bool;
	func_2310(var_96_bool);
	if(!var_96_bool) //@nz
		func_3099();
}


// @pe
void func_2731(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	TaskCall(0);
	func_0(var_15_object);
	TaskReturn();
}


void func_1711(int var_529_int)
{
	var_529_int = 0;
}


void func_689(void)
{
	int var_136_int; int var_137_int; bool var_138_bool; float var_139_float; bool var_140_bool;
	@WaitForAnimEnd();
	bool var_141_bool;
	func_2310(var_141_bool);
	if(!var_141_bool) //@nz
		return 14;
	int var_143_int;
	func_2911(var_143_int);
	int var_134_int;
	var_143_int = var_134_int;
	int var_135_int = 0;
	
	for(;;) {
		bool var_156_bool = false;
		if(var_135_int < 5) {
			bool var_159_bool;
			func_2310(var_159_bool);
			if(var_159_bool != 0)
				var_156_bool = true;
		}
		if(var_156_bool != 0) {
			@irand(var_136_int, 3);
			if(var_136_int == 0) {
				if(var_134_int == 0) goto Label_736;
				@irand(var_137_int, var_134_int);
				string var_165_string; int var_166_int;
				var_137_int = var_166_int;
				func_2904(var_165_string, var_166_int);
				@PlayAnimation("all", var_165_string);
				@WaitForAnimEnd(var_138_bool);
				if(!var_138_bool) { //@nz
				} else {
			} else {
			if(var_136_int == 1) {
				@rand(var_139_float, 4);
				@Sleep((var_139_float + 1), var_140_bool);
				if(!var_140_bool) { //@nz
					goto Label_765;
				}
			} else if(var_135_int != 0) {
				goto Label_765;
			}
			}
					bool var_168_bool;
					func_768(var_168_bool);
					var_169_bool = !var_168_bool; //@nz
					if(var_169_bool == 0) goto Label_760;
			}
		}
	Label_765:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_760:
		@ResetAAS();
		var_135_int += 1;
	}
	
}


void func_1713(void)
{
	func_2352("attack_stay");
}


// @pe
void func_1718(void)
{
}


void func_1720(bool var_554_bool)
{
	var_554_bool = true;
}


void func_1722(int var_450_int)
{
	var_450_int = 1;
}


void func_1724(float var_445_float)
{
	var_445_float = 0.5;
}


void func_1733(bool var_2_bool, bool var_199_bool, object var_200_object, float var_201_float, float var_202_float, bool var_203_bool, bool var_204_bool)
{
	object var_212_object;
	func_2487(var_212_object);
	@SetTimer(1, 5);
	bool var_210_bool;
	@CanSee(var_210_bool, var_212_object);
	if(var_210_bool != 0) {
		var_2_bool = true;
		object var_216_object;
		var_200_object = var_216_object;
		func_2315(var_216_object);
	} else {
		var_2_bool = false;
	}
	bool var_223_bool; object var_224_object;
	func_2018(var_223_bool, var_224_object);
	if(var_223_bool != 0) {
		object var_227_object;
		func_2393(var_227_object);
		@SendPlayerEnemy(var_224_object, var_227_object);
	}
	bool var_228_bool; object var_229_object; float var_230_float; float var_231_float; bool var_232_bool; bool var_233_bool;
	var_200_object = var_229_object;
	var_201_float = var_230_float;
	var_202_float = var_231_float;
	var_203_bool = var_232_bool;
	var_204_bool = var_233_bool;
	bool var_211_bool;
	func_1838(var_210_bool, var_211_bool, var_228_bool, var_229_object, var_230_float, var_231_float, var_232_bool, var_233_bool);
	var_228_bool = var_211_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_211_bool = var_199_bool;
	
}


// @pe
void func_2776(bool var_17_bool, object var_18_object, string var_19_string)
{
	if(var_19_string == "unholster") {
		bool var_22_bool; object var_23_object;
		var_18_object = var_23_object;
		func_3100(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xaf6";
	}
	if(var_19_string == "player_shot") {
		bool var_26_bool; object var_27_object;
		var_18_object = var_27_object;
		func_3105(var_26_bool, var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xaf6";
	}
	if(var_19_string == "battle") {
		bool var_43_bool; object var_44_object;
		var_18_object = var_44_object;
		func_3126(var_44_object);
		var_43_bool = var_17_bool;
		return 0;
	}
	var_17_bool = false;
}


void func_2285(object var_19_object, cvector var_22_cvector, cvector var_23_cvector)
{
	object var_26_object;
	@GetScene(var_26_object);
	object var_27_object;
	@AddActorByType(var_27_object, "scripted", var_26_object, var_22_cvector, var_23_cvector, "blood_dir.xml");
	object var_30_object;
	var_19_object = var_30_object;
	func_2173(var_30_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_2808(object var_47_object, string var_48_string)
{
	if(var_48_string == "unholster") {
		object var_51_object;
		var_47_object = var_51_object;
		func_3103();
	} else if(var_48_string == "player_shot") {
			object var_54_object;
			var_47_object = var_54_object;
			func_3120(var_54_object);
	}
Label_2832:
	for(;;) {

	}
	
	if(!(var_48_string == "battle")) goto Label_2832;
	object var_122_object;
	var_47_object = var_122_object;
	func_3129();
}


void func_2299(object var_89_object)
{
	cvector var_93_cvector;
	var_89_object->GetPosition(var_93_cvector);
	cvector var_94_cvector;
	@GetPosition(var_94_cvector);
	cvector var_95_cvector = var_93_cvector - var_94_cvector;
	var_96_float = GetByIndex(var_95_cvector, 0);
	var_97_float = GetByIndex(var_95_cvector, 2);
	@RotateAsync(var_96_float, var_97_float);
}


void func_768(bool var_168_bool)
{
	var_168_bool = true;
}


void func_770(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1796(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_1962(var_13_object);
}


void func_2310(bool var_96_bool)
{
	bool var_98_bool;
	@IsLoaded(var_98_bool);
	var_98_bool = var_96_bool;
}


void func_775(bool var_0_bool, object var_56_object)
{
	var_0_bool = var_56_object;
	bool var_63_bool;
	func_826(var_63_bool);
	cvector var_61_cvector;
	@GetDirection(var_61_cvector);
	cvector var_71_cvector;
	func_2003(var_71_cvector, var_0_bool);
	cvector var_62_cvector;
	var_71_cvector = var_62_cvector;
	float var_77_float; cvector var_78_cvector; cvector var_79_cvector;
	var_61_cvector = var_78_cvector;
	var_62_cvector = var_79_cvector;
	func_2451(var_77_float, var_78_cvector, var_79_cvector);
	if(var_77_float < 0) {
		func_2299(var_0_bool);
		var_63_bool = true;
	} else {
		@Sleep(1.5, var_63_bool);
	}
	if(var_63_bool != 0) {
		func_2299(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2315(object var_17_object)
{
	float var_20_float;
	var_17_object->GetEyesHeight(var_20_float);
	cvector var_21_cvector = [0.0, 0.0, 0.0];
	var_22_float = GetByIndex(var_21_cvector, 1);
	var_20_float = var_22_float;
	SetByIndex(var_21_cvector, 1) = var_22_float;
	@LookAsync(var_17_object, "head", var_21_cvector);
}


void func_1293(bool var_1_bool, bool var_2_bool, object var_4_object)
{
	bool var_156_bool; bool var_157_bool; cvector var_158_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_156_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_156_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_157_bool, ("attack" + (var_2_bool + 1)));
			if(!var_157_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_158_cvector, "all", "bjump");
		var_172_float = GetByIndex(var_158_cvector, 2);
		var_4_object = -var_172_float;

	}
}


void func_2833(bool var_14_bool, object var_15_object)
{
	bool var_17_bool;
	bool var_18_bool = false;
	bool var_19_bool; object var_20_object;
	var_15_object = var_20_object;
	func_3100(var_20_object);
	if(var_19_bool != 0) {
		bool var_21_bool; object var_22_object;
		func_2018(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			var_18_bool = true;
	}
	if(var_18_bool != 0) {
		var_22_object->IsWeaponHolstered(var_17_bool);
		if(!var_17_bool) //@nz
			var_14_bool = true;
	}
	var_14_bool = false;
}


void func_2326(string var_52_string, int var_53_int, int var_54_int)
{
	bool var_56_bool;
	int var_58_int;
	var_53_int = var_58_int;
	int var_59_int;
	var_54_int = var_59_int;
	bool var_57_bool;
	func_2427(var_57_bool, var_58_int, var_59_int);
	if(var_57_bool != 0)
		@AddItem(var_56_bool, var_52_string, 0);
}


void func_2337(string var_30_string, int var_31_int, int var_32_int, int var_33_int)
{
	int var_36_int; bool var_37_bool;
	int var_39_int;
	var_31_int = var_39_int;
	int var_40_int;
	var_32_int = var_40_int;
	bool var_38_bool;
	func_2427(var_38_bool, var_39_int, var_40_int);
	if(var_38_bool != 0) {
		@irand(var_36_int, var_33_int);
		@AddItem(var_37_bool, var_30_string, 0, (var_36_int + 1));
	}
}


// @pe
void func_2856(object var_28_object)
{
	object var_29_object;
	var_28_object = var_29_object;
	func_3103();
}


// @pe
void func_2862(object var_16_object)
{
	bool var_17_bool; object var_18_object;
	func_2018(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		object var_21_object;
		func_2393(var_21_object);
		@ReportReputationChange(var_18_object, var_21_object, -0.05);
	}
}


void func_1838(bool var_0_bool, bool var_1_bool, bool var_228_bool, object var_229_object, float var_230_float, float var_231_float, bool var_232_bool, bool var_233_bool)
{
	bool var_242_bool; object var_244_object; cvector var_245_cvector; cvector var_246_cvector; float var_248_float; object var_249_object;
	var_0_bool = false;
	var_1_bool = var_229_object;
	bool var_243_bool;
	var_233_bool = var_243_bool;
	
	for(;;) {
		bool var_250_bool; object var_251_object;
		var_229_object = var_251_object;
		func_1978(var_250_bool, var_251_object);
		if(!var_250_bool) { //@nz
			var_228_bool = false;
			return 16;
		}
		var_229_object->GetPosition(var_245_cvector);
		@GetPosition(var_246_cvector);
		var_248_float = (var_245_cvector - var_246_cvector) | (var_245_cvector - var_246_cvector);
		bool var_255_bool = false;
		if(var_231_float > 0) {
			if(var_248_float > (var_231_float * var_231_float))
				var_255_bool = true;
		}
		if(var_255_bool != 0) {
			@Stop();
			var_228_bool = false;
			return 16;
		}
		if(var_248_float > (var_230_float * var_230_float)) {
			var_229_object->GetPFPosition(var_245_cvector);
			@FindPathTo(var_249_object, var_245_cvector);
			if(var_249_object != null) {
				var_249_object = var_244_object;
				var_249_object = null;
			}
			if(var_244_object != null) {
				if(var_243_bool == 0) goto Label_1891;
				var_243_bool = false;
				@RotatePath(var_244_object, var_242_bool);
				if(!var_242_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_268_string;
						func_1985(var_268_string);
						string var_269_string;
						func_1987(var_269_string);
						@FollowPath(var_244_object, var_232_bool, var_242_bool, var_268_string, var_269_string);
						if(!var_242_bool) { //@nz
							if(var_0_bool == 0) goto Label_1910;
							var_244_object = null;
						}
					EMIT "GOTO 0x777";

					Label_1910:
						} else {
					var_244_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_242_bool);
					if(!var_242_bool) { //@nz
						if(var_0_bool != 0) {
							var_244_object = null;
							goto Label_1938;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1938;
		}
			var_249_object = null;
			goto Label_1936;

		Label_1936:
			var_244_object = null;

		}
	Label_1938:
		for(;;) {
			var_228_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1328(bool var_0_bool, float var_454_float, int var_455_int)
{
	object var_459_object; float var_460_float; float var_461_float;
	@GetVictim((var_454_float * 0.9), var_459_object);
	@ReportAttack(var_0_bool);
	if(var_459_object == var_0_bool) {
		float var_465_float; object var_466_object; int var_467_int;
		var_459_object = var_466_object;
		var_455_int = var_467_int;
		func_1058(var_467_int);
		var_465_float = var_460_float;
		float var_468_float; object var_469_object; float var_470_float; int var_471_int;
		var_459_object = var_469_object;
		int var_472_int; object var_473_object; int var_474_int;
		var_459_object = var_473_object;
		var_455_int = var_474_int;
		func_1061(var_474_int);
		var_472_int = var_471_int;
		func_2035(var_468_float, var_469_object, var_470_float, var_471_int);
		var_468_float = var_461_float;
		int var_529_int;
		func_1711(var_529_int);
		@ReportHit(var_0_bool, var_529_int, var_461_float, var_470_float);
		object var_530_object; float var_531_float;
		var_459_object = var_530_object;
		var_461_float = var_531_float;
		func_1718();
	}
}
EMIT "Stack[-3] = 0";


void func_2352(string var_39_string)
{
	bool var_48_bool; int var_49_int; bool var_50_bool; int var_51_int; bool var_52_bool; float var_53_float; cvector var_54_cvector; cvector var_55_cvector;
	@IsExisting3DSound(var_48_bool, var_39_string);
	if(!var_48_bool) { //@nz
		var_49_int = 0;

		for(;;) {
			@IsExisting3DSound(var_50_bool, (var_39_string + (var_49_int + 1)));
			if(!var_50_bool) { //@nz
				break;
			Label_2372:
				@irand(var_51_int, var_49_int);
				var_39_string += (var_51_int + 1);
	}
			@Is3DSoundLoaded(var_52_bool, var_39_string);
			if(var_52_bool != 0) {
				@GetEyesHeight(var_53_float);
				@GetDirection(var_54_cvector);
				var_55_cvector = var_54_cvector * 50;
				var_66_float = GetByIndex(var_55_cvector, 1);
				SetByIndex(var_55_cvector, 1) = (var_66_float + var_53_float);
				@PlayGlobalSound(var_39_string, var_55_cvector);
			}
		}
		var_49_int += 1;
	}
	var_61_bool = !var_49_int; //@nz
	if(var_61_bool == 0) goto Label_2372;
}


void func_826(bool var_0_bool)
{
	func_2315(var_0_bool);
}


void func_2875(bool var_14_bool, string var_15_string)
{
	object var_17_object;
	if(var_15_string == "heal") {
		@FindActor(var_17_object, "player");
		bool var_21_bool; object var_22_object;
		var_17_object = var_22_object;
		func_3131(var_22_object);
		var_21_bool = var_14_bool;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = false;
}


void func_2891(string var_25_string)
{
	object var_27_object;
	if(var_25_string == "heal") {
		@FindActor(var_27_object, "player");
		object var_31_object;
		var_27_object = var_31_object;
		func_3134();
		var_27_object = null;
	}
}


void func_1367(bool var_0_bool, bool var_1_bool, bool var_417_bool, float var_418_float)
{
	string var_426_string;
	func_1706(var_426_string);
	int var_423_int;
	@irand(var_423_int, var_1_bool);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2496();
	@PlayAnimation("all", ("attack_begin" + (var_423_int + 1)));
	@WaitForAnimEnd();
	int var_425_int;
	func_1674(var_425_int, var_426_string);
	bool var_451_bool;
	func_2149(var_451_bool, var_0_bool);
	if(!var_451_bool) { //@nz
		@StopAsync();
		var_417_bool = false;
		return 8;
	}
	float var_454_float; int var_455_int;
	var_418_float = var_454_float;
	var_423_int = var_455_int;
	func_1328(var_426_string, var_454_float, var_455_int);
	bool var_424_bool;
	@HasAnimation(var_424_bool, "all", ("attack_middle" + var_423_int));
	if(var_424_bool != 0) {
		func_2496();
		@PlayAnimation("all", ("attack_middle" + var_423_int));
		@WaitForAnimEnd();
		func_1706(var_426_string);
		bool var_539_bool;
		func_2149(var_539_bool, var_0_bool);
		if(!var_539_bool) { //@nz
			@StopAsync();
			var_417_bool = false;
			return 8;
		}
		float var_542_float; int var_543_int;
		var_418_float = var_542_float;
		func_1328(var_426_string, var_542_float, var_543_int);
		var_425_int = 1;

		for(;;) {
			var_426_string = (("attack_middle" + var_543_int) + "_") + var_425_int;
			@HasAnimation(var_424_bool, "all", var_426_string);
			if(!var_424_bool) { //@nz
			} else {
				func_2496();
				@PlayAnimation("all", var_426_string);
				@WaitForAnimEnd();
				func_1706(var_426_string);
				bool var_565_bool;
				func_2149(var_565_bool, var_0_bool);
				if(!var_565_bool) { //@nz
					@StopAsync();
					var_417_bool = false;
					return 8;
				}
				float var_568_float; int var_569_int;
				var_418_float = var_568_float;
				var_423_int = var_569_int;
				func_1328(var_426_string, var_568_float, var_569_int);
				var_425_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_423_int));
		bool var_554_bool;
		func_1720(var_554_bool);
		if(var_554_bool != 0) {
			bool var_555_bool;
			func_1504(var_555_bool, 0.75);
			@StopAsync();
		}
		var_417_bool = true;
		return 8;

	}
}


void func_2904(string var_149_string, int var_150_int)
{
	string var_152_string = "idle";
	if(var_150_int != 0)
		var_152_string += var_150_int;
	var_152_string = var_149_string;
}


void func_2393(object var_101_object)
{
	object var_103_object;
	@self(var_103_object);
	var_103_object = var_101_object;
}
EMIT "Stack[-1] = 0";


void func_2911(int var_143_int)
{
	int var_146_int; bool var_147_bool;
	var_146_int = 0;
	
	for(;;) {
		string var_149_string; int var_150_int;
		var_146_int = var_150_int;
		func_2904(var_149_string, var_150_int);
		@HasAnimation(var_147_bool, "all", var_149_string);
		if(!var_147_bool) //@nz
			break;
		var_146_int += 1;
	}
	var_146_int = var_143_int;
}


void func_2399(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_54_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_54_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_54_float;
}


// @pe
void func_2409(float var_506_float, float var_507_float, float var_508_float)
{
	if(var_507_float < var_508_float)
		var_507_float = var_506_float;
	else
		var_508_float = var_506_float;
	
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_12_object, var_13_bool);
}


// @pe
void func_2928(int var_56_int)
{
	bool var_58_bool;
	func_3158(var_58_bool);
	if(var_58_bool != 0)
		var_56_int = 2;
	else
		var_56_int = 0;
	
}


// @pe
void func_2416(float var_516_float, float var_517_float, float var_518_float, float var_519_float)
{
	if(var_517_float < var_518_float) {
		var_518_float = var_516_float;
		return 0;
	}
	if(var_517_float > var_519_float) {
		var_519_float = var_516_float;
		return 0;
	}
	var_517_float = var_516_float;
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_17_bool, var_18_int);
}


// @pe
void func_2937(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(3);
	func_775(var_57_object, var_56_object);
	TaskReturn();
}


void func_2427(bool var_38_bool, int var_39_int, int var_40_int)
{
	int var_42_int;
	@irand(var_42_int, var_40_int);
	var_38_bool = var_42_int < var_39_int;
}


// @pe
void func_2432(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_70_float = GetByIndex(var_68_cvector, 0);
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_73_float = GetByIndex(var_68_cvector, 2);
	var_66_float = (var_69_float * var_70_float) + (var_72_float * var_73_float);
}


// @pe
void func_2945(int var_83_int, object var_84_object)
{
	object var_86_object;
	var_84_object = var_86_object;
	bool var_85_bool;
	func_2149(var_85_bool, var_86_object);
	if(var_85_bool != 0)
		var_83_int = 2;
	else
		var_83_int = 0;
	
}


void func_392(bool var_2_bool, object var_14_object)
{
	bool var_19_bool; object var_20_object;
	func_2149(var_19_bool, var_20_object);
	if(!var_19_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_17_bool;
	@IsPlayerActor(var_20_object, var_17_bool);
	if(!var_17_bool) //@nz
		return 4;
	int var_56_int; object var_57_object;
	var_14_object = var_57_object;
	func_2928(var_57_object);
	int var_18_int;
	var_56_int = var_18_int;
	if(var_18_int > 0) {
		if(var_18_int > 1)
			func_375(var_18_int);
		object var_64_object;
		var_14_object = var_64_object;
		func_2937(var_64_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_2441(float var_75_float, cvector var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_80_float = GetByIndex(var_76_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_75_float = sqrt((var_77_float * var_78_float) + (var_80_float * var_81_float));
}


// @pe
void func_2955(object var_120_object)
{
	object var_121_object;
	var_120_object = var_121_object;
	TaskCall(4);
	func_1050(var_121_object);
	TaskReturn();
}


// @pe
void func_2451(float var_63_float, cvector var_64_cvector, cvector var_65_cvector)
{
	cvector var_67_cvector;
	var_64_cvector = var_67_cvector;
	cvector var_68_cvector;
	var_65_cvector = var_68_cvector;
	float var_66_float;
	func_2432(var_66_float, var_67_cvector, var_68_cvector);
	float var_75_float; cvector var_76_cvector;
	var_64_cvector = var_76_cvector;
	func_2441(var_75_float, var_76_cvector);
	float var_84_float; cvector var_85_cvector;
	var_65_cvector = var_85_cvector;
	func_2441(var_84_float, var_85_cvector);
	var_63_float = var_66_float / (var_75_float * var_84_float);
}


// @pe
void func_1940(bool var_0_bool, bool var_1_bool, int var_21_int)
{
	if(var_21_int != 0)
		return 0;
	bool var_24_bool;
	func_1978(var_24_bool, var_1_bool);
	if(!var_24_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2963(bool var_29_bool, object var_30_object, bool var_31_bool)
{
	bool var_36_bool; object var_37_object;
	func_2023(var_36_bool, var_37_object, "class");
	if(!var_36_bool) { //@nz
		var_29_bool = false;
		return 4;
	}
	string var_34_string;
	@GetProperty("class", var_34_string);
	string var_35_string;
	var_37_object->GetProperty("class", var_35_string);
	bool var_48_bool = false;
	if(!var_31_bool) { //@nz
		if(var_34_string == var_35_string)
			var_48_bool = true;
	}
	if(var_48_bool != 0) {
		var_29_bool = true;
		return 4;
	}
	if(var_35_string == "rat") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbdc";
	}
	if(var_35_string == "rat_big") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbdc";
	}
	if(var_35_string == "dog") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbdc";
	}
	if(var_35_string == "grabitel") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbdc";
	}
	if(var_35_string == "bomber") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbdc";
	}
	if(var_35_string == "sanitar") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbdc";
	}
	if(var_35_string == "hunter") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbdc";
	}
	if(var_35_string == "soldier") {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}


void func_2468(float var_524_float)
{
	object var_526_object;
	@CreateFloatVector(var_526_object);
	var_526_object->add(var_524_float);
	@SendWorldWndMessage(15, var_526_object);
}
EMIT "Stack[-1] = 0";


void func_1962(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2478(int var_23_int)
{
	float var_25_float;
	@GetGameTime(var_25_float);
	var_23_int = 1 + (var_25_float / 24);
}


void func_432(bool var_0_bool, bool var_1_bool)
{
	float var_106_float; cvector var_107_cvector; cvector var_108_cvector; bool var_109_bool; object var_110_object; bool var_111_bool;
	@rand(var_106_float, 0.5);
	@Sleep(var_106_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_444:
				@GetPosition(var_108_cvector);
				float var_115_float;
				func_491(var_115_float);
				@GetRandomPFPointInCircle(var_107_cvector, var_108_cvector, var_115_float, var_109_bool);
				if(var_109_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_444;
			}
				var_1_bool = false;
		}
		}
		goto Label_460;

	Label_460:
		object var_119_object; cvector var_120_cvector;
		var_107_cvector = var_120_cvector;
		func_519(var_119_object, var_120_cvector);
		var_119_object = var_110_object;
		if(var_110_object != null) {
			@RotatePath(var_110_object, var_111_bool);
			if(var_111_bool != 0) {
				bool var_125_bool;
				func_517(var_125_bool);
				@FollowPath(var_110_object, var_125_bool, var_111_bool);
				var_110_object = null;
				if(var_111_bool != 0) {
					TaskCall(2);
					func_689();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_110_object = null;
	}
	
}


void func_2487(object var_16_object)
{
	bool var_18_bool;
	@IsPlayerActor(var_16_object, var_18_bool);
	if(var_18_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_1978(bool var_24_bool, object var_25_object)
{
	object var_27_object;
	var_25_object = var_27_object;
	bool var_26_bool;
	func_2149(var_26_bool, var_27_object);
	var_26_bool = var_24_bool;
}


void func_2496(void)
{
	object var_430_object;
	@GetScene(var_430_object);
	object var_432_object;
	func_2393(var_432_object);
	@BroadcastMessage("battle", var_432_object, var_430_object);
}
EMIT "Stack[-1] = 0";


void func_1985(string var_268_string)
{
	var_268_string = "walk";
}


void func_1987(string var_269_string)
{
	var_269_string = "run";
}


// @pe
void func_1989(string var_496_string, int var_497_int)
{
	if(var_497_int == 2) {
		var_496_string = "fire";
		return 0;
	EMIT "GOTO 0x7d1";
	}
	if(var_497_int == 1) {
		var_496_string = "bullet";
		return 0;
	}
	var_496_string = "phys";
}


void func_2507(int var_152_int)
{
	int var_154_int;
	@GetVariable("branch", var_154_int);
	var_154_int = var_152_int;
}


void func_974(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_2513(object var_30_object)
{
	int var_31_int;
	func_2507(var_31_int);
	if(var_31_int == 1)
		@WorkWithCorpse(var_30_object);
	else
		@Barter(var_30_object);
	
}


void func_2003(cvector var_47_cvector, object var_48_object)
{
	cvector var_51_cvector;
	@GetPosition(var_51_cvector);
	cvector var_52_cvector;
	var_48_object->GetPosition(var_52_cvector);
	var_47_cvector = var_52_cvector - var_51_cvector;
}


void func_2010(float var_31_float, object var_32_object)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_32_object->GetPosition(var_37_cvector);
	var_31_float = (var_37_cvector - var_36_cvector) | (var_37_cvector - var_36_cvector);
}


// @pe
void func_3038(int var_80_int, object var_81_object)
{
	object var_84_object;
	var_81_object = var_84_object;
	int var_83_int;
	func_2945(var_83_int, var_84_object);
	var_83_int = var_80_int;
}


void func_2526(int var_110_int, int var_111_int)
{
	if(var_110_int > var_111_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_123_int = 0;
	if(var_110_int != var_111_int) {
		@irand(var_123_int, (var_111_int - var_110_int));
	} else if(var_110_int == 0) {
		return 4;
	}
	var_123_int += var_110_int;
	if(var_123_int == 0)
		return 4;
	int var_131_int;
	func_2726(var_131_int, "Money");
	bool var_124_bool;
	@AddItem(var_124_bool, var_131_int, 0, var_123_int);
	
}


void func_1504(bool var_555_bool, float var_556_float)
{
	float var_559_float; bool var_560_bool;
	@rand(var_559_float);
	if(var_559_float < var_556_float) {

		for(;;) {
			@IsAnimationPlaying(var_560_bool);
			if(!var_560_bool) { //@nz
			} else {
				bool var_563_bool;
				func_1602(var_563_bool);
				if(var_563_bool != 0) {
					var_555_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_555_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1706(var_560_bool);
}


void func_2018(bool var_97_bool, object var_98_object)
{
	bool var_100_bool;
	@IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
}


// @pe
void func_3045(object var_119_object)
{
	object var_120_object;
	var_119_object = var_120_object;
	func_2955(var_120_object);
}


void func_2023(bool var_48_bool, object var_49_object, string var_50_string)
{
	var_55_bool = IsFuncExist(var_49_object, "HasProperty", 2);
	if(!var_55_bool) { //@nz
		var_48_bool = false;
		return 2;
	}
	bool var_52_bool;
	var_49_object->HasProperty(var_50_string, var_52_bool);
	var_52_bool = var_48_bool;
}


void func_491(float var_115_float)
{
	float var_117_float;
	@GetCameraFarDistance(var_117_float);
	var_117_float = var_115_float;
}


void func_3051(bool var_22_bool, object var_23_object, object var_24_object, float var_25_float, bool var_26_bool)
{
	object var_30_object;
	var_24_object = var_30_object;
	bool var_29_bool;
	func_2963(var_29_bool, var_30_object, !var_26_bool);
	if(!var_29_bool) { //@nz
		var_22_bool = false;
		return 2;
	}
	bool var_28_bool;
	@CanSee(var_28_bool, var_23_object);
	bool var_68_bool = true;
	if(var_28_bool != 1) {
		float var_70_float; object var_71_object;
		var_23_object = var_71_object;
		func_2010(var_70_float, var_71_object);
		var_79_bool = var_70_float <= (var_25_float * var_25_float);
		if(var_79_bool != 1)
			var_68_bool = false;
	}
	if(var_68_bool != 0) {
		var_22_bool = true;
		return 2;
	}
	var_22_bool = false;
}


void func_2035(float var_468_float, object var_469_object, float var_470_float, int var_471_int)
{
	int var_481_int; int var_483_int;
	object var_488_object;
	var_469_object = var_488_object;
	bool var_487_bool;
	func_2023(var_487_bool, var_488_object, "health");
	if(!var_487_bool) //@nz
		var_468_float = 0.0;
	bool var_491_bool; object var_492_object;
	func_2023(var_491_bool, var_492_object, "armor");
	if(!var_491_bool) //@nz
		var_481_int = 0;
	else
		var_492_object->GetProperty("armor", var_481_int);
	string var_496_string; int var_497_int;
	var_471_int = var_497_int;
	func_1989(var_496_string, var_497_int);
	string var_482_string = "armor_" + var_496_string;
	bool var_502_bool; object var_503_object; string var_504_string;
	var_469_object = var_503_object;
	func_2023(var_502_bool, var_503_object, var_504_string);
	if(!var_502_bool) //@nz
		var_483_int = 0;
	else
		var_469_object->GetProperty(var_504_string, var_483_int);

	float var_506_float;
	func_2409(var_506_float, ((var_481_int + var_483_int) / 100.0), (float)1);
	float var_484_float;
	var_506_float = var_484_float;
	float var_485_float;
	var_469_object->GetProperty("health", var_485_float);
	float var_486_float = var_470_float * (1 - var_484_float);
	float var_516_float;
	func_2416(var_516_float, (var_485_float - var_486_float), (float)0, (float)1);
	var_469_object->SetProperty("health", var_516_float);
	bool var_522_bool; object var_523_object;
	var_469_object = var_523_object;
	func_2018(var_522_bool, var_523_object);
	if(var_522_bool != 0) {
		float var_524_float = -var_486_float;
		func_2468(var_524_float);
	}
	var_486_float = var_468_float;
	
}


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1531(bool var_0_bool, bool var_356_bool, float var_357_float)
{
	bool var_363_bool; cvector var_364_cvector; cvector var_365_cvector; cvector var_366_cvector; float var_367_float;
	
	for(;;) {
		@IsAnimationPlaying(var_363_bool);
		if(!var_363_bool) //@nz
			break;
		bool var_369_bool;
		func_1602(var_369_bool);
		if(var_369_bool != 0) {
			var_356_bool = true;
			return 10;
		}
		bool var_412_bool;
		func_2149(var_412_bool, var_0_bool);
		if(!var_412_bool) { //@nz
			var_356_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_364_cvector); //@t
		@GetPFPosition(var_365_cvector);
		var_366_cvector = var_364_cvector - var_365_cvector;
		var_367_float = var_366_cvector | var_366_cvector;
		if(var_367_float < (var_357_float * var_357_float)) {
			bool var_417_bool; float var_418_float;
			var_357_float = var_418_float;
			func_1367(var_366_cvector, var_367_float, var_417_bool, var_418_float);
			var_356_bool = true;
			return 10;
		}
		@sync();
	}
	func_1706(var_367_float);
	var_356_bool = false;
}


void func_2557(string var_158_string)
{
	object var_162_object;
	@CreateInvItem(var_162_object);
	var_162_object->SetItemName(var_158_string);
	var_162_object->SetProperty("Organ", 1);
	int var_163_int;
	var_162_object->GetItemID(var_163_int);
	bool var_164_bool;
	@AddItem(var_164_bool, var_162_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


