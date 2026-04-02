// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		func_2061(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			object var_19_object;
			var_12_object = var_19_object;
			func_2064(var_19_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_2070();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, int var_11_int, bool var_12_bool, int var_13_int, bool var_14_bool, object var_15_object)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		@SensePlayerOnly(true);
		func_2150();
		func_163();
	
		for(;;) {
			var_2_bool = false;
			func_376(var_10_bool, var_11_object);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		func_2061(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			object var_22_object;
			var_12_object = var_22_object;
			func_2064(var_22_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		int var_15_int;
		func_2020(var_15_int, var_16_object);
		int var_14_int;
		var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			object var_56_object;
			var_12_object = var_56_object;
			func_2030(var_56_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		int var_15_int;
		object var_17_object;
		var_12_bool = var_17_object;
		object var_18_object;
		var_13_object = var_18_object;
		bool var_16_bool;
		func_2179(var_16_bool, var_17_object, var_18_object);
		if(var_16_bool != 0) {
			int var_51_int; object var_52_object;
			var_12_bool = var_52_object;
			func_2038(var_51_int, var_52_object);
			var_51_int = var_15_int;
			if(var_15_int > 0) {
				if(var_15_int > 1)
					func_311(var_15_int);
				object var_88_object;
				var_12_bool = var_88_object;
				func_2045(var_88_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		func_2051(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			object var_22_object;
			var_12_object = var_22_object;
			func_2054();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		string var_17_string;
		var_13_object = var_17_string;
		object var_18_object;
		var_12_bool = var_18_object;
		func_2056(var_18_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_311(var_15_int);
			string var_24_string; object var_25_object;
			var_13_object = var_24_string;
			var_12_bool = var_25_object;
			func_2059();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_13_object;
		func_336(var_13_object, var_13_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_13_object;
		func_336(var_13_object, var_13_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		if(var_12_object != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_311(var_11_object);
		func_2070();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		func_311(var_12_object);
		object var_14_object;
		var_12_object = var_14_object;
		func_1971();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		@RequestClearPath(var_12_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		func_2061(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			object var_21_object;
			var_12_object = var_21_object;
			func_2064(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		int var_15_int;
		func_2020(var_15_int, var_16_object);
		int var_14_int;
		var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			object var_55_object;
			var_12_object = var_55_object;
			func_2030(var_55_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		int var_15_int;
		object var_17_object;
		var_12_bool = var_17_object;
		object var_18_object;
		var_13_object = var_18_object;
		bool var_16_bool;
		func_2179(var_16_bool, var_17_object, var_18_object);
		if(var_16_bool != 0) {
			int var_51_int; object var_52_object;
			var_12_bool = var_52_object;
			func_2038(var_51_int, var_52_object);
			var_51_int = var_15_int;
			if(var_15_int > 0) {
				if(var_15_int > 1)
					func_640();
				object var_87_object;
				var_12_bool = var_87_object;
				func_2045(var_87_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		func_2051(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			object var_21_object;
			var_12_object = var_21_object;
			func_2054();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, int var_8_int, int var_9_int, bool var_10_bool, int var_11_int, bool var_12_bool, object var_13_object)
	{
		string var_17_string;
		var_13_object = var_17_string;
		object var_18_object;
		var_12_bool = var_18_object;
		func_2056(var_18_object);
		int var_15_int;
		int var_16_int = var_15_int;
		if(var_15_int > 0) {
			if(var_15_int > 1)
				func_640();
			string var_23_string; object var_24_object;
			var_13_object = var_23_string;
			var_12_bool = var_24_object;
			func_2059();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_640();
		func_2070();
	}

}


task task_3
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		func_2174(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_732();
			object var_21_object;
			var_12_object = var_21_object;
			func_2177();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_732();
		func_2070();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		func_732();
		object var_13_object;
		var_12_object = var_13_object;
		func_1971();
	}

}


task task_4
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		object var_16_object;
		var_12_object = var_16_object;
		func_2174(var_16_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_910(var_14_int);
			object var_22_object;
			var_12_object = var_22_object;
			func_2177();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_910(var_11_object);
		func_2070();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		if(var_12_object != 0)
			return 0;
		bool var_15_bool;
		func_926(var_15_bool, var_1_bool);
		if(!var_15_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		@RequestClearPath(var_12_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		func_910(var_12_object);
		object var_14_object;
		var_12_object = var_14_object;
		func_1971();
	}

}


task task_5
{
}


task task_6
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_1571(var_11_object);
		func_2070();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, int var_12_int)
	{
		if(var_12_int != 0)
			return 0;
		bool var_15_bool;
		func_1587(var_15_bool, var_1_bool);
		if(!var_15_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object)
	{
		@RequestClearPath(var_12_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object)
	{
		func_1571(var_12_object);
		object var_14_object;
		var_12_object = var_14_object;
		func_1971();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, string var_13_string)
{
	float var_15_float;
	if(var_13_string == "health") {
		@GetProperty("health", var_15_float);
		if(var_15_float <= 0)
			@SignalDeath(var_12_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_1950(var_13_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, object var_12_object, int var_13_int, float var_14_float, float var_15_float)
{
	object var_16_object;
	var_12_object = var_16_object;
	int var_17_int;
	var_13_int = var_17_int;
	float var_18_float;
	var_14_float = var_18_float;
	func_1840(var_17_int, var_18_float);
}


// @pe
void func_0(object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_33(var_15_object);
	object var_65_object;
	var_14_object = var_65_object;
	func_2225();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_2051(int var_15_int)
{
	var_15_int = 0;
}


// @pe
void func_2054(void)
{
}


// @pe
void func_2056(int var_16_int)
{
	var_16_int = 0;
}


// @pe
void func_2059(void)
{
}


// @pe
void func_2061(int var_15_int)
{
	var_15_int = 2;
}


// @pe
void func_2064(object var_21_object)
{
	object var_22_object;
	var_21_object = var_22_object;
	func_2158(var_22_object);
}


void func_2070(void)
{
}


void func_2071(int var_20_int, int var_21_int)
{
	int var_36_int;
	if(var_20_int > var_21_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_35_int = 0;
	if(var_20_int != var_21_int) {
		@irand(var_36_int, (var_21_int - var_20_int));
	} else if(var_20_int == 0) {
		return 8;
	}
	var_35_int += var_20_int;
	if(var_35_int == 0)
		return 8;
	int var_37_int;
	@GetInvItemByName(var_37_int, "Money");
	bool var_38_bool;
	@AddItem(var_38_bool, var_37_int, 0, var_35_int);
	
}


void func_33(object var_15_object)
{
	cvector var_26_cvector; cvector var_27_cvector; cvector var_28_cvector; cvector var_29_cvector; string var_30_string; object var_31_object; bool var_32_bool; bool var_33_bool; float var_34_float; cvector var_35_cvector;
	if(var_15_object == null) {
		func_120("fdie");
	} else {
		var_15_object->GetPosition(var_26_cvector);
		@GetPosition(var_27_cvector);
		@GetDirection(var_28_cvector);
		var_29_cvector = var_27_cvector - var_26_cvector;
		var_40_float = GetByIndex(var_29_cvector, 0);
		var_41_float = GetByIndex(var_28_cvector, 0);
		var_43_float = GetByIndex(var_29_cvector, 2);
		var_44_float = GetByIndex(var_28_cvector, 2);
		if(((var_40_float * var_41_float) + (var_43_float * var_44_float)) >= 0)
			var_30_string = "fdie";
		else
			var_30_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_15_object = var_31_object;
		var_51_bool = IsFuncExist(var_15_object, "GetScriptProperty", 2);
		if(var_51_bool != 0) {
			var_15_object->HasScriptProperty(var_32_bool, "Owner");
			if(var_32_bool != 0) {
				var_15_object->GetScriptProperty(var_31_object, "Owner");
				if(var_31_object == null)
					var_15_object = var_31_object;
			}
		}
		var_58_bool = IsFuncExist(var_31_object, "@GetEyesHeight", 1);
		if(var_58_bool != 0) {
			var_31_object->GetEyesHeight(var_34_float);
			var_35_cvector = [0.0, 0.0, 0.0];
			var_59_float = GetByIndex(var_35_cvector, 1);
			var_34_float = var_59_float;
			SetByIndex(var_35_cvector, 1) = var_59_float;
			@LookAsync(var_15_object, "head", var_35_cvector);
			var_33_bool = true;
		} else {
			var_33_bool = false;

		}
		@PlayAnimation("all", var_30_string);
		@WaitForAnimEnd();
		if(var_33_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_30_string);
		@RemoveEnvelope();
		var_31_object = null;
	}
	
}


void func_1571(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_1587(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1816(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_2101(void)
{
	bool var_17_bool;
	@ClearSubContainer(0);
	int var_23_int;
	func_1941(var_23_int);
	func_2071(0, (10 + (var_23_int * 10)));
	int var_18_int;
	@irand(var_18_int, 4);
	if(var_18_int == 0) {
		int var_52_int;
		func_2145(var_52_int, "hook");
		@AddItem(var_17_bool, var_52_int, 0, 1);
	}
	@irand(var_18_int, 10);
	if(var_18_int == 0) {
		int var_61_int;
		func_2145(var_61_int, "watch");
		@AddItem(var_17_bool, var_61_int, 0, 1);
	}
}


void func_1594(string var_188_string)
{
	var_188_string = "walk";
}


void func_571(void)
{
	int var_101_int; int var_102_int; bool var_103_bool; float var_104_float; bool var_105_bool;
	@WaitForAnimEnd();
	bool var_106_bool;
	func_1918(var_106_bool);
	if(!var_106_bool) //@nz
		return 14;
	int var_108_int;
	func_1992(var_108_int);
	int var_99_int;
	var_108_int = var_99_int;
	int var_100_int = 0;
	
	for(;;) {
		bool var_121_bool = false;
		if(var_100_int < 5) {
			bool var_124_bool;
			func_1918(var_124_bool);
			if(var_124_bool != 0)
				var_121_bool = true;
		}
		if(var_121_bool != 0) {
			@irand(var_101_int, 3);
			if(var_101_int == 0) {
				if(var_99_int == 0) goto Label_618;
				@irand(var_102_int, var_99_int);
				string var_130_string; int var_131_int;
				var_102_int = var_131_int;
				func_1985(var_130_string, var_131_int);
				@PlayAnimation("all", var_130_string);
				@WaitForAnimEnd(var_103_bool);
				if(!var_103_bool) { //@nz
				} else {
			} else {
			if(var_101_int == 1) {
				@rand(var_104_float, 4);
				@Sleep((var_104_float + 1), var_105_bool);
				if(!var_105_bool) { //@nz
					goto Label_639;
				}
			} else if(var_100_int != 0) {
				goto Label_639;
			}
			}
				var_100_int += 1;
			}
		}
	Label_639:
		return 14;

	}
	
}


void func_1596(string var_189_string)
{
	var_189_string = "run";
}


// @pe
void func_1598(string var_344_string, int var_345_int)
{
	if(var_345_int == 1)
		var_344_string = "fire";
	var_344_string = "phys";
}


void func_1606(float var_40_float, object var_41_object)
{
	cvector var_45_cvector;
	@GetPosition(var_45_cvector);
	cvector var_46_cvector;
	var_41_object->GetPosition(var_46_cvector);
	var_40_float = (var_46_cvector - var_45_cvector) | (var_46_cvector - var_45_cvector);
}


void func_1614(bool var_39_bool, object var_40_object, string var_41_string)
{
	var_46_bool = IsFuncExist(var_40_object, "HasProperty", 2);
	if(!var_46_bool) { //@nz
		var_39_bool = false;
		return 2;
	}
	bool var_43_bool;
	var_40_object->HasProperty(var_41_string, var_43_bool);
	var_43_bool = var_39_bool;
}


void func_1626(bool var_170_bool, object var_171_object, string var_172_string, float var_173_float, float var_174_float, float var_175_float)
{
	object var_179_object;
	var_171_object = var_179_object;
	string var_180_string;
	var_172_string = var_180_string;
	bool var_178_bool;
	func_1614(var_178_bool, var_179_object, var_180_string);
	if(!var_178_bool) //@nz
		var_170_bool = false;
	float var_177_float;
	var_171_object->GetProperty(var_172_string, var_177_float);
	float var_182_float; float var_184_float; float var_185_float;
	var_174_float = var_184_float;
	var_175_float = var_185_float;
	func_1930(var_182_float, (var_177_float + var_173_float), var_184_float, var_185_float);
	var_171_object->SetProperty(var_172_string, var_182_float);
	var_170_bool = true;
}


void func_2145(int var_52_int, string var_53_string)
{
	int var_55_int;
	@GetInvItemByName(var_55_int, var_53_string);
	var_55_int = var_52_int;
}


void func_2150(void)
{
	var_13_bool = GlobalVars[0];
	GlobalVars[0] = false;
	bool var_14_bool = true;
	func_2101();
}


void func_2158(object var_22_object)
{
	bool var_24_bool;
	var_25_bool = GlobalVars[0];
	if(var_25_bool != 0) {
		@IsOverrideActive(var_24_bool);
		if(!var_24_bool) //@nz
			@WorkWithCorpse(var_22_object);
	}
}


void func_1648(float var_316_float, object var_317_object, float var_318_float, int var_319_int)
{
	int var_329_int; int var_331_int;
	object var_336_object;
	var_317_object = var_336_object;
	bool var_335_bool;
	func_1614(var_335_bool, var_336_object, "health");
	if(!var_335_bool) //@nz
		var_316_float = 0.0;
	bool var_339_bool; object var_340_object;
	func_1614(var_339_bool, var_340_object, "armor");
	if(!var_339_bool) //@nz
		var_329_int = 0;
	else
		var_340_object->GetProperty("armor", var_329_int);
	string var_344_string; int var_345_int;
	var_319_int = var_345_int;
	func_1598(var_344_string, var_345_int);
	string var_330_string = "armor_" + var_344_string;
	bool var_348_bool; object var_349_object; string var_350_string;
	var_317_object = var_349_object;
	func_1614(var_348_bool, var_349_object, var_350_string);
	if(!var_348_bool) //@nz
		var_331_int = 0;
	else
		var_317_object->GetProperty(var_350_string, var_331_int);

	float var_352_float;
	func_1923(var_352_float, ((var_329_int + var_331_int) / 100.0), (float)1);
	float var_332_float;
	var_352_float = var_332_float;
	float var_333_float;
	var_317_object->GetProperty("health", var_333_float);
	float var_362_float;
	func_1930(var_362_float, (var_333_float - (var_318_float * (1 - var_332_float))), (float)0, (float)1);
	var_317_object->SetProperty("health", var_362_float);
	float var_334_float = var_316_float;
	
}


// @pe
void func_120(string var_37_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_37_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_37_string);
	@RemoveEnvelope();
}


void func_2169(bool var_64_bool, object var_65_object)
{
	bool var_67_bool;
	@IsPlayerActor(var_65_object, var_67_bool);
	var_67_bool = var_64_bool;
}


// @pe
void func_2174(int var_15_int)
{
	var_15_int = 0;
}


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_2177(void)
{
}


void func_1154(bool var_0_bool, float var_302_float, int var_303_int)
{
	object var_307_object; float var_308_float; float var_309_float;
	@GetVictim((var_302_float * 0.9), var_307_object);
	@ReportAttack(var_0_bool);
	if(var_307_object == var_0_bool) {
		float var_313_float; object var_314_object; int var_315_int;
		var_307_object = var_314_object;
		var_303_int = var_315_int;
		func_943(var_315_int);
		var_313_float = var_308_float;
		float var_316_float; object var_317_object; float var_318_float; int var_319_int;
		var_307_object = var_317_object;
		int var_320_int; object var_321_object; int var_322_int;
		var_307_object = var_321_object;
		var_303_int = var_322_int;
		func_946(var_322_int);
		var_320_int = var_319_int;
		func_1648(var_316_float, var_317_object, var_318_float, var_319_int);
		var_316_float = var_309_float;
		int var_369_int;
		func_1432(var_369_int);
		@ReportHit(var_0_bool, var_369_int, var_309_float, var_318_float);
		object var_370_object; float var_371_float;
		var_307_object = var_370_object;
		var_309_float = var_371_float;
		func_1434();
	}
}
EMIT "Stack[-3] = 0";


void func_2179(bool var_16_bool, object var_17_object, object var_18_object)
{
	object var_24_object;
	var_18_object = var_24_object;
	bool var_23_bool;
	func_1614(var_23_bool, var_24_object, "class");
	if(!var_23_bool) { //@nz
		var_16_bool = false;
		return 4;
	}
	string var_21_string;
	var_18_object->GetProperty("class", var_21_string);
	if(var_21_string == "rat") {
		var_16_bool = false;
		return 4;
	EMIT "GOTO 0x89b";
	}
	if(var_21_string == "dog") {
		var_16_bool = false;
		return 4;
	}
	bool var_22_bool;
	@CanSee(var_22_bool, var_17_object);
	bool var_38_bool = true;
	if(var_22_bool != 1) {
		float var_40_float; object var_41_object;
		func_1606(var_40_float, var_41_object);
		var_49_bool = var_40_float <= 250000.0;
		if(var_49_bool != 1)
			var_38_bool = false;
	}
	if(var_38_bool != 0) {
		@ReportReputationChange(var_41_object, var_18_object, -0.3);
		var_16_bool = true;
		return 4;
	}
	var_16_bool = false;
}


// @pe
void func_645(object var_63_object)
{
	object var_65_object;
	var_63_object = var_65_object;
	bool var_64_bool;
	func_2169(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		object var_68_object;
		var_63_object = var_68_object;
		func_683(var_68_object);
	}
}


void func_163(void)
{
	bool var_65_bool;
	func_1918(var_65_bool);
	if(!var_65_bool) //@nz
		func_2070();
}


void func_1193(bool var_0_bool, bool var_1_bool, bool var_273_bool, float var_274_float)
{
	int var_277_int;
	@irand(var_277_int, var_1_bool);
	var_277_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_277_int));
	@WaitForAnimEnd();
	bool var_278_bool;
	func_1400(var_277_int, var_278_bool);
	bool var_299_bool;
	func_1816(var_299_bool, var_0_bool);
	if(!var_299_bool) { //@nz
		@StopAsync();
		var_273_bool = false;
		return 4;
	}
	float var_302_float; int var_303_int;
	var_274_float = var_302_float;
	var_277_int = var_303_int;
	func_1154(var_278_bool, var_302_float, var_303_int);
	@HasAnimation(var_278_bool, "all", ("attack_middle" + var_277_int));
	if(var_278_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_277_int));
		@WaitForAnimEnd();
		bool var_379_bool;
		func_1816(var_379_bool, var_0_bool);
		if(!var_379_bool) { //@nz
			@StopAsync();
			var_273_bool = false;
			return 4;
		}
		float var_382_float; int var_383_int;
		var_274_float = var_382_float;
		var_277_int = var_383_int;
		func_1154(var_278_bool, var_382_float, var_383_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_277_int));
	bool var_388_bool;
	func_1273(var_388_bool, 0.75);
	@StopAsync();
	var_273_bool = true;
}


void func_683(object var_68_object)
{
	bool var_70_bool;
	
	for(;;) {
		bool var_71_bool; object var_72_object;
		TaskCall(4);
		func_773(var_71_bool, var_72_object);
		TaskReturn();
		if(var_73_bool != 0) {
			@Face(var_72_object);
			@WaitForAnimEnd(var_70_bool);
			if(!var_70_bool) { //@nz
			} else {
					@PlayAnimation("all", "dattack_begin");
					@WaitForAnimEnd(var_70_bool);
					var_129_bool = !var_70_bool; //@nz
					if(var_129_bool == 0) goto Label_707;
			}
		}
	Label_731:
		for(;;) {
			return 2;

		}

	Label_707:
		float var_130_float; object var_131_object;
		var_68_object = var_131_object;
		func_1606(var_130_float, var_131_object);
		if(var_130_float <= 90000.0) {
			float var_140_float; object var_141_object;
			var_68_object = var_141_object;
			func_1712(var_140_float, var_141_object, 0.2);
		}
		@PlayAnimation("all", "dattack_end");
		@WaitForAnimEnd(var_70_bool);
		if(!var_70_bool) { //@nz
			goto Label_731;
		}
		@StopAsync();
	}
}


void func_1712(float var_140_float, object var_141_object, float var_142_float)
{
	int var_146_int; float var_147_float; float var_148_float;
	object var_150_object;
	var_141_object = var_150_object;
	bool var_149_bool;
	func_1614(var_149_bool, var_150_object, "disease");
	if(!var_149_bool) { //@nz
		var_140_float = 0;
		return 6;
	}
	bool var_153_bool; object var_154_object;
	func_1614(var_153_bool, var_154_object, "armor_disease");
	if(var_153_bool != 0) {
		var_154_object->GetProperty("armor_disease", var_146_int);
		if(var_146_int < 100) {
			var_142_float *= (1 - (var_146_int / 100.0));
		} else {
					var_140_float = 0;
					return 6;
		}
	}
	bool var_163_bool; object var_164_object;
	var_141_object = var_164_object;
	func_1614(var_163_bool, var_164_object, "immunity");
	if(var_163_bool != 0) {
		var_141_object->GetProperty("immunity", var_148_float);
		if(var_148_float < var_142_float) {
			var_141_object->SetProperty("immunity", 0);
			var_147_float = var_142_float - var_148_float;
		} else {
			var_141_object->SetProperty("immunity", (var_148_float - var_142_float));
			var_142_float = var_140_float;
			return 6;

		}
	}
	bool var_170_bool; object var_171_object; float var_173_float;
	var_141_object = var_171_object;
	var_147_float = var_173_float;
	func_1626(var_170_bool, var_171_object, "disease", var_173_float, (float)0, (float)1);
	var_142_float = var_140_float;
	
}


// @pe
void func_2225(void)
{
	var_66_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_732(void)
{
	@StopAsync();
	@StopAnimation();
}


void func_1775(bool var_32_bool, object var_33_object)
{
	bool var_35_bool;
	var_33_object->IsDead(var_35_bool);
	var_35_bool = var_32_bool;
}


void func_1780(bool var_21_bool, object var_22_object)
{
	if(var_22_object == null) {
		var_21_bool = false;
		return 4;
	}
	bool var_28_bool = false;
	var_31_bool = IsFuncExist(var_22_object, "IsDead", 1);
	if(var_31_bool != 0) {
		bool var_32_bool; object var_33_object;
		var_22_object = var_33_object;
		func_1775(var_32_bool, var_33_object);
		if(var_32_bool != 0)
			var_28_bool = true;
	}
	if(var_28_bool != 0) {
		var_21_bool = false;
		return 4;
	}
	object var_25_object;
	@GetScene(var_25_object);
	if(var_25_object == null) {
		var_21_bool = false;
		return 4;
	}
	object var_26_object;
	var_22_object->GetScene(var_26_object);
	if(var_25_object != var_26_object) {
		var_21_bool = false;
		return 4;
	}
	var_21_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1273(bool var_388_bool, float var_389_float)
{
	float var_392_float; bool var_393_bool;
	@rand(var_392_float);
	if(var_392_float < var_389_float) {

		for(;;) {
			@IsAnimationPlaying(var_393_bool);
			if(!var_393_bool) { //@nz
			} else {
				bool var_396_bool;
				func_1337(var_393_bool, var_396_bool);
				if(var_396_bool != 0) {
					var_388_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_388_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


// @pe
void func_773(bool var_71_bool, object var_72_object)
{
	bool var_75_bool; object var_76_object;
	func_786(var_71_bool, var_76_object, var_75_bool, var_76_object, (float)150, (float)3000, false, true);
	var_75_bool = var_71_bool;
}


void func_784(string var_115_string)
{
	var_115_string = "zwalk";
}


void func_1297(bool var_0_bool, bool var_230_bool, float var_231_float)
{
	bool var_237_bool; cvector var_238_cvector; cvector var_239_cvector; cvector var_240_cvector; float var_241_float;
	
	for(;;) {
		@IsAnimationPlaying(var_237_bool);
		if(!var_237_bool) //@nz
			break;
		bool var_243_bool;
		func_1337(var_241_float, var_243_bool);
		if(var_243_bool != 0) {
			var_230_bool = true;
			return 10;
		}
		bool var_268_bool;
		func_1816(var_268_bool, var_0_bool);
		if(!var_268_bool) { //@nz
			var_230_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_238_cvector); //@t
		@GetPFPosition(var_239_cvector);
		var_240_cvector = var_238_cvector - var_239_cvector;
		var_241_float = var_240_cvector | var_240_cvector;
		if(var_241_float < (var_231_float * var_231_float)) {
			bool var_273_bool; float var_274_float;
			var_231_float = var_274_float;
			func_1193(var_240_cvector, var_241_float, var_273_bool, var_274_float);
			var_230_bool = true;
			return 10;
		}
		@sync();
	}
	var_230_bool = false;
}


void func_786(bool var_0_bool, bool var_1_bool, bool var_75_bool, object var_76_object, float var_77_float, float var_78_float, bool var_79_bool, bool var_80_bool)
{
	bool var_89_bool; object var_91_object; cvector var_92_cvector; cvector var_93_cvector; float var_95_float; object var_96_object;
	var_0_bool = false;
	var_1_bool = var_76_object;
	bool var_90_bool;
	var_80_bool = var_90_bool;
	
	for(;;) {
		bool var_97_bool; object var_98_object;
		var_76_object = var_98_object;
		func_926(var_97_bool, var_98_object);
		if(!var_97_bool) { //@nz
			var_75_bool = false;
			return 16;
		}
		var_76_object->GetPosition(var_92_cvector);
		@GetPosition(var_93_cvector);
		var_95_float = (var_92_cvector - var_93_cvector) | (var_92_cvector - var_93_cvector);
		bool var_102_bool = false;
		if(var_78_float > 0) {
			if(var_95_float > (var_78_float * var_78_float))
				var_102_bool = true;
		}
		if(var_102_bool != 0) {
			@Stop();
			var_75_bool = false;
			return 16;
		}
		if(var_95_float > (var_77_float * var_77_float)) {
			var_76_object->GetPFPosition(var_92_cvector);
			@FindPathTo(var_96_object, var_92_cvector);
			if(var_96_object != null) {
				var_96_object = var_91_object;
				var_96_object = null;
			}
			if(var_91_object != null) {
				if(var_90_bool == 0) goto Label_839;
				var_90_bool = false;
				@RotatePath(var_91_object, var_89_bool);
				if(!var_89_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_115_string;
						func_784(var_115_string);
						string var_116_string;
						func_933(var_116_string);
						@FollowPath(var_91_object, var_79_bool, var_89_bool, var_115_string, var_116_string);
						if(!var_89_bool) { //@nz
							if(var_0_bool == 0) goto Label_858;
							var_91_object = null;
						}
					EMIT "GOTO 0x35b";

					Label_858:
						} else {
					var_91_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_89_bool);
					if(!var_89_bool) { //@nz
						if(var_0_bool != 0) {
							var_91_object = null;
							goto Label_886;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_886;
		}
			var_96_object = null;
			goto Label_884;

		Label_884:
			var_91_object = null;

		}
	Label_886:
		for(;;) {
			var_75_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1816(bool var_17_bool, object var_18_object)
{
	object var_22_object;
	var_18_object = var_22_object;
	bool var_21_bool;
	func_1780(var_21_bool, var_22_object);
	if(!var_21_bool) { //@nz
		var_17_bool = false;
		return 2;
	}
	bool var_39_bool; object var_40_object;
	func_1614(var_39_bool, var_40_object, "noaccess");
	if(!var_39_bool) { //@nz
		var_17_bool = true;
		return 2;
	}
	int var_20_int;
	var_40_object->GetProperty("noaccess", var_20_int);
	var_17_bool = var_20_int == 0;
}


void func_1840(object var_16_object, int var_17_int)
{
	object var_29_object; object var_30_object; cvector var_31_cvector; float var_32_float; string var_38_string;
	bool var_39_bool = false;
	if(var_17_int != 4) {
		if(var_17_int != 5)
			var_39_bool = true;
	}
	if(var_39_bool != 0) {
		@GetScene(var_29_object);
		@GetPosition(var_31_cvector);
		@GetEyesHeight(var_32_float);
		var_44_float = GetByIndex(var_31_cvector, 1);
		SetByIndex(var_31_cvector, 1) = (var_44_float + (var_32_float / 2));
		@AddActorByType(var_30_object, "scripted", var_29_object, var_31_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_30_object = null;
		var_29_object = null;
	}
	if(var_16_object == null)
		return 20;
	int var_33_int;
	@GetSecondaryAnimationType(var_33_int);
	if(var_33_int < 0)
		return 20;
	cvector var_34_cvector;
	var_16_object->GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetPosition(var_35_cvector);
	cvector var_36_cvector;
	@GetDirection(var_36_cvector);
	cvector var_37_cvector = var_35_cvector - var_34_cvector;
	var_53_float = GetByIndex(var_37_cvector, 0);
	var_54_float = GetByIndex(var_36_cvector, 0);
	var_56_float = GetByIndex(var_37_cvector, 2);
	var_57_float = GetByIndex(var_36_cvector, 2);
	if(((var_53_float * var_54_float) + (var_56_float * var_57_float)) >= 0)
		var_38_string = "fhit";
	else
		var_38_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_38_string + "1"), (var_38_string + "2"), -10);
	
}


void func_311(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_440(var_11_bool, var_12_object);
}


void func_1337(bool var_0_bool, bool var_243_bool)
{
	cvector var_249_cvector; cvector var_250_cvector;
	bool var_254_bool;
	func_1816(var_254_bool, var_0_bool);
	if(!var_254_bool) { //@nz
		var_243_bool = false;
		return 10;
	}
	bool var_257_bool;
	float var_253_float;
	func_1389(var_253_float, var_257_bool);
	if(var_257_bool != 0) {
		var_0_bool->GetPFPosition(var_249_cvector); //@t
		@GetPFPosition(var_250_cvector);
		var_0_bool->GetAttackDistance(var_253_float); //@t
		var_253_float += 50;
		if(((var_249_cvector - var_250_cvector) | (var_249_cvector - var_250_cvector)) <= (var_253_float * var_253_float)) {
			func_1370(var_253_float);
			var_243_bool = true;
			return 10;
		}
	}
	var_243_bool = false;
}


void func_319(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_447(var_16_bool, var_17_int);
}


void func_336(bool var_2_bool, object var_13_object)
{
	bool var_18_bool; object var_19_object;
	func_1816(var_18_bool, var_19_object);
	if(!var_18_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_16_bool;
	@IsPlayerActor(var_19_object, var_16_bool);
	if(!var_16_bool) //@nz
		return 4;
	int var_55_int; object var_56_object;
	var_13_object = var_56_object;
	func_2009(var_56_object);
	int var_17_int;
	var_55_int = var_17_int;
	if(var_17_int > 0) {
		if(var_17_int > 1)
			func_319(var_17_int);
		object var_62_object;
		var_13_object = var_62_object;
		func_2012(var_62_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1370(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_263_cvector;
	var_0_bool->GetPFPosition(var_263_cvector); //@t
	cvector var_264_cvector;
	@GetPFPosition(var_264_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_1389(bool var_0_bool, bool var_222_bool)
{
	bool var_224_bool;
	var_227_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_227_bool != 0) {
		var_0_bool->IsAttacking(var_224_bool); //@t
		var_224_bool = var_222_bool;
	}
	var_222_bool = false;
}


void func_1907(object var_208_object)
{
	cvector var_212_cvector;
	var_208_object->GetPosition(var_212_cvector);
	cvector var_213_cvector;
	@GetPosition(var_213_cvector);
	cvector var_214_cvector = var_212_cvector - var_213_cvector;
	var_215_float = GetByIndex(var_214_cvector, 0);
	var_216_float = GetByIndex(var_214_cvector, 2);
	@RotateAsync(var_215_float, var_216_float);
}


void func_1400(bool var_2_bool, object var_4_object)
{
	int var_287_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_286_float;
	@rand(var_286_float);
	float var_293_float;
	func_1438(var_293_float);
	if(var_286_float < var_293_float) {
		@irand(var_287_int, var_2_bool);
		@Speak("attack" + (var_287_int + 1));
		int var_298_int;
		func_1436(var_298_int);
		var_4_object = var_298_int;
	}
}


void func_376(bool var_0_bool, bool var_1_bool)
{
	float var_76_float; cvector var_77_cvector; cvector var_78_cvector; float var_79_float; bool var_80_bool; object var_81_object; bool var_82_bool;
	@rand(var_76_float, 0.5);
	@Sleep(var_76_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_388:
				@GetPosition(var_78_cvector);
				@GetCameraFarDistance(var_79_float);
				@GetRandomPFPointInCircle(var_77_cvector, var_78_cvector, (var_79_float * 2.5), var_80_bool);
				if(var_80_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_388;
			}
				var_1_bool = false;
		}
		}
		goto Label_405;

	Label_405:
		@FindShiftedPathTo(var_81_object, var_77_cvector);
		if(var_81_object != null) {
			@RotatePath(var_81_object, var_82_bool);
			if(var_82_bool != 0) {
				bool var_90_bool;
				func_454(var_90_bool);
				@FollowPath(var_81_object, var_90_bool, var_82_bool);
				var_81_object = null;
				if(var_82_bool != 0) {
					TaskCall(2);
					func_571();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_81_object = null;
	}
	
}


void func_1918(bool var_65_bool)
{
	bool var_67_bool;
	@IsLoaded(var_67_bool);
	var_67_bool = var_65_bool;
}


// @pe
void func_1923(float var_352_float, float var_353_float, float var_354_float)
{
	if(var_353_float < var_354_float)
		var_353_float = var_352_float;
	else
		var_354_float = var_352_float;
	
}


// @pe
void func_1930(float var_362_float, float var_363_float, float var_364_float, float var_365_float)
{
	if(var_363_float < var_364_float) {
		var_364_float = var_362_float;
		return 0;
	}
	if(var_363_float > var_365_float) {
		var_365_float = var_362_float;
		return 0;
	}
	var_363_float = var_362_float;
}


void func_910(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1941(int var_23_int)
{
	float var_25_float;
	@GetGameTime(var_25_float);
	var_23_int = 1 + (var_25_float / 24);
}


void func_1432(int var_369_int)
{
	var_369_int = 0;
}


// @pe
void func_1434(void)
{
}


void func_1436(int var_298_int)
{
	var_298_int = 1;
}


// @pe
void func_926(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_1816(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_1438(float var_293_float)
{
	var_293_float = 0.5;
}


// @pe
void func_1950(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	TaskCall(0);
	func_0(var_14_object);
	TaskReturn();
}


void func_933(string var_116_string)
{
	var_116_string = "run";
}


void func_1447(bool var_0_bool, bool var_1_bool, bool var_146_bool, object var_147_object, float var_148_float, float var_149_float, bool var_150_bool, bool var_151_bool)
{
	bool var_162_bool; object var_164_object; cvector var_165_cvector; cvector var_166_cvector; float var_168_float; object var_169_object;
	var_0_bool = false;
	var_1_bool = var_147_object;
	bool var_163_bool;
	var_151_bool = var_163_bool;
	
	for(;;) {
		bool var_170_bool; object var_171_object;
		var_147_object = var_171_object;
		func_1587(var_170_bool, var_171_object);
		if(!var_170_bool) { //@nz
			var_146_bool = false;
			return 16;
		}
		var_147_object->GetPosition(var_165_cvector);
		@GetPosition(var_166_cvector);
		var_168_float = (var_165_cvector - var_166_cvector) | (var_165_cvector - var_166_cvector);
		bool var_175_bool = false;
		if(var_149_float > 0) {
			if(var_168_float > (var_149_float * var_149_float))
				var_175_bool = true;
		}
		if(var_175_bool != 0) {
			@Stop();
			var_146_bool = false;
			return 16;
		}
		if(var_168_float > (var_148_float * var_148_float)) {
			var_147_object->GetPFPosition(var_165_cvector);
			@FindPathTo(var_169_object, var_165_cvector);
			if(var_169_object != null) {
				var_169_object = var_164_object;
				var_169_object = null;
			}
			if(var_164_object != null) {
				if(var_163_bool == 0) goto Label_1500;
				var_163_bool = false;
				@RotatePath(var_164_object, var_162_bool);
				if(!var_162_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_188_string;
						func_1594(var_188_string);
						string var_189_string;
						func_1596(var_189_string);
						@FollowPath(var_164_object, var_150_bool, var_162_bool, var_188_string, var_189_string);
						if(!var_162_bool) { //@nz
							if(var_0_bool == 0) goto Label_1519;
							var_164_object = null;
						}
					EMIT "GOTO 0x5f0";

					Label_1519:
						} else {
					var_164_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_162_bool);
					if(!var_162_bool) { //@nz
						if(var_0_bool != 0) {
							var_164_object = null;
							goto Label_1547;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1547;
		}
			var_169_object = null;
			goto Label_1545;

		Label_1545:
			var_164_object = null;

		}
	Label_1547:
		for(;;) {
			var_146_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_935(object var_89_object)
{
	object var_95_object;
	func_949(var_90_object, var_91_int, var_92_int, var_93_bool, var_94_int, var_95_object, var_95_object, true, 180.0);
}


// @pe
void func_943(float var_313_float)
{
	var_313_float = 0.03;
}


// @pe
void func_946(int var_320_int)
{
	var_320_int = 0;
}


void func_949(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_95_object, bool var_96_bool, float var_97_float, bool var_152_bool)
{
	bool var_108_bool; bool var_109_bool; float var_110_float; cvector var_111_cvector; cvector var_112_cvector; bool var_113_bool; bool var_114_bool; float var_116_float; float var_117_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_108_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_108_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_109_bool, ("attack" + (var_2_bool + 1)));
			if(!var_109_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_131_bool = IsFuncExist(var_95_object, "@GetAttackDistance", 1);
			if(var_131_bool != 0) {
				var_95_object->GetAttackDistance(var_110_float);
				var_110_float += 50;
			} else {
								var_97_float = var_110_float;

			}
			if(var_110_float >= 150)
				var_110_float = 150;
			var_3_object = false;
			var_0_bool = var_95_object;
			@IsPlayerActor(var_0_bool, var_113_bool);
			if(var_96_bool != 0)
				var_114_bool = false;
			else
				var_114_bool = true;

			for(;;) {
				bool var_136_bool = false;
				bool var_137_bool;
				func_1816(var_137_bool, var_0_bool);
				if(var_137_bool != 0) {
					if(!var_3_object) //@nz
						var_136_bool = true;
				}
				if(var_136_bool != 0) {
					var_0_bool->GetPFPosition(var_111_cvector); //@t
					@GetPFPosition(var_112_cvector);
					var_116_float = (var_111_cvector - var_112_cvector) | (var_111_cvector - var_112_cvector);
					if(var_116_float >= ((400.0 + var_110_float) * (400.0 + var_110_float))) {
						bool var_146_bool; float var_148_float;
						var_110_float = var_148_float;
						TaskCall(6);
						func_1447(var_152_bool, var_153_object, var_146_bool, var_0_bool, var_148_float, 3000.0, true, false);
						TaskReturn();
						if(!var_152_bool) { //@nz
						} else {
							var_114_bool = false;
					} else {
					if(var_116_float >= (var_97_float * var_97_float)) {
						if(!var_114_bool) { //@nz
							func_1907(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_114_bool = true;
						}
						@rand(var_117_float);
						bool var_219_bool;
						var_221_bool = var_117_float < 0.6;
						if(var_221_bool != 1) {
							bool var_222_bool;
							func_1389(true, var_222_bool);
							if(var_222_bool != 1)
								var_219_bool = false;
						}
						if(var_219_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_230_bool; float var_231_float;
							func_1297(var_117_float, var_230_bool, var_231_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_400_bool;
							func_1389(var_117_float, var_400_bool);
							var_401_bool = !var_400_bool; //@nz
							if(var_401_bool == 0) goto Label_1127;
							bool var_402_bool;
							func_1816(var_402_bool, var_0_bool);
							if(!var_402_bool) { //@nz
								goto Label_1137;
							}
							var_0_bool->GetPFPosition(var_111_cvector); //@t
							@GetPFPosition(var_112_cvector);
							var_116_float = (var_111_cvector - var_112_cvector) | (var_111_cvector - var_112_cvector);
							if(!(var_116_float < (var_231_float * var_231_float))) goto Label_1127;
							bool var_407_bool; float var_408_float;
							var_97_float = var_408_float;
							func_1193(var_116_float, var_117_float, var_407_bool, var_408_float);
							var_409_bool = !var_407_bool; //@nz
							if(var_409_bool == 0) goto Label_1127;
							goto Label_1137;
					}
						bool var_410_bool; float var_411_float;
						var_97_float = var_411_float;
						func_1193(var_116_float, var_117_float, var_410_bool, var_411_float);
						if(!var_410_bool) { //@nz
							goto Label_1137;
						}
						var_114_bool = true;

					}
				Label_1127:
					goto Label_1136;
					}
					Label_1136:
					}
				}
			Label_1137:
				@WaitForAnimEnd();
				if(var_3_object != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_113_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_440(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_447(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_1985(string var_114_string, int var_115_int)
{
	string var_117_string = "idle";
	if(var_115_int != 0)
		var_117_string += var_115_int;
	var_117_string = var_114_string;
}


void func_454(bool var_90_bool)
{
	var_90_bool = false;
}


void func_1992(int var_108_int)
{
	int var_111_int; bool var_112_bool;
	var_111_int = 0;
	
	for(;;) {
		string var_114_string; int var_115_int;
		var_111_int = var_115_int;
		func_1985(var_114_string, var_115_int);
		@HasAnimation(var_112_bool, "all", var_114_string);
		if(!var_112_bool) //@nz
			break;
		var_111_int += 1;
	}
	var_111_int = var_108_int;
}


// @pe
void func_2009(int var_55_int)
{
	var_55_int = 2;
}


// @pe
void func_2012(object var_62_object)
{
	object var_63_object;
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_63_object);
	TaskReturn();
}


// @pe
void func_2020(int var_53_int, object var_54_object)
{
	object var_56_object;
	var_54_object = var_56_object;
	bool var_55_bool;
	func_1816(var_55_bool, var_56_object);
	if(var_55_bool != 0)
		var_53_int = 2;
	else
		var_53_int = 0;
	
}


// @pe
void func_2030(object var_88_object)
{
	object var_89_object;
	var_88_object = var_89_object;
	TaskCall(5);
	func_935(var_89_object);
	TaskReturn();
}


// @pe
void func_2038(int var_51_int, object var_52_object)
{
	object var_54_object;
	var_52_object = var_54_object;
	int var_53_int;
	func_2020(var_53_int, var_54_object);
	var_53_int = var_51_int;
}


// @pe
void func_2045(object var_87_object)
{
	object var_88_object;
	var_87_object = var_88_object;
	func_2030(var_88_object);
}


