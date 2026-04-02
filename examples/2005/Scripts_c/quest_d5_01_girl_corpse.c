// @GLOBALS: 0:object:

maintask task_0
{
	void init(bool var_0_bool, bool var_1_bool, bool var_2_bool)
	{
		@sync();
		bool var_3_bool;
		func_118(var_3_bool);
		if(!var_3_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		} else {
			var_1_bool = false;
		}
		func_70();
	
	}

	void OnUse(bool var_0_bool, bool var_1_bool, bool var_2_bool, object var_3_object)
	{
		@SetVariable("d5q02KnowNudeIsDead", 1);
		bool var_5_bool;
		@IsOverrideActive(var_5_bool);
		if(!var_5_bool) //@nz
			@Barter(var_3_object);
		bool var_9_bool = false;
		bool var_10_bool;
		func_26(var_10_bool);
		if(var_10_bool != 0) {
			if(!var_2_bool) //@nz
				var_9_bool = true;
		}
		if(var_9_bool != 0) {
			func_129();
			var_2_bool = true;
		}
	}

	void OnUnload(bool var_0_bool, bool var_1_bool, bool var_2_bool)
	{
		if(!var_1_bool) { //@nz
			@SetVisibility(true);
			var_1_bool = true;
		}
		func_102();
	}

	void OnTrigger(bool var_0_bool, bool var_1_bool, bool var_2_bool, string var_3_string)
	{
		bool var_5_bool;
		if(var_3_string == "cleanup") {
			var_0_bool = true;
			@IsLoaded(var_5_bool);
			bool var_8_bool = false;
			if(!var_5_bool) { //@nz
				bool var_10_bool;
				func_26(var_10_bool);
				if(var_10_bool != 0)
					var_8_bool = true;
			}
			if(var_8_bool != 0) {
				object var_24_object;
				func_123(var_24_object);
				@RemoveActor(var_24_object);
			}
		} else if(var_3_string == "restore") {
			var_0_bool = false;
		}
	
	}

}


void func_129(void)
{
	object var_26_object;
	@CreateDiaryEntry(var_26_object, 634, 1, 533080);
	bool var_30_bool; object var_31_object;
	var_26_object = var_31_object;
	func_155(var_30_bool, var_31_object, 139);
}
EMIT "Stack[-1] = 0";


void func_102(void)
{
	bool var_5_bool = false;
	if(var_0_bool != 0) {
		bool var_7_bool;
		func_26(var_7_bool);
		if(var_7_bool != 0)
			var_5_bool = true;
	}
	if(var_5_bool != 0) {
		object var_21_object;
		func_123(var_21_object);
		@RemoveActor(var_21_object);
	}
}


void func_70(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_155(bool var_30_bool, object var_31_object, int var_32_int)
{
	object var_39_object;
	func_142(var_39_object);
	object var_36_object;
	var_39_object = var_36_object;
	object var_37_object;
	var_36_object->Find(var_32_int, var_37_object);
	if(!var_37_object) { //@nz
		@Trace("Can't find diary parent with id: " + var_32_int);
		var_30_bool = false;
	}
	var_37_object->AddChild(var_31_object);
	@SendWorldWndMessage(7);
	int var_38_int;
	var_31_object->GetCategory(var_38_int);
	@SetDiarySection(var_38_int);
	var_30_bool = false;
}
EMIT "Stack[-2] = 0";
EMIT "Stack[-3] = 0";


void func_142(object var_39_object)
{
	object var_41_object;
	@GetDiaryRoot(var_41_object);
	if(!var_41_object) { //@nz
		@Trace("Can't retrieve diary root");
		var_39_object = false;
	}
	var_41_object = var_39_object;
}
EMIT "Stack[-1] = 0";


void func_118(bool var_3_bool)
{
	bool var_5_bool;
	@IsLoaded(var_5_bool);
	var_5_bool = var_3_bool;
}


// @pe
void func_183(bool var_18_bool, int var_19_int)
{
	var_18_bool = false;
	if(var_19_int >= 1) {
		if(var_19_int < 1000)
			var_18_bool = true;
	}
}


void func_26(bool var_10_bool)
{
	int var_13_int;
	@GetItemCountOfType(var_13_int, "d5q01_heart");
	if(!var_13_int) //@nz
		var_10_bool = true;
	int var_14_int;
	@GetVariable("d5q01", var_14_int);
	bool var_18_bool; int var_19_int;
	var_14_int = var_19_int;
	func_183(var_18_bool, var_19_int);
	var_10_bool = !var_18_bool;
}


void func_123(object var_24_object)
{
	object var_26_object;
	@self(var_26_object);
	var_26_object = var_24_object;
}
EMIT "Stack[-1] = 0";


