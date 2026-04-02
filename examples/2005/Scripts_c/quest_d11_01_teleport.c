maintask task_0
{
	void init(void)
	{
		object var_8_object; bool var_10_bool; object var_11_object; cvector var_12_cvector; cvector var_13_cvector; float var_14_float; float var_15_float;
		@GetMainOutdoorScene(var_8_object);
		func_130((float)0, (float)1, 1.0);
		object var_9_object;
		@FindActor(var_9_object, "player");
		if(var_9_object != 0) {
			@GetSceneByName(var_11_object, "storojka");
			var_11_object->GetLocator("birth", var_10_bool, var_12_cvector, var_13_cvector);
			@Teleport(var_9_object, var_11_object, var_12_cvector, var_13_cvector);
			@sync();
			var_8_object->GetLocator("pt_d11q01_teleport", var_10_bool, var_12_cvector, var_13_cvector);
			@Teleport(var_9_object, var_8_object, var_12_cvector, var_13_cvector);
			var_9_object->GetProperty("health", var_14_float);
			if(var_14_float > 0.2)
				var_9_object->SetProperty("health", 0.2);
			var_9_object->GetProperty("tiredness", var_15_float);
			if(var_15_float > 0.6) {
				var_9_object->SetProperty("tiredness", 0.6);
				func_120(0.6 - var_15_float);
			}
			var_11_object = null;
		}
		@sync();
		func_130((float)1, (float)0, 5.0);
		object var_53_object; object var_54_object;
		var_8_object = var_54_object;
		func_102(var_53_object, var_54_object, "pt_d11q01_dog1", "pers_dog", "d11q01_dog.xml");
		object var_71_object; object var_72_object;
		var_8_object = var_72_object;
		func_102(var_71_object, var_72_object, "pt_d11q01_dog2", "pers_dog", "d11q01_dog.xml");
		object var_76_object; object var_77_object;
		var_8_object = var_77_object;
		func_102(var_76_object, var_77_object, "pt_d11q01_dog3", "pers_dog", "d11q01_dog.xml");
		@SetVariable("d11q01SoldierAttack", 1);
		object var_83_object;
		func_96(var_83_object);
		@RemoveActor(var_83_object);
	}
	EMIT "Stack[-7] = 0";
	EMIT "Stack[-8] = 0";

}


void func_120(float var_45_float)
{
	object var_48_object;
	@CreateFloatVector(var_48_object);
	var_48_object->add(var_45_float);
	@SendWorldWndMessage(11, var_48_object);
}
EMIT "Stack[-1] = 0";


void func_130(float var_16_float, float var_17_float, float var_18_float)
{
	bool var_22_bool; float var_24_float;
	var_22_bool = var_17_float > var_16_float;
	
	for(;;) {
		if(var_22_bool != 0)
			var_27_bool = var_16_float < var_17_float;
		else
			var_29_bool = var_17_float < var_16_float;
		if(var_27_bool == 0) goto Label_147;
		@ModDarkenLevel(var_16_float);
		@sync(var_24_float);
		var_16_float += (var_24_float * ((var_17_float - var_16_float) / var_18_float));
	}
	
Label_147:
	@ModDarkenLevel(var_17_float);
	
}


void func_96(object var_83_object)
{
	object var_85_object;
	@self(var_85_object);
	var_85_object = var_83_object;
}
EMIT "Stack[-1] = 0";


void func_102(object var_53_object, object var_54_object, string var_55_string, string var_56_string, string var_57_string)
{
	bool var_62_bool; cvector var_63_cvector; cvector var_64_cvector;
	var_54_object->GetLocator(var_55_string, var_62_bool, var_63_cvector, var_64_cvector);
	if(!var_62_bool) //@nz
		@Trace(("Locator " + var_55_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_56_string, var_54_object, var_63_cvector, var_64_cvector, var_57_string);
	object var_65_object = var_53_object;
	
}
EMIT "Stack[-1] = 0";


