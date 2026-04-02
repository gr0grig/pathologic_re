// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		@SetVariable("b3q04", 1);
		func_0(var_0_object, var_1_object);
		func_96(3);
	}

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		@Trace(var_2_string);
		if(var_2_string == "fail") {
			func_64();
		} else if(var_2_string == "completed") {
			func_72();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_53();
	}

}


void func_0(object var_0_object, object var_1_object)
{
	object var_5_object;
	@GetMainOutdoorScene(var_5_object);
	object var_6_object; object var_7_object;
	func_126(var_6_object, var_7_object, "pt_d3q01_gpatrol1", "pers_patrool", "b3q04_gpatrol.xml");
	var_0_object = var_6_object;
	@AddActor(var_1_object, "d3q01_graveyard_fire", var_7_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d3q01_graveyard_fire.xml");
	@sync();
	@Trigger(var_1_object, "put_item");
}
EMIT "Stack[-1] = 0";


void func_64(void)
{
	@SetVariable("b3q04", -1);
	func_80(var_4_int, var_5_int);
}


void func_96(int var_29_int)
{
	float var_30_float; float var_31_float;
	@GetGameTime(var_31_float);
	if(var_31_float >= (var_29_int * 24)) {
		func_80(var_30_float, var_31_float);
	} else {
		@SetTimeEvent(0, (var_29_int * 24));
		@Hold();
	}
	
}


void func_72(void)
{
	@SetVariable("b3q04", 1000);
	func_80(var_1_object, var_2_string);
}


void func_80(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_38_object;
	func_120(var_38_object);
	@RemoveActor(var_38_object);
}


void func_53(void)
{
	int var_5_int;
	@GetVariable("b3q04", var_5_int);
	if(var_5_int != 1000)
		func_64();
}


void func_120(object var_38_object)
{
	object var_40_object;
	@self(var_40_object);
	var_40_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_126(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
{
	bool var_15_bool; cvector var_16_cvector; cvector var_17_cvector;
	var_7_object->GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	if(!var_15_bool) //@nz
		@Trace(("Locator " + var_8_string) + " doesn't exist");
	else
		var_7_object->AddStationaryActor(Obj(), var_16_cvector, var_17_cvector, var_9_string, var_10_string);
	object var_18_object = var_6_object;
	
}
EMIT "Stack[-1] = 0";


