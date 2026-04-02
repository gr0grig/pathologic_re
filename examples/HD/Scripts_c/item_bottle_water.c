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
		bool var_46_bool;
		func_59(var_46_bool, "tiredness", 0.03, (float)0, (float)1);
		func_139(0.03);
		object var_55_object;
		object var_58_object;
		func_78(var_58_object);
		var_58_object = var_55_object;
		func_126(var_55_object, "bottle_empty", 1);
	}

}


void func_159(float var_38_float)
{
	object var_40_object;
	@CreateFloatVector(var_40_object);
	var_40_object->add(var_38_float);
	if(var_38_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_40_object);
}
EMIT "Stack[-1] = 0";


void func_107(object var_63_object, object var_64_object, int var_65_int)
{
	int var_69_int;
	var_64_object->GetItemID(var_69_int);
	int var_70_int;
	@GetInvItemProperty(var_70_int, var_69_int, "Category");
	bool var_71_bool;
	var_63_object->AddItem(var_71_bool, var_64_object, var_70_int, var_65_int);
	if(!var_71_bool) { //@nz
		var_63_object->DropItems(var_64_object, var_65_int);
	} else {
		int var_74_int; int var_75_int;
		var_69_int = var_74_int;
		var_65_int = var_75_int;
		func_95(var_74_int, var_75_int);
	}
	
}


void func_139(float var_51_float)
{
	object var_53_object;
	@CreateFloatVector(var_53_object);
	var_53_object->add(var_51_float);
	@SendWorldWndMessage(11, var_53_object);
}
EMIT "Stack[-1] = 0";


void func_78(object var_58_object)
{
	object var_60_object;
	@self(var_60_object);
	var_60_object = var_58_object;
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


void func_126(object var_55_object, string var_56_string, int var_57_int)
{
	object var_62_object;
	@CreateInvItem(var_62_object);
	var_62_object->SetItemName(var_56_string);
	object var_63_object; object var_64_object; int var_65_int;
	var_55_object = var_63_object;
	var_62_object = var_64_object;
	var_57_int = var_65_int;
	func_107(var_63_object, var_64_object, var_65_int);
}
EMIT "Stack[-1] = 0";


void func_95(int var_74_int, int var_75_int)
{
	object var_77_object;
	@CreateIntVector(var_77_object);
	var_77_object->add(var_74_int);
	var_77_object->add(var_75_int);
	@SendWorldWndMessage(3, var_77_object);
}
EMIT "Stack[-1] = 0";


