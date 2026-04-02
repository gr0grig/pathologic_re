maintask task_0
{
	void init(object var_0_object)
	{
		object var_2_object;
		@GetSceneByName(var_2_object, "termitnik");
		object var_4_object; object var_5_object;
		var_2_object = var_5_object;
		func_108(var_4_object, var_5_object, "pt_d9q03_burah", "NPC_Burah", "d9q05_burah.xml");
		var_0_object = var_4_object;
		func_78(9);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "init_soldiers") {
		} else if(var_1_string == "fail") {
				func_50();
		}
	Label_38:
		for(;;) {

		}
	
		if(!(var_1_string == "completed")) goto Label_38;
		func_58();
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_39();
	}

}


void func_66(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_30_object;
	func_102(var_30_object);
	@RemoveActor(var_30_object);
}


void func_102(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_39(void)
{
	int var_4_int;
	@GetVariable("d9q05", var_4_int);
	if(var_4_int != 1000)
		func_50();
}


void func_108(object var_4_object, object var_5_object, string var_6_string, string var_7_string, string var_8_string)
{
	bool var_13_bool; cvector var_14_cvector; cvector var_15_cvector;
	var_5_object->GetLocator(var_6_string, var_13_bool, var_14_cvector, var_15_cvector);
	if(!var_13_bool) //@nz
		@Trace(("Locator " + var_6_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_7_string, var_5_object, var_14_cvector, var_15_cvector, var_8_string);
	object var_16_object = var_4_object;
	
}
EMIT "Stack[-1] = 0";


void func_78(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	if(var_24_float >= (var_22_int * 24)) {
		func_66(var_24_float);
	} else {
		@SetTimeEvent(0, (var_22_int * 24));
		@Hold();
	}
	
}


void func_50(void)
{
	@SetVariable("d9q05", -1);
	func_66(var_4_int);
}


void func_58(void)
{
	@SetVariable("d9q05", 1000);
	func_66(var_1_string);
}


