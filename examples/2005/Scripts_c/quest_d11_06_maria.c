// @GLOBALS: 0:object:

task task_0
{
	void OnLoad(cvector var_0_cvector, bool var_1_bool)
	{
		@StopGroup0();
		@sync();
	}

}


maintask task_1
{
	// @pe
	void init(cvector var_0_cvector, bool var_1_bool)
	{
		func_56(var_1_bool);
	}

	void OnTrigger(cvector var_0_cvector, bool var_1_bool, string var_2_string)
	{
		bool var_4_bool;
		if(var_2_string == "cleanup") {
			var_1_bool = true;
			@IsLoaded(var_4_bool);
			if(!var_4_bool) { //@nz
				object var_8_object;
				func_405(var_8_object);
				@RemoveActor(var_8_object);
			}
		} else if(var_2_string == "restore") {
			var_1_bool = false;
		}
	
	}

	void OnUnload(cvector var_0_cvector, bool var_1_bool)
	{
		if(var_1_bool != 0) {
			object var_3_object;
			func_405(var_3_object);
			@RemoveActor(var_3_object);
			@Hold();
		}
		func_169();
	}

	// @pe
		void OnLoad(cvector var_0_cvector, bool var_1_bool)
		{
		func_184();
		}

	// @pe
	void OnTimer(cvector var_0_cvector, bool var_1_bool, int var_2_int)
	{
		if(var_2_int == 10) {
			func_127();
			bool var_6_bool = false;
			bool var_7_bool;
			func_341(var_7_bool);
			if(var_7_bool != 0) {
				bool var_10_bool;
				func_96(var_10_bool);
				if(var_10_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				bool var_27_bool;
				func_76(var_27_bool);
				if(var_27_bool != 0) {
					bool var_46_bool; object var_47_object;
					object var_48_object;
					func_405(var_48_object);
					var_48_object = var_47_object;
					func_346(var_46_bool, var_47_object);
				}
			} else {
				func_91(var_2_int);
				func_118();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(cvector var_0_cvector, bool var_1_bool, bool var_2_bool)
	{
		if(var_2_bool != 0)
			func_118();
		else
			func_383("Neutral");
	
	}

	void OnUse(cvector var_0_cvector, bool var_1_bool, object var_2_object)
	{
		bool var_4_bool;
		@IsOverrideActive(var_4_bool);
		if(!var_4_bool) { //@nz
			disable OnUse;
			func_309();
			bool var_6_bool; object var_7_object;
			var_2_object = var_7_object;
			func_332(var_6_bool, var_7_object);
			enable OnUse;
			object var_20_object;
			var_2_object = var_20_object;
			func_13();
			func_383("Neutral");
			func_127();
			func_118();
		}
	}

}


void func_0(void)
{
	
Label_0:
	@Hold();
	bool var_6_bool;
	func_341(var_6_bool);
	if(!var_6_bool) goto Label_0; //@nz
}


void func_390(bool var_72_bool, string var_73_string)
{
	bool var_75_bool;
	bool var_76_bool;
	func_435(var_76_bool);
	if(var_76_bool != 0) {
		@lshHasSpeech(var_75_bool, var_73_string);
		if(var_75_bool != 0) {
			@lshPlaySpeech(var_73_string);
			var_72_bool = true;
		}
	}
	var_72_bool = false;
}


// @pe
void func_13(void)
{
}


void func_405(object var_48_object)
{
	object var_50_object;
	@self(var_50_object);
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_411(string var_40_string, int var_41_int)
{
	string var_43_string = "idle";
	if(var_41_int != 0)
		var_43_string += var_41_int;
	var_43_string = var_40_string;
}


void func_418(int var_34_int)
{
	int var_37_int; bool var_38_bool;
	var_37_int = 0;
	
	for(;;) {
		string var_40_string; int var_41_int;
		var_37_int = var_41_int;
		func_411(var_40_string, var_41_int);
		@HasAnimation(var_38_bool, "all", var_40_string);
		if(!var_38_bool) //@nz
			break;
		var_37_int += 1;
	}
	var_37_int = var_34_int;
}


// @pe
void func_169(void)
{
	func_309();
	func_127();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_307(bool var_54_bool)
{
	var_54_bool = true;
}


void func_435(bool var_76_bool)
{
	var_76_bool = true;
}


void func_309(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_56(cvector var_0_cvector)
{
	bool var_2_bool;
	func_341(var_2_bool);
	if(!var_2_bool) { //@nz
		TaskCall(0);
		func_0();
		TaskReturn();
	}
	func_52();
	@GetDirection(var_0_cvector);
	
	for(;;) {
		func_238();
	}
}
EMIT "Return(); Pop(0)";


void func_184(void)
{
	@StopGroup0();
	func_127();
	func_383("Neutral");
	func_118();
}


void func_314(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_322(bool var_10_bool, cvector var_11_cvector)
{
	cvector var_15_cvector;
	@GetPosition(var_15_cvector);
	cvector var_16_cvector = var_11_cvector - var_15_cvector;
	var_18_float = GetByIndex(var_16_cvector, 0);
	var_19_float = GetByIndex(var_16_cvector, 2);
	bool var_17_bool;
	@Rotate(var_18_float, var_19_float, var_17_bool);
	var_17_bool = var_10_bool;
}


void func_332(bool var_6_bool, object var_7_object)
{
	cvector var_9_cvector;
	var_7_object->GetPosition(var_9_cvector);
	bool var_10_bool; cvector var_11_cvector;
	var_9_cvector = var_11_cvector;
	func_322(var_10_bool, var_11_cvector);
	var_10_bool = var_6_bool;
}


void func_76(bool var_27_bool)
{
	object var_29_object;
	@FindActor(var_29_object, "player");
	if(!var_29_object) //@nz
		var_27_bool = false;
	bool var_32_bool; object var_33_object;
	var_29_object = var_33_object;
	func_332(var_32_bool, var_33_object);
	var_32_bool = var_27_bool;
}
EMIT "Stack[-1] = 0";


void func_341(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_346(bool var_46_bool, object var_47_object)
{
	string var_56_string; bool var_58_bool; int var_59_int; string var_60_string;
	var_56_string = "c";
	int var_57_int = 0;
	
	for(;;) {
		if(1 != 0) {
			var_47_object->HasProperty((var_56_string + (var_57_int + 1)), var_58_bool);
			if(!var_58_bool) { //@nz
			} else {
				var_57_int += 1;
			}
		}
		if(!var_57_int) { //@nz
			var_46_bool = false;
			return 10;
		}
		var_59_int = 0;
		if(var_57_int > 1)
			@irand(var_59_int, var_57_int);
		var_47_object->GetProperty((var_56_string + (var_59_int + 1)), var_60_string);
		bool var_72_bool; string var_73_string;
		var_60_string = var_73_string;
		func_390(var_72_bool, var_73_string);
		var_72_bool = var_46_bool;
		return 10;

	}
}


void func_91(cvector var_0_cvector)
{
	var_79_float = GetByIndex(var_0_cvector, 0);
	var_80_float = GetByIndex(var_0_cvector, 2);
	@RotateAsync(var_79_float, var_80_float);
}


void func_96(bool var_10_bool)
{
	object var_13_object;
	@FindActor(var_13_object, "player");
	if(!var_13_object) { //@nz
		var_10_bool = false;
		return 4;
	}
	float var_17_float; object var_18_object;
	func_314(var_17_float, var_18_object);
	if(var_17_float > 90000.0) {
		var_10_bool = false;
		return 4;
	}
	bool var_14_bool;
	@CanSee(var_14_bool, var_18_object);
	var_14_bool = var_10_bool;
}
EMIT "Stack[-2] = 0";


void func_238(void)
{
	bool var_28_bool; int var_29_int; int var_30_int; bool var_31_bool;
	@WaitForAnimEnd();
	bool var_32_bool;
	func_341(var_32_bool);
	if(!var_32_bool) //@nz
		return 12;
	int var_34_int;
	func_418(var_34_int);
	int var_26_int;
	var_34_int = var_26_int;
	int var_27_int = 0;
	
	for(;;) {
		bool var_47_bool = false;
		if(var_27_int < 5) {
			bool var_50_bool;
			func_341(var_50_bool);
			if(var_50_bool != 0)
				var_47_bool = true;
		}
		if(var_47_bool != 0) {
			if(!var_26_int) { //@nz
				@Sleep(3, var_28_bool);
				if(!var_28_bool) { //@nz
				} else {
			} else {
			@irand(var_29_int, var_26_int);
			@irand(var_30_int, 5);
			if(var_30_int != 0)
				var_29_int = 0;
			string var_61_string; int var_62_int;
			var_29_int = var_62_int;
			func_411(var_61_string, var_62_int);
			@PlayAnimation("all", var_61_string);
			@WaitForAnimEnd(var_31_bool);
			var_63_bool = !var_31_bool; //@nz
			if(var_63_bool == 0) goto Label_293;
			goto Label_304;
			}
				Label_293:
					bool var_54_bool;
					func_307(var_54_bool);
					var_55_bool = !var_54_bool; //@nz
					if(var_55_bool == 0) goto Label_299;
			}
		}
	Label_304:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_299:
		@ResetAAS();
		var_27_int += 1;
	}
	
}


void func_118(void)
{
	float var_16_float;
	@rand(var_16_float, 8, 16);
	@SetTimer(10, var_16_float);
}


void func_127(void)
{
	@KillTimer(10);
}


void func_383(string var_9_string)
{
	float var_12_float; float var_13_float;
	@lshGetAnimTimes(var_9_string, var_12_float, var_13_float);
	@lshPlayAnimation(var_12_float, var_13_float, false);
}


