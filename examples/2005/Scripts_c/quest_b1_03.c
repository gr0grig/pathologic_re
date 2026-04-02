// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		bool var_1_bool;
		func_126(var_1_bool, "quest_b1_01", "remove_cutscene");
		@SetVariable("b1q03", 1);
		func_78(1);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "place_doberman") {
			@GetMainOutdoorScene(var_3_object);
			object var_6_object; object var_7_object;
			var_3_object = var_7_object;
			func_108(var_6_object, var_7_object, "pt_b1q03_doberman", "pers_doberman", "b1q03_doberman.xml");
			var_0_object = var_6_object;
			var_3_object = null;
		} else if(var_1_string == "doberman_dead") {
				@SetVariable("b1q03_dead", 1);
		}
	Label_46:
		for(;;) {

		}
	
		if(!(var_1_string == "cleanup")) goto Label_46;
		func_66(var_3_object);
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_47();
	}

}


void func_66(object var_0_object)
{
	if(var_0_object != 0) {
		var_0_object->Remove(); //@t
		var_0_object = null;
	}
	object var_16_object;
	func_102(var_16_object);
	@RemoveActor(var_16_object);
}


void func_102(object var_16_object)
{
	object var_18_object;
	@self(var_18_object);
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_108(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
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


void func_78(int var_9_int)
{
	float var_11_float;
	@GetGameTime(var_11_float);
	if(var_11_float >= (var_9_int * 24)) {
		func_66(var_11_float);
	} else {
		@SetTimeEvent(0, (var_9_int * 24));
		@Hold();
	}
	
}


void func_47(void)
{
	int var_4_int;
	@GetVariable("b1q03", var_4_int);
	if(var_4_int != 1000)
		func_58();
}


void func_58(void)
{
	@SetVariable("b1q03", -1);
	func_66(var_4_int);
}


void func_126(bool var_1_bool, string var_2_string, string var_3_string)
{
	object var_5_object;
	@FindActor(var_5_object, var_2_string);
	if(var_5_object == null)
		var_1_bool = false;
	@Trigger(var_5_object, var_3_string);
	var_1_bool = true;
}
EMIT "Stack[-1] = 0";


