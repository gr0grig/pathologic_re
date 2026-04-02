maintask task_0
{
	void init(bool var_0_bool)
	{
		@SetVisibility(true);
		func_35();
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			if(!var_3_bool) { //@nz
				object var_7_object;
				func_65(var_7_object);
				@RemoveActor(var_7_object);
			}
		} else if(var_1_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool)
	{
		if(var_0_bool != 0) {
			object var_2_object;
			func_65(var_2_object);
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
			func_71(var_8_bool);
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
				@Barter(var_1_object);
			enable OnUse;
		}
	}

}


void func_65(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


void func_35(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_71(bool var_8_bool)
{
	int var_10_int;
	@GetVariable("nouse_container", var_10_int);
	var_8_bool = !var_10_int;
}


