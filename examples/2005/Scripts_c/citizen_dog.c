// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_3033(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			object var_23_object;
			var_16_bool = var_23_object;
			func_3036(var_23_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_3042();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool, object var_17_object, cvector var_18_cvector, bool var_19_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		@SensePlayerOnly(true);
		func_3081();
		func_171();
	
		for(;;) {
			var_2_bool = false;
			func_432(var_14_cvector, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_3033(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_367(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_3036(var_26_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2805(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2888(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_367(var_18_int);
			object var_69_object;
			var_16_bool = var_69_object;
			func_2898(var_69_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_16_object = var_22_object;
		object var_23_object;
		var_17_cvector = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		bool var_21_bool;
		func_3089(var_21_bool, var_22_object, var_23_object, var_24_bool);
		if(var_21_bool != 0) {
			int var_83_int; object var_84_object; bool var_85_bool;
			var_16_object = var_84_object;
			var_18_bool = var_85_bool;
			func_2981(var_84_object, var_85_bool);
			var_83_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_367(var_20_int);
				object var_121_object;
				var_16_object = var_121_object;
				func_2988(var_121_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_3023(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_367(var_18_int);
			object var_26_object;
			var_16_bool = var_26_object;
			func_3026();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_cvector = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_2719(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_367(var_19_int);
			object var_49_object; string var_50_string;
			var_16_cvector = var_49_object;
			var_17_bool = var_50_string;
			func_2751(var_49_object, var_50_string);
		} else {
			int var_132_int; string var_133_string; object var_134_object;
			var_17_bool = var_133_string;
			var_16_cvector = var_134_object;
			func_3028(var_134_object);
			var_132_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_308;
			if(var_19_int > 1)
				func_367(var_19_int);
			string var_139_string; object var_140_object;
			var_17_bool = var_139_string;
			var_16_cvector = var_140_object;
			func_3031();
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool; string var_18_string;
		func_2818(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_367(var_18_string);
			string var_27_string;
			var_16_bool = var_27_string;
			func_2834(var_27_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool; object var_18_object;
		func_2776(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_367(var_18_object);
			object var_30_object;
			var_16_bool = var_30_object;
			func_2799(var_30_object);
		} else {
			object var_32_object;
			func_392(var_32_object, var_32_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_17_object;
		func_392(var_17_object, var_17_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_367(var_15_bool);
		func_3042();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_367(var_16_bool);
		object var_18_object;
		var_16_bool = var_18_object;
		func_2695();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_3033(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_770();
			object var_25_object;
			var_16_bool = var_25_object;
			func_3036(var_25_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2805(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2888(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_770();
			object var_68_object;
			var_16_bool = var_68_object;
			func_2898(var_68_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_16_object = var_22_object;
		object var_23_object;
		var_17_cvector = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		bool var_21_bool;
		func_3089(var_21_bool, var_22_object, var_23_object, var_24_bool);
		if(var_21_bool != 0) {
			int var_83_int; object var_84_object; bool var_85_bool;
			var_16_object = var_84_object;
			var_18_bool = var_85_bool;
			func_2981(var_84_object, var_85_bool);
			var_83_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_770();
				object var_120_object;
				var_16_object = var_120_object;
				func_2988(var_120_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_3023(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_770();
			object var_25_object;
			var_16_bool = var_25_object;
			func_3026();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_cvector = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_2719(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_770();
			object var_48_object; string var_49_string;
			var_16_cvector = var_48_object;
			var_17_bool = var_49_string;
			func_2751(var_48_object, var_49_string);
		} else {
			int var_131_int; string var_132_string; object var_133_object;
			var_17_bool = var_132_string;
			var_16_cvector = var_133_object;
			func_3028(var_133_object);
			var_131_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_653;
			if(var_19_int > 1)
				func_770();
			string var_138_string; object var_139_object;
			var_17_bool = var_138_string;
			var_16_cvector = var_139_object;
			func_3031();
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		string var_18_string;
		var_16_bool = var_18_string;
		bool var_17_bool;
		func_2818(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_770();
			string var_26_string;
			var_16_bool = var_26_string;
			func_2834(var_26_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_770();
		func_3042();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2776(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_770();
			object var_29_object;
			var_16_bool = var_29_object;
			func_2799(var_29_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_3033(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_974();
			object var_27_object;
			var_16_bool = var_27_object;
			func_3036(var_27_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2805(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2888(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_974();
			object var_70_object;
			var_16_bool = var_70_object;
			func_2898(var_70_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, cvector var_17_cvector, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_16_object = var_22_object;
		object var_23_object;
		var_17_cvector = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		bool var_21_bool;
		func_3089(var_21_bool, var_22_object, var_23_object, var_24_bool);
		if(var_21_bool != 0) {
			int var_83_int; object var_84_object; bool var_85_bool;
			var_16_object = var_84_object;
			var_18_bool = var_85_bool;
			func_2981(var_84_object, var_85_bool);
			var_83_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_974();
				object var_122_object;
				var_16_object = var_122_object;
				func_2988(var_122_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_3023(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_974();
			object var_27_object;
			var_16_bool = var_27_object;
			func_3026();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, float var_10_float, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_cvector = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_2719(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_974();
			object var_50_object; string var_51_string;
			var_16_cvector = var_50_object;
			var_17_bool = var_51_string;
			func_2751(var_50_object, var_51_string);
		} else {
			int var_133_int; string var_134_string; object var_135_object;
			var_17_bool = var_134_string;
			var_16_cvector = var_135_object;
			func_3028(var_135_object);
			var_133_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_959;
			if(var_19_int > 1)
				func_974();
			string var_140_string; object var_141_object;
			var_17_bool = var_140_string;
			var_16_cvector = var_141_object;
			func_3031();
		}
	Label_959:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		string var_18_string;
		var_16_bool = var_18_string;
		bool var_17_bool;
		func_2818(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_974();
			string var_28_string;
			var_16_bool = var_28_string;
			func_2834(var_28_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_974();
		object var_19_object;
		var_16_bool = var_19_object;
		func_2695();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool != 111)
			return 4;
		bool var_23_bool;
		func_2348(var_23_bool, var_0_bool);
		if(!var_23_bool) { //@nz
			func_974();
			return 4;
		}
		cvector var_19_cvector;
		@GetDirection(var_19_cvector);
		cvector var_60_cvector;
		func_2202(var_60_cvector, var_0_bool);
		cvector var_20_cvector;
		var_60_cvector = var_20_cvector;
		float var_66_float; cvector var_67_cvector; cvector var_68_cvector;
		var_19_cvector = var_67_cvector;
		var_20_cvector = var_68_cvector;
		func_2627(var_66_float, var_67_cvector, var_68_cvector);
		if(var_66_float < 0.49999997)
			func_2498(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_974();
		func_3042();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2776(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_974();
			object var_31_object;
			var_16_bool = var_31_object;
			func_2799(var_31_object);
		}
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_1796(var_15_bool);
		func_3042();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, int var_13_int, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		if(var_16_bool == 1) {
			func_2654(var_1_bool);
		} else {
			int var_24_int;
			func_1940(var_15_cvector, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool = false;
		if(var_1_bool == var_16_bool) {
			if(!var_2_bool) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_bool = true;
			object var_20_object;
			var_16_bool = var_20_object;
			func_2514(var_20_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		bool var_17_bool = false;
		if(var_1_bool == var_16_bool) {
			if(var_2_bool != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		func_1796(var_16_bool);
		object var_21_object;
		var_16_bool = var_21_object;
		func_2695();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		func_2151(var_15_bool);
		func_3042();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, int var_16_int)
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
			func_1996(var_24_float, var_30_cvector, 1.7453294);
			var_30_cvector = var_23_cvector;
			var_24_float = var_23_cvector | var_23_cvector;
			bool var_60_bool = false;
			if(var_24_float >= 2500.0) {
				bool var_63_bool;
				var_67_bool = var_24_float >= ((var_22_float * var_22_float) * 2.25);
				if(var_67_bool != 1) {
					bool var_68_bool;
					func_2167(true, var_68_bool);
					if(var_68_bool != 1)
						var_63_bool = false;
				}
				if(var_63_bool != 0)
					var_60_bool = true;
			}
			if(var_60_bool == 0) goto Label_2150;
			@Stop();
			cvector var_88_cvector;
			func_2197(var_88_cvector);
			var_1_bool = var_88_cvector + var_23_cvector;
		}
	Label_2150:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object)
	{
		func_2151(var_16_object);
		object var_18_object;
		var_16_object = var_18_object;
		func_2695();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_2674(var_17_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_2416(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
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
	func_2484(var_24_float, var_25_cvector, var_26_cvector);
}


// @pe
void func_0(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_33(var_19_object);
	object var_99_object;
	var_18_object = var_99_object;
	func_3099(var_99_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_3074(void)
{
}


// @pe
void func_3076(bool var_24_bool)
{
	var_24_bool = false;
}


void func_517(bool var_47_bool)
{
	var_47_bool = false;
}


void func_2566(object var_104_object)
{
	object var_106_object;
	@self(var_106_object);
	var_106_object = var_104_object;
}
EMIT "Stack[-1] = 0";


void func_519(object var_41_object, cvector var_42_cvector)
{
	object var_44_object;
	@FindShiftedPathTo(var_44_object, var_42_cvector);
	var_44_object = var_41_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_3079(void)
{
}


void func_3081(void)
{
	var_17_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_2572(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


// @pe
void func_3085(void)
{
}


void func_3087(bool var_61_bool)
{
	var_61_bool = false;
}


// @pe
void func_3089(bool var_21_bool, object var_22_object, object var_23_object, bool var_24_bool)
{
	object var_26_object;
	var_22_object = var_26_object;
	object var_27_object;
	var_23_object = var_27_object;
	bool var_29_bool;
	var_24_bool = var_29_bool;
	bool var_25_bool;
	func_2994(var_25_bool, var_26_object, var_27_object, 500.0, var_29_bool);
	var_25_bool = var_21_bool;
}


// @pe
void func_2582(float var_509_float, float var_510_float, float var_511_float)
{
	if(var_510_float < var_511_float)
		var_510_float = var_509_float;
	else
		var_511_float = var_509_float;
	
}


// @pe
void func_1050(object var_124_object)
{
	object var_131_object;
	func_1064(var_127_int, var_128_bool, var_129_float, var_130_int, var_131_object, var_131_object, true, 180.0);
}


// @pe
void func_3099(object var_99_object)
{
	bool var_100_bool; object var_101_object;
	func_2217(var_100_bool, var_101_object);
	if(var_100_bool != 0) {
		object var_104_object;
		func_2566(var_104_object);
		@ReportReputationChange(var_101_object, var_104_object, 0.0, true);
	}
	var_109_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


// @pe
void func_2589(float var_519_float, float var_520_float, float var_521_float, float var_522_float)
{
	if(var_520_float < var_521_float) {
		var_521_float = var_519_float;
		return 0;
	}
	if(var_520_float > var_522_float) {
		var_522_float = var_519_float;
		return 0;
	}
	var_520_float = var_519_float;
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
		func_2525(var_94_string);
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


// @pe
void func_1058(float var_468_float)
{
	var_468_float = 0.2;
}


// @pe
void func_1061(int var_475_int)
{
	var_475_int = 0;
}


void func_1574(bool var_0_bool, bool var_374_bool)
{
	cvector var_380_cvector; cvector var_381_cvector;
	bool var_385_bool;
	func_2348(var_385_bool, var_0_bool);
	if(!var_385_bool) { //@nz
		var_374_bool = false;
		return 10;
	}
	bool var_388_bool;
	float var_384_float;
	func_1663(var_384_float, var_388_bool);
	if(var_388_bool != 0) {
		var_0_bool->GetPFPosition(var_380_cvector); //@t
		@GetPFPosition(var_381_cvector);
		var_0_bool->GetAttackDistance(var_384_float); //@t
		var_374_bool = ((var_380_cvector - var_381_cvector) | (var_380_cvector - var_381_cvector)) <= ((var_384_float + 50) * (var_384_float + 50));
		return 10;
	}
	var_374_bool = false;
}


void func_1064(bool var_0_bool, object var_3_object, object var_5_object, object var_131_object, bool var_132_bool, float var_133_float, bool var_208_bool, bool var_300_bool)
{
	float var_145_float; cvector var_146_cvector; cvector var_147_cvector; bool var_149_bool; float var_152_float; cvector var_153_cvector; bool var_154_bool; float var_155_float;
	func_1293(var_153_cvector, var_154_bool, var_155_float);
	var_5_object = 0;
	var_180_bool = IsFuncExist(var_131_object, "@GetAttackDistance", 1);
	if(var_180_bool != 0) {
		var_131_object->GetAttackDistance(var_145_float);
		var_145_float += 50;
	} else {
						var_133_float = var_145_float;
	}
	if(var_145_float >= 150)
		var_145_float = 150;
	var_3_object = false;
	var_0_bool = var_131_object;
	bool var_148_bool;
	@IsPlayerActor(var_0_bool, var_148_bool);
	if(var_148_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_186_object;
		func_2566(var_186_object);
		@SendPlayerEnemy(var_131_object, var_186_object);
	}
	if(var_132_bool != 0)
		var_149_bool = false;
	else
		var_149_bool = true;

	
Label_1104:
	for(;;) {
		bool var_191_bool = false;
		bool var_192_bool;
		func_2348(var_192_bool, var_0_bool);
		if(var_192_bool != 0) {
			if(!var_3_object) //@nz
				var_191_bool = true;
		}
		if(var_191_bool != 0) {
			func_1706(var_155_float);
			var_0_bool->GetPFPosition(var_146_cvector); //@t
			@GetPFPosition(var_147_cvector);
			var_152_float = (var_146_cvector - var_147_cvector) | (var_146_cvector - var_147_cvector);
			if(var_152_float >= ((400.0 + var_145_float) * (400.0 + var_145_float))) {
				bool var_202_bool; float var_204_float;
				var_145_float = var_204_float;
				TaskCall(5);
				func_1733(var_210_bool, var_202_bool, var_0_bool, var_204_float, 3000.0, true, false);
				TaskReturn();
				if(!var_208_bool) { //@nz
				} else {
					var_149_bool = false;
			} else {
			if(var_152_float >= (var_133_float * var_133_float)) {
				var_0_bool->GetPFPosition(var_153_cvector); //@t
				@CanReachByPF(var_154_bool, var_153_cvector);
				if(!var_154_bool) { //@nz
					bool var_294_bool; float var_296_float;
					var_145_float = var_296_float;
					TaskCall(5);
					func_1733(var_302_bool, var_294_bool, var_0_bool, var_296_float, 3000.0, true, false);
					TaskReturn();
					if(!var_300_bool) { //@nz
						goto Label_1276;
					}
					var_149_bool = false;
					goto Label_1104;
				}
				if(!var_149_bool) { //@nz
					func_2498(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1706(var_155_float);
					@StopAsync();
					var_149_bool = true;
					bool var_316_bool;
					func_2348(var_316_bool, var_0_bool);
					if(!var_316_bool) { //@nz
						goto Label_1276;
					}
				}
				@rand(var_155_float);
				bool var_319_bool;
				var_321_bool = var_155_float < 0.25;
				if(var_321_bool != 1) {
					bool var_322_bool;
					func_1663(true, var_322_bool);
					if(var_322_bool != 1)
						var_319_bool = false;
				}
				if(var_319_bool != 0) {
					@Face(var_0_bool);
					func_1713();
					@PlayAnimation("all", "attack_stay");
					bool var_359_bool; float var_360_float;
					func_1531(var_155_float, var_359_bool, var_360_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1706(var_155_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_577_bool;
					func_1663(var_155_float, var_577_bool);
					var_578_bool = !var_577_bool; //@nz
					if(var_578_bool == 0) goto Label_1266;
					bool var_579_bool;
					func_2348(var_579_bool, var_0_bool);
					if(!var_579_bool) { //@nz
						goto Label_1276;
					}
					var_0_bool->GetPFPosition(var_146_cvector); //@t
					@GetPFPosition(var_147_cvector);
					if(!(((var_146_cvector - var_147_cvector) | (var_146_cvector - var_147_cvector)) < (var_360_float * var_360_float))) goto Label_1266;
					bool var_584_bool; float var_585_float;
					var_133_float = var_585_float;
					func_1367(var_154_bool, var_155_float, var_584_bool, var_585_float);
					var_586_bool = !var_584_bool; //@nz
					if(var_586_bool == 0) goto Label_1266;
					goto Label_1276;
			}
				bool var_587_bool; float var_588_float;
				var_133_float = var_588_float;
				func_1367(var_154_bool, var_155_float, var_587_bool, var_588_float);
				if(!var_587_bool) { //@nz
					goto Label_1276;
				}
				var_149_bool = true;

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
		if(var_148_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_2600(float var_79_float, cvector var_80_cvector, cvector var_81_cvector)
{
	var_86_float = sqrt((var_80_cvector | var_80_cvector) * (var_81_cvector | var_81_cvector));
	var_79_float = (var_80_cvector | var_81_cvector) / var_86_float;
}


// @pe
void func_2608(float var_69_float, cvector var_70_cvector, cvector var_71_cvector)
{
	var_72_float = GetByIndex(var_70_cvector, 0);
	var_73_float = GetByIndex(var_71_cvector, 0);
	var_75_float = GetByIndex(var_70_cvector, 2);
	var_76_float = GetByIndex(var_71_cvector, 2);
	var_69_float = (var_72_float * var_73_float) + (var_75_float * var_76_float);
}


// @pe
void func_3063(object var_57_object)
{
	object var_58_object;
	var_57_object = var_58_object;
	TaskCall(6);
	func_2026(var_59_object, var_60_cvector, var_61_bool, var_58_object);
	TaskReturn();
}


// @pe
void func_2617(float var_78_float, cvector var_79_cvector)
{
	var_80_float = GetByIndex(var_79_cvector, 0);
	var_81_float = GetByIndex(var_79_cvector, 0);
	var_83_float = GetByIndex(var_79_cvector, 2);
	var_84_float = GetByIndex(var_79_cvector, 2);
	var_78_float = sqrt((var_80_float * var_81_float) + (var_83_float * var_84_float));
}


void func_1602(bool var_372_bool)
{
	bool var_373_bool = false;
	bool var_374_bool;
	func_1574(var_373_bool, var_374_bool);
	if(var_374_bool != 0) {
		bool var_391_bool;
		func_1618(var_372_bool, var_373_bool, var_391_bool);
		if(var_391_bool != 0)
			var_373_bool = true;
	}
	if(var_373_bool != 0) {
		var_372_bool = true;
		return 0;
	}
	var_372_bool = false;
}


// @pe
void func_2627(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	cvector var_70_cvector;
	var_67_cvector = var_70_cvector;
	cvector var_71_cvector;
	var_68_cvector = var_71_cvector;
	float var_69_float;
	func_2608(var_69_float, var_70_cvector, var_71_cvector);
	float var_78_float; cvector var_79_cvector;
	var_67_cvector = var_79_cvector;
	func_2617(var_78_float, var_79_cvector);
	float var_87_float; cvector var_88_cvector;
	var_68_cvector = var_88_cvector;
	func_2617(var_87_float, var_88_cvector);
	var_66_float = var_69_float / (var_78_float * var_87_float);
}


void func_1618(bool var_0_bool, object var_4_object, bool var_391_bool)
{
	object var_397_object; float var_399_float; cvector var_400_cvector; cvector var_401_cvector;
	@GetScene(var_397_object);
	bool var_398_bool = false;
	
	for(;;) {
		cvector var_402_cvector;
		func_2202(var_402_cvector, var_0_bool);
		var_408_int = -var_402_cvector;
		@FindDirLength(var_399_float, var_408_int, var_4_object);
		if(var_399_float < var_4_object) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_400_cvector); //@t
				@GetPFPosition(var_401_cvector);
				@WaitForAnimEnd();
				func_1706(var_401_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_398_bool = true;
				bool var_413_bool;
				func_1574(var_401_cvector, var_413_bool);
				var_414_bool = !var_413_bool; //@nz
				if(var_414_bool == 0) goto Label_1659;
		}
		for(;;) {
			var_398_bool = var_391_bool;

		}

	Label_1659:
	}
}
EMIT "Stack[-5] = 0";


void func_2644(float var_527_float)
{
	object var_529_object;
	@CreateFloatVector(var_529_object);
	var_529_object->add(var_527_float);
	@SendWorldWndMessage(15, var_529_object);
}
EMIT "Stack[-1] = 0";


void func_2654(object var_19_object)
{
	bool var_21_bool;
	@IsPlayerActor(var_19_object, var_21_bool);
	if(var_21_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2663(void)
{
	object var_433_object;
	@GetScene(var_433_object);
	object var_435_object;
	func_2566(var_435_object);
	@BroadcastMessage("battle", var_435_object, var_433_object);
}
EMIT "Stack[-1] = 0";


void func_2151(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_2674(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	TaskCall(0);
	func_0(var_18_object);
	TaskReturn();
}


void func_2167(bool var_0_bool, bool var_68_bool)
{
	cvector var_71_cvector;
	@GetDirection(var_71_cvector);
	cvector var_73_cvector;
	func_2202(var_73_cvector, var_0_bool);
	cvector var_72_cvector;
	var_73_cvector = var_72_cvector;
	float var_79_float; cvector var_80_cvector; cvector var_81_cvector;
	var_71_cvector = var_80_cvector;
	var_72_cvector = var_81_cvector;
	func_2600(var_79_float, var_80_cvector, var_81_cvector);
	var_68_bool = var_79_float >= -0.34202012;
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
	func_2525(var_42_string);
	@PlayAnimation("all", var_41_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_41_string);
	@RemoveEnvelope();
}


void func_1663(bool var_0_bool, bool var_322_bool)
{
	bool var_324_bool;
	var_327_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_327_bool != 0) {
		var_0_bool->IsAttacking(var_324_bool); //@t
		var_324_bool = var_322_bool;
	}
	var_322_bool = false;
}


// @pe
void func_2183(string var_499_string, int var_500_int)
{
	if(var_500_int == 2) {
		var_499_string = "fire";
		return 0;
	EMIT "GOTO 0x893";
	}
	if(var_500_int == 1) {
		var_499_string = "bullet";
		return 0;
	}
	var_499_string = "phys";
}


void func_1674(bool var_2_bool, object var_5_object)
{
	int var_442_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_object != 0) {
		if((var_5_object + -1) > 0)
			return 4;
	}
	float var_441_float;
	@rand(var_441_float);
	float var_448_float;
	func_1724(var_448_float);
	if(var_441_float < var_448_float) {
		@irand(var_442_int, var_2_bool);
		@Speak("attack" + (var_442_int + 1));
		int var_453_int;
		func_1722(var_453_int);
		var_5_object = var_453_int;
	}
}


void func_2197(cvector var_88_cvector)
{
	cvector var_90_cvector;
	@GetPosition(var_90_cvector);
	var_90_cvector = var_88_cvector;
}


void func_2202(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


// @pe
void func_2719(bool var_20_bool, object var_21_object, string var_22_string)
{
	if(var_22_string == "unholster") {
		bool var_25_bool; object var_26_object;
		var_21_object = var_26_object;
		func_3043(var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xabd";
	}
	if(var_22_string == "player_shot") {
		bool var_29_bool; object var_30_object;
		var_21_object = var_30_object;
		func_3048(var_29_bool, var_30_object);
		var_29_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xabd";
	}
	if(var_22_string == "battle") {
		bool var_46_bool; object var_47_object;
		var_21_object = var_47_object;
		func_3071(var_47_object);
		var_46_bool = var_20_bool;
		return 0;
	}
	var_20_bool = false;
}


void func_2209(float var_34_float, object var_35_object)
{
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	var_35_object->GetPosition(var_40_cvector);
	var_34_float = (var_40_cvector - var_39_cvector) | (var_40_cvector - var_39_cvector);
}


void func_2217(bool var_100_bool, object var_101_object)
{
	bool var_103_bool;
	@IsPlayerActor(var_101_object, var_103_bool);
	var_103_bool = var_100_bool;
}


void func_1706(bool var_0_bool)
{
	func_2654(var_0_bool);
}


void func_171(void)
{
	bool var_18_bool;
	func_2509(var_18_bool);
	if(!var_18_bool) //@nz
		func_3042();
}


void func_2222(bool var_51_bool, object var_52_object, string var_53_string)
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


void func_1711(int var_532_int)
{
	var_532_int = 0;
}


void func_689(void)
{
	int var_58_int; int var_59_int; bool var_60_bool; float var_61_float; bool var_62_bool;
	@WaitForAnimEnd();
	bool var_63_bool;
	func_2509(var_63_bool);
	if(!var_63_bool) //@nz
		return 14;
	int var_65_int;
	func_2854(var_65_int);
	int var_56_int;
	var_65_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_78_bool = false;
		if(var_57_int < 5) {
			bool var_81_bool;
			func_2509(var_81_bool);
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
				func_2847(var_87_string, var_88_int);
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


void func_1713(void)
{
	func_2525("attack_stay");
}


// @pe
void func_1718(void)
{
}


void func_1720(bool var_557_bool)
{
	var_557_bool = true;
}


void func_2234(float var_471_float, object var_472_object, float var_473_float, int var_474_int)
{
	int var_484_int; int var_486_int;
	object var_491_object;
	var_472_object = var_491_object;
	bool var_490_bool;
	func_2222(var_490_bool, var_491_object, "health");
	if(!var_490_bool) //@nz
		var_471_float = 0.0;
	bool var_494_bool; object var_495_object;
	func_2222(var_494_bool, var_495_object, "armor");
	if(!var_494_bool) //@nz
		var_484_int = 0;
	else
		var_495_object->GetProperty("armor", var_484_int);
	string var_499_string; int var_500_int;
	var_474_int = var_500_int;
	func_2183(var_499_string, var_500_int);
	string var_485_string = "armor_" + var_499_string;
	bool var_505_bool; object var_506_object; string var_507_string;
	var_472_object = var_506_object;
	func_2222(var_505_bool, var_506_object, var_507_string);
	if(!var_505_bool) //@nz
		var_486_int = 0;
	else
		var_472_object->GetProperty(var_507_string, var_486_int);

	float var_509_float;
	func_2582(var_509_float, ((var_484_int + var_486_int) / 100.0), (float)1);
	float var_487_float;
	var_509_float = var_487_float;
	float var_488_float;
	var_472_object->GetProperty("health", var_488_float);
	float var_489_float = var_473_float * (1 - var_487_float);
	float var_519_float;
	func_2589(var_519_float, (var_488_float - var_489_float), (float)0, (float)1);
	var_472_object->SetProperty("health", var_519_float);
	bool var_525_bool; object var_526_object;
	var_472_object = var_526_object;
	func_2217(var_525_bool, var_526_object);
	if(var_525_bool != 0) {
		float var_527_float = -var_489_float;
		func_2644(var_527_float);
	}
	var_489_float = var_471_float;
	
}


void func_1722(int var_453_int)
{
	var_453_int = 1;
}


void func_1724(float var_448_float)
{
	var_448_float = 0.5;
}


// @pe
void func_2751(object var_50_object, string var_51_string)
{
	if(var_51_string == "unholster") {
		object var_54_object;
		var_50_object = var_54_object;
		func_3046();
	} else if(var_51_string == "player_shot") {
			object var_57_object;
			var_50_object = var_57_object;
			func_3063(var_57_object);
	}
Label_2775:
	for(;;) {

	}
	
	if(!(var_51_string == "battle")) goto Label_2775;
	object var_132_object;
	var_50_object = var_132_object;
	func_3074();
}


void func_1733(bool var_2_bool, bool var_202_bool, object var_203_object, float var_204_float, float var_205_float, bool var_206_bool, bool var_207_bool)
{
	object var_215_object;
	func_2654(var_215_object);
	@SetTimer(1, 5);
	bool var_213_bool;
	@CanSee(var_213_bool, var_215_object);
	if(var_213_bool != 0) {
		var_2_bool = true;
		object var_219_object;
		var_203_object = var_219_object;
		func_2514(var_219_object);
	} else {
		var_2_bool = false;
	}
	bool var_226_bool; object var_227_object;
	func_2217(var_226_bool, var_227_object);
	if(var_226_bool != 0) {
		object var_230_object;
		func_2566(var_230_object);
		@SendPlayerEnemy(var_227_object, var_230_object);
	}
	bool var_231_bool; object var_232_object; float var_233_float; float var_234_float; bool var_235_bool; bool var_236_bool;
	var_203_object = var_232_object;
	var_204_float = var_233_float;
	var_205_float = var_234_float;
	var_206_bool = var_235_bool;
	var_207_bool = var_236_bool;
	bool var_214_bool;
	func_1838(var_213_bool, var_214_bool, var_231_bool, var_232_object, var_233_float, var_234_float, var_235_bool, var_236_bool);
	var_231_bool = var_214_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_214_bool = var_202_bool;
	
}


void func_2776(bool var_17_bool, object var_18_object)
{
	bool var_20_bool;
	bool var_21_bool = false;
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_3043(var_23_object);
	if(var_22_bool != 0) {
		bool var_24_bool; object var_25_object;
		func_2217(var_24_bool, var_25_object);
		if(var_24_bool != 0)
			var_21_bool = true;
	}
	if(var_21_bool != 0) {
		var_25_object->IsWeaponHolstered(var_20_bool);
		if(!var_20_bool) //@nz
			var_17_bool = true;
	}
	var_17_bool = false;
}


// @pe
void func_2799(object var_31_object)
{
	object var_32_object;
	var_31_object = var_32_object;
	func_3046();
}


// @pe
void func_2805(object var_19_object)
{
	bool var_20_bool; object var_21_object;
	func_2217(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		object var_24_object;
		func_2566(var_24_object);
		@ReportReputationChange(var_21_object, var_24_object, 0.0);
	}
}


void func_768(bool var_90_bool)
{
	var_90_bool = true;
}


void func_2818(bool var_17_bool, string var_18_string)
{
	object var_20_object;
	if(var_18_string == "heal") {
		@FindActor(var_20_object, "player");
		bool var_24_bool; object var_25_object;
		var_20_object = var_25_object;
		func_3076(var_25_object);
		var_24_bool = var_17_bool;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = false;
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
	func_1962(var_16_bool);
}


void func_2307(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_775(bool var_0_bool, object var_68_object)
{
	var_0_bool = var_68_object;
	bool var_75_bool;
	func_826(var_75_bool);
	cvector var_73_cvector;
	@GetDirection(var_73_cvector);
	cvector var_83_cvector;
	func_2202(var_83_cvector, var_0_bool);
	cvector var_74_cvector;
	var_83_cvector = var_74_cvector;
	float var_89_float; cvector var_90_cvector; cvector var_91_cvector;
	var_73_cvector = var_90_cvector;
	var_74_cvector = var_91_cvector;
	func_2627(var_89_float, var_90_cvector, var_91_cvector);
	if(var_89_float < 0) {
		func_2498(var_0_bool);
		var_75_bool = true;
	} else {
		@Sleep(1.5, var_75_bool);
	}
	if(var_75_bool != 0) {
		func_2498(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_2312(bool var_33_bool, object var_34_object)
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
		func_2307(var_44_bool, var_45_object);
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


void func_1293(bool var_1_bool, bool var_2_bool, object var_4_object)
{
	bool var_159_bool; bool var_160_bool; cvector var_161_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_159_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_159_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_160_bool, ("attack" + (var_2_bool + 1)));
			if(!var_160_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_161_cvector, "all", "bjump");
		var_175_float = GetByIndex(var_161_cvector, 2);
		var_4_object = -var_175_float;

	}
}


void func_2834(string var_28_string)
{
	object var_30_object;
	if(var_28_string == "heal") {
		@FindActor(var_30_object, "player");
		object var_34_object;
		var_30_object = var_34_object;
		func_3079();
		var_30_object = null;
	}
}


void func_2847(string var_71_string, int var_72_int)
{
	string var_74_string = "idle";
	if(var_72_int != 0)
		var_74_string += var_72_int;
	var_74_string = var_71_string;
}


void func_2854(int var_65_int)
{
	int var_68_int; bool var_69_bool;
	var_68_int = 0;
	
	for(;;) {
		string var_71_string; int var_72_int;
		var_68_int = var_72_int;
		func_2847(var_71_string, var_72_int);
		@HasAnimation(var_69_bool, "all", var_71_string);
		if(!var_69_bool) //@nz
			break;
		var_68_int += 1;
	}
	var_68_int = var_65_int;
}


void func_2348(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_2312(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_2222(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


void func_1838(bool var_0_bool, bool var_1_bool, bool var_231_bool, object var_232_object, float var_233_float, float var_234_float, bool var_235_bool, bool var_236_bool)
{
	bool var_245_bool; object var_247_object; cvector var_248_cvector; cvector var_249_cvector; float var_251_float; object var_252_object;
	var_0_bool = false;
	var_1_bool = var_232_object;
	bool var_246_bool;
	var_236_bool = var_246_bool;
	
	for(;;) {
		bool var_253_bool; object var_254_object;
		var_232_object = var_254_object;
		func_1978(var_253_bool, var_254_object);
		if(!var_253_bool) { //@nz
			var_231_bool = false;
			return 16;
		}
		var_232_object->GetPosition(var_248_cvector);
		@GetPosition(var_249_cvector);
		var_251_float = (var_248_cvector - var_249_cvector) | (var_248_cvector - var_249_cvector);
		bool var_258_bool = false;
		if(var_234_float > 0) {
			if(var_251_float > (var_234_float * var_234_float))
				var_258_bool = true;
		}
		if(var_258_bool != 0) {
			@Stop();
			var_231_bool = false;
			return 16;
		}
		if(var_251_float > (var_233_float * var_233_float)) {
			var_232_object->GetPFPosition(var_248_cvector);
			@FindPathTo(var_252_object, var_248_cvector);
			if(var_252_object != null) {
				var_252_object = var_247_object;
				var_252_object = null;
			}
			if(var_247_object != null) {
				if(var_246_bool == 0) goto Label_1891;
				var_246_bool = false;
				@RotatePath(var_247_object, var_245_bool);
				if(!var_245_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_271_string;
						func_1985(var_271_string);
						string var_272_string;
						func_1987(var_272_string);
						@FollowPath(var_247_object, var_235_bool, var_245_bool, var_271_string, var_272_string);
						if(!var_245_bool) { //@nz
							if(var_0_bool == 0) goto Label_1910;
							var_247_object = null;
						}
					EMIT "GOTO 0x777";

					Label_1910:
						} else {
					var_247_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_245_bool);
					if(!var_245_bool) { //@nz
						if(var_0_bool != 0) {
							var_247_object = null;
							goto Label_1938;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1938;
		}
			var_252_object = null;
			goto Label_1936;

		Label_1936:
			var_247_object = null;

		}
	Label_1938:
		for(;;) {
			var_231_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1328(bool var_0_bool, float var_457_float, int var_458_int)
{
	object var_462_object; float var_463_float; float var_464_float;
	@GetVictim((var_457_float * 0.9), var_462_object);
	@ReportAttack(var_0_bool);
	if(var_462_object == var_0_bool) {
		float var_468_float; object var_469_object; int var_470_int;
		var_462_object = var_469_object;
		var_458_int = var_470_int;
		func_1058(var_470_int);
		var_468_float = var_463_float;
		float var_471_float; object var_472_object; float var_473_float; int var_474_int;
		var_462_object = var_472_object;
		int var_475_int; object var_476_object; int var_477_int;
		var_462_object = var_476_object;
		var_458_int = var_477_int;
		func_1061(var_477_int);
		var_475_int = var_474_int;
		func_2234(var_471_float, var_472_object, var_473_float, var_474_int);
		var_471_float = var_464_float;
		int var_532_int;
		func_1711(var_532_int);
		@ReportHit(var_0_bool, var_532_int, var_464_float, var_473_float);
		object var_533_object; float var_534_float;
		var_462_object = var_533_object;
		var_464_float = var_534_float;
		func_1718();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2871(int var_59_int)
{
	bool var_61_bool;
	func_3087(var_61_bool);
	if(var_61_bool != 0)
		var_59_int = 2;
	else
		var_59_int = 0;
	
}


void func_826(bool var_0_bool)
{
	func_2514(var_0_bool);
}


// @pe
void func_2880(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(3);
	func_775(var_69_object, var_68_object);
	TaskReturn();
}


void func_2372(object var_33_object)
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


// @pe
void func_2888(int var_86_int, object var_87_object)
{
	object var_89_object;
	var_87_object = var_89_object;
	bool var_88_bool;
	func_2348(var_88_bool, var_89_object);
	if(var_88_bool != 0)
		var_86_int = 2;
	else
		var_86_int = 0;
	
}


// @pe
void func_2898(object var_123_object)
{
	object var_124_object;
	var_123_object = var_124_object;
	TaskCall(4);
	func_1050(var_124_object);
	TaskReturn();
}


void func_1367(bool var_0_bool, bool var_1_bool, bool var_420_bool, float var_421_float)
{
	string var_429_string;
	func_1706(var_429_string);
	int var_426_int;
	@irand(var_426_int, var_1_bool);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2663();
	@PlayAnimation("all", ("attack_begin" + (var_426_int + 1)));
	@WaitForAnimEnd();
	int var_428_int;
	func_1674(var_428_int, var_429_string);
	bool var_454_bool;
	func_2348(var_454_bool, var_0_bool);
	if(!var_454_bool) { //@nz
		@StopAsync();
		var_420_bool = false;
		return 8;
	}
	float var_457_float; int var_458_int;
	var_421_float = var_457_float;
	var_426_int = var_458_int;
	func_1328(var_429_string, var_457_float, var_458_int);
	bool var_427_bool;
	@HasAnimation(var_427_bool, "all", ("attack_middle" + var_426_int));
	if(var_427_bool != 0) {
		func_2663();
		@PlayAnimation("all", ("attack_middle" + var_426_int));
		@WaitForAnimEnd();
		func_1706(var_429_string);
		bool var_542_bool;
		func_2348(var_542_bool, var_0_bool);
		if(!var_542_bool) { //@nz
			@StopAsync();
			var_420_bool = false;
			return 8;
		}
		float var_545_float; int var_546_int;
		var_421_float = var_545_float;
		func_1328(var_429_string, var_545_float, var_546_int);
		var_428_int = 1;

		for(;;) {
			var_429_string = (("attack_middle" + var_546_int) + "_") + var_428_int;
			@HasAnimation(var_427_bool, "all", var_429_string);
			if(!var_427_bool) { //@nz
			} else {
				func_2663();
				@PlayAnimation("all", var_429_string);
				@WaitForAnimEnd();
				func_1706(var_429_string);
				bool var_568_bool;
				func_2348(var_568_bool, var_0_bool);
				if(!var_568_bool) { //@nz
					@StopAsync();
					var_420_bool = false;
					return 8;
				}
				float var_571_float; int var_572_int;
				var_421_float = var_571_float;
				var_426_int = var_572_int;
				func_1328(var_429_string, var_571_float, var_572_int);
				var_428_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_426_int));
		bool var_557_bool;
		func_1720(var_557_bool);
		if(var_557_bool != 0) {
			bool var_558_bool;
			func_1504(var_558_bool, 0.75);
			@StopAsync();
		}
		var_420_bool = true;
		return 8;

	}
}


void func_2906(bool var_32_bool, object var_33_object, bool var_34_bool)
{
	bool var_39_bool; object var_40_object;
	func_2222(var_39_bool, var_40_object, "class");
	if(!var_39_bool) { //@nz
		var_32_bool = false;
		return 4;
	}
	string var_37_string;
	@GetProperty("class", var_37_string);
	string var_38_string;
	var_40_object->GetProperty("class", var_38_string);
	bool var_51_bool = false;
	if(!var_34_bool) { //@nz
		if(var_37_string == var_38_string)
			var_51_bool = true;
	}
	if(var_51_bool != 0) {
		var_32_bool = true;
		return 4;
	}
	if(var_38_string == "rat") {
		var_32_bool = false;
		return 4;
	EMIT "GOTO 0xba3";
	}
	if(var_38_string == "rat_big") {
		var_32_bool = false;
		return 4;
	EMIT "GOTO 0xba3";
	}
	if(var_38_string == "dog") {
		var_32_bool = false;
		return 4;
	EMIT "GOTO 0xba3";
	}
	if(var_38_string == "grabitel") {
		var_32_bool = false;
		return 4;
	EMIT "GOTO 0xba3";
	}
	if(var_38_string == "bomber") {
		var_32_bool = false;
		return 4;
	EMIT "GOTO 0xba3";
	}
	if(var_38_string == "sanitar") {
		var_32_bool = false;
		return 4;
	EMIT "GOTO 0xba3";
	}
	if(var_38_string == "hunter") {
		var_32_bool = false;
		return 4;
	EMIT "GOTO 0xba3";
	}
	if(var_38_string == "soldier") {
		var_32_bool = false;
		return 4;
	}
	var_32_bool = true;
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_15_cvector, var_16_bool);
}


void func_2416(object var_20_object, int var_21_int, float var_22_float)
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
		func_2202(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2572(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_2478:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_2372(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_2478;
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
	func_2484(var_67_float, var_68_cvector, var_69_cvector);
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_20_bool, var_21_int);
}


void func_392(bool var_2_bool, object var_17_object)
{
	bool var_22_bool; object var_23_object;
	func_2348(var_22_bool, var_23_object);
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
	func_2871(var_60_object);
	int var_21_int;
	var_59_int = var_21_int;
	if(var_21_int > 0) {
		if(var_21_int > 1)
			func_375(var_21_int);
		object var_67_object;
		var_17_object = var_67_object;
		func_2880(var_67_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_1940(bool var_0_bool, bool var_1_bool, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1978(var_27_bool, var_1_bool);
	if(!var_27_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2981(int var_83_int, object var_84_object)
{
	object var_87_object;
	var_84_object = var_87_object;
	int var_86_int;
	func_2888(var_86_int, var_87_object);
	var_86_int = var_83_int;
}


void func_1962(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2988(object var_122_object)
{
	object var_123_object;
	var_122_object = var_123_object;
	func_2898(var_123_object);
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


void func_2994(bool var_25_bool, object var_26_object, object var_27_object, float var_28_float, bool var_29_bool)
{
	object var_33_object;
	var_27_object = var_33_object;
	bool var_32_bool;
	func_2906(var_32_bool, var_33_object, !var_29_bool);
	if(!var_32_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_31_bool;
	@CanSee(var_31_bool, var_26_object);
	bool var_71_bool = true;
	if(var_31_bool != 1) {
		float var_73_float; object var_74_object;
		var_26_object = var_74_object;
		func_2209(var_73_float, var_74_object);
		var_82_bool = var_73_float <= (var_28_float * var_28_float);
		if(var_82_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 0) {
		var_25_bool = true;
		return 2;
	}
	var_25_bool = false;
}


void func_2484(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_2372(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1978(bool var_27_bool, object var_28_object)
{
	object var_30_object;
	var_28_object = var_30_object;
	bool var_29_bool;
	func_2348(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
}


void func_1985(string var_271_string)
{
	var_271_string = "walk";
}


void func_2498(object var_92_object)
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


void func_1987(string var_272_string)
{
	var_272_string = "run";
}


void func_1996(bool var_0_bool, cvector var_30_cvector, float var_31_float)
{
	cvector var_38_cvector;
	@GetPosition(var_38_cvector);
	cvector var_39_cvector;
	var_0_bool->GetPosition(var_39_cvector); //@t
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_44_cvector;
	cvector var_46_cvector;
	func_2572(var_46_cvector, (var_38_cvector - var_39_cvector));
	func_2572(var_44_cvector, (var_46_cvector + (var_40_cvector * 0.75)));
	cvector var_41_cvector;
	var_44_cvector = var_41_cvector;
	cvector var_42_cvector;
	float var_43_float;
	@FindLongestDir(var_42_cvector, var_43_float, var_41_cvector, var_31_float, 32, 7000.0);
	if((var_43_float - 100) < 0)
		var_43_float = 0;
	var_30_cvector = var_42_cvector * var_43_float;
}


void func_2509(bool var_18_bool)
{
	bool var_20_bool;
	@IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
}


void func_974(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_3023(int var_19_int)
{
	var_19_int = 0;
}


// @pe
void func_3026(void)
{
}


void func_2514(object var_20_object)
{
	float var_23_float;
	var_20_object->GetEyesHeight(var_23_float);
	cvector var_24_cvector = [0.0, 0.0, 0.0];
	var_25_float = GetByIndex(var_24_cvector, 1);
	var_23_float = var_25_float;
	SetByIndex(var_24_cvector, 1) = var_25_float;
	@LookAsync(var_20_object, "head", var_24_cvector);
}


// @pe
void func_3028(int var_133_int)
{
	var_133_int = 0;
}


// @pe
void func_3031(void)
{
}


// @pe
void func_3033(int var_19_int)
{
	var_19_int = 2;
}


// @pe
void func_3036(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_3085();
}


void func_2525(string var_42_string)
{
	bool var_51_bool; int var_52_int; bool var_53_bool; int var_54_int; bool var_55_bool; float var_56_float; cvector var_57_cvector; cvector var_58_cvector;
	@IsExisting3DSound(var_51_bool, var_42_string);
	if(!var_51_bool) { //@nz
		var_52_int = 0;

		for(;;) {
			@IsExisting3DSound(var_53_bool, (var_42_string + (var_52_int + 1)));
			if(!var_53_bool) { //@nz
				break;
			Label_2545:
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
	if(var_64_bool == 0) goto Label_2545;
}


void func_1504(bool var_558_bool, float var_559_float)
{
	float var_562_float; bool var_563_bool;
	@rand(var_562_float);
	if(var_562_float < var_559_float) {

		for(;;) {
			@IsAnimationPlaying(var_563_bool);
			if(!var_563_bool) { //@nz
			} else {
				bool var_566_bool;
				func_1602(var_566_bool);
				if(var_566_bool != 0) {
					var_558_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_558_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1706(var_563_bool);
}


void func_3042(void)
{
}


// @pe
void func_3043(bool var_22_bool)
{
	var_22_bool = false;
}


// @pe
void func_3046(void)
{
}


void func_3048(bool var_29_bool, object var_30_object)
{
	bool var_32_bool;
	@CanSee(var_32_bool, var_30_object);
	var_29_bool = true;
	if(var_32_bool != 1) {
		float var_34_float; object var_35_object;
		var_30_object = var_35_object;
		func_2209(var_34_float, var_35_object);
		var_43_bool = var_34_float <= 4000000;
		if(var_43_bool != 1)
			var_29_bool = false;
	}
}


void func_2026(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_58_object)
{
	float var_68_float; cvector var_70_cvector; float var_71_float;
	cvector var_72_cvector;
	func_1996(var_71_float, var_72_cvector, 1.7453294);
	cvector var_67_cvector;
	var_72_cvector = var_67_cvector;
	if((var_67_cvector | var_67_cvector) < 2500.0) {
		cvector var_104_cvector;
		func_1996(var_71_float, var_104_cvector, 2.6179938);
		var_104_cvector = var_67_cvector;
		var_68_float = var_67_cvector | var_67_cvector;
		if(var_68_float < 2500.0) {
			var_109_float = sqrt(var_68_float);
			@Trace("Can't retreat, distance: " + var_109_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_112_float = GetByIndex(var_67_cvector, 0);
	var_113_float = GetByIndex(var_67_cvector, 2);
	@Rotate(var_112_float, var_113_float);
	cvector var_114_cvector;
	func_2197(var_114_cvector);
	@SetTimer(120, 0.5);
	
Label_2068:
	bool var_69_bool;
	@MovePoint((var_114_cvector + var_67_cvector), 1, var_69_bool);
	if(var_69_bool != 0) {
		if(var_58_object == null) {
			goto Label_2098;
		EMIT "GOTO 0x830";

		Label_2098:
			for(;;) {
				return 10;
		}
			cvector var_122_cvector;
			func_1996(var_71_float, var_122_cvector, 2.6179938);
			var_122_cvector = var_70_cvector;
			if((var_70_cvector | var_70_cvector) >= 2500.0) {
				cvector var_126_cvector;
				func_2197(var_126_cvector);
				var_1_bool = var_126_cvector + var_70_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_2068; //@nz

	}
}


void func_491(float var_37_float)
{
	float var_39_float;
	@GetCameraFarDistance(var_39_float);
	var_39_float = var_37_float;
}


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1531(bool var_0_bool, bool var_359_bool, float var_360_float)
{
	bool var_366_bool; cvector var_367_cvector; cvector var_368_cvector; cvector var_369_cvector; float var_370_float;
	
	for(;;) {
		@IsAnimationPlaying(var_366_bool);
		if(!var_366_bool) //@nz
			break;
		bool var_372_bool;
		func_1602(var_372_bool);
		if(var_372_bool != 0) {
			var_359_bool = true;
			return 10;
		}
		bool var_415_bool;
		func_2348(var_415_bool, var_0_bool);
		if(!var_415_bool) { //@nz
			var_359_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_367_cvector); //@t
		@GetPFPosition(var_368_cvector);
		var_369_cvector = var_367_cvector - var_368_cvector;
		var_370_float = var_369_cvector | var_369_cvector;
		if(var_370_float < (var_360_float * var_360_float)) {
			bool var_420_bool; float var_421_float;
			var_360_float = var_421_float;
			func_1367(var_369_cvector, var_370_float, var_420_bool, var_421_float);
			var_359_bool = true;
			return 10;
		}
		@sync();
	}
	func_1706(var_370_float);
	var_359_bool = false;
}


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_3071(bool var_46_bool)
{
	var_46_bool = false;
}


