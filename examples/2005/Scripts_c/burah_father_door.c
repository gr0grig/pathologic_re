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

	// @pe
	void OnUse(object actor)
	{
		bool var_1_bool;
		func_115(var_1_bool);
		if(var_1_bool != 0) {
			bool var_6_bool; object var_7_object;
			actor = var_7_object;
			func_127(var_6_bool, var_7_object, "burah_father_key", true);
			if(var_6_bool != 0)
				func_122(false);
		}
		object var_33_object;
		actor = var_33_object;
		func_28(var_33_object);
	}

}


void func_100(int var_53_int, string var_54_string, string var_55_string)
{
	int var_57_int;
	@_strchr(var_57_int, var_54_string, var_55_string);
	var_57_int = var_53_int;
}


void func_105(string var_68_string, string var_69_string, int var_70_int)
{
	string var_73_string;
	@_strsub(var_73_string, var_69_string, var_70_int);
	var_73_string = var_68_string;
}


void func_110(string var_61_string, string var_62_string, int var_63_int, int var_64_int)
{
	string var_66_string;
	@_strsub(var_66_string, var_62_string, var_63_int, var_64_int);
	var_66_string = var_61_string;
}


void func_115(bool var_1_bool)
{
	int var_3_int;
	@GetProperty("locked", var_3_int);
	var_1_bool = var_3_int != 0;
}


// @pe
void func_122(bool var_31_bool)
{
	@SetProperty("locked", var_31_bool);
}


void func_28(object var_33_object)
{
	bool var_50_bool;
	func_115(var_50_bool);
	if(var_50_bool != 0) {
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return 16;
	}
	string var_42_string;
	@GetActorName(var_42_string);
	int var_53_int; string var_54_string;
	var_42_string = var_54_string;
	func_100(var_53_int, var_54_string, "@");
	int var_43_int;
	var_53_int = var_43_int;
	if(var_43_int == -1) {
		@Trace("Wrong door name");
		return 16;
	}
	string var_61_string; string var_62_string; int var_64_int;
	var_42_string = var_62_string;
	func_110(var_61_string, var_62_string, 0, var_64_int);
	string var_44_string;
	var_61_string = var_44_string;
	string var_68_string; string var_69_string;
	var_42_string = var_69_string;
	func_105(var_68_string, var_69_string, (var_64_int + 1));
	string var_45_string = "pt_" + var_68_string;
	object var_46_object;
	@GetSceneByName(var_46_object, var_44_string);
	if(var_46_object == null) {
		@Trace(("Destination scene '" + var_44_string) + "' not found");
		return 16;
	}
	bool var_47_bool;
	cvector var_48_cvector;
	cvector var_49_cvector;
	var_46_object->GetLocator(var_45_string, var_47_bool, var_48_cvector, var_49_cvector);
	if(var_47_bool != 0) {
		@PlaySharedSound("door_open");
		@Teleport(var_33_object, var_46_object, var_48_cvector, var_49_cvector);
	} else {
		@Trace((("Locator " + var_45_string) + " not found in destination scene ") + var_44_string);
	}
	
}
EMIT "Stack[-4] = 0";


void func_127(bool var_6_bool, object var_7_object, string var_8_string, bool var_9_bool)
{
	int var_17_int; int var_20_int; int var_21_int; object var_22_object; int var_23_int;
	@GetInvItemByName(var_17_int, var_8_string);
	int var_18_int;
	var_7_object->GetSubContainerCount(var_18_int);
	int var_19_int = 0;
	
	while(var_19_int < var_18_int) {
		var_7_object->GetItemCount(var_20_int, var_19_int);
		var_21_int = 0;

		while(var_21_int < var_20_int) {
			var_7_object->GetItem(var_22_object, var_21_int, var_19_int);
			var_22_object->GetItemID(var_23_int);
			if(var_23_int == var_17_int) {
				if(var_9_bool != 0)
					var_7_object->RemoveItem(var_21_int, 1, var_19_int);
				var_6_bool = true;
			}
			var_22_object = null;
			var_21_int += 1;
		}

		var_19_int += 1;
	}
	
	var_6_bool = false;
}


