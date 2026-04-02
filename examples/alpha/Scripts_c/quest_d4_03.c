maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d4q03", 1);
		func_240("warehouse_gangster@door1", false);
		func_240("iwarehouse_gangster@door1", true);
		object var_19_object;
		func_210(var_19_object);
		object var_22_object;
		func_216(var_22_object, "warehouse_gangster");
		object var_3_object;
		var_22_object = var_3_object;
		int var_4_int = 0;
	
		while(var_4_int < 7) {
			object var_28_object; object var_29_object;
			var_3_object = var_29_object;
			func_222(var_28_object, var_29_object, ("pt_gangster" + (var_4_int + 1)), "pers_grabitel", "d4q03_grabitel.xml");
			var_19_object->add(var_28_object); //@t
			var_4_int += 1;
		}
	
		func_180(4);
	}
	EMIT "Stack[-2] = 0";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		int var_6_int; int var_7_int; object var_8_object; bool var_9_bool;
		@Trace(var_1_string);
		if(var_1_string == "scene_load") {
			func_256(var_0_object, "attack");
			@PlaySound("door");
		}
		if(var_1_string == "gang_attack") {
			func_256(var_0_object, "attack");
		} else {
				if(var_1_string == "death") {
					var_0_object->size(var_6_int); //@t
					var_7_int = 0;

				Label_78:
					if(var_7_int < var_6_int) {
						var_0_object->get(var_8_object, var_7_int); //@t
						var_8_object->IsDead(var_9_bool);
						if(!var_9_bool) { //@nz
						} else {
						var_8_object = null;
						var_7_int += 1;
						goto Label_78;
				}
					if(!(var_1_string == "completed")) goto Label_114;
					func_134();
					}
				}
				if(var_7_int == var_6_int) {
					@SetVariable("d4q03_alldead", 1);
					func_240("iwarehouse_gangster@door1", false);
					func_240("warehouse_gangster@door1", true);
				}
		}
	Label_114:
		for(;;) {

		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_115();
	}

}


void func_256(object var_56_object, string var_57_string)
{
	int var_61_int; object var_63_object;
	var_56_object->size(var_61_int);
	int var_62_int = 0;
	
	while(var_62_int < var_61_int) {
		var_56_object->get(var_63_object, var_62_int);
		if(var_63_object != 0)
			@Trigger(var_63_object, var_57_string);
		var_63_object = null;
		var_62_int += 1;
	}
	
}


void func_134(void)
{
	int var_51_int;
	@GetVariable("d4q03", var_51_int);
	bool var_53_bool = false;
	if(var_51_int != 1000) {
		if(var_51_int != -1)
			var_53_bool = true;
	}
	if(var_53_bool != 0) {
		@SetVariable("d4q03", 1000);
		func_156(var_51_int);
	}
}


void func_204(object var_71_object)
{
	object var_73_object;
	@self(var_73_object);
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


void func_240(string var_7_string, bool var_8_bool)
{
	object var_10_object;
	@FindActor(var_10_object, var_7_string);
	if(!var_10_object) //@nz
		@Trace(("Door " + var_7_string) + " not found");
	var_10_object->SetProperty("locked", var_8_bool);
}
EMIT "Stack[-1] = 0";


void func_210(object var_19_object)
{
	object var_21_object;
	@CreateObjectVector(var_21_object);
	var_21_object = var_19_object;
}
EMIT "Stack[-1] = 0";


void func_115(void)
{
	int var_4_int;
	@GetVariable("d4q03", var_4_int);
	if(var_4_int != 1000)
		func_126();
}


void func_180(int var_50_int)
{
	float var_52_float;
	@GetGameTime(var_52_float);
	if(var_52_float >= (var_50_int * 24)) {
		func_156(var_52_float);
	} else {
		@SetTimeEvent(0, (var_50_int * 24));
		@Hold();
	}
	
}


void func_216(object var_22_object, string var_23_string)
{
	object var_25_object;
	@GetSceneByName(var_25_object, var_23_string);
	var_25_object = var_22_object;
}
EMIT "Stack[-1] = 0";


void func_126(void)
{
	@SetVariable("d4q03", -1);
	func_156(var_4_int);
}


void func_156(object var_0_object)
{
	func_256(var_0_object, "cleanup");
	func_240("iwarehouse_gangster@door1", false);
	func_240("warehouse_gangster@door1", true);
	var_0_object->clear(); //@t
	object var_71_object;
	func_204(var_71_object);
	@RemoveActor(var_71_object);
}


void func_222(object var_28_object, object var_29_object, string var_30_string, string var_31_string, string var_32_string)
{
	bool var_40_bool; cvector var_41_cvector; cvector var_42_cvector;
	var_29_object->GetLocator(var_30_string, var_40_bool, var_41_cvector, var_42_cvector);
	if(!var_40_bool) //@nz
		@Trace(("Locator " + var_30_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_31_string, var_29_object, var_41_cvector, var_42_cvector, var_32_string);
	object var_43_object = var_28_object;
	
}
EMIT "Stack[-1] = 0";


