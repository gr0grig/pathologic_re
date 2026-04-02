// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("k7q02", 1);
		bool var_5_bool;
		func_125(var_5_bool, "gatherer3");
		object var_2_object;
		@GetMainOutdoorScene(var_2_object);
		object var_10_object; object var_11_object;
		var_2_object = var_11_object;
		func_107(var_10_object, var_11_object, "pt_gatherer3", "pers_morlok", "k7q02_gatherer.xml");
		var_0_object = var_10_object;
		func_77(7);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "place_gatherer") {
		} else if(var_1_string == "completed") {
			func_58();
		}
	
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
		var_0_object->Remove(); //@t
	object var_35_object;
	func_101(var_35_object);
	@RemoveActor(var_35_object);
}


void func_101(object var_35_object)
{
	object var_37_object;
	@self(var_37_object);
	var_37_object = var_35_object;
}
EMIT "Stack[-1] = 0";


void func_39(void)
{
	int var_4_int;
	@GetVariable("k7q02", var_4_int);
	if(var_4_int != 1000)
		func_50();
}


void func_107(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
{
	bool var_19_bool; cvector var_20_cvector; cvector var_21_cvector;
	var_11_object->GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	if(!var_19_bool) //@nz
		@Trace(("Locator " + var_12_string) + " doesn't exist");
	else
		var_11_object->AddStationaryActor(Obj(), var_20_cvector, var_21_cvector, var_13_string, var_14_string);
	object var_22_object = var_10_object;
	
}
EMIT "Stack[-1] = 0";


void func_77(int var_28_int)
{
	float var_30_float;
	@GetGameTime(var_30_float);
	if(var_30_float >= (var_28_int * 24)) {
		func_66(var_30_float);
	} else {
		@SetTimeEvent(0, (var_28_int * 24));
		@Hold();
	}
	
}


void func_50(void)
{
	@SetVariable("k7q02", -1);
	func_66(var_4_int);
}


void func_58(void)
{
	@SetVariable("k7q02", 1000);
	func_66(var_1_string);
}


void func_125(bool var_5_bool, string var_6_string)
{
	object var_8_object;
	@FindActor(var_8_object, var_6_string);
	if(!var_8_object) //@nz
		var_5_bool = false;
	@RemoveActor(var_8_object);
	var_5_bool = true;
}
EMIT "Stack[-1] = 0";


