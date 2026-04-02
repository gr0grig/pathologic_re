maintask task_0
{
	void init(void)
	{
		func_29("woman", "woman");
		func_29("worker", "man");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(void)
	{
		bool var_0_bool;
		func_156(var_0_bool, "quest_b4_02", "house_load");
		func_23();
	}

}


task task_1
{
	void OnUnload(void)
	{
		@StopGroup0();
	}

}


void func_97(cvector var_39_cvector)
{
	@Trace("New fog at " + var_39_cvector);
	object var_45_object;
	func_145(var_45_object);
	object var_41_object;
	@AddActorByType(var_41_object, "fog", var_45_object, var_39_cvector, [0.0, 0.0, 1.0], "horror_fog.xml");
}
EMIT "Stack[-1] = 0";


void func_130(cvector var_21_cvector, cvector var_22_cvector)
{
	object var_24_object;
	bool var_25_bool;
	func_151(var_25_bool, 0.5);
	if(var_25_bool != 0) {
		object var_30_object;
		func_145(var_30_object);
		@AddActorByType(var_24_object, "fog", var_30_object, var_21_cvector, var_22_cvector, "fog_stat.xml");
		var_24_object = null;
	}
}


void func_69(void)
{
	cvector var_9_cvector;
	func_112();
	bool var_8_bool;
	@Sleep(3, var_8_bool);
	if(var_8_bool == 0) goto Label_93;
	
	for(;;) {
		@GetRandomPFPoint(var_9_cvector, 0, 0);
		cvector var_39_cvector;
		var_9_cvector = var_39_cvector;
		func_97(var_39_cvector);
		@Sleep(30, var_8_bool);
		if(!var_8_bool) { //@nz
		}
	}
}


void func_112(void)
{
	int var_14_int; bool var_15_bool; cvector var_16_cvector; cvector var_17_cvector;
	var_14_int = 1;
	
	for(;;) {
		@GetLocator(("pt_fog" + var_14_int), var_15_bool, var_16_cvector, var_17_cvector);
		if(!var_15_bool) //@nz
			break;
		cvector var_21_cvector; cvector var_22_cvector;
		var_16_cvector = var_21_cvector;
		var_17_cvector = var_22_cvector;
		func_130(var_21_cvector, var_22_cvector);
		var_14_int += 1;
	}
}


void func_145(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_50(string var_14_string, string var_15_string, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_19_object;
	bool var_20_bool;
	func_151(var_20_bool, 0.5);
	if(var_20_bool != 0) {
		object var_26_object;
		func_145(var_26_object);
		@AddActor(var_19_object, ("pers_" + var_14_string), var_26_object, var_16_cvector, var_17_cvector, (("agony1_" + var_15_string) + ".xml"));
		var_19_object = null;
	}
}


void func_23(void)
{
	TaskCall(1);
	func_69();
	TaskReturn();
}


void func_151(bool var_20_bool, float var_21_float)
{
	float var_23_float;
	@rand(var_23_float);
	var_20_bool = var_23_float < var_21_float;
}


void func_156(bool var_0_bool, string var_1_string, string var_2_string)
{
	object var_4_object;
	@FindActor(var_4_object, var_1_string);
	if(var_4_object == null)
		var_0_bool = false;
	@Trigger(var_4_object, var_2_string);
	var_0_bool = true;
}
EMIT "Stack[-1] = 0";


void func_29(string var_0_string, string var_1_string)
{
	int var_6_int; bool var_7_bool; cvector var_8_cvector; cvector var_9_cvector;
	var_6_int = 1;
	
	for(;;) {
		@GetLocator((("pt_agony_" + var_0_string) + var_6_int), var_7_bool, var_8_cvector, var_9_cvector);
		if(!var_7_bool) //@nz
			break;
		string var_14_string; string var_15_string; cvector var_16_cvector; cvector var_17_cvector;
		var_0_string = var_14_string;
		var_1_string = var_15_string;
		var_8_cvector = var_16_cvector;
		var_9_cvector = var_17_cvector;
		func_50(var_14_string, var_15_string, var_16_cvector, var_17_cvector);
		var_6_int += 1;
	}
}


