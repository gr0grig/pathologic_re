// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
	{
		bool var_7_bool;
		func_236(var_7_bool, "NPC_Mark");
		func_219("theater@door1", true);
		@SetVariable("k4q02", 1);
		object var_6_object;
		@GetMainOutdoorScene(var_6_object);
		object var_24_object; object var_25_object;
		var_6_object = var_25_object;
		func_200(var_24_object, var_25_object, "pt_k4q02_birdmask1", "pers_birdmask", "k4q02_birdmask.xml");
		var_0_object = var_24_object;
		object var_43_object; object var_44_object;
		func_200(var_43_object, var_44_object, "pt_k4q02_birdmask2", "pers_birdmask", "k4q02_birdmask.xml");
		var_1_object = var_43_object;
		@GetSceneByName(var_44_object, "cot_maria");
		object var_49_object; object var_50_object;
		var_6_object = var_50_object;
		func_182(var_49_object, var_50_object, "pt_k4q02_mark", "NPC_Mark", "k4q02_mark.xml");
		var_2_object = var_49_object;
		func_152(4);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, string var_5_string)
	{
		object var_7_object;
		@Trace(var_5_string);
		if(var_5_string == "init_theater") {
			@GetSceneByName(var_7_object, "theater");
			object var_11_object; object var_12_object;
			var_7_object = var_12_object;
			func_182(var_11_object, var_12_object, "pt_k4q02_prophet", "pers_krysa", "k4q02_prophet.xml");
			var_4_object = var_11_object;
			func_219("theater@door1", false);
			var_7_object = null;
		} else if(var_5_string == "completed") {
			func_99();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object, int var_5_int, float var_6_float)
	{
		func_80();
	}

}


void func_99(void)
{
	@SetVariable("k4q02", 1000);
	func_107(var_3_object, var_4_object, var_5_string, var_6_object, var_7_object);
}


void func_200(object var_24_object, object var_25_object, string var_26_string, string var_27_string, string var_28_string)
{
	bool var_33_bool; cvector var_34_cvector; cvector var_35_cvector;
	var_25_object->GetLocator(var_26_string, var_33_bool, var_34_cvector, var_35_cvector);
	if(!var_33_bool) //@nz
		@Trace(("Locator " + var_26_string) + " doesn't exist");
	else
		var_25_object->AddStationaryActor(Obj(), var_34_cvector, var_35_cvector, var_27_string, var_28_string, true);
	object var_36_object = var_24_object;
	
}
EMIT "Stack[-1] = 0";


void func_91(void)
{
	@SetVariable("k4q02", -1);
	func_107(var_4_object, var_5_int, var_6_float, var_7_int, var_8_int);
}


void func_107(object var_0_object, object var_1_object, object var_2_object, object var_3_object, object var_4_object)
{
	object var_74_object;
	func_219("theater@door1", false);
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	if(var_0_object != 0)
		var_0_object->Remove(); //@t
	if(var_1_object != 0)
		var_1_object->Remove(); //@t
	if(var_4_object != 0)
		@Trigger(var_4_object, "cleanup");
	if(!var_3_object) { //@nz
		@GetSceneByName(var_74_object, "theater");
		object var_85_object; object var_86_object;
		var_74_object = var_86_object;
		func_182(var_85_object, var_86_object, "pt_mark", "NPC_Mark", "NPC_Klara_Mark.xml");
		var_3_object = var_85_object;
		var_74_object = null;
	}
	object var_90_object;
	func_176(var_90_object);
	@RemoveActor(var_90_object);
}


void func_236(bool var_7_bool, string var_8_string)
{
	object var_10_object;
	@FindActor(var_10_object, var_8_string);
	if(!var_10_object) //@nz
		var_7_bool = false;
	@RemoveActor(var_10_object);
	var_7_bool = true;
}
EMIT "Stack[-1] = 0";


void func_176(object var_90_object)
{
	object var_92_object;
	@self(var_92_object);
	var_92_object = var_90_object;
}
EMIT "Stack[-1] = 0";


void func_80(void)
{
	int var_8_int;
	@GetVariable("k4q02", var_8_int);
	if(var_8_int != 1000)
		func_91();
}


void func_182(object var_49_object, object var_50_object, string var_51_string, string var_52_string, string var_53_string)
{
	bool var_58_bool; cvector var_59_cvector; cvector var_60_cvector;
	var_50_object->GetLocator(var_51_string, var_58_bool, var_59_cvector, var_60_cvector);
	if(!var_58_bool) //@nz
		@Trace(("Locator " + var_51_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_52_string, var_50_object, var_59_cvector, var_60_cvector, var_53_string);
	object var_61_object = var_49_object;
	
}
EMIT "Stack[-1] = 0";


void func_152(int var_67_int)
{
	float var_68_float; float var_69_float;
	@GetGameTime(var_69_float);
	if(var_69_float >= (var_67_int * 24)) {
		func_107(var_5_object, var_6_object, var_67_int, var_68_float, var_69_float);
	} else {
		@SetTimeEvent(0, (var_67_int * 24));
		@Hold();
	}
	
}


void func_219(string var_12_string, bool var_13_bool)
{
	object var_15_object;
	@FindActor(var_15_object, var_12_string);
	if(!var_15_object) //@nz
		@Trace(("Door " + var_12_string) + " not found");
	else
		var_15_object->SetProperty("locked", var_13_bool);
	
}
EMIT "Stack[-1] = 0";


