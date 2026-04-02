maintask task_0
{
	void init(object var_0_object)
	{
		object var_1_object;
		func_111(var_1_object);
		var_0_object = var_1_object;
		@SetVisibility(true);
		func_14();
		func_81();
	}

	// @pe
	void OnGameTime(object var_0_object, int var_1_int, float var_2_float)
	{
		func_61(var_1_int + 1);
	}

	void OnLoad(object var_0_object)
	{
		object var_7_object; bool var_8_bool;
		if(!var_0_object) { //@nz
		}
		int var_5_int;
		var_0_object->size(var_5_int); //@t
		int var_6_int = 0;
	
		while(var_6_int < var_5_int) {
			var_0_object->get(var_7_object, var_6_int); //@t
			@AddItem(var_8_bool, var_7_object, 0);
			var_7_object = null;
			var_6_int += 1;
		}
	
		var_0_object->clear(); //@t
	}

	void OnUse(object actor, object var_1_object)
	{
		bool var_5_bool;
		bool var_6_bool = true;
		var_7_bool = !var_1_object; //@nz
		if(var_7_bool != 1) {
			bool var_8_bool;
			func_117(var_8_bool);
			var_12_bool = !var_8_bool; //@nz
			if(var_12_bool != 1)
				var_6_bool = false;
		}
		if(var_6_bool != 0) {
		}
		bool var_4_bool;
		var_1_object->IsOnGround(var_4_bool);
		if(var_4_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_5_bool);
			if(!var_5_bool) //@nz
				@Barter(var_1_object);
			enable OnUse;
		}
	}

}


void func_14(void)
{
	float var_7_float;
	@GetGameTime(var_7_float);
	int var_8_int = (var_7_float / 24) + 1;
	
	while(var_8_int < 12) {
		@SetTimeEvent(var_8_int, (var_8_int * 24));
		var_8_int += 1;
	}
	
}


void func_111(object var_1_object)
{
	object var_3_object;
	@CreateObjectVector(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


void func_81(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_117(bool var_8_bool)
{
	int var_10_int;
	@GetVariable("nouse_container", var_10_int);
	var_8_bool = !var_10_int;
}


void func_61(object var_0_object)
{
	bool var_8_bool; bool var_9_bool; object var_10_object;
	@HasProperty("enabled", var_8_bool);
	if(var_8_bool != 0) {
		@GetProperty("enabled", var_9_bool);
		if(var_9_bool != 0) {
			@CreateInvItem(var_10_object);
			var_10_object->SetItemName("alpha_pills");
			var_0_object->add(var_10_object); //@t
			var_10_object = null;
		}
	}
}


