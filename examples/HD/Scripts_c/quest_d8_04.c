maintask task_0
{
	void init(object var_0_object, int var_1_int)
	{
		var_1_int = 3;
		@CreateObjectVector(var_0_object);
		func_167("theater@door1", false);
		func_119(8);
	}

	void OnTrigger(object var_0_object, int var_1_int, string var_2_string)
	{
		object var_5_object; int var_6_int;
		@Trace(var_2_string);
		if(var_2_string == "termitnik_load") {
			func_184(var_0_object);
			var_0_object->clear(); //@t
			@GetSceneByName(var_5_object, "termitnik");
			var_6_int = 0;

			while(var_6_int < var_1_int) {
				object var_22_object; object var_23_object;
				var_5_object = var_23_object;
				func_149(var_22_object, var_23_object, ("pt_d8q04_morlok" + (var_6_int + 1)), "pers_morlok", "d8q04_morlok.xml");
				var_0_object->add(var_22_object); //@t
				var_6_int += 1;
			}

			var_5_object = null;
		} else if(var_2_string == "death") {
				var_1_int += -1;
		}

	
		if(var_2_string == "attack") {
			func_205(var_0_object, "attack");
		} else if(var_2_string == "fail") {
			func_91();
		} else if(var_2_string == "completed") {
			func_99();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, int var_2_int, float var_3_float)
	{
		func_77();
	}

}


void func_99(void)
{
	@SetVariable("d8q04", 1000);
	func_107();
}


void func_167(string var_2_string, bool var_3_bool)
{
	object var_5_object;
	@FindActor(var_5_object, var_2_string);
	if(!var_5_object) //@nz
		@Trace(("Door " + var_2_string) + " not found");
	else
		var_5_object->SetProperty("locked", var_3_bool);
	
}
EMIT "Stack[-1] = 0";


void func_107(void)
{
}


void func_108(object var_0_object)
{
	func_184(var_0_object);
	object var_29_object;
	func_143(var_29_object);
	@RemoveActor(var_29_object);
}


void func_205(object var_49_object, string var_50_string)
{
	int var_54_int; int var_55_int; object var_56_object;
	if(var_49_object != 0) {
		var_49_object->size(var_54_int);
		var_55_int = 0;

		for(;;) {
			if(!(var_55_int < var_54_int)) goto Label_223;
			var_49_object->get(var_56_object, var_55_int);
			if(var_56_object != 0)
				@Trigger(var_56_object, var_50_string);
			var_56_object = null;
			var_55_int += 1;
		}
	}
Label_223:
}


void func_77(void)
{
	int var_5_int;
	@GetVariable("d8q04", var_5_int);
	if(var_5_int != 1000)
		func_91();
	func_108(var_5_int);
}


void func_143(object var_29_object)
{
	object var_31_object;
	@self(var_31_object);
	var_31_object = var_29_object;
}
EMIT "Stack[-1] = 0";


void func_149(object var_22_object, object var_23_object, string var_24_string, string var_25_string, string var_26_string)
{
	bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	var_23_object->GetLocator(var_24_string, var_34_bool, var_35_cvector, var_36_cvector);
	if(!var_34_bool) //@nz
		@Trace(("Locator " + var_24_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_25_string, var_23_object, var_35_cvector, var_36_cvector, var_26_string);
	object var_37_object = var_22_object;
	
}
EMIT "Stack[-1] = 0";


void func_119(int var_12_int)
{
	float var_14_float;
	@GetGameTime(var_14_float);
	if(var_14_float >= (var_12_int * 24)) {
		func_108(var_14_float);
	} else {
		@SetTimeEvent(0, (var_12_int * 24));
		@Hold();
	}
	
}


void func_184(object var_18_object)
{
	int var_22_int; int var_23_int; object var_24_object;
	if(var_18_object != 0) {
		var_18_object->size(var_22_int);
		var_23_int = 0;

		while(var_23_int < var_22_int) {
			var_18_object->get(var_24_object, var_23_int);
			if(var_24_object != 0)
				@RemoveActor(var_24_object);
			var_24_object = null;
			var_23_int += 1;
		}

		var_18_object->clear();
	}
}


void func_91(void)
{
	@SetVariable("d8q04", -1);
	func_107();
}


