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
		bool var_10_bool;
		@IsPlayerActor(actor, var_10_bool);
		if(!var_10_bool) //@nz
			return 18;
		bool var_20_bool;
		func_90(var_20_bool);
		if(var_20_bool != 0) {
			@Trace("Trigger is locked");
			return 18;
		}
		string var_11_string;
		@GetActorName(var_11_string);
		int var_26_int; string var_27_string;
		var_11_string = var_27_string;
		func_75(var_26_int, var_27_string, "@");
		int var_12_int;
		var_26_int = var_12_int;
		if(var_12_int == -1) {
			@Trace("Wrong door name");
			return 18;
		}
		string var_34_string; string var_35_string; int var_37_int;
		var_11_string = var_35_string;
		func_85(var_34_string, var_35_string, 0, var_37_int);
		string var_13_string;
		var_34_string = var_13_string;
		string var_41_string; string var_42_string;
		var_11_string = var_42_string;
		func_80(var_41_string, var_42_string, (var_37_int + 1));
		string var_14_string = "pt_" + var_41_string;
		object var_15_object;
		@GetSceneByName(var_15_object, var_13_string);
		if(var_15_object == null) {
			@Trace(("Destination scene '" + var_13_string) + "' not found");
			return 18;
		}
		bool var_16_bool;
		cvector var_17_cvector;
		cvector var_18_cvector;
		var_15_object->GetLocator(var_14_string, var_16_bool, var_17_cvector, var_18_cvector);
		if(var_16_bool != 0)
			@Teleport(actor, var_15_object, var_17_cvector, var_18_cvector);
		else
			@Trace((("Locator " + var_14_string) + " not found in destination scene ") + var_13_string);
	
	}
	EMIT "Stack[-4] = 0";

}


void func_80(string var_41_string, string var_42_string, int var_43_int)
{
	string var_46_string;
	@_strsub(var_46_string, var_42_string, var_43_int);
	var_46_string = var_41_string;
}


void func_90(bool var_20_bool)
{
	int var_22_int;
	@GetProperty("locked", var_22_int);
	var_20_bool = var_22_int != 0;
}


void func_75(int var_26_int, string var_27_string, string var_28_string)
{
	int var_30_int;
	@_strchr(var_30_int, var_27_string, var_28_string);
	var_30_int = var_26_int;
}


void func_85(string var_34_string, string var_35_string, int var_36_int, int var_37_int)
{
	string var_39_string;
	@_strsub(var_39_string, var_35_string, var_36_int, var_37_int);
	var_39_string = var_34_string;
}


