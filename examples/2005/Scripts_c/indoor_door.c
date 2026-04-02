maintask task_0
{
	void init(void)
	{
		@DisableUpdate();
		@SetVisibility(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(object actor)
	{
		object var_23_object; bool var_24_bool;
		bool var_25_bool;
		func_122(var_25_bool);
		if(var_25_bool != 0) {
			@PlaySound("door_closed");
			@Trace("Door is locked");
			return 24;
		}
		string var_13_string;
		@GetActorName(var_13_string);
		int var_32_int; string var_33_string;
		var_13_string = var_33_string;
		func_112(var_32_int, var_33_string, "@");
		int var_14_int;
		var_32_int = var_14_int;
		if(var_14_int == -1) {
			@Trace("Wrong door name");
			return 24;
		}
		object var_15_object;
		@GetMainOutdoorScene(var_15_object);
		if(var_15_object == null) {
			@Trace("No main outdoor scene");
			return 24;
		}
		object var_16_object;
		@GetScene(var_16_object);
		string var_17_string;
		var_16_object->GetName(var_17_string);
		string var_42_string; string var_43_string;
		var_13_string = var_43_string;
		func_117(var_42_string, var_43_string, (var_14_int + 1));
		string var_18_string;
		var_42_string = var_18_string;
		var_51_int = ("pt_" + var_17_string) + "@";
		string var_19_string = var_51_int + var_18_string;
		@Trace(var_19_string);
		bool var_20_bool;
		cvector var_21_cvector;
		cvector var_22_cvector;
		var_15_object->GetLocator(var_19_string, var_20_bool, var_21_cvector, var_22_cvector);
		if(var_20_bool != 0) {
			var_54_int = var_17_string + "@";
			@FindActor(var_23_object, (var_54_int + var_18_string));
			if(var_23_object != 0) {
				bool var_57_bool; object var_58_object;
				var_23_object = var_58_object;
				func_100(var_57_bool, var_58_object, "lp");
				if(var_57_bool != 0) {
					var_23_object->GetProperty("lp", var_24_bool);
					if(var_24_bool != 0) {
						@Trace("Outdoor door was unlocked");
						var_23_object->SetProperty("locked", false);
					}
				}
			}
			@PlaySharedSound("door_open");
			@Teleport(actor, var_15_object, var_21_cvector, var_22_cvector);
			var_23_object = null;
		}
	}
	EMIT "Stack[-9] = 0";
	EMIT "Stack[-10] = 0";

}


void func_112(int var_32_int, string var_33_string, string var_34_string)
{
	int var_36_int;
	@_strchr(var_36_int, var_33_string, var_34_string);
	var_36_int = var_32_int;
}


void func_122(bool var_25_bool)
{
	int var_27_int;
	@GetProperty("locked", var_27_int);
	var_25_bool = var_27_int != 0;
}


void func_100(bool var_57_bool, object var_58_object, string var_59_string)
{
	var_64_bool = IsFuncExist(var_58_object, "HasProperty", 2);
	if(!var_64_bool) { //@nz
		var_57_bool = false;
		return 2;
	}
	bool var_61_bool;
	var_58_object->HasProperty(var_59_string, var_61_bool);
	var_61_bool = var_57_bool;
}


void func_117(string var_42_string, string var_43_string, int var_44_int)
{
	string var_47_string;
	@_strsub(var_47_string, var_43_string, var_44_int);
	var_47_string = var_42_string;
}


