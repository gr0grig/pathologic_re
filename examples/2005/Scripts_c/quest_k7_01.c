maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
	{
		object var_10_object;
		@QueuePlayMovie("aglaja.wmv");
		func_305("termitnik2@door1", false);
		func_305("termitnik@door1", true);
		object var_8_object;
		@GetMainOutdoorScene(var_8_object);
		object var_24_object; object var_25_object;
		var_8_object = var_25_object;
		func_287(var_24_object, var_25_object, "pt_k7q01_birdmask1", "pers_birdmask", "k7q01_birdmask.xml");
		var_0_object = var_24_object;
		object var_42_object; object var_43_object;
		var_8_object = var_43_object;
		func_287(var_42_object, var_43_object, "pt_k7q01_birdmask2", "pers_birdmask", "k7q01_birdmask.xml");
		var_1_object = var_42_object;
		@GetScene(var_8_object);
		object var_9_object;
		@GetSceneByName(var_9_object, "theater");
		if(var_9_object != var_8_object)
			func_0(var_10_object);
		@GetSceneByName(var_10_object, "termitnik2");
		if(var_10_object != var_8_object)
			func_17(var_10_object);
		@GetSceneByName(var_8_object, "burah_home");
		@Trigger(var_8_object, "noburah");
		func_305("sobor@door1", true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(6)";
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";

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
			func_322("icot_eva_door", true);
		} else if(var_5_string == "theater_load") {
			func_0(var_9_int);
		} else if(var_5_string == "termitnik2_load") {
			func_17(var_9_int);
		} else if(var_5_string == "fail") {
			func_185();
		} else if(var_5_string == "completed") {
			func_193();
		} else if(var_5_string == "cleanup") {
			@GetVariable("k7q01", var_9_int);
			if(var_9_int != 1000)
				@SetVariable("k7q01", -1);
		}
		int var_7_int;
		func_220(var_7_int, var_8_object, var_9_int);
	}

}


void func_0(object var_3_object)
{
	if(var_3_object != 0) {
	}
	object var_50_object;
	@GetSceneByName(var_50_object, "theater");
	object var_53_object; object var_54_object;
	var_50_object = var_54_object;
	func_269(var_53_object, var_54_object, "pt_k7q01_danko", "NPC_Bakalavr", "k7q01_danko.xml");
	var_3_object = var_53_object;
}
EMIT "Stack[-1] = 0";


void func_193(void)
{
	@SetVariable("k7q01", 1000);
	func_201(var_8_object, var_9_int);
}


void func_322(string var_43_string, bool var_44_bool)
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


void func_263(object var_115_object)
{
	object var_117_object;
	@self(var_117_object);
	var_117_object = var_115_object;
}
EMIT "Stack[-1] = 0";


void func_201(object var_0_object, object var_1_object)
{
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	func_305("sobor@door1", false);
	func_305("termitnik@door1", false);
}


void func_269(object var_53_object, object var_54_object, string var_55_string, string var_56_string, string var_57_string)
{
	bool var_62_bool; cvector var_63_cvector; cvector var_64_cvector;
	var_54_object->GetLocator(var_55_string, var_62_bool, var_63_cvector, var_64_cvector);
	if(!var_62_bool) //@nz
		@Trace(("Locator " + var_55_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_56_string, var_54_object, var_63_cvector, var_64_cvector, var_57_string);
	object var_65_object = var_53_object;
	
}
EMIT "Stack[-1] = 0";


void func_305(string var_12_string, bool var_13_bool)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(!var_15_object) //@nz
		@Trace(("Door " + var_12_string) + " not found");
	else
		var_15_object->SetProperty("locked", var_13_bool);
	
}
EMIT "Stack[-1] = 0";


void func_17(object var_4_object)
{
	if(var_4_object != 0) {
	}
	object var_74_object;
	@GetSceneByName(var_74_object, "termitnik2");
	object var_77_object; object var_78_object;
	var_74_object = var_78_object;
	func_269(var_77_object, var_78_object, "pt_k7q01_burah", "NPC_Burah", "k7q01_burah.xml");
	var_4_object = var_77_object;
	bool var_82_bool;
	func_343(var_82_bool, "NPC_Burah");
}
EMIT "Stack[-1] = 0";


void func_343(bool var_82_bool, string var_83_string)
{
	object var_85_object;
	@FindActor(var_85_object, var_83_string);
	if(!var_85_object) //@nz
		var_82_bool = false;
	@RemoveActor(var_85_object);
	var_82_bool = true;
}
EMIT "Stack[-1] = 0";


void func_185(void)
{
	@SetVariable("k7q01", -1);
	func_201(var_8_object, var_9_int);
}


void func_220(object var_2_object, object var_3_object, object var_4_object)
{
	object var_101_object; object var_102_object;
	func_201(var_101_object, var_102_object);
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	func_322("icot_eva_door", false);
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	@GetSceneByName(var_102_object, "burah_home");
	@Trigger(var_102_object, "burah");
	func_305("termitnik2@door1", true);
	object var_115_object;
	func_263(var_115_object);
	@RemoveActor(var_115_object);
}
EMIT "Stack[-1] = 0";


void func_287(object var_24_object, object var_25_object, string var_26_string, string var_27_string, string var_28_string)
{
	bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector;
	var_25_object->GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector);
	if(!var_33_bool) //@nz
		@Trace(("Locator " + var_26_string) + " doesn't exist");
	else
		var_25_object->AddStationaryActor(Obj(), var_34_cvector, var_35_cvector, var_27_string, var_28_string);
	object var_36_object = var_24_object;
	
}
EMIT "Stack[-1] = 0";


