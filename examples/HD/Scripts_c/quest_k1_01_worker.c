// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool)
	{
		float var_8_float;
		@GetGameTime(var_8_float);
		if(var_8_float >= 24) {
			string var_11_string = "cleanup";
			func_70();
		} else {
			@SetTimeEvent(0, 24);
		}
		func_32(var_8_float, (float)300, (float)100);
	
	}

	// @pe
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, object var_7_object)
	{
		func_166(var_6_bool, var_7_object);
	}

	// @pe
	void OnGameTime(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int, float var_8_float)
	{
		string var_9_string = "cleanup";
		func_70();
	}

	// @pe
		void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, float var_7_float, float var_8_float, string var_11_string)
		{
		if(var_11_string == "cleanup")
			func_50(var_11_string);
		}

	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool)
	{
		if(var_6_bool != 0)
			func_166(var_5_bool, var_6_bool);
		bool var_11_bool = false;
		if(var_5_bool != 0) {
			bool var_13_bool;
			func_99(var_13_bool);
			if(var_13_bool != 0)
				var_11_bool = true;
		}
		if(var_11_bool != 0) {
			object var_14_object;
			func_290(var_14_object);
			@RemoveActor(var_14_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, bool var_6_bool, int var_7_int)
	{
		if(var_7_int == 10) {
			bool var_10_bool;
			func_128(var_5_bool, var_6_bool, var_7_int, var_10_bool);
			if(var_10_bool != 0) {
				if(!var_2_bool) { //@nz
					func_279(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


void func_32(bool var_6_bool, float var_23_float, float var_24_float)
{
	float var_25_float; bool var_26_bool; float var_27_float; bool var_28_bool;
	var_6_bool = false;
	
	for(;;) {
		@rand(var_27_float, 3);
		@Sleep((var_27_float + 3), var_28_bool);
		var_6_bool = true;
		float var_32_float; float var_33_float;
		var_23_float = var_32_float;
		func_101(var_33_float, var_25_float, var_26_bool, var_27_float, var_28_bool, var_32_float, var_33_float);
		var_6_bool = false;
	}
}
EMIT "Return(); Pop(4)";


void func_128(int var_0_int, int var_1_int, object var_4_object, bool var_10_bool)
{
	if(var_4_object == null)
		var_10_bool = false;
	float var_14_float;
	func_266(var_14_float, var_4_object);
	float var_12_float = sqrt(var_14_float);
	if(var_2_bool != 0)
		var_12_float -= var_1_int;
	var_10_bool = var_12_float < var_0_int;
}


void func_290(object var_20_object)
{
	object var_22_object;
	@self(var_22_object);
	var_22_object = var_20_object;
}
EMIT "Stack[-1] = 0";


void func_99(bool var_19_bool)
{
	var_19_bool = true;
}


void func_259(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_101(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_32_float, float var_33_float)
{
	bool var_34_bool;
	func_274(var_34_bool);
	if(!var_34_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_32_float;
	var_1_int = var_33_float;
	@SetTimer(10, 1.0);
	func_180();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_166(bool var_2_bool, bool var_3_bool)
{
	func_261();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_261(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_296(string var_61_string, int var_62_int)
{
	string var_64_string = "idle";
	if(var_62_int != 0)
		var_64_string += var_62_int;
	var_64_string = var_61_string;
}


void func_266(float var_14_float, object var_15_object)
{
	cvector var_19_cvector;
	@GetPosition(var_19_cvector);
	cvector var_20_cvector;
	var_15_object->GetPosition(var_20_cvector);
	var_14_float = (var_20_cvector - var_19_cvector) | (var_20_cvector - var_19_cvector);
}


void func_303(int var_55_int)
{
	int var_58_int; bool var_59_bool;
	var_58_int = 0;
	
	for(;;) {
		string var_61_string; int var_62_int;
		var_58_int = var_62_int;
		func_296(var_61_string, var_62_int);
		@HasAnimation(var_59_bool, "all", var_61_string);
		if(!var_59_bool) //@nz
			break;
		var_58_int += 1;
	}
	var_58_int = var_55_int;
}


void func_274(bool var_15_bool)
{
	bool var_17_bool;
	@IsLoaded(var_17_bool);
	var_17_bool = var_15_bool;
}


void func_50(bool var_5_bool)
{
	var_5_bool = true;
	bool var_14_bool = false;
	bool var_15_bool;
	func_274(var_15_bool);
	if(!var_15_bool) { //@nz
		bool var_19_bool;
		func_99(var_19_bool);
		if(var_19_bool != 0)
			var_14_bool = true;
	}
	if(var_14_bool != 0) {
		object var_20_object;
		func_290(var_20_object);
		@RemoveActor(var_20_object);
	}
}


void func_180(void)
{
	int var_48_int; int var_49_int; bool var_50_bool; float var_51_float; bool var_52_bool;
	@WaitForAnimEnd();
	bool var_53_bool;
	func_274(var_53_bool);
	if(!var_53_bool) //@nz
		return 14;
	int var_55_int;
	func_303(var_55_int);
	int var_46_int;
	var_55_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_68_bool = false;
		if(var_47_int < 5) {
			bool var_71_bool;
			func_274(var_71_bool);
			if(var_71_bool != 0)
				var_68_bool = true;
		}
		if(var_68_bool != 0) {
			@irand(var_48_int, 3);
			if(var_48_int == 0) {
				if(var_46_int == 0) goto Label_227;
				@irand(var_49_int, var_46_int);
				string var_77_string; int var_78_int;
				var_49_int = var_78_int;
				func_296(var_77_string, var_78_int);
				@PlayAnimation("all", var_77_string);
				@WaitForAnimEnd(var_50_bool);
				if(!var_50_bool) { //@nz
				} else {
			} else {
			if(var_48_int == 1) {
				@rand(var_51_float, 4);
				@Sleep((var_51_float + 1), var_52_bool);
				if(!var_52_bool) { //@nz
					goto Label_256;
				}
			} else if(var_47_int != 0) {
				goto Label_256;
			}
			}
					bool var_80_bool;
					func_259(var_80_bool);
					var_81_bool = !var_80_bool; //@nz
					if(var_81_bool == 0) goto Label_251;
			}
		}
	Label_256:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_251:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_279(object var_24_object)
{
	float var_27_float;
	var_24_object->GetEyesHeight(var_27_float);
	cvector var_28_cvector = [0.0, 0.0, 0.0];
	var_29_float = GetByIndex(var_28_cvector, 1);
	var_27_float = var_29_float;
	SetByIndex(var_28_cvector, 1) = var_29_float;
	@LookAsync(var_24_object, "head", var_28_cvector);
}


