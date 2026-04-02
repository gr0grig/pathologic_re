maintask task_0
{
	void init(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool)
	{
		func_59(false);
	}

	void OnTrigger(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, string var_4_string)
	{
		bool var_6_bool;
		if(var_4_string == "put_item") {
			if(!var_3_bool) { //@nz
				@AddItem(var_6_bool, "d3q01_blood", 0);
				var_3_bool = true;
			}
		} else {
			string var_12_string;
			var_4_string = var_12_string;
			func_104(var_6_bool, var_12_string);
		}
	
	}

	void OnUse(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool, object var_4_object)
	{
		bool var_8_bool;
		bool var_9_bool;
		func_172(var_9_bool);
		if(!var_9_bool) { //@nz
		}
		bool var_7_bool;
		var_4_object->IsOnGround(var_7_bool);
		if(var_7_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_8_bool);
			if(!var_8_bool) //@nz
				@Barter(var_4_object);
			enable OnUse;
		}
	}

	void OnDispose(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool)
	{
		@RemoveActor(var_2_object);
		var_1_object->Switch(false); //@t
	}

	void OnUnload(bool var_0_bool, object var_1_object, object var_2_object, bool var_3_bool)
	{
		bool var_4_bool = false;
		if(var_0_bool != 0) {
			bool var_6_bool;
			func_42(var_6_bool);
			if(var_6_bool != 0)
				var_4_bool = true;
		}
		if(var_4_bool != 0) {
			object var_20_object;
			func_148(var_20_object);
			@RemoveActor(var_20_object);
		}
	}

}


void func_100(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_104(bool var_0_bool, string var_12_string)
{
	bool var_14_bool;
	if(var_12_string == "cleanup") {
		var_0_bool = true;
		@IsLoaded(var_14_bool);
		bool var_17_bool = false;
		if(!var_14_bool) { //@nz
			bool var_19_bool;
			func_42(var_19_bool);
			if(var_19_bool != 0)
				var_17_bool = true;
		}
		if(var_17_bool != 0) {
			object var_33_object;
			func_148(var_33_object);
			@RemoveActor(var_33_object);
		}
	} else if(var_12_string == "restore") {
		var_0_bool = false;
	}
	
}


void func_42(bool var_6_bool)
{
	int var_9_int;
	@GetItemCountOfType(var_9_int, "d3q01_blood");
	if(!var_9_int) //@nz
		var_6_bool = true;
	int var_10_int;
	@GetVariable("d3q01", var_10_int);
	bool var_14_bool; int var_15_int;
	var_10_int = var_15_int;
	func_178(var_14_bool, var_15_int);
	var_6_bool = !var_14_bool;
}


void func_172(bool var_9_bool)
{
	int var_11_int;
	@GetVariable("nouse_container", var_11_int);
	var_9_bool = !var_11_int;
}


void func_78(object var_2_object)
{
	object var_11_object;
	@GetScene(var_11_object);
	string var_12_string;
	@GetProperty("fire_loc", var_12_string);
	object var_14_object; object var_15_object; string var_16_string;
	var_11_object = var_15_object;
	var_12_string = var_16_string;
	func_154(var_14_object, var_15_object, var_16_string, "scripted", "bonfire.xml");
	var_2_object = var_14_object;
}
EMIT "Stack[-2] = 0";


// @pe
void func_178(bool var_14_bool, int var_15_int)
{
	var_14_bool = false;
	if(var_15_int >= 1) {
		if(var_15_int < 1000)
			var_14_bool = true;
	}
}


void func_148(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_154(object var_14_object, object var_15_object, string var_16_string, string var_17_string, string var_18_string)
{
	bool var_23_bool; cvector var_24_cvector; cvector var_25_cvector;
	var_15_object->GetLocator(var_16_string, var_23_bool, var_24_cvector, var_25_cvector);
	if(!var_23_bool) //@nz
		@Trace(("Locator " + var_16_string) + " doesn't exist");
	else
		@AddActorByType(Obj(), var_17_string, var_15_object, var_24_cvector, var_25_cvector, var_18_string);
	object var_26_object = var_14_object;
	
}
EMIT "Stack[-1] = 0";


void func_59(object var_1_object)
{
	string var_5_string;
	@GetProperty("light", var_5_string);
	@FindActor(var_1_object, var_5_string);
	var_1_object->Switch(true); //@t
	@SetVisibility(true);
	func_78(var_5_string);
	func_100();
}


