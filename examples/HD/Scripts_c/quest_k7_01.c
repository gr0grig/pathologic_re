maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
	{
		float var_12_float;
		func_371("termitnik2@door1", false);
		func_371("termitnik@door1", true);
		object var_9_object;
		@GetMainOutdoorScene(var_9_object);
		object var_25_object; object var_26_object;
		var_9_object = var_26_object;
		func_353(var_25_object, var_26_object, "pt_k7q01_birdmask1", "pers_birdmask", "k7q01_birdmask.xml");
		var_0_object = var_25_object;
		object var_43_object; object var_44_object;
		var_9_object = var_44_object;
		func_353(var_43_object, var_44_object, "pt_k7q01_birdmask2", "pers_birdmask", "k7q01_birdmask.xml");
		var_1_object = var_43_object;
		@GetScene(var_9_object);
		object var_10_object;
		@GetSceneByName(var_10_object, "theater");
		if(var_10_object != var_9_object)
			func_0(var_12_float);
		object var_11_object;
		@GetSceneByName(var_11_object, "termitnik2");
		if(var_11_object != var_9_object)
			func_17(var_12_float);
		@GetSceneByName(var_9_object, "burah_home");
		@Trigger(var_9_object, "noburah");
		func_371("sobor@door1", true);
		@GetGameTime(var_12_float);
		if(var_12_float >= 156.0) {
			func_371("cot_georg@door1", false);
			func_371("cot_maria@door1", false);
			func_371("cot_viktor@door1", false);
		} else {
			func_371("cot_georg@door1", true);
			func_371("cot_maria@door1", true);
			func_371("cot_viktor@door1", true);
			@SetTimeEvent(0, 156.0);
		}
		for(;;) {
			@Hold();
		}
	
	}
	EMIT "Return(); Pop(8)";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";
	EMIT "Stack[-4] = 0";

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int, float var_6_float)
	{
		func_371("cot_georg@door1", false);
		func_371("cot_maria@door1", false);
		func_371("cot_viktor@door1", false);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string)
	{
		object var_8_object; int var_9_int;
		@Trace(var_5_string);
		if(var_5_string == "place_corpse") {
			@GetMainOutdoorScene(var_8_object);
			@AddActor(var_2_object, "d7q02_corpse", var_8_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "k7q01_corpse.xml");
			var_8_object = null;
		} else if(var_5_string == "place_danko") {
				if(!var_3_object) //@nz
					func_0(var_9_int);
		}

	
		if(var_5_string == "cot_eva_load") {
			func_388("icot_eva_door", true);
		} else if(var_5_string == "theater_load") {
			func_0(var_9_int);
		} else if(var_5_string == "termitnik2_load") {
			func_17(var_9_int);
		} else if(var_5_string == "sobor_load") {
			if(var_0_object != 0)
				var_0_object->Remove(); //@t
			if(var_1_object != 0)
				var_1_object->Remove(); //@t
		} else if(var_5_string == "fail") {
			func_251();
		} else if(var_5_string == "completed") {
			func_259();
		} else if(var_5_string == "cleanup") {
			@GetVariable("k7q01", var_9_int);
			if(var_9_int != 1000)
				@SetVariable("k7q01", -1);
		}
		int var_7_int;
		func_286(var_7_int, var_8_object, var_9_int);
	}

}


void func_0(object var_3_object)
{
	if(var_3_object != 0) {
	}
	object var_51_object;
	@GetSceneByName(var_51_object, "theater");
	object var_54_object; object var_55_object;
	var_51_object = var_55_object;
	func_335(var_54_object, var_55_object, "pt_k7q01_danko", "NPC_Bakalavr", "k7q01_danko.xml");
	var_3_object = var_54_object;
}
EMIT "Stack[-1] = 0";


void func_353(object var_25_object, object var_26_object, string var_27_string, string var_28_string, string var_29_string)
{
	bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	var_26_object->GetLocator(var_27_string, var_34_bool, var_35_cvector, var_36_cvector);
	if(!var_34_bool) //@nz
		@Trace(("Locator " + var_27_string) + " doesn't exist");
	else
		var_26_object->AddStationaryActor(Obj(), var_35_cvector, var_36_cvector, var_28_string, var_29_string);
	object var_37_object = var_25_object;
	
}
EMIT "Stack[-1] = 0";


void func_259(void)
{
	@SetVariable("k7q01", 1000);
	func_267(var_8_object, var_9_int);
}


void func_388(string var_43_string, bool var_44_bool)
{
	object var_46_object;
	@FindActor(var_46_object, var_43_string);
	if(!var_46_object) { //@nz
		@Trace(("Door " + var_43_string) + " not found");
	} else {
		if(var_44_bool != 0)
			var_46_object->Close();
		var_46_object->SetProperty("locked", var_44_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_329(object var_119_object)
{
	object var_121_object;
	@self(var_121_object);
	var_121_object = var_119_object;
}
EMIT "Stack[-1] = 0";


void func_267(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	func_371("sobor@door1", false);
	func_371("termitnik@door1", false);
}


void func_335(object var_54_object, object var_55_object, string var_56_string, string var_57_string, string var_58_string)
{
	bool var_63_bool; cvector var_64_cvector; cvector var_65_cvector;
	var_55_object->GetLocator(var_56_string, var_63_bool, var_64_cvector, var_65_cvector);
	if(!var_63_bool) //@nz
		@Trace(("Locator " + var_56_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_57_string, var_55_object, var_64_cvector, var_65_cvector, var_58_string);
	object var_66_object = var_54_object;
	
}
EMIT "Stack[-1] = 0";


void func_17(object var_4_object)
{
	if(var_4_object != 0) {
	}
	object var_75_object;
	@GetSceneByName(var_75_object, "termitnik2");
	object var_78_object; object var_79_object;
	var_75_object = var_79_object;
	func_335(var_78_object, var_79_object, "pt_k7q01_burah", "NPC_Burah", "k7q01_burah.xml");
	var_4_object = var_78_object;
	bool var_83_bool;
	func_409(var_83_bool, "NPC_Burah");
}
EMIT "Stack[-1] = 0";


void func_371(string var_13_string, bool var_14_bool)
{
	object var_16_object;
	@FindActor(var_16_object, var_13_string);
	if(!var_16_object) //@nz
		@Trace(("Door " + var_13_string) + " not found");
	else
		var_16_object->SetProperty("locked", var_14_bool);
	
}
EMIT "Stack[-1] = 0";


void func_409(bool var_83_bool, string var_84_string)
{
	object var_86_object;
	@FindActor(var_86_object, var_84_string);
	if(!var_86_object) //@nz
		var_83_bool = false;
	@RemoveActor(var_86_object);
	var_83_bool = true;
}
EMIT "Stack[-1] = 0";


void func_251(void)
{
	@SetVariable("k7q01", -1);
	func_267(var_8_object, var_9_int);
}


void func_286(object var_2_object, object var_3_object, object var_4_object)
{
	object var_105_object; object var_106_object;
	func_267(var_105_object, var_106_object);
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	func_388("icot_eva_door", false);
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	@GetSceneByName(var_106_object, "burah_home");
	@Trigger(var_106_object, "burah");
	func_371("termitnik2@door1", true);
	object var_119_object;
	func_329(var_119_object);
	@RemoveActor(var_119_object);
}
EMIT "Stack[-1] = 0";


