maintask task_0
{
	void init(object var_0_object, int var_1_int)
	{
		var_1_int = 3;
		@CreateObjectVector(var_0_object);
		func_159("theater@door1", false);
		func_111(8);
	}

	void OnTrigger(object var_0_object, int var_1_int, string var_2_string)
	{
		object var_5_object; int var_6_int;
		@Trace(var_2_string);
		if(var_2_string == "termitnik_load") {
			var_0_object->clear(); //@t
			@GetSceneByName(var_5_object, "termitnik");
			var_6_int = 0;

			while(var_6_int < var_1_int) {
				object var_11_object; object var_12_object;
				var_5_object = var_12_object;
				func_141(var_11_object, var_12_object, ("pt_d8q04_morlok" + (var_6_int + 1)), "pers_morlok", "d8q04_morlok.xml");
				var_0_object->add(var_11_object); //@t
				var_6_int += 1;
			}

			var_5_object = null;
		} else if(var_2_string == "death") {
				var_1_int += -1;
		}

	
		if(var_2_string == "attack") {
			func_176(var_0_object, "attack");
		} else if(var_2_string == "fail") {
			func_87();
		} else if(var_2_string == "completed") {
			func_95();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, int var_2_int, float var_3_float)
	{
		func_73();
	}

}


void func_135(object var_18_object)
{
	object var_20_object;
	@self(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_104(void)
{
	object var_18_object;
	func_135(var_18_object);
	@RemoveActor(var_18_object);
}


void func_73(void)
{
	int var_5_int;
	@GetVariable("d8q04", var_5_int);
	if(var_5_int != 1000)
		func_87();
	func_104();
}


void func_103(void)
{
}


void func_141(object var_11_object, object var_12_object, string var_13_string, string var_14_string, string var_15_string)
{
	bool var_23_bool; cvector var_24_cvector; cvector var_25_cvector;
	var_12_object->GetLocator(var_13_string, var_23_bool, var_24_cvector, var_25_cvector);
	if(!var_23_bool) //@nz
		@Trace(("Locator " + var_13_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_14_string, var_12_object, var_24_cvector, var_25_cvector, var_15_string);
	object var_26_object = var_11_object;
	
}
EMIT "Stack[-1] = 0";


void func_111(int var_12_int)
{
	float var_14_float;
	@GetGameTime(var_14_float);
	if(var_14_float >= (var_12_int * 24)) {
		func_104();
	} else {
		@SetTimeEvent(0, (var_12_int * 24));
		@Hold();
	}
	
}


void func_176(object var_38_object, string var_39_string)
{
	int var_43_int; int var_44_int; object var_45_object;
	if(var_38_object != 0) {
		var_38_object->size(var_43_int);
		var_44_int = 0;

		for(;;) {
			if(!(var_44_int < var_43_int)) goto Label_194;
			var_38_object->get(var_45_object, var_44_int);
			if(var_45_object != 0)
				@Trigger(var_45_object, var_39_string);
			var_45_object = null;
			var_44_int += 1;
		}
	}
Label_194:
}


void func_87(void)
{
	@SetVariable("d8q04", -1);
	func_103();
}


void func_95(void)
{
	@SetVariable("d8q04", 1000);
	func_103();
}


void func_159(string var_2_string, bool var_3_bool)
{
	object var_5_object;
	@FindActor(var_5_object, var_2_string);
	if(!var_5_object) //@nz
		@Trace(("Door " + var_2_string) + " not found");
	else
		var_5_object->SetProperty("locked", var_3_bool);
	
}
EMIT "Stack[-1] = 0";


