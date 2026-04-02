// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object)
	{
	
		for(;;) {
			@Sleep(1);
			func_15(var_0_int, var_1_int, var_2_bool, var_3_bool, var_4_object, (float)300, (float)100);
		}
	}
	EMIT "Return(); Pop(0)";

	// @pe
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, object var_5_object)
	{
		func_80(var_4_object, var_5_object);
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, int var_5_int)
	{
		if(var_5_int == 10) {
			bool var_8_bool;
			func_42(var_3_bool, var_4_object, var_5_int, var_8_bool);
			if(var_8_bool != 0) {
				if(!var_2_bool) { //@nz
					func_193(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


void func_193(object var_22_object)
{
	float var_25_float;
	var_22_object->GetEyesHeight(var_25_float);
	cvector var_26_cvector = [0.0, 0.0, 0.0];
	var_27_float = GetByIndex(var_26_cvector, 1);
	var_25_float = var_27_float;
	SetByIndex(var_26_cvector, 1) = var_27_float;
	@LookAsync(var_22_object, "head", var_26_cvector);
}


void func_42(int var_0_int, int var_1_int, object var_4_object, bool var_8_bool)
{
	if(var_4_object == null)
		var_8_bool = false;
	float var_12_float;
	func_180(var_12_float, var_4_object);
	float var_10_float = sqrt(var_12_float);
	if(var_2_bool != 0)
		var_10_float -= var_1_int;
	var_8_bool = var_10_float < var_0_int;
}


void func_204(string var_37_string, int var_38_int)
{
	string var_40_string = "idle";
	if(var_38_int != 0)
		var_40_string += var_38_int;
	var_40_string = var_37_string;
}


void func_173(bool var_56_bool)
{
	var_56_bool = true;
}


// @pe
void func_15(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_6_float, float var_7_float)
{
	bool var_8_bool;
	func_188(var_8_bool);
	if(!var_8_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_6_float;
	var_1_int = var_7_float;
	@SetTimer(10, 1.0);
	func_94();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_80(bool var_2_bool, bool var_3_bool)
{
	func_175();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_175(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_211(int var_31_int)
{
	int var_34_int; bool var_35_bool;
	var_34_int = 0;
	
	for(;;) {
		string var_37_string; int var_38_int;
		var_34_int = var_38_int;
		func_204(var_37_string, var_38_int);
		@HasAnimation(var_35_bool, "all", var_37_string);
		if(!var_35_bool) //@nz
			break;
		var_34_int += 1;
	}
	var_34_int = var_31_int;
}


void func_180(float var_12_float, object var_13_object)
{
	cvector var_17_cvector;
	@GetPosition(var_17_cvector);
	cvector var_18_cvector;
	var_13_object->GetPosition(var_18_cvector);
	var_12_float = (var_18_cvector - var_17_cvector) | (var_18_cvector - var_17_cvector);
}


void func_188(bool var_8_bool)
{
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	var_10_bool = var_8_bool;
}


void func_94(void)
{
	int var_24_int; int var_25_int; bool var_26_bool; float var_27_float; bool var_28_bool;
	@WaitForAnimEnd();
	bool var_29_bool;
	func_188(var_29_bool);
	if(!var_29_bool) //@nz
		return 14;
	int var_31_int;
	func_211(var_31_int);
	int var_22_int;
	var_31_int = var_22_int;
	int var_23_int = 0;
	
	for(;;) {
		bool var_44_bool = false;
		if(var_23_int < 5) {
			bool var_47_bool;
			func_188(var_47_bool);
			if(var_47_bool != 0)
				var_44_bool = true;
		}
		if(var_44_bool != 0) {
			@irand(var_24_int, 3);
			if(var_24_int == 0) {
				if(var_22_int == 0) goto Label_141;
				@irand(var_25_int, var_22_int);
				string var_53_string; int var_54_int;
				var_25_int = var_54_int;
				func_204(var_53_string, var_54_int);
				@PlayAnimation("all", var_53_string);
				@WaitForAnimEnd(var_26_bool);
				if(!var_26_bool) { //@nz
				} else {
			} else {
			if(var_24_int == 1) {
				@rand(var_27_float, 4);
				@Sleep((var_27_float + 1), var_28_bool);
				if(!var_28_bool) { //@nz
					goto Label_170;
				}
			} else if(var_23_int != 0) {
				goto Label_170;
			}
			}
					bool var_56_bool;
					func_173(var_56_bool);
					var_57_bool = !var_56_bool; //@nz
					if(var_57_bool == 0) goto Label_165;
			}
		}
	Label_170:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_165:
		@ResetAAS();
		var_23_int += 1;
	}
	
}


