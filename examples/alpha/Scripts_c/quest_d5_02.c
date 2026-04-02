maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		@SetVariable("d5q02", 1);
		func_155(5);
	}

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_5_object; object var_6_object;
		@Trace(var_2_string);
		if(var_2_string == "place_girl") {
			@SetVariable("d5q01NudeInKabak", 1);
			if(!var_0_object) { //@nz
				@GetSceneByName(var_5_object, "shouse1_kabak");
				object var_13_object; object var_14_object;
				var_5_object = var_14_object;
				func_185(var_13_object, var_14_object, "pt_d5q02_girl", "pers_nudegirl", "d5q02_girl.xml");
				var_0_object = var_13_object;
				var_5_object = null;
			} else {
					@Trigger(var_0_object, "restore");
		}
				if(var_2_string == "remove_girl") {
					@SetVariable("d5q01NudeInKabak", 0);
					if(var_0_object != 0)
						@Trigger(var_0_object, "cleanup");
			}
				} else {
			if(var_2_string == "place_gorbun") {
				@SetVariable("d5q01Gorbun", 1);
				if(!var_1_object) { //@nz
					@GetSceneByName(var_6_object, "lc_House6_05");
					object var_44_object; object var_45_object;
					var_6_object = var_45_object;
					func_185(var_44_object, var_45_object, "pt_gorbun", "pers_bomber", "d5q02_gorbun.xml");
					var_1_object = var_44_object;
					var_6_object = null;
				} else {
					@Trigger(var_1_object, "restore");
			}
				if(var_2_string == "remove_gorbun") {
					@SetVariable("d5q01Gorbun", 0);
					if(var_1_object != 0)
						@Trigger(var_1_object, "cleanup");
				} else if(var_2_string == "completed") {
					func_116();
				}
			}
			goto Label_96;
				}
	Label_96:
		for(;;) {

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_97();
	}

}


void func_97(void)
{
	int var_5_int;
	@GetVariable("d5q02", var_5_int);
	if(var_5_int != 1000)
		func_108();
}


void func_138(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_14_object;
	func_179(var_14_object);
	@RemoveActor(var_14_object);
}


void func_108(void)
{
	@SetVariable("d5q02", -1);
	func_138(var_4_int, var_5_int);
}


void func_179(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_116(void)
{
	int var_58_int; int var_59_int;
	@GetVariable("d5q02", var_59_int);
	bool var_61_bool = false;
	if(var_59_int != 1000) {
		if(var_59_int != -1)
			var_61_bool = true;
	}
	if(var_61_bool != 0) {
		@SetVariable("d5q02", 1000);
		func_138(var_58_int, var_59_int);
	}
}


void func_185(object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string)
{
	bool var_22_bool; cvector var_23_cvector; cvector var_24_cvector;
	var_14_object->GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	if(!var_22_bool) //@nz
		@Trace(("Locator " + var_15_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	object var_25_object = var_13_object;
	
}
EMIT "Stack[-1] = 0";


void func_155(int var_4_int)
{
	float var_5_float; float var_6_float;
	@GetGameTime(var_6_float);
	if(var_6_float >= (var_4_int * 24)) {
		func_138(var_5_float, var_6_float);
	} else {
		@SetTimeEvent(0, (var_4_int * 24));
		@Hold();
	}
	
}


