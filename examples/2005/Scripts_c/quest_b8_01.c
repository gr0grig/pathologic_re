maintask task_0
{
	void init(object var_0_object)
	{
		func_167("boiny@door1", true);
		func_167("vagon_mishka@door1", false);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_4_object; int var_5_int;
		@Trace(var_1_string);
		if(var_1_string == "place_klara") {
			@GetSceneByName(var_4_object, "vagon_mishka");
			object var_9_object; object var_10_object;
			var_4_object = var_10_object;
			func_149(var_9_object, var_10_object, "pt_b8q01_klara", "NPC_Klara", "b8q01_klara.xml");
			var_4_object = null;
		} else if(var_1_string == "remove_klara") {
				@Trigger(var_9_object, "cleanup");
		}
	Label_106:
		for(;;) {

		}
	
		if(var_1_string == "unlock_boiny") {
			func_167("boiny@door1", false);
			goto Label_106;
		}
		if(var_1_string == "cleanup") {
			@GetVariable("b8q01", var_5_int);
			if(var_5_int != 1000)
				func_107();
			else
				func_123(var_5_int);
			if(var_1_string == "fail") {
				func_107();
			} else if(var_1_string == "completed") {
				func_115();
			}
		}
		func_129();
		goto Label_106;
	
	}

}


void func_0(void)
{
	@Trace("kill the one");
	int var_52_int;
	@GetVariable("b8q03MladVladIsVictim", var_52_int);
	if(var_52_int != 0) {
		bool var_57_bool;
		func_184(var_57_bool, "volonteers_burah", "kill", "mladvlad");
	} else {
		bool var_64_bool;
		func_184(var_64_bool, "volonteers_burah", "kill", "bigvlad");
	}
	
}


// @pe
void func_129(void)
{
	func_0();
	object var_68_object;
	func_143(var_68_object);
	@RemoveActor(var_68_object);
	func_167("boiny@door1", true);
}


void func_167(string var_1_string, bool var_2_bool)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(!var_4_object) //@nz
		@Trace(("Door " + var_1_string) + " not found");
	else
		var_4_object->SetProperty("locked", var_2_bool);
	
}
EMIT "Stack[-1] = 0";


void func_107(void)
{
	@SetVariable("b8q01", -1);
	func_123(var_5_int);
}


void func_143(object var_68_object)
{
	object var_70_object;
	@self(var_70_object);
	var_70_object = var_68_object;
}
EMIT "Stack[-1] = 0";


void func_115(void)
{
	@SetVariable("b8q01", 1000);
	func_123(var_5_int);
}


void func_149(object var_9_object, object var_10_object, string var_11_string, string var_12_string, string var_13_string)
{
	bool var_18_bool; cvector var_19_cvector; cvector var_20_cvector;
	var_10_object->GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector);
	if(!var_18_bool) //@nz
		@Trace(("Locator " + var_11_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string);
	object var_21_object = var_9_object;
	
}
EMIT "Stack[-1] = 0";


void func_184(bool var_57_bool, string var_58_string, string var_59_string, string var_60_string)
{
	object var_62_object;
	@FindActor(var_62_object, var_58_string);
	if(var_62_object == null)
		var_57_bool = false;
	@Trigger(var_62_object, var_59_string, var_60_string);
	var_57_bool = true;
}
EMIT "Stack[-1] = 0";


void func_123(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
}


