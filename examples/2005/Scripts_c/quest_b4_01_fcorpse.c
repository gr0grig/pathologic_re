maintask task_0
{
	void init(void)
	{
		@SetVisibility(true);
		func_81();
		func_16();
	}

	void OnUnload(void)
	{
		object var_0_object;
		func_46(var_0_object);
		@RemoveActor(var_0_object);
	}

	void OnUse(object actor)
	{
		bool var_4_bool;
		bool var_5_bool = true;
		var_6_bool = !actor; //@nz
		if(var_6_bool != 1) {
			bool var_7_bool;
			func_52(var_7_bool);
			var_11_bool = !var_7_bool; //@nz
			if(var_11_bool != 1)
				var_5_bool = false;
		}
		if(var_5_bool != 0) {
		}
		bool var_3_bool;
		actor->IsOnGround(var_3_bool);
		if(var_3_bool != 0) {
			disable OnUse;
			@IsOverrideActive(var_4_bool);
			if(!var_4_bool) //@nz
				@WorkWithCorpse(actor);
			enable OnUse;
		}
	}

}


void func_64(string var_7_string)
{
	object var_11_object;
	@CreateInvItem(var_11_object);
	var_11_object->SetItemName(var_7_string);
	var_11_object->SetProperty("Organ", 1);
	int var_12_int;
	var_11_object->GetItemID(var_12_int);
	bool var_13_bool;
	@AddItem(var_13_bool, var_11_object, 0, 1);
}
EMIT "Stack[-3] = 0";


void func_46(object var_0_object)
{
	object var_2_object;
	@self(var_2_object);
	var_2_object = var_0_object;
}
EMIT "Stack[-1] = 0";


void func_16(void)
{
	
	for(;;) {
		@Hold();
	}
}
EMIT "Return(); Pop(0)";


void func_81(void)
{
	int var_1_int;
	func_58(var_1_int);
	if(var_1_int != 1) {
	}
	func_64("liver");
	func_64("kidney");
	func_64("heart");
	func_64("blood");
}


void func_52(bool var_7_bool)
{
	int var_9_int;
	@GetVariable("nouse_container", var_9_int);
	var_7_bool = !var_9_int;
}


void func_58(int var_1_int)
{
	int var_3_int;
	@GetVariable("branch", var_3_int);
	var_3_int = var_1_int;
}


