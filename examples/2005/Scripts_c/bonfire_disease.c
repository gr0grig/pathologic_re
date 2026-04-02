maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		@SetVisibility(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object, object var_1_object)
	{
		cvector var_7_cvector; string var_11_string;
		@GetPosition(var_7_cvector);
		object var_8_object;
		@GetScene(var_8_object);
		int var_9_int;
		var_8_object->GetRegionByPt(var_9_int, var_7_cvector);
		if(var_9_int == -1)
			@Trace("Invalid bonfire region");
		string var_15_string; int var_16_int;
		var_9_int = var_16_int;
		func_64(var_15_string, var_16_int);
		int var_10_int;
		@GetVariable(var_15_string, var_10_int);
		var_10_int = var_10_int & 3;
		bool var_21_bool = true;
		var_23_bool = var_10_int == 1;
		if(var_23_bool != 1) {
			var_25_bool = var_10_int == 2;
			if(var_25_bool != 1)
				var_21_bool = false;
		}
		if(var_21_bool != 0) {
			@GetActorName(var_11_string);
			@AddActor(var_0_object, (var_11_string + "_light"), var_8_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "light_fire.xml");
			@AddActorByType(var_1_object, "scripted", var_8_object, var_7_cvector, [0.0, 0.0, 1.0], "fire.xml");
		}
	}
	EMIT "Stack[-4] = 0";

	void OnUnload(object var_0_object, object var_1_object)
	{
		if(var_0_object != 0)
			@RemoveActor(var_0_object);
		if(var_1_object != 0)
			@RemoveActor(var_1_object);
	}

}


// @pe
void func_64(string var_15_string, int var_16_int)
{
	var_15_string = ("Region" + var_16_int) + "State";
}


