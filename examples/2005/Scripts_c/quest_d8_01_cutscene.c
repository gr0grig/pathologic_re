maintask task_0
{
	void init(void)
	{
		object var_10_object; object var_14_object;
		@GetSceneByName(var_10_object, "boiny");
		object var_21_object;
		func_245(var_21_object);
		object var_11_object;
		var_21_object = var_11_object;
		object var_24_object; object var_25_object;
		var_10_object = var_25_object;
		func_251(var_24_object, var_25_object, "cs_d8q01_bakalavr", "cs_d8q01_bakalavr.xml");
		var_11_object->add(var_24_object);
		object var_32_object; object var_33_object;
		var_10_object = var_33_object;
		func_259(var_32_object, var_33_object, "cs_d8q01_butcher1", "cs_play_all.bin");
		var_11_object->add(var_32_object);
		object var_40_object; object var_41_object;
		var_10_object = var_41_object;
		func_259(var_40_object, var_41_object, "cs_d8q01_butcher2", "cs_play_all.bin");
		var_11_object->add(var_40_object);
		object var_44_object; object var_45_object;
		var_10_object = var_45_object;
		func_259(var_44_object, var_45_object, "cs_d8q01_butcher3", "cs_play_all.bin");
		var_11_object->add(var_44_object);
		object var_48_object; object var_49_object;
		var_10_object = var_49_object;
		func_259(var_48_object, var_49_object, "cs_d8q01_butcher4", "cs_play_all.bin");
		var_11_object->add(var_48_object);
		object var_52_object; object var_53_object;
		var_10_object = var_53_object;
		func_259(var_52_object, var_53_object, "cs_d8q01_butcher5", "cs_play_all.bin");
		var_11_object->add(var_52_object);
		int var_12_int;
		var_11_object->size(var_12_int);
		int var_13_int = 0;
	
		while(var_13_int < var_12_int) {
			var_11_object->get(var_14_object, var_13_int);
			var_14_object->ForceGeometryLoad();
			var_14_object = null;
			var_13_int += 1;
		}
	
		object var_58_object; object var_59_object;
		var_10_object = var_59_object;
		func_259(var_58_object, var_59_object, "cs_d8q01_soldier1", "cs_play_all.bin");
		var_11_object->add(var_58_object);
		object var_62_object; object var_63_object;
		var_10_object = var_63_object;
		func_259(var_62_object, var_63_object, "cs_d8q01_soldier2", "cs_play_all.bin");
		var_11_object->add(var_62_object);
		object var_66_object; object var_67_object;
		var_10_object = var_67_object;
		func_259(var_66_object, var_67_object, "cs_d8q01_soldier3", "cs_play_all.bin");
		var_11_object->add(var_66_object);
		object var_70_object; object var_71_object;
		var_10_object = var_71_object;
		func_259(var_70_object, var_71_object, "cs_d8q01_soldier4", "cs_play_all.bin");
		var_11_object->add(var_70_object);
		object var_74_object; object var_75_object;
		var_10_object = var_75_object;
		func_251(var_74_object, var_75_object, "cs_d8q01_Block", "cs_d8q01_Block.xml");
		var_11_object->add(var_74_object);
		object var_78_object;
		func_189(var_78_object);
		object var_15_object;
		var_78_object = var_15_object;
		func_300();
		object var_84_object;
		var_15_object = var_84_object;
		func_196(var_84_object);
		@RegisterKeyCallback("space");
		@CameraPlay("cs_d8q01.mot");
		@CameraWaitForPlayFinish();
		@UnregisterKeyCallback("space");
		object var_101_object;
		func_219(var_101_object);
		func_305();
		@CameraSwitchToNormal();
		object var_114_object;
		var_11_object = var_114_object;
		func_279(var_114_object);
		var_11_object = null;
		bool var_125_bool;
		func_267(var_125_bool, "quest_d8_01", "completed");
		@sync();
		@GetSceneByName(var_10_object, "uprava_admin");
		@ReplaceScene(var_10_object, "uprava_admin_army_danko.isc");
		@sync();
		@GetSceneByName(var_10_object, "uprava_admin");
		bool var_16_bool;
		cvector var_17_cvector;
		cvector var_18_cvector;
		var_10_object->GetLocator("pt_d8q01_boiny_teleport", var_16_bool, var_17_cvector, var_18_cvector);
		@Teleport(var_101_object, var_10_object, var_17_cvector, var_18_cvector);
		float var_19_float;
		@GetGameTime(var_19_float);
		@AdvanceGameTime(206 - var_19_float);
		@sync();
		object var_137_object;
		func_239(var_137_object);
		@RemoveActor(var_137_object);
	}
	EMIT "Stack[-5] = 0";
	EMIT "Stack[-9] = 0";
	EMIT "Stack[-10] = 0";

	// @pe
	void OnKeyDown(int iKey)
	{
		@CameraSwitchToNormal();
	}

}


void func_259(object var_32_object, object var_33_object, string var_34_string, string var_35_string)
{
	object var_37_object;
	@AddScriptedActor(var_37_object, var_34_string, var_35_string, var_33_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_37_object = var_32_object;
}
EMIT "Stack[-1] = 0";


void func_196(object var_84_object)
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


void func_267(bool var_125_bool, string var_126_string, string var_127_string)
{
	object var_129_object;
	@FindActor(var_129_object, var_126_string);
	if(var_129_object == null)
		var_125_bool = false;
	@Trigger(var_129_object, var_127_string);
	var_125_bool = true;
}
EMIT "Stack[-1] = 0";


void func_300(void)
{
	@SetSepia(0.5, 0.886);
}


void func_219(object var_101_object)
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


void func_239(object var_137_object)
{
	object var_139_object;
	@self(var_139_object);
	var_139_object = var_137_object;
}
EMIT "Stack[-1] = 0";


void func_305(void)
{
	@SetSepia(0, 0);
}


void func_245(object var_21_object)
{
	object var_23_object;
	@CreateObjectVector(var_23_object);
	var_23_object = var_21_object;
}
EMIT "Stack[-1] = 0";


void func_279(object var_114_object)
{
	int var_118_int; int var_119_int; object var_120_object;
	if(var_114_object != 0) {
		var_114_object->size(var_118_int);
		var_119_int = 0;

		while(var_119_int < var_118_int) {
			var_114_object->get(var_120_object, var_119_int);
			if(var_120_object != 0)
				@RemoveActor(var_120_object);
			var_120_object = null;
			var_119_int += 1;
		}

		var_114_object->clear();
	}
}


void func_251(object var_24_object, object var_25_object, string var_26_string, string var_27_string)
{
	object var_29_object;
	@AddActor(var_29_object, var_26_string, var_25_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_27_string);
	var_29_object = var_24_object;
}
EMIT "Stack[-1] = 0";


void func_189(object var_78_object)
{
	object var_80_object;
	@FindActor(var_80_object, "player");
	var_80_object = var_78_object;
}
EMIT "Stack[-1] = 0";


