maintask task_0
{
	void init(object var_0_object, object var_1_object)
	{
		@SetVariable("d5q03", 1);
		object var_4_object;
		func_335(var_4_object);
		var_0_object = var_4_object;
		func_262(5);
	}

	void OnTrigger(object var_0_object, object var_1_object, string var_2_string)
	{
		object var_12_object; object var_13_object; object var_14_object; object var_15_object; object var_16_object; object var_17_object; object var_18_object;
		@Trace(var_2_string);
		if(var_2_string == "completed") {
			@GetSceneByName(var_12_object, "uprava_prison");
			@AddScriptedActor(var_13_object, "cs_uprava_prisoner1", "cs_play_all.bin", var_12_object, [0.0, 0.0, 0.0]);
			@AddScriptedActor(var_14_object, "cs_uprava_prisoner2", "cs_play_all.bin", var_12_object, [0.0, 0.0, 0.0]);
			@AddScriptedActor(var_15_object, "cs_uprava_prisoner3", "cs_play_all.bin", var_12_object, [0.0, 0.0, 0.0]);
			@AddScriptedActor(var_16_object, "cs_uprava_prisoner4", "cs_play_all.bin", var_12_object, [0.0, 0.0, 0.0]);
			@AddScriptedActor(var_17_object, "cs_uprava_prisoner5", "cs_play_all.bin", var_12_object, [0.0, 0.0, 0.0]);
			var_13_object->ForceGeometryLoad();
			var_14_object->ForceGeometryLoad();
			var_15_object->ForceGeometryLoad();
			var_16_object->ForceGeometryLoad();
			var_17_object->ForceGeometryLoad();
			@FindActor(var_18_object, "player");
			object var_40_object;
			var_18_object = var_40_object;
			func_286(var_40_object);
			@RegisterKeyCallback("space");
			@CameraPlay("cs_uprava_prison1.mot");
			@CameraWaitForPlayFinish();
			@UnregisterKeyCallback("space");
			object var_57_object;
			var_18_object = var_57_object;
			func_309(var_57_object);
			@RemoveActor(var_13_object);
			@RemoveActor(var_14_object);
			@RemoveActor(var_15_object);
			@RemoveActor(var_16_object);
			@RemoveActor(var_17_object);
			@CameraSwitchToNormal();
			func_219();
			var_18_object = null;
			var_17_object = null;
			var_16_object = null;
			var_15_object = null;
			var_14_object = null;
			var_13_object = null;
			var_12_object = null;
		} else if(var_2_string == "fail") {
				func_206();
		}
	Label_190:
		for(;;) {

		}
	
		if(!(var_2_string == "place_prisoners")) goto Label_190;
		func_359("uprava_prison@door1", false);
		object var_19_object;
		@GetSceneByName(var_19_object, "uprava_prison");
		object var_114_object; object var_115_object;
		var_19_object = var_115_object;
		func_341(var_114_object, var_115_object, "pt_guard", "pers_birdmask", "d5q03_birdmask.xml");
		var_1_object = var_114_object;
		object var_132_object; object var_133_object;
		var_19_object = var_133_object;
		func_341(var_132_object, var_133_object, "pt_prisoner1", "pers_unosha", "d5q03_unosha.xml");
		object var_20_object;
		var_132_object = var_20_object;
		var_0_object->add(var_20_object); //@t
		object var_137_object; object var_138_object;
		var_19_object = var_138_object;
		func_341(var_137_object, var_138_object, "pt_prisoner2", "pers_worker", "d5q03_worker.xml");
		var_137_object = var_20_object;
		var_0_object->add(var_20_object); //@t
		object var_142_object; object var_143_object;
		var_19_object = var_143_object;
		func_341(var_142_object, var_143_object, "pt_prisoner3", "pers_wasted_male", "d5q03_wastedmale.xml");
		var_142_object = var_20_object;
		var_0_object->add(var_20_object); //@t
		object var_147_object; object var_148_object;
		var_19_object = var_148_object;
		func_341(var_147_object, var_148_object, "pt_prisoner4", "pers_alkash", "d5q03_alkash.xml");
		var_147_object = var_20_object;
		var_0_object->add(var_20_object); //@t
		object var_152_object; object var_153_object;
		var_19_object = var_153_object;
		func_341(var_152_object, var_153_object, "pt_prisoner5", "pers_worker", "d5q03_worker.xml");
		var_152_object = var_20_object;
		var_0_object->add(var_20_object); //@t
		object var_157_object; object var_158_object;
		var_19_object = var_158_object;
		func_341(var_157_object, var_158_object, "pt_prisoner6", "pers_unosha", "d5q03_unosha.xml");
		var_157_object = var_20_object;
		var_0_object->add(var_20_object); //@t
		var_20_object = null;
		var_19_object = null;
	}

	// @pe
	void OnKeyDown(object var_0_object, object var_1_object, int var_2_int)
	{
		@CameraSwitchToNormal();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, int var_2_int, float var_3_float)
	{
		func_195();
	}

}


void func_195(void)
{
	int var_5_int;
	@GetVariable("d5q03", var_5_int);
	if(var_5_int != 1000)
		func_206();
}


void func_262(int var_7_int)
{
	float var_8_float; float var_9_float;
	@GetGameTime(var_9_float);
	if(var_9_float >= (var_7_int * 24)) {
		func_246(var_8_float, var_9_float);
	} else {
		@SetTimeEvent(0, (var_7_int * 24));
		@Hold();
	}
	
}


void func_359(string var_11_string, bool var_12_bool)
{
	object var_14_object;
	@FindActor(var_14_object, var_11_string);
	if(!var_14_object) //@nz
		@Trace(("Door " + var_11_string) + " not found");
	var_14_object->SetProperty("locked", var_12_bool);
}
EMIT "Stack[-1] = 0";


void func_329(object var_25_object)
{
	object var_27_object;
	@self(var_27_object);
	var_27_object = var_25_object;
}
EMIT "Stack[-1] = 0";


void func_206(void)
{
	@SetVariable("d5q03", -1);
	func_359("uprava_prison@door1", true);
	func_246(var_4_int, var_5_int);
}


void func_335(object var_4_object)
{
	object var_6_object;
	@CreateObjectVector(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_309(object var_57_object)
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


void func_341(object var_114_object, object var_115_object, string var_116_string, string var_117_string, string var_118_string)
{
	bool var_123_bool; cvector var_124_cvector; cvector var_125_cvector;
	var_115_object->GetLocator(var_116_string, var_123_bool, var_124_cvector, var_125_cvector);
	if(!var_123_bool) //@nz
		@Trace(("Locator " + var_116_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_117_string, var_115_object, var_124_cvector, var_125_cvector, var_118_string);
	object var_126_object = var_114_object;
	
}
EMIT "Stack[-1] = 0";


void func_246(object var_0_object, object var_1_object)
{
	func_375(var_0_object);
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	object var_25_object;
	func_329(var_25_object);
	@RemoveActor(var_25_object);
}


void func_219(void)
{
	int var_68_int; int var_69_int;
	@GetVariable("d5q03", var_69_int);
	bool var_71_bool = false;
	if(var_69_int != 1000) {
		if(var_69_int != -1)
			var_71_bool = true;
	}
	if(var_71_bool != 0) {
		@SetVariable("d5q03", 1000);
		func_359("uprava_prison@door1", true);
		func_246(var_68_int, var_69_int);
	}
}


void func_286(object var_40_object)
{
	int var_44_int;
	if(!var_40_object) { //@nz
	}
	bool var_43_bool;
	var_40_object->HasProperty("noaccess", var_43_bool);
	if(var_43_bool != 0) {
		var_40_object->GetProperty("noaccess", var_44_int);
		var_40_object->SetProperty("noaccess", (var_44_int + 1));
	} else {
		var_40_object->SetProperty("noaccess", 1);
	}
	
}


void func_375(object var_13_object)
{
	int var_17_int; object var_19_object;
	var_13_object->size(var_17_int);
	int var_18_int = 0;
	
	while(var_18_int < var_17_int) {
		var_13_object->get(var_19_object, var_18_int);
		if(var_19_object != 0)
			@RemoveActor(var_19_object);
		var_19_object = null;
		var_18_int += 1;
	}
	
	var_13_object->clear();
}


