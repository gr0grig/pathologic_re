maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object, object var_1_object, object var_2_object)
	{
		int var_4_int;
		@GetVariable("sobor_aglaja", var_4_int);
		if(var_4_int != 0) {
			object var_7_object; object var_8_object;
			object var_12_object;
			func_84(var_12_object);
			var_12_object = var_8_object;
			func_90(var_7_object, var_8_object, "pt_Aglaja", "NPC_Aglaja", "NPC_Danko_Aglaja.xml");
			var_0_object = var_7_object;
			object var_28_object; object var_29_object;
			object var_33_object;
			func_84(var_33_object);
			var_33_object = var_29_object;
			func_90(var_28_object, var_29_object, "pt_sobor_mask1", "pers_whitemask", "sobor_whitemask.xml");
			var_1_object = var_28_object;
			object var_34_object; object var_35_object;
			object var_39_object;
			func_84(var_39_object);
			var_39_object = var_35_object;
			func_90(var_34_object, var_35_object, "pt_sobor_mask2", "pers_whitemask", "sobor_whitemask.xml");
			var_2_object = var_34_object;
		}
		bool var_40_bool;
		func_108(var_40_bool, "quest_d12_01", "sobor_load");
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object)
	{
		if(var_0_object != 0)
			@RemoveActor(var_0_object);
		if(var_1_object != 0)
			@RemoveActor(var_1_object);
		if(var_2_object != 0)
			@RemoveActor(var_2_object);
		bool var_6_bool;
		func_108(var_6_bool, "quest_d12_01", "sobor_unload");
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		if(var_3_string == "noaglaja") {
			@SetVariable("sobor_aglaja", 0);
		} else if(var_3_string == "aglaja") {
			@SetVariable("sobor_aglaja", 1);
		}
	
	}

}


void func_90(object var_7_object, object var_8_object, string var_9_string, string var_10_string, string var_11_string)
{
	bool var_19_bool; cvector var_20_cvector; cvector var_21_cvector;
	var_8_object->GetLocator(var_9_string, var_19_bool, var_20_cvector, var_21_cvector);
	if(!var_19_bool) //@nz
		@Trace(("Locator " + var_9_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_10_string, var_8_object, var_20_cvector, var_21_cvector, var_11_string);
	object var_22_object = var_7_object;
	
}
EMIT "Stack[-1] = 0";


void func_108(bool var_6_bool, string var_7_string, string var_8_string)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(var_10_object == null)
		var_6_bool = false;
	@Trigger(var_10_object, var_8_string);
	var_6_bool = true;
}
EMIT "Stack[-1] = 0";


void func_84(object var_12_object)
{
	object var_14_object;
	@self(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


