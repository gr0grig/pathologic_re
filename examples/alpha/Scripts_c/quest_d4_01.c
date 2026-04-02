maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_7_object; object var_8_object;
		@Trace(var_4_string);
		if(var_4_string == "key_actors") {
			@GetMainOutdoorScene(var_7_object);
			object var_11_object; object var_12_object;
			var_7_object = var_12_object;
			func_125(var_11_object, var_12_object, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
			object var_29_object; object var_30_object;
			var_7_object = var_30_object;
			func_125(var_29_object, var_30_object, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
			var_7_object = null;
		} else if(var_4_string == "pers") {
				@GetMainOutdoorScene(var_8_object);
				object var_36_object; object var_37_object;
				var_8_object = var_37_object;
				func_125(var_36_object, var_37_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
				var_2_object = var_36_object;
				object var_41_object; object var_42_object;
				var_8_object = var_42_object;
				func_125(var_41_object, var_42_object, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
				var_3_object = var_41_object;
				var_8_object = null;
		}

	
		if(var_4_string == "key1_done") {
			var_11_object->Remove(); //@t
		} else if(var_4_string == "key2_done") {
			var_29_object->Remove(); //@t
		} else if(var_4_string == "birdmask_done") {
			var_2_object->Remove(); //@t
		} else if(var_4_string == "wastedwoman_done") {
			var_3_object->Remove(); //@t
		} else if(var_4_string == "fail") {
			func_91();
		} else if(var_4_string == "completed") {
			func_99();
		}
	}

}


void func_99(void)
{
	@SetVariable("d4q01", 1000);
	func_107(var_5_object, var_6_object, var_7_object, var_8_object);
}


void func_91(void)
{
	@SetVariable("d4q01", -1);
	func_107(var_5_object, var_6_object, var_7_object, var_8_object);
}


void func_107(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	if(var_3_object != 0)
		var_3_object->Remove(); //@t
}


void func_125(object var_11_object, object var_12_object, string var_13_string, string var_14_string, string var_15_string)
{
	bool var_20_bool; cvector var_21_cvector; cvector var_22_cvector;
	var_12_object->GetLocator(var_13_string, var_20_bool, var_21_cvector, var_22_cvector);
	if(!var_20_bool) //@nz
		@Trace(("Locator " + var_13_string) + " doesn't exist");
	else
		var_12_object->AddStationaryActor(Obj(), var_21_cvector, var_22_cvector, var_14_string, var_15_string);
	object var_23_object = var_11_object;
	
}
EMIT "Stack[-1] = 0";


