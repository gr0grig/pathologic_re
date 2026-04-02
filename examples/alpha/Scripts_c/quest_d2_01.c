maintask task_0
{
	void init(object var_0_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_5_object; object var_6_object; object var_7_object;
		@Trace(var_1_string);
		if(var_1_string == "woman") {
			@FindActor(var_5_object, "dt_house_1_07");
			var_5_object->EnableSubset(200, true);
			@GetSceneByName(var_6_object, "d2q01_house1");
			object var_14_object; object var_15_object;
			var_6_object = var_15_object;
			func_85(var_14_object, var_15_object, "pt_woman", "pers_woman", "d2q01_woman.xml");
			var_6_object = null;
			var_5_object = null;
		} else if(var_1_string == "cursed_women") {
				@GetSceneByName(var_7_object, "d2q01_house1");
				object var_35_object; object var_36_object;
				var_7_object = var_36_object;
				func_85(var_35_object, var_36_object, "pt_enemy01", "pers_woman", "d2q01_zombie_woman.xml");
				object var_40_object; object var_41_object;
				var_7_object = var_41_object;
				func_85(var_40_object, var_41_object, "pt_enemy02", "pers_woman", "d2q01_zombie_woman.xml");
				@Trigger(var_14_object, "cleanup");
				var_7_object = null;
		}

	
		if(var_1_string == "fail") {
			func_70();
		} else if(var_1_string == "completed") {
			func_70();
		}
	}

}


void func_78(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
}


void func_85(object var_14_object, object var_15_object, string var_16_string, string var_17_string, string var_18_string)
{
	bool var_23_bool; cvector var_24_cvector; cvector var_25_cvector;
	var_15_object->GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector);
	if(!var_23_bool) //@nz
		@Trace(("Locator " + var_16_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string);
	object var_26_object = var_14_object;
	
}
EMIT "Stack[-1] = 0";


void func_70(void)
{
	@SetVariable("d2q01", 1000);
	func_78(var_7_object);
}


