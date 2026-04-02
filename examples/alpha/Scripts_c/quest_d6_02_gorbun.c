maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
	{
		func_1598();
	
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
		func_1491(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_67_object;
			var_11_object = var_67_object;
			func_1498(var_67_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, object var_2_object, cvector var_3_cvector, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1476(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_61();
			object var_67_object;
			var_11_object = var_67_object;
			func_1483(var_67_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object, object var_45_object)
		{
		func_61();
		object var_47_object;
		var_45_object = var_47_object;
		func_1508(var_47_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, cvector var_4_cvector, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1561(var_13_bool, var_14_object, var_15_object);
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
		func_1555();
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
		func_1491(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_485();
			object var_67_object;
			var_11_object = var_67_object;
			func_1498(var_67_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object, object var_45_object)
		{
		func_485();
		object var_47_object;
		var_45_object = var_47_object;
		func_1508(var_47_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1561(var_13_bool, var_14_object, var_15_object);
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
			bool var_70_bool; object var_71_object;
			func_361(var_70_bool, var_71_object, var_1_bool);
			if(var_70_bool == 0) goto Label_474;
			var_1_bool = var_71_object;
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
		func_1555();
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
		func_1491(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_618();
			object var_66_object;
			var_11_object = var_66_object;
			func_1498(var_66_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, bool var_7_bool, object var_8_object, float var_9_float, float var_10_float, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1476(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_618();
			object var_66_object;
			var_11_object = var_66_object;
			func_1483(var_66_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object, object var_45_object)
		{
		func_618();
		object var_46_object;
		var_45_object = var_46_object;
		func_1508(var_46_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, bool var_8_bool, object var_9_object, float var_10_float, float var_11_float, object var_12_object)
	{
		object var_14_object;
		var_11_float = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1561(var_13_bool, var_14_object, var_15_object);
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
		func_1561(var_13_bool, var_14_object, var_15_object);
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
		func_1561(var_13_bool, var_14_object, var_15_object);
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
		func_1491(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_963(var_10_object, var_13_object);
			object var_66_object;
			var_11_object = var_66_object;
			func_1498(var_66_object);
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
		func_1508(var_46_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object)
	{
		object var_14_object;
		var_11_object = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1561(var_13_bool, var_14_object, var_15_object);
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
		func_1555();
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
		func_1491(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1038();
			object var_67_object;
			var_11_object = var_67_object;
			func_1498(var_67_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object)
	{
		object var_13_object;
		var_11_object = var_13_object;
		bool var_12_bool;
		func_1476(var_12_bool, var_13_object);
		if(var_12_bool != 0) {
			func_1038();
			object var_67_object;
			var_11_object = var_67_object;
			func_1483(var_67_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object, object var_45_object)
		{
		func_1038();
		object var_47_object;
		var_45_object = var_47_object;
		func_1508(var_47_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object, object var_11_object, object var_12_object)
	{
		object var_14_object;
		var_11_object = var_14_object;
		object var_15_object;
		var_12_object = var_15_object;
		bool var_13_bool;
		func_1561(var_13_bool, var_14_object, var_15_object);
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
		func_1555();
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
	func_1530(var_12_object);
}


void OnUnload(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_3_object, object var_4_object, object var_5_object, bool var_6_bool, object var_7_object, float var_8_float, float var_9_float, object var_10_object)
{
	object var_11_object;
	func_1277(var_11_object);
	@RemoveActor(var_11_object);
	@Hold();
}


void func_1283(float var_126_float, cvector var_127_cvector, cvector var_128_cvector)
{
	var_126_float = sqrt((var_128_cvector - var_127_cvector) | (var_128_cvector - var_127_cvector));
}


void func_387(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_72_object, bool var_73_bool, float var_87_float)
{
	bool var_75_bool;
	var_1_bool = var_72_object;
	var_1_bool->GetPFPosition(var_0_bool); //@t
	@SetTimer(61, 0.5);
	
Label_395:
	@FindPathTo(var_2_cvector, var_0_bool);
	if(var_2_cvector == null) {
		@Trace("Can't find path to noise source");
	} else {
			@FollowPath(var_2_cvector, var_73_bool, var_75_bool);
			if(!var_75_bool) { //@nz
				if(!(var_2_cvector == null)) goto Label_410;
			}

		Label_410:
			} else {
			@KillTimer(61);
			object var_85_object;
			TaskCall(6);
			func_859(var_87_float, var_88_float, var_89_object, var_85_object, var_1_bool);
			TaskReturn();
			var_1_bool = var_87_float;
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
	var_83_bool = var_2_cvector != null; //@nn
	if(var_83_bool == 1) goto Label_395;
	
}


void func_1288(bool var_14_bool, string var_15_string, string var_16_string)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(var_18_object == null)
		var_14_bool = false;
	@Trigger(var_18_object, var_16_string);
	var_14_bool = true;
}
EMIT "Stack[-1] = 0";


void func_1038(void)
{
	@KillTimer(91);
	@Stop();
	func_1103();
}


void func_1169(bool var_88_bool, object var_89_object)
{
	object var_93_object;
	var_89_object = var_93_object;
	bool var_92_bool;
	func_1133(var_92_bool, var_93_object);
	if(!var_92_bool) { //@nz
		var_88_bool = false;
		return 2;
	}
	bool var_110_bool; object var_111_object;
	func_1116(var_110_bool, var_111_object, "noaccess");
	if(!var_110_bool) { //@nz
		var_88_bool = true;
		return 2;
	}
	int var_91_int;
	var_111_object->GetProperty("noaccess", var_91_int);
	var_88_bool = var_91_int == 0;
}


void func_1300(string var_60_string, int var_61_int)
{
	string var_63_string = "idle";
	if(var_61_int != 0)
		var_63_string += var_61_int;
	var_63_string = var_60_string;
}


void func_1561(bool var_13_bool, object var_14_object, object var_15_object)
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


void func_1307(int var_54_int)
{
	int var_57_int; bool var_58_bool;
	var_57_int = 0;
	
	for(;;) {
		string var_60_string; int var_61_int;
		var_57_int = var_61_int;
		func_1300(var_60_string, var_61_int);
		@HasAnimation(var_58_bool, "all", var_60_string);
		if(!var_58_bool) //@nz
			break;
		var_57_int += 1;
	}
	var_57_int = var_54_int;
}


// @pe
void func_1440(int var_124_int, float var_125_float)
{
	if(var_125_float < 200) {
		var_124_int = 1;
		return 0;
	EMIT "GOTO 0x5ac";
	}
	if(var_125_float < 600) {
		var_124_int = 2;
		return 0;
	}
	var_124_int = 3;
}


void func_163(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_291(string var_84_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_84_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_84_string);
	@RemoveEnvelope();
}


void func_549(void)
{
	int var_45_int; int var_46_int; bool var_47_bool; float var_48_float; bool var_49_bool;
	@WaitForAnimEnd();
	bool var_50_bool;
	func_1272(var_50_bool);
	if(!var_50_bool) //@nz
		return 14;
	int var_54_int;
	func_1307(var_54_int);
	int var_43_int;
	var_54_int = var_43_int;
	int var_44_int = 0;
	
	for(;;) {
		bool var_67_bool = false;
		if(var_44_int < 5) {
			bool var_70_bool;
			func_1272(var_70_bool);
			if(var_70_bool != 0)
				var_67_bool = true;
		}
		if(var_67_bool != 0) {
			@irand(var_45_int, 3);
			if(var_45_int == 0) {
				if(var_43_int == 0) goto Label_596;
				@irand(var_46_int, var_43_int);
				string var_76_string; int var_77_int;
				var_46_int = var_77_int;
				func_1300(var_76_string, var_77_int);
				@PlayAnimation("all", var_76_string);
				@WaitForAnimEnd(var_47_bool);
				if(!var_47_bool) { //@nz
				} else {
			} else {
			if(var_45_int == 1) {
				@rand(var_48_float, 4);
				@Sleep((var_48_float + 1), var_49_bool);
				if(!var_49_bool) { //@nz
					goto Label_617;
				}
			} else if(var_44_int != 0) {
				goto Label_617;
			}
			}
				var_44_int += 1;
			}
		}
	Label_617:
		return 14;

	}
	
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


void func_1193(bool var_76_bool, object var_77_object)
{
	cvector var_82_cvector;
	var_77_object->GetPosition(var_82_cvector);
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	cvector var_84_cvector = var_82_cvector - var_83_cvector;
	var_86_float = GetByIndex(var_84_cvector, 0);
	var_87_float = GetByIndex(var_84_cvector, 2);
	bool var_85_bool;
	@Rotate(var_86_float, var_87_float, var_85_bool);
	var_85_bool = var_76_bool;
}


void func_170(bool var_34_bool)
{
	var_34_bool = false;
}


void func_809(bool var_0_bool, object var_120_object)
{
	@Sleep(5);
	var_120_object = var_0_bool;
}


void func_1324(int var_26_int, int var_27_int)
{
	int var_33_int;
	if(var_26_int > var_27_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_32_int = 0;
	if(var_26_int != var_27_int) {
		@irand(var_33_int, (var_27_int - var_26_int));
	} else if(var_26_int == 0) {
		return 8;
	}
	var_32_int += var_26_int;
	if(var_32_int == 0)
		return 8;
	int var_34_int;
	@GetInvItemByName(var_34_int, "Money");
	bool var_35_bool;
	@AddItem(var_35_bool, var_34_int, 0, var_32_int);
	
}


// @pe
void func_172(object var_20_object)
{
	func_1354();
	object var_61_object;
	var_20_object = var_61_object;
	func_181(var_61_object);
}


// @pe
void func_1454(float var_208_float, int var_209_int)
{
	if(var_209_int == 1)
		var_208_float = 30;
	var_208_float = 700;
}


// @pe
void func_181(object var_61_object)
{
	object var_62_object;
	var_61_object = var_62_object;
	func_204(var_62_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


// @pe
void func_1462(float var_230_float, float var_232_float)
{
	if(var_232_float < 10) {
		var_230_float = 10;
		return 0;
	EMIT "GOTO 0x5c2";
	}
	if(var_232_float > 1500) {
		var_230_float = 1500;
		return 0;
	}
	var_232_float = var_230_float;
}


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


void func_1598(void)
{
}


void func_1599(bool var_14_bool, object var_15_object)
{
	string var_17_string;
	object var_19_object;
	var_15_object = var_19_object;
	bool var_18_bool;
	func_1169(var_18_bool, var_19_object);
	if(!var_18_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	bool var_53_bool; object var_54_object;
	var_15_object = var_54_object;
	func_1116(var_53_bool, var_54_object, "health");
	if(!var_53_bool) { //@nz
		var_14_bool = false;
		return 2;
	}
	bool var_57_bool; object var_58_object;
	func_1116(var_57_bool, var_58_object, "class");
	if(var_57_bool != 0) {
		var_58_object->GetProperty("class", var_17_string);
		bool var_61_bool = true;
		var_63_bool = var_17_string == "rat";
		if(var_63_bool != 1) {
			var_65_bool = var_17_string == "bomber";
			if(var_65_bool != 1)
				var_61_bool = false;
		}
		if(var_61_bool != 0) {
			var_14_bool = false;
			return 2;
		}
	}
	var_14_bool = true;
}


// @pe
void func_319(object var_68_object)
{
	object var_72_object;
	func_387(var_69_cvector, var_70_object, var_71_object, var_72_object, var_72_object, false);
}


void func_963(bool var_0_bool, bool var_1_bool)
{
	@SetSeeThreshold(var_0_bool);
	@SetSeeFOV(var_1_bool);
	@Stop();
	@StopGroup0();
}


// @pe
void func_1476(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_1354(void)
{
	bool var_24_bool;
	@ClearSubContainer(0);
	func_1324(500, 1000);
	int var_23_int;
	@irand(var_23_int, 4);
	if(var_23_int != 0) {
		int var_49_int;
		func_1391(var_49_int, "rifle_ammo");
		@AddItem(var_24_bool, var_49_int, 0, var_23_int);
	}
	@irand(var_23_int, 3);
	if(var_23_int == 0) {
		int var_57_int;
		func_1391(var_57_int, "rusk");
		@AddItem(var_24_bool, var_57_int, 0, 1);
	}
}


// @pe
void func_1483(object var_67_object)
{
	object var_68_object;
	var_67_object = var_68_object;
	TaskCall(2);
	func_319(var_68_object);
	TaskReturn();
}


void func_204(object var_62_object)
{
	cvector var_73_cvector; cvector var_74_cvector; cvector var_75_cvector; cvector var_76_cvector; string var_77_string; object var_78_object; bool var_79_bool; bool var_80_bool; float var_81_float; cvector var_82_cvector;
	if(var_62_object == null) {
		func_291("fdie");
	} else {
		var_62_object->GetPosition(var_73_cvector);
		@GetPosition(var_74_cvector);
		@GetDirection(var_75_cvector);
		var_76_cvector = var_74_cvector - var_73_cvector;
		var_87_float = GetByIndex(var_76_cvector, 0);
		var_88_float = GetByIndex(var_75_cvector, 0);
		var_90_float = GetByIndex(var_76_cvector, 2);
		var_91_float = GetByIndex(var_75_cvector, 2);
		if(((var_87_float * var_88_float) + (var_90_float * var_91_float)) >= 0)
			var_77_string = "fdie";
		else
			var_77_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_62_object = var_78_object;
		var_98_bool = IsFuncExist(var_62_object, "GetScriptProperty", 2);
		if(var_98_bool != 0) {
			var_62_object->HasScriptProperty(var_79_bool, "Owner");
			if(var_79_bool != 0) {
				var_62_object->GetScriptProperty(var_78_object, "Owner");
				if(var_78_object == null)
					var_62_object = var_78_object;
			}
		}
		var_105_bool = IsFuncExist(var_78_object, "@GetEyesHeight", 1);
		if(var_105_bool != 0) {
			var_78_object->GetEyesHeight(var_81_float);
			var_82_cvector = [0.0, 0.0, 0.0];
			var_106_float = GetByIndex(var_82_cvector, 1);
			var_81_float = var_106_float;
			SetByIndex(var_82_cvector, 1) = var_106_float;
			@LookAsync(var_62_object, "head", var_82_cvector);
			var_80_bool = true;
		} else {
			var_80_bool = false;

		}
		@PlayAnimation("all", var_77_string);
		@WaitForAnimEnd();
		if(var_80_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_77_string);
		@RemoveEnvelope();
		var_78_object = null;
	}
	
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


void func_1103(void)
{
	@Stop();
	@StopGroup0();
}


// @pe
void func_1491(bool var_12_bool, object var_13_object)
{
	object var_15_object;
	var_13_object = var_15_object;
	bool var_14_bool;
	func_1599(var_14_bool, var_15_object);
	var_14_bool = var_12_bool;
}


void func_1108(float var_35_float, object var_36_object)
{
	cvector var_40_cvector;
	@GetPosition(var_40_cvector);
	cvector var_41_cvector;
	var_36_object->GetPosition(var_41_cvector);
	var_35_float = (var_41_cvector - var_40_cvector) | (var_41_cvector - var_40_cvector);
}


void func_981(void)
{
	@SetTimer(91, 20);
	func_1082();
}


// @pe
void func_1498(object var_67_object)
{
	TaskCall(4);
	object var_68_object;
	func_623(var_68_object, var_69_object, var_70_bool, var_68_object);
	TaskReturn();
	@ResetAAS();
}


void func_859(bool var_0_bool, bool var_1_bool, cvector var_2_cvector, object var_85_object, object var_86_object)
{
	bool var_92_bool;
	@GetSeeThreshold(var_0_bool);
	@GetSeeFOV(var_1_bool);
	@SetSeeThreshold(var_0_bool / 1.5);
	var_2_cvector = var_86_object;
	int var_93_int = 0;
	
	for(;;) {
		if(var_93_int < 3) {
			@SetSeeFOV(var_1_bool * 1.8);
			@PlayAnimation("all", "hunt");
			@WaitForAnimEnd(var_92_bool);
			@SetSeeFOV(var_1_bool);
			if(!var_92_bool) { //@nz
			} else {
					@Sleep(2, var_92_bool);
					var_105_bool = !var_92_bool; //@nz
					if(var_105_bool == 0) goto Label_894;
			}
		}
		for(;;) {
			func_963(var_92_bool, var_93_int);
			if(var_92_bool != 0)
				var_2_cvector = null;
			var_85_object = var_2_cvector;

		}

	Label_894:
		var_93_int += 1;
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


void func_99(bool var_0_bool, bool var_1_bool)
{
	float var_20_float; cvector var_21_cvector; cvector var_22_cvector; float var_23_float; bool var_24_bool; object var_25_object; bool var_26_bool;
	@rand(var_20_float, 0.5);
	@Sleep(var_20_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_111:
				@GetPosition(var_22_cvector);
				@GetCameraFarDistance(var_23_float);
				@GetRandomPFPointInCircle(var_21_cvector, var_22_cvector, (var_23_float * 2.5), var_24_bool);
				if(var_24_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_111;
			}
				var_1_bool = false;
		}
		}
		goto Label_128;

	Label_128:
		@FindShiftedPathTo(var_25_object, var_21_cvector);
		if(var_25_object != null) {
			@RotatePath(var_25_object, var_26_bool);
			if(var_26_bool != 0) {
				bool var_34_bool;
				func_170(var_34_bool);
				@FollowPath(var_25_object, var_34_bool, var_26_bool);
				var_25_object = null;
				if(var_26_bool != 0) {
					TaskCall(3);
					func_549();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_25_object = null;
	}
	
}


// @pe
void func_1508(object var_47_object)
{
	object var_48_object;
	var_47_object = var_48_object;
	func_1640();
	object var_49_object;
	TaskCall(4);
	func_623(var_49_object, var_50_object, var_51_bool, var_49_object);
	TaskReturn();
	@ResetAAS();
}


void func_485(void)
{
	@KillTimer(61);
	@Stop();
}


void func_1128(bool var_103_bool, object var_104_object)
{
	bool var_106_bool;
	var_104_object->IsDead(var_106_bool);
	var_106_bool = var_103_bool;
}


void func_361(bool var_70_bool, object var_71_object, object var_72_object)
{
	bool var_74_bool;
	@IsPlayerActor(var_71_object, var_74_bool);
	if(var_74_bool != 0) {
		var_70_bool = false;
		return 2;
	}
	bool var_76_bool; object var_77_object;
	func_1599(var_76_bool, var_77_object);
	if(!var_76_bool) { //@nz
		var_70_bool = false;
		return 2;
	}
	@IsPlayerActor(var_77_object, var_74_bool);
	var_74_bool = var_70_bool;
}


void func_618(void)
{
	@StopAnimation();
	@StopGroup0();
}


// @pe
void func_1640(void)
{
}


void func_1133(bool var_92_bool, object var_93_object)
{
	if(var_93_object == null) {
		var_92_bool = false;
		return 4;
	}
	bool var_99_bool = false;
	var_102_bool = IsFuncExist(var_93_object, "IsDead", 1);
	if(var_102_bool != 0) {
		bool var_103_bool; object var_104_object;
		var_93_object = var_104_object;
		func_1128(var_103_bool, var_104_object);
		if(var_103_bool != 0)
			var_99_bool = true;
	}
	if(var_99_bool != 0) {
		var_92_bool = false;
		return 4;
	}
	object var_96_object;
	@GetScene(var_96_object);
	if(var_96_object == null) {
		var_92_bool = false;
		return 4;
	}
	object var_97_object;
	var_93_object->GetScene(var_97_object);
	if(var_96_object != var_97_object) {
		var_92_bool = false;
		return 4;
	}
	var_92_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1391(int var_49_int, string var_50_string)
{
	int var_52_int;
	@GetInvItemByName(var_52_int, var_50_string);
	var_52_int = var_49_int;
}


void func_623(bool var_0_bool, bool var_1_bool, object var_49_object, object var_121_object)
{
	cvector var_65_cvector; cvector var_66_cvector; int var_67_int; object var_68_object; cvector var_69_cvector; bool var_70_bool; object var_71_object; float var_72_float; float var_73_float; float var_74_float; int var_75_int;
	@CanSee(var_1_bool, var_49_object);
	bool var_76_bool; object var_77_object;
	var_49_object = var_77_object;
	func_1193(var_76_bool, var_77_object);
	bool var_88_bool; object var_89_object;
	var_49_object = var_89_object;
	func_1169(var_88_bool, var_89_object);
	if(!var_88_bool) //@nz
		return 24;
	@Face(var_49_object);
	bool var_64_bool;
	@IsPlayerActor(var_49_object, var_64_bool);
	
	for(;;) {
		bool var_117_bool;
		func_1169(var_117_bool, var_49_object);
		if(var_117_bool != 0) {
			if(!var_1_bool) { //@nz
				@StopAsync();
				object var_120_object;
				TaskCall(5);
				func_809(var_121_object, var_120_object);
				TaskReturn();
				var_0_bool = var_121_object;
				if(var_0_bool == null) {
				} else {
						@CanSee(var_1_bool, var_0_bool);
						@Face(var_0_bool);
			}
					@ReportAttack(var_0_bool);
					@GetPosition(var_65_cvector);
					var_0_bool->GetPosition(var_66_cvector); //@t
					int var_124_int; float var_125_float;
					float var_126_float; cvector var_127_cvector; cvector var_128_cvector;
					var_66_cvector = var_127_cvector;
					var_65_cvector = var_128_cvector;
					func_1283(var_126_float, var_127_cvector, var_128_cvector);
					var_126_float = var_125_float;
					func_1440(var_124_int, var_125_float);
					var_124_int = var_67_int;
					@PlayAnimation("all", ("attack_begin" + var_67_int));
					@WaitForAnimEnd();
					if(!(var_0_bool == null)) goto Label_690;
			}
		}
		for(;;) {
			@StopAsync();
			return 24;

		}

	Label_690:
		@PlayAnimation("all", ("attack_end" + var_67_int));
		@GetScene(var_68_object);
		@GetGeometryLocator(("attack" + var_67_int), var_70_bool, var_65_cvector, var_69_cvector);
		@AddActorByType(var_71_object, "scripted", var_68_object, var_65_cvector, [0.0, 0.0, 1.0], "grenade.xml");
		object var_149_object;
		func_1277(var_149_object);
		var_71_object->SetScriptProperty("Owner", var_149_object);
		var_0_bool->GetPosition(var_66_cvector); //@t
		if(var_64_bool != 0) {
			var_64_bool = false;
			@RandVec2D(var_72_float, var_73_float);
			var_153_float = GetByIndex(var_66_cvector, 0);
			SetByIndex(var_66_cvector, 0) = (var_153_float + (var_72_float * 500));
			var_156_float = GetByIndex(var_66_cvector, 2);
			SetByIndex(var_66_cvector, 2) = (var_156_float + (var_73_float * 500));
		}
		float var_159_float; cvector var_160_cvector; cvector var_161_cvector; cvector var_162_cvector;
		var_65_cvector = var_160_cvector;
		var_66_cvector = var_161_cvector;
		func_1396(var_159_float, var_160_cvector, var_161_cvector, var_162_cvector);
		var_159_float = var_74_float;
		if(var_74_float < 0) {
			float var_208_float; int var_209_int;
			var_67_int = var_209_int;
			func_1454(var_208_float, var_209_int);
			var_208_float = var_74_float;
		} else {
		float var_230_float; int var_231_int; float var_232_float;
		var_74_float = var_232_float;
		func_1462(var_231_int, var_232_float);
		var_230_float = var_74_float;
		}
		var_71_object->SetScriptProperty("StartVelocity", (var_162_cvector * var_74_float));
		var_71_object->SetScriptProperty("DamageAmount", 0.8);
		var_71_object->SetScriptProperty("DamageType", 1);
		@WaitForAnimEnd();
		if(var_231_int == 1) {
			@irand(var_75_int, 2);
			@Speak("scream" + (var_75_int + 1));
			@PlayAnimation("all", ("scream" + (var_75_int + 1)));
			@WaitForAnimEnd();
		}
		var_71_object = null;
		var_68_object = null;
	}
	
}


// @pe
void func_1650(void)
{
	bool var_14_bool;
	func_1288(var_14_bool, "quest_d6_02", "gorbun_death");
}


void func_1396(float var_159_float, cvector var_160_cvector, cvector var_161_cvector, cvector var_162_cvector)
{
	var_173_float = GetByIndex(var_162_cvector, 0);
	var_174_float = GetByIndex(var_162_cvector, 0);
	var_176_float = GetByIndex(var_162_cvector, 2);
	var_177_float = GetByIndex(var_162_cvector, 2);
	float var_168_float = sqrt((var_173_float * var_174_float) + (var_176_float * var_177_float));
	var_180_float = GetByIndex(var_162_cvector, 1);
	var_181_float = GetByIndex(var_160_cvector, 0);
	var_182_float = GetByIndex(var_161_cvector, 0);
	var_184_float = GetByIndex(var_160_cvector, 0);
	var_185_float = GetByIndex(var_161_cvector, 0);
	var_188_float = GetByIndex(var_160_cvector, 2);
	var_189_float = GetByIndex(var_161_cvector, 2);
	var_191_float = GetByIndex(var_160_cvector, 2);
	var_192_float = GetByIndex(var_161_cvector, 2);
	float var_170_float = sqrt(((var_181_float - var_182_float) * (var_184_float - var_185_float)) + ((var_188_float - var_189_float) * (var_191_float - var_192_float)));
	var_198_float = GetByIndex(var_161_cvector, 1);
	var_199_float = GetByIndex(var_160_cvector, 1);
	float var_171_float = 500.0 / ((var_170_float * (var_180_float / var_168_float)) - (var_198_float - var_199_float));
	if(var_171_float < 0)
		var_159_float = -1;
	var_205_float = sqrt(var_171_float);
	float var_172_float = (var_170_float / var_168_float) * var_205_float;
	var_172_float = var_159_float;
}


void func_1272(bool var_50_bool)
{
	bool var_52_bool;
	@IsLoaded(var_52_bool);
	var_52_bool = var_50_bool;
}


// @pe
void func_1530(object var_12_object)
{
	object var_13_object;
	var_12_object = var_13_object;
	func_1650();
	object var_20_object;
	var_12_object = var_20_object;
	TaskCall(1);
	func_172(var_20_object);
	TaskReturn();
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


void func_1277(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


