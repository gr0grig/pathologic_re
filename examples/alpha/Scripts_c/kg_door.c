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
		func_120(var_1_bool);
		if(var_1_bool != 0) {
			bool var_6_bool; object var_7_object; string var_8_string;
			actor = var_7_object;
			string var_10_string;
			func_132(var_10_string);
			var_10_string = var_8_string;
			func_157(var_7_object, var_8_string, true);
			if(var_6_bool != 0)
				func_127(false);
			else
				return 0;
		}
		object var_62_object;
		actor = var_62_object;
		func_33(var_62_object);
	
	}

}


void func_33(object var_62_object)
{
	bool var_79_bool;
	func_120(var_79_bool);
	if(var_79_bool != 0) {
		@PlaySound("door_closed");
		@Trace("Door is locked");
		return 16;
	}
	string var_71_string;
	@GetActorName(var_71_string);
	int var_82_int; string var_83_string;
	var_71_string = var_83_string;
	func_105(var_82_int, var_83_string, "@");
	int var_72_int;
	var_82_int = var_72_int;
	if(var_72_int == -1) {
		@Trace("Wrong door name");
		return 16;
	}
	string var_88_string; string var_89_string; int var_91_int;
	var_71_string = var_89_string;
	func_115(var_88_string, var_89_string, 0, var_91_int);
	string var_73_string;
	var_88_string = var_73_string;
	string var_93_string; string var_94_string;
	var_71_string = var_94_string;
	func_110(var_93_string, var_94_string, (var_91_int + 1));
	string var_74_string = "pt_" + var_93_string;
	object var_75_object;
	@GetSceneByName(var_75_object, var_73_string);
	if(var_75_object == null) {
		@Trace(("Destination scene '" + var_73_string) + "' not found");
		return 16;
	}
	bool var_76_bool;
	cvector var_77_cvector;
	cvector var_78_cvector;
	var_75_object->GetLocator(var_74_string, var_76_bool, var_77_cvector, var_78_cvector);
	if(var_76_bool != 0) {
		@PlaySharedSound("door_open");
		@Teleport(var_62_object, var_75_object, var_77_cvector, var_78_cvector);
	} else {
		@Trace((("Locator " + var_74_string) + " not found in destination scene ") + var_73_string);
	}
	
}
EMIT "Stack[-4] = 0";


void func_132(string var_10_string)
{
	string var_13_string;
	@GetActorName(var_13_string);
	int var_15_int; string var_16_string;
	var_13_string = var_16_string;
	func_105(var_15_int, var_16_string, "@");
	int var_14_int;
	var_15_int = var_14_int;
	if(var_14_int == -1) {
		@Trace("Wrong door name");
		var_10_string = "";
	}
	string var_23_string; string var_24_string; int var_26_int;
	var_13_string = var_24_string;
	var_14_int = var_26_int;
	func_115(var_23_string, var_24_string, 0, var_26_int);
	var_23_string = var_10_string;
}


void func_105(int var_15_int, string var_16_string, string var_17_string)
{
	int var_19_int;
	@_strchr(var_19_int, var_16_string, var_17_string);
	var_19_int = var_15_int;
}


void func_110(string var_93_string, string var_94_string, int var_95_int)
{
	string var_98_string;
	@_strsub(var_98_string, var_94_string, var_95_int);
	var_98_string = var_93_string;
}


void func_115(string var_23_string, string var_24_string, int var_25_int, int var_26_int)
{
	string var_28_string;
	@_strsub(var_28_string, var_24_string, var_25_int, var_26_int);
	var_28_string = var_23_string;
}


void func_120(bool var_1_bool)
{
	int var_3_int;
	@GetProperty("locked", var_3_int);
	var_1_bool = var_3_int != 0;
}


void func_157(bool var_6_bool, object var_7_object, string var_8_string)
{
	int var_38_int; int var_41_int; int var_42_int; object var_43_object; int var_44_int; bool var_45_bool; string var_46_string;
	@GetInvItemByName(var_38_int, "uni_key");
	int var_39_int;
	var_7_object->GetSubContainerCount(var_39_int);
	int var_40_int = 0;
	
	while(var_40_int < var_39_int) {
		var_7_object->GetItemCount(var_41_int, var_40_int);
		var_42_int = 0;

		while(var_42_int < var_41_int) {
			var_7_object->GetItem(var_43_object, var_42_int, var_40_int);
			var_43_object->GetItemID(var_44_int);
			if(var_44_int == var_38_int) {
				var_43_object->HasProperty(var_45_bool, "key_scene_name");
				if(var_45_bool != 0) {
					var_43_object->GetProperty(var_46_string, "key_scene_name");
					@Trace((var_8_string + " ") + var_46_string);
					if(var_46_string == var_8_string) {
						var_7_object->RemoveItem(var_42_int, var_40_int);
						var_6_bool = true;
					}
				}
			}
			var_43_object = null;
			var_42_int += 1;
		}

		var_40_int += 1;
	}
	
	var_6_bool = false;
}


// @pe
void func_127(bool var_60_bool)
{
	@SetProperty("locked", var_60_bool);
}


