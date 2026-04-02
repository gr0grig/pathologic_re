// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_18_object;
		var_14_bool = var_18_object;
		func_2706(var_18_object);
		int var_16_int;
		int var_17_int = var_16_int;
		if(var_16_int > 0) {
			object var_21_object;
			var_14_bool = var_21_object;
			func_2709(var_21_object);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_2715();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool, object var_15_object, cvector var_16_cvector, bool var_17_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		@SensePlayerOnly(true);
		func_2753();
		func_171();
	
		for(;;) {
			var_2_bool = false;
			func_432(var_12_cvector, var_13_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_18_object;
		var_14_bool = var_18_object;
		func_2706(var_18_object);
		int var_16_int;
		int var_17_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_367(var_16_int);
			object var_24_object;
			var_14_bool = var_24_object;
			func_2709(var_24_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_17_object;
		var_14_bool = var_17_object;
		func_2601(var_17_object);
		int var_26_int; object var_27_object;
		var_14_bool = var_27_object;
		func_2810(var_26_int, var_27_object);
		int var_16_int;
		var_26_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_367(var_16_int);
			object var_67_object;
			var_14_bool = var_67_object;
			func_2820(var_67_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		int var_18_int;
		object var_20_object;
		var_14_object = var_20_object;
		object var_21_object;
		var_15_cvector = var_21_object;
		bool var_22_bool;
		var_16_bool = var_22_bool;
		func_2780(var_22_bool);
		bool var_19_bool;
		if(var_19_bool != 0) {
			int var_23_int; object var_24_object; bool var_25_bool;
			var_14_object = var_24_object;
			var_16_bool = var_25_bool;
			func_2678(var_24_object, var_25_bool);
			var_23_int = var_18_int;
			if(var_18_int > 0) {
				if(var_18_int > 1)
					func_367(var_18_int);
				object var_65_object;
				var_14_object = var_65_object;
				func_2688(var_65_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_18_object;
		var_14_bool = var_18_object;
		func_2696(var_18_object);
		int var_16_int;
		int var_17_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_367(var_16_int);
			object var_24_object;
			var_14_bool = var_24_object;
			func_2699();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_14_cvector = var_19_object;
		string var_20_string;
		var_15_bool = var_20_string;
		bool var_18_bool;
		func_2515(var_18_bool, var_19_object, var_20_string);
		if(var_18_bool != 0) {
			func_367(var_17_int);
			object var_34_object; string var_35_string;
			var_14_cvector = var_34_object;
			var_15_bool = var_35_string;
			func_2547(var_34_object, var_35_string);
		} else {
			int var_45_int; string var_46_string; object var_47_object;
			var_15_bool = var_46_string;
			var_14_cvector = var_47_object;
			func_2701(var_47_object);
			var_45_int = var_17_int;
			if(!(var_17_int > 0)) goto Label_308;
			if(var_17_int > 1)
				func_367(var_17_int);
			string var_52_string; object var_53_object;
			var_15_bool = var_52_string;
			var_14_cvector = var_53_object;
			func_2704();
		}
	Label_308:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool; string var_16_string;
		func_2614(var_15_bool, var_16_string);
		if(var_15_bool != 0) {
			func_367(var_16_string);
			string var_59_string;
			var_14_bool = var_59_string;
			func_2630(var_59_string);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool; object var_16_object;
		func_2572(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_367(var_16_object);
			object var_28_object;
			var_14_bool = var_28_object;
			func_2595(var_28_object);
		} else {
			object var_30_object;
			func_392(var_30_object, var_30_object);
		}
	
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_15_object;
		func_392(var_15_object, var_15_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		if(var_14_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_367(var_13_bool);
		func_2715();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_367(var_14_bool);
		object var_16_object;
		var_14_bool = var_16_object;
		func_2491();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		@RequestClearPath(var_14_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_18_object;
		var_14_bool = var_18_object;
		func_2706(var_18_object);
		int var_16_int;
		int var_17_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_770();
			object var_23_object;
			var_14_bool = var_23_object;
			func_2709(var_23_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_17_object;
		var_14_bool = var_17_object;
		func_2601(var_17_object);
		int var_26_int; object var_27_object;
		var_14_bool = var_27_object;
		func_2810(var_26_int, var_27_object);
		int var_16_int;
		var_26_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_770();
			object var_66_object;
			var_14_bool = var_66_object;
			func_2820(var_66_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, cvector var_15_cvector, bool var_16_bool)
	{
		int var_18_int;
		object var_20_object;
		var_14_object = var_20_object;
		object var_21_object;
		var_15_cvector = var_21_object;
		bool var_22_bool;
		var_16_bool = var_22_bool;
		func_2780(var_22_bool);
		bool var_19_bool;
		if(var_19_bool != 0) {
			int var_23_int; object var_24_object; bool var_25_bool;
			var_14_object = var_24_object;
			var_16_bool = var_25_bool;
			func_2678(var_24_object, var_25_bool);
			var_23_int = var_18_int;
			if(var_18_int > 0) {
				if(var_18_int > 1)
					func_770();
				object var_64_object;
				var_14_object = var_64_object;
				func_2688(var_64_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_18_object;
		var_14_bool = var_18_object;
		func_2696(var_18_object);
		int var_16_int;
		int var_17_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_770();
			object var_23_object;
			var_14_bool = var_23_object;
			func_2699();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool, object var_13_object, cvector var_14_cvector, bool var_15_bool)
	{
		int var_17_int;
		object var_19_object;
		var_14_cvector = var_19_object;
		string var_20_string;
		var_15_bool = var_20_string;
		bool var_18_bool;
		func_2515(var_18_bool, var_19_object, var_20_string);
		if(var_18_bool != 0) {
			func_770();
			object var_33_object; string var_34_string;
			var_14_cvector = var_33_object;
			var_15_bool = var_34_string;
			func_2547(var_33_object, var_34_string);
		} else {
			int var_44_int; string var_45_string; object var_46_object;
			var_15_bool = var_45_string;
			var_14_cvector = var_46_object;
			func_2701(var_46_object);
			var_44_int = var_17_int;
			if(!(var_17_int > 0)) goto Label_653;
			if(var_17_int > 1)
				func_770();
			string var_51_string; object var_52_object;
			var_15_bool = var_51_string;
			var_14_cvector = var_52_object;
			func_2704();
		}
	Label_653:
	
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		string var_16_string;
		var_14_bool = var_16_string;
		bool var_15_bool;
		func_2614(var_15_bool, var_16_string);
		if(var_15_bool != 0) {
			func_770();
			string var_58_string;
			var_14_bool = var_58_string;
			func_2630(var_58_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_770();
		func_2715();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_16_object;
		var_14_bool = var_16_object;
		bool var_15_bool;
		func_2572(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_770();
			object var_27_object;
			var_14_bool = var_27_object;
			func_2595(var_27_object);
		}
	}

}


task task_3
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_17_object;
		var_14_bool = var_17_object;
		func_2601(var_17_object);
		int var_26_int; object var_27_object;
		var_14_bool = var_27_object;
		func_2775(var_27_object);
		int var_16_int;
		var_26_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_880();
			object var_32_object;
			var_14_bool = var_32_object;
			func_2778();
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		string var_16_string;
		var_14_bool = var_16_string;
		bool var_15_bool;
		func_2614(var_15_bool, var_16_string);
		if(var_15_bool != 0) {
			func_880();
			string var_58_string;
			var_14_bool = var_58_string;
			func_2630(var_58_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_880();
		func_2715();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_880();
		object var_15_object;
		var_14_bool = var_15_object;
		func_2491();
	}

}


task task_4
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		object var_17_object;
		var_14_bool = var_17_object;
		func_2601(var_17_object);
		int var_26_int; object var_27_object;
		var_14_bool = var_27_object;
		func_2775(var_27_object);
		int var_16_int;
		var_26_int = var_16_int;
		if(var_16_int > 0) {
			if(var_16_int > 1)
				func_1076(var_16_int);
			object var_33_object;
			var_14_bool = var_33_object;
			func_2778();
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, string var_5_string, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		bool var_15_bool; string var_16_string;
		func_2614(var_15_bool, var_16_string);
		if(var_15_bool != 0) {
			func_1076(var_16_string);
			string var_59_string;
			var_14_bool = var_59_string;
			func_2630(var_59_string);
		}
	}

	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_1076(var_13_bool);
		func_2715();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		if(var_14_bool != 0)
			return 0;
		bool var_17_bool;
		func_1092(var_17_bool, var_1_bool);
		if(!var_17_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		@RequestClearPath(var_14_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_1076(var_14_bool);
		object var_16_object;
		var_14_bool = var_16_object;
		func_2491();
	}

}


task task_5
{
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		cvector var_19_cvector; float var_20_float; cvector var_21_cvector; float var_22_float;
		if(var_14_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_19_cvector);
			@FindDirLength(var_20_float, var_19_cvector, 7000.0);
			cvector var_28_cvector;
			func_1101(var_22_float, var_28_cvector, 1.7453294);
			var_28_cvector = var_21_cvector;
			var_22_float = var_21_cvector | var_21_cvector;
			bool var_58_bool = false;
			if(var_22_float >= 2500.0) {
				bool var_61_bool;
				var_65_bool = var_22_float >= ((var_20_float * var_20_float) * 2.25);
				if(var_65_bool != 1) {
					bool var_66_bool;
					func_1272(true, var_66_bool);
					if(var_66_bool != 1)
						var_61_bool = false;
				}
				if(var_61_bool != 0)
					var_58_bool = true;
			}
			if(var_58_bool == 0) goto Label_1255;
			@Stop();
			cvector var_86_cvector;
			func_1718(var_86_cvector);
			var_1_bool = var_86_cvector + var_21_cvector;
		}
	Label_1255:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_1256(var_14_bool);
		object var_16_object;
		var_14_bool = var_16_object;
		func_2491();
	}

}


task task_6
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_1492(var_13_bool);
		func_2715();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, int var_11_int, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		cvector var_19_cvector; float var_20_float; cvector var_21_cvector; float var_22_float;
		if(var_14_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_19_cvector);
			@FindDirLength(var_20_float, var_19_cvector, 7000.0);
			cvector var_28_cvector;
			func_1337(var_22_float, var_28_cvector, 1.7453294);
			var_28_cvector = var_21_cvector;
			var_22_float = var_21_cvector | var_21_cvector;
			bool var_58_bool = false;
			if(var_22_float >= 2500.0) {
				bool var_61_bool;
				var_65_bool = var_22_float >= ((var_20_float * var_20_float) * 2.25);
				if(var_65_bool != 1) {
					bool var_66_bool;
					func_1508(true, var_66_bool);
					if(var_66_bool != 1)
						var_61_bool = false;
				}
				if(var_61_bool != 0)
					var_58_bool = true;
			}
			if(var_58_bool == 0) goto Label_1491;
			@Stop();
			cvector var_86_cvector;
			func_1718(var_86_cvector);
			var_1_bool = var_86_cvector + var_21_cvector;
		}
	Label_1491:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
		func_1492(var_14_bool);
		object var_16_object;
		var_14_bool = var_16_object;
		func_2491();
	}

}


task task_7
{
	// @pe
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool)
	{
		func_1686(var_13_bool);
		func_2715();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, int var_14_int)
	{
		cvector var_19_cvector; float var_20_float; cvector var_21_cvector; float var_22_float;
		if(var_14_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_19_cvector);
			@FindDirLength(var_20_float, var_19_cvector, 7000.0);
			cvector var_28_cvector;
			func_1531(var_22_float, var_28_cvector, 1.7453294);
			var_28_cvector = var_21_cvector;
			var_22_float = var_21_cvector | var_21_cvector;
			bool var_58_bool = false;
			if(var_22_float >= 2500.0) {
				bool var_61_bool;
				var_65_bool = var_22_float >= ((var_20_float * var_20_float) * 2.25);
				if(var_65_bool != 1) {
					bool var_66_bool;
					func_1702(true, var_66_bool);
					if(var_66_bool != 1)
						var_61_bool = false;
				}
				if(var_61_bool != 0)
					var_58_bool = true;
			}
			if(var_58_bool == 0) goto Label_1685;
			@Stop();
			cvector var_86_cvector;
			func_1718(var_86_cvector);
			var_1_bool = var_86_cvector + var_21_cvector;
		}
	Label_1685:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object)
	{
		func_1686(var_14_object);
		object var_16_object;
		var_14_object = var_16_object;
		func_2491();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, string var_15_string)
{
	float var_17_float;
	if(var_15_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float <= 0)
			@SignalDeath(var_14_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_2470(var_15_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
{
	object var_18_object;
	var_14_object = var_18_object;
	int var_19_int;
	var_15_int = var_19_int;
	float var_20_float;
	var_16_float = var_20_float;
	func_1955(var_18_object, var_19_int, var_20_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, cvector var_12_cvector, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float, cvector var_18_cvector, cvector var_19_cvector)
{
	object var_20_object;
	var_14_object = var_20_object;
	int var_21_int;
	var_15_int = var_21_int;
	float var_22_float;
	var_16_float = var_22_float;
	cvector var_23_cvector;
	var_18_cvector = var_23_cvector;
	cvector var_24_cvector;
	var_19_cvector = var_24_cvector;
	func_2023(var_22_float, var_23_cvector, var_24_cvector);
}


// @pe
void func_0(object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_33(var_17_object);
	object var_97_object;
	var_16_object = var_97_object;
	func_2783(var_97_object);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_517(bool var_48_bool)
{
	var_48_bool = false;
}


void func_519(object var_42_object, cvector var_43_cvector)
{
	object var_45_object;
	@FindShiftedPathTo(var_45_object, var_43_cvector);
	var_45_object = var_42_object;
}
EMIT "Stack[-1] = 0";


void func_2572(bool var_15_bool, object var_16_object)
{
	bool var_18_bool;
	bool var_19_bool = false;
	bool var_20_bool; object var_21_object;
	var_16_object = var_21_object;
	func_2723(var_21_object);
	if(var_20_bool != 0) {
		bool var_22_bool; object var_23_object;
		func_1738(var_22_bool, var_23_object);
		if(var_22_bool != 0)
			var_19_bool = true;
	}
	if(var_19_bool != 0) {
		var_23_object->IsWeaponHolstered(var_18_bool);
		if(!var_18_bool) //@nz
			var_15_bool = true;
	}
	var_15_bool = false;
}


void func_1561(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_67_object)
{
	float var_77_float; cvector var_79_cvector; float var_80_float;
	cvector var_81_cvector;
	func_1531(var_80_float, var_81_cvector, 1.7453294);
	cvector var_76_cvector;
	var_81_cvector = var_76_cvector;
	if((var_76_cvector | var_76_cvector) < 2500.0) {
		cvector var_113_cvector;
		func_1531(var_80_float, var_113_cvector, 2.6179938);
		var_113_cvector = var_76_cvector;
		var_77_float = var_76_cvector | var_76_cvector;
		if(var_77_float < 2500.0) {
			var_118_float = sqrt(var_77_float);
			@Trace("Can't retreat, distance: " + var_118_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_121_float = GetByIndex(var_76_cvector, 0);
	var_122_float = GetByIndex(var_76_cvector, 2);
	@Rotate(var_121_float, var_122_float);
	cvector var_123_cvector;
	func_1718(var_123_cvector);
	@SetTimer(120, 0.5);
	
Label_1603:
	bool var_78_bool;
	@MovePoint((var_123_cvector + var_76_cvector), 1, var_78_bool);
	if(var_78_bool != 0) {
		if(var_67_object == null) {
			goto Label_1633;
		EMIT "GOTO 0x65f";

		Label_1633:
			for(;;) {
				return 10;
		}
			cvector var_131_cvector;
			func_1531(var_80_float, var_131_cvector, 2.6179938);
			var_131_cvector = var_79_cvector;
			if((var_79_cvector | var_79_cvector) >= 2500.0) {
				cvector var_135_cvector;
				func_1718(var_135_cvector);
				var_1_bool = var_135_cvector + var_79_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1603; //@nz

	}
}


void func_33(object var_17_object)
{
	cvector var_28_cvector; cvector var_29_cvector; cvector var_30_cvector; cvector var_31_cvector; string var_32_string; object var_33_object; bool var_34_bool; bool var_35_bool; float var_36_float; cvector var_37_cvector;
	if(var_17_object == null) {
		func_124("fdie");
	} else {
		var_17_object->GetPosition(var_28_cvector);
		@GetPosition(var_29_cvector);
		@GetDirection(var_30_cvector);
		var_31_cvector = var_29_cvector - var_28_cvector;
		var_71_float = GetByIndex(var_31_cvector, 0);
		var_72_float = GetByIndex(var_30_cvector, 0);
		var_74_float = GetByIndex(var_31_cvector, 2);
		var_75_float = GetByIndex(var_30_cvector, 2);
		if(((var_71_float * var_72_float) + (var_74_float * var_75_float)) >= 0)
			var_32_string = "fdie";
		else
			var_32_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_17_object = var_33_object;
		var_82_bool = IsFuncExist(var_17_object, "GetScriptProperty", 2);
		if(var_82_bool != 0) {
			var_17_object->HasScriptProperty(var_34_bool, "Owner");
			if(var_34_bool != 0) {
				var_17_object->GetScriptProperty(var_33_object, "Owner");
				if(var_33_object == null)
					var_17_object = var_33_object;
			}
		}
		var_89_bool = IsFuncExist(var_33_object, "@GetEyesHeight", 1);
		if(var_89_bool != 0) {
			var_33_object->GetEyesHeight(var_36_float);
			var_37_cvector = [0.0, 0.0, 0.0];
			var_90_float = GetByIndex(var_37_cvector, 1);
			var_36_float = var_90_float;
			SetByIndex(var_37_cvector, 1) = var_90_float;
			@LookAsync(var_17_object, "head", var_37_cvector);
			var_35_bool = true;
		} else {
			var_35_bool = false;

		}
		string var_92_string;
		var_32_string = var_92_string;
		func_2042(var_92_string);
		@PlayAnimation("all", var_32_string);
		@WaitForAnimEnd();
		if(var_35_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_32_string);
		@RemoveEnvelope();
		var_33_object = null;
	}
	
}


// @pe
void func_2595(object var_27_object)
{
	object var_28_object;
	var_27_object = var_28_object;
	func_2726();
}


void func_2083(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2601(object var_17_object)
{
	bool var_18_bool; object var_19_object;
	func_1738(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		object var_22_object;
		func_2083(var_22_object);
		@ReportReputationChange(var_19_object, var_22_object, -0.03);
	}
}


void func_2089(cvector var_46_cvector, cvector var_47_cvector)
{
	float var_55_float = sqrt(var_47_cvector | var_47_cvector);
	if(var_55_float < 0.000001)
		var_46_cvector = [0.0, 0.0, 0.0];
	var_46_cvector = var_47_cvector / var_55_float;
}


// @pe
void func_2099(float var_95_float, float var_96_float, float var_97_float, float var_98_float)
{
	if(var_96_float < var_97_float) {
		var_97_float = var_95_float;
		return 0;
	}
	if(var_96_float > var_98_float) {
		var_98_float = var_95_float;
		return 0;
	}
	var_96_float = var_95_float;
}


void func_1076(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2614(bool var_15_bool, string var_16_string)
{
	object var_18_object;
	if(var_16_string == "heal") {
		@FindActor(var_18_object, "player");
		bool var_22_bool; object var_23_object;
		var_18_object = var_23_object;
		func_2738(var_22_bool, var_23_object);
		var_22_bool = var_15_bool;
	EMIT "Stack[-1] = 0";
	}
	var_15_bool = false;
}


// @pe
void func_2110(float var_77_float, cvector var_78_cvector, cvector var_79_cvector)
{
	var_84_float = sqrt((var_78_cvector | var_78_cvector) * (var_79_cvector | var_79_cvector));
	var_77_float = (var_78_cvector | var_79_cvector) / var_84_float;
}


// @pe
void func_1092(bool var_17_bool, object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_1887(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
}


void func_2630(string var_59_string)
{
	object var_61_object;
	if(var_59_string == "heal") {
		@FindActor(var_61_object, "player");
		object var_65_object;
		var_61_object = var_65_object;
		func_2745(var_65_object);
		var_61_object = null;
	}
}


// @pe
void func_2118(bool var_72_bool, object var_73_object, float var_74_float)
{
	if(!var_73_object) { //@nz
		var_72_bool = false;
		return 0;
	}
	if(var_74_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_74_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_79_float;
		var_74_float = var_79_float;
		func_2180(var_79_float);
		bool var_83_bool; object var_84_object; float var_86_float;
		var_73_object = var_84_object;
		var_74_float = var_86_float;
		func_1755(var_83_bool, var_84_object, "reputation", var_86_float, (float)0, (float)1);
		var_72_bool = true;
		return 0;

	}
	
	var_72_bool = false;
}


void func_1099(string var_118_string)
{
	var_118_string = "run";
}


void func_1101(bool var_0_bool, cvector var_28_cvector, float var_29_float)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_0_bool->GetPosition(var_37_cvector); //@t
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_42_cvector;
	cvector var_44_cvector;
	func_2089(var_44_cvector, (var_36_cvector - var_37_cvector));
	func_2089(var_42_cvector, (var_44_cvector + (var_38_cvector * 0.75)));
	cvector var_39_cvector;
	var_42_cvector = var_39_cvector;
	cvector var_40_cvector;
	float var_41_float;
	@FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, 32, 7000.0);
	if((var_41_float - 100) < 0)
		var_41_float = 0;
	var_28_cvector = var_40_cvector * var_41_float;
}


void func_2643(string var_72_string, int var_73_int)
{
	string var_75_string = "idle";
	if(var_73_int != 0)
		var_75_string += var_73_int;
	var_75_string = var_72_string;
}


void func_2650(int var_66_int)
{
	int var_69_int; bool var_70_bool;
	var_69_int = 0;
	
	for(;;) {
		string var_72_string; int var_73_int;
		var_69_int = var_73_int;
		func_2643(var_72_string, var_73_int);
		@HasAnimation(var_70_bool, "all", var_72_string);
		if(!var_70_bool) //@nz
			break;
		var_69_int += 1;
	}
	var_69_int = var_66_int;
}


void func_2153(float var_196_float)
{
	object var_198_object;
	@CreateFloatVector(var_198_object);
	var_198_object->add(var_196_float);
	@SendWorldWndMessage(14, var_198_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2667(int var_57_int)
{
	var_57_int = 2;
}


void func_1131(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_65_object)
{
	float var_75_float; cvector var_77_cvector; float var_78_float;
	cvector var_79_cvector;
	func_1101(var_78_float, var_79_cvector, 1.7453294);
	cvector var_74_cvector;
	var_79_cvector = var_74_cvector;
	if((var_74_cvector | var_74_cvector) < 2500.0) {
		cvector var_111_cvector;
		func_1101(var_78_float, var_111_cvector, 2.6179938);
		var_111_cvector = var_74_cvector;
		var_75_float = var_74_cvector | var_74_cvector;
		if(var_75_float < 2500.0) {
			var_116_float = sqrt(var_75_float);
			@Trace("Can't retreat, distance: " + var_116_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_119_float = GetByIndex(var_74_cvector, 0);
	var_120_float = GetByIndex(var_74_cvector, 2);
	@Rotate(var_119_float, var_120_float);
	cvector var_121_cvector;
	func_1718(var_121_cvector);
	@SetTimer(120, 0.5);
	
Label_1173:
	bool var_76_bool;
	@MovePoint((var_121_cvector + var_74_cvector), 1, var_76_bool);
	if(var_76_bool != 0) {
		if(var_65_object == null) {
			goto Label_1203;
		EMIT "GOTO 0x4b1";

		Label_1203:
			for(;;) {
				return 10;
		}
			cvector var_129_cvector;
			func_1101(var_78_float, var_129_cvector, 2.6179938);
			var_129_cvector = var_77_cvector;
			if((var_77_cvector | var_77_cvector) >= 2500.0) {
				cvector var_133_cvector;
				func_1718(var_133_cvector);
				var_1_bool = var_133_cvector + var_77_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1173; //@nz

	}
}


// @pe
void func_2670(object var_64_object)
{
	object var_65_object;
	var_64_object = var_65_object;
	TaskCall(3);
	func_775(var_65_object);
	TaskReturn();
}


void func_2163(float var_106_float)
{
	object var_108_object;
	@CreateFloatVector(var_108_object);
	var_108_object->add(var_106_float);
	if(var_106_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_108_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2678(int var_23_int, object var_24_object)
{
	object var_27_object;
	var_24_object = var_27_object;
	bool var_26_bool;
	func_1887(var_26_bool, var_27_object);
	if(var_26_bool != 0)
		var_23_int = 2;
	else
		var_23_int = 0;
	
}


// @pe
void func_124(string var_39_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_40_string;
	var_39_string = var_40_string;
	func_2042(var_40_string);
	@PlayAnimation("all", var_39_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_39_string);
	@RemoveEnvelope();
}


// @pe
void func_2688(object var_64_object)
{
	object var_65_object;
	var_64_object = var_65_object;
	TaskCall(5);
	func_1131(var_66_object, var_67_cvector, var_68_bool, var_65_object);
	TaskReturn();
}


void func_2180(float var_79_float)
{
	object var_81_object;
	@CreateFloatVector(var_81_object);
	var_81_object->add(var_79_float);
	@SendWorldWndMessage(16, var_81_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2696(int var_17_int)
{
	var_17_int = 0;
}


// @pe
void func_2699(void)
{
}


// @pe
void func_2701(int var_44_int)
{
	var_44_int = 0;
}


void func_2190(int var_115_int)
{
	float var_117_float;
	@GetGameTime(var_117_float);
	var_115_int = 1 + (var_117_float / 24);
}


// @pe
void func_2704(void)
{
}


// @pe
void func_2706(int var_17_int)
{
	var_17_int = 2;
}


// @pe
void func_2709(object var_23_object)
{
	object var_24_object;
	var_23_object = var_24_object;
	func_2757(var_24_object);
}


void func_1686(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_2199(int var_220_int)
{
	int var_222_int;
	@GetVariable("branch", var_222_int);
	var_222_int = var_220_int;
}


void func_2715(void)
{
	object var_20_object;
	func_2083(var_20_object);
	@RemoveActor(var_20_object);
	@Hold();
}


// @pe
void func_2205(object var_29_object)
{
	int var_30_int;
	func_2199(var_30_int);
	if(var_30_int == 1)
		@WorkWithCorpse(var_29_object);
	else
		@Barter(var_29_object);
	
}


// @pe
void func_2723(bool var_20_bool)
{
	var_20_bool = false;
}


void func_1702(bool var_0_bool, bool var_66_bool)
{
	cvector var_69_cvector;
	@GetDirection(var_69_cvector);
	cvector var_71_cvector;
	func_1723(var_71_cvector, var_0_bool);
	cvector var_70_cvector;
	var_71_cvector = var_70_cvector;
	float var_77_float; cvector var_78_cvector; cvector var_79_cvector;
	var_69_cvector = var_78_cvector;
	var_70_cvector = var_79_cvector;
	func_2110(var_77_float, var_78_cvector, var_79_cvector);
	var_66_bool = var_77_float >= -0.34202012;
}


// @pe
void func_2726(void)
{
}


// @pe
void func_2728(bool var_27_bool)
{
	var_27_bool = false;
}


void func_2218(int var_112_int, int var_113_int)
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
	func_2465(var_133_int, "Money");
	bool var_126_bool;
	@AddItem(var_126_bool, var_133_int, 0, var_125_int);
	
}


void func_171(void)
{
	bool var_16_bool;
	func_2037(var_16_bool);
	if(!var_16_bool) //@nz
		func_2715();
}


// @pe
void func_2731(void)
{
}


// @pe
void func_2733(bool var_31_bool)
{
	var_31_bool = false;
}


// @pe
void func_2736(void)
{
}


void func_689(void)
{
	int var_59_int; int var_60_int; bool var_61_bool; float var_62_float; bool var_63_bool;
	@WaitForAnimEnd();
	bool var_64_bool;
	func_2037(var_64_bool);
	if(!var_64_bool) //@nz
		return 14;
	int var_66_int;
	func_2650(var_66_int);
	int var_57_int;
	var_66_int = var_57_int;
	int var_58_int = 0;
	
	for(;;) {
		bool var_79_bool = false;
		if(var_58_int < 5) {
			bool var_82_bool;
			func_2037(var_82_bool);
			if(var_82_bool != 0)
				var_79_bool = true;
		}
		if(var_79_bool != 0) {
			@irand(var_59_int, 3);
			if(var_59_int == 0) {
				if(var_57_int == 0) goto Label_736;
				@irand(var_60_int, var_57_int);
				string var_88_string; int var_89_int;
				var_60_int = var_89_int;
				func_2643(var_88_string, var_89_int);
				@PlayAnimation("all", var_88_string);
				@WaitForAnimEnd(var_61_bool);
				if(!var_61_bool) { //@nz
				} else {
			} else {
			if(var_59_int == 1) {
				@rand(var_62_float, 4);
				@Sleep((var_62_float + 1), var_63_bool);
				if(!var_63_bool) { //@nz
					goto Label_765;
				}
			} else if(var_58_int != 0) {
				goto Label_765;
			}
			}
					bool var_91_bool;
					func_768(var_91_bool);
					var_92_bool = !var_91_bool; //@nz
					if(var_92_bool == 0) goto Label_760;
			}
		}
	Label_765:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_760:
		@ResetAAS();
		var_58_int += 1;
	}
	
}


// @pe
void func_2738(bool var_22_bool, object var_23_object)
{
	object var_25_object;
	var_23_object = var_25_object;
	bool var_24_bool;
	func_1887(var_24_bool, var_25_object);
	var_24_bool = var_22_bool;
}


void func_1718(cvector var_86_cvector)
{
	cvector var_88_cvector;
	@GetPosition(var_88_cvector);
	var_88_cvector = var_86_cvector;
}


// @pe
void func_2745(object var_65_object)
{
	object var_66_object;
	var_65_object = var_66_object;
	TaskCall(6);
	func_1288(var_66_object);
	TaskReturn();
}


void func_1723(cvector var_48_cvector, object var_49_object)
{
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	cvector var_53_cvector;
	var_49_object->GetPosition(var_53_cvector);
	var_48_cvector = var_53_cvector - var_52_cvector;
}


void func_2753(void)
{
	var_15_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_1730(float var_132_float, object var_133_object)
{
	cvector var_137_cvector;
	@GetPosition(var_137_cvector);
	cvector var_138_cvector;
	var_133_object->GetPosition(var_138_cvector);
	var_132_float = (var_138_cvector - var_137_cvector) | (var_138_cvector - var_137_cvector);
}


void func_2757(object var_24_object)
{
	bool var_26_bool;
	var_27_bool = GlobalVars[0];
	if(var_27_bool != 0) {
		@IsOverrideActive(var_26_bool);
		if(!var_26_bool) { //@nz
			object var_29_object;
			var_24_object = var_29_object;
			func_2205(var_29_object);
		}
	}
}


void func_2249(string var_226_string)
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


void func_1738(bool var_98_bool, object var_99_object)
{
	bool var_101_bool;
	@IsPlayerActor(var_99_object, var_101_bool);
	var_101_bool = var_98_bool;
}


void func_1743(bool var_41_bool, object var_42_object, string var_43_string)
{
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", 2);
	if(!var_48_bool) { //@nz
		var_41_bool = false;
		return 2;
	}
	bool var_45_bool;
	var_42_object->HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
}


void func_2770(bool var_66_bool, object var_67_object)
{
	bool var_69_bool;
	@IsPlayerActor(var_67_object, var_69_bool);
	var_69_bool = var_66_bool;
}


// @pe
void func_2775(int var_26_int)
{
	var_26_int = 0;
}


// @pe
void func_2778(void)
{
}


void func_1755(bool var_83_bool, object var_84_object, string var_85_string, float var_86_float, float var_87_float, float var_88_float)
{
	object var_92_object;
	var_84_object = var_92_object;
	string var_93_string;
	var_85_string = var_93_string;
	bool var_91_bool;
	func_1743(var_91_bool, var_92_object, var_93_string);
	if(!var_91_bool) //@nz
		var_83_bool = false;
	float var_90_float;
	var_84_object->GetProperty(var_85_string, var_90_float);
	float var_95_float; float var_97_float; float var_98_float;
	var_87_float = var_97_float;
	var_88_float = var_98_float;
	func_2099(var_95_float, (var_90_float + var_86_float), var_97_float, var_98_float);
	var_84_object->SetProperty(var_85_string, var_95_float);
	var_83_bool = true;
}


// @pe
void func_2780(bool var_19_bool)
{
	var_19_bool = false;
}


void func_2266(void)
{
	int var_220_int;
	func_2199(var_220_int);
	if(var_220_int != 1) {
	}
	func_2249("diseased_liver");
	func_2249("diseased_kidney");
	func_2249("diseased_heart");
	func_2249("diseased_blood");
}


// @pe
void func_2783(object var_97_object)
{
	bool var_98_bool; object var_99_object;
	func_1738(var_98_bool, var_99_object);
	if(var_98_bool != 0) {
		object var_102_object;
		func_2083(var_102_object);
		@ReportReputationChange(var_99_object, var_102_object, -0.05);
		func_2290(true);
	}
	func_2266();
	var_240_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1256(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1777(float var_142_float, object var_143_object, float var_144_float)
{
	float var_148_float;
	object var_150_object;
	var_143_object = var_150_object;
	bool var_149_bool;
	func_1743(var_149_bool, var_150_object, "disease");
	if(!var_149_bool) { //@nz
		var_142_float = 0;
		return 4;
	}
	float var_147_float = 0;
	bool var_153_bool; object var_154_object;
	func_1743(var_153_bool, var_154_object, "armor_disease");
	if(var_153_bool != 0) {
		var_154_object->GetProperty("armor_disease", var_147_float);
		var_147_float /= 100;
	}
	bool var_158_bool; object var_159_object;
	func_1743(var_158_bool, var_159_object, "immunity");
	if(var_158_bool != 0) {
		var_159_object->GetProperty("immunity", var_148_float);
		var_147_float += var_148_float;
		bool var_162_bool; object var_163_object; float var_165_float;
		var_143_object = var_163_object;
		var_165_float = -var_144_float;
		func_1755(var_162_bool, var_163_object, "immunity", var_165_float, (float)0, (float)1);
	}
	if(var_147_float >= 1) {
		var_142_float = 0.0;
		return 4;
	}
	var_144_float *= ((1 - var_147_float) / 2);
	bool var_186_bool; object var_187_object; float var_189_float;
	var_143_object = var_187_object;
	var_144_float = var_189_float;
	func_1755(var_186_bool, var_187_object, "disease", var_189_float, (float)0, (float)1);
	bool var_192_bool; object var_193_object;
	var_143_object = var_193_object;
	func_1738(var_192_bool, var_193_object);
	if(var_192_bool != 0) {
		float var_196_float;
		var_144_float = var_196_float;
		func_2153(var_196_float);
	}
	var_144_float = var_142_float;
}


void func_2290(bool var_106_bool)
{
	int var_109_int; bool var_110_bool;
	if(var_106_bool != 0) {
		int var_115_int;
		func_2190(var_115_int);
		func_2218(0, (100 + (var_115_int * 100)));
		@irand(var_109_int, 8);
		if(var_109_int == 0) {
			int var_143_int;
			func_2465(var_143_int, "lemon");
			@AddItem(var_110_bool, var_143_int, 0, 1);
		} else {
				if(var_109_int == 1) {
					int var_149_int;
					func_2465(var_149_int, "rusk");
					@AddItem(var_110_bool, var_149_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_109_int == 2) {
				int var_155_int;
				func_2465(var_155_int, "hook");
				@AddItem(var_110_bool, var_155_int, 0, 1);
			} else if(var_109_int == 4) {
				int var_161_int;
				func_2465(var_161_int, "syringe");
				@AddItem(var_110_bool, var_161_int, 0, 1);
			} else if(var_109_int == 5) {
				int var_167_int;
				func_2465(var_167_int, "watch");
				@AddItem(var_110_bool, var_167_int, 0, 1);
			} else if(var_109_int == 6) {
				int var_173_int;
				func_2465(var_173_int, "razor");
				@AddItem(var_110_bool, var_173_int, 0, 1);
			}
	}
		int var_180_int;
		func_2190(var_180_int);
		func_2218(0, (50 + (var_180_int * 50)));
		@irand(var_109_int, 7);
		if(var_109_int == 0) {
			int var_186_int;
			func_2465(var_186_int, "beads");
			@AddItem(var_110_bool, var_186_int, 0, 1);
		} else if(var_109_int == 1) {
			int var_192_int;
			func_2465(var_192_int, "bracelet");
			@AddItem(var_110_bool, var_192_int, 0, 1);
		} else if(var_109_int == 2) {
			int var_198_int;
			func_2465(var_198_int, "ear_ring");
			@AddItem(var_110_bool, var_198_int, 0, 1);
		} else if(var_109_int == 3) {
			int var_204_int;
			func_2465(var_204_int, "gold_ring");
			@AddItem(var_110_bool, var_204_int, 0, 1);
		} else if(var_109_int == 4) {
			int var_210_int;
			func_2465(var_210_int, "silver_ring");
			@AddItem(var_110_bool, var_210_int, 0, 1);
		} else if(var_109_int == 5) {
			int var_216_int;
			func_2465(var_216_int, "flower");
			@AddItem(var_110_bool, var_216_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1272(bool var_0_bool, bool var_66_bool)
{
	cvector var_69_cvector;
	@GetDirection(var_69_cvector);
	cvector var_71_cvector;
	func_1723(var_71_cvector, var_0_bool);
	cvector var_70_cvector;
	var_71_cvector = var_70_cvector;
	float var_77_float; cvector var_78_cvector; cvector var_79_cvector;
	var_69_cvector = var_78_cvector;
	var_70_cvector = var_79_cvector;
	func_2110(var_77_float, var_78_cvector, var_79_cvector);
	var_66_bool = var_77_float >= -0.34202012;
}


// @pe
void func_2810(int var_26_int, object var_27_object)
{
	object var_29_object;
	var_27_object = var_29_object;
	bool var_28_bool;
	func_1887(var_28_bool, var_29_object);
	if(var_28_bool != 0)
		var_26_int = 2;
	else
		var_26_int = 0;
	
}


void func_768(bool var_91_bool)
{
	var_91_bool = true;
}


void func_770(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2820(object var_66_object)
{
	object var_67_object;
	var_66_object = var_67_object;
	TaskCall(7);
	func_1561(var_68_object, var_69_cvector, var_70_bool, var_67_object);
	TaskReturn();
}


// @pe
void func_775(object var_65_object)
{
	object var_67_object;
	var_65_object = var_67_object;
	bool var_66_bool;
	func_2770(var_66_bool, var_67_object);
	if(var_66_bool != 0) {
		object var_70_object;
		var_65_object = var_70_object;
		func_831(var_70_object);
	}
}


void func_1288(object var_66_object)
{
	@Face(var_66_object);
	bool var_72_bool; object var_73_object;
	var_66_object = var_73_object;
	func_2118(var_72_bool, var_73_object, 0.1);
	@PlayAnimation("all", "bow");
	@WaitForAnimEnd();
	@StopAsync();
	func_2163(-0.06);
	bool var_114_bool; object var_115_object;
	var_66_object = var_115_object;
	func_1755(var_114_bool, var_115_object, "health", -0.06, (float)0, (float)1);
	bool var_71_bool;
	@HasProperty("disease", var_71_bool);
	if(var_71_bool != 0)
		@SetProperty("disease", 0);
	object var_124_object;
	bool var_70_bool;
	func_1367(var_124_object, var_70_bool, var_71_bool, var_124_object);
}


void func_1846(bool var_34_bool, object var_35_object)
{
	bool var_37_bool;
	var_35_object->IsDead(var_37_bool);
	var_37_bool = var_34_bool;
}


void func_1337(bool var_0_bool, cvector var_28_cvector, float var_29_float)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_0_bool->GetPosition(var_37_cvector); //@t
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_42_cvector;
	cvector var_44_cvector;
	func_2089(var_44_cvector, (var_36_cvector - var_37_cvector));
	func_2089(var_42_cvector, (var_44_cvector + (var_38_cvector * 0.75)));
	cvector var_39_cvector;
	var_42_cvector = var_39_cvector;
	cvector var_40_cvector;
	float var_41_float;
	@FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, 32, 7000.0);
	if((var_41_float - 100) < 0)
		var_41_float = 0;
	var_28_cvector = var_40_cvector * var_41_float;
}


void func_1851(bool var_23_bool, object var_24_object)
{
	if(var_24_object == null) {
		var_23_bool = false;
		return 4;
	}
	bool var_30_bool = false;
	var_33_bool = IsFuncExist(var_24_object, "IsDead", 1);
	if(var_33_bool != 0) {
		bool var_34_bool; object var_35_object;
		var_24_object = var_35_object;
		func_1846(var_34_bool, var_35_object);
		if(var_34_bool != 0)
			var_30_bool = true;
	}
	if(var_30_bool != 0) {
		var_23_bool = false;
		return 4;
	}
	object var_27_object;
	@GetScene(var_27_object);
	if(var_27_object == null) {
		var_23_bool = false;
		return 4;
	}
	object var_28_object;
	var_24_object->GetScene(var_28_object);
	if(var_27_object != var_28_object) {
		var_23_bool = false;
		return 4;
	}
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_831(object var_70_object)
{
	bool var_72_bool;
	
	for(;;) {
		bool var_73_bool; object var_74_object;
		TaskCall(4);
		func_939(var_73_bool, var_74_object);
		TaskReturn();
		if(var_75_bool != 0) {
			@Face(var_74_object);
			@WaitForAnimEnd(var_72_bool);
			if(!var_72_bool) { //@nz
			} else {
					@PlayAnimation("all", "dattack_begin");
					@WaitForAnimEnd(var_72_bool);
					var_131_bool = !var_72_bool; //@nz
					if(var_131_bool == 0) goto Label_855;
			}
		}
	Label_879:
		for(;;) {
			return 2;

		}

	Label_855:
		float var_132_float; object var_133_object;
		var_70_object = var_133_object;
		func_1730(var_132_float, var_133_object);
		if(var_132_float <= 90000.0) {
			float var_142_float; object var_143_object;
			var_70_object = var_143_object;
			func_1777(var_142_float, var_143_object, 0.2);
		}
		@PlayAnimation("all", "dattack_end");
		@WaitForAnimEnd(var_72_bool);
		if(!var_72_bool) { //@nz
			goto Label_879;
		}
		@StopAsync();
	}
}


void func_1367(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_124_object)
{
	float var_131_float; cvector var_133_cvector; float var_134_float;
	cvector var_135_cvector;
	func_1337(var_134_float, var_135_cvector, 1.7453294);
	cvector var_130_cvector;
	var_135_cvector = var_130_cvector;
	if((var_130_cvector | var_130_cvector) < 2500.0) {
		cvector var_167_cvector;
		func_1337(var_134_float, var_167_cvector, 2.6179938);
		var_167_cvector = var_130_cvector;
		var_131_float = var_130_cvector | var_130_cvector;
		if(var_131_float < 2500.0) {
			var_172_float = sqrt(var_131_float);
			@Trace("Can't retreat, distance: " + var_172_float);
			@Sleep(0.5);
			return 10;
		}
	}
	var_175_float = GetByIndex(var_130_cvector, 0);
	var_176_float = GetByIndex(var_130_cvector, 2);
	@Rotate(var_175_float, var_176_float);
	cvector var_177_cvector;
	func_1718(var_177_cvector);
	@SetTimer(120, 0.5);
	
Label_1409:
	bool var_132_bool;
	@MovePoint((var_177_cvector + var_130_cvector), 1, var_132_bool);
	if(var_132_bool != 0) {
		if(var_124_object == null) {
			goto Label_1439;
		EMIT "GOTO 0x59d";

		Label_1439:
			for(;;) {
				return 10;
		}
			cvector var_185_cvector;
			func_1337(var_134_float, var_185_cvector, 2.6179938);
			var_185_cvector = var_133_cvector;
			if((var_133_cvector | var_133_cvector) >= 2500.0) {
				cvector var_189_cvector;
				func_1718(var_189_cvector);
				var_1_bool = var_189_cvector + var_133_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1409; //@nz

	}
}


void func_1887(bool var_19_bool, object var_20_object)
{
	object var_24_object;
	var_20_object = var_24_object;
	bool var_23_bool;
	func_1851(var_23_bool, var_24_object);
	if(!var_23_bool) { //@nz
		var_19_bool = false;
		return 2;
	}
	bool var_41_bool; object var_42_object;
	func_1743(var_41_bool, var_42_object, "noaccess");
	if(!var_41_bool) { //@nz
		var_19_bool = true;
		return 2;
	}
	int var_22_int;
	var_42_object->GetProperty("noaccess", var_22_int);
	var_19_bool = var_22_int == 0;
}


void func_367(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_503(var_13_cvector, var_14_bool);
}


void func_880(void)
{
	@StopAsync();
	@StopAnimation();
}


void func_375(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_510(var_18_bool, var_19_int);
}


void func_1911(object var_31_object)
{
	string var_45_string;
	if(var_31_object == null)
		return 14;
	bool var_39_bool;
	@IsDead(var_39_bool);
	if(var_39_bool != 0)
		return 14;
	int var_40_int;
	@GetSecondaryAnimationType(var_40_int);
	if(var_40_int < 0)
		return 14;
	cvector var_41_cvector;
	var_31_object->GetPosition(var_41_cvector);
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	@GetDirection(var_43_cvector);
	cvector var_44_cvector = var_42_cvector - var_41_cvector;
	var_50_float = GetByIndex(var_44_cvector, 0);
	var_51_float = GetByIndex(var_43_cvector, 0);
	var_53_float = GetByIndex(var_44_cvector, 2);
	var_54_float = GetByIndex(var_43_cvector, 2);
	if(((var_50_float * var_51_float) + (var_53_float * var_54_float)) >= 0)
		var_45_string = "fhit";
	else
		var_45_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_45_string + "1"), (var_45_string + "2"), -10);
	
}


void func_392(bool var_2_bool, object var_15_object)
{
	bool var_20_bool; object var_21_object;
	func_1887(var_20_bool, var_21_object);
	if(!var_20_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_18_bool;
	@IsPlayerActor(var_21_object, var_18_bool);
	if(!var_18_bool) //@nz
		return 4;
	int var_57_int; object var_58_object;
	var_15_object = var_58_object;
	func_2667(var_58_object);
	int var_19_int;
	var_57_int = var_19_int;
	if(var_19_int > 0) {
		if(var_19_int > 1)
			func_375(var_19_int);
		object var_64_object;
		var_15_object = var_64_object;
		func_2670(var_64_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_2465(int var_133_int, string var_134_string)
{
	int var_136_int;
	@GetInvItemByName(var_136_int, var_134_string);
	var_136_int = var_133_int;
}


void func_1955(object var_18_object, int var_19_int, float var_20_float)
{
	cvector var_30_cvector; object var_31_object; int var_32_int; bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector;
	bool var_39_bool = false;
	bool var_40_bool = false;
	if(var_18_object != 0) {
		if(var_19_int != 4)
			var_40_bool = true;
	}
	if(var_40_bool != 0) {
		if(var_19_int != 5)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		cvector var_46_cvector; cvector var_47_cvector;
		cvector var_48_cvector; object var_49_object;
		var_18_object = var_49_object;
		func_1723(var_48_cvector, var_49_object);
		var_48_cvector = var_47_cvector;
		func_2089(var_46_cvector, var_47_cvector);
		var_46_cvector = var_30_cvector;
		@CreateVectorVector(var_31_object);
		var_32_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_32_int), var_33_bool, var_34_cvector, var_35_cvector);
			if(!var_33_bool) { //@nz
				break;
			Label_2017:
				var_31_object = null;
	}
			object var_108_object;
			var_18_object = var_108_object;
			func_1911(var_108_object);
		}
		if((var_35_cvector | var_30_cvector) >= 0.70710677)
			var_31_object->add(var_34_cvector);
		var_32_int += 1;
	}
	int var_36_int;
	var_31_object->size(var_36_int);
	if(var_36_int == 0) goto Label_2017;
	int var_37_int;
	@irand(var_37_int, var_36_int);
	cvector var_38_cvector;
	var_31_object->get(var_38_cvector, var_37_int);
	object var_63_object; int var_64_int; float var_65_float; cvector var_66_cvector; cvector var_67_cvector;
	var_18_object = var_63_object;
	var_19_int = var_64_int;
	var_20_float = var_65_float;
	var_38_cvector = var_66_cvector;
	var_67_cvector = -var_30_cvector;
	func_2023(var_65_float, var_66_cvector, var_67_cvector);
}


// @pe
void func_2470(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	TaskCall(0);
	func_0(var_16_object);
	TaskReturn();
}


// @pe
void func_939(bool var_73_bool, object var_74_object)
{
	bool var_77_bool; object var_78_object;
	func_952(var_73_bool, var_78_object, var_77_bool, var_78_object, (float)150, (float)3000, false, true);
	var_77_bool = var_73_bool;
}


void func_432(bool var_0_bool, bool var_1_bool)
{
	float var_29_float; cvector var_30_cvector; cvector var_31_cvector; bool var_32_bool; object var_33_object; bool var_34_bool;
	@rand(var_29_float, 0.5);
	@Sleep(var_29_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_444:
				@GetPosition(var_31_cvector);
				float var_38_float;
				func_491(var_38_float);
				@GetRandomPFPointInCircle(var_30_cvector, var_31_cvector, var_38_float, var_32_bool);
				if(var_32_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_444;
			}
				var_1_bool = false;
		}
		}
		goto Label_460;

	Label_460:
		object var_42_object; cvector var_43_cvector;
		var_30_cvector = var_43_cvector;
		func_519(var_42_object, var_43_cvector);
		var_42_object = var_33_object;
		if(var_33_object != null) {
			@RotatePath(var_33_object, var_34_bool);
			if(var_34_bool != 0) {
				bool var_48_bool;
				func_517(var_48_bool);
				@FollowPath(var_33_object, var_48_bool, var_34_bool);
				var_33_object = null;
				if(var_34_bool != 0) {
					TaskCall(2);
					func_689();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_33_object = null;
	}
	
}


void func_950(string var_117_string)
{
	var_117_string = "zwalk";
}


void func_952(bool var_0_bool, bool var_1_bool, bool var_77_bool, object var_78_object, float var_79_float, float var_80_float, bool var_81_bool, bool var_82_bool)
{
	bool var_91_bool; object var_93_object; cvector var_94_cvector; cvector var_95_cvector; float var_97_float; object var_98_object;
	var_0_bool = false;
	var_1_bool = var_78_object;
	bool var_92_bool;
	var_82_bool = var_92_bool;
	
	for(;;) {
		bool var_99_bool; object var_100_object;
		var_78_object = var_100_object;
		func_1092(var_99_bool, var_100_object);
		if(!var_99_bool) { //@nz
			var_77_bool = false;
			return 16;
		}
		var_78_object->GetPosition(var_94_cvector);
		@GetPosition(var_95_cvector);
		var_97_float = (var_94_cvector - var_95_cvector) | (var_94_cvector - var_95_cvector);
		bool var_104_bool = false;
		if(var_80_float > 0) {
			if(var_97_float > (var_80_float * var_80_float))
				var_104_bool = true;
		}
		if(var_104_bool != 0) {
			@Stop();
			var_77_bool = false;
			return 16;
		}
		if(var_97_float > (var_79_float * var_79_float)) {
			var_78_object->GetPFPosition(var_94_cvector);
			@FindPathTo(var_98_object, var_94_cvector);
			if(var_98_object != null) {
				var_98_object = var_93_object;
				var_98_object = null;
			}
			if(var_93_object != null) {
				if(var_92_bool == 0) goto Label_1005;
				var_92_bool = false;
				@RotatePath(var_93_object, var_91_bool);
				if(!var_91_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_117_string;
						func_950(var_117_string);
						string var_118_string;
						func_1099(var_118_string);
						@FollowPath(var_93_object, var_81_bool, var_91_bool, var_117_string, var_118_string);
						if(!var_91_bool) { //@nz
							if(var_0_bool == 0) goto Label_1024;
							var_93_object = null;
						}
					EMIT "GOTO 0x401";

					Label_1024:
						} else {
					var_93_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_91_bool);
					if(!var_91_bool) { //@nz
						if(var_0_bool != 0) {
							var_93_object = null;
							goto Label_1052;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1052;
		}
			var_98_object = null;
			goto Label_1050;

		Label_1050:
			var_93_object = null;

		}
	Label_1052:
		for(;;) {
			var_77_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_2515(bool var_18_bool, object var_19_object, string var_20_string)
{
	if(var_20_string == "unholster") {
		bool var_23_bool; object var_24_object;
		var_19_object = var_24_object;
		func_2723(var_24_object);
		var_23_bool = var_18_bool;
		return 0;
	EMIT "GOTO 0x9f1";
	}
	if(var_20_string == "player_shot") {
		bool var_27_bool; object var_28_object;
		var_19_object = var_28_object;
		func_2728(var_28_object);
		var_27_bool = var_18_bool;
		return 0;
	EMIT "GOTO 0x9f1";
	}
	if(var_20_string == "battle") {
		bool var_31_bool; object var_32_object;
		var_19_object = var_32_object;
		func_2733(var_32_object);
		var_31_bool = var_18_bool;
		return 0;
	}
	var_18_bool = false;
}


void func_1492(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_1508(bool var_0_bool, bool var_66_bool)
{
	cvector var_69_cvector;
	@GetDirection(var_69_cvector);
	cvector var_71_cvector;
	func_1723(var_71_cvector, var_0_bool);
	cvector var_70_cvector;
	var_71_cvector = var_70_cvector;
	float var_77_float; cvector var_78_cvector; cvector var_79_cvector;
	var_69_cvector = var_78_cvector;
	var_70_cvector = var_79_cvector;
	func_2110(var_77_float, var_78_cvector, var_79_cvector);
	var_66_bool = var_77_float >= -0.34202012;
}


void func_2023(object var_20_object, cvector var_23_cvector, cvector var_24_cvector)
{
	object var_27_object;
	@GetScene(var_27_object);
	object var_28_object;
	@AddActorByType(var_28_object, "scripted", var_27_object, var_23_cvector, var_24_cvector, "blood_dir.xml");
	object var_31_object;
	var_20_object = var_31_object;
	func_1911(var_31_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_491(float var_38_float)
{
	float var_40_float;
	@GetCameraFarDistance(var_40_float);
	var_40_float = var_38_float;
}


// @pe
void func_2547(object var_33_object, string var_34_string)
{
	if(var_34_string == "unholster") {
		object var_37_object;
		var_33_object = var_37_object;
		func_2726();
	} else if(var_34_string == "player_shot") {
			object var_40_object;
			var_33_object = var_40_object;
			func_2731();
	}
Label_2571:
	for(;;) {

	}
	
	if(!(var_34_string == "battle")) goto Label_2571;
	object var_43_object;
	var_33_object = var_43_object;
	func_2736();
}


void func_2037(bool var_16_bool)
{
	bool var_18_bool;
	@IsLoaded(var_18_bool);
	var_18_bool = var_16_bool;
}


void func_503(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_2042(string var_40_string)
{
	bool var_49_bool; int var_50_int; bool var_51_bool; int var_52_int; bool var_53_bool; float var_54_float; cvector var_55_cvector; cvector var_56_cvector;
	@IsExisting3DSound(var_49_bool, var_40_string);
	if(!var_49_bool) { //@nz
		var_50_int = 0;

		for(;;) {
			@IsExisting3DSound(var_51_bool, (var_40_string + (var_50_int + 1)));
			if(!var_51_bool) { //@nz
				break;
			Label_2062:
				@irand(var_52_int, var_50_int);
				var_40_string += (var_52_int + 1);
	}
			@Is3DSoundLoaded(var_53_bool, var_40_string);
			if(var_53_bool != 0) {
				@GetEyesHeight(var_54_float);
				@GetDirection(var_55_cvector);
				var_56_cvector = var_55_cvector * 50;
				var_67_float = GetByIndex(var_56_cvector, 1);
				SetByIndex(var_56_cvector, 1) = (var_67_float + var_54_float);
				@PlayGlobalSound(var_40_string, var_56_cvector);
			}
		}
		var_50_int += 1;
	}
	var_62_bool = !var_50_int; //@nz
	if(var_62_bool == 0) goto Label_2062;
}


void func_1531(bool var_0_bool, cvector var_28_cvector, float var_29_float)
{
	cvector var_36_cvector;
	@GetPosition(var_36_cvector);
	cvector var_37_cvector;
	var_0_bool->GetPosition(var_37_cvector); //@t
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_42_cvector;
	cvector var_44_cvector;
	func_2089(var_44_cvector, (var_36_cvector - var_37_cvector));
	func_2089(var_42_cvector, (var_44_cvector + (var_38_cvector * 0.75)));
	cvector var_39_cvector;
	var_42_cvector = var_39_cvector;
	cvector var_40_cvector;
	float var_41_float;
	@FindLongestDir(var_40_cvector, var_41_float, var_39_cvector, var_29_float, 32, 7000.0);
	if((var_41_float - 100) < 0)
		var_41_float = 0;
	var_28_cvector = var_40_cvector * var_41_float;
}


void func_510(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


