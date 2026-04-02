// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
	{
		@SetVariable("d3q02", 1);
		object var_9_object;
		func_232(var_9_object, "r7_house2_01");
		object var_6_object;
		var_9_object = var_6_object;
		object var_13_object; object var_14_object;
		var_6_object = var_14_object;
		func_238(var_13_object, var_14_object, "pt_d3q02_butcher1", "pers_butcher", "d3q02_butcher.xml");
		var_0_object = var_13_object;
		object var_31_object; object var_32_object;
		var_6_object = var_32_object;
		func_238(var_31_object, var_32_object, "pt_d3q02_butcher2", "pers_butcher", "d3q02_butcher.xml");
		var_1_object = var_31_object;
		@AddScriptedActor(var_3_object, "d3q02_corpse", "actor_disp.bin", var_6_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_4_object, "d3q02_btrigger", "quest_d3_02_btrigger.bin", var_6_object, [0.0, 0.0, 0.0]);
		func_256("r7_house2_01@door1", false);
		func_256("r7_house2_01@door2", false);
		@GetMainOutdoorScene(var_6_object);
		object var_54_object; object var_55_object;
		var_6_object = var_55_object;
		func_238(var_54_object, var_55_object, "pt_d3q02_doberman", "pers_doberman", "d3q02_doberman.xml");
		var_2_object = var_54_object;
		func_202(3);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string)
	{
		object var_11_object; object var_12_object; cvector var_13_cvector; cvector var_14_cvector; bool var_15_bool;
		@Trace(var_5_string);
		if(var_5_string == "teleport") {
			@FindActor(var_11_object, "player");
			if(var_11_object != 0) {
				@GetSceneByName(var_12_object, "mnogogrannik_han");
				var_12_object->GetLocator("pt_d3q02_teleport", var_15_bool, var_13_cvector, var_14_cvector);
				@Teleport(var_11_object, var_12_object, var_13_cvector, var_14_cvector);
			}
			var_11_object = null;
		} else if(var_5_string == "butcher_trigger") {
				if(var_0_object != 0)
					@Trigger(var_0_object, "trigger");
				if(var_1_object != 0)
					@Trigger(var_1_object, "trigger");
				func_156(Obj(), var_13_cvector, var_14_cvector, var_15_bool);
				@SetVariable("d3q02SeeCorpse", 1);
				func_273();
		}
	Label_114:
		for(;;) {

		}
	
		if(!(var_5_string == "completed")) goto Label_114;
		func_134();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int, float var_6_float)
	{
		func_115();
	}

}


void func_256(string var_42_string, bool var_43_bool)
{
	object var_45_object;
	@FindActor(var_45_object, var_42_string);
	if(!var_45_object) //@nz
		@Trace(("Door " + var_42_string) + " not found");
	else
		var_45_object->SetProperty("locked", var_43_bool);
	
}
EMIT "Stack[-1] = 0";


void func_226(object var_79_object)
{
	object var_81_object;
	@self(var_81_object);
	var_81_object = var_79_object;
}
EMIT "Stack[-1] = 0";


void func_134(void)
{
	int var_64_int;
	@GetVariable("d3q02", var_64_int);
	bool var_66_bool = false;
	if(var_64_int != 1000) {
		if(var_64_int != -1)
			var_66_bool = true;
	}
	if(var_66_bool != 0) {
		@SetVariable("d3q02", 1000);
		func_177(var_64_int);
	}
}


void func_232(object var_9_object, string var_10_string)
{
	object var_12_object;
	@GetSceneByName(var_12_object, var_10_string);
	var_12_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_202(int var_59_int)
{
	float var_61_float;
	@GetGameTime(var_61_float);
	if(var_61_float >= (var_59_int * 24)) {
		func_177(var_61_float);
	} else {
		@SetTimeEvent(0, (var_59_int * 24));
		@Hold();
	}
	
}


void func_299(bool var_43_bool, object var_44_object, int var_45_int)
{
	object var_52_object;
	func_286(var_52_object);
	object var_49_object;
	var_52_object = var_49_object;
	object var_50_object;
	var_49_object->Find(var_45_int, var_50_object);
	if(!var_50_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_45_int);
		var_43_bool = false;
	}
	var_50_object->AddChild(var_44_object);
	@SendWorldWndMessage(7);
	int var_51_int;
	var_44_object->GetCategory(var_51_int);
	@SetDiarySection(var_51_int);
	var_43_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_238(object var_13_object, object var_14_object, string var_15_string, string var_16_string, string var_17_string)
{
	bool var_22_bool; cvector var_23_cvector; cvector var_24_cvector;
	var_14_object->GetLocator(var_15_string, var_22_bool, var_23_cvector, var_24_cvector);
	if(!var_22_bool) //@nz
		@Trace(("Locator " + var_15_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_16_string, var_14_object, var_23_cvector, var_24_cvector, var_17_string);
	object var_25_object = var_13_object;
	
}
EMIT "Stack[-1] = 0";


void func_273(void)
{
	object var_39_object;
	@CreateDiaryEntry(var_39_object, 80, 2, 512162);
	bool var_43_bool; object var_44_object;
	var_39_object = var_44_object;
	func_299(var_43_bool, var_44_object, 26);
}
EMIT "Stack[-1] = 0";


void func_177(object var_2_object)
{
	func_156(var_6_object, var_59_int, var_60_float, var_61_float);
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	func_256("r7_house2_01@door1", true);
	func_256("r7_house2_01@door2", true);
	object var_79_object;
	func_226(var_79_object);
	@RemoveActor(var_79_object);
}


void func_115(void)
{
	int var_8_int;
	@GetVariable("d3q02", var_8_int);
	if(var_8_int != 1000)
		func_126();
}


void func_156(object var_0_object, object var_1_object, object var_3_object, object var_4_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_3_object != 0)
		@Trigger(var_3_object, "cleanup");
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
}


void func_126(void)
{
	@SetVariable("d3q02", -1);
	func_177(var_8_int);
}


void func_286(object var_52_object)
{
	object var_54_object;
	@GetDiaryRoot(var_54_object);
	if(!var_54_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_52_object = false;
	}
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


