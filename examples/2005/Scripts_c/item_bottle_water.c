maintask task_0
{
	void init(void)
	{
		float var_3_float;
		@PlaySound("drink");
		bool var_5_bool;
		func_59(var_5_bool, "hunger", -0.01, (float)0, (float)1);
		func_149(-0.01);
		float var_2_float;
		@GetProperty("tiredness", var_2_float);
		if((var_2_float + 0.03) > 1) {
			var_3_float = (var_2_float + 0.03) - 1;
			bool var_33_bool; float var_35_float;
			var_35_float = -var_3_float;
			func_59(var_33_bool, "health", var_35_float, (float)0, (float)1);
			float var_38_float = -var_3_float;
			func_159(var_38_float);
		}
		bool var_42_bool;
		func_59(var_42_bool, "tiredness", 0.03, (float)0, (float)1);
		func_139(0.03);
		object var_51_object;
		object var_54_object;
		func_78(var_54_object);
		var_54_object = var_51_object;
		func_126(var_51_object, "bottle_empty", 1);
	}

}


void func_159(float var_38_float)
{
	object var_40_object;
	@CreateFloatVector(var_40_object);
	var_40_object->add(var_38_float);
	@SendWorldWndMessage(15, var_40_object);
}
EMIT "Stack[-1] = 0";


void func_107(object var_59_object, object var_60_object, int var_61_int)
{
	int var_65_int;
	var_60_object->GetItemID(var_65_int);
	int var_66_int;
	@GetInvItemProperty(var_66_int, var_65_int, "Category");
	bool var_67_bool;
	var_59_object->AddItem(var_67_bool, var_60_object, var_66_int, var_61_int);
	if(!var_67_bool) { //@nz
		var_59_object->DropItems(var_60_object, var_61_int);
	} else {
		int var_70_int; int var_71_int;
		var_65_int = var_70_int;
		var_61_int = var_71_int;
		func_95(var_70_int, var_71_int);
	}
	
}


void func_139(float var_47_float)
{
	object var_49_object;
	@CreateFloatVector(var_49_object);
	var_49_object->add(var_47_float);
	@SendWorldWndMessage(11, var_49_object);
}
EMIT "Stack[-1] = 0";


void func_78(object var_54_object)
{
	object var_56_object;
	@self(var_56_object);
	var_56_object = var_54_object;
}
EMIT "Stack[-1] = 0";


// @pe
void func_84(float var_15_float, float var_16_float, float var_17_float, float var_18_float)
{
	if(var_16_float < var_17_float) {
		var_17_float = var_15_float;
		return 0;
	}
	if(var_16_float > var_18_float) {
		var_18_float = var_15_float;
		return 0;
	}
	var_16_float = var_15_float;
}


void func_149(float var_21_float)
{
	object var_23_object;
	@CreateFloatVector(var_23_object);
	var_23_object->add(var_21_float);
	@SendWorldWndMessage(12, var_23_object);
}
EMIT "Stack[-1] = 0";


void func_59(bool var_5_bool, string var_6_string, float var_7_float, float var_8_float, float var_9_float)
{
	bool var_12_bool;
	@HasProperty(var_6_string, var_12_bool);
	if(!var_12_bool) //@nz
		var_5_bool = false;
	float var_13_float;
	@GetProperty(var_6_string, var_13_float);
	float var_15_float; float var_17_float; float var_18_float;
	var_8_float = var_17_float;
	var_9_float = var_18_float;
	func_84(var_15_float, (var_13_float + var_7_float), var_17_float, var_18_float);
	@SetProperty(var_6_string, var_15_float);
	var_5_bool = true;
}


void func_126(object var_51_object, string var_52_string, int var_53_int)
{
	object var_58_object;
	@CreateInvItem(var_58_object);
	var_58_object->SetItemName(var_52_string);
	object var_59_object; object var_60_object; int var_61_int;
	var_51_object = var_59_object;
	var_58_object = var_60_object;
	var_53_int = var_61_int;
	func_107(var_59_object, var_60_object, var_61_int);
}
EMIT "Stack[-1] = 0";


void func_95(int var_70_int, int var_71_int)
{
	object var_73_object;
	@CreateIntVector(var_73_object);
	var_73_object->add(var_70_int);
	var_73_object->add(var_71_int);
	@SendWorldWndMessage(3, var_73_object);
}
EMIT "Stack[-1] = 0";


