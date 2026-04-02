// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool)
	{
	
		for(;;) {
			func_10(var_6_bool, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, string var_7_string)
	{
		if(var_7_string == "cleanup")
			func_28(var_7_string);
	}

	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool)
	{
		if(var_6_bool != 0)
			func_144(var_5_bool, var_6_bool);
		bool var_11_bool = false;
		if(var_5_bool != 0) {
			bool var_13_bool;
			func_77(var_13_bool);
			if(var_13_bool != 0)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			object var_14_object;
			func_268(var_14_object);
			@RemoveActor(var_14_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			bool var_10_bool;
			func_106(var_5_bool, var_6_bool, var_7_int, var_10_bool);
			if(var_10_bool != 0) {
				if(!var_2_bool) { //@nz
					func_257(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


void func_257(object var_24_object)
{
	float var_27_float;
	var_24_object->GetEyesHeight(var_27_float);
	cvector var_28_cvector = [0.0, 0.0, 0.0];
	var_29_float = GetByIndex(var_28_cvector, 1);
	var_27_float = var_29_float;
	SetByIndex(var_28_cvector, 1) = var_29_float;
	@LookAsync(var_24_object, "head", var_28_cvector);
}


void func_10(bool var_6_bool, float var_7_float, float var_8_float)
{
	float var_9_float; bool var_10_bool; float var_11_float; bool var_12_bool;
	var_6_bool = false;
	
	for(;;) {
		@rand(var_11_float, 3);
		@Sleep((var_11_float + 3), var_12_bool);
		var_6_bool = true;
		float var_16_float; float var_17_float;
		var_7_float = var_16_float;
		func_79(var_17_float, var_9_float, var_10_bool, var_11_float, var_12_bool, var_16_float, var_17_float);
		var_6_bool = false;
	}
}
EMIT "Return(); Pop(4)";


void func_106(int var_0_int, int var_1_int, object var_4_object, bool var_10_bool)
{
	if(var_4_object == null)
		var_10_bool = false;
	float var_14_float;
	func_244(var_14_float, var_4_object);
	float var_12_float = sqrt(var_14_float);
	if(var_2_bool != 0)
		var_12_float -= var_1_int;
	var_10_bool = var_12_float < var_0_int;
}


void func_268(object var_14_object)
{
	object var_16_object;
	@self(var_16_object);
	var_16_object = var_14_object;
}
EMIT "Stack[-1] = 0";


void func_77(bool var_13_bool)
{
	var_13_bool = true;
}


void func_237(bool var_66_bool)
{
	var_66_bool = true;
}


// @pe
void func_79(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_16_float, float var_17_float)
{
	bool var_18_bool;
	func_252(var_18_bool);
	if(!var_18_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_16_float;
	var_1_int = var_17_float;
	@SetTimer(10, 1.0);
	func_158();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_144(bool var_2_bool, bool var_3_bool)
{
	func_239();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_239(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_274(string var_47_string, int var_48_int)
{
	string var_50_string = "idle";
	if(var_48_int != 0)
		var_50_string += var_48_int;
	var_50_string = var_47_string;
}


void func_28(bool var_5_bool)
{
	var_5_bool = true;
	bool var_10_bool = false;
	bool var_11_bool;
	func_252(var_11_bool);
	if(!var_11_bool) { //@nz
		bool var_15_bool;
		func_77(var_15_bool);
		if(var_15_bool != 0)
			var_10_bool = true;
	}
	if(var_10_bool != 0) {
		object var_16_object;
		func_268(var_16_object);
		@RemoveActor(var_16_object);
	}
}


void func_244(float var_14_float, object var_15_object)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	cvector var_20_cvector;
	var_15_object->GetPosition(var_20_cvector);
	var_14_float = (var_20_cvector - var_19_cvector) | (var_20_cvector - var_19_cvector);
}


void func_281(int var_41_int)
{
	int var_44_int; bool var_45_bool;
	var_44_int = 0;
	
	for(;;) {
		string var_47_string; int var_48_int;
		var_44_int = var_48_int;
		func_274(var_47_string, var_48_int);
		@HasAnimation(var_45_bool, "all", var_47_string);
		if(!var_45_bool) //@nz
			break;
		var_44_int += 1;
	}
	var_44_int = var_41_int;
}


void func_252(bool var_18_bool)
{
	bool var_20_bool;
	@IsLoaded(var_20_bool);
	var_20_bool = var_18_bool;
}


void func_158(void)
{
	int var_34_int; int var_35_int; bool var_36_bool; float var_37_float; bool var_38_bool;
	@WaitForAnimEnd();
	bool var_39_bool;
	func_252(var_39_bool);
	if(!var_39_bool) //@nz
		return 14;
	int var_41_int;
	func_281(var_41_int);
	int var_32_int;
	var_41_int = var_32_int;
	int var_33_int = 0;
	
	for(;;) {
		bool var_54_bool = false;
		if(var_33_int < 5) {
			bool var_57_bool;
			func_252(var_57_bool);
			if(var_57_bool != 0)
				var_54_bool = true;
		}
		if(var_54_bool != 0) {
			@irand(var_34_int, 3);
			if(var_34_int == 0) {
				if(var_32_int == 0) goto Label_205;
				@irand(var_35_int, var_32_int);
				string var_63_string; int var_64_int;
				var_35_int = var_64_int;
				func_274(var_63_string, var_64_int);
				@PlayAnimation("all", var_63_string);
				@WaitForAnimEnd(var_36_bool);
				if(!var_36_bool) { //@nz
				} else {
			} else {
			if(var_34_int == 1) {
				@rand(var_37_float, 4);
				@Sleep((var_37_float + 1), var_38_bool);
				if(!var_38_bool) { //@nz
					goto Label_234;
				}
			} else if(var_33_int != 0) {
				goto Label_234;
			}
			}
					bool var_66_bool;
					func_237(var_66_bool);
					var_67_bool = !var_66_bool; //@nz
					if(var_67_bool == 0) goto Label_229;
			}
		}
	Label_234:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_229:
		@ResetAAS();
		var_33_int += 1;
	}
	
}


