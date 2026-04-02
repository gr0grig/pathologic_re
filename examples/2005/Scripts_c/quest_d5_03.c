maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		@SetVariable("d5q03", 1);
		object var_4_object;
		func_217(var_4_object);
		var_0_object = var_4_object;
		func_187(5);
	}

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		@Trace(var_2_string);
		if(var_2_string == "completed") {
			object var_9_object;
			func_223(var_9_object, "quest_d5_03_cutscene");
			func_144();
		} else if(var_2_string == "fail") {
				func_131();
		}
	Label_115:
		for(;;) {

		}
	
		if(!(var_2_string == "place_prisoners")) goto Label_115;
		func_252("uprava_prison@door1", false);
		object var_5_object;
		@GetSceneByName(var_5_object, "uprava_prison");
		object var_64_object; object var_65_object;
		var_5_object = var_65_object;
		func_234(var_64_object, var_65_object, "pt_guard", "pers_birdmask", "d5q03_birdmask.xml");
		var_1_object = var_64_object;
		object var_82_object; object var_83_object;
		var_5_object = var_83_object;
		func_234(var_82_object, var_83_object, "pt_prisoner1", "pers_unosha", "d5q03_unosha.xml");
		object var_6_object;
		var_82_object = var_6_object;
		var_0_object->add(var_6_object); //@t
		object var_87_object; object var_88_object;
		var_5_object = var_88_object;
		func_234(var_87_object, var_88_object, "pt_prisoner2", "pers_worker", "d5q03_worker.xml");
		var_87_object = var_6_object;
		var_0_object->add(var_6_object); //@t
		object var_92_object; object var_93_object;
		var_5_object = var_93_object;
		func_234(var_92_object, var_93_object, "pt_prisoner3", "pers_wasted_male", "d5q03_wastedmale.xml");
		var_92_object = var_6_object;
		var_0_object->add(var_6_object); //@t
		object var_97_object; object var_98_object;
		var_5_object = var_98_object;
		func_234(var_97_object, var_98_object, "pt_prisoner4", "pers_alkash", "d5q03_alkash.xml");
		var_97_object = var_6_object;
		var_0_object->add(var_6_object); //@t
		object var_102_object; object var_103_object;
		var_5_object = var_103_object;
		func_234(var_102_object, var_103_object, "pt_prisoner5", "pers_worker", "d5q03_worker.xml");
		var_102_object = var_6_object;
		var_0_object->add(var_6_object); //@t
		object var_107_object; object var_108_object;
		var_5_object = var_108_object;
		func_234(var_107_object, var_108_object, "pt_prisoner6", "pers_unosha", "d5q03_unosha.xml");
		var_107_object = var_6_object;
		var_0_object->add(var_6_object); //@t
		var_6_object = null;
		var_5_object = null;
	}

	// @pe
	void OnKeyDown(object var_0_object, object var_1_object, int var_2_int)
	{
		@CameraSwitchToNormal();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_120();
	}

}


void func_131(void)
{
	@SetVariable("d5q03", -1);
	func_252("uprava_prison@door1", true);
	func_171(var_4_int, var_5_int);
}


void func_234(object var_64_object, object var_65_object, string var_66_string, string var_67_string, string var_68_string)
{
	bool var_73_bool; cvector var_74_cvector; cvector var_75_cvector;
	var_65_object->GetLocator(var_66_string, var_73_bool, var_74_cvector, var_75_cvector);
	if(!var_73_bool) //@nz
		@Trace(("Locator " + var_66_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_67_string, var_65_object, var_74_cvector, var_75_cvector, var_68_string);
	object var_76_object = var_64_object;
	
}
EMIT "Stack[-1] = 0";


void func_171(object var_0_object, object var_1_object)
{
	func_269(var_0_object);
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_26_object;
	func_211(var_26_object);
	@RemoveActor(var_26_object);
}


void func_269(object var_13_object)
{
	int var_17_int; int var_18_int; object var_19_object;
	if(var_13_object != 0) {
		var_13_object->size(var_17_int);
		var_18_int = 0;

		while(var_18_int < var_17_int) {
			var_13_object->get(var_19_object, var_18_int);
			if(var_19_object != 0)
				@RemoveActor(var_19_object);
			var_19_object = null;
			var_18_int += 1;
		}

		var_13_object->clear();
	}
}


void func_144(void)
{
	int var_17_int; int var_18_int;
	@GetVariable("d5q03", var_18_int);
	bool var_20_bool = false;
	if(var_18_int != 1000) {
		if(var_18_int != -1)
			var_20_bool = true;
	}
	if(var_20_bool != 0) {
		@SetVariable("d5q03", 1000);
		func_252("uprava_prison@door1", true);
		func_171(var_17_int, var_18_int);
	}
}


void func_211(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_120(void)
{
	int var_5_int;
	@GetVariable("d5q03", var_5_int);
	if(var_5_int != 1000)
		func_131();
}


void func_217(object var_4_object)
{
	object var_6_object;
	@CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_187(int var_7_int)
{
	float var_8_float; float var_9_float;
	@GetGameTime(var_9_float);
	if(var_9_float >= (var_7_int * 24)) {
		func_171(var_8_float, var_9_float);
	} else {
		@SetTimeEvent(0, (var_7_int * 24));
		@Hold();
	}
	
}


void func_252(string var_11_string, bool var_12_bool)
{
	object var_14_object;
	@FindActor(var_14_object, var_11_string);
	if(!var_14_object) //@nz
		@Trace(("Door " + var_11_string) + " not found");
	else
		var_14_object->SetProperty("locked", var_12_bool);
	
}
EMIT "Stack[-1] = 0";


void func_223(object var_9_object, string var_10_string)
{
	object var_13_object;
	@GetMainOutdoorScene(var_13_object);
	object var_14_object;
	@AddBlankActor(var_14_object, var_13_object, var_10_string, (var_10_string + ".bin"));
	var_14_object = var_9_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


