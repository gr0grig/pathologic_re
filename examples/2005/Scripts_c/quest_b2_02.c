// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, bool var_2_bool)
	{
		object var_4_object;
		@GetMainOutdoorScene(var_4_object);
		object var_5_object; object var_6_object;
		var_4_object = var_6_object;
		func_144(var_5_object, var_6_object, "pt_b2q02_gatherer", "pers_morlok", "b2q02_gatherer.xml");
		var_0_object = var_5_object;
		object var_23_object; object var_24_object;
		var_4_object = var_24_object;
		func_144(var_23_object, var_24_object, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride.xml");
		var_1_object = var_23_object;
		func_114(2);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, string var_3_string)
	{
		@Trace(var_3_string);
		if(var_3_string == "move_bride") {
			var_2_bool = true;
			if(var_1_object != 0)
				var_1_object->Remove(); //@t
		} else if(var_3_string == "fail") {
				func_62();
		}
	Label_50:
		for(;;) {
			return 0;

		}
	
		if(!(var_3_string == "completed")) goto Label_50;
		func_70();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, bool var_2_bool, int var_3_int, float var_4_float)
	{
		func_51();
	}

}


void func_70(void)
{
	@SetVariable("b2q02", 1000);
	func_78(var_2_bool, var_3_string);
}


void func_138(object var_44_object)
{
	object var_46_object;
	@self(var_46_object);
	var_46_object = var_44_object;
}
EMIT "Stack[-1] = 0";


void func_78(object var_0_object, object var_1_object)
{
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	object var_35_object;
	@GetMainOutdoorScene(var_35_object);
	if(var_2_bool != 0) {
		object var_39_object; object var_40_object;
		var_35_object = var_40_object;
		func_144(var_39_object, var_40_object, "pt_b2q02_bride2", "pers_nudegirl", "b2q02_bride2.xml");
	} else {
		object var_47_object; object var_48_object;
		var_35_object = var_48_object;
		func_144(var_47_object, var_48_object, "pt_b2q02_bride1", "pers_nudegirl", "b2q02_bride2.xml");
	}
	object var_44_object;
	func_138(var_44_object);
	@RemoveActor(var_44_object);
	
}
EMIT "Stack[-1] = 0";


void func_144(object var_5_object, object var_6_object, string var_7_string, string var_8_string, string var_9_string)
{
	bool var_14_bool; cvector var_15_cvector; cvector var_16_cvector;
	var_6_object->GetLocator(var_7_string, var_14_bool, var_15_cvector, var_16_cvector);
	if(!var_14_bool) //@nz
		@Trace(("Locator " + var_7_string) + " doesn't exist");
	else
		var_6_object->AddStationaryActor(Obj(), var_15_cvector, var_16_cvector, var_8_string, var_9_string);
	object var_17_object = var_5_object;
	
}
EMIT "Stack[-1] = 0";


void func_114(int var_28_int)
{
	float var_29_float; float var_30_float;
	@GetGameTime(var_30_float);
	if(var_30_float >= (var_28_int * 24)) {
		func_78(var_29_float, var_30_float);
	} else {
		@SetTimeEvent(0, (var_28_int * 24));
		@Hold();
	}
	
}


void func_51(void)
{
	int var_6_int;
	@GetVariable("b2q02", var_6_int);
	if(var_6_int != 1000)
		func_62();
}


void func_62(void)
{
	@SetVariable("b2q02", -1);
	func_78(var_5_int, var_6_int);
}


