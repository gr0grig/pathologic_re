maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d1q04", 1);
		object var_5_object;
		@GetSceneByName(var_5_object, "r2_house_2_02");
		bool var_6_bool;
		cvector var_7_cvector;
		cvector var_8_cvector;
		var_5_object->GetLocator("pt_powder", var_6_bool, var_7_cvector, var_8_cvector);
		if(!var_6_bool) //@nz
			@Trace("Locator doesn't exist for qd1_04_powder");
		else
			@AddActorByType(var_0_object, "scripted_container", var_5_object, var_7_cvector, var_8_cvector, "d1q04_item_powder.xml");
		func_78(1);
	
	}
	EMIT "Stack[-4] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "fail") {
			func_52();
		} else if(var_1_string == "completed") {
			func_44();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_60();
	}

}


void func_102(object var_21_object)
{
	object var_23_object;
	@self(var_23_object);
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_71(void)
{
	object var_21_object;
	func_102(var_21_object);
	@RemoveActor(var_21_object);
}


void func_44(void)
{
	@SetVariable("d1q04", 1000);
	func_71();
}


void func_78(int var_15_int)
{
	float var_17_float;
	@GetGameTime(var_17_float);
	if(var_17_float >= (var_15_int * 24)) {
		func_71();
	} else {
		@SetTimeEvent(0, (var_15_int * 24));
		@Hold();
	}
	
}


void func_52(void)
{
	@SetVariable("d1q04", -1);
	func_71();
}


void func_60(void)
{
	int var_4_int;
	@GetVariable("d1q04", var_4_int);
	if(var_4_int != 1000)
		func_52();
}


