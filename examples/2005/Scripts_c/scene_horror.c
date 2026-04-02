maintask task_0
{
	void init(void)
	{
		func_20("woman", "woman");
		func_20("worker", "man");
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(void)
	{
		TaskCall(1);
		func_60();
		TaskReturn();
	}

}


task task_1
{
	void OnUnload(void)
	{
		@StopGroup0();
	}

}


void func_103(void)
{
	int var_8_int; bool var_9_bool; cvector var_10_cvector; cvector var_11_cvector;
	var_8_int = 1;
	
	for(;;) {
		@GetLocator(("pt_fog" + var_8_int), var_9_bool, var_10_cvector, var_11_cvector);
		if(!var_9_bool) //@nz
			break;
		cvector var_15_cvector; cvector var_16_cvector;
		var_10_cvector = var_15_cvector;
		var_11_cvector = var_16_cvector;
		func_121(var_15_cvector, var_16_cvector);
		var_8_int += 1;
	}
}


void func_136(object var_26_object)
{
	object var_28_object;
	@self(var_28_object);
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_41(string var_14_string, string var_15_string, cvector var_16_cvector, cvector var_17_cvector)
{
	object var_19_object;
	bool var_20_bool;
	func_142(var_20_bool, 0.5);
	if(var_20_bool != 0) {
		object var_26_object;
		func_136(var_26_object);
		@AddActor(var_19_object, ("pers_" + var_14_string), var_26_object, var_16_cvector, var_17_cvector, (("agony1_" + var_15_string) + ".xml"));
		var_19_object = null;
	}
}


void func_142(bool var_20_bool, float var_21_float)
{
	float var_23_float;
	@rand(var_23_float);
	var_20_bool = var_23_float < var_21_float;
}


void func_20(string var_0_string, string var_1_string)
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
		func_41(var_14_string, var_15_string, var_16_cvector, var_17_cvector);
		var_6_int += 1;
	}
}


void func_88(cvector var_33_cvector)
{
	@Trace("New fog at " + var_33_cvector);
	object var_39_object;
	func_136(var_39_object);
	object var_35_object;
	@AddActorByType(var_35_object, "fog", var_39_object, var_33_cvector, [0.0, 0.0, 1.0], "horror_fog.xml");
}
EMIT "Stack[-1] = 0";


void func_121(cvector var_15_cvector, cvector var_16_cvector)
{
	object var_18_object;
	bool var_19_bool;
	func_142(var_19_bool, 0.5);
	if(var_19_bool != 0) {
		object var_24_object;
		func_136(var_24_object);
		@AddActorByType(var_18_object, "fog", var_24_object, var_15_cvector, var_16_cvector, "fog_stat.xml");
		var_18_object = null;
	}
}


void func_60(void)
{
	cvector var_3_cvector;
	func_103();
	bool var_2_bool;
	@Sleep(3, var_2_bool);
	if(var_2_bool == 0) goto Label_84;
	
	for(;;) {
		@GetRandomPFPoint(var_3_cvector, 0, 0);
		cvector var_33_cvector;
		var_3_cvector = var_33_cvector;
		func_88(var_33_cvector);
		@Sleep(30, var_2_bool);
		if(!var_2_bool) { //@nz
		}
	}
}


