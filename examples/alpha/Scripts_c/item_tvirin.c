maintask task_0
{
	void init(void)
	{
		bool var_0_bool;
		func_70(var_0_bool, "health", 0.05, (float)0, (float)1);
		bool var_16_bool;
		func_70(var_16_bool, "immunity", 0.05, (float)0, (float)1);
		bool var_21_bool;
		func_70(var_21_bool, "tiredness", 0.05, (float)0, (float)1);
		func_41(12.0);
	}

}


// @pe
void func_102(float var_10_float, float var_11_float, float var_12_float, float var_13_float)
{
	if(var_11_float < var_12_float) {
		var_12_float = var_10_float;
		return 0;
	}
	if(var_11_float > var_13_float) {
		var_13_float = var_10_float;
		return 0;
	}
	var_11_float = var_10_float;
}


void func_70(bool var_0_bool, string var_1_string, float var_2_float, float var_3_float, float var_4_float)
{
	bool var_7_bool;
	@HasProperty(var_1_string, var_7_bool);
	if(!var_7_bool) //@nz
		var_0_bool = false;
	float var_8_float;
	@GetProperty(var_1_string, var_8_float);
	float var_10_float; float var_12_float; float var_13_float;
	var_3_float = var_12_float;
	var_4_float = var_13_float;
	func_102(var_10_float, (var_8_float + var_2_float), var_12_float, var_13_float);
	@SetProperty(var_1_string, var_10_float);
	var_0_bool = true;
}


void func_41(float var_26_float)
{
	float var_31_float; float var_34_float;
	@GetGameTime(var_31_float);
	float var_32_float = var_31_float + var_26_float;
	float var_33_float;
	var_31_float = var_33_float;
	
	for(;;) {
		@sync();
		@GetGameTime(var_34_float);
		if(var_34_float <= var_33_float) {
		} else {
		if(var_34_float >= var_32_float) {
			bool var_37_bool;
			func_26(var_37_bool, (var_32_float - var_33_float));
			goto Label_69;
		EMIT "GOTO 0x44";

		Label_69:
			for(;;) {
		}
			bool var_53_bool;
			func_26(var_53_bool, (var_34_float - var_33_float));
			if(var_53_bool == 0) goto Label_67;
		}

	Label_67:
		var_34_float = var_33_float;
		}
	}
	
}


void func_89(bool var_39_bool)
{
	bool var_42_bool;
	@HasProperty("sleeping", var_42_bool);
	if(!var_42_bool) //@nz
		var_39_bool = false;
	bool var_43_bool;
	@GetProperty("sleeping", var_43_bool);
	var_43_bool = var_39_bool;
}


// @pe
void func_26(bool var_37_bool, float var_38_float)
{
	bool var_39_bool;
	func_89(var_39_bool);
	if(var_39_bool != 0) {
		bool var_47_bool;
		func_70(var_47_bool, "tiredness", (var_38_float * -0.1), (float)0, (float)1);
	}
	var_37_bool = false;
}


