maintask task_0
{
	void init(bool var_0_bool)
	{
		@SetProperty("disease", 1);
		object var_2_object;
		@FindGeometry("corpse", var_2_object);
		var_2_object->Enable(true);
	
		while(true != 0) {
			@Hold();
		}
	
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnPropertyChange(bool var_0_bool, object var_1_object, string var_2_string)
	{
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			if(!var_3_bool) { //@nz
				object var_7_object;
				func_48(var_7_object);
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
			func_48(var_2_object);
			@RemoveActor(var_2_object);
		}
	}

}


void func_48(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


