maintask task_0
{
	void init(bool var_0_bool)
	{
		var_0_bool = false;
		func_39();
	}

	void OnTrigger(bool var_0_bool, string var_1_string)
	{
		bool var_3_bool;
		if(var_1_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_3_bool);
			if(!var_3_bool) { //@nz
				object var_7_object;
				func_157(var_7_object);
				@RemoveActor(var_7_object);
			}
		}
	}

	void OnUnload(bool var_0_bool)
	{
		func_5();
	}

	void OnUse(bool var_0_bool, object var_1_object)
	{
		object var_7_object;
		var_1_object = var_7_object;
		bool var_6_bool;
		func_133(var_6_bool, var_7_object);
		if(!var_6_bool) { //@nz
		}
		object var_4_object;
		@GetItem(var_4_object, 0);
		int var_5_int;
		@GetItemAmount(var_5_int, 0);
		bool var_43_bool; object var_44_object; object var_45_object; int var_46_int;
		var_1_object = var_44_object;
		var_4_object = var_45_object;
		var_5_int = var_46_int;
		func_163(var_43_bool, var_44_object, var_45_object, var_46_int);
		if(var_43_bool != 0) {
			object var_54_object;
			var_1_object = var_54_object;
			func_32();
			@SetDeathStateAndRemove();
		}
	}
	EMIT "Stack[-2] = 0";

}


// @pe
void func_32(void)
{
	bool var_55_bool;
	func_173(var_55_bool, "quest_d10_01", "soldier_fight");
}


void func_97(bool var_10_bool, object var_11_object)
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
		func_92(var_21_bool, var_22_object);
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


void func_163(bool var_43_bool, object var_44_object, object var_45_object, int var_46_int)
{
	int var_50_int;
	var_45_object->GetItemID(var_50_int);
	int var_51_int;
	@GetInvItemProperty(var_51_int, var_50_int, "Category");
	bool var_52_bool;
	var_44_object->AddItem(var_52_bool, var_45_object, var_51_int, var_46_int);
	var_52_bool = var_43_bool;
}


void func_5(void)
{
	if(var_0_bool != 0) {
		object var_2_object;
		func_157(var_2_object);
		@RemoveActor(var_2_object);
	}
}


void func_133(bool var_6_bool, object var_7_object)
{
	object var_11_object;
	var_7_object = var_11_object;
	bool var_10_bool;
	func_97(var_10_bool, var_11_object);
	if(!var_10_bool) { //@nz
		var_6_bool = false;
		return 2;
	}
	bool var_28_bool; object var_29_object;
	func_80(var_28_bool, var_29_object, "noaccess");
	if(!var_28_bool) { //@nz
		var_6_bool = true;
		return 2;
	}
	int var_9_int;
	var_29_object->GetProperty("noaccess", var_9_int);
	var_6_bool = var_9_int == 0;
}


void func_39(void)
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


void func_173(bool var_55_bool, string var_56_string, string var_57_string)
{
	object var_59_object;
	@FindActor(var_59_object, var_56_string);
	if(var_59_object == null)
		var_55_bool = false;
	@Trigger(var_59_object, var_57_string);
	var_55_bool = true;
}
EMIT "Stack[-1] = 0";


void func_80(bool var_28_bool, object var_29_object, string var_30_string)
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


void func_92(bool var_21_bool, object var_22_object)
{
	bool var_24_bool;
	var_22_object->IsDead(var_24_bool);
	var_24_bool = var_21_bool;
}


void func_157(object var_2_object)
{
	object var_4_object;
	@self(var_4_object);
	var_4_object = var_2_object;
}
EMIT "Stack[-1] = 0";


