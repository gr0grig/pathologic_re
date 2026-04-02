maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		func_182("sobor@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_8_object; object var_9_object; object var_10_object; int var_11_int;
		@Trace(var_3_string);
		if(var_3_string == "saburov_klara") {
			@GetSceneByName(var_8_object, "cot_katerina");
			object var_15_object; object var_16_object;
			var_8_object = var_16_object;
			func_164(var_15_object, var_16_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
			var_8_object = null;
		} else if(var_3_string == "saburov_klara_remove") {
				@Trigger(var_15_object, "cleanup");
		}
	Label_113:
		for(;;) {

		}
	
		if(var_3_string == "eva_klara") {
			@GetSceneByName(var_9_object, "cot_eva");
			object var_39_object; object var_40_object;
			var_9_object = var_40_object;
			func_164(var_39_object, var_40_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
		} else if(var_3_string == "eva_klara_remove") {
			@Trigger(var_39_object, "cleanup");
		} else if(var_3_string == "albinos_klara") {
			@GetMainOutdoorScene(var_10_object);
			object var_49_object; object var_50_object;
			var_10_object = var_50_object;
			func_164(var_49_object, var_50_object, "pt_d6q03_albinos", "NPC_Klara", "d6q01_Klara.xml");
		} else if(var_3_string == "albinos_klara_remove") {
			@Trigger(var_49_object, "cleanup");
		}
		if(var_3_string == "cleanup") {
			@GetVariable("d6q01", var_11_int);
			if(var_11_int != 1000)
				func_114();
			else
				func_130(Obj(), Obj(), var_11_int);
			if(var_3_string == "fail") {
				func_114();
			} else if(var_3_string == "completed") {
				func_122();
			}
		}
		func_146();
		goto Label_113;
	
	}

}


void func_130(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
}


void func_164(object var_15_object, object var_16_object, string var_17_string, string var_18_string, string var_19_string)
{
	bool var_24_bool; cvector var_25_cvector; cvector var_26_cvector;
	var_16_object->GetLocator(var_17_string, var_24_bool, var_25_cvector, var_26_cvector);
	if(!var_24_bool) //@nz
		@Trace(("Locator " + var_17_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_18_string, var_16_object, var_25_cvector, var_26_cvector, var_19_string);
	object var_27_object = var_15_object;
	
}
EMIT "Stack[-1] = 0";


void func_114(void)
{
	@SetVariable("d6q01", -1);
	func_130(var_9_object, var_10_object, var_11_int);
}


void func_146(void)
{
	func_182("sobor@door1", true);
	object var_80_object;
	func_158(var_80_object);
	@RemoveActor(var_80_object);
}


void func_182(string var_3_string, bool var_4_bool)
{
	object var_6_object;
	@FindActor(var_6_object, var_3_string);
	if(!var_6_object) //@nz
		@Trace(("Door " + var_3_string) + " not found");
	else
		var_6_object->SetProperty("locked", var_4_bool);
	
}
EMIT "Stack[-1] = 0";


void func_122(void)
{
	@SetVariable("d6q01", 1000);
	func_130(var_9_object, var_10_object, var_11_int);
}


void func_158(object var_80_object)
{
	object var_82_object;
	@self(var_82_object);
	var_82_object = var_80_object;
}
EMIT "Stack[-1] = 0";


