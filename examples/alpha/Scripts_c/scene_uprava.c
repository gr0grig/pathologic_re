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
		bool var_3_bool;
		func_54(var_3_bool, "quest_d11_02", "uprava_load");
		if(!var_0_bool) { //@nz
			@GetGameTime(var_2_float);
			if(var_2_float >= 192) {
				var_0_bool = true;
				object var_12_object; object var_13_object;
				object var_17_object;
				func_30(var_17_object);
				var_17_object = var_13_object;
				func_36(var_12_object, var_13_object, "pt_Block", "NPC_Block", "NPC_Danko_Block.xml");
			}
		}
	}

}


void func_36(object var_12_object, object var_13_object, string var_14_string, string var_15_string, string var_16_string)
{
	bool var_24_bool; cvector var_25_cvector; cvector var_26_cvector;
	var_13_object->GetLocator(var_14_string, var_24_bool, var_25_cvector, var_26_cvector);
	if(!var_24_bool) //@nz
		@Trace(("Locator " + var_14_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_15_string, var_13_object, var_25_cvector, var_26_cvector, var_16_string);
	object var_27_object = var_12_object;
	
}
EMIT "Stack[-1] = 0";


void func_54(bool var_3_bool, string var_4_string, string var_5_string)
{
	object var_7_object;
	@FindActor(var_7_object, var_4_string);
	if(var_7_object == null)
		var_3_bool = false;
	@Trigger(var_7_object, var_5_string);
	var_3_bool = true;
}
EMIT "Stack[-1] = 0";


void func_30(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


