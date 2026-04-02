maintask task_0
{
	void init(bool var_0_bool, object var_1_object)
	{
		var_0_bool = false;
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnLoad(bool var_0_bool, object var_1_object)
	{
		float var_4_float; float var_5_float;
		if(!var_0_bool) { //@nz
			@GetGameTime(var_4_float);
			bool var_7_bool = false;
			if(var_4_float >= 240) {
				if(var_4_float < 264)
					var_7_bool = true;
			}
			if(var_7_bool != 0) {
				var_0_bool = true;
				object var_12_object; object var_13_object;
				object var_17_object;
				func_44(var_17_object);
				var_17_object = var_13_object;
				func_50(var_12_object, var_13_object, "pt_d11q03_Burah", "NPC_Burah", "d11q03_Burah.xml");
				var_1_object = var_12_object;
			}
		} else {
			@GetGameTime(var_5_float);
			if(!(var_5_float >= 264)) goto Label_43;
			if(var_1_object != 0)
				@RemoveActor(var_1_object);
			var_0_bool = false;
		}
	Label_43:
	
	}

}


void func_50(object var_12_object, object var_13_object, string var_14_string, string var_15_string, string var_16_string)
{
	bool var_24_bool; cvector var_25_cvector; cvector var_26_cvector;
	var_13_object->GetLocator(var_14_string, var_24_bool, var_25_cvector, var_26_cvector);
	if(!var_24_bool) //@nz
		@Trace(("Locator " + var_14_string) + " doesn't exist");
	else
		@AddActor(Obj(), var_15_string, var_13_object, var_25_cvector, var_26_cvector, var_16_string);
	object var_27_object = var_12_object;
	
}
EMIT "Stack[-1] = 0";


void func_44(object var_17_object)
{
	object var_19_object;
	@self(var_19_object);
	var_19_object = var_17_object;
}
EMIT "Stack[-1] = 0";


