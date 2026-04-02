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
		object var_8_object; bool var_9_bool; cvector var_10_cvector; cvector var_11_cvector;
		if(!var_0_bool) { //@nz
		}
		bool var_7_bool;
		@IsPlayerActor(var_1_object, var_7_bool);
		if(var_7_bool != 0) {
			@GetSceneByName(var_8_object, "boiny_well");
			@RemoveScene(var_8_object);
			@GetMainOutdoorScene(var_8_object);
			var_8_object->GetLocator("pt_b11q01_well_return", var_9_bool, var_10_cvector, var_11_cvector);
			@Teleport(var_1_object, var_8_object, var_10_cvector, var_11_cvector);
			var_8_object = null;
		}
	}

	// @pe
	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		if(var_1_string == "activate")
			var_0_bool = true;
	}

}


