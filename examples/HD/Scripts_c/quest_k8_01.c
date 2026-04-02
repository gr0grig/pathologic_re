// @GLOBALS: 0:object:

maintask task_0
{
	// @pe
	void init(void)
	{
		func_124();
		func_130();
		func_95("boiny@door1", true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(string name)
	{
		int var_2_int;
		@Trace(name);
		if(name == "unlock_boiny") {
			func_95("boiny@door1", false);
		} else if(name == "fail") {
				func_57();
		}

	
		if(name == "completed") {
			func_65();
		} else if(name == "cleanup") {
			@GetVariable("k8q01", var_2_int);
			if(var_2_int != 1000)
				func_57();
		}
		func_79();
	}

}


void func_65(void)
{
	@SetVariable("k8q01", 1000);
	func_73();
}


void func_130(void)
{
	object var_7_object;
	@GetSceneByName(var_7_object, "burah_home");
	@Trigger(var_7_object, "noburah");
}
EMIT "Stack[-1] = 0";


void func_73(void)
{
	func_95("boiny@door1", true);
}


void func_139(void)
{
	object var_31_object;
	@GetSceneByName(var_31_object, "burah_home");
	@Trigger(var_31_object, "burah");
}
EMIT "Stack[-1] = 0";


void func_57(void)
{
	@SetVariable("k8q01", -1);
	func_73();
}


void func_79(void)
{
	func_139();
	object var_34_object;
	func_89(var_34_object);
	@RemoveActor(var_34_object);
}


void func_112(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


void func_89(object var_34_object)
{
	object var_36_object;
	@self(var_36_object);
	var_36_object = var_34_object;
}
EMIT "Stack[-1] = 0";


void func_124(void)
{
	bool var_0_bool;
	func_112(var_0_bool, "klara2_npc_positioner", "init");
}


void func_95(string var_10_string, bool var_11_bool)
{
	object var_13_object;
	@FindActor(var_13_object, var_10_string);
	if(!var_13_object) //@nz
		@Trace(("Door " + var_10_string) + " not found");
	else
		var_13_object->SetProperty("locked", var_11_bool);
	
}
EMIT "Stack[-1] = 0";


