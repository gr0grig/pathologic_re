maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(bool var_0_bool)
	{
		float var_2_float;
		if(!var_0_bool) { //@nz
			@GetGameTime(var_2_float);
			if(var_2_float >= 96) {
				var_0_bool = true;
				object var_6_object; object var_7_object;
				object var_11_object;
				func_25(var_11_object);
				var_11_object = var_7_object;
				func_31(var_6_object, var_7_object, "pt_manager", "pers_doberman", "rats_manager.xml");
			}
		}
	}

}


void func_25(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_31(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
{
	bool var_18_bool; cvector var_19_cvector; cvector var_20_cvector;
	var_7_object->GetLocator(var_8_string, var_18_bool, var_19_cvector, var_20_cvector);
	if(!var_18_bool) //@nz
		@Trace(("Locator " + var_8_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_9_string, var_7_object, var_19_cvector, var_20_cvector, var_10_string);
	object var_21_object = var_6_object;
	
}
EMIT "Stack[-1] = 0";


