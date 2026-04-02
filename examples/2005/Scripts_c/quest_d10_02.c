maintask task_0
{
	void init(void)
	{
		@SetVariable("d10q02", 1);
		func_119("cot_georg@door1", true);
		func_119("cot_maria@door1", false);
		func_119("cot_viktor@door1", false);
		func_119("warehouse_rubin@door1", false);
		func_89(10);
	}

	// @pe
	void OnTrigger(string name)
	{
		@Trace(name);
		if(name == "unlock_georg") {
			func_119("cot_georg@door1", false);
		} else if(name == "fail") {
				func_66();
		}
	Label_54:
		for(;;) {

		}
	
		if(!(name == "completed")) goto Label_54;
		func_74();
	}

	// @pe
	void OnGameTime(int iID, float fTime)
	{
		func_55();
	}

}


void func_66(void)
{
	@SetVariable("d10q02", -1);
	func_82();
}


void func_74(void)
{
	@SetVariable("d10q02", 1000);
	func_82();
}


void func_113(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_82(void)
{
	object var_24_object;
	func_113(var_24_object);
	@RemoveActor(var_24_object);
}


void func_55(void)
{
	int var_3_int;
	@GetVariable("d10q02", var_3_int);
	if(var_3_int != 1000)
		func_66();
}


void func_119(string var_2_string, bool var_3_bool)
{
	object var_5_object;
	@FindActor(var_5_object, var_2_string);
	if(!var_5_object) //@nz
		@Trace(("Door " + var_2_string) + " not found");
	else
		var_5_object->SetProperty("locked", var_3_bool);
	
}
EMIT "Stack[-1] = 0";


void func_89(int var_18_int)
{
	float var_20_float;
	@GetGameTime(var_20_float);
	if(var_20_float >= (var_18_int * 24)) {
		func_82();
	} else {
		@SetTimeEvent(0, (var_18_int * 24));
		@Hold();
	}
	
}


