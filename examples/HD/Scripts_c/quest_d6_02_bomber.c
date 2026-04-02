maintask task_0
{
	// @pe
	void init(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		func_2018();
	
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
		func_1903(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_70_object;
			var_11_object = var_70_object;
			func_1910(var_70_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1888(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_70_object;
			var_11_object = var_70_object;
			func_1895(var_70_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_61();
		object var_51_object;
		var_49_object = var_51_object;
		func_1920(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, bool var_4_bool, cvector var_5_cvector, object var_6_object, object var_7_object, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1993(var_14_bool, var_15_object, var_16_object);
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
		func_1987();
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
				func_1073();
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
			func_1663(var_15_object);
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
		func_1903(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_533();
			object var_70_object;
			var_11_object = var_70_object;
			func_1910(var_70_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_533();
		object var_51_object;
		var_49_object = var_51_object;
		func_1920(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1993(var_14_bool, var_15_object, var_16_object);
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
		func_1987();
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
		func_1903(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_69_object;
			var_11_object = var_69_object;
			func_1910(var_69_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1888(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_678();
			object var_69_object;
			var_11_object = var_69_object;
			func_1895(var_69_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object, object var_49_object)
		{
		func_678();
		object var_50_object;
		var_49_object = var_50_object;
		func_1920(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1993(var_14_bool, var_15_object, var_16_object);
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
		func_1993(var_14_bool, var_15_object, var_16_object);
	}

}


task task_5
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_12_object;
		func_927(var_12_object, var_12_object);
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
		func_927(var_50_object, var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, bool var_10_bool, float var_11_float, float var_12_float, object var_13_object)
	{
		object var_15_object;
		var_11_float = var_15_object;
		object var_16_object;
		var_12_float = var_16_object;
		bool var_14_bool;
		func_1993(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_float = var_49_object;
			func_909();
		}
	}

}


task task_6
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_1903(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1055(var_10_object, var_13_object);
			object var_69_object;
			var_11_object = var_69_object;
			func_1910(var_69_object);
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
		func_2019(var_15_bool, var_16_object);
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
		func_1055(var_13_bool, var_49_object);
		object var_50_object;
		var_49_object = var_50_object;
		func_1920(var_50_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_1993(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_object = var_49_object;
			func_1034();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		func_1055(var_10_object, var_11_object);
		object var_12_object;
		var_11_object = var_12_object;
		func_1987();
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
		func_1903(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1130();
			object var_70_object;
			var_11_object = var_70_object;
			func_1910(var_70_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1888(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1130();
			object var_70_object;
			var_11_object = var_70_object;
			func_1895(var_70_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool, object var_49_object)
		{
		func_1130();
		object var_51_object;
		var_49_object = var_51_object;
		func_1920(var_51_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool)
	{
		object var_15_object;
		var_11_object = var_15_object;
		object var_16_object;
		var_12_object = var_16_object;
		bool var_14_bool;
		func_1993(var_14_bool, var_15_object, var_16_object);
		if(var_14_bool != 0) {
			object var_49_object;
			var_11_object = var_49_object;
			func_1109();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		func_1130();
		object var_13_object;
		var_11_object = var_13_object;
		func_1987();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, int var_11_int)
	{
		if(var_11_int == 91)
			func_1130();
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
	func_1382(var_15_object, var_16_int, var_17_float);
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
	func_1450(var_19_float, var_20_cvector, var_21_cvector);
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
	func_1952(var_12_object);
}


void OnUnload(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
{
	object var_11_object;
	func_1547(var_11_object);
	@RemoveActor(var_11_object);
	@Hold();
}


void func_1547(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_1553(cvector var_43_cvector, cvector var_44_cvector)
{
	float var_52_float = sqrt(var_44_cvector | var_44_cvector);
	if(var_52_float < 0.000001)
		var_43_cvector = [0.0, 0.0, 0.0];
	var_43_cvector = var_44_cvector / var_52_float;
}


// @pe
void func_2067(void)
{
}


void func_533(void)
{
	@KillTimer(61);
	@Stop();
}


// @pe
void func_1563(float var_47_float, float var_48_float, float var_49_float, float var_50_float)
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


// @pe
void func_2077(void)
{
}


void func_1055(bool var_0_bool, bool var_1_bool)
{
	@SetSeeThreshold(var_0_bool);
	@SetSeeFOV(var_1_bool);
	@Stop();
	@StopGroup0();
}


void func_1574(bool var_89_bool, int var_90_int, int var_91_int)
{
	int var_93_int;
	@irand(var_93_int, var_91_int);
	var_89_bool = var_93_int < var_90_int;
}


// @pe
void func_1579(bool var_18_bool, object var_19_object, float var_20_float)
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
		func_1614(var_25_float);
		bool var_29_bool; object var_30_object; float var_32_float;
		var_19_object = var_30_object;
		var_20_float = var_32_float;
		func_1232(var_29_bool, var_30_object, "reputation", var_32_float, (float)0, (float)1);
		var_18_bool = true;
		return 0;

	}
	
	var_18_bool = false;
}


void func_1073(void)
{
	@SetTimer(91, 20);
	func_1174();
}


void func_61(void)
{
	@KillTimer(90);
	func_170(var_12_float, var_13_float);
}


void func_1614(float var_25_float)
{
	object var_27_object;
	@CreateFloatVector(var_27_object);
	var_27_object->add(var_25_float);
	@SendWorldWndMessage(16, var_27_object);
}
EMIT "Stack[-1] = 0";


void func_597(void)
{
	int var_49_int; int var_50_int; bool var_51_bool; float var_52_float; bool var_53_bool;
	@WaitForAnimEnd();
	bool var_54_bool;
	func_1464(var_54_bool);
	if(!var_54_bool) //@nz
		return 14;
	int var_58_int;
	func_1640(var_58_int);
	int var_47_int;
	var_58_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_48_int < 5) {
			bool var_74_bool;
			func_1464(var_74_bool);
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
				func_1633(var_80_string, var_81_int);
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


void func_1624(object var_128_object)
{
	bool var_130_bool;
	@IsPlayerActor(var_128_object, var_130_bool);
	if(var_130_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_1633(string var_64_string, int var_65_int)
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


void func_1640(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_1633(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


void func_1130(void)
{
	@KillTimer(91);
	@Stop();
	func_1195();
}


void func_1657(int var_116_int)
{
	int var_118_int;
	@GetVariable("branch", var_118_int);
	var_118_int = var_116_int;
}


// @pe
void func_1663(object var_15_object)
{
	int var_16_int;
	func_1657(var_16_int);
	if(var_16_int == 1)
		@WorkWithCorpse(var_15_object);
	else
		@Barter(var_15_object);
	
}


void func_1156(bool var_30_bool)
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


void func_1676(int var_65_int, int var_66_int)
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
	func_1785(var_77_int, "Money");
	bool var_70_bool;
	@AddItem(var_70_bool, var_77_int, 0, var_69_int);
	
}


void func_1174(void)
{
	float var_26_float; float var_27_float; bool var_28_bool;
	
	for(;;) {
		@RandVec2D(var_26_float, var_27_float);
		@Rotate(var_26_float, var_27_float, var_28_bool);
		if(!var_28_bool) { //@nz
		} else {
				bool var_30_bool;
				func_1156(var_30_bool);
				if(var_30_bool == 0) goto Label_1187;
		}
	Label_1194:
		for(;;) {

		}

	Label_1187:
		@Sleep(5, var_28_bool);
		if(!var_28_bool) { //@nz
			goto Label_1194;
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


void func_170(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_1195(void)
{
	@Stop();
	@StopGroup0();
}


void func_1707(string var_122_string)
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


void func_683(bool var_0_bool, bool var_1_bool, object var_53_object, object var_125_object)
{
	cvector var_67_cvector; cvector var_68_cvector; cvector var_69_cvector; int var_70_int; object var_71_object; cvector var_72_cvector; bool var_73_bool; object var_74_object; float var_75_float; float var_76_float; int var_77_int;
	@CanSee(var_1_bool, var_53_object);
	bool var_78_bool; object var_79_object;
	var_53_object = var_79_object;
	func_1329(var_78_bool, var_79_object);
	bool var_92_bool; object var_93_object;
	var_53_object = var_93_object;
	func_1295(var_92_bool, var_93_object);
	if(!var_92_bool) //@nz
		return 22;
	@Face(var_53_object);
	
	for(;;) {
		bool var_121_bool;
		func_1295(var_121_bool, var_53_object);
		if(var_121_bool != 0) {
			if(!var_1_bool) { //@nz
				@StopAsync();
				object var_124_object;
				TaskCall(5);
				func_893(var_125_object, var_124_object);
				TaskReturn();
				var_0_bool = var_125_object;
				if(var_0_bool == null) {
				} else {
						@CanSee(var_1_bool, var_0_bool);
						@Face(var_0_bool);
			}
					func_1624(var_0_bool);
					@ReportAttack(var_0_bool);
					@GetPosition(var_67_cvector);
					var_0_bool->GetPosition(var_68_cvector); //@t
					var_69_cvector = var_68_cvector - var_67_cvector;
					int var_133_int; float var_134_float;
					var_134_float = sqrt(var_69_cvector | var_69_cvector);
					func_1852(var_133_int, var_134_float);
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
		func_1547(var_153_object);
		var_74_object->SetScriptProperty("Owner", var_153_object);
		if(var_70_int == 1) {
			var_74_object->SetScriptProperty("StartVelocity", [0.0, -500.0, 0.0]);
		} else {
		var_188_float = GetByIndex(var_72_cvector, 1);
		var_189_float = GetByIndex(var_72_cvector, 1);
		var_192_float = GetByIndex(var_69_cvector, 0);
		var_193_float = GetByIndex(var_69_cvector, 0);
		var_195_float = GetByIndex(var_69_cvector, 2);
		var_196_float = GetByIndex(var_69_cvector, 2);
		var_75_float = sqrt((1 - (var_188_float * var_189_float)) / ((var_192_float * var_193_float) + (var_195_float * var_196_float)));
		var_200_float = GetByIndex(var_72_cvector, 0);
		var_201_float = GetByIndex(var_69_cvector, 0);
		SetByIndex(var_72_cvector, 0) = (var_201_float * var_75_float);
		var_202_float = GetByIndex(var_72_cvector, 2);
		var_203_float = GetByIndex(var_69_cvector, 2);
		SetByIndex(var_72_cvector, 2) = (var_203_float * var_75_float);
		var_0_bool->GetPosition(var_68_cvector); //@t
		float var_204_float; cvector var_205_cvector; cvector var_206_cvector; cvector var_207_cvector;
		var_67_cvector = var_205_cvector;
		var_68_cvector = var_206_cvector;
		func_1808(var_204_float, var_205_cvector, var_206_cvector, var_207_cvector);
		var_204_float = var_76_float;
		if(var_76_float < 0) {
			float var_253_float; int var_254_int;
			var_70_int = var_254_int;
			func_1866(var_253_float, var_254_int);
			var_253_float = var_76_float;
		} else {
			float var_259_float; int var_260_int; float var_261_float;
			var_70_int = var_260_int;
			var_76_float = var_261_float;
			func_1874(var_260_int, var_261_float);
			var_259_float = var_76_float;
		}
		var_74_object->SetScriptProperty("StartVelocity", (var_207_cvector * var_76_float));
		}
		var_74_object->SetScriptProperty("DamageAmount", 0.8);
		var_74_object->SetScriptProperty("DamageType", 2);
		@WaitForAnimEnd();
		if(var_70_int == 1) {
			@irand(var_77_int, 2);
			@PlayGlobalSound(("scream" + (var_77_int + 1)), [0.0, 150.0, 0.0], 1, 500);
			func_1469(var_0_bool);
			@PlayAnimation("all", ("scream" + (var_77_int + 1)));
			@WaitForAnimEnd();
			@UnlookAsync("head");
		}
		var_74_object = null;
		var_71_object = null;
	}
	
}


void func_1200(cvector var_45_cvector, object var_46_object)
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


void func_1207(float var_39_float, object var_40_object)
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
		func_1748();
	func_1724();
	object var_136_object;
	var_56_object = var_136_object;
	func_201(var_136_object);
}


void func_1724(void)
{
	int var_116_int;
	func_1657(var_116_int);
	if(var_116_int != 1) {
	}
	func_1707("liver");
	func_1707("kidney");
	func_1707("heart");
	func_1707("blood");
}


void func_1215(bool var_14_bool, object var_15_object)
{
	bool var_17_bool;
	@IsPlayerActor(var_15_object, var_17_bool);
	var_17_bool = var_14_bool;
}


void func_1220(bool var_37_bool, object var_38_object, string var_39_string)
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


void func_1232(bool var_29_bool, object var_30_object, string var_31_string, float var_32_float, float var_33_float, float var_34_float)
{
	object var_38_object;
	var_30_object = var_38_object;
	string var_39_string;
	var_31_string = var_39_string;
	bool var_37_bool;
	func_1220(var_37_bool, var_38_object, var_39_string);
	if(!var_37_bool) //@nz
		var_29_bool = false;
	float var_36_float;
	var_30_object->GetProperty(var_31_string, var_36_float);
	float var_47_float; float var_49_float; float var_50_float;
	var_33_float = var_49_float;
	var_34_float = var_50_float;
	func_1563(var_47_float, (var_36_float + var_32_float), var_49_float, var_50_float);
	var_30_object->SetProperty(var_31_string, var_47_float);
	var_29_bool = true;
}


void func_1748(void)
{
	@ClearSubContainer(0);
	func_1676(600, 1500);
	func_1480("fresh_meat", 1, 6);
	func_1491("rusk", 1, 6, 2);
	func_1480("gamma_pills", 1, 3);
	int var_112_int;
	func_1785(var_112_int, "bomber_mark");
	bool var_63_bool;
	@AddItem(var_63_bool, var_112_int, 0, 1);
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
		func_1506(var_212_string);
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


void func_1254(bool var_107_bool, object var_108_object)
{
	bool var_110_bool;
	var_108_object->IsDead(var_110_bool);
	var_110_bool = var_107_bool;
}


void func_1259(bool var_96_bool, object var_97_object)
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
		func_1254(var_107_bool, var_108_object);
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


void func_1785(int var_77_int, string var_78_string)
{
	int var_80_int;
	@GetInvItemByName(var_80_int, var_78_string);
	var_80_int = var_77_int;
}


void func_1790(bool var_19_bool, object var_20_object)
{
	bool var_25_bool; object var_26_object;
	func_1220(var_25_bool, var_26_object, "class");
	if(!var_25_bool) //@nz
		var_19_bool = false;
	string var_23_string;
	@GetProperty("class", var_23_string);
	string var_24_string;
	var_26_object->GetProperty("class", var_24_string);
	var_19_bool = var_24_string == var_23_string;
}


void func_1295(bool var_92_bool, object var_93_object)
{
	object var_97_object;
	var_93_object = var_97_object;
	bool var_96_bool;
	func_1259(var_96_bool, var_97_object);
	if(!var_96_bool) { //@nz
		var_92_bool = false;
		return 2;
	}
	bool var_114_bool; object var_115_object;
	func_1220(var_114_bool, var_115_object, "noaccess");
	if(!var_114_bool) { //@nz
		var_92_bool = true;
		return 2;
	}
	int var_95_int;
	var_115_object->GetProperty("noaccess", var_95_int);
	var_92_bool = var_95_int == 0;
}


void func_1808(float var_204_float, cvector var_205_cvector, cvector var_206_cvector, cvector var_207_cvector)
{
	var_218_float = GetByIndex(var_207_cvector, 0);
	var_219_float = GetByIndex(var_207_cvector, 0);
	var_221_float = GetByIndex(var_207_cvector, 2);
	var_222_float = GetByIndex(var_207_cvector, 2);
	float var_213_float = sqrt((var_218_float * var_219_float) + (var_221_float * var_222_float));
	var_225_float = GetByIndex(var_207_cvector, 1);
	var_226_float = GetByIndex(var_205_cvector, 0);
	var_227_float = GetByIndex(var_206_cvector, 0);
	var_229_float = GetByIndex(var_205_cvector, 0);
	var_230_float = GetByIndex(var_206_cvector, 0);
	var_233_float = GetByIndex(var_205_cvector, 2);
	var_234_float = GetByIndex(var_206_cvector, 2);
	var_236_float = GetByIndex(var_205_cvector, 2);
	var_237_float = GetByIndex(var_206_cvector, 2);
	float var_215_float = sqrt(((var_226_float - var_227_float) * (var_229_float - var_230_float)) + ((var_233_float - var_234_float) * (var_236_float - var_237_float)));
	var_243_float = GetByIndex(var_206_cvector, 1);
	var_244_float = GetByIndex(var_205_cvector, 1);
	float var_216_float = 500.0 / ((var_215_float * (var_225_float / var_213_float)) - (var_243_float - var_244_float));
	if(var_216_float < 0)
		var_204_float = -1;
	var_250_float = sqrt(var_216_float);
	float var_217_float = (var_215_float / var_213_float) * var_250_float;
	var_217_float = var_204_float;
}


void func_1319(bool var_82_bool, cvector var_83_cvector)
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


void func_1329(bool var_78_bool, object var_79_object)
{
	cvector var_81_cvector;
	var_79_object->GetPosition(var_81_cvector);
	bool var_82_bool; cvector var_83_cvector;
	var_81_cvector = var_83_cvector;
	func_1319(var_82_bool, var_83_cvector);
	var_82_bool = var_78_bool;
}


void func_1338(object var_28_object)
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
void func_1852(int var_133_int, float var_134_float)
{
	if(var_134_float < 200) {
		var_133_int = 1;
		return 0;
	EMIT "GOTO 0x748";
	}
	if(var_134_float < 1000) {
		var_133_int = 2;
		return 0;
	}
	var_133_int = 3;
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
	func_1506(var_160_string);
	@PlayAnimation("all", var_159_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_159_string);
	@RemoveEnvelope();
}


// @pe
void func_1866(float var_253_float, int var_254_int)
{
	if(var_254_int == 1)
		var_253_float = 30;
	var_253_float = 700;
}


// @pe
void func_1874(float var_259_float, float var_261_float)
{
	if(var_261_float < 10) {
		var_259_float = 10;
		return 0;
	EMIT "GOTO 0x75e";
	}
	if(var_261_float > 1500) {
		var_259_float = 1500;
		return 0;
	}
	var_261_float = var_259_float;
}


// @pe
void func_349(object var_71_object)
{
	object var_75_object;
	func_417(var_72_cvector, var_73_object, var_74_object, var_75_object, var_75_object, false);
}


// @pe
void func_1888(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2019(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_1382(object var_15_object, int var_16_int, float var_17_float)
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
		func_1200(var_45_cvector, var_46_object);
		var_45_cvector = var_44_cvector;
		func_1553(var_43_cvector, var_44_cvector);
		var_43_cvector = var_27_cvector;
		@CreateVectorVector(var_28_object);
		var_29_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_29_int), var_30_bool, var_31_cvector, var_32_cvector);
			if(!var_30_bool) { //@nz
				break;
			Label_1444:
				var_28_object = null;
	}
			object var_105_object;
			var_15_object = var_105_object;
			func_1338(var_105_object);
		}
		if((var_32_cvector | var_27_cvector) >= 0.70710677)
			var_28_object->add(var_31_cvector);
		var_29_int += 1;
	}
	int var_33_int;
	var_28_object->size(var_33_int);
	if(var_33_int == 0) goto Label_1444;
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
	func_1450(var_62_float, var_63_cvector, var_64_cvector);
}


// @pe
void func_1895(object var_70_object)
{
	object var_71_object;
	var_70_object = var_71_object;
	TaskCall(2);
	func_349(var_71_object);
	TaskReturn();
}


// @pe
void func_1903(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_2019(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


// @pe
void func_1910(object var_70_object)
{
	TaskCall(4);
	object var_71_object;
	func_683(var_71_object, var_72_object, var_73_bool, var_71_object);
	TaskReturn();
	@ResetAAS();
}


void func_893(bool var_0_bool, object var_124_object)
{
	@Sleep(5);
	var_124_object = var_0_bool;
}


// @pe
void func_1920(object var_51_object)
{
	object var_52_object;
	var_51_object = var_52_object;
	func_2067();
	object var_53_object;
	TaskCall(4);
	func_683(var_53_object, var_54_object, var_55_bool, var_53_object);
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
	func_2019(var_80_bool, var_81_object);
	if(!var_80_bool) { //@nz
		var_74_bool = false;
		return 2;
	}
	@IsPlayerActor(var_81_object, var_78_bool);
	var_78_bool = var_74_bool;
}


// @pe
void func_410(bool var_14_bool, object var_15_object)
{
	object var_17_object;
	var_15_object = var_17_object;
	bool var_16_bool;
	func_2019(var_16_bool, var_17_object);
	var_16_bool = var_14_bool;
}


// @pe
void func_927(bool var_0_bool, object var_50_object)
{
	bool var_51_bool = false;
	if(var_0_bool == null) {
		bool var_53_bool; object var_54_object;
		func_2019(var_53_bool, var_54_object);
		if(var_53_bool != 0)
			var_51_bool = true;
	}
	if(var_51_bool != 0) {
		var_0_bool = var_54_object;
		@StopGroup0();
	}
}


// @pe
void func_1952(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_2077();
	bool var_14_bool; object var_15_object;
	var_12_object = var_15_object;
	func_1215(var_14_bool, var_15_object);
	if(var_14_bool != 0) {
		bool var_18_bool; object var_19_object;
		var_12_object = var_19_object;
		func_1579(var_18_bool, var_19_object, 0.05);
	}
	object var_56_object;
	var_12_object = var_56_object;
	TaskCall(1);
	func_185(var_56_object);
	TaskReturn();
}


void func_417(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_75_object, bool var_76_bool, float var_98_float)
{
	bool var_78_bool;
	bool var_79_bool;
	func_1295(var_79_bool, var_1_bool);
	if(!var_79_bool) //@nz
		return 2;
	var_1_bool = var_75_object;
	func_1624(var_1_bool);
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
			func_943(var_98_float, var_99_float, var_100_object, var_96_object, var_1_bool);
			TaskReturn();
			var_1_bool = var_98_float;
			@SetTimer(61, 0.5);
			bool var_122_bool;
			func_1295(var_122_bool, var_1_bool);
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


void func_1450(object var_17_object, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_24_object;
	@GetScene(var_24_object);
	object var_25_object;
	@AddActorByType(var_25_object, "scripted", var_24_object, var_20_cvector, var_21_cvector, "blood_dir.xml");
	object var_28_object;
	var_17_object = var_28_object;
	func_1338(var_28_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_943(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_96_object, object var_97_object)
{
	bool var_103_bool;
	@GetSeeThreshold(var_0_bool);
	@GetSeeFOV(var_1_bool);
	@SetSeeThreshold(var_0_bool / 1.5);
	func_1624(var_97_object);
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
					if(var_117_bool == 0) goto Label_982;
			}
		}
		for(;;) {
			func_1055(var_103_bool, var_104_int);
			if(var_103_bool != 0)
				var_2_cvector = null;
			var_96_object = var_2_cvector;

		}

	Label_982:
		func_1624(var_2_cvector);
		var_104_int += 1;
	}
}


void func_1464(bool var_54_bool)
{
	bool var_56_bool;
	@IsLoaded(var_56_bool);
	var_56_bool = var_54_bool;
}


void func_1469(object var_174_object)
{
	float var_177_float;
	var_174_object->GetEyesHeight(var_177_float);
	cvector var_178_cvector = [0.0, 0.0, 0.0];
	var_179_float = GetByIndex(var_178_cvector, 1);
	var_177_float = var_179_float;
	SetByIndex(var_178_cvector, 1) = var_179_float;
	@LookAsync(var_174_object, "head", var_178_cvector);
}


void func_1480(string var_84_string, int var_85_int, int var_86_int)
{
	bool var_88_bool;
	int var_90_int;
	var_85_int = var_90_int;
	int var_91_int;
	var_86_int = var_91_int;
	bool var_89_bool;
	func_1574(var_89_bool, var_90_int, var_91_int);
	if(var_89_bool != 0)
		@AddItem(var_88_bool, var_84_string, 0);
}


void func_1993(bool var_14_bool, object var_15_object, object var_16_object)
{
	bool var_18_bool;
	object var_20_object;
	var_16_object = var_20_object;
	bool var_19_bool;
	func_1790(var_19_bool, var_20_object);
	if(var_19_bool != 0) {
		@CanSee(var_18_bool, var_15_object);
		bool var_37_bool = true;
		if(var_18_bool != 1) {
			float var_39_float; object var_40_object;
			var_15_object = var_40_object;
			func_1207(var_39_float, var_40_object);
			var_48_bool = var_39_float <= 490000.0;
			if(var_48_bool != 1)
				var_37_bool = false;
		}
		if(var_37_bool != 0)
			var_14_bool = true;
	}
	var_14_bool = false;
}


void func_1491(string var_95_string, int var_96_int, int var_97_int, int var_98_int)
{
	int var_101_int; bool var_102_bool;
	int var_104_int;
	var_96_int = var_104_int;
	int var_105_int;
	var_97_int = var_105_int;
	bool var_103_bool;
	func_1574(var_103_bool, var_104_int, var_105_int);
	if(var_103_bool != 0) {
		@irand(var_101_int, var_98_int);
		@AddItem(var_102_bool, var_95_string, 0, (var_101_int + 1));
	}
}


void func_2018(void)
{
}


void func_1506(string var_160_string)
{
	bool var_169_bool; int var_170_int; bool var_171_bool; int var_172_int; bool var_173_bool; float var_174_float; cvector var_175_cvector; cvector var_176_cvector;
	@IsExisting3DSound(var_169_bool, var_160_string);
	if(!var_169_bool) { //@nz
		var_170_int = 0;

		for(;;) {
			@IsExisting3DSound(var_171_bool, (var_160_string + (var_170_int + 1)));
			if(!var_171_bool) { //@nz
				break;
			Label_1526:
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
	if(var_182_bool == 0) goto Label_1526;
}


void func_2019(bool var_14_bool, object var_15_object)
{
	string var_17_string;
	object var_19_object;
	var_15_object = var_19_object;
	bool var_18_bool;
	func_1295(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	var_15_object = var_54_object;
	func_1220(var_53_bool, var_54_object, "health");
	if(!var_53_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	bool var_57_bool; object var_58_object;
	func_1220(var_57_bool, var_58_object, "class");
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


