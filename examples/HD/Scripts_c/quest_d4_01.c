maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object)
	{
		float var_7_float;
		@GetGameTime(var_7_float);
		if(var_7_float < 79)
			@SetTimeEvent(0, 79);
		else
			func_269("theater@door1", true);
		func_269("sobor@door1", true);
	
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(2)";

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, int var_6_int, float var_7_float)
	{
		func_269("theater@door1", true);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, string var_6_string)
	{
		object var_12_object; object var_13_object; object var_14_object; object var_15_object; int var_16_int;
		@Trace(var_6_string);
		if(var_6_string == "key_actors") {
			@GetMainOutdoorScene(var_12_object);
			object var_19_object; object var_20_object;
			var_12_object = var_20_object;
			func_251(var_19_object, var_20_object, "pt_d4q01_key1", "pers_whitemask", "d4q01_key1.xml");
			object var_37_object; object var_38_object;
			var_12_object = var_38_object;
			func_251(var_37_object, var_38_object, "pt_d4q01_key2", "pers_wasted_male", "d4q01_key2.xml");
			var_12_object = null;
		} else if(var_6_string == "pers") {
				@GetMainOutdoorScene(var_13_object);
				object var_44_object; object var_45_object;
				var_13_object = var_45_object;
				func_251(var_44_object, var_45_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_birdmask.xml");
				var_2_object = var_44_object;
				object var_49_object; object var_50_object;
				var_13_object = var_50_object;
				func_251(var_49_object, var_50_object, "pt_d4q01_wastedwoman", "pers_wasted_girl", "d4q01_wastedwoman.xml");
				var_3_object = var_49_object;
		}
	Label_186:
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
			if(var_3_object != 0)
				var_3_object->Remove(); //@t
			@GetMainOutdoorScene(var_14_object);
			object var_65_object; object var_66_object;
			var_14_object = var_66_object;
			func_251(var_65_object, var_66_object, "pt_d4q01_wastedwoman", "pers_wasted_male", "d4q01_sobor_guard.xml");
			var_4_object = var_65_object;
			func_269("sobor@door1", false);
		} else if(var_6_string == "init_theater") {
			if(var_2_object != 0)
				var_2_object->Remove(); //@t
			@GetMainOutdoorScene(var_15_object);
			object var_83_object; object var_84_object;
			var_15_object = var_84_object;
			func_251(var_83_object, var_84_object, "pt_d4q01_birdmask", "pers_birdmask", "d4q01_theater_guard.xml");
			var_5_object = var_83_object;
			func_269("theater@door1", false);
			var_15_object = null;
		}
		if(var_6_string == "cleanup") {
			@GetVariable("d4q01", var_16_int);
			if(var_16_int != 1000)
				func_187();
			else
				func_203(Obj(), Obj(), var_15_object, var_16_int);
			if(var_6_string == "fail") {
				func_187();
			} else if(var_6_string == "completed") {
				func_195();
			}
		}
		func_220(var_15_object, var_16_int);
		goto Label_186;
	
	}

}


void func_195(void)
{
	@SetVariable("d4q01", 1000);
	func_203(var_13_object, var_14_object, var_15_object, var_16_int);
}


void func_203(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
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


void func_269(string var_12_string, bool var_13_bool)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(!var_15_object) //@nz
		@Trace(("Door " + var_12_string) + " not found");
	else
		var_15_object->SetProperty("locked", var_13_bool);
	
}
EMIT "Stack[-1] = 0";


void func_251(object var_19_object, object var_20_object, string var_21_string, string var_22_string, string var_23_string)
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


void func_245(object var_107_object)
{
	object var_109_object;
	@self(var_109_object);
	var_109_object = var_107_object;
}
EMIT "Stack[-1] = 0";


void func_187(void)
{
	@SetVariable("d4q01", -1);
	func_203(var_13_object, var_14_object, var_15_object, var_16_int);
}


void func_220(object var_4_object, object var_5_object)
{
	if(var_5_object != 0)
		var_5_object->Remove(); //@t
	if(var_4_object != 0)
		var_4_object->Remove(); //@t
	func_269("theater@door1", false);
	func_269("sobor@door1", true);
	object var_107_object;
	func_245(var_107_object);
	@RemoveActor(var_107_object);
}


