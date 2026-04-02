maintask task_0
{
	void init(void)
	{
		object var_13_object;
		@GetMainOutdoorScene(var_13_object);
		object var_26_object; object var_27_object;
		var_13_object = var_27_object;
		func_247(var_26_object, var_27_object, "cs_k11q01_soldat1", "cs_play_all.bin");
		object var_14_object;
		var_26_object = var_14_object;
		object var_34_object; object var_35_object;
		var_13_object = var_35_object;
		func_247(var_34_object, var_35_object, "cs_k11q01_soldat2", "cs_play_all.bin");
		object var_15_object;
		var_34_object = var_15_object;
		object var_38_object; object var_39_object;
		var_13_object = var_39_object;
		func_247(var_38_object, var_39_object, "cs_k11q01_soldat3", "cs_play_all.bin");
		object var_16_object;
		var_38_object = var_16_object;
		object var_42_object; object var_43_object;
		var_13_object = var_43_object;
		func_247(var_42_object, var_43_object, "cs_k11q01_soldat4", "cs_play_all.bin");
		object var_17_object;
		var_42_object = var_17_object;
		object var_46_object; object var_47_object;
		var_13_object = var_47_object;
		func_247(var_46_object, var_47_object, "cs_k11q01_soldat5", "cs_play_all.bin");
		object var_18_object;
		var_46_object = var_18_object;
		object var_50_object; object var_51_object;
		var_13_object = var_51_object;
		func_247(var_50_object, var_51_object, "cs_k11q01_soldat6", "cs_play_all.bin");
		object var_19_object;
		var_50_object = var_19_object;
		object var_54_object; object var_55_object;
		var_13_object = var_55_object;
		func_247(var_54_object, var_55_object, "cs_k11q01_soldat7", "cs_play_all.bin");
		object var_20_object;
		var_54_object = var_20_object;
		object var_58_object; object var_59_object;
		var_13_object = var_59_object;
		func_247(var_58_object, var_59_object, "cs_k11q01_soldat8", "cs_play_all.bin");
		object var_21_object;
		var_58_object = var_21_object;
		object var_62_object; object var_63_object;
		var_13_object = var_63_object;
		func_247(var_62_object, var_63_object, "cs_k11q01_soldat9", "cs_play_all.bin");
		object var_22_object;
		var_62_object = var_22_object;
		object var_66_object; object var_67_object;
		var_13_object = var_67_object;
		func_247(var_66_object, var_67_object, "cs_k11q01_soldat10", "cs_play_all.bin");
		object var_23_object;
		var_66_object = var_23_object;
		object var_70_object; object var_71_object;
		var_13_object = var_71_object;
		func_239(var_70_object, var_71_object, "cs_k11q01_klara", "cs_k11q01_klara.xml");
		object var_24_object;
		var_70_object = var_24_object;
		var_14_object->ForceGeometryLoad();
		var_15_object->ForceGeometryLoad();
		var_16_object->ForceGeometryLoad();
		var_17_object->ForceGeometryLoad();
		var_18_object->ForceGeometryLoad();
		var_19_object->ForceGeometryLoad();
		var_20_object->ForceGeometryLoad();
		var_21_object->ForceGeometryLoad();
		var_22_object->ForceGeometryLoad();
		var_23_object->ForceGeometryLoad();
		var_24_object->ForceGeometryLoad();
		object var_78_object;
		func_183(var_78_object);
		object var_25_object;
		var_78_object = var_25_object;
		func_267();
		object var_84_object;
		var_25_object = var_84_object;
		func_190(var_84_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_k11q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_101_object;
		var_25_object = var_101_object;
		func_213(var_101_object);
		func_272();
		@CameraSwitchToNormal();
		@RemoveActor(var_14_object);
		@RemoveActor(var_15_object);
		@RemoveActor(var_16_object);
		@RemoveActor(var_17_object);
		@RemoveActor(var_18_object);
		@RemoveActor(var_19_object);
		@RemoveActor(var_20_object);
		@RemoveActor(var_21_object);
		@RemoveActor(var_22_object);
		@RemoveActor(var_23_object);
		@RemoveActor(var_24_object);
		bool var_114_bool;
		func_255(var_114_bool, "quest_k11_01", "cutscene_end");
		object var_120_object;
		func_233(var_120_object);
		@RemoveActor(var_120_object);
	}
	EMIT "Stack[-1] = 0";
	EMIT "Stack[-2] = 0";
	EMIT "Stack[-3] = 0";
	EMIT "Stack[-4] = 0";
	EMIT "Stack[-5] = 0";
	EMIT "Stack[-6] = 0";
	EMIT "Stack[-7] = 0";
	EMIT "Stack[-8] = 0";
	EMIT "Stack[-9] = 0";
	EMIT "Stack[-10] = 0";
	EMIT "Stack[-11] = 0";
	EMIT "Stack[-12] = 0";
	EMIT "Stack[-13] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_233(object var_120_object)
{
	object var_122_object;
	@self(var_122_object);
	var_122_object = var_120_object;
}
EMIT "Stack[-1] = 0";


void func_267(void)
{
	@SetSepia(0.5, 0.886);
}


void func_239(object var_70_object, object var_71_object, string var_72_string, string var_73_string)
{
	object var_75_object;
	@AddActor(var_75_object, var_72_string, var_71_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_73_string);
	var_75_object = var_70_object;
}
EMIT "Stack[-1] = 0";


void func_272(void)
{
	@SetSepia(0, 0);
}


void func_213(object var_101_object)
{
	if(!var_101_object) { //@nz
	}
	int var_103_int;
	var_101_object->GetProperty("noaccess", var_103_int);
	if(var_103_int > 1)
		var_101_object->SetProperty("noaccess", (var_103_int - 1));
	else
		var_101_object->RemoveProperty("noaccess");
	
}


void func_183(object var_78_object)
{
	object var_80_object;
	@FindActor(var_80_object, "player");
	var_80_object = var_78_object;
}
EMIT "Stack[-1] = 0";


void func_247(object var_26_object, object var_27_object, string var_28_string, string var_29_string)
{
	object var_31_object;
	@AddScriptedActor(var_31_object, var_28_string, var_29_string, var_27_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_31_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_190(object var_84_object)
{
	int var_88_int;
	if(!var_84_object) { //@nz
	}
	bool var_87_bool;
	var_84_object->HasProperty("noaccess", var_87_bool);
	if(var_87_bool != 0) {
		var_84_object->GetProperty("noaccess", var_88_int);
		var_84_object->SetProperty("noaccess", (var_88_int + 1));
	} else {
		var_84_object->SetProperty("noaccess", 1);
	}
	
}


void func_255(bool var_114_bool, string var_115_string, string var_116_string)
{
	object var_118_object;
	@FindActor(var_118_object, var_115_string);
	if(var_118_object == null)
		var_114_bool = false;
	@Trigger(var_118_object, var_116_string);
	var_114_bool = true;
}
EMIT "Stack[-1] = 0";


