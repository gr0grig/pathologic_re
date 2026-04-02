maintask task_0
{
	void init(void)
	{
		object var_7_object;
		@GetSceneByName(var_7_object, "factory");
		object var_8_object;
		@AddScriptedActor(var_8_object, "cs_factory_grabitel1", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_9_object;
		@AddScriptedActor(var_9_object, "cs_factory_grabitel2", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_10_object;
		@AddScriptedActor(var_10_object, "cs_factory_patrol1", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_11_object;
		@AddScriptedActor(var_11_object, "cs_factory_patrol2", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_12_object;
		@AddScriptedActor(var_12_object, "cs_factory_patrol3", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		var_10_object->ForceGeometryLoad();
		var_11_object->ForceGeometryLoad();
		var_12_object->ForceGeometryLoad();
		object var_13_object;
		@FindActor(var_13_object, "player");
		func_164();
		object var_33_object;
		var_13_object = var_33_object;
		func_103(var_33_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_factory1.mot");
		@PlayGlobalMusic("cs_d5_factory.ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		object var_52_object;
		var_13_object = var_52_object;
		func_126(var_52_object);
		func_169();
		@RemoveActor(var_8_object);
		@RemoveActor(var_9_object);
		@RemoveActor(var_10_object);
		@RemoveActor(var_11_object);
		@RemoveActor(var_12_object);
		@CameraSwitchToNormal();
		bool var_65_bool;
		func_152(var_65_bool, "quest_d5_01", "cutscene_end");
		object var_71_object;
		func_146(var_71_object);
		@RemoveActor(var_71_object);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";
	EMIT "Stack[-4] = 0";
	EMIT "Stack[-5] = 0";
	EMIT "Stack[-6] = 0";
	EMIT "Stack[-7] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_164(void)
{
	@SetSepia(0.5, 0.886);
}


void func_103(object var_33_object)
{
	int var_37_int;
	if(!var_33_object) { //@nz
	}
	bool var_36_bool;
	var_33_object->HasProperty("noaccess", var_36_bool);
	if(var_36_bool != 0) {
		var_33_object->GetProperty("noaccess", var_37_int);
		var_33_object->SetProperty("noaccess", (var_37_int + 1));
	} else {
		var_33_object->SetProperty("noaccess", 1);
	}
	
}


void func_169(void)
{
	@SetSepia(0, 0);
}


void func_146(object var_71_object)
{
	object var_73_object;
	@self(var_73_object);
	var_73_object = var_71_object;
}
EMIT "Stack[-1] = 0";


void func_152(bool var_65_bool, string var_66_string, string var_67_string)
{
	object var_69_object;
	@FindActor(var_69_object, var_66_string);
	if(var_69_object == null)
		var_65_bool = false;
	@Trigger(var_69_object, var_67_string);
	var_65_bool = true;
}
EMIT "Stack[-1] = 0";


void func_126(object var_52_object)
{
	if(!var_52_object) { //@nz
	}
	int var_54_int;
	var_52_object->GetProperty("noaccess", var_54_int);
	if(var_54_int > 1)
		var_52_object->SetProperty("noaccess", (var_54_int - 1));
	else
		var_52_object->RemoveProperty("noaccess");
	
}


