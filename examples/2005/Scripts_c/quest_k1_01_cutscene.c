maintask task_0
{
	void init(void)
	{
		object var_7_object;
		@GetSceneByName(var_7_object, "cot_anna");
		object var_15_object; object var_16_object;
		var_7_object = var_16_object;
		func_145(var_15_object, var_16_object, "cs_k1q01_worker", "cs_play_all.bin");
		object var_8_object;
		var_15_object = var_8_object;
		object var_23_object; object var_24_object;
		var_7_object = var_24_object;
		func_137(var_23_object, var_24_object, "cs_k1q01_klara", "cs_k1q01_klara.xml");
		object var_9_object;
		var_23_object = var_9_object;
		var_8_object->ForceGeometryLoad();
		var_9_object->ForceGeometryLoad();
		object var_31_object;
		func_81(var_31_object);
		object var_10_object;
		var_31_object = var_10_object;
		func_165();
		object var_37_object;
		var_10_object = var_37_object;
		func_88(var_37_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k1q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_54_object;
		func_111(var_54_object);
		func_170();
		@CameraSwitchToNormal();
		bool var_11_bool;
		cvector var_12_cvector;
		cvector var_13_cvector;
		var_7_object->GetLocator("pt_cs_player", var_11_bool, var_12_cvector, var_13_cvector);
		@Teleport(var_54_object, var_7_object, var_12_cvector, var_13_cvector);
		@RemoveActor(var_8_object);
		@RemoveActor(var_9_object);
		bool var_68_bool;
		func_153(var_68_bool, "quest_k1_01", "cutscene_end");
		object var_74_object;
		func_131(var_74_object);
		@RemoveActor(var_74_object);
	}
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


void func_131(object var_74_object)
{
	object var_76_object;
	@self(var_76_object);
	var_76_object = var_74_object;
}
EMIT "Stack[-1] = 0";


void func_165(void)
{
	@SetSepia(0.5, 0.886);
}


void func_137(object var_23_object, object var_24_object, string var_25_string, string var_26_string)
{
	object var_28_object;
	@AddActor(var_28_object, var_25_string, var_24_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_26_string);
	var_28_object = var_23_object;
}
EMIT "Stack[-1] = 0";


void func_170(void)
{
	@SetSepia(0, 0);
}


void func_111(object var_54_object)
{
	if(!var_54_object) { //@nz
	}
	int var_56_int;
	var_54_object->GetProperty("noaccess", var_56_int);
	if(var_56_int > 1)
		var_54_object->SetProperty("noaccess", (var_56_int - 1));
	else
		var_54_object->RemoveProperty("noaccess");
	
}


void func_81(object var_31_object)
{
	object var_33_object;
	@FindActor(var_33_object, "player");
	var_33_object = var_31_object;
}
EMIT "Stack[-1] = 0";


void func_145(object var_15_object, object var_16_object, string var_17_string, string var_18_string)
{
	object var_20_object;
	@AddScriptedActor(var_20_object, var_17_string, var_18_string, var_16_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_20_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_88(object var_37_object)
{
	int var_41_int;
	if(!var_37_object) { //@nz
	}
	bool var_40_bool;
	var_37_object->HasProperty("noaccess", var_40_bool);
	if(var_40_bool != 0) {
		var_37_object->GetProperty("noaccess", var_41_int);
		var_37_object->SetProperty("noaccess", (var_41_int + 1));
	} else {
		var_37_object->SetProperty("noaccess", 1);
	}
	
}


void func_153(bool var_68_bool, string var_69_string, string var_70_string)
{
	object var_72_object;
	@FindActor(var_72_object, var_69_string);
	if(var_72_object == null)
		var_68_bool = false;
	@Trigger(var_72_object, var_70_string);
	var_68_bool = true;
}
EMIT "Stack[-1] = 0";


