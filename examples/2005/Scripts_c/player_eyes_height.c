maintask task_0
{
	void init(void)
	{
		bool var_2_bool; float var_3_float;
	
		for(;;) {
			@GetEyesHeightCoef(var_3_float);
			if(var_3_float == 1) {

			Label_6:
				@sync();
				@IsSneakEnabled(var_2_bool);
				if(var_2_bool != 0) {
				} else {
				goto Label_6;
			}
			@IsSneakEnabled(var_2_bool);
			if(var_2_bool != 0) {
				func_31();
				goto Label_29;
			}
			func_58();
			}
			func_31();
			goto Label_29;

		Label_29:
		}
	
	}
	EMIT "Return(); Pop(4)";

}


void func_58(void)
{
	float var_24_float; float var_25_float;
	
	for(;;) {
		@sync(var_24_float);
		@GetEyesHeightCoef(var_25_float);
		var_25_float += (1.2 * var_24_float);
		if(var_25_float >= 1)
			break;
		@SetEyesHeightCoef(var_25_float);
	}
	@SetEyesHeightCoef(1);
}


void func_31(void)
{
	bool var_10_bool; float var_11_float; float var_12_float;
	
	for(;;) {
		@sync(var_11_float);
		@GetEyesHeightCoef(var_12_float);
		var_12_float -= (1.2 * var_11_float);
		if(var_12_float <= 0.8)
			@SetEyesHeightCoef(0.8);
		else
			@SetEyesHeightCoef(var_12_float);
		for(;;) {
			@sync();
			@IsSneakEnabled(var_10_bool);
			if(!var_10_bool) //@nz
				break;
		}

	}
}


