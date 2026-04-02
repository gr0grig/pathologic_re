maintask task_0
{
	void init(void)
	{
		@DisableUpdate();
		func_6();
	}

	void OnUse(object actor)
	{
		int var_19_int;
		func_151(var_19_int);
		int var_10_int;
		var_19_int = var_10_int;
		if(var_10_int == 0) {
			bool var_25_bool;
			func_144(var_25_bool);
			if(var_25_bool != 0) {
				@PlaySound("door_closed");
				func_134(403);
				@Trace("Door is locked");
				return 18;
			}
		} else {
				@PlaySound("door_closed");
				if(var_10_int == 1) {
					@Trace("Door is disease locked");
					func_134(401);
				} else {
					@Trace("Door is dead locked");
					func_134(402);
				}
				return 18;
		}
		string var_11_string;
		@GetActorName(var_11_string);
		int var_36_int; string var_37_string;
		var_11_string = var_37_string;
		func_119(var_36_int, var_37_string, "@");
		int var_12_int;
		var_36_int = var_12_int;
		if(var_12_int == -1) {
			@Trace("Wrong door name");
			return 18;
		}
		string var_44_string; string var_45_string; int var_47_int;
		var_11_string = var_45_string;
		func_129(var_44_string, var_45_string, 0, var_47_int);
		string var_13_string;
		var_44_string = var_13_string;
		string var_51_string; string var_52_string;
		var_11_string = var_52_string;
		func_124(var_51_string, var_52_string, (var_47_int + 1));
		string var_14_string = "pt_" + var_51_string;
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
		if(var_16_bool != 0) {
			@PlaySharedSound("door_open");
			@Teleport(actor, var_15_object, var_17_cvector, var_18_cvector);
		} else {
			@Trace((("Locator " + var_14_string) + " not found in destination scene ") + var_13_string);

		}
	
	}
	EMIT "Stack[-4] = 0";

}


void func_129(string var_44_string, string var_45_string, int var_46_int, int var_47_int)
{
	string var_49_string;
	@_strsub(var_49_string, var_45_string, var_46_int, var_47_int);
	var_49_string = var_44_string;
}


void func_134(int var_31_int)
{
	object var_33_object;
	@CreateIntVector(var_33_object);
	var_33_object->add(var_31_int);
	@SendWorldWndMessage(200, var_33_object);
}
EMIT "Stack[-1] = 0";


void func_6(void)
{
	@SetVisibility(true);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_144(bool var_25_bool)
{
	int var_27_int;
	@GetProperty("locked", var_27_int);
	var_25_bool = var_27_int != 0;
}


void func_119(int var_36_int, string var_37_string, string var_38_string)
{
	int var_40_int;
	@_strchr(var_40_int, var_37_string, var_38_string);
	var_40_int = var_36_int;
}


void func_151(int var_19_int)
{
	int var_21_int;
	@GetProperty("dlocked", var_21_int);
	var_21_int = var_19_int;
}


void func_124(string var_51_string, string var_52_string, int var_53_int)
{
	string var_56_string;
	@_strsub(var_56_string, var_52_string, var_53_int);
	var_56_string = var_51_string;
}


