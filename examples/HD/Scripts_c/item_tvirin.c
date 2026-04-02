maintask task_0
{
	void init(bool var_0_bool)
	{
		bool var_1_bool;
		func_85(var_1_bool, "health", 0.05, (float)0, (float)1);
		func_148(0.05);
		bool var_25_bool;
		func_85(var_25_bool, "immunity", 0.05, (float)0, (float)1);
		func_138(0.05);
		bool var_34_bool;
		func_85(var_34_bool, "tiredness", 0.05, (float)0, (float)1);
		func_128(0.05);
		func_53(12.0);
	}

}


void func_128(float var_39_float)
{
	object var_41_object;
	@CreateFloatVector(var_41_object);
	var_41_object->add(var_39_float);
	@SendWorldWndMessage(11, var_41_object);
}
EMIT "Stack[-1] = 0";


// @pe
void func_38(bool var_55_bool, float var_56_float)
{
	bool var_57_bool;
	func_104(var_57_bool);
	if(var_57_bool != 0) {
		bool var_65_bool;
		func_85(var_65_bool, "tiredness", (var_56_float * -0.1), (float)0, (float)1);
	}
	var_55_bool = false;
}


void func_104(bool var_57_bool)
{
	bool var_60_bool;
	@HasProperty("sleeping", var_60_bool);
	if(!var_60_bool) //@nz
		var_57_bool = false;
	bool var_61_bool;
	@GetProperty("sleeping", var_61_bool);
	var_61_bool = var_57_bool;
}


void func_138(float var_30_float)
{
	object var_32_object;
	@CreateFloatVector(var_32_object);
	var_32_object->add(var_30_float);
	@SendWorldWndMessage(13, var_32_object);
}
EMIT "Stack[-1] = 0";


void func_148(float var_17_float)
{
	object var_19_object;
	@CreateFloatVector(var_19_object);
	var_19_object->add(var_17_float);
	if(var_17_float < 0)
		@RumblePlay(0.7, 500);
	@SendWorldWndMessage(15, var_19_object);
}
EMIT "Stack[-1] = 0";


void func_53(float var_43_float)
{
	float var_48_float; float var_51_float;
	@GetGameTime(var_48_float);
	float var_49_float = var_48_float + var_43_float;
	float var_50_float;
	var_48_float = var_50_float;
	
	for(;;) {
		@sync();
		if(var_0_bool != 0) {
		} else {
			@GetGameTime(var_51_float);
			if(var_51_float <= var_50_float) {
			} else {
			if(var_51_float >= var_49_float) {
				bool var_55_bool;
				func_38(var_55_bool, (var_49_float - var_50_float));
				goto Label_84;
			EMIT "GOTO 0x53";
			}
			bool var_71_bool;
			func_38(var_71_bool, (var_51_float - var_50_float));
			if(var_71_bool != 0) {
				goto Label_84;
			}
			var_51_float = var_50_float;
			}
		}
	Label_84:

	}
	
}


void func_85(bool var_1_bool, string var_2_string, float var_3_float, float var_4_float, float var_5_float)
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
	func_117(var_11_float, (var_9_float + var_3_float), var_13_float, var_14_float);
	@SetProperty(var_2_string, var_11_float);
	var_1_bool = true;
}


// @pe
void func_117(float var_11_float, float var_12_float, float var_13_float, float var_14_float)
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


