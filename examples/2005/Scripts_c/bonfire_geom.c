maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object)
	{
		string var_4_string;
		@GetProperty("light", var_4_string);
		@FindActor(var_1_object, var_4_string);
		var_1_object->Switch(true); //@t
		@SetVisibility(true);
		func_19(var_4_string);
		func_45();
	}

	void OnDispose(bool var_0_bool, object var_1_object, object var_2_object)
	{
		if(var_2_object != 0)
			@RemoveActor(var_2_object);
		if(var_1_object != 0)
			var_1_object->Switch(false); //@t
	}

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, string var_3_string)
	{
		bool var_5_bool;
		if(var_3_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_5_bool);
			bool var_8_bool = false;
			if(!var_5_bool) { //@nz
				bool var_10_bool;
				func_93(var_10_bool);
				if(var_10_bool != 0)
					var_8_bool = true;
			}
			if(var_8_bool != 0) {
				object var_11_object;
				func_95(var_11_object);
				@RemoveActor(var_11_object);
			}
		} else if(var_3_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object)
	{
		bool var_3_bool = false;
		if(var_0_bool != 0) {
			bool var_5_bool;
			func_93(var_5_bool);
			if(var_5_bool != 0)
				var_3_bool = true;
		}
		if(var_3_bool != 0) {
			object var_6_object;
			func_95(var_6_object);
			@RemoveActor(var_6_object);
		}
	}

}


void func_101(object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string)
{
	bool var_22_bool; cvector var_23_cvector; cvector var_24_cvector;
	var_14_object->GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	if(!var_22_bool) //@nz
		@Trace(("Locator " + var_15_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	object var_25_object = var_13_object;
	
}
EMIT "Stack[-1] = 0";


void func_45(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_19(object var_2_object)
{
	object var_10_object;
	@GetScene(var_10_object);
	string var_11_string;
	@GetProperty("fire_loc", var_11_string);
	object var_13_object; object var_14_object; string var_15_string;
	var_10_object = var_14_object;
	var_11_string = var_15_string;
	func_101(var_13_object, var_14_object, var_15_string, "scripted", "bonfire.xml");
	var_2_object = var_13_object;
}
EMIT "Stack[-2] = 0";


void func_93(bool var_5_bool)
{
	var_5_bool = true;
}


void func_95(object var_6_object)
{
	object var_8_object;
	@self(var_8_object);
	var_8_object = var_6_object;
}
EMIT "Stack[-1] = 0";


