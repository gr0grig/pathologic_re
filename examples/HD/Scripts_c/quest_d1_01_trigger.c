maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool)
	{
		object var_7_object;
		@GetMainOutdoorScene(var_7_object);
		@AddScriptedActor(var_1_object, "cs_d1q01_morlok", "cs_play_all_trigger.bin", var_7_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_2_object, "cs_d1q01_worker", "cs_play_all_trigger.bin", var_7_object, [0.0, 0.0, 0.0]);
		object var_14_object; object var_15_object;
		var_7_object = var_15_object;
		func_212(var_14_object, var_15_object, "d1q01_light", "light_fire.xml");
		var_3_object = var_14_object;
		object var_22_object; object var_23_object;
		var_7_object = var_23_object;
		func_220(var_22_object, var_23_object, "pt_d1q01_fire", "scripted", "fire.xml");
		var_4_object = var_22_object;
		func_113();
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnKeyDown(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, int var_6_int)
	{
		@CameraSwitchToNormal();
	}

	void OnIntersection(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, object var_6_object)
	{
		if(var_5_bool != 0)
			return 4;
		bool var_9_bool;
		@IsPlayerActor(var_6_object, var_9_bool);
		if(!var_9_bool) //@nz
			return 4;
		var_5_bool = true;
		@Trigger(var_1_object, "play");
		@Trigger(var_2_object, "play");
		object var_10_object;
		@FindActor(var_10_object, "player");
		func_250();
		object var_18_object;
		var_10_object = var_18_object;
		func_163(var_18_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d1q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_35_object;
		var_10_object = var_35_object;
		func_186(var_35_object);
		func_255();
		@CameraSwitchToNormal();
		bool var_48_bool;
		func_238(var_48_bool, "quest_d1_01", "cutscene_end");
		@sync();
		@RemoveActor(var_1_object);
		@RemoveActor(var_2_object);
	}
	EMIT "Stack[-1] = 0";

	void OnDispose(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool)
	{
		if(var_1_object != 0)
			@RemoveActor(var_1_object);
		if(var_2_object != 0)
			@RemoveActor(var_2_object);
		if(var_3_object != 0)
			@RemoveActor(var_3_object);
		if(var_4_object != 0)
			@RemoveActor(var_4_object);
	}

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool, string var_6_string)
	{
		bool var_8_bool;
		if(var_6_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_8_bool);
			bool var_11_bool = false;
			if(!var_8_bool) { //@nz
				bool var_13_bool;
				func_161(var_13_bool);
				if(var_13_bool != 0)
					var_11_bool = true;
			}
			if(var_11_bool != 0) {
				object var_14_object;
				func_206(var_14_object);
				@RemoveActor(var_14_object);
			}
		} else if(var_6_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, bool var_5_bool)
	{
		bool var_6_bool = false;
		if(var_0_bool != 0) {
			bool var_8_bool;
			func_161(var_8_bool);
			if(var_8_bool != 0)
				var_6_bool = true;
		}
		if(var_6_bool != 0) {
			object var_9_object;
			func_206(var_9_object);
			@RemoveActor(var_9_object);
		}
	}

}


void func_161(bool var_8_bool)
{
	var_8_bool = true;
}


void func_163(object var_18_object)
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


void func_186(object var_35_object)
{
	if(!var_35_object) { //@nz
	}
	int var_37_int;
	var_35_object->GetProperty("noaccess", var_37_int);
	if(var_37_int > 1)
		var_35_object->SetProperty("noaccess", (var_37_int - 1));
	else
		var_35_object->RemoveProperty("noaccess");
	
}


void func_206(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_238(bool var_48_bool, string var_49_string, string var_50_string)
{
	object var_52_object;
	@FindActor(var_52_object, var_49_string);
	if(var_52_object == null)
		var_48_bool = false;
	@Trigger(var_52_object, var_50_string);
	var_48_bool = true;
}
EMIT "Stack[-1] = 0";


void func_113(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_212(object var_14_object, object var_15_object, string var_16_string, string var_17_string)
{
	object var_19_object;
	@AddActor(var_19_object, var_16_string, var_15_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_17_string);
	var_19_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_250(void)
{
	@SetSepia(0.5, 0.886);
}


void func_220(object var_22_object, object var_23_object, string var_24_string, string var_25_string, string var_26_string)
{
	bool var_31_bool; cvector var_32_cvector; cvector var_33_cvector;
	var_23_object->GetLocator(var_24_string, var_31_bool, var_32_cvector, var_33_cvector);
	if(!var_31_bool) //@nz
		@Trace(("Locator " + var_24_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_25_string, var_23_object, var_32_cvector, var_33_cvector, var_26_string);
	object var_34_object = var_22_object;
	
}
EMIT "Stack[-1] = 0";


void func_255(void)
{
	@SetSepia(0, 0);
}


