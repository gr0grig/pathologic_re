// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void event_11(bool var_0_bool, int var_1_int, object var_2_object, object var_3_object, object var_4_object, string var_5_string, bool var_6_bool, bool var_7_bool, bool var_8_bool, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool;
		func_3127(var_18_bool);
		if(var_18_bool != 0)
			@lshStopAnimation();
		else
			@StopAnimation();
		@StopTrade();
		var_0_bool = true;
	
	}

}


task task_1
{
}


task task_2
{
	// @pe
	void event_11(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, int var_6_int, int var_7_int, bool var_8_bool, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, int var_14_int, int var_15_int, bool var_16_bool, float var_17_float, int var_18_int)
	{
		if(1 != 0) {
			func_2233();
			if(var_17_float == 39791) {
				func_177(var_18_int, "Neutral");
				var_0_bool->SetMessage(537930); //@t
				var_0_bool->ClearReplies(); //@t
				var_0_bool->AddReply(537931, -1, 39792); //@t
				var_0_bool->AddReply(537932, -1, 39793); //@t
				var_0_bool->AddReply(537933, -1, 39794); //@t
				return 0;
			}
			var_3_object = true;
			bool var_50_bool;
			func_3127(var_50_bool);
			if(var_50_bool != 0)
				@lshStopAnimation();
			else
				@StopAnimation();
			return 0;
		}
		return 0;
	EMIT "GOTO 0xc8";
	
	}

}


maintask task_3
{
	// @pe
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int)
	{
		func_2927();
		func_2728();
	
		for(;;) {
			func_342(var_15_float, var_16_int);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool; object var_19_object;
		func_3129(var_18_bool, var_19_object);
		if(var_18_bool != 0)
			return 0;
		func_413(var_16_float, var_19_object);
		int var_81_int; object var_82_object;
		var_17_int = var_82_object;
		TaskCall(1);
		func_40(var_83_object, var_81_int, var_82_object);
		TaskReturn();
		if(1000 == var_83_object) {
			object var_215_object;
			var_17_int = var_215_object;
			func_2934(var_215_object);
		}
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool; object var_19_object;
		func_2966(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_413(var_16_float, var_19_object);
			object var_82_object;
			var_17_int = var_82_object;
			func_2973(var_82_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool; object var_19_object;
		func_2953(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_413(var_16_float, var_19_object);
			object var_82_object;
			var_17_int = var_82_object;
			func_2960(var_82_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, object var_106_object)
		{
		object var_108_object;
		var_106_object = var_108_object;
			bool var_107_bool;
		func_1877(var_107_bool, var_108_object);
		if(!var_107_bool) { //@nz
			object var_136_object;
			var_106_object = var_136_object;
			func_2990(var_136_object);
		}
		func_413(var_19_int, var_106_object);
		object var_151_object;
		var_106_object = var_151_object;
		func_3014(var_151_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		object var_22_object;
		var_18_float = var_22_object;
		bool var_23_bool;
		var_19_int = var_23_bool;
		bool var_20_bool;
		func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
		if(var_20_bool != 0) {
			object var_106_object;
			var_17_bool = var_106_object;
			func_309();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		@RequestClearPath(var_17_int);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		func_413(var_16_float, var_17_int);
		object var_18_object;
		var_17_int = var_18_object;
		func_3087();
	}

}


task task_4
{
	// @pe
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		func_584();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		object var_19_object;
		var_17_int = var_19_object;
		bool var_18_bool;
		func_2966(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_584();
			object var_82_object;
			var_17_int = var_82_object;
			func_2973(var_82_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		object var_19_object;
		var_17_int = var_19_object;
		bool var_18_bool;
		func_2953(var_18_bool, var_19_object);
		if(var_18_bool != 0) {
			func_584();
			object var_82_object;
			var_17_int = var_82_object;
			func_2960(var_82_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int, object var_106_object)
		{
		object var_108_object;
		var_106_object = var_108_object;
			bool var_107_bool;
		func_1877(var_107_bool, var_108_object);
		if(!var_107_bool) { //@nz
			object var_136_object;
			var_106_object = var_136_object;
			func_2990(var_136_object);
		}
		func_584();
		object var_151_object;
		var_106_object = var_151_object;
		func_3014(var_151_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		object var_22_object;
		var_18_float = var_22_object;
		bool var_23_bool;
		var_19_int = var_23_bool;
		bool var_20_bool;
		func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
		if(var_20_bool != 0) {
			object var_106_object;
			var_17_bool = var_106_object;
			func_470();
		}
	}

}


task task_5
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		object var_18_object;
		var_17_int = var_18_object;
		func_2990(var_18_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, int var_16_int, bool var_17_bool, float var_18_float, int var_19_int)
	{
		object var_21_object;
		var_17_bool = var_21_object;
		object var_22_object;
		var_18_float = var_22_object;
		bool var_23_bool;
		var_19_int = var_23_bool;
		bool var_20_bool;
		func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, int var_11_int, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		if(var_17_int == 1) {
			func_2378(var_1_object);
		} else {
			int var_25_int;
			func_810(var_16_float, var_25_int, var_25_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_int) {
			if(!var_2_object) //@nz
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = true;
			object var_21_object;
			var_17_int = var_21_object;
			func_2222(var_21_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		bool var_18_bool = false;
		if(var_1_object == var_17_int) {
			if(var_2_object != 0)
				var_18_bool = true;
		}
		if(var_18_bool != 0) {
			var_2_object = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		@RequestClearPath(var_17_int);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, int var_14_int, bool var_15_bool, float var_16_float, int var_17_int)
	{
		func_666(var_17_int);
		object var_22_object;
		var_17_int = var_22_object;
		func_3087();
	}

}


task task_6
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
		object var_18_object;
		var_17_object = var_18_object;
		func_2990(var_18_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, object var_18_object, bool var_19_bool)
	{
		object var_21_object;
		var_17_object = var_21_object;
		object var_22_object;
		var_18_object = var_22_object;
		bool var_23_bool;
		var_19_bool = var_23_bool;
		bool var_20_bool;
		func_3093(var_20_bool, var_21_object, var_22_object, var_23_bool);
	}

}


task task_7
{
	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
		bool var_19_bool;
		@IsOverrideActive(var_19_bool);
		if(!var_19_bool) { //@nz
			object var_21_object;
			var_17_object = var_21_object;
			func_2445(var_21_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, string var_18_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, int var_18_int, float var_19_float, float var_20_float)
{
	object var_21_object;
	var_17_object = var_21_object;
	int var_22_int;
	var_18_int = var_22_int;
	float var_23_float;
	var_19_float = var_23_float;
	func_1945(var_21_object, var_22_int, var_23_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, int var_18_int, float var_19_float, float var_20_float, cvector var_21_cvector, cvector var_22_cvector)
{
	object var_23_object;
	var_17_object = var_23_object;
	int var_24_int;
	var_18_int = var_24_int;
	float var_25_float;
	var_19_float = var_25_float;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	cvector var_27_cvector;
	var_22_cvector = var_27_cvector;
	func_2013(var_25_float, var_26_cvector, var_27_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, string var_18_string)
{
	float var_20_float;
	if(var_18_string == "health") {
		@GetProperty("health", var_20_float);
		if(var_20_float <= 0)
			@SignalDeath(var_17_object);
	}
}


// @pe
void OnMessage(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object, string var_18_string)
{
	if(var_18_string == "prc")
		@ResetAAS();
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, string var_4_string, bool var_5_bool, bool var_6_bool, bool var_7_bool, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, int var_12_int, int var_13_int, bool var_14_bool, float var_15_float, int var_16_int, object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_3029(var_18_object);
}


void func_1536(void)
{
	func_2266("attack_stay");
}


// @pe
void func_0(bool var_0_bool)
{
	@DoTrade();
	
	for(;;) {
		bool var_251_bool;
		func_3127(var_251_bool);
		if(var_251_bool == 0) goto Label_15;
		func_2191("Neutral");
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


// @pe
void func_1541(void)
{
}


void func_1543(bool var_587_bool)
{
	var_587_bool = true;
}


void func_1545(int var_479_int)
{
	var_479_int = 1;
}


void func_1547(float var_474_float)
{
	var_474_float = 0.5;
}


void func_1549(object var_28_object)
{
	bool var_30_bool;
	@IsPlayerActor(var_28_object, var_30_bool);
	if(var_30_bool != 0)
		func_2530();
	else
		func_2657();
	func_2506();
	object var_164_object;
	var_28_object = var_164_object;
	func_1569(var_164_object);
	
}


void func_3093(bool var_20_bool, object var_21_object, object var_22_object, bool var_23_bool)
{
	bool var_25_bool;
	object var_27_object;
	var_22_object = var_27_object;
	bool var_26_bool;
	func_2791(var_26_bool, var_27_object, !var_23_bool);
	if(var_26_bool != 0) {
		@CanSee(var_25_bool, var_21_object);
		bool var_94_bool = true;
		if(var_25_bool != 1) {
			float var_96_float; object var_97_object;
			var_21_object = var_97_object;
			func_1738(var_96_float, var_97_object);
			var_105_bool = var_96_float <= 160000.0;
			if(var_105_bool != 1)
				var_94_bool = false;
		}
		if(var_94_bool != 0)
			var_20_bool = true;
	}
	var_20_bool = false;
}


// @pe
void func_1569(object var_164_object)
{
	object var_165_object;
	var_164_object = var_165_object;
	func_1594(var_165_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_40(bool var_0_bool, int var_81_int, object var_82_object)
{
	var_0_bool = var_82_object;
	bool var_92_bool; object var_93_object;
	var_82_object = var_93_object;
	func_2043(var_92_bool, var_93_object, 70.0);
	if(!var_92_bool) { //@nz
		var_81_int = -2;
		return 8;
	}
	object var_88_object;
	@CreateDialog(var_88_object);
	int var_140_int;
	func_3121(var_140_int);
	var_88_object->SetNPCName(var_140_int);
	int var_141_int;
	func_3119(var_141_int);
	var_88_object->SetNPCDescription(var_141_int);
	string var_142_string;
	func_3123(var_142_string);
	var_88_object->SetPhoto(var_142_string);
	string var_143_string;
	func_3125(var_143_string);
	var_88_object->SetPhoto2(var_143_string);
	int var_144_int;
	func_2422(var_144_int);
	var_88_object->SetPlayerName(var_144_int);
	bool var_89_bool;
	@IsOverrideActive(var_89_bool);
	if(var_89_bool != 0) {
		var_81_int = -2;
		return 8;
	}
	@DoDialog(var_88_object);
	object var_153_object; object var_154_object;
	var_82_object = var_153_object;
	var_88_object = var_154_object;
	TaskCall(2);
	func_114(var_155_object, var_156_object, var_157_string, var_158_bool, var_153_object, var_154_object);
	TaskReturn();
	bool var_91_bool;
	var_88_object->IsDialogEnd(var_91_bool);
	
	for(;;) {
		var_205_bool = !var_91_bool; //@nz
		if(var_205_bool == 0) goto Label_103;
		@sync();
		var_88_object->IsDialogEnd(var_91_bool);
	}
	
Label_103:
	object var_206_object;
	var_82_object = var_206_object;
	func_2112();
	@StopDialog(var_88_object);
	var_88_object->GetReturnValue(-1);
	int var_90_int = var_81_int;
}
EMIT "Stack[-4] = 0";


void func_3119(int var_141_int)
{
	var_141_int = 515572;
}


void func_3121(int var_140_int)
{
	var_140_int = 504031;
}


void func_3123(string var_142_string)
{
	var_142_string = "ui/NPC_Citizen2.png";
}


void func_3125(string var_143_string)
{
	var_143_string = "ui/NPC_Citizen2_b.png";
}


void func_3127(bool var_135_bool)
{
	var_135_bool = false;
}


void func_3129(bool var_20_bool, object var_21_object)
{
	float var_26_float; string var_27_string;
	bool var_28_bool; object var_29_object;
	func_1877(var_28_bool, var_29_object);
	if(!var_28_bool) { //@nz
		var_20_bool = false;
		return 6;
	}
	var_63_object = GlobalVars[0];
	bool var_25_bool;
	var_63_object->in(var_25_bool, var_29_object);
	if(var_25_bool != 0) {
		var_20_bool = true;
		return 6;
	}
	bool var_65_bool; object var_66_object;
	func_1746(var_65_bool, var_66_object);
	if(var_65_bool != 0) {
		var_66_object->GetProperty("reputation", var_26_float);
		var_20_bool = var_26_float < 0.33;
		return 6;
	}
	bool var_71_bool; object var_72_object;
	func_1751(var_71_bool, var_72_object, "class");
	if(var_71_bool != 0) {
		var_72_object->GetProperty("class", var_27_string);
		var_20_bool = true;
		bool var_75_bool = true;
		var_77_bool = var_27_string == "bomber";
		if(var_77_bool != 1) {
			var_79_bool = var_27_string == "hunter";
			if(var_79_bool != 1)
				var_75_bool = false;
		}
		if(var_75_bool != 1) {
			var_81_bool = var_27_string == "grabitel";
			if(var_81_bool != 1)
				var_20_bool = false;
		}
		return 6;
	}
	var_20_bool = false;
}


void func_1594(object var_165_object)
{
	cvector var_176_cvector; cvector var_177_cvector; cvector var_178_cvector; cvector var_179_cvector; string var_180_string; object var_181_object; bool var_182_bool; bool var_183_bool; float var_184_float; cvector var_185_cvector;
	if(var_165_object == null) {
		func_1685("fdie");
	} else {
		var_165_object->GetPosition(var_176_cvector);
		@GetPosition(var_177_cvector);
		@GetDirection(var_178_cvector);
		var_179_cvector = var_177_cvector - var_176_cvector;
		var_219_float = GetByIndex(var_179_cvector, 0);
		var_220_float = GetByIndex(var_178_cvector, 0);
		var_222_float = GetByIndex(var_179_cvector, 2);
		var_223_float = GetByIndex(var_178_cvector, 2);
		if(((var_219_float * var_220_float) + (var_222_float * var_223_float)) >= 0)
			var_180_string = "fdie";
		else
			var_180_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_165_object = var_181_object;
		var_230_bool = IsFuncExist(var_165_object, "GetScriptProperty", 2);
		if(var_230_bool != 0) {
			var_165_object->HasScriptProperty(var_182_bool, "Owner");
			if(var_182_bool != 0) {
				var_165_object->GetScriptProperty(var_181_object, "Owner");
				if(var_181_object == null)
					var_165_object = var_181_object;
			}
		}
		var_237_bool = IsFuncExist(var_181_object, "@GetEyesHeight", 1);
		if(var_237_bool != 0) {
			var_181_object->GetEyesHeight(var_184_float);
			var_185_cvector = [0.0, 0.0, 0.0];
			var_238_float = GetByIndex(var_185_cvector, 1);
			var_184_float = var_238_float;
			SetByIndex(var_185_cvector, 1) = var_238_float;
			@LookAsync(var_165_object, "head", var_185_cvector);
			var_183_bool = true;
		} else {
			var_183_bool = false;

		}
		string var_240_string;
		var_180_string = var_240_string;
		func_2266(var_240_string);
		@PlayAnimation("all", var_180_string);
		@WaitForAnimEnd();
		if(var_183_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_180_string);
		@RemoveEnvelope();
		var_181_object = null;
	}
	
}


void func_2112(void)
{
	bool var_208_bool;
	@CameraSwitchToNormal(true);
	bool var_210_bool;
	func_3127(var_210_bool);
	if(var_210_bool != 0) {
	} else {
		@HasAnimationTrack(var_208_bool, "head");
		if(var_208_bool == 0) goto Label_2129;
		@UnlookAsync("head");
	}
Label_2129:
	
}


void func_582(bool var_149_bool)
{
	var_149_bool = true;
}


void func_584(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2130(bool var_216_bool, object var_217_object)
{
	object var_219_object;
	var_217_object = var_219_object;
	bool var_218_bool;
	func_2138(var_218_bool, var_219_object, (float)70);
	var_218_bool = var_216_bool;
}


void func_2138(bool var_218_bool, object var_219_object, float var_220_float)
{
	cvector var_230_cvector;
	var_219_object->GetPosition(var_230_cvector);
	float var_229_float;
	var_219_object->GetEyesHeight(var_229_float);
	var_237_float = GetByIndex(var_230_cvector, 1);
	SetByIndex(var_230_cvector, 1) = (var_237_float + var_229_float);
	cvector var_231_cvector;
	@GetPosition(var_231_cvector);
	@GetEyesHeight(var_229_float);
	var_238_float = GetByIndex(var_231_cvector, 1);
	SetByIndex(var_231_cvector, 1) = (var_238_float + var_229_float);
	cvector var_232_cvector = var_230_cvector - var_231_cvector;
	var_239_float = GetByIndex(var_232_cvector, 1);
	SetByIndex(var_232_cvector, 1) = (float)0;
	var_241_float = sqrt(var_232_cvector | var_232_cvector);
	var_232_cvector /= var_241_float;
	cvector var_233_cvector = -var_232_cvector;
	cvector var_234_cvector = (var_232_cvector * var_220_float) - [0.0, 10.0, 0.0];
	bool var_236_bool;
	@IsOverrideActive(var_236_bool);
	if(var_236_bool != 0)
		var_218_bool = false;
	@StopWorld();
	@CameraTransit((var_231_cvector + var_234_cvector), var_233_cvector, true);
	var_246_float = GetByIndex(var_234_cvector, 0);
	var_247_float = GetByIndex(var_234_cvector, 2);
	@Rotate(var_246_float, var_247_float);
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_218_bool = true;
}


void func_603(object var_2_object, bool var_230_bool, object var_231_object, float var_232_float, float var_233_float, bool var_234_bool, bool var_235_bool)
{
	object var_243_object;
	func_2378(var_243_object);
	@SetTimer(1, 5);
	bool var_241_bool;
	@CanSee(var_241_bool, var_243_object);
	if(var_241_bool != 0) {
		var_2_object = true;
		object var_247_object;
		var_231_object = var_247_object;
		func_2222(var_247_object);
	} else {
		var_2_object = false;
	}
	bool var_254_bool; object var_255_object;
	func_1746(var_254_bool, var_255_object);
	if(var_254_bool != 0) {
		object var_256_object;
		func_2307(var_256_object);
		@SendPlayerEnemy(var_255_object, var_256_object);
	}
	bool var_257_bool; object var_258_object; float var_259_float; float var_260_float; bool var_261_bool; bool var_262_bool;
	var_231_object = var_258_object;
	var_232_float = var_259_float;
	var_233_float = var_260_float;
	var_234_bool = var_261_bool;
	var_235_bool = var_262_bool;
	bool var_242_bool;
	func_708(var_241_bool, var_242_bool, var_257_bool, var_258_object, var_259_float, var_260_float, var_261_bool, var_262_bool);
	var_257_bool = var_242_bool;
	if(var_2_object != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_242_bool = var_230_bool;
	
}


void func_1116(object var_1_object, object var_2_object, string var_4_string)
{
	bool var_189_bool; bool var_190_bool; cvector var_191_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_189_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_189_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_object = 0;

		for(;;) {
			@IsExisting3DSound(var_190_bool, ("attack" + (var_2_object + 1)));
			if(!var_190_bool) //@nz
				break;
			var_2_object += 1;
		}
		@GetAnimationOffset(var_191_cvector, "all", "bjump");
		var_205_float = GetByIndex(var_191_cvector, 2);
		var_4_string = -var_205_float;

	}
}


void func_2657(void)
{
	@ClearSubContainer(0);
	int var_254_int;
	func_2369(var_254_int);
	int var_252_int;
	var_254_int = var_252_int;
	func_2458(0, (10 + (var_252_int * 5)));
	func_2240("bottle_water", 1, 3);
	func_2240("rusk", 1, 20);
	func_2240("hook", 1, 30);
	func_2240("watch", 1, 30);
	if(var_252_int >= 3)
		func_2251("alpha_pills", 1, 4, 3);
	if(var_252_int >= 4)
		func_2251("beta_pills", 1, 8, 3);
	if(var_252_int >= 6)
		func_2251("gamma_pills", 1, 16, 3);
}


// @pe
void func_114(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_153_object, object var_154_object)
{
	var_0_bool = var_154_object;
	var_1_object = var_153_object;
	var_3_object = false;
	if(1 != 0) {
		func_177(var_154_object, "Neutral");
		var_0_bool->SetMessage(537930); //@t
		var_0_bool->ClearReplies(); //@t
		var_0_bool->AddReply(537931, -1, 39792); //@t
		var_0_bool->AddReply(537932, -1, 39793); //@t
		var_0_bool->AddReply(537933, -1, 39794); //@t
		goto Label_147;
	EMIT "Return(); Pop(0)";
	EMIT "GOTO 0x76";
	}
Label_147:
	bool var_187_bool;
	func_3127(var_187_bool);
	if(var_187_bool != 0) {

		for(;;) {
			@lshWaitForAnimEnd();
			if(var_3_object != 0) {
			} else {
				func_2191(var_2_object);
			}
	} else {
		@PlayAnimation("all", "idle");

		for(;;) {
			@WaitForAnimEnd();
			if(var_3_object != 0) {
				goto Label_176;
			}
			@PlayAnimation("all", "idle");
		}
	}
	Label_176:
		return 0;

	}
	
}


void func_1151(bool var_0_bool, float var_483_float, int var_484_int)
{
	object var_488_object; float var_489_float; float var_490_float;
	@GetVictim((var_483_float * 0.9), var_488_object);
	@ReportAttack(var_0_bool);
	if(var_488_object == var_0_bool) {
		float var_494_float; object var_495_object; int var_496_int;
		var_488_object = var_495_object;
		var_484_int = var_496_int;
		func_867(var_496_int);
		var_494_float = var_489_float;
		float var_497_float; object var_498_object; float var_499_float; int var_500_int;
		var_488_object = var_498_object;
		int var_501_int; object var_502_object; int var_503_int;
		var_488_object = var_502_object;
		var_484_int = var_503_int;
		func_870(var_503_int);
		var_501_int = var_500_int;
		func_1763(var_497_float, var_498_object, var_499_float, var_500_int);
		var_497_float = var_490_float;
		int var_562_int;
		func_1534(var_562_int);
		@ReportHit(var_0_bool, var_562_int, var_490_float, var_499_float);
		object var_563_object; float var_564_float;
		var_488_object = var_563_object;
		var_490_float = var_564_float;
		func_1541();
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_2186(void)
{
	@CameraSwitchToNormal(true);
}


void func_2191(string var_189_string)
{
	bool var_193_bool; float var_194_float; float var_195_float;
	@lshHasAnimation(var_193_bool, var_189_string);
	if(var_193_bool != 0) {
		@lshGetAnimTimes(var_189_string, var_194_float, var_195_float);
		@lshPlayAnimation(var_194_float, var_195_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_189_string);
	}
	
}


// @pe
void func_1685(string var_187_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_188_string;
	var_187_string = var_188_string;
	func_2266(var_188_string);
	@PlayAnimation("all", var_187_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_187_string);
	@RemoveEnvelope();
}


void func_666(object var_2_object)
{
	@KillTimer(1);
	if(var_2_object != 0) {
		var_2_object = false;
		@UnlookAsync("head");
	}
	func_832(var_17_int);
}


void func_2207(string var_164_string, bool var_165_bool)
{
	bool var_171_bool; float var_172_float; float var_173_float;
	@lshHasAnimation(var_171_bool, var_164_string);
	if(var_171_bool != 0) {
		@lshGetAnimTimes(var_164_string, var_172_float, var_173_float);
		@lshPlayAnimation(var_172_float, var_173_float, var_165_bool);
	} else {
		@Trace("Can't find lsh animation : " + var_164_string);
	}
	
}


void func_1190(bool var_0_bool, object var_1_object, bool var_446_bool, float var_447_float)
{
	string var_455_string;
	func_1529(var_455_string);
	int var_452_int;
	@irand(var_452_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2387();
	@PlayAnimation("all", ("attack_begin" + (var_452_int + 1)));
	@WaitForAnimEnd();
	int var_454_int;
	func_1497(var_454_int, var_455_string);
	bool var_480_bool;
	func_1877(var_480_bool, var_0_bool);
	if(!var_480_bool) { //@nz
		@StopAsync();
		var_446_bool = false;
		return 8;
	}
	float var_483_float; int var_484_int;
	var_447_float = var_483_float;
	var_452_int = var_484_int;
	func_1151(var_455_string, var_483_float, var_484_int);
	bool var_453_bool;
	@HasAnimation(var_453_bool, "all", ("attack_middle" + var_452_int));
	if(var_453_bool != 0) {
		func_2387();
		@PlayAnimation("all", ("attack_middle" + var_452_int));
		@WaitForAnimEnd();
		func_1529(var_455_string);
		bool var_572_bool;
		func_1877(var_572_bool, var_0_bool);
		if(!var_572_bool) { //@nz
			@StopAsync();
			var_446_bool = false;
			return 8;
		}
		float var_575_float; int var_576_int;
		var_447_float = var_575_float;
		func_1151(var_455_string, var_575_float, var_576_int);
		var_454_int = 1;

		for(;;) {
			var_455_string = (("attack_middle" + var_576_int) + "_") + var_454_int;
			@HasAnimation(var_453_bool, "all", var_455_string);
			if(!var_453_bool) { //@nz
			} else {
				func_2387();
				@PlayAnimation("all", var_455_string);
				@WaitForAnimEnd();
				func_1529(var_455_string);
				bool var_598_bool;
				func_1877(var_598_bool, var_0_bool);
				if(!var_598_bool) { //@nz
					@StopAsync();
					var_446_bool = false;
					return 8;
				}
				float var_601_float; int var_602_int;
				var_447_float = var_601_float;
				var_452_int = var_602_int;
				func_1151(var_455_string, var_601_float, var_602_int);
				var_454_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_452_int));
		bool var_587_bool;
		func_1543(var_587_bool);
		if(var_587_bool != 0) {
			bool var_588_bool;
			func_1327(var_588_bool, 0.75);
			@StopAsync();
		}
		var_446_bool = true;
		return 8;

	}
}


void func_2728(void)
{
	@ClearSubContainer(0);
	int var_28_int;
	func_2369(var_28_int);
	int var_26_int;
	var_28_int = var_26_int;
	func_2251("fresh_meat", 1, 4, 3);
	func_2251("dried_meat", 1, 4, 3);
	func_2251("smoked_meat", 1, 4, 3);
	func_2251("vegetables", 1, 3, 3);
	if(var_26_int >= 3) {
		func_2240("revolver_ammo", 1, 5);
		func_2240("rifle_ammo", 1, 5);
		func_2240("samopal_ammo", 1, 5);
	}
}


void func_2222(object var_21_object)
{
	float var_24_float;
	var_21_object->GetEyesHeight(var_24_float);
	cvector var_25_cvector = [0.0, 0.0, 0.0];
	var_26_float = GetByIndex(var_25_cvector, 1);
	var_24_float = var_26_float;
	SetByIndex(var_25_cvector, 1) = var_26_float;
	@LookAsync(var_21_object, "head", var_25_cvector);
}


// @pe
void func_177(object var_2_object, string var_160_string)
{
	bool var_161_bool;
	func_3127(var_161_bool);
	if(!var_161_bool) //@nz
		return 0;
	if(var_160_string == var_2_object)
		return 0;
	string var_164_string; bool var_165_bool;
	var_160_string = var_164_string;
	if(var_160_string == "")
		var_165_bool = false;
	else
		var_165_bool = true;
	func_2207(var_164_string, var_165_bool);
	var_2_object = var_160_string;
	
}


// @pe
void func_1717(string var_525_string, int var_526_int)
{
	if(var_526_int == 2) {
		var_525_string = "fire";
		return 0;
	EMIT "GOTO 0x6c1";
	}
	if(var_526_int == 1) {
		var_525_string = "bullet";
		return 0;
	}
	var_525_string = "phys";
}


void func_2233(void)
{
	bool var_20_bool;
	func_3127(var_20_bool);
	if(var_20_bool != 0)
		@lshStopSpeech();
}


void func_2240(string var_64_string, int var_65_int, int var_66_int)
{
	bool var_68_bool;
	int var_70_int;
	var_65_int = var_70_int;
	int var_71_int;
	var_66_int = var_71_int;
	bool var_69_bool;
	func_2341(var_69_bool, var_70_int, var_71_int);
	if(var_69_bool != 0)
		@AddItem(var_68_bool, var_64_string, 0);
}


void func_1731(cvector var_51_cvector, object var_52_object)
{
	cvector var_55_cvector;
	@GetPosition(var_55_cvector);
	cvector var_56_cvector;
	var_52_object->GetPosition(var_56_cvector);
	var_51_cvector = var_56_cvector - var_55_cvector;
}


void func_708(bool var_0_bool, object var_1_object, bool var_257_bool, object var_258_object, float var_259_float, float var_260_float, bool var_261_bool, bool var_262_bool)
{
	bool var_271_bool; object var_273_object; cvector var_274_cvector; cvector var_275_cvector; float var_277_float; object var_278_object;
	var_0_bool = false;
	var_1_object = var_258_object;
	bool var_272_bool;
	var_262_bool = var_272_bool;
	
	for(;;) {
		bool var_279_bool; object var_280_object;
		var_258_object = var_280_object;
		func_848(var_279_bool, var_280_object);
		if(!var_279_bool) { //@nz
			var_257_bool = false;
			return 16;
		}
		var_258_object->GetPosition(var_274_cvector);
		@GetPosition(var_275_cvector);
		var_277_float = (var_274_cvector - var_275_cvector) | (var_274_cvector - var_275_cvector);
		bool var_284_bool = false;
		if(var_260_float > 0) {
			if(var_277_float > (var_260_float * var_260_float))
				var_284_bool = true;
		}
		if(var_284_bool != 0) {
			@Stop();
			var_257_bool = false;
			return 16;
		}
		if(var_277_float > (var_259_float * var_259_float)) {
			var_258_object->GetPFPosition(var_274_cvector);
			@FindPathTo(var_278_object, var_274_cvector);
			if(var_278_object != null) {
				var_278_object = var_273_object;
				var_278_object = null;
			}
			if(var_273_object != null) {
				if(var_272_bool == 0) goto Label_761;
				var_272_bool = false;
				@RotatePath(var_273_object, var_271_bool);
				if(!var_271_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_297_string;
						func_855(var_297_string);
						string var_298_string;
						func_857(var_298_string);
						@FollowPath(var_273_object, var_261_bool, var_271_bool, var_297_string, var_298_string);
						if(!var_271_bool) { //@nz
							if(var_0_bool == 0) goto Label_780;
							var_273_object = null;
						}
					EMIT "GOTO 0x30d";

					Label_780:
						} else {
					var_273_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_271_bool);
					if(!var_271_bool) { //@nz
						if(var_0_bool != 0) {
							var_273_object = null;
							goto Label_808;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_808;
		}
			var_278_object = null;
			goto Label_806;

		Label_806:
			var_273_object = null;

		}
	Label_808:
		for(;;) {
			var_257_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1738(float var_96_float, object var_97_object)
{
	cvector var_101_cvector;
	@GetPosition(var_101_cvector);
	cvector var_102_cvector;
	var_97_object->GetPosition(var_102_cvector);
	var_96_float = (var_102_cvector - var_101_cvector) | (var_102_cvector - var_101_cvector);
}


void func_2251(string var_34_string, int var_35_int, int var_36_int, int var_37_int)
{
	int var_40_int; bool var_41_bool;
	int var_43_int;
	var_35_int = var_43_int;
	int var_44_int;
	var_36_int = var_44_int;
	bool var_42_bool;
	func_2341(var_42_bool, var_43_int, var_44_int);
	if(var_42_bool != 0) {
		@irand(var_40_int, var_37_int);
		@AddItem(var_41_bool, var_34_string, 0, (var_40_int + 1));
	}
}


void func_1746(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
}


void func_1751(bool var_31_bool, object var_32_object, string var_33_string)
{
	var_38_bool = IsFuncExist(var_32_object, "HasProperty", 2);
	if(!var_38_bool) { //@nz
		var_31_bool = false;
		return 2;
	}
	bool var_35_bool;
	var_32_object->HasProperty(var_33_string, var_35_bool);
	var_35_bool = var_31_bool;
}


void func_2266(string var_188_string)
{
	bool var_197_bool; int var_198_int; bool var_199_bool; int var_200_int; bool var_201_bool; float var_202_float; cvector var_203_cvector; cvector var_204_cvector;
	@IsExisting3DSound(var_197_bool, var_188_string);
	if(!var_197_bool) { //@nz
		var_198_int = 0;

		for(;;) {
			@IsExisting3DSound(var_199_bool, (var_188_string + (var_198_int + 1)));
			if(!var_199_bool) { //@nz
				break;
			Label_2286:
				@irand(var_200_int, var_198_int);
				var_188_string += (var_200_int + 1);
	}
			@Is3DSoundLoaded(var_201_bool, var_188_string);
			if(var_201_bool != 0) {
				@GetEyesHeight(var_202_float);
				@GetDirection(var_203_cvector);
				var_204_cvector = var_203_cvector * 50;
				var_215_float = GetByIndex(var_204_cvector, 1);
				SetByIndex(var_204_cvector, 1) = (var_215_float + var_202_float);
				@PlayGlobalSound(var_188_string, var_204_cvector);
			}
		}
		var_198_int += 1;
	}
	var_210_bool = !var_198_int; //@nz
	if(var_210_bool == 0) goto Label_2286;
}


void func_2786(int var_60_int, string var_61_string)
{
	int var_63_int;
	@GetInvItemByName(var_63_int, var_61_string);
	var_63_int = var_60_int;
}


void func_1763(float var_497_float, object var_498_object, float var_499_float, int var_500_int)
{
	int var_510_int; int var_512_int;
	object var_517_object;
	var_498_object = var_517_object;
	bool var_516_bool;
	func_1751(var_516_bool, var_517_object, "health");
	if(!var_516_bool) //@nz
		var_497_float = 0.0;
	bool var_520_bool; object var_521_object;
	func_1751(var_520_bool, var_521_object, "armor");
	if(!var_520_bool) //@nz
		var_510_int = 0;
	else
		var_521_object->GetProperty("armor", var_510_int);
	string var_525_string; int var_526_int;
	var_500_int = var_526_int;
	func_1717(var_525_string, var_526_int);
	string var_511_string = "armor_" + var_525_string;
	bool var_531_bool; object var_532_object; string var_533_string;
	var_498_object = var_532_object;
	func_1751(var_531_bool, var_532_object, var_533_string);
	if(!var_531_bool) //@nz
		var_512_int = 0;
	else
		var_498_object->GetProperty(var_533_string, var_512_int);

	float var_535_float;
	func_2323(var_535_float, ((var_510_int + var_512_int) / 100.0), (float)1);
	float var_513_float;
	var_535_float = var_513_float;
	float var_514_float;
	var_498_object->GetProperty("health", var_514_float);
	float var_515_float = var_499_float * (1 - var_513_float);
	float var_545_float;
	func_2330(var_545_float, (var_514_float - var_515_float), (float)0, (float)1);
	var_498_object->SetProperty("health", var_545_float);
	bool var_551_bool; object var_552_object;
	var_498_object = var_552_object;
	func_1746(var_551_bool, var_552_object);
	if(var_551_bool != 0) {
		float var_553_float = -var_515_float;
		func_2352(var_553_float);
	}
	var_515_float = var_497_float;
	
}


void func_2791(bool var_26_bool, object var_27_object, bool var_28_bool)
{
	bool var_31_bool; object var_32_object;
	func_1751(var_31_bool, var_32_object, "class");
	if(!var_31_bool) { //@nz
		var_26_bool = false;
		return 2;
	}
	string var_30_string;
	var_32_object->GetProperty("class", var_30_string);
	bool var_42_bool = true;
	bool var_43_bool = true;
	bool var_44_bool = true;
	bool var_45_bool = true;
	bool var_46_bool = true;
	bool var_47_bool = true;
	bool var_48_bool = true;
	bool var_49_bool = true;
	bool var_50_bool = true;
	bool var_51_bool = true;
	var_53_bool = var_30_string == "patrol";
	if(var_53_bool != 1) {
		var_55_bool = var_30_string == "sanitar";
		if(var_55_bool != 1)
			var_51_bool = false;
	}
	if(var_51_bool != 1) {
		var_57_bool = var_30_string == "soldier";
		if(var_57_bool != 1)
			var_50_bool = false;
	}
	if(var_50_bool != 1) {
		var_59_bool = var_30_string == "woman";
		if(var_59_bool != 1)
			var_49_bool = false;
	}
	if(var_49_bool != 1) {
		var_61_bool = var_30_string == "wasted_girl";
		if(var_61_bool != 1)
			var_48_bool = false;
	}
	if(var_48_bool != 1) {
		var_63_bool = var_30_string == "vaxxabitka";
		if(var_63_bool != 1)
			var_47_bool = false;
	}
	if(var_47_bool != 1) {
		var_65_bool = var_30_string == "vaxxabit";
		if(var_65_bool != 1)
			var_46_bool = false;
	}
	if(var_46_bool != 1) {
		var_67_bool = var_30_string == "little_girl";
		if(var_67_bool != 1)
			var_45_bool = false;
	}
	if(var_45_bool != 1) {
		var_69_bool = var_30_string == "girl";
		if(var_69_bool != 1)
			var_44_bool = false;
	}
	if(var_44_bool != 1) {
		var_71_bool = var_30_string == "dohodyaga";
		if(var_71_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 1) {
		var_73_bool = var_30_string == "nudegirl";
		if(var_73_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 0) {
		var_26_bool = true;
		return 2;
	}
	if(var_28_bool != 0) {
		var_26_bool = false;
		return 2;
	}
	var_26_bool = true;
	bool var_75_bool = true;
	bool var_76_bool = true;
	bool var_77_bool = true;
	bool var_78_bool = true;
	bool var_79_bool = true;
	var_81_bool = var_30_string == "worker";
	if(var_81_bool != 1) {
		var_83_bool = var_30_string == "butcher";
		if(var_83_bool != 1)
			var_79_bool = false;
	}
	if(var_79_bool != 1) {
		var_85_bool = var_30_string == "boy";
		if(var_85_bool != 1)
			var_78_bool = false;
	}
	if(var_78_bool != 1) {
		var_87_bool = var_30_string == "unosha";
		if(var_87_bool != 1)
			var_77_bool = false;
	}
	if(var_77_bool != 1) {
		var_89_bool = var_30_string == "wasted_male";
		if(var_89_bool != 1)
			var_76_bool = false;
	}
	if(var_76_bool != 1) {
		var_91_bool = var_30_string == "alkash";
		if(var_91_bool != 1)
			var_75_bool = false;
	}
	if(var_75_bool != 1) {
		var_93_bool = var_30_string == "morlok";
		if(var_93_bool != 1)
			var_26_bool = false;
	}
}


void func_2307(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_2313(cvector var_49_cvector, cvector var_50_cvector)
{
	float var_58_float = sqrt(var_50_cvector | var_50_cvector);
	if(var_58_float < 0.000001)
		var_49_cvector = [0.0, 0.0, 0.0];
	var_49_cvector = var_50_cvector / var_58_float;
}


// @pe
void func_2323(float var_535_float, float var_536_float, float var_537_float)
{
	if(var_536_float < var_537_float)
		var_536_float = var_535_float;
	else
		var_537_float = var_535_float;
	
}


// @pe
void func_2330(float var_545_float, float var_546_float, float var_547_float, float var_548_float)
{
	if(var_546_float < var_547_float) {
		var_547_float = var_545_float;
		return 0;
	}
	if(var_546_float > var_548_float) {
		var_548_float = var_545_float;
		return 0;
	}
	var_546_float = var_545_float;
}


void func_2341(bool var_42_bool, int var_43_int, int var_44_int)
{
	int var_46_int;
	@irand(var_46_int, var_44_int);
	var_42_bool = var_46_int < var_43_int;
}


// @pe
void func_810(bool var_0_bool, object var_1_object, int var_25_int)
{
	if(var_25_int != 0)
		return 0;
	bool var_28_bool;
	func_848(var_28_bool, var_1_object);
	if(!var_28_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2346(object var_18_object)
{
	object var_20_object;
	@CreateObjectSet(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_1836(bool var_45_bool, object var_46_object)
{
	bool var_48_bool;
	var_46_object->IsDead(var_48_bool);
	var_48_bool = var_45_bool;
}


void func_1327(bool var_588_bool, float var_589_float)
{
	float var_592_float; bool var_593_bool;
	@rand(var_592_float);
	if(var_592_float < var_589_float) {

		for(;;) {
			@IsAnimationPlaying(var_593_bool);
			if(!var_593_bool) { //@nz
			} else {
				bool var_596_bool;
				func_1425(var_596_bool);
				if(var_596_bool != 0) {
					var_588_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_588_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_1529(var_593_bool);
}


void func_2352(float var_553_float)
{
	object var_555_object;
	@CreateFloatVector(var_555_object);
	var_555_object->add(var_553_float);
	if(var_553_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_555_object);
}
EMIT "Stack[-1] = 0";


void func_1841(bool var_34_bool, object var_35_object)
{
	if(var_35_object == null) {
		var_34_bool = false;
		return 4;
	}
	bool var_41_bool = false;
	var_44_bool = IsFuncExist(var_35_object, "IsDead", 1);
	if(var_44_bool != 0) {
		bool var_45_bool; object var_46_object;
		var_35_object = var_46_object;
		func_1836(var_45_bool, var_46_object);
		if(var_45_bool != 0)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		var_34_bool = false;
		return 4;
	}
	object var_38_object;
	@GetScene(var_38_object);
	if(var_38_object == null) {
		var_34_bool = false;
		return 4;
	}
	object var_39_object;
	var_35_object->GetScene(var_39_object);
	if(var_38_object != var_39_object) {
		var_34_bool = false;
		return 4;
	}
	var_34_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_832(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2369(int var_28_int)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	var_28_int = 1 + (var_30_float / 24);
}


void func_2378(object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	if(var_22_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1354(bool var_0_bool, bool var_385_bool, float var_386_float)
{
	bool var_392_bool; cvector var_393_cvector; cvector var_394_cvector; cvector var_395_cvector; float var_396_float;
	
	for(;;) {
		@IsAnimationPlaying(var_392_bool);
		if(!var_392_bool) //@nz
			break;
		bool var_398_bool;
		func_1425(var_398_bool);
		if(var_398_bool != 0) {
			var_385_bool = true;
			return 10;
		}
		bool var_441_bool;
		func_1877(var_441_bool, var_0_bool);
		if(!var_441_bool) { //@nz
			var_385_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_393_cvector); //@t
		@GetPFPosition(var_394_cvector);
		var_395_cvector = var_393_cvector - var_394_cvector;
		var_396_float = var_395_cvector | var_395_cvector;
		if(var_396_float < (var_386_float * var_386_float)) {
			bool var_446_bool; float var_447_float;
			var_386_float = var_447_float;
			func_1190(var_395_cvector, var_396_float, var_446_bool, var_447_float);
			var_385_bool = true;
			return 10;
		}
		@sync();
	}
	func_1529(var_396_float);
	var_385_bool = false;
}


// @pe
void func_848(bool var_28_bool, object var_29_object)
{
	object var_31_object;
	var_29_object = var_31_object;
	bool var_30_bool;
	func_1877(var_30_bool, var_31_object);
	var_30_bool = var_28_bool;
}


void func_2387(void)
{
	object var_459_object;
	@GetScene(var_459_object);
	object var_461_object;
	func_2307(var_461_object);
	@BroadcastMessage("battle", var_461_object, var_459_object);
}
EMIT "Stack[-1] = 0";


void func_1877(bool var_30_bool, object var_31_object)
{
	object var_35_object;
	var_31_object = var_35_object;
	bool var_34_bool;
	func_1841(var_34_bool, var_35_object);
	if(!var_34_bool) { //@nz
		var_30_bool = false;
		return 2;
	}
	bool var_52_bool; object var_53_object;
	func_1751(var_52_bool, var_53_object, "noaccess");
	if(!var_52_bool) { //@nz
		var_30_bool = true;
		return 2;
	}
	int var_33_int;
	var_53_object->GetProperty("noaccess", var_33_int);
	var_30_bool = var_33_int == 0;
}


void func_342(bool var_0_bool, object var_1_object)
{
	float var_85_float; cvector var_86_cvector; cvector var_87_cvector; bool var_88_bool; object var_89_object; bool var_90_bool;
	@rand(var_85_float, 0.5);
	@Sleep(var_85_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_354:
				@GetPosition(var_87_cvector);
				float var_94_float;
				func_401(var_94_float);
				@GetRandomPFPointInCircle(var_86_cvector, var_87_cvector, var_94_float, var_88_bool);
				if(var_88_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_354;
			}
				var_1_object = false;
		}
		}
		goto Label_370;

	Label_370:
		object var_98_object; cvector var_99_cvector;
		var_86_cvector = var_99_cvector;
		func_431(var_98_object, var_99_cvector);
		var_98_object = var_89_object;
		if(var_89_object != null) {
			@RotatePath(var_89_object, var_90_bool);
			if(var_90_bool != 0) {
				bool var_104_bool;
				func_429(var_104_bool);
				@FollowPath(var_89_object, var_104_bool, var_90_bool);
				var_89_object = null;
				if(var_90_bool != 0) {
					TaskCall(4);
					func_503();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_89_object = null;
	}
	
}


void func_855(string var_297_string)
{
	var_297_string = "walk";
}


void func_857(string var_298_string)
{
	var_298_string = "run";
}


// @pe
void func_859(object var_153_object, bool var_154_bool)
{
	object var_161_object; bool var_162_bool;
	func_887(var_158_bool, var_159_float, var_160_int, var_161_object, var_162_bool, var_161_object, var_162_bool, 180.0);
}


void func_2398(string var_130_string, int var_131_int)
{
	string var_133_string = "idle";
	if(var_131_int != 0)
		var_133_string += var_131_int;
	var_133_string = var_130_string;
}


// @pe
void func_867(float var_494_float)
{
	var_494_float = 0.1;
}


void func_2405(int var_124_int)
{
	int var_127_int; bool var_128_bool;
	var_127_int = 0;
	
	for(;;) {
		string var_130_string; int var_131_int;
		var_127_int = var_131_int;
		func_2398(var_130_string, var_131_int);
		@HasAnimation(var_128_bool, "all", var_130_string);
		if(!var_128_bool) //@nz
			break;
		var_127_int += 1;
	}
	var_127_int = var_124_int;
}


// @pe
void func_870(int var_501_int)
{
	var_501_int = 0;
}


void func_1901(object var_34_object)
{
	string var_48_string;
	if(var_34_object == null)
		return 14;
	bool var_42_bool;
	@IsDead(var_42_bool);
	if(var_42_bool != 0)
		return 14;
	int var_43_int;
	@GetSecondaryAnimationType(var_43_int);
	if(var_43_int < 0)
		return 14;
	cvector var_44_cvector;
	var_34_object->GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	@GetDirection(var_46_cvector);
	cvector var_47_cvector = var_45_cvector - var_44_cvector;
	var_53_float = GetByIndex(var_47_cvector, 0);
	var_54_float = GetByIndex(var_46_cvector, 0);
	var_56_float = GetByIndex(var_47_cvector, 2);
	var_57_float = GetByIndex(var_46_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_48_string = "fhit";
	else
		var_48_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_48_string + "1"), (var_48_string + "2"), -10);
	
}


void func_2927(void)
{
	var_17_object = GlobalVars[0];
	object var_18_object;
	func_2346(var_18_object);
	var_18_object = var_17_object;
	GlobalVars[0] = var_17_object;
}


void func_1397(bool var_0_bool, bool var_400_bool)
{
	cvector var_406_cvector; cvector var_407_cvector;
	bool var_411_bool;
	func_1877(var_411_bool, var_0_bool);
	if(!var_411_bool) { //@nz
		var_400_bool = false;
		return 10;
	}
	bool var_414_bool;
	float var_410_float;
	func_1486(var_410_float, var_414_bool);
	if(var_414_bool != 0) {
		var_0_bool->GetPFPosition(var_406_cvector); //@t
		@GetPFPosition(var_407_cvector);
		var_0_bool->GetAttackDistance(var_410_float); //@t
		var_400_bool = ((var_406_cvector - var_407_cvector) | (var_406_cvector - var_407_cvector)) <= ((var_410_float + 50) * (var_410_float + 50));
		return 10;
	}
	var_400_bool = false;
}


void func_2422(int var_144_int)
{
	int var_146_int;
	@GetVariable("branch", var_146_int);
	if(var_146_int == 0) {
		var_144_int = 1;
		return 2;
	EMIT "GOTO 0x985";
	}
	if(var_146_int == 1) {
		var_144_int = 2;
		return 2;
	}
	var_144_int = 3;
}


void func_887(bool var_0_bool, object var_3_object, bool var_5_bool, object var_161_object, bool var_162_bool, float var_163_float, bool var_236_bool, bool var_326_bool)
{
	float var_175_float; cvector var_176_cvector; cvector var_177_cvector; bool var_179_bool; float var_182_float; cvector var_183_cvector; bool var_184_bool; float var_185_float;
	func_1116(var_183_cvector, var_184_bool, var_185_float);
	var_5_bool = 0;
	var_210_bool = IsFuncExist(var_161_object, "@GetAttackDistance", 1);
	if(var_210_bool != 0) {
		var_161_object->GetAttackDistance(var_175_float);
		var_175_float += 50;
	} else {
						var_163_float = var_175_float;
	}
	if(var_175_float >= 150)
		var_175_float = 150;
	var_3_object = false;
	var_0_bool = var_161_object;
	bool var_178_bool;
	@IsPlayerActor(var_0_bool, var_178_bool);
	if(var_178_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_216_object;
		func_2307(var_216_object);
		@SendPlayerEnemy(var_161_object, var_216_object);
	}
	if(var_162_bool != 0)
		var_179_bool = false;
	else
		var_179_bool = true;

	
Label_927:
	for(;;) {
		bool var_219_bool = false;
		bool var_220_bool;
		func_1877(var_220_bool, var_0_bool);
		if(var_220_bool != 0) {
			if(!var_3_object) //@nz
				var_219_bool = true;
		}
		if(var_219_bool != 0) {
			func_1529(var_185_float);
			var_0_bool->GetPFPosition(var_176_cvector); //@t
			@GetPFPosition(var_177_cvector);
			var_182_float = (var_176_cvector - var_177_cvector) | (var_176_cvector - var_177_cvector);
			if(var_182_float >= ((300.0 + var_175_float) * (300.0 + var_175_float))) {
				bool var_230_bool; float var_232_float;
				var_175_float = var_232_float;
				TaskCall(5);
				func_603(var_238_bool, var_230_bool, var_0_bool, var_232_float, 3000.0, true, false);
				TaskReturn();
				if(!var_236_bool) { //@nz
				} else {
					var_179_bool = false;
			} else {
			if(var_182_float >= (var_163_float * var_163_float)) {
				var_0_bool->GetPFPosition(var_183_cvector); //@t
				@CanReachByPF(var_184_bool, var_183_cvector);
				if(!var_184_bool) { //@nz
					bool var_320_bool; float var_322_float;
					var_175_float = var_322_float;
					TaskCall(5);
					func_603(var_328_bool, var_320_bool, var_0_bool, var_322_float, 3000.0, true, false);
					TaskReturn();
					if(!var_326_bool) { //@nz
						goto Label_1099;
					}
					var_179_bool = false;
					goto Label_927;
				}
				if(!var_179_bool) { //@nz
					func_2027(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_1529(var_185_float);
					@StopAsync();
					var_179_bool = true;
					bool var_342_bool;
					func_1877(var_342_bool, var_0_bool);
					if(!var_342_bool) { //@nz
						goto Label_1099;
					}
				}
				@rand(var_185_float);
				bool var_345_bool;
				var_347_bool = var_185_float < 0.6;
				if(var_347_bool != 1) {
					bool var_348_bool;
					func_1486(true, var_348_bool);
					if(var_348_bool != 1)
						var_345_bool = false;
				}
				if(var_345_bool != 0) {
					@Face(var_0_bool);
					func_1536();
					@PlayAnimation("all", "attack_stay");
					bool var_385_bool; float var_386_float;
					func_1354(var_185_float, var_385_bool, var_386_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_1529(var_185_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_607_bool;
					func_1486(var_185_float, var_607_bool);
					var_608_bool = !var_607_bool; //@nz
					if(var_608_bool == 0) goto Label_1089;
					bool var_609_bool;
					func_1877(var_609_bool, var_0_bool);
					if(!var_609_bool) { //@nz
						goto Label_1099;
					}
					var_0_bool->GetPFPosition(var_176_cvector); //@t
					@GetPFPosition(var_177_cvector);
					if(!(((var_176_cvector - var_177_cvector) | (var_176_cvector - var_177_cvector)) < (var_386_float * var_386_float))) goto Label_1089;
					bool var_614_bool; float var_615_float;
					var_163_float = var_615_float;
					func_1190(var_184_bool, var_185_float, var_614_bool, var_615_float);
					var_616_bool = !var_614_bool; //@nz
					if(var_616_bool == 0) goto Label_1089;
					goto Label_1099;
			}
				bool var_617_bool; float var_618_float;
				var_163_float = var_618_float;
				func_1190(var_184_bool, var_185_float, var_617_bool, var_618_float);
				if(!var_617_bool) { //@nz
					goto Label_1099;
				}
				var_179_bool = true;

			}
		Label_1089:
			goto Label_1098;
			}
			Label_1098:
			}
		}
	Label_1099:
		@WaitForAnimEnd();
		if(var_3_object != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_178_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


// @pe
void func_2934(object var_215_object)
{
	object var_217_object;
	var_215_object = var_217_object;
	bool var_216_bool;
	func_2130(var_216_bool, var_217_object);
	if(!var_216_bool) //@nz
		return 0;
	object var_249_object;
	var_215_object = var_249_object;
	TaskCall(0);
	func_0(var_249_object);
	TaskReturn();
	object var_256_object;
	var_215_object = var_256_object;
	func_2186();
}


void func_2439(int var_144_int)
{
	int var_146_int;
	@GetVariable("branch", var_146_int);
	var_146_int = var_144_int;
}


// @pe
void func_2953(bool var_18_bool, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_3129(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
}


// @pe
void func_2445(object var_21_object)
{
	int var_22_int;
	func_2439(var_22_int);
	if(var_22_int == 1)
		@WorkWithCorpse(var_21_object);
	else
		@Barter(var_21_object);
	
}


// @pe
void func_2960(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	func_2979(var_83_object);
}


void func_401(float var_94_float)
{
	float var_96_float;
	@GetCameraFarDistance(var_96_float);
	var_96_float = var_94_float;
}


void func_1425(bool var_398_bool)
{
	bool var_399_bool = false;
	bool var_400_bool;
	func_1397(var_399_bool, var_400_bool);
	if(var_400_bool != 0) {
		bool var_417_bool;
		func_1441(var_398_bool, var_399_bool, var_417_bool);
		if(var_417_bool != 0)
			var_399_bool = true;
	}
	if(var_399_bool != 0) {
		var_398_bool = true;
		return 0;
	}
	var_398_bool = false;
}


// @pe
void func_2966(bool var_18_bool, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	bool var_20_bool;
	func_3129(var_20_bool, var_21_object);
	var_20_bool = var_18_bool;
}


void func_1945(object var_21_object, int var_22_int, float var_23_float)
{
	cvector var_33_cvector; object var_34_object; int var_35_int; bool var_36_bool; cvector var_37_cvector; cvector var_38_cvector;
	bool var_42_bool = false;
	bool var_43_bool = false;
	if(var_21_object != 0) {
		if(var_22_int != 4)
			var_43_bool = true;
	}
	if(var_43_bool != 0) {
		if(var_22_int != 5)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		cvector var_49_cvector; cvector var_50_cvector;
		cvector var_51_cvector; object var_52_object;
		var_21_object = var_52_object;
		func_1731(var_51_cvector, var_52_object);
		var_51_cvector = var_50_cvector;
		func_2313(var_49_cvector, var_50_cvector);
		var_49_cvector = var_33_cvector;
		@CreateVectorVector(var_34_object);
		var_35_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_35_int), var_36_bool, var_37_cvector, var_38_cvector);
			if(!var_36_bool) { //@nz
				break;
			Label_2007:
				var_34_object = null;
	}
			object var_111_object;
			var_21_object = var_111_object;
			func_1901(var_111_object);
		}
		if((var_38_cvector | var_33_cvector) >= 0.70710677)
			var_34_object->add(var_37_cvector);
		var_35_int += 1;
	}
	int var_39_int;
	var_34_object->size(var_39_int);
	if(var_39_int == 0) goto Label_2007;
	int var_40_int;
	@irand(var_40_int, var_39_int);
	cvector var_41_cvector;
	var_34_object->get(var_41_cvector, var_40_int);
	object var_66_object; int var_67_int; float var_68_float; cvector var_69_cvector; cvector var_70_cvector;
	var_21_object = var_66_object;
	var_22_int = var_67_int;
	var_23_float = var_68_float;
	var_41_cvector = var_69_cvector;
	var_70_cvector = -var_33_cvector;
	func_2013(var_68_float, var_69_cvector, var_70_cvector);
}


void func_2458(int var_45_int, int var_46_int)
{
	if(var_45_int > var_46_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_52_int = 0;
	if(var_45_int != var_46_int) {
		@irand(var_52_int, (var_46_int - var_45_int));
	} else if(var_45_int == 0) {
		return 4;
	}
	var_52_int += var_45_int;
	if(var_52_int == 0)
		return 4;
	int var_60_int;
	func_2786(var_60_int, "Money");
	bool var_53_bool;
	@AddItem(var_53_bool, var_60_int, 0, var_52_int);
	
}


void func_413(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_2973(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	func_2979(var_83_object);
}


void func_1441(bool var_0_bool, string var_4_string, bool var_417_bool)
{
	object var_423_object; float var_425_float; cvector var_426_cvector; cvector var_427_cvector;
	@GetScene(var_423_object);
	bool var_424_bool = false;
	
	for(;;) {
		cvector var_428_cvector;
		func_1731(var_428_cvector, var_0_bool);
		var_434_int = -var_428_cvector;
		@FindDirLength(var_425_float, var_434_int, var_4_string);
		if(var_425_float < var_4_string) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_426_cvector); //@t
				@GetPFPosition(var_427_cvector);
				@WaitForAnimEnd();
				func_1529(var_427_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_424_bool = true;
				bool var_439_bool;
				func_1397(var_427_cvector, var_439_bool);
				var_440_bool = !var_439_bool; //@nz
				if(var_440_bool == 0) goto Label_1482;
		}
		for(;;) {
			var_424_bool = var_417_bool;

		}

	Label_1482:
	}
}
EMIT "Stack[-5] = 0";


// @pe
void func_2979(object var_83_object)
{
	object var_84_object;
	var_83_object = var_84_object;
	TaskCall(6);
	func_859(var_84_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_429(bool var_104_bool)
{
	var_104_bool = false;
}


void func_2990(object var_18_object)
{
	if(var_18_object == null) {
	}
	var_22_object = GlobalVars[0];
	bool var_20_bool;
	var_22_object->in(var_20_bool, var_18_object);
	if(!var_20_bool) { //@nz
		var_24_object = GlobalVars[0];
		var_24_object->add(var_18_object);
	}
	bool var_25_bool; object var_26_object;
	func_1746(var_25_bool, var_26_object);
	if(var_25_bool != 0) {
		object var_29_object;
		func_2307(var_29_object);
		@ReportReputationChange(var_26_object, var_29_object, -0.07);
	}
}


void func_431(object var_98_object, cvector var_99_cvector)
{
	object var_101_object;
	@FindShiftedPathTo(var_101_object, var_99_cvector);
	var_101_object = var_98_object;
}
EMIT "Stack[-1] = 0";


void func_2489(string var_150_string)
{
	object var_154_object;
	@CreateInvItem(var_154_object);
	var_154_object->SetItemName(var_150_string);
	var_154_object->SetProperty("Organ", 1);
	int var_155_int;
	var_154_object->GetItemID(var_155_int);
	bool var_156_bool;
	@AddItem(var_156_bool, var_154_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_3014(object var_151_object)
{
	object var_152_object;
	var_151_object = var_152_object;
	func_2990(var_152_object);
	object var_153_object;
	var_151_object = var_153_object;
	TaskCall(6);
	func_859(var_153_object, true);
	TaskReturn();
	@ResetAAS();
}


void func_2506(void)
{
	int var_144_int;
	func_2439(var_144_int);
	if(var_144_int != 1) {
	}
	func_2489("liver");
	func_2489("kidney");
	func_2489("heart");
	func_2489("blood");
}


void func_1486(bool var_0_bool, bool var_348_bool)
{
	bool var_350_bool;
	var_353_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_353_bool != 0) {
		var_0_bool->IsAttacking(var_350_bool); //@t
		var_350_bool = var_348_bool;
	}
	var_348_bool = false;
}


// @pe
void func_3029(object var_18_object)
{
	bool var_19_bool; object var_20_object;
	func_1746(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		object var_23_object;
		func_2307(var_23_object);
		@ReportReputationChange(var_20_object, var_23_object, -0.13, true);
	}
	object var_28_object;
	var_18_object = var_28_object;
	TaskCall(7);
	func_1549(var_28_object);
	TaskReturn();
}


void func_1497(object var_2_object, bool var_5_bool)
{
	int var_468_int;
	if(!var_2_object) //@nz
		return 4;
	if(var_5_bool != 0) {
		if((var_5_bool + -1) > 0)
			return 4;
	}
	float var_467_float;
	@rand(var_467_float);
	float var_474_float;
	func_1547(var_474_float);
	if(var_467_float < var_474_float) {
		@irand(var_468_int, var_2_object);
		@Speak("attack" + (var_468_int + 1));
		int var_479_int;
		func_1545(var_479_int);
		var_5_bool = var_479_int;
	}
}


void func_2013(object var_23_object, cvector var_26_cvector, cvector var_27_cvector)
{
	object var_30_object;
	@GetScene(var_30_object);
	object var_31_object;
	@AddActorByType(var_31_object, "scripted", var_30_object, var_26_cvector, var_27_cvector, "blood_dir.xml");
	object var_34_object;
	var_23_object = var_34_object;
	func_1901(var_34_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_2530(void)
{
	@ClearSubContainer(0);
	int var_39_int;
	func_2369(var_39_int);
	int var_37_int;
	var_39_int = var_37_int;
	func_2458(0, (100 + (var_37_int * 100)));
	func_2240("tourniquet", 1, 7);
	func_2240("bandage", 1, 7);
	func_2240("packet", 1, 10);
	func_2240("bottle_water", 1, 3);
	func_2251("rusk", 1, 3, 4);
	func_2240("hook", 1, 20);
	func_2240("watch", 1, 20);
	bool var_107_bool = false;
	if(var_37_int >= 3) {
		if(var_37_int < 6)
			var_107_bool = true;
	}
	if(var_107_bool != 0)
		func_2251("alpha_pills", 1, 2, 3);
	if(var_37_int >= 4)
		func_2251("beta_pills", 1, 4, 3);
	if(var_37_int >= 6) {
		func_2251("alpha_pills", 1, 2, 8);
		func_2251("gamma_pills", 1, 8, 3);
	}
	if(var_37_int >= 8) {
		func_2240("revolver_ammo", 1, 3);
		func_2240("rifle_ammo", 1, 3);
	}
	int var_140_int;
	func_2786(var_140_int, "patrol_mark");
	bool var_36_bool;
	@AddItem(var_36_bool, var_140_int, 0, 1);
}


void func_2027(object var_331_object)
{
	cvector var_335_cvector;
	var_331_object->GetPosition(var_335_cvector);
	cvector var_336_cvector;
	@GetPosition(var_336_cvector);
	cvector var_337_cvector = var_335_cvector - var_336_cvector;
	var_338_float = GetByIndex(var_337_cvector, 0);
	var_339_float = GetByIndex(var_337_cvector, 2);
	@RotateAsync(var_338_float, var_339_float);
}


void func_2038(bool var_120_bool)
{
	bool var_122_bool;
	@IsLoaded(var_122_bool);
	var_122_bool = var_120_bool;
}


void func_503(void)
{
	int var_115_int; int var_116_int; bool var_117_bool; float var_118_float; bool var_119_bool;
	@WaitForAnimEnd();
	bool var_120_bool;
	func_2038(var_120_bool);
	if(!var_120_bool) //@nz
		return 14;
	int var_124_int;
	func_2405(var_124_int);
	int var_113_int;
	var_124_int = var_113_int;
	int var_114_int = 0;
	
	for(;;) {
		bool var_137_bool = false;
		if(var_114_int < 5) {
			bool var_140_bool;
			func_2038(var_140_bool);
			if(var_140_bool != 0)
				var_137_bool = true;
		}
		if(var_137_bool != 0) {
			@irand(var_115_int, 3);
			if(var_115_int == 0) {
				if(var_113_int == 0) goto Label_550;
				@irand(var_116_int, var_113_int);
				string var_146_string; int var_147_int;
				var_116_int = var_147_int;
				func_2398(var_146_string, var_147_int);
				@PlayAnimation("all", var_146_string);
				@WaitForAnimEnd(var_117_bool);
				if(!var_117_bool) { //@nz
				} else {
			} else {
			if(var_115_int == 1) {
				@rand(var_118_float, 4);
				@Sleep((var_118_float + 1), var_119_bool);
				if(!var_119_bool) { //@nz
					goto Label_579;
				}
			} else if(var_114_int != 0) {
				goto Label_579;
			}
			}
					bool var_149_bool;
					func_582(var_149_bool);
					var_150_bool = !var_149_bool; //@nz
					if(var_150_bool == 0) goto Label_574;
			}
		}
	Label_579:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_574:
		@ResetAAS();
		var_114_int += 1;
	}
	
}


void func_1529(bool var_0_bool)
{
	func_2378(var_0_bool);
}


void func_2043(bool var_92_bool, object var_93_object, float var_94_float)
{
	cvector var_105_cvector; bool var_112_bool;
	var_93_object->GetPosition(var_105_cvector);
	float var_104_float;
	var_93_object->GetEyesHeight(var_104_float);
	var_113_float = GetByIndex(var_105_cvector, 1);
	SetByIndex(var_105_cvector, 1) = (var_113_float + var_104_float);
	cvector var_106_cvector;
	@GetPosition(var_106_cvector);
	@GetEyesHeight(var_104_float);
	var_114_float = GetByIndex(var_106_cvector, 1);
	SetByIndex(var_106_cvector, 1) = (var_114_float + var_104_float);
	cvector var_107_cvector = var_105_cvector - var_106_cvector;
	var_115_float = GetByIndex(var_107_cvector, 1);
	SetByIndex(var_107_cvector, 1) = (float)0;
	var_117_float = sqrt(var_107_cvector | var_107_cvector);
	var_107_cvector /= var_117_float;
	cvector var_108_cvector = -var_107_cvector;
	cvector var_119_cvector;
	func_2313(var_119_cvector, (var_108_cvector ^ [0.0, 1.0, 0.0]));
	cvector var_109_cvector = ((var_107_cvector * var_94_float) + (var_119_cvector * 25)) - [0.0, 10.0, 0.0];
	bool var_111_bool;
	@IsOverrideActive(var_111_bool);
	if(var_111_bool != 0)
		var_92_bool = false;
	@StopWorld();
	@CameraTransit((var_106_cvector + var_109_cvector), var_108_cvector, true);
	var_133_float = GetByIndex(var_109_cvector, 0);
	var_134_float = GetByIndex(var_109_cvector, 2);
	@Rotate(var_133_float, var_134_float);
	bool var_135_bool;
	func_3127(var_135_bool);
	if(var_135_bool != 0) {
	} else {
		@HasAnimationTrack(var_112_bool, "head");
		if(var_112_bool == 0) goto Label_2106;
		@LookAsyncCamera("head");
	}
Label_2106:
	@CameraWaitForPlayFinish();
	@ResumeWorld();
	var_92_bool = true;
	
}


void func_1534(int var_562_int)
{
	var_562_int = 0;
}


