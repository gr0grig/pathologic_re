// @GLOBALS: 0:object:,1:object:,2:float:,3:bool:,4:object:

task task_0
{
	// @pe
	void OnSee(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2565(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_200(var_13_object);
			object var_139_object;
			var_11_object = var_139_object;
			func_2572(var_139_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2578(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_200(var_13_object);
			object var_139_object;
			var_11_object = var_139_object;
			func_2585(var_139_object);
		}
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1556(var_12_bool, var_13_object);
		if(!var_12_bool) { //@nz
			object var_47_object;
			var_11_object = var_47_object;
			func_2633(var_47_object);
		}
		func_200(var_11_object);
		object var_63_object;
		var_11_object = var_63_object;
		func_2657(var_63_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		int var_12_int;
		func_178(var_10_object, var_12_int, var_12_int);
		int var_42_int;
		var_11_object = var_42_int;
		func_2745(var_42_int);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		func_200(var_11_object);
		object var_13_object;
		var_11_object = var_13_object;
		func_2713();
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1556(var_12_bool, var_13_object);
		if(!var_12_bool) { //@nz
		}
		var_3_object = var_11_object;
		func_321(var_11_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		int var_12_int;
		func_307(var_12_int, var_12_int);
		int var_61_int;
		var_11_object = var_61_int;
		func_2745(var_61_int);
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool = false;
		if(var_1_object == var_11_object) {
			if(!var_2_bool) //@nz
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_bool = true;
			object var_15_object;
			var_11_object = var_15_object;
			func_1745(var_15_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool = false;
		if(var_1_object == var_11_object) {
			if(var_2_bool != 0)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			var_2_bool = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, object var_6_object, bool var_7_bool, bool var_8_bool, object var_9_object, object var_10_object, object var_11_object)
	{
		func_321(var_11_object);
		object var_16_object;
		var_11_object = var_16_object;
		func_2713();
	}

}


maintask task_2
{
	// @pe
	void init(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object)
	{
		func_2283();
	
		for(;;) {
			func_602(var_9_object, var_10_object);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2565(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_673(var_10_object, var_13_object);
			object var_138_object;
			var_11_object = var_138_object;
			func_2572(var_138_object);
		} else {
			bool var_476_bool; object var_477_object;
			func_2591(var_476_bool, var_477_object);
			if(var_476_bool == 0) goto Label_548;
			func_673(var_10_object, var_477_object);
			object var_492_object;
			var_11_object = var_492_object;
			func_2623(var_492_object);
		}
	Label_548:
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2578(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_673(var_10_object, var_13_object);
			object var_138_object;
			var_11_object = var_138_object;
			func_2585(var_138_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1556(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2633(var_130_object);
		}
		func_673(var_13_object, var_100_object);
		object var_145_object;
		var_100_object = var_145_object;
		func_2657(var_145_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_17_bool;
		var_13_object = var_17_bool;
		bool var_14_bool;
		func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_object = var_100_object;
			func_563();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, int var_8_int, object var_9_object, object var_10_object, object var_11_object)
	{
		int var_12_int;
		var_11_object = var_12_int;
		func_2745(var_12_int);
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		func_673(var_10_object, var_11_object);
		object var_12_object;
		var_11_object = var_12_object;
		func_2713();
	}

}


task task_3
{
	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_2565(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_858();
			object var_138_object;
			var_11_object = var_138_object;
			func_2572(var_138_object);
		} else {
			bool var_476_bool; object var_477_object;
			var_11_object = var_477_object;
			func_2591(var_476_bool, var_477_object);
			if(var_476_bool == 0) goto Label_723;
			func_858();
			object var_492_object;
			var_11_object = var_492_object;
			func_2623(var_492_object);
		}
	Label_723:
	
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_2578(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_858();
			object var_138_object;
			var_11_object = var_138_object;
			func_2585(var_138_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object, object var_100_object)
		{
		object var_102_object;
		var_100_object = var_102_object;
			bool var_101_bool;
		func_1556(var_101_bool, var_102_object);
		if(!var_101_bool) { //@nz
			object var_130_object;
			var_100_object = var_130_object;
			func_2633(var_130_object);
		}
		func_858();
		object var_145_object;
		var_100_object = var_145_object;
		func_2657(var_145_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, object var_12_object, object var_13_object)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_17_bool;
		var_13_object = var_17_bool;
		bool var_14_bool;
		func_2719(var_14_bool, var_15_object, var_16_object, var_17_bool);
		if(var_14_bool != 0) {
			object var_100_object;
			var_11_object = var_100_object;
			func_738();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, int var_8_int, object var_9_object, object var_10_object, object var_11_object)
	{
		int var_12_int;
		var_11_object = var_12_int;
		func_2745(var_12_int);
	}

}


task task_4
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		object var_12_object;
		var_11_object = var_12_object;
		func_2633(var_12_object);
		if(var_11_object != null)
			@Face(var_11_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, object var_10_object, object var_11_object)
	{
		int var_12_int;
		var_11_object = var_12_int;
		func_2745(var_12_int);
	}

}


task task_5
{
	void OnUse(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			object var_15_object;
			var_11_object = var_15_object;
			func_2011(var_15_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, int var_10_int, float var_11_float, float var_12_float, object var_13_object, object var_14_object)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, string var_10_string, object var_11_object, object var_12_object)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
	}

}


task task_6
{
	void OnDispose(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object)
	{
		if(var_0_bool != 0)
			var_0_bool->RemoveProperty("cleansed"); //@t
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		func_1307(var_11_object);
		object var_48_object;
		var_11_object = var_48_object;
		func_2713();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2565(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1307(var_13_object);
			object var_174_object;
			var_11_object = var_174_object;
			func_2572(var_174_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_2578(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1307(var_13_object);
			object var_174_object;
			var_11_object = var_174_object;
			func_2585(var_174_object);
		}
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1556(var_12_bool, var_13_object);
		if(!var_12_bool) { //@nz
			object var_47_object;
			var_11_object = var_47_object;
			func_2633(var_47_object);
		}
		func_1307(var_11_object);
		object var_98_object;
		var_11_object = var_98_object;
		func_2657(var_98_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, int var_11_int)
	{
		if(var_11_int == 71) {
			if(var_1_object != 0)
				@Trigger(var_1_object, "continue");
		} else {
			int var_16_int;
			var_11_int = var_16_int;
			func_2745(var_16_int);
		}
	
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1658(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
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
	func_1726(var_19_float, var_20_cvector, var_21_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, bool var_6_bool, bool var_7_bool, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_2667(var_12_object);
}


void func_512(string var_301_string)
{
	var_301_string = "run";
}


// @pe
void func_1025(object var_133_object)
{
	object var_134_object;
	var_133_object = var_134_object;
	func_1050(var_134_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_0(bool var_395_bool, object var_396_object)
{
	bool var_399_bool; object var_400_object;
	func_76(var_395_bool, var_400_object, var_399_bool, var_400_object, (float)350, (float)5000, false, true);
	var_399_bool = var_395_bool;
}


// @pe
void func_2565(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2845(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_2055(string var_119_string)
{
	object var_123_object;
	@CreateInvItem(var_123_object);
	var_123_object->SetItemName(var_119_string);
	var_123_object->SetProperty("Organ", 1);
	int var_124_int;
	var_123_object->GetItemID(var_124_int);
	bool var_125_bool;
	@AddItem(var_125_bool, var_123_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_11(bool var_421_bool, object var_422_object)
{
	object var_424_object;
	var_422_object = var_424_object;
	bool var_423_bool;
	func_1580(var_423_bool, var_424_object);
	var_423_bool = var_421_bool;
}


// @pe
void func_2572(object var_174_object)
{
	object var_175_object;
	func_2532(var_175_object, var_175_object);
}


// @pe
void func_2578(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2845(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_1556(bool var_12_bool, object var_13_object)
{
	object var_17_object;
	var_13_object = var_17_object;
	bool var_16_bool;
	func_1520(var_16_bool, var_17_object);
	if(!var_16_bool) { //@nz
		var_12_bool = false;
		return 2;
	}
	bool var_34_bool; object var_35_object;
	func_1430(var_34_bool, var_35_object, "noaccess");
	if(!var_34_bool) { //@nz
		var_12_bool = true;
		return 2;
	}
	int var_15_int;
	var_35_object->GetProperty("noaccess", var_15_int);
	var_12_bool = var_15_int == 0;
}


void func_2072(void)
{
	int var_113_int;
	func_2005(var_113_int);
	if(var_113_int != 1) {
	}
	func_2055("liver");
	func_2055("kidney");
	func_2055("heart");
	func_2055("blood");
}


// @pe
void func_2585(object var_174_object)
{
	object var_175_object;
	func_2532(var_175_object, var_175_object);
}


void func_1050(object var_134_object)
{
	cvector var_145_cvector; cvector var_146_cvector; cvector var_147_cvector; cvector var_148_cvector; string var_149_string; object var_150_object; bool var_151_bool; bool var_152_bool; float var_153_float; cvector var_154_cvector;
	if(var_134_object == null) {
		func_1141("fdie");
	} else {
		var_134_object->GetPosition(var_145_cvector);
		@GetPosition(var_146_cvector);
		@GetDirection(var_147_cvector);
		var_148_cvector = var_146_cvector - var_145_cvector;
		var_188_float = GetByIndex(var_148_cvector, 0);
		var_189_float = GetByIndex(var_147_cvector, 0);
		var_191_float = GetByIndex(var_148_cvector, 2);
		var_192_float = GetByIndex(var_147_cvector, 2);
		if(((var_188_float * var_189_float) + (var_191_float * var_192_float)) >= 0)
			var_149_string = "fdie";
		else
			var_149_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_134_object = var_150_object;
		var_199_bool = IsFuncExist(var_134_object, "GetScriptProperty", 2);
		if(var_199_bool != 0) {
			var_134_object->HasScriptProperty(var_151_bool, "Owner");
			if(var_151_bool != 0) {
				var_134_object->GetScriptProperty(var_150_object, "Owner");
				if(var_150_object == null)
					var_134_object = var_150_object;
			}
		}
		var_206_bool = IsFuncExist(var_150_object, "@GetEyesHeight", 1);
		if(var_206_bool != 0) {
			var_150_object->GetEyesHeight(var_153_float);
			var_154_cvector = [0.0, 0.0, 0.0];
			var_207_float = GetByIndex(var_154_cvector, 1);
			var_153_float = var_207_float;
			SetByIndex(var_154_cvector, 1) = var_207_float;
			@LookAsync(var_134_object, "head", var_154_cvector);
			var_152_bool = true;
		} else {
			var_152_bool = false;

		}
		string var_209_string;
		var_149_string = var_209_string;
		func_1771(var_209_string);
		@PlayAnimation("all", var_149_string);
		@WaitForAnimEnd();
		if(var_152_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_149_string);
		@RemoveEnvelope();
		var_150_object = null;
	}
	
}


void func_2591(bool var_476_bool, object var_477_object)
{
	bool var_480_bool = true;
	bool var_481_bool = true;
	var_482_bool = var_477_object == null; //@ne
	if(var_482_bool != 1) {
		bool var_483_bool; object var_484_object;
		var_477_object = var_484_object;
		func_1515(var_483_bool, var_484_object);
		var_485_bool = !var_483_bool; //@nz
		if(var_485_bool != 1)
			var_481_bool = false;
	}
	if(var_481_bool != 1) {
		bool var_486_bool; object var_487_object;
		var_477_object = var_487_object;
		func_1430(var_486_bool, var_487_object, "disease");
		var_489_bool = !var_486_bool; //@nz
		if(var_489_bool != 1)
			var_480_bool = false;
	}
	if(var_480_bool != 0)
		var_476_bool = false;
	float var_479_float;
	var_477_object->GetProperty("disease", var_479_float);
	var_476_bool = var_479_float > 0;
}


void func_1580(bool var_361_bool, object var_362_object)
{
	if(var_362_object == null) {
		var_361_bool = false;
		return 6;
	}
	object var_366_object;
	@GetScene(var_366_object);
	if(var_366_object == null) {
		var_361_bool = false;
		return 6;
	}
	object var_367_object;
	var_362_object->GetScene(var_367_object);
	if(var_366_object != var_367_object) {
		var_361_bool = false;
		return 6;
	}
	bool var_372_bool; object var_373_object;
	func_1430(var_372_bool, var_373_object, "noaccess");
	if(!var_372_bool) { //@nz
		var_361_bool = true;
		return 6;
	}
	int var_368_int;
	var_373_object->GetProperty("noaccess", var_368_int);
	var_361_bool = var_368_int == 0;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2096(void)
{
	@ClearSubContainer(0);
	func_2024(600, 1500);
	func_1756("rusk", 1, 3, 2);
	func_1756("alpha_pills", 1, 3, 5);
	func_1756("beta_pills", 1, 6, 4);
	func_1756("gamma_pills", 1, 12, 3);
	int var_109_int;
	func_2142(var_109_int, "ognemet_ammo");
	bool var_60_bool;
	@AddItem(var_60_bool, var_109_int, 0, 1);
}


// @pe
void func_2623(object var_492_object)
{
	TaskCall(6);
	object var_493_object;
	func_1173(var_493_object, var_494_object, var_495_object, var_493_object);
	TaskReturn();
	@ResetAAS();
}


void func_2633(object var_47_object)
{
	if(var_47_object == null) {
	}
	var_51_object = GlobalVars[4];
	bool var_49_bool;
	var_51_object->in(var_49_bool, var_47_object);
	if(!var_49_bool) { //@nz
		var_53_object = GlobalVars[4];
		var_53_object->add(var_47_object);
	}
	bool var_54_bool; object var_55_object;
	func_1425(var_54_bool, var_55_object);
	if(var_54_bool != 0) {
		object var_58_object;
		func_1899(var_58_object);
		@ReportReputationChange(var_55_object, var_58_object, -0.07);
	}
}


void func_76(bool var_0_bool, object var_1_object, bool var_399_bool, object var_400_object, float var_401_float, float var_402_float, bool var_403_bool, bool var_404_bool)
{
	bool var_413_bool; object var_415_object; cvector var_416_cvector; cvector var_417_cvector; float var_419_float; object var_420_object;
	var_0_bool = false;
	var_1_object = var_400_object;
	bool var_414_bool;
	var_404_bool = var_414_bool;
	
	for(;;) {
		bool var_421_bool; object var_422_object;
		var_400_object = var_422_object;
		func_11(var_421_bool, var_422_object);
		if(!var_421_bool) { //@nz
			var_399_bool = false;
			return 16;
		}
		var_400_object->GetPosition(var_416_cvector);
		@GetPosition(var_417_cvector);
		var_419_float = (var_416_cvector - var_417_cvector) | (var_416_cvector - var_417_cvector);
		bool var_426_bool = false;
		if(var_402_float > 0) {
			if(var_419_float > (var_402_float * var_402_float))
				var_426_bool = true;
		}
		if(var_426_bool != 0) {
			@Stop();
			var_399_bool = false;
			return 16;
		}
		if(var_419_float > (var_401_float * var_401_float)) {
			var_400_object->GetPFPosition(var_416_cvector);
			@FindPathTo(var_420_object, var_416_cvector);
			if(var_420_object != null) {
				var_420_object = var_415_object;
				var_420_object = null;
			}
			if(var_415_object != null) {
				if(var_414_bool == 0) goto Label_129;
				var_414_bool = false;
				@RotatePath(var_415_object, var_413_bool);
				if(!var_413_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_439_string;
						func_216(var_439_string);
						string var_440_string;
						func_218(var_440_string);
						@FollowPath(var_415_object, var_403_bool, var_413_bool, var_439_string, var_440_string);
						if(!var_413_bool) { //@nz
							if(var_0_bool == 0) goto Label_148;
							var_415_object = null;
						}
					EMIT "GOTO 0x95";

					Label_148:
						} else {
					var_415_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_413_bool);
					if(!var_413_bool) { //@nz
						if(var_0_bool != 0) {
							var_415_object = null;
							goto Label_176;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_176;
		}
			var_420_object = null;
			goto Label_174;

		Label_174:
			var_415_object = null;

		}
	Label_176:
		for(;;) {
			var_399_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_1614(object var_28_object)
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


void func_602(bool var_0_bool, object var_1_object)
{
	float var_40_float; cvector var_41_cvector; cvector var_42_cvector; bool var_43_bool; object var_44_object; bool var_45_bool;
	@rand(var_40_float, 0.5);
	@Sleep(var_40_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_614:
				@GetPosition(var_42_cvector);
				float var_49_float;
				func_661(var_49_float);
				@GetRandomPFPointInCircle(var_41_cvector, var_42_cvector, var_49_float, var_43_bool);
				if(var_43_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_614;
			}
				var_1_object = false;
		}
		}
		goto Label_630;

	Label_630:
		object var_53_object; cvector var_54_cvector;
		var_41_cvector = var_54_cvector;
		func_691(var_53_object, var_54_cvector);
		var_53_object = var_44_object;
		if(var_44_object != null) {
			@RotatePath(var_44_object, var_45_bool);
			if(var_45_bool != 0) {
				bool var_59_bool;
				func_689(var_59_bool);
				@FollowPath(var_44_object, var_59_bool, var_45_bool);
				var_44_object = null;
				if(var_45_bool != 0) {
					TaskCall(3);
					func_777();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_44_object = null;
	}
	
}


void func_2142(int var_74_int, string var_75_string)
{
	int var_77_int;
	@GetInvItemByName(var_77_int, var_75_string);
	var_77_int = var_74_int;
}


// @pe
void func_2657(object var_98_object)
{
	object var_99_object;
	var_98_object = var_99_object;
	func_2633(var_99_object);
	object var_100_object;
	func_2532(var_100_object, var_100_object);
}


void func_2147(bool var_20_bool, object var_21_object, bool var_22_bool)
{
	bool var_25_bool; object var_26_object;
	func_1430(var_25_bool, var_26_object, "class");
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


// @pe
void func_2667(object var_12_object)
{
	object var_13_object;
	func_1899(var_13_object);
	@ReportReputationChange(var_12_object, var_13_object, -0.13, true);
	object var_18_object;
	var_12_object = var_18_object;
	TaskCall(5);
	func_999(var_18_object);
	TaskReturn();
}


// @pe
void func_1141(string var_156_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_157_string;
	var_156_string = var_157_string;
	func_1771(var_157_string);
	@PlayAnimation("all", var_156_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_156_string);
	@RemoveEnvelope();
}


void func_1658(object var_15_object, int var_16_int, float var_17_float)
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
		func_1410(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1905(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1720:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1614(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1720;
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
	func_1726(var_62_float, var_63_cvector, var_64_cvector);
}


void func_661(float var_49_float)
{
	float var_51_float;
	@GetCameraFarDistance(var_51_float);
	var_51_float = var_49_float;
}


void func_1173(bool var_0_bool, object var_1_object, object var_380_object, bool var_397_bool)
{
	object var_388_object; cvector var_389_cvector; float var_390_float;
	object var_392_object;
	var_380_object = var_392_object;
	bool var_391_bool;
	func_1430(var_391_bool, var_392_object, "disease");
	if(!var_391_bool) //@nz
		return 8;
	bool var_395_bool; object var_396_object;
	TaskCall(0);
	func_0(var_395_bool, var_396_object);
	TaskReturn();
	if(!var_397_bool) //@nz
		return 8;
	@Face(var_396_object);
	bool var_387_bool;
	@WaitForAnimEnd(var_387_bool);
	if(var_387_bool != 0) {
		@PlayAnimation("all", "attack_on");
		@WaitForAnimEnd(var_387_bool);
		if(var_387_bool != 0) {
			func_2324(true);
			@SetTimer(71, 1);

			for(;;) {
				bool var_458_bool = false;
				if(!var_0_bool) { //@nz
					bool var_460_bool; object var_461_object;
					var_380_object = var_461_object;
					func_1430(var_460_bool, var_461_object, "cleansed");
					if(!var_460_bool) //@nz
						var_458_bool = true;
				}
				if(var_458_bool != 0) {
					var_380_object->SetProperty("cleansed", true);
					var_0_bool = var_380_object;
					@GetScene(var_388_object);
					var_380_object->GetPosition(var_389_cvector);
					@AddActorByType(var_1_object, "scripted", var_388_object, var_389_cvector, [0.0, 0.0, 1.0], "corpse_fire.xml");
					var_388_object = null;
				}
				@PlayAnimation("all", "cattack");
				@WaitForAnimEnd(var_387_bool);
				bool var_471_bool = true;
				var_472_bool = !var_387_bool; //@nz
				if(var_472_bool != 1) {
					bool var_473_bool; object var_474_object;
					var_380_object = var_474_object;
					func_1580(var_473_bool, var_474_object);
					var_475_bool = !var_473_bool; //@nz
					if(var_475_bool != 1)
						var_471_bool = false;
				}
				if(var_471_bool != 0) {
				} else {
						var_380_object->GetProperty("disease", var_390_float);
						if(!(var_390_float <= 0.1)) goto Label_1271;
						var_380_object->SetProperty("disease", 0.0);
				}
				for(;;) {
					@KillTimer(71);
					func_2324(false);
					if(var_0_bool != 0) {
						var_0_bool->RemoveProperty("cleansed"); //@t
						var_0_bool = null;
					}
					if(var_387_bool != 0) {
						@PlayAnimation("all", "attack_off");
						@WaitForAnimEnd();
					}
		}
	}
			@StopAsync();
			return 8;

		}

	Label_1271:
		var_380_object->SetProperty("disease", (var_390_float - 0.1));
	}
}


void func_2719(bool var_14_bool, object var_15_object, object var_16_object, bool var_17_bool)
{
	bool var_19_bool;
	object var_21_object;
	var_16_object = var_21_object;
	bool var_20_bool;
	func_2147(var_20_bool, var_21_object, !var_17_bool);
	if(var_20_bool != 0) {
		@CanSee(var_19_bool, var_15_object);
		bool var_88_bool = true;
		if(var_19_bool != 1) {
			float var_90_float; object var_91_object;
			var_15_object = var_91_object;
			func_1417(var_90_float, var_91_object);
			var_99_bool = var_90_float <= 490000.0;
			if(var_99_bool != 1)
				var_88_bool = false;
		}
		if(var_88_bool != 0)
			var_14_bool = true;
	}
	var_14_bool = false;
}


void func_673(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


void func_689(bool var_59_bool)
{
	var_59_bool = false;
}


// @pe
void func_178(bool var_0_bool, object var_1_object, int var_12_int)
{
	if(var_12_int != 0)
		return 0;
	bool var_15_bool;
	func_11(var_15_bool, var_1_object);
	if(!var_15_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_691(object var_53_object, cvector var_54_cvector)
{
	object var_56_object;
	@FindShiftedPathTo(var_56_object, var_54_cvector);
	var_56_object = var_53_object;
}
EMIT "Stack[-1] = 0";


void func_2745(int var_16_int)
{
	object var_27_object; bool var_28_bool; string var_29_string; float var_30_float; float var_31_float; float var_32_float;
	if(var_16_int != 70)
		return 16;
	var_35_object = GlobalVars[0];
	if(var_35_object == null)
		return 16;
	var_37_object = GlobalVars[0];
	object var_25_object;
	float var_26_float;
	var_37_object->Intersect(var_25_object, var_26_float);
	var_38_object = GlobalVars[0];
	var_39_bool = GlobalVars[3];
	if(var_39_bool != 0) {
		float var_40_float; float var_41_float; float var_42_float;
		var_26_float = var_41_float;
		var_43_float = GlobalVars[2];
		var_43_float = var_42_float;
		func_1915(var_40_float, var_41_float, var_42_float);
	} else {
						var_146_float = 0.05;
	}
	var_38_object->SetLength(var_40_float);
	func_1970();
	
	for(;;) {
		var_25_object->Next(var_28_bool, var_27_object);
		if(var_28_bool != 0) {
			bool var_52_bool = false;
			if(var_27_object != null) {
				object var_54_object;
				func_1899(var_54_object);
				if(var_27_object != var_54_object)
					var_52_bool = true;
			}
			if(var_52_bool != 0) {
				bool var_56_bool; object var_57_object;
				func_1430(var_56_bool, var_57_object, "class");
				if(var_56_bool != 0)
					var_57_object->GetProperty("class", var_29_string);
				if(var_29_string != "sanitar") {
					float var_68_float; object var_69_object;
					var_27_object = var_69_object;
					func_1442(var_68_float, var_69_object, 0.1, 2);
					var_68_float = var_30_float;
					bool var_131_bool; object var_132_object;
					var_27_object = var_132_object;
					func_1430(var_131_bool, var_132_object, "disease");
					if(var_131_bool != 0) {
						var_27_object->GetProperty("disease", var_31_float);
						if(var_31_float <= 0.1)
							var_31_float = 0;
						else
							var_31_float -= 0.1;
					return 16;

					}
					var_27_object->SetProperty("disease", var_31_float);
				}
				bool var_138_bool; object var_139_object;
				var_27_object = var_139_object;
				func_1430(var_138_bool, var_139_object, "fire");
				if(var_138_bool != 0) {
					var_27_object->GetProperty("fire", var_32_float);
					var_27_object->SetProperty("fire", (var_32_float + 0.1));
				}
			}
		}
	}
	
}
EMIT "Stack[-6] = 0";
EMIT "Stack[-8] = 0";


void func_1726(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1614(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_200(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1740(bool var_75_bool)
{
	bool var_77_bool;
	@IsLoaded(var_77_bool);
	var_77_bool = var_75_bool;
}


void func_1745(object var_250_object)
{
	float var_253_float;
	var_250_object->GetEyesHeight(var_253_float);
	cvector var_254_cvector = [0.0, 0.0, 0.0];
	var_255_float = GetByIndex(var_254_cvector, 1);
	var_253_float = var_255_float;
	SetByIndex(var_254_cvector, 1) = var_255_float;
	@LookAsync(var_250_object, "head", var_254_cvector);
}


void func_216(string var_439_string)
{
	var_439_string = "walk";
}


void func_218(string var_440_string)
{
	var_440_string = "run";
}


// @pe
void func_220(object var_3_object, object var_230_object, object var_231_object)
{
	var_3_object = var_231_object;
	bool var_236_bool; object var_237_object;
	func_258(var_237_object, var_236_bool, var_237_object, 500.0, (float)5000, false, true);
	if(!var_236_bool) //@nz
		var_3_object = null;
	var_230_object = var_3_object;
}


void func_1756(string var_81_string, int var_82_int, int var_83_int, int var_84_int)
{
	int var_87_int; bool var_88_bool;
	int var_90_int;
	var_82_int = var_90_int;
	int var_91_int;
	var_83_int = var_91_int;
	bool var_89_bool;
	func_1933(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0) {
		@irand(var_87_int, var_84_int);
		@AddItem(var_88_bool, var_81_string, 0, (var_87_int + 1));
	}
}


void func_2283(void)
{
	var_17_object = GlobalVars[4];
	object var_18_object;
	func_1938(var_18_object);
	var_18_object = var_17_object;
	GlobalVars[4] = var_17_object;
	float var_14_float;
	@GetAttackDistance(var_14_float);
	var_21_float = GlobalVars[2];
	GlobalVars[2] = (var_14_float / 600.0);
	object var_15_object;
	@GetScene(var_15_object);
	object var_16_object;
	@AddActorByType(var_16_object, "flame", var_15_object, [0.0, 0.0, 0.0]);
	object var_25_object;
	func_1899(var_25_object);
	var_16_object->Attach(var_25_object, "flame");
	var_29_bool = GlobalVars[3];
	GlobalVars[3] = false;
	var_16_object->SetLength(0.05);
	var_31_object = GlobalVars[0];
	var_16_object = var_31_object;
	GlobalVars[0] = var_31_object;
	@SetTimer(70, 0.1);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1771(string var_157_string)
{
	bool var_166_bool; int var_167_int; bool var_168_bool; int var_169_int; bool var_170_bool; float var_171_float; cvector var_172_cvector; cvector var_173_cvector;
	@IsExisting3DSound(var_166_bool, var_157_string);
	if(!var_166_bool) { //@nz
		var_167_int = 0;

		for(;;) {
			@IsExisting3DSound(var_168_bool, (var_157_string + (var_167_int + 1)));
			if(!var_168_bool) { //@nz
				break;
			Label_1791:
				@irand(var_169_int, var_167_int);
				var_157_string += (var_169_int + 1);
	}
			@Is3DSoundLoaded(var_170_bool, var_157_string);
			if(var_170_bool != 0) {
				@GetEyesHeight(var_171_float);
				@GetDirection(var_172_cvector);
				var_173_cvector = var_172_cvector * 50;
				var_184_float = GetByIndex(var_173_cvector, 1);
				SetByIndex(var_173_cvector, 1) = (var_184_float + var_171_float);
				@PlayGlobalSound(var_157_string, var_173_cvector);
			}
		}
		var_167_int += 1;
	}
	var_179_bool = !var_167_int; //@nz
	if(var_179_bool == 0) goto Label_1791;
}


void func_258(bool var_2_bool, bool var_236_bool, object var_237_object, float var_238_float, float var_239_float, bool var_240_bool, bool var_241_bool)
{
	object var_246_object;
	func_1961(var_246_object);
	@SetTimer(1, 5);
	bool var_244_bool;
	@CanSee(var_244_bool, var_246_object);
	if(var_244_bool != 0) {
		var_2_bool = true;
		object var_250_object;
		var_237_object = var_250_object;
		func_1745(var_250_object);
	} else {
		var_2_bool = false;
	}
	bool var_257_bool; object var_258_object;
	func_1425(var_257_bool, var_258_object);
	if(var_257_bool != 0) {
		object var_259_object;
		func_1899(var_259_object);
		@SendPlayerEnemy(var_258_object, var_259_object);
	}
	bool var_260_bool; object var_261_object; float var_262_float; float var_263_float; bool var_264_bool; bool var_265_bool;
	var_237_object = var_261_object;
	var_238_float = var_262_float;
	var_239_float = var_263_float;
	var_240_bool = var_264_bool;
	var_241_bool = var_265_bool;
	bool var_245_bool;
	func_363(var_244_bool, var_245_bool, var_260_bool, var_261_object, var_262_float, var_263_float, var_264_bool, var_265_bool);
	var_260_bool = var_245_bool;
	if(var_2_bool != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_245_bool = var_236_bool;
	
}


void func_777(void)
{
	int var_70_int; int var_71_int; bool var_72_bool; float var_73_float; bool var_74_bool;
	@WaitForAnimEnd();
	bool var_75_bool;
	func_1740(var_75_bool);
	if(!var_75_bool) //@nz
		return 14;
	int var_79_int;
	func_1988(var_79_int);
	int var_68_int;
	var_79_int = var_68_int;
	int var_69_int = 0;
	
	for(;;) {
		bool var_92_bool = false;
		if(var_69_int < 5) {
			bool var_95_bool;
			func_1740(var_95_bool);
			if(var_95_bool != 0)
				var_92_bool = true;
		}
		if(var_92_bool != 0) {
			@irand(var_70_int, 3);
			if(var_70_int == 0) {
				if(var_68_int == 0) goto Label_824;
				@irand(var_71_int, var_68_int);
				string var_101_string; int var_102_int;
				var_71_int = var_102_int;
				func_1981(var_101_string, var_102_int);
				@PlayAnimation("all", var_101_string);
				@WaitForAnimEnd(var_72_bool);
				if(!var_72_bool) { //@nz
				} else {
			} else {
			if(var_70_int == 1) {
				@rand(var_73_float, 4);
				@Sleep((var_73_float + 1), var_74_bool);
				if(!var_74_bool) { //@nz
					goto Label_853;
				}
			} else if(var_69_int != 0) {
				goto Label_853;
			}
			}
					bool var_104_bool;
					func_856(var_104_bool);
					var_105_bool = !var_104_bool; //@nz
					if(var_105_bool == 0) goto Label_848;
			}
		}
	Label_853:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_848:
		@ResetAAS();
		var_69_int += 1;
	}
	
}


void func_2324(bool var_22_bool)
{
	float var_28_float; object var_30_object; cvector var_31_cvector; float var_32_float;
	if(var_22_bool != 0) {
		var_34_float = GlobalVars[2];
		var_34_float = var_28_float;
	} else {
				var_28_float = 0.05;
	}
	var_35_object = GlobalVars[0];
	float var_29_float;
	var_35_object->GetLength(var_29_float);
	if(var_28_float < var_29_float)
		var_28_float = var_29_float;
	var_37_object = GlobalVars[0];
	var_37_object->SetLength(var_29_float);
	var_38_bool = GlobalVars[3];
	if(var_38_bool != var_22_bool) {
		if(var_22_bool != 0) {
			var_41_object = GlobalVars[1];
			if(var_41_object == null) {
				var_31_cvector = [0.0, 0.0, 0.0];
				@GetHeight(var_32_float);
				var_43_float = GetByIndex(var_31_cvector, 1);
				var_32_float = var_43_float;
				SetByIndex(var_31_cvector, 1) = var_43_float;
				@PlayLoopedGlobalSound(var_30_object, "flame_loop", var_31_cvector, 0, 200);
				var_47_object = GlobalVars[1];
				var_30_object = var_47_object;
				GlobalVars[1] = var_47_object;
				var_30_object = null;
			}
			var_48_object = GlobalVars[1];
			var_48_object->FadeIn(2);
		} else {
			var_51_object = GlobalVars[1];
			if(!(var_51_object != null)) goto Label_2376;
			var_53_object = GlobalVars[1];
			var_53_object->FadeOut(2);

		}
	Label_2376:
		var_50_bool = GlobalVars[3];
		var_22_bool = var_50_bool;
		GlobalVars[3] = var_50_bool;
	}
	
}


// @pe
void func_1812(bool var_158_bool, string var_159_string)
{
	var_158_bool = true;
	bool var_160_bool = true;
	bool var_161_bool = true;
	bool var_162_bool = true;
	bool var_163_bool = true;
	bool var_164_bool = true;
	bool var_165_bool = true;
	bool var_166_bool = true;
	bool var_167_bool = true;
	bool var_168_bool = true;
	bool var_169_bool = true;
	bool var_170_bool = true;
	var_172_bool = var_159_string == "woman";
	if(var_172_bool != 1) {
		var_174_bool = var_159_string == "worker";
		if(var_174_bool != 1)
			var_170_bool = false;
	}
	if(var_170_bool != 1) {
		var_176_bool = var_159_string == "butcher";
		if(var_176_bool != 1)
			var_169_bool = false;
	}
	if(var_169_bool != 1) {
		var_178_bool = var_159_string == "wasted_girl";
		if(var_178_bool != 1)
			var_168_bool = false;
	}
	if(var_168_bool != 1) {
		var_180_bool = var_159_string == "boy";
		if(var_180_bool != 1)
			var_167_bool = false;
	}
	if(var_167_bool != 1) {
		var_182_bool = var_159_string == "vaxxabitka";
		if(var_182_bool != 1)
			var_166_bool = false;
	}
	if(var_166_bool != 1) {
		var_184_bool = var_159_string == "unosha";
		if(var_184_bool != 1)
			var_165_bool = false;
	}
	if(var_165_bool != 1) {
		var_186_bool = var_159_string == "wasted_male";
		if(var_186_bool != 1)
			var_164_bool = false;
	}
	if(var_164_bool != 1) {
		var_188_bool = var_159_string == "alkash";
		if(var_188_bool != 1)
			var_163_bool = false;
	}
	if(var_163_bool != 1) {
		var_190_bool = var_159_string == "dohodyaga";
		if(var_190_bool != 1)
			var_162_bool = false;
	}
	if(var_162_bool != 1) {
		var_192_bool = var_159_string == "vaxxabit";
		if(var_192_bool != 1)
			var_161_bool = false;
	}
	if(var_161_bool != 1) {
		var_194_bool = var_159_string == "nudegirl";
		if(var_194_bool != 1)
			var_160_bool = false;
	}
	if(var_160_bool != 1) {
		var_196_bool = var_159_string == "morlok";
		if(var_196_bool != 1)
			var_158_bool = false;
	}
}


void func_1307(bool var_0_bool)
{
	if(var_0_bool != 0)
		var_0_bool->RemoveProperty("cleansed"); //@t
	@KillTimer(71);
	func_2324(false);
	@Stop();
	@StopAsync();
}


// @pe
void func_2845(bool var_111_bool, object var_112_object)
{
	object var_114_object;
	var_112_object = var_114_object;
	bool var_113_bool;
	func_2430(var_113_bool, var_114_object);
	var_113_bool = var_111_bool;
}


// @pe
void func_307(object var_1_object, int var_12_int)
{
	if(var_12_int == 1) {
		func_1961(var_1_object);
	} else {
		int var_20_int;
		func_465(var_11_object, var_20_int, var_20_int);
	}
	
}


void func_321(bool var_2_bool)
{
	@KillTimer(1);
	if(var_2_bool != 0) {
		var_2_bool = false;
		@UnlookAsync("head");
	}
	func_487(var_11_object);
}


void func_2380(cvector var_336_cvector)
{
	cvector var_342_cvector; bool var_346_bool;
	@GetPosition(var_342_cvector);
	float var_343_float;
	@GetHeight(var_343_float);
	var_347_float = GetByIndex(var_342_cvector, 1);
	SetByIndex(var_342_cvector, 1) = (var_347_float + (var_343_float / 2));
	cvector var_344_cvector = var_336_cvector - var_342_cvector;
	float var_345_float = sqrt(var_344_cvector | var_344_cvector);
	if(var_345_float < 50) {
		var_346_bool = false;
	} else {
			var_357_float = GetByIndex(var_344_cvector, 1);
			var_346_bool = (var_357_float / var_345_float) < -0.14285715;
	}
	if(var_346_bool != 0)
		var_355_string = "cattack";
	else
		var_356_string = "attack";

	@PlayAnimation("all", var_355_string);
	
}


void func_856(bool var_104_bool)
{
	var_104_bool = true;
}


void func_858(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_863(bool var_0_bool, object var_101_object, object var_102_object, bool var_232_bool)
{
	bool var_107_bool; float var_108_float; object var_109_object;
	var_0_bool = var_102_object;
	@Face(var_102_object);
	@SetAttackState(true);
	
	for(;;) {
		bool var_111_bool;
		func_2845(var_111_bool, var_0_bool);
		if(var_111_bool != 0) {
			func_1961(var_0_bool);
			@ReportAttack(var_0_bool);
			float var_206_float;
			func_1417(var_206_float, var_0_bool);
			var_206_float = var_108_float;
			if(var_108_float <= 90000.0) {
				if(!false) { //@nz
					@SetAttackState(true);
					func_2324(true);
					@PlayAnimation("all", "attack_on");
					var_107_bool = true;
				} else {
				@PlayAnimation("all", "bjump");
			}
			if(var_108_float >= 490000.0) {
				if(var_107_bool != 0) {
					@SetAttackState(false);
					func_2324(false);
					@PlayAnimation("all", "attack_off");
				} else {
					@StopAsync();
					object var_230_object;
					TaskCall(1);
					func_220(var_235_object, var_230_object, var_0_bool);
					TaskReturn();
					var_232_bool = var_109_object;
					var_0_bool = var_109_object;
					if(var_0_bool == null) {
					} else {
						@Face(var_0_bool);
						var_109_object = null;
			}
					if(!false) { //@nz
						@SetAttackState(true);
						func_2324(true);
						@PlayAnimation("all", "attack_on");
						var_107_bool = true;
						goto Label_964;
					}
					func_2411(var_0_bool);
				}
		}
			@SetAttackState(false);
			@PlayAnimation("all", "attack_off");
			func_2324(false);
			@StopAsync();
			var_101_object = var_0_bool;
		}
		goto Label_964;
		}
		goto Label_964;

	Label_964:
		@WaitForAnimEnd();
	}
	
}


void func_1899(object var_25_object)
{
	object var_27_object;
	@self(var_27_object);
	var_27_object = var_25_object;
}
EMIT "Stack[-1] = 0";


void func_363(bool var_0_bool, object var_1_object, bool var_260_bool, object var_261_object, float var_262_float, float var_263_float, bool var_264_bool, bool var_265_bool)
{
	bool var_274_bool; object var_276_object; cvector var_277_cvector; cvector var_278_cvector; float var_280_float; object var_281_object;
	var_0_bool = false;
	var_1_object = var_261_object;
	bool var_275_bool;
	var_265_bool = var_275_bool;
	
	for(;;) {
		bool var_282_bool; object var_283_object;
		var_261_object = var_283_object;
		func_503(var_282_bool, var_283_object);
		if(!var_282_bool) { //@nz
			var_260_bool = false;
			return 16;
		}
		var_261_object->GetPosition(var_277_cvector);
		@GetPosition(var_278_cvector);
		var_280_float = (var_277_cvector - var_278_cvector) | (var_277_cvector - var_278_cvector);
		bool var_287_bool = false;
		if(var_263_float > 0) {
			if(var_280_float > (var_263_float * var_263_float))
				var_287_bool = true;
		}
		if(var_287_bool != 0) {
			@Stop();
			var_260_bool = false;
			return 16;
		}
		if(var_280_float > (var_262_float * var_262_float)) {
			var_261_object->GetPFPosition(var_277_cvector);
			@FindPathTo(var_281_object, var_277_cvector);
			if(var_281_object != null) {
				var_281_object = var_276_object;
				var_281_object = null;
			}
			if(var_276_object != null) {
				if(var_275_bool == 0) goto Label_416;
				var_275_bool = false;
				@RotatePath(var_276_object, var_274_bool);
				if(!var_274_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_300_string;
						func_510(var_300_string);
						string var_301_string;
						func_512(var_301_string);
						@FollowPath(var_276_object, var_264_bool, var_274_bool, var_300_string, var_301_string);
						if(!var_274_bool) { //@nz
							if(var_0_bool == 0) goto Label_435;
							var_276_object = null;
						}
					EMIT "GOTO 0x1b4";

					Label_435:
						} else {
					var_276_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_274_bool);
					if(!var_274_bool) { //@nz
						if(var_0_bool != 0) {
							var_276_object = null;
							goto Label_463;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_463;
		}
			var_281_object = null;
			goto Label_461;

		Label_461:
			var_276_object = null;

		}
	Label_463:
		for(;;) {
			var_260_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_2411(object var_325_object)
{
	cvector var_328_cvector; float var_329_float;
	var_325_object->GetPosition(var_328_cvector);
	var_332_bool = IsFuncExist(var_325_object, "@GetHeight", 1);
	if(var_332_bool != 0) {
		var_325_object->GetHeight(var_329_float);
		var_333_float = GetByIndex(var_328_cvector, 1);
		SetByIndex(var_328_cvector, 1) = (var_333_float + (var_329_float / 2));
	}
	cvector var_336_cvector;
	var_328_cvector = var_336_cvector;
	func_2380(var_336_cvector);
}


void func_1905(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


// @pe
void func_1396(string var_93_string, int var_94_int)
{
	if(var_94_int == 2) {
		var_93_string = "fire";
		return 0;
	EMIT "GOTO 0x580";
	}
	if(var_94_int == 1) {
		var_93_string = "bullet";
		return 0;
	}
	var_93_string = "phys";
}


// @pe
void func_1915(float var_40_float, float var_41_float, float var_42_float)
{
	if(var_41_float < var_42_float)
		var_41_float = var_40_float;
	else
		var_42_float = var_40_float;
	
}


void func_2430(bool var_113_bool, object var_114_object)
{
	float var_121_float; float var_122_float; float var_124_float;
	bool var_125_bool; object var_126_object;
	func_1556(var_125_bool, var_126_object);
	if(!var_125_bool) { //@nz
		var_113_bool = false;
		return 10;
	}
	var_128_object = GlobalVars[4];
	bool var_120_bool;
	var_128_object->in(var_120_bool, var_126_object);
	if(var_120_bool != 0) {
		var_113_bool = true;
		return 10;
	}
	bool var_130_bool; object var_131_object;
	var_114_object = var_131_object;
	func_1425(var_130_bool, var_131_object);
	if(var_130_bool != 0) {
		var_114_object->GetProperty("reputation", var_121_float);
		if(var_121_float < 0.33) {
			var_113_bool = true;
			return 10;
		}
		var_114_object->GetProperty("disease", var_122_float);
		var_113_bool = var_122_float > 0.33;
		return 10;
	}
	bool var_137_bool; object var_138_object;
	func_1430(var_137_bool, var_138_object, "class");
	if(!var_137_bool) { //@nz
		var_113_bool = false;
		return 10;
	}
	string var_123_string;
	var_138_object->GetProperty("class", var_123_string);
	bool var_142_bool = true;
	bool var_143_bool = true;
	bool var_144_bool = true;
	var_146_bool = var_123_string == "bomber";
	if(var_146_bool != 1) {
		var_148_bool = var_123_string == "hunter";
		if(var_148_bool != 1)
			var_144_bool = false;
	}
	if(var_144_bool != 1) {
		var_150_bool = var_123_string == "grabitel";
		if(var_150_bool != 1)
			var_143_bool = false;
	}
	if(var_143_bool != 1) {
		var_152_bool = var_123_string == "rat_big";
		if(var_152_bool != 1)
			var_142_bool = false;
	}
	if(var_142_bool != 0) {
		var_113_bool = true;
		return 10;
	}
	bool var_153_bool; object var_154_object;
	func_1430(var_153_bool, var_154_object, "disease");
	if(!var_153_bool) { //@nz
		var_113_bool = false;
		return 10;
	}
	bool var_157_bool = true;
	bool var_158_bool; string var_159_string;
	func_1812(var_158_bool, var_159_string);
	if(var_158_bool != 1) {
		var_198_bool = var_159_string == "dog";
		if(var_198_bool != 1)
			var_157_bool = false;
	}
	if(var_157_bool != 0) {
		var_154_object->GetProperty("disease", var_124_float);
		var_113_bool = var_124_float > 0;
		return 10;
	}
	var_113_bool = false;
}


// @pe
void func_1922(float var_112_float, float var_113_float, float var_114_float, float var_115_float)
{
	if(var_113_float < var_114_float) {
		var_114_float = var_112_float;
		return 0;
	}
	if(var_113_float > var_115_float) {
		var_115_float = var_112_float;
		return 0;
	}
	var_113_float = var_112_float;
}


void func_1410(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_1417(float var_206_float, object var_207_object)
{
	cvector var_211_cvector;
	@GetPosition(var_211_cvector);
	cvector var_212_cvector;
	var_207_object->GetPosition(var_212_cvector);
	var_206_float = (var_212_cvector - var_211_cvector) | (var_212_cvector - var_211_cvector);
}


void func_1933(bool var_89_bool, int var_90_int, int var_91_int)
{
	int var_93_int;
	@irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
}


void func_1425(bool var_118_bool, object var_119_object)
{
	bool var_121_bool;
	@IsPlayerActor(var_119_object, var_121_bool);
	var_121_bool = var_118_bool;
}


void func_1938(object var_18_object)
{
	object var_20_object;
	@CreateObjectSet(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_1430(bool var_56_bool, object var_57_object, string var_58_string)
{
	var_63_bool = IsFuncExist(var_57_object, "HasProperty", 2);
	if(!var_63_bool) { //@nz
		var_56_bool = false;
		return 2;
	}
	bool var_60_bool;
	var_57_object->HasProperty(var_58_string, var_60_bool);
	var_60_bool = var_56_bool;
}


void func_1944(float var_122_float)
{
	object var_124_object;
	@CreateFloatVector(var_124_object);
	var_124_object->add(var_122_float);
	if(var_122_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_124_object);
}
EMIT "Stack[-1] = 0";


void func_1442(float var_68_float, object var_69_object, float var_70_float, int var_71_int)
{
	int var_78_int; int var_80_int;
	object var_85_object;
	var_69_object = var_85_object;
	bool var_84_bool;
	func_1430(var_84_bool, var_85_object, "health");
	if(!var_84_bool) //@nz
		var_68_float = 0.0;
	bool var_88_bool; object var_89_object;
	func_1430(var_88_bool, var_89_object, "armor");
	if(!var_88_bool) //@nz
		var_78_int = 0;
	else
		var_89_object->GetProperty("armor", var_78_int);
	string var_93_string; int var_94_int;
	var_71_int = var_94_int;
	func_1396(var_93_string, var_94_int);
	string var_79_string = "armor_" + var_93_string;
	bool var_99_bool; object var_100_object; string var_101_string;
	var_69_object = var_100_object;
	func_1430(var_99_bool, var_100_object, var_101_string);
	if(!var_99_bool) //@nz
		var_80_int = 0;
	else
		var_69_object->GetProperty(var_101_string, var_80_int);

	float var_103_float;
	func_1915(var_103_float, ((var_78_int + var_80_int) / 100.0), (float)1);
	float var_81_float;
	var_103_float = var_81_float;
	float var_82_float;
	var_69_object->GetProperty("health", var_82_float);
	float var_83_float = var_70_float * (1 - var_81_float);
	float var_112_float;
	func_1922(var_112_float, (var_82_float - var_83_float), (float)0, (float)1);
	var_69_object->SetProperty("health", var_112_float);
	bool var_118_bool; object var_119_object;
	var_69_object = var_119_object;
	func_1425(var_118_bool, var_119_object);
	if(var_118_bool != 0) {
		float var_122_float = -var_83_float;
		func_1944(var_122_float);
	}
	var_83_float = var_68_float;
	
}


void func_1961(object var_201_object)
{
	bool var_203_bool;
	@IsPlayerActor(var_201_object, var_203_bool);
	if(var_203_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1970(void)
{
	object var_46_object;
	@GetScene(var_46_object);
	object var_48_object;
	func_1899(var_48_object);
	@BroadcastMessage("battle", var_48_object, var_46_object);
}
EMIT "Stack[-1] = 0";


void func_1981(string var_85_string, int var_86_int)
{
	string var_88_string = "idle";
	if(var_86_int != 0)
		var_88_string += var_86_int;
	var_88_string = var_85_string;
}


void func_1988(int var_79_int)
{
	int var_82_int; bool var_83_bool;
	var_82_int = 0;
	
	for(;;) {
		string var_85_string; int var_86_int;
		var_82_int = var_86_int;
		func_1981(var_85_string, var_86_int);
		@HasAnimation(var_83_bool, "all", var_85_string);
		if(!var_83_bool) //@nz
			break;
		var_82_int += 1;
	}
	var_82_int = var_79_int;
}


// @pe
void func_465(bool var_0_bool, object var_1_object, int var_20_int)
{
	if(var_20_int != 0)
		return 0;
	bool var_23_bool;
	func_503(var_23_bool, var_1_object);
	if(!var_23_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2005(int var_113_int)
{
	int var_115_int;
	@GetVariable("branch", var_115_int);
	var_115_int = var_113_int;
}


// @pe
void func_2011(object var_15_object)
{
	int var_16_int;
	func_2005(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


// @pe
void func_2532(object var_100_object, object var_103_object)
{
	object var_102_object;
	var_100_object = var_102_object;
	TaskCall(4);
	object var_101_object;
	func_863(var_100_object, var_103_object, var_101_object, var_102_object);
	TaskReturn();
	var_103_object = var_100_object;
	@ResetAAS();
	bool var_360_bool = false;
	bool var_361_bool; object var_362_object;
	var_100_object = var_362_object;
	func_1580(var_361_bool, var_362_object);
	if(var_361_bool != 0) {
		bool var_378_bool; object var_379_object;
		var_100_object = var_379_object;
		func_1515(var_378_bool, var_379_object);
		if(var_378_bool != 0)
			var_360_bool = true;
	}
	if(var_360_bool != 0) {
		object var_380_object;
		TaskCall(6);
		func_1173(var_380_object, var_381_object, var_382_object, var_380_object);
		TaskReturn();
		@ResetAAS();
	}
}


void func_487(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2024(int var_62_int, int var_63_int)
{
	if(var_62_int > var_63_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_66_int = 0;
	if(var_62_int != var_63_int) {
		@irand(var_66_int, (var_63_int - var_62_int));
	} else if(var_62_int == 0) {
		return 4;
	}
	var_66_int += var_62_int;
	if(var_66_int == 0)
		return 4;
	int var_74_int;
	func_2142(var_74_int, "Money");
	bool var_67_bool;
	@AddItem(var_67_bool, var_74_int, 0, var_66_int);
	
}


void func_999(object var_18_object)
{
	@KillTimer(70);
	func_2324(false);
	var_55_object = GlobalVars[0];
	@RemoveActor(var_55_object);
	bool var_20_bool;
	@IsPlayerActor(var_18_object, var_20_bool);
	if(var_20_bool != 0)
		func_2096();
	func_2072();
	object var_133_object;
	var_18_object = var_133_object;
	func_1025(var_133_object);
}


void func_1515(bool var_27_bool, object var_28_object)
{
	bool var_30_bool;
	var_28_object->IsDead(var_30_bool);
	var_30_bool = var_27_bool;
}


void func_1520(bool var_16_bool, object var_17_object)
{
	if(var_17_object == null) {
		var_16_bool = false;
		return 4;
	}
	bool var_23_bool = false;
	var_26_bool = IsFuncExist(var_17_object, "IsDead", 1);
	if(var_26_bool != 0) {
		bool var_27_bool; object var_28_object;
		var_17_object = var_28_object;
		func_1515(var_27_bool, var_28_object);
		if(var_27_bool != 0)
			var_23_bool = true;
	}
	if(var_23_bool != 0) {
		var_16_bool = false;
		return 4;
	}
	object var_20_object;
	@GetScene(var_20_object);
	if(var_20_object == null) {
		var_16_bool = false;
		return 4;
	}
	object var_21_object;
	var_17_object->GetScene(var_21_object);
	if(var_20_object != var_21_object) {
		var_16_bool = false;
		return 4;
	}
	var_16_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_503(bool var_282_bool, object var_283_object)
{
	object var_285_object;
	var_283_object = var_285_object;
	bool var_284_bool;
	func_1556(var_284_bool, var_285_object);
	var_284_bool = var_282_bool;
}


void func_510(string var_300_string)
{
	var_300_string = "walk";
}


