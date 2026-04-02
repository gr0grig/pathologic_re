maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		object var_3_object;
		func_157(var_3_object);
		var_1_object = var_3_object;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_13_object; int var_14_int; object var_15_object; object var_16_object; object var_17_object; int var_18_int; int var_19_int; object var_20_object; object var_21_object;
		@Trace(var_3_string);
		if(var_3_string == "init_soldiers") {
			@GetMainOutdoorScene(var_13_object);
			var_14_int = 1;

			while(var_14_int <= 10) {
				object var_26_object; object var_27_object;
				var_13_object = var_27_object;
				func_181(var_26_object, var_27_object, ("pt_d11q01_soldier" + var_14_int), "pers_soldat", "d11q01_soldier.xml");
				var_1_object->add(var_26_object); //@t
				var_14_int += 1;
			}

			object var_46_object; object var_47_object;
			var_13_object = var_47_object;
			func_181(var_46_object, var_47_object, "pt_d11q01_msoldier", "pers_soldat", "d11q01_msoldier.xml");
			var_2_object = var_46_object;
			var_13_object = null;
		} else if(var_3_string == "init_girl") {
				@GetSceneByName(var_15_object, "shouse1_kabak");
				object var_54_object; object var_55_object;
				var_15_object = var_55_object;
				func_163(var_54_object, var_55_object, "pt_d11q01_girl", "pers_nudegirl", "d11q01_girl.xml");
				var_0_object = var_54_object;
				var_15_object = null;
		}
	Label_125:
		for(;;) {

		}
	
		if(var_3_string == "remove_andrei") {
			@FindActor(var_16_object, "NPC_Andrei");
			@RemoveActor(var_16_object);
			var_16_object = null;
		} else if(var_3_string == "restore_andrei") {
			@GetSceneByName(var_17_object, "shouse1_kabak");
			object var_78_object; object var_79_object;
			var_17_object = var_79_object;
			func_163(var_78_object, var_79_object, "pt_andrei", "NPC_Andrei", "NPC_Danko_Andrei.xml");
			var_17_object = null;
		}
		if(var_3_string == "soldier_attack") {
			var_1_object->size(var_18_int); //@t
			var_19_int = 0;

			for(;;) {
				if(var_19_int < var_18_int) {
					var_1_object->get(var_20_object, var_19_int); //@t
					if(var_20_object != 0) {
						var_20_object->GetActor(var_21_object);
						if(!var_21_object) //@nz
							var_20_object->Remove();
						else
							@Trigger(var_21_object, "attack");
					goto Label_125;
		}
				if(var_3_string == "fail") {
					func_126();
				} else if(var_3_string == "completed") {
					func_134();
				}
				}
				var_21_object = null;
			}
			var_20_object = null;
			var_19_int += 1;
		}
	
	}

}


void func_163(object var_54_object, object var_55_object, string var_56_string, string var_57_string, string var_58_string)
{
	bool var_63_bool; cvector var_64_cvector; cvector var_65_cvector;
	var_55_object->GetLocator(var_56_string, var_63_bool, var_64_cvector, var_65_cvector);
	if(!var_63_bool) //@nz
		@Trace(("Locator " + var_56_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_57_string, var_55_object, var_64_cvector, var_65_cvector, var_58_string);
	object var_66_object = var_54_object;
	
}
EMIT "Stack[-1] = 0";


void func_134(void)
{
	@SetVariable("d11q01", 1000);
	func_142(var_19_int, var_20_object, var_21_object);
}


void func_199(object var_94_object)
{
	int var_98_int; object var_100_object;
	var_94_object->size(var_98_int);
	int var_99_int = 0;
	
	while(var_99_int < var_98_int) {
		var_94_object->get(var_100_object, var_99_int);
		if(var_100_object != 0)
			var_100_object->Remove();
		var_100_object = null;
		var_99_int += 1;
	}
	
	var_94_object->clear();
}


void func_142(object var_0_object, object var_1_object, object var_2_object)
{
	func_199(var_1_object);
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
}


void func_181(object var_26_object, object var_27_object, string var_28_string, string var_29_string, string var_30_string)
{
	bool var_36_bool; cvector var_37_cvector; cvector var_38_cvector;
	var_27_object->GetLocator(var_28_string, var_36_bool, var_37_cvector, var_38_cvector);
	if(!var_36_bool) //@nz
		@Trace(("Locator " + var_28_string) + " doesn't exist");
	else
		var_27_object->AddStationaryActor(Obj(), var_37_cvector, var_38_cvector, var_29_string, var_30_string);
	object var_39_object = var_26_object;
	
}
EMIT "Stack[-1] = 0";


void func_157(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_126(void)
{
	@SetVariable("d11q01", -1);
	func_142(var_19_int, var_20_object, var_21_object);
}


