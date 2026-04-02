maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnLoad(void)
	{
		func_24();
		bool var_92_bool;
		func_153(var_92_bool, "quest_k7_01", "theater_load");
		bool var_98_bool;
		func_153(var_98_bool, "quest_k12_01", "theater_load");
	}

	void OnUnload(void)
	{
		bool var_0_bool;
		func_153(var_0_bool, "quest_k12_01", "theater_unload");
	}

}


void func_97(object var_44_object)
{
	object var_46_object;
	@FindActor(var_46_object, "player");
	var_46_object = var_44_object;
}
EMIT "Stack[-1] = 0";


void func_165(int var_22_int)
{
	float var_24_float;
	@GetGameTime(var_24_float);
	var_22_int = 1 + (var_24_float / 24);
}


void func_104(object var_48_object)
{
	int var_52_int;
	if(!var_48_object) { //@nz
	}
	bool var_51_bool;
	var_48_object->HasProperty("noaccess", var_51_bool);
	if(var_51_bool != 0) {
		var_48_object->GetProperty("noaccess", var_52_int);
		var_48_object->SetProperty("noaccess", (var_52_int + 1));
	} else {
		var_48_object->SetProperty("noaccess", 1);
	}
	
}


void func_174(int var_15_int)
{
	float var_17_float;
	@GetGameTime(var_17_float);
	int var_18_int;
	var_17_float = var_18_int;
	var_15_int = var_18_int % 24;
}


void func_147(object var_38_object)
{
	object var_40_object;
	@self(var_40_object);
	var_40_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_182(bool var_8_bool)
{
	int var_13_int; int var_14_int;
	int var_15_int;
	func_174(var_15_int);
	int var_12_int;
	var_15_int = var_12_int;
	if(var_12_int < 6) {
		int var_22_int;
		func_165(var_22_int);
		var_22_int = var_13_int;
		if(var_13_int > 1) {
			@GetVariable(("Performance" + var_13_int), var_14_int);
			var_8_bool = var_14_int == 0;
			return 6;
		}
	}
	var_8_bool = false;
}


void func_24(void)
{
	int var_4_int; object var_6_object; object var_7_object;
	bool var_8_bool;
	func_182(var_8_bool);
	if(var_8_bool != 0) {
		int var_33_int;
		func_165(var_33_int);
		var_33_int = var_4_int;
		@SetVariable(("Performance" + var_4_int), 1);
		object var_38_object;
		func_147(var_38_object);
		@AddActor(var_6_object, "cs_mask_klara", var_38_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "cs_mask_klara.xml");
		var_6_object->ForceGeometryLoad();
		object var_44_object;
		func_97(var_44_object);
		var_44_object = var_7_object;
		object var_48_object;
		var_7_object = var_48_object;
		func_104(var_48_object);
		@CameraPlay(("cs_mask_klara" + (var_4_int - 1)) + ".mot");
		@PlayGlobalMusic(("nightmask" + (var_4_int - 1)) + ".ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		object var_75_object;
		var_7_object = var_75_object;
		func_127(var_75_object);
		@CameraSwitchToNormal();
		@RemoveActor(var_6_object);
		@PlayMovie(("NightMasks" + (var_4_int - 1)) + ".wmv");
		var_7_object = null;
		var_6_object = null;
	}
}


void func_153(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


void func_127(object var_75_object)
{
	if(!var_75_object) { //@nz
	}
	int var_77_int;
	var_75_object->GetProperty("noaccess", var_77_int);
	if(var_77_int > 1)
		var_75_object->SetProperty("noaccess", (var_77_int - 1));
	else
		var_75_object->RemoveProperty("noaccess");
	
}


