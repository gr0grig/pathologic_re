// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
	{
		@QueuePlayMovie("army.wmv");
		func_208("mnogogrannik_han@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, string var_4_string)
	{
		object var_8_object; object var_9_object; int var_10_int;
		@Trace(var_4_string);
		if(var_4_string == "init_termitnik2") {
			@GetSceneByName(var_8_object, "burah_home");
			@Trigger(var_8_object, "noburah");
			@GetSceneByName(var_8_object, "cot_eva");
			@Trigger(var_8_object, "nodanko");
			@GetSceneByName(var_8_object, "termitnik2");
			object var_18_object; object var_19_object;
			var_8_object = var_19_object;
			func_190(var_18_object, var_19_object, "pt_k9q01_burah", "NPC_Bakalavr", "k9q01_danko.xml");
			var_1_object = var_18_object;
			object var_36_object; object var_37_object;
			var_8_object = var_37_object;
			func_190(var_36_object, var_37_object, "pt_k9q01_danko", "NPC_Burah", "k9q01_burah.xml");
			var_0_object = var_36_object;
			var_8_object = null;
		} else if(var_4_string == "init_mnogogrannik") {
				func_208("mnogogrannik@door1", false);
				@GetSceneByName(var_9_object, "mnogogrannik");
				object var_54_object; object var_55_object;
				var_9_object = var_55_object;
				func_190(var_54_object, var_55_object, "pt_k9q01_littlegirl", "pers_littleboy", "k9q01_littleboy.xml");
				var_2_object = var_54_object;
				object var_59_object; object var_60_object;
				var_9_object = var_60_object;
				func_190(var_59_object, var_60_object, "pt_k9q01_littleboy", "pers_littlegirl", "k9q01_littlegirl.xml");
				var_3_object = var_59_object;
				var_9_object = null;
		}
	Label_116:
		for(;;) {

		}
	
		if(var_4_string == "fail") {
			func_237();
			func_117();
		} else if(var_4_string == "completed") {
			func_237();
			func_125();
		} else if(var_4_string == "cleanup") {
			@GetVariable("k9q01", var_10_int);
			if(var_10_int != 1000) {
			func_117();
			goto Label_116;
		}
		}
		int var_7_int;
		func_133(var_7_int, var_8_object, var_9_object, var_10_int);
	}

}


void func_225(bool var_66_bool, string var_67_string, string var_68_string)
{
	object var_70_object;
	@FindActor(var_70_object, var_67_string);
	if(var_70_object == null)
		var_66_bool = false;
	@Trigger(var_70_object, var_68_string);
	var_66_bool = true;
}
EMIT "Stack[-1] = 0";


void func_133(object var_0_object, object var_1_object, object var_2_object, object var_3_object)
{
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	object var_75_object;
	@GetSceneByName(var_75_object, "burah_home");
	@Trigger(var_75_object, "burah");
	@GetSceneByName(var_75_object, "cot_eva");
	@Trigger(var_75_object, "danko");
	func_208("mnogogrannik@door1", true);
	func_208("mnogogrannik_han@door1", true);
	object var_92_object;
	func_184(var_92_object);
	@RemoveActor(var_92_object);
}
EMIT "Stack[-1] = 0";


void func_237(void)
{
	bool var_66_bool;
	func_225(var_66_bool, "klara2_npc_positioner", "init");
}


void func_208(string var_5_string, bool var_6_bool)
{
	object var_8_object;
	@FindActor(var_8_object, var_5_string);
	if(!var_8_object) //@nz
		@Trace(("Door " + var_5_string) + " not found");
	else
		var_8_object->SetProperty("locked", var_6_bool);
	
}
EMIT "Stack[-1] = 0";


void func_117(void)
{
	@SetVariable("k9q01", -1);
	func_133(var_7_int, var_8_object, var_9_object, var_10_int);
}


void func_184(object var_92_object)
{
	object var_94_object;
	@self(var_94_object);
	var_94_object = var_92_object;
}
EMIT "Stack[-1] = 0";


void func_125(void)
{
	@SetVariable("k9q01", 1000);
	func_133(var_7_int, var_8_object, var_9_object, var_10_int);
}


void func_190(object var_18_object, object var_19_object, string var_20_string, string var_21_string, string var_22_string)
{
	bool var_27_bool; cvector var_28_cvector; cvector var_29_cvector;
	var_19_object->GetLocator(var_20_string, var_27_bool, var_28_cvector, var_29_cvector);
	if(!var_27_bool) //@nz
		@Trace(("Locator " + var_20_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_21_string, var_19_object, var_28_cvector, var_29_cvector, var_22_string);
	object var_30_object = var_18_object;
	
}
EMIT "Stack[-1] = 0";


