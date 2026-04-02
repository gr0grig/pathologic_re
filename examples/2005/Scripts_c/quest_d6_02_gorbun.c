maintask task_0
{
	// @pe
	void init(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		func_2027();
	
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
		func_1912(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_70_object;
			var_11_object = var_70_object;
			func_1919(var_70_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1897(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_70_object;
			var_11_object = var_70_object;
			func_1904(var_70_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_61();
		object var_51_object;
		var_49_object = var_51_object;
		func_1929(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_2002(var_14_bool, var_15_object, var_16_object);
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
		func_1996();
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
			func_1672(var_15_object);
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
		func_1912(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_533();
			object var_70_object;
			var_11_object = var_70_object;
			func_1919(var_70_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_533();
		object var_51_object;
		var_49_object = var_51_object;
		func_1929(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_2002(var_14_bool, var_15_object, var_16_object);
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
			bool var_74_bool; object var_75_object;
			func_391(var_74_bool, var_75_object, var_1_bool);
			if(var_74_bool == 0) goto Label_522;
			var_1_bool = var_75_object;
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
		func_1996();
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
		func_1912(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_69_object;
			var_11_object = var_69_object;
			func_1919(var_69_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1897(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_69_object;
			var_11_object = var_69_object;
			func_1904(var_69_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_678();
		object var_50_object;
		var_49_object = var_50_object;
		func_1929(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_2002(var_14_bool, var_15_object, var_16_object);
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
		func_2002(var_14_bool, var_15_object, var_16_object);
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
		func_2002(var_14_bool, var_15_object, var_16_object);
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
		func_1912(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1052(var_10_object, var_13_object);
			object var_69_object;
			var_11_object = var_69_object;
			func_1919(var_69_object);
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
		func_2028(var_15_bool, var_16_object);
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
		func_1929(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_2002(var_14_bool, var_15_object, var_16_object);
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
		func_1996();
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
		func_1912(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1127();
			object var_70_object;
			var_11_object = var_70_object;
			func_1919(var_70_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1897(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1127();
			object var_70_object;
			var_11_object = var_70_object;
			func_1904(var_70_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool, object var_49_object)
		{
		func_1127();
		object var_51_object;
		var_49_object = var_51_object;
		func_1929(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_2002(var_14_bool, var_15_object, var_16_object);
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
		func_1996();
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
	func_1961(var_12_object);
}


void OnUnload(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
{
	object var_11_object;
	func_1544(var_11_object);
	@RemoveActor(var_11_object);
	@Hold();
}


void func_1544(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
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
void func_1560(float var_53_float, float var_54_float, float var_55_float, float var_56_float)
{
	if(var_54_float < var_55_float) {
		var_55_float = var_53_float;
		return 0;
	}
	if(var_54_float > var_56_float) {
		var_56_float = var_53_float;
		return 0;
	}
	var_54_float = var_53_float;
}


void func_1052(bool var_0_bool, bool var_1_bool)
{
	@SetSeeThreshold(var_0_bool);
	@SetSeeFOV(var_1_bool);
	@Stop();
	@StopGroup0();
}


// @pe
void func_2076(void)
{
}


void func_1571(bool var_95_bool, int var_96_int, int var_97_int)
{
	int var_99_int;
	@irand(var_99_int, var_97_int);
	var_95_bool = var_99_int < var_96_int;
}


// @pe
void func_2086(void)
{
	bool var_14_bool;
	func_1621(var_14_bool, "quest_d6_02", "gorbun_death");
}


// @pe
void func_1576(bool var_24_bool, object var_25_object, float var_26_float)
{
	if(!var_25_object) { //@nz
		var_24_bool = false;
		return 0;
	}
	if(var_26_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_26_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_31_float;
		var_26_float = var_31_float;
		func_1611(var_31_float);
		bool var_35_bool; object var_36_object; float var_38_float;
		var_25_object = var_36_object;
		var_26_float = var_38_float;
		func_1229(var_35_bool, var_36_object, "reputation", var_38_float, (float)0, (float)1);
		var_24_bool = true;
		return 0;

	}
	
	var_24_bool = false;
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


void func_1611(float var_31_float)
{
	object var_33_object;
	@CreateFloatVector(var_33_object);
	var_33_object->add(var_31_float);
	@SendWorldWndMessage(16, var_33_object);
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
	func_1649(var_58_int);
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
				func_1642(var_80_string, var_81_int);
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


void func_1621(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1633(object var_128_object)
{
	bool var_130_bool;
	@IsPlayerActor(var_128_object, var_130_bool);
	if(var_130_bool != 0)
		@PlayGlobalMusic("attack");
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


void func_1127(void)
{
	@KillTimer(91);
	@Stop();
	func_1192();
}


void func_1642(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_1649(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_1642(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
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


void func_1666(int var_122_int)
{
	int var_124_int;
	@GetVariable("branch", var_124_int);
	var_124_int = var_122_int;
}


// @pe
void func_1672(object var_15_object)
{
	int var_16_int;
	func_1666(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
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


void func_1685(int var_71_int, int var_72_int)
{
	if(var_71_int > var_72_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_75_int = 0;
	if(var_71_int != var_72_int) {
		@irand(var_75_int, (var_72_int - var_71_int));
	} else if(var_71_int == 0) {
		return 4;
	}
	var_75_int += var_71_int;
	if(var_75_int == 0)
		return 4;
	int var_83_int;
	func_1794(var_83_int, "Money");
	bool var_76_bool;
	@AddItem(var_76_bool, var_83_int, 0, var_75_int);
	
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
					func_1633(var_0_bool);
					@ReportAttack(var_0_bool);
					@GetPosition(var_67_cvector);
					var_0_bool->GetPosition(var_68_cvector); //@t
					var_69_cvector = var_68_cvector - var_67_cvector;
					int var_133_int; float var_134_float;
					var_134_float = sqrt(var_69_cvector | var_69_cvector);
					func_1861(var_133_int, var_134_float);
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
		func_1817(var_201_float, var_202_cvector, var_203_cvector, var_204_cvector);
		var_201_float = var_76_float;
		if(var_76_float < 0) {
			float var_250_float; int var_251_int;
			var_70_int = var_251_int;
			func_1875(var_250_float, var_251_int);
			var_250_float = var_76_float;
		} else {
			float var_256_float; int var_257_int; float var_258_float;
			var_70_int = var_257_int;
			var_76_float = var_258_float;
			func_1883(var_257_int, var_258_float);
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


void func_1716(string var_128_string)
{
	object var_132_object;
	@CreateInvItem(var_132_object);
	var_132_object->SetItemName(var_128_string);
	var_132_object->SetProperty("Organ", 1);
	int var_133_int;
	var_132_object->GetItemID(var_133_int);
	bool var_134_bool;
	@AddItem(var_134_bool, var_132_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_1204(float var_39_float, object var_40_object)
{
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	var_40_object->GetPosition(var_45_cvector);
	var_39_float = (var_45_cvector - var_44_cvector) | (var_45_cvector - var_44_cvector);
}


void func_185(object var_62_object)
{
	bool var_64_bool;
	@IsPlayerActor(var_62_object, var_64_bool);
	if(var_64_bool != 0)
		func_1757();
	func_1733();
	object var_142_object;
	var_62_object = var_142_object;
	func_201(var_142_object);
}


void func_1212(bool var_20_bool, object var_21_object)
{
	bool var_23_bool;
	@IsPlayerActor(var_21_object, var_23_bool);
	var_23_bool = var_20_bool;
}


void func_1217(bool var_43_bool, object var_44_object, string var_45_string)
{
	var_50_bool = IsFuncExist(var_44_object, "HasProperty", 2);
	if(!var_50_bool) { //@nz
		var_43_bool = false;
		return 2;
	}
	bool var_47_bool;
	var_44_object->HasProperty(var_45_string, var_47_bool);
	var_47_bool = var_43_bool;
}


void func_1733(void)
{
	int var_122_int;
	func_1666(var_122_int);
	if(var_122_int != 1) {
	}
	func_1716("liver");
	func_1716("kidney");
	func_1716("heart");
	func_1716("blood");
}


// @pe
void func_201(object var_142_object)
{
	object var_143_object;
	var_142_object = var_143_object;
	func_226(var_143_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1229(bool var_35_bool, object var_36_object, string var_37_string, float var_38_float, float var_39_float, float var_40_float)
{
	object var_44_object;
	var_36_object = var_44_object;
	string var_45_string;
	var_37_string = var_45_string;
	bool var_43_bool;
	func_1217(var_43_bool, var_44_object, var_45_string);
	if(!var_43_bool) //@nz
		var_35_bool = false;
	float var_42_float;
	var_36_object->GetProperty(var_37_string, var_42_float);
	float var_53_float; float var_55_float; float var_56_float;
	var_39_float = var_55_float;
	var_40_float = var_56_float;
	func_1560(var_53_float, (var_42_float + var_38_float), var_55_float, var_56_float);
	var_36_object->SetProperty(var_37_string, var_53_float);
	var_35_bool = true;
}


void func_1757(void)
{
	@ClearSubContainer(0);
	func_1685(600, 1500);
	func_1477("fresh_meat", 1, 6);
	func_1488("rusk", 1, 6, 2);
	func_1477("gamma_pills", 1, 3);
	int var_118_int;
	func_1794(var_118_int, "bomber_mark");
	bool var_69_bool;
	@AddItem(var_69_bool, var_118_int, 0, 1);
}


void func_226(object var_143_object)
{
	cvector var_154_cvector; cvector var_155_cvector; cvector var_156_cvector; cvector var_157_cvector; string var_158_string; object var_159_object; bool var_160_bool; bool var_161_bool; float var_162_float; cvector var_163_cvector;
	if(var_143_object == null) {
		func_317("fdie");
	} else {
		var_143_object->GetPosition(var_154_cvector);
		@GetPosition(var_155_cvector);
		@GetDirection(var_156_cvector);
		var_157_cvector = var_155_cvector - var_154_cvector;
		var_197_float = GetByIndex(var_157_cvector, 0);
		var_198_float = GetByIndex(var_156_cvector, 0);
		var_200_float = GetByIndex(var_157_cvector, 2);
		var_201_float = GetByIndex(var_156_cvector, 2);
		if(((var_197_float * var_198_float) + (var_200_float * var_201_float)) >= 0)
			var_158_string = "fdie";
		else
			var_158_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_143_object = var_159_object;
		var_208_bool = IsFuncExist(var_143_object, "GetScriptProperty", 2);
		if(var_208_bool != 0) {
			var_143_object->HasScriptProperty(var_160_bool, "Owner");
			if(var_160_bool != 0) {
				var_143_object->GetScriptProperty(var_159_object, "Owner");
				if(var_159_object == null)
					var_143_object = var_159_object;
			}
		}
		var_215_bool = IsFuncExist(var_159_object, "@GetEyesHeight", 1);
		if(var_215_bool != 0) {
			var_159_object->GetEyesHeight(var_162_float);
			var_163_cvector = [0.0, 0.0, 0.0];
			var_216_float = GetByIndex(var_163_cvector, 1);
			var_162_float = var_216_float;
			SetByIndex(var_163_cvector, 1) = var_216_float;
			@LookAsync(var_143_object, "head", var_163_cvector);
			var_161_bool = true;
		} else {
			var_161_bool = false;

		}
		string var_218_string;
		var_158_string = var_218_string;
		func_1503(var_218_string);
		@PlayAnimation("all", var_158_string);
		@WaitForAnimEnd();
		if(var_161_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_158_string);
		@RemoveEnvelope();
		var_159_object = null;
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


void func_1794(int var_83_int, string var_84_string)
{
	int var_86_int;
	@GetInvItemByName(var_86_int, var_84_string);
	var_86_int = var_83_int;
}


void func_1799(bool var_19_bool, object var_20_object)
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


void func_1817(float var_201_float, cvector var_202_cvector, cvector var_203_cvector, cvector var_204_cvector)
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
void func_317(string var_165_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_166_string;
	var_165_string = var_166_string;
	func_1503(var_166_string);
	@PlayAnimation("all", var_165_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_165_string);
	@RemoveEnvelope();
}


// @pe
void func_1861(int var_133_int, float var_134_float)
{
	if(var_134_float < 200) {
		var_133_int = 1;
		return 0;
	EMIT "GOTO 0x751";
	}
	if(var_134_float < 1000) {
		var_133_int = 2;
		return 0;
	}
	var_133_int = 3;
}


// @pe
void func_1875(float var_250_float, int var_251_int)
{
	if(var_251_int == 1)
		var_250_float = 30;
	var_250_float = 700;
}


// @pe
void func_1883(float var_256_float, float var_258_float)
{
	if(var_258_float < 10) {
		var_256_float = 10;
		return 0;
	EMIT "GOTO 0x767";
	}
	if(var_258_float > 1500) {
		var_256_float = 1500;
		return 0;
	}
	var_258_float = var_256_float;
}


// @pe
void func_349(object var_71_object)
{
	object var_75_object;
	func_417(var_72_cvector, var_73_object, var_74_object, var_75_object, var_75_object, false);
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
void func_1897(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2028(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


// @pe
void func_1904(object var_70_object)
{
	object var_71_object;
	var_70_object = var_71_object;
	TaskCall(2);
	func_349(var_71_object);
	TaskReturn();
}


// @pe
void func_1912(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2028(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_890(bool var_0_bool, object var_124_object)
{
	@Sleep(5);
	var_124_object = var_0_bool;
}


// @pe
void func_1919(object var_70_object)
{
	TaskCall(4);
	object var_71_object;
	func_683(var_71_object, var_72_object, var_73_bool, var_71_object);
	TaskReturn();
	@ResetAAS();
}


void func_391(bool var_74_bool, object var_75_object, object var_76_object)
{
	bool var_78_bool;
	@IsPlayerActor(var_75_object, var_78_bool);
	if(var_78_bool != 0) {
		var_74_bool = false;
		return 2;
	}
	bool var_80_bool; object var_81_object;
	func_2028(var_80_bool, var_81_object);
	if(!var_80_bool) { //@nz
		var_74_bool = false;
		return 2;
	}
	@IsPlayerActor(var_81_object, var_78_bool);
	var_78_bool = var_74_bool;
}


// @pe
void func_1929(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2076();
	object var_53_object;
	TaskCall(4);
	func_683(var_53_object, var_54_object, var_55_bool, var_53_object);
	TaskReturn();
	@ResetAAS();
}


// @pe
void func_410(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_2028(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


// @pe
void func_924(bool var_0_bool, object var_50_object)
{
	bool var_51_bool = false;
	if(var_0_bool == null) {
		bool var_53_bool; object var_54_object;
		func_2028(var_53_bool, var_54_object);
		if(var_53_bool != 0)
			var_51_bool = true;
	}
	if(var_51_bool != 0) {
		var_0_bool = var_54_object;
		@StopGroup0();
	}
}


void func_417(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_75_object, bool var_76_bool, float var_98_float)
{
	bool var_78_bool;
	bool var_79_bool;
	func_1292(var_79_bool, var_1_bool);
	if(!var_79_bool) //@nz
		return 2;
	var_1_bool = var_75_object;
	func_1633(var_1_bool);
	var_1_bool->GetPFPosition(var_0_bool); //@t
	@SetTimer(61, 0.5);
	
Label_436:
	@FindPathTo(var_2_cvector, var_0_bool);
	if(var_2_cvector == null) {
		@Trace("Can't find path to noise source");
	} else {
			@FollowPath(var_2_cvector, var_76_bool, var_78_bool);
			if(!var_78_bool) { //@nz
				if(!(var_2_cvector == null)) goto Label_451;
			}

		Label_451:
			} else {
			@KillTimer(61);
			object var_96_object;
			TaskCall(6);
			func_940(var_98_float, var_99_float, var_100_object, var_96_object, var_1_bool);
			TaskReturn();
			var_1_bool = var_98_float;
			@SetTimer(61, 0.5);
			bool var_122_bool;
			func_1292(var_122_bool, var_1_bool);
			if(!var_122_bool) { //@nz
				goto Label_477;
			}
			var_1_bool->GetPFPosition(var_0_bool); //@t
	}
Label_477:
	for(;;) {
		@KillTimer(61);
		return 2;

		}
	var_94_bool = var_2_cvector != null; //@nn
	if(var_94_bool == 1) goto Label_436;
	
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
void func_1961(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2086();
	bool var_20_bool; object var_21_object;
	var_12_object = var_21_object;
	func_1212(var_20_bool, var_21_object);
	if(var_20_bool != 0) {
		bool var_24_bool; object var_25_object;
		var_12_object = var_25_object;
		func_1576(var_24_bool, var_25_object, 0.05);
	}
	object var_62_object;
	var_12_object = var_62_object;
	TaskCall(1);
	func_185(var_62_object);
	TaskReturn();
}


void func_940(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_96_object, object var_97_object)
{
	bool var_103_bool;
	@GetSeeThreshold(var_0_bool);
	@GetSeeFOV(var_1_bool);
	@SetSeeThreshold(var_0_bool / 1.5);
	func_1633(var_97_object);
	int var_104_int = 0;
	
	for(;;) {
		if(var_104_int < 3) {
			@SetSeeFOV(var_1_bool * 1.8);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(var_103_bool);
			@SetSeeFOV(var_1_bool);
			if(!var_103_bool) { //@nz
			} else {
					@Sleep(2, var_103_bool);
					var_117_bool = !var_103_bool; //@nz
					if(var_117_bool == 0) goto Label_979;
			}
		}
		for(;;) {
			func_1052(var_103_bool, var_104_int);
			if(var_103_bool != 0)
				var_2_cvector = null;
			var_96_object = var_2_cvector;

		}

	Label_979:
		func_1633(var_2_cvector);
		var_104_int += 1;
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


void func_1477(string var_90_string, int var_91_int, int var_92_int)
{
	bool var_94_bool;
	int var_96_int;
	var_91_int = var_96_int;
	int var_97_int;
	var_92_int = var_97_int;
	bool var_95_bool;
	func_1571(var_95_bool, var_96_int, var_97_int);
	if(var_95_bool != 0)
		@AddItem(var_94_bool, var_90_string, 0);
}


void func_1488(string var_101_string, int var_102_int, int var_103_int, int var_104_int)
{
	int var_107_int; bool var_108_bool;
	int var_110_int;
	var_102_int = var_110_int;
	int var_111_int;
	var_103_int = var_111_int;
	bool var_109_bool;
	func_1571(var_109_bool, var_110_int, var_111_int);
	if(var_109_bool != 0) {
		@irand(var_107_int, var_104_int);
		@AddItem(var_108_bool, var_101_string, 0, (var_107_int + 1));
	}
}


void func_2002(bool var_14_bool, object var_15_object, object var_16_object)
{
	bool var_18_bool;
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1799(var_19_bool, var_20_object);
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


void func_1503(string var_166_string)
{
	bool var_175_bool; int var_176_int; bool var_177_bool; int var_178_int; bool var_179_bool; float var_180_float; cvector var_181_cvector; cvector var_182_cvector;
	@IsExisting3DSound(var_175_bool, var_166_string);
	if(!var_175_bool) { //@nz
		var_176_int = 0;

		for(;;) {
			@IsExisting3DSound(var_177_bool, (var_166_string + (var_176_int + 1)));
			if(!var_177_bool) { //@nz
				break;
			Label_1523:
				@irand(var_178_int, var_176_int);
				var_166_string += (var_178_int + 1);
	}
			@Is3DSoundLoaded(var_179_bool, var_166_string);
			if(var_179_bool != 0) {
				@GetEyesHeight(var_180_float);
				@GetDirection(var_181_cvector);
				var_182_cvector = var_181_cvector * 50;
				var_193_float = GetByIndex(var_182_cvector, 1);
				SetByIndex(var_182_cvector, 1) = (var_193_float + var_180_float);
				@PlayGlobalSound(var_166_string, var_182_cvector);
			}
		}
		var_176_int += 1;
	}
	var_188_bool = !var_176_int; //@nz
	if(var_188_bool == 0) goto Label_1523;
}


void func_2027(void)
{
}


void func_2028(bool var_14_bool, object var_15_object)
{
	string var_17_string;
	object var_19_object;
	var_15_object = var_19_object;
	bool var_18_bool;
	func_1292(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	var_15_object = var_54_object;
	func_1217(var_53_bool, var_54_object, "health");
	if(!var_53_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	bool var_57_bool; object var_58_object;
	func_1217(var_57_bool, var_58_object, "class");
	if(var_57_bool != 0) {
		var_58_object->GetProperty("class", var_17_string);
		bool var_61_bool = true;
		bool var_62_bool = true;
		var_64_bool = var_17_string == "rat";
		if(var_64_bool != 1) {
			var_66_bool = var_17_string == "rat_big";
			if(var_66_bool != 1)
				var_62_bool = false;
		}
		if(var_62_bool != 1) {
			var_68_bool = var_17_string == "bomber";
			if(var_68_bool != 1)
				var_61_bool = false;
		}
		if(var_61_bool != 0) {
			var_14_bool = false;
			return 2;
		}
	}
	var_14_bool = true;
}


