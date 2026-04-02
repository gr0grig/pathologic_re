maintask task_0
{
	void init(void)
	{
		@DisableUpdate();
		func_19();
	}

	// @pe
	void OnUse(object actor)
	{
		bool var_1_bool;
		func_137(var_1_bool);
		if(var_1_bool != 0)
			func_161();
		object var_40_object;
		actor = var_40_object;
		func_26(var_40_object);
	}

}


void func_161(void)
{
	int var_30_int;
	func_113(var_30_int);
	int var_28_int;
	var_30_int = var_28_int;
	@SetVariable(("Performance" + var_28_int), 1);
	@PlayMovie(("NightMasks" + (var_28_int - 1)) + ".wmv");
}


void func_130(bool var_57_bool)
{
	int var_59_int;
	@GetProperty("locked", var_59_int);
	var_57_bool = var_59_int != 0;
}


void func_98(int var_64_int, string var_65_string, string var_66_string)
{
	int var_68_int;
	@_strchr(var_68_int, var_65_string, var_66_string);
	var_68_int = var_64_int;
}


void func_122(int var_8_int)
{
	float var_10_float;
	@GetGameTime(var_10_float);
	int var_11_int;
	var_10_float = var_11_int;
	var_8_int = var_11_int % 24;
}


void func_103(string var_79_string, string var_80_string, int var_81_int)
{
	string var_84_string;
	@_strsub(var_84_string, var_80_string, var_81_int);
	var_84_string = var_79_string;
}


void func_137(bool var_1_bool)
{
	int var_6_int; int var_7_int;
	int var_8_int;
	func_122(var_8_int);
	int var_5_int;
	var_8_int = var_5_int;
	if(var_5_int < 6) {
		int var_15_int;
		func_113(var_15_int);
		var_15_int = var_6_int;
		if(var_6_int > 1) {
			@GetVariable(("Performance" + var_6_int), var_7_int);
			var_1_bool = var_7_int == 0;
			return 6;
		}
	}
	var_1_bool = false;
}


void func_108(string var_72_string, string var_73_string, int var_74_int, int var_75_int)
{
	string var_77_string;
	@_strsub(var_77_string, var_73_string, var_74_int, var_75_int);
	var_77_string = var_72_string;
}


void func_113(int var_15_int)
{
	float var_17_float;
	@GetGameTime(var_17_float);
	var_15_int = 1 + (var_17_float / 24);
}


void func_19(void)
{
	@SetVisibility(true);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_26(object var_40_object)
{
	bool var_57_bool;
	func_130(var_57_bool);
	if(var_57_bool != 0) {
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return 16;
	}
	string var_49_string;
	@GetActorName(var_49_string);
	int var_64_int; string var_65_string;
	var_49_string = var_65_string;
	func_98(var_64_int, var_65_string, "@");
	int var_50_int;
	var_64_int = var_50_int;
	if(var_50_int == -1) {
		@Trace("Wrong door name");
		return 16;
	}
	string var_72_string; string var_73_string; int var_75_int;
	var_49_string = var_73_string;
	func_108(var_72_string, var_73_string, 0, var_75_int);
	string var_51_string;
	var_72_string = var_51_string;
	string var_79_string; string var_80_string;
	var_49_string = var_80_string;
	func_103(var_79_string, var_80_string, (var_75_int + 1));
	string var_52_string = "pt_" + var_79_string;
	object var_53_object;
	@GetSceneByName(var_53_object, var_51_string);
	if(var_53_object == null) {
		@Trace(("Destination scene '" + var_51_string) + "' not found");
		return 16;
	}
	bool var_54_bool;
	cvector var_55_cvector;
	cvector var_56_cvector;
	var_53_object->GetLocator(var_52_string, var_54_bool, var_55_cvector, var_56_cvector);
	if(var_54_bool != 0) {
		@PlaySharedSound("door_open");
		@Teleport(var_40_object, var_53_object, var_55_cvector, var_56_cvector);
	} else {
		@Trace((("Locator " + var_52_string) + " not found in destination scene ") + var_51_string);
	}
	
}
EMIT "Stack[-4] = 0";


