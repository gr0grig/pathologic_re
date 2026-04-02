// @GLOBALS: 0:object:

task task_0
{
	// @pe
	void OnDeath(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		func_24();
		object var_13_object;
		var_11_cvector = var_13_object;
		func_1842();
	}

	// @pe
	void OnHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@KillTimer(100);
			@Face(actor);
		}
	}

	// @pe
	void OnStopHear(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor) {
			@SetTimer(100, 3.0);
			func_1506(actor);
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1356(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2014(var_130_object);
		}
		func_24();
		object var_146_object;
		var_100_object = var_146_object;
		func_2038(var_146_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_cvector = var_16_object;
		bool var_17_bool;
		var_13_cvector = var_17_bool;
		bool var_14_bool;
		func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_object = var_100_object;
			func_62();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		object var_13_object;
		var_11_cvector = var_13_object;
		bool var_12_bool;
		func_2158(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_24();
			object var_132_object;
			var_11_cvector = var_132_object;
			func_2180(var_132_object);
		}
	}

	// @pe
	void OnTimer(object var_0_object, int var_1_int, object var_2_object, bool var_3_bool, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector != 100) {
		}
		@KillTimer(100);
		@StopGroup0();
	}

}


task task_1
{
	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1356(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2014(var_130_object);
		}
		func_274();
		object var_145_object;
		var_100_object = var_145_object;
		func_2038(var_145_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_cvector = var_16_object;
		bool var_17_bool;
		var_13_cvector = var_17_bool;
		bool var_14_bool;
		func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_object = var_100_object;
			func_241();
		}
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		func_274();
		object var_12_object;
		var_11_cvector = var_12_object;
		func_1842();
	}

}


task task_2
{
	// @pe
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_bool != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0)
			func_1506(actor);
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool = false;
		if(var_2_bool != 0) {
			if(var_11_cvector == actor)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			@Trace("@Stop hunt");
			@StopAnimation();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1356(var_101_bool, var_102_object);
		if(!var_101_bool) //@nz
			return 0;
		object var_130_object;
		var_100_object = var_130_object;
		func_2014(var_130_object);
		if(var_100_object == actor) {
			var_1_object = null;
		} else {
			var_1_object = var_100_object;
			if(var_2_bool == 0) goto Label_617;
			@StopAnimation();
			@StopGroup0();
		}
	Label_617:
	
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, object var_11_object, cvector var_12_cvector, cvector var_13_cvector)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_cvector = var_16_object;
		bool var_17_bool;
		var_13_cvector = var_17_bool;
		bool var_14_bool;
		func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_object = var_100_object;
			func_594();
		}
	}

}


maintask task_3
{
	void init(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_13_bool;
		@IsPlayerActor(var_11_cvector, var_13_bool);
		if(var_13_bool != 0) {
			bool var_15_bool;
			func_2212(var_15_bool);
			if(var_15_bool != 0) {
				bool var_20_bool;
				func_1760(var_20_bool, "quest_d11_01", "soldier_attack");
			} else {
				object var_26_object;
				var_11_cvector = var_26_object;
				TaskCall(4);
				func_678(var_26_object);
				TaskReturn();
			}
		}
	
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool;
		func_1760(var_12_bool, "quest_d11_01", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, string var_6_string, object var_7_object, bool var_8_bool, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == "attack") {
			object var_14_object;
			object var_15_object;
			func_1218(var_15_object);
			var_15_object = var_14_object;
			TaskCall(6);
			func_846(var_14_object);
			TaskReturn();
		}
	}

}


task task_4
{
	// @pe
	void OnStopSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor)
			func_790(var_11_cvector);
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool;
		func_1760(var_12_bool, "quest_d11_01", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, string var_8_string, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == "attack") {
			object var_14_object;
			object var_15_object;
			func_1218(var_15_object);
			var_15_object = var_14_object;
			TaskCall(6);
			func_846(var_14_object);
			TaskReturn();
		}
	}

}


task task_5
{
	void OnUnload(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector)
	{
		@StopAnimation();
	}

	// @pe
	void OnStopSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == actor)
			@StopAnimation();
	}

	// @pe
	void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, cvector var_11_cvector)
	{
		bool var_12_bool;
		func_1760(var_12_bool, "quest_d11_01", "soldier_attack");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, string var_9_string, cvector var_10_cvector, cvector var_11_cvector)
	{
		if(var_11_cvector == "attack") {
			object var_14_object;
			object var_15_object;
			func_1218(var_15_object);
			var_15_object = var_14_object;
			TaskCall(6);
			func_846(var_14_object);
			TaskReturn();
		}
	}

}


task task_6
{
	void OnHear(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		bool var_13_bool;
		object var_15_object;
		var_11_object = var_15_object;
		bool var_14_bool;
		func_1356(var_14_bool, var_15_object);
		if(!var_14_bool) //@nz
			return 2;
		bool var_49_bool; object var_50_object;
		func_2078(var_49_bool, var_50_object);
		if(!var_49_bool) { //@nz
			var_128_object = GlobalVars[0];
			var_128_object->in(var_13_bool, var_50_object);
			if(!var_13_bool) //@nz
				return 2;
		}
		func_1029();
		object var_130_object;
		var_11_object = var_130_object;
		TaskCall(0);
		func_0(var_131_object, var_130_object);
		TaskReturn();
	}

	// @pe
		void OnAttacked(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, object var_12_object, bool var_13_bool, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1356(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2014(var_130_object);
		}
		func_1029();
		object var_145_object;
		var_100_object = var_145_object;
		func_2038(var_145_object);
		}

	// @pe
	void OnPlayerDamage(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_17_bool;
		var_13_bool = var_17_bool;
		bool var_14_bool;
		func_2186(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_object = var_100_object;
			func_898();
		}
	}

	// @pe
	void OnSee(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_2158(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1029();
			object var_131_object;
			var_11_object = var_131_object;
			func_2219(var_131_object);
		}
	}

}


task task_7
{
	void OnUse(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			object var_15_object;
			var_11_object = var_15_object;
			func_1798(var_15_object);
		}
	}

	// @pe
	void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, string var_12_string)
	{
	}

	// @pe
	void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
	{
	}

}


// @pe
void OnHit(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1424(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
{
	object var_17_object;
	var_11_object = var_17_object;
	int var_18_int;
	var_12_int = var_18_int;
	float var_19_float;
	var_13_float = var_19_float;
	cvector var_20_cvector;
	var_15_cvector = var_20_cvector;
	cvector var_21_cvector;
	var_16_cvector = var_21_cvector;
	func_1492(var_19_float, var_20_cvector, var_21_cvector);
}


void OnPropertyChange(object var_0_object, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(object actor, object var_1_object, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, object var_8_object, cvector var_9_cvector, cvector var_10_cvector, object var_11_object)
{
	bool var_12_bool; object var_13_object;
	func_1225(var_12_bool, var_13_object);
	if(var_12_bool != 0) {
		object var_16_object;
		func_1663(var_16_object);
		@ReportReputationChange(var_13_object, var_16_object, 0.05, true);
	}
	object var_21_object;
	var_11_object = var_21_object;
	func_2225(var_21_object);
}


void func_0(object var_0_object, object var_130_object)
{
	bool var_133_bool;
	@Face(var_130_object);
	
	for(;;) {
		@Sleep(0.5, var_133_bool);
		bool var_135_bool = true;
		var_136_bool = !var_133_bool; //@nz
		if(var_136_bool != 1) {
			bool var_137_bool;
			func_1356(var_137_bool, var_130_object);
			var_139_bool = !var_137_bool; //@nz
			if(var_139_bool != 1)
				var_135_bool = false;
		}
		if(var_135_bool != 0)
			break;
	}
	@StopAsync();
}


void func_1792(int var_16_int)
{
	int var_18_int;
	@GetVariable("branch", var_18_int);
	var_18_int = var_16_int;
}


void func_2049(object var_132_object)
{
	var_135_object = GlobalVars[0];
	bool var_134_bool;
	var_135_object->in(var_134_bool, var_132_object);
	if(var_134_bool != 0) {
		object var_137_object;
		var_132_object = var_137_object;
		func_2003(var_137_object, true);
	} else {
		object var_364_object;
		var_132_object = var_364_object;
		TaskCall(1);
		func_120(var_365_object, var_366_bool, var_364_object);
		TaskReturn();
		@ResetAAS();
	}
	
}


// @pe
void func_2180(object var_132_object)
{
	object var_133_object;
	var_132_object = var_133_object;
	func_2219(var_133_object);
}


void func_1029(void)
{
	@StopGroup0();
	@Stop();
}


// @pe
void func_1798(object var_15_object)
{
	int var_16_int;
	func_1792(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


// @pe
void func_1157(string var_55_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_56_string;
	var_55_string = var_56_string;
	func_1535(var_56_string);
	@PlayAnimation("all", var_55_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_55_string);
	@RemoveEnvelope();
}


void func_1669(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


void func_777(object var_0_object)
{
	float var_56_float;
	@GetEyesHeight(var_56_float);
	float var_57_float;
	var_0_object->GetEyesHeight(var_57_float); //@t
	cvector var_58_cvector = [0.0, 0.0, 0.0];
	var_59_float = GetByIndex(var_58_cvector, 1);
	SetByIndex(var_58_cvector, 1) = (var_57_float - var_56_float);
	@DirLookAsyncRel(var_0_object, "spine", var_58_cvector);
}


void func_2186(bool var_14_bool, object var_15_object, object var_16_object, bool var_17_bool)
{
	bool var_19_bool;
	object var_21_object;
	var_16_object = var_21_object;
	bool var_20_bool;
	func_1860(var_20_bool, var_21_object, !var_17_bool);
	if(var_20_bool != 0) {
		@CanSee(var_19_bool, var_15_object);
		bool var_88_bool = true;
		if(var_19_bool != 1) {
			float var_90_float; object var_91_object;
			var_15_object = var_91_object;
			func_1210(var_90_float, var_91_object);
			var_99_bool = var_90_float <= 490000.0;
			if(var_99_bool != 1)
				var_88_bool = false;
		}
		if(var_88_bool != 0)
			var_14_bool = true;
	}
	var_14_bool = false;
}


void func_1034(void)
{
}


// @pe
void func_1035(object var_31_object)
{
	object var_32_object;
	var_31_object = var_32_object;
	func_1041(var_32_object);
}


void func_1679(float var_315_float, cvector var_316_cvector, cvector var_317_cvector)
{
	var_315_float = (var_317_cvector - var_316_cvector) | (var_317_cvector - var_316_cvector);
}


void func_1424(object var_15_object, int var_16_int, float var_17_float)
{
	cvector var_27_cvector; object var_28_object; int var_29_int; bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	bool var_36_bool = false;
	bool var_37_bool = false;
	if(var_15_object != 0) {
		if(var_16_int != 4)
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		if(var_16_int != 5)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		cvector var_43_cvector; cvector var_44_cvector;
		cvector var_45_cvector; object var_46_object;
		var_15_object = var_46_object;
		func_1203(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1669(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1486:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1380(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1486;
	int var_34_int;
	@irand(var_34_int, var_33_int);
	cvector var_35_cvector;
	var_28_object->get(var_35_cvector, var_34_int);
	object var_60_object; int var_61_int; float var_62_float; cvector var_63_cvector; cvector var_64_cvector;
	var_15_object = var_60_object;
	var_16_int = var_61_int;
	var_17_float = var_62_float;
	var_35_cvector = var_63_cvector;
	var_64_cvector = -var_27_cvector;
	func_1492(var_62_float, var_63_cvector, var_64_cvector);
}


// @pe
void func_1041(object var_32_object)
{
	object var_33_object;
	var_32_object = var_33_object;
	func_1066(var_33_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_274(void)
{
	@StopAsync();
	@StopGroup0();
	@Stop();
}


// @pe
void func_1683(float var_290_float, float var_291_float, float var_292_float)
{
	if(var_291_float < var_292_float)
		var_291_float = var_290_float;
	else
		var_292_float = var_290_float;
	
}


// @pe
void func_2070(bool var_375_bool, object var_376_object)
{
	object var_378_object;
	var_376_object = var_378_object;
	float var_377_float;
	func_1210(var_377_float, var_378_object);
	var_375_bool = var_377_float <= 40000.0;
}


void func_790(object var_1_object)
{
	@StopGroup0();
	var_1_object = true;
}


void func_24(void)
{
	@StopAsync();
	@KillTimer(100);
	@StopGroup0();
}


void func_794(object var_0_object, bool var_29_bool, object var_30_object)
{
	func_1506(var_30_object);
	@PlayAnimation("all", "attack_on");
	bool var_33_bool;
	@WaitForAnimEnd(var_33_bool);
	if(!var_33_bool) //@nz
		var_29_bool = false;
	@LockAnimationEnd("all", "attack_on");
	var_29_bool = true;
}


// @pe
void func_1690(float var_300_float, float var_301_float, float var_302_float, float var_303_float)
{
	if(var_301_float < var_302_float) {
		var_302_float = var_300_float;
		return 0;
	}
	if(var_301_float > var_303_float) {
		var_303_float = var_300_float;
		return 0;
	}
	var_301_float = var_300_float;
}


void func_2078(bool var_53_bool, object var_54_object)
{
	float var_58_float; float var_60_float;
	object var_62_object;
	var_54_object = var_62_object;
	bool var_61_bool;
	func_1356(var_61_bool, var_62_object);
	if(!var_61_bool) { //@nz
		var_53_bool = false;
		return 6;
	}
	bool var_64_bool; object var_65_object;
	func_1225(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		var_65_object->GetProperty("reputation", var_58_float);
		var_53_bool = var_58_float < 0.33;
		return 6;
	}
	bool var_70_bool; object var_71_object;
	func_1230(var_70_bool, var_71_object, "class");
	if(!var_70_bool) { //@nz
		var_53_bool = false;
		return 6;
	}
	string var_59_string;
	var_71_object->GetProperty("class", var_59_string);
	bool var_75_bool = true;
	bool var_76_bool = true;
	var_78_bool = var_59_string == "bomber";
	if(var_78_bool != 1) {
		var_80_bool = var_59_string == "hunter";
		if(var_80_bool != 1)
			var_76_bool = false;
	}
	if(var_76_bool != 1) {
		var_82_bool = var_59_string == "grabitel";
		if(var_82_bool != 1)
			var_75_bool = false;
	}
	if(var_75_bool != 0) {
		var_53_bool = true;
		return 6;
	}
	bool var_83_bool; object var_84_object;
	func_1230(var_83_bool, var_84_object, "disease");
	if(!var_83_bool) { //@nz
		var_53_bool = false;
		return 6;
	}
	bool var_87_bool = true;
	bool var_88_bool; string var_89_string;
	func_1576(var_88_bool, var_89_string);
	if(var_88_bool != 1) {
		var_128_bool = var_89_string == "dog";
		if(var_128_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 0) {
		var_84_object->GetProperty("disease", var_60_float);
		var_53_bool = var_60_float > 0;
		return 6;
	}
	var_53_bool = false;
}


void func_290(object var_0_object, object var_1_object, bool var_2_bool, object var_139_object, bool var_140_bool)
{
	bool var_146_bool; bool var_147_bool;
	var_0_object = var_139_object;
	func_1772(var_0_object);
	func_1781();
	@Face(var_0_object);
	if(var_140_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd();
	}
	@LockAnimationEnd("all", "attack_on");
	@SetAttackState(true);
	
Label_316:
	for(;;) {
		bool var_165_bool;
		func_1356(var_165_bool, var_0_object);
		if(var_165_bool != 0) {
			@CanSee(var_147_bool, var_0_object);
			if(var_147_bool != 0) {
				func_1772(var_0_object);
				func_470(var_147_bool);
			} else {
				func_1506(var_0_object);
				var_2_bool = true;
				@PlayAnimation("all", "hunt");
				@WaitForAnimEnd(var_146_bool);
				if(!var_146_bool) { //@nz
					if(var_1_object != null)
						func_465(var_146_bool, var_147_bool);
					@LockAnimationEnd("all", "attack_on");
					goto Label_316;
				}
				bool var_346_bool;
				func_1356(var_346_bool, var_0_object);
				if(!var_346_bool) { //@nz
				} else {
						@CanSee(var_147_bool, var_0_object);
						if(var_147_bool != 0) {
							var_2_bool = false;
							@Face(var_0_object);
							func_470(var_147_bool);
							goto Label_412;
						}
						@LockAnimationEnd("all", "attack_on");
						@Sleep(3, var_146_bool);
						if(!var_146_bool) { //@nz
							if(var_1_object != null)
								func_465(var_146_bool, var_147_bool);
							@LockAnimationEnd("all", "attack_on");
							goto Label_316;
						}
						bool var_360_bool;
						func_1356(var_360_bool, var_0_object);
						var_362_bool = !var_360_bool; //@nz
						if(var_362_bool == 0) goto Label_400;
				}
		}
		Label_422:
			for(;;) {
				@SetAttackState(false);
				@StopAsync();
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();

			}

		Label_400:
			var_2_bool = false;
			@CanSee(var_147_bool, var_0_object);
			if(var_147_bool != 0) {
				@Face(var_0_object);
				func_470(var_147_bool);
				goto Label_412;
			}
			goto Label_422;
		}
	Label_412:
		if(var_1_object != null)
			func_465(var_146_bool, var_147_bool);
		else
			@Sleep(2);

	}
	
}


void func_1315(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


void func_2212(bool var_15_bool)
{
	int var_17_int;
	@GetVariable("d11q01SoldierAttack", var_17_int);
	var_15_bool = var_17_int != 0;
}


// @pe
void func_1189(string var_280_string, int var_281_int)
{
	if(var_281_int == 2) {
		var_280_string = "fire";
		return 0;
	EMIT "GOTO 0x4b1";
	}
	if(var_281_int == 1) {
		var_280_string = "bullet";
		return 0;
	}
	var_280_string = "phys";
}


// @pe
void func_678(object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	TaskCall(5);
	bool var_29_bool;
	func_794(var_31_object, var_29_bool, var_30_object);
	TaskReturn();
	if(var_31_object != 0) {
		object var_48_object;
		func_728(var_28_bool, var_48_object, var_48_object);
		@PlayAnimation("all", "attack_off");
	}
}


void func_1701(object var_22_object)
{
	object var_24_object;
	@CreateObjectSet(var_24_object);
	var_24_object = var_22_object;
}
EMIT "Stack[-1] = 0";


void func_1320(bool var_20_bool, object var_21_object)
{
	if(var_21_object == null) {
		var_20_bool = false;
		return 4;
	}
	bool var_27_bool = false;
	var_30_bool = IsFuncExist(var_21_object, "IsDead", 1);
	if(var_30_bool != 0) {
		bool var_31_bool; object var_32_object;
		var_21_object = var_32_object;
		func_1315(var_31_bool, var_32_object);
		if(var_31_bool != 0)
			var_27_bool = true;
	}
	if(var_27_bool != 0) {
		var_20_bool = false;
		return 4;
	}
	object var_24_object;
	@GetScene(var_24_object);
	if(var_24_object == null) {
		var_20_bool = false;
		return 4;
	}
	object var_25_object;
	var_21_object->GetScene(var_25_object);
	if(var_24_object != var_25_object) {
		var_20_bool = false;
		return 4;
	}
	var_20_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_1576(bool var_88_bool, string var_89_string)
{
	var_88_bool = true;
	bool var_90_bool = true;
	bool var_91_bool = true;
	bool var_92_bool = true;
	bool var_93_bool = true;
	bool var_94_bool = true;
	bool var_95_bool = true;
	bool var_96_bool = true;
	bool var_97_bool = true;
	bool var_98_bool = true;
	bool var_99_bool = true;
	bool var_100_bool = true;
	var_102_bool = var_89_string == "woman";
	if(var_102_bool != 1) {
		var_104_bool = var_89_string == "worker";
		if(var_104_bool != 1)
			var_100_bool = false;
	}
	if(var_100_bool != 1) {
		var_106_bool = var_89_string == "butcher";
		if(var_106_bool != 1)
			var_99_bool = false;
	}
	if(var_99_bool != 1) {
		var_108_bool = var_89_string == "wasted_girl";
		if(var_108_bool != 1)
			var_98_bool = false;
	}
	if(var_98_bool != 1) {
		var_110_bool = var_89_string == "boy";
		if(var_110_bool != 1)
			var_97_bool = false;
	}
	if(var_97_bool != 1) {
		var_112_bool = var_89_string == "vaxxabitka";
		if(var_112_bool != 1)
			var_96_bool = false;
	}
	if(var_96_bool != 1) {
		var_114_bool = var_89_string == "unosha";
		if(var_114_bool != 1)
			var_95_bool = false;
	}
	if(var_95_bool != 1) {
		var_116_bool = var_89_string == "wasted_male";
		if(var_116_bool != 1)
			var_94_bool = false;
	}
	if(var_94_bool != 1) {
		var_118_bool = var_89_string == "alkash";
		if(var_118_bool != 1)
			var_93_bool = false;
	}
	if(var_93_bool != 1) {
		var_120_bool = var_89_string == "dohodyaga";
		if(var_120_bool != 1)
			var_92_bool = false;
	}
	if(var_92_bool != 1) {
		var_122_bool = var_89_string == "vaxxabit";
		if(var_122_bool != 1)
			var_91_bool = false;
	}
	if(var_91_bool != 1) {
		var_124_bool = var_89_string == "nudegirl";
		if(var_124_bool != 1)
			var_90_bool = false;
	}
	if(var_90_bool != 1) {
		var_126_bool = var_89_string == "morlok";
		if(var_126_bool != 1)
			var_88_bool = false;
	}
}


void func_1066(object var_33_object)
{
	cvector var_44_cvector; cvector var_45_cvector; cvector var_46_cvector; cvector var_47_cvector; string var_48_string; object var_49_object; bool var_50_bool; bool var_51_bool; float var_52_float; cvector var_53_cvector;
	if(var_33_object == null) {
		func_1157("fdie");
	} else {
		var_33_object->GetPosition(var_44_cvector);
		@GetPosition(var_45_cvector);
		@GetDirection(var_46_cvector);
		var_47_cvector = var_45_cvector - var_44_cvector;
		var_87_float = GetByIndex(var_47_cvector, 0);
		var_88_float = GetByIndex(var_46_cvector, 0);
		var_90_float = GetByIndex(var_47_cvector, 2);
		var_91_float = GetByIndex(var_46_cvector, 2);
		if(((var_87_float * var_88_float) + (var_90_float * var_91_float)) >= 0)
			var_48_string = "fdie";
		else
			var_48_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_33_object = var_49_object;
		var_98_bool = IsFuncExist(var_33_object, "GetScriptProperty", 2);
		if(var_98_bool != 0) {
			var_33_object->HasScriptProperty(var_50_bool, "Owner");
			if(var_50_bool != 0) {
				var_33_object->GetScriptProperty(var_49_object, "Owner");
				if(var_49_object == null)
					var_33_object = var_49_object;
			}
		}
		var_105_bool = IsFuncExist(var_49_object, "@GetEyesHeight", 1);
		if(var_105_bool != 0) {
			var_49_object->GetEyesHeight(var_52_float);
			var_53_cvector = [0.0, 0.0, 0.0];
			var_106_float = GetByIndex(var_53_cvector, 1);
			var_52_float = var_106_float;
			SetByIndex(var_53_cvector, 1) = var_106_float;
			@LookAsync(var_33_object, "head", var_53_cvector);
			var_51_bool = true;
		} else {
			var_51_bool = false;

		}
		string var_108_string;
		var_48_string = var_108_string;
		func_1535(var_108_string);
		@PlayAnimation("all", var_48_string);
		@WaitForAnimEnd();
		if(var_51_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_48_string);
		@RemoveEnvelope();
		var_49_object = null;
	}
	
}


// @pe
void func_2219(object var_131_object)
{
	object var_132_object;
	var_131_object = var_132_object;
	func_2049(var_132_object);
}


// @pe
void func_1707(float var_210_float, cvector var_211_cvector, cvector var_212_cvector)
{
	var_213_float = GetByIndex(var_211_cvector, 0);
	var_214_float = GetByIndex(var_212_cvector, 0);
	var_216_float = GetByIndex(var_211_cvector, 2);
	var_217_float = GetByIndex(var_212_cvector, 2);
	var_210_float = (var_213_float * var_214_float) + (var_216_float * var_217_float);
}


void func_1535(string var_56_string)
{
	bool var_65_bool; int var_66_int; bool var_67_bool; int var_68_int; bool var_69_bool; float var_70_float; cvector var_71_cvector; cvector var_72_cvector;
	@IsExisting3DSound(var_65_bool, var_56_string);
	if(!var_65_bool) { //@nz
		var_66_int = 0;

		for(;;) {
			@IsExisting3DSound(var_67_bool, (var_56_string + (var_66_int + 1)));
			if(!var_67_bool) { //@nz
				break;
			Label_1555:
				@irand(var_68_int, var_66_int);
				var_56_string += (var_68_int + 1);
	}
			@Is3DSoundLoaded(var_69_bool, var_56_string);
			if(var_69_bool != 0) {
				@GetEyesHeight(var_70_float);
				@GetDirection(var_71_cvector);
				var_72_cvector = var_71_cvector * 50;
				var_83_float = GetByIndex(var_72_cvector, 1);
				SetByIndex(var_72_cvector, 1) = (var_83_float + var_70_float);
				@PlayGlobalSound(var_56_string, var_72_cvector);
			}
		}
		var_66_int += 1;
	}
	var_78_bool = !var_66_int; //@nz
	if(var_78_bool == 0) goto Label_1555;
}


void func_945(object var_0_object, object var_1_object)
{
	int var_307_int; bool var_308_bool; cvector var_309_cvector; object var_310_object;
	@GetPFPosition(var_1_object);
	@GetDirection(var_0_object);
	
	for(;;) {
		func_1034();
		@irand(var_307_int, 10);
		@Sleep((var_307_int + 5), var_308_bool);
		if(var_308_bool != 0) {
			func_867();
		} else {
		for(;;) {
			func_1034();
			@GetPFPosition(var_309_cvector);
			float var_315_float; cvector var_317_cvector;
			var_309_cvector = var_317_cvector;
			func_1679(var_315_float, var_1_object, var_317_cvector);
			if(var_315_float > 40000) {
				@FindPathTo(var_310_object, var_1_object);
				if(var_310_object != null) {
					@RotatePath(var_310_object, var_308_bool);
					if(!var_308_bool) { //@nz
					} else {
					@FollowPath(var_310_object, false, var_308_bool);
					if(!var_308_bool) { //@nz
						goto Label_1026;
					}
					var_326_float = GetByIndex(var_0_object, 0);
					var_327_float = GetByIndex(var_0_object, 2);
					@Rotate(var_326_float, var_327_float, var_308_bool);
					if(!var_308_bool) { //@nz
						goto Label_1026;
					}
					@WaitForAnimEnd(var_308_bool);
					if(!var_308_bool) { //@nz
						goto Label_1026;
					}
					goto Label_1027;
				EMIT "GOTO 0x3f3";
				}
				@Sleep(1);
				var_310_object = null;
				goto Label_1026;
			}
			var_331_float = GetByIndex(var_0_object, 0);
			var_332_float = GetByIndex(var_0_object, 2);
			@Rotate(var_331_float, var_332_float, var_308_bool);
			if(!var_308_bool) { //@nz
				goto Label_1026;
			}
			@WaitForAnimEnd(var_308_bool);
			if(!var_308_bool) { //@nz
				goto Label_1026;
			}
			goto Label_1027;
			}
		Label_1026:
		}
		}
	Label_1027:
	}
	
}
EMIT "Return(); Pop(8)";


void func_2225(object var_21_object)
{
	object var_23_object;
	@GetScene(var_23_object);
	object var_24_object;
	func_1663(var_24_object);
	var_23_object->RemoveStationaryActor(var_24_object);
	bool var_25_bool;
	func_1760(var_25_bool, "quest_d11_01", "soldier_death");
	object var_31_object;
	var_21_object = var_31_object;
	TaskCall(7);
	func_1035(var_31_object);
	TaskReturn();
}
EMIT "Stack[-1] = 0";


void func_1203(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


// @pe
void func_1716(float var_219_float, cvector var_220_cvector)
{
	var_221_float = GetByIndex(var_220_cvector, 0);
	var_222_float = GetByIndex(var_220_cvector, 0);
	var_224_float = GetByIndex(var_220_cvector, 2);
	var_225_float = GetByIndex(var_220_cvector, 2);
	var_219_float = sqrt((var_221_float * var_222_float) + (var_224_float * var_225_float));
}


void func_1210(float var_377_float, object var_378_object)
{
	cvector var_382_cvector;
	@GetPosition(var_382_cvector);
	cvector var_383_cvector;
	var_378_object->GetPosition(var_383_cvector);
	var_377_float = (var_383_cvector - var_382_cvector) | (var_383_cvector - var_382_cvector);
}


// @pe
void func_1726(float var_207_float, cvector var_208_cvector, cvector var_209_cvector)
{
	cvector var_211_cvector;
	var_208_cvector = var_211_cvector;
	cvector var_212_cvector;
	var_209_cvector = var_212_cvector;
	float var_210_float;
	func_1707(var_210_float, var_211_cvector, var_212_cvector);
	float var_219_float; cvector var_220_cvector;
	var_208_cvector = var_220_cvector;
	func_1716(var_219_float, var_220_cvector);
	float var_228_float; cvector var_229_cvector;
	var_209_cvector = var_229_cvector;
	func_1716(var_228_float, var_229_cvector);
	var_207_float = var_210_float / (var_219_float * var_228_float);
}


void func_1218(object var_15_object)
{
	object var_17_object;
	@FindActor(var_17_object, "player");
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_1860(bool var_20_bool, object var_21_object, bool var_22_bool)
{
	bool var_25_bool; object var_26_object;
	func_1230(var_25_bool, var_26_object, "class");
	if(!var_25_bool) { //@nz
		var_20_bool = false;
		return 2;
	}
	string var_24_string;
	var_26_object->GetProperty("class", var_24_string);
	bool var_36_bool = true;
	bool var_37_bool = true;
	bool var_38_bool = true;
	bool var_39_bool = true;
	bool var_40_bool = true;
	bool var_41_bool = true;
	bool var_42_bool = true;
	bool var_43_bool = true;
	bool var_44_bool = true;
	bool var_45_bool = true;
	var_47_bool = var_24_string == "patrol";
	if(var_47_bool != 1) {
		var_49_bool = var_24_string == "sanitar";
		if(var_49_bool != 1)
			var_45_bool = false;
	}
	if(var_45_bool != 1) {
		var_51_bool = var_24_string == "soldier";
		if(var_51_bool != 1)
			var_44_bool = false;
	}
	if(var_44_bool != 1) {
		var_53_bool = var_24_string == "woman";
		if(var_53_bool != 1)
			var_43_bool = false;
	}
	if(var_43_bool != 1) {
		var_55_bool = var_24_string == "wasted_girl";
		if(var_55_bool != 1)
			var_42_bool = false;
	}
	if(var_42_bool != 1) {
		var_57_bool = var_24_string == "vaxxabitka";
		if(var_57_bool != 1)
			var_41_bool = false;
	}
	if(var_41_bool != 1) {
		var_59_bool = var_24_string == "vaxxabit";
		if(var_59_bool != 1)
			var_40_bool = false;
	}
	if(var_40_bool != 1) {
		var_61_bool = var_24_string == "little_girl";
		if(var_61_bool != 1)
			var_39_bool = false;
	}
	if(var_39_bool != 1) {
		var_63_bool = var_24_string == "girl";
		if(var_63_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 1) {
		var_65_bool = var_24_string == "dohodyaga";
		if(var_65_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 1) {
		var_67_bool = var_24_string == "nudegirl";
		if(var_67_bool != 1)
			var_36_bool = false;
	}
	if(var_36_bool != 0) {
		var_20_bool = true;
		return 2;
	}
	if(var_22_bool != 0) {
		var_20_bool = false;
		return 2;
	}
	var_20_bool = true;
	bool var_69_bool = true;
	bool var_70_bool = true;
	bool var_71_bool = true;
	bool var_72_bool = true;
	bool var_73_bool = true;
	var_75_bool = var_24_string == "worker";
	if(var_75_bool != 1) {
		var_77_bool = var_24_string == "butcher";
		if(var_77_bool != 1)
			var_73_bool = false;
	}
	if(var_73_bool != 1) {
		var_79_bool = var_24_string == "boy";
		if(var_79_bool != 1)
			var_72_bool = false;
	}
	if(var_72_bool != 1) {
		var_81_bool = var_24_string == "unosha";
		if(var_81_bool != 1)
			var_71_bool = false;
	}
	if(var_71_bool != 1) {
		var_83_bool = var_24_string == "wasted_male";
		if(var_83_bool != 1)
			var_70_bool = false;
	}
	if(var_70_bool != 1) {
		var_85_bool = var_24_string == "alkash";
		if(var_85_bool != 1)
			var_69_bool = false;
	}
	if(var_69_bool != 1) {
		var_87_bool = var_24_string == "morlok";
		if(var_87_bool != 1)
			var_20_bool = false;
	}
}


void func_1225(bool var_12_bool, object var_13_object)
{
	bool var_15_bool;
	@IsPlayerActor(var_13_object, var_15_bool);
	var_15_bool = var_12_bool;
}


void func_1356(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1320(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1230(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


void func_1996(void)
{
	var_21_object = GlobalVars[0];
	object var_22_object;
	func_1701(var_22_object);
	var_22_object = var_21_object;
	GlobalVars[0] = var_21_object;
}


// @pe
void func_846(object var_14_object)
{
	func_1996();
	object var_25_object;
	var_14_object = var_25_object;
	func_898();
	
	for(;;) {
		func_859();
	}
}
EMIT "Return(); Pop(0)";


void func_1230(bool var_38_bool, object var_39_object, string var_40_string)
{
	var_45_bool = IsFuncExist(var_39_object, "HasProperty", 2);
	if(!var_45_bool) { //@nz
		var_38_bool = false;
		return 2;
	}
	bool var_42_bool;
	var_39_object->HasProperty(var_40_string, var_42_bool);
	var_42_bool = var_38_bool;
}


void func_1743(float var_308_float)
{
	object var_310_object;
	@CreateFloatVector(var_310_object);
	var_310_object->add(var_308_float);
	if(var_308_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_310_object);
}
EMIT "Stack[-1] = 0";


void func_465(object var_0_object, object var_1_object)
{
	var_1_object = null;
	@Face(var_1_object);
}


// @pe
void func_2003(object var_137_object, bool var_138_bool)
{
	object var_139_object;
	var_137_object = var_139_object;
	bool var_140_bool;
	var_138_bool = var_140_bool;
	TaskCall(2);
	func_290(var_141_object, var_142_object, var_143_bool, var_139_object, var_140_bool);
	TaskReturn();
	@ResetAAS();
}


void func_723(void)
{
	@LockAnimationEnd("all", "attack_on");
}


void func_1492(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1380(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_470(object var_0_object)
{
	object var_188_object; object var_189_object; float var_194_float; object var_195_object; object var_196_object;
	func_1772(var_0_object);
	@ReportAttack(var_0_object);
	bool var_198_bool;
	func_1225(var_198_bool, var_0_object);
	if(var_198_bool != 0) {
		object var_200_object;
		func_1663(var_200_object);
		@SendPlayerEnemy(var_0_object, var_200_object);
	}
	cvector var_183_cvector;
	@GetDirection(var_183_cvector);
	cvector var_201_cvector;
	func_1203(var_201_cvector, var_0_object);
	cvector var_184_cvector;
	var_201_cvector = var_184_cvector;
	float var_207_float; cvector var_208_cvector; cvector var_209_cvector;
	var_184_cvector = var_209_cvector;
	func_1726(var_207_float, var_208_cvector, var_209_cvector);
	if(var_207_float < 0.99939084) {
	}
	func_1781();
	@PlayAnimation("all", "attack_begin1");
	bool var_185_bool;
	cvector var_186_cvector;
	cvector var_187_cvector;
	@GetGeometryLocator("attack", var_185_bool, var_186_cvector, var_187_cvector);
	if(var_185_bool != 0) {
		@GetScene(var_189_object);
		@AddActorByType(var_188_object, "light-dynamic", var_189_object, var_186_cvector, var_187_cvector, "soldier_fire.xml");
		var_189_object = null;
		var_188_object = null;
	} else {
				@WaitForAnimEnd();
	}
	@PlayGlobalSound("shot", [0.0, 150.0, 0.0], 800, 100000);
	@GetDirection(var_208_cvector);
	cvector var_243_cvector;
	func_1203(var_243_cvector, var_0_object);
	var_243_cvector = var_184_cvector;
	var_245_float = GetByIndex(var_184_cvector, 1);
	float var_246_float;
	func_1528(var_246_float, var_0_object);
	SetByIndex(var_184_cvector, 1) = (var_245_float + var_246_float);
	cvector var_190_cvector;
	@RandVecCone3D(var_190_cvector, var_184_cvector, 0.034906585);
	object var_191_object;
	int var_192_int;
	cvector var_193_cvector;
	@GetVictimMaterial(var_190_cvector, var_191_object, var_192_int, var_193_cvector);
	if(var_191_object != null) {
		if(var_191_object == var_0_object) {
			float var_255_float;
			func_1242(var_255_float, var_0_object, 1.5, 1);
			var_255_float = var_194_float;
			@ReportHit(var_0_object, 2, var_194_float, 1.5);
		} else if(var_192_int != -1) {
			@GetScene(var_195_object);
			@AddActorByType(var_196_object, "scripted", var_195_object, var_193_cvector, [0.0, 0.0, 1.0], "richochet.xml");
			var_196_object->SetScriptProperty("Material", var_192_int);
			var_196_object = null;
			var_195_object = null;

		}
	}
	@PlayAnimation("all", "attack_end1");
	@WaitForAnimEnd();
	@LockAnimationEnd("all", "attack_on");
	
}
EMIT "Stack[-6] = 0";


void func_728(object var_0_object, object var_1_object, object var_48_object)
{
	var_0_object = var_48_object;
	cvector var_52_cvector;
	func_777(var_52_cvector);
	
Label_734:
	cvector var_51_cvector;
	@GetDirection(var_51_cvector);
	cvector var_61_cvector;
	func_1203(var_61_cvector, var_0_object);
	var_61_cvector = var_52_cvector;
	float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	var_51_cvector = var_68_cvector;
	var_52_cvector = var_69_cvector;
	func_1726(var_67_float, var_68_cvector, var_69_cvector);
	if(var_67_float < 0.70710677) {
		func_1517(var_0_object, 4.712389);
		func_723();
	}
	@Sleep(0.5);
	bool var_106_bool = false;
	if(!false) { //@nz
		bool var_108_bool;
		func_1356(var_108_bool, var_0_object);
		if(var_108_bool != 0)
			var_106_bool = true;
	}
	if(var_106_bool == 1) goto Label_734;
	@StopAsync();
	@UnlookAsync("spine");
}


void func_1242(float var_255_float, object var_256_object, float var_257_float, int var_258_int)
{
	int var_265_int; int var_267_int;
	object var_272_object;
	var_256_object = var_272_object;
	bool var_271_bool;
	func_1230(var_271_bool, var_272_object, "health");
	if(!var_271_bool) //@nz
		var_255_float = 0.0;
	bool var_275_bool; object var_276_object;
	func_1230(var_275_bool, var_276_object, "armor");
	if(!var_275_bool) //@nz
		var_265_int = 0;
	else
		var_276_object->GetProperty("armor", var_265_int);
	string var_280_string; int var_281_int;
	var_258_int = var_281_int;
	func_1189(var_280_string, var_281_int);
	string var_266_string = "armor_" + var_280_string;
	bool var_286_bool; object var_287_object; string var_288_string;
	var_256_object = var_287_object;
	func_1230(var_286_bool, var_287_object, var_288_string);
	if(!var_286_bool) //@nz
		var_267_int = 0;
	else
		var_256_object->GetProperty(var_288_string, var_267_int);

	float var_290_float;
	func_1683(var_290_float, ((var_265_int + var_267_int) / 100.0), (float)1);
	float var_268_float;
	var_290_float = var_268_float;
	float var_269_float;
	var_256_object->GetProperty("health", var_269_float);
	float var_270_float = var_257_float * (1 - var_268_float);
	float var_300_float;
	func_1690(var_300_float, (var_269_float - var_270_float), (float)0, (float)1);
	var_256_object->SetProperty("health", var_300_float);
	bool var_306_bool; object var_307_object;
	var_256_object = var_307_object;
	func_1225(var_306_bool, var_307_object);
	if(var_306_bool != 0) {
		float var_308_float = -var_270_float;
		func_1743(var_308_float);
	}
	var_270_float = var_255_float;
	
}


// @pe
void func_859(void)
{
	func_1996();
	
	for(;;) {
		func_945(var_20_cvector, var_14_object);
	}
}
EMIT "Return(); Pop(0)";


void func_120(object var_0_object, object var_1_object, object var_364_object)
{
	var_0_object = var_364_object;
	func_1772(var_0_object);
	@CanSee(var_1_object, var_0_object);
	if(var_1_object != 0) {
		bool var_375_bool;
		func_2070(var_375_bool, var_0_object);
		if(var_375_bool != 0) {
			func_2003(var_0_object, true);
			return 6;
		}
		@Face(var_0_object);
	}
	func_1781();
	@PlayAnimation("all", "shoot_begin");
	bool var_370_bool;
	@WaitForAnimEnd(var_370_bool);
	if(!var_370_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@PlayGlobalSound("shot", [0.0, 150.0, 0.0], 800, 100000);
	@PlayAnimation("all", "shoot_end");
	@WaitForAnimEnd(var_370_bool);
	if(!var_370_bool) { //@nz
		@StopAsync();
		return 6;
	}
	@LockAnimationEnd("all", "shoot_end");
	int var_371_int = 0;
	int var_372_int = 0;
	
	for(;;) {
		if(var_372_int < 20) {
			func_1772(var_0_object);
			@Sleep(0.5, var_370_bool);
			if(!var_370_bool) //@nz
				return 6;
			@CanSee(var_1_object, var_0_object);
			if(var_1_object != 0) {
				var_371_int = 0;
				bool var_406_bool;
				func_2070(var_406_bool, var_0_object);
				if(var_406_bool != 0) {
					func_274();
					func_2003(var_0_object, false);
					return 6;
				}
				@Face(var_0_object);
			} else {
			@StopAsync();
			if(!((var_371_int + 1) == 4)) goto Label_229;
			@PlayAnimation("all", "attack_off");
			@WaitForAnimEnd();
			return 6;
		}
		func_274();
		object var_416_object;
		var_364_object = var_416_object;
		func_2003(var_416_object, false);
		return 6;
		}
	Label_229:
		var_372_int += 1;
	}
	
}


void func_2014(object var_130_object)
{
	if(var_130_object == null) {
	}
	var_134_object = GlobalVars[0];
	bool var_132_bool;
	var_134_object->in(var_132_bool, var_130_object);
	if(!var_132_bool) { //@nz
		var_136_object = GlobalVars[0];
		var_136_object->add(var_130_object);
	}
	bool var_137_bool; object var_138_object;
	func_1225(var_137_bool, var_138_object);
	if(var_137_bool != 0) {
		object var_141_object;
		func_1663(var_141_object);
		@ReportReputationChange(var_138_object, var_141_object, 0.0);
	}
}


void func_1760(bool var_25_bool, string var_26_string, string var_27_string)
{
	object var_29_object;
	@FindActor(var_29_object, var_26_string);
	if(var_29_object == null)
		var_25_bool = false;
	@Trigger(var_29_object, var_27_string);
	var_25_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1506(object var_331_object)
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


void func_867(void)
{
}


void func_1380(object var_28_object)
{
	string var_42_string;
	if(var_28_object == null)
		return 14;
	bool var_36_bool;
	@IsDead(var_36_bool);
	if(var_36_bool != 0)
		return 14;
	int var_37_int;
	@GetSecondaryAnimationType(var_37_int);
	if(var_37_int < 0)
		return 14;
	cvector var_38_cvector;
	var_28_object->GetPosition(var_38_cvector);
	cvector var_39_cvector;
	@GetPosition(var_39_cvector);
	cvector var_40_cvector;
	@GetDirection(var_40_cvector);
	cvector var_41_cvector = var_39_cvector - var_38_cvector;
	var_47_float = GetByIndex(var_41_cvector, 0);
	var_48_float = GetByIndex(var_40_cvector, 0);
	var_50_float = GetByIndex(var_41_cvector, 2);
	var_51_float = GetByIndex(var_40_cvector, 2);
	if(((var_47_float * var_48_float) + (var_50_float * var_51_float)) >= 0)
		var_42_string = "fhit";
	else
		var_42_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_42_string + "1"), (var_42_string + "2"), -10);
	
}


void func_1772(object var_148_object)
{
	bool var_150_bool;
	@IsPlayerActor(var_148_object, var_150_bool);
	if(var_150_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1517(object var_93_object, float var_94_float)
{
	cvector var_98_cvector;
	var_93_object->GetPosition(var_98_cvector);
	cvector var_99_cvector;
	@GetPosition(var_99_cvector);
	cvector var_100_cvector = var_98_cvector - var_99_cvector;
	var_101_float = GetByIndex(var_100_cvector, 0);
	var_102_float = GetByIndex(var_100_cvector, 2);
	@RotateAsync(var_101_float, var_102_float, var_94_float);
}


void func_2158(bool var_12_bool, object var_13_object)
{
	bool var_16_bool; object var_17_object;
	func_1356(var_16_bool, var_17_object);
	if(!var_16_bool) { //@nz
		var_12_bool = false;
		return 2;
	}
	var_51_object = GlobalVars[0];
	bool var_15_bool;
	var_51_object->in(var_15_bool, var_17_object);
	if(var_15_bool != 0) {
		var_12_bool = true;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	var_13_object = var_54_object;
	func_2078(var_53_bool, var_54_object);
	var_53_bool = var_12_bool;
}


void func_1781(void)
{
	object var_154_object;
	@GetScene(var_154_object);
	object var_156_object;
	func_1663(var_156_object);
	@BroadcastMessage("battle", var_156_object, var_154_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_2038(object var_145_object)
{
	object var_146_object;
	var_145_object = var_146_object;
	func_2014(var_146_object);
	object var_147_object;
	var_145_object = var_147_object;
	func_2003(var_147_object, true);
}


void func_1528(float var_246_float, object var_247_object)
{
	float var_250_float;
	@GetEyesHeight(var_250_float);
	float var_251_float;
	var_247_object->GetEyesHeight(var_251_float);
	var_246_float = var_251_float - var_250_float;
}


void func_1663(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


