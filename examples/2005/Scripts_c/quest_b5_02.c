// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object)
	{
		func_97(5);
	}

	void OnTrigger(object var_0_object, string var_1_string)
	{
		object var_3_object;
		@Trace(var_1_string);
		if(var_1_string == "place_prophet") {
			@GetSceneByName(var_3_object, "house_vlad");
			object var_7_object; object var_8_object;
			var_3_object = var_8_object;
			func_134(var_7_object, var_8_object, "pt_prorok", "pers_krysa", "b5q02_prorok.xml");
			var_3_object = null;
		} else if(var_1_string == "remove_prophet") {
				@Trigger(var_7_object, "cleanup");
		}

	
		if(var_1_string == "maze_start") {
			object var_30_object;
			object var_33_object;
			func_121(var_33_object);
			var_33_object = var_30_object;
			func_152(var_30_object, "house_vlad", "pt_maze_start");
		} else if(var_1_string == "fail") {
			func_69();
		} else if(var_1_string == "completed") {
			func_77();
		}
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_58();
	}

}


void func_128(object var_9_object)
{
	object var_11_object;
	@self(var_11_object);
	var_11_object = var_9_object;
}
EMIT "Stack[-1] = 0";


void func_97(int var_1_int)
{
	float var_3_float;
	@GetGameTime(var_3_float);
	if(var_3_float >= (var_1_int * 24)) {
		func_85(var_3_float);
	} else {
		@SetTimeEvent(0, (var_1_int * 24));
		@Hold();
	}
	
}


void func_69(void)
{
	@SetVariable("b5q02", -1);
	func_85(var_4_int);
}


void func_134(object var_7_object, object var_8_object, string var_9_string, string var_10_string, string var_11_string)
{
	bool var_16_bool; cvector var_17_cvector; cvector var_18_cvector;
	var_8_object->GetLocator(var_9_string, var_16_bool, var_17_cvector, var_18_cvector);
	if(!var_16_bool) //@nz
		@Trace(("Locator " + var_9_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_10_string, var_8_object, var_17_cvector, var_18_cvector, var_11_string);
	object var_19_object = var_7_object;
	
}
EMIT "Stack[-1] = 0";


void func_77(void)
{
	@SetVariable("b5q02", 1000);
	func_85(var_3_object);
}


void func_85(object var_0_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	object var_9_object;
	func_128(var_9_object);
	@RemoveActor(var_9_object);
}


void func_152(object var_30_object, string var_31_string, string var_32_string)
{
	if(!var_30_object) { //@nz
	}
	object var_41_object;
	@GetSceneByName(var_41_object, var_31_string);
	bool var_42_bool;
	cvector var_43_cvector;
	cvector var_44_cvector;
	var_41_object->GetLocator(var_32_string, var_42_bool, var_43_cvector, var_44_cvector);
	if(!var_42_bool) //@nz
		@Trace(((("Teleport location '" + var_32_string) + "' not found in scene '") + var_31_string) + "'");
	else
		@Teleport(var_30_object, var_41_object, var_43_cvector, var_44_cvector);
	
}
EMIT "Stack[-4] = 0";


void func_121(object var_33_object)
{
	object var_35_object;
	@FindActor(var_35_object, "player");
	var_35_object = var_33_object;
}
EMIT "Stack[-1] = 0";


void func_58(void)
{
	int var_4_int;
	@GetVariable("b5q02", var_4_int);
	if(var_4_int != 1000)
		func_69();
}


