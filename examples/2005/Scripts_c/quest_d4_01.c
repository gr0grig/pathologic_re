maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
	{
		float var_7_float;
		@GetGameTime(var_7_float);
		if(var_7_float < 79)
			@SetTimeEvent(0, 79);
		else
			func_261("theater@door1", true);
		func_261("sobor@door1", true);
	
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, float var_7_float)
	{
		func_261("theater@door1", true);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, string var_6_string)
	{
		object var_12_object; object var_13_object; object var_14_object; object var_15_object; int var_16_int;
		@Trace(var_6_string);
		if(var_6_string == "key_actors") {
			@GetMainOutdoorScene(var_12_object);
			object var_19_object; object var_20_object;
			var_12_object = var_20_object;
			func_243(var_19_object, var_20_object, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
			object var_37_object; object var_38_object;
			var_12_object = var_38_object;
			func_243(var_37_object, var_38_object, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
			var_12_object = null;
		} else if(var_6_string == "pers") {
				@GetMainOutdoorScene(var_13_object);
				object var_44_object; object var_45_object;
				var_13_object = var_45_object;
				func_243(var_44_object, var_45_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
				var_2_object = var_44_object;
				object var_49_object; object var_50_object;
				var_13_object = var_50_object;
				func_243(var_49_object, var_50_object, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
				var_3_object = var_49_object;
		}
	Label_178:
		for(;;) {

		}
	
		if(var_6_string == "key1_done") {
			var_19_object->Remove(); //@t
		} else if(var_6_string == "key2_done") {
			var_37_object->Remove(); //@t
		} else if(var_6_string == "birdmask_done") {
			var_2_object->Remove(); //@t
		} else if(var_6_string == "wastedwoman_done") {
			var_3_object->Remove(); //@t
		} else if(var_6_string == "init_sobor") {
			@GetMainOutdoorScene(var_14_object);
			object var_64_object; object var_65_object;
			var_14_object = var_65_object;
			func_243(var_64_object, var_65_object, "pt_d4q01_wastedwoman", "pers_wasted_male", "d4q01_sobor_guard.xml");
			var_4_object = var_64_object;
			func_261("sobor@door1", false);
		} else if(var_6_string == "init_theater") {
			@GetMainOutdoorScene(var_15_object);
			object var_81_object; object var_82_object;
			var_15_object = var_82_object;
			func_243(var_81_object, var_82_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_theater_guard.xml");
			var_5_object = var_81_object;
			func_261("theater@door1", false);
			var_15_object = null;
		}
		if(var_6_string == "cleanup") {
			@GetVariable("d4q01", var_16_int);
			if(var_16_int != 1000)
				func_179();
			else
				func_195(Obj(), Obj(), var_15_object, var_16_int);
			if(var_6_string == "fail") {
				func_179();
			} else if(var_6_string == "completed") {
				func_187();
			}
		}
		func_212(var_15_object, var_16_int);
		goto Label_178;
	
	}

}


void func_195(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
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


void func_261(string var_12_string, bool var_13_bool)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(!var_15_object) //@nz
		@Trace(("Door " + var_12_string) + " not found");
	else
		var_15_object->SetProperty("locked", var_13_bool);
	
}
EMIT "Stack[-1] = 0";


void func_237(object var_105_object)
{
	object var_107_object;
	@self(var_107_object);
	var_107_object = var_105_object;
}
EMIT "Stack[-1] = 0";


void func_179(void)
{
	@SetVariable("d4q01", -1);
	func_195(var_13_object, var_14_object, var_15_object, var_16_int);
}


void func_243(object var_19_object, object var_20_object, string var_21_string, string var_22_string, string var_23_string)
{
	bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	var_20_object->GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	if(!var_28_bool) //@nz
		@Trace(("Locator " + var_21_string) + " doesn't exist");
	else
		var_20_object->AddStationaryActor(Obj(), var_29_cvector, var_30_cvector, var_22_string, var_23_string);
	object var_31_object = var_19_object;
	
}
EMIT "Stack[-1] = 0";


void func_212(object var_4_object, object var_5_object)
{
	if(var_5_object != 0)
		var_5_object->Remove(); //@t
	if(var_4_object != 0)
		var_4_object->Remove(); //@t
	func_261("theater@door1", false);
	func_261("sobor@door1", true);
	object var_105_object;
	func_237(var_105_object);
	@RemoveActor(var_105_object);
}


void func_187(void)
{
	@SetVariable("d4q01", 1000);
	func_195(var_13_object, var_14_object, var_15_object, var_16_int);
}


