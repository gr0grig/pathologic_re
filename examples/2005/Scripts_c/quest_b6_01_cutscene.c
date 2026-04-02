maintask task_0
{
	void init(void)
	{
		object var_6_object;
		@GetMainOutdoorScene(var_6_object);
		object var_12_object; object var_13_object;
		var_6_object = var_13_object;
		func_162(var_12_object, var_13_object, "cs_b6q01_morlok1", "cs_play_all.bin");
		object var_7_object;
		var_12_object = var_7_object;
		object var_20_object; object var_21_object;
		var_6_object = var_21_object;
		func_162(var_20_object, var_21_object, "cs_b6q01_morlok2", "cs_play_all.bin");
		object var_8_object;
		var_20_object = var_8_object;
		object var_24_object; object var_25_object;
		func_162(var_24_object, var_25_object, "cs_b6q01_bull", "cs_play_all.bin");
		object var_9_object;
		var_24_object = var_9_object;
		var_7_object->ForceGeometryLoad();
		var_8_object->ForceGeometryLoad();
		var_9_object->ForceGeometryLoad();
		object var_28_object;
		func_106(var_28_object);
		object var_10_object;
		var_28_object = var_10_object;
		func_170();
		object var_34_object;
		var_10_object = var_34_object;
		func_113(var_34_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_b6q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_51_object;
		var_10_object = var_51_object;
		func_136(var_51_object);
		@CameraSwitchToNormal();
		func_175();
		@RemoveActor(var_7_object);
		@RemoveActor(var_8_object);
		@RemoveActor(var_9_object);
		@AddActor(var_9_object, "b6q01_bull", var_25_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], "b6q01_dead_bull.xml");
		object var_11_object;
		@FindActor(var_11_object, "quest_b6_01");
		if(var_11_object != 0) {
			var_11_object->SetScriptProperty("Bull", var_9_object);
			@Trigger(var_11_object, "sacrifice_end");
		} else {
			@sync();
			@Trigger(var_9_object, "cleanup");
		}
		object var_72_object;
		func_156(var_72_object);
		@RemoveActor(var_72_object);
	
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";
	EMIT "Stack[-4] = 0";
	EMIT "Stack[-5] = 0";
	EMIT "Stack[-6] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_162(object var_12_object, object var_13_object, string var_14_string, string var_15_string)
{
	object var_17_object;
	@AddScriptedActor(var_17_object, var_14_string, var_15_string, var_13_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_17_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_136(object var_51_object)
{
	if(!var_51_object) { //@nz
	}
	int var_53_int;
	var_51_object->GetProperty("noaccess", var_53_int);
	if(var_53_int > 1)
		var_51_object->SetProperty("noaccess", (var_53_int - 1));
	else
		var_51_object->RemoveProperty("noaccess");
	
}


void func_170(void)
{
	@SetSepia(0.5, 0.886);
}


void func_106(object var_28_object)
{
	object var_30_object;
	@FindActor(var_30_object, "player");
	var_30_object = var_28_object;
}
EMIT "Stack[-1] = 0";


void func_175(void)
{
	@SetSepia(0, 0);
}


void func_113(object var_34_object)
{
	int var_38_int;
	if(!var_34_object) { //@nz
	}
	bool var_37_bool;
	var_34_object->HasProperty("noaccess", var_37_bool);
	if(var_37_bool != 0) {
		var_34_object->GetProperty("noaccess", var_38_int);
		var_34_object->SetProperty("noaccess", (var_38_int + 1));
	} else {
		var_34_object->SetProperty("noaccess", 1);
	}
	
}


void func_156(object var_72_object)
{
	object var_74_object;
	@self(var_74_object);
	var_74_object = var_72_object;
}
EMIT "Stack[-1] = 0";


