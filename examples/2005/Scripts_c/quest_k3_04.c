// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		func_209("icot_eva_door", true);
		@SetVariable("k3q04", 1);
		object var_4_object;
		@GetSceneByName(var_4_object, "dt_house2_08");
		object var_19_object; object var_20_object;
		var_4_object = var_20_object;
		func_156(var_19_object, var_20_object, "pt_k3q04_danko", "NPC_Bakalavr", "k3q04_danko.xml");
		var_0_object = var_19_object;
		func_126(3);
	}
	EMIT "Stack[-1] = 0";

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_5_object;
		@Trace(var_3_string);
		if(var_3_string == "place_burah_lopuh") {
			func_192("burah_home@door1", true);
			@GetSceneByName(var_5_object, "house5_23");
			object var_19_object; object var_20_object;
			func_156(var_19_object, var_20_object, "pt_k3q04_burah", "NPC_Burah", "k3q04_burah.xml");
			var_1_object = var_19_object;
			@GetMainOutdoorScene(var_20_object);
			object var_37_object; object var_38_object;
			var_5_object = var_38_object;
			func_174(var_37_object, var_38_object, "pt_d3q03_boy", "pers_littleboy", "k3q04_boy.xml");
			var_2_object = var_37_object;
			var_5_object = null;
		} else if(var_3_string == "completed") {
			func_87();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		func_68();
	}

}


void func_192(string var_45_string, bool var_46_bool)
{
	object var_48_object;
	@FindActor(var_48_object, var_45_string);
	if(!var_48_object) //@nz
		@Trace(("Door " + var_45_string) + " not found");
	else
		var_48_object->SetProperty("locked", var_46_bool);
	
}
EMIT "Stack[-1] = 0";


void func_68(void)
{
	int var_6_int;
	@GetVariable("k3q04", var_6_int);
	if(var_6_int != 1000)
		func_79();
}


void func_174(object var_37_object, object var_38_object, string var_39_string, string var_40_string, string var_41_string)
{
	bool var_46_bool; cvector var_47_cvector; cvector var_48_cvector;
	var_38_object->GetLocator(var_39_string, var_46_bool, var_47_cvector, var_48_cvector);
	if(!var_46_bool) //@nz
		@Trace(("Locator " + var_39_string) + " doesn't exist");
	else
		var_38_object->AddStationaryActor(Obj(), var_47_cvector, var_48_cvector, var_40_string, var_41_string);
	object var_49_object = var_37_object;
	
}
EMIT "Stack[-1] = 0";


void func_79(void)
{
	@SetVariable("k3q04", -1);
	func_95(var_4_float, var_5_int, var_6_int);
}


void func_209(string var_5_string, bool var_6_bool)
{
	object var_8_object;
	@FindActor(var_8_object, var_5_string);
	if(!var_8_object) { //@nz
		@Trace(("Door " + var_5_string) + " not found");
	} else {
		if(var_6_bool != 0)
			var_8_object->Close();
		var_8_object->SetProperty("locked", var_6_bool);
	}
	
}
EMIT "Stack[-1] = 0";


void func_150(object var_60_object)
{
	object var_62_object;
	@self(var_62_object);
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


void func_87(void)
{
	@SetVariable("k3q04", 1000);
	func_95(var_3_string, var_4_object, var_5_object);
}


void func_156(object var_19_object, object var_20_object, string var_21_string, string var_22_string, string var_23_string)
{
	bool var_28_bool; cvector var_29_cvector; cvector var_30_cvector;
	var_20_object->GetLocator(var_21_string, var_28_bool, var_29_cvector, var_30_cvector);
	if(!var_28_bool) //@nz
		@Trace(("Locator " + var_21_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_22_string, var_20_object, var_29_cvector, var_30_cvector, var_23_string);
	object var_31_object = var_19_object;
	
}
EMIT "Stack[-1] = 0";


void func_126(int var_37_int)
{
	float var_38_float; float var_39_float;
	@GetGameTime(var_39_float);
	if(var_39_float >= (var_37_int * 24)) {
		func_95(var_37_int, var_38_float, var_39_float);
	} else {
		@SetTimeEvent(0, (var_37_int * 24));
		@Hold();
	}
	
}


void func_95(object var_0_object, object var_1_object, object var_2_object)
{
	func_209("icot_eva_door", false);
	func_192("burah_home@door1", false);
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		var_2_object->Remove(); //@t
	object var_60_object;
	func_150(var_60_object);
	@RemoveActor(var_60_object);
}


