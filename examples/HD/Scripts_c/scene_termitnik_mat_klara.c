maintask task_0
{
	void init(object var_0_object)
	{
		object var_1_object;
		func_80(var_1_object);
		var_0_object = var_1_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object)
	{
		int var_8_int; bool var_9_bool; object var_10_object; int var_11_int; int var_12_int; int var_13_int; int var_14_int;
		var_8_int = 0;
	
		for(;;) {
			@GetLocator(("pt_spawn" + (var_8_int + 1)), var_9_bool);
			if(!var_9_bool) { //@nz
			} else {
				var_8_int += 1;
			}
			if(var_8_int < 2) {
				@Trace("Not enough spawn points");
				break;
			}
			@CreateIntVector(var_10_object);
			var_11_int = 1;

			while(var_11_int <= var_8_int) {
				var_10_object->add(var_11_int);
				var_11_int += 1;
			}

			var_12_int = 0;

			while(var_12_int < 2) {
				@irand(var_13_int, var_8_int);
				var_10_object->get(var_14_int, var_13_int);
				var_10_object->remove(var_13_int);
				var_8_int += -1;
				object var_28_object; object var_29_object;
				object var_33_object;
				func_74(var_33_object);
				var_33_object = var_29_object;
				func_86(var_28_object, var_29_object, ("pt_spawn" + var_14_int), "pers_butcher", "termitnik_butcher.xml");
				var_0_object->add(var_28_object); //@t
				var_12_int += 1;
			}

			var_10_object = null;

		}
	}

	void OnUnload(object var_0_object)
	{
		func_104(var_0_object);
	}

}


void func_80(object var_1_object)
{
	object var_3_object;
	@CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


void func_74(object var_33_object)
{
	object var_35_object;
	@self(var_35_object);
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_104(object var_1_object)
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


void func_86(object var_28_object, object var_29_object, string var_30_string, string var_31_string, string var_32_string)
{
	bool var_41_bool; cvector var_42_cvector; cvector var_43_cvector;
	var_29_object->GetLocator(var_30_string, var_41_bool, var_42_cvector, var_43_cvector);
	if(!var_41_bool) //@nz
		@Trace(("Locator " + var_30_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_31_string, var_29_object, var_42_cvector, var_43_cvector, var_32_string);
	object var_44_object = var_28_object;
	
}
EMIT "Stack[-1] = 0";


