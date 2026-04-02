maintask task_0
{
	void init(bool var_0_bool)
	{
		@SetVisibility(true);
	
		for(;;) {
			var_2_bool = !var_0_bool; //@nz
			if(var_2_bool == 0) goto Label_8;
			@Hold();
		}
	
	Label_8:
		@SetUsable(false);
	}

	// @pe
	void OnUse(bool var_0_bool, object var_1_object)
	{
		object var_2_object;
		func_40(var_2_object, "quest_b10_01_cutscene");
		func_21(var_1_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "enable_use") {
			@SetUsable();
		} else if(var_1_string == "disable_use") {
			func_21(var_1_string);
		}
	
	}

}


void func_40(object var_2_object, string var_3_string)
{
	object var_6_object;
	@GetMainOutdoorScene(var_6_object);
	object var_7_object;
	@AddBlankActor(var_7_object, var_6_object, var_3_string, (var_3_string + ".bin"));
	var_7_object = var_2_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_21(bool var_0_bool)
{
	var_0_bool = true;
	@StopGroup0();
}


