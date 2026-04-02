task task_0
{
	void OnLoad(void)
	{
		@StopGroup0();
		@sync();
	}

}


maintask task_1
{
	void init(void)
	{
		@RemoveEnvelope();
		@RemoveRTEnvelope();
	
		for(;;) {
			bool var_0_bool;
			func_73(var_0_bool);
			if(!var_0_bool) { //@nz
				TaskCall(0);
				func_0();
				TaskReturn();
			}
			TaskCall(2);
			func_34();
			TaskReturn();
		}
	}
	EMIT "Return(); Pop(0)";

}


task task_2
{
	void OnUnload(void)
	{
		@StopAnimation();
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_4_bool;
	func_73(var_4_bool);
	if(!var_4_bool) goto Label_0; //@nz
}


void func_34(void)
{
	int var_10_int; int var_11_int; int var_12_int; string var_13_string;
	@irand(var_10_int, 3);
	if(!var_10_int) { //@nz
		int var_16_int;
		func_132(var_16_int);
		var_16_int = var_11_int;
		if(var_11_int != 0) {
			@irand(var_12_int, var_11_int);
			string var_31_string; int var_32_int;
			var_12_int = var_32_int;
			func_126(var_31_string, var_32_int);
			var_31_string = var_13_string;
			@PlayAnimation("all", var_13_string);
			string var_37_string;
			var_13_string = var_37_string;
			func_78(var_37_string);
			@WaitForAnimEnd();
		}
	} else {
		@PlayAnimation("all", "idle");
		@WaitForAnimEnd();
	}
	
}


void func_132(int var_16_int)
{
	int var_19_int; bool var_20_bool;
	var_19_int = 0;
	
	for(;;) {
		string var_22_string;
		func_119(var_22_string, (var_19_int + 1));
		@HasAnimation(var_20_bool, "all", var_22_string);
		if(!var_20_bool) //@nz
			break;
		var_19_int += 1;
	}
	var_19_int = var_16_int;
}


void func_73(bool var_0_bool)
{
	bool var_2_bool;
	@IsLoaded(var_2_bool);
	var_2_bool = var_0_bool;
}


void func_78(string var_37_string)
{
	bool var_46_bool; int var_47_int; bool var_48_bool; int var_49_int; bool var_50_bool; float var_51_float; cvector var_52_cvector; cvector var_53_cvector;
	@IsExisting3DSound(var_46_bool, var_37_string);
	if(!var_46_bool) { //@nz
		var_47_int = 0;

		for(;;) {
			@IsExisting3DSound(var_48_bool, (var_37_string + (var_47_int + 1)));
			if(!var_48_bool) { //@nz
				break;
			Label_98:
				@irand(var_49_int, var_47_int);
				var_37_string += (var_49_int + 1);
	}
			@Is3DSoundLoaded(var_50_bool, var_37_string);
			if(var_50_bool != 0) {
				@GetEyesHeight(var_51_float);
				@GetDirection(var_52_cvector);
				var_53_cvector = var_52_cvector * 50;
				var_64_float = GetByIndex(var_53_cvector, 1);
				SetByIndex(var_53_cvector, 1) = (var_64_float + var_51_float);
				@PlayGlobalSound(var_37_string, var_53_cvector);
			}
		}
		var_47_int += 1;
	}
	var_59_bool = !var_47_int; //@nz
	if(var_59_bool == 0) goto Label_98;
}


void func_119(string var_22_string, int var_23_int)
{
	string var_26_string = "idle";
	if(var_23_int != 0)
		var_26_string += var_23_int;
	var_26_string = var_22_string;
}


// @pe
void func_126(string var_31_string, int var_32_int)
{
	var_31_string = "idle" + (var_32_int + 1);
}


