// @GLOBALS: 0:object:

maintask task_0
{
	void init(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool)
	{
		func_6((float)300, (float)100);
	}

	// @pe
	void OnTrigger(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, string var_6_string)
	{
		if(var_6_string == "cleanup")
			func_31(var_6_string);
	}

	void OnLoad(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool)
	{
		@StopGroup0();
		@sync();
	}

	// @pe
	void OnUnload(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool)
	{
		func_150(var_4_object, var_5_bool);
		bool var_9_bool = false;
		if(var_5_bool != 0) {
			bool var_11_bool;
			func_83(var_11_bool);
			if(var_11_bool != 0)
				var_9_bool = true;
		}
		if(var_9_bool != 0) {
			object var_12_object;
			func_274(var_12_object);
			@RemoveActor(var_12_object);
		}
	}

	// @pe
	void OnTimer(int iID, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, bool var_5_bool, int var_6_int)
	{
		if(var_6_int == 10) {
			bool var_9_bool;
			func_112(var_4_object, var_5_bool, var_6_int, var_9_bool);
			if(var_9_bool != 0) {
				if(!var_2_bool) { //@nz
					func_263(var_4_object);
					var_2_bool = true;
				}
			} else if(var_2_bool != 0) {
				@UnlookAsync("head");
				var_2_bool = false;
			}
		}
	
	}

}


void func_258(bool var_10_bool)
{
	bool var_12_bool;
	@IsLoaded(var_12_bool);
	var_12_bool = var_10_bool;
}


void func_164(void)
{
	int var_33_int; int var_34_int; bool var_35_bool; float var_36_float; bool var_37_bool;
	@WaitForAnimEnd();
	bool var_38_bool;
	func_258(var_38_bool);
	if(!var_38_bool) //@nz
		return 14;
	int var_40_int;
	func_287(var_40_int);
	int var_31_int;
	var_40_int = var_31_int;
	int var_32_int = 0;
	
	for(;;) {
		bool var_53_bool = false;
		if(var_32_int < 5) {
			bool var_56_bool;
			func_258(var_56_bool);
			if(var_56_bool != 0)
				var_53_bool = true;
		}
		if(var_53_bool != 0) {
			@irand(var_33_int, 3);
			if(var_33_int == 0) {
				if(var_31_int == 0) goto Label_211;
				@irand(var_34_int, var_31_int);
				string var_62_string; int var_63_int;
				var_34_int = var_63_int;
				func_280(var_62_string, var_63_int);
				@PlayAnimation("all", var_62_string);
				@WaitForAnimEnd(var_35_bool);
				if(!var_35_bool) { //@nz
				} else {
			} else {
			if(var_33_int == 1) {
				@rand(var_36_float, 4);
				@Sleep((var_36_float + 1), var_37_bool);
				if(!var_37_bool) { //@nz
					goto Label_240;
				}
			} else if(var_32_int != 0) {
				goto Label_240;
			}
			}
					bool var_65_bool;
					func_243(var_65_bool);
					var_66_bool = !var_65_bool; //@nz
					if(var_66_bool == 0) goto Label_235;
			}
		}
	Label_240:
		for(;;) {
			@ResetAAS();
			return 14;

		}

	Label_235:
		@ResetAAS();
		var_32_int += 1;
	}
	
}


void func_287(int var_40_int)
{
	int var_43_int; bool var_44_bool;
	var_43_int = 0;
	
	for(;;) {
		string var_46_string; int var_47_int;
		var_43_int = var_47_int;
		func_280(var_46_string, var_47_int);
		@HasAnimation(var_44_bool, "all", var_46_string);
		if(!var_44_bool) //@nz
			break;
		var_43_int += 1;
	}
	var_43_int = var_40_int;
}


void func_6(float var_6_float, float var_7_float)
{
	
Label_7:
	for(;;) {
		bool var_10_bool;
		func_258(var_10_bool);
		var_13_bool = !var_10_bool; //@nz
		if(var_13_bool == 0) goto Label_15;
		@Hold();
	}
	
Label_15:
	float var_9_float;
	@rand(var_9_float, 3);
	@Sleep(var_9_float + 3);
	float var_17_float; float var_18_float;
	float var_8_float;
	func_85(var_5_bool, var_17_float, var_18_float, var_8_float, var_9_float, var_17_float, var_18_float);
	@sync();
	goto Label_7;
}
EMIT "Return(); Pop(2)";


void func_263(object var_23_object)
{
	float var_26_float;
	var_23_object->GetEyesHeight(var_26_float);
	cvector var_27_cvector = [0.0, 0.0, 0.0];
	var_28_float = GetByIndex(var_27_cvector, 1);
	var_26_float = var_28_float;
	SetByIndex(var_27_cvector, 1) = var_28_float;
	@LookAsync(var_23_object, "head", var_27_cvector);
}


void func_112(int var_0_int, int var_1_int, object var_4_object, bool var_9_bool)
{
	if(var_4_object == null)
		var_9_bool = false;
	float var_13_float;
	func_250(var_13_float, var_4_object);
	float var_11_float = sqrt(var_13_float);
	if(var_2_bool != 0)
		var_11_float -= var_1_int;
	var_9_bool = var_11_float < var_0_int;
}


void func_274(object var_12_object)
{
	object var_14_object;
	@self(var_14_object);
	var_14_object = var_12_object;
}
EMIT "Stack[-1] = 0";


void func_83(bool var_11_bool)
{
	var_11_bool = true;
}


void func_243(bool var_65_bool)
{
	var_65_bool = true;
}


// @pe
void func_85(int var_0_int, int var_1_int, bool var_2_bool, bool var_3_bool, object var_4_object, float var_17_float, float var_18_float)
{
	bool var_19_bool;
	func_258(var_19_bool);
	if(!var_19_bool) //@nz
		return 0;
	@FindActor(var_4_object, "player");
	var_2_bool = false;
	var_0_int = var_17_float;
	var_1_int = var_18_float;
	@SetTimer(10, 1.0);
	func_164();
	if(!false) //@nz
		@KillTimer(10);
}


// @pe
void func_150(bool var_2_bool, bool var_3_bool)
{
	func_245();
	@KillTimer(10);
	if(var_2_bool != 0) {
		@UnlookAsync("head");
		var_2_bool = false;
	}
	var_3_bool = true;
}


void func_245(void)
{
	@StopAnimation();
	@StopGroup0();
}


void func_280(string var_46_string, int var_47_int)
{
	string var_49_string = "idle";
	if(var_47_int != 0)
		var_49_string += var_47_int;
	var_49_string = var_46_string;
}


void func_250(float var_13_float, object var_14_object)
{
	cvector var_18_cvector;
	@GetPosition(var_18_cvector);
	cvector var_19_cvector;
	var_14_object->GetPosition(var_19_cvector);
	var_13_float = (var_19_cvector - var_18_cvector) | (var_19_cvector - var_18_cvector);
}


void func_31(bool var_5_bool)
{
	var_5_bool = true;
	bool var_10_bool;
	@IsLoaded(var_10_bool);
	bool var_11_bool = false;
	if(!var_10_bool) { //@nz
		bool var_13_bool;
		func_83(var_13_bool);
		if(var_13_bool != 0)
			var_11_bool = true;
	}
	if(var_11_bool != 0) {
		object var_14_object;
		func_274(var_14_object);
		@RemoveActor(var_14_object);
	}
}


