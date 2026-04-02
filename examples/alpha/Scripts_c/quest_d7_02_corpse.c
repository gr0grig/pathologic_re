maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool)
	{
		@sync();
		bool var_2_bool;
		func_105(var_2_bool);
		if(!var_2_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		} else {
			var_1_bool = false;
		}
		func_57();
	
	}

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object)
	{
		@SetVariable("d7q02BirdBalahon", 1);
		var_0_bool = true;
		int var_5_int;
		@GetVariable("d7q02", var_5_int);
		if(var_5_int == 4) {
			bool var_12_bool;
			func_116(var_12_bool, "quest_d7_02", "completed");
		}
		bool var_6_bool;
		@IsOverrideActive(var_6_bool);
		if(!var_6_bool) //@nz
			@WorkWithCorpse(var_2_object);
	}

	void OnUnload(bool var_0_bool, bool var_1_bool)
	{
		if(!var_1_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		}
		func_89();
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, string var_2_string)
	{
		bool var_4_bool;
		if(var_2_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_4_bool);
			bool var_7_bool = false;
			if(!var_4_bool) { //@nz
				bool var_9_bool;
				func_24(var_9_bool);
				if(var_9_bool != 0)
					var_7_bool = true;
			}
			if(var_7_bool != 0) {
				object var_13_object;
				func_110(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_2_string == "restore") {
			var_0_bool = false;
		}
	
	}

}


void func_105(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_110(object var_13_object)
{
	object var_15_object;
	@self(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_116(bool var_12_bool, string var_13_string, string var_14_string)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(var_16_object == null)
		var_12_bool = false;
	@Trigger(var_16_object, var_14_string);
	var_12_bool = true;
}
EMIT "Stack[-1] = 0";


void func_24(bool var_9_bool)
{
	bool var_11_bool;
	@GetVariable("d7q02BirdBalahon", var_11_bool);
	var_11_bool = var_9_bool;
}


void func_89(void)
{
	bool var_4_bool = false;
	if(var_0_bool != 0) {
		bool var_6_bool;
		func_24(var_6_bool);
		if(var_6_bool != 0)
			var_4_bool = true;
	}
	if(var_4_bool != 0) {
		object var_10_object;
		func_110(var_10_object);
		@RemoveActor(var_10_object);
	}
}


void func_57(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


