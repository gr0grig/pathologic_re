// @GLOBALS: 0:object:,1:bool:

task task_0
{
	void OnUse(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		bool var_16_bool;
		@IsOverrideActive(var_16_bool);
		if(!var_16_bool) //@nz
			@WorkWithCorpse(var_14_bool);
	}

	// @pe
	void OnHit(object actor, int iHitType, float fDamage, float var_3_float, bool var_4_bool, bool var_5_bool, bool var_6_bool, bool var_7_bool, object var_8_object, int var_9_int, int var_10_int, bool var_11_bool, int var_12_int, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, bool var_17_bool)
	{
	}

	// @pe
	void OnPropertyChange(object var_0_object, string var_1_string, bool var_2_bool, bool var_3_bool, bool var_4_bool, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
	}

	// @pe
	void OnDeath(object actor, bool var_1_bool, bool var_2_bool, bool var_3_bool, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
	}

}


maintask task_1
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		func_2121();
		var_2_bool = false;
	
		for(;;) {
			@SetTimer(130, 0.3);
			func_264(var_12_object, var_13_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		func_160();
		object var_16_object;
		var_14_bool = var_16_object;
		func_2323();
	}

	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, int var_3_int, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		float var_19_float; bool var_20_bool;
		if(var_14_bool != 130) {
		}
		bool var_18_bool;
		@IsInWalkMode(var_18_bool);
		if(var_18_bool != 0) {
			@GetBrightness(var_19_float);
			var_20_bool = var_19_float <= 0.2;
			if(var_20_bool != var_2_bool) {
				var_2_bool = var_20_bool;
				if(var_20_bool != 0) {
					func_335(var_19_float, var_20_bool);
					@KillTimer(130);
					bool var_28_bool;
					TaskCall(3);
					func_467(var_28_bool);
					TaskReturn();
					if(var_28_bool != 0)
						func_328(var_19_float, var_20_bool);
					else
						@SetTimer(130, 0.3);
				}
			}
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_16_object;
		var_14_bool = var_16_object;
		bool var_15_bool;
		func_2184(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_160();
			object var_67_object;
			var_14_bool = var_67_object;
			func_2191(var_67_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_16_object;
		var_14_bool = var_16_object;
		bool var_15_bool;
		func_2160(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_160();
			object var_67_object;
			var_14_bool = var_67_object;
			func_2167(var_67_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool, object var_53_object)
		{
		func_160();
		object var_55_object;
		var_53_object = var_55_object;
		func_2221(var_55_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_17_object;
		var_14_object = var_17_object;
		object var_18_object;
		var_15_bool = var_18_object;
		bool var_16_bool;
		func_2249(var_16_bool, var_17_object, var_18_object);
		if(var_16_bool != 0) {
			object var_53_object;
			var_14_object = var_53_object;
			func_243();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		@RequestClearPath(var_14_bool);
	}

	void OnActorStuck(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool)
	{
		@Stop();
	}

}


task task_2
{
	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_16_object;
		var_14_bool = var_16_object;
		bool var_15_bool;
		func_2184(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_462();
			object var_66_object;
			var_14_bool = var_66_object;
			func_2191(var_66_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_16_object;
		var_14_bool = var_16_object;
		bool var_15_bool;
		func_2160(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_462();
			object var_66_object;
			var_14_bool = var_66_object;
			func_2167(var_66_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool, object var_53_object)
		{
		func_462();
		object var_54_object;
		var_53_object = var_54_object;
		func_2221(var_54_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_17_object;
		var_14_object = var_17_object;
		object var_18_object;
		var_15_bool = var_18_object;
		bool var_16_bool;
		func_2249(var_16_bool, var_17_object, var_18_object);
		if(var_16_bool != 0) {
			object var_53_object;
			var_14_object = var_53_object;
			func_372();
		}
	}

}


task task_3
{
	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		func_473();
		object var_15_object;
		var_14_bool = var_15_object;
		func_2323();
	}

	// @pe
	void OnSee(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_16_object;
		var_14_bool = var_16_object;
		bool var_15_bool;
		func_2184(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_473();
			object var_66_object;
			var_14_bool = var_66_object;
			func_2191(var_66_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, bool var_4_bool, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_16_object;
		var_14_bool = var_16_object;
		bool var_15_bool;
		func_2160(var_15_bool, var_16_object);
		if(var_15_bool != 0) {
			func_473();
			object var_66_object;
			var_14_bool = var_66_object;
			func_2167(var_66_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool, object var_53_object)
		{
		func_473();
		object var_54_object;
		var_53_object = var_54_object;
		func_2221(var_54_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_17_object;
		var_14_object = var_17_object;
		object var_18_object;
		var_15_bool = var_18_object;
		bool var_16_bool;
		func_2249(var_16_bool, var_17_object, var_18_object);
		if(var_16_bool != 0) {
			object var_53_object;
			var_14_object = var_53_object;
			func_513();
		}
	}

}


task task_4
{
}


task task_5
{
	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_15_object;
		var_14_bool = var_15_object;
		func_2208(var_15_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object, object var_6_object, int var_7_int, int var_8_int, bool var_9_bool, int var_10_int, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_17_object;
		var_14_object = var_17_object;
		object var_18_object;
		var_15_bool = var_18_object;
		bool var_16_bool;
		func_2249(var_16_bool, var_17_object, var_18_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, string var_4_string, object var_5_object, int var_6_int, int var_7_int, bool var_8_bool, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		if(var_14_bool == "kill")
			var_0_bool = true;
	}

}


task task_6
{
	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, object var_9_object, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_15_object;
		var_14_bool = var_15_object;
		func_2208(var_15_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, object var_9_object, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_17_object;
		var_14_object = var_17_object;
		object var_18_object;
		var_15_bool = var_18_object;
		bool var_16_bool;
		func_2249(var_16_bool, var_17_object, var_18_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, string var_9_string, bool var_10_bool, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		if(var_14_bool == "kill") {
			var_17_bool = GlobalVars[1];
			GlobalVars[1] = true;
		}
	}

}


task task_7
{
	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		object var_15_object;
		var_14_bool = var_15_object;
		func_2208(var_15_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object, object var_12_object, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		object var_17_object;
		var_14_object = var_17_object;
		object var_18_object;
		var_15_bool = var_18_object;
		bool var_16_bool;
		func_2249(var_16_bool, var_17_object, var_18_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, string var_11_string, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		if(var_14_bool == "kill") {
			var_17_bool = GlobalVars[1];
			GlobalVars[1] = true;
			func_1393(var_14_bool);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, int var_11_int, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		if(var_14_bool != 0)
			return 0;
		bool var_17_bool;
		func_1409(var_17_bool, var_1_bool);
		if(!var_17_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		@RequestClearPath(var_14_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, object var_13_object, bool var_14_bool)
	{
		func_1393(var_14_bool);
		object var_16_object;
		var_14_bool = var_16_object;
		func_2323();
	}

}


task task_8
{
	// @pe
	void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		func_1469();
		object var_17_object;
		var_14_object = var_17_object;
		func_2323();
	}

	// @pe
	void OnAttacked(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		func_1469();
		object var_17_object;
		var_14_object = var_17_object;
		func_2221(var_17_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, int var_14_int)
	{
		if(var_14_int != 0)
			return 0;
		bool var_17_bool;
		func_1462(var_17_bool, var_1_bool);
		if(!var_17_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
	{
		@RequestClearPath(var_14_object);
	}

}


// @pe
void OnHit(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, int var_15_int, float var_16_float, float var_17_float)
{
	object var_18_object;
	var_14_object = var_18_object;
	int var_19_int;
	var_15_int = var_19_int;
	float var_20_float;
	var_16_float = var_20_float;
	func_1854(var_19_int, var_20_float);
}


void OnPropertyChange(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object, string var_15_string)
{
	float var_17_float;
	if(var_15_string == "health") {
		@GetProperty("health", var_17_float);
		if(var_17_float <= 0)
			@SignalDeath(var_14_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, int var_8_int, bool var_9_bool, object var_10_object, bool var_11_bool, object var_12_object, bool var_13_bool, object var_14_object)
{
	object var_15_object;
	var_14_object = var_15_object;
	func_2294(var_15_object);
}


// @pe
void func_0(object var_16_object)
{
	func_2052();
	object var_59_object;
	var_16_object = var_59_object;
	func_9(var_59_object);
}


void func_2052(void)
{
	bool var_20_bool;
	@ClearSubContainer(0);
	func_2022(600, 1500);
	int var_19_int;
	@irand(var_19_int, 3);
	if(var_19_int != 0) {
		int var_45_int;
		func_2094(var_45_int, "bottle_weapon");
		@AddItem(var_20_bool, var_45_int, 0, var_19_int);
	}
	@irand(var_19_int, 3);
	if(var_19_int == 0) {
		@irand(var_19_int, 100);
		if(var_19_int != 0) {
			int var_56_int;
			func_2094(var_56_int, "ognemet_ammo");
			@AddItem(var_20_bool, var_56_int, 0, var_19_int);
		}
	}
}


// @pe
void func_9(object var_59_object)
{
	object var_60_object;
	var_59_object = var_60_object;
	func_32(var_60_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_534(bool var_60_bool, object var_61_object, bool var_80_bool, object var_528_object)
{
	object var_65_object;
	var_61_object = var_65_object;
	float var_64_float;
	func_1643(var_64_float, var_65_object);
	float var_63_float;
	var_64_float = var_63_float;
	bool var_72_bool; float var_73_float;
	func_1984(var_72_bool, var_73_float, 250000.0, 3240000.0);
	if(var_72_bool != 0) {
		bool var_78_bool; object var_79_object;
		var_61_object = var_79_object;
		TaskCall(5);
		func_563(var_73_float, var_80_bool, var_78_bool, var_79_object);
		TaskReturn();
		var_80_bool = var_60_bool;
	}
	bool var_526_bool; object var_527_object;
	var_61_object = var_527_object;
	TaskCall(6);
	func_679(var_526_bool, var_527_object);
	TaskReturn();
	var_528_object = var_60_bool;
}


void func_32(object var_60_object)
{
	cvector var_71_cvector; cvector var_72_cvector; cvector var_73_cvector; cvector var_74_cvector; string var_75_string; object var_76_object; bool var_77_bool; bool var_78_bool; float var_79_float; cvector var_80_cvector;
	if(var_60_object == null) {
		func_119("fdie");
	} else {
		var_60_object->GetPosition(var_71_cvector);
		@GetPosition(var_72_cvector);
		@GetDirection(var_73_cvector);
		var_74_cvector = var_72_cvector - var_71_cvector;
		var_85_float = GetByIndex(var_74_cvector, 0);
		var_86_float = GetByIndex(var_73_cvector, 0);
		var_88_float = GetByIndex(var_74_cvector, 2);
		var_89_float = GetByIndex(var_73_cvector, 2);
		if(((var_85_float * var_86_float) + (var_88_float * var_89_float)) >= 0)
			var_75_string = "fdie";
		else
			var_75_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_60_object = var_76_object;
		var_96_bool = IsFuncExist(var_60_object, "GetScriptProperty", 2);
		if(var_96_bool != 0) {
			var_60_object->HasScriptProperty(var_77_bool, "Owner");
			if(var_77_bool != 0) {
				var_60_object->GetScriptProperty(var_76_object, "Owner");
				if(var_76_object == null)
					var_60_object = var_76_object;
			}
		}
		var_103_bool = IsFuncExist(var_76_object, "@GetEyesHeight", 1);
		if(var_103_bool != 0) {
			var_76_object->GetEyesHeight(var_79_float);
			var_80_cvector = [0.0, 0.0, 0.0];
			var_104_float = GetByIndex(var_80_cvector, 1);
			var_79_float = var_104_float;
			SetByIndex(var_80_cvector, 1) = var_104_float;
			@LookAsync(var_60_object, "head", var_80_cvector);
			var_78_bool = true;
		} else {
			var_78_bool = false;

		}
		@PlayAnimation("all", var_75_string);
		@WaitForAnimEnd();
		if(var_78_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_75_string);
		@RemoveEnvelope();
		var_76_object = null;
	}
	
}


void func_2094(int var_45_int, string var_46_string)
{
	int var_48_int;
	@GetInvItemByName(var_48_int, var_46_string);
	var_48_int = var_45_int;
}


void func_563(bool var_0_bool, bool var_78_bool, object var_79_object, object var_180_object)
{
	object var_96_object;
	var_79_object = var_96_object;
	bool var_95_bool;
	func_1842(var_95_bool, var_96_object);
	bool var_107_bool; object var_108_object;
	func_1784(var_107_bool, var_108_object);
	if(!var_107_bool) { //@nz
		var_78_bool = false;
		return 14;
	}
	@Face(var_108_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_112_bool; object var_113_object;
	var_79_object = var_113_object;
	func_1784(var_112_bool, var_113_object);
	if(!var_112_bool) { //@nz
		@StopAsync();
		var_78_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_88_object;
	@GetScene(var_88_object);
	cvector var_89_cvector;
	bool var_90_bool;
	@GetGeometryLocator("knife", var_90_bool, var_89_cvector);
	object var_91_object;
	@AddActorByType(var_91_object, "scripted", var_88_object, var_89_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_122_object;
	func_1937(var_122_object);
	var_91_object->SetScriptProperty("Owner", var_122_object);
	cvector var_92_cvector;
	var_79_object->GetPosition(var_92_cvector);
	float var_93_float;
	var_79_object->GetEyesHeight(var_93_float);
	var_125_float = GetByIndex(var_92_cvector, 1);
	SetByIndex(var_92_cvector, 1) = (var_125_float + (var_93_float - 10));
	cvector var_128_cvector; cvector var_129_cvector; cvector var_130_cvector;
	var_89_cvector = var_129_cvector;
	var_92_cvector = var_130_cvector;
	func_2099(var_128_cvector, var_129_cvector, var_130_cvector, 2000.0);
	cvector var_94_cvector;
	var_128_cvector = var_94_cvector;
	var_91_object->SetScriptProperty("StartDirection", var_94_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_78_bool = true;
		return 14;
	}
	bool var_175_bool; object var_176_object;
	var_79_object = var_176_object;
	func_1784(var_175_bool, var_176_object);
	if(!var_175_bool) { //@nz
		var_78_bool = false;
		return 14;
	}
	bool var_178_bool; object var_179_object;
	var_79_object = var_179_object;
	TaskCall(6);
	func_679(var_178_bool, var_179_object);
	TaskReturn();
	var_180_object = var_78_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_2099(cvector var_128_cvector, cvector var_129_cvector, cvector var_130_cvector, float var_131_float)
{
	cvector var_137_cvector = var_130_cvector - var_129_cvector;
	float var_138_float = 250000;
	var_142_float = GetByIndex(var_137_cvector, 1);
	float var_139_float = (var_142_float * 1000) - (var_131_float * var_131_float);
	float var_140_float = var_137_cvector | var_137_cvector;
	float var_146_float; float var_147_float; float var_148_float; float var_149_float;
	var_138_float = var_147_float;
	var_139_float = var_148_float;
	var_140_float = var_149_float;
	func_1950(var_146_float, var_147_float, var_148_float, var_149_float);
	float var_141_float = sqrt(var_146_float);
	var_128_cvector = (var_137_cvector + (([0.0, 500.0, 0.0] * var_141_float) * var_141_float)) / var_141_float;
}


void func_1078(bool var_3_bool)
{
	var_3_bool = true;
}


void func_1080(bool var_493_bool, float var_494_float)
{
	float var_497_float; bool var_498_bool;
	@rand(var_497_float);
	if(var_497_float < var_494_float) {

		for(;;) {
			@IsAnimationPlaying(var_498_bool);
			if(!var_498_bool) { //@nz
			} else {
				bool var_501_bool;
				func_1144(var_498_bool, var_501_bool);
				if(var_501_bool != 0) {
					var_493_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_493_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
}


void func_2121(void)
{
	var_14_object = GlobalVars[0];
	object var_15_object;
	func_1992(var_15_object);
	var_15_object = var_14_object;
	GlobalVars[0] = var_14_object;
}


void func_1104(bool var_0_bool, bool var_321_bool, float var_322_float)
{
	bool var_328_bool; cvector var_329_cvector; cvector var_330_cvector; cvector var_331_cvector; float var_332_float;
	
	for(;;) {
		@IsAnimationPlaying(var_328_bool);
		if(!var_328_bool) //@nz
			break;
		bool var_334_bool;
		func_1144(var_332_float, var_334_bool);
		if(var_334_bool != 0) {
			var_321_bool = true;
			return 10;
		}
		bool var_359_bool;
		func_1784(var_359_bool, var_0_bool);
		if(!var_359_bool) { //@nz
			var_321_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_329_cvector); //@t
		@GetPFPosition(var_330_cvector);
		var_331_cvector = var_329_cvector - var_330_cvector;
		var_332_float = var_331_cvector | var_331_cvector;
		if(var_332_float < (var_322_float * var_322_float)) {
			bool var_364_bool; float var_365_float;
			var_322_float = var_365_float;
			func_998(var_331_cvector, var_332_float, var_364_bool, var_365_float);
			var_321_bool = true;
			return 10;
		}
		@sync();
	}
	var_321_bool = false;
}


void func_2128(bool var_17_bool, object var_18_object)
{
	string var_22_string;
	bool var_23_bool; object var_24_object;
	func_1784(var_23_bool, var_24_object);
	if(!var_23_bool) { //@nz
		var_17_bool = false;
		return 4;
	}
	var_58_object = GlobalVars[0];
	bool var_21_bool;
	var_58_object->in(var_21_bool, var_24_object);
	if(var_21_bool != 0) {
		var_17_bool = true;
		return 4;
	}
	bool var_60_bool; object var_61_object;
	func_1651(var_60_bool, var_61_object, "class");
	if(var_60_bool != 0) {
		var_61_object->GetProperty("class", var_22_string);
		if(var_22_string == "grabitel") {
			var_17_bool = false;
			return 4;
		}
	}
	var_17_bool = true;
}


void func_1624(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1631(string var_596_string)
{
	var_596_string = "walk";
}


void func_1633(string var_597_string)
{
	var_597_string = "run";
}


// @pe
void func_1635(string var_435_string, int var_436_int)
{
	if(var_436_int == 1)
		var_435_string = "fire";
	var_435_string = "phys";
}


void func_1643(float var_64_float, object var_65_object)
{
	cvector var_69_cvector;
	@GetPosition(var_69_cvector);
	cvector var_70_cvector;
	var_65_object->GetPosition(var_70_cvector);
	var_64_float = (var_70_cvector - var_69_cvector) | (var_70_cvector - var_69_cvector);
}


// @pe
void func_2160(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_2128(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


void func_1651(bool var_30_bool, object var_31_object, string var_32_string)
{
	var_37_bool = IsFuncExist(var_31_object, "HasProperty", 2);
	if(!var_37_bool) { //@nz
		var_30_bool = false;
		return 2;
	}
	bool var_34_bool;
	var_31_object->HasProperty(var_32_string, var_34_bool);
	var_34_bool = var_30_bool;
}


// @pe
void func_119(string var_82_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	@PlayAnimation("all", var_82_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_82_string);
	@RemoveEnvelope();
}


// @pe
void func_2167(object var_66_object)
{
	TaskCall(4);
	bool var_67_bool;
	object var_68_object;
	func_534(var_14_bool, var_68_object, var_67_bool, var_68_object);
	TaskReturn();
	if(var_67_bool != 0) {
		object var_540_object;
		var_66_object = var_540_object;
		TaskCall(8);
		func_1420(var_543_bool, var_540_object);
		TaskReturn();
	}
	@ResetAAS();
}


void func_1144(bool var_0_bool, bool var_334_bool)
{
	cvector var_340_cvector; cvector var_341_cvector;
	bool var_345_bool;
	func_1784(var_345_bool, var_0_bool);
	if(!var_345_bool) { //@nz
		var_334_bool = false;
		return 10;
	}
	bool var_348_bool;
	float var_344_float;
	func_1196(var_344_float, var_348_bool);
	if(var_348_bool != 0) {
		var_0_bool->GetPFPosition(var_340_cvector); //@t
		@GetPFPosition(var_341_cvector);
		var_0_bool->GetAttackDistance(var_344_float); //@t
		var_344_float += 50;
		if(((var_340_cvector - var_341_cvector) | (var_340_cvector - var_341_cvector)) <= (var_344_float * var_344_float)) {
			func_1177(var_344_float);
			var_334_bool = true;
			return 10;
		}
	}
	var_334_bool = false;
}


void func_1663(float var_407_float, object var_408_object, float var_409_float, int var_410_int)
{
	int var_420_int; int var_422_int;
	object var_427_object;
	var_408_object = var_427_object;
	bool var_426_bool;
	func_1651(var_426_bool, var_427_object, "health");
	if(!var_426_bool) //@nz
		var_407_float = 0.0;
	bool var_430_bool; object var_431_object;
	func_1651(var_430_bool, var_431_object, "armor");
	if(!var_430_bool) //@nz
		var_420_int = 0;
	else
		var_431_object->GetProperty("armor", var_420_int);
	string var_435_string; int var_436_int;
	var_410_int = var_436_int;
	func_1635(var_435_string, var_436_int);
	string var_421_string = "armor_" + var_435_string;
	bool var_439_bool; object var_440_object; string var_441_string;
	var_408_object = var_440_object;
	func_1651(var_439_bool, var_440_object, var_441_string);
	if(!var_439_bool) //@nz
		var_422_int = 0;
	else
		var_408_object->GetProperty(var_441_string, var_422_int);

	float var_443_float;
	func_1943(var_443_float, ((var_420_int + var_422_int) / 100.0), (float)1);
	float var_423_float;
	var_443_float = var_423_float;
	float var_424_float;
	var_408_object->GetProperty("health", var_424_float);
	float var_453_float;
	func_1973(var_453_float, (var_424_float - (var_409_float * (1 - var_423_float))), (float)0, (float)1);
	var_408_object->SetProperty("health", var_453_float);
	float var_425_float = var_407_float;
	
}


// @pe
void func_2184(bool var_15_bool, object var_16_object)
{
	object var_18_object;
	var_16_object = var_18_object;
	bool var_17_bool;
	func_2128(var_17_bool, var_18_object);
	var_17_bool = var_15_bool;
}


// @pe
void func_2191(object var_66_object)
{
	TaskCall(4);
	bool var_67_bool;
	object var_68_object;
	func_534(var_14_bool, var_68_object, var_67_bool, var_68_object);
	TaskReturn();
	if(var_67_bool != 0) {
		object var_540_object;
		var_66_object = var_540_object;
		TaskCall(8);
		func_1420(var_543_bool, var_540_object);
		TaskReturn();
	}
	@ResetAAS();
}


void func_1177(bool var_0_bool)
{
	@Face(var_0_bool);
	@PlayAnimation("all", "bjump");
	cvector var_354_cvector;
	var_0_bool->GetPFPosition(var_354_cvector); //@t
	cvector var_355_cvector;
	@GetPFPosition(var_355_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	@SetSpeed([0.0, 0.0, 0.0]);
}


void func_160(void)
{
	func_328(var_15_bool, var_53_object);
	@KillTimer(130);
}


void func_2208(object var_18_object)
{
	if(var_18_object == null) {
	}
	var_22_object = GlobalVars[0];
	bool var_20_bool;
	var_22_object->in(var_20_bool, var_18_object);
	if(!var_20_bool) { //@nz
		var_24_object = GlobalVars[0];
		var_24_object->add(var_18_object);
	}
}


// @pe
void func_679(bool var_178_bool, object var_179_object)
{
	var_185_bool = GlobalVars[1];
	GlobalVars[1] = false;
	object var_186_object;
	func_754(var_181_int, var_182_int, var_183_bool, var_184_int, var_178_bool, var_186_object, var_186_object, true, 200.0);
	bool var_520_bool = false;
	var_521_bool = GlobalVars[1];
	if(var_521_bool != 0) {
		if(var_3_bool != 0)
			var_520_bool = true;
	}
	if(var_520_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_525_bool = GlobalVars[1];
	var_525_bool = var_178_bool;
}


void func_1196(bool var_0_bool, bool var_313_bool)
{
	bool var_315_bool;
	var_318_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_318_bool != 0) {
		var_0_bool->IsAttacking(var_315_bool); //@t
		var_315_bool = var_313_bool;
	}
	var_313_bool = false;
}


// @pe
void func_2221(object var_17_object)
{
	object var_18_object;
	var_17_object = var_18_object;
	func_2208(var_18_object);
	bool var_25_bool; object var_26_object;
	var_17_object = var_26_object;
	func_1784(var_25_bool, var_26_object);
	if(!var_25_bool) //@nz
		return 0;
	bool var_60_bool; object var_61_object;
	TaskCall(4);
	func_534(var_14_object, var_61_object, var_60_bool, var_61_object);
	TaskReturn();
	if(var_60_bool != 0) {
		object var_533_object;
		var_17_object = var_533_object;
		TaskCall(8);
		func_1420(var_536_bool, var_533_object);
		TaskReturn();
	}
	@ResetAAS();
}


void func_1207(bool var_2_bool, object var_4_object)
{
	int var_378_int;
	if(!var_2_bool) //@nz
		return 4;
	if(var_4_object != 0) {
		if((var_4_object + -1) > 0)
			return 4;
	}
	float var_377_float;
	@rand(var_377_float);
	float var_384_float;
	func_1243(var_384_float);
	if(var_377_float < var_384_float) {
		@irand(var_378_int, var_2_bool);
		@Speak("attack" + (var_378_int + 1));
		int var_389_int;
		func_1241(var_389_int);
		var_4_object = var_389_int;
	}
}


void func_1727(bool var_466_bool, object var_467_object)
{
	bool var_470_bool; object var_471_object;
	func_1651(var_470_bool, var_471_object, "health");
	if(!var_470_bool) //@nz
		var_466_bool = false;
	float var_469_float;
	var_471_object->GetProperty("health", var_469_float);
	var_466_bool = var_469_float <= 0.0;
}


// @pe
void func_707(float var_404_float)
{
	var_404_float = 0.1;
}


// @pe
void func_710(int var_411_int)
{
	var_411_int = 1;
}


void func_2249(bool var_16_bool, object var_17_object, object var_18_object)
{
	bool var_25_bool; object var_26_object;
	func_1651(var_25_bool, var_26_object, "class");
	if(!var_25_bool) { //@nz
		var_16_bool = false;
		return 6;
	}
	string var_22_string;
	var_26_object->GetProperty("class", var_22_string);
	if(var_22_string != "grabitel") {
		var_16_bool = false;
		return 6;
	}
	bool var_23_bool;
	@CanSee(var_23_bool, var_17_object);
	float var_38_float; object var_39_object;
	var_17_object = var_39_object;
	func_1643(var_38_float, var_39_object);
	float var_24_float;
	var_38_float = var_24_float;
	bool var_46_bool = false;
	if(var_24_float <= 1000000.0) {
		bool var_49_bool = true;
		if(var_23_bool != 1) {
			var_52_bool = var_24_float <= 250000.0;
			if(var_52_bool != 1)
				var_49_bool = false;
		}
		if(var_49_bool != 0)
			var_46_bool = true;
	}
	if(var_46_bool != 0) {
		var_16_bool = true;
		return 6;
	}
	var_16_bool = false;
}


// @pe
void func_713(object var_461_object, float var_462_float)
{
	bool var_463_bool = false;
	if(var_462_float > 0) {
		bool var_466_bool; object var_467_object;
		var_461_object = var_467_object;
		func_1727(var_466_bool, var_467_object);
		if(var_466_bool != 0)
			var_463_bool = true;
	}
	if(var_463_bool != 0) {
		var_476_bool = GlobalVars[1];
		GlobalVars[1] = true;
		func_1078(var_462_float);
	}
}


void func_1743(bool var_40_bool, object var_41_object)
{
	bool var_43_bool;
	var_41_object->IsDead(var_43_bool);
	var_43_bool = var_40_bool;
}


void func_1748(bool var_29_bool, object var_30_object)
{
	if(var_30_object == null) {
		var_29_bool = false;
		return 4;
	}
	bool var_36_bool = false;
	var_39_bool = IsFuncExist(var_30_object, "IsDead", 1);
	if(var_39_bool != 0) {
		bool var_40_bool; object var_41_object;
		var_30_object = var_41_object;
		func_1743(var_40_bool, var_41_object);
		if(var_40_bool != 0)
			var_36_bool = true;
	}
	if(var_36_bool != 0) {
		var_29_bool = false;
		return 4;
	}
	object var_33_object;
	@GetScene(var_33_object);
	if(var_33_object == null) {
		var_29_bool = false;
		return 4;
	}
	object var_34_object;
	var_30_object->GetScene(var_34_object);
	if(var_33_object != var_34_object) {
		var_29_bool = false;
		return 4;
	}
	var_29_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_1239(int var_460_int)
{
	var_460_int = 0;
}


void func_1241(int var_389_int)
{
	var_389_int = 1;
}


void func_1243(float var_384_float)
{
	var_384_float = 0.5;
}


void func_754(bool var_0_bool, bool var_1_bool, bool var_2_bool, bool var_3_bool, object var_4_object, object var_186_object, bool var_187_bool, float var_188_float, bool var_243_bool)
{
	bool var_199_bool; bool var_200_bool; float var_201_float; cvector var_202_cvector; cvector var_203_cvector; bool var_204_bool; bool var_205_bool; float var_207_float; float var_208_float;
	var_1_bool = 0;
	
	for(;;) {
		@HasAnimation(var_199_bool, "all", ("attack_begin" + (var_1_bool + 1)));
		if(!var_199_bool) { //@nz
		} else {
			var_1_bool += 1;
		}
		var_2_bool = 0;

		for(;;) {
			@IsExisting3DSound(var_200_bool, ("attack" + (var_2_bool + 1)));
			if(!var_200_bool) { //@nz
			} else {
									var_2_bool += 1;
			}
			var_4_object = 0;
			var_222_bool = IsFuncExist(var_186_object, "@GetAttackDistance", 1);
			if(var_222_bool != 0) {
				var_186_object->GetAttackDistance(var_201_float);
				var_201_float += 50;
			} else {
								var_188_float = var_201_float;

			}
			if(var_201_float >= 150)
				var_201_float = 150;
			var_3_bool = false;
			var_0_bool = var_186_object;
			@IsPlayerActor(var_0_bool, var_204_bool);
			if(var_187_bool != 0)
				var_205_bool = false;
			else
				var_205_bool = true;

			for(;;) {
				bool var_227_bool = false;
				bool var_228_bool;
				func_1784(var_228_bool, var_0_bool);
				if(var_228_bool != 0) {
					if(!var_3_bool) //@nz
						var_227_bool = true;
				}
				if(var_227_bool != 0) {
					var_0_bool->GetPFPosition(var_202_cvector); //@t
					@GetPFPosition(var_203_cvector);
					var_207_float = (var_202_cvector - var_203_cvector) | (var_202_cvector - var_203_cvector);
					if(var_207_float >= ((300.0 + var_201_float) * (300.0 + var_201_float))) {
						bool var_237_bool; float var_239_float;
						var_201_float = var_239_float;
						TaskCall(7);
						func_1269(var_243_bool, var_244_object, var_237_bool, var_0_bool, var_239_float, 3000.0, true, false);
						TaskReturn();
						if(!var_243_bool) { //@nz
						} else {
							var_205_bool = false;
					} else {
					if(var_207_float >= (var_188_float * var_188_float)) {
						if(!var_205_bool) { //@nz
							func_1921(var_0_bool);
							@PlayAnimation("all", "attack_on");
							@WaitForAnimEnd();
							@StopAsync();
							var_205_bool = true;
						}
						@rand(var_208_float);
						bool var_310_bool;
						var_312_bool = var_208_float < 0.19999999;
						if(var_312_bool != 1) {
							bool var_313_bool;
							func_1196(true, var_313_bool);
							if(var_313_bool != 1)
								var_310_bool = false;
						}
						if(var_310_bool != 0) {
							@Face(var_0_bool);
							@PlayAnimation("all", "attack_stay");
							bool var_321_bool; float var_322_float;
							func_1104(var_208_float, var_321_bool, var_322_float);
							@StopAsync();
						} else {
							@Face(var_0_bool);
							@PlayAnimation("all", "fjump");
							@WaitForAnimEnd();
							@SetSpeed([0.0, 0.0, 0.0]);
							@Stop();
							@StopAsync();
							bool var_505_bool;
							func_1196(var_208_float, var_505_bool);
							var_506_bool = !var_505_bool; //@nz
							if(var_506_bool == 0) goto Label_932;
							bool var_507_bool;
							func_1784(var_507_bool, var_0_bool);
							if(!var_507_bool) { //@nz
								goto Label_942;
							}
							var_0_bool->GetPFPosition(var_202_cvector); //@t
							@GetPFPosition(var_203_cvector);
							var_207_float = (var_202_cvector - var_203_cvector) | (var_202_cvector - var_203_cvector);
							if(!(var_207_float < (var_322_float * var_322_float))) goto Label_932;
							bool var_512_bool; float var_513_float;
							var_188_float = var_513_float;
							func_998(var_207_float, var_208_float, var_512_bool, var_513_float);
							var_514_bool = !var_512_bool; //@nz
							if(var_514_bool == 0) goto Label_932;
							goto Label_942;
					}
						bool var_515_bool; float var_516_float;
						var_188_float = var_516_float;
						func_998(var_207_float, var_208_float, var_515_bool, var_516_float);
						if(!var_515_bool) { //@nz
							goto Label_942;
						}
						var_205_bool = true;

					}
				Label_932:
					goto Label_941;
					}
					Label_941:
					}
				}
			Label_942:
				@WaitForAnimEnd();
				if(var_3_bool != 0)
					return 20;
				@PlayAnimation("all", "attack_off");
				@WaitForAnimEnd();
				if(var_204_bool != 0)
					@Sleep(2.0);
				return 20;

			}

		}

	}
}


void func_1269(bool var_0_bool, bool var_1_bool, bool var_237_bool, object var_238_object, float var_239_float, float var_240_float, bool var_241_bool, bool var_242_bool)
{
	bool var_253_bool; object var_255_object; cvector var_256_cvector; cvector var_257_cvector; float var_259_float; object var_260_object;
	var_0_bool = false;
	var_1_bool = var_238_object;
	bool var_254_bool;
	var_242_bool = var_254_bool;
	
	for(;;) {
		bool var_261_bool; object var_262_object;
		var_238_object = var_262_object;
		func_1409(var_261_bool, var_262_object);
		if(!var_261_bool) { //@nz
			var_237_bool = false;
			return 16;
		}
		var_238_object->GetPosition(var_256_cvector);
		@GetPosition(var_257_cvector);
		var_259_float = (var_256_cvector - var_257_cvector) | (var_256_cvector - var_257_cvector);
		bool var_266_bool = false;
		if(var_240_float > 0) {
			if(var_259_float > (var_240_float * var_240_float))
				var_266_bool = true;
		}
		if(var_266_bool != 0) {
			@Stop();
			var_237_bool = false;
			return 16;
		}
		if(var_259_float > (var_239_float * var_239_float)) {
			var_238_object->GetPFPosition(var_256_cvector);
			@FindPathTo(var_260_object, var_256_cvector);
			if(var_260_object != null) {
				var_260_object = var_255_object;
				var_260_object = null;
			}
			if(var_255_object != null) {
				if(var_254_bool == 0) goto Label_1322;
				var_254_bool = false;
				@RotatePath(var_255_object, var_253_bool);
				if(!var_253_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_279_string;
						func_1416(var_279_string);
						string var_280_string;
						func_1418(var_280_string);
						@FollowPath(var_255_object, var_241_bool, var_253_bool, var_279_string, var_280_string);
						if(!var_253_bool) { //@nz
							if(var_0_bool == 0) goto Label_1341;
							var_255_object = null;
						}
					EMIT "GOTO 0x53e";

					Label_1341:
						} else {
					var_255_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_253_bool);
					if(!var_253_bool) { //@nz
						if(var_0_bool != 0) {
							var_255_object = null;
							goto Label_1369;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1369;
		}
			var_260_object = null;
			goto Label_1367;

		Label_1367:
			var_255_object = null;

		}
	Label_1369:
		for(;;) {
			var_237_bool = !var_0_bool;
			return 16;

			}
	}
	
}


// @pe
void func_2294(object var_15_object)
{
	object var_16_object;
	var_15_object = var_16_object;
	TaskCall(0);
	func_0(var_16_object);
	TaskReturn();
}


void func_1784(bool var_25_bool, object var_26_object)
{
	object var_30_object;
	var_26_object = var_30_object;
	bool var_29_bool;
	func_1748(var_29_bool, var_30_object);
	if(!var_29_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_47_bool; object var_48_object;
	func_1651(var_47_bool, var_48_object, "noaccess");
	if(!var_47_bool) { //@nz
		var_25_bool = true;
		return 2;
	}
	int var_28_int;
	var_48_object->GetProperty("noaccess", var_28_int);
	var_25_bool = var_28_int == 0;
}


void func_264(bool var_0_bool, bool var_1_bool)
{
	float var_27_float; cvector var_28_cvector; cvector var_29_cvector; float var_30_float; bool var_31_bool; object var_32_object; bool var_33_bool;
	@rand(var_27_float, 0.5);
	@Sleep(var_27_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_276:
				@GetPosition(var_29_cvector);
				@GetCameraFarDistance(var_30_float);
				@GetRandomPFPointInCircle(var_28_cvector, var_29_cvector, (var_30_float * 2.5), var_31_bool);
				if(var_31_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_276;
			}
				var_1_bool = false;
		}
		}
		goto Label_293;

	Label_293:
		@FindShiftedPathTo(var_32_object, var_28_cvector);
		if(var_32_object != null) {
			@RotatePath(var_32_object, var_33_bool);
			if(var_33_bool != 0) {
				bool var_41_bool;
				func_342(var_41_bool);
				@FollowPath(var_32_object, var_41_bool, var_33_bool);
				var_32_object = null;
				if(var_33_bool != 0) {
					TaskCall(2);
					func_393();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_32_object = null;
	}
	
}


void func_1808(bool var_19_bool, object var_20_object)
{
	if(var_20_object == null) {
		var_19_bool = false;
		return 6;
	}
	object var_24_object;
	@GetScene(var_24_object);
	if(var_24_object == null) {
		var_19_bool = false;
		return 6;
	}
	object var_25_object;
	var_20_object->GetScene(var_25_object);
	if(var_24_object != var_25_object) {
		var_19_bool = false;
		return 6;
	}
	bool var_30_bool; object var_31_object;
	func_1651(var_30_bool, var_31_object, "noaccess");
	if(!var_30_bool) { //@nz
		var_19_bool = true;
		return 6;
	}
	int var_26_int;
	var_31_object->GetProperty("noaccess", var_26_int);
	var_19_bool = var_26_int == 0;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_1842(bool var_95_bool, object var_96_object)
{
	cvector var_101_cvector;
	var_96_object->GetPosition(var_101_cvector);
	cvector var_102_cvector;
	@GetPosition(var_102_cvector);
	cvector var_103_cvector = var_101_cvector - var_102_cvector;
	var_105_float = GetByIndex(var_103_cvector, 0);
	var_106_float = GetByIndex(var_103_cvector, 2);
	bool var_104_bool;
	@Rotate(var_105_float, var_106_float, var_104_bool);
	var_104_bool = var_95_bool;
}


void func_1854(object var_18_object, int var_19_int)
{
	object var_31_object; object var_32_object; cvector var_33_cvector; float var_34_float; string var_40_string;
	bool var_41_bool = false;
	if(var_19_int != 4) {
		if(var_19_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		@GetScene(var_31_object);
		@GetPosition(var_33_cvector);
		@GetEyesHeight(var_34_float);
		var_46_float = GetByIndex(var_33_cvector, 1);
		SetByIndex(var_33_cvector, 1) = (var_46_float + (var_34_float / 2));
		@AddActorByType(var_32_object, "scripted", var_31_object, var_33_cvector, [0.0, 0.0, 1.0], "blood.xml");
		var_32_object = null;
		var_31_object = null;
	}
	if(var_18_object == null)
		return 20;
	int var_35_int;
	@GetSecondaryAnimationType(var_35_int);
	if(var_35_int < 0)
		return 20;
	cvector var_36_cvector;
	var_18_object->GetPosition(var_36_cvector);
	cvector var_37_cvector;
	@GetPosition(var_37_cvector);
	cvector var_38_cvector;
	@GetDirection(var_38_cvector);
	cvector var_39_cvector = var_37_cvector - var_36_cvector;
	var_55_float = GetByIndex(var_39_cvector, 0);
	var_56_float = GetByIndex(var_38_cvector, 0);
	var_58_float = GetByIndex(var_39_cvector, 2);
	var_59_float = GetByIndex(var_38_cvector, 2);
	if(((var_55_float * var_56_float) + (var_58_float * var_59_float)) >= 0)
		var_40_string = "fhit";
	else
		var_40_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_40_string + "1"), (var_40_string + "2"), -10);
	
}


void func_328(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = false;
	@Stop();
	@StopGroup0();
}


void func_335(bool var_0_bool, bool var_1_bool)
{
	var_0_bool = true;
	var_1_bool = true;
	@Stop();
	@StopGroup0();
}


void func_342(bool var_41_bool)
{
	var_41_bool = false;
}


void func_1393(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_1921(object var_299_object)
{
	cvector var_303_cvector;
	var_299_object->GetPosition(var_303_cvector);
	cvector var_304_cvector;
	@GetPosition(var_304_cvector);
	cvector var_305_cvector = var_303_cvector - var_304_cvector;
	var_306_float = GetByIndex(var_305_cvector, 0);
	var_307_float = GetByIndex(var_305_cvector, 2);
	@RotateAsync(var_306_float, var_307_float);
}


// @pe
void func_1409(bool var_261_bool, object var_262_object)
{
	object var_264_object;
	var_262_object = var_264_object;
	bool var_263_bool;
	func_1784(var_263_bool, var_264_object);
	var_263_bool = var_261_bool;
}


void func_1416(string var_279_string)
{
	var_279_string = "walk";
}


void func_393(void)
{
	int var_52_int; int var_53_int; bool var_54_bool; float var_55_float; bool var_56_bool;
	@WaitForAnimEnd();
	bool var_57_bool;
	func_1932(var_57_bool);
	if(!var_57_bool) //@nz
		return 14;
	int var_61_int;
	func_2005(var_61_int);
	int var_50_int;
	var_61_int = var_50_int;
	int var_51_int = 0;
	
	for(;;) {
		bool var_74_bool = false;
		if(var_51_int < 5) {
			bool var_77_bool;
			func_1932(var_77_bool);
			if(var_77_bool != 0)
				var_74_bool = true;
		}
		if(var_74_bool != 0) {
			@irand(var_52_int, 3);
			if(var_52_int == 0) {
				if(var_50_int == 0) goto Label_440;
				@irand(var_53_int, var_50_int);
				string var_83_string; int var_84_int;
				var_53_int = var_84_int;
				func_1998(var_83_string, var_84_int);
				@PlayAnimation("all", var_83_string);
				@WaitForAnimEnd(var_54_bool);
				if(!var_54_bool) { //@nz
				} else {
			} else {
			if(var_52_int == 1) {
				@rand(var_55_float, 4);
				@Sleep((var_55_float + 1), var_56_bool);
				if(!var_56_bool) { //@nz
					goto Label_461;
				}
			} else if(var_51_int != 0) {
				goto Label_461;
			}
			}
				var_51_int += 1;
			}
		}
	Label_461:
		return 14;

	}
	
}


void func_1418(string var_280_string)
{
	var_280_string = "run";
}


void func_1932(bool var_57_bool)
{
	bool var_59_bool;
	@IsLoaded(var_59_bool);
	var_59_bool = var_57_bool;
}


void func_1420(bool var_2_bool, object var_533_object)
{
	var_2_bool = false;
	bool var_538_bool;
	@Sleep(2, var_538_bool);
	if(!var_538_bool) //@nz
		return 2;
	var_2_bool = true;
	bool var_541_bool; object var_542_object;
	bool var_537_bool;
	func_1500(var_537_bool, var_538_bool, var_541_bool, var_542_object, (float)200, (float)2000, true, true);
	if(!var_541_bool) //@nz
		return 2;
	var_2_bool = false;
	@Face(var_542_object);
	@WaitForAnimEnd(var_538_bool);
	if(!var_538_bool) { //@nz
		@StopAsync();
		return 2;
	}
	@PlayAnimation("all", "hunt");
	@WaitForAnimEnd(var_538_bool);
	@StopAsync();
	if(!var_538_bool) //@nz
		return 2;
}


void func_1937(object var_122_object)
{
	object var_124_object;
	@self(var_124_object);
	var_124_object = var_122_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1943(float var_443_float, float var_444_float, float var_445_float)
{
	if(var_444_float < var_445_float)
		var_444_float = var_443_float;
	else
		var_445_float = var_443_float;
	
}


void func_1950(float var_146_float, float var_147_float, float var_148_float, float var_149_float)
{
	float var_152_float; float var_153_float;
	var_152_float = sqrt((var_148_float * var_148_float) - ((4 * var_147_float) * var_149_float));
	var_159_int = -var_148_float;
	if(((var_159_int - var_152_float) / (2 * var_147_float)) > 0) {
		var_153_float = var_146_float;
		return 4;
	}
	var_165_int = -var_148_float;
	var_146_float = (var_165_int + var_152_float) / (2 * var_147_float);
}


// @pe
void func_1973(float var_453_float, float var_454_float, float var_455_float, float var_456_float)
{
	if(var_454_float < var_455_float) {
		var_455_float = var_453_float;
		return 0;
	}
	if(var_454_float > var_456_float) {
		var_456_float = var_453_float;
		return 0;
	}
	var_454_float = var_453_float;
}


// @pe
void func_1462(bool var_17_bool, object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_1808(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
}


void func_1469(void)
{
	if(var_2_bool != 0) {
		func_1624(var_14_object);
	} else {
		@StopGroup0();
		@StopAnimation();
		@StopAsync();
	}
	
}


void func_959(bool var_0_bool, float var_393_float, int var_394_int)
{
	object var_398_object; float var_399_float; float var_400_float;
	@GetVictim((var_393_float * 0.9), var_398_object);
	@ReportAttack(var_0_bool);
	if(var_398_object == var_0_bool) {
		float var_404_float; object var_405_object; int var_406_int;
		var_398_object = var_405_object;
		var_394_int = var_406_int;
		func_707(var_406_int);
		var_404_float = var_399_float;
		float var_407_float; object var_408_object; float var_409_float; int var_410_int;
		var_398_object = var_408_object;
		int var_411_int; object var_412_object; int var_413_int;
		var_398_object = var_412_object;
		var_394_int = var_413_int;
		func_710(var_413_int);
		var_411_int = var_410_int;
		func_1663(var_407_float, var_408_object, var_409_float, var_410_int);
		var_407_float = var_400_float;
		int var_460_int;
		func_1239(var_460_int);
		@ReportHit(var_0_bool, var_460_int, var_400_float, var_409_float);
		object var_461_object; float var_462_float;
		var_398_object = var_461_object;
		var_400_float = var_462_float;
		func_713(var_461_object, var_462_float);
	}
}
EMIT "Stack[-3] = 0";


// @pe
void func_1984(bool var_72_bool, float var_73_float, float var_74_float, float var_75_float)
{
	var_72_bool = false;
	if(var_73_float >= var_74_float) {
		if(var_73_float <= var_75_float)
			var_72_bool = true;
	}
}


void func_1992(object var_15_object)
{
	object var_17_object;
	@CreateObjectSet(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_462(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1998(string var_67_string, int var_68_int)
{
	string var_70_string = "idle";
	if(var_68_int != 0)
		var_70_string += var_68_int;
	var_70_string = var_67_string;
}


void func_467(bool var_28_bool)
{
	bool var_30_bool;
	@Sleep(5, var_30_bool);
	var_28_bool = !var_30_bool;
}


void func_2005(int var_61_int)
{
	int var_64_int; bool var_65_bool;
	var_64_int = 0;
	
	for(;;) {
		string var_67_string; int var_68_int;
		var_64_int = var_68_int;
		func_1998(var_67_string, var_68_int);
		@HasAnimation(var_65_bool, "all", var_67_string);
		if(!var_65_bool) //@nz
			break;
		var_64_int += 1;
	}
	var_64_int = var_61_int;
}


void func_473(void)
{
	@StopGroup0();
}


void func_1500(bool var_0_bool, bool var_1_bool, bool var_541_bool, object var_542_object, float var_543_float, float var_544_float, bool var_545_bool, bool var_546_bool)
{
	bool var_555_bool; object var_557_object; cvector var_558_cvector; cvector var_559_cvector; float var_561_float; object var_562_object;
	var_0_bool = false;
	var_1_bool = var_542_object;
	bool var_556_bool;
	var_546_bool = var_556_bool;
	
	for(;;) {
		bool var_563_bool; object var_564_object;
		var_542_object = var_564_object;
		func_1462(var_563_bool, var_564_object);
		if(!var_563_bool) { //@nz
			var_541_bool = false;
			return 16;
		}
		var_542_object->GetPosition(var_558_cvector);
		@GetPosition(var_559_cvector);
		var_561_float = (var_558_cvector - var_559_cvector) | (var_558_cvector - var_559_cvector);
		bool var_583_bool = false;
		if(var_544_float > 0) {
			if(var_561_float > (var_544_float * var_544_float))
				var_583_bool = true;
		}
		if(var_583_bool != 0) {
			@Stop();
			var_541_bool = false;
			return 16;
		}
		if(var_561_float > (var_543_float * var_543_float)) {
			var_542_object->GetPFPosition(var_558_cvector);
			@FindPathTo(var_562_object, var_558_cvector);
			if(var_562_object != null) {
				var_562_object = var_557_object;
				var_562_object = null;
			}
			if(var_557_object != null) {
				if(var_556_bool == 0) goto Label_1553;
				var_556_bool = false;
				@RotatePath(var_557_object, var_555_bool);
				if(!var_555_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_596_string;
						func_1631(var_596_string);
						string var_597_string;
						func_1633(var_597_string);
						@FollowPath(var_557_object, var_545_bool, var_555_bool, var_596_string, var_597_string);
						if(!var_555_bool) { //@nz
							if(var_0_bool == 0) goto Label_1572;
							var_557_object = null;
						}
					EMIT "GOTO 0x625";

					Label_1572:
						} else {
					var_557_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_555_bool);
					if(!var_555_bool) { //@nz
						if(var_0_bool != 0) {
							var_557_object = null;
							goto Label_1600;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1600;
		}
			var_562_object = null;
			goto Label_1598;

		Label_1598:
			var_557_object = null;

		}
	Label_1600:
		for(;;) {
			var_541_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_998(bool var_0_bool, bool var_1_bool, bool var_364_bool, float var_365_float)
{
	int var_368_int;
	@irand(var_368_int, var_1_bool);
	var_368_int += 1;
	@Face(var_0_bool);
	@SetAttackState(true);
	@PlayAnimation("all", ("attack_begin" + var_368_int));
	@WaitForAnimEnd();
	bool var_369_bool;
	func_1207(var_368_int, var_369_bool);
	bool var_390_bool;
	func_1784(var_390_bool, var_0_bool);
	if(!var_390_bool) { //@nz
		@StopAsync();
		var_364_bool = false;
		return 4;
	}
	float var_393_float; int var_394_int;
	var_365_float = var_393_float;
	var_368_int = var_394_int;
	func_959(var_369_bool, var_393_float, var_394_int);
	@HasAnimation(var_369_bool, "all", ("attack_middle" + var_368_int));
	if(var_369_bool != 0) {
		@PlayAnimation("all", ("attack_middle" + var_368_int));
		@WaitForAnimEnd();
		bool var_484_bool;
		func_1784(var_484_bool, var_0_bool);
		if(!var_484_bool) { //@nz
			@StopAsync();
			var_364_bool = false;
			return 4;
		}
		float var_487_float; int var_488_int;
		var_365_float = var_487_float;
		var_368_int = var_488_int;
		func_959(var_369_bool, var_487_float, var_488_int);
	}
	@SetAttackState(false);
	@PlayAnimation("all", ("attack_end" + var_368_int));
	bool var_493_bool;
	func_1080(var_493_bool, 0.75);
	@StopAsync();
	var_364_bool = true;
}


void func_2022(int var_22_int, int var_23_int)
{
	int var_29_int;
	if(var_22_int > var_23_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 8;
	}
	int var_28_int = 0;
	if(var_22_int != var_23_int) {
		@irand(var_29_int, (var_23_int - var_22_int));
	} else if(var_22_int == 0) {
		return 8;
	}
	var_28_int += var_22_int;
	if(var_28_int == 0)
		return 8;
	int var_30_int;
	@GetInvItemByName(var_30_int, "Money");
	bool var_31_bool;
	@AddItem(var_31_bool, var_30_int, 0, var_28_int);
	
}


