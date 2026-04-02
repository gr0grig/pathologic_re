maintask task_0
{
	void init(bool var_0_bool)
	{
		@SetVisibility(true);
		var_0_bool = false;
		@SetTimeEvent(0, 24);
		func_34();
	}

	// @pe
	void OnGameTime(bool var_0_bool, int var_1_int, float var_2_float)
	{
		bool var_3_bool;
		func_64(var_3_bool);
		if(!var_3_bool) { //@nz
			object var_7_object;
			func_69(var_7_object);
			@RemoveActor(var_7_object);
		} else {
			var_0_bool = true;
		}
	
	}

	void OnUnload(bool var_0_bool)
	{
		if(var_0_bool != 0) {
			object var_2_object;
			func_69(var_2_object);
			@RemoveActor(var_2_object);
		}
	}

	void OnUse(bool var_0_bool, object var_1_object)
	{
		bool var_5_bool;
		bool var_6_bool = true;
		var_7_bool = !var_1_object; //@nz
		if(var_7_bool != 1) {
			bool var_8_bool;
			func_75(var_8_bool);
			var_12_bool = !var_8_bool; //@nz
			if(var_12_bool != 1)
				var_6_bool = false;
		}
		if(var_6_bool != 0) {
		}
		bool var_4_bool;
		var_1_object->IsOnGround(var_4_bool);
		if(var_4_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_5_bool);
			if(!var_5_bool) //@nz
				@WorkWithCorpse(var_1_object);
			enable OnUse;
		}
	}

}


void func_64(bool var_3_bool)
{
	bool var_5_bool;
	@IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
}


void func_34(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_75(bool var_8_bool)
{
	int var_10_int;
	@GetVariable("nouse_container", var_10_int);
	var_8_bool = !var_10_int;
}


void func_69(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


