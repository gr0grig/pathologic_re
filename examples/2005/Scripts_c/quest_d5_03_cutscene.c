maintask task_0
{
	void init(void)
	{
		object var_7_object;
		@GetSceneByName(var_7_object, "uprava_prison");
		object var_8_object;
		@AddScriptedActor(var_8_object, "cs_uprava_prisoner1", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_9_object;
		@AddScriptedActor(var_9_object, "cs_uprava_prisoner2", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_10_object;
		@AddScriptedActor(var_10_object, "cs_uprava_prisoner3", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_11_object;
		@AddScriptedActor(var_11_object, "cs_uprava_prisoner4", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_12_object;
		@AddScriptedActor(var_12_object, "cs_uprava_prisoner5", "cs_play_all.bin", var_7_object, [0.0, 0.0, 0.0]);
		var_8_object->ForceGeometryLoad();
		var_9_object->ForceGeometryLoad();
		var_10_object->ForceGeometryLoad();
		var_11_object->ForceGeometryLoad();
		var_12_object->ForceGeometryLoad();
		object var_13_object;
		@FindActor(var_13_object, "player");
		func_151();
		object var_33_object;
		var_13_object = var_33_object;
		func_102(var_33_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_uprava_prison1.mot");
		@PlayGlobalMusic("cs_d5_uprava.ogg");
		@CameraWaitForPlayFinish();
		@PlayGlobalMusic("");
		@UnregisterKeyCallback("space");
		object var_52_object;
		var_13_object = var_52_object;
		func_125(var_52_object);
		func_156();
		@RemoveActor(var_8_object);
		@RemoveActor(var_9_object);
		@RemoveActor(var_10_object);
		@RemoveActor(var_11_object);
		@RemoveActor(var_12_object);
		@CameraSwitchToNormal();
		object var_65_object;
		func_145(var_65_object);
		@RemoveActor(var_65_object);
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


void func_102(object var_33_object)
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


void func_145(object var_65_object)
{
	object var_67_object;
	@self(var_67_object);
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


void func_151(void)
{
	@SetSepia(0.5, 0.886);
}


void func_156(void)
{
	@SetSepia(0, 0);
}


void func_125(object var_52_object)
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


