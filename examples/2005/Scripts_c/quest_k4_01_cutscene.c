maintask task_0
{
	void init(void)
	{
		object var_3_object;
		@GetSceneByName(var_3_object, "warehouse_gangster");
		object var_4_object;
		@AddScriptedActor(var_4_object, "cs_k4q01_grabitel", "cs_play_all.bin", var_3_object, [0.0, 0.0, 0.0]);
		var_4_object->ForceGeometryLoad();
		object var_5_object;
		@FindActor(var_5_object, "player");
		func_122();
		object var_13_object;
		var_5_object = var_13_object;
		func_61(var_13_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k4q01_camera.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_30_object;
		var_5_object = var_30_object;
		func_84(var_30_object);
		func_127();
		@RemoveActor(var_4_object);
		@CameraSwitchToNormal();
		bool var_43_bool;
		func_110(var_43_bool, "quest_k4_01", "cutscene_end");
		object var_49_object;
		func_104(var_49_object);
		@RemoveActor(var_49_object);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_104(object var_49_object)
{
	object var_51_object;
	@self(var_51_object);
	var_51_object = var_49_object;
}
EMIT "Stack[-1] = 0";


void func_110(bool var_43_bool, string var_44_string, string var_45_string)
{
	object var_47_object;
	@FindActor(var_47_object, var_44_string);
	if(var_47_object == null)
		var_43_bool = false;
	@Trigger(var_47_object, var_45_string);
	var_43_bool = true;
}
EMIT "Stack[-1] = 0";


void func_84(object var_30_object)
{
	if(!var_30_object) { //@nz
	}
	int var_32_int;
	var_30_object->GetProperty("noaccess", var_32_int);
	if(var_32_int > 1)
		var_30_object->SetProperty("noaccess", (var_32_int - 1));
	else
		var_30_object->RemoveProperty("noaccess");
	
}


void func_122(void)
{
	@SetSepia(0.5, 0.886);
}


void func_61(object var_13_object)
{
	int var_17_int;
	if(!var_13_object) { //@nz
	}
	bool var_16_bool;
	var_13_object->HasProperty("noaccess", var_16_bool);
	if(var_16_bool != 0) {
		var_13_object->GetProperty("noaccess", var_17_int);
		var_13_object->SetProperty("noaccess", (var_17_int + 1));
	} else {
		var_13_object->SetProperty("noaccess", 1);
	}
	
}


void func_127(void)
{
	@SetSepia(0, 0);
}


