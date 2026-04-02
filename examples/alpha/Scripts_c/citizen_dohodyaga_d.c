// @GLOBALS: 0:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1955(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			object var_18_object;
			var_11_object = var_18_object;
			func_1958(var_18_object);
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_1964();
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
		func_1965();
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
		func_1955(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_object = var_21_object;
			func_1958(var_21_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1914(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_55_object;
			var_11_object = var_55_object;
			func_1924(var_55_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		int var_14_int;
		object var_16_object;
		var_11_bool = var_16_object;
		object var_17_object;
		var_12_object = var_17_object;
		func_1982(var_17_object);
		bool var_15_bool;
		if(var_15_bool != 0) {
			int var_18_int; object var_19_object;
			var_11_bool = var_19_object;
			func_1932(var_18_int, var_19_object);
			var_18_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_311(var_14_int);
				object var_61_object;
				var_11_bool = var_61_object;
				func_1939(var_61_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1945(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_311(var_13_int);
			object var_21_object;
			var_11_object = var_21_object;
			func_1948();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1950(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_311(var_14_int);
			string var_23_string; object var_24_object;
			var_12_object = var_23_string;
			var_11_bool = var_24_object;
			func_1953();
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
		func_1964();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_311(var_11_object);
		object var_13_object;
		var_11_object = var_13_object;
		func_1859();
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
		func_1955(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_object = var_20_object;
			func_1958(var_20_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1914(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_54_object;
			var_11_object = var_54_object;
			func_1924(var_54_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		int var_14_int;
		object var_16_object;
		var_11_bool = var_16_object;
		object var_17_object;
		var_12_object = var_17_object;
		func_1982(var_17_object);
		bool var_15_bool;
		if(var_15_bool != 0) {
			int var_18_int; object var_19_object;
			var_11_bool = var_19_object;
			func_1932(var_18_int, var_19_object);
			var_18_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_640();
				object var_60_object;
				var_11_bool = var_60_object;
				func_1939(var_60_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1945(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_640();
			object var_20_object;
			var_11_object = var_20_object;
			func_1948();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, string var_4_string, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1950(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_640();
			string var_22_string; object var_23_object;
			var_12_object = var_22_string;
			var_11_bool = var_23_object;
			func_1953();
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_640();
		func_1964();
	}

}


task task_3
{
	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1955(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_22_object;
			var_11_object = var_22_object;
			func_1958(var_22_object);
		}
	}

	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		int var_14_int;
		func_1914(var_14_int, var_15_object);
		int var_13_int;
		var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_56_object;
			var_11_object = var_56_object;
			func_1924(var_56_object);
		}
	}

	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		int var_14_int;
		object var_16_object;
		var_11_bool = var_16_object;
		object var_17_object;
		var_12_object = var_17_object;
		func_1982(var_17_object);
		bool var_15_bool;
		if(var_15_bool != 0) {
			int var_18_int; object var_19_object;
			var_11_bool = var_19_object;
			func_1932(var_18_int, var_19_object);
			var_18_int = var_14_int;
			if(var_14_int > 0) {
				if(var_14_int > 1)
					func_809();
				object var_62_object;
				var_11_bool = var_62_object;
				func_1939(var_62_object);
			}
		}
	}

	void OnSteal(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		func_1945(var_15_object);
		int var_13_int;
		int var_14_int = var_13_int;
		if(var_13_int > 0) {
			if(var_13_int > 1)
				func_809();
			object var_22_object;
			var_11_object = var_22_object;
			func_1948();
		}
	}

	void OnMessage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, string var_5_string, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object)
	{
		string var_16_string;
		var_12_object = var_16_string;
		object var_17_object;
		var_11_bool = var_17_object;
		func_1950(var_17_object);
		int var_14_int;
		int var_15_int = var_14_int;
		if(var_14_int > 0) {
			if(var_14_int > 1)
				func_809();
			string var_24_string; object var_25_object;
			var_12_object = var_24_string;
			var_11_bool = var_25_object;
			func_1953();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		func_809();
		object var_14_object;
		var_11_object = var_14_object;
		func_1859();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, int var_4_int, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object)
	{
		if(var_11_object != 111)
			return 4;
		bool var_18_bool;
		func_1666(var_18_bool, var_0_bool);
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
		func_1821(var_61_float, var_62_cvector, var_63_cvector);
		if(var_61_float < 0.49999997)
			func_1757(var_0_bool);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object)
	{
		func_809();
		func_1964();
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
		func_1964();
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
		func_1859();
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
	func_1838(var_12_object);
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
	func_1690(var_16_int, var_17_float);
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
	func_1985();
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1666(bool var_16_bool, object var_17_object)
{
	object var_21_object;
	var_17_object = var_21_object;
	bool var_20_bool;
	func_1630(var_20_bool, var_21_object);
	if(!var_20_bool) { //@nz
		var_16_bool = false;
		return 2;
	}
	bool var_38_bool; object var_39_object;
	func_1549(var_38_bool, var_39_object, "noaccess");
	if(!var_38_bool) { //@nz
		var_16_bool = true;
		return 2;
	}
	int var_19_int;
	var_39_object->GetProperty("noaccess", var_19_int);
	var_16_bool = var_19_int == 0;
}


// @pe
void func_1924(object var_63_object)
{
	object var_64_object;
	var_63_object = var_64_object;
	TaskCall(4);
	func_871(var_64_object);
	TaskReturn();
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
	func_1821(var_84_float, var_85_cvector, var_86_cvector);
	if(var_84_float < 0) {
		func_1757(var_0_bool);
		var_70_bool = true;
	} else {
		@Sleep(1.5, var_70_bool);
	}
	if(var_70_bool != 0) {
		func_1757(var_0_bool);
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
void func_1802(float var_64_float, cvector var_65_cvector, cvector var_66_cvector)
{
	var_67_float = GetByIndex(var_65_cvector, 0);
	var_68_float = GetByIndex(var_66_cvector, 0);
	var_70_float = GetByIndex(var_65_cvector, 2);
	var_71_float = GetByIndex(var_66_cvector, 2);
	var_64_float = (var_67_float * var_68_float) + (var_70_float * var_71_float);
}


// @pe
void func_1932(int var_18_int, object var_19_object)
{
	object var_21_object;
	var_19_object = var_21_object;
	int var_20_int;
	func_1914(var_20_int, var_21_object);
	var_20_int = var_18_int;
}


void func_1549(bool var_38_bool, object var_39_object, string var_40_string)
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
void func_1784(float var_327_float, float var_328_float, float var_329_float)
{
	if(var_328_float < var_329_float)
		var_328_float = var_327_float;
	else
		var_329_float = var_327_float;
	
}


void func_1530(string var_163_string)
{
	var_163_string = "walk";
}


// @pe
void func_1939(object var_62_object)
{
	object var_63_object;
	var_62_object = var_63_object;
	func_1924(var_63_object);
}


// @pe
void func_1811(float var_73_float, cvector var_74_cvector)
{
	var_75_float = GetByIndex(var_74_cvector, 0);
	var_76_float = GetByIndex(var_74_cvector, 0);
	var_78_float = GetByIndex(var_74_cvector, 2);
	var_79_float = GetByIndex(var_74_cvector, 2);
	var_73_float = sqrt((var_75_float * var_76_float) + (var_78_float * var_79_float));
}


// @pe
void func_1945(int var_14_int)
{
	var_14_int = 0;
}


void func_1690(object var_15_object, int var_16_int)
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


void func_1561(float var_291_float, object var_292_object, float var_293_float, int var_294_int)
{
	int var_304_int; int var_306_int;
	object var_311_object;
	var_292_object = var_311_object;
	bool var_310_bool;
	func_1549(var_310_bool, var_311_object, "health");
	if(!var_310_bool) //@nz
		var_291_float = 0.0;
	bool var_314_bool; object var_315_object;
	func_1549(var_314_bool, var_315_object, "armor");
	if(!var_314_bool) //@nz
		var_304_int = 0;
	else
		var_315_object->GetProperty("armor", var_304_int);
	string var_319_string; int var_320_int;
	var_294_int = var_320_int;
	func_1534(var_319_string, var_320_int);
	string var_305_string = "armor_" + var_319_string;
	bool var_323_bool; object var_324_object; string var_325_string;
	var_292_object = var_324_object;
	func_1549(var_323_bool, var_324_object, var_325_string);
	if(!var_323_bool) //@nz
		var_306_int = 0;
	else
		var_292_object->GetProperty(var_325_string, var_306_int);

	float var_327_float;
	func_1784(var_327_float, ((var_304_int + var_306_int) / 100.0), (float)1);
	float var_307_float;
	var_327_float = var_307_float;
	float var_308_float;
	var_292_object->GetProperty("health", var_308_float);
	float var_337_float;
	func_1791(var_337_float, (var_308_float - (var_293_float * (1 - var_307_float))), (float)0, (float)1);
	var_292_object->SetProperty("health", var_337_float);
	float var_309_float = var_291_float;
	
}


void func_1306(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_238_cvector;
	var_0_bool->GetPFPosition(var_238_cvector); //@t
	cvector var_239_cvector;
	@GetPFPosition(var_239_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


// @pe
void func_1948(void)
{
}


// @pe
void func_1821(float var_61_float, cvector var_62_cvector, cvector var_63_cvector)
{
	cvector var_65_cvector;
	var_62_cvector = var_65_cvector;
	cvector var_66_cvector;
	var_63_cvector = var_66_cvector;
	float var_64_float;
	func_1802(var_64_float, var_65_cvector, var_66_cvector);
	float var_73_float; cvector var_74_cvector;
	var_62_cvector = var_74_cvector;
	func_1811(var_73_float, var_74_cvector);
	float var_82_float; cvector var_83_cvector;
	var_63_cvector = var_83_cvector;
	func_1811(var_82_float, var_83_cvector);
	var_61_float = var_64_float / (var_73_float * var_82_float);
}


// @pe
void func_1950(int var_15_int)
{
	var_15_int = 0;
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


// @pe
void func_1955(int var_14_int)
{
	var_14_int = 2;
}


void func_163(void)
{
	bool var_13_bool;
	func_1768(var_13_bool);
	if(!var_13_bool) //@nz
		func_1964();
}


// @pe
void func_1958(object var_22_object)
{
	object var_23_object;
	var_22_object = var_23_object;
	func_1969(var_23_object);
}


void func_809(void)
{
	@StopGroup0();
	@StopAsync();
	@UnlookAsync("head");
	@KillTimer(111);
}


void func_1964(void)
{
}


void func_1965(void)
{
	var_12_bool = GlobalVars[0];
	GlobalVars[0] = false;
}


void func_1325(bool var_0_bool, bool var_197_bool)
{
	bool var_199_bool;
	var_202_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_202_bool != 0) {
		var_0_bool->IsAttacking(var_199_bool); //@t
		var_199_bool = var_197_bool;
	}
	var_197_bool = false;
}


// @pe
void func_1838(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	TaskCall(0);
	func_0(var_13_object);
	TaskReturn();
}


void func_1969(object var_23_object)
{
	bool var_25_bool;
	var_26_bool = GlobalVars[0];
	if(var_26_bool != 0) {
		@IsOverrideActive(var_25_bool);
		if(!var_25_bool) //@nz
			@WorkWithCorpse(var_23_object);
	}
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
	func_1773(var_0_bool);
}


void func_1336(bool var_2_bool, object var_4_object)
{
	int var_262_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_261_float;
	@rand(var_261_float);
	float var_268_float;
	func_1374(var_268_float);
	if(var_261_float < var_268_float) {
		@irand(var_262_int, var_2_bool);
		@Speak("attack" + (var_262_int + 1));
		int var_273_int;
		func_1372(var_273_int);
		var_4_object = var_273_int;
	}
}


void func_571(void)
{
	int var_49_int; int var_50_int; bool var_51_bool; float var_52_float; bool var_53_bool;
	@WaitForAnimEnd();
	bool var_54_bool;
	func_1768(var_54_bool);
	if(!var_54_bool) //@nz
		return 14;
	int var_56_int;
	func_1880(var_56_int);
	int var_47_int;
	var_56_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_69_bool = false;
		if(var_48_int < 5) {
			bool var_72_bool;
			func_1768(var_72_bool);
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
				func_1873(var_78_string, var_79_int);
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


void func_1209(bool var_363_bool, float var_364_float)
{
	float var_367_float; bool var_368_bool;
	@rand(var_367_float);
	if(var_367_float < var_364_float) {

		for(;;) {
			@IsAnimationPlaying(var_368_bool);
			if(!var_368_bool) { //@nz
			} else {
				bool var_371_bool;
				func_1273(var_368_bool, var_371_bool);
				if(var_371_bool != 0) {
					var_363_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_363_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_1980(bool var_56_bool)
{
	var_56_bool = false;
}


// @pe
void func_1982(bool var_15_bool)
{
	var_15_bool = false;
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


// @pe
void func_1985(void)
{
	var_65_bool = GlobalVars[0];
	GlobalVars[0] = true;
	@SetRTEnvelope(50, 40);
}


void func_1090(bool var_0_bool, float var_277_float, int var_278_int)
{
	object var_282_object; float var_283_float; float var_284_float;
	@GetVictim((var_277_float * 0.9), var_282_object);
	@ReportAttack(var_0_bool);
	if(var_282_object == var_0_bool) {
		float var_288_float; object var_289_object; int var_290_int;
		var_282_object = var_289_object;
		var_278_int = var_290_int;
		func_879(var_290_int);
		var_288_float = var_283_float;
		float var_291_float; object var_292_object; float var_293_float; int var_294_int;
		var_282_object = var_292_object;
		int var_295_int; object var_296_object; int var_297_int;
		var_282_object = var_296_object;
		var_278_int = var_297_int;
		func_882(var_297_int);
		var_295_int = var_294_int;
		func_1561(var_291_float, var_292_object, var_293_float, var_294_int);
		var_291_float = var_284_float;
		int var_344_int;
		func_1368(var_344_int);
		@ReportHit(var_0_bool, var_344_int, var_284_float, var_293_float);
		object var_345_object; float var_346_float;
		var_282_object = var_345_object;
		var_284_float = var_346_float;
		func_1370();
	}
}
EMIT "Stack[-3] = 0";


void func_454(bool var_38_bool)
{
	var_38_bool = false;
}


void func_336(bool var_2_bool, object var_12_object)
{
	bool var_17_bool; object var_18_object;
	func_1666(var_17_bool, var_18_object);
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
	func_1897(var_55_object);
	int var_16_int;
	var_54_int = var_16_int;
	if(var_16_int > 0) {
		if(var_16_int > 1)
			func_319(var_16_int);
		object var_62_object;
		var_12_object = var_62_object;
		func_1906(var_62_object);
		var_2_bool = true;
		@SetTimer(110, 10.0);
	}
}


void func_1873(string var_62_string, int var_63_int)
{
	string var_65_string = "idle";
	if(var_63_int != 0)
		var_65_string += var_63_int;
	var_65_string = var_62_string;
}


void func_1233(bool var_0_bool, bool var_205_bool, float var_206_float)
{
	bool var_212_bool; cvector var_213_cvector; cvector var_214_cvector; cvector var_215_cvector; float var_216_float;
	
	for(;;) {
		@IsAnimationPlaying(var_212_bool);
		if(!var_212_bool) //@nz
			break;
		bool var_218_bool;
		func_1273(var_216_float, var_218_bool);
		if(var_218_bool != 0) {
			var_205_bool = true;
			return 10;
		}
		bool var_243_bool;
		func_1666(var_243_bool, var_0_bool);
		if(!var_243_bool) { //@nz
			var_205_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_213_cvector); //@t
		@GetPFPosition(var_214_cvector);
		var_215_cvector = var_213_cvector - var_214_cvector;
		var_216_float = var_215_cvector | var_215_cvector;
		if(var_216_float < (var_206_float * var_206_float)) {
			bool var_248_bool; float var_249_float;
			var_206_float = var_249_float;
			func_1129(var_215_cvector, var_216_float, var_248_bool, var_249_float);
			var_205_bool = true;
			return 10;
		}
		@sync();
	}
	var_205_bool = false;
}


void func_1880(int var_56_int)
{
	int var_59_int; bool var_60_bool;
	var_59_int = 0;
	
	for(;;) {
		string var_62_string; int var_63_int;
		var_59_int = var_63_int;
		func_1873(var_62_string, var_63_int);
		@HasAnimation(var_60_bool, "all", var_62_string);
		if(!var_60_bool) //@nz
			break;
		var_59_int += 1;
	}
	var_59_int = var_56_int;
}


void func_1368(int var_344_int)
{
	var_344_int = 0;
}


// @pe
void func_1370(void)
{
}


void func_1625(bool var_31_bool, object var_32_object)
{
	bool var_34_bool;
	var_32_object->IsDead(var_34_bool);
	var_34_bool = var_31_bool;
}


void func_1372(int var_273_int)
{
	var_273_int = 1;
}


void func_1757(object var_87_object)
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


void func_1374(float var_268_float)
{
	var_268_float = 0.5;
}


void func_1630(bool var_20_bool, object var_21_object)
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
		func_1625(var_31_bool, var_32_object);
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


void func_1507(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
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


void func_1383(bool var_0_bool, bool var_1_bool, bool var_121_bool, object var_122_object, float var_123_float, float var_124_float, bool var_125_bool, bool var_126_bool)
{
	bool var_137_bool; object var_139_object; cvector var_140_cvector; cvector var_141_cvector; float var_143_float; object var_144_object;
	var_0_bool = false;
	var_1_bool = var_122_object;
	bool var_138_bool;
	var_126_bool = var_138_bool;
	
	for(;;) {
		bool var_145_bool; object var_146_object;
		var_122_object = var_146_object;
		func_1523(var_145_bool, var_146_object);
		if(!var_145_bool) { //@nz
			var_121_bool = false;
			return 16;
		}
		var_122_object->GetPosition(var_140_cvector);
		@GetPosition(var_141_cvector);
		var_143_float = (var_140_cvector - var_141_cvector) | (var_140_cvector - var_141_cvector);
		bool var_150_bool = false;
		if(var_124_float > 0) {
			if(var_143_float > (var_124_float * var_124_float))
				var_150_bool = true;
		}
		if(var_150_bool != 0) {
			@Stop();
			var_121_bool = false;
			return 16;
		}
		if(var_143_float > (var_123_float * var_123_float)) {
			var_122_object->GetPFPosition(var_140_cvector);
			@FindPathTo(var_144_object, var_140_cvector);
			if(var_144_object != null) {
				var_144_object = var_139_object;
				var_144_object = null;
			}
			if(var_139_object != null) {
				if(var_138_bool == 0) goto Label_1436;
				var_138_bool = false;
				@RotatePath(var_139_object, var_137_bool);
				if(!var_137_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_163_string;
						func_1530(var_163_string);
						string var_164_string;
						func_1532(var_164_string);
						@FollowPath(var_139_object, var_125_bool, var_137_bool, var_163_string, var_164_string);
						if(!var_137_bool) { //@nz
							if(var_0_bool == 0) goto Label_1455;
							var_139_object = null;
						}
					EMIT "GOTO 0x5b0";

					Label_1455:
						} else {
					var_139_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_137_bool);
					if(!var_137_bool) { //@nz
						if(var_0_bool != 0) {
							var_139_object = null;
							goto Label_1483;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1483;
		}
			var_144_object = null;
			goto Label_1481;

		Label_1481:
			var_139_object = null;

		}
	Label_1483:
		for(;;) {
			var_121_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1768(bool var_13_bool)
{
	bool var_15_bool;
	@IsLoaded(var_15_bool);
	var_15_bool = var_13_bool;
}


// @pe
void func_1897(int var_54_int)
{
	bool var_56_bool;
	func_1980(var_56_bool);
	if(var_56_bool != 0)
		var_54_int = 2;
	else
		var_54_int = 0;
	
}


void func_1129(bool var_0_bool, bool var_1_bool, bool var_248_bool, float var_249_float)
{
	int var_252_int;
	@irand(var_252_int, var_1_bool);
	var_252_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_252_int));
	@WaitForAnimEnd();
	bool var_253_bool;
	func_1336(var_252_int, var_253_bool);
	bool var_274_bool;
	func_1666(var_274_bool, var_0_bool);
	if(!var_274_bool) { //@nz
		@StopAsync();
		var_248_bool = false;
		return 4;
	}
	float var_277_float; int var_278_int;
	var_249_float = var_277_float;
	var_252_int = var_278_int;
	func_1090(var_253_bool, var_277_float, var_278_int);
	@HasAnimation(var_253_bool, "all", ("attack_middle" + var_252_int));
	if(var_253_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_252_int));
		@WaitForAnimEnd();
		bool var_354_bool;
		func_1666(var_354_bool, var_0_bool);
		if(!var_354_bool) { //@nz
			@StopAsync();
			var_248_bool = false;
			return 4;
		}
		float var_357_float; int var_358_int;
		var_249_float = var_357_float;
		var_252_int = var_358_int;
		func_1090(var_253_bool, var_357_float, var_358_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_252_int));
	bool var_363_bool;
	func_1209(var_363_bool, 0.75);
	@StopAsync();
	var_248_bool = true;
}


// @pe
void func_871(object var_64_object)
{
	object var_70_object;
	func_885(var_65_object, var_66_int, var_67_int, var_68_bool, var_69_int, var_70_object, var_70_object, true, 180.0);
}


void func_1773(object var_71_object)
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
void func_879(float var_288_float)
{
	var_288_float = 0.03;
}


// @pe
void func_1906(object var_62_object)
{
	object var_63_object;
	var_62_object = var_63_object;
	TaskCall(3);
	func_645(var_64_object, var_63_object);
	TaskReturn();
}


// @pe
void func_882(int var_295_int)
{
	var_295_int = 0;
}


// @pe
void func_1523(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1666(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


void func_885(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, object var_70_object, bool var_71_bool, float var_72_float, bool var_127_bool)
{
	bool var_83_bool; bool var_84_bool; float var_85_float; cvector var_86_cvector; cvector var_87_cvector; bool var_88_bool; bool var_89_bool; float var_91_float; float var_92_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_83_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_83_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_84_bool, ("attack" + (var_2_bool + 1)));
			if(!var_84_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_106_bool = IsFuncExist(var_70_object, "@GetAttackDistance", 1);
			if(var_106_bool != 0) {
				var_70_object->GetAttackDistance(var_85_float);
				var_85_float += 50;
			} else {
								var_72_float = var_85_float;

			}
			if(var_85_float >= 150)
				var_85_float = 150;
			var_3_object = false;
			var_0_bool = var_70_object;
			@IsPlayerActor(var_0_bool, var_88_bool);
			if(var_71_bool != 0)
				var_89_bool = false;
			else
				var_89_bool = true;

			for(;;) {
				bool var_111_bool = false;
				bool var_112_bool;
				func_1666(var_112_bool, var_0_bool);
				if(var_112_bool != 0) {
					if(!var_3_object) //@nz
						var_111_bool = true;
				}
				if(var_111_bool != 0) {
					var_0_bool->GetPFPosition(var_86_cvector); //@t
					@GetPFPosition(var_87_cvector);
					var_91_float = (var_86_cvector - var_87_cvector) | (var_86_cvector - var_87_cvector);
					if(var_91_float >= ((400.0 + var_85_float) * (400.0 + var_85_float))) {
						bool var_121_bool; float var_123_float;
						var_85_float = var_123_float;
						TaskCall(5);
						func_1383(var_127_bool, var_128_object, var_121_bool, var_0_bool, var_123_float, 3000.0, true, false);
						TaskReturn();
						if(!var_127_bool) { //@nz
						} else {
							var_89_bool = false;
					} else {
					if(var_91_float >= (var_72_float * var_72_float)) {
						if(!var_89_bool) { //@nz
							func_1757(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_89_bool = true;
						}
						@rand(var_92_float);
						bool var_194_bool;
						var_196_bool = var_92_float < 0.6;
						if(var_196_bool != 1) {
							bool var_197_bool;
							func_1325(true, var_197_bool);
							if(var_197_bool != 1)
								var_194_bool = false;
						}
						if(var_194_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_205_bool; float var_206_float;
							func_1233(var_92_float, var_205_bool, var_206_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_375_bool;
							func_1325(var_92_float, var_375_bool);
							var_376_bool = !var_375_bool; //@nz
							if(var_376_bool == 0) goto Label_1063;
							bool var_377_bool;
							func_1666(var_377_bool, var_0_bool);
							if(!var_377_bool) { //@nz
								goto Label_1073;
							}
							var_0_bool->GetPFPosition(var_86_cvector); //@t
							@GetPFPosition(var_87_cvector);
							var_91_float = (var_86_cvector - var_87_cvector) | (var_86_cvector - var_87_cvector);
							if(!(var_91_float < (var_206_float * var_206_float))) goto Label_1063;
							bool var_382_bool; float var_383_float;
							var_72_float = var_383_float;
							func_1129(var_91_float, var_92_float, var_382_bool, var_383_float);
							var_384_bool = !var_382_bool; //@nz
							if(var_384_bool == 0) goto Label_1063;
							goto Label_1073;
					}
						bool var_385_bool; float var_386_float;
						var_72_float = var_386_float;
						func_1129(var_91_float, var_92_float, var_385_bool, var_386_float);
						if(!var_385_bool) { //@nz
							goto Label_1073;
						}
						var_89_bool = true;

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
				if(var_88_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
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


void func_1273(bool var_0_bool, bool var_218_bool)
{
	cvector var_224_cvector; cvector var_225_cvector;
	bool var_229_bool;
	func_1666(var_229_bool, var_0_bool);
	if(!var_229_bool) { //@nz
		var_218_bool = false;
		return 10;
	}
	bool var_232_bool;
	float var_228_float;
	func_1325(var_228_float, var_232_bool);
	if(var_232_bool != 0) {
		var_0_bool->GetPFPosition(var_224_cvector); //@t
		@GetPFPosition(var_225_cvector);
		var_0_bool->GetAttackDistance(var_228_float); //@t
		var_228_float += 50;
		if(((var_224_cvector - var_225_cvector) | (var_224_cvector - var_225_cvector)) <= (var_228_float * var_228_float)) {
			func_1306(var_228_float);
			var_218_bool = true;
			return 10;
		}
	}
	var_218_bool = false;
}


// @pe
void func_1914(int var_20_int, object var_21_object)
{
	object var_23_object;
	var_21_object = var_23_object;
	bool var_22_bool;
	func_1666(var_22_bool, var_23_object);
	if(var_22_bool != 0)
		var_20_int = 2;
	else
		var_20_int = 0;
	
}


void func_1532(string var_164_string)
{
	var_164_string = "run";
}


// @pe
void func_1534(string var_319_string, int var_320_int)
{
	if(var_320_int == 1)
		var_319_string = "fire";
	var_319_string = "phys";
}


// @pe
void func_1791(float var_337_float, float var_338_float, float var_339_float, float var_340_float)
{
	if(var_338_float < var_339_float) {
		var_339_float = var_337_float;
		return 0;
	}
	if(var_338_float > var_340_float) {
		var_340_float = var_337_float;
		return 0;
	}
	var_338_float = var_337_float;
}


