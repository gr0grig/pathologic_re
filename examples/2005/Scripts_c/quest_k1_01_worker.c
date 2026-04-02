// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool)
	{
		float var_7_float;
		@GetGameTime(var_7_float);
		if(var_7_float >= 24) {
			string var_10_string = "cleanup";
			func_77();
		} else {
			@SetTimeEvent(0, 24);
		}
		func_32((float)300, (float)100);
	
	}

	// @pe
	void OnUse(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, object var_6_object)
	{
		func_176(var_5_bool, var_6_object);
	}

	// @pe
	void OnGameTime(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, int var_6_int, float var_7_float)
	{
		string var_8_string = "cleanup";
		func_77();
	}

	// @pe
		void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, float var_6_float, float var_7_float, string var_10_string)
		{
		if(var_10_string == "cleanup")
			func_57(var_10_string);
		}

	void OnLoad(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool)
	{
		func_176(var_4_object, var_5_bool);
		bool var_9_bool = false;
		if(var_5_bool != 0) {
			bool var_11_bool;
			func_109(var_11_bool);
			if(var_11_bool != 0)
				var_9_bool = true;
		}
		if(var_9_bool != 0) {
			object var_12_object;
			func_300(var_12_object);
			@RemoveActor(var_12_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, int var_6_int)
	{
		if(var_6_int == 10) {
			bool var_9_bool;
			func_138(var_4_object, var_5_bool, var_6_int, var_9_bool);
			if(var_9_bool != 0) {
				if(!var_2_bool) { //@nz
					func_289(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


void func_32(float var_21_float, float var_22_float)
{
	
Label_33:
	for(;;) {
		bool var_25_bool;
		func_284(var_25_bool);
		var_28_bool = !var_25_bool; //@nz
		if(var_28_bool == 0) goto Label_41;
		@Hold();
	}
	
Label_41:
	float var_24_float;
	@rand(var_24_float, 3);
	@Sleep(var_24_float + 3);
	float var_32_float; float var_33_float;
	float var_23_float;
	func_111(var_7_float, var_32_float, var_33_float, var_23_float, var_24_float, var_32_float, var_33_float);
	@sync();
	goto Label_33;
}
EMIT "Return(); Pop(2)";


void func_289(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_138(int var_0_int, int var_1_int, object var_4_object, bool var_9_bool)
{
	if(var_4_object == null)
		var_9_bool = false;
	float var_13_float;
	func_276(var_13_float, var_4_object);
	float var_11_float = sqrt(var_13_float);
	if(var_2_bool != 0)
		var_11_float -= var_1_int;
	var_9_bool = var_11_float < var_0_int;
}


void func_300(object var_18_object)
{
	object var_20_object;
	@self(var_20_object);
	var_20_object = var_18_object;
}
EMIT "Stack[-1] = 0";


void func_109(bool var_17_bool)
{
	var_17_bool = true;
}


void func_269(bool var_80_bool)
{
	var_80_bool = true;
}


// @pe
void func_111(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_32_float, float var_33_float)
{
	bool var_34_bool;
	func_284(var_34_bool);
	if(!var_34_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_32_float;
	var_1_int = var_33_float;
	@SetTimer(10, 1.0);
	func_190();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_176(bool var_2_bool, bool var_3_bool)
{
	func_271();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_271(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_306(string var_61_string, int var_62_int)
{
	string var_64_string = "idle";
	if(var_62_int != 0)
		var_64_string += var_62_int;
	var_64_string = var_61_string;
}


void func_276(float var_13_float, object var_14_object)
{
	cvector var_18_cvector;
	@GetPosition(var_18_cvector);
	cvector var_19_cvector;
	var_14_object->GetPosition(var_19_cvector);
	var_13_float = (var_19_cvector - var_18_cvector) | (var_19_cvector - var_18_cvector);
}


void func_313(int var_55_int)
{
	int var_58_int; bool var_59_bool;
	var_58_int = 0;
	
	for(;;) {
		string var_61_string; int var_62_int;
		var_58_int = var_62_int;
		func_306(var_61_string, var_62_int);
		@HasAnimation(var_59_bool, "all", var_61_string);
		if(!var_59_bool) //@nz
			break;
		var_58_int += 1;
	}
	var_58_int = var_55_int;
}


void func_284(bool var_25_bool)
{
	bool var_27_bool;
	@IsLoaded(var_27_bool);
	var_27_bool = var_25_bool;
}


void func_190(void)
{
	int var_48_int; int var_49_int; bool var_50_bool; float var_51_float; bool var_52_bool;
	@WaitForAnimEnd();
	bool var_53_bool;
	func_284(var_53_bool);
	if(!var_53_bool) //@nz
		return 14;
	int var_55_int;
	func_313(var_55_int);
	int var_46_int;
	var_55_int = var_46_int;
	int var_47_int = 0;
	
	for(;;) {
		bool var_68_bool = false;
		if(var_47_int < 5) {
			bool var_71_bool;
			func_284(var_71_bool);
			if(var_71_bool != 0)
				var_68_bool = true;
		}
		if(var_68_bool != 0) {
			@irand(var_48_int, 3);
			if(var_48_int == 0) {
				if(var_46_int == 0) goto Label_237;
				@irand(var_49_int, var_46_int);
				string var_77_string; int var_78_int;
				var_49_int = var_78_int;
				func_306(var_77_string, var_78_int);
				@PlayAnimation("all", var_77_string);
				@WaitForAnimEnd(var_50_bool);
				if(!var_50_bool) { //@nz
				} else {
			} else {
			if(var_48_int == 1) {
				@rand(var_51_float, 4);
				@Sleep((var_51_float + 1), var_52_bool);
				if(!var_52_bool) { //@nz
					goto Label_266;
				}
			} else if(var_47_int != 0) {
				goto Label_266;
			}
			}
					bool var_80_bool;
					func_269(var_80_bool);
					var_81_bool = !var_80_bool; //@nz
					if(var_81_bool == 0) goto Label_261;
			}
		}
	Label_266:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_261:
		@ResetAAS();
		var_47_int += 1;
	}
	
}


void func_57(bool var_5_bool)
{
	var_5_bool = true;
	bool var_14_bool;
	@IsLoaded(var_14_bool);
	bool var_15_bool = false;
	if(!var_14_bool) { //@nz
		bool var_17_bool;
		func_109(var_17_bool);
		if(var_17_bool != 0)
			var_15_bool = true;
	}
	if(var_15_bool != 0) {
		object var_18_object;
		func_300(var_18_object);
		@RemoveActor(var_18_object);
	}
}


