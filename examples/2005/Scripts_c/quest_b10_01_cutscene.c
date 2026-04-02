maintask task_0
{
	void init(void)
	{
		object var_4_object;
		@GetMainOutdoorScene(var_4_object);
		object var_8_object; object var_9_object;
		var_4_object = var_9_object;
		func_131(var_8_object, var_9_object, "cs_b10q01_burah", "cs_b10q01_burah.xml");
		object var_5_object;
		var_8_object = var_5_object;
		object var_16_object; object var_17_object;
		var_4_object = var_17_object;
		func_139(var_16_object, var_17_object, "cs_b10q01_whitemask", "cs_play_all.bin");
		object var_6_object;
		var_16_object = var_6_object;
		var_5_object->ForceGeometryLoad();
		var_6_object->ForceGeometryLoad();
		object var_24_object;
		func_75(var_24_object);
		object var_7_object;
		var_24_object = var_7_object;
		func_159();
		object var_30_object;
		var_7_object = var_30_object;
		func_82(var_30_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b10q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_47_object;
		var_7_object = var_47_object;
		func_105(var_47_object);
		func_164();
		@CameraSwitchToNormal();
		@RemoveActor(var_5_object);
		@RemoveActor(var_6_object);
		bool var_60_bool;
		func_147(var_60_bool, "quest_b10_01", "place_butchers");
		object var_66_object;
		func_125(var_66_object);
		@RemoveActor(var_66_object);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";
	EMIT "Stack[-4] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_131(object var_8_object, object var_9_object, string var_10_string, string var_11_string)
{
	object var_13_object;
	@AddActor(var_13_object, var_10_string, var_9_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_11_string);
	var_13_object = var_8_object;
}
EMIT "Stack[-1] = 0";


void func_164(void)
{
	@SetSepia(0, 0);
}


void func_105(object var_47_object)
{
	if(!var_47_object) { //@nz
	}
	int var_49_int;
	var_47_object->GetProperty("noaccess", var_49_int);
	if(var_49_int > 1)
		var_47_object->SetProperty("noaccess", (var_49_int - 1));
	else
		var_47_object->RemoveProperty("noaccess");
	
}


void func_75(object var_24_object)
{
	object var_26_object;
	@FindActor(var_26_object, "player");
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_139(object var_16_object, object var_17_object, string var_18_string, string var_19_string)
{
	object var_21_object;
	@AddScriptedActor(var_21_object, var_18_string, var_19_string, var_17_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_21_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_82(object var_30_object)
{
	int var_34_int;
	if(!var_30_object) { //@nz
	}
	bool var_33_bool;
	var_30_object->HasProperty("noaccess", var_33_bool);
	if(var_33_bool != 0) {
		var_30_object->GetProperty("noaccess", var_34_int);
		var_30_object->SetProperty("noaccess", (var_34_int + 1));
	} else {
		var_30_object->SetProperty("noaccess", 1);
	}
	
}


void func_147(bool var_60_bool, string var_61_string, string var_62_string)
{
	object var_64_object;
	@FindActor(var_64_object, var_61_string);
	if(var_64_object == null)
		var_60_bool = false;
	@Trigger(var_64_object, var_62_string);
	var_60_bool = true;
}
EMIT "Stack[-1] = 0";


void func_125(object var_66_object)
{
	object var_68_object;
	@self(var_68_object);
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


void func_159(void)
{
	@SetSepia(0.5, 0.886);
}


