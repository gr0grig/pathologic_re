// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1706(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			object var_18_object;
			var_11_bool = var_18_object;
			func_1709(var_18_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_1715();
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
		func_1926();
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
		func_1706(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_bool = var_21_object;
			func_1709(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		int var_14_int;
		func_1660(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_55_object;
			var_11_bool = var_55_object;
			func_1670(var_55_object);
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
		func_1955(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_50_int; object var_51_object;
			var_11_cvector = var_51_object;
			func_1678(var_50_int, var_51_object);
			var_50_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_311(var_14_int);
				object var_85_object;
				var_11_cvector = var_85_object;
				func_1688(var_85_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1696(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_bool = var_21_object;
			func_1699();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		string var_16_string;
		var_12_bool = var_16_string;
		object var_17_object;
		var_11_cvector = var_17_object;
		func_1701(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			string var_23_string; object var_24_object;
			var_12_bool = var_23_string;
			var_11_cvector = var_24_object;
			func_1704();
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
		func_1715();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		func_311(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1611();
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
		func_1706(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_bool = var_20_object;
			func_1709(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		int var_14_int;
		func_1660(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_54_object;
			var_11_bool = var_54_object;
			func_1670(var_54_object);
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
		func_1955(var_15_bool, var_16_object, var_17_object);
		if(var_15_bool != 0) {
			int var_50_int; object var_51_object;
			var_11_cvector = var_51_object;
			func_1678(var_50_int, var_51_object);
			var_50_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_640();
				object var_84_object;
				var_11_cvector = var_84_object;
				func_1688(var_84_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1696(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_bool = var_20_object;
			func_1699();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, bool var_5_bool, object var_6_object, object var_7_object, cvector var_8_cvector, bool var_9_bool, object var_10_object, cvector var_11_cvector, bool var_12_bool)
	{
		string var_16_string;
		var_12_bool = var_16_string;
		object var_17_object;
		var_11_cvector = var_17_object;
		func_1701(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			string var_22_string; object var_23_object;
			var_12_bool = var_22_string;
			var_11_cvector = var_23_object;
			func_1704();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_640();
		func_1715();
	}

}


task task_3
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1950(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_732();
			object var_20_object;
			var_11_bool = var_20_object;
			func_1953();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_732();
		func_1715();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		func_732();
		object var_12_object;
		var_11_bool = var_12_object;
		func_1611();
	}

}


task task_4
{
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, cvector var_7_cvector, bool var_8_bool, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		object var_15_object;
		var_11_bool = var_15_object;
		func_1950(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_910(var_13_int);
			object var_21_object;
			var_11_bool = var_21_object;
			func_1953();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_910(var_10_bool);
		func_1715();
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
		func_1611();
	}

}


task task_5
{
	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool)
	{
		func_1088(var_10_bool);
		func_1715();
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
			func_942(var_19_float, var_25_cvector, 1.7453294);
			var_25_cvector = var_18_cvector;
			var_19_float = var_18_cvector | var_18_cvector;
			bool var_55_bool = false;
			if(var_19_float >= 10000.0) {
				bool var_58_bool;
				var_62_bool = var_19_float >= ((var_17_float * var_17_float) * 2.25);
				if(var_62_bool != 1) {
					bool var_63_bool;
					func_1104(true, var_63_bool);
					if(var_63_bool != 1)
						var_58_bool = false;
				}
				if(var_58_bool != 0)
					var_55_bool = true;
			}
			if(var_55_bool == 0) goto Label_1087;
			@Stop();
			cvector var_83_cvector;
			func_1298(var_83_cvector);
			var_1_bool = var_83_cvector + var_18_cvector;
		}
	Label_1087:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, object var_9_object, cvector var_10_cvector, bool var_11_bool)
	{
		func_1088(var_11_bool);
		object var_13_object;
		var_11_bool = var_13_object;
		func_1611();
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
			func_1120(var_19_float, var_25_cvector, 1.7453294);
			var_25_cvector = var_18_cvector;
			var_19_float = var_18_cvector | var_18_cvector;
			bool var_55_bool = false;
			if(var_19_float >= 10000.0) {
				bool var_58_bool;
				var_62_bool = var_19_float >= ((var_17_float * var_17_float) * 2.25);
				if(var_62_bool != 1) {
					bool var_63_bool;
					func_1282(true, var_63_bool);
					if(var_63_bool != 1)
						var_58_bool = false;
				}
				if(var_58_bool != 0)
					var_55_bool = true;
			}
			if(var_55_bool == 0) goto Label_1265;
			@Stop();
			cvector var_83_cvector;
			func_1298(var_83_cvector);
			var_1_bool = var_83_cvector + var_18_cvector;
		}
	Label_1265:
	
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, cvector var_6_cvector, bool var_7_bool, object var_8_object, cvector var_9_cvector, bool var_10_bool, object var_11_object)
	{
		func_1266(var_11_object);
		object var_13_object;
		var_11_object = var_13_object;
		func_1611();
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
	func_1590(var_12_object);
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
	func_1480(var_16_int, var_17_float);
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
	func_2001();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1282(bool var_0_bool, bool var_63_bool)
{
	cvector var_66_cvector;
	@GetDirection(var_66_cvector);
	cvector var_68_cvector;
	func_1303(var_68_cvector, var_0_bool);
	cvector var_67_cvector;
	var_68_cvector = var_67_cvector;
	float var_74_float; cvector var_75_cvector; cvector var_76_cvector;
	var_66_cvector = var_75_cvector;
	var_67_cvector = var_76_cvector;
	func_1573(var_74_float, var_75_cvector, var_76_cvector);
	var_63_bool = var_74_float >= -0.34202012;
}


void func_1921(int var_51_int, string var_52_string)
{
	int var_54_int;
	@GetInvItemByName(var_54_int, var_52_string);
	var_54_int = var_51_int;
}


// @pe
void func_773(bool var_70_bool, object var_71_object)
{
	bool var_74_bool; object var_75_object;
	func_786(var_70_bool, var_75_object, var_74_bool, var_75_object, (float)150, (float)3000, false, true);
	var_74_bool = var_70_bool;
}


void func_1926(void)
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = false;
	func_1746(true);
}


// @pe
void func_1670(object var_54_object)
{
	object var_55_object;
	var_54_object = var_55_object;
	TaskCall(5);
	func_972(var_56_object, var_57_cvector, var_58_bool, var_55_object);
	TaskReturn();
}


void func_1415(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


// @pe
void func_645(object var_62_object)
{
	object var_64_object;
	var_62_object = var_64_object;
	bool var_63_bool;
	func_1945(var_63_bool, var_64_object);
	if(var_63_bool != 0) {
		object var_67_object;
		var_62_object = var_67_object;
		func_683(var_67_object);
	}
}


void func_1547(bool var_130_bool)
{
	bool var_132_bool;
	@IsLoaded(var_132_bool);
	var_132_bool = var_130_bool;
}


void func_1420(bool var_20_bool, object var_21_object)
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
		func_1415(var_31_bool, var_32_object);
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
void func_1678(int var_50_int, object var_51_object)
{
	object var_53_object;
	var_51_object = var_53_object;
	bool var_52_bool;
	func_1456(var_52_bool, var_53_object);
	if(var_52_bool != 0)
		var_50_int = 2;
	else
		var_50_int = 0;
	
}


void func_910(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_784(string var_114_string)
{
	var_114_string = "zwalk";
}


void func_1552(cvector var_41_cvector, cvector var_42_cvector)
{
	float var_44_float = sqrt(var_42_cvector | var_42_cvector);
	if(var_44_float < 0.000001)
		var_41_cvector = [0.0, 0.0, 0.0];
	var_41_cvector = var_42_cvector / var_44_float;
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


void func_1298(cvector var_83_cvector)
{
	cvector var_85_cvector;
	@GetPosition(var_85_cvector);
	var_85_cvector = var_83_cvector;
}


void func_1934(object var_21_object)
{
	bool var_23_bool;
	var_24_bool = GlobalVars[0];
	if(var_24_bool != 0) {
		@IsOverrideActive(var_23_bool);
		if(!var_23_bool) //@nz
			@WorkWithCorpse(var_21_object);
	}
}


void func_1303(cvector var_68_cvector, object var_69_object)
{
	cvector var_72_cvector;
	@GetPosition(var_72_cvector);
	cvector var_73_cvector;
	var_69_object->GetPosition(var_73_cvector);
	var_68_cvector = var_73_cvector - var_72_cvector;
}


// @pe
void func_1688(object var_84_object)
{
	object var_85_object;
	var_84_object = var_85_object;
	TaskCall(6);
	func_1150(var_86_object, var_87_cvector, var_88_bool, var_85_object);
	TaskReturn();
}


void func_1945(bool var_63_bool, object var_64_object)
{
	bool var_66_bool;
	@IsPlayerActor(var_64_object, var_66_bool);
	var_66_bool = var_63_bool;
}


// @pe
void func_1562(float var_181_float, float var_182_float, float var_183_float, float var_184_float)
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


// @pe
void func_1950(int var_14_int)
{
	var_14_int = 0;
}


void func_1310(float var_39_float, object var_40_object)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_40_object->GetPosition(var_45_cvector);
	var_39_float = (var_45_cvector - var_44_cvector) | (var_45_cvector - var_44_cvector);
}


// @pe
void func_1696(int var_14_int)
{
	var_14_int = 0;
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
void func_1953(void)
{
}


void func_163(void)
{
	bool var_130_bool;
	func_1547(var_130_bool);
	if(!var_130_bool) //@nz
		func_1715();
}


void func_1955(bool var_15_bool, object var_16_object, object var_17_object)
{
	object var_23_object;
	var_17_object = var_23_object;
	bool var_22_bool;
	func_1318(var_22_bool, var_23_object, "class");
	if(!var_22_bool) { //@nz
		var_15_bool = false;
		return 4;
	}
	string var_20_string;
	var_17_object->GetProperty("class", var_20_string);
	if(var_20_string == "rat") {
		var_15_bool = false;
		return 4;
	EMIT "GOTO 0x7bb";
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
		func_1310(var_39_float, var_40_object);
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


// @pe
void func_1699(void)
{
}


// @pe
void func_1701(int var_15_int)
{
	var_15_int = 0;
}


// @pe
void func_926(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1456(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


// @pe
void func_1704(void)
{
}


void func_933(string var_115_string)
{
	var_115_string = "run";
}


// @pe
void func_1706(int var_14_int)
{
	var_14_int = 2;
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
		func_1310(var_129_float, var_130_object);
		if(var_129_float <= 90000.0) {
			float var_139_float; object var_140_object;
			var_67_object = var_140_object;
			func_1352(var_139_float, var_140_object, 0.2);
		}
		@PlayAnimation("all", "dattack_end");
		@WaitForAnimEnd(var_69_bool);
		if(!var_69_bool) { //@nz
			goto Label_731;
		}
		@StopAsync();
	}
}


// @pe
void func_1573(float var_74_float, cvector var_75_cvector, cvector var_76_cvector)
{
	var_81_float = sqrt((var_75_cvector | var_75_cvector) * (var_76_cvector | var_76_cvector));
	var_74_float = (var_75_cvector | var_76_cvector) / var_81_float;
}


// @pe
void func_1709(object var_20_object)
{
	object var_21_object;
	var_20_object = var_21_object;
	func_1934(var_21_object);
}


void func_942(bool var_0_bool, cvector var_25_cvector, float var_26_float)
{
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	var_0_bool->GetPosition(var_34_cvector); //@t
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_39_cvector;
	cvector var_41_cvector;
	func_1552(var_41_cvector, (var_33_cvector - var_34_cvector));
	func_1552(var_39_cvector, (var_41_cvector + (var_35_cvector * 0.75)));
	cvector var_36_cvector;
	var_39_cvector = var_36_cvector;
	cvector var_37_cvector;
	float var_38_float;
	@FindLongestDir(var_37_cvector, var_38_float, var_36_cvector, var_26_float, 32, 7000.0);
	if((var_38_float - 100) < 0)
		var_38_float = 0;
	var_25_cvector = var_37_cvector * var_38_float;
}


void func_1318(bool var_38_bool, object var_39_object, string var_40_string)
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


void func_1456(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1420(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1318(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


void func_1581(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	var_22_int = 1 + (var_24_float / 24);
}


void func_1330(bool var_169_bool, object var_170_object, string var_171_string, float var_172_float, float var_173_float, float var_174_float)
{
	object var_178_object;
	var_170_object = var_178_object;
	string var_179_string;
	var_171_string = var_179_string;
	bool var_177_bool;
	func_1318(var_177_bool, var_178_object, var_179_string);
	if(!var_177_bool) //@nz
		var_169_bool = false;
	float var_176_float;
	var_170_object->GetProperty(var_171_string, var_176_float);
	float var_181_float; float var_183_float; float var_184_float;
	var_173_float = var_183_float;
	var_174_float = var_184_float;
	func_1562(var_181_float, (var_176_float + var_172_float), var_183_float, var_184_float);
	var_170_object->SetProperty(var_171_string, var_181_float);
	var_169_bool = true;
}


void func_1715(void)
{
}


void func_1716(int var_19_int, int var_20_int)
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
void func_1590(object var_12_object)
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
	func_440(var_10_cvector, var_11_bool);
}


void func_440(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_571(void)
{
	int var_166_int; int var_167_int; bool var_168_bool; float var_169_float; bool var_170_bool;
	@WaitForAnimEnd();
	bool var_171_bool;
	func_1547(var_171_bool);
	if(!var_171_bool) //@nz
		return 14;
	int var_173_int;
	func_1632(var_173_int);
	int var_164_int;
	var_173_int = var_164_int;
	int var_165_int = 0;
	
	for(;;) {
		bool var_186_bool = false;
		if(var_165_int < 5) {
			bool var_189_bool;
			func_1547(var_189_bool);
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
				func_1625(var_195_string, var_196_int);
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


void func_1088(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


void func_454(bool var_155_bool)
{
	var_155_bool = false;
}


void func_1352(float var_139_float, object var_140_object, float var_141_float)
{
	int var_145_int; float var_146_float; float var_147_float;
	object var_149_object;
	var_140_object = var_149_object;
	bool var_148_bool;
	func_1318(var_148_bool, var_149_object, "disease");
	if(!var_148_bool) { //@nz
		var_139_float = 0;
		return 6;
	}
	bool var_152_bool; object var_153_object;
	func_1318(var_152_bool, var_153_object, "armor_disease");
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
	func_1318(var_162_bool, var_163_object, "immunity");
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
	func_1330(var_169_bool, var_170_object, "disease", var_172_float, (float)0, (float)1);
	var_141_float = var_139_float;
	
}


void func_1480(object var_15_object, int var_16_int)
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


void func_972(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_55_object)
{
	cvector var_67_cvector; float var_68_float;
	cvector var_69_cvector;
	func_942(var_68_float, var_69_cvector, 1.7453294);
	cvector var_64_cvector;
	var_69_cvector = var_64_cvector;
	float var_65_float = var_64_cvector | var_64_cvector;
	if(var_65_float < 10000.0) {
		var_102_float = sqrt(var_65_float);
		@Trace("Can't retreat, distance: " + var_102_float);
		@Sleep(0.5);
		return 10;
	}
	var_105_float = GetByIndex(var_64_cvector, 0);
	var_106_float = GetByIndex(var_64_cvector, 2);
	@Rotate(var_105_float, var_106_float);
	cvector var_107_cvector;
	func_1298(var_107_cvector);
	@SetTimer(120, 0.5);
	
Label_1005:
	bool var_66_bool;
	@MovePoint((var_107_cvector + var_64_cvector), 1, var_66_bool);
	if(var_66_bool != 0) {
		if(var_55_object == null) {
			goto Label_1035;
		EMIT "GOTO 0x409";

		Label_1035:
			for(;;) {
				return 10;
		}
			cvector var_115_cvector;
			func_942(var_68_float, var_115_cvector, 2.6179938);
			var_115_cvector = var_67_cvector;
			if((var_67_cvector | var_67_cvector) >= 10000.0) {
				cvector var_119_cvector;
				func_1298(var_119_cvector);
				var_1_bool = var_119_cvector + var_67_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1005; //@nz

	}
}


void func_336(bool var_2_bool, object var_12_object)
{
	bool var_17_bool; object var_18_object;
	func_1456(var_17_bool, var_18_object);
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
	func_1649(var_55_object);
	int var_16_int;
	var_54_int = var_16_int;
	if(var_16_int > 0) {
		if(var_16_int > 1)
			func_319(var_16_int);
		object var_61_object;
		var_12_object = var_61_object;
		func_1652(var_61_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


// @pe
void func_2001(void)
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1104(bool var_0_bool, bool var_63_bool)
{
	cvector var_66_cvector;
	@GetDirection(var_66_cvector);
	cvector var_68_cvector;
	func_1303(var_68_cvector, var_0_bool);
	cvector var_67_cvector;
	var_68_cvector = var_67_cvector;
	float var_74_float; cvector var_75_cvector; cvector var_76_cvector;
	var_66_cvector = var_75_cvector;
	var_67_cvector = var_76_cvector;
	func_1573(var_74_float, var_75_cvector, var_76_cvector);
	var_63_bool = var_74_float >= -0.34202012;
}


void func_1746(bool var_13_bool)
{
	int var_16_int; bool var_17_bool;
	if(var_13_bool != 0) {
		int var_22_int;
		func_1581(var_22_int);
		func_1716(0, (100 + (var_22_int * 100)));
		@irand(var_16_int, 9);
		if(var_16_int == 0) {
			int var_51_int;
			func_1921(var_51_int, "lemon");
			@AddItem(var_17_bool, var_51_int, 0, 1);
		} else {
				if(var_16_int == 1) {
					int var_59_int;
					func_1921(var_59_int, "rusk");
					@AddItem(var_17_bool, var_59_int, 0, 1);
			}

			for(;;) {
				} else {
			if(var_16_int == 2) {
				int var_65_int;
				func_1921(var_65_int, "hook");
				@AddItem(var_17_bool, var_65_int, 0, 1);
			} else if(var_16_int == 4) {
				int var_71_int;
				func_1921(var_71_int, "syringe");
				@AddItem(var_17_bool, var_71_int, 0, 1);
			} else if(var_16_int == 5) {
				int var_77_int;
				func_1921(var_77_int, "watch");
				@AddItem(var_17_bool, var_77_int, 0, 1);
			} else if(var_16_int == 6) {
				int var_83_int;
				func_1921(var_83_int, "razor");
				@AddItem(var_17_bool, var_83_int, 0, 1);
			}
	}
		int var_90_int;
		func_1581(var_90_int);
		func_1716(0, (50 + (var_90_int * 50)));
		@irand(var_16_int, 8);
		if(var_16_int == 0) {
			int var_96_int;
			func_1921(var_96_int, "beads");
			@AddItem(var_17_bool, var_96_int, 0, 1);
		} else if(var_16_int == 1) {
			int var_102_int;
			func_1921(var_102_int, "bracelet");
			@AddItem(var_17_bool, var_102_int, 0, 1);
		} else if(var_16_int == 2) {
			int var_108_int;
			func_1921(var_108_int, "ear_ring");
			@AddItem(var_17_bool, var_108_int, 0, 1);
		} else if(var_16_int == 3) {
			int var_114_int;
			func_1921(var_114_int, "gold_ring");
			@AddItem(var_17_bool, var_114_int, 0, 1);
		} else if(var_16_int == 4) {
			int var_120_int;
			func_1921(var_120_int, "silver_ring");
			@AddItem(var_17_bool, var_120_int, 0, 1);
		} else if(var_16_int == 5) {
			int var_126_int;
			func_1921(var_126_int, "flower");
			@AddItem(var_17_bool, var_126_int, 0, 1);
			}
		}
		return 4;

	}
	
}


void func_1625(string var_179_string, int var_180_int)
{
	string var_182_string = "idle";
	if(var_180_int != 0)
		var_182_string += var_180_int;
	var_182_string = var_179_string;
}


void func_732(void)
{
	@StopAsync();
	@StopAnimation();
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


void func_1632(int var_173_int)
{
	int var_176_int; bool var_177_bool;
	var_176_int = 0;
	
	for(;;) {
		string var_179_string; int var_180_int;
		var_176_int = var_180_int;
		func_1625(var_179_string, var_180_int);
		@HasAnimation(var_177_bool, "all", var_179_string);
		if(!var_177_bool) //@nz
			break;
		var_176_int += 1;
	}
	var_176_int = var_173_int;
}


void func_1120(bool var_0_bool, cvector var_25_cvector, float var_26_float)
{
	cvector var_33_cvector;
	@GetPosition(var_33_cvector);
	cvector var_34_cvector;
	var_0_bool->GetPosition(var_34_cvector); //@t
	cvector var_35_cvector;
	@GetDirection(var_35_cvector);
	cvector var_39_cvector;
	cvector var_41_cvector;
	func_1552(var_41_cvector, (var_33_cvector - var_34_cvector));
	func_1552(var_39_cvector, (var_41_cvector + (var_35_cvector * 0.75)));
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
void func_1649(int var_54_int)
{
	var_54_int = 2;
}


void func_1266(bool var_2_bool)
{
	@Stop();
	@KillTimer(120);
	var_2_bool = true;
}


// @pe
void func_1652(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	TaskCall(3);
	func_645(var_62_object);
	TaskReturn();
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
void func_1660(int var_14_int, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1456(var_16_bool, var_17_object);
	if(var_16_bool != 0)
		var_14_int = 2;
	else
		var_14_int = 0;
	
}


void func_1150(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_85_object)
{
	cvector var_97_cvector; float var_98_float;
	cvector var_99_cvector;
	func_1120(var_98_float, var_99_cvector, 1.7453294);
	cvector var_94_cvector;
	var_99_cvector = var_94_cvector;
	float var_95_float = var_94_cvector | var_94_cvector;
	if(var_95_float < 10000.0) {
		var_132_float = sqrt(var_95_float);
		@Trace("Can't retreat, distance: " + var_132_float);
		@Sleep(0.5);
		return 10;
	}
	var_135_float = GetByIndex(var_94_cvector, 0);
	var_136_float = GetByIndex(var_94_cvector, 2);
	@Rotate(var_135_float, var_136_float);
	cvector var_137_cvector;
	func_1298(var_137_cvector);
	@SetTimer(120, 0.5);
	
Label_1183:
	bool var_96_bool;
	@MovePoint((var_137_cvector + var_94_cvector), 1, var_96_bool);
	if(var_96_bool != 0) {
		if(var_85_object == null) {
			goto Label_1213;
		EMIT "GOTO 0x4bb";

		Label_1213:
			for(;;) {
				return 10;
		}
			cvector var_145_cvector;
			func_1120(var_98_float, var_145_cvector, 2.6179938);
			var_145_cvector = var_97_cvector;
			if((var_97_cvector | var_97_cvector) >= 10000.0) {
				cvector var_149_cvector;
				func_1298(var_149_cvector);
				var_1_bool = var_149_cvector + var_97_cvector;
				@SetTimer(120, 0.5);
			} else {
			}
	}
		if(!false) goto Label_1183; //@nz

	}
}


