// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		@SetVariable("d1q03", 1);
		object var_5_object;
		@GetSceneByName(var_5_object, "dt_house_1_04");
		bool var_6_bool;
		cvector var_7_cvector;
		cvector var_8_cvector;
		var_5_object->GetLocator("pt_butcher", var_6_bool, var_7_cvector, var_8_cvector);
		if(!var_6_bool) //@nz
			@Trace("Locator doesn't exist for qd1_03_butcher");
		else
			@AddActor(var_0_object, "pers_butcher", var_5_object, var_7_cvector, var_8_cvector, "butcher_qd1_03.xml");
		func_122(1);
	
	}
	EMIT "Stack[-4] = 0";

	void OnTrigger(object var_0_object, string var_1_string)
	{
		int var_3_int;
		@Trace(var_1_string);
		if(var_1_string == "butcher_fail") {
			func_226();
			func_88();
		} else if(var_1_string == "butcher_battle") {
				@SetVariable("d1q03", 2);
		}
	Label_79:
		for(;;) {
			return 2;

		}
	
		if(var_1_string == "butcher_death") {
			@GetVariable("d1q03IsKapella", var_3_int);
			if(var_3_int != 0) {
				func_194();
				func_88();
			} else {
				func_210();
				func_80();
		}
			if(!(var_1_string == "kapella_finish")) goto Label_79;
			@RemoveActor(var_0_object);
			func_80();
		}
		goto Label_79;
	
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_96();
	}

}


void func_0(void)
{
}


void func_96(void)
{
	int var_4_int;
	@GetVariable("d1q03", var_4_int);
	if(var_4_int != 1000)
		func_88();
}


void func_194(void)
{
	@Trace("Adding diary entry");
	object var_47_object;
	@CreateDiaryEntry(var_47_object, 39, 2, 12121);
	bool var_52_bool; object var_53_object;
	var_47_object = var_53_object;
	func_165(var_52_bool, var_53_object, 37);
}
EMIT "Stack[-1] = 0";


void func_226(void)
{
	@Trace("Adding diary entry");
	object var_7_object;
	@CreateDiaryEntry(var_7_object, 42, 2, 12124);
	bool var_12_bool; object var_13_object;
	var_7_object = var_13_object;
	func_165(var_12_bool, var_13_object, 37);
}
EMIT "Stack[-1] = 0";


void func_165(bool var_12_bool, object var_13_object, int var_14_int)
{
	object var_21_object;
	func_152(var_21_object);
	object var_18_object;
	var_21_object = var_18_object;
	object var_19_object;
	var_18_object->Find(var_14_int, var_19_object);
	if(!var_19_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_14_int);
		var_12_bool = false;
	}
	var_19_object->AddChild(var_13_object);
	@SetVariable("player_diary", 1);
	int var_20_int;
	var_13_object->GetCategory(var_20_int);
	@SetDiarySection(var_20_int);
	var_12_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_107(object var_0_object)
{
	func_0();
	if(var_0_object != null)
		@Trigger(var_0_object, "cleanup");
	object var_23_object;
	func_146(var_23_object);
	@RemoveActor(var_23_object);
}


void func_80(void)
{
	@SetVariable("d1q03", 1000);
	func_107(var_3_int);
}


void func_210(void)
{
	@Trace("Adding diary entry");
	object var_56_object;
	@CreateDiaryEntry(var_56_object, 40, 2, 12122);
	bool var_61_bool; object var_62_object;
	var_56_object = var_62_object;
	func_165(var_61_bool, var_62_object, 37);
}
EMIT "Stack[-1] = 0";


void func_146(object var_23_object)
{
	object var_25_object;
	@self(var_25_object);
	var_25_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_88(void)
{
	@SetVariable("d1q03", -1);
	func_107(var_4_int);
}


void func_122(int var_15_int)
{
	float var_17_float;
	@GetGameTime(var_17_float);
	if(var_17_float >= (var_15_int * 24)) {
		func_107(var_17_float);
	} else {
		@SetTimeEvent(0, (var_15_int * 24));
		@Hold();
	}
	
}


void func_152(object var_21_object)
{
	object var_23_object;
	@GetDiaryRoot(var_23_object);
	if(!var_23_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_21_object = false;
	}
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


