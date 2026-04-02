maintask task_0
{
	void init(object var_0_object, object var_1_object, bool var_2_bool)
	{
		var_2_bool = true;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, bool var_2_bool, string var_3_string)
	{
		object var_9_object; object var_10_object; object var_11_object; object var_12_object; float var_13_float;
		@Trace(var_3_string);
		if(var_3_string == "block_well") {
			@GetSceneByName(var_9_object, "house_vlad");
			@AddActor(var_10_object, "d8q01_well_block", var_9_object, [0.0, 0.0, 0.0]);
			var_10_object = null;
			var_9_object = null;
		} else if(var_3_string == "place_toy") {
				@GetSceneByName(var_11_object, "r4_house_2_02");
				object var_22_object; object var_23_object;
				var_11_object = var_23_object;
				func_167(var_22_object, var_23_object, "pt_d8q01_toy", "scripted_container", "d8q01_toy.xml");
				var_0_object = var_22_object;
				var_11_object = null;
		}
	Label_94:
		for(;;) {

		}
	
		if(var_3_string == "boiny_load") {
		} else if(var_3_string == "termitnik_load") {
			if(var_2_bool != 0) {
				var_2_bool = false;
				@GetSceneByName(var_12_object, "termitnik");
				object var_46_object; object var_47_object;
				var_12_object = var_47_object;
				func_149(var_46_object, var_47_object, "pt_d8q01_burah", "NPC_Burah", "d8q01_Burah.xml");
				var_1_object = var_46_object;
				@SetVariable("d8TermitnikLoad", 1);
				var_12_object = null;
			}
		}
		if(var_3_string == "unlock_boiny") {
			@GetGameTime(var_13_float);
			if(var_13_float >= 193.0)
				func_103();
			else
				@SetTimeEvent(0, 193.0);
			if(var_3_string == "fail") {
				func_112();
			} else if(var_3_string == "completed") {
				func_120();
			}
		}
		goto Label_94;
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, bool var_2_bool, int var_3_int, float var_4_float)
	{
		@ReleaseTimeEvent(0);
		func_103();
	}

}


void func_128(object var_0_object, object var_1_object)
{
	@ReleaseTimeEvent(0);
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_185("boiny@door1", true);
}


void func_103(void)
{
	@Trace("Boiny unlocked");
	func_185("boiny@door1", false);
}


void func_167(object var_22_object, object var_23_object, string var_24_string, string var_25_string, string var_26_string)
{
	bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	var_23_object->GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector);
	if(!var_31_bool) //@nz
		@Trace(("Locator " + var_24_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string);
	object var_34_object = var_22_object;
	
}
EMIT "Stack[-1] = 0";


void func_112(void)
{
	@SetVariable("d8q01", -1);
	func_128(var_12_object, var_13_float);
}


void func_149(object var_46_object, object var_47_object, string var_48_string, string var_49_string, string var_50_string)
{
	bool var_55_bool; cvector var_56_cvector; cvector var_57_cvector;
	var_47_object->GetLocator(var_48_string, var_55_bool, var_56_cvector, var_57_cvector);
	if(!var_55_bool) //@nz
		@Trace(("Locator " + var_48_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_49_string, var_47_object, var_56_cvector, var_57_cvector, var_50_string);
	object var_58_object = var_46_object;
	
}
EMIT "Stack[-1] = 0";


void func_120(void)
{
	@SetVariable("d8q01", 1000);
	func_128(var_12_object, var_13_float);
}


void func_185(string var_7_string, bool var_8_bool)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(!var_10_object) //@nz
		@Trace(("Door " + var_7_string) + " not found");
	var_10_object->SetProperty("locked", var_8_bool);
}
EMIT "Stack[-1] = 0";


