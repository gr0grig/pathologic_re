maintask task_0
{
	void init(bool var_0_bool)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(bool var_0_bool, object var_1_object)
	{
		bool var_3_bool;
		@IsPlayerActor(var_1_object, var_3_bool);
		if(var_3_bool != 0) {
			disable OnIntersection;
			bool var_5_bool;
			func_73(var_5_bool, "quest_d3_02", "butcher_trigger");
			object var_11_object;
			func_67(var_11_object);
			@RemoveActor(var_11_object);
		}
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
				func_65(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_67(var_9_object);
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
			func_65(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_67(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_65(bool var_3_bool)
{
	var_3_bool = true;
}


void func_73(bool var_5_bool, string var_6_string, string var_7_string)
{
	object var_9_object;
	@FindActor(var_9_object, var_6_string);
	if(var_9_object == null)
		var_5_bool = false;
	@Trigger(var_9_object, var_7_string);
	var_5_bool = true;
}
EMIT "Stack[-1] = 0";


void func_67(object var_4_object)
{
	object var_6_object;
	@self(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


