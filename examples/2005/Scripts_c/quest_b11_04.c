// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		object var_4_object;
		func_186(var_4_object);
		var_0_object = var_4_object;
		func_156(11);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_11_object; int var_12_int; bool var_13_bool; cvector var_14_cvector; cvector var_15_cvector; object var_16_object;
		@Trace(var_4_string);
		if(var_4_string == "place_sanitar") {
			@GetMainOutdoorScene(var_11_object);
			object var_19_object; object var_20_object;
			func_192(var_19_object, var_20_object, "pt_b11q04_sanitar", "pers_sanitar", "b11q04_sanitar_main.xml");
			var_1_object = var_19_object;
			var_12_int = 1;

			for(;;) {
				var_20_object->GetLocator(("pt_b11q04_sanitar" + var_12_int), var_13_bool, var_14_cvector, var_15_cvector);
				if(!var_13_bool) { //@nz
				} else {
					object var_58_object; object var_59_object;
					var_11_object = var_59_object;
					func_228(var_58_object, var_59_object, ("pt_b11q04_sanitar" + var_12_int), "pers_sanitar", "b11q04_sanitar.xml");
					var_0_object->add(var_58_object); //@t
					var_12_int += 1;
				}
				object var_40_object; object var_41_object;
				var_11_object = var_41_object;
				func_210(var_40_object, var_41_object, "pt_b11q04_corpse", "scripted", "b11q04_corpse.xml");
				var_3_object = var_40_object;
				var_11_object = null;
		} else {
			if(var_4_string == "place_officer") {
				@GetSceneByName(var_16_object, "vagon_army");
				func_246("vagon_army@door1", false);
				object var_91_object; object var_92_object;
				var_16_object = var_92_object;
				func_192(var_91_object, var_92_object, "pt_b11q04_officer", "pers_soldat", "b11q04_officer.xml");
				var_2_object = var_91_object;
				var_16_object = null;
			} else if(var_4_string == "fail") {
				func_105();
			} else if(var_4_string == "completed") {
				func_113();
			}
		}

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, int var_4_int, float var_5_float)
	{
		func_91();
	}

}


void func_192(object var_19_object, object var_20_object, string var_21_string, string var_22_string, string var_23_string)
{
	bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	var_20_object->GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	if(!var_28_bool) //@nz
		@Trace(("Locator " + var_21_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string);
	object var_31_object = var_19_object;
	
}
EMIT "Stack[-1] = 0";


void func_132(object var_0_object, object var_3_object)
{
	func_121(var_8_float, var_9_float);
	func_263(var_0_object);
	func_246("vagon_army@door1", true);
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	object var_40_object;
	func_180(var_40_object);
	@RemoveActor(var_40_object);
}


void func_228(object var_58_object, object var_59_object, string var_60_string, string var_61_string, string var_62_string)
{
	bool var_68_bool; cvector var_69_cvector; cvector var_70_cvector;
	var_59_object->GetLocator(var_60_string, var_68_bool, var_69_cvector, var_70_cvector);
	if(!var_68_bool) //@nz
		@Trace(("Locator " + var_60_string) + " doesn't exist");
	else
		var_59_object->AddStationaryActor(Obj(), var_69_cvector, var_70_cvector, var_61_string, var_62_string);
	object var_71_object = var_58_object;
	
}
EMIT "Stack[-1] = 0";


void func_263(object var_17_object)
{
	int var_21_int; int var_22_int; object var_23_object;
	if(var_17_object != 0) {
		var_17_object->size(var_21_int);
		var_22_int = 0;

		while(var_22_int < var_21_int) {
			var_17_object->get(var_23_object, var_22_int);
			if(var_23_object != 0)
				var_23_object->Remove();
			var_23_object = null;
			var_22_int += 1;
		}

		var_17_object->clear();
	}
}


void func_105(void)
{
	@SetVariable("b11q04", -1);
	func_121(var_6_int, var_7_int);
}


void func_113(void)
{
	@SetVariable("b11q04", 1000);
	func_121(var_15_cvector, var_16_object);
}


void func_210(object var_40_object, object var_41_object, string var_42_string, string var_43_string, string var_44_string)
{
	bool var_49_bool; cvector var_50_cvector; cvector var_51_cvector;
	var_41_object->GetLocator(var_42_string, var_49_bool, var_50_cvector, var_51_cvector);
	if(!var_49_bool) //@nz
		@Trace(("Locator " + var_42_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_43_string, var_41_object, var_50_cvector, var_51_cvector, var_44_string);
	object var_52_object = var_40_object;
	
}
EMIT "Stack[-1] = 0";


void func_180(object var_40_object)
{
	object var_42_object;
	@self(var_42_object);
	var_42_object = var_40_object;
}
EMIT "Stack[-1] = 0";


void func_246(string var_28_string, bool var_29_bool)
{
	object var_31_object;
	@FindActor(var_31_object, var_28_string);
	if(!var_31_object) //@nz
		@Trace(("Door " + var_28_string) + " not found");
	else
		var_31_object->SetProperty("locked", var_29_bool);
	
}
EMIT "Stack[-1] = 0";


void func_121(object var_1_object, object var_2_object)
{
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
}


void func_186(object var_4_object)
{
	object var_6_object;
	@CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_91(void)
{
	int var_7_int;
	@GetVariable("b11q04", var_7_int);
	if(var_7_int != 1000)
		func_105();
	int var_6_int;
	func_132(var_6_int, var_7_int);
}


void func_156(int var_7_int)
{
	float var_8_float; float var_9_float;
	@GetGameTime(var_9_float);
	if(var_9_float >= (var_7_int * 24)) {
		func_132(var_8_float, var_9_float);
	} else {
		@SetTimeEvent(0, (var_7_int * 24));
		@Hold();
	}
	
}


