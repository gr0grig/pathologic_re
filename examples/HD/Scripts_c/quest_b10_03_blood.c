// @GLOBALS: 0:object:

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
		if(var_0_bool != 0) {
		}
		object var_3_object;
		@CreateInvItem(var_3_object);
		var_3_object->SetItemName("avroks_blood");
		bool var_6_bool; object var_7_object; object var_8_object;
		var_1_object = var_7_object;
		var_3_object = var_8_object;
		func_56(var_6_bool, var_7_object, var_8_object, 1);
		if(var_6_bool != 0) {
			var_0_bool = true;
			func_73();
			@SetVariable("b10q03", 4);
			object var_48_object;
			func_38(var_48_object);
			@RemoveActor(var_48_object);
		}
	}
	EMIT "Stack[-1] = 0";

}


void func_99(bool var_28_bool, object var_29_object, int var_30_int)
{
	object var_37_object;
	func_86(var_37_object);
	object var_34_object;
	var_37_object = var_34_object;
	object var_35_object;
	var_34_object->Find(var_30_int, var_35_object);
	if(!var_35_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_30_int);
		var_28_bool = false;
	}
	var_35_object->AddChild(var_29_object);
	@SendWorldWndMessage(7);
	int var_36_int;
	var_29_object->GetCategory(var_36_int);
	@SetDiarySection(var_36_int);
	var_28_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_38(object var_48_object)
{
	object var_50_object;
	@self(var_50_object);
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_73(void)
{
	object var_24_object;
	@CreateDiaryEntry(var_24_object, 604, 2, 531183);
	bool var_28_bool; object var_29_object;
	var_24_object = var_29_object;
	func_99(var_28_bool, var_29_object, 594);
}
EMIT "Stack[-1] = 0";


void func_44(int var_18_int, int var_19_int)
{
	object var_21_object;
	@CreateIntVector(var_21_object);
	var_21_object->add(var_18_int);
	var_21_object->add(var_19_int);
	@SendWorldWndMessage(3, var_21_object);
}
EMIT "Stack[-1] = 0";


void func_86(object var_37_object)
{
	object var_39_object;
	@GetDiaryRoot(var_39_object);
	if(!var_39_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_37_object = false;
	}
	var_39_object = var_37_object;
}
EMIT "Stack[-1] = 0";


void func_56(bool var_6_bool, object var_7_object, object var_8_object, int var_9_int)
{
	int var_13_int;
	var_8_object->GetItemID(var_13_int);
	int var_14_int;
	@GetInvItemProperty(var_14_int, var_13_int, "Category");
	bool var_15_bool;
	var_7_object->AddItem(var_15_bool, var_8_object, var_14_int, var_9_int);
	if(var_15_bool != 0) {
		int var_18_int; int var_19_int;
		var_13_int = var_18_int;
		var_9_int = var_19_int;
		func_44(var_18_int, var_19_int);
	}
	var_15_bool = var_6_bool;
}


