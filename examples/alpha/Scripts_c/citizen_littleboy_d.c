// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1734(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			object var_18_object;
			var_11_bool = var_18_object;
			func_1737(var_18_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_1743();
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool, object var_12_object, cvector var_13_cvector, bool var_14_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		@SensePlayerOnly(true);
		func_1823();
		func_163();
	
		for(;;) {
			var_2_bool = false;
			func_376(var_9_cvector, var_10_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1734(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_bool = var_21_object;
			func_1737(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		int var_14_int;
		func_1688(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_55_object;
			var_11_bool = var_55_object;
			func_1698(var_55_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		int var_14_int;
		object var_16_object;
		var_11_cvector = var_16_object;
		object var_17_object;
		var_12_bool = var_17_object;
		bool var_15_bool;
		func_1852(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_48_int; object var_49_object;
			var_11_cvector = var_49_object;
			func_1706(var_48_int, var_49_object);
			var_48_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_311(var_14_int);
				object var_83_object;
				var_11_cvector = var_83_object;
				func_1716(var_83_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1724(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_bool = var_21_object;
			func_1727();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		string var_16_string;
		var_12_bool = var_16_string;
		object var_17_object;
		var_11_cvector = var_17_object;
		func_1729(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			string var_23_string; object var_24_object;
			var_12_bool = var_23_string;
			var_11_cvector = var_24_object;
			func_1732();
		}
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_12_object;
		func_336(var_12_object, var_12_object);
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_12_object;
		func_336(var_12_object, var_12_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		if(var_11_bool != 110) {
		}
		var_2_bool = false;
		@KillTimer(110);
		@ResetAAS();
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_311(var_10_bool);
		func_1743();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		func_311(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1639();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		@Stop();
	}

}


task task_2
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1734(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_bool = var_20_object;
			func_1737(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		int var_14_int;
		func_1688(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_54_object;
			var_11_bool = var_54_object;
			func_1698(var_54_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		int var_14_int;
		object var_16_object;
		var_11_cvector = var_16_object;
		object var_17_object;
		var_12_bool = var_17_object;
		bool var_15_bool;
		func_1852(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_48_int; object var_49_object;
			var_11_cvector = var_49_object;
			func_1706(var_48_int, var_49_object);
			var_48_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_640();
				object var_82_object;
				var_11_cvector = var_82_object;
				func_1716(var_82_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1724(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_bool = var_20_object;
			func_1727();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		string var_16_string;
		var_12_bool = var_16_string;
		object var_17_object;
		var_11_cvector = var_17_object;
		func_1729(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			string var_22_string; object var_23_object;
			var_12_bool = var_22_string;
			var_11_cvector = var_23_object;
			func_1732();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_640();
		func_1743();
	}

}


task task_3
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1847(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_732();
			object var_20_object;
			var_11_bool = var_20_object;
			func_1850();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_732();
		func_1743();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		func_732();
		object var_12_object;
		var_11_bool = var_12_object;
		func_1639();
	}

}


task task_4
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1847(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_910(var_13_int);
			object var_21_object;
			var_11_bool = var_21_object;
			func_1850();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_910(var_10_bool);
		func_1743();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		if(var_11_bool != 0)
			return 0;
		bool var_14_bool;
		func_926(var_14_bool, var_1_bool);
		if(!var_14_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		@RequestClearPath(var_11_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		func_910(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1639();
	}

}


task task_5
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_1116(var_10_bool);
		func_1743();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, int var_8_int, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		cvector var_16_cvector; float var_17_float; cvector var_18_cvector; float var_19_float;
		if(var_11_bool != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_16_cvector);
			@FindDirLength(var_17_float, var_16_cvector, 7000.0);
			cvector var_25_cvector;
			func_970(var_19_float, var_25_cvector, 1.7453294);
			var_25_cvector = var_18_cvector;
			var_19_float = var_18_cvector | var_18_cvector;
			bool var_55_bool = false;
			if(var_19_float >= 10000.0) {
				bool var_58_bool;
				var_62_bool = var_19_float >= ((var_17_float * var_17_float) * 2.25);
				if(var_62_bool != 1) {
					bool var_63_bool;
					func_1132(true, var_63_bool);
					if(var_63_bool != 1)
						var_58_bool = false;
				}
				if(var_58_bool != 0)
					var_55_bool = true;
			}
			if(var_55_bool == 0) goto Label_1115;
			@Stop();
			cvector var_83_cvector;
			func_1326(var_83_cvector);
			var_1_bool = var_83_cvector + var_18_cvector;
		}
	Label_1115:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		func_1116(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1639();
	}

}


task task_6
{
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, int var_11_int)
	{
		cvector var_16_cvector; float var_17_float; cvector var_18_cvector; float var_19_float;
		if(var_11_int != 120) {
		}
		if(var_0_bool == null) {
			@Stop();
			@KillTimer(1);
			var_2_bool = true;
		} else {
			@GetDirection(var_16_cvector);
			@FindDirLength(var_17_float, var_16_cvector, 7000.0);
			cvector var_25_cvector;
			func_1148(var_19_float, var_25_cvector, 1.7453294);
			var_25_cvector = var_18_cvector;
			var_19_float = var_18_cvector | var_18_cvector;
			bool var_55_bool = false;
			if(var_19_float >= 10000.0) {
				bool var_58_bool;
				var_62_bool = var_19_float >= ((var_17_float * var_17_float) * 2.25);
				if(var_62_bool != 1) {
					bool var_63_bool;
					func_1310(true, var_63_bool);
					if(var_63_bool != 1)
						var_58_bool = false;
				}
				if(var_58_bool != 0)
					var_55_bool = true;
			}
			if(var_55_bool == 0) goto Label_1293;
			@Stop();
			cvector var_83_cvector;
			func_1326(var_83_cvector);
			var_1_bool = var_83_cvector + var_18_cvector;
		}
	Label_1293:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object)
	{
		func_1294(var_11_object);
		object var_13_object;
		var_11_object = var_13_object;
		func_1639();
	}

}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_1618(var_12_object);
}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1508(var_16_int, var_17_float);
}


void func_640(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_0(object var_13_object)
{
	object var_14_object;
	var_13_object = var_14_object;
	func_33(var_14_object);
	object var_64_object;
	var_13_object = var_64_object;
	func_1892();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_773(bool var_70_bool, object var_71_object)
{
	bool var_74_bool; object var_75_object;
	func_786(var_70_bool, var_75_object, var_74_bool, var_75_object, (float)150, (float)3000, false, true);
	var_74_bool = var_70_bool;
}


// @pe
void func_645(object var_62_object)
{
	object var_64_object;
	var_62_object = var_64_object;
	bool var_63_bool;
	func_1842(var_63_bool, var_64_object);
	if(var_63_bool != 0) {
		object var_67_object;
		var_62_object = var_67_object;
		func_683(var_67_object);
	}
}


// @pe
void func_1677(int var_54_int)
{
	var_54_int = 2;
}


void func_910(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1294(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_1680(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(3);
	func_645(var_62_object);
	TaskReturn();
}


void func_784(string var_114_string)
{
	var_114_string = "zwalk";
}


void func_786(bool var_0_bool, bool var_1_bool, bool var_74_bool, object var_75_object, float var_76_float, float var_77_float, bool var_78_bool, bool var_79_bool)
{
	bool var_88_bool; object var_90_object; cvector var_91_cvector; cvector var_92_cvector; float var_94_float; object var_95_object;
	var_0_bool = false;
	var_1_bool = var_75_object;
	bool var_89_bool;
	var_79_bool = var_89_bool;
	
	for(;;) {
		bool var_96_bool; object var_97_object;
		var_75_object = var_97_object;
		func_926(var_96_bool, var_97_object);
		if(!var_96_bool) { //@nz
			var_74_bool = false;
			return 16;
		}
		var_75_object->GetPosition(var_91_cvector);
		@GetPosition(var_92_cvector);
		var_94_float = (var_91_cvector - var_92_cvector) | (var_91_cvector - var_92_cvector);
		bool var_101_bool = false;
		if(var_77_float > 0) {
			if(var_94_float > (var_77_float * var_77_float))
				var_101_bool = true;
		}
		if(var_101_bool != 0) {
			@Stop();
			var_74_bool = false;
			return 16;
		}
		if(var_94_float > (var_76_float * var_76_float)) {
			var_75_object->GetPFPosition(var_91_cvector);
			@FindPathTo(var_95_object, var_91_cvector);
			if(var_95_object != null) {
				var_95_object = var_90_object;
				var_95_object = null;
			}
			if(var_90_object != null) {
				if(var_89_bool == 0) goto Label_839;
				var_89_bool = false;
				@RotatePath(var_90_object, var_88_bool);
				if(!var_88_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_114_string;
						func_784(var_114_string);
						string var_115_string;
						func_933(var_115_string);
						@FollowPath(var_90_object, var_78_bool, var_88_bool, var_114_string, var_115_string);
						if(!var_88_bool) { //@nz
							if(var_0_bool == 0) goto Label_858;
							var_90_object = null;
						}
					EMIT "GOTO 0x35b";

					Label_858:
						} else {
					var_90_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_88_bool);
					if(!var_88_bool) { //@nz
						if(var_0_bool != 0) {
							var_90_object = null;
							goto Label_886;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_886;
		}
			var_95_object = null;
			goto Label_884;

		Label_884:
			var_90_object = null;

		}
	Label_886:
		for(;;) {
			var_74_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1148(bool var_0_bool, cvector var_25_cvector, float var_26_float)
{
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	var_0_bool->GetPosition(var_34_cvector); //@t
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_39_cvector;
	cvector var_41_cvector;
	func_1580(var_41_cvector, (var_33_cvector - var_34_cvector));
	func_1580(var_39_cvector, (var_41_cvector + (var_35_cvector * 0.75)));
	cvector var_36_cvector;
	var_39_cvector = var_36_cvector;
	cvector var_37_cvector;
	float var_38_float;
	@FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, 32, 7000.0);
	if((var_38_float - 100) < 0)
		var_38_float = 0;
	var_25_cvector = var_37_cvector * var_38_float;
}


// @pe
void func_1688(int var_14_int, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1484(var_16_bool, var_17_object);
	if(var_16_bool != 0)
		var_14_int = 2;
	else
		var_14_int = 0;
	
}


void func_1178(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_83_object)
{
	cvector var_95_cvector; float var_96_float;
	cvector var_97_cvector;
	func_1148(var_96_float, var_97_cvector, 1.7453294);
	cvector var_92_cvector;
	var_97_cvector = var_92_cvector;
	float var_93_float = var_92_cvector | var_92_cvector;
	if(var_93_float < 10000.0) {
		var_130_float = sqrt(var_93_float);
		@Trace("Can't retreat, distance: " + var_130_float);
		@Sleep(0.5);
		return 10;
	}
	var_133_float = GetByIndex(var_92_cvector, 0);
	var_134_float = GetByIndex(var_92_cvector, 2);
	@Rotate(var_133_float, var_134_float);
	cvector var_135_cvector;
	func_1326(var_135_cvector);
	@SetTimer(120, 0.5);
	
Label_1211:
	bool var_94_bool;
	@MovePoint((var_135_cvector + var_92_cvector), 1, var_94_bool);
	if(var_94_bool != 0) {
		if(var_83_object == null) {
			goto Label_1241;
		EMIT "GOTO 0x4d7";

		Label_1241:
			for(;;) {
				return 10;
		}
			cvector var_143_cvector;
			func_1148(var_96_float, var_143_cvector, 2.6179938);
			var_143_cvector = var_95_cvector;
			if((var_95_cvector | var_95_cvector) >= 10000.0) {
				cvector var_147_cvector;
				func_1326(var_147_cvector);
				var_1_bool = var_147_cvector + var_95_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1211; //@nz

	}
}


void func_1818(int var_51_int, string var_52_string)
{
	int var_54_int;
	@GetInvItemByName(var_54_int, var_52_string);
	var_54_int = var_51_int;
}


// @pe
void func_926(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1484(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


void func_1310(bool var_0_bool, bool var_63_bool)
{
	cvector var_66_cvector;
	@GetDirection(var_66_cvector);
	cvector var_68_cvector;
	func_1331(var_68_cvector, var_0_bool);
	cvector var_67_cvector;
	var_68_cvector = var_67_cvector;
	float var_74_float; cvector var_75_cvector; cvector var_76_cvector;
	var_66_cvector = var_75_cvector;
	var_67_cvector = var_76_cvector;
	func_1601(var_74_float, var_75_cvector, var_76_cvector);
	var_63_bool = var_74_float >= -0.34202012;
}


void func_1823(void)
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = false;
	bool var_13_bool = true;
	func_1774();
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
void func_1698(object var_54_object)
{
	object var_55_object;
	var_54_object = var_55_object;
	TaskCall(5);
	func_935(var_55_object);
	TaskReturn();
}


void func_163(void)
{
	bool var_64_bool;
	func_1575(var_64_bool);
	if(!var_64_bool) //@nz
		func_1743();
}


void func_1443(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


void func_933(string var_115_string)
{
	var_115_string = "run";
}


void func_1575(bool var_64_bool)
{
	bool var_66_bool;
	@IsLoaded(var_66_bool);
	var_66_bool = var_64_bool;
}


void func_1448(bool var_20_bool, object var_21_object)
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
		func_1443(var_31_bool, var_32_object);
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
void func_935(object var_55_object)
{
	@Face(var_55_object);
	@PlayAnimation("all", "attack_on");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_stay");
	@WaitForAnimEnd();
	@PlayAnimation("all", "attack_off");
	@WaitForAnimEnd();
	@StopAsync();
	object var_65_object;
	func_1000(var_57_cvector, var_58_bool, var_65_object, var_65_object);
}


// @pe
void func_1706(int var_48_int, object var_49_object)
{
	object var_51_object;
	var_49_object = var_51_object;
	bool var_50_bool;
	func_1484(var_50_bool, var_51_object);
	if(var_50_bool != 0)
		var_48_int = 2;
	else
		var_48_int = 0;
	
}


void func_683(object var_67_object)
{
	bool var_69_bool;
	
	for(;;) {
		bool var_70_bool; object var_71_object;
		TaskCall(4);
		func_773(var_70_bool, var_71_object);
		TaskReturn();
		if(var_72_bool != 0) {
			@Face(var_71_object);
			@WaitForAnimEnd(var_69_bool);
			if(!var_69_bool) { //@nz
			} else {
					@PlayAnimation("all", "dattack_begin");
					@WaitForAnimEnd(var_69_bool);
					var_128_bool = !var_69_bool; //@nz
					if(var_128_bool == 0) goto Label_707;
			}
		}
	Label_731:
		for(;;) {
			return 2;

		}

	Label_707:
		float var_129_float; object var_130_object;
		var_67_object = var_130_object;
		func_1338(var_129_float, var_130_object);
		if(var_129_float <= 90000.0) {
			float var_139_float; object var_140_object;
			var_67_object = var_140_object;
			func_1380(var_139_float, var_140_object, 0.2);
		}
		@PlayAnimation("all", "dattack_end");
		@WaitForAnimEnd(var_69_bool);
		if(!var_69_bool) { //@nz
			goto Label_731;
		}
		@StopAsync();
	}
}


void func_1580(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_44_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_44_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_44_float;
}


void func_1831(object var_21_object)
{
	bool var_23_bool;
	var_24_bool = GlobalVars[0];
	if(var_24_bool != 0) {
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) //@nz
			@WorkWithCorpse(var_21_object);
	}
}


void func_1326(cvector var_83_cvector)
{
	cvector var_85_cvector;
	@GetPosition(var_85_cvector);
	var_85_cvector = var_83_cvector;
}


void func_1842(bool var_63_bool, object var_64_object)
{
	bool var_66_bool;
	@IsPlayerActor(var_64_object, var_66_bool);
	var_66_bool = var_63_bool;
}


void func_1331(cvector var_68_cvector, object var_69_object)
{
	cvector var_72_cvector;
	@GetPosition(var_72_cvector);
	cvector var_73_cvector;
	var_69_object->GetPosition(var_73_cvector);
	var_68_cvector = var_73_cvector - var_72_cvector;
}


// @pe
void func_1716(object var_82_object)
{
	object var_83_object;
	var_82_object = var_83_object;
	TaskCall(6);
	func_1178(var_84_object, var_85_cvector, var_86_bool, var_83_object);
	TaskReturn();
}


// @pe
void func_1590(float var_181_float, float var_182_float, float var_183_float, float var_184_float)
{
	if(var_182_float < var_183_float) {
		var_183_float = var_181_float;
		return 0;
	}
	if(var_182_float > var_184_float) {
		var_184_float = var_181_float;
		return 0;
	}
	var_182_float = var_181_float;
}


void func_311(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_440(var_10_cvector, var_11_bool);
}


void func_440(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1847(int var_14_int)
{
	var_14_int = 0;
}


// @pe
void func_1850(void)
{
}


void func_571(void)
{
	int var_100_int; int var_101_int; bool var_102_bool; float var_103_float; bool var_104_bool;
	@WaitForAnimEnd();
	bool var_105_bool;
	func_1575(var_105_bool);
	if(!var_105_bool) //@nz
		return 14;
	int var_107_int;
	func_1660(var_107_int);
	int var_98_int;
	var_107_int = var_98_int;
	int var_99_int = 0;
	
	for(;;) {
		bool var_120_bool = false;
		if(var_99_int < 5) {
			bool var_123_bool;
			func_1575(var_123_bool);
			if(var_123_bool != 0)
				var_120_bool = true;
		}
		if(var_120_bool != 0) {
			@irand(var_100_int, 3);
			if(var_100_int == 0) {
				if(var_98_int == 0) goto Label_618;
				@irand(var_101_int, var_98_int);
				string var_129_string; int var_130_int;
				var_101_int = var_130_int;
				func_1653(var_129_string, var_130_int);
				@PlayAnimation("all", var_129_string);
				@WaitForAnimEnd(var_102_bool);
				if(!var_102_bool) { //@nz
				} else {
			} else {
			if(var_100_int == 1) {
				@rand(var_103_float, 4);
				@Sleep((var_103_float + 1), var_104_bool);
				if(!var_104_bool) { //@nz
					goto Label_639;
				}
			} else if(var_99_int != 0) {
				goto Label_639;
			}
			}
				var_99_int += 1;
			}
		}
	Label_639:
		return 14;

	}
	
}


// @pe
void func_1724(int var_14_int)
{
	var_14_int = 0;
}


void func_1852(bool var_15_bool, object var_16_object, object var_17_object)
{
	object var_23_object;
	var_17_object = var_23_object;
	bool var_22_bool;
	func_1346(var_22_bool, var_23_object, "class");
	if(!var_22_bool) { //@nz
		var_15_bool = false;
		return 4;
	}
	string var_20_string;
	var_17_object->GetProperty("class", var_20_string);
	if(var_20_string == "rat") {
		var_15_bool = false;
		return 4;
	}
	bool var_21_bool;
	@CanSee(var_21_bool, var_16_object);
	bool var_35_bool = true;
	if(var_21_bool != 1) {
		float var_37_float; object var_38_object;
		func_1338(var_37_float, var_38_object);
		var_46_bool = var_37_float <= 250000.0;
		if(var_46_bool != 1)
			var_35_bool = false;
	}
	if(var_35_bool != 0) {
		@ReportReputationChange(var_38_object, var_17_object, -0.3);
		var_15_bool = true;
		return 4;
	}
	var_15_bool = false;
}


void func_1338(float var_37_float, object var_38_object)
{
	cvector var_42_cvector;
	@GetPosition(var_42_cvector);
	cvector var_43_cvector;
	var_38_object->GetPosition(var_43_cvector);
	var_37_float = (var_43_cvector - var_42_cvector) | (var_43_cvector - var_42_cvector);
}


// @pe
void func_1727(void)
{
}


void func_447(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1729(int var_15_int)
{
	var_15_int = 0;
}


void func_319(bool var_2_bool)
{
	@KillTimer(110);
	var_2_bool = false;
	func_447(var_15_bool, var_16_int);
}


// @pe
void func_1601(float var_74_float, cvector var_75_cvector, cvector var_76_cvector)
{
	var_81_float = sqrt((var_75_cvector | var_75_cvector) * (var_76_cvector | var_76_cvector));
	var_74_float = (var_75_cvector | var_76_cvector) / var_81_float;
}


// @pe
void func_1732(void)
{
}


void func_1346(bool var_38_bool, object var_39_object, string var_40_string)
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


// @pe
void func_1734(int var_14_int)
{
	var_14_int = 2;
}


void func_454(bool var_89_bool)
{
	var_89_bool = false;
}


// @pe
void func_1737(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_1831(var_21_object);
}


void func_970(bool var_0_bool, cvector var_25_cvector, float var_26_float)
{
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	var_0_bool->GetPosition(var_34_cvector); //@t
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_39_cvector;
	cvector var_41_cvector;
	func_1580(var_41_cvector, (var_33_cvector - var_34_cvector));
	func_1580(var_39_cvector, (var_41_cvector + (var_35_cvector * 0.75)));
	cvector var_36_cvector;
	var_39_cvector = var_36_cvector;
	cvector var_37_cvector;
	float var_38_float;
	@FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, 32, 7000.0);
	if((var_38_float - 100) < 0)
		var_38_float = 0;
	var_25_cvector = var_37_cvector * var_38_float;
}


void func_1609(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	var_22_int = 1 + (var_24_float / 24);
}


void func_1484(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1448(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1346(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


void func_1358(bool var_169_bool, object var_170_object, string var_171_string, float var_172_float, float var_173_float, float var_174_float)
{
	object var_178_object;
	var_170_object = var_178_object;
	string var_179_string;
	var_171_string = var_179_string;
	bool var_177_bool;
	func_1346(var_177_bool, var_178_object, var_179_string);
	if(!var_177_bool) //@nz
		var_169_bool = false;
	float var_176_float;
	var_170_object->GetProperty(var_171_string, var_176_float);
	float var_181_float; float var_183_float; float var_184_float;
	var_173_float = var_183_float;
	var_174_float = var_184_float;
	func_1590(var_181_float, (var_176_float + var_172_float), var_183_float, var_184_float);
	var_170_object->SetProperty(var_171_string, var_181_float);
	var_169_bool = true;
}


void func_1743(void)
{
}


void func_336(bool var_2_bool, object var_12_object)
{
	bool var_17_bool; object var_18_object;
	func_1484(var_17_bool, var_18_object);
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
	func_1677(var_55_object);
	int var_16_int;
	var_54_int = var_16_int;
	if(var_16_int > 0) {
		if(var_16_int > 1)
			func_319(var_16_int);
		object var_61_object;
		var_12_object = var_61_object;
		func_1680(var_61_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1744(int var_19_int, int var_20_int)
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


// @pe
void func_1618(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
}


void func_732(void)
{
	@StopAsync();
	@StopAnimation();
}


void func_1116(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
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


// @pe
void func_1892(void)
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1380(float var_139_float, object var_140_object, float var_141_float)
{
	int var_145_int; float var_146_float; float var_147_float;
	object var_149_object;
	var_140_object = var_149_object;
	bool var_148_bool;
	func_1346(var_148_bool, var_149_object, "disease");
	if(!var_148_bool) { //@nz
		var_139_float = 0;
		return 6;
	}
	bool var_152_bool; object var_153_object;
	func_1346(var_152_bool, var_153_object, "armor_disease");
	if(var_152_bool != 0) {
		var_153_object->GetProperty("armor_disease", var_145_int);
		if(var_145_int < 100) {
			var_141_float *= (1 - (var_145_int / 100.0));
		} else {
					var_139_float = 0;
					return 6;
		}
	}
	bool var_162_bool; object var_163_object;
	var_140_object = var_163_object;
	func_1346(var_162_bool, var_163_object, "immunity");
	if(var_162_bool != 0) {
		var_140_object->GetProperty("immunity", var_147_float);
		if(var_147_float < var_141_float) {
			var_140_object->SetProperty("immunity", 0);
			var_146_float = var_141_float - var_147_float;
		} else {
			var_140_object->SetProperty("immunity", (var_147_float - var_141_float));
			var_141_float = var_139_float;
			return 6;

		}
	}
	bool var_169_bool; object var_170_object; float var_172_float;
	var_140_object = var_170_object;
	var_146_float = var_172_float;
	func_1358(var_169_bool, var_170_object, "disease", var_172_float, (float)0, (float)1);
	var_141_float = var_139_float;
	
}


void func_1508(object var_15_object, int var_16_int)
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


void func_1000(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_65_object)
{
	cvector var_74_cvector; float var_75_float;
	cvector var_76_cvector;
	func_970(var_75_float, var_76_cvector, 1.7453294);
	cvector var_71_cvector;
	var_76_cvector = var_71_cvector;
	float var_72_float = var_71_cvector | var_71_cvector;
	if(var_72_float < 10000.0) {
		var_109_float = sqrt(var_72_float);
		@Trace("Can't retreat, distance: " + var_109_float);
		@Sleep(0.5);
		return 10;
	}
	var_112_float = GetByIndex(var_71_cvector, 0);
	var_113_float = GetByIndex(var_71_cvector, 2);
	@Rotate(var_112_float, var_113_float);
	cvector var_114_cvector;
	func_1326(var_114_cvector);
	@SetTimer(120, 0.5);
	
Label_1033:
	bool var_73_bool;
	@MovePoint((var_114_cvector + var_71_cvector), 1, var_73_bool);
	if(var_73_bool != 0) {
		if(var_65_object == null) {
			goto Label_1063;
		EMIT "GOTO 0x425";

		Label_1063:
			for(;;) {
				return 10;
		}
			cvector var_122_cvector;
			func_970(var_75_float, var_122_cvector, 2.6179938);
			var_122_cvector = var_74_cvector;
			if((var_74_cvector | var_74_cvector) >= 10000.0) {
				cvector var_126_cvector;
				func_1326(var_126_cvector);
				var_1_bool = var_126_cvector + var_74_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1033; //@nz

	}
}


void func_1132(bool var_0_bool, bool var_63_bool)
{
	cvector var_66_cvector;
	@GetDirection(var_66_cvector);
	cvector var_68_cvector;
	func_1331(var_68_cvector, var_0_bool);
	cvector var_67_cvector;
	var_68_cvector = var_67_cvector;
	float var_74_float; cvector var_75_cvector; cvector var_76_cvector;
	var_66_cvector = var_75_cvector;
	var_67_cvector = var_76_cvector;
	func_1601(var_74_float, var_75_cvector, var_76_cvector);
	var_63_bool = var_74_float >= -0.34202012;
}


void func_1774(void)
{
	bool var_16_bool;
	@ClearSubContainer(0);
	int var_22_int;
	func_1609(var_22_int);
	func_1744(0, (3 + (var_22_int * 5)));
	int var_17_int;
	@irand(var_17_int, 4);
	if(var_17_int == 0) {
		int var_51_int;
		func_1818(var_51_int, "flower");
		@AddItem(var_16_bool, var_51_int, 0, 1);
	}
	@irand(var_17_int, 5);
	if(var_17_int == 0) {
		int var_60_int;
		func_1818(var_60_int, "needle");
		@AddItem(var_16_bool, var_60_int, 0, 1);
	}
}


void func_1653(string var_113_string, int var_114_int)
{
	string var_116_string = "idle";
	if(var_114_int != 0)
		var_116_string += var_114_int;
	var_116_string = var_113_string;
}


void func_376(bool var_0_bool, bool var_1_bool)
{
	float var_75_float; cvector var_76_cvector; cvector var_77_cvector; float var_78_float; bool var_79_bool; object var_80_object; bool var_81_bool;
	@rand(var_75_float, 0.5);
	@Sleep(var_75_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_388:
				@GetPosition(var_77_cvector);
				@GetCameraFarDistance(var_78_float);
				@GetRandomPFPointInCircle(var_76_cvector, var_77_cvector, (var_78_float * 2.5), var_79_bool);
				if(var_79_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_388;
			}
				var_1_bool = false;
		}
		}
		goto Label_405;

	Label_405:
		@FindShiftedPathTo(var_80_object, var_76_cvector);
		if(var_80_object != null) {
			@RotatePath(var_80_object, var_81_bool);
			if(var_81_bool != 0) {
				bool var_89_bool;
				func_454(var_89_bool);
				@FollowPath(var_80_object, var_89_bool, var_81_bool);
				var_80_object = null;
				if(var_81_bool != 0) {
					TaskCall(2);
					func_571();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_80_object = null;
	}
	
}


void func_1660(int var_107_int)
{
	int var_110_int; bool var_111_bool;
	var_110_int = 0;
	
	for(;;) {
		string var_113_string; int var_114_int;
		var_110_int = var_114_int;
		func_1653(var_113_string, var_114_int);
		@HasAnimation(var_111_bool, "all", var_113_string);
		if(!var_111_bool) //@nz
			break;
		var_110_int += 1;
	}
	var_110_int = var_107_int;
}


