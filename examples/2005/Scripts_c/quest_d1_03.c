// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d1q03", 1);
		object var_2_object;
		@GetSceneByName(var_2_object, "ospina_kabak");
		object var_6_object; object var_7_object;
		var_2_object = var_7_object;
		func_162(var_6_object, var_7_object, "pt_d1q04_butcher", "pers_butcher", "d1q03_butcher.xml");
		var_0_object = var_6_object;
		func_180("ospina_kabak@door1", true);
		func_132(1);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		int var_3_int;
		@Trace(var_1_string);
		if(var_1_string == "unlock_butcher") {
			func_180("ospina_kabak@door1", false);
		} else if(var_1_string == "butcher_fail") {
				func_223();
				func_96();
		}
	Label_87:
		for(;;) {
			return 2;

		}
	
		if(var_1_string == "butcher_battle") {
			@SetVariable("d1q03", 2);
			goto Label_87;
		}
		if(var_1_string == "butcher_death") {
			@GetVariable("d1q03IsKapella", var_3_int);
			if(var_3_int != 0) {
				func_197();
				func_96();
			} else {
				func_210();
				func_88();
		}
			if(!(var_1_string == "eva_finish")) goto Label_87;
			@RemoveActor(var_0_object);
			func_88();
		}
		goto Label_87;
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_104();
	}

}


void func_96(void)
{
	@SetVariable("d1q03", -1);
	func_115(var_4_int);
}


void func_162(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
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


void func_132(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	if(var_36_float >= (var_34_int * 24)) {
		func_115(var_36_float);
	} else {
		@SetTimeEvent(0, (var_34_int * 24));
		@Hold();
	}
	
}


void func_197(void)
{
	object var_59_object;
	@CreateDiaryEntry(var_59_object, 39, 2, 512121);
	bool var_63_bool; object var_64_object;
	var_59_object = var_64_object;
	func_249(var_63_bool, var_64_object, 37);
}
EMIT "Stack[-1] = 0";


void func_104(void)
{
	int var_4_int;
	@GetVariable("d1q03", var_4_int);
	if(var_4_int != 1000)
		func_96();
}


void func_236(object var_32_object)
{
	object var_34_object;
	@GetDiaryRoot(var_34_object);
	if(!var_34_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_32_object = false;
	}
	var_34_object = var_32_object;
}
EMIT "Stack[-1] = 0";


void func_210(void)
{
	object var_67_object;
	@CreateDiaryEntry(var_67_object, 40, 2, 512122);
	bool var_71_bool; object var_72_object;
	var_67_object = var_72_object;
	func_249(var_71_bool, var_72_object, 37);
}
EMIT "Stack[-1] = 0";


void func_115(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	func_180("ospina_kabak@door1", false);
	object var_44_object;
	func_156(var_44_object);
	@RemoveActor(var_44_object);
}


void func_180(string var_24_string, bool var_25_bool)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(!var_27_object) //@nz
		@Trace(("Door " + var_24_string) + " not found");
	else
		var_27_object->SetProperty("locked", var_25_bool);
	
}
EMIT "Stack[-1] = 0";


void func_88(void)
{
	@SetVariable("d1q03", 1000);
	func_115(var_3_int);
}


void func_249(bool var_23_bool, object var_24_object, int var_25_int)
{
	object var_32_object;
	func_236(var_32_object);
	object var_29_object;
	var_32_object = var_29_object;
	object var_30_object;
	var_29_object->Find(var_25_int, var_30_object);
	if(!var_30_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_25_int);
		var_23_bool = false;
	}
	var_30_object->AddChild(var_24_object);
	@SendWorldWndMessage(7);
	int var_31_int;
	var_24_object->GetCategory(var_31_int);
	@SetDiarySection(var_31_int);
	var_23_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_156(object var_44_object)
{
	object var_46_object;
	@self(var_46_object);
	var_46_object = var_44_object;
}
EMIT "Stack[-1] = 0";


void func_223(void)
{
	object var_19_object;
	@CreateDiaryEntry(var_19_object, 42, 2, 512124);
	bool var_23_bool; object var_24_object;
	var_19_object = var_24_object;
	func_249(var_23_bool, var_24_object, 37);
}
EMIT "Stack[-1] = 0";


