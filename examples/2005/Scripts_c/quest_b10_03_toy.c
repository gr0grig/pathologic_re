// @GLOBALS: 0:object:

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
		object var_8_object;
		actor = var_8_object;
		bool var_7_bool;
		func_105(var_7_bool, var_8_object);
		if(!var_7_bool) { //@nz
		}
		string var_4_string;
		@GetProperty("Item", var_4_string);
		object var_5_object;
		@CreateInvItem(var_5_object);
		var_5_object->SetItemName(var_4_string);
		bool var_43_bool; object var_44_object; object var_45_object;
		actor = var_44_object;
		var_5_object = var_45_object;
		func_147(var_43_bool, var_44_object, var_45_object, 1);
		if(var_43_bool != 0) {
			@GetScene(var_6_object);
			object var_60_object;
			func_129(var_60_object);
			var_6_object->RemoveStationaryActor(var_60_object);
			func_164();
			object var_86_object;
			func_129(var_86_object);
			@RemoveActor(var_86_object);
			var_6_object = null;
		}
	}
	EMIT "Stack[-2] = 0";

}


void func_64(bool var_22_bool, object var_23_object)
{
	bool var_25_bool;
	var_23_object->IsDead(var_25_bool);
	var_25_bool = var_22_bool;
}


void func_129(object var_60_object)
{
	object var_62_object;
	@self(var_62_object);
	var_62_object = var_60_object;
}
EMIT "Stack[-1] = 0";


void func_164(void)
{
	object var_64_object;
	@CreateDiaryEntry(var_64_object, 597, 2, 531148);
	bool var_68_bool; object var_69_object;
	var_64_object = var_69_object;
	func_190(var_68_bool, var_69_object, 594);
}
EMIT "Stack[-1] = 0";


void func_69(bool var_11_bool, object var_12_object)
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
		func_64(var_22_bool, var_23_object);
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


void func_135(int var_55_int, int var_56_int)
{
	object var_58_object;
	@CreateIntVector(var_58_object);
	var_58_object->add(var_55_int);
	var_58_object->add(var_56_int);
	@SendWorldWndMessage(3, var_58_object);
}
EMIT "Stack[-1] = 0";


void func_105(bool var_7_bool, object var_8_object)
{
	object var_12_object;
	var_8_object = var_12_object;
	bool var_11_bool;
	func_69(var_11_bool, var_12_object);
	if(!var_11_bool) { //@nz
		var_7_bool = false;
		return 2;
	}
	bool var_29_bool; object var_30_object;
	func_52(var_29_bool, var_30_object, "noaccess");
	if(!var_29_bool) { //@nz
		var_7_bool = true;
		return 2;
	}
	int var_10_int;
	var_30_object->GetProperty("noaccess", var_10_int);
	var_7_bool = var_10_int == 0;
}


void func_177(object var_77_object)
{
	object var_79_object;
	@GetDiaryRoot(var_79_object);
	if(!var_79_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_77_object = false;
	}
	var_79_object = var_77_object;
}
EMIT "Stack[-1] = 0";


void func_147(bool var_43_bool, object var_44_object, object var_45_object, int var_46_int)
{
	int var_50_int;
	var_45_object->GetItemID(var_50_int);
	int var_51_int;
	@GetInvItemProperty(var_51_int, var_50_int, "Category");
	bool var_52_bool;
	var_44_object->AddItem(var_52_bool, var_45_object, var_51_int, var_46_int);
	if(var_52_bool != 0) {
		int var_55_int; int var_56_int;
		var_50_int = var_55_int;
		var_46_int = var_56_int;
		func_135(var_55_int, var_56_int);
	}
	var_52_bool = var_43_bool;
}


void func_52(bool var_29_bool, object var_30_object, string var_31_string)
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


void func_190(bool var_68_bool, object var_69_object, int var_70_int)
{
	object var_77_object;
	func_177(var_77_object);
	object var_74_object;
	var_77_object = var_74_object;
	object var_75_object;
	var_74_object->Find(var_70_int, var_75_object);
	if(!var_75_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_70_int);
		var_68_bool = false;
	}
	var_75_object->AddChild(var_69_object);
	@SendWorldWndMessage(7);
	int var_76_int;
	var_69_object->GetCategory(var_76_int);
	@SetDiarySection(var_76_int);
	var_68_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


