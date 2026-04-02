// @GLOBALS: 0:object:

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
			@Trace("Locator doesn't exist for d1_04_powder");
		else
			@AddActorByType(var_0_object, "scripted_container", var_5_object, var_7_cvector, var_8_cvector, "d1q04_item_powder.xml");
		func_118("r2_house_2_02@door1", false);
		func_118("r2_house_2_02@door2", false);
		func_88(1);
	
	}
	EMIT "Stack[-4] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "fail") {
			func_62();
		} else if(var_1_string == "completed") {
			func_54();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_70();
	}

}


void func_70(void)
{
	int var_4_int;
	@GetVariable("d1q04", var_4_int);
	if(var_4_int != 1000)
		func_62();
}


void func_112(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_81(void)
{
	object var_33_object;
	func_112(var_33_object);
	@RemoveActor(var_33_object);
}


void func_118(string var_15_string, bool var_16_bool)
{
	object var_18_object;
	@FindActor(var_18_object, var_15_string);
	if(!var_18_object) //@nz
		@Trace(("Door " + var_15_string) + " not found");
	else
		var_18_object->SetProperty("locked", var_16_bool);
	
}
EMIT "Stack[-1] = 0";


void func_54(void)
{
	@SetVariable("d1q04", 1000);
	func_81();
}


void func_88(int var_27_int)
{
	float var_29_float;
	@GetGameTime(var_29_float);
	if(var_29_float >= (var_27_int * 24)) {
		func_81();
	} else {
		@SetTimeEvent(0, (var_27_int * 24));
		@Hold();
	}
	
}


void func_62(void)
{
	@SetVariable("d1q04", -1);
	func_81();
}


