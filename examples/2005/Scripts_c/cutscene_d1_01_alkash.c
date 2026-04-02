// @GLOBALS: 0:object:

task task_0
{
}


task task_1
{
	// @pe
	void event_11(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, int var_5_int, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		if(1 != 0) {
			func_2250();
			if(var_16_object == 19235) {
				func_132(var_17_bool, "Neutral");
				var_0_object->SetMessage(518116); //@t
				var_0_object->ClearReplies(); //@t
				var_0_object->AddReply(518117, -1, 19236); //@t
				var_0_object->AddReply(534584, -1, 36222); //@t
				return 0;
			}
			var_3_string = true;
			bool var_41_bool;
			func_2866(var_41_bool);
			if(var_41_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0x9b";
	
	}

}


task task_2
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2829(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			object var_23_object;
			var_16_bool = var_23_object;
			func_2832(var_23_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_2884();
	}

	// @pe
	void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, int var_6_int, float var_7_float, float var_8_float, bool var_9_bool, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, bool var_17_bool, object var_18_object, bool var_19_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
	}

}


task task_3
{
	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2829(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_597();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2832(var_25_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_19_object;
		var_16_bool = var_19_object;
		func_2730(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2796(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_597();
			object var_68_object;
			var_16_bool = var_68_object;
			func_2806(var_68_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		int var_20_int;
		object var_22_object;
		var_16_bool = var_22_object;
		object var_23_object;
		var_17_object = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		func_2881(var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_25_int; object var_26_object; bool var_27_bool;
			var_16_bool = var_26_object;
			var_18_bool = var_27_bool;
			func_2814(var_27_bool);
			var_25_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_597();
				object var_32_object;
				var_16_bool = var_32_object;
				func_2817();
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		func_2819(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_597();
			object var_25_object;
			var_16_bool = var_25_object;
			func_2822();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, string var_6_string, bool var_7_bool, bool var_8_bool, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		int var_19_int;
		object var_21_object;
		var_16_object = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_2644(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_597();
			object var_35_object; string var_36_string;
			var_16_object = var_35_object;
			var_17_bool = var_36_string;
			func_2676(var_35_object, var_36_string);
		} else {
			int var_46_int; string var_47_string; object var_48_object;
			var_17_bool = var_47_string;
			var_16_object = var_48_object;
			func_2824(var_48_object);
			var_46_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_480;
			if(var_19_int > 1)
				func_597();
			string var_53_string; object var_54_object;
			var_17_bool = var_53_string;
			var_16_object = var_54_object;
			func_2827();
		}
	Label_480:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, string var_5_string, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		string var_18_string;
		var_16_bool = var_18_string;
		bool var_17_bool;
		func_2743(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_597();
			string var_26_string;
			var_16_bool = var_26_string;
			func_2759(var_26_string);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_597();
		func_2884();
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2701(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_597();
			object var_29_object;
			var_16_bool = var_29_object;
			func_2724(var_29_object);
		}
	}

}


maintask task_4
{
	void init(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		@SensePlayerOnly(true);
		func_2868();
		func_616();
	
		for(;;) {
			func_789(var_14_object, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		int var_17_int;
		object var_20_object;
		var_16_bool = var_20_object;
		func_2829(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_860(var_17_int, var_18_int);
			object var_25_object;
			var_16_bool = var_25_object;
			func_2832(var_25_object);
		}
	}

	void OnAttacked(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		int var_17_int;
		object var_19_object;
		var_16_bool = var_19_object;
		func_2730(var_19_object);
		int var_28_int; object var_29_object;
		var_16_bool = var_29_object;
		func_2796(var_28_int, var_29_object);
		int var_18_int;
		var_28_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_860(var_17_int, var_18_int);
			object var_68_object;
			var_16_bool = var_68_object;
			func_2806(var_68_object);
		}
	}

	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, int var_11_int, int var_12_int, bool var_13_bool, float var_14_float, int var_15_int, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		int var_19_int; int var_20_int;
		object var_22_object;
		var_16_bool = var_22_object;
		object var_23_object;
		var_17_object = var_23_object;
		bool var_24_bool;
		var_18_bool = var_24_bool;
		func_2881(var_24_bool);
		bool var_21_bool;
		if(var_21_bool != 0) {
			int var_25_int; object var_26_object; bool var_27_bool;
			var_16_bool = var_26_object;
			var_18_bool = var_27_bool;
			func_2814(var_27_bool);
			var_25_int = var_20_int;
			if(var_20_int > 0) {
				if(var_20_int > 1)
					func_860(var_19_int, var_20_int);
				object var_32_object;
				var_16_bool = var_32_object;
				func_2817();
			}
		}
	}

	void OnSteal(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		int var_17_int;
		object var_20_object;
		var_16_bool = var_20_object;
		func_2819(var_20_object);
		int var_18_int;
		int var_19_int = var_18_int;
		if(var_18_int > 0) {
			if(var_18_int > 1)
				func_860(var_17_int, var_18_int);
			object var_25_object;
			var_16_bool = var_25_object;
			func_2822();
		}
	}

	void OnMessage(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, string var_8_string, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, float var_13_float, int var_14_int, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
		int var_18_int; int var_19_int;
		object var_21_object;
		var_16_object = var_21_object;
		string var_22_string;
		var_17_bool = var_22_string;
		bool var_20_bool;
		func_2644(var_20_bool, var_21_object, var_22_string);
		if(var_20_bool != 0) {
			func_860(var_18_int, var_19_int);
			object var_35_object; string var_36_string;
			var_16_object = var_35_object;
			var_17_bool = var_36_string;
			func_2676(var_35_object, var_36_string);
		} else {
			int var_46_int; string var_47_string; object var_48_object;
			var_17_bool = var_47_string;
			var_16_object = var_48_object;
			func_2824(var_48_object);
			var_46_int = var_19_int;
			if(!(var_19_int > 0)) goto Label_753;
			if(var_19_int > 1)
				func_860(var_18_int, var_19_int);
			string var_53_string; object var_54_object;
			var_17_bool = var_53_string;
			var_16_object = var_54_object;
			func_2827();
		}
	Label_753:
	
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, string var_7_string, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_17_bool; string var_18_string;
		func_2743(var_17_bool, var_18_string);
		if(var_17_bool != 0) {
			func_860(var_15_object, var_18_string);
			string var_26_string;
			var_16_bool = var_26_string;
			func_2759(var_26_string);
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_17_bool; object var_18_object;
		func_2701(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_860(var_15_object, var_18_object);
			object var_29_object;
			var_16_bool = var_29_object;
			func_2724(var_29_object);
		}
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_860(var_14_object, var_15_bool);
		func_2884();
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	void OnActorStuck(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		@Stop();
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, float var_12_float, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		func_860(var_15_object, var_16_bool);
		object var_17_object;
		var_16_bool = var_17_object;
		func_2620();
	}

}


task task_5
{
}


task task_6
{
	// @pe
	void OnUnload(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_1630(var_15_bool);
		func_2884();
	}

	// @pe
	void OnTimer(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, int var_16_int)
	{
		if(var_16_int == 1) {
			func_2351(var_1_object);
		} else {
			int var_24_int;
			func_1774(var_15_bool, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_object) {
			if(!var_2_object) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = true;
			object var_20_object;
			var_16_object = var_20_object;
			func_2239(var_20_object);
		}
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_object) {
			if(var_2_object != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		@RequestClearPath(var_16_object);
	}

	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		func_1630(var_16_object);
		object var_21_object;
		var_16_object = var_21_object;
		func_2620();
	}

}


void OnPropertyChange(object var_0_object, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_2599(var_17_object);
}


// @pe
void OnHit(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_2043(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(object actor, object var_1_object, object var_2_object, string var_3_string, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, float var_11_float, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
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
	func_2111(var_24_float, var_25_cvector, var_26_cvector);
}


void func_0(object var_0_object, int var_27_int, object var_28_object)
{
	var_0_object = var_28_object;
	bool var_38_bool; object var_39_object;
	var_28_object = var_39_object;
	func_2141(var_38_bool, var_39_object, 70.0);
	if(!var_38_bool) { //@nz
		var_27_int = -2;
		return 8;
	}
	object var_34_object;
	@CreateDialog(var_34_object);
	int var_85_int;
	func_2860(var_85_int);
	var_34_object->SetNPCName(var_85_int);
	int var_86_int;
	func_2858(var_86_int);
	var_34_object->SetNPCDescription(var_86_int);
	string var_87_string;
	func_2862(var_87_string);
	var_34_object->SetPhoto(var_87_string);
	string var_88_string;
	func_2864(var_88_string);
	var_34_object->SetPhoto2(var_88_string);
	int var_89_int;
	func_2371(var_89_int);
	var_34_object->SetPlayerName(var_89_int);
	bool var_35_bool;
	@IsOverrideActive(var_35_bool);
	if(var_35_bool != 0) {
		var_27_int = -2;
		return 8;
	}
	@DoDialog(var_34_object);
	object var_98_object; object var_99_object;
	var_28_object = var_98_object;
	var_34_object = var_99_object;
	TaskCall(1);
	func_74(var_100_object, var_101_object, var_102_string, var_103_bool, var_98_object, var_99_object);
	TaskReturn();
	bool var_37_bool;
	var_34_object->IsDialogEnd(var_37_bool);
	
	for(;;) {
		var_137_bool = !var_37_bool; //@nz
		if(var_137_bool == 0) goto Label_63;
		@sync();
		var_34_object->IsDialogEnd(var_37_bool);
	}
	
Label_63:
	object var_138_object;
	var_28_object = var_138_object;
	func_2209();
	@StopDialog(var_34_object);
	var_34_object->GetReturnValue(-1);
	int var_36_int = var_27_int;
}
EMIT "Stack[-4] = 0";


void func_516(void)
{
	int var_174_int; int var_175_int; bool var_176_bool; float var_177_float; bool var_178_bool;
	@WaitForAnimEnd();
	bool var_179_bool;
	func_2136(var_179_bool);
	if(!var_179_bool) //@nz
		return 14;
	int var_181_int;
	func_2779(var_181_int);
	int var_172_int;
	var_181_int = var_172_int;
	int var_173_int = 0;
	
	for(;;) {
		bool var_194_bool = false;
		if(var_173_int < 5) {
			bool var_197_bool;
			func_2136(var_197_bool);
			if(var_197_bool != 0)
				var_194_bool = true;
		}
		if(var_194_bool != 0) {
			@irand(var_174_int, 3);
			if(var_174_int == 0) {
				if(var_172_int == 0) goto Label_563;
				@irand(var_175_int, var_172_int);
				string var_203_string; int var_204_int;
				var_175_int = var_204_int;
				func_2772(var_203_string, var_204_int);
				@PlayAnimation("all", var_203_string);
				@WaitForAnimEnd(var_176_bool);
				if(!var_176_bool) { //@nz
				} else {
			} else {
			if(var_174_int == 1) {
				@rand(var_177_float, 4);
				@Sleep((var_177_float + 1), var_178_bool);
				if(!var_178_bool) { //@nz
					goto Label_592;
				}
			} else if(var_173_int != 0) {
				goto Label_592;
			}
			}
					bool var_206_bool;
					func_595(var_206_bool);
					var_207_bool = !var_206_bool; //@nz
					if(var_207_bool == 0) goto Label_587;
			}
		}
	Label_592:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_587:
		@ResetAAS();
		var_173_int += 1;
	}
	
}


void func_1540(object var_0_object)
{
	func_2351(var_0_object);
}


void func_1545(int var_473_int)
{
	var_473_int = 0;
}


void func_1547(void)
{
	func_2257("attack_stay");
}


// @pe
void func_1552(void)
{
}


void func_1554(bool var_498_bool)
{
	var_498_bool = true;
}


void func_1556(int var_394_int)
{
	var_394_int = 1;
}


void func_1558(float var_389_float)
{
	var_389_float = 0.5;
}


void func_1567(object var_2_object, bool var_145_bool, object var_146_object, float var_147_float, float var_148_float, bool var_149_bool, bool var_150_bool)
{
	object var_158_object;
	func_2351(var_158_object);
	@SetTimer(1, 5);
	bool var_156_bool;
	@CanSee(var_156_bool, var_158_object);
	if(var_156_bool != 0) {
		var_2_object = true;
		object var_162_object;
		var_146_object = var_162_object;
		func_2239(var_162_object);
	} else {
		var_2_object = false;
	}
	bool var_169_bool; object var_170_object;
	func_1844(var_169_bool, var_170_object);
	if(var_169_bool != 0) {
		object var_171_object;
		func_2298(var_171_object);
		@SendPlayerEnemy(var_170_object, var_171_object);
	}
	bool var_172_bool; object var_173_object; float var_174_float; float var_175_float; bool var_176_bool; bool var_177_bool;
	var_146_object = var_173_object;
	var_147_float = var_174_float;
	var_148_float = var_175_float;
	var_149_bool = var_176_bool;
	var_150_bool = var_177_bool;
	bool var_157_bool;
	func_1672(var_156_bool, var_157_bool, var_172_bool, var_173_object, var_174_float, var_175_float, var_176_bool, var_177_bool);
	var_172_bool = var_157_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_157_bool = var_145_bool;
	
}


void func_2594(int var_44_int, string var_45_string)
{
	int var_47_int;
	@GetInvItemByName(var_47_int, var_45_string);
	var_47_int = var_44_int;
}


// @pe
void func_2599(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	TaskCall(2);
	func_196(var_18_object);
	TaskReturn();
}


void func_2111(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_1999(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_74(object var_0_object, object var_1_object, object var_2_object, string var_3_string, object var_98_object, object var_99_object)
{
	var_0_object = var_99_object;
	var_1_object = var_98_object;
	var_3_string = false;
	if(1 != 0) {
		func_132(var_99_object, "Neutral");
		var_0_object->SetMessage(518116); //@t
		var_0_object->ClearReplies(); //@t
		var_0_object->AddReply(518117, -1, 19236); //@t
		var_0_object->AddReply(534584, -1, 36222); //@t
		goto Label_102;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x4e";
	}
Label_102:
	bool var_124_bool;
	func_2866(var_124_bool);
	if(var_124_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_string != 0) {
			} else {
				func_2226(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_string != 0) {
				goto Label_131;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_131:
		return 0;

	}
	
}


void func_2125(object var_246_object)
{
	cvector var_250_cvector;
	var_246_object->GetPosition(var_250_cvector);
	cvector var_251_cvector;
	@GetPosition(var_251_cvector);
	cvector var_252_cvector = var_250_cvector - var_251_cvector;
	var_253_float = GetByIndex(var_252_cvector, 0);
	var_254_float = GetByIndex(var_252_cvector, 2);
	@RotateAsync(var_253_float, var_254_float);
}


void func_595(bool var_206_bool)
{
	var_206_bool = true;
}


// @pe
void func_2644(bool var_20_bool, object var_21_object, string var_22_string)
{
	if(var_22_string == "unholster") {
		bool var_25_bool; object var_26_object;
		var_21_object = var_26_object;
		func_2838(var_26_object);
		var_25_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xa72";
	}
	if(var_22_string == "player_shot") {
		bool var_29_bool; object var_30_object;
		var_21_object = var_30_object;
		func_2843(var_30_object);
		var_29_bool = var_20_bool;
		return 0;
	EMIT "GOTO 0xa72";
	}
	if(var_22_string == "battle") {
		bool var_33_bool; object var_34_object;
		var_21_object = var_34_object;
		func_2848(var_34_object);
		var_33_bool = var_20_bool;
		return 0;
	}
	var_20_bool = false;
}


void func_597(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_2136(bool var_131_bool)
{
	bool var_133_bool;
	@IsLoaded(var_133_bool);
	var_133_bool = var_131_bool;
}


void func_2141(bool var_38_bool, object var_39_object, float var_40_float)
{
	cvector var_51_cvector; bool var_58_bool;
	var_39_object->GetPosition(var_51_cvector);
	float var_50_float;
	var_39_object->GetEyesHeight(var_50_float);
	var_59_float = GetByIndex(var_51_cvector, 1);
	SetByIndex(var_51_cvector, 1) = (var_59_float + var_50_float);
	cvector var_52_cvector;
	@GetPosition(var_52_cvector);
	@GetEyesHeight(var_50_float);
	var_60_float = GetByIndex(var_52_cvector, 1);
	SetByIndex(var_52_cvector, 1) = (var_60_float + var_50_float);
	cvector var_53_cvector = var_51_cvector - var_52_cvector;
	var_61_float = GetByIndex(var_53_cvector, 1);
	SetByIndex(var_53_cvector, 1) = (float)0;
	var_63_float = sqrt(var_53_cvector | var_53_cvector);
	var_53_cvector /= var_63_float;
	cvector var_54_cvector = -var_53_cvector;
	cvector var_65_cvector;
	func_2304(var_65_cvector, (var_54_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_55_cvector = ((var_53_cvector * var_40_float) + (var_65_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_57_bool;
	@IsOverrideActive(var_57_bool);
	if(var_57_bool != 0)
		var_38_bool = false;
	@StopWorld();
	@CameraTransit((var_52_cvector + var_55_cvector), var_54_cvector);
	var_78_float = GetByIndex(var_55_cvector, 0);
	var_79_float = GetByIndex(var_55_cvector, 2);
	@Rotate(var_78_float, var_79_float);
	bool var_80_bool;
	func_2866(var_80_bool);
	if(var_80_bool != 0) {
	} else {
		@HasAnimationTrack(var_58_bool, "head");
		if(var_58_bool == 0) goto Label_2203;
		@LookAsyncCamera("head");
	}
Label_2203:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_38_bool = true;
	
}


void func_1630(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_1796(var_16_object);
}


void func_1127(object var_1_object, object var_2_object, bool var_4_bool)
{
	bool var_104_bool; bool var_105_bool; cvector var_106_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_104_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_104_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_105_bool, ("attack" + (var_2_object + 1)));
			if(!var_105_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_106_cvector, "all", "bjump");
		var_120_float = GetByIndex(var_106_cvector, 2);
		var_4_bool = -var_120_float;

	}
}


void func_616(void)
{
	bool var_131_bool;
	func_2136(var_131_bool);
	if(!var_131_bool) //@nz
		func_2884();
}


// @pe
void func_2676(object var_35_object, string var_36_string)
{
	if(var_36_string == "unholster") {
		object var_39_object;
		var_35_object = var_39_object;
		func_2841();
	} else if(var_36_string == "player_shot") {
			object var_42_object;
			var_35_object = var_42_object;
			func_2846();
	}
Label_2700:
	for(;;) {

	}
	
	if(!(var_36_string == "battle")) goto Label_2700;
	object var_45_object;
	var_35_object = var_45_object;
	func_2851();
}


// @pe
void func_132(object var_2_object, string var_105_string)
{
	bool var_106_bool;
	func_2866(var_106_bool);
	if(!var_106_bool) //@nz
		return 0;
	if(var_105_string == var_2_object)
		return 0;
	string var_109_string; bool var_110_bool;
	var_105_string = var_109_string;
	if(var_105_string == "")
		var_110_bool = false;
	else
		var_110_bool = true;
	func_2233(var_109_string, var_110_bool);
	var_2_object = var_105_string;
	
}


void func_1672(object var_0_object, object var_1_object, bool var_172_bool, object var_173_object, float var_174_float, float var_175_float, bool var_176_bool, bool var_177_bool)
{
	bool var_186_bool; object var_188_object; cvector var_189_cvector; cvector var_190_cvector; float var_192_float; object var_193_object;
	var_0_object = false;
	var_1_object = var_173_object;
	bool var_187_bool;
	var_177_bool = var_187_bool;
	
	for(;;) {
		bool var_194_bool; object var_195_object;
		var_173_object = var_195_object;
		func_1812(var_194_bool, var_195_object);
		if(!var_194_bool) { //@nz
			var_172_bool = false;
			return 16;
		}
		var_173_object->GetPosition(var_189_cvector);
		@GetPosition(var_190_cvector);
		var_192_float = (var_189_cvector - var_190_cvector) | (var_189_cvector - var_190_cvector);
		bool var_199_bool = false;
		if(var_175_float > 0) {
			if(var_192_float > (var_175_float * var_175_float))
				var_199_bool = true;
		}
		if(var_199_bool != 0) {
			@Stop();
			var_172_bool = false;
			return 16;
		}
		if(var_192_float > (var_174_float * var_174_float)) {
			var_173_object->GetPFPosition(var_189_cvector);
			@FindPathTo(var_193_object, var_189_cvector);
			if(var_193_object != null) {
				var_193_object = var_188_object;
				var_193_object = null;
			}
			if(var_188_object != null) {
				if(var_187_bool == 0) goto Label_1725;
				var_187_bool = false;
				@RotatePath(var_188_object, var_186_bool);
				if(!var_186_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_212_string;
						func_1819(var_212_string);
						string var_213_string;
						func_1821(var_213_string);
						@FollowPath(var_188_object, var_176_bool, var_186_bool, var_212_string, var_213_string);
						if(!var_186_bool) { //@nz
							if(var_0_object == 0) goto Label_1744;
							var_188_object = null;
						}
					EMIT "GOTO 0x6d1";

					Label_1744:
						} else {
					var_188_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_186_bool);
					if(!var_186_bool) { //@nz
						if(var_0_object != 0) {
							var_188_object = null;
							goto Label_1772;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1772;
		}
			var_193_object = null;
			goto Label_1770;

		Label_1770:
			var_188_object = null;

		}
	Label_1772:
		for(;;) {
			var_172_bool = !var_0_object;
			return 16;

			}
	}
	
}


void func_1162(object var_0_object, float var_398_float, int var_399_int)
{
	object var_403_object; float var_404_float; float var_405_float;
	@GetVictim((var_398_float * 0.9), var_403_object);
	@ReportAttack(var_0_object);
	if(var_403_object == var_0_object) {
		float var_409_float; object var_410_object; int var_411_int;
		var_403_object = var_410_object;
		var_399_int = var_411_int;
		func_892(var_411_int);
		var_409_float = var_404_float;
		float var_412_float; object var_413_object; float var_414_float; int var_415_int;
		var_403_object = var_413_object;
		int var_416_int; object var_417_object; int var_418_int;
		var_403_object = var_417_object;
		var_399_int = var_418_int;
		func_895(var_418_int);
		var_416_int = var_415_int;
		func_1861(var_412_float, var_413_object, var_414_float, var_415_int);
		var_412_float = var_405_float;
		int var_473_int;
		func_1545(var_473_int);
		@ReportHit(var_0_object, var_473_int, var_405_float, var_414_float);
		object var_474_object; float var_475_float;
		var_403_object = var_474_object;
		var_405_float = var_475_float;
		func_1552();
	}
}
EMIT "Stack[-3] = 0";


void func_2701(bool var_17_bool, object var_18_object)
{
	bool var_20_bool;
	bool var_21_bool = false;
	bool var_22_bool; object var_23_object;
	var_18_object = var_23_object;
	func_2838(var_23_object);
	if(var_22_bool != 0) {
		bool var_24_bool; object var_25_object;
		func_1844(var_24_bool, var_25_object);
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


void func_2209(void)
{
	bool var_140_bool;
	@CameraSwitchToNormal();
	bool var_141_bool;
	func_2866(var_141_bool);
	if(var_141_bool != 0) {
	} else {
		@HasAnimationTrack(var_140_bool, "head");
		if(var_140_bool == 0) goto Label_2225;
		@UnlookAsync("head");
	}
Label_2225:
	
}


// @pe
void func_2724(object var_29_object)
{
	object var_30_object;
	var_29_object = var_30_object;
	func_2841();
}


// @pe
void func_2730(object var_19_object)
{
	bool var_20_bool; object var_21_object;
	func_1844(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		object var_24_object;
		func_2298(var_24_object);
		@ReportReputationChange(var_21_object, var_24_object, -0.02);
	}
}


void func_1201(object var_0_object, object var_1_object, bool var_361_bool, float var_362_float)
{
	string var_370_string;
	func_1540(var_370_string);
	int var_367_int;
	@irand(var_367_int, var_1_object);
	@Face(var_0_object);
	@SetAttackState(true);
	func_2360();
	@PlayAnimation("all", ("attack_begin" + (var_367_int + 1)));
	@WaitForAnimEnd();
	int var_369_int;
	func_1508(var_369_int, var_370_string);
	bool var_395_bool;
	func_1975(var_395_bool, var_0_object);
	if(!var_395_bool) { //@nz
		@StopAsync();
		var_361_bool = false;
		return 8;
	}
	float var_398_float; int var_399_int;
	var_362_float = var_398_float;
	var_367_int = var_399_int;
	func_1162(var_370_string, var_398_float, var_399_int);
	bool var_368_bool;
	@HasAnimation(var_368_bool, "all", ("attack_middle" + var_367_int));
	if(var_368_bool != 0) {
		func_2360();
		@PlayAnimation("all", ("attack_middle" + var_367_int));
		@WaitForAnimEnd();
		func_1540(var_370_string);
		bool var_483_bool;
		func_1975(var_483_bool, var_0_object);
		if(!var_483_bool) { //@nz
			@StopAsync();
			var_361_bool = false;
			return 8;
		}
		float var_486_float; int var_487_int;
		var_362_float = var_486_float;
		func_1162(var_370_string, var_486_float, var_487_int);
		var_369_int = 1;

		for(;;) {
			var_370_string = (("attack_middle" + var_487_int) + "_") + var_369_int;
			@HasAnimation(var_368_bool, "all", var_370_string);
			if(!var_368_bool) { //@nz
			} else {
				func_2360();
				@PlayAnimation("all", var_370_string);
				@WaitForAnimEnd();
				func_1540(var_370_string);
				bool var_509_bool;
				func_1975(var_509_bool, var_0_object);
				if(!var_509_bool) { //@nz
					@StopAsync();
					var_361_bool = false;
					return 8;
				}
				float var_512_float; int var_513_int;
				var_362_float = var_512_float;
				var_367_int = var_513_int;
				func_1162(var_370_string, var_512_float, var_513_int);
				var_369_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_367_int));
		bool var_498_bool;
		func_1554(var_498_bool);
		if(var_498_bool != 0) {
			bool var_499_bool;
			func_1338(var_499_bool, 0.75);
			@StopAsync();
		}
		var_361_bool = true;
		return 8;

	}
}


void func_2226(string var_126_string)
{
	float var_129_float; float var_130_float;
	@lshGetAnimTimes(var_126_string, var_129_float, var_130_float);
	@lshPlayAnimation(var_129_float, var_130_float, false);
}


void func_2743(bool var_17_bool, string var_18_string)
{
	object var_20_object;
	if(var_18_string == "heal") {
		@FindActor(var_20_object, "player");
		bool var_24_bool; object var_25_object;
		var_20_object = var_25_object;
		func_2853(var_25_object);
		var_24_bool = var_17_bool;
	EMIT "Stack[-1] = 0";
	}
	var_17_bool = false;
}


void func_2233(string var_109_string, bool var_110_bool)
{
	float var_115_float; float var_116_float;
	@lshGetAnimTimes(var_109_string, var_115_float, var_116_float);
	@lshPlayAnimation(var_115_float, var_116_float, var_110_bool);
}


void func_2239(object var_20_object)
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
void func_196(object var_18_object)
{
	object var_19_object;
	var_18_object = var_19_object;
	func_229(var_19_object);
	object var_99_object;
	var_18_object = var_99_object;
	func_2892();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_2759(string var_26_string)
{
	object var_28_object;
	if(var_26_string == "heal") {
		@FindActor(var_28_object, "player");
		object var_32_object;
		var_28_object = var_32_object;
		func_2856();
		var_28_object = null;
	}
}


void func_2250(void)
{
	bool var_19_bool;
	func_2866(var_19_bool);
	if(var_19_bool != 0)
		@lshStopSpeech();
}


void func_2257(string var_42_string)
{
	bool var_51_bool; int var_52_int; bool var_53_bool; int var_54_int; bool var_55_bool; float var_56_float; cvector var_57_cvector; cvector var_58_cvector;
	@IsExisting3DSound(var_51_bool, var_42_string);
	if(!var_51_bool) { //@nz
		var_52_int = 0;

		for(;;) {
			@IsExisting3DSound(var_53_bool, (var_42_string + (var_52_int + 1)));
			if(!var_53_bool) { //@nz
				break;
			Label_2277:
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
	if(var_64_bool == 0) goto Label_2277;
}


void func_2772(string var_187_string, int var_188_int)
{
	string var_190_string = "idle";
	if(var_188_int != 0)
		var_190_string += var_188_int;
	var_190_string = var_187_string;
}


void func_2779(int var_181_int)
{
	int var_184_int; bool var_185_bool;
	var_184_int = 0;
	
	for(;;) {
		string var_187_string; int var_188_int;
		var_184_int = var_188_int;
		func_2772(var_187_string, var_188_int);
		@HasAnimation(var_185_bool, "all", var_187_string);
		if(!var_185_bool) //@nz
			break;
		var_184_int += 1;
	}
	var_184_int = var_181_int;
}


void func_229(object var_19_object)
{
	cvector var_30_cvector; cvector var_31_cvector; cvector var_32_cvector; cvector var_33_cvector; string var_34_string; object var_35_object; bool var_36_bool; bool var_37_bool; float var_38_float; cvector var_39_cvector;
	if(var_19_object == null) {
		func_320("fdie");
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
		func_2257(var_94_string);
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
void func_2796(int var_28_int, object var_29_object)
{
	object var_31_object;
	var_29_object = var_31_object;
	bool var_30_bool;
	func_1975(var_30_bool, var_31_object);
	if(var_30_bool != 0)
		var_28_int = 2;
	else
		var_28_int = 0;
	
}


// @pe
void func_1774(object var_0_object, object var_1_object, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1812(var_27_bool, var_1_object);
	if(!var_27_bool) //@nz
		var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2806(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	TaskCall(5);
	func_884(var_69_object);
	TaskReturn();
}


void func_2298(object var_135_object)
{
	object var_137_object;
	@self(var_137_object);
	var_137_object = var_135_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2814(int var_25_int)
{
	var_25_int = 0;
}


void func_2304(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


// @pe
void func_2817(void)
{
}


// @pe
void func_2819(int var_19_int)
{
	var_19_int = 0;
}


void func_1796(object var_0_object)
{
	var_0_object = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2822(void)
{
}


// @pe
void func_2824(int var_46_int)
{
	var_46_int = 0;
}


// @pe
void func_2314(float var_450_float, float var_451_float, float var_452_float)
{
	if(var_451_float < var_452_float)
		var_451_float = var_450_float;
	else
		var_452_float = var_450_float;
	
}


// @pe
void func_2827(void)
{
}


// @pe
void func_2829(int var_19_int)
{
	var_19_int = 2;
}


// @pe
void func_2832(object var_25_object)
{
	object var_26_object;
	var_25_object = var_26_object;
	func_2873(var_26_object);
}


// @pe
void func_2321(float var_460_float, float var_461_float, float var_462_float, float var_463_float)
{
	if(var_461_float < var_462_float) {
		var_462_float = var_460_float;
		return 0;
	}
	if(var_461_float > var_463_float) {
		var_463_float = var_460_float;
		return 0;
	}
	var_461_float = var_460_float;
}


// @pe
void func_1812(bool var_27_bool, object var_28_object)
{
	object var_30_object;
	var_28_object = var_30_object;
	bool var_29_bool;
	func_1975(var_29_bool, var_30_object);
	var_29_bool = var_27_bool;
}


void func_789(object var_0_object, object var_1_object)
{
	float var_144_float; cvector var_145_cvector; cvector var_146_cvector; bool var_147_bool; object var_148_object; bool var_149_bool;
	@rand(var_144_float, 0.5);
	@Sleep(var_144_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_801:
				@GetPosition(var_146_cvector);
				float var_153_float;
				func_848(var_153_float);
				@GetRandomPFPointInCircle(var_145_cvector, var_146_cvector, var_153_float, var_147_bool);
				if(var_147_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_801;
			}
				var_1_object = false;
		}
		}
		goto Label_817;

	Label_817:
		object var_157_object; cvector var_158_cvector;
		var_145_cvector = var_158_cvector;
		func_878(var_157_object, var_158_cvector);
		var_157_object = var_148_object;
		if(var_148_object != null) {
			@RotatePath(var_148_object, var_149_bool);
			if(var_149_bool != 0) {
				bool var_163_bool;
				func_876(var_163_bool);
				@FollowPath(var_148_object, var_163_bool, var_149_bool);
				var_148_object = null;
				if(var_149_bool != 0) {
					TaskCall(3);
					func_516();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_148_object = null;
	}
	
}


// @pe
void func_2838(bool var_22_bool)
{
	var_22_bool = false;
}


// @pe
void func_2841(void)
{
}


void func_1819(string var_212_string)
{
	var_212_string = "walk";
}


void func_2332(float var_468_float)
{
	object var_470_object;
	@CreateFloatVector(var_470_object);
	var_470_object->add(var_468_float);
	@SendWorldWndMessage(15, var_470_object);
}
EMIT "Stack[-1] = 0";


void func_1821(string var_213_string)
{
	var_213_string = "run";
}


// @pe
void func_2843(bool var_29_bool)
{
	var_29_bool = false;
}


// @pe
void func_1823(string var_440_string, int var_441_int)
{
	if(var_441_int == 2) {
		var_440_string = "fire";
		return 0;
	EMIT "GOTO 0x72b";
	}
	if(var_441_int == 1) {
		var_440_string = "bullet";
		return 0;
	}
	var_440_string = "phys";
}


// @pe
void func_2848(bool var_33_bool)
{
	var_33_bool = false;
}


// @pe
void func_2846(void)
{
}


// @pe
void func_2851(void)
{
}


// @pe
void func_2853(bool var_24_bool)
{
	var_24_bool = false;
}


void func_2342(int var_26_int)
{
	float var_28_float;
	@GetGameTime(var_28_float);
	var_26_int = 1 + (var_28_float / 24);
}


// @pe
void func_2856(void)
{
}


void func_2858(int var_86_int)
{
	var_86_int = 515568;
}


void func_2860(int var_85_int)
{
	var_85_int = 503353;
}


void func_1837(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


void func_2862(string var_87_string)
{
	var_87_string = "ui/NPC_Citizen1.png";
}


void func_2351(object var_19_object)
{
	bool var_21_bool;
	@IsPlayerActor(var_19_object, var_21_bool);
	if(var_21_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2864(string var_88_string)
{
	var_88_string = "ui/NPC_Citizen1_b.png";
}


void func_2866(bool var_80_bool)
{
	var_80_bool = false;
}


void func_2868(void)
{
	func_2419(true);
}


void func_1844(bool var_24_bool, object var_25_object)
{
	bool var_27_bool;
	@IsPlayerActor(var_25_object, var_27_bool);
	var_27_bool = var_24_bool;
}


void func_2360(void)
{
	object var_374_object;
	@GetScene(var_374_object);
	object var_376_object;
	func_2298(var_376_object);
	@BroadcastMessage("battle", var_376_object, var_374_object);
}
EMIT "Stack[-1] = 0";


void func_1849(bool var_51_bool, object var_52_object, string var_53_string)
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


void func_1338(bool var_499_bool, float var_500_float)
{
	float var_503_float; bool var_504_bool;
	@rand(var_503_float);
	if(var_503_float < var_500_float) {

		for(;;) {
			@IsAnimationPlaying(var_504_bool);
			if(!var_504_bool) { //@nz
			} else {
				bool var_507_bool;
				func_1436(var_507_bool);
				if(var_507_bool != 0) {
					var_499_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_499_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1540(var_504_bool);
}


// @pe
void func_2873(object var_26_object)
{
	object var_28_object;
	var_26_object = var_28_object;
	TaskCall(0);
	int var_27_int;
	func_0(var_29_object, var_27_int, var_28_object);
	TaskReturn();
}


// @pe
void func_320(string var_41_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_42_string;
	var_41_string = var_42_string;
	func_2257(var_42_string);
	@PlayAnimation("all", var_41_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_41_string);
	@RemoveEnvelope();
}


// @pe
void func_2881(bool var_21_bool)
{
	var_21_bool = false;
}


void func_2371(int var_89_int)
{
	int var_91_int;
	@GetVariable("branch", var_91_int);
	if(var_91_int == 0) {
		var_89_int = 1;
		return 2;
	EMIT "GOTO 0x952";
	}
	if(var_91_int == 1) {
		var_89_int = 2;
		return 2;
	}
	var_89_int = 3;
}


void func_2884(void)
{
	object var_135_object;
	func_2298(var_135_object);
	@RemoveActor(var_135_object);
	@Hold();
}


void func_1861(float var_412_float, object var_413_object, float var_414_float, int var_415_int)
{
	int var_425_int; int var_427_int;
	object var_432_object;
	var_413_object = var_432_object;
	bool var_431_bool;
	func_1849(var_431_bool, var_432_object, "health");
	if(!var_431_bool) //@nz
		var_412_float = 0.0;
	bool var_435_bool; object var_436_object;
	func_1849(var_435_bool, var_436_object, "armor");
	if(!var_435_bool) //@nz
		var_425_int = 0;
	else
		var_436_object->GetProperty("armor", var_425_int);
	string var_440_string; int var_441_int;
	var_415_int = var_441_int;
	func_1823(var_440_string, var_441_int);
	string var_426_string = "armor_" + var_440_string;
	bool var_446_bool; object var_447_object; string var_448_string;
	var_413_object = var_447_object;
	func_1849(var_446_bool, var_447_object, var_448_string);
	if(!var_446_bool) //@nz
		var_427_int = 0;
	else
		var_413_object->GetProperty(var_448_string, var_427_int);

	float var_450_float;
	func_2314(var_450_float, ((var_425_int + var_427_int) / 100.0), (float)1);
	float var_428_float;
	var_450_float = var_428_float;
	float var_429_float;
	var_413_object->GetProperty("health", var_429_float);
	float var_430_float = var_414_float * (1 - var_428_float);
	float var_460_float;
	func_2321(var_460_float, (var_429_float - var_430_float), (float)0, (float)1);
	var_413_object->SetProperty("health", var_460_float);
	bool var_466_bool; object var_467_object;
	var_413_object = var_467_object;
	func_1844(var_466_bool, var_467_object);
	if(var_466_bool != 0) {
		float var_468_float = -var_430_float;
		func_2332(var_468_float);
	}
	var_430_float = var_412_float;
	
}


// @pe
void func_2892(void)
{
}


void func_848(float var_153_float)
{
	float var_155_float;
	@GetCameraFarDistance(var_155_float);
	var_155_float = var_153_float;
}


void func_2388(int var_23_int, int var_24_int)
{
	if(var_23_int > var_24_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_36_int = 0;
	if(var_23_int != var_24_int) {
		@irand(var_36_int, (var_24_int - var_23_int));
	} else if(var_23_int == 0) {
		return 4;
	}
	var_36_int += var_23_int;
	if(var_36_int == 0)
		return 4;
	int var_44_int;
	func_2594(var_44_int, "Money");
	bool var_37_bool;
	@AddItem(var_37_bool, var_44_int, 0, var_36_int);
	
}


void func_1365(object var_0_object, bool var_300_bool, float var_301_float)
{
	bool var_307_bool; cvector var_308_cvector; cvector var_309_cvector; cvector var_310_cvector; float var_311_float;
	
	for(;;) {
		@IsAnimationPlaying(var_307_bool);
		if(!var_307_bool) //@nz
			break;
		bool var_313_bool;
		func_1436(var_313_bool);
		if(var_313_bool != 0) {
			var_300_bool = true;
			return 10;
		}
		bool var_356_bool;
		func_1975(var_356_bool, var_0_object);
		if(!var_356_bool) { //@nz
			var_300_bool = false;
			return 10;
		}
		var_0_object->GetPFPosition(var_308_cvector); //@t
		@GetPFPosition(var_309_cvector);
		var_310_cvector = var_308_cvector - var_309_cvector;
		var_311_float = var_310_cvector | var_310_cvector;
		if(var_311_float < (var_301_float * var_301_float)) {
			bool var_361_bool; float var_362_float;
			var_301_float = var_362_float;
			func_1201(var_310_cvector, var_311_float, var_361_bool, var_362_float);
			var_300_bool = true;
			return 10;
		}
		@sync();
	}
	func_1540(var_311_float);
	var_300_bool = false;
}


void func_860(object var_0_object, object var_1_object)
{
	var_0_object = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_876(bool var_163_bool)
{
	var_163_bool = false;
}


void func_878(object var_157_object, cvector var_158_cvector)
{
	object var_160_object;
	@FindShiftedPathTo(var_160_object, var_158_cvector);
	var_160_object = var_157_object;
}
EMIT "Stack[-1] = 0";


void func_2419(bool var_17_bool)
{
	int var_20_int; bool var_21_bool;
	if(var_17_bool != 0) {
		int var_26_int;
		func_2342(var_26_int);
		func_2388(0, (100 + (var_26_int * 100)));
		@irand(var_20_int, 8);
		if(var_20_int == 0) {
			int var_54_int;
			func_2594(var_54_int, "lemon");
			@AddItem(var_21_bool, var_54_int, 0, 1);
		} else {
				if(var_20_int == 1) {
					int var_60_int;
					func_2594(var_60_int, "rusk");
					@AddItem(var_21_bool, var_60_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_20_int == 2) {
				int var_66_int;
				func_2594(var_66_int, "hook");
				@AddItem(var_21_bool, var_66_int, 0, 1);
			} else if(var_20_int == 4) {
				int var_72_int;
				func_2594(var_72_int, "syringe");
				@AddItem(var_21_bool, var_72_int, 0, 1);
			} else if(var_20_int == 5) {
				int var_78_int;
				func_2594(var_78_int, "watch");
				@AddItem(var_21_bool, var_78_int, 0, 1);
			} else if(var_20_int == 6) {
				int var_84_int;
				func_2594(var_84_int, "razor");
				@AddItem(var_21_bool, var_84_int, 0, 1);
			}
	}
		int var_91_int;
		func_2342(var_91_int);
		func_2388(0, (50 + (var_91_int * 50)));
		@irand(var_20_int, 7);
		if(var_20_int == 0) {
			int var_97_int;
			func_2594(var_97_int, "beads");
			@AddItem(var_21_bool, var_97_int, 0, 1);
		} else if(var_20_int == 1) {
			int var_103_int;
			func_2594(var_103_int, "bracelet");
			@AddItem(var_21_bool, var_103_int, 0, 1);
		} else if(var_20_int == 2) {
			int var_109_int;
			func_2594(var_109_int, "ear_ring");
			@AddItem(var_21_bool, var_109_int, 0, 1);
		} else if(var_20_int == 3) {
			int var_115_int;
			func_2594(var_115_int, "gold_ring");
			@AddItem(var_21_bool, var_115_int, 0, 1);
		} else if(var_20_int == 4) {
			int var_121_int;
			func_2594(var_121_int, "silver_ring");
			@AddItem(var_21_bool, var_121_int, 0, 1);
		} else if(var_20_int == 5) {
			int var_127_int;
			func_2594(var_127_int, "flower");
			@AddItem(var_21_bool, var_127_int, 0, 1);
			}
		}
		return 4;

	}
	
}


// @pe
void func_884(object var_69_object)
{
	object var_76_object;
	func_898(var_72_int, var_73_bool, var_74_float, var_75_int, var_76_object, var_76_object, true, 180.0);
}


// @pe
void func_892(float var_409_float)
{
	var_409_float = 0.05;
}


// @pe
void func_895(int var_416_int)
{
	var_416_int = 0;
}


void func_1408(object var_0_object, bool var_315_bool)
{
	cvector var_321_cvector; cvector var_322_cvector;
	bool var_326_bool;
	func_1975(var_326_bool, var_0_object);
	if(!var_326_bool) { //@nz
		var_315_bool = false;
		return 10;
	}
	bool var_329_bool;
	float var_325_float;
	func_1497(var_325_float, var_329_bool);
	if(var_329_bool != 0) {
		var_0_object->GetPFPosition(var_321_cvector); //@t
		@GetPFPosition(var_322_cvector);
		var_0_object->GetAttackDistance(var_325_float); //@t
		var_315_bool = ((var_321_cvector - var_322_cvector) | (var_321_cvector - var_322_cvector)) <= ((var_325_float + 50) * (var_325_float + 50));
		return 10;
	}
	var_315_bool = false;
}


void func_898(object var_0_object, string var_3_string, bool var_5_bool, object var_76_object, bool var_77_bool, float var_78_float, bool var_151_bool, bool var_241_bool)
{
	float var_90_float; cvector var_91_cvector; cvector var_92_cvector; bool var_94_bool; float var_97_float; cvector var_98_cvector; bool var_99_bool; float var_100_float;
	func_1127(var_98_cvector, var_99_bool, var_100_float);
	var_5_bool = 0;
	var_125_bool = IsFuncExist(var_76_object, "@GetAttackDistance", 1);
	if(var_125_bool != 0) {
		var_76_object->GetAttackDistance(var_90_float);
		var_90_float += 50;
	} else {
						var_78_float = var_90_float;
	}
	if(var_90_float >= 150)
		var_90_float = 150;
	var_3_string = false;
	var_0_object = var_76_object;
	bool var_93_bool;
	@IsPlayerActor(var_0_object, var_93_bool);
	if(var_93_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_131_object;
		func_2298(var_131_object);
		@SendPlayerEnemy(var_76_object, var_131_object);
	}
	if(var_77_bool != 0)
		var_94_bool = false;
	else
		var_94_bool = true;

	
Label_938:
	for(;;) {
		bool var_134_bool = false;
		bool var_135_bool;
		func_1975(var_135_bool, var_0_object);
		if(var_135_bool != 0) {
			if(!var_3_string) //@nz
				var_134_bool = true;
		}
		if(var_134_bool != 0) {
			func_1540(var_100_float);
			var_0_object->GetPFPosition(var_91_cvector); //@t
			@GetPFPosition(var_92_cvector);
			var_97_float = (var_91_cvector - var_92_cvector) | (var_91_cvector - var_92_cvector);
			if(var_97_float >= ((400.0 + var_90_float) * (400.0 + var_90_float))) {
				bool var_145_bool; float var_147_float;
				var_90_float = var_147_float;
				TaskCall(6);
				func_1567(var_153_bool, var_145_bool, var_0_object, var_147_float, 3000.0, true, false);
				TaskReturn();
				if(!var_151_bool) { //@nz
				} else {
					var_94_bool = false;
			} else {
			if(var_97_float >= (var_78_float * var_78_float)) {
				var_0_object->GetPFPosition(var_98_cvector); //@t
				@CanReachByPF(var_99_bool, var_98_cvector);
				if(!var_99_bool) { //@nz
					bool var_235_bool; float var_237_float;
					var_90_float = var_237_float;
					TaskCall(6);
					func_1567(var_243_bool, var_235_bool, var_0_object, var_237_float, 3000.0, true, false);
					TaskReturn();
					if(!var_241_bool) { //@nz
						goto Label_1110;
					}
					var_94_bool = false;
					goto Label_938;
				}
				if(!var_94_bool) { //@nz
					func_2125(var_0_object);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1540(var_100_float);
					@StopAsync();
					var_94_bool = true;
					bool var_257_bool;
					func_1975(var_257_bool, var_0_object);
					if(!var_257_bool) { //@nz
						goto Label_1110;
					}
				}
				@rand(var_100_float);
				bool var_260_bool;
				var_262_bool = var_100_float < 0.25;
				if(var_262_bool != 1) {
					bool var_263_bool;
					func_1497(true, var_263_bool);
					if(var_263_bool != 1)
						var_260_bool = false;
				}
				if(var_260_bool != 0) {
					@Face(var_0_object);
					func_1547();
					@PlayAnimation("all", "attack_stay");
					bool var_300_bool; float var_301_float;
					func_1365(var_100_float, var_300_bool, var_301_float);
					@StopAsync();
				} else {
					@Face(var_0_object);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1540(var_100_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_518_bool;
					func_1497(var_100_float, var_518_bool);
					var_519_bool = !var_518_bool; //@nz
					if(var_519_bool == 0) goto Label_1100;
					bool var_520_bool;
					func_1975(var_520_bool, var_0_object);
					if(!var_520_bool) { //@nz
						goto Label_1110;
					}
					var_0_object->GetPFPosition(var_91_cvector); //@t
					@GetPFPosition(var_92_cvector);
					if(!(((var_91_cvector - var_92_cvector) | (var_91_cvector - var_92_cvector)) < (var_301_float * var_301_float))) goto Label_1100;
					bool var_525_bool; float var_526_float;
					var_78_float = var_526_float;
					func_1201(var_99_bool, var_100_float, var_525_bool, var_526_float);
					var_527_bool = !var_525_bool; //@nz
					if(var_527_bool == 0) goto Label_1100;
					goto Label_1110;
			}
				bool var_528_bool; float var_529_float;
				var_78_float = var_529_float;
				func_1201(var_99_bool, var_100_float, var_528_bool, var_529_float);
				if(!var_528_bool) { //@nz
					goto Label_1110;
				}
				var_94_bool = true;

			}
		Label_1100:
			goto Label_1109;
			}
			Label_1109:
			}
		}
	Label_1110:
		@WaitForAnimEnd();
		if(var_3_string != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_93_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_1934(bool var_44_bool, object var_45_object)
{
	bool var_47_bool;
	var_45_object->IsDead(var_47_bool);
	var_47_bool = var_44_bool;
}


void func_1939(bool var_33_bool, object var_34_object)
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
		func_1934(var_44_bool, var_45_object);
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


void func_1436(bool var_313_bool)
{
	bool var_314_bool = false;
	bool var_315_bool;
	func_1408(var_314_bool, var_315_bool);
	if(var_315_bool != 0) {
		bool var_332_bool;
		func_1452(var_313_bool, var_314_bool, var_332_bool);
		if(var_332_bool != 0)
			var_314_bool = true;
	}
	if(var_314_bool != 0) {
		var_313_bool = true;
		return 0;
	}
	var_313_bool = false;
}


void func_1452(object var_0_object, bool var_4_bool, bool var_332_bool)
{
	object var_338_object; float var_340_float; cvector var_341_cvector; cvector var_342_cvector;
	@GetScene(var_338_object);
	bool var_339_bool = false;
	
	for(;;) {
		cvector var_343_cvector;
		func_1837(var_343_cvector, var_0_object);
		var_349_int = -var_343_cvector;
		@FindDirLength(var_340_float, var_349_int, var_4_bool);
		if(var_340_float < var_4_bool) {
		} else {
				@Face(var_0_object);
				@PlayAnimation("all", "bjump");
				var_0_object->GetPFPosition(var_341_cvector); //@t
				@GetPFPosition(var_342_cvector);
				@WaitForAnimEnd();
				func_1540(var_342_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_339_bool = true;
				bool var_354_bool;
				func_1408(var_342_cvector, var_354_bool);
				var_355_bool = !var_354_bool; //@nz
				if(var_355_bool == 0) goto Label_1493;
		}
		for(;;) {
			var_339_bool = var_332_bool;

		}

	Label_1493:
	}
}
EMIT "Stack[-5] = 0";


void func_1975(bool var_29_bool, object var_30_object)
{
	object var_34_object;
	var_30_object = var_34_object;
	bool var_33_bool;
	func_1939(var_33_bool, var_34_object);
	if(!var_33_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_51_bool; object var_52_object;
	func_1849(var_51_bool, var_52_object, "noaccess");
	if(!var_51_bool) { //@nz
		var_29_bool = true;
		return 2;
	}
	int var_32_int;
	var_52_object->GetProperty("noaccess", var_32_int);
	var_29_bool = var_32_int == 0;
}


void func_1999(object var_33_object)
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


void func_1497(object var_0_object, bool var_263_bool)
{
	bool var_265_bool;
	var_268_bool = IsFuncExist(var_0_object, "IsAttacking", 1);
	if(var_268_bool != 0) {
		var_0_object->IsAttacking(var_265_bool); //@t
		var_265_bool = var_263_bool;
	}
	var_263_bool = false;
}


void func_1508(object var_2_object, bool var_5_bool)
{
	int var_383_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_382_float;
	@rand(var_382_float);
	float var_389_float;
	func_1558(var_389_float);
	if(var_382_float < var_389_float) {
		@irand(var_383_int, var_2_object);
		@Speak("attack" + (var_383_int + 1));
		int var_394_int;
		func_1556(var_394_int);
		var_5_bool = var_394_int;
	}
}


void func_2043(object var_20_object, int var_21_int, float var_22_float)
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
		func_1837(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2304(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_2105:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_1999(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_2105;
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
	func_2111(var_67_float, var_68_cvector, var_69_cvector);
}


