maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object)
	{
		var_0_bool = true;
		var_1_bool = true;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object)
	{
		if(var_0_bool != 0) {
			object var_5_object; object var_6_object;
			object var_10_object;
			func_63(var_10_object);
			var_10_object = var_6_object;
			func_69(var_5_object, var_6_object, "pt_Danko", "NPC_Bakalavr", "NPC_Burah_Danko.xml");
			var_2_object = var_5_object;
		}
		if(var_1_bool != 0) {
			object var_27_object; object var_28_object;
			object var_32_object;
			func_63(var_32_object);
			var_32_object = var_28_object;
			func_69(var_27_object, var_28_object, "pt_eva", "NPC_Eva", "NPC_Burah_Eva.xml");
			var_3_object = var_27_object;
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object)
	{
		if(var_2_object != 0)
			@RemoveActor(var_2_object);
		if(var_3_object != 0)
			@RemoveActor(var_3_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, bool var_1_bool, object var_2_object, object var_3_object, string var_4_string)
	{
		if(var_4_string == "nodanko") {
			var_0_bool = false;
		} else if(var_4_string == "danko") {
				var_0_bool = true;
		}

	
		if(var_4_string == "noeva") {
			var_1_bool = false;
		} else if(var_4_string == "eva") {
			var_1_bool = true;
		}
	}

}


void func_69(object var_5_object, object var_6_object, string var_7_string, string var_8_string, string var_9_string)
{
	bool var_17_bool; cvector var_18_cvector; cvector var_19_cvector;
	var_6_object->GetLocator(var_7_string, var_17_bool, var_18_cvector, var_19_cvector);
	if(!var_17_bool) //@nz
		@Trace(("Locator " + var_7_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_8_string, var_6_object, var_18_cvector, var_19_cvector, var_9_string);
	object var_20_object = var_5_object;
	
}
EMIT "Stack[-1] = 0";


void func_63(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


