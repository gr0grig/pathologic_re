maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		object var_3_object;
		func_294(var_3_object);
		func_149(var_1_object, var_3_object);
	}

	void OnLoad(object var_0_object, object var_1_object, object var_2_object)
	{
		bool var_14_bool; object var_15_object; int var_16_int; int var_17_int; int var_18_int; int var_19_int; int var_20_int; int var_21_int; int var_22_int;
		bool var_23_bool;
		func_318(var_23_bool, "quest_d8_04", "termitnik_load");
		bool var_29_bool;
		func_318(var_29_bool, "quest_d8_03", "termitnik_load");
		int var_13_int = 0;
	
		for(;;) {
			@GetLocator(("pt_spawn" + (var_13_int + 1)), var_14_bool);
			if(!var_14_bool) { //@nz
			} else {
				var_13_int += 1;
			}
			if(var_13_int < 18) {
				@Trace("Not enough spawn points");
				break;
			}
			@CreateIntVector(var_15_object);
			var_16_int = 1;

			while(var_16_int <= var_13_int) {
				var_15_object->add(var_16_int);
				var_16_int += 1;
			}

			var_17_int = 0;

			while(var_17_int < 12) {
				@irand(var_18_int, var_13_int);
				var_15_object->get(var_19_int, var_18_int);
				var_15_object->remove(var_18_int);
				var_13_int += -1;
				object var_114_object; object var_115_object;
				object var_119_object;
				func_288(var_119_object);
				var_119_object = var_115_object;
				func_300(var_114_object, var_115_object, ("pt_spawn" + var_19_int), "pers_butcher", "termitnik_butcher.xml");
				var_2_object->add(var_114_object); //@t
				var_17_int += 1;
			}

			var_20_int = 0;

			while(var_20_int < 6) {
				@irand(var_21_int, var_13_int);
				var_15_object->get(var_22_int, var_21_int);
				var_15_object->remove(var_21_int);
				var_13_int += -1;
				object var_125_object; object var_126_object;
				object var_130_object;
				func_288(var_130_object);
				var_130_object = var_126_object;
				func_300(var_125_object, var_126_object, ("pt_spawn" + var_22_int), "pers_morlok", "termitnik_morlok.xml");
				var_2_object->add(var_125_object); //@t
				var_20_int += 1;
			}

			var_15_object = null;

		}
		func_167(var_21_int, var_22_int);
	}

	void OnUnload(object var_0_object, object var_1_object, object var_2_object)
	{
		func_330(var_2_object);
		func_231(var_1_object, var_2_object);
	}

}


void func_288(object var_92_object)
{
	object var_94_object;
	@self(var_94_object);
	var_94_object = var_92_object;
}
EMIT "Stack[-1] = 0";


void func_294(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_167(object var_0_object, object var_1_object)
{
	int var_50_int; int var_51_int; int var_52_int; string var_53_string; string var_54_string; string var_55_string;
	if(!var_1_object) { //@nz
		object var_57_object;
		func_294(var_57_object);
		var_1_object = var_57_object;
	}
	if(!var_0_object) //@nz
		@CreateIntVector(var_0_object);
	func_330(var_1_object);
	int var_48_int;
	var_0_object->size(var_48_int); //@t
	int var_49_int = 0;
	
	while(var_49_int < var_48_int) {
		var_0_object->get(var_50_int, var_49_int); //@t
		var_0_object->get(var_51_int, (var_49_int + 1)); //@t
		var_0_object->get(var_52_int, (var_49_int + 2)); //@t
		string var_77_string; int var_78_int; int var_79_int;
		var_50_int = var_78_int;
		var_51_int = var_79_int;
		func_139(var_78_int, var_79_int);
		var_77_string = var_53_string;
		string var_81_string; int var_82_int; int var_83_int;
		var_50_int = var_82_int;
		var_52_int = var_83_int;
		func_143(var_83_int);
		var_81_string = var_54_string;
		string var_84_string; int var_85_int; int var_86_int;
		var_50_int = var_85_int;
		var_52_int = var_86_int;
		func_146(var_86_int);
		var_84_string = var_55_string;
		object var_87_object; object var_88_object; string var_89_string; string var_90_string; string var_91_string;
		object var_92_object;
		func_288(var_92_object);
		var_92_object = var_88_object;
		var_53_string = var_89_string;
		var_54_string = var_90_string;
		var_55_string = var_91_string;
		func_300(var_87_object, var_88_object, var_89_string, var_90_string, var_91_string);
		var_1_object->add(var_87_object); //@t
		var_49_int += 3;
	}
	
}


void func_231(object var_0_object, object var_1_object)
{
	int var_18_int; object var_20_object; bool var_21_bool;
	var_1_object->size(var_18_int); //@t
	int var_19_int = 0;
	
	for(;;) {
		if(var_19_int < var_18_int) {
			var_1_object->get(var_20_object, var_19_int); //@t
			if(var_20_object != null) {
				var_20_object->IsDead(var_21_bool);
				var_24_bool = !var_21_bool; //@nz
				if(var_24_bool == 0) goto Label_255;
				bool var_25_bool; object var_26_object;
				func_276(var_25_bool, var_26_object, "ToDie");
				if(!var_25_bool) //@nz
					var_19_int += 1;
				else
					@RemoveActor(var_26_object);
			var_1_object->remove(var_19_int); //@t
			var_0_object->remove((var_19_int * 3), ((var_19_int + 1) * 3)); //@t
			var_18_int += -1;
			var_20_object = null;
		}
		func_330(var_1_object);
		}
	}
	
}


void func_330(object var_3_object)
{
	int var_7_int; int var_8_int; object var_9_object;
	if(var_3_object != 0) {
		var_3_object->size(var_7_int);
		var_8_int = 0;

		while(var_8_int < var_7_int) {
			var_3_object->get(var_9_object, var_8_int);
			if(var_9_object != 0)
				@RemoveActor(var_9_object);
			var_9_object = null;
			var_8_int += 1;
		}

		var_3_object->clear();
	}
}


// @pe
void func_139(string var_77_string, int var_79_int)
{
	var_77_string = "pt_agony" + var_79_int;
}


void func_300(object var_87_object, object var_88_object, string var_89_string, string var_90_string, string var_91_string)
{
	bool var_99_bool; cvector var_100_cvector; cvector var_101_cvector;
	var_88_object->GetLocator(var_89_string, var_99_bool, var_100_cvector, var_101_cvector);
	if(!var_99_bool) //@nz
		@Trace(("Locator " + var_89_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_90_string, var_88_object, var_100_cvector, var_101_cvector, var_91_string);
	object var_102_object = var_87_object;
	
}
EMIT "Stack[-1] = 0";


// @pe
void func_143(string var_81_string)
{
	var_81_string = "pers_morlok";
}


// @pe
void func_146(string var_84_string)
{
	var_84_string = "agony1_morlok.xml";
}


void func_276(bool var_25_bool, object var_26_object, string var_27_string)
{
	var_32_bool = IsFuncExist(var_26_object, "HasProperty", 2);
	if(!var_32_bool) { //@nz
		var_25_bool = false;
		return 2;
	}
	bool var_29_bool;
	var_26_object->HasProperty(var_27_string, var_29_bool);
	var_29_bool = var_25_bool;
}


void func_149(object var_0_object, object var_1_object)
{
	if(!var_1_object) { //@nz
		object var_7_object;
		func_294(var_7_object);
		var_1_object = var_7_object;
	}
	if(!var_0_object) //@nz
		@CreateIntVector(var_0_object);
	func_118(var_0_object);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_118(object var_9_object)
{
	int var_12_int; bool var_13_bool;
	var_12_int = 1;
	
	for(;;) {
		@GetLocator(("pt_agony" + var_12_int), var_13_bool);
		if(!var_13_bool) //@nz
			break;
		var_9_object->add(0);
		var_9_object->add(var_12_int);
		var_9_object->add(0);
		var_12_int += 1;
	}
}


void func_318(bool var_23_bool, string var_24_string, string var_25_string)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(var_27_object == null)
		var_23_bool = false;
	@Trigger(var_27_object, var_25_string);
	var_23_bool = true;
}
EMIT "Stack[-1] = 0";


