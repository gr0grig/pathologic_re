// @GLOBALS: 0:object:

maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		func_50();
	}

	void OnUse(object actor)
	{
		int var_2_int;
		@GetProperty("locked", var_2_int);
		if(var_2_int != 0) {
			bool var_5_bool; object var_6_object;
			actor = var_6_object;
			func_98(var_5_bool, var_6_object, "b2q01_key");
			if(var_5_bool != 0) {
				bool var_12_bool; object var_13_object;
				actor = var_13_object;
				func_105(var_12_bool, var_13_object, "b2q01_key");
				@SetProperty("locked", 0);
				@PlaySound("unlock");
				func_135();
				func_148();
				func_122();
			} else {
				@PlaySound("locked");
			}
		}
		object var_70_object;
		actor = var_70_object;
		func_54(var_70_object);
	
	}

}


void func_194(bool var_54_bool, int var_55_int)
{
	object var_60_object;
	func_153(var_60_object);
	object var_58_object;
	var_60_object = var_58_object;
	object var_59_object;
	var_58_object->Find(var_55_int, var_59_object);
	if(!var_59_object) //@nz
		var_54_bool = false;
	var_59_object->Remove();
	var_54_bool = true;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_98(bool var_5_bool, object var_6_object, string var_7_string)
{
	int var_10_int;
	@GetInvItemByName(var_10_int, var_7_string);
	bool var_11_bool;
	var_6_object->HasItem(var_10_int, var_11_bool);
	var_11_bool = var_5_bool;
}


void func_166(bool var_36_bool, object var_37_object, int var_38_int)
{
	object var_45_object;
	func_153(var_45_object);
	object var_42_object;
	var_45_object = var_42_object;
	object var_43_object;
	var_42_object->Find(var_38_int, var_43_object);
	if(!var_43_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_38_int);
		var_36_bool = false;
	}
	var_43_object->AddChild(var_37_object);
	@SendWorldWndMessage(7);
	int var_44_int;
	var_37_object->GetCategory(var_44_int);
	@SetDiarySection(var_44_int);
	var_36_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_135(void)
{
	object var_32_object;
	@CreateDiaryEntry(var_32_object, 572, 1, 530605);
	bool var_36_bool; object var_37_object;
	var_32_object = var_37_object;
	func_166(var_36_bool, var_37_object, 245);
}
EMIT "Stack[-1] = 0";


void func_105(bool var_12_bool, object var_13_object, string var_14_string)
{
	int var_18_int;
	@GetInvItemByName(var_18_int, var_14_string);
	int var_19_int;
	@GetInvItemProperty(var_19_int, var_18_int, "Category");
	bool var_20_bool;
	var_13_object->RemoveItemByType(var_20_bool, var_18_int, var_19_int);
	if(var_20_bool != 0) {
		int var_23_int;
		var_18_int = var_23_int;
		func_86(var_23_int, 1);
	}
	var_20_bool = var_12_bool;
}


void func_80(bool var_77_bool)
{
	int var_79_int;
	@GetVariable("nouse_container", var_79_int);
	var_77_bool = !var_79_int;
}


void func_50(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_148(void)
{
	bool var_54_bool;
	func_194(var_54_bool, 562);
}


void func_54(object var_70_object)
{
	bool var_74_bool;
	bool var_75_bool = true;
	var_76_bool = !var_70_object; //@nz
	if(var_76_bool != 1) {
		bool var_77_bool;
		func_80(var_77_bool);
		var_81_bool = !var_77_bool; //@nz
		if(var_81_bool != 1)
			var_75_bool = false;
	}
	if(var_75_bool != 0) {
	}
	bool var_73_bool;
	var_70_object->IsOnGround(var_73_bool);
	if(var_73_bool != 0) {
		disable OnUse;
		@IsOverrideActive(var_74_bool);
		if(!var_74_bool) //@nz
			@Barter(var_70_object);
		enable OnUse;
	}
}


void func_86(int var_23_int, int var_24_int)
{
	object var_26_object;
	@CreateIntVector(var_26_object);
	var_26_object->add(var_23_int);
	var_26_object->add(var_24_int);
	@SendWorldWndMessage(4, var_26_object);
}
EMIT "Stack[-1] = 0";


void func_153(object var_45_object)
{
	object var_47_object;
	@GetDiaryRoot(var_47_object);
	if(!var_47_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_45_object = false;
	}
	var_47_object = var_45_object;
}
EMIT "Stack[-1] = 0";


void func_122(void)
{
	object var_63_object;
	@CreateDiaryEntry(var_63_object, 563, 0, 530577);
	bool var_67_bool; object var_68_object;
	var_63_object = var_68_object;
	func_166(var_67_bool, var_68_object, -1);
}
EMIT "Stack[-1] = 0";


