// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		@SetVariable("d1q02", 1);
		object var_4_object;
		@GetSceneByName(var_4_object, "cot_anna");
		@AddScriptedActor(var_0_object, "cot_anna_corpse", "actor_disp.bin", var_4_object, [0.0, 0.0, 0.0]);
		@GetSceneByName(var_4_object, "storojka");
		@Trigger(var_4_object, "nolaska");
		func_128(1);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_5_object;
		@Trace(var_3_string);
		if(var_3_string == "init_storojka") {
			@GetSceneByName(var_5_object, "storojka");
			object var_9_object; object var_10_object;
			var_5_object = var_10_object;
			func_158(var_9_object, var_10_object, "pt_d1q02_salesman", "pers_salesman", "d1q02_salesman.xml");
			var_1_object = var_9_object;
			object var_27_object; object var_28_object;
			var_5_object = var_28_object;
			func_158(var_27_object, var_28_object, "pt_d1q02_gorbun", "pers_gorbun", "d1q02_gorbun.xml");
			var_2_object = var_27_object;
			var_5_object = null;
		} else if(var_3_string == "completed") {
				func_88();
		}
	Label_65:
		for(;;) {

		}
	
		if(!(var_3_string == "fail")) goto Label_65;
		func_80();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		func_66();
	}

}


void func_128(int var_13_int)
{
	float var_14_float; float var_15_float;
	@GetGameTime(var_15_float);
	if(var_15_float >= (var_13_int * 24)) {
		func_103(var_14_float, var_15_float);
	} else {
		@SetTimeEvent(0, (var_13_int * 24));
		@Hold();
	}
	
}


void func_96(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
}


void func_66(void)
{
	int var_6_int;
	@GetVariable("d1q02", var_6_int);
	if(var_6_int != 1000)
		func_80();
	int var_5_int;
	func_103(var_5_int, var_6_int);
}


void func_103(object var_1_object, object var_2_object)
{
	object var_20_object;
	@GetSceneByName(var_20_object, "storojka");
	@Trigger(var_20_object, "laska");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_27_object;
	func_152(var_27_object);
	@RemoveActor(var_27_object);
}
EMIT "Stack[-1] = 0";


void func_80(void)
{
	@SetVariable("d1q02", -1);
	func_96(var_6_int);
}


void func_88(void)
{
	@SetVariable("d1q02", 1000);
	func_96(var_5_object);
}


void func_152(object var_27_object)
{
	object var_29_object;
	@self(var_29_object);
	var_29_object = var_27_object;
}
EMIT "Stack[-1] = 0";


void func_158(object var_9_object, object var_10_object, string var_11_string, string var_12_string, string var_13_string)
{
	bool var_18_bool; cvector var_19_cvector; cvector var_20_cvector;
	var_10_object->GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector);
	if(!var_18_bool) //@nz
		@Trace(("Locator " + var_11_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string);
	object var_21_object = var_9_object;
	
}
EMIT "Stack[-1] = 0";


