maintask task_0
{
	void init(object var_0_object)
	{
		func_151("house_petr@door1", false);
		func_151("shouse1_kabak@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_5_object; object var_6_object; int var_7_int;
		@Trace(var_1_string);
		if(var_1_string == "woman") {
			func_151("d2q01_house1@door1", false);
			@GetSceneByName(var_5_object, "d2q01_house1");
			object var_21_object; object var_22_object;
			var_5_object = var_22_object;
			func_133(var_21_object, var_22_object, "pt_woman", "pers_woman", "d2q01_woman.xml");
			var_5_object = null;
		} else if(var_1_string == "cursed_women") {
				@GetSceneByName(var_6_object, "d2q01_house1");
				object var_42_object; object var_43_object;
				var_6_object = var_43_object;
				func_133(var_42_object, var_43_object, "pt_enemy01", "pers_woman", "d2q01_zombie_woman.xml");
				object var_47_object; object var_48_object;
				var_6_object = var_48_object;
				func_133(var_47_object, var_48_object, "pt_enemy02", "pers_woman", "d2q01_zombie_woman.xml");
				@Trigger(var_21_object, "cleanup");
				var_6_object = null;
		}
	Label_93:
		for(;;) {

		}
	
		if(var_1_string == "cleanup") {
			@GetVariable("d2q01", var_7_int);
			if(var_7_int != 1000)
				func_94();
			else
				func_110(var_7_int);
			if(var_1_string == "fail") {
				func_94();
			} else if(var_1_string == "completed") {
				func_102();
			}
		}
		goto Label_93;
	
	}

}


void func_133(object var_21_object, object var_22_object, string var_23_string, string var_24_string, string var_25_string)
{
	bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	var_22_object->GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector);
	if(!var_30_bool) //@nz
		@Trace(("Locator " + var_23_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_24_string, var_22_object, var_31_cvector, var_32_cvector, var_25_string);
	object var_33_object = var_21_object;
	
}
EMIT "Stack[-1] = 0";


void func_102(void)
{
	@SetVariable("d2q01", 1000);
	func_110(var_7_int);
}


void func_110(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	func_151("d2q01_house1@door1", true);
	object var_64_object;
	func_127(var_64_object);
	@RemoveActor(var_64_object);
}


void func_151(string var_1_string, bool var_2_bool)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(!var_4_object) //@nz
		@Trace(("Door " + var_1_string) + " not found");
	else
		var_4_object->SetProperty("locked", var_2_bool);
	
}
EMIT "Stack[-1] = 0";


void func_94(void)
{
	@SetVariable("d2q01", -1);
	func_110(var_7_int);
}


void func_127(object var_64_object)
{
	object var_66_object;
	@self(var_66_object);
	var_66_object = var_64_object;
}
EMIT "Stack[-1] = 0";


