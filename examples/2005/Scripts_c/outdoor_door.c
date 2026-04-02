maintask task_0
{
	void init(void)
	{
		@DisableUpdate();
		func_6();
	}

	void OnUse(object actor)
	{
		bool var_17_bool;
		func_100(var_17_bool);
		if(var_17_bool != 0) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return 16;
		}
		string var_9_string;
		@GetActorName(var_9_string);
		int var_24_int; string var_25_string;
		var_9_string = var_25_string;
		func_85(var_24_int, var_25_string, "@");
		int var_10_int;
		var_24_int = var_10_int;
		if(var_10_int == -1) {
			@Trace("Wrong door name");
			return 16;
		}
		string var_32_string; string var_33_string; int var_35_int;
		var_9_string = var_33_string;
		func_95(var_32_string, var_33_string, 0, var_35_int);
		string var_11_string;
		var_32_string = var_11_string;
		string var_39_string; string var_40_string;
		var_9_string = var_40_string;
		func_90(var_39_string, var_40_string, (var_35_int + 1));
		string var_12_string = "pt_" + var_39_string;
		object var_13_object;
		@GetSceneByName(var_13_object, var_11_string);
		if(var_13_object == null) {
			@Trace(("Destination scene '" + var_11_string) + "' not found");
			return 16;
		}
		bool var_14_bool;
		cvector var_15_cvector;
		cvector var_16_cvector;
		var_13_object->GetLocator(var_12_string, var_14_bool, var_15_cvector, var_16_cvector);
		if(var_14_bool != 0) {
			@PlaySharedSound("door_open");
			@Teleport(actor, var_13_object, var_15_cvector, var_16_cvector);
		} else {
			@Trace((("Locator " + var_12_string) + " not found in destination scene ") + var_11_string);
		}
	
	}
	EMIT "Stack[-4] = 0";

}


void func_100(bool var_17_bool)
{
	int var_19_int;
	@GetProperty("locked", var_19_int);
	var_17_bool = var_19_int != 0;
}


void func_6(void)
{
	@SetVisibility(true);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_85(int var_24_int, string var_25_string, string var_26_string)
{
	int var_28_int;
	@_strchr(var_28_int, var_25_string, var_26_string);
	var_28_int = var_24_int;
}


void func_90(string var_39_string, string var_40_string, int var_41_int)
{
	string var_44_string;
	@_strsub(var_44_string, var_40_string, var_41_int);
	var_44_string = var_39_string;
}


void func_95(string var_32_string, string var_33_string, int var_34_int, int var_35_int)
{
	string var_37_string;
	@_strsub(var_37_string, var_33_string, var_34_int, var_35_int);
	var_37_string = var_32_string;
}


