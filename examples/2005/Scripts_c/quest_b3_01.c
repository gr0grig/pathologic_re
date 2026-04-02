maintask task_0
{
	void init(object var_0_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_4_object; int var_5_int;
		@Trace(var_1_string);
		if(var_1_string == "place_butcher") {
			@GetSceneByName(var_4_object, "house5_07");
			object var_9_object; object var_10_object;
			var_4_object = var_10_object;
			func_88(var_9_object, var_10_object, "pt_b3q01_butcher", "pers_butcher", "b3q01_butcher.xml");
			var_0_object = var_9_object;
			var_4_object = null;
		} else {
				if(var_1_string == "cleanup") {
					@GetVariable("b3q01", var_5_int);
					if(var_5_int != 1000)
						func_54();
					else
						func_70(var_5_int);
				if(var_1_string == "fail") {
					func_54();
				} else if(var_1_string == "completed") {
					func_62();
				}
				}
		}
	
	}

}


void func_70(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_36_object;
	func_82(var_36_object);
	@RemoveActor(var_36_object);
}


void func_82(object var_36_object)
{
	object var_38_object;
	@self(var_38_object);
	var_38_object = var_36_object;
}
EMIT "Stack[-1] = 0";


void func_54(void)
{
	@SetVariable("b3q01", -1);
	func_70(var_5_int);
}


void func_88(object var_9_object, object var_10_object, string var_11_string, string var_12_string, string var_13_string)
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


void func_62(void)
{
	@SetVariable("b3q01", 1000);
	func_70(var_5_int);
}


