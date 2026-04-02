// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		func_131("burah_home@door1", true);
		@SetVariable("k4q03", 1);
		func_83(4);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "place_burah") {
			@GetSceneByName(var_3_object, "house5_08");
			object var_7_object; object var_8_object;
			var_3_object = var_8_object;
			func_113(var_7_object, var_8_object, "pt_k4q03_burah", "NPC_Burah", "k4q03_burah.xml");
			var_0_object = var_7_object;
			var_3_object = null;
		}
		if(var_1_string == "completed")
			func_58();
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_39();
	}

}


void func_66(object var_0_object)
{
	func_131("burah_home@door1", false);
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_23_object;
	func_107(var_23_object);
	@RemoveActor(var_23_object);
}


void func_131(string var_1_string, bool var_2_bool)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(!var_4_object) //@nz
		@Trace(("Door " + var_1_string) + " not found");
	else
		var_4_object->SetProperty("locked", var_2_bool);
	
}
EMIT "Stack[-1] = 0";


void func_39(void)
{
	int var_4_int;
	@GetVariable("k4q03", var_4_int);
	if(var_4_int != 1000)
		func_50();
}


void func_107(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_113(object var_7_object, object var_8_object, string var_9_string, string var_10_string, string var_11_string)
{
	bool var_16_bool; cvector var_17_cvector; cvector var_18_cvector;
	var_8_object->GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector);
	if(!var_16_bool) //@nz
		@Trace(("Locator " + var_9_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string);
	object var_19_object = var_7_object;
	
}
EMIT "Stack[-1] = 0";


void func_50(void)
{
	@SetVariable("k4q03", -1);
	func_66(var_4_int);
}


void func_83(int var_13_int)
{
	float var_15_float;
	@GetGameTime(var_15_float);
	if(var_15_float >= (var_13_int * 24)) {
		func_66(var_15_float);
	} else {
		@SetTimeEvent(0, (var_13_int * 24));
		@Hold();
	}
	
}


void func_58(void)
{
	@SetVariable("k4q03", 1000);
	func_66(var_3_object);
}


