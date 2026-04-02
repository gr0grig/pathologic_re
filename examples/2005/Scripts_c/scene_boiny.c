maintask task_0
{
	void init(object var_0_object)
	{
		object var_1_object;
		func_108(var_1_object);
		var_0_object = var_1_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object)
	{
		int var_11_int; bool var_12_bool; object var_13_object; int var_14_int; int var_15_int; int var_16_int; int var_17_int; int var_18_int; int var_19_int; int var_20_int;
		var_11_int = 0;
	
		for(;;) {
			@GetLocator(("pt_spawn" + (var_11_int + 1)), var_12_bool);
			if(!var_12_bool) { //@nz
				break;
			Label_29:
				@CreateIntVector(var_13_object);
				var_14_int = 1;

				while(var_14_int <= var_11_int) {
					var_13_object->add(var_14_int);
					var_14_int += 1;
				}

				var_15_int = 0;

				while(var_15_int < 12) {
					@irand(var_16_int, var_11_int);
					var_13_object->get(var_17_int, var_16_int);
					var_13_object->remove(var_16_int);
					var_11_int += -1;
					object var_34_object; object var_35_object;
					object var_39_object;
					func_102(var_39_object);
					var_39_object = var_35_object;
					func_114(var_34_object, var_35_object, ("pt_spawn" + var_17_int), "pers_butcher", "boiny_butcher.xml");
					var_0_object->add(var_34_object); //@t
					var_15_int += 1;
				}

				var_18_int = 0;

				while(var_18_int < 6) {
					@irand(var_19_int, var_11_int);
					var_13_object->get(var_20_int, var_19_int);
					var_13_object->remove(var_19_int);
					var_11_int += -1;
					object var_60_object; object var_61_object;
					object var_65_object;
					func_102(var_65_object);
					var_65_object = var_61_object;
					func_114(var_60_object, var_61_object, ("pt_spawn" + var_20_int), "pers_morlok", "boiny_morlok.xml");
					var_0_object->add(var_60_object); //@t
					var_18_int += 1;
				}

			}
			var_11_int += 1;
		}
		if(!(var_11_int < 18)) goto Label_29;
		@Trace("Not enough spawn points");
	}
	EMIT "Stack[-8] = 0";

	void OnUnload(object var_0_object)
	{
		func_132(var_0_object);
	}

}


void func_132(object var_1_object)
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


void func_114(object var_34_object, object var_35_object, string var_36_string, string var_37_string, string var_38_string)
{
	bool var_47_bool; cvector var_48_cvector; cvector var_49_cvector;
	var_35_object->GetLocator(var_36_string, var_47_bool, var_48_cvector, var_49_cvector);
	if(!var_47_bool) //@nz
		@Trace(("Locator " + var_36_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_37_string, var_35_object, var_48_cvector, var_49_cvector, var_38_string);
	object var_50_object = var_34_object;
	
}
EMIT "Stack[-1] = 0";


void func_108(object var_1_object)
{
	object var_3_object;
	@CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


void func_102(object var_39_object)
{
	object var_41_object;
	@self(var_41_object);
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


