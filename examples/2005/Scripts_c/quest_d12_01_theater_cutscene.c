maintask task_0
{
	// @pe
	void init(void)
	{
		func_14();
		bool var_46_bool;
		func_118(var_46_bool, "quest_d12_01", "theater_cutscene_end");
		object var_52_object;
		func_112(var_52_object);
		@RemoveActor(var_52_object);
	}

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_130(void)
{
	@SetSepia(0.5, 0.886);
}


void func_69(object var_18_object)
{
	int var_22_int;
	if(!var_18_object) { //@nz
	}
	bool var_21_bool;
	var_18_object->HasProperty("noaccess", var_21_bool);
	if(var_21_bool != 0) {
		var_18_object->GetProperty("noaccess", var_22_int);
		var_18_object->SetProperty("noaccess", (var_22_int + 1));
	} else {
		var_18_object->SetProperty("noaccess", 1);
	}
	
}


void func_135(void)
{
	@SetSepia(0, 0);
}


void func_14(void)
{
	object var_4_object;
	@GetSceneByName(var_4_object, "theater");
	object var_5_object;
	@AddScriptedActor(var_5_object, "cs_d12_theater_birdmask", "cs_play_all.bin", var_4_object, [0.0, 0.0, 0.0]);
	object var_6_object;
	@AddScriptedActor(var_6_object, "cs_d12_theater_whitemask", "cs_play_all.bin", var_4_object, [0.0, 0.0, 0.0]);
	var_5_object->ForceGeometryLoad();
	var_6_object->ForceGeometryLoad();
	object var_7_object;
	@FindActor(var_7_object, "player");
	func_130();
	object var_18_object;
	var_7_object = var_18_object;
	func_69(var_18_object);
	@CameraPlay("cs_d12_theater.mot");
	@CameraWaitForPlayFinish();
	object var_33_object;
	var_7_object = var_33_object;
	func_92(var_33_object);
	func_135();
	@RemoveActor(var_5_object);
	@RemoveActor(var_6_object);
	@CameraSwitchToNormal();
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";
EMIT "Stack[-4] = 0";


void func_112(object var_52_object)
{
	object var_54_object;
	@self(var_54_object);
	var_54_object = var_52_object;
}
EMIT "Stack[-1] = 0";


void func_118(bool var_46_bool, string var_47_string, string var_48_string)
{
	object var_50_object;
	@FindActor(var_50_object, var_47_string);
	if(var_50_object == null)
		var_46_bool = false;
	@Trigger(var_50_object, var_48_string);
	var_46_bool = true;
}
EMIT "Stack[-1] = 0";


void func_92(object var_33_object)
{
	if(!var_33_object) { //@nz
	}
	int var_35_int;
	var_33_object->GetProperty("noaccess", var_35_int);
	if(var_35_int > 1)
		var_33_object->SetProperty("noaccess", (var_35_int - 1));
	else
		var_33_object->RemoveProperty("noaccess");
	
}


