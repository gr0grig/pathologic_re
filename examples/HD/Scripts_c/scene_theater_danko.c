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
		func_19();
		bool var_111_bool;
		func_181(var_111_bool, "quest_d12_01", "theater_load");
	}

	void OnUnload(void)
	{
		bool var_0_bool;
		func_181(var_0_bool, "quest_d12_01", "theater_unload");
	}

}


void func_193(int var_26_int)
{
	float var_28_float;
	@GetGameTime(var_28_float);
	var_26_int = 1 + (var_28_float / 24);
}


void func_132(object var_52_object)
{
	int var_56_int;
	if(!var_52_object) { //@nz
	}
	bool var_55_bool;
	var_52_object->HasProperty("noaccess", var_55_bool);
	if(var_55_bool != 0) {
		var_52_object->GetProperty("noaccess", var_56_int);
		var_52_object->SetProperty("noaccess", (var_56_int + 1));
	} else {
		var_52_object->SetProperty("noaccess", 1);
	}
	
}


void func_202(int var_19_int)
{
	float var_21_float;
	@GetGameTime(var_21_float);
	int var_22_int;
	var_21_float = var_22_int;
	var_19_int = var_22_int % 24;
}


void func_175(object var_42_object)
{
	object var_44_object;
	@self(var_44_object);
	var_44_object = var_42_object;
}
EMIT "Stack[-1] = 0";


void func_210(bool var_12_bool)
{
	int var_17_int; int var_18_int;
	int var_19_int;
	func_202(var_19_int);
	int var_16_int;
	var_19_int = var_16_int;
	if(var_16_int < 7) {
		int var_26_int;
		func_193(var_26_int);
		var_26_int = var_17_int;
		if(var_17_int > 1) {
			@GetVariable(("Performance" + var_17_int), var_18_int);
			var_12_bool = var_18_int == 0;
		}
	}
	var_12_bool = false;
}


void func_19(void)
{
	int var_6_int; object var_8_object; object var_9_object; int var_10_int; int var_11_int;
	bool var_12_bool;
	func_210(var_12_bool);
	if(var_12_bool != 0) {
		int var_37_int;
		func_193(var_37_int);
		var_37_int = var_6_int;
		@SetVariable(("Performance" + var_6_int), 1);
		object var_42_object;
		func_175(var_42_object);
		@AddActor(var_8_object, "cs_mask_danko", var_42_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "cs_mask_danko.xml");
		var_8_object->ForceGeometryLoad();
		object var_48_object;
		func_125(var_48_object);
		var_48_object = var_9_object;
		object var_52_object;
		var_9_object = var_52_object;
		func_132(var_52_object);
		@CameraPlay(("cs_mask_danko" + (var_6_int - 1)) + ".mot");
		@PlayGlobalMusic(("nightmask" + (var_6_int - 1)) + ".ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		object var_79_object;
		var_9_object = var_79_object;
		func_155(var_79_object);
		@CameraSwitchToNormal();
		@RemoveActor(var_8_object);
		@PlayMovie(("NightMasks" + (var_6_int - 1)) + ".wmv");
		@GetStat("STAT_LOOK", var_10_int);
		@Trace("Day: " + var_6_int);
		@Trace("Before stat " + var_10_int);
		@shift(var_11_int, 1, (var_6_int - 1));
		var_10_int = var_10_int | var_11_int;
		@SetStat("STAT_LOOK", var_10_int);
		@Trace("After stat " + var_10_int);
		if(var_10_int == 4095) {
			@UnlockAchievement("ACHIEVEMENT_LOOK");
			@Trace("Achievement Unlocked!!!");
		}
		var_9_object = null;
		var_8_object = null;
	}
}


void func_181(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


void func_155(object var_79_object)
{
	if(!var_79_object) { //@nz
	}
	int var_81_int;
	var_79_object->GetProperty("noaccess", var_81_int);
	if(var_81_int > 1)
		var_79_object->SetProperty("noaccess", (var_81_int - 1));
	else
		var_79_object->RemoveProperty("noaccess");
	
}


void func_125(object var_48_object)
{
	object var_50_object;
	@FindActor(var_50_object, "player");
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


