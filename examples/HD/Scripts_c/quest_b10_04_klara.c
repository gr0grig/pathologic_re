// @GLOBALS: 0:object:

maintask task_0
{
	// @pe
	void init(cvector var_0_cvector, bool var_1_bool)
	{
		func_43(var_1_bool);
	}

	void OnTrigger(cvector var_0_cvector, bool var_1_bool, string var_2_string)
	{
		bool var_4_bool;
		if(var_2_string == "cleanup") {
			var_1_bool = true;
			@IsLoaded(var_4_bool);
			if(!var_4_bool) { //@nz
				object var_8_object;
				func_395(var_8_object);
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
			func_395(var_3_object);
			@RemoveActor(var_3_object);
			@Hold();
		}
		func_150();
	}

	// @pe
	void OnLoad(cvector var_0_cvector, bool var_1_bool)
	{
		func_165();
	}

	// @pe
	void OnTimer(cvector var_0_cvector, bool var_1_bool, int var_2_int)
	{
		if(var_2_int == 10) {
			func_108();
			bool var_6_bool = false;
			bool var_7_bool;
			func_322(var_7_bool);
			if(var_7_bool != 0) {
				bool var_10_bool;
				func_77(var_10_bool);
				if(var_10_bool != 0)
					var_6_bool = true;
			}
			if(var_6_bool != 0) {
				bool var_27_bool;
				func_57(var_27_bool);
				if(var_27_bool != 0) {
					bool var_46_bool; object var_47_object;
					object var_48_object;
					func_395(var_48_object);
					var_48_object = var_47_object;
					func_327(var_46_bool, var_47_object);
				}
			} else {
				func_72(var_2_int);
				func_99();
			}
		}
	
	}

	// @pe
	void OnLSHAnimationEnd(cvector var_0_cvector, bool var_1_bool, bool var_2_bool)
	{
		if(var_2_bool != 0)
			func_99();
		else
			func_364("Neutral");
	
	}

	void OnUse(cvector var_0_cvector, bool var_1_bool, object var_2_object)
	{
		bool var_4_bool;
		@IsOverrideActive(var_4_bool);
		if(!var_4_bool) { //@nz
			disable OnUse;
			func_290();
			bool var_6_bool; object var_7_object;
			var_2_object = var_7_object;
			func_313(var_6_bool, var_7_object);
			enable OnUse;
			object var_20_object;
			var_2_object = var_20_object;
			func_0();
			func_364("Neutral");
			func_108();
			func_99();
		}
	}

}


// @pe
void func_0(void)
{
}


void func_395(object var_48_object)
{
	object var_50_object;
	@self(var_50_object);
	var_50_object = var_48_object;
}
EMIT "Stack[-1] = 0";


void func_401(string var_26_string, int var_27_int)
{
	string var_29_string = "idle";
	if(var_27_int != 0)
		var_29_string += var_27_int;
	var_29_string = var_26_string;
}


// @pe
void func_150(void)
{
	func_290();
	func_108();
	@lshStopSpeech();
	@lshStopAnimation();
	@StopAsync();
	@Hold();
}


void func_408(int var_20_int)
{
	int var_23_int; bool var_24_bool;
	var_23_int = 0;
	
	for(;;) {
		string var_26_string; int var_27_int;
		var_23_int = var_27_int;
		func_401(var_26_string, var_27_int);
		@HasAnimation(var_24_bool, "all", var_26_string);
		if(!var_24_bool) //@nz
			break;
		var_23_int += 1;
	}
	var_23_int = var_20_int;
}


void func_288(bool var_40_bool)
{
	var_40_bool = true;
}


void func_290(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_165(void)
{
	@StopGroup0();
	func_108();
	func_364("Neutral");
	func_99();
}


void func_295(float var_17_float, object var_18_object)
{
	cvector var_22_cvector;
	@GetPosition(var_22_cvector);
	cvector var_23_cvector;
	var_18_object->GetPosition(var_23_cvector);
	var_17_float = (var_23_cvector - var_22_cvector) | (var_23_cvector - var_22_cvector);
}


void func_425(bool var_76_bool)
{
	var_76_bool = true;
}


void func_43(cvector var_0_cvector)
{
	bool var_2_bool;
	func_322(var_2_bool);
	if(!var_2_bool) //@nz
		@Hold();
	@GetDirection(var_0_cvector);
	
	for(;;) {
		func_219();
	}
}
EMIT "Return(); Pop(0)";


void func_303(bool var_10_bool, cvector var_11_cvector)
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


void func_313(bool var_6_bool, object var_7_object)
{
	cvector var_9_cvector;
	var_7_object->GetPosition(var_9_cvector);
	bool var_10_bool; cvector var_11_cvector;
	var_9_cvector = var_11_cvector;
	func_303(var_10_bool, var_11_cvector);
	var_10_bool = var_6_bool;
}


void func_57(bool var_27_bool)
{
	object var_29_object;
	@FindActor(var_29_object, "player");
	if(!var_29_object) //@nz
		var_27_bool = false;
	bool var_32_bool; object var_33_object;
	var_29_object = var_33_object;
	func_313(var_32_bool, var_33_object);
	var_32_bool = var_27_bool;
}
EMIT "Stack[-1] = 0";


void func_322(bool var_2_bool)
{
	bool var_4_bool;
	@IsLoaded(var_4_bool);
	var_4_bool = var_2_bool;
}


void func_327(bool var_46_bool, object var_47_object)
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
		func_380(var_72_bool, var_73_string);
		var_72_bool = var_46_bool;
		return 10;

	}
}


void func_72(cvector var_0_cvector)
{
	var_79_float = GetByIndex(var_0_cvector, 0);
	var_80_float = GetByIndex(var_0_cvector, 2);
	@RotateAsync(var_79_float, var_80_float);
}


void func_77(bool var_10_bool)
{
	object var_13_object;
	@FindActor(var_13_object, "player");
	if(!var_13_object) { //@nz
		var_10_bool = false;
		return 4;
	}
	float var_17_float; object var_18_object;
	func_295(var_17_float, var_18_object);
	if(var_17_float > 90000.0) {
		var_10_bool = false;
		return 4;
	}
	bool var_14_bool;
	@CanSee(var_14_bool, var_18_object);
	var_14_bool = var_10_bool;
}
EMIT "Stack[-2] = 0";


void func_219(void)
{
	bool var_14_bool; int var_15_int; int var_16_int; bool var_17_bool;
	@WaitForAnimEnd();
	bool var_18_bool;
	func_322(var_18_bool);
	if(!var_18_bool) //@nz
		return 12;
	int var_20_int;
	func_408(var_20_int);
	int var_12_int;
	var_20_int = var_12_int;
	int var_13_int = 0;
	
	for(;;) {
		bool var_33_bool = false;
		if(var_13_int < 5) {
			bool var_36_bool;
			func_322(var_36_bool);
			if(var_36_bool != 0)
				var_33_bool = true;
		}
		if(var_33_bool != 0) {
			if(!var_12_int) { //@nz
				@Sleep(3, var_14_bool);
				if(!var_14_bool) { //@nz
				} else {
			} else {
			@irand(var_15_int, var_12_int);
			@irand(var_16_int, 5);
			if(var_16_int != 0)
				var_15_int = 0;
			string var_47_string; int var_48_int;
			var_15_int = var_48_int;
			func_401(var_47_string, var_48_int);
			@PlayAnimation("all", var_47_string);
			@WaitForAnimEnd(var_17_bool);
			var_49_bool = !var_17_bool; //@nz
			if(var_49_bool == 0) goto Label_274;
			goto Label_285;
			}
				Label_274:
					bool var_40_bool;
					func_288(var_40_bool);
					var_41_bool = !var_40_bool; //@nz
					if(var_41_bool == 0) goto Label_280;
			}
		}
	Label_285:
		for(;;) {
			@ResetAAS();
			return 12;

		}

	Label_280:
		@ResetAAS();
		var_13_int += 1;
	}
	
}


void func_99(void)
{
	float var_34_float;
	@rand(var_34_float, 8, 16);
	@SetTimer(10, var_34_float);
}


void func_108(void)
{
	@KillTimer(10);
}


void func_364(string var_21_string)
{
	bool var_25_bool; float var_26_float; float var_27_float;
	@lshHasAnimation(var_25_bool, var_21_string);
	if(var_25_bool != 0) {
		@lshGetAnimTimes(var_21_string, var_26_float, var_27_float);
		@lshPlayAnimation(var_26_float, var_27_float, false);
	} else {
		@Trace("Can't find lsh animation : " + var_21_string);
	}
	
}


void func_380(bool var_72_bool, string var_73_string)
{
	bool var_75_bool;
	bool var_76_bool;
	func_425(var_76_bool);
	if(var_76_bool != 0) {
		@lshHasSpeech(var_75_bool, var_73_string);
		if(var_75_bool != 0) {
			@lshPlaySpeech(var_73_string);
			var_72_bool = true;
		}
	}
	var_72_bool = false;
}


