// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool)
	{
		@sync();
		bool var_2_bool;
		func_114(var_2_bool);
		if(!var_2_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		} else {
			var_1_bool = false;
		}
		func_66();
	
	}

	void OnUse(bool var_0_bool, bool var_1_bool, object var_2_object)
	{
		@SetVariable("d7q02BirdBalahon", 1);
		int var_5_int;
		@GetVariable("d7q02", var_5_int);
		if(var_5_int == 4) {
			func_150();
			bool var_35_bool;
			func_125(var_35_bool, "quest_d7_02", "completed");
		} else {
			var_42_bool = !var_0_bool; //@nz
			if(var_42_bool == 0) goto Label_25;
			func_137();
		}
	Label_25:
		var_0_bool = true;
		bool var_6_bool;
		@IsOverrideActive(var_6_bool);
		if(!var_6_bool) //@nz
			@Barter(var_2_object);
	
	}

	void OnUnload(bool var_0_bool, bool var_1_bool)
	{
		if(!var_1_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		}
		func_98();
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, string var_2_string)
	{
		bool var_4_bool;
		if(var_2_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_4_bool);
			bool var_7_bool = false;
			if(!var_4_bool) { //@nz
				bool var_9_bool;
				func_33(var_9_bool);
				if(var_9_bool != 0)
					var_7_bool = true;
			}
			if(var_7_bool != 0) {
				object var_13_object;
				func_119(var_13_object);
				@RemoveActor(var_13_object);
			}
		} else if(var_2_string == "restore") {
			var_0_bool = false;
		}
	
	}

}


void func_33(bool var_9_bool)
{
	bool var_11_bool;
	@GetVariable("d7q02BirdBalahon", var_11_bool);
	var_11_bool = var_9_bool;
}


void func_66(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_163(object var_26_object)
{
	object var_28_object;
	@GetDiaryRoot(var_28_object);
	if(!var_28_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_26_object = false;
	}
	var_28_object = var_26_object;
}
EMIT "Stack[-1] = 0";


void func_98(void)
{
	bool var_4_bool = false;
	if(var_0_bool != 0) {
		bool var_6_bool;
		func_33(var_6_bool);
		if(var_6_bool != 0)
			var_4_bool = true;
	}
	if(var_4_bool != 0) {
		object var_10_object;
		func_119(var_10_object);
		@RemoveActor(var_10_object);
	}
}


void func_137(void)
{
	object var_44_object;
	@CreateDiaryEntry(var_44_object, 636, 2, 533145);
	bool var_48_bool; object var_49_object;
	var_44_object = var_49_object;
	func_176(var_48_bool, var_49_object, 170);
}
EMIT "Stack[-1] = 0";


void func_176(bool var_17_bool, object var_18_object, int var_19_int)
{
	object var_26_object;
	func_163(var_26_object);
	object var_23_object;
	var_26_object = var_23_object;
	object var_24_object;
	var_23_object->Find(var_19_int, var_24_object);
	if(!var_24_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_19_int);
		var_17_bool = false;
	}
	var_24_object->AddChild(var_18_object);
	@SendWorldWndMessage(7);
	int var_25_int;
	var_18_object->GetCategory(var_25_int);
	@SetDiarySection(var_25_int);
	var_17_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_114(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_150(void)
{
	object var_13_object;
	@CreateDiaryEntry(var_13_object, 174, 2, 515426);
	bool var_17_bool; object var_18_object;
	var_13_object = var_18_object;
	func_176(var_17_bool, var_18_object, 170);
}
EMIT "Stack[-1] = 0";


void func_119(object var_13_object)
{
	object var_15_object;
	@self(var_15_object);
	var_15_object = var_13_object;
}
EMIT "Stack[-1] = 0";


void func_125(bool var_35_bool, string var_36_string, string var_37_string)
{
	object var_39_object;
	@FindActor(var_39_object, var_36_string);
	if(var_39_object == null)
		var_35_bool = false;
	@Trigger(var_39_object, var_37_string);
	var_35_bool = true;
}
EMIT "Stack[-1] = 0";


