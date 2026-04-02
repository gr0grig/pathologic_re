maintask task_0
{
	// @pe
	void init(object var_0_object)
	{
		func_26(var_0_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object)
	{
		func_36(var_0_object, "pt_rat");
		@sync();
	}

	// @pe
	void OnUnload(object var_0_object)
	{
		func_31(var_0_object);
		@sync();
	}

}


void func_36(object var_0_object, string var_1_string)
{
	int var_6_int; bool var_7_bool; cvector var_8_cvector; cvector var_9_cvector;
	func_31(var_9_cvector);
	
	for(;;) {
		@GetLocator((var_1_string + 1), var_7_bool, var_8_cvector, var_9_cvector);
		if(!var_7_bool) //@nz
			break;
		object var_23_object; int var_24_int; cvector var_25_cvector; cvector var_26_cvector;
		var_6_int = var_24_int;
		var_8_cvector = var_25_cvector;
		var_9_cvector = var_26_cvector;
		func_59(var_23_object, var_24_int, var_25_cvector, var_26_cvector);
		var_0_object->add(var_23_object); //@t
		var_6_int += 1;
	}
}


void func_76(object var_31_object)
{
	object var_33_object;
	@self(var_33_object);
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_82(object var_1_object)
{
	object var_3_object;
	@CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_20(string var_29_string)
{
	var_29_string = "pers_rat";
}


// @pe
void func_23(string var_34_string)
{
	var_34_string = "rat_indoor.xml";
}


void func_88(object var_1_object)
{
	int var_5_int; int var_6_int; object var_7_object;
	if(var_1_object != 0) {
		var_1_object->size(var_5_int);
		var_6_int = 0;

		while(var_6_int < var_5_int) {
			var_1_object->get(var_7_object, var_6_int);
			if(var_7_object != 0)
				@RemoveActor(var_7_object);
			var_7_object = null;
			var_6_int += 1;
		}

		var_1_object->clear();
	}
}


void func_26(object var_0_object)
{
	object var_1_object;
	func_82(var_1_object);
	var_0_object = var_1_object;
}


void func_59(object var_23_object, int var_24_int, cvector var_25_cvector, cvector var_26_cvector)
{
	int var_30_int;
	var_24_int = var_30_int;
	func_20(var_30_int);
	object var_31_object;
	func_76(var_31_object);
	string var_34_string; int var_35_int;
	var_24_int = var_35_int;
	func_23(var_35_int);
	object var_28_object;
	string var_29_string;
	@AddActor(var_28_object, var_29_string, var_31_object, var_25_cvector, var_26_cvector, var_34_string);
	var_28_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_31(object var_0_object)
{
	func_88(var_0_object);
}


