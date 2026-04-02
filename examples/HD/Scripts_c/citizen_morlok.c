// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3154(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			object var_20_object;
			var_13_bool = var_20_object;
			func_3157(var_20_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_3163();
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
		func_3200();
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
		func_3154(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_23_object;
			var_13_bool = var_23_object;
			func_3157(var_23_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2885(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2968(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_66_object;
			var_13_bool = var_66_object;
			func_2978(var_66_object);
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
		func_3222(var_18_bool, var_19_object, var_20_object, var_21_bool);
		if(var_18_bool != 0) {
			int var_80_int; object var_81_object; bool var_82_bool;
			var_13_bool = var_81_object;
			var_15_bool = var_82_bool;
			func_3061(var_81_object, var_82_bool);
			var_80_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_367(var_17_int);
				object var_118_object;
				var_13_bool = var_118_object;
				func_3068(var_118_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3103(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_367(var_15_int);
			object var_23_object;
			var_13_bool = var_23_object;
			func_3106();
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
		func_2799(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_367(var_16_int);
			object var_46_object; string var_47_string;
			var_13_object = var_46_object;
			var_14_bool = var_47_string;
			func_2831(var_46_object, var_47_string);
		} else {
			int var_122_int; string var_123_string; object var_124_object;
			var_14_bool = var_123_string;
			var_13_object = var_124_object;
			func_3108(var_122_int, var_123_string, var_124_object);
			var_122_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_308;
			if(var_16_int > 1)
				func_367(var_16_int);
			string var_170_string; object var_171_object;
			var_14_bool = var_170_string;
			var_13_object = var_171_object;
			func_3120(var_170_string, var_171_object);
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		bool var_14_bool; string var_15_string;
		func_2898(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_367(var_15_string);
			string var_24_string;
			var_13_bool = var_24_string;
			func_2914(var_24_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		bool var_14_bool; object var_15_object;
		func_2856(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_367(var_15_object);
			object var_27_object;
			var_13_bool = var_27_object;
			func_2879(var_27_object);
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
		func_3163();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		func_367(var_13_bool);
		object var_15_object;
		var_13_bool = var_15_object;
		func_2775();
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
		func_3154(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_22_object;
			var_13_bool = var_22_object;
			func_3157(var_22_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2885(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2968(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_65_object;
			var_13_bool = var_65_object;
			func_2978(var_65_object);
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
		func_3222(var_18_bool, var_19_object, var_20_object, var_21_bool);
		if(var_18_bool != 0) {
			int var_80_int; object var_81_object; bool var_82_bool;
			var_13_bool = var_81_object;
			var_15_bool = var_82_bool;
			func_3061(var_81_object, var_82_bool);
			var_80_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_770();
				object var_117_object;
				var_13_bool = var_117_object;
				func_3068(var_117_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3103(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_770();
			object var_22_object;
			var_13_bool = var_22_object;
			func_3106();
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
		func_2799(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_770();
			object var_45_object; string var_46_string;
			var_13_object = var_45_object;
			var_14_bool = var_46_string;
			func_2831(var_45_object, var_46_string);
		} else {
			int var_121_int; string var_122_string; object var_123_object;
			var_14_bool = var_122_string;
			var_13_object = var_123_object;
			func_3108(var_121_int, var_122_string, var_123_object);
			var_121_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_653;
			if(var_16_int > 1)
				func_770();
			string var_169_string; object var_170_object;
			var_14_bool = var_169_string;
			var_13_object = var_170_object;
			func_3120(var_169_string, var_170_object);
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		string var_15_string;
		var_13_bool = var_15_string;
		bool var_14_bool;
		func_2898(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_770();
			string var_23_string;
			var_13_bool = var_23_string;
			func_2914(var_23_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_770();
		func_3163();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_13_bool = var_15_object;
		bool var_14_bool;
		func_2856(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_770();
			object var_26_object;
			var_13_bool = var_26_object;
			func_2879(var_26_object);
		}
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3154(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_24_object;
			var_13_bool = var_24_object;
			func_3157(var_24_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_16_object;
		var_13_bool = var_16_object;
		func_2885(var_16_object);
		int var_25_int; object var_26_object;
		var_13_bool = var_26_object;
		func_2968(var_25_int, var_26_object);
		int var_15_int;
		var_25_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_67_object;
			var_13_bool = var_67_object;
			func_2978(var_67_object);
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
		func_3222(var_18_bool, var_19_object, var_20_object, var_21_bool);
		if(var_18_bool != 0) {
			int var_80_int; object var_81_object; bool var_82_bool;
			var_13_bool = var_81_object;
			var_15_bool = var_82_bool;
			func_3061(var_81_object, var_82_bool);
			var_80_int = var_17_int;
			if(var_17_int > 0) {
				if(var_17_int > 1)
					func_974();
				object var_119_object;
				var_13_bool = var_119_object;
				func_3068(var_119_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_17_object;
		var_13_bool = var_17_object;
		func_3103(var_17_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_974();
			object var_24_object;
			var_13_bool = var_24_object;
			func_3106();
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
		func_2799(var_17_bool, var_18_object, var_19_string);
		if(var_17_bool != 0) {
			func_974();
			object var_47_object; string var_48_string;
			var_13_object = var_47_object;
			var_14_bool = var_48_string;
			func_2831(var_47_object, var_48_string);
		} else {
			int var_123_int; string var_124_string; object var_125_object;
			var_14_bool = var_124_string;
			var_13_object = var_125_object;
			func_3108(var_123_int, var_124_string, var_125_object);
			var_123_int = var_16_int;
			if(!(var_16_int > 0)) goto Label_959;
			if(var_16_int > 1)
				func_974();
			string var_171_string; object var_172_object;
			var_14_bool = var_171_string;
			var_13_object = var_172_object;
			func_3120(var_171_string, var_172_object);
		}
	Label_959:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		string var_15_string;
		var_13_bool = var_15_string;
		bool var_14_bool;
		func_2898(var_14_bool, var_15_string);
		if(var_14_bool != 0) {
			func_974();
			string var_25_string;
			var_13_bool = var_25_string;
			func_2914(var_25_string);
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		func_974();
		object var_16_object;
		var_13_bool = var_16_object;
		func_2775();
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
		func_2420(var_63_float, var_64_cvector, var_65_cvector);
		if(var_63_float < 0.49999997)
			func_2299(var_0_bool);
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool)
	{
		func_974();
		func_3163();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, float var_9_float, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_13_bool = var_15_object;
		bool var_14_bool;
		func_2856(var_14_bool, var_15_object);
		if(var_14_bool != 0) {
			func_974();
			object var_28_object;
			var_13_bool = var_28_object;
			func_2879(var_28_object);
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
		func_3163();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, int var_13_int)
	{
		if(var_13_int == 1) {
			func_2463(var_1_bool);
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
		func_2775();
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
	func_2754(var_14_object);
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
	func_3232(var_96_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_3074(bool var_22_bool, object var_23_object, object var_24_object, float var_25_float, bool var_26_bool)
{
	object var_30_object;
	var_24_object = var_30_object;
	bool var_29_bool;
	func_2986(var_29_bool, var_30_object, !var_26_bool);
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


void func_517(bool var_44_bool)
{
	var_44_bool = false;
}


void func_519(object var_38_object, cvector var_39_cvector)
{
	object var_41_object;
	@FindShiftedPathTo(var_41_object, var_39_cvector);
	var_41_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_2574(bool var_106_bool)
{
	int var_109_int; bool var_110_bool;
	if(var_106_bool != 0) {
		int var_115_int;
		func_2454(var_115_int);
		func_2502(0, (100 + (var_115_int * 100)));
		@irand(var_109_int, 8);
		if(var_109_int == 0) {
			int var_143_int;
			func_2749(var_143_int, "lemon");
			@AddItem(var_110_bool, var_143_int, 0, 1);
		} else {
				if(var_109_int == 1) {
					int var_149_int;
					func_2749(var_149_int, "rusk");
					@AddItem(var_110_bool, var_149_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_109_int == 2) {
				int var_155_int;
				func_2749(var_155_int, "hook");
				@AddItem(var_110_bool, var_155_int, 0, 1);
			} else if(var_109_int == 4) {
				int var_161_int;
				func_2749(var_161_int, "syringe");
				@AddItem(var_110_bool, var_161_int, 0, 1);
			} else if(var_109_int == 5) {
				int var_167_int;
				func_2749(var_167_int, "watch");
				@AddItem(var_110_bool, var_167_int, 0, 1);
			} else if(var_109_int == 6) {
				int var_173_int;
				func_2749(var_173_int, "razor");
				@AddItem(var_110_bool, var_173_int, 0, 1);
			}
	}
		int var_180_int;
		func_2454(var_180_int);
		func_2502(0, (50 + (var_180_int * 50)));
		@irand(var_109_int, 7);
		if(var_109_int == 0) {
			int var_186_int;
			func_2749(var_186_int, "beads");
			@AddItem(var_110_bool, var_186_int, 0, 1);
		} else if(var_109_int == 1) {
			int var_192_int;
			func_2749(var_192_int, "bracelet");
			@AddItem(var_110_bool, var_192_int, 0, 1);
		} else if(var_109_int == 2) {
			int var_198_int;
			func_2749(var_198_int, "ear_ring");
			@AddItem(var_110_bool, var_198_int, 0, 1);
		} else if(var_109_int == 3) {
			int var_204_int;
			func_2749(var_204_int, "gold_ring");
			@AddItem(var_110_bool, var_204_int, 0, 1);
		} else if(var_109_int == 4) {
			int var_210_int;
			func_2749(var_210_int, "silver_ring");
			@AddItem(var_110_bool, var_210_int, 0, 1);
		} else if(var_109_int == 5) {
			int var_216_int;
			func_2749(var_216_int, "flower");
			@AddItem(var_110_bool, var_216_int, 0, 1);
			}
		}
		return 4;

	}
	
}


// @pe
void func_1050(object var_177_object)
{
	object var_184_object;
	func_1064(var_180_int, var_181_bool, var_182_float, var_183_int, var_184_object, var_184_object, true, 180.0);
}


// @pe
void func_3103(int var_16_int)
{
	var_16_int = 0;
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
		func_2326(var_91_string);
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
void func_3106(void)
{
}


// @pe
void func_1058(float var_503_float)
{
	var_503_float = 0.05;
}


// @pe
void func_3108(int var_123_int, string var_124_string, object var_125_object)
{
	if(var_124_string == "killme") {
		int var_128_int; object var_129_object;
		var_125_object = var_129_object;
		func_3130(var_128_int, var_129_object);
		var_128_int = var_123_int;
		return 0;
	}
	var_123_int = 0;
}


// @pe
void func_1061(int var_510_int)
{
	var_510_int = 0;
}


void func_1574(bool var_0_bool, bool var_413_bool)
{
	cvector var_419_cvector; cvector var_420_cvector;
	bool var_424_bool;
	func_2149(var_424_bool, var_0_bool);
	if(!var_424_bool) { //@nz
		var_413_bool = false;
		return 10;
	}
	bool var_427_bool;
	float var_423_float;
	func_1663(var_423_float, var_427_bool);
	if(var_427_bool != 0) {
		var_0_bool->GetPFPosition(var_419_cvector); //@t
		@GetPFPosition(var_420_cvector);
		var_0_bool->GetAttackDistance(var_423_float); //@t
		var_413_bool = ((var_419_cvector - var_420_cvector) | (var_419_cvector - var_420_cvector)) <= ((var_423_float + 50) * (var_423_float + 50));
		return 10;
	}
	var_413_bool = false;
}


void func_1064(bool var_0_bool, object var_3_object, string var_5_string, object var_184_object, bool var_185_bool, float var_186_float, bool var_261_bool, bool var_347_bool)
{
	float var_198_float; cvector var_199_cvector; cvector var_200_cvector; bool var_202_bool; float var_205_float; cvector var_206_cvector; bool var_207_bool; float var_208_float;
	func_1293(var_206_cvector, var_207_bool, var_208_float);
	var_5_string = 0;
	var_233_bool = IsFuncExist(var_184_object, "@GetAttackDistance", 1);
	if(var_233_bool != 0) {
		var_184_object->GetAttackDistance(var_198_float);
		var_198_float += 50;
	} else {
						var_186_float = var_198_float;
	}
	if(var_198_float >= 150)
		var_198_float = 150;
	var_3_object = false;
	var_0_bool = var_184_object;
	bool var_201_bool;
	@IsPlayerActor(var_0_bool, var_201_bool);
	if(var_201_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_239_object;
		func_2367(var_239_object);
		@SendPlayerEnemy(var_184_object, var_239_object);
	}
	if(var_185_bool != 0)
		var_202_bool = false;
	else
		var_202_bool = true;

	
Label_1104:
	for(;;) {
		bool var_244_bool = false;
		bool var_245_bool;
		func_2149(var_245_bool, var_0_bool);
		if(var_245_bool != 0) {
			if(!var_3_object) //@nz
				var_244_bool = true;
		}
		if(var_244_bool != 0) {
			func_1706(var_208_float);
			var_0_bool->GetPFPosition(var_199_cvector); //@t
			@GetPFPosition(var_200_cvector);
			var_205_float = (var_199_cvector - var_200_cvector) | (var_199_cvector - var_200_cvector);
			if(var_205_float >= ((400.0 + var_198_float) * (400.0 + var_198_float))) {
				bool var_255_bool; float var_257_float;
				var_198_float = var_257_float;
				TaskCall(5);
				func_1733(var_263_bool, var_255_bool, var_0_bool, var_257_float, 3000.0, true, false);
				TaskReturn();
				if(!var_261_bool) { //@nz
				} else {
					var_202_bool = false;
			} else {
			if(var_205_float >= (var_186_float * var_186_float)) {
				var_0_bool->GetPFPosition(var_206_cvector); //@t
				@CanReachByPF(var_207_bool, var_206_cvector);
				if(!var_207_bool) { //@nz
					bool var_341_bool; float var_343_float;
					var_198_float = var_343_float;
					TaskCall(5);
					func_1733(var_349_bool, var_341_bool, var_0_bool, var_343_float, 3000.0, true, false);
					TaskReturn();
					if(!var_347_bool) { //@nz
						goto Label_1276;
					}
					var_202_bool = false;
					goto Label_1104;
				}
				if(!var_202_bool) { //@nz
					func_2299(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1706(var_208_float);
					@StopAsync();
					var_202_bool = true;
					bool var_355_bool;
					func_2149(var_355_bool, var_0_bool);
					if(!var_355_bool) { //@nz
						goto Label_1276;
					}
				}
				@rand(var_208_float);
				bool var_358_bool;
				var_360_bool = var_208_float < 0.25;
				if(var_360_bool != 1) {
					bool var_361_bool;
					func_1663(true, var_361_bool);
					if(var_361_bool != 1)
						var_358_bool = false;
				}
				if(var_358_bool != 0) {
					@Face(var_0_bool);
					func_1713();
					@PlayAnimation("all", "attack_stay");
					bool var_398_bool; float var_399_float;
					func_1531(var_208_float, var_398_bool, var_399_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1706(var_208_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_616_bool;
					func_1663(var_208_float, var_616_bool);
					var_617_bool = !var_616_bool; //@nz
					if(var_617_bool == 0) goto Label_1266;
					bool var_618_bool;
					func_2149(var_618_bool, var_0_bool);
					if(!var_618_bool) { //@nz
						goto Label_1276;
					}
					var_0_bool->GetPFPosition(var_199_cvector); //@t
					@GetPFPosition(var_200_cvector);
					if(!(((var_199_cvector - var_200_cvector) | (var_199_cvector - var_200_cvector)) < (var_399_float * var_399_float))) goto Label_1266;
					bool var_623_bool; float var_624_float;
					var_186_float = var_624_float;
					func_1367(var_207_bool, var_208_float, var_623_bool, var_624_float);
					var_625_bool = !var_623_bool; //@nz
					if(var_625_bool == 0) goto Label_1266;
					goto Label_1276;
			}
				bool var_626_bool; float var_627_float;
				var_186_float = var_627_float;
				func_1367(var_207_bool, var_208_float, var_626_bool, var_627_float);
				if(!var_626_bool) { //@nz
					goto Label_1276;
				}
				var_202_bool = true;

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
		if(var_201_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_3120(string var_171_string, object var_172_object)
{
	if(var_171_string == "killme") {
		object var_175_object;
		var_172_object = var_175_object;
		func_3148(var_175_object);
	}
}


// @pe
void func_3130(int var_128_int, object var_129_object)
{
	object var_131_object;
	var_129_object = var_131_object;
	bool var_130_bool;
	func_2149(var_130_bool, var_131_object);
	if(!var_130_bool) { //@nz
		var_128_int = 0;
		return 0;
	}
	bool var_165_bool; object var_166_object;
	var_129_object = var_166_object;
	func_3219(var_166_object);
	if(var_165_bool != 0)
		var_128_int = 2;
	else
		var_128_int = 0;
	
}


void func_2108(bool var_41_bool, object var_42_object)
{
	bool var_44_bool;
	var_42_object->IsDead(var_44_bool);
	var_44_bool = var_41_bool;
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


void func_1602(bool var_411_bool)
{
	bool var_412_bool = false;
	bool var_413_bool;
	func_1574(var_412_bool, var_413_bool);
	if(var_413_bool != 0) {
		bool var_430_bool;
		func_1618(var_411_bool, var_412_bool, var_430_bool);
		if(var_430_bool != 0)
			var_412_bool = true;
	}
	if(var_412_bool != 0) {
		var_411_bool = true;
		return 0;
	}
	var_411_bool = false;
}


// @pe
void func_3148(object var_175_object)
{
	object var_176_object;
	var_175_object = var_176_object;
	func_2978(var_176_object);
}


// @pe
void func_3154(int var_16_int)
{
	var_16_int = 2;
}


void func_1618(bool var_0_bool, object var_4_object, bool var_430_bool)
{
	object var_436_object; float var_438_float; cvector var_439_cvector; cvector var_440_cvector;
	@GetScene(var_436_object);
	bool var_437_bool = false;
	
	for(;;) {
		cvector var_441_cvector;
		func_2003(var_441_cvector, var_0_bool);
		var_443_int = -var_441_cvector;
		@FindDirLength(var_438_float, var_443_int, var_4_object);
		if(var_438_float < var_4_object) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_439_cvector); //@t
				@GetPFPosition(var_440_cvector);
				@WaitForAnimEnd();
				func_1706(var_440_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_437_bool = true;
				bool var_448_bool;
				func_1574(var_440_cvector, var_448_bool);
				var_449_bool = !var_448_bool; //@nz
				if(var_449_bool == 0) goto Label_1659;
		}
		for(;;) {
			var_437_bool = var_430_bool;

		}

	Label_1659:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_3157(object var_24_object)
{
	object var_25_object;
	var_24_object = var_25_object;
	func_3204(var_25_object);
}


void func_3163(void)
{
}


// @pe
void func_3164(bool var_19_bool)
{
	var_19_bool = false;
}


// @pe
void func_3167(void)
{
}


void func_3169(bool var_26_bool, object var_27_object)
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
void func_3184(object var_54_object)
{
	object var_55_object;
	var_54_object = var_55_object;
	func_2960(var_55_object);
}


// @pe
void func_3190(bool var_43_bool)
{
	var_43_bool = false;
}


// @pe
void func_3193(void)
{
}


// @pe
void func_3195(bool var_21_bool)
{
	var_21_bool = false;
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
	func_2326(var_39_string);
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


// @pe
void func_3198(void)
{
}


void func_1663(bool var_0_bool, bool var_361_bool)
{
	bool var_363_bool;
	var_366_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_366_bool != 0) {
		var_0_bool->IsAttacking(var_363_bool); //@t
		var_363_bool = var_361_bool;
	}
	var_361_bool = false;
}


void func_3200(void)
{
	var_14_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_3204(object var_25_object)
{
	bool var_27_bool;
	var_28_bool = GlobalVars[0];
	if(var_28_bool != 0) {
		@IsOverrideActive(var_27_bool);
		if(!var_27_bool) { //@nz
			object var_30_object;
			var_25_object = var_30_object;
			func_2489(var_30_object);
		}
	}
}


void func_1674(bool var_2_bool, string var_5_string)
{
	int var_477_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_5_string != 0) {
		if((var_5_string + -1) > 0)
			return 4;
	}
	float var_476_float;
	@rand(var_476_float);
	float var_483_float;
	func_1724(var_483_float);
	if(var_476_float < var_483_float) {
		@irand(var_477_int, var_2_bool);
		@Speak("attack" + (var_477_int + 1));
		int var_488_int;
		func_1722(var_488_int);
		var_5_string = var_488_int;
	}
}


void func_3217(bool var_58_bool)
{
	var_58_bool = false;
}


// @pe
void func_3219(bool var_165_bool)
{
	var_165_bool = true;
}


// @pe
void func_3222(bool var_18_bool, object var_19_object, object var_20_object, bool var_21_bool)
{
	object var_23_object;
	var_19_object = var_23_object;
	object var_24_object;
	var_20_object = var_24_object;
	bool var_26_bool;
	var_21_bool = var_26_bool;
	bool var_22_bool;
	func_3074(var_22_bool, var_23_object, var_24_object, 700.0, var_26_bool);
	var_22_bool = var_18_bool;
}


// @pe
void func_3232(object var_96_object)
{
	bool var_97_bool; object var_98_object;
	func_2018(var_97_bool, var_98_object);
	if(var_97_bool != 0) {
		object var_101_object;
		func_2367(var_101_object);
		@ReportReputationChange(var_98_object, var_101_object, -0.07, true);
		func_2574(true);
	}
	func_2550();
	var_240_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
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
		func_2373(var_45_cvector, var_46_cvector);
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
	func_2463(var_0_bool);
}


void func_171(void)
{
	bool var_15_bool;
	func_2310(var_15_bool);
	if(!var_15_bool) //@nz
		func_3163();
}


void func_1711(int var_571_int)
{
	var_571_int = 0;
}


void func_689(void)
{
	int var_55_int; int var_56_int; bool var_57_bool; float var_58_float; bool var_59_bool;
	@WaitForAnimEnd();
	bool var_60_bool;
	func_2310(var_60_bool);
	if(!var_60_bool) //@nz
		return 14;
	int var_62_int;
	func_2934(var_62_int);
	int var_53_int;
	var_62_int = var_53_int;
	int var_54_int = 0;
	
	for(;;) {
		bool var_75_bool = false;
		if(var_54_int < 5) {
			bool var_78_bool;
			func_2310(var_78_bool);
			if(var_78_bool != 0)
				var_75_bool = true;
		}
		if(var_75_bool != 0) {
			@irand(var_55_int, 3);
			if(var_55_int == 0) {
				if(var_53_int == 0) goto Label_736;
				@irand(var_56_int, var_53_int);
				string var_84_string; int var_85_int;
				var_56_int = var_85_int;
				func_2927(var_84_string, var_85_int);
				@PlayAnimation("all", var_84_string);
				@WaitForAnimEnd(var_57_bool);
				if(!var_57_bool) { //@nz
				} else {
			} else {
			if(var_55_int == 1) {
				@rand(var_58_float, 4);
				@Sleep((var_58_float + 1), var_59_bool);
				if(!var_59_bool) { //@nz
					goto Label_765;
				}
			} else if(var_54_int != 0) {
				goto Label_765;
			}
			}
					bool var_87_bool;
					func_768(var_87_bool);
					var_88_bool = !var_87_bool; //@nz
					if(var_88_bool == 0) goto Label_760;
			}
		}
	Label_765:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_760:
		@ResetAAS();
		var_54_int += 1;
	}
	
}


void func_1713(void)
{
	func_2326("attack_stay");
}


// @pe
void func_1718(void)
{
}


void func_1720(bool var_596_bool)
{
	var_596_bool = true;
}


void func_1722(int var_488_int)
{
	var_488_int = 1;
}


void func_1724(float var_483_float)
{
	var_483_float = 0.5;
}


void func_2749(int var_133_int, string var_134_string)
{
	int var_136_int;
	@GetInvItemByName(var_136_int, var_134_string);
	var_136_int = var_133_int;
}


// @pe
void func_2754(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	TaskCall(0);
	func_0(var_15_object);
	TaskReturn();
}


void func_1733(bool var_2_bool, bool var_255_bool, object var_256_object, float var_257_float, float var_258_float, bool var_259_bool, bool var_260_bool)
{
	object var_268_object;
	func_2463(var_268_object);
	@SetTimer(1, 5);
	bool var_266_bool;
	@CanSee(var_266_bool, var_268_object);
	if(var_266_bool != 0) {
		var_2_bool = true;
		object var_272_object;
		var_256_object = var_272_object;
		func_2315(var_272_object);
	} else {
		var_2_bool = false;
	}
	bool var_273_bool; object var_274_object;
	func_2018(var_273_bool, var_274_object);
	if(var_273_bool != 0) {
		object var_277_object;
		func_2367(var_277_object);
		@SendPlayerEnemy(var_274_object, var_277_object);
	}
	bool var_278_bool; object var_279_object; float var_280_float; float var_281_float; bool var_282_bool; bool var_283_bool;
	var_256_object = var_279_object;
	var_257_float = var_280_float;
	var_258_float = var_281_float;
	var_259_bool = var_282_bool;
	var_260_bool = var_283_bool;
	bool var_267_bool;
	func_1838(var_266_bool, var_267_bool, var_278_bool, var_279_object, var_280_float, var_281_float, var_282_bool, var_283_bool);
	var_278_bool = var_267_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_267_bool = var_255_bool;
	
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
void func_2799(bool var_17_bool, object var_18_object, string var_19_string)
{
	if(var_19_string == "unholster") {
		bool var_22_bool; object var_23_object;
		var_18_object = var_23_object;
		func_3164(var_23_object);
		var_22_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xb0d";
	}
	if(var_19_string == "player_shot") {
		bool var_26_bool; object var_27_object;
		var_18_object = var_27_object;
		func_3169(var_26_bool, var_27_object);
		var_26_bool = var_17_bool;
		return 0;
	EMIT "GOTO 0xb0d";
	}
	if(var_19_string == "battle") {
		bool var_43_bool; object var_44_object;
		var_18_object = var_44_object;
		func_3190(var_44_object);
		var_43_bool = var_17_bool;
		return 0;
	}
	var_17_bool = false;
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


void func_768(bool var_87_bool)
{
	var_87_bool = true;
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


void func_2310(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
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
	func_2420(var_77_float, var_78_cvector, var_79_cvector);
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
	bool var_212_bool; bool var_213_bool; cvector var_214_cvector;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_212_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_212_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_213_bool, ("attack" + (var_2_bool + 1)));
			if(!var_213_bool) //@nz
				break;
			var_2_bool += 1;
		}
		@GetAnimationOffset(var_214_cvector, "all", "bjump");
		var_228_float = GetByIndex(var_214_cvector, 2);
		var_4_object = -var_228_float;

	}
}


// @pe
void func_2831(object var_47_object, string var_48_string)
{
	if(var_48_string == "unholster") {
		object var_51_object;
		var_47_object = var_51_object;
		func_3167();
	} else if(var_48_string == "player_shot") {
			object var_54_object;
			var_47_object = var_54_object;
			func_3184(var_54_object);
	}
Label_2855:
	for(;;) {

	}
	
	if(!(var_48_string == "battle")) goto Label_2855;
	object var_122_object;
	var_47_object = var_122_object;
	func_3193();
}


void func_2326(string var_39_string)
{
	bool var_48_bool; int var_49_int; bool var_50_bool; int var_51_int; bool var_52_bool; float var_53_float; cvector var_54_cvector; cvector var_55_cvector;
	@IsExisting3DSound(var_48_bool, var_39_string);
	if(!var_48_bool) { //@nz
		var_49_int = 0;

		for(;;) {
			@IsExisting3DSound(var_50_bool, (var_39_string + (var_49_int + 1)));
			if(!var_50_bool) { //@nz
				break;
			Label_2346:
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
	if(var_61_bool == 0) goto Label_2346;
}


void func_2856(bool var_14_bool, object var_15_object)
{
	bool var_17_bool;
	bool var_18_bool = false;
	bool var_19_bool; object var_20_object;
	var_15_object = var_20_object;
	func_3164(var_20_object);
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


void func_1838(bool var_0_bool, bool var_1_bool, bool var_278_bool, object var_279_object, float var_280_float, float var_281_float, bool var_282_bool, bool var_283_bool)
{
	bool var_292_bool; object var_294_object; cvector var_295_cvector; cvector var_296_cvector; float var_298_float; object var_299_object;
	var_0_bool = false;
	var_1_bool = var_279_object;
	bool var_293_bool;
	var_283_bool = var_293_bool;
	
	for(;;) {
		bool var_300_bool; object var_301_object;
		var_279_object = var_301_object;
		func_1978(var_300_bool, var_301_object);
		if(!var_300_bool) { //@nz
			var_278_bool = false;
			return 16;
		}
		var_279_object->GetPosition(var_295_cvector);
		@GetPosition(var_296_cvector);
		var_298_float = (var_295_cvector - var_296_cvector) | (var_295_cvector - var_296_cvector);
		bool var_305_bool = false;
		if(var_281_float > 0) {
			if(var_298_float > (var_281_float * var_281_float))
				var_305_bool = true;
		}
		if(var_305_bool != 0) {
			@Stop();
			var_278_bool = false;
			return 16;
		}
		if(var_298_float > (var_280_float * var_280_float)) {
			var_279_object->GetPFPosition(var_295_cvector);
			@FindPathTo(var_299_object, var_295_cvector);
			if(var_299_object != null) {
				var_299_object = var_294_object;
				var_299_object = null;
			}
			if(var_294_object != null) {
				if(var_293_bool == 0) goto Label_1891;
				var_293_bool = false;
				@RotatePath(var_294_object, var_292_bool);
				if(!var_292_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_318_string;
						func_1985(var_318_string);
						string var_319_string;
						func_1987(var_319_string);
						@FollowPath(var_294_object, var_282_bool, var_292_bool, var_318_string, var_319_string);
						if(!var_292_bool) { //@nz
							if(var_0_bool == 0) goto Label_1910;
							var_294_object = null;
						}
					EMIT "GOTO 0x777";

					Label_1910:
						} else {
					var_294_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_292_bool);
					if(!var_292_bool) { //@nz
						if(var_0_bool != 0) {
							var_294_object = null;
							goto Label_1938;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1938;
		}
			var_299_object = null;
			goto Label_1936;

		Label_1936:
			var_294_object = null;

		}
	Label_1938:
		for(;;) {
			var_278_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1328(bool var_0_bool, float var_492_float, int var_493_int)
{
	object var_497_object; float var_498_float; float var_499_float;
	@GetVictim((var_492_float * 0.9), var_497_object);
	@ReportAttack(var_0_bool);
	if(var_497_object == var_0_bool) {
		float var_503_float; object var_504_object; int var_505_int;
		var_497_object = var_504_object;
		var_493_int = var_505_int;
		func_1058(var_505_int);
		var_503_float = var_498_float;
		float var_506_float; object var_507_object; float var_508_float; int var_509_int;
		var_497_object = var_507_object;
		int var_510_int; object var_511_object; int var_512_int;
		var_497_object = var_511_object;
		var_493_int = var_512_int;
		func_1061(var_512_int);
		var_510_int = var_509_int;
		func_2035(var_506_float, var_507_object, var_508_float, var_509_int);
		var_506_float = var_499_float;
		int var_571_int;
		func_1711(var_571_int);
		@ReportHit(var_0_bool, var_571_int, var_499_float, var_508_float);
		object var_572_object; float var_573_float;
		var_497_object = var_572_object;
		var_499_float = var_573_float;
		func_1718();
	}
}
EMIT "Stack[-3] = 0";


void func_826(bool var_0_bool)
{
	func_2315(var_0_bool);
}


// @pe
void func_2879(object var_28_object)
{
	object var_29_object;
	var_28_object = var_29_object;
	func_3167();
}


void func_2367(object var_101_object)
{
	object var_103_object;
	@self(var_103_object);
	var_103_object = var_101_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2885(object var_16_object)
{
	bool var_17_bool; object var_18_object;
	func_2018(var_17_bool, var_18_object);
	if(var_17_bool != 0) {
		object var_21_object;
		func_2367(var_21_object);
		@ReportReputationChange(var_18_object, var_21_object, -0.03);
	}
}


void func_2373(cvector var_45_cvector, cvector var_46_cvector)
{
	float var_54_float = sqrt(var_46_cvector | var_46_cvector);
	if(var_54_float < 0.000001)
		var_45_cvector = [0.0, 0.0, 0.0];
	var_45_cvector = var_46_cvector / var_54_float;
}


// @pe
void func_2383(float var_544_float, float var_545_float, float var_546_float)
{
	if(var_545_float < var_546_float)
		var_545_float = var_544_float;
	else
		var_546_float = var_544_float;
	
}


void func_2898(bool var_14_bool, string var_15_string)
{
	object var_17_object;
	if(var_15_string == "heal") {
		@FindActor(var_17_object, "player");
		bool var_21_bool; object var_22_object;
		var_17_object = var_22_object;
		func_3195(var_22_object);
		var_21_bool = var_14_bool;
	EMIT "Stack[-1] = 0";
	}
	var_14_bool = false;
}


// @pe
void func_2390(float var_554_float, float var_555_float, float var_556_float, float var_557_float)
{
	if(var_555_float < var_556_float) {
		var_556_float = var_554_float;
		return 0;
	}
	if(var_555_float > var_557_float) {
		var_557_float = var_554_float;
		return 0;
	}
	var_555_float = var_554_float;
}


void func_1367(bool var_0_bool, bool var_1_bool, bool var_455_bool, float var_456_float)
{
	string var_464_string;
	func_1706(var_464_string);
	int var_461_int;
	@irand(var_461_int, var_1_bool);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2472();
	@PlayAnimation("all", ("attack_begin" + (var_461_int + 1)));
	@WaitForAnimEnd();
	int var_463_int;
	func_1674(var_463_int, var_464_string);
	bool var_489_bool;
	func_2149(var_489_bool, var_0_bool);
	if(!var_489_bool) { //@nz
		@StopAsync();
		var_455_bool = false;
		return 8;
	}
	float var_492_float; int var_493_int;
	var_456_float = var_492_float;
	var_461_int = var_493_int;
	func_1328(var_464_string, var_492_float, var_493_int);
	bool var_462_bool;
	@HasAnimation(var_462_bool, "all", ("attack_middle" + var_461_int));
	if(var_462_bool != 0) {
		func_2472();
		@PlayAnimation("all", ("attack_middle" + var_461_int));
		@WaitForAnimEnd();
		func_1706(var_464_string);
		bool var_581_bool;
		func_2149(var_581_bool, var_0_bool);
		if(!var_581_bool) { //@nz
			@StopAsync();
			var_455_bool = false;
			return 8;
		}
		float var_584_float; int var_585_int;
		var_456_float = var_584_float;
		func_1328(var_464_string, var_584_float, var_585_int);
		var_463_int = 1;

		for(;;) {
			var_464_string = (("attack_middle" + var_585_int) + "_") + var_463_int;
			@HasAnimation(var_462_bool, "all", var_464_string);
			if(!var_462_bool) { //@nz
			} else {
				func_2472();
				@PlayAnimation("all", var_464_string);
				@WaitForAnimEnd();
				func_1706(var_464_string);
				bool var_607_bool;
				func_2149(var_607_bool, var_0_bool);
				if(!var_607_bool) { //@nz
					@StopAsync();
					var_455_bool = false;
					return 8;
				}
				float var_610_float; int var_611_int;
				var_456_float = var_610_float;
				var_461_int = var_611_int;
				func_1328(var_464_string, var_610_float, var_611_int);
				var_463_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_461_int));
		bool var_596_bool;
		func_1720(var_596_bool);
		if(var_596_bool != 0) {
			bool var_597_bool;
			func_1504(var_597_bool, 0.75);
			@StopAsync();
		}
		var_455_bool = true;
		return 8;

	}
}


// @pe
void func_2401(float var_66_float, cvector var_67_cvector, cvector var_68_cvector)
{
	var_69_float = GetByIndex(var_67_cvector, 0);
	var_70_float = GetByIndex(var_68_cvector, 0);
	var_72_float = GetByIndex(var_67_cvector, 2);
	var_73_float = GetByIndex(var_68_cvector, 2);
	var_66_float = (var_69_float * var_70_float) + (var_72_float * var_73_float);
}


void func_2914(string var_25_string)
{
	object var_27_object;
	if(var_25_string == "heal") {
		@FindActor(var_27_object, "player");
		object var_31_object;
		var_27_object = var_31_object;
		func_3198();
		var_27_object = null;
	}
}


// @pe
void func_2410(float var_75_float, cvector var_76_cvector)
{
	var_77_float = GetByIndex(var_76_cvector, 0);
	var_78_float = GetByIndex(var_76_cvector, 0);
	var_80_float = GetByIndex(var_76_cvector, 2);
	var_81_float = GetByIndex(var_76_cvector, 2);
	var_75_float = sqrt((var_77_float * var_78_float) + (var_80_float * var_81_float));
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_12_object, var_13_bool);
}


void func_2927(string var_68_string, int var_69_int)
{
	string var_71_string = "idle";
	if(var_69_int != 0)
		var_71_string += var_69_int;
	var_71_string = var_68_string;
}


// @pe
void func_2420(float var_63_float, cvector var_64_cvector, cvector var_65_cvector)
{
	cvector var_67_cvector;
	var_64_cvector = var_67_cvector;
	cvector var_68_cvector;
	var_65_cvector = var_68_cvector;
	float var_66_float;
	func_2401(var_66_float, var_67_cvector, var_68_cvector);
	float var_75_float; cvector var_76_cvector;
	var_64_cvector = var_76_cvector;
	func_2410(var_75_float, var_76_cvector);
	float var_84_float; cvector var_85_cvector;
	var_65_cvector = var_85_cvector;
	func_2410(var_84_float, var_85_cvector);
	var_63_float = var_66_float / (var_75_float * var_84_float);
}


void func_2934(int var_62_int)
{
	int var_65_int; bool var_66_bool;
	var_65_int = 0;
	
	for(;;) {
		string var_68_string; int var_69_int;
		var_65_int = var_69_int;
		func_2927(var_68_string, var_69_int);
		@HasAnimation(var_66_bool, "all", var_68_string);
		if(!var_66_bool) //@nz
			break;
		var_65_int += 1;
	}
	var_65_int = var_62_int;
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_17_bool, var_18_int);
}


void func_2437(float var_562_float)
{
	object var_564_object;
	@CreateFloatVector(var_564_object);
	var_564_object->add(var_562_float);
	if(var_562_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_564_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2951(int var_56_int)
{
	bool var_58_bool;
	func_3217(var_58_bool);
	if(var_58_bool != 0)
		var_56_int = 2;
	else
		var_56_int = 0;
	
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
	func_2951(var_57_object);
	int var_18_int;
	var_56_int = var_18_int;
	if(var_18_int > 0) {
		if(var_18_int > 1)
			func_375(var_18_int);
		object var_64_object;
		var_14_object = var_64_object;
		func_2960(var_64_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_2960(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	TaskCall(3);
	func_775(var_57_object, var_56_object);
	TaskReturn();
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


void func_2454(int var_115_int)
{
	float var_117_float;
	@GetGameTime(var_117_float);
	var_115_int = 1 + (var_117_float / 24);
}


// @pe
void func_2968(int var_83_int, object var_84_object)
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


void func_2463(object var_16_object)
{
	bool var_18_bool;
	@IsPlayerActor(var_16_object, var_18_bool);
	if(var_18_bool != 0)
		@PlayGlobalMusic("attack");
}


// @pe
void func_2978(object var_176_object)
{
	object var_177_object;
	var_176_object = var_177_object;
	TaskCall(4);
	func_1050(var_177_object);
	TaskReturn();
}


void func_2472(void)
{
	object var_468_object;
	@GetScene(var_468_object);
	object var_470_object;
	func_2367(var_470_object);
	@BroadcastMessage("battle", var_470_object, var_468_object);
}
EMIT "Stack[-1] = 0";


void func_1962(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2986(bool var_29_bool, object var_30_object, bool var_31_bool)
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
	EMIT "GOTO 0xbf3";
	}
	if(var_35_string == "rat_big") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	if(var_35_string == "dog") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	if(var_35_string == "grabitel") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	if(var_35_string == "bomber") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	if(var_35_string == "sanitar") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	if(var_35_string == "hunter") {
		var_29_bool = false;
		return 4;
	EMIT "GOTO 0xbf3";
	}
	if(var_35_string == "soldier") {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}


void func_432(bool var_0_bool, bool var_1_bool)
{
	float var_25_float; cvector var_26_cvector; cvector var_27_cvector; bool var_28_bool; object var_29_object; bool var_30_bool;
	@rand(var_25_float, 0.5);
	@Sleep(var_25_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_444:
				@GetPosition(var_27_cvector);
				float var_34_float;
				func_491(var_34_float);
				@GetRandomPFPointInCircle(var_26_cvector, var_27_cvector, var_34_float, var_28_bool);
				if(var_28_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_444;
			}
				var_1_bool = false;
		}
		}
		goto Label_460;

	Label_460:
		object var_38_object; cvector var_39_cvector;
		var_26_cvector = var_39_cvector;
		func_519(var_38_object, var_39_cvector);
		var_38_object = var_29_object;
		if(var_29_object != null) {
			@RotatePath(var_29_object, var_30_bool);
			if(var_30_bool != 0) {
				bool var_44_bool;
				func_517(var_44_bool);
				@FollowPath(var_29_object, var_44_bool, var_30_bool);
				var_29_object = null;
				if(var_30_bool != 0) {
					TaskCall(2);
					func_689();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_29_object = null;
	}
	
}


void func_2483(int var_220_int)
{
	int var_222_int;
	@GetVariable("branch", var_222_int);
	var_222_int = var_220_int;
}


// @pe
void func_2489(object var_30_object)
{
	int var_31_int;
	func_2483(var_31_int);
	if(var_31_int == 1)
		@WorkWithCorpse(var_30_object);
	else
		@Barter(var_30_object);
	
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


void func_1985(string var_318_string)
{
	var_318_string = "walk";
}


void func_1987(string var_319_string)
{
	var_319_string = "run";
}


// @pe
void func_1989(string var_534_string, int var_535_int)
{
	if(var_535_int == 2) {
		var_534_string = "fire";
		return 0;
	EMIT "GOTO 0x7d1";
	}
	if(var_535_int == 1) {
		var_534_string = "bullet";
		return 0;
	}
	var_534_string = "phys";
}


void func_2502(int var_112_int, int var_113_int)
{
	if(var_112_int > var_113_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_125_int = 0;
	if(var_112_int != var_113_int) {
		@irand(var_125_int, (var_113_int - var_112_int));
	} else if(var_112_int == 0) {
		return 4;
	}
	var_125_int += var_112_int;
	if(var_125_int == 0)
		return 4;
	int var_133_int;
	func_2749(var_133_int, "Money");
	bool var_126_bool;
	@AddItem(var_126_bool, var_133_int, 0, var_125_int);
	
}


void func_974(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
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


void func_1504(bool var_597_bool, float var_598_float)
{
	float var_601_float; bool var_602_bool;
	@rand(var_601_float);
	if(var_601_float < var_598_float) {

		for(;;) {
			@IsAnimationPlaying(var_602_bool);
			if(!var_602_bool) { //@nz
			} else {
				bool var_605_bool;
				func_1602(var_605_bool);
				if(var_605_bool != 0) {
					var_597_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_597_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1706(var_602_bool);
}


void func_2018(bool var_97_bool, object var_98_object)
{
	bool var_100_bool;
	@IsPlayerActor(var_98_object, var_100_bool);
	var_100_bool = var_97_bool;
}


void func_2533(string var_226_string)
{
	object var_230_object;
	@CreateInvItem(var_230_object);
	var_230_object->SetItemName(var_226_string);
	var_230_object->SetProperty("Organ", 1);
	int var_231_int;
	var_230_object->GetItemID(var_231_int);
	bool var_232_bool;
	@AddItem(var_232_bool, var_230_object, 0, 1);
}
EMIT "Stack[-3] = 0";


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


void func_491(float var_34_float)
{
	float var_36_float;
	@GetCameraFarDistance(var_36_float);
	var_36_float = var_34_float;
}


void func_2035(float var_506_float, object var_507_object, float var_508_float, int var_509_int)
{
	int var_519_int; int var_521_int;
	object var_526_object;
	var_507_object = var_526_object;
	bool var_525_bool;
	func_2023(var_525_bool, var_526_object, "health");
	if(!var_525_bool) //@nz
		var_506_float = 0.0;
	bool var_529_bool; object var_530_object;
	func_2023(var_529_bool, var_530_object, "armor");
	if(!var_529_bool) //@nz
		var_519_int = 0;
	else
		var_530_object->GetProperty("armor", var_519_int);
	string var_534_string; int var_535_int;
	var_509_int = var_535_int;
	func_1989(var_534_string, var_535_int);
	string var_520_string = "armor_" + var_534_string;
	bool var_540_bool; object var_541_object; string var_542_string;
	var_507_object = var_541_object;
	func_2023(var_540_bool, var_541_object, var_542_string);
	if(!var_540_bool) //@nz
		var_521_int = 0;
	else
		var_507_object->GetProperty(var_542_string, var_521_int);

	float var_544_float;
	func_2383(var_544_float, ((var_519_int + var_521_int) / 100.0), (float)1);
	float var_522_float;
	var_544_float = var_522_float;
	float var_523_float;
	var_507_object->GetProperty("health", var_523_float);
	float var_524_float = var_508_float * (1 - var_522_float);
	float var_554_float;
	func_2390(var_554_float, (var_523_float - var_524_float), (float)0, (float)1);
	var_507_object->SetProperty("health", var_554_float);
	bool var_560_bool; object var_561_object;
	var_507_object = var_561_object;
	func_2018(var_560_bool, var_561_object);
	if(var_560_bool != 0) {
		float var_562_float = -var_524_float;
		func_2437(var_562_float);
	}
	var_524_float = var_506_float;
	
}


// @pe
void func_3061(int var_80_int, object var_81_object)
{
	object var_84_object;
	var_81_object = var_84_object;
	int var_83_int;
	func_2968(var_83_int, var_84_object);
	var_83_int = var_80_int;
}


void func_2550(void)
{
	int var_220_int;
	func_2483(var_220_int);
	if(var_220_int != 1) {
	}
	func_2533("liver");
	func_2533("kidney");
	func_2533("heart");
	func_2533("blood");
}


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1531(bool var_0_bool, bool var_398_bool, float var_399_float)
{
	bool var_405_bool; cvector var_406_cvector; cvector var_407_cvector; cvector var_408_cvector; float var_409_float;
	
	for(;;) {
		@IsAnimationPlaying(var_405_bool);
		if(!var_405_bool) //@nz
			break;
		bool var_411_bool;
		func_1602(var_411_bool);
		if(var_411_bool != 0) {
			var_398_bool = true;
			return 10;
		}
		bool var_450_bool;
		func_2149(var_450_bool, var_0_bool);
		if(!var_450_bool) { //@nz
			var_398_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_406_cvector); //@t
		@GetPFPosition(var_407_cvector);
		var_408_cvector = var_406_cvector - var_407_cvector;
		var_409_float = var_408_cvector | var_408_cvector;
		if(var_409_float < (var_399_float * var_399_float)) {
			bool var_455_bool; float var_456_float;
			var_399_float = var_456_float;
			func_1367(var_408_cvector, var_409_float, var_455_bool, var_456_float);
			var_398_bool = true;
			return 10;
		}
		@sync();
	}
	func_1706(var_409_float);
	var_398_bool = false;
}


// @pe
void func_3068(object var_119_object)
{
	object var_120_object;
	var_119_object = var_120_object;
	func_2978(var_120_object);
}


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


