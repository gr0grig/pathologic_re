maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_7_object; object var_8_object; object var_9_object;
		@Trace(var_3_string);
		if(var_3_string == "saburov_klara") {
			@GetSceneByName(var_7_object, "cot_katerina");
			object var_13_object; object var_14_object;
			var_7_object = var_14_object;
			func_122(var_13_object, var_14_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
			var_7_object = null;
		} else if(var_3_string == "saburov_klara_remove") {
				@Trigger(var_13_object, "cleanup");
		}

	
		if(var_3_string == "eva_klara") {
			@GetSceneByName(var_8_object, "cot_eva");
			object var_37_object; object var_38_object;
			var_8_object = var_38_object;
			func_122(var_37_object, var_38_object, "pt_d6q01_klara", "NPC_Klara", "d6q01_Klara.xml");
			var_8_object = null;
		} else if(var_3_string == "eva_klara_remove") {
			@Trigger(var_37_object, "cleanup");
		} else if(var_3_string == "albinos_klara") {
			@GetMainOutdoorScene(var_9_object);
			object var_47_object; object var_48_object;
			var_9_object = var_48_object;
			func_122(var_47_object, var_48_object, "pt_d6q03_albinos", "NPC_Klara", "d6q01_Klara.xml");
			var_9_object = null;
		} else if(var_3_string == "albinos_klara_remove") {
			@Trigger(var_47_object, "cleanup");
		} else if(var_3_string == "fail") {
			func_89();
		} else if(var_3_string == "completed") {
			func_97();
		}
	}

}


void func_89(void)
{
	@SetVariable("d6q01", -1);
	func_105(var_7_object, var_8_object, var_9_object);
}


void func_122(object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string)
{
	bool var_22_bool; cvector var_23_cvector; cvector var_24_cvector;
	var_14_object->GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	if(!var_22_bool) //@nz
		@Trace(("Locator " + var_15_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	object var_25_object = var_13_object;
	
}
EMIT "Stack[-1] = 0";


void func_97(void)
{
	@SetVariable("d6q01", 1000);
	func_105(var_7_object, var_8_object, var_9_object);
}


void func_105(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
}


