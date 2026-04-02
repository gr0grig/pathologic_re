maintask task_0
{
	void init(bool var_0_bool, object var_1_object)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(bool var_0_bool, object var_1_object)
	{
		if(var_0_bool != 0) {
			object var_3_object; object var_4_object;
			object var_8_object;
			func_40(var_8_object);
			var_8_object = var_4_object;
			func_46(var_3_object, var_4_object, "pt_rubin", "NPC_Rubin", "NPC_Burah_Rubin.xml");
			var_1_object = var_3_object;
		}
		bool var_24_bool;
		func_64(var_24_bool, "quest_k10_01", "warehouse_rubin_load");
	}

	void OnUnload(bool var_0_bool, object var_1_object)
	{
		if(var_1_object != 0)
			@RemoveActor(var_1_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, string var_2_string)
	{
		if(var_2_string == "norubin") {
			var_0_bool = false;
		} else if(var_2_string == "rubin") {
			var_0_bool = true;
		}
	
	}

}


void func_40(object var_8_object)
{
	object var_10_object;
	@self(var_10_object);
	var_10_object = var_8_object;
}
EMIT "Stack[-1] = 0";


void func_64(bool var_24_bool, string var_25_string, string var_26_string)
{
	object var_28_object;
	@FindActor(var_28_object, var_25_string);
	if(var_28_object == null)
		var_24_bool = false;
	@Trigger(var_28_object, var_26_string);
	var_24_bool = true;
}
EMIT "Stack[-1] = 0";


void func_46(object var_3_object, object var_4_object, string var_5_string, string var_6_string, string var_7_string)
{
	bool var_15_bool; cvector var_16_cvector; cvector var_17_cvector;
	var_4_object->GetLocator(var_5_string, var_15_bool, var_16_cvector, var_17_cvector);
	if(!var_15_bool) //@nz
		@Trace(("Locator " + var_5_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_6_string, var_4_object, var_16_cvector, var_17_cvector, var_7_string);
	object var_18_object = var_3_object;
	
}
EMIT "Stack[-1] = 0";


