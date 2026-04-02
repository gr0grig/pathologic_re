maintask task_0
{
	void init(object var_0_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object)
	{
		bool var_1_bool;
		func_59(var_1_bool, 3);
		if(var_1_bool != 0) {
			object var_9_object; object var_10_object;
			object var_14_object;
			func_26(var_14_object);
			var_14_object = var_10_object;
			func_32(var_9_object, var_10_object, "pt_klara", "NPC_Klara", "d3_klara.xml");
			var_0_object = var_9_object;
		}
	}

	void OnUnload(object var_0_object)
	{
		if(var_0_object != 0)
			@RemoveActor(var_0_object);
	}

}


void func_32(object var_9_object, object var_10_object, string var_11_string, string var_12_string, string var_13_string)
{
	bool var_21_bool; cvector var_22_cvector; cvector var_23_cvector;
	var_10_object->GetLocator(var_11_string, var_21_bool, var_22_cvector, var_23_cvector);
	if(!var_21_bool) //@nz
		@Trace(("Locator " + var_11_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_12_string, var_10_object, var_22_cvector, var_23_cvector, var_13_string);
	object var_24_object = var_9_object;
	
}
EMIT "Stack[-1] = 0";


void func_26(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_59(bool var_1_bool, int var_2_int)
{
	int var_3_int;
	func_50(var_3_int);
	var_1_bool = var_3_int == var_2_int;
}


void func_50(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	var_3_int = 1 + (var_5_float / 24);
}


