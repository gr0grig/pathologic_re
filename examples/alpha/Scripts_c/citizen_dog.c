// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1963(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			object var_18_object;
			var_11_object = var_18_object;
			func_1966(var_18_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_1972();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, object var_7_object, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int, bool var_13_bool, object var_14_object)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		@SensePlayerOnly(true);
		func_1973();
		func_163();
	
		for(;;) {
			var_2_bool = false;
			func_376(var_9_bool, var_10_object);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1963(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_object = var_21_object;
			func_1966(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1922(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_55_object;
			var_11_object = var_55_object;
			func_1932(var_55_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		int var_14_int;
		object var_16_object;
		var_11_bool = var_16_object;
		object var_17_object;
		var_12_object = var_17_object;
		bool var_15_bool;
		func_1990(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_65_int; object var_66_object;
			var_11_bool = var_66_object;
			func_1940(var_65_int, var_66_object);
			var_65_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_311(var_14_int);
				object var_102_object;
				var_11_bool = var_102_object;
				func_1947(var_102_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1953(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_object = var_21_object;
			func_1956();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1958(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			string var_23_string; object var_24_object;
			var_12_object = var_23_string;
			var_11_bool = var_24_object;
			func_1961();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_12_object;
		func_336(var_12_object, var_12_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_12_object;
		func_336(var_12_object, var_12_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		if(var_11_object != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_311(var_10_object);
		func_1972();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_311(var_11_object);
		object var_13_object;
		var_11_object = var_13_object;
		func_1867();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1963(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_object = var_20_object;
			func_1966(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1922(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_54_object;
			var_11_object = var_54_object;
			func_1932(var_54_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		int var_14_int;
		object var_16_object;
		var_11_bool = var_16_object;
		object var_17_object;
		var_12_object = var_17_object;
		bool var_15_bool;
		func_1990(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_65_int; object var_66_object;
			var_11_bool = var_66_object;
			func_1940(var_65_int, var_66_object);
			var_65_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_640();
				object var_101_object;
				var_11_bool = var_101_object;
				func_1947(var_101_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1953(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_object = var_20_object;
			func_1956();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1958(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			string var_22_string; object var_23_object;
			var_12_object = var_22_string;
			var_11_bool = var_23_object;
			func_1961();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_640();
		func_1972();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1963(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_22_object;
			var_11_object = var_22_object;
			func_1966(var_22_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1922(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_56_object;
			var_11_object = var_56_object;
			func_1932(var_56_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		int var_14_int;
		object var_16_object;
		var_11_bool = var_16_object;
		object var_17_object;
		var_12_object = var_17_object;
		bool var_15_bool;
		func_1990(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_65_int; object var_66_object;
			var_11_bool = var_66_object;
			func_1940(var_65_int, var_66_object);
			var_65_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_809();
				object var_103_object;
				var_11_bool = var_103_object;
				func_1947(var_103_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1953(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_22_object;
			var_11_object = var_22_object;
			func_1956();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1958(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_809();
			string var_24_string; object var_25_object;
			var_12_object = var_24_string;
			var_11_bool = var_25_object;
			func_1961();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_809();
		object var_14_object;
		var_11_object = var_14_object;
		func_1867();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		if(var_11_object != 111)
			return 4;
		bool var_18_bool;
		func_1674(var_18_bool, var_0_bool);
		if(!var_18_bool) { //@nz
			func_809();
			return 4;
		}
		cvector var_14_cvector;
		@GetDirection(var_14_cvector);
		cvector var_55_cvector;
		func_1542(var_55_cvector, var_0_bool);
		cvector var_15_cvector;
		var_55_cvector = var_15_cvector;
		float var_61_float; cvector var_62_cvector; cvector var_63_cvector;
		var_14_cvector = var_62_cvector;
		var_15_cvector = var_63_cvector;
		func_1829(var_61_float, var_62_cvector, var_63_cvector);
		if(var_61_float < 0.49999997)
			func_1765(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_809();
		func_1972();
	}

}


task task_4
{
}


task task_5
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_1507(var_10_object);
		func_1972();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, int var_11_int)
	{
		if(var_11_int != 0)
			return 0;
		bool var_14_bool;
		func_1523(var_14_bool, var_1_bool);
		if(!var_14_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object)
	{
		func_1507(var_11_object);
		object var_13_object;
		var_11_object = var_13_object;
		func_1867();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_1846(var_12_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1698(var_16_int, var_17_float);
}


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1792(float var_368_float, float var_369_float, float var_370_float)
{
	if(var_369_float < var_370_float)
		var_369_float = var_368_float;
	else
		var_370_float = var_368_float;
	
}


// @pe
void func_1922(int var_67_int, object var_68_object)
{
	object var_70_object;
	var_68_object = var_70_object;
	bool var_69_bool;
	func_1674(var_69_bool, var_70_object);
	if(var_69_bool != 0)
		var_67_int = 2;
	else
		var_67_int = 0;
	
}


// @pe
void func_0(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_33(var_14_object);
	object var_64_object;
	var_13_object = var_64_object;
	func_2069();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_645(bool var_0_bool, object var_63_object)
{
	var_0_bool = var_63_object;
	bool var_70_bool;
	func_696(var_70_bool);
	cvector var_68_cvector;
	@GetDirection(var_68_cvector);
	cvector var_78_cvector;
	func_1542(var_78_cvector, var_0_bool);
	cvector var_69_cvector;
	var_78_cvector = var_69_cvector;
	float var_84_float; cvector var_85_cvector; cvector var_86_cvector;
	var_68_cvector = var_85_cvector;
	var_69_cvector = var_86_cvector;
	func_1829(var_84_float, var_85_cvector, var_86_cvector);
	if(var_84_float < 0) {
		func_1765(var_0_bool);
		var_70_bool = true;
	} else {
		@Sleep(1.5, var_70_bool);
	}
	if(var_70_bool != 0) {
		func_1765(var_0_bool);
		@SetTimer(111, 0.5);
		@Sleep(5.0);
		@KillTimer(111);
	}
	@StopAsync();
	@UnlookAsync("head");
	
}


void func_1542(cvector var_55_cvector, object var_56_object)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector;
	var_56_object->GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
}


// @pe
void func_1799(float var_378_float, float var_379_float, float var_380_float, float var_381_float)
{
	if(var_379_float < var_380_float) {
		var_380_float = var_378_float;
		return 0;
	}
	if(var_379_float > var_381_float) {
		var_381_float = var_378_float;
		return 0;
	}
	var_379_float = var_378_float;
}


void func_1674(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1638(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1557(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


// @pe
void func_1932(object var_104_object)
{
	object var_105_object;
	var_104_object = var_105_object;
	TaskCall(4);
	func_871(var_105_object);
	TaskReturn();
}


void func_1549(float var_55_float, object var_56_object)
{
	cvector var_60_cvector;
	@GetPosition(var_60_cvector);
	cvector var_61_cvector;
	var_56_object->GetPosition(var_61_cvector);
	var_55_float = (var_61_cvector - var_60_cvector) | (var_61_cvector - var_60_cvector);
}


// @pe
void func_1810(float var_64_float, cvector var_65_cvector, cvector var_66_cvector)
{
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_66_cvector, 0);
	var_70_float = GetByIndex(var_65_cvector, 2);
	var_71_float = GetByIndex(var_66_cvector, 2);
	var_64_float = (var_67_float * var_68_float) + (var_70_float * var_71_float);
}


void func_1530(string var_204_string)
{
	var_204_string = "walk";
}


// @pe
void func_1940(int var_65_int, object var_66_object)
{
	object var_68_object;
	var_66_object = var_68_object;
	int var_67_int;
	func_1922(var_67_int, var_68_object);
	var_67_int = var_65_int;
}


// @pe
void func_2069(void)
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1557(bool var_38_bool, object var_39_object, string var_40_string)
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


void func_1306(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_279_cvector;
	var_0_bool->GetPFPosition(var_279_cvector); //@t
	cvector var_280_cvector;
	@GetPFPosition(var_280_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


// @pe
void func_1947(object var_103_object)
{
	object var_104_object;
	var_103_object = var_104_object;
	func_1932(var_104_object);
}


// @pe
void func_1819(float var_73_float, cvector var_74_cvector)
{
	var_75_float = GetByIndex(var_74_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_78_float = GetByIndex(var_74_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_73_float = sqrt((var_75_float * var_76_float) + (var_78_float * var_79_float));
}


void func_33(object var_14_object)
{
	cvector var_25_cvector; cvector var_26_cvector; cvector var_27_cvector; cvector var_28_cvector; string var_29_string; object var_30_object; bool var_31_bool; bool var_32_bool; float var_33_float; cvector var_34_cvector;
	if(var_14_object == null) {
		func_120("fdie");
	} else {
		var_14_object->GetPosition(var_25_cvector);
		@GetPosition(var_26_cvector);
		@GetDirection(var_27_cvector);
		var_28_cvector = var_26_cvector - var_25_cvector;
		var_39_float = GetByIndex(var_28_cvector, 0);
		var_40_float = GetByIndex(var_27_cvector, 0);
		var_42_float = GetByIndex(var_28_cvector, 2);
		var_43_float = GetByIndex(var_27_cvector, 2);
		if(((var_39_float * var_40_float) + (var_42_float * var_43_float)) >= 0)
			var_29_string = "fdie";
		else
			var_29_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_14_object = var_30_object;
		var_50_bool = IsFuncExist(var_14_object, "GetScriptProperty", 2);
		if(var_50_bool != 0) {
			var_14_object->HasScriptProperty(var_31_bool, "Owner");
			if(var_31_bool != 0) {
				var_14_object->GetScriptProperty(var_30_object, "Owner");
				if(var_30_object == null)
					var_14_object = var_30_object;
			}
		}
		var_57_bool = IsFuncExist(var_30_object, "@GetEyesHeight", 1);
		if(var_57_bool != 0) {
			var_30_object->GetEyesHeight(var_33_float);
			var_34_cvector = [0.0, 0.0, 0.0];
			var_58_float = GetByIndex(var_34_cvector, 1);
			var_33_float = var_58_float;
			SetByIndex(var_34_cvector, 1) = var_58_float;
			@LookAsync(var_14_object, "head", var_34_cvector);
			var_32_bool = true;
		} else {
			var_32_bool = false;

		}
		@PlayAnimation("all", var_29_string);
		@WaitForAnimEnd();
		if(var_32_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_29_string);
		@RemoveEnvelope();
		var_30_object = null;
	}
	
}


// @pe
void func_1953(int var_14_int)
{
	var_14_int = 0;
}


void func_163(void)
{
	bool var_13_bool;
	func_1776(var_13_bool);
	if(!var_13_bool) //@nz
		func_1972();
}


// @pe
void func_1956(void)
{
}


// @pe
void func_1829(float var_61_float, cvector var_62_cvector, cvector var_63_cvector)
{
	cvector var_65_cvector;
	var_62_cvector = var_65_cvector;
	cvector var_66_cvector;
	var_63_cvector = var_66_cvector;
	float var_64_float;
	func_1810(var_64_float, var_65_cvector, var_66_cvector);
	float var_73_float; cvector var_74_cvector;
	var_62_cvector = var_74_cvector;
	func_1819(var_73_float, var_74_cvector);
	float var_82_float; cvector var_83_cvector;
	var_63_cvector = var_83_cvector;
	func_1819(var_82_float, var_83_cvector);
	var_61_float = var_64_float / (var_73_float * var_82_float);
}


// @pe
void func_1958(int var_15_int)
{
	var_15_int = 0;
}


void func_1569(float var_332_float, object var_333_object, float var_334_float, int var_335_int)
{
	int var_345_int; int var_347_int;
	object var_352_object;
	var_333_object = var_352_object;
	bool var_351_bool;
	func_1557(var_351_bool, var_352_object, "health");
	if(!var_351_bool) //@nz
		var_332_float = 0.0;
	bool var_355_bool; object var_356_object;
	func_1557(var_355_bool, var_356_object, "armor");
	if(!var_355_bool) //@nz
		var_345_int = 0;
	else
		var_356_object->GetProperty("armor", var_345_int);
	string var_360_string; int var_361_int;
	var_335_int = var_361_int;
	func_1534(var_360_string, var_361_int);
	string var_346_string = "armor_" + var_360_string;
	bool var_364_bool; object var_365_object; string var_366_string;
	var_333_object = var_365_object;
	func_1557(var_364_bool, var_365_object, var_366_string);
	if(!var_364_bool) //@nz
		var_347_int = 0;
	else
		var_333_object->GetProperty(var_366_string, var_347_int);

	float var_368_float;
	func_1792(var_368_float, ((var_345_int + var_347_int) / 100.0), (float)1);
	float var_348_float;
	var_368_float = var_348_float;
	float var_349_float;
	var_333_object->GetProperty("health", var_349_float);
	float var_378_float;
	func_1799(var_378_float, (var_349_float - (var_334_float * (1 - var_348_float))), (float)0, (float)1);
	var_333_object->SetProperty("health", var_378_float);
	float var_350_float = var_332_float;
	
}


void func_1698(object var_15_object, int var_16_int)
{
	object var_28_object; object var_29_object; cvector var_30_cvector; float var_31_float; string var_37_string;
	bool var_38_bool = false;
	if(var_16_int != 4) {
		if(var_16_int != 5)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		@GetScene(var_28_object);
		@GetPosition(var_30_cvector);
		@GetEyesHeight(var_31_float);
		var_43_float = GetByIndex(var_30_cvector, 1);
		SetByIndex(var_30_cvector, 1) = (var_43_float + (var_31_float / 2));
		@AddActorByType(var_29_object, "scripted", var_28_object, var_30_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_29_object = null;
		var_28_object = null;
	}
	if(var_15_object == null)
		return 20;
	int var_32_int;
	@GetSecondaryAnimationType(var_32_int);
	if(var_32_int < 0)
		return 20;
	cvector var_33_cvector;
	var_15_object->GetPosition(var_33_cvector);
	cvector var_34_cvector;
	@GetPosition(var_34_cvector);
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_36_cvector = var_34_cvector - var_33_cvector;
	var_52_float = GetByIndex(var_36_cvector, 0);
	var_53_float = GetByIndex(var_35_cvector, 0);
	var_55_float = GetByIndex(var_36_cvector, 2);
	var_56_float = GetByIndex(var_35_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_37_string = "fhit";
	else
		var_37_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_37_string + "1"), (var_37_string + "2"), -10);
	
}


// @pe
void func_1961(void)
{
}


void func_809(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


// @pe
void func_1963(int var_14_int)
{
	var_14_int = 2;
}


void func_1325(bool var_0_bool, bool var_238_bool)
{
	bool var_240_bool;
	var_243_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_243_bool != 0) {
		var_0_bool->IsAttacking(var_240_bool); //@t
		var_240_bool = var_238_bool;
	}
	var_238_bool = false;
}


// @pe
void func_1966(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_1977(var_23_object);
}


void func_1972(void)
{
}


void func_1973(void)
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


// @pe
void func_1846(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
}


void func_311(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_440(var_10_bool, var_11_object);
}


void func_440(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_696(bool var_0_bool)
{
	func_1781(var_0_bool);
}


void func_1336(bool var_2_bool, object var_4_object)
{
	int var_303_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_302_float;
	@rand(var_302_float);
	float var_309_float;
	func_1374(var_309_float);
	if(var_302_float < var_309_float) {
		@irand(var_303_int, var_2_bool);
		@Speak("attack" + (var_303_int + 1));
		int var_314_int;
		func_1372(var_314_int);
		var_4_object = var_314_int;
	}
}


void func_571(void)
{
	int var_49_int; int var_50_int; bool var_51_bool; float var_52_float; bool var_53_bool;
	@WaitForAnimEnd();
	bool var_54_bool;
	func_1776(var_54_bool);
	if(!var_54_bool) //@nz
		return 14;
	int var_56_int;
	func_1888(var_56_int);
	int var_47_int;
	var_56_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_69_bool = false;
		if(var_48_int < 5) {
			bool var_72_bool;
			func_1776(var_72_bool);
			if(var_72_bool != 0)
				var_69_bool = true;
		}
		if(var_69_bool != 0) {
			@irand(var_49_int, 3);
			if(var_49_int == 0) {
				if(var_47_int == 0) goto Label_618;
				@irand(var_50_int, var_47_int);
				string var_78_string; int var_79_int;
				var_50_int = var_79_int;
				func_1881(var_78_string, var_79_int);
				@PlayAnimation("all", var_78_string);
				@WaitForAnimEnd(var_51_bool);
				if(!var_51_bool) { //@nz
				} else {
			} else {
			if(var_49_int == 1) {
				@rand(var_52_float, 4);
				@Sleep((var_52_float + 1), var_53_bool);
				if(!var_53_bool) { //@nz
					goto Label_639;
				}
			} else if(var_48_int != 0) {
				goto Label_639;
			}
			}
				var_48_int += 1;
			}
		}
	Label_639:
		return 14;

	}
	
}


void func_1209(bool var_404_bool, float var_405_float)
{
	float var_408_float; bool var_409_bool;
	@rand(var_408_float);
	if(var_408_float < var_405_float) {

		for(;;) {
			@IsAnimationPlaying(var_409_bool);
			if(!var_409_bool) { //@nz
			} else {
				bool var_412_bool;
				func_1273(var_409_bool, var_412_bool);
				if(var_412_bool != 0) {
					var_404_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_404_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1977(object var_23_object)
{
	bool var_25_bool;
	var_26_bool = GlobalVars[0];
	if(var_26_bool != 0) {
		@IsOverrideActive(var_25_bool);
		if(!var_25_bool) //@nz
			@WorkWithCorpse(var_23_object);
	}
}


void func_447(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_319(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_447(var_15_bool, var_16_int);
}


void func_1090(bool var_0_bool, float var_318_float, int var_319_int)
{
	object var_323_object; float var_324_float; float var_325_float;
	@GetVictim((var_318_float * 0.9), var_323_object);
	@ReportAttack(var_0_bool);
	if(var_323_object == var_0_bool) {
		float var_329_float; object var_330_object; int var_331_int;
		var_323_object = var_330_object;
		var_319_int = var_331_int;
		func_879(var_331_int);
		var_329_float = var_324_float;
		float var_332_float; object var_333_object; float var_334_float; int var_335_int;
		var_323_object = var_333_object;
		int var_336_int; object var_337_object; int var_338_int;
		var_323_object = var_337_object;
		var_319_int = var_338_int;
		func_882(var_338_int);
		var_336_int = var_335_int;
		func_1569(var_332_float, var_333_object, var_334_float, var_335_int);
		var_332_float = var_325_float;
		int var_385_int;
		func_1368(var_385_int);
		@ReportHit(var_0_bool, var_385_int, var_325_float, var_334_float);
		object var_386_object; float var_387_float;
		var_323_object = var_386_object;
		var_325_float = var_387_float;
		func_1370();
	}
}
EMIT "Stack[-3] = 0";


void func_1988(bool var_56_bool)
{
	var_56_bool = false;
}


void func_1990(bool var_15_bool, object var_16_object, object var_17_object)
{
	bool var_22_bool; object var_23_object;
	func_1557(var_22_bool, var_23_object, "class");
	if(!var_22_bool) { //@nz
		var_15_bool = false;
		return 4;
	}
	string var_20_string;
	var_23_object->GetProperty("class", var_20_string);
	bool var_33_bool = false;
	bool var_34_bool = false;
	bool var_35_bool = false;
	bool var_36_bool = false;
	bool var_37_bool = false;
	bool var_38_bool = false;
	if(var_20_string != "littleboy") {
		if(var_20_string != "littlegirl")
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		if(var_20_string != "boy")
			var_37_bool = true;
	}
	if(var_37_bool != 0) {
		if(var_20_string != "girl")
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		if(var_20_string != "wasted_girl")
			var_35_bool = true;
	}
	if(var_35_bool != 0) {
		if(var_20_string != "woman")
			var_34_bool = true;
	}
	if(var_34_bool != 0) {
		if(var_20_string != "unosha")
			var_33_bool = true;
	}
	if(var_33_bool != 0) {
		var_15_bool = false;
		return 4;
	}
	bool var_21_bool;
	@CanSee(var_21_bool, var_16_object);
	bool var_53_bool = true;
	if(var_21_bool != 1) {
		float var_55_float; object var_56_object;
		var_16_object = var_56_object;
		func_1549(var_55_float, var_56_object);
		var_64_bool = var_55_float <= 250000.0;
		if(var_64_bool != 1)
			var_53_bool = false;
	}
	if(var_53_bool != 0) {
		var_15_bool = true;
		return 4;
	}
	var_15_bool = false;
}


void func_454(bool var_38_bool)
{
	var_38_bool = false;
}


void func_336(bool var_2_bool, object var_12_object)
{
	bool var_17_bool; object var_18_object;
	func_1674(var_17_bool, var_18_object);
	if(!var_17_bool) //@nz
		return 4;
	if(var_2_bool != 0)
		return 4;
	bool var_15_bool;
	@IsPlayerActor(var_18_object, var_15_bool);
	if(!var_15_bool) //@nz
		return 4;
	int var_54_int; object var_55_object;
	var_12_object = var_55_object;
	func_1905(var_55_object);
	int var_16_int;
	var_54_int = var_16_int;
	if(var_16_int > 0) {
		if(var_16_int > 1)
			func_319(var_16_int);
		object var_62_object;
		var_12_object = var_62_object;
		func_1914(var_62_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1233(bool var_0_bool, bool var_246_bool, float var_247_float)
{
	bool var_253_bool; cvector var_254_cvector; cvector var_255_cvector; cvector var_256_cvector; float var_257_float;
	
	for(;;) {
		@IsAnimationPlaying(var_253_bool);
		if(!var_253_bool) //@nz
			break;
		bool var_259_bool;
		func_1273(var_257_float, var_259_bool);
		if(var_259_bool != 0) {
			var_246_bool = true;
			return 10;
		}
		bool var_284_bool;
		func_1674(var_284_bool, var_0_bool);
		if(!var_284_bool) { //@nz
			var_246_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_254_cvector); //@t
		@GetPFPosition(var_255_cvector);
		var_256_cvector = var_254_cvector - var_255_cvector;
		var_257_float = var_256_cvector | var_256_cvector;
		if(var_257_float < (var_247_float * var_247_float)) {
			bool var_289_bool; float var_290_float;
			var_247_float = var_290_float;
			func_1129(var_256_cvector, var_257_float, var_289_bool, var_290_float);
			var_246_bool = true;
			return 10;
		}
		@sync();
	}
	var_246_bool = false;
}


void func_1368(int var_385_int)
{
	var_385_int = 0;
}


void func_1881(string var_62_string, int var_63_int)
{
	string var_65_string = "idle";
	if(var_63_int != 0)
		var_65_string += var_63_int;
	var_65_string = var_62_string;
}


// @pe
void func_1370(void)
{
}


void func_1372(int var_314_int)
{
	var_314_int = 1;
}


// @pe
void func_120(string var_36_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_36_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_36_string);
	@RemoveEnvelope();
}


void func_1374(float var_309_float)
{
	var_309_float = 0.5;
}


void func_1888(int var_56_int)
{
	int var_59_int; bool var_60_bool;
	var_59_int = 0;
	
	for(;;) {
		string var_62_string; int var_63_int;
		var_59_int = var_63_int;
		func_1881(var_62_string, var_63_int);
		@HasAnimation(var_60_bool, "all", var_62_string);
		if(!var_60_bool) //@nz
			break;
		var_59_int += 1;
	}
	var_59_int = var_56_int;
}


void func_1633(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


void func_1507(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1765(object var_87_object)
{
	cvector var_91_cvector;
	var_87_object->GetPosition(var_91_cvector);
	cvector var_92_cvector;
	@GetPosition(var_92_cvector);
	cvector var_93_cvector = var_91_cvector - var_92_cvector;
	var_94_float = GetByIndex(var_93_cvector, 0);
	var_95_float = GetByIndex(var_93_cvector, 2);
	@RotateAsync(var_94_float, var_95_float);
}


void func_1638(bool var_20_bool, object var_21_object)
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
		func_1633(var_31_bool, var_32_object);
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


void func_1383(bool var_0_bool, bool var_1_bool, bool var_162_bool, object var_163_object, float var_164_float, float var_165_float, bool var_166_bool, bool var_167_bool)
{
	bool var_178_bool; object var_180_object; cvector var_181_cvector; cvector var_182_cvector; float var_184_float; object var_185_object;
	var_0_bool = false;
	var_1_bool = var_163_object;
	bool var_179_bool;
	var_167_bool = var_179_bool;
	
	for(;;) {
		bool var_186_bool; object var_187_object;
		var_163_object = var_187_object;
		func_1523(var_186_bool, var_187_object);
		if(!var_186_bool) { //@nz
			var_162_bool = false;
			return 16;
		}
		var_163_object->GetPosition(var_181_cvector);
		@GetPosition(var_182_cvector);
		var_184_float = (var_181_cvector - var_182_cvector) | (var_181_cvector - var_182_cvector);
		bool var_191_bool = false;
		if(var_165_float > 0) {
			if(var_184_float > (var_165_float * var_165_float))
				var_191_bool = true;
		}
		if(var_191_bool != 0) {
			@Stop();
			var_162_bool = false;
			return 16;
		}
		if(var_184_float > (var_164_float * var_164_float)) {
			var_163_object->GetPFPosition(var_181_cvector);
			@FindPathTo(var_185_object, var_181_cvector);
			if(var_185_object != null) {
				var_185_object = var_180_object;
				var_185_object = null;
			}
			if(var_180_object != null) {
				if(var_179_bool == 0) goto Label_1436;
				var_179_bool = false;
				@RotatePath(var_180_object, var_178_bool);
				if(!var_178_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_204_string;
						func_1530(var_204_string);
						string var_205_string;
						func_1532(var_205_string);
						@FollowPath(var_180_object, var_166_bool, var_178_bool, var_204_string, var_205_string);
						if(!var_178_bool) { //@nz
							if(var_0_bool == 0) goto Label_1455;
							var_180_object = null;
						}
					EMIT "GOTO 0x5b0";

					Label_1455:
						} else {
					var_180_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_178_bool);
					if(!var_178_bool) { //@nz
						if(var_0_bool != 0) {
							var_180_object = null;
							goto Label_1483;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1483;
		}
			var_185_object = null;
			goto Label_1481;

		Label_1481:
			var_180_object = null;

		}
	Label_1483:
		for(;;) {
			var_162_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_871(object var_105_object)
{
	object var_111_object;
	func_885(var_106_object, var_107_int, var_108_int, var_109_bool, var_110_int, var_111_object, var_111_object, true, 180.0);
}


void func_1129(bool var_0_bool, bool var_1_bool, bool var_289_bool, float var_290_float)
{
	int var_293_int;
	@irand(var_293_int, var_1_bool);
	var_293_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_293_int));
	@WaitForAnimEnd();
	bool var_294_bool;
	func_1336(var_293_int, var_294_bool);
	bool var_315_bool;
	func_1674(var_315_bool, var_0_bool);
	if(!var_315_bool) { //@nz
		@StopAsync();
		var_289_bool = false;
		return 4;
	}
	float var_318_float; int var_319_int;
	var_290_float = var_318_float;
	var_293_int = var_319_int;
	func_1090(var_294_bool, var_318_float, var_319_int);
	@HasAnimation(var_294_bool, "all", ("attack_middle" + var_293_int));
	if(var_294_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_293_int));
		@WaitForAnimEnd();
		bool var_395_bool;
		func_1674(var_395_bool, var_0_bool);
		if(!var_395_bool) { //@nz
			@StopAsync();
			var_289_bool = false;
			return 4;
		}
		float var_398_float; int var_399_int;
		var_290_float = var_398_float;
		var_293_int = var_399_int;
		func_1090(var_294_bool, var_398_float, var_399_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_293_int));
	bool var_404_bool;
	func_1209(var_404_bool, 0.75);
	@StopAsync();
	var_289_bool = true;
}


// @pe
void func_879(float var_329_float)
{
	var_329_float = 0.2;
}


void func_1776(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_1905(int var_54_int)
{
	bool var_56_bool;
	func_1988(var_56_bool);
	if(var_56_bool != 0)
		var_54_int = 2;
	else
		var_54_int = 0;
	
}


// @pe
void func_882(int var_336_int)
{
	var_336_int = 0;
}


// @pe
void func_1523(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1674(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


void func_1781(object var_71_object)
{
	float var_74_float;
	var_71_object->GetEyesHeight(var_74_float);
	cvector var_75_cvector = [0.0, 0.0, 0.0];
	var_76_float = GetByIndex(var_75_cvector, 1);
	var_74_float = var_76_float;
	SetByIndex(var_75_cvector, 1) = var_76_float;
	@LookAsync(var_71_object, "head", var_75_cvector);
}


void func_885(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_111_object, bool var_112_bool, float var_113_float, bool var_168_bool)
{
	bool var_124_bool; bool var_125_bool; float var_126_float; cvector var_127_cvector; cvector var_128_cvector; bool var_129_bool; bool var_130_bool; float var_132_float; float var_133_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_124_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_124_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_125_bool, ("attack" + (var_2_bool + 1)));
			if(!var_125_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_147_bool = IsFuncExist(var_111_object, "@GetAttackDistance", 1);
			if(var_147_bool != 0) {
				var_111_object->GetAttackDistance(var_126_float);
				var_126_float += 50;
			} else {
								var_113_float = var_126_float;

			}
			if(var_126_float >= 150)
				var_126_float = 150;
			var_3_object = false;
			var_0_bool = var_111_object;
			@IsPlayerActor(var_0_bool, var_129_bool);
			if(var_112_bool != 0)
				var_130_bool = false;
			else
				var_130_bool = true;

			for(;;) {
				bool var_152_bool = false;
				bool var_153_bool;
				func_1674(var_153_bool, var_0_bool);
				if(var_153_bool != 0) {
					if(!var_3_object) //@nz
						var_152_bool = true;
				}
				if(var_152_bool != 0) {
					var_0_bool->GetPFPosition(var_127_cvector); //@t
					@GetPFPosition(var_128_cvector);
					var_132_float = (var_127_cvector - var_128_cvector) | (var_127_cvector - var_128_cvector);
					if(var_132_float >= ((400.0 + var_126_float) * (400.0 + var_126_float))) {
						bool var_162_bool; float var_164_float;
						var_126_float = var_164_float;
						TaskCall(5);
						func_1383(var_168_bool, var_169_object, var_162_bool, var_0_bool, var_164_float, 3000.0, true, false);
						TaskReturn();
						if(!var_168_bool) { //@nz
						} else {
							var_130_bool = false;
					} else {
					if(var_132_float >= (var_113_float * var_113_float)) {
						if(!var_130_bool) { //@nz
							func_1765(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_130_bool = true;
						}
						@rand(var_133_float);
						bool var_235_bool;
						var_237_bool = var_133_float < 0.6;
						if(var_237_bool != 1) {
							bool var_238_bool;
							func_1325(true, var_238_bool);
							if(var_238_bool != 1)
								var_235_bool = false;
						}
						if(var_235_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_246_bool; float var_247_float;
							func_1233(var_133_float, var_246_bool, var_247_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_416_bool;
							func_1325(var_133_float, var_416_bool);
							var_417_bool = !var_416_bool; //@nz
							if(var_417_bool == 0) goto Label_1063;
							bool var_418_bool;
							func_1674(var_418_bool, var_0_bool);
							if(!var_418_bool) { //@nz
								goto Label_1073;
							}
							var_0_bool->GetPFPosition(var_127_cvector); //@t
							@GetPFPosition(var_128_cvector);
							var_132_float = (var_127_cvector - var_128_cvector) | (var_127_cvector - var_128_cvector);
							if(!(var_132_float < (var_247_float * var_247_float))) goto Label_1063;
							bool var_423_bool; float var_424_float;
							var_113_float = var_424_float;
							func_1129(var_132_float, var_133_float, var_423_bool, var_424_float);
							var_425_bool = !var_423_bool; //@nz
							if(var_425_bool == 0) goto Label_1063;
							goto Label_1073;
					}
						bool var_426_bool; float var_427_float;
						var_113_float = var_427_float;
						func_1129(var_132_float, var_133_float, var_426_bool, var_427_float);
						if(!var_426_bool) { //@nz
							goto Label_1073;
						}
						var_130_bool = true;

					}
				Label_1063:
					goto Label_1072;
					}
					Label_1072:
					}
				}
			Label_1073:
				@WaitForAnimEnd();
				if(var_3_object != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_129_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_376(bool var_0_bool, bool var_1_bool)
{
	float var_24_float; cvector var_25_cvector; cvector var_26_cvector; float var_27_float; bool var_28_bool; object var_29_object; bool var_30_bool;
	@rand(var_24_float, 0.5);
	@Sleep(var_24_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_388:
				@GetPosition(var_26_cvector);
				@GetCameraFarDistance(var_27_float);
				@GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, (var_27_float * 2.5), var_28_bool);
				if(var_28_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_388;
			}
				var_1_bool = false;
		}
		}
		goto Label_405;

	Label_405:
		@FindShiftedPathTo(var_29_object, var_25_cvector);
		if(var_29_object != null) {
			@RotatePath(var_29_object, var_30_bool);
			if(var_30_bool != 0) {
				bool var_38_bool;
				func_454(var_38_bool);
				@FollowPath(var_29_object, var_38_bool, var_30_bool);
				var_29_object = null;
				if(var_30_bool != 0) {
					TaskCall(2);
					func_571();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_29_object = null;
	}
	
}


void func_1273(bool var_0_bool, bool var_259_bool)
{
	cvector var_265_cvector; cvector var_266_cvector;
	bool var_270_bool;
	func_1674(var_270_bool, var_0_bool);
	if(!var_270_bool) { //@nz
		var_259_bool = false;
		return 10;
	}
	bool var_273_bool;
	float var_269_float;
	func_1325(var_269_float, var_273_bool);
	if(var_273_bool != 0) {
		var_0_bool->GetPFPosition(var_265_cvector); //@t
		@GetPFPosition(var_266_cvector);
		var_0_bool->GetAttackDistance(var_269_float); //@t
		var_269_float += 50;
		if(((var_265_cvector - var_266_cvector) | (var_265_cvector - var_266_cvector)) <= (var_269_float * var_269_float)) {
			func_1306(var_269_float);
			var_259_bool = true;
			return 10;
		}
	}
	var_259_bool = false;
}


// @pe
void func_1914(object var_62_object)
{
	object var_63_object;
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_64_object, var_63_object);
	TaskReturn();
}


void func_1532(string var_205_string)
{
	var_205_string = "run";
}


// @pe
void func_1534(string var_360_string, int var_361_int)
{
	if(var_361_int == 1)
		var_360_string = "fire";
	var_360_string = "phys";
}


