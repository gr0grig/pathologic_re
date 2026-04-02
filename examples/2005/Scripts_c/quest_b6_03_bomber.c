// @GLOBALS: 0:object:

maintask task_0
{
	// @pe
	void init(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		func_2108();
	
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
		func_1993(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_114_object;
			var_11_object = var_114_object;
			func_2000(var_114_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1978(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_114_object;
			var_11_object = var_114_object;
			func_1985(var_114_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_61();
		object var_51_object;
		var_49_object = var_51_object;
		func_2010(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_2083(var_14_bool, var_15_object, var_16_object);
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
		func_2077();
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
			func_1753(var_15_object);
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
		func_1993(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_533();
			object var_114_object;
			var_11_object = var_114_object;
			func_2000(var_114_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_533();
		object var_51_object;
		var_49_object = var_51_object;
		func_2010(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_2083(var_14_bool, var_15_object, var_16_object);
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
			bool var_118_bool; object var_119_object;
			func_391(var_118_bool, var_119_object, var_1_bool);
			if(var_118_bool == 0) goto Label_522;
			var_1_bool = var_119_object;
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
		func_2077();
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
		func_1993(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_113_object;
			var_11_object = var_113_object;
			func_2000(var_113_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1978(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_113_object;
			var_11_object = var_113_object;
			func_1985(var_113_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_678();
		object var_50_object;
		var_49_object = var_50_object;
		func_2010(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_2083(var_14_bool, var_15_object, var_16_object);
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
		func_2083(var_14_bool, var_15_object, var_16_object);
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
		func_2083(var_14_bool, var_15_object, var_16_object);
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
		func_1993(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1052(var_10_object, var_13_object);
			object var_113_object;
			var_11_object = var_113_object;
			func_2000(var_113_object);
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
		func_2115(var_15_bool, var_16_object);
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
		func_2010(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_2083(var_14_bool, var_15_object, var_16_object);
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
		func_2077();
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
		func_1993(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1127();
			object var_114_object;
			var_11_object = var_114_object;
			func_2000(var_114_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1978(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1127();
			object var_114_object;
			var_11_object = var_114_object;
			func_1985(var_114_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool, object var_49_object)
		{
		func_1127();
		object var_51_object;
		var_49_object = var_51_object;
		func_2010(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_2083(var_14_bool, var_15_object, var_16_object);
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
		func_2077();
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
	func_2042(var_12_object);
}


void OnUnload(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
{
	object var_11_object;
	func_1631(var_11_object);
	@RemoveActor(var_11_object);
	@Hold();
}


// @pe
void func_1544(bool var_74_bool, string var_75_string)
{
	var_74_bool = true;
	bool var_76_bool = true;
	bool var_77_bool = true;
	bool var_78_bool = true;
	bool var_79_bool = true;
	bool var_80_bool = true;
	bool var_81_bool = true;
	bool var_82_bool = true;
	bool var_83_bool = true;
	bool var_84_bool = true;
	bool var_85_bool = true;
	bool var_86_bool = true;
	var_88_bool = var_75_string == "woman";
	if(var_88_bool != 1) {
		var_90_bool = var_75_string == "worker";
		if(var_90_bool != 1)
			var_86_bool = false;
	}
	if(var_86_bool != 1) {
		var_92_bool = var_75_string == "butcher";
		if(var_92_bool != 1)
			var_85_bool = false;
	}
	if(var_85_bool != 1) {
		var_94_bool = var_75_string == "wasted_girl";
		if(var_94_bool != 1)
			var_84_bool = false;
	}
	if(var_84_bool != 1) {
		var_96_bool = var_75_string == "boy";
		if(var_96_bool != 1)
			var_83_bool = false;
	}
	if(var_83_bool != 1) {
		var_98_bool = var_75_string == "vaxxabitka";
		if(var_98_bool != 1)
			var_82_bool = false;
	}
	if(var_82_bool != 1) {
		var_100_bool = var_75_string == "unosha";
		if(var_100_bool != 1)
			var_81_bool = false;
	}
	if(var_81_bool != 1) {
		var_102_bool = var_75_string == "wasted_male";
		if(var_102_bool != 1)
			var_80_bool = false;
	}
	if(var_80_bool != 1) {
		var_104_bool = var_75_string == "alkash";
		if(var_104_bool != 1)
			var_79_bool = false;
	}
	if(var_79_bool != 1) {
		var_106_bool = var_75_string == "dohodyaga";
		if(var_106_bool != 1)
			var_78_bool = false;
	}
	if(var_78_bool != 1) {
		var_108_bool = var_75_string == "vaxxabit";
		if(var_108_bool != 1)
			var_77_bool = false;
	}
	if(var_77_bool != 1) {
		var_110_bool = var_75_string == "nudegirl";
		if(var_110_bool != 1)
			var_76_bool = false;
	}
	if(var_76_bool != 1) {
		var_112_bool = var_75_string == "morlok";
		if(var_112_bool != 1)
			var_74_bool = false;
	}
}


void func_533(void)
{
	@KillTimer(61);
	@Stop();
}


void func_1052(bool var_0_bool, bool var_1_bool)
{
	@SetSeeThreshold(var_0_bool);
	@SetSeeFOV(var_1_bool);
	@Stop();
	@StopGroup0();
}


void func_2083(bool var_14_bool, object var_15_object, object var_16_object)
{
	bool var_18_bool;
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1880(var_19_bool, var_20_object);
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


void func_1070(void)
{
	@SetTimer(91, 20);
	func_1171();
}


void func_2108(void)
{
	var_11_object = GlobalVars[0];
	object var_12_object;
	func_1663(var_12_object);
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
}


void func_61(void)
{
	@KillTimer(90);
	func_170(var_12_float, var_13_float);
}


void func_2115(bool var_14_bool, object var_15_object)
{
	string var_23_string;
	bool var_24_bool; object var_25_object;
	func_1292(var_24_bool, var_25_object);
	if(!var_24_bool) { //@nz
		var_14_bool = false;
		return 8;
	}
	var_59_object = GlobalVars[0];
	bool var_20_bool;
	var_59_object->in(var_20_bool, var_25_object);
	if(var_20_bool != 0) {
		var_14_bool = true;
		return 8;
	}
	bool var_61_bool; object var_62_object;
	var_15_object = var_62_object;
	func_1217(var_61_bool, var_62_object, "disease");
	if(!var_61_bool) { //@nz
		var_14_bool = false;
		return 8;
	}
	float var_21_float;
	var_15_object->GetProperty("disease", var_21_float);
	bool var_22_bool;
	@IsPlayerActor(var_15_object, var_22_bool);
	if(var_22_bool != 0) {
		var_14_bool = var_21_float > 0.0;
		return 8;
	EMIT "GOTO 0x879";
	}
	if(var_21_float > 0.01) {
		bool var_70_bool; object var_71_object;
		func_1217(var_70_bool, var_71_object, "class");
		if(var_70_bool != 0) {
			var_71_object->GetProperty("class", var_23_string);
			bool var_74_bool; string var_75_string;
			var_23_string = var_75_string;
			func_1544(var_74_bool, var_75_string);
			var_74_bool = var_14_bool;
			return 8;
		}
	}
	var_14_bool = false;
}


void func_597(void)
{
	int var_53_int; int var_54_int; bool var_55_bool; float var_56_float; bool var_57_bool;
	@WaitForAnimEnd();
	bool var_58_bool;
	func_1461(var_58_bool);
	if(!var_58_bool) //@nz
		return 14;
	int var_62_int;
	func_1730(var_62_int);
	int var_51_int;
	var_62_int = var_51_int;
	int var_52_int = 0;
	
	for(;;) {
		bool var_75_bool = false;
		if(var_52_int < 5) {
			bool var_78_bool;
			func_1461(var_78_bool);
			if(var_78_bool != 0)
				var_75_bool = true;
		}
		if(var_75_bool != 0) {
			@irand(var_53_int, 3);
			if(var_53_int == 0) {
				if(var_51_int == 0) goto Label_644;
				@irand(var_54_int, var_51_int);
				string var_84_string; int var_85_int;
				var_54_int = var_85_int;
				func_1723(var_84_string, var_85_int);
				@PlayAnimation("all", var_84_string);
				@WaitForAnimEnd(var_55_bool);
				if(!var_55_bool) { //@nz
				} else {
			} else {
			if(var_53_int == 1) {
				@rand(var_56_float, 4);
				@Sleep((var_56_float + 1), var_57_bool);
				if(!var_57_bool) { //@nz
					goto Label_673;
				}
			} else if(var_52_int != 0) {
				goto Label_673;
			}
			}
					bool var_87_bool;
					func_676(var_87_bool);
					var_88_bool = !var_87_bool; //@nz
					if(var_88_bool == 0) goto Label_668;
			}
		}
	Label_673:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_668:
		@ResetAAS();
		var_52_int += 1;
	}
	
}


void func_1631(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_99(bool var_0_bool, bool var_1_bool)
{
	float var_23_float; cvector var_24_cvector; cvector var_25_cvector; bool var_26_bool; object var_27_object; bool var_28_bool;
	@rand(var_23_float, 0.5);
	@Sleep(var_23_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_111:
				@GetPosition(var_25_cvector);
				float var_32_float;
				func_158(var_32_float);
				@GetRandomPFPointInCircle(var_24_cvector, var_25_cvector, var_32_float, var_26_bool);
				if(var_26_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_111;
			}
				var_1_bool = false;
		}
		}
		goto Label_127;

	Label_127:
		object var_36_object; cvector var_37_cvector;
		var_24_cvector = var_37_cvector;
		func_179(var_36_object, var_37_cvector);
		var_36_object = var_27_object;
		if(var_27_object != null) {
			@RotatePath(var_27_object, var_28_bool);
			if(var_28_bool != 0) {
				bool var_42_bool;
				func_177(var_42_bool);
				@FollowPath(var_27_object, var_42_bool, var_28_bool);
				var_27_object = null;
				if(var_28_bool != 0) {
					TaskCall(3);
					func_597();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_27_object = null;
	}
	
}


void func_1637(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


void func_1127(void)
{
	@KillTimer(91);
	@Stop();
	func_1192();
}


// @pe
void func_1647(float var_47_float, float var_48_float, float var_49_float, float var_50_float)
{
	if(var_48_float < var_49_float) {
		var_49_float = var_47_float;
		return 0;
	}
	if(var_48_float > var_50_float) {
		var_50_float = var_47_float;
		return 0;
	}
	var_48_float = var_47_float;
}


void func_1658(bool var_89_bool, int var_90_int, int var_91_int)
{
	int var_93_int;
	@irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
}


void func_2171(object var_52_object)
{
	if(var_52_object == null) {
	}
	var_56_object = GlobalVars[0];
	bool var_54_bool;
	var_56_object->in(var_54_bool, var_52_object);
	if(!var_54_bool) { //@nz
		var_58_object = GlobalVars[0];
		var_58_object->add(var_52_object);
	}
}


void func_1663(object var_12_object)
{
	object var_14_object;
	@CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


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


// @pe
void func_1669(bool var_18_bool, object var_19_object, float var_20_float)
{
	if(!var_19_object) { //@nz
		var_18_bool = false;
		return 0;
	}
	if(var_20_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_20_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_25_float;
		var_20_float = var_25_float;
		func_1704(var_25_float);
		bool var_29_bool; object var_30_object; float var_32_float;
		var_19_object = var_30_object;
		var_20_float = var_32_float;
		func_1229(var_29_bool, var_30_object, "reputation", var_32_float, (float)0, (float)1);
		var_18_bool = true;
		return 0;

	}
	
	var_18_bool = false;
}


// @pe
void func_2184(void)
{
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


void func_158(float var_32_float)
{
	float var_34_float;
	@GetCameraFarDistance(var_34_float);
	var_34_float = var_32_float;
}


void func_676(bool var_87_bool)
{
	var_87_bool = true;
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


void func_1704(float var_25_float)
{
	object var_27_object;
	@CreateFloatVector(var_27_object);
	var_27_object->add(var_25_float);
	@SendWorldWndMessage(16, var_27_object);
}
EMIT "Stack[-1] = 0";


void func_170(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_683(bool var_0_bool, bool var_1_bool, object var_59_object, object var_131_object)
{
	cvector var_73_cvector; cvector var_74_cvector; cvector var_75_cvector; int var_76_int; object var_77_object; cvector var_78_cvector; bool var_79_bool; object var_80_object; float var_81_float; float var_82_float; int var_83_int;
	@CanSee(var_1_bool, var_59_object);
	bool var_84_bool; object var_85_object;
	var_59_object = var_85_object;
	func_1326(var_84_bool, var_85_object);
	bool var_98_bool; object var_99_object;
	var_59_object = var_99_object;
	func_1292(var_98_bool, var_99_object);
	if(!var_98_bool) //@nz
		return 22;
	@Face(var_59_object);
	
	for(;;) {
		bool var_127_bool;
		func_1292(var_127_bool, var_59_object);
		if(var_127_bool != 0) {
			if(!var_1_bool) { //@nz
				@StopAsync();
				object var_130_object;
				TaskCall(5);
				func_890(var_131_object, var_130_object);
				TaskReturn();
				var_0_bool = var_131_object;
				if(var_0_bool == null) {
				} else {
						@CanSee(var_1_bool, var_0_bool);
						@Face(var_0_bool);
			}
					func_1714(var_0_bool);
					@ReportAttack(var_0_bool);
					@GetPosition(var_73_cvector);
					var_0_bool->GetPosition(var_74_cvector); //@t
					var_75_cvector = var_74_cvector - var_73_cvector;
					int var_139_int; float var_140_float;
					var_140_float = sqrt(var_75_cvector | var_75_cvector);
					func_1942(var_139_int, var_140_float);
					var_139_int = var_76_int;
					@PlayAnimation("all", ("attack_begin" + var_76_int));
					@WaitForAnimEnd();
					if(!(var_0_bool == null)) goto Label_749;
			}
		}
		for(;;) {
			@StopAsync();
			return 22;

		}

	Label_749:
		@PlayAnimation("all", ("attack_end" + var_76_int));
		@GetScene(var_77_object);
		@GetGeometryLocator(("attack" + var_76_int), var_79_bool, var_73_cvector, var_78_cvector);
		@AddActorByType(var_80_object, "scripted", var_77_object, var_73_cvector, [0.0, 0.0, 1.0], "grenade.xml");
		object var_159_object;
		func_1631(var_159_object);
		var_80_object->SetScriptProperty("Owner", var_159_object);
		if(var_76_int == 1) {
			var_80_object->SetScriptProperty("StartVelocity", [0.0, -500.0, 0.0]);
		} else {
		var_191_float = GetByIndex(var_78_cvector, 1);
		var_192_float = GetByIndex(var_78_cvector, 1);
		var_195_float = GetByIndex(var_75_cvector, 0);
		var_196_float = GetByIndex(var_75_cvector, 0);
		var_198_float = GetByIndex(var_75_cvector, 2);
		var_199_float = GetByIndex(var_75_cvector, 2);
		var_81_float = sqrt((1 - (var_191_float * var_192_float)) / ((var_195_float * var_196_float) + (var_198_float * var_199_float)));
		var_203_float = GetByIndex(var_78_cvector, 0);
		var_204_float = GetByIndex(var_75_cvector, 0);
		SetByIndex(var_78_cvector, 0) = (var_204_float * var_81_float);
		var_205_float = GetByIndex(var_78_cvector, 2);
		var_206_float = GetByIndex(var_75_cvector, 2);
		SetByIndex(var_78_cvector, 2) = (var_206_float * var_81_float);
		var_0_bool->GetPosition(var_74_cvector); //@t
		float var_207_float; cvector var_208_cvector; cvector var_209_cvector; cvector var_210_cvector;
		var_73_cvector = var_208_cvector;
		var_74_cvector = var_209_cvector;
		func_1898(var_207_float, var_208_cvector, var_209_cvector, var_210_cvector);
		var_207_float = var_82_float;
		if(var_82_float < 0) {
			float var_256_float; int var_257_int;
			var_76_int = var_257_int;
			func_1956(var_256_float, var_257_int);
			var_256_float = var_82_float;
		} else {
			float var_262_float; int var_263_int; float var_264_float;
			var_76_int = var_263_int;
			var_82_float = var_264_float;
			func_1964(var_263_int, var_264_float);
			var_262_float = var_82_float;
		}
		var_80_object->SetScriptProperty("StartVelocity", (var_210_cvector * var_82_float));
		}
		var_80_object->SetScriptProperty("DamageAmount", 0.8);
		var_80_object->SetScriptProperty("DamageType", 2);
		@WaitForAnimEnd();
		if(var_76_int == 1) {
			@irand(var_83_int, 2);
			@Speak("scream" + (var_83_int + 1));
			func_1466(var_0_bool);
			@PlayAnimation("all", ("scream" + (var_83_int + 1)));
			@WaitForAnimEnd();
			@UnlookAsync("head");
		}
		var_80_object = null;
		var_77_object = null;
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


void func_177(bool var_42_bool)
{
	var_42_bool = false;
}


void func_1714(object var_134_object)
{
	bool var_136_bool;
	@IsPlayerActor(var_134_object, var_136_bool);
	if(var_136_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_179(object var_36_object, cvector var_37_cvector)
{
	object var_39_object;
	@FindShiftedPathTo(var_39_object, var_37_cvector);
	var_39_object = var_36_object;
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


void func_185(object var_56_object)
{
	bool var_58_bool;
	@IsPlayerActor(var_56_object, var_58_bool);
	if(var_58_bool != 0)
		func_1838();
	func_1814();
	object var_136_object;
	var_56_object = var_136_object;
	func_201(var_136_object);
}


void func_1723(string var_68_string, int var_69_int)
{
	string var_71_string = "idle";
	if(var_69_int != 0)
		var_71_string += var_69_int;
	var_71_string = var_68_string;
}


void func_1212(bool var_14_bool, object var_15_object)
{
	bool var_17_bool;
	@IsPlayerActor(var_15_object, var_17_bool);
	var_17_bool = var_14_bool;
}


void func_1217(bool var_37_bool, object var_38_object, string var_39_string)
{
	var_44_bool = IsFuncExist(var_38_object, "HasProperty", 2);
	if(!var_44_bool) { //@nz
		var_37_bool = false;
		return 2;
	}
	bool var_41_bool;
	var_38_object->HasProperty(var_39_string, var_41_bool);
	var_41_bool = var_37_bool;
}


void func_1730(int var_62_int)
{
	int var_65_int; bool var_66_bool;
	var_65_int = 0;
	
	for(;;) {
		string var_68_string; int var_69_int;
		var_65_int = var_69_int;
		func_1723(var_68_string, var_69_int);
		@HasAnimation(var_66_bool, "all", var_68_string);
		if(!var_66_bool) //@nz
			break;
		var_65_int += 1;
	}
	var_65_int = var_62_int;
}


// @pe
void func_201(object var_136_object)
{
	object var_137_object;
	var_136_object = var_137_object;
	func_226(var_137_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1229(bool var_29_bool, object var_30_object, string var_31_string, float var_32_float, float var_33_float, float var_34_float)
{
	object var_38_object;
	var_30_object = var_38_object;
	string var_39_string;
	var_31_string = var_39_string;
	bool var_37_bool;
	func_1217(var_37_bool, var_38_object, var_39_string);
	if(!var_37_bool) //@nz
		var_29_bool = false;
	float var_36_float;
	var_30_object->GetProperty(var_31_string, var_36_float);
	float var_47_float; float var_49_float; float var_50_float;
	var_33_float = var_49_float;
	var_34_float = var_50_float;
	func_1647(var_47_float, (var_36_float + var_32_float), var_49_float, var_50_float);
	var_30_object->SetProperty(var_31_string, var_47_float);
	var_29_bool = true;
}


void func_1747(int var_116_int)
{
	int var_118_int;
	@GetVariable("branch", var_118_int);
	var_118_int = var_116_int;
}


// @pe
void func_1753(object var_15_object)
{
	int var_16_int;
	func_1747(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


void func_226(object var_137_object)
{
	cvector var_148_cvector; cvector var_149_cvector; cvector var_150_cvector; cvector var_151_cvector; string var_152_string; object var_153_object; bool var_154_bool; bool var_155_bool; float var_156_float; cvector var_157_cvector;
	if(var_137_object == null) {
		func_317("fdie");
	} else {
		var_137_object->GetPosition(var_148_cvector);
		@GetPosition(var_149_cvector);
		@GetDirection(var_150_cvector);
		var_151_cvector = var_149_cvector - var_148_cvector;
		var_191_float = GetByIndex(var_151_cvector, 0);
		var_192_float = GetByIndex(var_150_cvector, 0);
		var_194_float = GetByIndex(var_151_cvector, 2);
		var_195_float = GetByIndex(var_150_cvector, 2);
		if(((var_191_float * var_192_float) + (var_194_float * var_195_float)) >= 0)
			var_152_string = "fdie";
		else
			var_152_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_137_object = var_153_object;
		var_202_bool = IsFuncExist(var_137_object, "GetScriptProperty", 2);
		if(var_202_bool != 0) {
			var_137_object->HasScriptProperty(var_154_bool, "Owner");
			if(var_154_bool != 0) {
				var_137_object->GetScriptProperty(var_153_object, "Owner");
				if(var_153_object == null)
					var_137_object = var_153_object;
			}
		}
		var_209_bool = IsFuncExist(var_153_object, "@GetEyesHeight", 1);
		if(var_209_bool != 0) {
			var_153_object->GetEyesHeight(var_156_float);
			var_157_cvector = [0.0, 0.0, 0.0];
			var_210_float = GetByIndex(var_157_cvector, 1);
			var_156_float = var_210_float;
			SetByIndex(var_157_cvector, 1) = var_210_float;
			@LookAsync(var_137_object, "head", var_157_cvector);
			var_155_bool = true;
		} else {
			var_155_bool = false;

		}
		string var_212_string;
		var_152_string = var_212_string;
		func_1503(var_212_string);
		@PlayAnimation("all", var_152_string);
		@WaitForAnimEnd();
		if(var_155_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_152_string);
		@RemoveEnvelope();
		var_153_object = null;
	}
	
}


void func_1251(bool var_113_bool, object var_114_object)
{
	bool var_116_bool;
	var_114_object->IsDead(var_116_bool);
	var_116_bool = var_113_bool;
}


void func_1766(int var_65_int, int var_66_int)
{
	if(var_65_int > var_66_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_69_int = 0;
	if(var_65_int != var_66_int) {
		@irand(var_69_int, (var_66_int - var_65_int));
	} else if(var_65_int == 0) {
		return 4;
	}
	var_69_int += var_65_int;
	if(var_69_int == 0)
		return 4;
	int var_77_int;
	func_1875(var_77_int, "Money");
	bool var_70_bool;
	@AddItem(var_70_bool, var_77_int, 0, var_69_int);
	
}


void func_1256(bool var_102_bool, object var_103_object)
{
	if(var_103_object == null) {
		var_102_bool = false;
		return 4;
	}
	bool var_109_bool = false;
	var_112_bool = IsFuncExist(var_103_object, "IsDead", 1);
	if(var_112_bool != 0) {
		bool var_113_bool; object var_114_object;
		var_103_object = var_114_object;
		func_1251(var_113_bool, var_114_object);
		if(var_113_bool != 0)
			var_109_bool = true;
	}
	if(var_109_bool != 0) {
		var_102_bool = false;
		return 4;
	}
	object var_106_object;
	@GetScene(var_106_object);
	if(var_106_object == null) {
		var_102_bool = false;
		return 4;
	}
	object var_107_object;
	var_103_object->GetScene(var_107_object);
	if(var_106_object != var_107_object) {
		var_102_bool = false;
		return 4;
	}
	var_102_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1797(string var_122_string)
{
	object var_126_object;
	@CreateInvItem(var_126_object);
	var_126_object->SetItemName(var_122_string);
	var_126_object->SetProperty("Organ", 1);
	int var_127_int;
	var_126_object->GetItemID(var_127_int);
	bool var_128_bool;
	@AddItem(var_128_bool, var_126_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1292(bool var_98_bool, object var_99_object)
{
	object var_103_object;
	var_99_object = var_103_object;
	bool var_102_bool;
	func_1256(var_102_bool, var_103_object);
	if(!var_102_bool) { //@nz
		var_98_bool = false;
		return 2;
	}
	bool var_120_bool; object var_121_object;
	func_1217(var_120_bool, var_121_object, "noaccess");
	if(!var_120_bool) { //@nz
		var_98_bool = true;
		return 2;
	}
	int var_101_int;
	var_121_object->GetProperty("noaccess", var_101_int);
	var_98_bool = var_101_int == 0;
}


void func_1814(void)
{
	int var_116_int;
	func_1747(var_116_int);
	if(var_116_int != 1) {
	}
	func_1797("liver");
	func_1797("kidney");
	func_1797("heart");
	func_1797("blood");
}


void func_1316(bool var_88_bool, cvector var_89_cvector)
{
	cvector var_93_cvector;
	@GetPosition(var_93_cvector);
	cvector var_94_cvector = var_89_cvector - var_93_cvector;
	var_96_float = GetByIndex(var_94_cvector, 0);
	var_97_float = GetByIndex(var_94_cvector, 2);
	bool var_95_bool;
	@Rotate(var_96_float, var_97_float, var_95_bool);
	var_95_bool = var_88_bool;
}


void func_1838(void)
{
	@ClearSubContainer(0);
	func_1766(600, 1500);
	func_1477("fresh_meat", 1, 6);
	func_1488("rusk", 1, 6, 2);
	func_1477("gamma_pills", 1, 3);
	int var_112_int;
	func_1875(var_112_int, "bomber_mark");
	bool var_63_bool;
	@AddItem(var_63_bool, var_112_int, 0, 1);
}


void func_1326(bool var_84_bool, object var_85_object)
{
	cvector var_87_cvector;
	var_85_object->GetPosition(var_87_cvector);
	bool var_88_bool; cvector var_89_cvector;
	var_87_cvector = var_89_cvector;
	func_1316(var_88_bool, var_89_cvector);
	var_88_bool = var_84_bool;
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
void func_317(string var_159_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_160_string;
	var_159_string = var_160_string;
	func_1503(var_160_string);
	@PlayAnimation("all", var_159_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_159_string);
	@RemoveEnvelope();
}


void func_1875(int var_77_int, string var_78_string)
{
	int var_80_int;
	@GetInvItemByName(var_80_int, var_78_string);
	var_80_int = var_77_int;
}


void func_1880(bool var_19_bool, object var_20_object)
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


// @pe
void func_349(object var_115_object)
{
	object var_119_object;
	func_417(var_116_cvector, var_117_object, var_118_object, var_119_object, var_119_object, false);
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
		func_1637(var_43_cvector, var_44_cvector);
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


void func_1898(float var_207_float, cvector var_208_cvector, cvector var_209_cvector, cvector var_210_cvector)
{
	var_221_float = GetByIndex(var_210_cvector, 0);
	var_222_float = GetByIndex(var_210_cvector, 0);
	var_224_float = GetByIndex(var_210_cvector, 2);
	var_225_float = GetByIndex(var_210_cvector, 2);
	float var_216_float = sqrt((var_221_float * var_222_float) + (var_224_float * var_225_float));
	var_228_float = GetByIndex(var_210_cvector, 1);
	var_229_float = GetByIndex(var_208_cvector, 0);
	var_230_float = GetByIndex(var_209_cvector, 0);
	var_232_float = GetByIndex(var_208_cvector, 0);
	var_233_float = GetByIndex(var_209_cvector, 0);
	var_236_float = GetByIndex(var_208_cvector, 2);
	var_237_float = GetByIndex(var_209_cvector, 2);
	var_239_float = GetByIndex(var_208_cvector, 2);
	var_240_float = GetByIndex(var_209_cvector, 2);
	float var_218_float = sqrt(((var_229_float - var_230_float) * (var_232_float - var_233_float)) + ((var_236_float - var_237_float) * (var_239_float - var_240_float)));
	var_246_float = GetByIndex(var_209_cvector, 1);
	var_247_float = GetByIndex(var_208_cvector, 1);
	float var_219_float = 500.0 / ((var_218_float * (var_228_float / var_216_float)) - (var_246_float - var_247_float));
	if(var_219_float < 0)
		var_207_float = -1;
	var_253_float = sqrt(var_219_float);
	float var_220_float = (var_218_float / var_216_float) * var_253_float;
	var_220_float = var_207_float;
}


void func_890(bool var_0_bool, object var_130_object)
{
	@Sleep(5);
	var_130_object = var_0_bool;
}


void func_391(bool var_118_bool, object var_119_object, object var_120_object)
{
	bool var_122_bool;
	@IsPlayerActor(var_119_object, var_122_bool);
	if(var_122_bool != 0) {
		var_118_bool = false;
		return 2;
	}
	bool var_124_bool; object var_125_object;
	func_2115(var_124_bool, var_125_object);
	if(!var_124_bool) { //@nz
		var_118_bool = false;
		return 2;
	}
	@IsPlayerActor(var_125_object, var_122_bool);
	var_122_bool = var_118_bool;
}


// @pe
void func_1942(int var_139_int, float var_140_float)
{
	if(var_140_float < 200) {
		var_139_int = 1;
		return 0;
	EMIT "GOTO 0x7a2";
	}
	if(var_140_float < 1000) {
		var_139_int = 2;
		return 0;
	}
	var_139_int = 3;
}


// @pe
void func_410(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_2115(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


// @pe
void func_924(bool var_0_bool, object var_50_object)
{
	bool var_51_bool = false;
	if(var_0_bool == null) {
		bool var_53_bool; object var_54_object;
		func_2115(var_53_bool, var_54_object);
		if(var_53_bool != 0)
			var_51_bool = true;
	}
	if(var_51_bool != 0) {
		var_0_bool = var_54_object;
		@StopGroup0();
	}
}


void func_417(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_119_object, bool var_120_bool, float var_142_float)
{
	bool var_122_bool;
	bool var_123_bool;
	func_1292(var_123_bool, var_1_bool);
	if(!var_123_bool) //@nz
		return 2;
	var_1_bool = var_119_object;
	func_1714(var_1_bool);
	var_1_bool->GetPFPosition(var_0_bool); //@t
	@SetTimer(61, 0.5);
	
Label_436:
	@FindPathTo(var_2_cvector, var_0_bool);
	if(var_2_cvector == null) {
		@Trace("Can't find path to noise source");
	} else {
			@FollowPath(var_2_cvector, var_120_bool, var_122_bool);
			if(!var_122_bool) { //@nz
				if(!(var_2_cvector == null)) goto Label_451;
			}

		Label_451:
			} else {
			@KillTimer(61);
			object var_140_object;
			TaskCall(6);
			func_940(var_142_float, var_143_float, var_144_object, var_140_object, var_1_bool);
			TaskReturn();
			var_1_bool = var_142_float;
			@SetTimer(61, 0.5);
			bool var_166_bool;
			func_1292(var_166_bool, var_1_bool);
			if(!var_166_bool) { //@nz
				goto Label_477;
			}
			var_1_bool->GetPFPosition(var_0_bool); //@t
	}
Label_477:
	for(;;) {
		@KillTimer(61);
		return 2;

		}
	var_138_bool = var_2_cvector != null; //@nn
	if(var_138_bool == 1) goto Label_436;
	
}


// @pe
void func_1956(float var_256_float, int var_257_int)
{
	if(var_257_int == 1)
		var_256_float = 30;
	var_256_float = 700;
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


// @pe
void func_1964(float var_262_float, float var_264_float)
{
	if(var_264_float < 10) {
		var_262_float = 10;
		return 0;
	EMIT "GOTO 0x7b8";
	}
	if(var_264_float > 1500) {
		var_262_float = 1500;
		return 0;
	}
	var_264_float = var_262_float;
}


void func_940(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_140_object, object var_141_object)
{
	bool var_147_bool;
	@GetSeeThreshold(var_0_bool);
	@GetSeeFOV(var_1_bool);
	@SetSeeThreshold(var_0_bool / 1.5);
	func_1714(var_141_object);
	int var_148_int = 0;
	
	for(;;) {
		if(var_148_int < 3) {
			@SetSeeFOV(var_1_bool * 1.8);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(var_147_bool);
			@SetSeeFOV(var_1_bool);
			if(!var_147_bool) { //@nz
			} else {
					@Sleep(2, var_147_bool);
					var_161_bool = !var_147_bool; //@nz
					if(var_161_bool == 0) goto Label_979;
			}
		}
		for(;;) {
			func_1052(var_147_bool, var_148_int);
			if(var_147_bool != 0)
				var_2_cvector = null;
			var_140_object = var_2_cvector;

		}

	Label_979:
		func_1714(var_2_cvector);
		var_148_int += 1;
	}
}


void func_1461(bool var_58_bool)
{
	bool var_60_bool;
	@IsLoaded(var_60_bool);
	var_60_bool = var_58_bool;
}


// @pe
void func_1978(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2115(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_1466(object var_177_object)
{
	float var_180_float;
	var_177_object->GetEyesHeight(var_180_float);
	cvector var_181_cvector = [0.0, 0.0, 0.0];
	var_182_float = GetByIndex(var_181_cvector, 1);
	var_180_float = var_182_float;
	SetByIndex(var_181_cvector, 1) = var_182_float;
	@LookAsync(var_177_object, "head", var_181_cvector);
}


// @pe
void func_1985(object var_114_object)
{
	object var_115_object;
	var_114_object = var_115_object;
	TaskCall(2);
	func_349(var_115_object);
	TaskReturn();
}


void func_1477(string var_84_string, int var_85_int, int var_86_int)
{
	bool var_88_bool;
	int var_90_int;
	var_85_int = var_90_int;
	int var_91_int;
	var_86_int = var_91_int;
	bool var_89_bool;
	func_1658(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0)
		@AddItem(var_88_bool, var_84_string, 0);
}


// @pe
void func_1993(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2115(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


// @pe
void func_2000(object var_114_object)
{
	TaskCall(4);
	object var_115_object;
	func_683(var_115_object, var_116_object, var_117_bool, var_115_object);
	TaskReturn();
	@ResetAAS();
}


void func_1488(string var_95_string, int var_96_int, int var_97_int, int var_98_int)
{
	int var_101_int; bool var_102_bool;
	int var_104_int;
	var_96_int = var_104_int;
	int var_105_int;
	var_97_int = var_105_int;
	bool var_103_bool;
	func_1658(var_103_bool, var_104_int, var_105_int);
	if(var_103_bool != 0) {
		@irand(var_101_int, var_98_int);
		@AddItem(var_102_bool, var_95_string, 0, (var_101_int + 1));
	}
}


// @pe
void func_2010(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2171(var_52_object);
	object var_59_object;
	TaskCall(4);
	func_683(var_59_object, var_60_object, var_61_bool, var_59_object);
	TaskReturn();
	@ResetAAS();
}


void func_1503(string var_160_string)
{
	bool var_169_bool; int var_170_int; bool var_171_bool; int var_172_int; bool var_173_bool; float var_174_float; cvector var_175_cvector; cvector var_176_cvector;
	@IsExisting3DSound(var_169_bool, var_160_string);
	if(!var_169_bool) { //@nz
		var_170_int = 0;

		for(;;) {
			@IsExisting3DSound(var_171_bool, (var_160_string + (var_170_int + 1)));
			if(!var_171_bool) { //@nz
				break;
			Label_1523:
				@irand(var_172_int, var_170_int);
				var_160_string += (var_172_int + 1);
	}
			@Is3DSoundLoaded(var_173_bool, var_160_string);
			if(var_173_bool != 0) {
				@GetEyesHeight(var_174_float);
				@GetDirection(var_175_cvector);
				var_176_cvector = var_175_cvector * 50;
				var_187_float = GetByIndex(var_176_cvector, 1);
				SetByIndex(var_176_cvector, 1) = (var_187_float + var_174_float);
				@PlayGlobalSound(var_160_string, var_176_cvector);
			}
		}
		var_170_int += 1;
	}
	var_182_bool = !var_170_int; //@nz
	if(var_182_bool == 0) goto Label_1523;
}


// @pe
void func_2042(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2184();
	bool var_14_bool; object var_15_object;
	var_12_object = var_15_object;
	func_1212(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		bool var_18_bool; object var_19_object;
		var_12_object = var_19_object;
		func_1669(var_18_bool, var_19_object, 0.05);
	}
	object var_56_object;
	var_12_object = var_56_object;
	TaskCall(1);
	func_185(var_56_object);
	TaskReturn();
}


