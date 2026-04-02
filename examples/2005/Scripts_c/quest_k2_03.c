// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		@SetVariable("k2q03", 1);
		func_105(2);
	}

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_5_object; object var_6_object;
		@Trace(var_2_string);
		if(var_2_string == "place_arfist") {
			@GetSceneByName(var_5_object, "r4_house_2_02");
			object var_10_object; object var_11_object;
			var_5_object = var_11_object;
			func_135(var_10_object, var_11_object, "pt_k2q03_arfist", "pers_wasted_male", "k2q03_arfist.xml");
			var_0_object = var_10_object;
			var_5_object = null;
		} else if(var_2_string == "place_danko") {
				func_153("icot_eva_door", true);
				@GetSceneByName(var_6_object, "r4_house_2_02");
				object var_42_object; object var_43_object;
				var_6_object = var_43_object;
				func_135(var_42_object, var_43_object, "pt_k2q03_danko", "NPC_Bakalavr", "k2q03_danko.xml");
				var_1_object = var_42_object;
				var_6_object = null;
		}
	Label_55:
		for(;;) {

		}
	
		if(!(var_2_string == "completed")) goto Label_55;
		func_75();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_56();
	}

}


void func_129(object var_25_object)
{
	object var_27_object;
	@self(var_27_object);
	var_27_object = var_25_object;
}
EMIT "Stack[-1] = 0";


void func_67(void)
{
	@SetVariable("k2q03", -1);
	func_83(var_4_int, var_5_int);
}


void func_135(object var_10_object, object var_11_object, string var_12_string, string var_13_string, string var_14_string)
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


void func_105(int var_4_int)
{
	float var_5_float; float var_6_float;
	@GetGameTime(var_6_float);
	if(var_6_float >= (var_4_int * 24)) {
		func_83(var_5_float, var_6_float);
	} else {
		@SetTimeEvent(0, (var_4_int * 24));
		@Hold();
	}
	
}


void func_75(void)
{
	@SetVariable("k2q03", 1000);
	func_83(var_5_object, var_6_object);
}


void func_83(object var_0_object, object var_1_object)
{
	func_153("icot_eva_door", false);
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_25_object;
	func_129(var_25_object);
	@RemoveActor(var_25_object);
}


void func_56(void)
{
	int var_5_int;
	@GetVariable("k2q03", var_5_int);
	if(var_5_int != 1000)
		func_67();
}


void func_153(string var_10_string, bool var_11_bool)
{
	object var_13_object;
	@FindActor(var_13_object, var_10_string);
	if(!var_13_object) { //@nz
		@Trace(("Door " + var_10_string) + " not found");
	} else {
		if(var_11_bool != 0)
			var_13_object->Close();
		var_13_object->SetProperty("locked", var_11_bool);
	}
	
}
EMIT "Stack[-1] = 0";


