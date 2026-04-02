maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool)
	{
		@sync();
		bool var_2_bool;
		func_77(var_2_bool);
		if(!var_2_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		} else {
			var_1_bool = false;
		}
		func_27();
	
	}

	void OnUnload(bool var_0_bool, bool var_1_bool)
	{
		if(!var_1_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		}
		func_59();
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
				func_75(var_9_bool);
				if(var_9_bool != 0)
					var_7_bool = true;
			}
			if(var_7_bool != 0) {
				object var_10_object;
				func_82(var_10_object);
				@RemoveActor(var_10_object);
			}
		} else if(var_2_string == "restore") {
			var_0_bool = false;
		}
	
	}

}


void func_27(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_75(bool var_9_bool)
{
	var_9_bool = true;
}


void func_77(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_82(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_59(void)
{
	bool var_4_bool = false;
	if(var_0_bool != 0) {
		bool var_6_bool;
		func_75(var_6_bool);
		if(var_6_bool != 0)
			var_4_bool = true;
	}
	if(var_4_bool != 0) {
		object var_7_object;
		func_82(var_7_object);
		@RemoveActor(var_7_object);
	}
}


