// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d2q03", 1);
		func_86(2);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "birdmask") {
			@GetSceneByName(var_3_object, "r4_house_2_02");
			object var_7_object; object var_8_object;
			var_3_object = var_8_object;
			func_116(var_7_object, var_8_object, "pt_d2q03_birdmask", "pers_birdmask", "d2q03_birdmask.xml");
			var_0_object = var_7_object;
			var_3_object = null;
		} else if(var_1_string == "completed") {
			func_54();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_35();
	}

}


void func_35(void)
{
	int var_4_int;
	@GetVariable("d2q03", var_4_int);
	if(var_4_int != 1000)
		func_46();
}


void func_164(void)
{
	bool var_9_bool;
	func_147(var_9_bool, 37);
}


void func_134(object var_15_object)
{
	object var_17_object;
	@GetDiaryRoot(var_17_object);
	if(!var_17_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_15_object = false;
	}
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_71(object var_0_object)
{
	func_169();
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_23_object;
	func_110(var_23_object);
	@RemoveActor(var_23_object);
}


void func_169(void)
{
	func_164();
}


void func_46(void)
{
	@SetVariable("d2q03", -1);
	func_71(var_4_int);
}


void func_110(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_147(bool var_9_bool, int var_10_int)
{
	object var_15_object;
	func_134(var_15_object);
	object var_13_object;
	var_15_object = var_13_object;
	object var_14_object;
	var_13_object->Find(var_10_int, var_14_object);
	if(!var_14_object) //@nz
		var_9_bool = false;
	var_14_object->Remove();
	var_9_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_116(object var_7_object, object var_8_object, string var_9_string, string var_10_string, string var_11_string)
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


void func_54(void)
{
	object var_28_object;
	@FindActor(var_28_object, "icot_lara_supply");
	var_28_object->SetProperty("enabled", true);
	@SetVariable("d2q03", 1000);
	func_71(var_28_object);
}
EMIT "Stack[-1] = 0";


void func_86(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	if(var_5_float >= (var_3_int * 24)) {
		func_71(var_5_float);
	} else {
		@SetTimeEvent(0, (var_3_int * 24));
		@Hold();
	}
	
}


