maintask task_0
{
	void init(object var_0_object, object var_1_object, object var_2_object)
	{
		float var_5_float;
		@GetGameTime(var_5_float);
		int var_7_int;
		func_163(var_7_int);
		if(var_7_int == 8) {
			int var_15_int; float var_16_float;
			var_5_float = var_16_float;
			func_172(var_15_int, var_16_float);
		}
		object var_6_object;
		@GetSceneByName(var_6_object, "cot_eva");
		object var_25_object; object var_26_object;
		var_6_object = var_26_object;
		func_145(var_25_object, var_26_object, "pt_d8q02_doberman1", "pers_doberman", "d8q02_doberman.xml");
		var_0_object = var_25_object;
		object var_43_object; object var_44_object;
		var_6_object = var_44_object;
		func_145(var_43_object, var_44_object, "pt_d8q02_doberman2", "pers_doberman", "d8q02_doberman.xml");
		var_1_object = var_43_object;
		object var_48_object; object var_49_object;
		var_6_object = var_49_object;
		func_145(var_48_object, var_49_object, "pt_d8q02_doberman3", "pers_doberman", "d8q02_doberman.xml");
		var_2_object = var_48_object;
		@Trace("d8q02 dobermans are placed");
		func_115(8);
	}
	EMIT "Stack[-1] = 0";

	// @pe
	void OnTrigger(object var_0_object, object var_1_object, object var_2_object, string var_3_string)
	{
		@Trace(var_3_string);
		if(var_3_string == "fail") {
			func_77();
		} else if(var_3_string == "completed") {
			func_85();
		}
	
	}

	// @pe
	void OnGameTime(object var_0_object, object var_1_object, object var_2_object, int var_3_int, float var_4_float)
	{
		func_66();
	}

}


void func_66(void)
{
	int var_6_int;
	@GetVariable("d8q02", var_6_int);
	if(var_6_int != 1000)
		func_77();
}


void func_163(int var_7_int)
{
	float var_9_float;
	@GetGameTime(var_9_float);
	var_7_int = 1 + (var_9_float / 24);
}


void func_139(object var_66_object)
{
	object var_68_object;
	@self(var_68_object);
	var_68_object = var_66_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_172(int var_15_int, float var_16_float)
{
	float var_20_float;
	var_16_float = var_20_float;
	int var_17_int;
	func_181(var_17_int, 533303, 533302, var_20_float);
	var_17_int = var_15_int;
}


void func_77(void)
{
	@SetVariable("d8q02", -1);
	func_93(var_4_float, var_5_int, var_6_int);
}


void func_145(object var_25_object, object var_26_object, string var_27_string, string var_28_string, string var_29_string)
{
	bool var_34_bool; cvector var_35_cvector; cvector var_36_cvector;
	var_26_object->GetLocator(var_27_string, var_34_bool, var_35_cvector, var_36_cvector);
	if(!var_34_bool) //@nz
		@Trace(("Locator " + var_27_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_28_string, var_26_object, var_35_cvector, var_36_cvector, var_29_string);
	object var_37_object = var_25_object;
	
}
EMIT "Stack[-1] = 0";


void func_115(int var_54_int)
{
	float var_55_float; float var_56_float;
	@GetGameTime(var_56_float);
	if(var_56_float >= (var_54_int * 24)) {
		func_93(var_54_int, var_55_float, var_56_float);
	} else {
		@SetTimeEvent(0, (var_54_int * 24));
		@Hold();
	}
	
}


void func_85(void)
{
	@SetVariable("d8q02", 1000);
	func_93(var_1_object, var_2_object, var_3_string);
}


void func_181(int var_17_int, int var_18_int, int var_19_int, float var_20_float)
{
	int var_22_int;
	@AddMessage(var_18_int, var_19_int, var_20_float, var_22_int);
	@SendWorldWndMessage(6);
	var_22_int = var_17_int;
}


void func_93(object var_0_object, object var_1_object, object var_2_object)
{
	if(var_0_object != 0)
		@Trigger(var_0_object, "cleanup");
	if(var_1_object != 0)
		@Trigger(var_1_object, "cleanup");
	if(var_2_object != 0)
		@Trigger(var_2_object, "cleanup");
	object var_66_object;
	func_139(var_66_object);
	@RemoveActor(var_66_object);
}


