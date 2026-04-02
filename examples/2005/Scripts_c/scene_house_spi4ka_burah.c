maintask task_0
{
	void init(bool var_0_bool, object var_1_object)
	{
		var_0_bool = true;
	
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
			func_35(var_8_object);
			var_8_object = var_4_object;
			func_41(var_3_object, var_4_object, "pt_spi4ka", "NPC_Spi4ka", "NPC_Burah_Spi4ka.xml");
			var_1_object = var_3_object;
		}
	}

	void OnUnload(bool var_0_bool, object var_1_object)
	{
		if(var_1_object != 0)
			@RemoveActor(var_1_object);
	}

	// @pe
	void OnTrigger(bool var_0_bool, object var_1_object, string var_2_string)
	{
		if(var_2_string == "nospi4ka") {
			var_0_bool = false;
		} else if(var_2_string == "spi4ka") {
			var_0_bool = true;
		}
	
	}

}


void func_41(object var_3_object, object var_4_object, string var_5_string, string var_6_string, string var_7_string)
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


void func_35(object var_8_object)
{
	object var_10_object;
	@self(var_10_object);
	var_10_object = var_8_object;
}
EMIT "Stack[-1] = 0";


