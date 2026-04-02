maintask task_0
{
	void init(bool var_0_bool)
	{
		bool var_1_bool;
		func_82(var_1_bool, "health", 0.35, (float)0, (float)1);
		func_135(0.35);
		bool var_25_bool;
		func_82(var_25_bool, "tiredness", 0.35, (float)0, (float)1);
		func_125(0.35);
		func_50(10.0);
	}

}


void func_101(bool var_48_bool)
{
	bool var_51_bool;
	@HasProperty("sleeping", var_51_bool);
	if(!var_51_bool) //@nz
		var_48_bool = false;
	bool var_52_bool;
	@GetProperty("sleeping", var_52_bool);
	var_52_bool = var_48_bool;
}


void func_135(float var_17_float)
{
	object var_19_object;
	@CreateFloatVector(var_19_object);
	var_19_object->add(var_17_float);
	if(var_17_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_19_object);
}
EMIT "Stack[-1] = 0";


void func_82(bool var_1_bool, string var_2_string, float var_3_float, float var_4_float, float var_5_float)
{
	bool var_8_bool;
	@HasProperty(var_2_string, var_8_bool);
	if(!var_8_bool) //@nz
		var_1_bool = false;
	float var_9_float;
	@GetProperty(var_2_string, var_9_float);
	float var_11_float; float var_13_float; float var_14_float;
	var_4_float = var_13_float;
	var_5_float = var_14_float;
	func_114(var_11_float, (var_9_float + var_3_float), var_13_float, var_14_float);
	@SetProperty(var_2_string, var_11_float);
	var_1_bool = true;
}


void func_50(float var_34_float)
{
	float var_39_float; float var_42_float;
	@GetGameTime(var_39_float);
	float var_40_float = var_39_float + var_34_float;
	float var_41_float;
	var_39_float = var_41_float;
	
	for(;;) {
		@sync();
		if(var_0_bool != 0) {
		} else {
			@GetGameTime(var_42_float);
			if(var_42_float <= var_41_float) {
			} else {
			if(var_42_float >= var_40_float) {
				bool var_46_bool;
				func_27(var_46_bool, (var_40_float - var_41_float));
				goto Label_81;
			EMIT "GOTO 0x50";
			}
			bool var_68_bool;
			func_27(var_68_bool, (var_42_float - var_41_float));
			if(var_68_bool != 0) {
				goto Label_81;
			}
			var_42_float = var_41_float;
			}
		}
	Label_81:

	}
	
}


// @pe
void func_114(float var_11_float, float var_12_float, float var_13_float, float var_14_float)
{
	if(var_12_float < var_13_float) {
		var_13_float = var_11_float;
		return 0;
	}
	if(var_12_float > var_14_float) {
		var_14_float = var_11_float;
		return 0;
	}
	var_12_float = var_11_float;
}


// @pe
void func_27(bool var_46_bool, float var_47_float)
{
	bool var_48_bool;
	func_101(var_48_bool);
	if(var_48_bool != 0) {
		bool var_56_bool;
		func_82(var_56_bool, "health", (var_47_float * 0.3), (float)0, (float)1);
		bool var_62_bool;
		func_82(var_62_bool, "tiredness", (var_47_float * -0.3), (float)0, (float)1);
	}
	var_46_bool = false;
}


void func_125(float var_30_float)
{
	object var_32_object;
	@CreateFloatVector(var_32_object);
	var_32_object->add(var_30_float);
	@SendWorldWndMessage(11, var_32_object);
}
EMIT "Stack[-1] = 0";


