// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		func_98(7);
	}

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_4_object;
		@Trace(var_2_string);
		if(var_2_string == "init_house_petr") {
			@GetSceneByName(var_4_object, "house_petr");
			object var_8_object; object var_9_object;
			var_4_object = var_9_object;
			func_128(var_8_object, var_9_object, "pt_d7q03_maria", "NPC_Maria", "d7q03_maria.xml");
			var_0_object = var_8_object;
			object var_26_object; object var_27_object;
			var_4_object = var_27_object;
			func_128(var_26_object, var_27_object, "pt_d7q03_aglaja", "NPC_Aglaja", "d7q03_aglaja.xml");
			var_1_object = var_26_object;
			var_4_object = null;
		} else if(var_2_string == "remove_maria") {
				if(var_0_object != 0)
					@RemoveActor(var_0_object);
		}

	
		if(var_2_string == "fail") {
			func_65();
		} else if(var_2_string == "completed") {
			func_73();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_54();
	}

}


void func_128(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
{
	bool var_17_bool; cvector var_18_cvector; cvector var_19_cvector;
	var_9_object->GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	if(!var_17_bool) //@nz
		@Trace(("Locator " + var_10_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_11_string, var_9_object, var_18_cvector, var_19_cvector, var_12_string);
	object var_20_object = var_8_object;
	
}
EMIT "Stack[-1] = 0";


void func_65(void)
{
	@SetVariable("d7q03", -1);
	func_81(var_4_int, var_5_int);
}


void func_98(int var_2_int)
{
	float var_3_float; float var_4_float;
	@GetGameTime(var_4_float);
	if(var_4_float >= (var_2_int * 24)) {
		func_81(var_3_float, var_4_float);
	} else {
		@SetTimeEvent(0, (var_2_int * 24));
		@Hold();
	}
	
}


void func_73(void)
{
	@SetVariable("d7q03", 1000);
	func_81(var_3_object, var_4_object);
}


void func_81(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_12_object;
	func_122(var_12_object);
	@RemoveActor(var_12_object);
}


void func_54(void)
{
	int var_5_int;
	@GetVariable("d7q03", var_5_int);
	if(var_5_int != 1000)
		func_65();
}


void func_122(object var_12_object)
{
	object var_14_object;
	@self(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


