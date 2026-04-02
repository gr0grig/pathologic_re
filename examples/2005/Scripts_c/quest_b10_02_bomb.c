maintask task_0
{
	void init(bool var_0_bool)
	{
		@SetVisibility(true);
		func_31();
	}

	void OnCollision(bool var_0_bool, object var_1_object)
	{
		bool var_6_bool; object var_7_object; cvector var_8_cvector; object var_9_object;
		@IsPlayerActor(var_1_object, var_6_bool);
		if(var_6_bool != 0) {
			var_1_object->SetProperty("health", 0);
			@GetScene(var_7_object);
			@GetPosition(var_8_cvector);
			@AddActorByType(var_9_object, "scripted", var_7_object, var_8_cvector, [0.0, 0.0, 0.0], "fire.xml");
			@PlaySound("explode");
			var_9_object = null;
			var_7_object = null;
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
				func_79(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_81(var_9_object);
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
			func_79(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_81(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_81(object var_4_object)
{
	object var_6_object;
	@self(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_79(bool var_3_bool)
{
	var_3_bool = true;
}


void func_31(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


