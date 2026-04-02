// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		func_1592();
	
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
		func_1485(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_68_object;
			var_11_object = var_68_object;
			func_1492(var_68_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1470(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_68_object;
			var_11_object = var_68_object;
			func_1477(var_68_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object, object var_45_object)
		{
		func_61();
		object var_47_object;
		var_45_object = var_47_object;
		func_1502(var_47_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1555(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_45_object;
			var_11_float = var_45_object;
			func_40();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		func_61();
		object var_13_object;
		var_11_object = var_13_object;
		func_1549();
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
				func_981();
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
		if(!var_13_bool) //@nz
			@WorkWithCorpse(var_11_object);
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
		func_1485(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_485();
			object var_68_object;
			var_11_object = var_68_object;
			func_1492(var_68_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object, object var_45_object)
		{
		func_485();
		object var_47_object;
		var_45_object = var_47_object;
		func_1502(var_47_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1555(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_45_object;
			var_11_float = var_45_object;
			func_340();
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, int var_5_int, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		if(var_11_object == 61) {
			bool var_14_bool;
			func_380(var_14_bool, var_1_bool);
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
		if(var_11_object == var_1_bool) {
			bool var_13_bool;
			func_380(var_13_bool, var_1_bool);
			if(!var_13_bool) { //@nz
				func_485();
				var_2_cvector = null;
				return 0;
			}
		} else {
			bool var_71_bool; object var_72_object;
			func_361(var_71_bool, var_72_object, var_1_bool);
			if(var_71_bool == 0) goto Label_474;
			var_1_bool = var_72_object;
		}
	Label_474:
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
		func_485();
		object var_13_object;
		var_11_object = var_13_object;
		func_1549();
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
		func_1485(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_618();
			object var_67_object;
			var_11_object = var_67_object;
			func_1492(var_67_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1470(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_618();
			object var_67_object;
			var_11_object = var_67_object;
			func_1477(var_67_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object, object var_45_object)
		{
		func_618();
		object var_46_object;
		var_45_object = var_46_object;
		func_1502(var_46_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1555(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_45_object;
			var_11_float = var_45_object;
			func_528();
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
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1555(var_13_bool, var_14_object, var_15_object);
	}

}


task task_5
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_12_object;
		func_843(var_12_object, var_12_object);
	}

	// @pe
	void OnStopSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		if(var_11_object == var_0_bool)
			var_0_bool = null;
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, float var_10_float, float var_11_float, object var_12_object, object var_45_object)
		{
		object var_46_object;
		func_843(var_46_object, var_46_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, object var_8_object, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1555(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_45_object;
			var_11_float = var_45_object;
			func_825();
		}
	}

}


task task_6
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		bool var_12_bool; object var_13_object;
		func_1485(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_963(var_10_object, var_13_object);
			object var_67_object;
			var_11_object = var_67_object;
			func_1492(var_67_object);
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
		func_1599(var_15_bool, var_16_object);
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
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, object var_45_object)
		{
		func_963(var_12_object, var_45_object);
		object var_46_object;
		var_45_object = var_46_object;
		func_1502(var_46_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object)
	{
		object var_14_object;
		var_11_object = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1555(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_45_object;
			var_11_object = var_45_object;
			func_942();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		func_963(var_10_object, var_11_object);
		object var_12_object;
		var_11_object = var_12_object;
		func_1549();
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
		func_1485(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1038();
			object var_68_object;
			var_11_object = var_68_object;
			func_1492(var_68_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1470(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1038();
			object var_68_object;
			var_11_object = var_68_object;
			func_1477(var_68_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, object var_45_object)
		{
		func_1038();
		object var_47_object;
		var_45_object = var_47_object;
		func_1502(var_47_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object)
	{
		object var_14_object;
		var_11_object = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1555(var_13_bool, var_14_object, var_15_object);
		if(var_13_bool != 0) {
			object var_45_object;
			var_11_object = var_45_object;
			func_1017();
		}
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		func_1038();
		object var_13_object;
		var_11_object = var_13_object;
		func_1549();
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, int var_11_int)
	{
		if(var_11_int == 91)
			func_1038();
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
	func_1205(var_16_int, var_17_float);
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
	func_1524(var_12_object);
}


void func_1283(float var_132_float, cvector var_133_cvector, cvector var_134_cvector)
{
	var_132_float = sqrt((var_134_cvector - var_133_cvector) | (var_134_cvector - var_133_cvector));
}


void func_387(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_73_object, bool var_74_bool, float var_88_float)
{
	bool var_76_bool;
	var_1_bool = var_73_object;
	var_1_bool->GetPFPosition(var_0_bool); //@t
	@SetTimer(61, 0.5);
	
Label_395:
	@FindPathTo(var_2_cvector, var_0_bool);
	if(var_2_cvector == null) {
		@Trace("Can't find path to noise source");
	} else {
			@FollowPath(var_2_cvector, var_74_bool, var_76_bool);
			if(!var_76_bool) { //@nz
				if(!(var_2_cvector == null)) goto Label_410;
			}

		Label_410:
			} else {
			@KillTimer(61);
			object var_86_object;
			TaskCall(6);
			func_859(var_88_float, var_89_float, var_90_object, var_86_object, var_1_bool);
			TaskReturn();
			var_1_bool = var_88_float;
			@SetTimer(61, 0.5);
			if(var_1_bool == null) {
				goto Label_432;
			}
			var_1_bool->GetPFPosition(var_0_bool); //@t
	}
Label_432:
	for(;;) {
		@KillTimer(61);

		}
	var_84_bool = var_2_cvector != null; //@nn
	if(var_84_bool == 1) goto Label_395;
	
}


void func_1288(object var_12_object)
{
	object var_14_object;
	@CreateObjectSet(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_1294(string var_64_string, int var_65_int)
{
	string var_67_string = "idle";
	if(var_65_int != 0)
		var_67_string += var_65_int;
	var_67_string = var_64_string;
}


void func_1038(void)
{
	@KillTimer(91);
	@Stop();
	func_1103();
}


void func_1169(bool var_94_bool, object var_95_object)
{
	object var_99_object;
	var_95_object = var_99_object;
	bool var_98_bool;
	func_1133(var_98_bool, var_99_object);
	if(!var_98_bool) { //@nz
		var_94_bool = false;
		return 2;
	}
	bool var_116_bool; object var_117_object;
	func_1116(var_116_bool, var_117_object, "noaccess");
	if(!var_116_bool) { //@nz
		var_94_bool = true;
		return 2;
	}
	int var_97_int;
	var_117_object->GetProperty("noaccess", var_97_int);
	var_94_bool = var_97_int == 0;
}


void func_1555(bool var_13_bool, object var_14_object, object var_15_object)
{
	bool var_20_bool; object var_21_object;
	func_1116(var_20_bool, var_21_object, "class");
	if(!var_20_bool) { //@nz
		var_13_bool = false;
		return 4;
	}
	string var_18_string;
	var_21_object->GetProperty("class", var_18_string);
	if(var_18_string != "bomber") {
		var_13_bool = false;
		return 4;
	}
	bool var_19_bool;
	@CanSee(var_19_bool, var_14_object);
	bool var_33_bool = true;
	if(var_19_bool != 1) {
		float var_35_float; object var_36_object;
		var_14_object = var_36_object;
		func_1108(var_35_float, var_36_object);
		var_44_bool = var_35_float <= 160000.0;
		if(var_44_bool != 1)
			var_33_bool = false;
	}
	if(var_33_bool != 0) {
		var_13_bool = true;
		return 4;
	}
	var_13_bool = false;
}


void func_1301(int var_58_int)
{
	int var_61_int; bool var_62_bool;
	var_61_int = 0;
	
	for(;;) {
		string var_64_string; int var_65_int;
		var_61_int = var_65_int;
		func_1294(var_64_string, var_65_int);
		@HasAnimation(var_62_bool, "all", var_64_string);
		if(!var_62_bool) //@nz
			break;
		var_61_int += 1;
	}
	var_61_int = var_58_int;
}


// @pe
void func_1434(int var_130_int, float var_131_float)
{
	if(var_131_float < 200) {
		var_130_int = 1;
		return 0;
	EMIT "GOTO 0x5a6";
	}
	if(var_131_float < 600) {
		var_130_int = 2;
		return 0;
	}
	var_130_int = 3;
}


void func_163(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_291(string var_78_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_78_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_78_string);
	@RemoveEnvelope();
}


void func_549(void)
{
	int var_49_int; int var_50_int; bool var_51_bool; float var_52_float; bool var_53_bool;
	@WaitForAnimEnd();
	bool var_54_bool;
	func_1272(var_54_bool);
	if(!var_54_bool) //@nz
		return 14;
	int var_58_int;
	func_1301(var_58_int);
	int var_47_int;
	var_58_int = var_47_int;
	int var_48_int = 0;
	
	for(;;) {
		bool var_71_bool = false;
		if(var_48_int < 5) {
			bool var_74_bool;
			func_1272(var_74_bool);
			if(var_74_bool != 0)
				var_71_bool = true;
		}
		if(var_71_bool != 0) {
			@irand(var_49_int, 3);
			if(var_49_int == 0) {
				if(var_47_int == 0) goto Label_596;
				@irand(var_50_int, var_47_int);
				string var_80_string; int var_81_int;
				var_50_int = var_81_int;
				func_1294(var_80_string, var_81_int);
				@PlayAnimation("all", var_80_string);
				@WaitForAnimEnd(var_51_bool);
				if(!var_51_bool) { //@nz
				} else {
			} else {
			if(var_49_int == 1) {
				@rand(var_52_float, 4);
				@Sleep((var_52_float + 1), var_53_bool);
				if(!var_53_bool) { //@nz
					goto Label_617;
				}
			} else if(var_48_int != 0) {
				goto Label_617;
			}
			}
				var_48_int += 1;
			}
		}
	Label_617:
		return 14;

	}
	
}


void func_1318(int var_20_int, int var_21_int)
{
	int var_27_int;
	if(var_20_int > var_21_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_26_int = 0;
	if(var_20_int != var_21_int) {
		@irand(var_27_int, (var_21_int - var_20_int));
	} else if(var_20_int == 0) {
		return 8;
	}
	var_26_int += var_20_int;
	if(var_26_int == 0)
		return 8;
	int var_28_int;
	@GetInvItemByName(var_28_int, "Money");
	bool var_29_bool;
	@AddItem(var_29_bool, var_28_int, 0, var_26_int);
	
}


// @pe
void func_1448(float var_214_float, int var_215_int)
{
	if(var_215_int == 1)
		var_214_float = 30;
	var_214_float = 700;
}


void func_1193(bool var_82_bool, object var_83_object)
{
	cvector var_88_cvector;
	var_83_object->GetPosition(var_88_cvector);
	cvector var_89_cvector;
	@GetPosition(var_89_cvector);
	cvector var_90_cvector = var_88_cvector - var_89_cvector;
	var_92_float = GetByIndex(var_90_cvector, 0);
	var_93_float = GetByIndex(var_90_cvector, 2);
	bool var_91_bool;
	@Rotate(var_92_float, var_93_float, var_91_bool);
	var_91_bool = var_82_bool;
}


void func_170(bool var_38_bool)
{
	var_38_bool = false;
}


void func_809(bool var_0_bool, object var_126_object)
{
	@Sleep(5);
	var_126_object = var_0_bool;
}


void func_1064(bool var_30_bool)
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
void func_172(object var_14_object)
{
	func_1348();
	object var_55_object;
	var_14_object = var_55_object;
	func_181(var_55_object);
}


// @pe
void func_1456(float var_236_float, float var_238_float)
{
	if(var_238_float < 10) {
		var_236_float = 10;
		return 0;
	EMIT "GOTO 0x5bc";
	}
	if(var_238_float > 1500) {
		var_236_float = 1500;
		return 0;
	}
	var_238_float = var_236_float;
}


// @pe
void func_181(object var_55_object)
{
	object var_56_object;
	var_55_object = var_56_object;
	func_204(var_56_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1205(object var_15_object, int var_16_int)
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


void func_1592(void)
{
	var_11_object = GlobalVars[0];
	object var_12_object;
	func_1288(var_12_object);
	var_12_object = var_11_object;
	GlobalVars[0] = var_11_object;
}


void func_1082(void)
{
	float var_26_float; float var_27_float; bool var_28_bool;
	
	for(;;) {
		@RandVec2D(var_26_float, var_27_float);
		@Rotate(var_26_float, var_27_float, var_28_bool);
		if(!var_28_bool) { //@nz
		} else {
				bool var_30_bool;
				func_1064(var_30_bool);
				if(var_30_bool == 0) goto Label_1095;
		}
	Label_1102:
		for(;;) {

		}

	Label_1095:
		@Sleep(5, var_28_bool);
		if(!var_28_bool) { //@nz
			goto Label_1102;
		}
	}
}


void func_61(void)
{
	@KillTimer(90);
	func_163(var_12_float, var_13_float);
}


// @pe
void func_1470(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_1599(bool var_14_bool, object var_15_object)
{
	bool var_22_bool; object var_23_object;
	func_1169(var_22_bool, var_23_object);
	if(!var_22_bool) { //@nz
		var_14_bool = false;
		return 6;
	}
	var_57_object = GlobalVars[0];
	bool var_19_bool;
	var_57_object->in(var_19_bool, var_23_object);
	if(var_19_bool != 0) {
		var_14_bool = true;
		return 6;
	}
	bool var_59_bool; object var_60_object;
	var_15_object = var_60_object;
	func_1116(var_59_bool, var_60_object, "disease");
	if(!var_59_bool) { //@nz
		var_14_bool = false;
		return 6;
	}
	float var_20_float;
	var_15_object->GetProperty("disease", var_20_float);
	bool var_21_bool;
	@IsPlayerActor(var_15_object, var_21_bool);
	if(var_21_bool != 0) {
		var_14_bool = var_20_float > 0.0;
		return 6;
	}
	var_14_bool = var_20_float > 0.75;
}


// @pe
void func_319(object var_69_object)
{
	object var_73_object;
	func_387(var_70_cvector, var_71_object, var_72_object, var_73_object, var_73_object, false);
}


void func_963(bool var_0_bool, bool var_1_bool)
{
	@SetSeeThreshold(var_0_bool);
	@SetSeeFOV(var_1_bool);
	@Stop();
	@StopGroup0();
}


void func_1348(void)
{
	bool var_18_bool;
	@ClearSubContainer(0);
	func_1318(500, 1000);
	int var_17_int;
	@irand(var_17_int, 4);
	if(var_17_int != 0) {
		int var_43_int;
		func_1385(var_43_int, "rifle_ammo");
		@AddItem(var_18_bool, var_43_int, 0, var_17_int);
	}
	@irand(var_17_int, 3);
	if(var_17_int == 0) {
		int var_51_int;
		func_1385(var_51_int, "rusk");
		@AddItem(var_18_bool, var_51_int, 0, 1);
	}
}


// @pe
void func_1477(object var_68_object)
{
	object var_69_object;
	var_68_object = var_69_object;
	TaskCall(2);
	func_319(var_69_object);
	TaskReturn();
}


// @pe
void func_843(bool var_0_bool, object var_46_object)
{
	bool var_47_bool = false;
	if(var_0_bool == null) {
		bool var_49_bool; object var_50_object;
		func_1599(var_49_bool, var_50_object);
		if(var_49_bool != 0)
			var_47_bool = true;
	}
	if(var_47_bool != 0) {
		var_0_bool = var_50_object;
		@StopGroup0();
	}
}


void func_204(object var_56_object)
{
	cvector var_67_cvector; cvector var_68_cvector; cvector var_69_cvector; cvector var_70_cvector; string var_71_string; object var_72_object; bool var_73_bool; bool var_74_bool; float var_75_float; cvector var_76_cvector;
	if(var_56_object == null) {
		func_291("fdie");
	} else {
		var_56_object->GetPosition(var_67_cvector);
		@GetPosition(var_68_cvector);
		@GetDirection(var_69_cvector);
		var_70_cvector = var_68_cvector - var_67_cvector;
		var_81_float = GetByIndex(var_70_cvector, 0);
		var_82_float = GetByIndex(var_69_cvector, 0);
		var_84_float = GetByIndex(var_70_cvector, 2);
		var_85_float = GetByIndex(var_69_cvector, 2);
		if(((var_81_float * var_82_float) + (var_84_float * var_85_float)) >= 0)
			var_71_string = "fdie";
		else
			var_71_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_56_object = var_72_object;
		var_92_bool = IsFuncExist(var_56_object, "GetScriptProperty", 2);
		if(var_92_bool != 0) {
			var_56_object->HasScriptProperty(var_73_bool, "Owner");
			if(var_73_bool != 0) {
				var_56_object->GetScriptProperty(var_72_object, "Owner");
				if(var_72_object == null)
					var_56_object = var_72_object;
			}
		}
		var_99_bool = IsFuncExist(var_72_object, "@GetEyesHeight", 1);
		if(var_99_bool != 0) {
			var_72_object->GetEyesHeight(var_75_float);
			var_76_cvector = [0.0, 0.0, 0.0];
			var_100_float = GetByIndex(var_76_cvector, 1);
			var_75_float = var_100_float;
			SetByIndex(var_76_cvector, 1) = var_100_float;
			@LookAsync(var_56_object, "head", var_76_cvector);
			var_74_bool = true;
		} else {
			var_74_bool = false;

		}
		@PlayAnimation("all", var_71_string);
		@WaitForAnimEnd();
		if(var_74_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_71_string);
		@RemoveEnvelope();
		var_72_object = null;
	}
	
}


// @pe
void func_1485(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_1103(void)
{
	@Stop();
	@StopGroup0();
}


// @pe
void func_1492(object var_68_object)
{
	TaskCall(4);
	object var_69_object;
	func_623(var_69_object, var_70_object, var_71_bool, var_69_object);
	TaskReturn();
	@ResetAAS();
}


void func_981(void)
{
	@SetTimer(91, 20);
	func_1082();
}


void func_1108(float var_35_float, object var_36_object)
{
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	var_36_object->GetPosition(var_41_cvector);
	var_35_float = (var_41_cvector - var_40_cvector) | (var_41_cvector - var_40_cvector);
}


void func_859(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_86_object, object var_87_object)
{
	bool var_93_bool;
	@GetSeeThreshold(var_0_bool);
	@GetSeeFOV(var_1_bool);
	@SetSeeThreshold(var_0_bool / 1.5);
	var_2_cvector = var_87_object;
	int var_94_int = 0;
	
	for(;;) {
		if(var_94_int < 3) {
			@SetSeeFOV(var_1_bool * 1.8);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(var_93_bool);
			@SetSeeFOV(var_1_bool);
			if(!var_93_bool) { //@nz
			} else {
					@Sleep(2, var_93_bool);
					var_106_bool = !var_93_bool; //@nz
					if(var_106_bool == 0) goto Label_894;
			}
		}
		for(;;) {
			func_963(var_93_bool, var_94_int);
			if(var_93_bool != 0)
				var_2_cvector = null;
			var_86_object = var_2_cvector;

		}

	Label_894:
		var_94_int += 1;
	}
}


void func_1116(bool var_20_bool, object var_21_object, string var_22_string)
{
	var_27_bool = IsFuncExist(var_21_object, "HasProperty", 2);
	if(!var_27_bool) { //@nz
		var_20_bool = false;
		return 2;
	}
	bool var_24_bool;
	var_21_object->HasProperty(var_22_string, var_24_bool);
	var_24_bool = var_20_bool;
}


// @pe
void func_1502(object var_47_object)
{
	object var_48_object;
	var_47_object = var_48_object;
	func_1637(var_48_object);
	object var_55_object;
	TaskCall(4);
	func_623(var_55_object, var_56_object, var_57_bool, var_55_object);
	TaskReturn();
	@ResetAAS();
}


void func_99(bool var_0_bool, bool var_1_bool)
{
	float var_24_float; cvector var_25_cvector; cvector var_26_cvector; float var_27_float; bool var_28_bool; object var_29_object; bool var_30_bool;
	@rand(var_24_float, 0.5);
	@Sleep(var_24_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_111:
				@GetPosition(var_26_cvector);
				@GetCameraFarDistance(var_27_float);
				@GetRandomPFPointInCircle(var_25_cvector, var_26_cvector, (var_27_float * 2.5), var_28_bool);
				if(var_28_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_111;
			}
				var_1_bool = false;
		}
		}
		goto Label_128;

	Label_128:
		@FindShiftedPathTo(var_29_object, var_25_cvector);
		if(var_29_object != null) {
			@RotatePath(var_29_object, var_30_bool);
			if(var_30_bool != 0) {
				bool var_38_bool;
				func_170(var_38_bool);
				@FollowPath(var_29_object, var_38_bool, var_30_bool);
				var_29_object = null;
				if(var_30_bool != 0) {
					TaskCall(3);
					func_549();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_29_object = null;
	}
	
}


void func_485(void)
{
	@KillTimer(61);
	@Stop();
}


void func_1637(object var_48_object)
{
	if(var_48_object == null) {
	}
	var_52_object = GlobalVars[0];
	bool var_50_bool;
	var_52_object->in(var_50_bool, var_48_object);
	if(!var_50_bool) { //@nz
		var_54_object = GlobalVars[0];
		var_54_object->add(var_48_object);
	}
}


void func_1128(bool var_109_bool, object var_110_object)
{
	bool var_112_bool;
	var_110_object->IsDead(var_112_bool);
	var_112_bool = var_109_bool;
}


void func_361(bool var_71_bool, object var_72_object, object var_73_object)
{
	bool var_75_bool;
	@IsPlayerActor(var_72_object, var_75_bool);
	if(var_75_bool != 0) {
		var_71_bool = false;
		return 2;
	}
	bool var_77_bool; object var_78_object;
	func_1599(var_77_bool, var_78_object);
	if(!var_77_bool) { //@nz
		var_71_bool = false;
		return 2;
	}
	@IsPlayerActor(var_78_object, var_75_bool);
	var_75_bool = var_71_bool;
}


void func_618(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1385(int var_43_int, string var_44_string)
{
	int var_46_int;
	@GetInvItemByName(var_46_int, var_44_string);
	var_46_int = var_43_int;
}


void func_1133(bool var_98_bool, object var_99_object)
{
	if(var_99_object == null) {
		var_98_bool = false;
		return 4;
	}
	bool var_105_bool = false;
	var_108_bool = IsFuncExist(var_99_object, "IsDead", 1);
	if(var_108_bool != 0) {
		bool var_109_bool; object var_110_object;
		var_99_object = var_110_object;
		func_1128(var_109_bool, var_110_object);
		if(var_109_bool != 0)
			var_105_bool = true;
	}
	if(var_105_bool != 0) {
		var_98_bool = false;
		return 4;
	}
	object var_102_object;
	@GetScene(var_102_object);
	if(var_102_object == null) {
		var_98_bool = false;
		return 4;
	}
	object var_103_object;
	var_99_object->GetScene(var_103_object);
	if(var_102_object != var_103_object) {
		var_98_bool = false;
		return 4;
	}
	var_98_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1390(float var_165_float, cvector var_166_cvector, cvector var_167_cvector, cvector var_168_cvector)
{
	var_179_float = GetByIndex(var_168_cvector, 0);
	var_180_float = GetByIndex(var_168_cvector, 0);
	var_182_float = GetByIndex(var_168_cvector, 2);
	var_183_float = GetByIndex(var_168_cvector, 2);
	float var_174_float = sqrt((var_179_float * var_180_float) + (var_182_float * var_183_float));
	var_186_float = GetByIndex(var_168_cvector, 1);
	var_187_float = GetByIndex(var_166_cvector, 0);
	var_188_float = GetByIndex(var_167_cvector, 0);
	var_190_float = GetByIndex(var_166_cvector, 0);
	var_191_float = GetByIndex(var_167_cvector, 0);
	var_194_float = GetByIndex(var_166_cvector, 2);
	var_195_float = GetByIndex(var_167_cvector, 2);
	var_197_float = GetByIndex(var_166_cvector, 2);
	var_198_float = GetByIndex(var_167_cvector, 2);
	float var_176_float = sqrt(((var_187_float - var_188_float) * (var_190_float - var_191_float)) + ((var_194_float - var_195_float) * (var_197_float - var_198_float)));
	var_204_float = GetByIndex(var_167_cvector, 1);
	var_205_float = GetByIndex(var_166_cvector, 1);
	float var_177_float = 500.0 / ((var_176_float * (var_186_float / var_174_float)) - (var_204_float - var_205_float));
	if(var_177_float < 0)
		var_165_float = -1;
	var_211_float = sqrt(var_177_float);
	float var_178_float = (var_176_float / var_174_float) * var_211_float;
	var_178_float = var_165_float;
}


void func_623(bool var_0_bool, bool var_1_bool, object var_55_object, object var_127_object)
{
	cvector var_71_cvector; cvector var_72_cvector; int var_73_int; object var_74_object; cvector var_75_cvector; bool var_76_bool; object var_77_object; float var_78_float; float var_79_float; float var_80_float; int var_81_int;
	@CanSee(var_1_bool, var_55_object);
	bool var_82_bool; object var_83_object;
	var_55_object = var_83_object;
	func_1193(var_82_bool, var_83_object);
	bool var_94_bool; object var_95_object;
	var_55_object = var_95_object;
	func_1169(var_94_bool, var_95_object);
	if(!var_94_bool) //@nz
		return 24;
	@Face(var_55_object);
	bool var_70_bool;
	@IsPlayerActor(var_55_object, var_70_bool);
	
	for(;;) {
		bool var_123_bool;
		func_1169(var_123_bool, var_55_object);
		if(var_123_bool != 0) {
			if(!var_1_bool) { //@nz
				@StopAsync();
				object var_126_object;
				TaskCall(5);
				func_809(var_127_object, var_126_object);
				TaskReturn();
				var_0_bool = var_127_object;
				if(var_0_bool == null) {
				} else {
						@CanSee(var_1_bool, var_0_bool);
						@Face(var_0_bool);
			}
					@ReportAttack(var_0_bool);
					@GetPosition(var_71_cvector);
					var_0_bool->GetPosition(var_72_cvector); //@t
					int var_130_int; float var_131_float;
					float var_132_float; cvector var_133_cvector; cvector var_134_cvector;
					var_72_cvector = var_133_cvector;
					var_71_cvector = var_134_cvector;
					func_1283(var_132_float, var_133_cvector, var_134_cvector);
					var_132_float = var_131_float;
					func_1434(var_130_int, var_131_float);
					var_130_int = var_73_int;
					@PlayAnimation("all", ("attack_begin" + var_73_int));
					@WaitForAnimEnd();
					if(!(var_0_bool == null)) goto Label_690;
			}
		}
		for(;;) {
			@StopAsync();
			return 24;

		}

	Label_690:
		@PlayAnimation("all", ("attack_end" + var_73_int));
		@GetScene(var_74_object);
		@GetGeometryLocator(("attack" + var_73_int), var_76_bool, var_71_cvector, var_75_cvector);
		@AddActorByType(var_77_object, "scripted", var_74_object, var_71_cvector, [0.0, 0.0, 1.0], "grenade.xml");
		object var_155_object;
		func_1277(var_155_object);
		var_77_object->SetScriptProperty("Owner", var_155_object);
		var_0_bool->GetPosition(var_72_cvector); //@t
		if(var_70_bool != 0) {
			var_70_bool = false;
			@RandVec2D(var_78_float, var_79_float);
			var_159_float = GetByIndex(var_72_cvector, 0);
			SetByIndex(var_72_cvector, 0) = (var_159_float + (var_78_float * 500));
			var_162_float = GetByIndex(var_72_cvector, 2);
			SetByIndex(var_72_cvector, 2) = (var_162_float + (var_79_float * 500));
		}
		float var_165_float; cvector var_166_cvector; cvector var_167_cvector; cvector var_168_cvector;
		var_71_cvector = var_166_cvector;
		var_72_cvector = var_167_cvector;
		func_1390(var_165_float, var_166_cvector, var_167_cvector, var_168_cvector);
		var_165_float = var_80_float;
		if(var_80_float < 0) {
			float var_214_float; int var_215_int;
			var_73_int = var_215_int;
			func_1448(var_214_float, var_215_int);
			var_214_float = var_80_float;
		} else {
		float var_236_float; int var_237_int; float var_238_float;
		var_80_float = var_238_float;
		func_1456(var_237_int, var_238_float);
		var_236_float = var_80_float;
		}
		var_77_object->SetScriptProperty("StartVelocity", (var_168_cvector * var_80_float));
		var_77_object->SetScriptProperty("DamageAmount", 0.8);
		var_77_object->SetScriptProperty("DamageType", 1);
		@WaitForAnimEnd();
		if(var_237_int == 1) {
			@irand(var_81_int, 2);
			@Speak("scream" + (var_81_int + 1));
			@PlayAnimation("all", ("scream" + (var_81_int + 1)));
			@WaitForAnimEnd();
		}
		var_77_object = null;
		var_74_object = null;
	}
	
}


// @pe
void func_1650(void)
{
}


// @pe
void func_1524(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_1650();
	object var_14_object;
	var_12_object = var_14_object;
	TaskCall(1);
	func_172(var_14_object);
	TaskReturn();
}


void func_1272(bool var_54_bool)
{
	bool var_56_bool;
	@IsLoaded(var_56_bool);
	var_56_bool = var_54_bool;
}


// @pe
void func_380(bool var_13_bool, object var_14_object)
{
	object var_16_object;
	var_14_object = var_16_object;
	bool var_15_bool;
	func_1599(var_15_bool, var_16_object);
	var_15_bool = var_13_bool;
}


void func_1277(object var_155_object)
{
	object var_157_object;
	@self(var_157_object);
	var_157_object = var_155_object;
}
EMIT "Stack[-1] = 0";


