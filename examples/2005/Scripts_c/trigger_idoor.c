maintask task_0
{
	void init(void)
	{
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnIntersection(object actor)
	{
		bool var_11_bool;
		@IsPlayerActor(actor, var_11_bool);
		if(!var_11_bool) //@nz
			return 20;
		bool var_22_bool;
		func_74(var_22_bool);
		if(var_22_bool != 0)
			return 20;
		string var_12_string;
		@GetActorName(var_12_string);
		int var_27_int; string var_28_string;
		var_12_string = var_28_string;
		func_64(var_27_int, var_28_string, "@");
		int var_13_int;
		var_27_int = var_13_int;
		if(var_13_int == -1) {
			@Trace("Wrong door name");
			return 20;
		}
		object var_14_object;
		@GetMainOutdoorScene(var_14_object);
		if(var_14_object == null) {
			@Trace("No main outdoor scene");
			return 20;
		}
		object var_15_object;
		@GetScene(var_15_object);
		string var_16_string;
		var_15_object->GetName(var_16_string);
		var_40_int = ("pt_" + var_16_string) + "@";
		string var_41_string; string var_42_string;
		var_12_string = var_42_string;
		func_69(var_41_string, var_42_string, (var_13_int + 1));
		string var_17_string = var_40_int + var_41_string;
		@Trace(var_17_string);
		bool var_18_bool;
		cvector var_19_cvector;
		cvector var_20_cvector;
		var_14_object->GetLocator(var_17_string, var_18_bool, var_19_cvector, var_20_cvector);
		if(var_18_bool != 0)
			@Teleport(actor, var_14_object, var_19_cvector, var_20_cvector);
	}
	EMIT "Stack[-6] = 0";
	EMIT "Stack[-7] = 0";

}


void func_64(int var_27_int, string var_28_string, string var_29_string)
{
	int var_31_int;
	@_strchr(var_31_int, var_28_string, var_29_string);
	var_31_int = var_27_int;
}


void func_74(bool var_22_bool)
{
	int var_24_int;
	@GetProperty("locked", var_24_int);
	var_22_bool = var_24_int != 0;
}


void func_69(string var_41_string, string var_42_string, int var_43_int)
{
	string var_46_string;
	@_strsub(var_46_string, var_42_string, var_43_int);
	var_46_string = var_41_string;
}


