maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
		func_43();
	}

	// @pe
	void OnUse(bool var_0_bool, object var_1_object)
	{
		bool var_2_bool;
		func_201(var_2_bool, "quest_b4_02", "ammo_or_samopal_taken");
		object var_8_object;
		var_1_object = var_8_object;
		func_55(var_8_object);
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			if(!var_3_bool) { //@nz
				object var_7_object;
				func_166(var_7_object);
				@RemoveActor(var_7_object);
			}
		}
	}

	// @pe
	void OnUnload(bool var_0_bool)
	{
		func_16();
	}

}


void func_101(bool var_28_bool, object var_29_object)
{
	bool var_31_bool;
	var_29_object->IsDead(var_31_bool);
	var_31_bool = var_28_bool;
}


void func_166(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


void func_201(bool var_2_bool, string var_3_string, string var_4_string)
{
	object var_6_object;
	@FindActor(var_6_object, var_3_string);
	if(var_6_object == null)
		var_2_bool = false;
	@Trigger(var_6_object, var_4_string);
	var_2_bool = true;
}
EMIT "Stack[-1] = 0";


void func_106(bool var_17_bool, object var_18_object)
{
	if(var_18_object == null) {
		var_17_bool = false;
		return 4;
	}
	bool var_24_bool = false;
	var_27_bool = IsFuncExist(var_18_object, "IsDead", 1);
	if(var_27_bool != 0) {
		bool var_28_bool; object var_29_object;
		var_18_object = var_29_object;
		func_101(var_28_bool, var_29_object);
		if(var_28_bool != 0)
			var_24_bool = true;
	}
	if(var_24_bool != 0) {
		var_17_bool = false;
		return 4;
	}
	object var_21_object;
	@GetScene(var_21_object);
	if(var_21_object == null) {
		var_17_bool = false;
		return 4;
	}
	object var_22_object;
	var_18_object->GetScene(var_22_object);
	if(var_21_object != var_22_object) {
		var_17_bool = false;
		return 4;
	}
	var_17_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_43(void)
{
	object var_2_object;
	@FindGeometry("object", var_2_object);
	var_2_object->Enable(true);
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(2)";
EMIT "Stack[-1] = 0";


void func_172(int var_62_int, int var_63_int)
{
	object var_65_object;
	@CreateIntVector(var_65_object);
	var_65_object->add(var_62_int);
	var_65_object->add(var_63_int);
	@SendWorldWndMessage(3, var_65_object);
}
EMIT "Stack[-1] = 0";


void func_142(bool var_13_bool, object var_14_object)
{
	object var_18_object;
	var_14_object = var_18_object;
	bool var_17_bool;
	func_106(var_17_bool, var_18_object);
	if(!var_17_bool) { //@nz
		var_13_bool = false;
		return 2;
	}
	bool var_35_bool; object var_36_object;
	func_89(var_35_bool, var_36_object, "noaccess");
	if(!var_35_bool) { //@nz
		var_13_bool = true;
		return 2;
	}
	int var_16_int;
	var_36_object->GetProperty("noaccess", var_16_int);
	var_13_bool = var_16_int == 0;
}


void func_16(void)
{
	if(var_0_bool != 0) {
		object var_2_object;
		func_166(var_2_object);
		@RemoveActor(var_2_object);
	}
}


// @pe
void func_82(void)
{
	object var_68_object;
	func_166(var_68_object);
	@RemoveActor(var_68_object);
}


void func_55(object var_8_object)
{
	object var_14_object;
	var_8_object = var_14_object;
	bool var_13_bool;
	func_142(var_13_bool, var_14_object);
	if(!var_13_bool) { //@nz
	}
	object var_11_object;
	@GetItem(var_11_object, 0);
	int var_12_int;
	@GetItemAmount(var_12_int, 0);
	bool var_50_bool; object var_51_object; object var_52_object; int var_53_int;
	var_8_object = var_51_object;
	var_11_object = var_52_object;
	var_12_int = var_53_int;
	func_184(var_50_bool, var_51_object, var_52_object, var_53_int);
	if(var_50_bool != 0) {
		object var_67_object;
		var_8_object = var_67_object;
		func_82();
	}
}
EMIT "Stack[-2] = 0";


void func_184(bool var_50_bool, object var_51_object, object var_52_object, int var_53_int)
{
	int var_57_int;
	var_52_object->GetItemID(var_57_int);
	int var_58_int;
	@GetInvItemProperty(var_58_int, var_57_int, "Category");
	bool var_59_bool;
	var_51_object->AddItem(var_59_bool, var_52_object, var_58_int, var_53_int);
	if(var_59_bool != 0) {
		int var_62_int; int var_63_int;
		var_57_int = var_62_int;
		var_53_int = var_63_int;
		func_172(var_62_int, var_63_int);
	}
	var_59_bool = var_50_bool;
}


void func_89(bool var_35_bool, object var_36_object, string var_37_string)
{
	var_42_bool = IsFuncExist(var_36_object, "HasProperty", 2);
	if(!var_42_bool) { //@nz
		var_35_bool = false;
		return 2;
	}
	bool var_39_bool;
	var_36_object->HasProperty(var_37_string, var_39_bool);
	var_39_bool = var_35_bool;
}


