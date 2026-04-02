maintask task_0
{
	void init(object var_0_object)
	{
		object var_1_object;
		func_112(var_1_object);
		func_11(var_1_object);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(object actor, object var_1_object)
	{
		int var_9_int; int var_10_int; object var_11_object; object var_12_object; float var_13_float;
		if(!actor) { //@nz
		}
		bool var_8_bool;
		@IsPlayerActor(var_1_object, var_8_bool);
		if(var_8_bool != 0) {
			disable OnIntersection;
			actor->size(var_9_int); //@t
			var_10_int = 0;

			while(var_10_int < var_9_int) {
				actor->get(var_11_object, var_10_int); //@t
				var_11_object->GetActor(var_12_object);
				if(var_12_object != 0) {
					@rand(var_13_float, 0.35);
					@Sleep(var_13_float);
					@SimulateAttack(var_12_object, var_1_object);
				}
				var_12_object = null;
				var_11_object = null;
				var_10_int += 1;
			}

			enable OnIntersection;
		}
	}

}


void func_112(object var_1_object)
{
	object var_3_object;
	@CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


void func_11(object var_0_object)
{
	object var_9_object;
	@GetMainOutdoorScene(var_9_object);
	int var_10_int = 1;
	
	while(var_10_int <= 5) {
		object var_16_object; object var_17_object;
		var_9_object = var_17_object;
		func_118(var_16_object, var_17_object, ("pt_gun_soldier" + var_10_int), "pers_soldat", "gun_sentry.xml");
		var_0_object->add(var_16_object); //@t
		var_10_int += 1;
	}
	
	int var_11_int = 1;
	
	while(var_11_int <= 2) {
		object var_38_object; object var_39_object;
		var_9_object = var_39_object;
		func_118(var_38_object, var_39_object, ("pt_gun_sanitar" + var_11_int), "pers_sanitar", "d9q01_sanitar.xml");
		var_11_int += 1;
	}
	
	int var_12_int = 1;
	
	while(var_12_int <= 3) {
		object var_47_object; object var_48_object;
		var_9_object = var_48_object;
		func_118(var_47_object, var_48_object, ("pt_gun_guard_soldier" + var_12_int), "pers_soldat", "soldier.xml");
		var_12_int += 1;
	}
	
	int var_13_int = 1;
	
	while(var_13_int <= 2) {
		object var_56_object; object var_57_object;
		var_9_object = var_57_object;
		func_118(var_56_object, var_57_object, ("pt_gun_guard_sanitar" + var_13_int), "pers_sanitar", "sanitar_stat.xml");
		var_13_int += 1;
	}
	
}
EMIT "Stack[-5] = 0";


void func_118(object var_16_object, object var_17_object, string var_18_string, string var_19_string, string var_20_string)
{
	bool var_26_bool; cvector var_27_cvector; cvector var_28_cvector;
	var_17_object->GetLocator(var_18_string, var_26_bool, var_27_cvector, var_28_cvector);
	if(!var_26_bool) //@nz
		@Trace(("Locator " + var_18_string) + " doesn't exist");
	else
		var_17_object->AddStationaryActor(Obj(), var_27_cvector, var_28_cvector, var_19_string, var_20_string);
	object var_29_object = var_16_object;
	
}
EMIT "Stack[-1] = 0";


