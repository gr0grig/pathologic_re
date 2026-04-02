// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		@SetVariable("k5q02", 1);
		object var_4_object;
		@GetSceneByName(var_4_object, "shouse1_kabak");
		@Trigger(var_4_object, "noandrei");
		object var_9_object; object var_10_object;
		var_4_object = var_10_object;
		func_172(var_9_object, var_10_object, "pt_k5q02_patrol1", "pers_patrool", "k5q02_patrol.xml");
		var_0_object = var_9_object;
		object var_27_object; object var_28_object;
		var_4_object = var_28_object;
		func_172(var_27_object, var_28_object, "pt_k5q02_patrol2", "pers_patrool", "k5q02_patrol.xml");
		var_1_object = var_27_object;
		func_142(5);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_6_object; object var_7_object;
		@Trace(var_3_string);
		if(var_3_string == "init_kabak") {
			@GetSceneByName(var_6_object, "shouse1_kabak");
			object var_11_object; object var_12_object;
			var_6_object = var_12_object;
			func_172(var_11_object, var_12_object, "pt_k5q02_kabatchik", "pers_dohodyaga", "k5q02_kabatchik.xml");
			var_2_object = var_11_object;
			var_6_object = null;
		} else if(var_3_string == "place_andrei") {
				@GetSceneByName(var_7_object, "shouse1_kabak");
				@Trigger(var_7_object, "andrei");
				if(var_2_object != 0)
					@Trigger(var_2_object, "cleanup");
				if(var_0_object != 0)
					@Trigger(var_0_object, "cleanup");
				if(var_1_object != 0)
					@Trigger(var_1_object, "cleanup");
				var_7_object = null;
		}
	Label_84:
		for(;;) {

		}
	
		if(!(var_3_string == "completed")) goto Label_84;
		func_104();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		func_85();
	}

}


void func_96(void)
{
	@SetVariable("k5q02", -1);
	func_112(var_4_float, var_5_int, var_6_int);
}


void func_166(object var_48_object)
{
	object var_50_object;
	@self(var_50_object);
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_104(void)
{
	@SetVariable("k5q02", 1000);
	func_112(var_5_object, var_6_object, var_7_object);
}


void func_172(object var_9_object, object var_10_object, string var_11_string, string var_12_string, string var_13_string)
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


void func_142(int var_32_int)
{
	float var_33_float; float var_34_float;
	@GetGameTime(var_34_float);
	if(var_34_float >= (var_32_int * 24)) {
		func_112(var_32_int, var_33_float, var_34_float);
	} else {
		@SetTimeEvent(0, (var_32_int * 24));
		@Hold();
	}
	
}


void func_112(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_39_object;
	@GetSceneByName(var_39_object, "shouse1_kabak");
	@Trigger(var_39_object, "andrei");
	object var_48_object;
	func_166(var_48_object);
	@RemoveActor(var_48_object);
}
EMIT "Stack[-1] = 0";


void func_85(void)
{
	int var_6_int;
	@GetVariable("k5q02", var_6_int);
	if(var_6_int != 1000)
		func_96();
}


