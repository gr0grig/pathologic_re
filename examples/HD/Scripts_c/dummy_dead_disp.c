maintask task_0
{
	void init(bool var_0_bool)
	{
		@RemoveRTEnvelope();
		@RemoveEnvelope();
		@SetDeathState();
		string var_2_string;
		@GetProperty("animation", var_2_string);
		@LockAnimationEnd("all", var_2_string);
		func_25();
	}

	void OnLoad(bool var_0_bool)
	{
		string var_2_string;
		@GetProperty("animation", var_2_string);
		@LockAnimationEnd("all", var_2_string);
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			bool var_6_bool = false;
			if(!var_3_bool) { //@nz
				bool var_8_bool;
				func_73(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_75(var_9_object);
				@RemoveActor(var_9_object);
			}
		} else if(var_1_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool)
	{
		bool var_1_bool = false;
		if(var_0_bool != 0) {
			bool var_3_bool;
			func_73(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_75(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_73(bool var_3_bool)
{
	var_3_bool = true;
}


void func_75(object var_4_object)
{
	object var_6_object;
	@self(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_25(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


