// @GLOBALS: 0:object:

maintask task_0
{
	void init(void)
	{
		object var_1_object;
		@GetSceneByName(var_1_object, "cot_eva");
		@Trigger(var_1_object, "nodanko");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(string name)
	{
		int var_2_int;
		@Trace(name);
		if(name == "cleanup") {
			@GetVariable("k3q01", var_2_int);
			if(var_2_int != 1000)
				func_46();
			else
				func_62();
				if(name == "fail")
					func_46();
				} else if(name == "completed") {
			func_54();
				}
	
	}

}


void func_46(void)
{
	@SetVariable("k3q01", -1);
	func_62();
}


void func_62(void)
{
	object var_11_object;
	@GetSceneByName(var_11_object, "cot_eva");
	@Trigger(var_11_object, "danko");
	object var_14_object;
	func_77(var_14_object);
	@RemoveActor(var_14_object);
}
EMIT "Stack[-1] = 0";


void func_77(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_54(void)
{
	@SetVariable("k3q01", 1000);
	func_62();
}


