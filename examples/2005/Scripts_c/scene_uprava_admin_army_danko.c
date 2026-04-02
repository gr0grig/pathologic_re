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
		func_55(var_1_bool, "quest_d11_02", "uprava_load");
		bool var_7_bool;
		func_76(var_7_bool, 11);
		if(var_7_bool != 0) {
			object var_15_object; object var_16_object;
			object var_20_object;
			func_31(var_20_object);
			var_20_object = var_16_object;
			func_37(var_15_object, var_16_object, "pt_d11_klara", "NPC_Klara", "d11_klara.xml");
			var_0_object = var_15_object;
		}
	}

	void OnUnload(object var_0_object)
	{
		if(var_0_object != 0)
			@RemoveActor(var_0_object);
	}

}


void func_67(int var_9_int)
{
	float var_11_float;
	@GetGameTime(var_11_float);
	var_9_int = 1 + (var_11_float / 24);
}


void func_37(object var_15_object, object var_16_object, string var_17_string, string var_18_string, string var_19_string)
{
	bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	var_16_object->GetLocator(var_17_string, var_27_bool, var_28_cvector, var_29_cvector);
	if(!var_27_bool) //@nz
		@Trace(("Locator " + var_17_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_18_string, var_16_object, var_28_cvector, var_29_cvector, var_19_string);
	object var_30_object = var_15_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_76(bool var_7_bool, int var_8_int)
{
	int var_9_int;
	func_67(var_9_int);
	var_7_bool = var_9_int == var_8_int;
}


void func_55(bool var_1_bool, string var_2_string, string var_3_string)
{
	object var_5_object;
	@FindActor(var_5_object, var_2_string);
	if(var_5_object == null)
		var_1_bool = false;
	@Trigger(var_5_object, var_3_string);
	var_1_bool = true;
}
EMIT "Stack[-1] = 0";


void func_31(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


