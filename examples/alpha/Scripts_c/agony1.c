task task_0
{
	void OnLoad(void)
	{
		@StopGroup0();
	}

}


maintask task_1
{
	void init(void)
	{
		@SetProperty("agony", 0.5);
		func_21();
	}

	void OnUse(object actor)
	{
		bool var_6_bool; bool var_7_bool; float var_8_float; bool var_9_bool; float var_10_float;
		@IsDead(var_6_bool);
		if(var_6_bool != 0) {
			@IsOverrideActive(var_7_bool);
			if(!var_7_bool) //@nz
				@WorkWithCorpse(actor);
		} else {
			@GetProperty("agony", var_8_float);
			if(var_8_float == 0) {
			}
			@IsOverrideActive(var_9_bool);
			var_16_bool = !var_9_bool; //@nz
			if(var_16_bool == 0) goto Label_114;
			object var_20_object;
			func_177(var_20_object);
			@ShowWindow("agony.xml", true, false, var_20_object);
			@GetProperty("agony", var_10_float);
			if(!(var_10_float == 0)) goto Label_114;
			@SetProperty("agony", 0);
			bool var_28_bool; object var_29_object;
			actor = var_29_object;
			func_155(var_28_bool, var_29_object, "reputation", 0.2, (float)0, (float)1);
		}
	Label_114:
	
	}

	void OnLoad(void)
	{
		bool var_1_bool;
		@IsDead(var_1_bool);
		if(var_1_bool != 0)
			@LockAnimationEnd("all", "agony_die");
	}

	void OnUnload(void)
	{
		func_140();
		TaskCall(0);
		func_0();
		TaskReturn();
	}

}


void func_0(void)
{
	@Hold();
}


void func_134(bool var_8_bool)
{
	float var_10_float;
	@GetProperty("agony", var_10_float);
	var_8_bool = !var_10_float;
}


void func_140(void)
{
	@StopAnimation();
}


void func_14(void)
{
	bool var_16_bool;
	@AddItem(var_16_bool, "Money", 0, 500);
}


void func_143(bool var_36_bool, object var_37_object, string var_38_string)
{
	var_43_bool = IsFuncExist(var_37_object, "HasProperty", 2);
	if(!var_43_bool) { //@nz
		var_36_bool = false;
		return 2;
	}
	bool var_40_bool;
	var_37_object->HasProperty(var_38_string, var_40_bool);
	var_40_bool = var_36_bool;
}


void func_177(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_21(void)
{
	bool var_3_bool;
	@RemoveEnvelope();
	@SetRTEnvelope(50, 40);
	
	for(;;) {
		@PlayAnimation("all", "agony");
		@WaitForAnimEnd(var_3_bool);
		bool var_8_bool;
		func_134(var_8_bool);
		if(var_8_bool != 0) {
			if(var_3_bool != 0)
				func_58();
			@SetDeathState();
			func_14();
		} else {
		}
		@LockAnimationEnd("all", "agony_die");

		for(;;) {
			@Hold();
		}

	}
}
EMIT "Return(); Pop(2)";


// @pe
void func_183(float var_46_float, float var_47_float, float var_48_float, float var_49_float)
{
	if(var_47_float < var_48_float) {
		var_48_float = var_46_float;
		return 0;
	}
	if(var_47_float > var_49_float) {
		var_49_float = var_46_float;
		return 0;
	}
	var_47_float = var_46_float;
}


void func_58(void)
{
	@PlayAnimation("all", "agony_die");
	@WaitForAnimEnd();
}


void func_155(bool var_28_bool, object var_29_object, string var_30_string, float var_31_float, float var_32_float, float var_33_float)
{
	object var_37_object;
	var_29_object = var_37_object;
	string var_38_string;
	var_30_string = var_38_string;
	bool var_36_bool;
	func_143(var_36_bool, var_37_object, var_38_string);
	if(!var_36_bool) //@nz
		var_28_bool = false;
	float var_35_float;
	var_29_object->GetProperty(var_30_string, var_35_float);
	float var_46_float; float var_48_float; float var_49_float;
	var_32_float = var_48_float;
	var_33_float = var_49_float;
	func_183(var_46_float, (var_35_float + var_31_float), var_48_float, var_49_float);
	var_29_object->SetProperty(var_30_string, var_46_float);
	var_28_bool = true;
}


