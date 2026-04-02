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
		func_175(var_6_object, var_7_object, "pt_d1q04_butcher", "pers_butcher", "d1q03_butcher.xml");
		var_0_object = var_6_object;
		func_193("ospina_kabak@door1", true);
		func_145(1);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, string var_1_string)
	{
		@Trace(var_1_string);
		if(var_1_string == "unlock_butcher") {
			func_193("ospina_kabak@door1", false);
		} else if(var_1_string == "butcher_fail") {
				func_262();
				func_109();
		}
	Label_100:
		for(;;) {
			return 0;

		}
	
		if(var_1_string == "butcher_battle") {
			@SetVariable("d1q03", 2);
			goto Label_100;
		}
		if(var_1_string == "butcher_death") {
			bool var_54_bool;
			func_316(var_54_bool);
			if(var_54_bool != 0) {
				func_223();
				func_109();
			} else {
				func_236();
				func_101();
		}
			if(!(var_1_string == "eva_finish")) goto Label_100;
			@RemoveActor(var_0_object);
			bool var_79_bool;
			func_316(var_79_bool);
			if(var_79_bool != 0) {
				func_210();
				func_101();
				goto Label_100;
			}
			func_249();
			func_109();
		}
		goto Label_100;
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_117();
	}

}


void func_128(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	func_193("ospina_kabak@door1", false);
	object var_44_object;
	func_169(var_44_object);
	@RemoveActor(var_44_object);
}


void func_193(string var_24_string, bool var_25_bool)
{
	object var_27_object;
	@FindActor(var_27_object, var_24_string);
	if(!var_27_object) //@nz
		@Trace(("Door " + var_24_string) + " not found");
	else
		var_27_object->SetProperty("locked", var_25_bool);
	
}
EMIT "Stack[-1] = 0";


void func_262(void)
{
	object var_17_object;
	@CreateDiaryEntry(var_17_object, 42, 2, 512124);
	bool var_21_bool; object var_22_object;
	var_17_object = var_22_object;
	func_288(var_21_bool, var_22_object, 37);
}
EMIT "Stack[-1] = 0";


void func_145(int var_34_int)
{
	float var_36_float;
	@GetGameTime(var_36_float);
	if(var_36_float >= (var_34_int * 24)) {
		func_128(var_36_float);
	} else {
		@SetTimeEvent(0, (var_34_int * 24));
		@Hold();
	}
	
}


void func_210(void)
{
	object var_81_object;
	@CreateDiaryEntry(var_81_object, 38, 2, 512120);
	bool var_85_bool; object var_86_object;
	var_81_object = var_86_object;
	func_288(var_85_bool, var_86_object, 37);
}
EMIT "Stack[-1] = 0";


void func_275(object var_30_object)
{
	object var_32_object;
	@GetDiaryRoot(var_32_object);
	if(!var_32_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_30_object = false;
	}
	var_32_object = var_30_object;
}
EMIT "Stack[-1] = 0";


void func_223(void)
{
	object var_60_object;
	@CreateDiaryEntry(var_60_object, 39, 2, 512121);
	bool var_64_bool; object var_65_object;
	var_60_object = var_65_object;
	func_288(var_64_bool, var_65_object, 37);
}
EMIT "Stack[-1] = 0";


void func_288(bool var_21_bool, object var_22_object, int var_23_int)
{
	object var_30_object;
	func_275(var_30_object);
	object var_27_object;
	var_30_object = var_27_object;
	object var_28_object;
	var_27_object->Find(var_23_int, var_28_object);
	if(!var_28_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_23_int);
		var_21_bool = false;
	}
	var_28_object->AddChild(var_22_object);
	@SendWorldWndMessage(7);
	int var_29_int;
	var_22_object->GetCategory(var_29_int);
	@SetDiarySection(var_29_int);
	var_21_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_101(void)
{
	@SetVariable("d1q03", 1000);
	func_128(var_1_string);
}


void func_169(object var_44_object)
{
	object var_46_object;
	@self(var_46_object);
	var_46_object = var_44_object;
}
EMIT "Stack[-1] = 0";


void func_236(void)
{
	object var_68_object;
	@CreateDiaryEntry(var_68_object, 40, 2, 512122);
	bool var_72_bool; object var_73_object;
	var_68_object = var_73_object;
	func_288(var_72_bool, var_73_object, 37);
}
EMIT "Stack[-1] = 0";


void func_109(void)
{
	@SetVariable("d1q03", -1);
	func_128(var_4_int);
}


void func_175(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
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


void func_117(void)
{
	int var_4_int;
	@GetVariable("d1q03", var_4_int);
	if(var_4_int != 1000)
		func_109();
}


void func_249(void)
{
	object var_89_object;
	@CreateDiaryEntry(var_89_object, 41, 2, 512123);
	bool var_93_bool; object var_94_object;
	var_89_object = var_94_object;
	func_288(var_93_bool, var_94_object, 37);
}
EMIT "Stack[-1] = 0";


void func_316(bool var_54_bool)
{
	int var_56_int;
	@GetVariable("d1q03IsKapella", var_56_int);
	var_54_bool = var_56_int != 0;
}


