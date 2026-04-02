maintask task_0
{
	void init(void)
	{
		object var_1_object;
		@FindGeometry("object", var_1_object);
		var_1_object->Enable(true);
	
		for(;;) {
			@Hold();
		}
	}
	EMIT "Return(); Pop(2)";
	EMIT "Stack[-1] = 0";

	void OnUse(object actor)
	{
		object var_6_object;
		actor = var_6_object;
		bool var_5_bool;
		func_96(var_5_bool, var_6_object);
		if(!var_5_bool) { //@nz
		}
		object var_3_object;
		@GetItem(var_3_object, 0);
		int var_4_int;
		@GetItemAmount(var_4_int, 0);
		bool var_42_bool; object var_43_object; object var_44_object; int var_45_int;
		actor = var_43_object;
		var_3_object = var_44_object;
		var_4_int = var_45_int;
		func_120(var_42_bool, var_43_object, var_44_object, var_45_int);
		if(var_42_bool != 0) {
			object var_53_object;
			actor = var_53_object;
			func_41();
			@SetDeathStateAndRemove();
		}
	}
	EMIT "Stack[-2] = 0";

}


void func_96(bool var_5_bool, object var_6_object)
{
	object var_10_object;
	var_6_object = var_10_object;
	bool var_9_bool;
	func_60(var_9_bool, var_10_object);
	if(!var_9_bool) { //@nz
		var_5_bool = false;
		return 2;
	}
	bool var_27_bool; object var_28_object;
	func_43(var_27_bool, var_28_object, "noaccess");
	if(!var_27_bool) { //@nz
		var_5_bool = true;
		return 2;
	}
	int var_8_int;
	var_28_object->GetProperty("noaccess", var_8_int);
	var_5_bool = var_8_int == 0;
}


// @pe
void func_41(void)
{
}


void func_43(bool var_27_bool, object var_28_object, string var_29_string)
{
	var_34_bool = IsFuncExist(var_28_object, "HasProperty", 2);
	if(!var_34_bool) { //@nz
		var_27_bool = false;
		return 2;
	}
	bool var_31_bool;
	var_28_object->HasProperty(var_29_string, var_31_bool);
	var_31_bool = var_27_bool;
}


void func_55(bool var_20_bool, object var_21_object)
{
	bool var_23_bool;
	var_21_object->IsDead(var_23_bool);
	var_23_bool = var_20_bool;
}


void func_120(bool var_42_bool, object var_43_object, object var_44_object, int var_45_int)
{
	int var_49_int;
	var_44_object->GetItemID(var_49_int);
	int var_50_int;
	@GetInvItemProperty(var_50_int, var_49_int, "Category");
	bool var_51_bool;
	var_43_object->AddItem(var_51_bool, var_44_object, var_50_int, var_45_int);
	var_51_bool = var_42_bool;
}


void func_60(bool var_9_bool, object var_10_object)
{
	if(var_10_object == null) {
		var_9_bool = false;
		return 4;
	}
	bool var_16_bool = false;
	var_19_bool = IsFuncExist(var_10_object, "IsDead", 1);
	if(var_19_bool != 0) {
		bool var_20_bool; object var_21_object;
		var_10_object = var_21_object;
		func_55(var_20_bool, var_21_object);
		if(var_20_bool != 0)
			var_16_bool = true;
	}
	if(var_16_bool != 0) {
		var_9_bool = false;
		return 4;
	}
	object var_13_object;
	@GetScene(var_13_object);
	if(var_13_object == null) {
		var_9_bool = false;
		return 4;
	}
	object var_14_object;
	var_10_object->GetScene(var_14_object);
	if(var_13_object != var_14_object) {
		var_9_bool = false;
		return 4;
	}
	var_9_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


