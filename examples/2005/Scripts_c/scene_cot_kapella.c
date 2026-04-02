maintask task_0
{
	// @pe
	void init(object var_0_object, object var_1_object)
	{
		func_6(var_0_object, var_1_object);
	}

	// @pe
	void OnLoad(object var_0_object, object var_1_object)
	{
		func_14(var_1_object);
		func_38(var_1_object);
	}

	// @pe
	void OnUnload(object var_0_object, object var_1_object)
	{
		func_43(var_1_object);
		func_50(var_1_object);
	}

}


// @pe
void func_4(void)
{
}


void func_38(object var_1_object)
{
	object var_21_object = var_1_object;
	func_4();
}


void func_71(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_6(object var_0_object, object var_1_object)
{
	@CreateObjectVector(var_0_object);
	@CreateObjectVector(var_1_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_43(object var_0_object)
{
	func_77(var_0_object);
	var_0_object->clear(); //@t
}


void func_77(object var_2_object)
{
	int var_6_int; int var_7_int; object var_8_object;
	if(var_2_object != 0) {
		var_2_object->size(var_6_int);
		var_7_int = 0;

		while(var_7_int < var_6_int) {
			var_2_object->get(var_8_object, var_7_int);
			if(var_8_object != 0)
				@RemoveActor(var_8_object);
			var_8_object = null;
			var_7_int += 1;
		}

		var_2_object->clear();
	}
}


void func_14(object var_0_object)
{
	int var_7_int; bool var_9_bool; cvector var_10_cvector; object var_11_object;
	var_7_int = 1;
	
	for(;;) {
		@GetLocator(("pt_fireplace" + var_7_int), var_9_bool, var_10_cvector);
		if(!var_9_bool) //@nz
			break;
		object var_15_object;
		func_71(var_15_object);
		@AddActorByType(var_11_object, "scripted", var_15_object, var_10_cvector, [0.0, 0.0, 1.0], "fireplace.xml");
		var_0_object->add(var_11_object); //@t
		var_11_object = null;
		var_7_int += 1;
	}
}


void func_50(object var_1_object)
{
	func_77(var_1_object);
	var_1_object->clear(); //@t
}


