maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(object var_0_object, object var_1_object)
	{
		object var_11_object;
		func_128(var_11_object);
		object var_7_object;
		var_11_object = var_7_object;
		object var_6_object;
		func_134(var_6_object, var_7_object, "pt_avrox", "pers_avrox", "b11q01_avrox.xml");
		var_1_object = var_6_object;
		object var_27_object; object var_28_object;
		object var_31_object;
		func_128(var_31_object);
		var_31_object = var_28_object;
		func_152(var_27_object, var_28_object, "cs_b11q01_starshina", "cs_play_all.bin");
		object var_4_object;
		var_27_object = var_4_object;
		object var_36_object;
		func_78(var_36_object);
		object var_5_object;
		var_36_object = var_5_object;
		func_160();
		object var_42_object;
		var_5_object = var_42_object;
		func_85(var_42_object);
		@CameraPlay("cs_b11q01.mot");
		@CameraWaitForPlayFinish();
		object var_57_object;
		var_5_object = var_57_object;
		func_108(var_57_object);
		@CameraSwitchToNormal();
		func_165();
		@RemoveActor(var_4_object);
		@sync();
		object var_70_object; object var_71_object;
		object var_75_object;
		func_128(var_75_object);
		var_75_object = var_71_object;
		func_134(var_70_object, var_71_object, "pt_Starshina", "pers_starshina_fight", "b11q01_starshina.xml");
		var_0_object = var_70_object;
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";

	void OnUnload(object var_0_object, object var_1_object)
	{
		if(var_0_object != 0)
			@RemoveActor(var_0_object);
		if(var_1_object != 0)
			@RemoveActor(var_1_object);
	}

}


void func_128(object var_11_object)
{
	object var_13_object;
	@self(var_13_object);
	var_13_object = var_11_object;
}
EMIT "Stack[-1] = 0";


void func_160(void)
{
	@SetSepia(0.5, 0.886);
}


void func_165(void)
{
	@SetSepia(0, 0);
}


void func_134(object var_6_object, object var_7_object, string var_8_string, string var_9_string, string var_10_string)
{
	bool var_18_bool; cvector var_19_cvector; cvector var_20_cvector;
	var_7_object->GetLocator(var_8_string, var_18_bool, var_19_cvector, var_20_cvector);
	if(!var_18_bool) //@nz
		@Trace(("Locator " + var_8_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_9_string, var_7_object, var_19_cvector, var_20_cvector, var_10_string);
	object var_21_object = var_6_object;
	
}
EMIT "Stack[-1] = 0";


void func_108(object var_57_object)
{
	if(!var_57_object) { //@nz
	}
	int var_59_int;
	var_57_object->GetProperty("noaccess", var_59_int);
	if(var_59_int > 1)
		var_57_object->SetProperty("noaccess", (var_59_int - 1));
	else
		var_57_object->RemoveProperty("noaccess");
	
}


void func_78(object var_36_object)
{
	object var_38_object;
	@FindActor(var_38_object, "player");
	var_38_object = var_36_object;
}
EMIT "Stack[-1] = 0";


void func_85(object var_42_object)
{
	int var_46_int;
	if(!var_42_object) { //@nz
	}
	bool var_45_bool;
	var_42_object->HasProperty("noaccess", var_45_bool);
	if(var_45_bool != 0) {
		var_42_object->GetProperty("noaccess", var_46_int);
		var_42_object->SetProperty("noaccess", (var_46_int + 1));
	} else {
		var_42_object->SetProperty("noaccess", 1);
	}
	
}


void func_152(object var_27_object, object var_28_object, string var_29_string, string var_30_string)
{
	object var_33_object;
	@AddScriptedActor(var_33_object, var_29_string, var_30_string, var_28_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_33_object = var_27_object;
}
EMIT "Stack[-1] = 0";


