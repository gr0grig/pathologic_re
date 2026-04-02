maintask task_0
{
	void init(object var_0_object, int var_1_int)
	{
		@SetVariable("d4q03", 1);
		func_239("warehouse_gangster@door1", false);
		func_239("iwarehouse_gangster@door1", true);
		object var_20_object;
		func_209(var_20_object);
		object var_23_object;
		func_215(var_23_object, "warehouse_gangster");
		object var_4_object;
		var_23_object = var_4_object;
		int var_5_int = 0;
	
		while(var_5_int < 7) {
			object var_29_object; object var_30_object;
			var_4_object = var_30_object;
			func_221(var_29_object, var_30_object, ("pt_gangster" + (var_5_int + 1)), "pers_grabitel", "d4q03_grabitel.xml");
			var_20_object->add(var_29_object); //@t
			var_5_int += 1;
		}
	
		func_179(4);
	}
	EMIT "Stack[-2] = 0";

	void OnTrigger(object var_0_object, int var_1_int, string var_2_string)
	{
		int var_7_int; int var_8_int; object var_9_object; bool var_10_bool;
		@Trace(var_2_string);
		if(var_2_string == "scene_load")
			@PlaySound("door");
		if(var_2_string == "gang_attack") {
			if((var_1_int + 1) >= 3)
				func_256(var_0_object, "attack");
		} else {
				if(var_2_string == "death") {
					var_0_object->size(var_7_int); //@t
					var_8_int = 0;

				Label_78:
					if(var_8_int < var_7_int) {
						var_0_object->get(var_9_object, var_8_int); //@t
						var_9_object->IsDead(var_10_bool);
						if(!var_10_bool) { //@nz
						} else {
						var_9_object = null;
						var_8_int += 1;
						goto Label_78;
				}
					if(!(var_2_string == "completed")) goto Label_114;
					func_134();
					}
				}
				if(var_8_int == var_7_int) {
					@SetVariable("d4q03_alldead", 1);
					func_239("iwarehouse_gangster@door1", false);
					func_239("warehouse_gangster@door1", true);
				}
		}
	Label_114:
		for(;;) {

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, int var_2_int, float var_3_float)
	{
		func_115();
	}

}


void func_256(object var_57_object, string var_58_string)
{
	int var_62_int; int var_63_int; object var_64_object;
	if(var_57_object != 0) {
		var_57_object->size(var_62_int);
		var_63_int = 0;

		for(;;) {
			if(!(var_63_int < var_62_int)) goto Label_274;
			var_57_object->get(var_64_object, var_63_int);
			if(var_64_object != 0)
				@Trigger(var_64_object, var_58_string);
			var_64_object = null;
			var_63_int += 1;
		}
	}
Label_274:
}


void func_134(void)
{
	int var_54_int;
	@GetVariable("d4q03", var_54_int);
	bool var_56_bool = false;
	if(var_54_int != 1000) {
		if(var_54_int != -1)
			var_56_bool = true;
	}
	if(var_56_bool != 0) {
		@SetVariable("d4q03", 1000);
		func_156(var_54_int);
	}
}


void func_203(object var_73_object)
{
	object var_75_object;
	@self(var_75_object);
	var_75_object = var_73_object;
}
EMIT "Stack[-1] = 0";


void func_239(string var_8_string, bool var_9_bool)
{
	object var_11_object;
	@FindActor(var_11_object, var_8_string);
	if(!var_11_object) //@nz
		@Trace(("Door " + var_8_string) + " not found");
	else
		var_11_object->SetProperty("locked", var_9_bool);
	
}
EMIT "Stack[-1] = 0";


void func_209(object var_20_object)
{
	object var_22_object;
	@CreateObjectVector(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_179(int var_51_int)
{
	float var_53_float;
	@GetGameTime(var_53_float);
	if(var_53_float >= (var_51_int * 24)) {
		func_156(var_53_float);
	} else {
		@SetTimeEvent(0, (var_51_int * 24));
		@Hold();
	}
	
}


void func_115(void)
{
	int var_5_int;
	@GetVariable("d4q03", var_5_int);
	if(var_5_int != 1000)
		func_126();
}


void func_215(object var_23_object, string var_24_string)
{
	object var_26_object;
	@GetSceneByName(var_26_object, var_24_string);
	var_26_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_156(object var_0_object)
{
	func_256(var_0_object, "cleanup");
	var_0_object = null;
	func_239("iwarehouse_gangster@door1", false);
	func_239("warehouse_gangster@door1", true);
	object var_73_object;
	func_203(var_73_object);
	@RemoveActor(var_73_object);
}


void func_221(object var_29_object, object var_30_object, string var_31_string, string var_32_string, string var_33_string)
{
	bool var_41_bool; cvector var_42_cvector; cvector var_43_cvector;
	var_30_object->GetLocator(var_31_string, var_41_bool, var_42_cvector, var_43_cvector);
	if(!var_41_bool) //@nz
		@Trace(("Locator " + var_31_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_32_string, var_30_object, var_42_cvector, var_43_cvector, var_33_string);
	object var_44_object = var_29_object;
	
}
EMIT "Stack[-1] = 0";


void func_126(void)
{
	@SetVariable("d4q03", -1);
	func_156(var_5_int);
}


