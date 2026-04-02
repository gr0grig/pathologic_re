// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		object var_3_object;
		func_185(var_3_object);
		var_2_object = var_3_object;
		func_148(6);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_11_object; object var_12_object; int var_13_int; bool var_14_bool; cvector var_15_cvector; cvector var_16_cvector; object var_17_object;
		@Trace(var_3_string);
		if(var_3_string == "place_klara") {
			@GetSceneByName(var_11_object, "cot_anna");
			object var_21_object; object var_22_object;
			var_11_object = var_22_object;
			func_191(var_21_object, var_22_object, "pt_b6q02_klara", "NPC_Klara", "b6q02_klara.xml");
			var_0_object = var_21_object;
			var_11_object = null;
		} else {
				if(var_3_string == "init_maze") {
					func_209("house_vlad@door2", false);
					@GetSceneByName(var_12_object, "house_vlad");
					object var_52_object; object var_53_object;
					var_12_object = var_53_object;
					func_191(var_52_object, var_53_object, "pt_prorok", "pers_krysa", "b6q02_prorok.xml");
					var_1_object = var_52_object;
					var_13_int = 1;

				Label_48:
					var_12_object->GetLocator(("pt_fog" + var_13_int), var_14_bool, var_15_cvector, var_16_cvector);
					if(!var_14_bool) { //@nz
					} else {
					@AddActorByType(var_17_object, "fog", var_12_object, var_15_cvector, var_16_cvector, "fog_stat_indoor.xml");
					var_2_object->add(var_17_object); //@t
					var_17_object = null;
					var_13_int += 1;
					goto Label_48;
				}
				if(var_3_string == "maze_start") {
					object var_65_object;
					object var_68_object;
					func_172(var_68_object);
					var_68_object = var_65_object;
					func_226(var_65_object, "house_vlad", "pt_maze_start");
				} else if(var_3_string == "fail") {
					func_105();
				} else if(var_3_string == "completed") {
					func_113();
				}
				}
				var_12_object = null;
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		func_94();
	}

}


void func_121(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	func_250(var_2_object, "cleanup");
	func_209("house_vlad@door2", true);
	object var_38_object;
	func_179(var_38_object);
	@RemoveActor(var_38_object);
}


void func_226(object var_65_object, string var_66_string, string var_67_string)
{
	if(!var_65_object) { //@nz
	}
	object var_76_object;
	@GetSceneByName(var_76_object, var_66_string);
	bool var_77_bool;
	cvector var_78_cvector;
	cvector var_79_cvector;
	var_76_object->GetLocator(var_67_string, var_77_bool, var_78_cvector, var_79_cvector);
	if(!var_77_bool) //@nz
		@Trace(((("Teleport location '" + var_67_string) + "' not found in scene '") + var_66_string) + "'");
	else
		@Teleport(var_65_object, var_76_object, var_78_cvector, var_79_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_105(void)
{
	@SetVariable("b6q02", -1);
	func_121(var_4_float, var_5_int, var_6_int);
}


void func_172(object var_68_object)
{
	object var_70_object;
	@FindActor(var_70_object, "player");
	var_70_object = var_68_object;
}
EMIT "Stack[-1] = 0";


void func_209(string var_28_string, bool var_29_bool)
{
	object var_31_object;
	@FindActor(var_31_object, var_28_string);
	if(!var_31_object) //@nz
		@Trace(("Door " + var_28_string) + " not found");
	else
		var_31_object->SetProperty("locked", var_29_bool);
	
}
EMIT "Stack[-1] = 0";


void func_113(void)
{
	@SetVariable("b6q02", 1000);
	func_121(var_15_cvector, var_16_cvector, var_17_object);
}


void func_179(object var_38_object)
{
	object var_40_object;
	@self(var_40_object);
	var_40_object = var_38_object;
}
EMIT "Stack[-1] = 0";


void func_148(int var_6_int)
{
	float var_7_float; float var_8_float;
	@GetGameTime(var_8_float);
	if(var_8_float >= (var_6_int * 24)) {
		func_121(var_6_int, var_7_float, var_8_float);
	} else {
		@SetTimeEvent(0, (var_6_int * 24));
		@Hold();
	}
	
}


void func_185(object var_3_object)
{
	object var_5_object;
	@CreateObjectVector(var_5_object);
	var_5_object = var_3_object;
}
EMIT "Stack[-1] = 0";


void func_250(object var_16_object, string var_17_string)
{
	int var_21_int; int var_22_int; object var_23_object;
	if(var_16_object != 0) {
		var_16_object->size(var_21_int);
		var_22_int = 0;

		for(;;) {
			if(!(var_22_int < var_21_int)) goto Label_268;
			var_16_object->get(var_23_object, var_22_int);
			if(var_23_object != 0)
				@Trigger(var_23_object, var_17_string);
			var_23_object = null;
			var_22_int += 1;
		}
	}
Label_268:
}


void func_94(void)
{
	int var_6_int;
	@GetVariable("b6q02", var_6_int);
	if(var_6_int != 1000)
		func_105();
}


void func_191(object var_21_object, object var_22_object, string var_23_string, string var_24_string, string var_25_string)
{
	bool var_30_bool; cvector var_31_cvector; cvector var_32_cvector;
	var_22_object->GetLocator(var_23_string, var_30_bool, var_31_cvector, var_32_cvector);
	if(!var_30_bool) //@nz
		@Trace(("Locator " + var_23_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_24_string, var_22_object, var_31_cvector, var_32_cvector, var_25_string);
	object var_33_object = var_21_object;
	
}
EMIT "Stack[-1] = 0";


