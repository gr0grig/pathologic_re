maintask task_0
{
	void init(object var_0_object, bool var_1_bool)
	{
		func_84(8);
	}

	void OnTrigger(object var_0_object, bool var_1_bool, string var_2_string)
	{
		object var_4_object;
		@Trace(var_2_string);
		bool var_5_bool = false;
		if(var_2_string == "termitnik_load") {
			if(!var_1_bool) //@nz
				var_5_bool = true;
		}
		if(var_5_bool != 0) {
			@GetSceneByName(var_4_object, "termitnik");
			object var_10_object; object var_11_object;
			var_4_object = var_11_object;
			func_114(var_10_object, var_11_object, "pt_d8q03_burah", "NPC_Burah", "d8q03_burah.xml");
			var_0_object = var_10_object;
			var_1_bool = true;
			var_4_object = null;
		} else if(var_2_string == "fail") {
				func_56();
		}
	Label_44:
		for(;;) {

		}
	
		if(!(var_2_string == "completed")) goto Label_44;
		func_64();
	}

	// @pe
	void OnGameTime(object var_0_object, bool var_1_bool, int var_2_int, float var_3_float)
	{
		func_45();
	}

}


void func_64(void)
{
	@SetVariable("d8q03", 1000);
	func_72(var_4_object);
}


void func_72(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_10_object;
	func_108(var_10_object);
	@RemoveActor(var_10_object);
}


void func_108(object var_10_object)
{
	object var_12_object;
	@self(var_12_object);
	var_12_object = var_10_object;
}
EMIT "Stack[-1] = 0";


void func_45(void)
{
	int var_5_int;
	@GetVariable("d8q03", var_5_int);
	if(var_5_int != 1000)
		func_56();
}


void func_114(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
{
	bool var_19_bool; cvector var_20_cvector; cvector var_21_cvector;
	var_11_object->GetLocator(var_12_string, var_19_bool, var_20_cvector, var_21_cvector);
	if(!var_19_bool) //@nz
		@Trace(("Locator " + var_12_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_13_string, var_11_object, var_20_cvector, var_21_cvector, var_14_string);
	object var_22_object = var_10_object;
	
}
EMIT "Stack[-1] = 0";


void func_84(int var_2_int)
{
	float var_4_float;
	@GetGameTime(var_4_float);
	if(var_4_float >= (var_2_int * 24)) {
		func_72(var_4_float);
	} else {
		@SetTimeEvent(0, (var_2_int * 24));
		@Hold();
	}
	
}


void func_56(void)
{
	@SetVariable("d8q03", -1);
	func_72(var_5_int);
}


