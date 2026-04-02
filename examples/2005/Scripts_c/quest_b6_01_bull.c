// @GLOBALS: 0:object:,1:bool:

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
	// @pe
	void init(void)
	{
		func_20();
		func_38();
	}

	// @pe
	void OnUnload(void)
	{
		func_212();
	}

}


task task_2
{
	// @pe
	void OnUnload(void)
	{
		func_212();
		func_102();
	}

}


void OnTrigger(string name)
{
	bool var_2_bool;
	if(name == "cleanup") {
		var_5_bool = GlobalVars[1];
		GlobalVars[1] = true;
		@IsLoaded(var_2_bool);
		if(!var_2_bool) { //@nz
			object var_7_object;
			func_151(var_7_object);
			@RemoveActor(var_7_object);
		}
	} else if(name == "restore") {
		var_12_bool = GlobalVars[1];
		GlobalVars[1] = false;
	}
	
}


void OnUnload(void)
{
	var_0_bool = GlobalVars[1];
	if(var_0_bool != 0) {
		object var_1_object;
		func_151(var_1_object);
		@RemoveActor(var_1_object);
	}
}


void OnDispose(void)
{
	var_0_object = GlobalVars[0];
	if(var_0_object != 0) {
		var_1_object = GlobalVars[0];
		@RemoveActor(var_1_object);
	}
}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_12_bool;
	func_105(var_12_bool);
	if(!var_12_bool) goto Label_0; //@nz
}


void func_66(void)
{
	int var_18_int; int var_19_int; int var_20_int; string var_21_string;
	@irand(var_18_int, 3);
	if(!var_18_int) { //@nz
		int var_24_int;
		func_170(var_24_int);
		var_24_int = var_19_int;
		if(var_19_int != 0) {
			@irand(var_20_int, var_19_int);
			string var_39_string; int var_40_int;
			var_20_int = var_40_int;
			func_164(var_39_string, var_40_int);
			var_39_string = var_21_string;
			@PlayAnimation("all", var_21_string);
			string var_45_string;
			var_21_string = var_45_string;
			func_110(var_45_string);
			@WaitForAnimEnd();
		}
	} else {
		@PlayAnimation("all", "idle");
		@WaitForAnimEnd();
	}
	
}


// @pe
void func_164(string var_39_string, int var_40_int)
{
	var_39_string = "idle" + (var_40_int + 1);
}


void func_38(void)
{
	@RemoveEnvelope();
	@RemoveRTEnvelope();
	
	for(;;) {
		bool var_8_bool;
		func_105(var_8_bool);
		if(!var_8_bool) { //@nz
			TaskCall(0);
			func_0();
			TaskReturn();
		}
		TaskCall(2);
		func_66();
		TaskReturn();
	}
}
EMIT "Return(); Pop(0)";


void func_102(void)
{
	@StopAnimation();
}


void func_105(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_170(int var_24_int)
{
	int var_27_int; bool var_28_bool;
	var_27_int = 0;
	
	for(;;) {
		string var_30_string;
		func_157(var_30_string, (var_27_int + 1));
		@HasAnimation(var_28_bool, "all", var_30_string);
		if(!var_28_bool) //@nz
			break;
		var_27_int += 1;
	}
	var_27_int = var_24_int;
}


void func_110(string var_45_string)
{
	bool var_54_bool; int var_55_int; bool var_56_bool; int var_57_int; bool var_58_bool; float var_59_float; cvector var_60_cvector; cvector var_61_cvector;
	@IsExisting3DSound(var_54_bool, var_45_string);
	if(!var_54_bool) { //@nz
		var_55_int = 0;

		for(;;) {
			@IsExisting3DSound(var_56_bool, (var_45_string + (var_55_int + 1)));
			if(!var_56_bool) { //@nz
				break;
			Label_130:
				@irand(var_57_int, var_55_int);
				var_45_string += (var_57_int + 1);
	}
			@Is3DSoundLoaded(var_58_bool, var_45_string);
			if(var_58_bool != 0) {
				@GetEyesHeight(var_59_float);
				@GetDirection(var_60_cvector);
				var_61_cvector = var_60_cvector * 50;
				var_72_float = GetByIndex(var_61_cvector, 1);
				SetByIndex(var_61_cvector, 1) = (var_72_float + var_59_float);
				@PlayGlobalSound(var_45_string, var_61_cvector);
			}
		}
		var_55_int += 1;
	}
	var_67_bool = !var_55_int; //@nz
	if(var_67_bool == 0) goto Label_130;
}


void func_20(void)
{
	object var_2_object;
	@GetScene(var_2_object);
	object var_3_object;
	@AddActor(var_3_object, "b6q01_bull_envelope", var_2_object, [0.0, 0.0, 0.0], [0.0, 0.0, 1.0]);
	var_7_object = GlobalVars[0];
	var_3_object = var_7_object;
	GlobalVars[0] = var_7_object;
}
EMIT "Stack[-1] = 0";
EMIT "Stack[-2] = 0";


void func_151(object var_1_object)
{
	object var_3_object;
	@self(var_3_object);
	var_3_object = var_1_object;
}
EMIT "Stack[-1] = 0";


void func_157(string var_30_string, int var_31_int)
{
	string var_34_string = "idle";
	if(var_31_int != 0)
		var_34_string += var_31_int;
	var_34_string = var_30_string;
}


