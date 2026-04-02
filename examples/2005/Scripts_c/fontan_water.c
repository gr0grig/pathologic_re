maintask task_0
{
	void init(bool var_0_bool)
	{
		@SetVisibility(true);
		@SetTimeEvent(0, 24);
	
	Label_8:
		@Hold();
		if(!false) goto Label_8; //@nz
		@SetUsable(false);
	}

	// @pe
	void OnGameTime(bool var_0_bool, int var_1_int, float var_2_float)
	{
		if(var_1_int == 0) {
			@StopGroup0();
			var_0_bool = true;
		}
	}

	// @pe
	void OnUse(bool var_0_bool, object var_1_object)
	{
		object var_3_object;
		var_1_object = var_3_object;
		bool var_2_bool;
		func_70(var_2_bool, var_3_object, "hunger", -0.01, (float)0, (float)1);
		func_113(-0.01);
		bool var_30_bool; object var_31_object;
		var_1_object = var_31_object;
		func_70(var_30_bool, var_31_object, "tiredness", 0.03, (float)0, (float)1);
		func_103(0.03);
		@PlaySound("drink");
		@Sleep(1);
		disable OnUse;
		enable OnUse;
	}

}


void func_70(bool var_2_bool, object var_3_object, string var_4_string, float var_5_float, float var_6_float, float var_7_float)
{
	object var_11_object;
	var_3_object = var_11_object;
	string var_12_string;
	var_4_string = var_12_string;
	bool var_10_bool;
	func_58(var_10_bool, var_11_object, var_12_string);
	if(!var_10_bool) //@nz
		var_2_bool = false;
	float var_9_float;
	var_3_object->GetProperty(var_4_string, var_9_float);
	float var_20_float; float var_22_float; float var_23_float;
	var_6_float = var_22_float;
	var_7_float = var_23_float;
	func_92(var_20_float, (var_9_float + var_5_float), var_22_float, var_23_float);
	var_3_object->SetProperty(var_4_string, var_20_float);
	var_2_bool = true;
}


void func_103(float var_36_float)
{
	object var_38_object;
	@CreateFloatVector(var_38_object);
	var_38_object->add(var_36_float);
	@SendWorldWndMessage(11, var_38_object);
}
EMIT "Stack[-1] = 0";


void func_113(float var_26_float)
{
	object var_28_object;
	@CreateFloatVector(var_28_object);
	var_28_object->add(var_26_float);
	@SendWorldWndMessage(12, var_28_object);
}
EMIT "Stack[-1] = 0";


void func_58(bool var_10_bool, object var_11_object, string var_12_string)
{
	var_17_bool = IsFuncExist(var_11_object, "HasProperty", 2);
	if(!var_17_bool) { //@nz
		var_10_bool = false;
		return 2;
	}
	bool var_14_bool;
	var_11_object->HasProperty(var_12_string, var_14_bool);
	var_14_bool = var_10_bool;
}


// @pe
void func_92(float var_20_float, float var_21_float, float var_22_float, float var_23_float)
{
	if(var_21_float < var_22_float) {
		var_22_float = var_20_float;
		return 0;
	}
	if(var_21_float > var_23_float) {
		var_23_float = var_20_float;
		return 0;
	}
	var_21_float = var_20_float;
}


