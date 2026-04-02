maintask task_0
{
	void init(object var_0_object)
	{
		@CreateObjectVector(var_0_object);
		func_128(9);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "init_soldiers") {
			@GetMainOutdoorScene(var_3_object);
			object var_6_object; object var_7_object;
			var_3_object = var_7_object;
			func_158(var_6_object, var_7_object, "pt_d9q02_enemy1", "pers_soldat_hand", "d9q02_e_soldat.xml");
			var_0_object->add(var_6_object); //@t
			object var_24_object; object var_25_object;
			var_3_object = var_25_object;
			func_158(var_24_object, var_25_object, "pt_d9q02_enemy2", "pers_soldat_hand", "d9q02_e_soldat.xml");
			var_0_object->add(var_24_object); //@t
			object var_29_object; object var_30_object;
			var_3_object = var_30_object;
			func_158(var_29_object, var_30_object, "pt_d9q02_enemy3", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
			var_0_object->add(var_29_object); //@t
			object var_34_object; object var_35_object;
			var_3_object = var_35_object;
			func_158(var_34_object, var_35_object, "pt_d9q02_enemy4", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
			var_0_object->add(var_34_object); //@t
			object var_39_object; object var_40_object;
			var_3_object = var_40_object;
			func_158(var_39_object, var_40_object, "pt_d9q02_enemy5", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
			var_0_object->add(var_39_object); //@t
			object var_44_object; object var_45_object;
			var_3_object = var_45_object;
			func_158(var_44_object, var_45_object, "pt_d9q02_enemy6", "pers_soldat_hand", "d9q02_e_soldat_rifle.xml");
			var_0_object->add(var_44_object); //@t
			var_3_object = null;
		} else if(var_1_string == "fail") {
				func_99();
		}
	Label_84:
		for(;;) {

		}
	
		if(!(var_1_string == "completed")) goto Label_84;
		func_107();
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_85();
	}

}


void func_128(int var_1_int)
{
	float var_3_float;
	@GetGameTime(var_3_float);
	if(var_3_float >= (var_1_int * 24)) {
		func_116(var_3_float);
	} else {
		@SetTimeEvent(0, (var_1_int * 24));
		@Hold();
	}
	
}


void func_99(void)
{
	@SetVariable("d9q02", -1);
	func_115();
}


void func_107(void)
{
	@SetVariable("d9q02", 1000);
	func_115();
}


void func_176(object var_7_object, string var_8_string)
{
	int var_12_int; int var_13_int; object var_14_object;
	if(var_7_object != 0) {
		var_7_object->size(var_12_int);
		var_13_int = 0;

		for(;;) {
			if(!(var_13_int < var_12_int)) goto Label_194;
			var_7_object->get(var_14_object, var_13_int);
			if(var_14_object != 0)
				@Trigger(var_14_object, var_8_string);
			var_14_object = null;
			var_13_int += 1;
		}
	}
Label_194:
}


void func_115(void)
{
}


void func_116(object var_0_object)
{
	func_176(var_0_object, "cleanup");
	object var_19_object;
	func_152(var_19_object);
	@RemoveActor(var_19_object);
}


void func_85(void)
{
	int var_4_int;
	@GetVariable("d9q02", var_4_int);
	if(var_4_int != 1000)
		func_99();
	func_116(var_4_int);
}


void func_152(object var_19_object)
{
	object var_21_object;
	@self(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_158(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
{
	bool var_15_bool; cvector var_16_cvector; cvector var_17_cvector;
	var_7_object->GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	if(!var_15_bool) //@nz
		@Trace(("Locator " + var_8_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_9_string, var_7_object, var_16_cvector, var_17_cvector, var_10_string);
	object var_18_object = var_6_object;
	
}
EMIT "Stack[-1] = 0";


