maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(string name)
	{
		object var_4_object; int var_5_int; object var_6_object;
		@Trace(name);
		if(name == "place_rifles") {
			@GetMainOutdoorScene(var_4_object);
			var_5_int = 1;

			while(var_5_int <= 5) {
				@AddActor(var_6_object, ("d9q01_rifle" + var_5_int), var_4_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d9q01_rifle.xml");
				var_6_object = null;
				var_5_int += 1;
			}

			var_4_object = null;
		} else if(name == "unlock_polyh") {
				func_75("polyh@door1", false);
		}

	
		if(name == "fail") {
			func_52();
		} else if(name == "completed") {
			func_60();
		}
	}

}


void func_75(string var_19_string, bool var_20_bool)
{
	object var_22_object;
	@FindActor(var_22_object, var_19_string);
	if(!var_22_object) //@nz
		@Trace(("Door " + var_19_string) + " not found");
	var_22_object->SetProperty("locked", var_20_bool);
}
EMIT "Stack[-1] = 0";


void func_52(void)
{
	@SetVariable("d9q01", -1);
	func_68();
}


void func_60(void)
{
	@SetVariable("d9q01", 1000);
	func_68();
}


void func_68(void)
{
	func_75("polyh@door1", true);
}


