maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor)
	{
		bool var_19_bool;
		func_81(var_19_bool);
		if(var_19_bool != 0) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return 18;
		}
		string var_10_string;
		@GetActorName(var_10_string);
		int var_26_int; string var_27_string;
		var_10_string = var_27_string;
		func_71(var_26_int, var_27_string, "@");
		int var_11_int;
		var_26_int = var_11_int;
		if(var_11_int == -1) {
			@Trace("Wrong door name");
			return 18;
		}
		object var_12_object;
		@GetMainOutdoorScene(var_12_object);
		if(var_12_object == null) {
			@Trace("No main outdoor scene");
			return 18;
		}
		object var_13_object;
		@GetScene(var_13_object);
		string var_14_string;
		var_13_object->GetName(var_14_string);
		var_39_int = ("pt_" + var_14_string) + "@";
		string var_40_string; string var_41_string;
		var_10_string = var_41_string;
		func_76(var_40_string, var_41_string, (var_11_int + 1));
		string var_15_string = var_39_int + var_40_string;
		@Trace(var_15_string);
		bool var_16_bool;
		cvector var_17_cvector;
		cvector var_18_cvector;
		var_12_object->GetLocator(var_15_string, var_16_bool, var_17_cvector, var_18_cvector);
		if(var_16_bool != 0) {
			@PlaySharedSound("door_open");
			@Teleport(actor, var_12_object, var_17_cvector, var_18_cvector);
		}
	}
	EMIT "Stack[-6] = 0";
	EMIT "Stack[-7] = 0";

}


void func_81(bool var_19_bool)
{
	int var_21_int;
	@GetProperty("locked", var_21_int);
	var_19_bool = var_21_int != 0;
}


void func_76(string var_40_string, string var_41_string, int var_42_int)
{
	string var_45_string;
	@_strsub(var_45_string, var_41_string, var_42_int);
	var_45_string = var_40_string;
}


void func_71(int var_26_int, string var_27_string, string var_28_string)
{
	int var_30_int;
	@_strchr(var_30_int, var_27_string, var_28_string);
	var_30_int = var_26_int;
}


