// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		object var_3_object;
		func_162(var_3_object);
		var_0_object = var_3_object;
		object var_2_object;
		@GetMainOutdoorScene(var_2_object);
		object var_6_object; object var_7_object;
		var_2_object = var_7_object;
		func_168(var_6_object, var_7_object, "pt_b11q02_doberman1", "pers_doberman", "b11q02_doberman.xml");
		var_0_object->add(var_6_object); //@t
		object var_24_object; object var_25_object;
		var_2_object = var_25_object;
		func_168(var_24_object, var_25_object, "pt_b11q02_doberman2", "pers_doberman", "b11q02_doberman.xml");
		var_0_object->add(var_24_object); //@t
		object var_29_object; object var_30_object;
		var_2_object = var_30_object;
		func_168(var_29_object, var_30_object, "pt_b11q02_doberman3", "pers_doberman", "b11q02_doberman.xml");
		var_0_object->add(var_29_object); //@t
		func_125(11);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "teleport") {
			object var_4_object;
			object var_7_object;
			func_149(var_7_object);
			var_7_object = var_4_object;
			func_186(var_4_object, "mnogogrannik_han", "pt_b11q02_teleport");
		} else if(var_1_string == "fail") {
				func_84();
		}
	Label_69:
		for(;;) {

		}
	
		if(!(var_1_string == "completed")) goto Label_69;
		func_92();
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_70();
	}

}


void func_162(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_70(void)
{
	int var_4_int;
	@GetVariable("b11q02", var_4_int);
	if(var_4_int != 1000)
		func_84();
	func_114(var_4_int);
}


void func_168(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
{
	bool var_15_bool; cvector var_16_cvector; cvector var_17_cvector;
	var_7_object->GetLocator(var_8_string, var_15_bool, var_16_cvector, var_17_cvector);
	if(!var_15_bool) //@nz
		@Trace(("Locator " + var_8_string) + " doesn't exist");
	else
		var_7_object->AddStationaryActor(Obj(), var_16_cvector, var_17_cvector, var_9_string, var_10_string);
	object var_18_object = var_6_object;
	
}
EMIT "Stack[-1] = 0";


void func_156(object var_51_object)
{
	object var_53_object;
	@self(var_53_object);
	var_53_object = var_51_object;
}
EMIT "Stack[-1] = 0";


void func_114(object var_0_object)
{
	func_210(var_0_object);
	object var_51_object;
	func_156(var_51_object);
	@RemoveActor(var_51_object);
}


void func_210(object var_40_object)
{
	int var_44_int; int var_45_int; object var_46_object;
	if(var_40_object != 0) {
		var_40_object->size(var_44_int);
		var_45_int = 0;

		while(var_45_int < var_44_int) {
			var_40_object->get(var_46_object, var_45_int);
			if(var_46_object != 0)
				var_46_object->Remove();
			var_46_object = null;
			var_45_int += 1;
		}

		var_40_object->clear();
	}
}


void func_84(void)
{
	@SetVariable("b11q02", -1);
	func_114(var_4_int);
}


void func_149(object var_7_object)
{
	object var_9_object;
	@FindActor(var_9_object, "player");
	var_9_object = var_7_object;
}
EMIT "Stack[-1] = 0";


void func_186(object var_4_object, string var_5_string, string var_6_string)
{
	if(!var_4_object) { //@nz
	}
	object var_15_object;
	@GetSceneByName(var_15_object, var_5_string);
	bool var_16_bool;
	cvector var_17_cvector;
	cvector var_18_cvector;
	var_15_object->GetLocator(var_6_string, var_16_bool, var_17_cvector, var_18_cvector);
	if(!var_16_bool) //@nz
		@Trace(((("Teleport location '" + var_6_string) + "' not found in scene '") + var_5_string) + "'");
	else
		@Teleport(var_4_object, var_15_object, var_17_cvector, var_18_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_92(void)
{
	@SetVariable("b11q02", 1000);
	object var_49_object;
	@GetSceneByName(var_49_object, "cot_kapella");
	@Trigger(var_49_object, "han");
	@GetSceneByName(var_49_object, "mnogogrannik_han");
	@Trigger(var_49_object, "nohan");
	func_114(var_49_object);
}
EMIT "Stack[-1] = 0";


void func_125(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	if(var_36_float >= (var_34_int * 24)) {
		func_114(var_36_float);
	} else {
		@SetTimeEvent(0, (var_34_int * 24));
		@Hold();
	}
	
}


