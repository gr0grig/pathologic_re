// @GLOBALS: 0:object:

maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		@SetVariable("k7q03", 1);
		func_107(7);
	}

	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		object var_5_object;
		@Trace(var_3_string);
		if(var_3_string == "place_family") {
			@GetSceneByName(var_5_object, "burah_home");
			object var_9_object; object var_10_object;
			var_5_object = var_10_object;
			func_137(var_9_object, var_10_object, "pt_k7q03_father", "pers_unosha", "k7q03_father.xml");
			var_0_object = var_9_object;
			object var_27_object; object var_28_object;
			var_5_object = var_28_object;
			func_137(var_27_object, var_28_object, "pt_k7q03_daughter", "pers_littlegirl", "k7q03_daughter.xml");
			var_1_object = var_27_object;
			object var_32_object; object var_33_object;
			var_5_object = var_33_object;
			func_137(var_32_object, var_33_object, "pt_k7q03_son", "pers_littleboy", "k7q03_son.xml");
			var_2_object = var_32_object;
			var_5_object = null;
		} else if(var_3_string == "completed") {
				func_77();
		}
	Label_57:
		for(;;) {

		}
	
		if(!(var_3_string == "fail")) goto Label_57;
		func_69();
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		func_58();
	}

}


void func_131(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


void func_69(void)
{
	@SetVariable("k7q03", -1);
	func_85(var_4_float, var_5_int, var_6_int);
}


void func_137(object var_9_object, object var_10_object, string var_11_string, string var_12_string, string var_13_string)
{
	bool var_18_bool; cvector var_19_cvector; cvector var_20_cvector;
	var_10_object->GetLocator(var_11_string, var_18_bool, var_19_cvector, var_20_cvector);
	if(!var_18_bool) //@nz
		@Trace(("Locator " + var_11_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_12_string, var_10_object, var_19_cvector, var_20_cvector, var_13_string);
	object var_21_object = var_9_object;
	
}
EMIT "Stack[-1] = 0";


void func_107(int var_5_int)
{
	float var_6_float; float var_7_float;
	@GetGameTime(var_7_float);
	if(var_7_float >= (var_5_int * 24)) {
		func_85(var_5_int, var_6_float, var_7_float);
	} else {
		@SetTimeEvent(0, (var_5_int * 24));
		@Hold();
	}
	
}


void func_77(void)
{
	@SetVariable("k7q03", 1000);
	func_85(var_3_string, var_4_object, var_5_object);
}


void func_85(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	object var_17_object;
	func_131(var_17_object);
	@RemoveActor(var_17_object);
}


void func_58(void)
{
	int var_6_int;
	@GetVariable("k7q03", var_6_int);
	if(var_6_int != 1000)
		func_69();
}


