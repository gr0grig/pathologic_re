// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		object var_4_object;
		func_191(var_4_object);
		var_2_object = var_4_object;
		object var_7_object;
		func_191(var_7_object);
		var_3_object = var_7_object;
		func_161(7);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_12_object; int var_13_int; bool var_14_bool; cvector var_15_cvector; cvector var_16_cvector; object var_17_object; object var_18_object;
		@Trace(var_4_string);
		if(var_4_string == "init_termitnik2") {
			func_215("termitnik2@door1", false);
			@GetSceneByName(var_12_object, "termitnik2");
			object var_32_object; object var_33_object;
			var_12_object = var_33_object;
			func_197(var_32_object, var_33_object, "pt_b7q02_mmorlok", "pers_morlok", "b7q02_mmorlok.xml");
			var_1_object = var_32_object;
			object var_50_object; object var_51_object;
			var_12_object = var_51_object;
			func_197(var_50_object, var_51_object, "pt_b7q02_morlok", "pers_morlok", "b7q02_morlok.xml");
			var_0_object = var_50_object;
			var_13_int = 1;

			for(;;) {
				var_12_object->GetLocator(("pt_b7q02_fog" + var_13_int), var_14_bool, var_15_cvector, var_16_cvector);
				if(!var_14_bool) { //@nz
				} else {
					@AddActorByType(var_17_object, "fog", var_12_object, var_15_cvector, var_16_cvector, "fog_stat_indoor.xml");
					var_2_object->add(var_17_object); //@t
					var_17_object = null;
					var_13_int += 1;
				}
				var_12_object = null;
		} else {
			if(var_4_string == "place_grabitels") {
				@GetMainOutdoorScene(var_18_object);
				object var_63_object; object var_64_object;
				var_18_object = var_64_object;
				func_197(var_63_object, var_64_object, "pt_b7q02_grabitel1", "pers_grabitel", "b7q02_grabitel.xml");
				var_3_object->add(var_63_object); //@t
				object var_68_object; object var_69_object;
				var_18_object = var_69_object;
				func_197(var_68_object, var_69_object, "pt_b7q02_grabitel2", "pers_grabitel", "b7q02_grabitel.xml");
				var_3_object->add(var_68_object); //@t
				var_18_object = null;
			} else if(var_4_string == "fail") {
				func_113();
			} else if(var_4_string == "completed") {
				func_121();
			}
		}

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		func_102();
	}

}


void func_161(int var_8_int)
{
	float var_9_float; float var_10_float;
	@GetGameTime(var_10_float);
	if(var_10_float >= (var_8_int * 24)) {
		func_129(var_3_object, var_8_int, var_9_float, var_10_float);
	} else {
		@SetTimeEvent(0, (var_8_int * 24));
		@Hold();
	}
	
}


void func_129(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	func_215("termitnik2@door1", true);
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_232(var_2_object, "cleanup");
	func_232(var_3_object, "cleanup");
	object var_42_object;
	func_185(var_42_object);
	@RemoveActor(var_42_object);
}


void func_185(object var_42_object)
{
	object var_44_object;
	@self(var_44_object);
	var_44_object = var_42_object;
}
EMIT "Stack[-1] = 0";


void func_197(object var_32_object, object var_33_object, string var_34_string, string var_35_string, string var_36_string)
{
	bool var_41_bool; cvector var_42_cvector; cvector var_43_cvector;
	var_33_object->GetLocator(var_34_string, var_41_bool, var_42_cvector, var_43_cvector);
	if(!var_41_bool) //@nz
		@Trace(("Locator " + var_34_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_35_string, var_33_object, var_42_cvector, var_43_cvector, var_36_string);
	object var_44_object = var_32_object;
	
}
EMIT "Stack[-1] = 0";


void func_102(void)
{
	int var_7_int;
	@GetVariable("b7q02", var_7_int);
	if(var_7_int != 1000)
		func_113();
}


void func_232(object var_28_object, string var_29_string)
{
	int var_33_int; int var_34_int; object var_35_object;
	if(var_28_object != 0) {
		var_28_object->size(var_33_int);
		var_34_int = 0;

		for(;;) {
			if(!(var_34_int < var_33_int)) goto Label_250;
			var_28_object->get(var_35_object, var_34_int);
			if(var_35_object != 0)
				@Trigger(var_35_object, var_29_string);
			var_35_object = null;
			var_34_int += 1;
		}
	}
Label_250:
}


void func_113(void)
{
	@SetVariable("b7q02", -1);
	func_129(var_4_int, var_5_float, var_6_int, var_7_int);
}


void func_215(string var_14_string, bool var_15_bool)
{
	object var_17_object;
	@FindActor(var_17_object, var_14_string);
	if(!var_17_object) //@nz
		@Trace(("Door " + var_14_string) + " not found");
	else
		var_17_object->SetProperty("locked", var_15_bool);
	
}
EMIT "Stack[-1] = 0";


void func_121(void)
{
	@SetVariable("b7q02", 1000);
	func_129(var_15_cvector, var_16_cvector, var_17_object, var_18_object);
}


void func_191(object var_4_object)
{
	object var_6_object;
	@CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


