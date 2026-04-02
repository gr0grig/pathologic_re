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
		bool var_5_bool = true;
		bool var_6_bool; object var_7_object;
		actor = var_7_object;
		func_97(var_6_bool, var_7_object);
		var_40_bool = !var_6_bool; //@nz
		if(var_40_bool != 1) {
			bool var_41_bool;
			func_127(var_41_bool);
			var_45_bool = !var_41_bool; //@nz
			if(var_45_bool != 1)
				var_5_bool = false;
		}
		if(var_5_bool != 0) {
		}
		object var_3_object;
		@GetItem(var_3_object, 0);
		int var_4_int;
		@GetItemAmount(var_4_int, 0);
		bool var_48_bool; object var_49_object; object var_50_object; int var_51_int;
		actor = var_49_object;
		var_3_object = var_50_object;
		var_4_int = var_51_int;
		func_145(var_48_bool, var_49_object, var_50_object, var_51_int);
		if(var_48_bool != 0) {
			object var_65_object;
			func_121(var_65_object);
			@RemoveActor(var_65_object);
		}
	}
	EMIT "Stack[-2] = 0";

}


void func_97(bool var_6_bool, object var_7_object)
{
	object var_11_object;
	var_7_object = var_11_object;
	bool var_10_bool;
	func_61(var_10_bool, var_11_object);
	if(!var_10_bool) { //@nz
		var_6_bool = false;
		return 2;
	}
	bool var_28_bool; object var_29_object;
	func_44(var_28_bool, var_29_object, "noaccess");
	if(!var_28_bool) { //@nz
		var_6_bool = true;
		return 2;
	}
	int var_9_int;
	var_29_object->GetProperty("noaccess", var_9_int);
	var_6_bool = var_9_int == 0;
}


void func_133(int var_60_int, int var_61_int)
{
	object var_63_object;
	@CreateIntVector(var_63_object);
	var_63_object->add(var_60_int);
	var_63_object->add(var_61_int);
	@SendWorldWndMessage(3, var_63_object);
}
EMIT "Stack[-1] = 0";


void func_44(bool var_28_bool, object var_29_object, string var_30_string)
{
	var_35_bool = IsFuncExist(var_29_object, "HasProperty", 2);
	if(!var_35_bool) { //@nz
		var_28_bool = false;
		return 2;
	}
	bool var_32_bool;
	var_29_object->HasProperty(var_30_string, var_32_bool);
	var_32_bool = var_28_bool;
}


void func_145(bool var_48_bool, object var_49_object, object var_50_object, int var_51_int)
{
	int var_55_int;
	var_50_object->GetItemID(var_55_int);
	int var_56_int;
	@GetInvItemProperty(var_56_int, var_55_int, "Category");
	bool var_57_bool;
	var_49_object->AddItem(var_57_bool, var_50_object, var_56_int, var_51_int);
	if(var_57_bool != 0) {
		int var_60_int; int var_61_int;
		var_55_int = var_60_int;
		var_51_int = var_61_int;
		func_133(var_60_int, var_61_int);
	}
	var_57_bool = var_48_bool;
}


void func_56(bool var_21_bool, object var_22_object)
{
	bool var_24_bool;
	var_22_object->IsDead(var_24_bool);
	var_24_bool = var_21_bool;
}


void func_121(object var_65_object)
{
	object var_67_object;
	@self(var_67_object);
	var_67_object = var_65_object;
}
EMIT "Stack[-1] = 0";


void func_61(bool var_10_bool, object var_11_object)
{
	if(var_11_object == null) {
		var_10_bool = false;
		return 4;
	}
	bool var_17_bool = false;
	var_20_bool = IsFuncExist(var_11_object, "IsDead", 1);
	if(var_20_bool != 0) {
		bool var_21_bool; object var_22_object;
		var_11_object = var_22_object;
		func_56(var_21_bool, var_22_object);
		if(var_21_bool != 0)
			var_17_bool = true;
	}
	if(var_17_bool != 0) {
		var_10_bool = false;
		return 4;
	}
	object var_14_object;
	@GetScene(var_14_object);
	if(var_14_object == null) {
		var_10_bool = false;
		return 4;
	}
	object var_15_object;
	var_11_object->GetScene(var_15_object);
	if(var_14_object != var_15_object) {
		var_10_bool = false;
		return 4;
	}
	var_10_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_127(bool var_41_bool)
{
	int var_43_int;
	@GetVariable("nouse_container", var_43_int);
	var_41_bool = !var_43_int;
}


