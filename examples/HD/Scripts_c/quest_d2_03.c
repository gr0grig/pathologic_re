// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d2q03", 1);
		func_103(2);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "birdmask") {
			@GetSceneByName(var_3_object, "r4_house_2_02");
			func_151("r4_house_2_02@door1", false);
			func_151("r4_house_2_02@door2", false);
			object var_19_object; object var_20_object;
			var_3_object = var_20_object;
			func_133(var_19_object, var_20_object, "pt_d2q03_birdmask", "pers_birdmask", "d2q03_birdmask.xml");
			var_0_object = var_19_object;
			var_3_object = null;
		} else if(var_1_string == "completed") {
			func_71();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_45();
	}

}


void func_133(object var_19_object, object var_20_object, string var_21_string, string var_22_string, string var_23_string)
{
	bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	var_20_object->GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	if(!var_28_bool) //@nz
		@Trace(("Locator " + var_21_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string);
	object var_31_object = var_19_object;
	
}
EMIT "Stack[-1] = 0";


void func_71(void)
{
	object var_40_object;
	@FindActor(var_40_object, "icot_lara_supply");
	var_40_object->SetProperty("enabled", true);
	@SetVariable("d2q03", 1000);
	func_88(var_40_object);
}
EMIT "Stack[-1] = 0";


void func_168(void)
{
	bool var_9_bool;
	func_186(var_9_bool, 37);
}


void func_103(int var_3_int)
{
	float var_5_float;
	@GetGameTime(var_5_float);
	if(var_5_float >= (var_3_int * 24)) {
		func_88(var_5_float);
	} else {
		@SetTimeEvent(0, (var_3_int * 24));
		@Hold();
	}
	
}


// @pe
void func_203(void)
{
	func_168();
}


void func_45(void)
{
	int var_4_int;
	@GetVariable("d2q03", var_4_int);
	if(var_4_int != 1000) {
		if(var_4_int != 0)
			@SetVariable("d2q03RepDown", 1);
		func_63();
	}
}


void func_173(object var_15_object)
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


void func_151(string var_7_string, bool var_8_bool)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(!var_10_object) //@nz
		@Trace(("Door " + var_7_string) + " not found");
	else
		var_10_object->SetProperty("locked", var_8_bool);
	
}
EMIT "Stack[-1] = 0";


void func_88(object var_0_object)
{
	func_203();
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_23_object;
	func_127(var_23_object);
	@RemoveActor(var_23_object);
}


void func_186(bool var_9_bool, int var_10_int)
{
	object var_15_object;
	func_173(var_15_object);
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


void func_127(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_63(void)
{
	@SetVariable("d2q03", -1);
	func_88(var_4_int);
}


