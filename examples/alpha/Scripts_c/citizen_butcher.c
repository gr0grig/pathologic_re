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
			int var_66_int; object var_67_object;
			var_11_bool = var_67_object;
			func_1949(var_66_int, var_67_object);
			var_66_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_311(var_14_int);
				object var_103_object;
				var_11_bool = var_103_object;
				func_1956(var_103_object);
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
			int var_66_int; object var_67_object;
			var_11_bool = var_67_object;
			func_1949(var_66_int, var_67_object);
			var_66_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_640();
				object var_102_object;
				var_11_bool = var_102_object;
				func_1956(var_102_object);
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
			int var_66_int; object var_67_object;
			var_11_bool = var_67_object;
			func_1949(var_66_int, var_67_object);
			var_66_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_809();
				object var_104_object;
				var_11_bool = var_104_object;
				func_1956(var_104_object);
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
	func_2295();
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


void func_1549(float var_55_float, object var_56_object)
{
	cvector var_60_cvector;
	@GetPosition(var_60_cvector);
	cvector var_61_cvector;
	var_56_object->GetPosition(var_61_cvector);
	var_55_float = (var_61_cvector - var_60_cvector) | (var_61_cvector - var_60_cvector);
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


void func_1569(float var_333_float, object var_334_object, float var_335_float, int var_336_int)
{
	int var_346_int; int var_348_int;
	object var_353_object;
	var_334_object = var_353_object;
	bool var_352_bool;
	func_1557(var_352_bool, var_353_object, "health");
	if(!var_352_bool) //@nz
		var_333_float = 0.0;
	bool var_356_bool; object var_357_object;
	func_1557(var_356_bool, var_357_object, "armor");
	if(!var_356_bool) //@nz
		var_346_int = 0;
	else
		var_357_object->GetProperty("armor", var_346_int);
	string var_361_string; int var_362_int;
	var_336_int = var_362_int;
	func_1534(var_361_string, var_362_int);
	string var_347_string = "armor_" + var_361_string;
	bool var_365_bool; object var_366_object; string var_367_string;
	var_334_object = var_366_object;
	func_1557(var_365_bool, var_366_object, var_367_string);
	if(!var_365_bool) //@nz
		var_348_int = 0;
	else
		var_334_object->GetProperty(var_367_string, var_348_int);

	float var_369_float;
	func_1792(var_369_float, ((var_346_int + var_348_int) / 100.0), (float)1);
	float var_349_float;
	var_369_float = var_349_float;
	float var_350_float;
	var_334_object->GetProperty("health", var_350_float);
	float var_379_float;
	func_1799(var_379_float, (var_350_float - (var_335_float * (1 - var_349_float))), (float)0, (float)1);
	var_334_object->SetProperty("health", var_379_float);
	float var_351_float = var_333_float;
	
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


void func_1090(bool var_0_bool, float var_319_float, int var_320_int)
{
	object var_324_object; float var_325_float; float var_326_float;
	@GetVictim((var_319_float * 0.9), var_324_object);
	@ReportAttack(var_0_bool);
	if(var_324_object == var_0_bool) {
		float var_330_float; object var_331_object; int var_332_int;
		var_324_object = var_331_object;
		var_320_int = var_332_int;
		func_879(var_332_int);
		var_330_float = var_325_float;
		float var_333_float; object var_334_object; float var_335_float; int var_336_int;
		var_324_object = var_334_object;
		int var_337_int; object var_338_object; int var_339_int;
		var_324_object = var_338_object;
		var_320_int = var_339_int;
		func_882(var_339_int);
		var_337_int = var_336_int;
		func_1569(var_333_float, var_334_object, var_335_float, var_336_int);
		var_333_float = var_326_float;
		int var_386_int;
		func_1368(var_386_int);
		@ReportHit(var_0_bool, var_386_int, var_326_float, var_335_float);
		object var_387_object; float var_388_float;
		var_324_object = var_387_object;
		var_326_float = var_388_float;
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


void func_1129(bool var_0_bool, bool var_1_bool, bool var_290_bool, float var_291_float)
{
	int var_294_int;
	@irand(var_294_int, var_1_bool);
	var_294_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_294_int));
	@WaitForAnimEnd();
	bool var_295_bool;
	func_1336(var_294_int, var_295_bool);
	bool var_316_bool;
	func_1674(var_316_bool, var_0_bool);
	if(!var_316_bool) { //@nz
		@StopAsync();
		var_290_bool = false;
		return 4;
	}
	float var_319_float; int var_320_int;
	var_291_float = var_319_float;
	var_294_int = var_320_int;
	func_1090(var_295_bool, var_319_float, var_320_int);
	@HasAnimation(var_295_bool, "all", ("attack_middle" + var_294_int));
	if(var_295_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_294_int));
		@WaitForAnimEnd();
		bool var_396_bool;
		func_1674(var_396_bool, var_0_bool);
		if(!var_396_bool) { //@nz
			@StopAsync();
			var_290_bool = false;
			return 4;
		}
		float var_399_float; int var_400_int;
		var_291_float = var_399_float;
		var_294_int = var_400_int;
		func_1090(var_295_bool, var_399_float, var_400_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_294_int));
	bool var_405_bool;
	func_1209(var_405_bool, 0.75);
	@StopAsync();
	var_290_bool = true;
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
		if(var_20_string != "butcher")
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
		func_1549(var_55_float, var_56_object);
		var_64_bool = var_55_float <= 250000.0;
		if(var_64_bool != 1)
			var_53_bool = false;
	}
	if(var_53_bool != 0) {
		@ReportReputationChange(var_56_object, var_17_object, -0.3);
		var_15_bool = true;
		return 4;
	}
	var_15_bool = false;
}


void func_696(bool var_0_bool)
{
	func_1781(var_0_bool);
}


void func_1209(bool var_405_bool, float var_406_float)
{
	float var_409_float; bool var_410_bool;
	@rand(var_409_float);
	if(var_409_float < var_406_float) {

		for(;;) {
			@IsAnimationPlaying(var_410_bool);
			if(!var_410_bool) { //@nz
			} else {
				bool var_413_bool;
				func_1273(var_410_bool, var_413_bool);
				if(var_413_bool != 0) {
					var_405_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_405_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1233(bool var_0_bool, bool var_247_bool, float var_248_float)
{
	bool var_254_bool; cvector var_255_cvector; cvector var_256_cvector; cvector var_257_cvector; float var_258_float;
	
	for(;;) {
		@IsAnimationPlaying(var_254_bool);
		if(!var_254_bool) //@nz
			break;
		bool var_260_bool;
		func_1273(var_258_float, var_260_bool);
		if(var_260_bool != 0) {
			var_247_bool = true;
			return 10;
		}
		bool var_285_bool;
		func_1674(var_285_bool, var_0_bool);
		if(!var_285_bool) { //@nz
			var_247_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_255_cvector); //@t
		@GetPFPosition(var_256_cvector);
		var_257_cvector = var_255_cvector - var_256_cvector;
		var_258_float = var_257_cvector | var_257_cvector;
		if(var_258_float < (var_248_float * var_248_float)) {
			bool var_290_bool; float var_291_float;
			var_248_float = var_291_float;
			func_1129(var_257_cvector, var_258_float, var_290_bool, var_291_float);
			var_247_bool = true;
			return 10;
		}
		@sync();
	}
	var_247_bool = false;
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


// @pe
void func_2295(void)
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1273(bool var_0_bool, bool var_260_bool)
{
	cvector var_266_cvector; cvector var_267_cvector;
	bool var_271_bool;
	func_1674(var_271_bool, var_0_bool);
	if(!var_271_bool) { //@nz
		var_260_bool = false;
		return 10;
	}
	bool var_274_bool;
	float var_270_float;
	func_1325(var_270_float, var_274_bool);
	if(var_274_bool != 0) {
		var_0_bool->GetPFPosition(var_266_cvector); //@t
		@GetPFPosition(var_267_cvector);
		var_0_bool->GetAttackDistance(var_270_float); //@t
		var_270_float += 50;
		if(((var_266_cvector - var_267_cvector) | (var_266_cvector - var_267_cvector)) <= (var_270_float * var_270_float)) {
			func_1306(var_270_float);
			var_260_bool = true;
			return 10;
		}
	}
	var_260_bool = false;
}


// @pe
void func_1792(float var_369_float, float var_370_float, float var_371_float)
{
	if(var_370_float < var_371_float)
		var_370_float = var_369_float;
	else
		var_371_float = var_369_float;
	
}


// @pe
void func_1799(float var_379_float, float var_380_float, float var_381_float, float var_382_float)
{
	if(var_380_float < var_381_float) {
		var_381_float = var_379_float;
		return 0;
	}
	if(var_380_float > var_382_float) {
		var_382_float = var_379_float;
		return 0;
	}
	var_380_float = var_379_float;
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
	cvector var_280_cvector;
	var_0_bool->GetPFPosition(var_280_cvector); //@t
	cvector var_281_cvector;
	@GetPFPosition(var_281_cvector);
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


void func_1325(bool var_0_bool, bool var_239_bool)
{
	bool var_241_bool;
	var_244_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_244_bool != 0) {
		var_0_bool->IsAttacking(var_241_bool); //@t
		var_241_bool = var_239_bool;
	}
	var_239_bool = false;
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
	int var_304_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_303_float;
	@rand(var_303_float);
	float var_310_float;
	func_1374(var_310_float);
	if(var_303_float < var_310_float) {
		@irand(var_304_int, var_2_bool);
		@Speak("attack" + (var_304_int + 1));
		int var_315_int;
		func_1372(var_315_int);
		var_4_object = var_315_int;
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


void func_1368(int var_386_int)
{
	var_386_int = 0;
}


// @pe
void func_1370(void)
{
}


void func_1372(int var_315_int)
{
	var_315_int = 1;
}


void func_1374(float var_310_float)
{
	var_310_float = 0.5;
}


void func_1890(string var_179_string, int var_180_int)
{
	string var_182_string = "idle";
	if(var_180_int != 0)
		var_182_string += var_180_int;
	var_182_string = var_179_string;
}


void func_1383(bool var_0_bool, bool var_1_bool, bool var_163_bool, object var_164_object, float var_165_float, float var_166_float, bool var_167_bool, bool var_168_bool)
{
	bool var_179_bool; object var_181_object; cvector var_182_cvector; cvector var_183_cvector; float var_185_float; object var_186_object;
	var_0_bool = false;
	var_1_bool = var_164_object;
	bool var_180_bool;
	var_168_bool = var_180_bool;
	
	for(;;) {
		bool var_187_bool; object var_188_object;
		var_164_object = var_188_object;
		func_1523(var_187_bool, var_188_object);
		if(!var_187_bool) { //@nz
			var_163_bool = false;
			return 16;
		}
		var_164_object->GetPosition(var_182_cvector);
		@GetPosition(var_183_cvector);
		var_185_float = (var_182_cvector - var_183_cvector) | (var_182_cvector - var_183_cvector);
		bool var_192_bool = false;
		if(var_166_float > 0) {
			if(var_185_float > (var_166_float * var_166_float))
				var_192_bool = true;
		}
		if(var_192_bool != 0) {
			@Stop();
			var_163_bool = false;
			return 16;
		}
		if(var_185_float > (var_165_float * var_165_float)) {
			var_164_object->GetPFPosition(var_182_cvector);
			@FindPathTo(var_186_object, var_182_cvector);
			if(var_186_object != null) {
				var_186_object = var_181_object;
				var_186_object = null;
			}
			if(var_181_object != null) {
				if(var_180_bool == 0) goto Label_1436;
				var_180_bool = false;
				@RotatePath(var_181_object, var_179_bool);
				if(!var_179_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_205_string;
						func_1530(var_205_string);
						string var_206_string;
						func_1532(var_206_string);
						@FollowPath(var_181_object, var_167_bool, var_179_bool, var_205_string, var_206_string);
						if(!var_179_bool) { //@nz
							if(var_0_bool == 0) goto Label_1455;
							var_181_object = null;
						}
					EMIT "GOTO 0x5b0";

					Label_1455:
						} else {
					var_181_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_179_bool);
					if(!var_179_bool) { //@nz
						if(var_0_bool != 0) {
							var_181_object = null;
							goto Label_1483;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1483;
		}
			var_186_object = null;
			goto Label_1481;

		Label_1481:
			var_181_object = null;

		}
	Label_1483:
		for(;;) {
			var_163_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_871(object var_106_object)
{
	object var_112_object;
	func_885(var_107_object, var_108_int, var_109_int, var_110_bool, var_111_int, var_112_object, var_112_object, true, 180.0);
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
void func_879(float var_330_float)
{
	var_330_float = 0.05;
}


// @pe
void func_882(int var_337_int)
{
	var_337_int = 0;
}


void func_885(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_112_object, bool var_113_bool, float var_114_float, bool var_169_bool)
{
	bool var_125_bool; bool var_126_bool; float var_127_float; cvector var_128_cvector; cvector var_129_cvector; bool var_130_bool; bool var_131_bool; float var_133_float; float var_134_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_125_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_125_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_126_bool, ("attack" + (var_2_bool + 1)));
			if(!var_126_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_148_bool = IsFuncExist(var_112_object, "@GetAttackDistance", 1);
			if(var_148_bool != 0) {
				var_112_object->GetAttackDistance(var_127_float);
				var_127_float += 50;
			} else {
								var_114_float = var_127_float;

			}
			if(var_127_float >= 150)
				var_127_float = 150;
			var_3_object = false;
			var_0_bool = var_112_object;
			@IsPlayerActor(var_0_bool, var_130_bool);
			if(var_113_bool != 0)
				var_131_bool = false;
			else
				var_131_bool = true;

			for(;;) {
				bool var_153_bool = false;
				bool var_154_bool;
				func_1674(var_154_bool, var_0_bool);
				if(var_154_bool != 0) {
					if(!var_3_object) //@nz
						var_153_bool = true;
				}
				if(var_153_bool != 0) {
					var_0_bool->GetPFPosition(var_128_cvector); //@t
					@GetPFPosition(var_129_cvector);
					var_133_float = (var_128_cvector - var_129_cvector) | (var_128_cvector - var_129_cvector);
					if(var_133_float >= ((400.0 + var_127_float) * (400.0 + var_127_float))) {
						bool var_163_bool; float var_165_float;
						var_127_float = var_165_float;
						TaskCall(5);
						func_1383(var_169_bool, var_170_object, var_163_bool, var_0_bool, var_165_float, 3000.0, true, false);
						TaskReturn();
						if(!var_169_bool) { //@nz
						} else {
							var_131_bool = false;
					} else {
					if(var_133_float >= (var_114_float * var_114_float)) {
						if(!var_131_bool) { //@nz
							func_1765(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_131_bool = true;
						}
						@rand(var_134_float);
						bool var_236_bool;
						var_238_bool = var_134_float < 0.6;
						if(var_238_bool != 1) {
							bool var_239_bool;
							func_1325(true, var_239_bool);
							if(var_239_bool != 1)
								var_236_bool = false;
						}
						if(var_236_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_247_bool; float var_248_float;
							func_1233(var_134_float, var_247_bool, var_248_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_417_bool;
							func_1325(var_134_float, var_417_bool);
							var_418_bool = !var_417_bool; //@nz
							if(var_418_bool == 0) goto Label_1063;
							bool var_419_bool;
							func_1674(var_419_bool, var_0_bool);
							if(!var_419_bool) { //@nz
								goto Label_1073;
							}
							var_0_bool->GetPFPosition(var_128_cvector); //@t
							@GetPFPosition(var_129_cvector);
							var_133_float = (var_128_cvector - var_129_cvector) | (var_128_cvector - var_129_cvector);
							if(!(var_133_float < (var_248_float * var_248_float))) goto Label_1063;
							bool var_424_bool; float var_425_float;
							var_114_float = var_425_float;
							func_1129(var_133_float, var_134_float, var_424_bool, var_425_float);
							var_426_bool = !var_424_bool; //@nz
							if(var_426_bool == 0) goto Label_1063;
							goto Label_1073;
					}
						bool var_427_bool; float var_428_float;
						var_114_float = var_428_float;
						func_1129(var_133_float, var_134_float, var_427_bool, var_428_float);
						if(!var_427_bool) { //@nz
							goto Label_1073;
						}
						var_131_bool = true;

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
				if(var_130_bool != 0)
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
void func_1931(int var_68_int, object var_69_object)
{
	object var_71_object;
	var_69_object = var_71_object;
	bool var_70_bool;
	func_1674(var_70_bool, var_71_object);
	if(var_70_bool != 0)
		var_68_int = 2;
	else
		var_68_int = 0;
	
}


// @pe
void func_1941(object var_105_object)
{
	object var_106_object;
	var_105_object = var_106_object;
	TaskCall(4);
	func_871(var_106_object);
	TaskReturn();
}


// @pe
void func_1949(int var_66_int, object var_67_object)
{
	object var_69_object;
	var_67_object = var_69_object;
	int var_68_int;
	func_1931(var_68_int, var_69_object);
	var_68_int = var_66_int;
}


// @pe
void func_1956(object var_104_object)
{
	object var_105_object;
	var_104_object = var_105_object;
	func_1941(var_105_object);
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


void func_1530(string var_205_string)
{
	var_205_string = "walk";
}


void func_1532(string var_206_string)
{
	var_206_string = "run";
}


// @pe
void func_1534(string var_361_string, int var_362_int)
{
	if(var_362_int == 1)
		var_361_string = "fire";
	var_361_string = "phys";
}


