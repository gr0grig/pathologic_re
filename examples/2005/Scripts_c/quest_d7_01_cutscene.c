maintask task_0
{
	void init(void)
	{
		object var_4_object;
		@GetSceneByName(var_4_object, "sobor");
		object var_5_object;
		@AddActor(var_5_object, "cs_d7q01_Aglaja", var_4_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "cs_d7q01_Aglaja.xml");
		object var_6_object;
		@AddScriptedActor(var_6_object, "cs_d7q01_birdmask", "cs_play_all.bin", var_4_object, [0.0, 0.0, 0.0]);
		object var_16_object;
		func_64(var_16_object);
		object var_7_object;
		var_16_object = var_7_object;
		func_120();
		object var_22_object;
		var_7_object = var_22_object;
		func_71(var_22_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d7q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_39_object;
		var_7_object = var_39_object;
		func_94(var_39_object);
		func_125();
		@RemoveActor(var_6_object);
		@RemoveActor(var_5_object);
		@CameraSwitchToNormal();
		object var_52_object;
		func_114(var_52_object);
		@RemoveActor(var_52_object);
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


void func_64(object var_16_object)
{
	object var_18_object;
	@FindActor(var_18_object, "player");
	var_18_object = var_16_object;
}
EMIT "Stack[-1] = 0";


void func_71(object var_22_object)
{
	int var_26_int;
	if(!var_22_object) { //@nz
	}
	bool var_25_bool;
	var_22_object->HasProperty("noaccess", var_25_bool);
	if(var_25_bool != 0) {
		var_22_object->GetProperty("noaccess", var_26_int);
		var_22_object->SetProperty("noaccess", (var_26_int + 1));
	} else {
		var_22_object->SetProperty("noaccess", 1);
	}
	
}


void func_114(object var_52_object)
{
	object var_54_object;
	@self(var_54_object);
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


void func_120(void)
{
	@SetSepia(0.5, 0.886);
}


void func_125(void)
{
	@SetSepia(0, 0);
}


void func_94(object var_39_object)
{
	if(!var_39_object) { //@nz
	}
	int var_41_int;
	var_39_object->GetProperty("noaccess", var_41_int);
	if(var_41_int > 1)
		var_39_object->SetProperty("noaccess", (var_41_int - 1));
	else
		var_39_object->RemoveProperty("noaccess");
	
}


