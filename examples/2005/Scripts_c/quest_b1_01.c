maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		@SetTimeEvent(0, 11);
		object var_5_object;
		@GetMainOutdoorScene(var_5_object);
		object var_8_object; object var_9_object;
		var_5_object = var_9_object;
		func_167(var_8_object, var_9_object, "pt_b1q01_whitemask", "pers_whitemask", "b1q01_whitemask.xml");
		var_0_object = var_8_object;
		object var_27_object; object var_28_object;
		var_5_object = var_28_object;
		func_167(var_27_object, var_28_object, "pt_b1q01_birdmask1", "pers_birdmask", "b1q01_birdmask1.xml");
		var_1_object = var_27_object;
		object var_32_object; object var_33_object;
		var_5_object = var_33_object;
		func_167(var_32_object, var_33_object, "pt_b1q01_birdmask2", "pers_birdmask", "b1q01_birdmask2.xml");
		var_2_object = var_32_object;
		object var_37_object; object var_38_object;
		var_5_object = var_38_object;
		func_159(var_37_object, var_38_object, "b1q01_trigger", "b1q01_trigger.xml");
		var_3_object = var_37_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		if(var_3_object != 0)
			@Trigger(var_3_object, "cleanup");
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		int var_5_int; int var_6_int;
		@Trace(var_4_string);
		if(var_4_string == "remove_whitemask") {
			if(var_0_object != 0)
				var_0_object->Remove(); //@t
		} else if(var_4_string == "remove1") {
				var_1_object->Remove(); //@t
		}
	Label_112:
		for(;;) {

		}
	
		if(var_4_string == "remove2") {
			var_2_object->Remove(); //@t
		} else if(var_4_string == "remove_cutscene") {
			if(var_3_object != 0)
				@Trigger(var_3_object, "cleanup");
		}
		if(var_4_string == "cleanup") {
			@GetVariable("b1q01", var_6_int);
			if(var_6_int != 1000)
				func_113();
			else
				func_129(var_3_object, var_4_string, var_5_int, var_6_int);
			if(var_4_string == "fail") {
				func_113();
			} else if(var_4_string == "completed") {
				func_121();
			}
		}
		goto Label_112;
	
	}

}


void func_129(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	object var_30_object;
	func_153(var_30_object);
	@RemoveActor(var_30_object);
}


void func_121(void)
{
	@SetVariable("b1q01", 1000);
	func_129(var_3_object, var_4_string, var_5_int, var_6_int);
}


void func_167(object var_8_object, object var_9_object, string var_10_string, string var_11_string, string var_12_string)
{
	bool var_17_bool; cvector var_18_cvector; cvector var_19_cvector;
	var_9_object->GetLocator(var_10_string, var_17_bool, var_18_cvector, var_19_cvector);
	if(!var_17_bool) //@nz
		@Trace(("Locator " + var_10_string) + " doesn't exist");
	else
		var_9_object->AddStationaryActor(Obj(), var_18_cvector, var_19_cvector, var_11_string, var_12_string, true);
	object var_20_object = var_8_object;
	
}
EMIT "Stack[-1] = 0";


void func_113(void)
{
	@SetVariable("b1q01", -1);
	func_129(var_3_object, var_4_string, var_5_int, var_6_int);
}


void func_153(object var_30_object)
{
	object var_32_object;
	@self(var_32_object);
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_159(object var_37_object, object var_38_object, string var_39_string, string var_40_string)
{
	object var_42_object;
	@AddActor(var_42_object, var_39_string, var_38_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_40_string);
	var_42_object = var_37_object;
}
EMIT "Stack[-1] = 0";


