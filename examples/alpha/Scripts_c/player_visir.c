maintask task_0
{
	void init(void)
	{
		float var_6_float; float var_7_float; bool var_8_bool; bool var_9_bool; int var_10_int; int var_11_int;
		var_6_float = 0;
	
		for(;;) {
			@sync(var_7_float);
			@IsVisirOn(var_8_bool);
			if(var_8_bool != 0) {
				bool var_13_bool;
				func_112(var_13_bool);
				if(!var_13_bool) { //@nz
					func_48();
					var_6_float = 0;
				}
			} else {
			@GetProperty("visir", var_9_bool);
			if(var_9_bool != 0) {
				var_6_float += var_7_float;
				int var_56_int;
				var_6_float = var_56_int;
				var_10_int = var_56_int / 3;
				if(var_10_int != 0) {
					@GetProperty("vcharge", var_11_int);
					int var_61_int;
					func_125(var_61_int, (var_11_int + var_10_int), 0, 100);
					@SetProperty("vcharge", var_61_int);
					var_6_float = var_6_float % 3;
				}
				goto Label_46;
			}
			var_6_float = 0;
			}
		Label_46:
		}
	
	}
	EMIT "Return(); Pop(12)";

}


void func_112(bool var_13_bool)
{
	bool var_16_bool;
	@HasProperty("sleeping", var_16_bool);
	if(!var_16_bool) //@nz
		var_13_bool = false;
	bool var_17_bool;
	@GetProperty("sleeping", var_17_bool);
	var_17_bool = var_13_bool;
}


void func_48(void)
{
	float var_26_float; float var_27_float; bool var_28_bool; int var_29_int;
	bool var_30_bool;
	func_96(var_30_bool, 5);
	if(var_30_bool != 0) {
		var_26_float = 0;

	Label_55:
		for(;;) {
			@sync(var_27_float);
			@IsVisirOn(var_28_bool);
			bool var_42_bool = true;
			var_43_bool = !var_28_bool; //@nz
			if(var_43_bool != 1) {
				bool var_44_bool;
				func_112(var_44_bool);
				if(var_44_bool != 1)
					var_42_bool = false;
			}
			if(var_42_bool != 0)
				return 8;
			var_26_float += var_27_float;
			int var_45_int;
			var_26_float = var_45_int;
			if(var_45_int >= 1) {
			} else {
			goto Label_55;
			}
			int var_48_int;
			var_26_float = var_48_int;
			var_48_int = var_29_int;
			bool var_49_bool; int var_50_int;
			var_29_int = var_50_int;
			func_96(var_49_bool, var_50_int);
			if(!var_49_bool) { //@nz
			} else {
				var_26_float = var_26_float % 1;
			}
	}
		@SwitchVisir(false);
		return 8;

	}
	
}


void func_96(bool var_30_bool, int var_31_int)
{
	int var_33_int;
	@GetProperty("vcharge", var_33_int);
	int var_35_int;
	func_125(var_35_int, (var_33_int - var_31_int), 0, 100);
	var_35_int = var_33_int;
	@SetProperty("vcharge", var_33_int);
	var_33_int = var_30_bool;
}


// @pe
void func_125(int var_35_int, int var_36_int, int var_37_int, int var_38_int)
{
	if(var_36_int < var_37_int) {
		var_37_int = var_35_int;
		return 0;
	}
	if(var_36_int > var_38_int) {
		var_38_int = var_35_int;
		return 0;
	}
	var_36_int = var_35_int;
}


