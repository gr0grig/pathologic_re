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
		int var_1_int;
		@RemoveEnvelope();
		@RemoveRTEnvelope();
	
		for(;;) {
			bool var_2_bool;
			func_86(var_2_bool);
			if(!var_2_bool) { //@nz
				TaskCall(0);
				func_0();
				TaskReturn();
			}
			@irand(var_1_int, 3);
			if(var_1_int == 0) {
				TaskCall(2);
				func_40();
				TaskReturn();
			} else {
			TaskCall(3);
			func_74();
			TaskReturn();
			}
		}
	
	}
	EMIT "Return(); Pop(2)";

}


task task_2
{
	void OnUnload(void)
	{
		@StopAnimation();
	}

}


task task_3
{
	void OnUnload(void)
	{
		@StopGroup0();
	}

}


void func_0(void)
{
	@Hold();
}


// @pe
void func_98(string var_33_string, int var_34_int)
{
	var_33_string = "idle" + (var_34_int + 1);
}


void func_40(void)
{
	int var_12_int; int var_13_int; int var_14_int;
	@irand(var_12_int, 3);
	if(!var_12_int) { //@nz
		int var_17_int;
		func_104(var_17_int);
		var_17_int = var_13_int;
		if(var_13_int != 0) {
			@irand(var_14_int, var_13_int);
			string var_33_string; int var_34_int;
			var_14_int = var_34_int;
			func_98(var_33_string, var_34_int);
			@PlayAnimation("all", var_33_string);
			@WaitForAnimEnd();
		}
	} else {
		@PlayAnimation("all", "idle");
		@WaitForAnimEnd();
	}
	
}


void func_104(int var_17_int)
{
	int var_20_int; bool var_21_bool;
	var_20_int = 0;
	
	for(;;) {
		string var_23_string;
		func_91(var_23_string, (var_20_int + 1));
		@HasAnimation(var_21_bool, "all", var_23_string);
		if(!var_21_bool) //@nz
			break;
		var_20_int += 1;
	}
	var_20_int = var_17_int;
}


void func_74(void)
{
	float var_41_float;
	@rand(var_41_float, 3);
	@Sleep(var_41_float + 5);
}


void func_86(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_91(string var_23_string, int var_24_int)
{
	string var_27_string = "idle";
	if(var_24_int != 0)
		var_27_string += var_24_int;
	var_27_string = var_23_string;
}


