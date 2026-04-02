maintask task_0
{
	void init(void)
	{
		object var_3_object;
		@GetSceneByName(var_3_object, "cot_eva");
		object var_4_object;
		@AddActor(var_4_object, "cs_burah_danko_microscope", var_3_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "cs_burah_danko_microscope.xml");
		object var_11_object;
		func_81(var_11_object);
		object var_5_object;
		var_11_object = var_5_object;
		func_149();
		object var_17_object;
		var_5_object = var_17_object;
		func_88(var_17_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_burah_danko_microscope.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_34_object;
		var_5_object = var_34_object;
		func_111(var_34_object);
		func_154();
		@RemoveActor(var_4_object);
		@CameraSwitchToNormal();
		bool var_47_bool;
		func_137(var_47_bool, "quest_b2_01", "cutscene_end");
		bool var_53_bool;
		func_137(var_53_bool, "quest_b3_01", "cutscene_end");
		bool var_56_bool;
		func_137(var_56_bool, "quest_b4_01", "cutscene_end");
		bool var_59_bool;
		func_137(var_59_bool, "quest_b5_01", "cutscene_end");
		bool var_62_bool;
		func_137(var_62_bool, "quest_b6_01", "cutscene_end");
		object var_65_object;
		func_131(var_65_object);
		@RemoveActor(var_65_object);
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


void func_131(object var_65_object)
{
	object var_67_object;
	@self(var_67_object);
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


void func_137(bool var_47_bool, string var_48_string, string var_49_string)
{
	object var_51_object;
	@FindActor(var_51_object, var_48_string);
	if(var_51_object == null)
		var_47_bool = false;
	@Trigger(var_51_object, var_49_string);
	var_47_bool = true;
}
EMIT "Stack[-1] = 0";


void func_111(object var_34_object)
{
	if(!var_34_object) { //@nz
	}
	int var_36_int;
	var_34_object->GetProperty("noaccess", var_36_int);
	if(var_36_int > 1)
		var_34_object->SetProperty("noaccess", (var_36_int - 1));
	else
		var_34_object->RemoveProperty("noaccess");
	
}


void func_81(object var_11_object)
{
	object var_13_object;
	@FindActor(var_13_object, "player");
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_149(void)
{
	@SetSepia(0.5, 0.886);
}


void func_88(object var_17_object)
{
	int var_21_int;
	if(!var_17_object) { //@nz
	}
	bool var_20_bool;
	var_17_object->HasProperty("noaccess", var_20_bool);
	if(var_20_bool != 0) {
		var_17_object->GetProperty("noaccess", var_21_int);
		var_17_object->SetProperty("noaccess", (var_21_int + 1));
	} else {
		var_17_object->SetProperty("noaccess", 1);
	}
	
}


void func_154(void)
{
	@SetSepia(0, 0);
}


