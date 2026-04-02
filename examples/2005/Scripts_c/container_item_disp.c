maintask task_0
{
	void init(bool var_0_bool)
	{
		@SetVisibility(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(bool var_0_bool, object var_1_object)
	{
		bool var_6_bool = true;
		bool var_7_bool; object var_8_object;
		var_1_object = var_8_object;
		func_143(var_7_bool, var_8_object);
		var_41_bool = !var_7_bool; //@nz
		if(var_41_bool != 1) {
			bool var_42_bool;
			func_173(var_42_bool);
			var_46_bool = !var_42_bool; //@nz
			if(var_46_bool != 1)
				var_6_bool = false;
		}
		if(var_6_bool != 0) {
		}
		object var_4_object;
		@GetItem(var_4_object, 0);
		int var_5_int;
		@GetItemAmount(var_5_int, 0);
		bool var_49_bool; object var_50_object; object var_51_object; int var_52_int;
		var_1_object = var_50_object;
		var_4_object = var_51_object;
		var_5_int = var_52_int;
		func_191(var_49_bool, var_50_object, var_51_object, var_52_int);
		if(var_49_bool != 0) {
			object var_66_object;
			func_167(var_66_object);
			@RemoveActor(var_66_object);
		}
	}
	EMIT "Stack[-2] = 0";

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			bool var_6_bool = false;
			if(!var_3_bool) { //@nz
				bool var_8_bool;
				func_88(var_8_bool);
				if(var_8_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				object var_9_object;
				func_167(var_9_object);
				@RemoveActor(var_9_object);
			}
		} else if(var_1_string == "restore") {
			var_0_bool = false;
		}
	
	}

	void OnUnload(bool var_0_bool)
	{
		bool var_1_bool = false;
		if(var_0_bool != 0) {
			bool var_3_bool;
			func_88(var_3_bool);
			if(var_3_bool != 0)
				var_1_bool = true;
		}
		if(var_1_bool != 0) {
			object var_4_object;
			func_167(var_4_object);
			@RemoveActor(var_4_object);
		}
	}

}


void func_102(bool var_22_bool, object var_23_object)
{
	bool var_25_bool;
	var_23_object->IsDead(var_25_bool);
	var_25_bool = var_22_bool;
}


void func_167(object var_4_object)
{
	object var_6_object;
	@self(var_6_object);
	var_6_object = var_4_object;
}
EMIT "Stack[-1] = 0";


void func_107(bool var_11_bool, object var_12_object)
{
	if(var_12_object == null) {
		var_11_bool = false;
		return 4;
	}
	bool var_18_bool = false;
	var_21_bool = IsFuncExist(var_12_object, "IsDead", 1);
	if(var_21_bool != 0) {
		bool var_22_bool; object var_23_object;
		var_12_object = var_23_object;
		func_102(var_22_bool, var_23_object);
		if(var_22_bool != 0)
			var_18_bool = true;
	}
	if(var_18_bool != 0) {
		var_11_bool = false;
		return 4;
	}
	object var_15_object;
	@GetScene(var_15_object);
	if(var_15_object == null) {
		var_11_bool = false;
		return 4;
	}
	object var_16_object;
	var_12_object->GetScene(var_16_object);
	if(var_15_object != var_16_object) {
		var_11_bool = false;
		return 4;
	}
	var_11_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_173(bool var_42_bool)
{
	int var_44_int;
	@GetVariable("nouse_container", var_44_int);
	var_42_bool = !var_44_int;
}


void func_143(bool var_7_bool, object var_8_object)
{
	object var_12_object;
	var_8_object = var_12_object;
	bool var_11_bool;
	func_107(var_11_bool, var_12_object);
	if(!var_11_bool) { //@nz
		var_7_bool = false;
		return 2;
	}
	bool var_29_bool; object var_30_object;
	func_90(var_29_bool, var_30_object, "noaccess");
	if(!var_29_bool) { //@nz
		var_7_bool = true;
		return 2;
	}
	int var_10_int;
	var_30_object->GetProperty("noaccess", var_10_int);
	var_7_bool = var_10_int == 0;
}


void func_179(int var_61_int, int var_62_int)
{
	object var_64_object;
	@CreateIntVector(var_64_object);
	var_64_object->add(var_61_int);
	var_64_object->add(var_62_int);
	@SendWorldWndMessage(3, var_64_object);
}
EMIT "Stack[-1] = 0";


void func_88(bool var_3_bool)
{
	var_3_bool = true;
}


void func_90(bool var_29_bool, object var_30_object, string var_31_string)
{
	var_36_bool = IsFuncExist(var_30_object, "HasProperty", 2);
	if(!var_36_bool) { //@nz
		var_29_bool = false;
		return 2;
	}
	bool var_33_bool;
	var_30_object->HasProperty(var_31_string, var_33_bool);
	var_33_bool = var_29_bool;
}


void func_191(bool var_49_bool, object var_50_object, object var_51_object, int var_52_int)
{
	int var_56_int;
	var_51_object->GetItemID(var_56_int);
	int var_57_int;
	@GetInvItemProperty(var_57_int, var_56_int, "Category");
	bool var_58_bool;
	var_50_object->AddItem(var_58_bool, var_51_object, var_57_int, var_52_int);
	if(var_58_bool != 0) {
		int var_61_int; int var_62_int;
		var_56_int = var_61_int;
		var_52_int = var_62_int;
		func_179(var_61_int, var_62_int);
	}
	var_58_bool = var_49_bool;
}


