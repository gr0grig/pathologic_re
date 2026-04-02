// @GLOBALS: 0:bool:,1:object:

task task_0
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_17_object;
		var_16_bool = var_17_object;
		func_2933(var_17_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object, int var_5_int, int var_6_int, bool var_7_bool, float var_8_float, int var_9_int, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		func_2974(var_19_bool, var_20_object, var_21_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string, object var_2_object, int var_3_int, int var_4_int, bool var_5_bool, float var_6_float, int var_7_int, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == "kill")
			var_0_bool = true;
	}

}


task task_1
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_17_object;
		var_16_bool = var_17_object;
		func_2933(var_17_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, object var_7_object, object var_8_object, bool var_9_bool, bool var_10_bool, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		func_2974(var_19_bool, var_20_object, var_21_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, string var_7_string, bool var_8_bool, object var_9_object, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == "kill") {
			var_19_bool = GlobalVars[0];
			GlobalVars[0] = true;
		}
	}

}


task task_2
{
	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_17_object;
		var_16_bool = var_17_object;
		func_2933(var_17_object);
	}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, object var_11_object, bool var_12_bool, bool var_13_bool, bool var_14_bool, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		func_2974(var_19_bool, var_20_object, var_21_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, string var_10_string, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == "kill") {
			var_19_bool = GlobalVars[0];
			GlobalVars[0] = true;
			func_950(var_16_bool);
		}
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, int var_10_int, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		if(var_16_bool == 1) {
			func_2730(var_1_object);
		} else {
			int var_24_int;
			func_1094(var_15_object, var_24_int, var_24_int);
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_bool) {
			if(!var_2_int) //@nz
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_int = true;
			object var_20_object;
			var_16_bool = var_20_object;
			func_2426(var_20_object);
		}
	}

	// @pe
	void OnStopSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		bool var_17_bool = false;
		if(var_1_object == var_16_bool) {
			if(var_2_int != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			var_2_int = false;
			@UnlookAsync("head");
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, object var_10_object, bool var_11_bool, bool var_12_bool, bool var_13_bool, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		func_950(var_16_bool);
		object var_21_object;
		var_16_bool = var_21_object;
		func_3056();
	}

}


maintask task_3
{
	// @pe
	void init(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		func_2833();
		var_2_int = false;
	
		for(;;) {
			@SetTimer(130, 0.3);
			func_1260(var_14_object, var_15_bool);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		func_1156();
		object var_18_object;
		var_16_bool = var_18_object;
		func_3056();
	}

	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, int var_13_int, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		float var_21_float; bool var_22_bool;
		if(var_16_bool != 130) {
		}
		bool var_20_bool;
		@IsInWalkMode(var_20_bool);
		if(var_20_bool != 0) {
			@GetBrightness(var_21_float);
			var_22_bool = var_21_float <= 0.2;
			if(var_22_bool != var_2_int) {
				var_2_int = var_22_bool;
				if(var_22_bool != 0) {
					func_1338(var_21_float, var_22_bool);
					@KillTimer(130);
					bool var_30_bool;
					TaskCall(5);
					func_1488(var_30_bool);
					TaskReturn();
					if(var_30_bool != 0)
						func_1331(var_21_float, var_22_bool);
					else
						@SetTimer(130, 0.3);
				}
			}
		}
	
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2909(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_1156();
			object var_115_object;
			var_16_bool = var_115_object;
			func_2916(var_115_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2885(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_1156();
			object var_115_object;
			var_16_bool = var_115_object;
			func_2892(var_115_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, object var_59_object)
		{
		func_1156();
		object var_61_object;
		var_59_object = var_61_object;
		func_2946(var_61_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		func_2974(var_19_bool, var_20_object, var_21_object);
		if(var_19_bool != 0) {
			object var_59_object;
			var_16_bool = var_59_object;
			func_1239();
		}
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		@RequestClearPath(var_16_bool);
	}

	void OnActorStuck(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
	{
		@Stop();
	}

}


task task_4
{
	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2909(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_1483();
			object var_114_object;
			var_16_bool = var_114_object;
			func_2916(var_114_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2885(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_1483();
			object var_114_object;
			var_16_bool = var_114_object;
			func_2892(var_114_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, object var_59_object)
		{
		func_1483();
		object var_60_object;
		var_59_object = var_60_object;
		func_2946(var_60_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		func_2974(var_19_bool, var_20_object, var_21_object);
		if(var_19_bool != 0) {
			object var_59_object;
			var_16_bool = var_59_object;
			func_1381();
		}
	}

}


task task_5
{
	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		func_1494();
		object var_17_object;
		var_16_bool = var_17_object;
		func_3056();
	}

	// @pe
	void OnSee(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2909(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_1494();
			object var_114_object;
			var_16_bool = var_114_object;
			func_2916(var_114_object);
		}
	}

	// @pe
	void OnHear(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, bool var_14_bool, object var_15_object, bool var_16_bool)
	{
		object var_18_object;
		var_16_bool = var_18_object;
		bool var_17_bool;
		func_2885(var_17_bool, var_18_object);
		if(var_17_bool != 0) {
			func_1494();
			object var_114_object;
			var_16_bool = var_114_object;
			func_2892(var_114_object);
		}
	}

	// @pe
		void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool, object var_59_object)
		{
		func_1494();
		object var_60_object;
		var_59_object = var_60_object;
		func_2946(var_60_object);
		}

	// @pe
	void OnPlayerDamage(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, object var_13_object, object var_14_object, bool var_15_bool, bool var_16_bool, object var_17_object, bool var_18_bool)
	{
		object var_20_object;
		var_16_bool = var_20_object;
		object var_21_object;
		var_17_object = var_21_object;
		bool var_19_bool;
		func_2974(var_19_bool, var_20_object, var_21_object);
		if(var_19_bool != 0) {
			object var_59_object;
			var_16_bool = var_59_object;
			func_1534();
		}
	}

}


task task_6
{
	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		func_1604();
		object var_19_object;
		var_16_object = var_19_object;
		func_3056();
	}

	// @pe
	void OnAttacked(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		func_1604();
		object var_19_object;
		var_16_object = var_19_object;
		func_2946(var_19_object);
	}

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, int var_16_int)
	{
		if(var_16_int != 0)
			return 0;
		bool var_19_bool;
		func_1597(var_19_bool, var_1_object);
		if(!var_19_bool) //@nz
			var_0_bool = true;
		@KillTimer(0);
		@Stop();
	}

	// @pe
	void OnCollision(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		@RequestClearPath(var_16_object);
	}

}


task task_7
{
}


task task_8
{
	void OnUse(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
		bool var_18_bool;
		@IsOverrideActive(var_18_bool);
		if(!var_18_bool) { //@nz
			object var_20_object;
			var_16_object = var_20_object;
			func_3068(var_20_object);
		}
	}

	// @pe
	void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
	{
	}

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
	{
	}

	// @pe
	void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
	{
	}

}


// @pe
void OnHit(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float)
{
	object var_20_object;
	var_16_object = var_20_object;
	int var_21_int;
	var_17_int = var_21_int;
	float var_22_float;
	var_18_float = var_22_float;
	func_2328(var_20_object, var_21_int, var_22_float);
}


// @pe
void OnHit2(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, int var_17_int, float var_18_float, float var_19_float, cvector var_20_cvector, cvector var_21_cvector)
{
	object var_22_object;
	var_16_object = var_22_object;
	int var_23_int;
	var_17_int = var_23_int;
	float var_24_float;
	var_18_float = var_24_float;
	cvector var_25_cvector;
	var_20_cvector = var_25_cvector;
	cvector var_26_cvector;
	var_21_cvector = var_26_cvector;
	func_2396(var_24_float, var_25_cvector, var_26_cvector);
}


void OnPropertyChange(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object, string var_17_string)
{
	float var_19_float;
	if(var_17_string == "health") {
		@GetProperty("health", var_19_float);
		if(var_19_float <= 0)
			@SignalDeath(var_16_object);
	}
}


// @pe
void OnDeath(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool, object var_16_object)
{
	object var_17_object;
	var_16_object = var_17_object;
	func_3007(var_17_object);
}


void OnUnload(bool var_0_bool, object var_1_object, int var_2_int, int var_3_int, bool var_4_bool, float var_5_float, int var_6_int, bool var_7_bool, object var_8_object, bool var_9_bool, bool var_10_bool, bool var_11_bool, bool var_12_bool, bool var_13_bool, object var_14_object, bool var_15_bool)
{
	object var_16_object;
	func_2591(var_16_object);
	@RemoveActor(var_16_object);
	@Hold();
}


void func_0(bool var_0_bool, bool var_92_bool, object var_93_object, object var_210_object)
{
	object var_109_object;
	var_93_object = var_109_object;
	func_2730(var_109_object);
	bool var_114_bool; object var_115_object;
	var_93_object = var_115_object;
	func_2275(var_114_bool, var_115_object);
	bool var_128_bool; object var_129_object;
	func_2207(var_128_bool, var_129_object);
	if(!var_128_bool) { //@nz
		var_92_bool = false;
		return 14;
	}
	func_2739();
	@Face(var_129_object);
	@PlayAnimation("all", "aattack_begin1");
	@WaitForAnimEnd();
	bool var_137_bool; object var_138_object;
	var_93_object = var_138_object;
	func_2207(var_137_bool, var_138_object);
	if(!var_137_bool) { //@nz
		@StopAsync();
		var_92_bool = false;
		return 14;
	}
	@PlayAnimation("all", "aattack_end1");
	object var_102_object;
	@GetScene(var_102_object);
	cvector var_103_cvector;
	bool var_104_bool;
	@GetGeometryLocator("knife", var_104_bool, var_103_cvector);
	object var_105_object;
	@AddActorByType(var_105_object, "scripted", var_102_object, var_103_cvector, [0.0, 0.0, 1.0], "grabitel_knife.xml");
	object var_147_object;
	func_2591(var_147_object);
	var_105_object->SetScriptProperty("Owner", var_147_object);
	var_105_object->SetScriptProperty("Target", var_93_object);
	cvector var_106_cvector;
	var_93_object->GetPosition(var_106_cvector);
	float var_107_float;
	var_93_object->GetEyesHeight(var_107_float);
	var_149_float = GetByIndex(var_106_cvector, 1);
	SetByIndex(var_106_cvector, 1) = (var_149_float + (var_107_float - 10));
	cvector var_152_cvector; cvector var_153_cvector; cvector var_154_cvector;
	var_103_cvector = var_153_cvector;
	var_106_cvector = var_154_cvector;
	func_2780(var_152_cvector, var_153_cvector, var_154_cvector, 2000.0);
	cvector var_108_cvector;
	var_152_cvector = var_108_cvector;
	var_105_object->SetScriptProperty("StartDirection", var_108_cvector);
	@WaitForAnimEnd();
	@StopAsync();
	if(false != 0) {
		var_92_bool = true;
		return 14;
	}
	bool var_205_bool; object var_206_object;
	var_93_object = var_206_object;
	func_2207(var_205_bool, var_206_object);
	if(!var_205_bool) { //@nz
		var_92_bool = false;
		return 14;
	}
	bool var_208_bool; object var_209_object;
	var_93_object = var_209_object;
	TaskCall(1);
	func_126(var_208_bool, var_209_object);
	TaskReturn();
	var_210_object = var_92_bool;
}
EMIT "Stack[-4] = 0";
EMIT "Stack[-7] = 0";


void func_3081(int var_66_int, int var_67_int)
{
	if(var_66_int > var_67_int) {
		@Trace("GenerateMoney: iMin > iMax");
		return 4;
	}
	int var_70_int = 0;
	if(var_66_int != var_67_int) {
		@irand(var_70_int, (var_67_int - var_66_int));
	} else if(var_66_int == 0) {
		return 4;
	}
	var_70_int += var_66_int;
	if(var_70_int == 0)
		return 4;
	int var_78_int;
	func_3222(var_78_int, "Money");
	bool var_71_bool;
	@AddItem(var_71_bool, var_78_int, 0, var_70_int);
	
}


void func_2062(float var_545_float, object var_546_object, float var_547_float, int var_548_int)
{
	int var_558_int; int var_560_int;
	object var_565_object;
	var_546_object = var_565_object;
	bool var_564_bool;
	func_2028(var_564_bool, var_565_object, "health");
	if(!var_564_bool) //@nz
		var_545_float = 0.0;
	bool var_568_bool; object var_569_object;
	func_2028(var_568_bool, var_569_object, "armor");
	if(!var_568_bool) //@nz
		var_558_int = 0;
	else
		var_569_object->GetProperty("armor", var_558_int);
	string var_573_string; int var_574_int;
	var_548_int = var_574_int;
	func_1994(var_573_string, var_574_int);
	string var_559_string = "armor_" + var_573_string;
	bool var_579_bool; object var_580_object; string var_581_string;
	var_546_object = var_580_object;
	func_2028(var_579_bool, var_580_object, var_581_string);
	if(!var_579_bool) //@nz
		var_560_int = 0;
	else
		var_546_object->GetProperty(var_581_string, var_560_int);

	float var_583_float;
	func_2607(var_583_float, ((var_558_int + var_560_int) / 100.0), (float)1);
	float var_561_float;
	var_583_float = var_561_float;
	float var_562_float;
	var_546_object->GetProperty("health", var_562_float);
	float var_563_float = var_547_float * (1 - var_561_float);
	float var_593_float;
	func_2638(var_593_float, (var_562_float - var_563_float), (float)0, (float)1);
	var_546_object->SetProperty("health", var_593_float);
	bool var_599_bool; object var_600_object;
	var_546_object = var_600_object;
	func_2023(var_599_bool, var_600_object);
	if(var_599_bool != 0) {
		float var_601_float = -var_563_float;
		func_2703(var_601_float);
	}
	var_563_float = var_545_float;
	
}


void func_1555(int var_2_int, object var_703_object)
{
	var_2_int = false;
	bool var_708_bool;
	@Sleep(1, var_708_bool);
	if(!var_708_bool) //@nz
		return 2;
	var_2_int = true;
	bool var_711_bool; object var_712_object;
	bool var_707_bool;
	func_1635(var_707_bool, var_708_bool, var_711_bool, var_712_object, (float)200, (float)2000, true, true);
	if(!var_711_bool) //@nz
		return 2;
	var_2_int = false;
	@Face(var_712_object);
	@WaitForAnimEnd(var_708_bool);
	if(!var_708_bool) { //@nz
		@StopAsync();
		return 2;
	}
	@PlayAnimation("all", "hunt");
	@WaitForAnimEnd(var_708_bool);
	@StopAsync();
	if(!var_708_bool) //@nz
		return 2;
}


void func_2591(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_2597(cvector var_48_cvector, cvector var_49_cvector)
{
	float var_57_float = sqrt(var_49_cvector | var_49_cvector);
	if(var_57_float < 0.000001)
		var_48_cvector = [0.0, 0.0, 0.0];
	var_48_cvector = var_49_cvector / var_57_float;
}


void func_3112(string var_140_string)
{
	object var_144_object;
	@CreateInvItem(var_144_object);
	var_144_object->SetItemName(var_140_string);
	var_144_object->SetProperty("Organ", 1);
	int var_145_int;
	var_144_object->GetItemID(var_145_int);
	bool var_146_bool;
	@AddItem(var_146_bool, var_144_object, 0, 1);
}
EMIT "Stack[-3] = 0";


// @pe
void func_2607(float var_583_float, float var_584_float, float var_585_float)
{
	if(var_584_float < var_585_float)
		var_584_float = var_583_float;
	else
		var_585_float = var_583_float;
	
}


// @pe
void func_2614(float var_172_float, float var_173_float, float var_174_float, float var_175_float)
{
	var_172_float = (var_174_float * var_174_float) - ((4 * var_173_float) * var_175_float);
}


void func_3129(void)
{
	int var_134_int;
	func_3062(var_134_int);
	if(var_134_int != 1) {
	}
	func_3112("liver");
	func_3112("kidney");
	func_3112("heart");
	func_3112("blood");
}


// @pe
void func_1597(bool var_19_bool, object var_20_object)
{
	object var_22_object;
	var_20_object = var_22_object;
	bool var_21_bool;
	func_2231(var_21_bool, var_22_object);
	var_21_bool = var_19_bool;
}


void func_2621(float var_186_float, float var_187_float, float var_188_float, float var_190_float)
{
	float var_192_float;
	var_193_int = -var_188_float;
	if(((var_193_int - var_190_float) / (2 * var_187_float)) > 0) {
		var_192_float = var_186_float;
		return 2;
	}
	var_199_int = -var_188_float;
	var_186_float = (var_199_int + var_190_float) / (2 * var_187_float);
}


void func_1604(void)
{
	if(var_2_int != 0) {
		func_1759(var_16_object);
	} else {
		@StopGroup0();
		@StopAnimation();
		@StopAsync();
	}
	
}


// @pe
void func_1094(bool var_0_bool, object var_1_object, int var_24_int)
{
	if(var_24_int != 0)
		return 0;
	bool var_27_bool;
	func_1132(var_27_bool, var_1_object);
	if(!var_27_bool) //@nz
		var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


// @pe
void func_2638(float var_51_float, float var_52_float, float var_53_float, float var_54_float)
{
	if(var_52_float < var_53_float) {
		var_53_float = var_51_float;
		return 0;
	}
	if(var_52_float > var_54_float) {
		var_54_float = var_51_float;
		return 0;
	}
	var_52_float = var_51_float;
}


void func_3153(void)
{
	@ClearSubContainer(0);
	func_3081(1500, 3000);
	func_2437("Knife", 1, 4);
	func_2437("lockpick", 1, 3);
	func_2448("rifle_ammo", 1, 3, 3);
	func_2448("samopal_ammo", 1, 3, 3);
	func_2448("revolver_ammo", 1, 3, 3);
	func_2437("Samopal", 1, 20);
	func_2437("Revolver", 1, 20);
	func_2437("Rifle", 1, 20);
	int var_130_int;
	func_3222(var_130_int, "grabitel_mark");
	bool var_64_bool;
	@AddItem(var_64_bool, var_130_int, 0, 1);
}


void func_2135(bool var_616_bool, object var_617_object)
{
	object var_621_object;
	var_617_object = var_621_object;
	bool var_620_bool;
	func_2028(var_620_bool, var_621_object, "health");
	if(!var_620_bool) { //@nz
		var_616_bool = false;
		return 2;
	}
	bool var_624_bool = false;
	bool var_625_bool; object var_626_object;
	func_2023(var_625_bool, var_626_object);
	if(var_625_bool != 0) {
		bool var_627_bool;
		func_2750(var_627_bool);
		if(var_627_bool != 0)
			var_624_bool = true;
	}
	if(var_624_bool != 0) {
		var_616_bool = false;
		return 2;
	}
	float var_619_float;
	var_626_object->GetProperty("health", var_619_float);
	var_616_bool = var_619_float <= 0.0;
}


// @pe
void func_2649(bool var_86_bool, float var_87_float, float var_88_float, float var_89_float)
{
	var_86_bool = false;
	if(var_87_float >= var_88_float) {
		if(var_87_float <= var_89_float)
			var_86_bool = true;
	}
}


void func_1116(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2657(bool var_90_bool, int var_91_int, int var_92_int)
{
	int var_94_int;
	@irand(var_94_int, var_92_int);
	var_90_bool = var_94_int < var_91_int;
}


void func_1635(bool var_0_bool, object var_1_object, bool var_711_bool, object var_712_object, float var_713_float, float var_714_float, bool var_715_bool, bool var_716_bool)
{
	bool var_725_bool; object var_727_object; cvector var_728_cvector; cvector var_729_cvector; float var_731_float; object var_732_object;
	var_0_bool = false;
	var_1_object = var_712_object;
	bool var_726_bool;
	var_716_bool = var_726_bool;
	
	for(;;) {
		bool var_733_bool; object var_734_object;
		var_712_object = var_734_object;
		func_1597(var_733_bool, var_734_object);
		if(!var_733_bool) { //@nz
			var_711_bool = false;
			return 16;
		}
		var_712_object->GetPosition(var_728_cvector);
		@GetPosition(var_729_cvector);
		var_731_float = (var_728_cvector - var_729_cvector) | (var_728_cvector - var_729_cvector);
		bool var_753_bool = false;
		if(var_714_float > 0) {
			if(var_731_float > (var_714_float * var_714_float))
				var_753_bool = true;
		}
		if(var_753_bool != 0) {
			@Stop();
			var_711_bool = false;
			return 16;
		}
		if(var_731_float > (var_713_float * var_713_float)) {
			var_712_object->GetPFPosition(var_728_cvector);
			@FindPathTo(var_732_object, var_728_cvector);
			if(var_732_object != null) {
				var_732_object = var_727_object;
				var_732_object = null;
			}
			if(var_727_object != null) {
				if(var_726_bool == 0) goto Label_1688;
				var_726_bool = false;
				@RotatePath(var_727_object, var_725_bool);
				if(!var_725_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_766_string;
						func_1766(var_766_string);
						string var_767_string;
						func_1768(var_767_string);
						@FollowPath(var_727_object, var_715_bool, var_725_bool, var_766_string, var_767_string);
						if(!var_725_bool) { //@nz
							if(var_0_bool == 0) goto Label_1707;
							var_727_object = null;
						}
					EMIT "GOTO 0x6ac";

					Label_1707:
						} else {
					var_727_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_725_bool);
					if(!var_725_bool) { //@nz
						if(var_0_bool != 0) {
							var_727_object = null;
							goto Label_1735;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1735;
		}
			var_732_object = null;
			goto Label_1733;

		Label_1733:
			var_727_object = null;

		}
	Label_1735:
		for(;;) {
			var_711_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_2662(object var_17_object)
{
	object var_19_object;
	@CreateObjectSet(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_1132(bool var_331_bool, object var_332_object)
{
	object var_334_object;
	var_332_object = var_334_object;
	bool var_333_bool;
	func_2207(var_333_bool, var_334_object);
	var_333_bool = var_331_bool;
}


// @pe
void func_2668(bool var_22_bool, object var_23_object, float var_24_float)
{
	if(!var_23_object) { //@nz
		var_22_bool = false;
		return 0;
	}
	if(var_24_float > 0) {
		@SendWorldWndMessage(8);
	} else if(var_24_float < 0) {
			@SendWorldWndMessage(9);
	}
	for(;;) {
		float var_29_float;
		var_24_float = var_29_float;
		func_2720(var_29_float);
		bool var_33_bool; object var_34_object; float var_36_float;
		var_23_object = var_34_object;
		var_24_float = var_36_float;
		func_2040(var_33_bool, var_34_object, "reputation", var_36_float, (float)0, (float)1);
		var_22_bool = true;
		return 0;

	}
	
	var_22_bool = false;
}


void func_1139(string var_349_string)
{
	var_349_string = "walk";
}


void func_1141(string var_350_string)
{
	var_350_string = "run";
}


void func_2166(bool var_42_bool, object var_43_object)
{
	bool var_45_bool;
	var_43_object->IsDead(var_45_bool);
	var_45_bool = var_42_bool;
}


void func_2171(bool var_31_bool, object var_32_object)
{
	if(var_32_object == null) {
		var_31_bool = false;
		return 4;
	}
	bool var_38_bool = false;
	var_41_bool = IsFuncExist(var_32_object, "IsDead", 1);
	if(var_41_bool != 0) {
		bool var_42_bool; object var_43_object;
		var_32_object = var_43_object;
		func_2166(var_42_bool, var_43_object);
		if(var_42_bool != 0)
			var_38_bool = true;
	}
	if(var_38_bool != 0) {
		var_31_bool = false;
		return 4;
	}
	object var_35_object;
	@GetScene(var_35_object);
	if(var_35_object == null) {
		var_31_bool = false;
		return 4;
	}
	object var_36_object;
	var_32_object->GetScene(var_36_object);
	if(var_35_object != var_36_object) {
		var_31_bool = false;
		return 4;
	}
	var_31_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


// @pe
void func_126(bool var_208_bool, object var_209_object)
{
	var_216_bool = GlobalVars[0];
	GlobalVars[0] = false;
	object var_217_object;
	func_203(var_213_bool, var_214_float, var_215_int, var_208_bool, var_217_object, var_217_object, true, 200.0);
	bool var_689_bool = false;
	var_690_bool = GlobalVars[0];
	if(var_690_bool != 0) {
		if(var_3_int != 0)
			var_689_bool = true;
	}
	if(var_689_bool != 0) {
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
	}
	var_694_bool = GlobalVars[0];
	var_694_bool = var_208_bool;
}


void func_643(int var_3_int)
{
	var_3_int = true;
}


// @pe
void func_1156(void)
{
	func_1331(var_18_bool, var_59_object);
	@KillTimer(130);
}


void func_645(bool var_657_bool, float var_658_float)
{
	float var_661_float; bool var_662_bool;
	@rand(var_661_float);
	if(var_661_float < var_658_float) {

		for(;;) {
			@IsAnimationPlaying(var_662_bool);
			if(!var_662_bool) { //@nz
			} else {
				bool var_665_bool;
				func_743(var_665_bool);
				if(var_665_bool != 0) {
					var_657_bool = true;
					return 4;
				}
				@sync();
			}
			break;
		}
		var_657_bool = false;
		return 4;
	}
	@WaitForAnimEnd();
	func_847(var_662_bool);
}


void func_2703(float var_601_float)
{
	object var_603_object;
	@CreateFloatVector(var_603_object);
	var_603_object->add(var_601_float);
	if(var_601_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_603_object);
}
EMIT "Stack[-1] = 0";


void func_3222(int var_78_int, string var_79_string)
{
	int var_81_int;
	@GetInvItemByName(var_81_int, var_79_string);
	var_81_int = var_78_int;
}


// @pe
void func_154(float var_542_float)
{
	var_542_float = 0.15;
}


// @pe
void func_157(int var_549_int)
{
	var_549_int = 0;
}


void func_2207(bool var_27_bool, object var_28_object)
{
	object var_32_object;
	var_28_object = var_32_object;
	bool var_31_bool;
	func_2171(var_31_bool, var_32_object);
	if(!var_31_bool) { //@nz
		var_27_bool = false;
		return 2;
	}
	bool var_49_bool; object var_50_object;
	func_2028(var_49_bool, var_50_object, "noaccess");
	if(!var_49_bool) { //@nz
		var_27_bool = true;
		return 2;
	}
	int var_30_int;
	var_50_object->GetProperty("noaccess", var_30_int);
	var_27_bool = var_30_int == 0;
}


void func_672(bool var_0_bool, bool var_437_bool, float var_438_float)
{
	bool var_444_bool; cvector var_445_cvector; cvector var_446_cvector; cvector var_447_cvector; float var_448_float;
	
	for(;;) {
		@IsAnimationPlaying(var_444_bool);
		if(!var_444_bool) //@nz
			break;
		bool var_450_bool;
		func_743(var_450_bool);
		if(var_450_bool != 0) {
			var_437_bool = true;
			return 10;
		}
		bool var_493_bool;
		func_2207(var_493_bool, var_0_bool);
		if(!var_493_bool) { //@nz
			var_437_bool = false;
			return 10;
		}
		var_0_bool->GetPFPosition(var_445_cvector); //@t
		@GetPFPosition(var_446_cvector);
		var_447_cvector = var_445_cvector - var_446_cvector;
		var_448_float = var_447_cvector | var_447_cvector;
		if(var_448_float < (var_438_float * var_438_float)) {
			bool var_498_bool; float var_499_float;
			var_438_float = var_499_float;
			func_506(var_447_cvector, var_448_float, var_498_bool, var_499_float);
			var_437_bool = true;
			return 10;
		}
		@sync();
	}
	func_847(var_448_float);
	var_437_bool = false;
}


void func_160(int var_610_int)
{
	var_610_int = 1;
}


// @pe
void func_162(object var_611_object, float var_612_float)
{
	bool var_613_bool = false;
	if(var_612_float > 0) {
		bool var_616_bool; object var_617_object;
		var_611_object = var_617_object;
		func_2135(var_616_bool, var_617_object);
		if(var_616_bool != 0)
			var_613_bool = true;
	}
	if(var_613_bool != 0) {
		var_633_bool = GlobalVars[0];
		GlobalVars[0] = true;
		func_643(var_612_float);
	}
}


void func_2720(float var_29_float)
{
	object var_31_object;
	@CreateFloatVector(var_31_object);
	var_31_object->add(var_29_float);
	@SendWorldWndMessage(16, var_31_object);
}
EMIT "Stack[-1] = 0";


void func_2730(object var_109_object)
{
	bool var_111_bool;
	@IsPlayerActor(var_109_object, var_111_bool);
	if(var_111_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_2739(void)
{
	object var_132_object;
	@GetScene(var_132_object);
	object var_134_object;
	func_2591(var_134_object);
	@BroadcastMessage("battle", var_134_object, var_132_object);
}
EMIT "Stack[-1] = 0";


void func_2231(bool var_21_bool, object var_22_object)
{
	if(var_22_object == null) {
		var_21_bool = false;
		return 6;
	}
	object var_26_object;
	@GetScene(var_26_object);
	if(var_26_object == null) {
		var_21_bool = false;
		return 6;
	}
	object var_27_object;
	var_22_object->GetScene(var_27_object);
	if(var_26_object != var_27_object) {
		var_21_bool = false;
		return 6;
	}
	bool var_32_bool; object var_33_object;
	func_2028(var_32_bool, var_33_object, "noaccess");
	if(!var_32_bool) { //@nz
		var_21_bool = true;
		return 6;
	}
	int var_28_int;
	var_33_object->GetProperty("noaccess", var_28_int);
	var_21_bool = var_28_int == 0;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_2750(bool var_627_bool)
{
	bool var_629_bool;
	@GetVariable("god_mode", var_629_bool);
	var_629_bool = var_627_bool;
}


void func_2756(string var_73_string, int var_74_int)
{
	string var_76_string = "idle";
	if(var_74_int != 0)
		var_76_string += var_74_int;
	var_76_string = var_73_string;
}


void func_203(bool var_0_bool, int var_3_int, float var_5_float, object var_217_object, bool var_218_bool, float var_219_float, bool var_288_bool, bool var_378_bool)
{
	float var_231_float; cvector var_232_cvector; cvector var_233_cvector; bool var_235_bool; float var_238_float; cvector var_239_cvector; bool var_240_bool; float var_241_float;
	func_432(var_239_cvector, var_240_bool, var_241_float);
	var_5_float = 0;
	var_266_bool = IsFuncExist(var_217_object, "@GetAttackDistance", 1);
	if(var_266_bool != 0) {
		var_217_object->GetAttackDistance(var_231_float);
		var_231_float += 50;
	} else {
						var_219_float = var_231_float;
	}
	if(var_231_float >= 150)
		var_231_float = 150;
	var_3_int = false;
	var_0_bool = var_217_object;
	bool var_234_bool;
	@IsPlayerActor(var_0_bool, var_234_bool);
	if(var_234_bool != 0) {
		@PlayGlobalMusic("attack");
		object var_272_object;
		func_2591(var_272_object);
		@SendPlayerEnemy(var_217_object, var_272_object);
	}
	if(var_218_bool != 0)
		var_235_bool = false;
	else
		var_235_bool = true;

	
Label_243:
	for(;;) {
		bool var_275_bool = false;
		bool var_276_bool;
		func_2207(var_276_bool, var_0_bool);
		if(var_276_bool != 0) {
			if(!var_3_int) //@nz
				var_275_bool = true;
		}
		if(var_275_bool != 0) {
			func_847(var_241_float);
			var_0_bool->GetPFPosition(var_232_cvector); //@t
			@GetPFPosition(var_233_cvector);
			var_238_float = (var_232_cvector - var_233_cvector) | (var_232_cvector - var_233_cvector);
			if(var_238_float >= ((300.0 + var_231_float) * (300.0 + var_231_float))) {
				bool var_282_bool; float var_284_float;
				var_231_float = var_284_float;
				TaskCall(2);
				func_887(var_290_bool, var_282_bool, var_0_bool, var_284_float, 3000.0, true, false);
				TaskReturn();
				if(!var_288_bool) { //@nz
				} else {
					var_235_bool = false;
			} else {
			if(var_238_float >= (var_219_float * var_219_float)) {
				var_0_bool->GetPFPosition(var_239_cvector); //@t
				@CanReachByPF(var_240_bool, var_239_cvector);
				if(!var_240_bool) { //@nz
					bool var_372_bool; float var_374_float;
					var_231_float = var_374_float;
					TaskCall(2);
					func_887(var_380_bool, var_372_bool, var_0_bool, var_374_float, 3000.0, true, false);
					TaskReturn();
					if(!var_378_bool) { //@nz
						goto Label_415;
					}
					var_235_bool = false;
					goto Label_243;
				}
				if(!var_235_bool) { //@nz
					func_2410(var_0_bool);
					@PlayAnimation("all", "attack_on");
					@WaitForAnimEnd();
					func_847(var_241_float);
					@StopAsync();
					var_235_bool = true;
					bool var_394_bool;
					func_2207(var_394_bool, var_0_bool);
					if(!var_394_bool) { //@nz
						goto Label_415;
					}
				}
				@rand(var_241_float);
				bool var_397_bool;
				var_399_bool = var_241_float < 0.19999999;
				if(var_399_bool != 1) {
					bool var_400_bool;
					func_804(true, var_400_bool);
					if(var_400_bool != 1)
						var_397_bool = false;
				}
				if(var_397_bool != 0) {
					@Face(var_0_bool);
					func_852();
					@PlayAnimation("all", "attack_stay");
					bool var_437_bool; float var_438_float;
					func_672(var_241_float, var_437_bool, var_438_float);
					@StopAsync();
				} else {
					@Face(var_0_bool);
					@PlayAnimation("all", "fjump");
					@WaitForAnimEnd();
					func_847(var_241_float);
					@SetSpeed([0.0, 0.0, 0.0]);
					@Stop();
					@StopAsync();
					bool var_676_bool;
					func_804(var_241_float, var_676_bool);
					var_677_bool = !var_676_bool; //@nz
					if(var_677_bool == 0) goto Label_405;
					bool var_678_bool;
					func_2207(var_678_bool, var_0_bool);
					if(!var_678_bool) { //@nz
						goto Label_415;
					}
					var_0_bool->GetPFPosition(var_232_cvector); //@t
					@GetPFPosition(var_233_cvector);
					if(!(((var_232_cvector - var_233_cvector) | (var_232_cvector - var_233_cvector)) < (var_438_float * var_438_float))) goto Label_405;
					bool var_683_bool; float var_684_float;
					var_219_float = var_684_float;
					func_506(var_240_bool, var_241_float, var_683_bool, var_684_float);
					var_685_bool = !var_683_bool; //@nz
					if(var_685_bool == 0) goto Label_405;
					goto Label_415;
			}
				bool var_686_bool; float var_687_float;
				var_219_float = var_687_float;
				func_506(var_240_bool, var_241_float, var_686_bool, var_687_float);
				if(!var_686_bool) { //@nz
					goto Label_415;
				}
				var_235_bool = true;

			}
		Label_405:
			goto Label_414;
			}
			Label_414:
			}
		}
	Label_415:
		@WaitForAnimEnd();
		if(var_3_int != 0)
			return 22;
		@PlayAnimation("all", "attack_off");
		@WaitForAnimEnd();
		if(var_234_bool != 0)
			@Sleep(2.0);
		return 22;

	}
	
}


void func_715(bool var_0_bool, bool var_452_bool)
{
	cvector var_458_cvector; cvector var_459_cvector;
	bool var_463_bool;
	func_2207(var_463_bool, var_0_bool);
	if(!var_463_bool) { //@nz
		var_452_bool = false;
		return 10;
	}
	bool var_466_bool;
	float var_462_float;
	func_804(var_462_float, var_466_bool);
	if(var_466_bool != 0) {
		var_0_bool->GetPFPosition(var_458_cvector); //@t
		@GetPFPosition(var_459_cvector);
		var_0_bool->GetAttackDistance(var_462_float); //@t
		var_452_bool = ((var_458_cvector - var_459_cvector) | (var_458_cvector - var_459_cvector)) <= ((var_462_float + 50) * (var_462_float + 50));
		return 10;
	}
	var_452_bool = false;
}


void func_2763(int var_67_int)
{
	int var_70_int; bool var_71_bool;
	var_70_int = 0;
	
	for(;;) {
		string var_73_string; int var_74_int;
		var_70_int = var_74_int;
		func_2756(var_73_string, var_74_int);
		@HasAnimation(var_71_bool, "all", var_73_string);
		if(!var_71_bool) //@nz
			break;
		var_70_int += 1;
	}
	var_70_int = var_67_int;
}


void func_2265(bool var_118_bool, cvector var_119_cvector)
{
	cvector var_123_cvector;
	@GetPosition(var_123_cvector);
	cvector var_124_cvector = var_119_cvector - var_123_cvector;
	var_126_float = GetByIndex(var_124_cvector, 0);
	var_127_float = GetByIndex(var_124_cvector, 2);
	bool var_125_bool;
	@Rotate(var_126_float, var_127_float, var_125_bool);
	var_125_bool = var_118_bool;
}


void func_2780(cvector var_152_cvector, cvector var_153_cvector, cvector var_154_cvector, float var_155_float)
{
	cvector var_162_cvector; float var_167_float;
	var_162_cvector = var_154_cvector - var_153_cvector;
	float var_163_float = 250000;
	var_168_float = GetByIndex(var_162_cvector, 1);
	float var_164_float = (var_168_float * 1000) - (var_155_float * var_155_float);
	float var_165_float = var_162_cvector | var_162_cvector;
	float var_172_float; float var_173_float; float var_174_float; float var_175_float;
	var_163_float = var_173_float;
	var_164_float = var_174_float;
	var_165_float = var_175_float;
	func_2614(var_172_float, var_173_float, var_174_float, var_175_float);
	float var_166_float;
	var_172_float = var_166_float;
	if(var_166_float < 0) {
		var_167_float = 1;
	} else {
		float var_186_float; float var_187_float; float var_188_float; float var_189_float; float var_190_float;
		var_163_float = var_187_float;
		var_164_float = var_188_float;
		var_165_float = var_189_float;
		var_190_float = sqrt(var_166_float);
		func_2621(var_187_float, var_188_float, var_189_float, var_190_float);
		var_167_float = sqrt(var_186_float);
	}
	var_152_cvector = (var_162_cvector + (([0.0, 500.0, 0.0] * var_167_float) * var_167_float)) / var_167_float;
	
}


void func_1759(bool var_0_bool)
{
	var_0_bool = true;
	@KillTimer(0);
	@Stop();
}


void func_2275(bool var_114_bool, object var_115_object)
{
	cvector var_117_cvector;
	var_115_object->GetPosition(var_117_cvector);
	bool var_118_bool; cvector var_119_cvector;
	var_117_cvector = var_119_cvector;
	func_2265(var_118_bool, var_119_cvector);
	var_118_bool = var_114_bool;
}


void func_1766(string var_766_string)
{
	var_766_string = "walk";
}


void func_743(bool var_450_bool)
{
	bool var_451_bool = false;
	bool var_452_bool;
	func_715(var_451_bool, var_452_bool);
	if(var_452_bool != 0) {
		bool var_469_bool;
		func_759(var_450_bool, var_451_bool, var_469_bool);
		if(var_469_bool != 0)
			var_451_bool = true;
	}
	if(var_451_bool != 0) {
		var_450_bool = true;
		return 0;
	}
	var_450_bool = false;
}


void func_1768(string var_767_string)
{
	var_767_string = "run";
}


// @pe
void func_1770(bool var_62_bool, object var_63_object)
{
	bool var_64_bool; object var_65_object;
	func_2023(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		object var_68_object;
		func_2591(var_68_object);
		@SendPlayerEnemy(var_65_object, var_68_object);
	}
	bool var_71_bool; object var_72_object;
	func_1787(var_62_bool, var_72_object, var_71_bool, var_72_object);
	var_71_bool = var_62_bool;
}


void func_1260(bool var_0_bool, object var_1_object)
{
	float var_28_float; cvector var_29_cvector; cvector var_30_cvector; bool var_31_bool; object var_32_object; bool var_33_bool;
	@rand(var_28_float, 0.5);
	@Sleep(var_28_float);
	
	for(;;) {
		if(!false) { //@nz
			if(!false) { //@nz

			Label_1272:
				@GetPosition(var_30_cvector);
				float var_37_float;
				func_1319(var_37_float);
				@GetRandomPFPointInCircle(var_29_cvector, var_30_cvector, var_37_float, var_31_bool);
				if(var_31_bool != 0) {
				} else {
					@Sleep(1);
					goto Label_1272;
			}
				var_1_object = false;
		}
		}
		goto Label_1288;

	Label_1288:
		object var_41_object; cvector var_42_cvector;
		var_29_cvector = var_42_cvector;
		func_1347(var_41_object, var_42_cvector);
		var_41_object = var_32_object;
		if(var_32_object != null) {
			@RotatePath(var_32_object, var_33_bool);
			if(var_33_bool != 0) {
				bool var_47_bool;
				func_1345(var_47_bool);
				@FollowPath(var_32_object, var_47_bool, var_33_bool);
				var_32_object = null;
				if(var_33_bool != 0) {
					TaskCall(4);
					func_1402();
					TaskReturn();
				}
			}
		} else {
		@Sleep(1);

		}
		var_32_object = null;
	}
	
}


void func_2284(object var_33_object)
{
	string var_47_string;
	if(var_33_object == null)
		return 14;
	bool var_41_bool;
	@IsDead(var_41_bool);
	if(var_41_bool != 0)
		return 14;
	int var_42_int;
	@GetSecondaryAnimationType(var_42_int);
	if(var_42_int < 0)
		return 14;
	cvector var_43_cvector;
	var_33_object->GetPosition(var_43_cvector);
	cvector var_44_cvector;
	@GetPosition(var_44_cvector);
	cvector var_45_cvector;
	@GetDirection(var_45_cvector);
	cvector var_46_cvector = var_44_cvector - var_43_cvector;
	var_52_float = GetByIndex(var_46_cvector, 0);
	var_53_float = GetByIndex(var_45_cvector, 0);
	var_55_float = GetByIndex(var_46_cvector, 2);
	var_56_float = GetByIndex(var_45_cvector, 2);
	if(((var_52_float * var_53_float) + (var_55_float * var_56_float)) >= 0)
		var_47_string = "fhit";
	else
		var_47_string = "bhit";
	@FadeSecondaryAnimation("hit_react", (var_47_string + "1"), (var_47_string + "2"), -10);
	
}


void func_759(bool var_0_bool, bool var_4_bool, bool var_469_bool)
{
	object var_475_object; float var_477_float; cvector var_478_cvector; cvector var_479_cvector;
	@GetScene(var_475_object);
	bool var_476_bool = false;
	
	for(;;) {
		cvector var_480_cvector;
		func_2008(var_480_cvector, var_0_bool);
		var_486_int = -var_480_cvector;
		@FindDirLength(var_477_float, var_486_int, var_4_bool);
		if(var_477_float < var_4_bool) {
		} else {
				@Face(var_0_bool);
				@PlayAnimation("all", "bjump");
				var_0_bool->GetPFPosition(var_478_cvector); //@t
				@GetPFPosition(var_479_cvector);
				@WaitForAnimEnd();
				func_847(var_479_cvector);
				@StopAsync();
				@SetSpeed([0.0, 0.0, 0.0]);
				var_476_bool = true;
				bool var_491_bool;
				func_715(var_479_cvector, var_491_bool);
				var_492_bool = !var_491_bool; //@nz
				if(var_492_bool == 0) goto Label_800;
		}
		for(;;) {
			var_476_bool = var_469_bool;

		}

	Label_800:
	}
}
EMIT "Stack[-5] = 0";


void func_1787(bool var_71_bool, object var_72_object, bool var_94_bool, object var_697_object)
{
	object var_76_object;
	var_72_object = var_76_object;
	bool var_75_bool;
	func_2207(var_75_bool, var_76_object);
	if(!var_75_bool) { //@nz
		var_71_bool = false;
		return 2;
	}
	float var_78_float; object var_79_object;
	var_72_object = var_79_object;
	func_2015(var_78_float, var_79_object);
	float var_74_float;
	var_78_float = var_74_float;
	bool var_86_bool; float var_87_float;
	func_2649(var_86_bool, var_87_float, 250000.0, 3240000.0);
	if(var_86_bool != 0) {
		bool var_92_bool; object var_93_object;
		var_72_object = var_93_object;
		TaskCall(0);
		func_0(var_87_float, var_94_bool, var_92_bool, var_93_object);
		TaskReturn();
		var_94_bool = var_71_bool;
		return 2;
	}
	bool var_695_bool; object var_696_object;
	var_72_object = var_696_object;
	TaskCall(1);
	func_126(var_695_bool, var_696_object);
	TaskReturn();
	var_697_object = var_71_bool;
}


void func_2815(bool var_26_bool, object var_27_object)
{
	bool var_32_bool; object var_33_object;
	func_2028(var_32_bool, var_33_object, "class");
	if(!var_32_bool) //@nz
		var_26_bool = false;
	string var_30_string;
	@GetProperty("class", var_30_string);
	string var_31_string;
	var_33_object->GetProperty("class", var_31_string);
	var_26_bool = var_31_string == var_30_string;
}


void func_2833(void)
{
	var_16_object = GlobalVars[1];
	object var_17_object;
	func_2662(var_17_object);
	var_17_object = var_16_object;
	GlobalVars[1] = var_16_object;
}


void func_2840(bool var_19_bool, object var_20_object)
{
	float var_25_float;
	bool var_27_bool; object var_28_object;
	func_2207(var_27_bool, var_28_object);
	if(!var_27_bool) { //@nz
		var_19_bool = false;
		return 6;
	}
	var_62_object = GlobalVars[1];
	bool var_24_bool;
	var_62_object->in(var_24_bool, var_28_object);
	if(var_24_bool != 0) {
		var_19_bool = true;
		return 6;
	}
	bool var_64_bool; object var_65_object;
	func_2023(var_64_bool, var_65_object);
	if(var_64_bool != 0) {
		var_65_object->GetProperty("reputation", var_25_float);
		var_19_bool = var_25_float >= 0.33;
		return 6;
	}
	bool var_70_bool; object var_71_object;
	func_2028(var_70_bool, var_71_object, "class");
	if(!var_70_bool) { //@nz
		var_19_bool = false;
		return 6;
	}
	string var_26_string;
	var_71_object->GetProperty("class", var_26_string);
	bool var_75_bool; string var_76_string;
	var_26_string = var_76_string;
	func_2504(var_75_bool, var_76_string);
	var_75_bool = var_19_bool;
}


void func_2328(object var_20_object, int var_21_int, float var_22_float)
{
	cvector var_32_cvector; object var_33_object; int var_34_int; bool var_35_bool; cvector var_36_cvector; cvector var_37_cvector;
	bool var_41_bool = false;
	bool var_42_bool = false;
	if(var_20_object != 0) {
		if(var_21_int != 4)
			var_42_bool = true;
	}
	if(var_42_bool != 0) {
		if(var_21_int != 5)
			var_41_bool = true;
	}
	if(var_41_bool != 0) {
		cvector var_48_cvector; cvector var_49_cvector;
		cvector var_50_cvector; object var_51_object;
		var_20_object = var_51_object;
		func_2008(var_50_cvector, var_51_object);
		var_50_cvector = var_49_cvector;
		func_2597(var_48_cvector, var_49_cvector);
		var_48_cvector = var_32_cvector;
		@CreateVectorVector(var_33_object);
		var_34_int = 1;

		for(;;) {
			@GetGeometryLocator(("hit" + var_34_int), var_35_bool, var_36_cvector, var_37_cvector);
			if(!var_35_bool) { //@nz
				break;
			Label_2390:
				var_33_object = null;
	}
			object var_110_object;
			var_20_object = var_110_object;
			func_2284(var_110_object);
		}
		if((var_37_cvector | var_32_cvector) >= 0.70710677)
			var_33_object->add(var_36_cvector);
		var_34_int += 1;
	}
	int var_38_int;
	var_33_object->size(var_38_int);
	if(var_38_int == 0) goto Label_2390;
	int var_39_int;
	@irand(var_39_int, var_38_int);
	cvector var_40_cvector;
	var_33_object->get(var_40_cvector, var_39_int);
	object var_65_object; int var_66_int; float var_67_float; cvector var_68_cvector; cvector var_69_cvector;
	var_20_object = var_65_object;
	var_21_int = var_66_int;
	var_22_float = var_67_float;
	var_40_cvector = var_68_cvector;
	var_69_cvector = -var_32_cvector;
	func_2396(var_67_float, var_68_cvector, var_69_cvector);
}


// @pe
void func_1824(object var_60_object)
{
	func_3153();
	func_3129();
	bool var_154_bool; object var_155_object;
	var_60_object = var_155_object;
	func_2023(var_154_bool, var_155_object);
	if(var_154_bool != 0) {
		bool var_156_bool; object var_157_object;
		var_60_object = var_157_object;
		func_2668(var_156_bool, var_157_object, 0.01);
	}
	object var_159_object;
	var_60_object = var_159_object;
	func_1846(var_159_object);
}


void func_804(bool var_0_bool, bool var_400_bool)
{
	bool var_402_bool;
	var_405_bool = IsFuncExist(var_0_bool, "IsAttacking", 1);
	if(var_405_bool != 0) {
		var_0_bool->IsAttacking(var_402_bool); //@t
		var_402_bool = var_400_bool;
	}
	var_400_bool = false;
}


void func_1319(float var_37_float)
{
	float var_39_float;
	@GetCameraFarDistance(var_39_float);
	var_39_float = var_37_float;
}


void func_815(int var_2_int, float var_5_float)
{
	int var_516_int;
	if(!var_2_int) //@nz
		return 4;
	if(var_5_float != 0) {
		if((var_5_float + -1) > 0)
			return 4;
	}
	float var_515_float;
	@rand(var_515_float);
	float var_522_float;
	func_861(var_522_float);
	if(var_515_float < var_522_float) {
		@irand(var_516_int, var_2_int);
		@Speak("attack" + (var_516_int + 1));
		int var_527_int;
		func_859(var_527_int);
		var_5_float = var_527_int;
	}
}


void func_1331(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = false;
	@Stop();
	@StopGroup0();
}


// @pe
void func_1846(object var_159_object)
{
	object var_160_object;
	var_159_object = var_160_object;
	func_1871(var_160_object);
	@SetRTEnvelope(50, 40);
	disable OnUse;
	enable OnUse;
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_1338(bool var_0_bool, object var_1_object)
{
	var_0_bool = true;
	var_1_object = true;
	@Stop();
	@StopGroup0();
}


void func_1345(bool var_47_bool)
{
	var_47_bool = false;
}


void func_1347(object var_41_object, cvector var_42_cvector)
{
	object var_44_object;
	@FindShiftedPathTo(var_44_object, var_42_cvector);
	var_44_object = var_41_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_2885(bool var_17_bool, object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_2840(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
}


// @pe
void func_2892(object var_114_object)
{
	object var_116_object;
	var_114_object = var_116_object;
	TaskCall(7);
	bool var_115_bool;
	func_1770(var_115_bool, var_116_object);
	TaskReturn();
	if(var_115_bool != 0) {
		object var_754_object;
		var_114_object = var_754_object;
		TaskCall(6);
		func_1555(var_757_bool, var_754_object);
		TaskReturn();
	}
	@ResetAAS();
}


void func_847(bool var_0_bool)
{
	func_2730(var_0_bool);
}


void func_1871(object var_160_object)
{
	cvector var_171_cvector; cvector var_172_cvector; cvector var_173_cvector; cvector var_174_cvector; string var_175_string; object var_176_object; bool var_177_bool; bool var_178_bool; float var_179_float; cvector var_180_cvector;
	if(var_160_object == null) {
		func_1962("fdie");
	} else {
		var_160_object->GetPosition(var_171_cvector);
		@GetPosition(var_172_cvector);
		@GetDirection(var_173_cvector);
		var_174_cvector = var_172_cvector - var_171_cvector;
		var_214_float = GetByIndex(var_174_cvector, 0);
		var_215_float = GetByIndex(var_173_cvector, 0);
		var_217_float = GetByIndex(var_174_cvector, 2);
		var_218_float = GetByIndex(var_173_cvector, 2);
		if(((var_214_float * var_215_float) + (var_217_float * var_218_float)) >= 0)
			var_175_string = "fdie";
		else
			var_175_string = "bdie";
		@RemoveRTEnvelope();
		@SetDeathState();
		@Stop();
		@StopAsync();
		var_160_object = var_176_object;
		var_225_bool = IsFuncExist(var_160_object, "GetScriptProperty", 2);
		if(var_225_bool != 0) {
			var_160_object->HasScriptProperty(var_177_bool, "Owner");
			if(var_177_bool != 0) {
				var_160_object->GetScriptProperty(var_176_object, "Owner");
				if(var_176_object == null)
					var_160_object = var_176_object;
			}
		}
		var_232_bool = IsFuncExist(var_176_object, "@GetEyesHeight", 1);
		if(var_232_bool != 0) {
			var_176_object->GetEyesHeight(var_179_float);
			var_180_cvector = [0.0, 0.0, 0.0];
			var_233_float = GetByIndex(var_180_cvector, 1);
			var_179_float = var_233_float;
			SetByIndex(var_180_cvector, 1) = var_233_float;
			@LookAsync(var_160_object, "head", var_180_cvector);
			var_178_bool = true;
		} else {
			var_178_bool = false;

		}
		string var_235_string;
		var_175_string = var_235_string;
		func_2463(var_235_string);
		@PlayAnimation("all", var_175_string);
		@WaitForAnimEnd();
		if(var_178_bool != 0) {
			@StopAsync();
			@UnlookAsync("head");
		}
		@LockAnimationEnd("all", var_175_string);
		@RemoveEnvelope();
		var_176_object = null;
	}
	
}


void func_852(void)
{
	func_2463("attack_stay");
}


void func_857(bool var_656_bool)
{
	var_656_bool = true;
}


void func_859(int var_527_int)
{
	var_527_int = 1;
}


void func_2396(object var_22_object, cvector var_25_cvector, cvector var_26_cvector)
{
	object var_29_object;
	@GetScene(var_29_object);
	object var_30_object;
	@AddActorByType(var_30_object, "scripted", var_29_object, var_25_cvector, var_26_cvector, "blood_dir.xml");
	object var_33_object;
	var_22_object = var_33_object;
	func_2284(var_33_object);
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_861(float var_522_float)
{
	var_522_float = 0.5;
}


// @pe
void func_2909(bool var_17_bool, object var_18_object)
{
	object var_20_object;
	var_18_object = var_20_object;
	bool var_19_bool;
	func_2840(var_19_bool, var_20_object);
	var_19_bool = var_17_bool;
}


// @pe
void func_2916(object var_114_object)
{
	object var_116_object;
	var_114_object = var_116_object;
	TaskCall(7);
	bool var_115_bool;
	func_1770(var_115_bool, var_116_object);
	TaskReturn();
	if(var_115_bool != 0) {
		object var_754_object;
		var_114_object = var_754_object;
		TaskCall(6);
		func_1555(var_757_bool, var_754_object);
		TaskReturn();
	}
	@ResetAAS();
}


void func_2410(object var_383_object)
{
	cvector var_387_cvector;
	var_383_object->GetPosition(var_387_cvector);
	cvector var_388_cvector;
	@GetPosition(var_388_cvector);
	cvector var_389_cvector = var_387_cvector - var_388_cvector;
	var_390_float = GetByIndex(var_389_cvector, 0);
	var_391_float = GetByIndex(var_389_cvector, 2);
	@RotateAsync(var_390_float, var_391_float);
}


void func_2933(object var_20_object)
{
	if(var_20_object == null) {
	}
	var_24_object = GlobalVars[1];
	bool var_22_bool;
	var_24_object->in(var_22_bool, var_20_object);
	if(!var_22_bool) { //@nz
		var_26_object = GlobalVars[1];
		var_26_object->add(var_20_object);
	}
}


void func_2421(bool var_63_bool)
{
	bool var_65_bool;
	@IsLoaded(var_65_bool);
	var_65_bool = var_63_bool;
}


void func_887(int var_2_int, bool var_282_bool, object var_283_object, float var_284_float, float var_285_float, bool var_286_bool, bool var_287_bool)
{
	object var_295_object;
	func_2730(var_295_object);
	@SetTimer(1, 5);
	bool var_293_bool;
	@CanSee(var_293_bool, var_295_object);
	if(var_293_bool != 0) {
		var_2_int = true;
		object var_299_object;
		var_283_object = var_299_object;
		func_2426(var_299_object);
	} else {
		var_2_int = false;
	}
	bool var_306_bool; object var_307_object;
	func_2023(var_306_bool, var_307_object);
	if(var_306_bool != 0) {
		object var_308_object;
		func_2591(var_308_object);
		@SendPlayerEnemy(var_307_object, var_308_object);
	}
	bool var_309_bool; object var_310_object; float var_311_float; float var_312_float; bool var_313_bool; bool var_314_bool;
	var_283_object = var_310_object;
	var_284_float = var_311_float;
	var_285_float = var_312_float;
	var_286_bool = var_313_bool;
	var_287_bool = var_314_bool;
	bool var_294_bool;
	func_992(var_293_bool, var_294_bool, var_309_bool, var_310_object, var_311_float, var_312_float, var_313_bool, var_314_bool);
	var_309_bool = var_294_bool;
	if(var_2_int != 0)
		@UnlookAsync("head");
	@KillTimer(1);
	var_294_bool = var_282_bool;
	
}


void func_1402(void)
{
	int var_58_int; int var_59_int; bool var_60_bool; float var_61_float; bool var_62_bool;
	@WaitForAnimEnd();
	bool var_63_bool;
	func_2421(var_63_bool);
	if(!var_63_bool) //@nz
		return 14;
	int var_67_int;
	func_2763(var_67_int);
	int var_56_int;
	var_67_int = var_56_int;
	int var_57_int = 0;
	
	for(;;) {
		bool var_80_bool = false;
		if(var_57_int < 5) {
			bool var_83_bool;
			func_2421(var_83_bool);
			if(var_83_bool != 0)
				var_80_bool = true;
		}
		if(var_80_bool != 0) {
			@irand(var_58_int, 3);
			if(var_58_int == 0) {
				if(var_56_int == 0) goto Label_1449;
				@irand(var_59_int, var_56_int);
				string var_89_string; int var_90_int;
				var_59_int = var_90_int;
				func_2756(var_89_string, var_90_int);
				@PlayAnimation("all", var_89_string);
				@WaitForAnimEnd(var_60_bool);
				if(!var_60_bool) { //@nz
				} else {
			} else {
			if(var_58_int == 1) {
				@rand(var_61_float, 4);
				@Sleep((var_61_float + 1), var_62_bool);
				if(!var_62_bool) { //@nz
					goto Label_1478;
				}
			} else if(var_57_int != 0) {
				goto Label_1478;
			}
			}
					bool var_92_bool;
					func_1481(var_92_bool);
					var_93_bool = !var_92_bool; //@nz
					if(var_93_bool == 0) goto Label_1473;
			}
		}
	Label_1478:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_1473:
		@ResetAAS();
		var_57_int += 1;
	}
	
}


void func_2426(object var_299_object)
{
	float var_302_float;
	var_299_object->GetEyesHeight(var_302_float);
	cvector var_303_cvector = [0.0, 0.0, 0.0];
	var_304_float = GetByIndex(var_303_cvector, 1);
	var_302_float = var_304_float;
	SetByIndex(var_303_cvector, 1) = var_304_float;
	@LookAsync(var_299_object, "head", var_303_cvector);
}


// @pe
void func_2946(object var_19_object)
{
	object var_20_object;
	var_19_object = var_20_object;
	func_2933(var_20_object);
	bool var_27_bool; object var_28_object;
	var_19_object = var_28_object;
	func_2207(var_27_bool, var_28_object);
	if(!var_27_bool) //@nz
		return 0;
	bool var_62_bool; object var_63_object;
	var_19_object = var_63_object;
	TaskCall(7);
	func_1770(var_62_bool, var_63_object);
	TaskReturn();
	if(var_62_bool != 0) {
		object var_703_object;
		var_19_object = var_703_object;
		TaskCall(6);
		func_1555(var_706_bool, var_703_object);
		TaskReturn();
	}
	@ResetAAS();
}


void func_2437(string var_85_string, int var_86_int, int var_87_int)
{
	bool var_89_bool;
	int var_91_int;
	var_86_int = var_91_int;
	int var_92_int;
	var_87_int = var_92_int;
	bool var_90_bool;
	func_2657(var_90_bool, var_91_int, var_92_int);
	if(var_90_bool != 0)
		@AddItem(var_89_bool, var_85_string, 0);
}


void func_2448(string var_99_string, int var_100_int, int var_101_int, int var_102_int)
{
	int var_105_int; bool var_106_bool;
	int var_108_int;
	var_100_int = var_108_int;
	int var_109_int;
	var_101_int = var_109_int;
	bool var_107_bool;
	func_2657(var_107_bool, var_108_int, var_109_int);
	if(var_107_bool != 0) {
		@irand(var_105_int, var_102_int);
		@AddItem(var_106_bool, var_99_string, 0, (var_105_int + 1));
	}
}


void func_2974(bool var_19_bool, object var_20_object, object var_21_object)
{
	bool var_24_bool; float var_25_float;
	object var_27_object;
	var_21_object = var_27_object;
	bool var_26_bool;
	func_2815(var_26_bool, var_27_object);
	if(var_26_bool != 0) {
		@CanSee(var_24_bool, var_20_object);
		float var_44_float; object var_45_object;
		var_20_object = var_45_object;
		func_2015(var_44_float, var_45_object);
		var_44_float = var_25_float;
		bool var_52_bool = false;
		if(var_25_float <= 1000000.0) {
			bool var_55_bool = true;
			if(var_24_bool != 1) {
				var_58_bool = var_25_float <= 490000.0;
				if(var_58_bool != 1)
					var_55_bool = false;
			}
			if(var_55_bool != 0)
				var_52_bool = true;
		}
		if(var_52_bool != 0)
			var_19_bool = true;
	}
	var_19_bool = false;
}


void func_2463(string var_183_string)
{
	bool var_192_bool; int var_193_int; bool var_194_bool; int var_195_int; bool var_196_bool; float var_197_float; cvector var_198_cvector; cvector var_199_cvector;
	@IsExisting3DSound(var_192_bool, var_183_string);
	if(!var_192_bool) { //@nz
		var_193_int = 0;

		for(;;) {
			@IsExisting3DSound(var_194_bool, (var_183_string + (var_193_int + 1)));
			if(!var_194_bool) { //@nz
				break;
			Label_2483:
				@irand(var_195_int, var_193_int);
				var_183_string += (var_195_int + 1);
	}
			@Is3DSoundLoaded(var_196_bool, var_183_string);
			if(var_196_bool != 0) {
				@GetEyesHeight(var_197_float);
				@GetDirection(var_198_cvector);
				var_199_cvector = var_198_cvector * 50;
				var_210_float = GetByIndex(var_199_cvector, 1);
				SetByIndex(var_199_cvector, 1) = (var_210_float + var_197_float);
				@PlayGlobalSound(var_183_string, var_199_cvector);
			}
		}
		var_193_int += 1;
	}
	var_205_bool = !var_193_int; //@nz
	if(var_205_bool == 0) goto Label_2483;
}


// @pe
void func_1962(string var_182_string)
{
	@RemoveRTEnvelope();
	@SetDeathState();
	@Stop();
	@StopAsync();
	@StopSecondaryAnimation();
	string var_183_string;
	var_182_string = var_183_string;
	func_2463(var_183_string);
	@PlayAnimation("all", var_182_string);
	@WaitForAnimEnd();
	@LockAnimationEnd("all", var_182_string);
	@RemoveEnvelope();
}


void func_432(object var_1_object, int var_2_int, bool var_4_bool)
{
	bool var_245_bool; bool var_246_bool; cvector var_247_cvector;
	var_1_object = 0;
	
	for(;;) {
		@HasAnimation(var_245_bool, "all", ("attack_begin" + (var_1_object + 1)));
		if(!var_245_bool) { //@nz
		} else {
			var_1_object += 1;
		}
		var_2_int = 0;

		for(;;) {
			@IsExisting3DSound(var_246_bool, ("attack" + (var_2_int + 1)));
			if(!var_246_bool) //@nz
				break;
			var_2_int += 1;
		}
		@GetAnimationOffset(var_247_cvector, "all", "bjump");
		var_261_float = GetByIndex(var_247_cvector, 2);
		var_4_bool = -var_261_float;

	}
}


void func_950(int var_2_int)
{
	@KillTimer(1);
	if(var_2_int != 0) {
		var_2_int = false;
		@UnlookAsync("head");
	}
	func_1116(var_16_bool);
}


// @pe
void func_3007(object var_17_object)
{
	object var_19_object;
	var_17_object = var_19_object;
	bool var_18_bool;
	func_2023(var_18_bool, var_19_object);
	if(var_18_bool != 0) {
		bool var_22_bool; object var_23_object;
		var_17_object = var_23_object;
		func_2668(var_22_bool, var_23_object, 0.05);
	}
	object var_60_object;
	var_17_object = var_60_object;
	TaskCall(8);
	func_1824(var_60_object);
	TaskReturn();
}


// @pe
void func_2504(bool var_75_bool, string var_76_string)
{
	var_75_bool = true;
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
	bool var_87_bool = true;
	var_89_bool = var_76_string == "woman";
	if(var_89_bool != 1) {
		var_91_bool = var_76_string == "worker";
		if(var_91_bool != 1)
			var_87_bool = false;
	}
	if(var_87_bool != 1) {
		var_93_bool = var_76_string == "butcher";
		if(var_93_bool != 1)
			var_86_bool = false;
	}
	if(var_86_bool != 1) {
		var_95_bool = var_76_string == "wasted_girl";
		if(var_95_bool != 1)
			var_85_bool = false;
	}
	if(var_85_bool != 1) {
		var_97_bool = var_76_string == "boy";
		if(var_97_bool != 1)
			var_84_bool = false;
	}
	if(var_84_bool != 1) {
		var_99_bool = var_76_string == "vaxxabitka";
		if(var_99_bool != 1)
			var_83_bool = false;
	}
	if(var_83_bool != 1) {
		var_101_bool = var_76_string == "unosha";
		if(var_101_bool != 1)
			var_82_bool = false;
	}
	if(var_82_bool != 1) {
		var_103_bool = var_76_string == "wasted_male";
		if(var_103_bool != 1)
			var_81_bool = false;
	}
	if(var_81_bool != 1) {
		var_105_bool = var_76_string == "alkash";
		if(var_105_bool != 1)
			var_80_bool = false;
	}
	if(var_80_bool != 1) {
		var_107_bool = var_76_string == "dohodyaga";
		if(var_107_bool != 1)
			var_79_bool = false;
	}
	if(var_79_bool != 1) {
		var_109_bool = var_76_string == "vaxxabit";
		if(var_109_bool != 1)
			var_78_bool = false;
	}
	if(var_78_bool != 1) {
		var_111_bool = var_76_string == "nudegirl";
		if(var_111_bool != 1)
			var_77_bool = false;
	}
	if(var_77_bool != 1) {
		var_113_bool = var_76_string == "morlok";
		if(var_113_bool != 1)
			var_75_bool = false;
	}
}


void func_1481(bool var_92_bool)
{
	var_92_bool = true;
}


// @pe
void func_1994(string var_573_string, int var_574_int)
{
	if(var_574_int == 2) {
		var_573_string = "fire";
		return 0;
	EMIT "GOTO 0x7d6";
	}
	if(var_574_int == 1) {
		var_573_string = "bullet";
		return 0;
	}
	var_573_string = "phys";
}


void func_1483(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_1488(bool var_30_bool)
{
	bool var_32_bool;
	@Sleep(5, var_32_bool);
	var_30_bool = !var_32_bool;
}


void func_467(bool var_0_bool, float var_531_float, int var_532_int)
{
	object var_536_object; float var_537_float; float var_538_float;
	@GetVictim((var_531_float * 0.9), var_536_object);
	@ReportAttack(var_0_bool);
	if(var_536_object == var_0_bool) {
		float var_542_float; object var_543_object; int var_544_int;
		var_536_object = var_543_object;
		var_532_int = var_544_int;
		func_154(var_544_int);
		var_542_float = var_537_float;
		float var_545_float; object var_546_object; float var_547_float; int var_548_int;
		var_536_object = var_546_object;
		int var_549_int; object var_550_object; int var_551_int;
		var_536_object = var_550_object;
		var_532_int = var_551_int;
		func_157(var_551_int);
		var_549_int = var_548_int;
		func_2062(var_545_float, var_546_object, var_547_float, var_548_int);
		var_545_float = var_538_float;
		int var_610_int;
		func_160(var_610_int);
		@ReportHit(var_0_bool, var_610_int, var_538_float, var_547_float);
		object var_611_object; float var_612_float;
		var_536_object = var_611_object;
		var_538_float = var_612_float;
		func_162(var_611_object, var_612_float);
	}
}
EMIT "Stack[-3] = 0";


void func_1494(void)
{
	@StopGroup0();
}


void func_2008(cvector var_50_cvector, object var_51_object)
{
	cvector var_54_cvector;
	@GetPosition(var_54_cvector);
	cvector var_55_cvector;
	var_51_object->GetPosition(var_55_cvector);
	var_50_cvector = var_55_cvector - var_54_cvector;
}


void func_2015(float var_78_float, object var_79_object)
{
	cvector var_83_cvector;
	@GetPosition(var_83_cvector);
	cvector var_84_cvector;
	var_79_object->GetPosition(var_84_cvector);
	var_78_float = (var_84_cvector - var_83_cvector) | (var_84_cvector - var_83_cvector);
}


void func_992(bool var_0_bool, object var_1_object, bool var_309_bool, object var_310_object, float var_311_float, float var_312_float, bool var_313_bool, bool var_314_bool)
{
	bool var_323_bool; object var_325_object; cvector var_326_cvector; cvector var_327_cvector; float var_329_float; object var_330_object;
	var_0_bool = false;
	var_1_object = var_310_object;
	bool var_324_bool;
	var_314_bool = var_324_bool;
	
	for(;;) {
		bool var_331_bool; object var_332_object;
		var_310_object = var_332_object;
		func_1132(var_331_bool, var_332_object);
		if(!var_331_bool) { //@nz
			var_309_bool = false;
			return 16;
		}
		var_310_object->GetPosition(var_326_cvector);
		@GetPosition(var_327_cvector);
		var_329_float = (var_326_cvector - var_327_cvector) | (var_326_cvector - var_327_cvector);
		bool var_336_bool = false;
		if(var_312_float > 0) {
			if(var_329_float > (var_312_float * var_312_float))
				var_336_bool = true;
		}
		if(var_336_bool != 0) {
			@Stop();
			var_309_bool = false;
			return 16;
		}
		if(var_329_float > (var_311_float * var_311_float)) {
			var_310_object->GetPFPosition(var_326_cvector);
			@FindPathTo(var_330_object, var_326_cvector);
			if(var_330_object != null) {
				var_330_object = var_325_object;
				var_330_object = null;
			}
			if(var_325_object != null) {
				if(var_324_bool == 0) goto Label_1045;
				var_324_bool = false;
				@RotatePath(var_325_object, var_323_bool);
				if(!var_323_bool) { //@nz
				} else {
						@SetTimer(0, 0.3);
						string var_349_string;
						func_1139(var_349_string);
						string var_350_string;
						func_1141(var_350_string);
						@FollowPath(var_325_object, var_313_bool, var_323_bool, var_349_string, var_350_string);
						if(!var_323_bool) { //@nz
							if(var_0_bool == 0) goto Label_1064;
							var_325_object = null;
						}
					EMIT "GOTO 0x429";

					Label_1064:
						} else {
					var_325_object = null;
			} else {
					@KillTimer(0);
					@Sleep(0.5, var_323_bool);
					if(!var_323_bool) { //@nz
						if(var_0_bool != 0) {
							var_325_object = null;
							goto Label_1092;
						}
					}
					@SetTimer(0, 0.3);
		}
				@KillTimer(0);
				goto Label_1092;
		}
			var_330_object = null;
			goto Label_1090;

		Label_1090:
			var_325_object = null;

		}
	Label_1092:
		for(;;) {
			var_309_bool = !var_0_bool;
			return 16;

			}
	}
	
}


void func_2023(bool var_18_bool, object var_19_object)
{
	bool var_21_bool;
	@IsPlayerActor(var_19_object, var_21_bool);
	var_21_bool = var_18_bool;
}


void func_2028(bool var_41_bool, object var_42_object, string var_43_string)
{
	var_48_bool = IsFuncExist(var_42_object, "HasProperty", 2);
	if(!var_48_bool) { //@nz
		var_41_bool = false;
		return 2;
	}
	bool var_45_bool;
	var_42_object->HasProperty(var_43_string, var_45_bool);
	var_45_bool = var_41_bool;
}


void func_3062(int var_134_int)
{
	int var_136_int;
	@GetVariable("branch", var_136_int);
	var_136_int = var_134_int;
}


void func_2040(bool var_33_bool, object var_34_object, string var_35_string, float var_36_float, float var_37_float, float var_38_float)
{
	object var_42_object;
	var_34_object = var_42_object;
	string var_43_string;
	var_35_string = var_43_string;
	bool var_41_bool;
	func_2028(var_41_bool, var_42_object, var_43_string);
	if(!var_41_bool) //@nz
		var_33_bool = false;
	float var_40_float;
	var_34_object->GetProperty(var_35_string, var_40_float);
	float var_51_float; float var_53_float; float var_54_float;
	var_37_float = var_53_float;
	var_38_float = var_54_float;
	func_2638(var_51_float, (var_40_float + var_36_float), var_53_float, var_54_float);
	var_34_object->SetProperty(var_35_string, var_51_float);
	var_33_bool = true;
}


void func_506(bool var_0_bool, object var_1_object, bool var_498_bool, float var_499_float)
{
	string var_507_string;
	func_847(var_507_string);
	int var_504_int;
	@irand(var_504_int, var_1_object);
	@Face(var_0_bool);
	@SetAttackState(true);
	func_2739();
	@PlayAnimation("all", ("attack_begin" + (var_504_int + 1)));
	@WaitForAnimEnd();
	int var_506_int;
	func_815(var_506_int, var_507_string);
	bool var_528_bool;
	func_2207(var_528_bool, var_0_bool);
	if(!var_528_bool) { //@nz
		@StopAsync();
		var_498_bool = false;
		return 8;
	}
	float var_531_float; int var_532_int;
	var_499_float = var_531_float;
	var_504_int = var_532_int;
	func_467(var_507_string, var_531_float, var_532_int);
	bool var_505_bool;
	@HasAnimation(var_505_bool, "all", ("attack_middle" + var_504_int));
	if(var_505_bool != 0) {
		func_2739();
		@PlayAnimation("all", ("attack_middle" + var_504_int));
		@WaitForAnimEnd();
		func_847(var_507_string);
		bool var_641_bool;
		func_2207(var_641_bool, var_0_bool);
		if(!var_641_bool) { //@nz
			@StopAsync();
			var_498_bool = false;
			return 8;
		}
		float var_644_float; int var_645_int;
		var_499_float = var_644_float;
		func_467(var_507_string, var_644_float, var_645_int);
		var_506_int = 1;

		for(;;) {
			var_507_string = (("attack_middle" + var_645_int) + "_") + var_506_int;
			@HasAnimation(var_505_bool, "all", var_507_string);
			if(!var_505_bool) { //@nz
			} else {
				func_2739();
				@PlayAnimation("all", var_507_string);
				@WaitForAnimEnd();
				func_847(var_507_string);
				bool var_667_bool;
				func_2207(var_667_bool, var_0_bool);
				if(!var_667_bool) { //@nz
					@StopAsync();
					var_498_bool = false;
					return 8;
				}
				float var_670_float; int var_671_int;
				var_499_float = var_670_float;
				var_504_int = var_671_int;
				func_467(var_507_string, var_670_float, var_671_int);
				var_506_int += 1;
			}
	}
		@SetAttackState(false);
		@PlayAnimation("all", ("attack_end" + var_504_int));
		bool var_656_bool;
		func_857(var_656_bool);
		if(var_656_bool != 0) {
			bool var_657_bool;
			func_645(var_657_bool, 0.45);
			@StopAsync();
		}
		var_498_bool = true;
		return 8;

	}
}


// @pe
void func_3068(object var_20_object)
{
	int var_21_int;
	func_3062(var_21_int);
	if(var_21_int == 1)
		@WorkWithCorpse(var_20_object);
	else
		@Barter(var_20_object);
	
}


