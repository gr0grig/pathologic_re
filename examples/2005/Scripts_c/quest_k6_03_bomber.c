maintask task_0
{
	// @pe
	void init(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		func_2025();
	
		for(;;) {
			@SetTimer(90, 10);
			func_99(var_9_float, var_10_object);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1900(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_56_object;
			var_11_object = var_56_object;
			func_1907(var_56_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1885(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_56_object;
			var_11_object = var_56_object;
			func_1892(var_56_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_61();
		object var_51_object;
		var_49_object = var_51_object;
		func_1917(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1990(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_float = var_49_object;
			func_40();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		func_61();
		object var_13_object;
		var_11_object = var_13_object;
		func_1984();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, int var_2_int, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		float var_13_float;
		if(var_11_object == 90) {
			@SetTimer(90, 1);
			@GetBrightness(var_13_float);
			if(var_13_float < 0.1) {
				func_61();
				TaskCall(7);
				func_1070();
				TaskReturn();
			}
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		@RequestClearPath(var_11_object);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		@Stop();
	}

}


task task_1
{
	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		bool var_13_bool;
		@IsOverrideActive(var_13_bool);
		if(!var_13_bool) { //@nz
			object var_15_object;
			var_11_object = var_15_object;
			func_1660(var_15_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, bool var_1_bool, object var_2_object, int var_3_int, float var_4_float, float var_5_float, cvector var_6_cvector, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, object var_11_object, float var_12_float, float var_13_float, object var_14_object)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, bool var_1_bool, object var_2_object, string var_3_string, cvector var_4_cvector, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
	}

}


task task_2
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1900(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_533();
			object var_56_object;
			var_11_object = var_56_object;
			func_1907(var_56_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_533();
		object var_51_object;
		var_49_object = var_51_object;
		func_1917(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1990(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_float = var_49_object;
			func_370();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		if(var_11_object == 61) {
			bool var_14_bool;
			func_410(var_14_bool, var_1_bool);
			if(!var_14_bool) { //@nz
				@Stop();
				var_2_cvector = null;
			}
			@ResetAAS();
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		if(!var_11_object) //@nz
			return 0;
		if(var_11_object == var_1_bool) {
			bool var_14_bool;
			func_410(var_14_bool, var_1_bool);
			if(!var_14_bool) { //@nz
				func_533();
				var_2_cvector = null;
				return 0;
			}
		} else {
			bool var_60_bool; object var_61_object;
			func_391(var_60_bool, var_61_object, var_1_bool);
			if(var_60_bool == 0) goto Label_522;
			var_1_bool = var_61_object;
		}
	Label_522:
		var_1_bool->GetPFPosition(var_0_bool); //@t
		@Trace("new hunt point");
		@Stop();
	
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		@Stop();
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		func_533();
		object var_13_object;
		var_11_object = var_13_object;
		func_1984();
	}

}


task task_3
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1900(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_55_object;
			var_11_object = var_55_object;
			func_1907(var_55_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1885(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_55_object;
			var_11_object = var_55_object;
			func_1892(var_55_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_678();
		object var_50_object;
		var_49_object = var_50_object;
		func_1917(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1990(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_float = var_49_object;
			func_576();
		}
	}

}


task task_4
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		if(var_11_object == var_0_bool)
			var_1_bool = true;
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		if(var_11_object == var_0_bool)
			var_1_bool = false;
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1990(var_14_bool, var_15_object, var_16_object);
	}

}


task task_5
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_12_object;
		func_924(var_12_object, var_12_object);
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		if(var_11_object == var_0_bool)
			var_0_bool = null;
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		object var_50_object;
		func_924(var_50_object, var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1990(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_float = var_49_object;
			func_906();
		}
	}

}


task task_6
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_1900(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1052(var_10_object, var_13_object);
			object var_55_object;
			var_11_object = var_55_object;
			func_1907(var_55_object);
		}
	}

	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		bool var_13_bool;
		@IsPlayerActor(var_2_cvector, var_13_bool);
		if(var_13_bool != 0)
			return 2;
		bool var_15_bool; object var_16_object;
		var_11_object = var_16_object;
		func_2026(var_15_bool, var_16_object);
		if(!var_15_bool) //@nz
			return 2;
		@IsPlayerActor(var_11_object, var_13_bool);
		if(var_13_bool != 0) {
			var_2_cvector = var_11_object;
			@Stop();
			@StopGroup0();
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool, object var_49_object)
		{
		func_1052(var_13_bool, var_49_object);
		object var_50_object;
		var_49_object = var_50_object;
		func_1917(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_1990(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_object = var_49_object;
			func_1031();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		func_1052(var_10_object, var_11_object);
		object var_12_object;
		var_11_object = var_12_object;
		func_1984();
	}

}


task task_7
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1900(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1127();
			object var_56_object;
			var_11_object = var_56_object;
			func_1907(var_56_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1885(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1127();
			object var_56_object;
			var_11_object = var_56_object;
			func_1892(var_56_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool, object var_49_object)
		{
		func_1127();
		object var_51_object;
		var_49_object = var_51_object;
		func_1917(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_1990(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_object = var_49_object;
			func_1106();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		func_1127();
		object var_13_object;
		var_11_object = var_13_object;
		func_1984();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, int var_11_int)
	{
		if(var_11_int == 91)
			func_1127();
	}

}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, int var_12_int, float var_13_float, float var_14_float)
{
	object var_15_object;
	var_11_object = var_15_object;
	int var_16_int;
	var_12_int = var_16_int;
	float var_17_float;
	var_13_float = var_17_float;
	func_1379(var_15_object, var_16_int, var_17_float);
}


// @pe
void OnHit2(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, int var_12_int, float var_13_float, float var_14_float, cvector var_15_cvector, cvector var_16_cvector)
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
	func_1447(var_19_float, var_20_cvector, var_21_cvector);
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, string var_12_string)
{
	float var_14_float;
	if(var_12_string == "health") {
		@GetProperty("health", var_14_float);
		if(var_14_float <= 0)
			@SignalDeath(var_11_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
{
	object var_12_object;
	var_11_object = var_12_object;
	func_1949(var_12_object);
}


void func_1544(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_1550(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


void func_533(void)
{
	@KillTimer(61);
	@Stop();
}


// @pe
void func_1560(float var_52_float, float var_53_float, float var_54_float, float var_55_float)
{
	if(var_53_float < var_54_float) {
		var_54_float = var_52_float;
		return 0;
	}
	if(var_53_float > var_55_float) {
		var_55_float = var_52_float;
		return 0;
	}
	var_53_float = var_52_float;
}


void func_1052(bool var_0_bool, bool var_1_bool)
{
	@SetSeeThreshold(var_0_bool);
	@SetSeeFOV(var_1_bool);
	@Stop();
	@StopGroup0();
}


void func_1571(bool var_94_bool, int var_95_int, int var_96_int)
{
	int var_98_int;
	@irand(var_98_int, var_96_int);
	var_94_bool = var_98_int < var_95_int;
}


// @pe
void func_1576(bool var_23_bool, object var_24_object, float var_25_float)
{
	if(!var_24_object) { //@nz
		var_23_bool = false;
		return 0;
	}
	if(var_25_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_25_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_30_float;
		var_25_float = var_30_float;
		func_1611(var_30_float);
		bool var_34_bool; object var_35_object; float var_37_float;
		var_24_object = var_35_object;
		var_25_float = var_37_float;
		func_1229(var_34_bool, var_35_object, "reputation", var_37_float, (float)0, (float)1);
		var_23_bool = true;
		return 0;

	}
	
	var_23_bool = false;
}


void func_1070(void)
{
	@SetTimer(91, 20);
	func_1171();
}


void func_61(void)
{
	@KillTimer(90);
	func_170(var_12_float, var_13_float);
}


void func_1611(float var_30_float)
{
	object var_32_object;
	@CreateFloatVector(var_32_object);
	var_32_object->add(var_30_float);
	@SendWorldWndMessage(16, var_32_object);
}
EMIT "Stack[-1] = 0";


void func_597(void)
{
	int var_49_int; int var_50_int; bool var_51_bool; float var_52_float; bool var_53_bool;
	@WaitForAnimEnd();
	bool var_54_bool;
	func_1461(var_54_bool);
	if(!var_54_bool) //@nz
		return 14;
	int var_58_int;
	func_1637(var_58_int);
	int var_47_int;
	var_58_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_48_int < 5) {
			bool var_74_bool;
			func_1461(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			@irand(var_49_int, 3);
			if(var_49_int == 0) {
				if(var_47_int == 0) goto Label_644;
				@irand(var_50_int, var_47_int);
				string var_80_string; int var_81_int;
				var_50_int = var_81_int;
				func_1630(var_80_string, var_81_int);
				@PlayAnimation("all", var_80_string);
				@WaitForAnimEnd(var_51_bool);
				if(!var_51_bool) { //@nz
				} else {
			} else {
			if(var_49_int == 1) {
				@rand(var_52_float, 4);
				@Sleep((var_52_float + 1), var_53_bool);
				if(!var_53_bool) { //@nz
					goto Label_673;
				}
			} else if(var_48_int != 0) {
				goto Label_673;
			}
			}
					bool var_83_bool;
					func_676(var_83_bool);
					var_84_bool = !var_83_bool; //@nz
					if(var_84_bool == 0) goto Label_668;
			}
		}
	Label_673:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_668:
		@ResetAAS();
		var_48_int += 1;
	}
	
}


void func_1621(object var_128_object)
{
	bool var_130_bool;
	@IsPlayerActor(var_128_object, var_130_bool);
	if(var_130_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1630(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_99(bool var_0_bool, bool var_1_bool)
{
	float var_19_float; cvector var_20_cvector; cvector var_21_cvector; bool var_22_bool; object var_23_object; bool var_24_bool;
	@rand(var_19_float, 0.5);
	@Sleep(var_19_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_111:
				@GetPosition(var_21_cvector);
				float var_28_float;
				func_158(var_28_float);
				@GetRandomPFPointInCircle(var_20_cvector, var_21_cvector, var_28_float, var_22_bool);
				if(var_22_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_111;
			}
				var_1_bool = false;
		}
		}
		goto Label_127;

	Label_127:
		object var_32_object; cvector var_33_cvector;
		var_20_cvector = var_33_cvector;
		func_179(var_32_object, var_33_cvector);
		var_32_object = var_23_object;
		if(var_23_object != null) {
			@RotatePath(var_23_object, var_24_bool);
			if(var_24_bool != 0) {
				bool var_38_bool;
				func_177(var_38_bool);
				@FollowPath(var_23_object, var_38_bool, var_24_bool);
				var_23_object = null;
				if(var_24_bool != 0) {
					TaskCall(3);
					func_597();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_23_object = null;
	}
	
}


void func_1637(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_1630(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


void func_1127(void)
{
	@KillTimer(91);
	@Stop();
	func_1192();
}


void func_1654(int var_121_int)
{
	int var_123_int;
	@GetVariable("branch", var_123_int);
	var_123_int = var_121_int;
}


// @pe
void func_1660(object var_15_object)
{
	int var_16_int;
	func_1654(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


void func_1153(bool var_30_bool)
{
	float var_33_float; bool var_34_bool;
	@rand(var_33_float);
	if(var_33_float < 0.3) {
		@PlayAnimation("all", "hunt");
		@WaitForAnimEnd(var_34_bool);
		if(!var_34_bool) //@nz
			var_30_bool = true;
	}
	var_30_bool = false;
}


void func_1673(int var_70_int, int var_71_int)
{
	if(var_70_int > var_71_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_74_int = 0;
	if(var_70_int != var_71_int) {
		@irand(var_74_int, (var_71_int - var_70_int));
	} else if(var_70_int == 0) {
		return 4;
	}
	var_74_int += var_70_int;
	if(var_74_int == 0)
		return 4;
	int var_82_int;
	func_1782(var_82_int, "Money");
	bool var_75_bool;
	@AddItem(var_75_bool, var_82_int, 0, var_74_int);
	
}


void func_1171(void)
{
	float var_26_float; float var_27_float; bool var_28_bool;
	
	for(;;) {
		@RandVec2D(var_26_float, var_27_float);
		@Rotate(var_26_float, var_27_float, var_28_bool);
		if(!var_28_bool) { //@nz
		} else {
				bool var_30_bool;
				func_1153(var_30_bool);
				if(var_30_bool == 0) goto Label_1184;
		}
	Label_1191:
		for(;;) {

		}

	Label_1184:
		@Sleep(5, var_28_bool);
		if(!var_28_bool) { //@nz
			goto Label_1191;
		}
	}
}


void func_158(float var_28_float)
{
	float var_30_float;
	@GetCameraFarDistance(var_30_float);
	var_30_float = var_28_float;
}


void func_676(bool var_83_bool)
{
	var_83_bool = true;
}


void func_678(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1192(void)
{
	@Stop();
	@StopGroup0();
}


void func_1704(string var_127_string)
{
	object var_131_object;
	@CreateInvItem(var_131_object);
	var_131_object->SetItemName(var_127_string);
	var_131_object->SetProperty("Organ", 1);
	int var_132_int;
	var_131_object->GetItemID(var_132_int);
	bool var_133_bool;
	@AddItem(var_133_bool, var_131_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_170(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_683(bool var_0_bool, bool var_1_bool, object var_53_object, object var_125_object)
{
	cvector var_67_cvector; cvector var_68_cvector; cvector var_69_cvector; int var_70_int; object var_71_object; cvector var_72_cvector; bool var_73_bool; object var_74_object; float var_75_float; float var_76_float; int var_77_int;
	@CanSee(var_1_bool, var_53_object);
	bool var_78_bool; object var_79_object;
	var_53_object = var_79_object;
	func_1326(var_78_bool, var_79_object);
	bool var_92_bool; object var_93_object;
	var_53_object = var_93_object;
	func_1292(var_92_bool, var_93_object);
	if(!var_92_bool) //@nz
		return 22;
	@Face(var_53_object);
	
	for(;;) {
		bool var_121_bool;
		func_1292(var_121_bool, var_53_object);
		if(var_121_bool != 0) {
			if(!var_1_bool) { //@nz
				@StopAsync();
				object var_124_object;
				TaskCall(5);
				func_890(var_125_object, var_124_object);
				TaskReturn();
				var_0_bool = var_125_object;
				if(var_0_bool == null) {
				} else {
						@CanSee(var_1_bool, var_0_bool);
						@Face(var_0_bool);
			}
					func_1621(var_0_bool);
					@ReportAttack(var_0_bool);
					@GetPosition(var_67_cvector);
					var_0_bool->GetPosition(var_68_cvector); //@t
					var_69_cvector = var_68_cvector - var_67_cvector;
					int var_133_int; float var_134_float;
					var_134_float = sqrt(var_69_cvector | var_69_cvector);
					func_1849(var_133_int, var_134_float);
					var_133_int = var_70_int;
					@PlayAnimation("all", ("attack_begin" + var_70_int));
					@WaitForAnimEnd();
					if(!(var_0_bool == null)) goto Label_749;
			}
		}
		for(;;) {
			@StopAsync();
			return 22;

		}

	Label_749:
		@PlayAnimation("all", ("attack_end" + var_70_int));
		@GetScene(var_71_object);
		@GetGeometryLocator(("attack" + var_70_int), var_73_bool, var_67_cvector, var_72_cvector);
		@AddActorByType(var_74_object, "scripted", var_71_object, var_67_cvector, [0.0, 0.0, 1.0], "grenade.xml");
		object var_153_object;
		func_1544(var_153_object);
		var_74_object->SetScriptProperty("Owner", var_153_object);
		if(var_70_int == 1) {
			var_74_object->SetScriptProperty("StartVelocity", [0.0, -500.0, 0.0]);
		} else {
		var_185_float = GetByIndex(var_72_cvector, 1);
		var_186_float = GetByIndex(var_72_cvector, 1);
		var_189_float = GetByIndex(var_69_cvector, 0);
		var_190_float = GetByIndex(var_69_cvector, 0);
		var_192_float = GetByIndex(var_69_cvector, 2);
		var_193_float = GetByIndex(var_69_cvector, 2);
		var_75_float = sqrt((1 - (var_185_float * var_186_float)) / ((var_189_float * var_190_float) + (var_192_float * var_193_float)));
		var_197_float = GetByIndex(var_72_cvector, 0);
		var_198_float = GetByIndex(var_69_cvector, 0);
		SetByIndex(var_72_cvector, 0) = (var_198_float * var_75_float);
		var_199_float = GetByIndex(var_72_cvector, 2);
		var_200_float = GetByIndex(var_69_cvector, 2);
		SetByIndex(var_72_cvector, 2) = (var_200_float * var_75_float);
		var_0_bool->GetPosition(var_68_cvector); //@t
		float var_201_float; cvector var_202_cvector; cvector var_203_cvector; cvector var_204_cvector;
		var_67_cvector = var_202_cvector;
		var_68_cvector = var_203_cvector;
		func_1805(var_201_float, var_202_cvector, var_203_cvector, var_204_cvector);
		var_201_float = var_76_float;
		if(var_76_float < 0) {
			float var_250_float; int var_251_int;
			var_70_int = var_251_int;
			func_1863(var_250_float, var_251_int);
			var_250_float = var_76_float;
		} else {
			float var_256_float; int var_257_int; float var_258_float;
			var_70_int = var_257_int;
			var_76_float = var_258_float;
			func_1871(var_257_int, var_258_float);
			var_256_float = var_76_float;
		}
		var_74_object->SetScriptProperty("StartVelocity", (var_204_cvector * var_76_float));
		}
		var_74_object->SetScriptProperty("DamageAmount", 0.8);
		var_74_object->SetScriptProperty("DamageType", 2);
		@WaitForAnimEnd();
		if(var_70_int == 1) {
			@irand(var_77_int, 2);
			@Speak("scream" + (var_77_int + 1));
			func_1466(var_0_bool);
			@PlayAnimation("all", ("scream" + (var_77_int + 1)));
			@WaitForAnimEnd();
			@UnlookAsync("head");
		}
		var_74_object = null;
		var_71_object = null;
	}
	
}


void func_1197(cvector var_45_cvector, object var_46_object)
{
	cvector var_49_cvector;
	@GetPosition(var_49_cvector);
	cvector var_50_cvector;
	var_46_object->GetPosition(var_50_cvector);
	var_45_cvector = var_50_cvector - var_49_cvector;
}


void func_177(bool var_38_bool)
{
	var_38_bool = false;
}


void func_179(object var_32_object, cvector var_33_cvector)
{
	object var_35_object;
	@FindShiftedPathTo(var_35_object, var_33_cvector);
	var_35_object = var_32_object;
}
EMIT "Stack[-1] = 0";


void func_1204(float var_39_float, object var_40_object)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_40_object->GetPosition(var_45_cvector);
	var_39_float = (var_45_cvector - var_44_cvector) | (var_45_cvector - var_44_cvector);
}


void func_1721(void)
{
	int var_121_int;
	func_1654(var_121_int);
	if(var_121_int != 1) {
	}
	func_1704("liver");
	func_1704("kidney");
	func_1704("heart");
	func_1704("blood");
}


void func_185(object var_61_object)
{
	bool var_63_bool;
	@IsPlayerActor(var_61_object, var_63_bool);
	if(var_63_bool != 0)
		func_1745();
	func_1721();
	object var_141_object;
	var_61_object = var_141_object;
	func_201(var_141_object);
}


void func_1212(bool var_19_bool, object var_20_object)
{
	bool var_22_bool;
	@IsPlayerActor(var_20_object, var_22_bool);
	var_22_bool = var_19_bool;
}


void func_1217(bool var_42_bool, object var_43_object, string var_44_string)
{
	var_49_bool = IsFuncExist(var_43_object, "HasProperty", 2);
	if(!var_49_bool) { //@nz
		var_42_bool = false;
		return 2;
	}
	bool var_46_bool;
	var_43_object->HasProperty(var_44_string, var_46_bool);
	var_46_bool = var_42_bool;
}


// @pe
void func_201(object var_141_object)
{
	object var_142_object;
	var_141_object = var_142_object;
	func_226(var_142_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1229(bool var_34_bool, object var_35_object, string var_36_string, float var_37_float, float var_38_float, float var_39_float)
{
	object var_43_object;
	var_35_object = var_43_object;
	string var_44_string;
	var_36_string = var_44_string;
	bool var_42_bool;
	func_1217(var_42_bool, var_43_object, var_44_string);
	if(!var_42_bool) //@nz
		var_34_bool = false;
	float var_41_float;
	var_35_object->GetProperty(var_36_string, var_41_float);
	float var_52_float; float var_54_float; float var_55_float;
	var_38_float = var_54_float;
	var_39_float = var_55_float;
	func_1560(var_52_float, (var_41_float + var_37_float), var_54_float, var_55_float);
	var_35_object->SetProperty(var_36_string, var_52_float);
	var_34_bool = true;
}


void func_1745(void)
{
	@ClearSubContainer(0);
	func_1673(600, 1500);
	func_1477("fresh_meat", 1, 6);
	func_1488("rusk", 1, 6, 2);
	func_1477("gamma_pills", 1, 3);
	int var_117_int;
	func_1782(var_117_int, "bomber_mark");
	bool var_68_bool;
	@AddItem(var_68_bool, var_117_int, 0, 1);
}


void func_226(object var_142_object)
{
	cvector var_153_cvector; cvector var_154_cvector; cvector var_155_cvector; cvector var_156_cvector; string var_157_string; object var_158_object; bool var_159_bool; bool var_160_bool; float var_161_float; cvector var_162_cvector;
	if(var_142_object == null) {
		func_317("fdie");
	} else {
		var_142_object->GetPosition(var_153_cvector);
		@GetPosition(var_154_cvector);
		@GetDirection(var_155_cvector);
		var_156_cvector = var_154_cvector - var_153_cvector;
		var_196_float = GetByIndex(var_156_cvector, 0);
		var_197_float = GetByIndex(var_155_cvector, 0);
		var_199_float = GetByIndex(var_156_cvector, 2);
		var_200_float = GetByIndex(var_155_cvector, 2);
		if(((var_196_float * var_197_float) + (var_199_float * var_200_float)) >= 0)
			var_157_string = "fdie";
		else
			var_157_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_142_object = var_158_object;
		var_207_bool = IsFuncExist(var_142_object, "GetScriptProperty", 2);
		if(var_207_bool != 0) {
			var_142_object->HasScriptProperty(var_159_bool, "Owner");
			if(var_159_bool != 0) {
				var_142_object->GetScriptProperty(var_158_object, "Owner");
				if(var_158_object == null)
					var_142_object = var_158_object;
			}
		}
		var_214_bool = IsFuncExist(var_158_object, "@GetEyesHeight", 1);
		if(var_214_bool != 0) {
			var_158_object->GetEyesHeight(var_161_float);
			var_162_cvector = [0.0, 0.0, 0.0];
			var_215_float = GetByIndex(var_162_cvector, 1);
			var_161_float = var_215_float;
			SetByIndex(var_162_cvector, 1) = var_215_float;
			@LookAsync(var_142_object, "head", var_162_cvector);
			var_160_bool = true;
		} else {
			var_160_bool = false;

		}
		string var_217_string;
		var_157_string = var_217_string;
		func_1503(var_217_string);
		@PlayAnimation("all", var_157_string);
		@WaitForAnimEnd();
		if(var_160_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_157_string);
		@RemoveEnvelope();
		var_158_object = null;
	}
	
}


void func_1251(bool var_107_bool, object var_108_object)
{
	bool var_110_bool;
	var_108_object->IsDead(var_110_bool);
	var_110_bool = var_107_bool;
}


void func_1256(bool var_96_bool, object var_97_object)
{
	if(var_97_object == null) {
		var_96_bool = false;
		return 4;
	}
	bool var_103_bool = false;
	var_106_bool = IsFuncExist(var_97_object, "IsDead", 1);
	if(var_106_bool != 0) {
		bool var_107_bool; object var_108_object;
		var_97_object = var_108_object;
		func_1251(var_107_bool, var_108_object);
		if(var_107_bool != 0)
			var_103_bool = true;
	}
	if(var_103_bool != 0) {
		var_96_bool = false;
		return 4;
	}
	object var_100_object;
	@GetScene(var_100_object);
	if(var_100_object == null) {
		var_96_bool = false;
		return 4;
	}
	object var_101_object;
	var_97_object->GetScene(var_101_object);
	if(var_100_object != var_101_object) {
		var_96_bool = false;
		return 4;
	}
	var_96_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1782(int var_82_int, string var_83_string)
{
	int var_85_int;
	@GetInvItemByName(var_85_int, var_83_string);
	var_85_int = var_82_int;
}


void func_1787(bool var_19_bool, object var_20_object)
{
	bool var_25_bool; object var_26_object;
	func_1217(var_25_bool, var_26_object, "class");
	if(!var_25_bool) //@nz
		var_19_bool = false;
	string var_23_string;
	@GetProperty("class", var_23_string);
	string var_24_string;
	var_26_object->GetProperty("class", var_24_string);
	var_19_bool = var_24_string == var_23_string;
}


void func_1292(bool var_92_bool, object var_93_object)
{
	object var_97_object;
	var_93_object = var_97_object;
	bool var_96_bool;
	func_1256(var_96_bool, var_97_object);
	if(!var_96_bool) { //@nz
		var_92_bool = false;
		return 2;
	}
	bool var_114_bool; object var_115_object;
	func_1217(var_114_bool, var_115_object, "noaccess");
	if(!var_114_bool) { //@nz
		var_92_bool = true;
		return 2;
	}
	int var_95_int;
	var_115_object->GetProperty("noaccess", var_95_int);
	var_92_bool = var_95_int == 0;
}


void func_1805(float var_201_float, cvector var_202_cvector, cvector var_203_cvector, cvector var_204_cvector)
{
	var_215_float = GetByIndex(var_204_cvector, 0);
	var_216_float = GetByIndex(var_204_cvector, 0);
	var_218_float = GetByIndex(var_204_cvector, 2);
	var_219_float = GetByIndex(var_204_cvector, 2);
	float var_210_float = sqrt((var_215_float * var_216_float) + (var_218_float * var_219_float));
	var_222_float = GetByIndex(var_204_cvector, 1);
	var_223_float = GetByIndex(var_202_cvector, 0);
	var_224_float = GetByIndex(var_203_cvector, 0);
	var_226_float = GetByIndex(var_202_cvector, 0);
	var_227_float = GetByIndex(var_203_cvector, 0);
	var_230_float = GetByIndex(var_202_cvector, 2);
	var_231_float = GetByIndex(var_203_cvector, 2);
	var_233_float = GetByIndex(var_202_cvector, 2);
	var_234_float = GetByIndex(var_203_cvector, 2);
	float var_212_float = sqrt(((var_223_float - var_224_float) * (var_226_float - var_227_float)) + ((var_230_float - var_231_float) * (var_233_float - var_234_float)));
	var_240_float = GetByIndex(var_203_cvector, 1);
	var_241_float = GetByIndex(var_202_cvector, 1);
	float var_213_float = 500.0 / ((var_212_float * (var_222_float / var_210_float)) - (var_240_float - var_241_float));
	if(var_213_float < 0)
		var_201_float = -1;
	var_247_float = sqrt(var_213_float);
	float var_214_float = (var_212_float / var_210_float) * var_247_float;
	var_214_float = var_201_float;
}


void func_1316(bool var_82_bool, cvector var_83_cvector)
{
	cvector var_87_cvector;
	@GetPosition(var_87_cvector);
	cvector var_88_cvector = var_83_cvector - var_87_cvector;
	var_90_float = GetByIndex(var_88_cvector, 0);
	var_91_float = GetByIndex(var_88_cvector, 2);
	bool var_89_bool;
	@Rotate(var_90_float, var_91_float, var_89_bool);
	var_89_bool = var_82_bool;
}


void func_1326(bool var_78_bool, object var_79_object)
{
	cvector var_81_cvector;
	var_79_object->GetPosition(var_81_cvector);
	bool var_82_bool; cvector var_83_cvector;
	var_81_cvector = var_83_cvector;
	func_1316(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
}


void func_1335(object var_28_object)
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


// @pe
void func_1849(int var_133_int, float var_134_float)
{
	if(var_134_float < 200) {
		var_133_int = 1;
		return 0;
	EMIT "GOTO 0x745";
	}
	if(var_134_float < 1000) {
		var_133_int = 2;
		return 0;
	}
	var_133_int = 3;
}


// @pe
void func_317(string var_164_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_165_string;
	var_164_string = var_165_string;
	func_1503(var_165_string);
	@PlayAnimation("all", var_164_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_164_string);
	@RemoveEnvelope();
}


// @pe
void func_1863(float var_250_float, int var_251_int)
{
	if(var_251_int == 1)
		var_250_float = 30;
	var_250_float = 700;
}


// @pe
void func_1871(float var_256_float, float var_258_float)
{
	if(var_258_float < 10) {
		var_256_float = 10;
		return 0;
	EMIT "GOTO 0x75b";
	}
	if(var_258_float > 1500) {
		var_256_float = 1500;
		return 0;
	}
	var_258_float = var_256_float;
}


// @pe
void func_1885(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2026(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


// @pe
void func_349(object var_57_object)
{
	object var_61_object;
	func_417(var_58_cvector, var_59_object, var_60_object, var_61_object, var_61_object, false);
}


void func_1379(object var_15_object, int var_16_int, float var_17_float)
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
		func_1197(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1550(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1441:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1335(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1441;
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
	func_1447(var_62_float, var_63_cvector, var_64_cvector);
}


// @pe
void func_1892(object var_56_object)
{
	object var_57_object;
	var_56_object = var_57_object;
	TaskCall(2);
	func_349(var_57_object);
	TaskReturn();
}


// @pe
void func_1900(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2026(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


// @pe
void func_1907(object var_56_object)
{
	TaskCall(4);
	object var_57_object;
	func_683(var_57_object, var_58_object, var_59_bool, var_57_object);
	TaskReturn();
	@ResetAAS();
}


void func_890(bool var_0_bool, object var_124_object)
{
	@Sleep(5);
	var_124_object = var_0_bool;
}


// @pe
void func_1917(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2041();
	object var_53_object;
	TaskCall(4);
	func_683(var_53_object, var_54_object, var_55_bool, var_53_object);
	TaskReturn();
	@ResetAAS();
}


void func_391(bool var_60_bool, object var_61_object, object var_62_object)
{
	bool var_64_bool;
	@IsPlayerActor(var_61_object, var_64_bool);
	if(var_64_bool != 0) {
		var_60_bool = false;
		return 2;
	}
	bool var_66_bool; object var_67_object;
	func_2026(var_66_bool, var_67_object);
	if(!var_66_bool) { //@nz
		var_60_bool = false;
		return 2;
	}
	@IsPlayerActor(var_67_object, var_64_bool);
	var_64_bool = var_60_bool;
}


// @pe
void func_410(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_2026(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


// @pe
void func_924(bool var_0_bool, object var_50_object)
{
	bool var_51_bool = false;
	if(var_0_bool == null) {
		bool var_53_bool; object var_54_object;
		func_2026(var_53_bool, var_54_object);
		if(var_53_bool != 0)
			var_51_bool = true;
	}
	if(var_51_bool != 0) {
		var_0_bool = var_54_object;
		@StopGroup0();
	}
}


// @pe
void func_1949(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2043();
	bool var_19_bool; object var_20_object;
	var_12_object = var_20_object;
	func_1212(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		bool var_23_bool; object var_24_object;
		var_12_object = var_24_object;
		func_1576(var_23_bool, var_24_object, 0.05);
	}
	object var_61_object;
	var_12_object = var_61_object;
	TaskCall(1);
	func_185(var_61_object);
	TaskReturn();
}


void func_417(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_61_object, bool var_62_bool, float var_84_float)
{
	bool var_64_bool;
	bool var_65_bool;
	func_1292(var_65_bool, var_1_bool);
	if(!var_65_bool) //@nz
		return 2;
	var_1_bool = var_61_object;
	func_1621(var_1_bool);
	var_1_bool->GetPFPosition(var_0_bool); //@t
	@SetTimer(61, 0.5);
	
Label_436:
	@FindPathTo(var_2_cvector, var_0_bool);
	if(var_2_cvector == null) {
		@Trace("Can't find path to noise source");
	} else {
			@FollowPath(var_2_cvector, var_62_bool, var_64_bool);
			if(!var_64_bool) { //@nz
				if(!(var_2_cvector == null)) goto Label_451;
			}

		Label_451:
			} else {
			@KillTimer(61);
			object var_82_object;
			TaskCall(6);
			func_940(var_84_float, var_85_float, var_86_object, var_82_object, var_1_bool);
			TaskReturn();
			var_1_bool = var_84_float;
			@SetTimer(61, 0.5);
			bool var_108_bool;
			func_1292(var_108_bool, var_1_bool);
			if(!var_108_bool) { //@nz
				goto Label_477;
			}
			var_1_bool->GetPFPosition(var_0_bool); //@t
	}
Label_477:
	for(;;) {
		@KillTimer(61);
		return 2;

		}
	var_80_bool = var_2_cvector != null; //@nn
	if(var_80_bool == 1) goto Label_436;
	
}


void func_1447(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1335(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_940(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_82_object, object var_83_object)
{
	bool var_89_bool;
	@GetSeeThreshold(var_0_bool);
	@GetSeeFOV(var_1_bool);
	@SetSeeThreshold(var_0_bool / 1.5);
	func_1621(var_83_object);
	int var_90_int = 0;
	
	for(;;) {
		if(var_90_int < 3) {
			@SetSeeFOV(var_1_bool * 1.8);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(var_89_bool);
			@SetSeeFOV(var_1_bool);
			if(!var_89_bool) { //@nz
			} else {
					@Sleep(2, var_89_bool);
					var_103_bool = !var_89_bool; //@nz
					if(var_103_bool == 0) goto Label_979;
			}
		}
		for(;;) {
			func_1052(var_89_bool, var_90_int);
			if(var_89_bool != 0)
				var_2_cvector = null;
			var_82_object = var_2_cvector;

		}

	Label_979:
		func_1621(var_2_cvector);
		var_90_int += 1;
	}
}


void func_1461(bool var_54_bool)
{
	bool var_56_bool;
	@IsLoaded(var_56_bool);
	var_56_bool = var_54_bool;
}


void func_1466(object var_171_object)
{
	float var_174_float;
	var_171_object->GetEyesHeight(var_174_float);
	cvector var_175_cvector = [0.0, 0.0, 0.0];
	var_176_float = GetByIndex(var_175_cvector, 1);
	var_174_float = var_176_float;
	SetByIndex(var_175_cvector, 1) = var_176_float;
	@LookAsync(var_171_object, "head", var_175_cvector);
}


void func_1477(string var_89_string, int var_90_int, int var_91_int)
{
	bool var_93_bool;
	int var_95_int;
	var_90_int = var_95_int;
	int var_96_int;
	var_91_int = var_96_int;
	bool var_94_bool;
	func_1571(var_94_bool, var_95_int, var_96_int);
	if(var_94_bool != 0)
		@AddItem(var_93_bool, var_89_string, 0);
}


void func_1990(bool var_14_bool, object var_15_object, object var_16_object)
{
	bool var_18_bool;
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1787(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		@CanSee(var_18_bool, var_15_object);
		bool var_37_bool = true;
		if(var_18_bool != 1) {
			float var_39_float; object var_40_object;
			var_15_object = var_40_object;
			func_1204(var_39_float, var_40_object);
			var_48_bool = var_39_float <= 490000.0;
			if(var_48_bool != 1)
				var_37_bool = false;
		}
		if(var_37_bool != 0)
			var_14_bool = true;
	}
	var_14_bool = false;
}


void func_1488(string var_100_string, int var_101_int, int var_102_int, int var_103_int)
{
	int var_106_int; bool var_107_bool;
	int var_109_int;
	var_101_int = var_109_int;
	int var_110_int;
	var_102_int = var_110_int;
	bool var_108_bool;
	func_1571(var_108_bool, var_109_int, var_110_int);
	if(var_108_bool != 0) {
		@irand(var_106_int, var_103_int);
		@AddItem(var_107_bool, var_100_string, 0, (var_106_int + 1));
	}
}


void func_1503(string var_165_string)
{
	bool var_174_bool; int var_175_int; bool var_176_bool; int var_177_int; bool var_178_bool; float var_179_float; cvector var_180_cvector; cvector var_181_cvector;
	@IsExisting3DSound(var_174_bool, var_165_string);
	if(!var_174_bool) { //@nz
		var_175_int = 0;

		for(;;) {
			@IsExisting3DSound(var_176_bool, (var_165_string + (var_175_int + 1)));
			if(!var_176_bool) { //@nz
				break;
			Label_1523:
				@irand(var_177_int, var_175_int);
				var_165_string += (var_177_int + 1);
	}
			@Is3DSoundLoaded(var_178_bool, var_165_string);
			if(var_178_bool != 0) {
				@GetEyesHeight(var_179_float);
				@GetDirection(var_180_cvector);
				var_181_cvector = var_180_cvector * 50;
				var_192_float = GetByIndex(var_181_cvector, 1);
				SetByIndex(var_181_cvector, 1) = (var_192_float + var_179_float);
				@PlayGlobalSound(var_165_string, var_181_cvector);
			}
		}
		var_175_int += 1;
	}
	var_187_bool = !var_175_int; //@nz
	if(var_187_bool == 0) goto Label_1523;
}


void func_2015(void)
{
	object var_15_object;
	@GetScene(var_15_object);
	object var_16_object;
	func_1544(var_16_object);
	var_15_object->RemoveStationaryActor(var_16_object);
}
EMIT "Stack[-1] = 0";


void func_2025(void)
{
}


// @pe
void func_2026(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_1292(var_16_bool, var_17_object);
	if(!var_16_bool) //@nz
		var_14_bool = false;
	bool var_51_bool; object var_52_object;
	var_15_object = var_52_object;
	func_1212(var_51_bool, var_52_object);
	var_51_bool = var_14_bool;
}


// @pe
void func_2041(void)
{
}


// @pe
void func_2043(void)
{
	func_2015();
}


