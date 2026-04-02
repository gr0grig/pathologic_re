// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
	{
		object var_6_object;
		@GetMainOutdoorScene(var_6_object);
		object var_7_object; object var_8_object;
		var_6_object = var_8_object;
		func_253(var_7_object, var_8_object, "pt_gatherer_fire2", "scripted", "bonfire.xml");
		@CreateObjectVector(var_0_object);
		func_205(7);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string)
	{
		object var_8_object; object var_9_object;
		@Trace(var_5_string);
		if(var_5_string == "init_kabak") {
			@GetSceneByName(var_8_object, "shouse1_kabak");
			@Trigger(var_8_object, "noandrei");
			object var_14_object; object var_15_object;
			var_8_object = var_15_object;
			func_235(var_14_object, var_15_object, "pt_d7q04_wastedmale1", "pers_wasted_male", "d7q04_wastedmale.xml");
			var_3_object = var_14_object;
			object var_32_object; object var_33_object;
			var_8_object = var_33_object;
			func_235(var_32_object, var_33_object, "pt_d7q04_wastedmale2", "pers_wasted_male", "d7q04_wastedmale.xml");
			var_4_object = var_32_object;
			var_8_object = null;
		}
		if(var_5_string == "init_andrei") {
			@GetMainOutdoorScene(var_9_object);
			object var_39_object; object var_40_object;
			var_9_object = var_40_object;
			func_235(var_39_object, var_40_object, "pt_d7q04_andrei", "NPC_Andrei", "d7q04_andrei.xml");
			var_2_object = var_39_object;
			object var_44_object; object var_45_object;
			var_9_object = var_45_object;
			func_235(var_44_object, var_45_object, "pt_d7q04_nude", "pers_nudegirl", "d7q04_nudegirl.xml");
			var_1_object = var_44_object;
			object var_49_object; object var_50_object;
			var_9_object = var_50_object;
			func_235(var_49_object, var_50_object, "pt_d7q04_enemy1", "pers_morlok", "d7q04_e_morlok.xml");
			var_0_object->add(var_49_object); //@t
			object var_54_object; object var_55_object;
			var_9_object = var_55_object;
			func_235(var_54_object, var_55_object, "pt_d7q04_enemy2", "pers_butcher", "d7q04_e_butcher.xml");
			var_0_object->add(var_54_object); //@t
			object var_59_object; object var_60_object;
			var_9_object = var_60_object;
			func_235(var_59_object, var_60_object, "pt_d7q04_enemy3", "pers_morlok", "d7q04_e_morlok.xml");
			var_0_object->add(var_59_object); //@t
			object var_64_object; object var_65_object;
			var_9_object = var_65_object;
			func_235(var_64_object, var_65_object, "pt_d7q04_enemy4", "pers_butcher", "d7q04_e_butcher.xml");
			var_0_object->add(var_64_object); //@t
			object var_69_object; object var_70_object;
			var_9_object = var_70_object;
			func_235(var_69_object, var_70_object, "pt_d7q04_enemy5", "pers_morlok", "d7q04_e_morlok.xml");
			var_0_object->add(var_69_object); //@t
			object var_74_object; object var_75_object;
			var_9_object = var_75_object;
			func_235(var_74_object, var_75_object, "pt_d7q04_enemy6", "pers_butcher", "d7q04_e_butcher.xml");
			var_0_object->add(var_74_object); //@t
			var_9_object = null;
		} else if(var_5_string == "fail") {
				func_149();
		}
	Label_137:
		for(;;) {

		}
	
		if(!(var_5_string == "completed")) goto Label_137;
		func_157();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int, float var_6_float)
	{
		func_138();
	}

}


void func_229(object var_55_object)
{
	object var_57_object;
	@self(var_57_object);
	var_57_object = var_55_object;
}
EMIT "Stack[-1] = 0";


void func_165(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	func_271(var_0_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	object var_32_object;
	@GetSceneByName(var_32_object, "shouse1_kabak");
	@Trigger(var_32_object, "andrei");
	object var_55_object;
	func_229(var_55_object);
	@RemoveActor(var_55_object);
}
EMIT "Stack[-1] = 0";


void func_138(void)
{
	int var_8_int;
	@GetVariable("d7q04", var_8_int);
	if(var_8_int != 1000)
		func_149();
}


void func_235(object var_14_object, object var_15_object, string var_16_string, string var_17_string, string var_18_string)
{
	bool var_23_bool; cvector var_24_cvector; cvector var_25_cvector;
	var_15_object->GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector);
	if(!var_23_bool) //@nz
		@Trace(("Locator " + var_16_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string);
	object var_26_object = var_14_object;
	
}
EMIT "Stack[-1] = 0";


void func_205(int var_25_int)
{
	float var_26_float; float var_27_float;
	@GetGameTime(var_27_float);
	if(var_27_float >= (var_25_int * 24)) {
		func_165(var_5_object, var_6_object, var_25_int, var_26_float, var_27_float);
	} else {
		@SetTimeEvent(0, (var_25_int * 24));
		@Hold();
	}
	
}


void func_271(object var_33_object, string var_34_string)
{
	int var_38_int; int var_39_int; object var_40_object;
	if(var_33_object != 0) {
		var_33_object->size(var_38_int);
		var_39_int = 0;

		for(;;) {
			if(!(var_39_int < var_38_int)) goto Label_289;
			var_33_object->get(var_40_object, var_39_int);
			if(var_40_object != 0)
				@Trigger(var_40_object, var_34_string);
			var_40_object = null;
			var_39_int += 1;
		}
	}
Label_289:
}


void func_149(void)
{
	@SetVariable("d7q04", -1);
	func_165(var_4_object, var_5_int, var_6_float, var_7_int, var_8_int);
}


void func_157(void)
{
	@SetVariable("d7q04", 1000);
	func_165(var_5_string, var_6_object, var_7_object, var_8_object, var_9_object);
}


void func_253(object var_7_object, object var_8_object, string var_9_string, string var_10_string, string var_11_string)
{
	bool var_16_bool; cvector var_17_cvector; cvector var_18_cvector;
	var_8_object->GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector);
	if(!var_16_bool) //@nz
		@Trace(("Locator " + var_9_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string);
	object var_19_object = var_7_object;
	
}
EMIT "Stack[-1] = 0";


