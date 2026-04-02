maintask task_0
{
	void init(void)
	{
		object var_6_object; cvector var_7_cvector; cvector var_8_cvector; bool var_9_bool;
		@Sleep(5.0);
		func_49((float)0, (float)1, 3.0);
		object var_5_object;
		@FindActor(var_5_object, "player");
		if(var_5_object != 0) {
			@GetSceneByName(var_6_object, "cot_alexandr");
			var_6_object->GetLocator("pt_d3q01_teleport", var_9_bool, var_7_cvector, var_8_cvector);
			@Teleport(var_5_object, var_6_object, var_7_cvector, var_8_cvector);
			var_6_object = null;
		}
		@SetVariable("d3q01", 8);
		@sync();
		func_49((float)1, (float)0, 1.0);
		object var_34_object;
		func_43(var_34_object);
		@RemoveActor(var_34_object);
	}
	EMIT "Stack[-5] = 0";

}


void func_49(float var_11_float, float var_12_float, float var_13_float)
{
	bool var_17_bool; float var_19_float;
	var_17_bool = var_12_float > var_11_float;
	
	for(;;) {
		if(var_17_bool != 0)
			var_22_bool = var_11_float < var_12_float;
		else
			var_24_bool = var_12_float < var_11_float;
		if(var_22_bool == 0) goto Label_66;
		@ModDarkenLevel(var_11_float);
		@sync(var_19_float);
		var_11_float += (var_19_float * ((var_12_float - var_11_float) / var_13_float));
	}
	
Label_66:
	@ModDarkenLevel(var_12_float);
	
}


void func_43(object var_34_object)
{
	object var_36_object;
	@self(var_36_object);
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


