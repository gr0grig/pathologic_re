maintask task_0
{
	void init(object var_0_object)
	{
		@CreateObjectVector(var_0_object);
		object var_2_object;
		@GetMainOutdoorScene(var_2_object);
		object var_3_object; object var_4_object;
		var_2_object = var_4_object;
		func_178(var_3_object, var_4_object, "pt_d9q01_doberman1", "pers_doberman", "d9q01_doberman.xml");
		var_0_object->add(var_3_object); //@t
		object var_21_object; object var_22_object;
		var_2_object = var_22_object;
		func_178(var_21_object, var_22_object, "pt_d9q01_doberman2", "pers_doberman", "d9q01_doberman.xml");
		var_0_object->add(var_21_object); //@t
		object var_26_object; object var_27_object;
		var_2_object = var_27_object;
		func_178(var_26_object, var_27_object, "pt_d9q01_doberman3", "pers_doberman", "d9q01_doberman.xml");
		var_0_object->add(var_26_object); //@t
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_16_object; object var_17_object; cvector var_18_cvector; cvector var_19_cvector; bool var_20_bool; object var_21_object; object var_22_object; cvector var_23_cvector; cvector var_24_cvector; bool var_25_bool; object var_26_object; int var_27_int; object var_28_object; int var_29_int;
		@Trace(var_1_string);
		if(var_1_string == "teleport_to_han") {
			@FindActor(var_16_object, "player");
			if(var_16_object != 0) {
				@GetSceneByName(var_17_object, "mnogogrannik_han");
				var_17_object->GetLocator("pt_d9q01_teleport", var_20_bool, var_18_cvector, var_19_cvector);
				@Teleport(var_16_object, var_17_object, var_18_cvector, var_19_cvector);
				var_17_object = null;
			}
			var_16_object = null;
		} else if(var_1_string == "teleport_to_mnogogrannik") {
				@FindActor(var_21_object, "player");
				if(var_21_object != 0) {
					@GetSceneByName(var_22_object, "mnogogrannik");
					var_22_object->GetLocator("pt_d9q01_teleport", var_25_bool, var_23_cvector, var_24_cvector);
					@Teleport(var_21_object, var_22_object, var_23_cvector, var_24_cvector);
					var_22_object = null;
				}
				var_21_object = null;
		}
	Label_139:
		for(;;) {

		}
	
		if(var_1_string == "place_rifles") {
			@GetMainOutdoorScene(var_26_object);
			var_27_int = 1;

			while(var_27_int <= 5) {
				@AddActor(var_28_object, ("d9q01_rifle" + var_27_int), var_26_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "d9q01_rifle.xml");
				var_28_object = null;
				var_27_int += 1;
			}

			var_26_object = null;
		} else if(var_1_string == "unlock_polyh") {
			func_196("polyh@door1", false);
		}
		if(var_1_string == "cleanup") {
			@GetVariable("d9q01", var_29_int);
			if(var_29_int != 1000)
				func_140();
			else
				func_156(var_29_int);
			if(var_1_string == "fail") {
				func_140();
			} else if(var_1_string == "completed") {
				func_148();
			}
		}
		goto Label_139;
	
	}

}


void func_196(string var_54_string, bool var_55_bool)
{
	object var_57_object;
	@FindActor(var_57_object, var_54_string);
	if(!var_57_object) //@nz
		@Trace(("Door " + var_54_string) + " not found");
	else
		var_57_object->SetProperty("locked", var_55_bool);
	
}
EMIT "Stack[-1] = 0";


void func_140(void)
{
	@SetVariable("d9q01", -1);
	func_156(var_29_int);
}


void func_172(object var_84_object)
{
	object var_86_object;
	@self(var_86_object);
	var_86_object = var_84_object;
}
EMIT "Stack[-1] = 0";


void func_178(object var_3_object, object var_4_object, string var_5_string, string var_6_string, string var_7_string)
{
	bool var_12_bool; cvector var_13_cvector; cvector var_14_cvector;
	var_4_object->GetLocator(var_5_string, var_12_bool, var_13_cvector, var_14_cvector);
	if(!var_12_bool) //@nz
		@Trace(("Locator " + var_5_string) + " doesn't exist");
	else
		var_4_object->AddStationaryActor(Obj(), var_13_cvector, var_14_cvector, var_6_string, var_7_string);
	object var_15_object = var_3_object;
	
}
EMIT "Stack[-1] = 0";


void func_148(void)
{
	@SetVariable("d9q01", 1000);
	func_156(var_29_int);
}


void func_213(object var_73_object)
{
	int var_77_int; int var_78_int; object var_79_object;
	if(var_73_object != 0) {
		var_73_object->size(var_77_int);
		var_78_int = 0;

		while(var_78_int < var_77_int) {
			var_73_object->get(var_79_object, var_78_int);
			if(var_79_object != 0)
				var_79_object->Remove();
			var_79_object = null;
			var_78_int += 1;
		}

		var_73_object->clear();
	}
}


void func_156(object var_0_object)
{
	func_196("polyh@door1", true);
	func_213(var_0_object);
	object var_84_object;
	func_172(var_84_object);
	@RemoveActor(var_84_object);
}


