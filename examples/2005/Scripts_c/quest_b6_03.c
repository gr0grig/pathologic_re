// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool)
	{
		func_193(6);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, string var_6_string)
	{
		object var_9_object; object var_10_object;
		@Trace(var_6_string);
		if(var_6_string == "init_grave") {
			@GetSceneByName(var_9_object, "crypt2");
			object var_14_object; object var_15_object;
			var_9_object = var_15_object;
			func_241(var_14_object, var_15_object, "pt_b6q03_diary", "scripted_container", "b6q03_item_diary.xml");
			var_2_object = var_14_object;
			@GetMainOutdoorScene(var_9_object);
			@AddActor(var_0_object, "b6q03_light_fire", var_9_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "light_fire.xml");
			object var_36_object; object var_37_object;
			var_9_object = var_37_object;
			func_241(var_36_object, var_37_object, "pt_b6q03_fire", "scripted", "fire.xml");
			var_1_object = var_36_object;
			object var_41_object; object var_42_object;
			var_9_object = var_42_object;
			func_223(var_41_object, var_42_object, "pt_b6q03_agony1", "pers_worker", "agony1_man.xml");
			var_3_object = var_41_object;
			object var_59_object; object var_60_object;
			var_9_object = var_60_object;
			func_223(var_59_object, var_60_object, "pt_b6q03_agony2", "pers_woman", "agony1_woman.xml");
			var_4_object = var_59_object;
			var_9_object = null;
		} else if(var_6_string == "crypt2_load") {
		}

	
		if(var_6_string == "crypt2_unload") {
			if(!var_5_bool) { //@nz
				var_5_bool = true;
				@GetMainOutdoorScene(var_10_object);
				object var_69_object; object var_70_object;
				var_10_object = var_70_object;
				func_223(var_69_object, var_70_object, "pt_b6q03_bomber1", "pers_bomber", "b6q03_bomber.xml");
				object var_74_object; object var_75_object;
				var_10_object = var_75_object;
				func_223(var_74_object, var_75_object, "pt_b6q03_bomber2", "pers_bomber", "b6q03_bomber.xml");
				object var_79_object; object var_80_object;
				var_10_object = var_80_object;
				func_223(var_79_object, var_80_object, "pt_b6q03_diseased1", "pers_vaxxabit", "vaxxabit_d.xml");
				object var_84_object; object var_85_object;
				var_10_object = var_85_object;
				func_223(var_84_object, var_85_object, "pt_b6q03_diseased2", "pers_vaxxabit", "vaxxabit_d.xml");
				object var_89_object; object var_90_object;
				var_10_object = var_90_object;
				func_223(var_89_object, var_90_object, "pt_b6q03_diseased3", "pers_vaxxabitka", "vaxxabitka_d.xml");
				object var_94_object; object var_95_object;
				var_10_object = var_95_object;
				func_223(var_94_object, var_95_object, "pt_b6q03_diseased4", "pers_vaxxabitka", "vaxxabitka_d.xml");
				var_10_object = null;
			}
		} else if(var_6_string == "diary_taken") {
			func_259();
			@PlaySound("explode");
		} else if(var_6_string == "fail") {
			func_147();
		} else if(var_6_string == "completed") {
			func_155();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, int var_6_int, float var_7_float)
	{
		func_136();
	}

}


void func_193(int var_6_int)
{
	float var_7_float; float var_8_float;
	@GetGameTime(var_8_float);
	if(var_8_float >= (var_6_int * 24)) {
		func_163(var_4_object, var_5_bool, var_6_int, var_7_float, var_8_float);
	} else {
		@SetTimeEvent(0, (var_6_int * 24));
		@Hold();
	}
	
}


void func_259(void)
{
	object var_102_object;
	@CreateDiaryEntry(var_102_object, 278, 2, 521339);
	bool var_106_bool; object var_107_object;
	var_102_object = var_107_object;
	func_285(var_106_bool, var_107_object, 276);
}
EMIT "Stack[-1] = 0";


void func_163(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	if(var_1_object != 0)
		@RemoveActor(var_1_object);
	if(var_0_object != 0)
		@RemoveActor(var_0_object);
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	object var_20_object;
	func_217(var_20_object);
	@RemoveActor(var_20_object);
}


void func_136(void)
{
	int var_9_int;
	@GetVariable("b6q03", var_9_int);
	if(var_9_int != 1000)
		func_147();
}


void func_272(object var_115_object)
{
	object var_117_object;
	@GetDiaryRoot(var_117_object);
	if(!var_117_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_115_object = false;
	}
	var_117_object = var_115_object;
}
EMIT "Stack[-1] = 0";


void func_241(object var_14_object, object var_15_object, string var_16_string, string var_17_string, string var_18_string)
{
	bool var_23_bool; cvector var_24_cvector; cvector var_25_cvector;
	var_15_object->GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector);
	if(!var_23_bool) //@nz
		@Trace(("Locator " + var_16_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string);
	object var_26_object = var_14_object;
	
}
EMIT "Stack[-1] = 0";


void func_147(void)
{
	@SetVariable("b6q03", -1);
	func_163(var_5_bool, var_6_int, var_7_float, var_8_int, var_9_int);
}


void func_217(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_155(void)
{
	@SetVariable("b6q03", 1000);
	func_163(var_6_string, var_7_object, var_8_object, var_9_object, var_10_object);
}


void func_285(bool var_106_bool, object var_107_object, int var_108_int)
{
	object var_115_object;
	func_272(var_115_object);
	object var_112_object;
	var_115_object = var_112_object;
	object var_113_object;
	var_112_object->Find(var_108_int, var_113_object);
	if(!var_113_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_108_int);
		var_106_bool = false;
	}
	var_113_object->AddChild(var_107_object);
	@SendWorldWndMessage(7);
	int var_114_int;
	var_107_object->GetCategory(var_114_int);
	@SetDiarySection(var_114_int);
	var_106_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_223(object var_41_object, object var_42_object, string var_43_string, string var_44_string, string var_45_string)
{
	bool var_50_bool; cvector var_51_cvector; cvector var_52_cvector;
	var_42_object->GetLocator(var_43_string, var_50_bool, var_51_cvector, var_52_cvector);
	if(!var_50_bool) //@nz
		@Trace(("Locator " + var_43_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_44_string, var_42_object, var_51_cvector, var_52_cvector, var_45_string);
	object var_53_object = var_41_object;
	
}
EMIT "Stack[-1] = 0";


