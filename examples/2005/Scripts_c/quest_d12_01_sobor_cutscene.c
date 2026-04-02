maintask task_0
{
	void init(void)
	{
		object var_7_object; object var_11_object; object var_12_object;
		@GetSceneByName(var_7_object, "sobor");
		object var_15_object;
		func_139(var_15_object);
		object var_8_object;
		var_15_object = var_8_object;
		func_215();
		object var_21_object;
		var_8_object = var_21_object;
		func_146(var_21_object);
		object var_35_object; object var_36_object;
		var_7_object = var_36_object;
		func_195(var_35_object, var_36_object, "cs_d12_sobor_aglaja", "cs_d12_aglaja.xml");
		object var_9_object;
		var_35_object = var_9_object;
		object var_43_object; object var_44_object;
		var_7_object = var_44_object;
		func_195(var_43_object, var_44_object, "cs_d12_sobor_block", "cs_d12_block.xml");
		object var_10_object;
		var_43_object = var_10_object;
		var_9_object->ForceGeometryLoad();
		var_10_object->ForceGeometryLoad();
		@CameraPlay("cs_d12_sobor_aglaja_block.mot");
		@CameraWaitForPlayFinish();
		if(var_9_object != 0)
			@RemoveActor(var_9_object);
		if(var_10_object != 0)
			@RemoveActor(var_10_object);
		bool var_50_bool;
		func_225(var_50_bool);
		if(var_50_bool != 0) {
			object var_55_object; object var_56_object;
			var_7_object = var_56_object;
			func_195(var_55_object, var_56_object, "cs_d12_sobor_klara", "cs_d12_klara.xml");
			var_55_object = var_11_object;
			var_11_object->ForceGeometryLoad();
			@CameraPlay("cs_d12_sobor_klara.mot");
			@CameraWaitForPlayFinish();
			if(var_11_object != 0)
				@RemoveActor(var_11_object);
			var_11_object = null;
		}
		bool var_61_bool;
		func_232(var_61_bool);
		if(var_61_bool != 0) {
			object var_66_object; object var_67_object;
			var_7_object = var_67_object;
			func_195(var_66_object, var_67_object, "cs_d12_sobor_burah", "cs_d12_burah.xml");
			var_66_object = var_12_object;
			var_12_object->ForceGeometryLoad();
			@CameraPlay("cs_d12_sobor_burah.mot");
			@CameraWaitForPlayFinish();
			if(var_12_object != 0)
				@RemoveActor(var_12_object);
			var_12_object = null;
		}
		object var_72_object; object var_73_object;
		var_7_object = var_73_object;
		func_195(var_72_object, var_73_object, "cs_d12_sobor_maria", "cs_d12_maria.xml");
		object var_13_object;
		var_72_object = var_13_object;
		var_13_object->ForceGeometryLoad();
		@CameraPlay("cs_d12_sobor_maria.mot");
		@CameraWaitForPlayFinish();
		object var_77_object;
		var_8_object = var_77_object;
		func_169(var_77_object);
		func_220();
		@CameraSwitchToNormal();
		if(var_13_object != 0)
			@RemoveActor(var_13_object);
		bool var_91_bool;
		func_203(var_91_bool, "quest_d12_01", "sobor_cutscene_end");
		object var_97_object;
		func_189(var_97_object);
		@RemoveActor(var_97_object);
	}
	EMIT "Stack[-1] = 0";
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


void func_225(bool var_50_bool)
{
	int var_52_int;
	@GetVariable("d12q01KlaraInSobor", var_52_int);
	var_50_bool = var_52_int != 0;
}


void func_195(object var_35_object, object var_36_object, string var_37_string, string var_38_string)
{
	object var_40_object;
	@AddActor(var_40_object, var_37_string, var_36_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0], var_38_string);
	var_40_object = var_35_object;
}
EMIT "Stack[-1] = 0";


void func_232(bool var_61_bool)
{
	int var_63_int;
	@GetVariable("d12q01BurahInSobor", var_63_int);
	var_61_bool = var_63_int != 0;
}


void func_169(object var_77_object)
{
	if(!var_77_object) { //@nz
	}
	int var_79_int;
	var_77_object->GetProperty("noaccess", var_79_int);
	if(var_79_int > 1)
		var_77_object->SetProperty("noaccess", (var_79_int - 1));
	else
		var_77_object->RemoveProperty("noaccess");
	
}


void func_139(object var_15_object)
{
	object var_17_object;
	@FindActor(var_17_object, "player");
	var_17_object = var_15_object;
}
EMIT "Stack[-1] = 0";


void func_203(bool var_91_bool, string var_92_string, string var_93_string)
{
	object var_95_object;
	@FindActor(var_95_object, var_92_string);
	if(var_95_object == null)
		var_91_bool = false;
	@Trigger(var_95_object, var_93_string);
	var_91_bool = true;
}
EMIT "Stack[-1] = 0";


void func_146(object var_21_object)
{
	int var_25_int;
	if(!var_21_object) { //@nz
	}
	bool var_24_bool;
	var_21_object->HasProperty("noaccess", var_24_bool);
	if(var_24_bool != 0) {
		var_21_object->GetProperty("noaccess", var_25_int);
		var_21_object->SetProperty("noaccess", (var_25_int + 1));
	} else {
		var_21_object->SetProperty("noaccess", 1);
	}
	
}


void func_215(void)
{
	@SetSepia(0.5, 0.886);
}


void func_220(void)
{
	@SetSepia(0, 0);
}


void func_189(object var_97_object)
{
	object var_99_object;
	@self(var_99_object);
	var_99_object = var_97_object;
}
EMIT "Stack[-1] = 0";


