// @GLOBALS: 0:object:

maintask task_0
{
	// @pe
	void init(void)
	{
		func_118();
		func_89("boiny@door1", true);
	
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
			func_89("boiny@door1", false);
		} else if(name == "fail") {
				func_55();
		}
	Label_54:
		for(;;) {

		}
	
		if(name == "completed") {
			func_63();
		} else if(name == "cleanup") {
			@GetVariable("k8q01", var_2_int);
			if(var_2_int != 1000) {
			func_55();
			goto Label_54;
		}
		}
		func_71();
	}

}


void func_71(void)
{
	func_89("boiny@door1", true);
	object var_21_object;
	func_83(var_21_object);
	@RemoveActor(var_21_object);
}


void func_106(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


void func_83(object var_21_object)
{
	object var_23_object;
	@self(var_23_object);
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_118(void)
{
	bool var_0_bool;
	func_106(var_0_bool, "klara2_npc_positioner", "init");
}


void func_55(void)
{
	@SetVariable("k8q01", -1);
	func_71();
}


void func_89(string var_6_string, bool var_7_bool)
{
	object var_9_object;
	@FindActor(var_9_object, var_6_string);
	if(!var_9_object) //@nz
		@Trace(("Door " + var_6_string) + " not found");
	else
		var_9_object->SetProperty("locked", var_7_bool);
	
}
EMIT "Stack[-1] = 0";


void func_63(void)
{
	@SetVariable("k8q01", 1000);
	func_71();
}


