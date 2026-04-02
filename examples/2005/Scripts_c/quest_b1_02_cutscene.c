maintask task_0
{
	void init(void)
	{
		object var_6_object;
		@GetSceneByName(var_6_object, "storojka");
		object var_13_object; object var_14_object;
		var_6_object = var_14_object;
		func_143(var_13_object, var_14_object, "cs_b1q02_worker", "cs_play_all.bin");
		object var_7_object;
		var_13_object = var_7_object;
		object var_21_object;
		func_69(var_21_object);
		object var_8_object;
		var_21_object = var_8_object;
		func_151();
		object var_27_object;
		var_8_object = var_27_object;
		func_76(var_27_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b1q02.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_44_object;
		func_99(var_44_object);
		@CameraSwitchToNormal();
		func_156();
		bool var_9_bool;
		cvector var_10_cvector;
		cvector var_11_cvector;
		var_6_object->GetLocator("pt_cs_player", var_9_bool, var_10_cvector, var_11_cvector);
		@Teleport(var_44_object, var_6_object, var_10_cvector, var_11_cvector);
		@RemoveActor(var_7_object);
		object var_58_object; object var_59_object;
		var_6_object = var_59_object;
		func_125(var_58_object, var_59_object, "pt_b1q02_worker", "pers_worker", "b1q02_worker.xml");
		object var_76_object;
		func_119(var_76_object);
		@RemoveActor(var_76_object);
	}
	EMIT "Stack[-4] = 0";
	EMIT "Stack[-5] = 0";
	EMIT "Stack[-6] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_99(object var_44_object)
{
	if(!var_44_object) { //@nz
	}
	int var_46_int;
	var_44_object->GetProperty("noaccess", var_46_int);
	if(var_46_int > 1)
		var_44_object->SetProperty("noaccess", (var_46_int - 1));
	else
		var_44_object->RemoveProperty("noaccess");
	
}


void func_69(object var_21_object)
{
	object var_23_object;
	@FindActor(var_23_object, "player");
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_76(object var_27_object)
{
	int var_31_int;
	if(!var_27_object) { //@nz
	}
	bool var_30_bool;
	var_27_object->HasProperty("noaccess", var_30_bool);
	if(var_30_bool != 0) {
		var_27_object->GetProperty("noaccess", var_31_int);
		var_27_object->SetProperty("noaccess", (var_31_int + 1));
	} else {
		var_27_object->SetProperty("noaccess", 1);
	}
	
}


void func_143(object var_13_object, object var_14_object, string var_15_string, string var_16_string)
{
	object var_18_object;
	@AddScriptedActor(var_18_object, var_15_string, var_16_string, var_14_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_18_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_119(object var_76_object)
{
	object var_78_object;
	@self(var_78_object);
	var_78_object = var_76_object;
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


void func_125(object var_58_object, object var_59_object, string var_60_string, string var_61_string, string var_62_string)
{
	bool var_67_bool; cvector var_68_cvector; cvector var_69_cvector;
	var_59_object->GetLocator(var_60_string, var_67_bool, var_68_cvector, var_69_cvector);
	if(!var_67_bool) //@nz
		@Trace(("Locator " + var_60_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_61_string, var_59_object, var_68_cvector, var_69_cvector, var_62_string);
	object var_70_object = var_58_object;
	
}
EMIT "Stack[-1] = 0";


