maintask task_0
{
	void init(void)
	{
		bool var_1_bool;
	
		for(;;) {
			@IsFlashlightOn(var_1_bool);
			bool var_2_bool = false;
			if(var_1_bool != 0) {
				bool var_4_bool;
				func_95(var_4_bool);
				if(!var_4_bool) //@nz
					var_2_bool = true;
			}
			if(var_2_bool != 0)
				func_21();
			@sync();
		}
	}
	EMIT "Return(); Pop(2)";

}


void func_89(bool var_25_bool, int var_26_int)
{
	int var_28_int;
	@RemoveItemByType(var_28_int, "kerosene", var_26_int);
	var_25_bool = var_28_int == var_26_int;
}


void func_21(void)
{
	float var_19_float; float var_20_float; float var_21_float; float var_22_float; bool var_23_bool; int var_24_int;
	bool var_25_bool;
	func_89(var_25_bool, 1);
	if(var_25_bool != 0) {
		var_19_float = 0;
		var_20_float = 0;

	Label_29:
		for(;;) {
			if(var_20_float <= 0) {
				@rand(var_21_float, 0.92, 1.0);
				@SetFlashlightColor([0.4803922, 0.43333337, 0.2901961] * var_21_float);
				@rand(var_20_float, 0.075, 0.1);
			}
			@sync(var_22_float);
			@IsFlashlightOn(var_23_bool);
			bool var_38_bool = true;
			var_39_bool = !var_23_bool; //@nz
			if(var_39_bool != 1) {
				bool var_40_bool;
				func_95(var_40_bool);
				if(var_40_bool != 1)
					var_38_bool = false;
			}
			if(var_38_bool != 0)
				return 12;
			var_20_float -= var_22_float;
			var_19_float += var_22_float;
			int var_41_int;
			var_19_float = var_41_int;
			if(var_41_int >= 5) {
			} else {
			goto Label_29;
			}
			int var_44_int;
			var_19_float = var_44_int;
			var_24_int = var_44_int / 5;
			bool var_46_bool; int var_47_int;
			var_24_int = var_47_int;
			func_89(var_46_bool, var_47_int);
			if(!var_46_bool) { //@nz
			} else {
				var_19_float = var_19_float % 5;
			}
	}
		@SwitchFlashlight(false);
		@PlaySound("flashlight_off");
		return 12;

	}
	
}


void func_95(bool var_4_bool)
{
	bool var_7_bool;
	@HasProperty("sleeping", var_7_bool);
	if(!var_7_bool) //@nz
		var_4_bool = false;
	bool var_8_bool;
	@GetProperty("sleeping", var_8_bool);
	var_8_bool = var_4_bool;
}


