maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		object var_13_object;
		@GetMainOutdoorScene(var_13_object);
		@AddScriptedActor(var_5_object, "cs_b1q01_unosha1", "cs_play_all_trigger.bin", var_13_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_6_object, "cs_b1q01_unosha2", "cs_play_all_trigger.bin", var_13_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_1_object, "cs_b1q01_worker1", "cs_play_all_trigger.bin", var_13_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_2_object, "cs_b1q01_worker2", "cs_play_all_trigger.bin", var_13_object, [0.0, 0.0, 0.0]);
		func_223();
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTimer(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, int var_12_int)
	{
		if(1 != var_12_int) {
		}
		func_342(var_11_object);
	}

	void OnIntersection(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, object var_12_object)
	{
		bool var_19_bool;
		@IsPlayerActor(var_12_object, var_19_bool);
		if(!var_19_bool) { //@nz
		}
		object var_20_object;
		@GetMainOutdoorScene(var_20_object);
		func_342(var_12_object);
		@SetTimer(1, 2);
		@AddScriptedActor(var_7_object, "cs_b1q01_unosha3", "cs_play_all.bin", var_20_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_8_object, "cs_b1q01_unosha4", "cs_play_all.bin", var_20_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_3_object, "cs_b1q01_worker3", "cs_play_all.bin", var_20_object, [0.0, 0.0, 0.0]);
		@AddScriptedActor(var_4_object, "cs_b1q01_worker4", "cs_play_all.bin", var_20_object, [0.0, 0.0, 0.0]);
		object var_45_object; object var_46_object;
		var_20_object = var_46_object;
		func_322(var_45_object, var_46_object, "cs_b1q01_burah1", "cs_b1q01_burah.xml");
		object var_53_object; object var_54_object;
		var_20_object = var_54_object;
		func_322(var_53_object, var_54_object, "cs_b1q01_burah2", "cs_b1q01_burah.xml");
		var_10_object = var_53_object;
		var_5_object->ForceGeometryLoad(); //@t
		var_6_object->ForceGeometryLoad(); //@t
		var_7_object->ForceGeometryLoad(); //@t
		var_8_object->ForceGeometryLoad(); //@t
		var_1_object->ForceGeometryLoad(); //@t
		var_2_object->ForceGeometryLoad(); //@t
		var_3_object->ForceGeometryLoad(); //@t
		var_4_object->ForceGeometryLoad(); //@t
		var_45_object->ForceGeometryLoad(); //@t
		var_10_object->ForceGeometryLoad(); //@t
		@Trigger(var_5_object, "play");
		@Trigger(var_6_object, "play");
		@Trigger(var_1_object, "play");
		@Trigger(var_2_object, "play");
		object var_21_object;
		@FindActor(var_21_object, "player");
		func_351();
		object var_64_object;
		var_21_object = var_64_object;
		func_273(var_64_object);
		@CameraPlay("cs_b1q01.mot");
		@CameraWaitForPlayFinish();
		object var_79_object;
		var_21_object = var_79_object;
		func_296(var_79_object);
		func_356();
		cvector var_16_cvector;
		cvector var_17_cvector;
		bool var_18_bool;
		cvector var_22_cvector;
		cvector var_23_cvector;
		bool var_24_bool;
		func_178(var_16_cvector, var_17_cvector, var_18_bool, var_19_bool, var_20_object, var_21_object, var_22_cvector, var_23_cvector, var_24_bool);
		if(var_10_object != 0) {
			@Trigger(var_10_object, "remove");
			var_10_object = null;
		}
		@CameraSwitchToNormal();
		@KillTimer(1);
		bool var_104_bool;
		func_330(var_104_bool, "quest_b1_01", "cutscene_end");
		@GetSceneByName(var_20_object, "warehouse_notkin");
		var_20_object->GetLocator("pt_door1", var_24_bool, var_22_cvector, var_23_cvector);
		@Teleport(var_21_object, var_20_object, var_22_cvector, var_23_cvector);
		object var_112_object;
		func_316(var_112_object);
		@RemoveActor(var_112_object);
	}
	EMIT "Stack[-4] = 0";
	EMIT "Stack[-5] = 0";

	// @pe
	void OnDispose(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		func_178(var_3_object, var_4_object, var_5_object, var_6_object, var_7_object, var_8_object, var_9_object, var_10_object, var_11_object);
		if(var_10_object != 0)
			@RemoveActor(var_10_object);
	}

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object, string var_12_string)
	{
		bool var_14_bool;
		if(var_12_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_14_bool);
			bool var_17_bool = false;
			if(!var_14_bool) { //@nz
				bool var_19_bool;
				func_271(var_19_bool);
				if(var_19_bool != 0)
					var_17_bool = true;
			}
			if(var_17_bool != 0) {
				object var_20_object;
				func_316(var_20_object);
				@RemoveActor(var_20_object);
			}
		} else if(var_12_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object, object var_10_object, object var_11_object)
	{
		bool var_12_bool = false;
		if(var_0_bool != 0) {
			bool var_14_bool;
			func_271(var_14_bool);
			if(var_14_bool != 0)
				var_12_bool = true;
		}
		if(var_12_bool != 0) {
			object var_15_object;
			func_316(var_15_object);
			@RemoveActor(var_15_object);
		}
	}

}


void func_322(object var_45_object, object var_46_object, string var_47_string, string var_48_string)
{
	object var_50_object;
	@AddActor(var_50_object, var_47_string, var_46_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_48_string);
	var_50_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_223(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_356(void)
{
	@SetSepia(0, 0);
}


void func_296(object var_79_object)
{
	if(!var_79_object) { //@nz
	}
	int var_81_int;
	var_79_object->GetProperty("noaccess", var_81_int);
	if(var_81_int > 1)
		var_79_object->SetProperty("noaccess", (var_81_int - 1));
	else
		var_79_object->RemoveProperty("noaccess");
	
}


void func_330(bool var_104_bool, string var_105_string, string var_106_string)
{
	object var_108_object;
	@FindActor(var_108_object, var_105_string);
	if(var_108_object == null)
		var_104_bool = false;
	@Trigger(var_108_object, var_106_string);
	var_104_bool = true;
}
EMIT "Stack[-1] = 0";


void func_271(bool var_14_bool)
{
	var_14_bool = true;
}


void func_273(object var_64_object)
{
	int var_68_int;
	if(!var_64_object) { //@nz
	}
	bool var_67_bool;
	var_64_object->HasProperty("noaccess", var_67_bool);
	if(var_67_bool != 0) {
		var_64_object->GetProperty("noaccess", var_68_int);
		var_64_object->SetProperty("noaccess", (var_68_int + 1));
	} else {
		var_64_object->SetProperty("noaccess", 1);
	}
	
}


void func_178(object var_1_object, object var_2_object, object var_3_object, object var_4_object, object var_5_object, object var_6_object, object var_7_object, object var_8_object, object var_9_object)
{
	if(var_5_object != 0)
		@RemoveActor(var_5_object);
	if(var_6_object != 0)
		@RemoveActor(var_6_object);
	if(var_7_object != 0)
		@RemoveActor(var_7_object);
	if(var_8_object != 0)
		@RemoveActor(var_8_object);
	if(var_1_object != 0)
		@RemoveActor(var_1_object);
	if(var_2_object != 0)
		@RemoveActor(var_2_object);
	if(var_3_object != 0)
		@RemoveActor(var_3_object);
	if(var_4_object != 0)
		@RemoveActor(var_4_object);
	if(var_9_object != 0)
		@RemoveActor(var_9_object);
}


void func_342(object var_26_object)
{
	bool var_28_bool;
	@IsPlayerActor(var_26_object, var_28_bool);
	if(var_28_bool != 0)
		@PlayGlobalMusic("attack");
}


void func_316(object var_15_object)
{
	object var_17_object;
	@self(var_17_object);
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_351(void)
{
	@SetSepia(0.5, 0.886);
}


