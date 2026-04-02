// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1972(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			object var_18_object;
			var_11_object = var_18_object;
			func_1975(var_18_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_1981();
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
		func_2192();
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
		func_1972(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_object = var_21_object;
			func_1975(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1931(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_55_object;
			var_11_object = var_55_object;
			func_1941(var_55_object);
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
		func_2213(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_50_int; object var_51_object;
			var_11_bool = var_51_object;
			func_1949(var_50_int, var_51_object);
			var_50_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_311(var_14_int);
				object var_87_object;
				var_11_bool = var_87_object;
				func_1956(var_87_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1962(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_object = var_21_object;
			func_1965();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1967(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			string var_23_string; object var_24_object;
			var_12_object = var_23_string;
			var_11_bool = var_24_object;
			func_1970();
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
		func_1981();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_311(var_11_object);
		object var_13_object;
		var_11_object = var_13_object;
		func_1876();
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
		func_1972(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_object = var_20_object;
			func_1975(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1931(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_54_object;
			var_11_object = var_54_object;
			func_1941(var_54_object);
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
		func_2213(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_50_int; object var_51_object;
			var_11_bool = var_51_object;
			func_1949(var_50_int, var_51_object);
			var_50_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_640();
				object var_86_object;
				var_11_bool = var_86_object;
				func_1956(var_86_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1962(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_object = var_20_object;
			func_1965();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1967(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			string var_22_string; object var_23_object;
			var_12_object = var_22_string;
			var_11_bool = var_23_object;
			func_1970();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_640();
		func_1981();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1972(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_22_object;
			var_11_object = var_22_object;
			func_1975(var_22_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1931(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_56_object;
			var_11_object = var_56_object;
			func_1941(var_56_object);
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
		func_2213(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_50_int; object var_51_object;
			var_11_bool = var_51_object;
			func_1949(var_50_int, var_51_object);
			var_50_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_809();
				object var_88_object;
				var_11_bool = var_88_object;
				func_1956(var_88_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1962(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_22_object;
			var_11_object = var_22_object;
			func_1965();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1967(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_809();
			string var_24_string; object var_25_object;
			var_12_object = var_24_string;
			var_11_bool = var_25_object;
			func_1970();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_809();
		object var_14_object;
		var_11_object = var_14_object;
		func_1876();
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
		func_1981();
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
		func_1981();
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
		func_1876();
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
	func_1855(var_12_object);
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


// @pe
void func_0(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_33(var_14_object);
	object var_64_object;
	var_13_object = var_64_object;
	func_2259();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1542(cvector var_55_cvector, object var_56_object)
{
	cvector var_59_cvector;
	@GetPosition(var_59_cvector);
	cvector var_60_cvector;
	var_56_object->GetPosition(var_60_cvector);
	var_55_cvector = var_60_cvector - var_59_cvector;
}


void func_1549(float var_39_float, object var_40_object)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_40_object->GetPosition(var_45_cvector);
	var_39_float = (var_45_cvector - var_44_cvector) | (var_45_cvector - var_44_cvector);
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


void func_1569(float var_317_float, object var_318_object, float var_319_float, int var_320_int)
{
	int var_330_int; int var_332_int;
	object var_337_object;
	var_318_object = var_337_object;
	bool var_336_bool;
	func_1557(var_336_bool, var_337_object, "health");
	if(!var_336_bool) //@nz
		var_317_float = 0.0;
	bool var_340_bool; object var_341_object;
	func_1557(var_340_bool, var_341_object, "armor");
	if(!var_340_bool) //@nz
		var_330_int = 0;
	else
		var_341_object->GetProperty("armor", var_330_int);
	string var_345_string; int var_346_int;
	var_320_int = var_346_int;
	func_1534(var_345_string, var_346_int);
	string var_331_string = "armor_" + var_345_string;
	bool var_349_bool; object var_350_object; string var_351_string;
	var_318_object = var_350_object;
	func_1557(var_349_bool, var_350_object, var_351_string);
	if(!var_349_bool) //@nz
		var_332_int = 0;
	else
		var_318_object->GetProperty(var_351_string, var_332_int);

	float var_353_float;
	func_1792(var_353_float, ((var_330_int + var_332_int) / 100.0), (float)1);
	float var_333_float;
	var_353_float = var_333_float;
	float var_334_float;
	var_318_object->GetProperty("health", var_334_float);
	float var_363_float;
	func_1799(var_363_float, (var_334_float - (var_319_float * (1 - var_333_float))), (float)0, (float)1);
	var_318_object->SetProperty("health", var_363_float);
	float var_335_float = var_317_float;
	
}


void func_571(void)
{
	int var_166_int; int var_167_int; bool var_168_bool; float var_169_float; bool var_170_bool;
	@WaitForAnimEnd();
	bool var_171_bool;
	func_1776(var_171_bool);
	if(!var_171_bool) //@nz
		return 14;
	int var_173_int;
	func_1897(var_173_int);
	int var_164_int;
	var_173_int = var_164_int;
	int var_165_int = 0;
	
	for(;;) {
		bool var_186_bool = false;
		if(var_165_int < 5) {
			bool var_189_bool;
			func_1776(var_189_bool);
			if(var_189_bool != 0)
				var_186_bool = true;
		}
		if(var_186_bool != 0) {
			@irand(var_166_int, 3);
			if(var_166_int == 0) {
				if(var_164_int == 0) goto Label_618;
				@irand(var_167_int, var_164_int);
				string var_195_string; int var_196_int;
				var_167_int = var_196_int;
				func_1890(var_195_string, var_196_int);
				@PlayAnimation("all", var_195_string);
				@WaitForAnimEnd(var_168_bool);
				if(!var_168_bool) { //@nz
				} else {
			} else {
			if(var_166_int == 1) {
				@rand(var_169_float, 4);
				@Sleep((var_169_float + 1), var_170_bool);
				if(!var_170_bool) { //@nz
					goto Label_639;
				}
			} else if(var_165_int != 0) {
				goto Label_639;
			}
			}
				var_165_int += 1;
			}
		}
	Label_639:
		return 14;

	}
	
}


void func_1090(bool var_0_bool, float var_303_float, int var_304_int)
{
	object var_308_object; float var_309_float; float var_310_float;
	@GetVictim((var_303_float * 0.9), var_308_object);
	@ReportAttack(var_0_bool);
	if(var_308_object == var_0_bool) {
		float var_314_float; object var_315_object; int var_316_int;
		var_308_object = var_315_object;
		var_304_int = var_316_int;
		func_879(var_316_int);
		var_314_float = var_309_float;
		float var_317_float; object var_318_object; float var_319_float; int var_320_int;
		var_308_object = var_318_object;
		int var_321_int; object var_322_object; int var_323_int;
		var_308_object = var_322_object;
		var_304_int = var_323_int;
		func_882(var_323_int);
		var_321_int = var_320_int;
		func_1569(var_317_float, var_318_object, var_319_float, var_320_int);
		var_317_float = var_310_float;
		int var_370_int;
		func_1368(var_370_int);
		@ReportHit(var_0_bool, var_370_int, var_310_float, var_319_float);
		object var_371_object; float var_372_float;
		var_308_object = var_371_object;
		var_310_float = var_372_float;
		func_1370();
	}
}
EMIT "Stack[-3] = 0";


void func_1633(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
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


void func_1129(bool var_0_bool, bool var_1_bool, bool var_274_bool, float var_275_float)
{
	int var_278_int;
	@irand(var_278_int, var_1_bool);
	var_278_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_278_int));
	@WaitForAnimEnd();
	bool var_279_bool;
	func_1336(var_278_int, var_279_bool);
	bool var_300_bool;
	func_1674(var_300_bool, var_0_bool);
	if(!var_300_bool) { //@nz
		@StopAsync();
		var_274_bool = false;
		return 4;
	}
	float var_303_float; int var_304_int;
	var_275_float = var_303_float;
	var_278_int = var_304_int;
	func_1090(var_279_bool, var_303_float, var_304_int);
	@HasAnimation(var_279_bool, "all", ("attack_middle" + var_278_int));
	if(var_279_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_278_int));
		@WaitForAnimEnd();
		bool var_380_bool;
		func_1674(var_380_bool, var_0_bool);
		if(!var_380_bool) { //@nz
			@StopAsync();
			var_274_bool = false;
			return 4;
		}
		float var_383_float; int var_384_int;
		var_275_float = var_383_float;
		var_278_int = var_384_int;
		func_1090(var_279_bool, var_383_float, var_384_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_278_int));
	bool var_389_bool;
	func_1209(var_389_bool, 0.75);
	@StopAsync();
	var_274_bool = true;
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


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


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


void func_2187(int var_51_int, string var_52_string)
{
	int var_54_int;
	@GetInvItemByName(var_54_int, var_52_string);
	var_54_int = var_51_int;
}


void func_2192(void)
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_2012(true);
}


void func_2200(object var_23_object)
{
	bool var_25_bool;
	var_26_bool = GlobalVars[0];
	if(var_26_bool != 0) {
		@IsOverrideActive(var_25_bool);
		if(!var_25_bool) //@nz
			@WorkWithCorpse(var_23_object);
	}
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


void func_163(void)
{
	bool var_130_bool;
	func_1776(var_130_bool);
	if(!var_130_bool) //@nz
		func_1981();
}


void func_2211(bool var_56_bool)
{
	var_56_bool = false;
}


void func_2213(bool var_15_bool, object var_16_object, object var_17_object)
{
	object var_23_object;
	var_17_object = var_23_object;
	bool var_22_bool;
	func_1557(var_22_bool, var_23_object, "class");
	if(!var_22_bool) { //@nz
		var_15_bool = false;
		return 4;
	}
	string var_20_string;
	var_17_object->GetProperty("class", var_20_string);
	if(var_20_string == "rat") {
		var_15_bool = false;
		return 4;
	EMIT "GOTO 0x8bd";
	}
	if(var_20_string == "dog") {
		var_15_bool = false;
		return 4;
	}
	bool var_21_bool;
	@CanSee(var_21_bool, var_16_object);
	bool var_37_bool = true;
	if(var_21_bool != 1) {
		float var_39_float; object var_40_object;
		func_1549(var_39_float, var_40_object);
		var_48_bool = var_39_float <= 250000.0;
		if(var_48_bool != 1)
			var_37_bool = false;
	}
	if(var_37_bool != 0) {
		@ReportReputationChange(var_40_object, var_17_object, -0.3);
		var_15_bool = true;
		return 4;
	}
	var_15_bool = false;
}


void func_696(bool var_0_bool)
{
	func_1781(var_0_bool);
}


void func_1209(bool var_389_bool, float var_390_float)
{
	float var_393_float; bool var_394_bool;
	@rand(var_393_float);
	if(var_393_float < var_390_float) {

		for(;;) {
			@IsAnimationPlaying(var_394_bool);
			if(!var_394_bool) { //@nz
			} else {
				bool var_397_bool;
				func_1273(var_394_bool, var_397_bool);
				if(var_397_bool != 0) {
					var_389_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_389_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1233(bool var_0_bool, bool var_231_bool, float var_232_float)
{
	bool var_238_bool; cvector var_239_cvector; cvector var_240_cvector; cvector var_241_cvector; float var_242_float;
	
	for(;;) {
		@IsAnimationPlaying(var_238_bool);
		if(!var_238_bool) //@nz
			break;
		bool var_244_bool;
		func_1273(var_242_float, var_244_bool);
		if(var_244_bool != 0) {
			var_231_bool = true;
			return 10;
		}
		bool var_269_bool;
		func_1674(var_269_bool, var_0_bool);
		if(!var_269_bool) { //@nz
			var_231_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_239_cvector); //@t
		@GetPFPosition(var_240_cvector);
		var_241_cvector = var_239_cvector - var_240_cvector;
		var_242_float = var_241_cvector | var_241_cvector;
		if(var_242_float < (var_232_float * var_232_float)) {
			bool var_274_bool; float var_275_float;
			var_232_float = var_275_float;
			func_1129(var_241_cvector, var_242_float, var_274_bool, var_275_float);
			var_231_bool = true;
			return 10;
		}
		@sync();
	}
	var_231_bool = false;
}


// @pe
void func_2259(void)
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
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


void func_1776(bool var_130_bool)
{
	bool var_132_bool;
	@IsLoaded(var_132_bool);
	var_132_bool = var_130_bool;
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


void func_1273(bool var_0_bool, bool var_244_bool)
{
	cvector var_250_cvector; cvector var_251_cvector;
	bool var_255_bool;
	func_1674(var_255_bool, var_0_bool);
	if(!var_255_bool) { //@nz
		var_244_bool = false;
		return 10;
	}
	bool var_258_bool;
	float var_254_float;
	func_1325(var_254_float, var_258_bool);
	if(var_258_bool != 0) {
		var_0_bool->GetPFPosition(var_250_cvector); //@t
		@GetPFPosition(var_251_cvector);
		var_0_bool->GetAttackDistance(var_254_float); //@t
		var_254_float += 50;
		if(((var_250_cvector - var_251_cvector) | (var_250_cvector - var_251_cvector)) <= (var_254_float * var_254_float)) {
			func_1306(var_254_float);
			var_244_bool = true;
			return 10;
		}
	}
	var_244_bool = false;
}


// @pe
void func_1792(float var_353_float, float var_354_float, float var_355_float)
{
	if(var_354_float < var_355_float)
		var_354_float = var_353_float;
	else
		var_355_float = var_353_float;
	
}


// @pe
void func_1799(float var_363_float, float var_364_float, float var_365_float, float var_366_float)
{
	if(var_364_float < var_365_float) {
		var_365_float = var_363_float;
		return 0;
	}
	if(var_364_float > var_366_float) {
		var_366_float = var_363_float;
		return 0;
	}
	var_364_float = var_363_float;
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


void func_1306(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_264_cvector;
	var_0_bool->GetPFPosition(var_264_cvector); //@t
	cvector var_265_cvector;
	@GetPFPosition(var_265_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
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


void func_809(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1325(bool var_0_bool, bool var_223_bool)
{
	bool var_225_bool;
	var_228_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_228_bool != 0) {
		var_0_bool->IsAttacking(var_225_bool); //@t
		var_225_bool = var_223_bool;
	}
	var_223_bool = false;
}


void func_1846(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	var_22_int = 1 + (var_24_float / 24);
}


void func_311(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_440(var_10_bool, var_11_object);
}


void func_1336(bool var_2_bool, object var_4_object)
{
	int var_288_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_287_float;
	@rand(var_287_float);
	float var_294_float;
	func_1374(var_294_float);
	if(var_287_float < var_294_float) {
		@irand(var_288_int, var_2_bool);
		@Speak("attack" + (var_288_int + 1));
		int var_299_int;
		func_1372(var_299_int);
		var_4_object = var_299_int;
	}
}


void func_319(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_447(var_15_bool, var_16_int);
}


// @pe
void func_1855(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
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
	func_1914(var_55_object);
	int var_16_int;
	var_54_int = var_16_int;
	if(var_16_int > 0) {
		if(var_16_int > 1)
			func_319(var_16_int);
		object var_62_object;
		var_12_object = var_62_object;
		func_1923(var_62_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1368(int var_370_int)
{
	var_370_int = 0;
}


// @pe
void func_1370(void)
{
}


void func_1372(int var_299_int)
{
	var_299_int = 1;
}


void func_1374(float var_294_float)
{
	var_294_float = 0.5;
}


void func_1890(string var_179_string, int var_180_int)
{
	string var_182_string = "idle";
	if(var_180_int != 0)
		var_182_string += var_180_int;
	var_182_string = var_179_string;
}


void func_1383(bool var_0_bool, bool var_1_bool, bool var_147_bool, object var_148_object, float var_149_float, float var_150_float, bool var_151_bool, bool var_152_bool)
{
	bool var_163_bool; object var_165_object; cvector var_166_cvector; cvector var_167_cvector; float var_169_float; object var_170_object;
	var_0_bool = false;
	var_1_bool = var_148_object;
	bool var_164_bool;
	var_152_bool = var_164_bool;
	
	for(;;) {
		bool var_171_bool; object var_172_object;
		var_148_object = var_172_object;
		func_1523(var_171_bool, var_172_object);
		if(!var_171_bool) { //@nz
			var_147_bool = false;
			return 16;
		}
		var_148_object->GetPosition(var_166_cvector);
		@GetPosition(var_167_cvector);
		var_169_float = (var_166_cvector - var_167_cvector) | (var_166_cvector - var_167_cvector);
		bool var_176_bool = false;
		if(var_150_float > 0) {
			if(var_169_float > (var_150_float * var_150_float))
				var_176_bool = true;
		}
		if(var_176_bool != 0) {
			@Stop();
			var_147_bool = false;
			return 16;
		}
		if(var_169_float > (var_149_float * var_149_float)) {
			var_148_object->GetPFPosition(var_166_cvector);
			@FindPathTo(var_170_object, var_166_cvector);
			if(var_170_object != null) {
				var_170_object = var_165_object;
				var_170_object = null;
			}
			if(var_165_object != null) {
				if(var_164_bool == 0) goto Label_1436;
				var_164_bool = false;
				@RotatePath(var_165_object, var_163_bool);
				if(!var_163_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_189_string;
						func_1530(var_189_string);
						string var_190_string;
						func_1532(var_190_string);
						@FollowPath(var_165_object, var_151_bool, var_163_bool, var_189_string, var_190_string);
						if(!var_163_bool) { //@nz
							if(var_0_bool == 0) goto Label_1455;
							var_165_object = null;
						}
					EMIT "GOTO 0x5b0";

					Label_1455:
						} else {
					var_165_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_163_bool);
					if(!var_163_bool) { //@nz
						if(var_0_bool != 0) {
							var_165_object = null;
							goto Label_1483;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1483;
		}
			var_170_object = null;
			goto Label_1481;

		Label_1481:
			var_165_object = null;

		}
	Label_1483:
		for(;;) {
			var_147_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_871(object var_90_object)
{
	object var_96_object;
	func_885(var_91_object, var_92_int, var_93_int, var_94_bool, var_95_int, var_96_object, var_96_object, true, 180.0);
}


void func_1897(int var_173_int)
{
	int var_176_int; bool var_177_bool;
	var_176_int = 0;
	
	for(;;) {
		string var_179_string; int var_180_int;
		var_176_int = var_180_int;
		func_1890(var_179_string, var_180_int);
		@HasAnimation(var_177_bool, "all", var_179_string);
		if(!var_177_bool) //@nz
			break;
		var_176_int += 1;
	}
	var_176_int = var_173_int;
}


// @pe
void func_879(float var_314_float)
{
	var_314_float = 0.05;
}


// @pe
void func_882(int var_321_int)
{
	var_321_int = 0;
}


void func_885(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_96_object, bool var_97_bool, float var_98_float, bool var_153_bool)
{
	bool var_109_bool; bool var_110_bool; float var_111_float; cvector var_112_cvector; cvector var_113_cvector; bool var_114_bool; bool var_115_bool; float var_117_float; float var_118_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_109_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_109_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_110_bool, ("attack" + (var_2_bool + 1)));
			if(!var_110_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_132_bool = IsFuncExist(var_96_object, "@GetAttackDistance", 1);
			if(var_132_bool != 0) {
				var_96_object->GetAttackDistance(var_111_float);
				var_111_float += 50;
			} else {
								var_98_float = var_111_float;

			}
			if(var_111_float >= 150)
				var_111_float = 150;
			var_3_object = false;
			var_0_bool = var_96_object;
			@IsPlayerActor(var_0_bool, var_114_bool);
			if(var_97_bool != 0)
				var_115_bool = false;
			else
				var_115_bool = true;

			for(;;) {
				bool var_137_bool = false;
				bool var_138_bool;
				func_1674(var_138_bool, var_0_bool);
				if(var_138_bool != 0) {
					if(!var_3_object) //@nz
						var_137_bool = true;
				}
				if(var_137_bool != 0) {
					var_0_bool->GetPFPosition(var_112_cvector); //@t
					@GetPFPosition(var_113_cvector);
					var_117_float = (var_112_cvector - var_113_cvector) | (var_112_cvector - var_113_cvector);
					if(var_117_float >= ((400.0 + var_111_float) * (400.0 + var_111_float))) {
						bool var_147_bool; float var_149_float;
						var_111_float = var_149_float;
						TaskCall(5);
						func_1383(var_153_bool, var_154_object, var_147_bool, var_0_bool, var_149_float, 3000.0, true, false);
						TaskReturn();
						if(!var_153_bool) { //@nz
						} else {
							var_115_bool = false;
					} else {
					if(var_117_float >= (var_98_float * var_98_float)) {
						if(!var_115_bool) { //@nz
							func_1765(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_115_bool = true;
						}
						@rand(var_118_float);
						bool var_220_bool;
						var_222_bool = var_118_float < 0.6;
						if(var_222_bool != 1) {
							bool var_223_bool;
							func_1325(true, var_223_bool);
							if(var_223_bool != 1)
								var_220_bool = false;
						}
						if(var_220_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_231_bool; float var_232_float;
							func_1233(var_118_float, var_231_bool, var_232_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_401_bool;
							func_1325(var_118_float, var_401_bool);
							var_402_bool = !var_401_bool; //@nz
							if(var_402_bool == 0) goto Label_1063;
							bool var_403_bool;
							func_1674(var_403_bool, var_0_bool);
							if(!var_403_bool) { //@nz
								goto Label_1073;
							}
							var_0_bool->GetPFPosition(var_112_cvector); //@t
							@GetPFPosition(var_113_cvector);
							var_117_float = (var_112_cvector - var_113_cvector) | (var_112_cvector - var_113_cvector);
							if(!(var_117_float < (var_232_float * var_232_float))) goto Label_1063;
							bool var_408_bool; float var_409_float;
							var_98_float = var_409_float;
							func_1129(var_117_float, var_118_float, var_408_bool, var_409_float);
							var_410_bool = !var_408_bool; //@nz
							if(var_410_bool == 0) goto Label_1063;
							goto Label_1073;
					}
						bool var_411_bool; float var_412_float;
						var_98_float = var_412_float;
						func_1129(var_117_float, var_118_float, var_411_bool, var_412_float);
						if(!var_411_bool) { //@nz
							goto Label_1073;
						}
						var_115_bool = true;

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
				if(var_114_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_376(bool var_0_bool, bool var_1_bool)
{
	float var_141_float; cvector var_142_cvector; cvector var_143_cvector; float var_144_float; bool var_145_bool; object var_146_object; bool var_147_bool;
	@rand(var_141_float, 0.5);
	@Sleep(var_141_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_388:
				@GetPosition(var_143_cvector);
				@GetCameraFarDistance(var_144_float);
				@GetRandomPFPointInCircle(var_142_cvector, var_143_cvector, (var_144_float * 2.5), var_145_bool);
				if(var_145_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_388;
			}
				var_1_bool = false;
		}
		}
		goto Label_405;

	Label_405:
		@FindShiftedPathTo(var_146_object, var_142_cvector);
		if(var_146_object != null) {
			@RotatePath(var_146_object, var_147_bool);
			if(var_147_bool != 0) {
				bool var_155_bool;
				func_454(var_155_bool);
				@FollowPath(var_146_object, var_155_bool, var_147_bool);
				var_146_object = null;
				if(var_147_bool != 0) {
					TaskCall(2);
					func_571();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_146_object = null;
	}
	
}


// @pe
void func_1914(int var_54_int)
{
	bool var_56_bool;
	func_2211(var_56_bool);
	if(var_56_bool != 0)
		var_54_int = 2;
	else
		var_54_int = 0;
	
}


// @pe
void func_1923(object var_62_object)
{
	object var_63_object;
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_64_object, var_63_object);
	TaskReturn();
}


// @pe
void func_1931(int var_52_int, object var_53_object)
{
	object var_55_object;
	var_53_object = var_55_object;
	bool var_54_bool;
	func_1674(var_54_bool, var_55_object);
	if(var_54_bool != 0)
		var_52_int = 2;
	else
		var_52_int = 0;
	
}


// @pe
void func_1941(object var_89_object)
{
	object var_90_object;
	var_89_object = var_90_object;
	TaskCall(4);
	func_871(var_90_object);
	TaskReturn();
}


// @pe
void func_1949(int var_50_int, object var_51_object)
{
	object var_53_object;
	var_51_object = var_53_object;
	int var_52_int;
	func_1931(var_52_int, var_53_object);
	var_52_int = var_50_int;
}


// @pe
void func_1956(object var_88_object)
{
	object var_89_object;
	var_88_object = var_89_object;
	func_1941(var_89_object);
}


// @pe
void func_1962(int var_14_int)
{
	var_14_int = 0;
}


// @pe
void func_1965(void)
{
}


// @pe
void func_1967(int var_15_int)
{
	var_15_int = 0;
}


// @pe
void func_1970(void)
{
}


// @pe
void func_1972(int var_14_int)
{
	var_14_int = 2;
}


// @pe
void func_1975(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_2200(var_23_object);
}


void func_440(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1981(void)
{
}


void func_1982(int var_19_int, int var_20_int)
{
	int var_35_int;
	if(var_19_int > var_20_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_34_int = 0;
	if(var_19_int != var_20_int) {
		@irand(var_35_int, (var_20_int - var_19_int));
	} else if(var_19_int == 0) {
		return 8;
	}
	var_34_int += var_19_int;
	if(var_34_int == 0)
		return 8;
	int var_36_int;
	@GetInvItemByName(var_36_int, "Money");
	bool var_37_bool;
	@AddItem(var_37_bool, var_36_int, 0, var_34_int);
	
}


void func_447(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_454(bool var_155_bool)
{
	var_155_bool = false;
}


void func_2012(bool var_13_bool)
{
	int var_16_int; bool var_17_bool;
	if(var_13_bool != 0) {
		int var_22_int;
		func_1846(var_22_int);
		func_1982(0, (100 + (var_22_int * 100)));
		@irand(var_16_int, 9);
		if(var_16_int == 0) {
			int var_51_int;
			func_2187(var_51_int, "lemon");
			@AddItem(var_17_bool, var_51_int, 0, 1);
		} else {
				if(var_16_int == 1) {
					int var_59_int;
					func_2187(var_59_int, "rusk");
					@AddItem(var_17_bool, var_59_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_16_int == 2) {
				int var_65_int;
				func_2187(var_65_int, "hook");
				@AddItem(var_17_bool, var_65_int, 0, 1);
			} else if(var_16_int == 4) {
				int var_71_int;
				func_2187(var_71_int, "syringe");
				@AddItem(var_17_bool, var_71_int, 0, 1);
			} else if(var_16_int == 5) {
				int var_77_int;
				func_2187(var_77_int, "watch");
				@AddItem(var_17_bool, var_77_int, 0, 1);
			} else if(var_16_int == 6) {
				int var_83_int;
				func_2187(var_83_int, "razor");
				@AddItem(var_17_bool, var_83_int, 0, 1);
			}
	}
		int var_90_int;
		func_1846(var_90_int);
		func_1982(0, (50 + (var_90_int * 50)));
		@irand(var_16_int, 8);
		if(var_16_int == 0) {
			int var_96_int;
			func_2187(var_96_int, "beads");
			@AddItem(var_17_bool, var_96_int, 0, 1);
		} else if(var_16_int == 1) {
			int var_102_int;
			func_2187(var_102_int, "bracelet");
			@AddItem(var_17_bool, var_102_int, 0, 1);
		} else if(var_16_int == 2) {
			int var_108_int;
			func_2187(var_108_int, "ear_ring");
			@AddItem(var_17_bool, var_108_int, 0, 1);
		} else if(var_16_int == 3) {
			int var_114_int;
			func_2187(var_114_int, "gold_ring");
			@AddItem(var_17_bool, var_114_int, 0, 1);
		} else if(var_16_int == 4) {
			int var_120_int;
			func_2187(var_120_int, "silver_ring");
			@AddItem(var_17_bool, var_120_int, 0, 1);
		} else if(var_16_int == 5) {
			int var_126_int;
			func_2187(var_126_int, "flower");
			@AddItem(var_17_bool, var_126_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1507(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
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


void func_1530(string var_189_string)
{
	var_189_string = "walk";
}


void func_1532(string var_190_string)
{
	var_190_string = "run";
}


// @pe
void func_1534(string var_345_string, int var_346_int)
{
	if(var_346_int == 1)
		var_345_string = "fire";
	var_345_string = "phys";
}


