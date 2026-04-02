maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
	
		for(;;) {
			func_11(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, (float)300, (float)100);
			@Sleep(3);
		}
	}
	EMIT "Return(); Pop(0)";

	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int)
	{
		if(var_5_int == 10) {
			bool var_8_bool;
			func_38(var_3_bool, var_4_object, var_5_int, var_8_bool);
			if(var_8_bool != 0) {
				if(!var_2_bool) { //@nz
					func_170(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object)
{
	bool var_5_bool;
	func_181(var_5_bool, "quest_d2_02", "driver_unload");
}


void func_193(string var_36_string, int var_37_int)
{
	string var_39_string = "idle";
	if(var_37_int != 0)
		var_39_string += var_37_int;
	var_39_string = var_36_string;
}


void func_165(bool var_7_bool)
{
	bool var_9_bool;
	@IsLoaded(var_9_bool);
	var_9_bool = var_7_bool;
}


void func_38(int var_0_int, int var_1_int, object var_4_object, bool var_8_bool)
{
	if(var_4_object == null)
		var_8_bool = false;
	float var_12_float;
	func_157(var_12_float, var_4_object);
	float var_10_float = sqrt(var_12_float);
	if(var_2_bool != 0)
		var_10_float -= var_1_int;
	var_8_bool = var_10_float < var_0_int;
}


void func_200(int var_30_int)
{
	int var_33_int; bool var_34_bool;
	var_33_int = 0;
	
	for(;;) {
		string var_36_string; int var_37_int;
		var_33_int = var_37_int;
		func_193(var_36_string, var_37_int);
		@HasAnimation(var_34_bool, "all", var_36_string);
		if(!var_34_bool) //@nz
			break;
		var_33_int += 1;
	}
	var_33_int = var_30_int;
}


void func_170(object var_22_object)
{
	float var_25_float;
	var_22_object->GetEyesHeight(var_25_float);
	cvector var_26_cvector = [0.0, 0.0, 0.0];
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	@LookAsync(var_22_object, "head", var_26_cvector);
}


// @pe
void func_11(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_5_float, float var_6_float)
{
	bool var_7_bool;
	func_165(var_7_bool);
	if(!var_7_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_5_float;
	var_1_int = var_6_float;
	@SetTimer(10, 1.0);
	func_76();
	if(!false) //@nz
		@KillTimer(10);
}


void func_76(void)
{
	int var_23_int; int var_24_int; bool var_25_bool; float var_26_float; bool var_27_bool;
	@WaitForAnimEnd();
	bool var_28_bool;
	func_165(var_28_bool);
	if(!var_28_bool) //@nz
		return 14;
	int var_30_int;
	func_200(var_30_int);
	int var_21_int;
	var_30_int = var_21_int;
	int var_22_int = 0;
	
	for(;;) {
		bool var_43_bool = false;
		if(var_22_int < 5) {
			bool var_46_bool;
			func_165(var_46_bool);
			if(var_46_bool != 0)
				var_43_bool = true;
		}
		if(var_43_bool != 0) {
			@irand(var_23_int, 3);
			if(var_23_int == 0) {
				if(var_21_int == 0) goto Label_123;
				@irand(var_24_int, var_21_int);
				string var_52_string; int var_53_int;
				var_24_int = var_53_int;
				func_193(var_52_string, var_53_int);
				@PlayAnimation("all", var_52_string);
				@WaitForAnimEnd(var_25_bool);
				if(!var_25_bool) { //@nz
				} else {
			} else {
			if(var_23_int == 1) {
				@rand(var_26_float, 4);
				@Sleep((var_26_float + 1), var_27_bool);
				if(!var_27_bool) { //@nz
					goto Label_152;
				}
			} else if(var_22_int != 0) {
				goto Label_152;
			}
			}
					bool var_55_bool;
					func_155(var_55_bool);
					var_56_bool = !var_55_bool; //@nz
					if(var_56_bool == 0) goto Label_147;
			}
		}
	Label_152:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_147:
		@ResetAAS();
		var_22_int += 1;
	}
	
}


void func_181(bool var_5_bool, string var_6_string, string var_7_string)
{
	object var_9_object;
	@FindActor(var_9_object, var_6_string);
	if(var_9_object == null)
		var_5_bool = false;
	@Trigger(var_9_object, var_7_string);
	var_5_bool = true;
}
EMIT "Stack[-1] = 0";


void func_155(bool var_55_bool)
{
	var_55_bool = true;
}


void func_157(float var_12_float, object var_13_object)
{
	cvector var_17_cvector;
	@GetPosition(var_17_cvector);
	cvector var_18_cvector;
	var_13_object->GetPosition(var_18_cvector);
	var_12_float = (var_18_cvector - var_17_cvector) | (var_18_cvector - var_17_cvector);
}


